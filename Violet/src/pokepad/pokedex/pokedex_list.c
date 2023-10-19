#include "types.h"
#include "stdbool.h"
#include "pokepad/pokepad2.h"
#include "pokepad/pokedex/gui.h"
#include "pokepad/pokedex/operator.h"
#include "pokepad/pokedex/state.h"
#include "pokemon/names.h"
#include "pokemon/basestat.h"
#include "callbacks.h"
#include "save.h"
#include "bg.h"
#include "text.h"
#include "mega.h"
#include "color.h"
#include "superstate.h"
#include "transparency.h"
#include "language.h"
#include "fading.h"
#include "music.h"
#include "debug.h"
#include "agbmemory.h"
#include "pokemon/sprites.h"
#include "bg.h"
#include "menu_indicators.h"
#include "bios.h"

// bool pokedex_callback_list_mode_proceed() {
//     switch (pokedex_state->list_mode) {
//         case 1:
//             if (super.keys.keys.down) {
//                 if (super.keys_new_rst.keys.down)
//                     pokedex_state->list_fast_mode = true;
//                 return true;
//             }
//             break;
//         case 2:
//             if (super.keys.keys.up) {
//                 if (super.keys_new_rst.keys.up)
//                     pokedex_state->list_fast_mode = true;
//                 return true;
//             }
//             break;
//         case 3:
//             if (super.keys.keys.right) {
//                 if (super.keys_new_rst.keys.right)
//                     pokedex_state->list_fast_mode = true;
//                 return true;
//             }
//             break;
//         case 4:
//             if (super.keys.keys.left) {
//                 if (super.keys_new_rst.keys.left)
//                     pokedex_state->list_fast_mode = true;
//                 return true;
//             }
//             break;
//     }
//     return false;
// }

// void pokedex_callback_list_enter_mode(u8 mode) {
//     if (mode == 1 || mode == 3) {
//         pokedex_state->cursor_anchor = true;
//     } else if (mode == 2 || mode == 4) {
//         pokedex_state->cursor_anchor = false;
//     }
//     pokedex_state->list_mode = mode;
//     pokedex_state->list_fast_mode = false;
// }

// void pokedex_callback_list() {
//     generic_callback1();

//     if (super.keys_new.keys.down) {
//         pokedex_callback_list_enter_mode(1);
//     } else if (super.keys_new.keys.up) {
//         pokedex_callback_list_enter_mode(2);
//     } else if (super.keys_new.keys.right) {
//         pokedex_callback_list_enter_mode(3);
//     } else if (super.keys_new.keys.left) {
//         pokedex_callback_list_enter_mode(4);
//     } else if (super.keys_new.keys.A) {
//         //Todo enter page
//         if (pokedex_state->list[pokedex_state->current_list_index].seen) {
//             play_sound(5);
//             callback1_set(pokedex_callback_init_entry);
//             fadescreen_all(1, 0);
//             return;
//         }
//     } else if (super.keys_new.keys.B) {
//         //Todo return to group selection
//         pokedex_state->in_list = false;
//         callback1_set(pokedex_callback_group_selection);
//         play_sound(5);
//         return;
//     }
//     //No new key was pressed, check if we stay in mode
//     if (pokedex_callback_list_mode_proceed()) {
//         //We stay in mode (maybe we just enabled fast mode)
//         if (pokedex_state->list_countdown) {
//             pokedex_state->list_countdown--;
//         } else {
//             int mode_lo[] = {0, 1, -1, 8, -8};
//             u16 index_old = pokedex_state->current_list_index;
//             int index_new = index_old + mode_lo[pokedex_state->list_mode];
//             if (index_new < pokedex_get_first_seen())
//                 index_new = pokedex_get_first_seen();
//             if (index_new > pokedex_get_last_seen())
//                 index_new = pokedex_get_last_seen();
//             if (index_new != index_old) {
//                 play_sound(5);
//                 pokedex_state->current_list_index = (u16) index_new;
//                 pokedex_state->list_countdown = pokedex_state->list_fast_mode ? 0 : 8;
//                 pokedex_update_list();
//             }
//         }
//     }

// }

