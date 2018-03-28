/*
 * wondertrade.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_POKEPAD_WONDERTRADE_H_
#define INCLUDE_C_POKEPAD_WONDERTRADE_H_

#define POKEPAD_WONDERTRADE_TBOX_TITLE 0
#define POKEPAD_WONDERTRADE_TBOX_LEVEL_H 1
#define POKEPAD_WONDERTRADE_TBOX_LEVEL_T 2
#define POKEPAD_WONDERTRADE_TBOX_CNT_H 3
#define POKEPAD_WONDERTRADE_TBOX_CNT_T 4
#define POKEPAD_WONDERTRADE_TBOX_NEXT_H 5
#define POKEPAD_WONDERTRADE_TBOX_NEXT_T 6
#define POKEPAD_WONDERTRADE_TBOX_RENDERER 7
#define POKEPAD_WONDERTRADE_TBOX_TRADE 8
#define POKEPAD_WONDERTRADE_TBOX_BACK 9


    typedef struct wondertrade_memory {
        bool from_outdoor;
        bool error_m;
        bool usable;
        u8 scroll_cb;
        u8 color_cb;
        u8 oam_badge;
        u8 cursor;
    } wondertrade_memory;

    extern u8 str_pokepad_wondertrade[];
    extern u8 *script_wondertrade_failure;
    extern u8 str_wondertrade_level[];
    extern u8 str_wondertrade_bronze[];
    extern u8 str_wondertrade_silver[];
    extern u8 str_wondertrade_gold[];
    extern u8 str_wondertrade_platin[];
    extern u8 str_wondertrade_anzahl[];
    extern u8 str_wondertrade_next[];
    extern u8 str_wondertrade_none[];
    extern u8 str_wondertrade_not_possible_script[];
    extern u8 str_wondertrade_do[];
    extern u8 str_wondertrade_back[];
    extern u8 str_wondertrade_error_m[];

    extern u8 str_wondertrade_name0[];
    extern u8 *wondertrade_ot_names[];

    void wondertrade_bg_scroll_callback(u8 self);
    void wondertrade_init_components();
    void wondertrade_init_callback();
    void wondertrade_load_steps_into_buffer();
    void wondertrade_init(bool is_outdoor);

    u16 wondertrade_select_pokemon();
    void wondertrade_spawn_pokemon();
    bool wondertrade_can_pokemon_be_sent();
    u16 wondertrade_next_seed();
    u8 wondertrade_get_level();
    void wondertrade_bg_scroll_callback(u8 self);
    void wondertrade_callback_idle();
    void wondertrade_show_components();
    void wondertrade_callback_free_components_and_return();
    void wondertrade_init_components();
    void wondertrade_init_callback();
    void wondertrade_load_steps_into_buffer();
    void wondertrade_init(bool is_outdoor);
    void wondertrade_callback_after_selection();
    void wondertrade_callback_init_selection();
    void wondertrade_free_components();


#endif /* INCLUDE_C_POKEPAD_WONDERTRADE_H_ */
