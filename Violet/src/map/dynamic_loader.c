#include "types.h"
#include "map/header.h"
#include "save.h"
#include "dungeon/dungeon2.h"
#include "dungeon/forest.h"
#include "dungeon/cave.h"
#include "dungeon/ocean.h"
#include "debug.h"
#include "constants/map_weathers.h"
#include "map/footer.h"
#include "agbmemory.h"
#include "prng.h"
#include "vars.h"
#include "bios.h"
#include "tile/block.h"
#include "oam.h"

EWRAM map_header_t dynamic_map_header = {0};
EWRAM map_footer_t dynamic_map_footer = {0};
EWRAM map_event_header_t dynamic_map_event_header = {0};
EWRAM map_event_person dynamic_persons[NUM_DYNAMIC_PERSONS] = {0};
EWRAM map_event_warp dynamic_warps[NUM_DYNAMIC_WARPS] = {0};
EWRAM wild_pokemon_data dynamic_wild_pokemon = {0};
EWRAM wild_pokemon_habitat dynamic_wild_pokemon_habitat_grass = {0};
EWRAM wild_pokemon_habitat dynamic_wild_pokemon_habitat_water = {0};
EWRAM wild_pokemon_habitat dynamic_wild_pokemon_habitat_radar = {0};
EWRAM wild_pokemon_habitat dynamic_wild_pokemon_habitat_rod = {0};
EWRAM wild_pokemon_entry dynamic_wild_pokemon_entries_grass[WILD_POKEMON_NUM_ENTRIES_GRASS] = {0};
EWRAM wild_pokemon_entry dynamic_wild_pokemon_entries_water[WILD_POKEMON_NUM_ENTRIES_WATER] = {0};
EWRAM wild_pokemon_entry dynamic_wild_pokemon_entries_rod[WILD_POKEMON_NUM_ENTRIES_ROD + WILD_POKEMON_NUM_ENTRIES_GOOD_ROD + WILD_POKEMON_NUM_ENTRIES_SUPER_ROD] = {0};
EWRAM wild_pokemon_entry dynamic_wild_pokemon_entries_radar[WILD_POKEMON_NUM_ENTRIES_OTHER] = {0};

const map_connection_header_t dungeon2_connections = {0, NULL};


const levelscript_header_t dungeon2_lscr [] = {
    {0, {0, 0, 0, 0} }
};

void map_initialize_blocks(map_header_t *header) {
    const map_footer_t *footer = header->footer;
    int fill = 0x03FF03FF;
    cpufastset(&fill, map_changes, CPUFASTSET_FILL | CPUFASTSET_SIZE(sizeof(map_changes)));
    map_blocks_virtual.blocks = map_changes;
    map_blocks_virtual.width = (int)footer->width + 15;
    map_blocks_virtual.height = (int)footer->height + 14;
    if (header->footer_idx == DG2_FOOTER_IDX) {
        dungeon_generator2 *dg2 = &csave.dg2;
        map_copy_blocks_to_virtual_blocks_with_padding(save1->dungeon_blocks, (u16)dg2->width, (u16)dg2->height);
    } else {   
        map_copy_blocks_to_virtual_blocks_with_padding((u16*)footer->map, (u16)footer->width, (u16)footer->height);
    }
    map_copy_adjacent_maps_to_virtual_blocks(header);
}

const map_header_t *get_mapheader(u8 bank, u8 map) {
    if (dungeon_get_type() && bank == DG2_BANK && map == DG2_MAP) {
        if (!dmap_flags.header_initialized) {
            switch(dungeon_get_type()) {
                case DTYPE_FOREST:
                    dungeon2_initialize_forest();
                    break;
                case DTYPE_CAVE:
                    dungeon2_initialize_cave();
                    break;
            }
        }
        return &(dynamic_map_header);
    } else {
        return mapbanks[bank][map];
    }
}

const map_footer_t *get_mapfooter() {
    if (save1->current_footer_id == DG2_FOOTER_IDX) {
        return &(dynamic_map_footer);
    }
    u16 current_footer = save1->current_footer_id;
    if (current_footer) {
        return mapfooters[current_footer - 1];
    }
    return NULL;
}

int dungeon_get_type() {
    u16 *dtype = var_access(DUNGEON_TYPE);
    return *dtype;
}
