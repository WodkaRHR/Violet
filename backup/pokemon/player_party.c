#include "types.h"
#include "stdbool.h"
#include "pokemon/virtual.h"
#include "constants/pokemon_attributes.h"
#include "bios.h"
#include "vars.h"
#include "agbmemory.h"


void pokemon_heal(pokemon *dst) {
    int max_hp = pokemon_get_attribute(dst, ATTRIBUTE_TOTAL_HP, 0);
    pokemon_set_attribute(dst, ATTRIBUTE_CURRENT_HP, &max_hp);
    u8 pp_ups = (u8)pokemon_get_attribute(dst, ATTRIBUTE_PP_BONUSES, 0);
    for (u8 i = 0; i < 4; i++) {
        u16 move = (u16)pokemon_get_attribute(dst, (u8)(ATTRIBUTE_ATTACK1 + i), 0);
        int max_pp = attack_get_pp(move, pp_ups, i);
        pokemon_set_attribute(dst, (u8)(ATTRIBUTE_PP1 + i), &max_pp);
    }
    int status = 0;
    pokemon_set_attribute(dst, ATTRIBUTE_STATUS, &status);
}

bool pokemon_is_healed(pokemon *dst) {
    if (pokemon_get_attribute(dst, ATTRIBUTE_CURRENT_HP, 0) != pokemon_get_attribute(dst, ATTRIBUTE_TOTAL_HP, 0)) {
        return false;
    }
    u8 pp_ups = (u8)pokemon_get_attribute(dst, ATTRIBUTE_PP_BONUSES, 0);
    for (u8 i = 0; i < 4; i++) {
        u16 move = (u16)pokemon_get_attribute(dst, (u8)(ATTRIBUTE_ATTACK1 + i), 0);
        int max_pp = attack_get_pp(move, pp_ups, i);
        if (pokemon_get_attribute(dst, (u8)(ATTRIBUTE_PP1 + i), 0) != max_pp) {
            return false;
        }
    }
    return pokemon_get_attribute(dst, ATTRIBUTE_STATUS, 0) == 0;
}

void player_party_heal() {
    for (int i = 0; i < player_pokemon_cnt; i++) {
        pokemon_heal(&player_pokemon[i]);
    }
}

void special_player_party_heal_index() {
    pokemon_heal(&player_pokemon[*var_access(0x8004)]);
}