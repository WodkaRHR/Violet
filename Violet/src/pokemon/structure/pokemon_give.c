/*
 * pokemon_give.c
 *
 *  Created on: Oct 1, 2018
 *      Author: dominik
 */
#include "agbmemory.h"
#include "constants/pokemon_attributes.h"
#include "pokemon/virtual.h"
#include "types.h"

int pokemon_give_with_player_not_ot(pokemon *p) {
    // Try to set in the team
    for (int i = 0; i < 6; i++) {
        if (pokemon_get_attribute(&player_pokemon[i], ATTRIBUTE_SPECIES, NULL) == 0) {
            memcpy(&player_pokemon[i], p, sizeof(pokemon));
            player_pokemon_cnt++;
            return 0;
        }
    }
    return pokemon_to_box(p);
}

void pokemon_set_hidden_ability(box_pokemon *p) {
    int hp_ev_earned = box_pokemon_get_attribute(p, ATTRIBUTE_COOLNESS, NULL);
    hp_ev_earned |= 0x80;
    box_pokemon_set_attribute(p, ATTRIBUTE_COOLNESS, &hp_ev_earned);
}
