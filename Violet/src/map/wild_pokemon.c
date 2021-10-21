#include "map/wild_pokemon.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "constants/wild_pokemon_densities.h"
#include "data/wild_pokemon.h"
#include "debug.h"
#include "dungeon/dungeon2.h"
#include "flags.h"
#include "overworld/map_control.h"
#include "overworld/script.h"
#include "pokemon/roamer.h"
#include "prng.h"
#include "save.h"
#include "tile/block.h"
#include "types.h"
#include "vars.h"

extern u8 ow_script_trainerschool_wildbattle[];

u16 map_wild_pokemon_get_current_table_id() {
    if (!wild_pokemon_get_current_unown_letters() || checkflag(FLAG_UNOWN_ENABLED)) {
        for (u16 i = 0; wild_pokemon[i].bank != 0xFF; i++) {
            if (wild_pokemon[i].bank == save1->bank &&
                wild_pokemon[i].map == save1->map)
                return i;
        }
    }
    return 0xFFFF;
}

wild_pokemon_data *map_wild_pokemon_get_current() {
    if (dungeon_get_type() && save1->bank == DG2_BANK && save1->map == DG2_MAP) {
        return &(fmem.dwild_pokemon);
    } else {
        u16 idx = map_wild_pokemon_get_current_table_id();
        if (idx == 0xFFFF)
            return NULL;
        return &(wild_pokemon[idx]);
    }
}

u8 map_wildbattle_init_seed(u32 triggers_wildbattle) {
    wild_pokemon_data *header = map_wild_pokemon_get_current();
    u8 frequency;
    switch (triggers_wildbattle) {
        case TRIGGERS_WILDBATTLE_GRASS:
            frequency = header->grass->frequency;
            break;
        case TRIGGERS_WILDBATTLE_WATER:
            frequency = header->water->frequency;
            break;
        default:
            return 0xFF;
    }
    if (!frequency)
        return 0xFF;
    if (frequency >= 80)
        return 0;
    if (frequency <= 9)
        return 8;
    u8 result = (u8)(8 - (frequency / 10));
    // dprintf("Result is %d\n", result);
    return result;
}

int map_wildbattle_init(bdata current, u16 behaviour_previous_tile) {
    if (wild_pokemon_disabled)
        return 0;
    if (*var_access(TRAINERSCHOOL_PROGRESS) <= 5)
        return 0; // Can not encounter until >= 6
    if (!checkflag(POKERADAR_POKEMON_SPAWNED))
        return 0; // Can not encounter while the radar has spawned a pokémon.
    wild_pokemon_data *wild_pokemon_header = map_wild_pokemon_get_current();
    u8 pdf_type;
    u32 triggers_wildbattle = block_get_field(current, BDATA_TRIGGERS_WILDBATTLE);
    wild_pokemon_habitat *habitat = NULL;
    switch (triggers_wildbattle) {
        case TRIGGERS_WILDBATTLE_GRASS: {
            habitat = wild_pokemon_header->grass;
            pdf_type = 0;
            break;
        }
        case TRIGGERS_WILDBATTLE_WATER: {
            if (!overworld_flag_get(8))
                return 0;
            habitat = wild_pokemon_header->water;
            pdf_type = 1;
            break;
        }
        default:
            return 0;
    }

    if (!habitat)
        return 0;
    u32 behaviour = block_get_field(current, BDATA_BEHAVIOUR);
    // With 40% entering a new "patch" does not provide an encounter
    if (behaviour != behaviour_previous_tile && (rnd16() % 100) >= 60)
        return 0;
    if (!wildbattle_does_pokemon_appear_by_frequency(habitat->frequency, 0)) {
        wildbattle_increase_chance(habitat->frequency);
        return 0;
    }
    // Check if a roamer appears
    if (wild_pokemon_spawn_roamer()) {
        dprintf("Roamer to be spawned, allowed by repel %d\n", wildbattle_is_allowed_by_repel(ROAMER_LEVEL));
        if (wildbattle_is_allowed_by_repel(ROAMER_LEVEL)) {
            battle_initialize_roamer();
            return true;
        }
    }

    if (!wildbattle_initialize_by_habitat(habitat, pdf_type, true)) {
        wildbattle_increase_chance(habitat->frequency);
        return 0;
    }
    if (*var_access(TRAINERSCHOOL_PROGRESS) <= 6) {
        // Start a wildbattle script instead
        dprintf("Started script\n");
        overworld_script_init(ow_script_trainerschool_wildbattle);
    } else {
        wildbattle_start();
    }
    return 1;
}