void pokedex_build_list() {
    pokedex_list_element *list = (pokedex_list_element*) malloc_and_clear(POKEDEX_CNT * sizeof (pokedex_list_element));
    pokedex_state->list = list;
    

    int list_size = 0;
    for (u16 i = 0; i < POKEMON_CNT; i++) {
        // Get the pokedex number 
        u16 dex_idx = pokedex_get_id(i);
        if (dex_idx != 0) {
            bool is_alternative_form = mega_evolution_get_by_mega_species((u16)i) != 0;
            for (int j = 0; j < LINKED_PKMN_CNT; j++) {
                if (i == pokemon_linked[j]) {
                    is_alternative_form = true;
                    break;
                }
            }
            if (!is_alternative_form) {
                if ((i < POKEMON_LOCKSCHAL && i > POKEMON_CELEBI) || i > POKEMON_DEOXYS) {
                    DEBUG("Warning: Pokédex lists species %d (dex no %d (at 0x%x)), is that intended?\n", i, pokedex_get_id(i), pokedex_order + i);
                }
                DEBUG("Species %d has dex id %d\n", i, dex_idx);
                list[list_size].species = i;
                list[list_size].dex_id = dex_idx;
                list[list_size].seen = pokedex_operator_by_dex_id(dex_idx, 0);
                list[list_size].caught = pokedex_operator_by_dex_id(dex_idx, 1);
                list_size++;
            }
        }
    }
    if (list_size > POKEDEX_CNT) {
        ERROR("Pokedex registers %d species, however only %d are allowed.\n", list_size, POKEDEX_CNT);
    }
}

static void pokedex_oam_pokemon_callback_request_update_gfx(__attribute__((unused)) oam_object *self) {
    // this causes a one frame delay to synchronize the hiding of the oam
    lz77uncompvram(pokemon_frontsprites[self->private[0]].sprite, OAMCHARBASE(pokedex_state->base_tile_pokemon));
    self->flags &= (u16)(~OAM_FLAG_INVISIBLE);
    oams[pokedex_state->oam_idx_pokemon].callback = oam_null_callback;
}

static const tbox_font_colormap pokedex_fontcolmap_list = {0, 1, 2, 0};

void pokedex_update_list(bool scrolling_down) {
    pokedex_list_element *list = pokedex_state->list;
    csave.pokedex_species = list[pokedex_state->current_list_index].species;
    int first = MAX(pokedex_state->first_idx, pokedex_state->current_list_index - (scrolling_down ? 1 : 0) - (POKEDEX_LIST_MAX_NUM_VISIBLE - 1) / 2);
    int last = MIN(pokedex_state->last_idx, first + POKEDEX_LIST_MAX_NUM_VISIBLE - 1);
    first = MAX(pokedex_state->first_idx, last - POKEDEX_LIST_MAX_NUM_VISIBLE + 1);
    pokedex_state->first_visible_idx = (u16)first;
    pokedex_state->last_visible_idx = (u16)last;

    u8 *buf = strbuf;
    *buf = 0xFF;
    u8 str_pokepad_pokedex_cursor[] = PSTRING("▶");

    tbox_flush_set(POKEDEX_TBOX_LIST_NUMBER, 0x0);
    tbox_flush_set(POKEDEX_TBOX_LIST_CAUGHT_ICON, 0x0);
    tbox_flush_set(POKEDEX_TBOX_LIST_NAME, 0x0);
    tbox_flush_set(POKEDEX_TBOX_LIST_TYPE, 0x0);

    int i = 0;
    while (first <= last) {
        u16 y_pixel = (u16) (14 * i + 3);

        //We create the number string
        pokedex_tbox_draw_num(POKEDEX_TBOX_LIST_NUMBER, 0, list[first].species, 0, (u16)(y_pixel - 1));

        //buf = strcat(buf, first == pokedex_state->current_list_index ? str_arrow : str_none);
        if (first == pokedex_state->current_list_index) {
            buf = strcat(buf, str_pokepad_pokedex_cursor);
        }
        if (list[first].seen) {
            buf = strcat(buf, pokemon_names[list[first].species]);
        } else {
            u8 str_pokedex_unkown[] = PSTRING("-----");
            buf = strcat(buf, str_pokedex_unkown);
        }
        u8 str_newline[] = PSTRING("\n");
        buf = strcat(buf, str_newline);

        if (list[first].caught) {
            u8 type1 = (u8) (basestats[list[first].species].type1 + 1);
            u8 type2 = (u8) (basestats[list[first].species].type2 + 1);
            tbox_blit_move_info_icon(POKEDEX_TBOX_LIST_TYPE, type1, 0 + 7, (u16)(y_pixel + 1));
            if (type1 != type2)
                tbox_blit_move_info_icon(POKEDEX_TBOX_LIST_TYPE, type2, 0x20 + 7, (u16)(y_pixel + 1));
            tbox_blit_move_info_icon(POKEDEX_TBOX_LIST_CAUGHT_ICON, 0, 1, y_pixel);
        }
        first++; i++;
    }

    tbox_tilemap_draw(POKEDEX_TBOX_LIST_NUMBER);
    tbox_tilemap_draw(POKEDEX_TBOX_LIST_CAUGHT_ICON);
    tbox_tilemap_draw(POKEDEX_TBOX_LIST_NAME);
    tbox_tilemap_draw(POKEDEX_TBOX_LIST_TYPE);
    tbox_sync(POKEDEX_TBOX_LIST_NUMBER, TBOX_SYNC_SET | TBOX_SYNC_MAP);
    tbox_sync(POKEDEX_TBOX_LIST_CAUGHT_ICON, TBOX_SYNC_SET | TBOX_SYNC_MAP);
    tbox_print_string(POKEDEX_TBOX_LIST_NAME, 2, 6, 2, 0, 0, &pokedex_fontcolmap_list, 0, strbuf);
    tbox_sync(POKEDEX_TBOX_LIST_TYPE, TBOX_SYNC_SET | TBOX_SYNC_MAP);
    bg_virtual_sync(0);

    u16 species = list[pokedex_state->current_list_index].seen ? csave.pokedex_species : 0;
    pal_decompress(pokemon_pals[species].pal, (u16) (256 + pokedex_state->pal_idx_pokemon * 16), 16 * sizeof(color_t));
    oams[pokedex_state->oam_idx_pokemon].private[0] = species;
    oams[pokedex_state->oam_idx_pokemon].callback = pokedex_oam_pokemon_callback_request_update_gfx; // will update the tiles
    oams[pokedex_state->oam_idx_pokemon].flags |= OAM_FLAG_INVISIBLE;
}


