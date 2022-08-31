#ifndef H_POKEPAD_TREASURE_MAP
#define H_POKEPAD_TREASURE_MAP

#include "types.h"
#include "save.h"
#include "list_menu.h"
#include "text.h"
#include "bg.h"

#define NUM_TREASURE_MAPS 32

#define TREASURE_MAP_OAM_TAG_CROSS 0x36A3

// Text / bg organisation
#define TREASURE_MAP_START_TILE_BORDER_BASE (1023 - TBOX_FRAME_STD_NUM_TILES - TBOX_FRAME_SET_STYLE_NUM_TILES - TBOX_FRAME_MESSAGE_NUM_TILES)
#define TREASURE_MAP_START_TILE_BORDER_STD (TREASURE_MAP_START_TILE_BORDER_BASE)
#define TREASURE_MAP_PAL_IDX_BORDER_STD 15

// Where to place the tiles of the map
#define TREASURE_MAP_X 10
#define TREASURE_MAP_Y 3

enum {
    TREASURE_MAP_TBOX_LIST,
    NUM_TREASURE_MAP_TBOXES,
};

typedef struct {
    u8 bank;
    u8 map_idx;
    u8 sign_idx;
    u8 field3;
} treasure_map_t;

extern treasure_map_t treasure_maps[NUM_TREASURE_MAPS];

typedef struct {
    bool from_outdoor;
    u8 initialization_state;
    bg_tile *bg0_map;
    bg_tile *bg1_map;
    bg_tile *bg2_map;
    bg_tile *bg3_map;
    list_menu_item list_menu_items[NUM_TREASURE_MAPS + 1];
    u8 list_menu_item_texts[NUM_TREASURE_MAPS + 1][40];
    u8 num_list_menu_items;
    u8 list_menu_cb_idx;
    u8 is_updating;
    u8 oam_idx_cross;
} treasure_map_state_t;

#define TREASURE_MAP_STATE ((treasure_map_state_t*)fmem.gp_state)

extern LZ77COMPRESSED gfx_pokepad_icon_treasure_mapTiles;
extern LZ77COMPRESSED gfx_pokepad_icon_treasure_mapPal;
extern LZ77COMPRESSED gfx_treasure_map_ui_backgroundTiles;
extern bg_tile gfx_treasure_map_ui_backgroundMap[64 * 32];
extern LZ77COMPRESSED gfx_treasure_map_ui_backgroundPal;
extern LZ77COMPRESSED gfx_treasure_map_crossTiles;
extern color_t gfx_treasure_map_crossPal[16];

/**
 * @brief Initializes the treasure map ui
 * 
 * @param from_outdoor if it is to be initialized from the overworld 
 * (if `false`, it is assumed to be from the pokepad ui)
 */
void treasure_map_initialize(bool from_outdoor);

#endif