bool wildbattle_initialize_by_habitat(wild_pokemon_habitat *habitat, int pdf_type,
                                      bool consider_repel) {
    int idx = -1;
    switch (pdf_type) {
        case 0: {
            idx = wildbattle_sample_from_pdf(wild_pokemon_grass_pdf, WILD_POKEMON_NUM_ENTRIES_GRASS);
            break;
        }
        case 1: {
            idx = wildbattle_sample_from_pdf(wild_pokemon_water_pdf, WILD_POKEMON_NUM_ENTRIES_WATER);
            break;
        }
        case 2: {
            idx = wildbattle_sample_from_pdf(wild_pokemon_other_pdf, WILD_POKEMON_NUM_ENTRIES_OTHER);
            break;
        }
        default: {
            derrf("Unsupported pdf type %d\n", pdf_type);
            break;
        }
    }
    u8 level = wildbattle_sample_level(&(habitat->data[idx]));
    if (!consider_repel || wildbattle_is_allowed_by_repel(level)) {
        if (*var_access(STORY_PROGRESS) < 8) {
            return trainerschool_wildbattle_initialize_secondary_starter();
        }

        wild_pokemon_new(habitat->data[idx].species, level, rnd16() % NUM_UNOWN_LETTERS_PER_MAP);
        return true;
    }
    return false;
}

void wild_pokemon_new(u16 species, u8 level, int unown_letter_idx) {
    pokemon_clear_opponent_party();
    pid_t p = pokemon_new_pid();
    if (species == POKEMON_ICOGNITO) {
        p = pokemon_unown_generate_letter_pid(wild_pokemon_get_current_unown_letters()[unown_letter_idx]);
    }
    pokemon_new(opponent_pokemon, species, level, POKEMON_NEW_RANDOM_IVS, true, p, false, 0);
}

int wildbattle_sample_from_pdf(u8 *pdf, int size) {
    int p = rnd16() % 100;
    for (int i = 0; i < size; i++) {
        if (p < pdf[i])
            return i;
        p -= pdf[i];
    }
    derrf("Pdf @x, size %d does not sum up to 100\n", pdf, size);
    return -1;
}

int wildbattle_sample_from_rod_pdf(u8 rod_type) {
    u8 *pdf;
    ;
    int size;
    switch (rod_type) {
        default:
        case 0:
            return wildbattle_sample_from_pdf(wild_pokemon_rod_pdf, WILD_POKEMON_NUM_ENTRIES_ROD);
        case 1:
            return wildbattle_sample_from_pdf(wild_pokemon_good_rod_pdf, WILD_POKEMON_NUM_ENTRIES_GOOD_ROD) +
                   WILD_POKEMON_NUM_ENTRIES_ROD;
        case 2:
            return wildbattle_sample_from_pdf(wild_pokemon_super_rod_pdf, WILD_POKEMON_NUM_ENTRIES_SUPER_ROD) +
                   WILD_POKEMON_NUM_ENTRIES_ROD + WILD_POKEMON_NUM_ENTRIES_GOOD_ROD;
    }
    return wildbattle_sample_from_pdf(pdf, size);
}

u8 wild_pokemon_grass_pdf[12] = {20, 20, 10, 10, 10, 10, 5, 5, 4, 4, 1, 1};

u8 wild_pokemon_water_pdf[5] = {35, 25, 20, 15, 5};

u8 wild_pokemon_rod_pdf[2] = {70, 30};

u8 wild_pokemon_good_rod_pdf[3] = {60, 20, 20};

u8 wild_pokemon_super_rod_pdf[5] = {40, 40, 15, 4, 1};

u8 wild_pokemon_other_pdf[5] = {40, 20, 20, 10, 10};