static u16 pokedex_get_first_seen() {
    pokedex_list_element *list = pokedex_state->list;
    for (u16 i = 0; i < POKEDEX_CNT; i++) {
        if (pokedex_operator_by_dex_id(list[i].dex_id, 0))
            return i;
    }
    return 0;
}

static u16 pokedex_get_last_seen() {
    pokedex_list_element *list = pokedex_state->list;
    for (int i = POKEDEX_CNT - 1; i >= 0; i--) {
        if (pokedex_operator_by_dex_id(list[i].dex_id, 0))
            return (u16)i;
    }
    return 0;
}

void pokedex_list_update_bounds() {
    pokedex_state->first_idx = pokedex_get_first_seen();
    pokedex_state->last_idx = pokedex_get_last_seen();
}

// static void pokedex_list_scroll_indicators_callback(u8 self) {
//     scroll_indicator_state *state = (scroll_indicator_state*)big_callbacks[self].params;
//     if (pokedex_state->first_visible_idx <= pokedex_state->first_idx)
//         oams[state->arrow0_oam_idx].flags |= OAM_FLAG_INVISIBLE;
//     else 
//         oams[state->arrow0_oam_idx].flags &= (u16)(~OAM_FLAG_INVISIBLE);
//     if (pokedex_state->last_visible_idx >= pokedex_state->last_idx)
//         oams[state->arrow1_oam_idx].flags |= OAM_FLAG_INVISIBLE;
//     else 
//         oams[state->arrow1_oam_idx].flags &= (u16)(~OAM_FLAG_INVISIBLE);
// }

void pokedex_list_scroll_indicators_new() {
    scroll_indicator_template pokedex_list_scroll_indicator_template = {
        .arrow0_threshold = pokedex_state->first_idx, 
        .arrow1_threshold = (u16)MAX(0, pokedex_state->last_idx), 
        .arrow0_type = SCROLL_ARROW_UP, .arrow1_type = SCROLL_ARROW_DOWN,
        .arrow0_x = 35, .arrow1_x = 35,
        .arrow0_y = 28, .arrow1_y = 112,
        .pal_tag = 112, .tiles_tag = 112,
    };
    pokedex_state->list_scroll_indicator_cb_idx = scroll_indicator_new(&pokedex_list_scroll_indicator_template, &pokedex_state->current_list_index);
    //big_callbacks[pokedex_state->list_scroll_indicator_cb_idx].function = pokedex_list_scroll_indicators_callback;
}