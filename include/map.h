#ifndef H_MAP
#define H_MAP

#include "types.h"
#include "mapevents.h"
#include "tile.h"

#define WEATHER_INSIDE 0
#define WEATHER_SUNNY_CLOUDS 1
#define WEATHER_NORMAL 2
#define WEATHER_RAIN 3
#define WEATHER_ASH 4
#define WEATHER_STORM 5
#define WEATHER_CALM_MIST 6
#define WEATHER_SNOW 7
#define WEATHER_SANDSTORM 8
#define WEATHER_MOVING_MIST 9
#define WEATHER_DENSE_MIST 0xA
#define WEATHER_CLOUDY 0xB
#define WEATHER_HOT_SUN 0xC
#define WEATHER_HEAVY_RAIN 0xD
#define WEATHER_UNDERWATER 0xE

#define MAP_PERMISSION_NONE 0
#define MAP_PERMISSION_FLY 2

#define MAP_FLASH_NONE 0
#define MAP_FLASH_DARK_FLASHABLE 1


#define MAP_FLASH_DARK_NOT_FLASHABLE 2

#define MAP_BATTLE_STYLE_RANDOM 0
#define MAP_BATTLE_STYLE_GYM 1
#define MAP_BATTLE_STYLE 2
#define MAP_BATTLE_STYLE_ELITE_FOUR_FIRST 4
#define MAP_BATTLE_STYLE_ELITE_FOUR_SECOND 5
#define MAP_BATTLE_STYLE_ELITE_FOUR_THIRD 6
#define MAP_BATTLE_STYLE_ELITE_FOUR_FOURTH 7
#define MAP_BATTLE_STYLE_POKEBALL 8

#define CDIRECTION_DOWN 1
#define CDIRECTION_UP 2
#define CDIRECTION_LEFT 3
#define CDIRECTION_RIGHT 4


// a levelscript list entry
typedef struct {
    u8 type;
    MISALIGNED_32 levelscript;
} levelscript_head;

//A single map connection

typedef struct map_connection {
    u32 direction;
    int displacement;
    u8 bank;
    u8 map;
    u8 field_A;
    u8 field_B;
} map_connection;

//A list containing map connections

typedef struct map_connections {
    u32 count;
    map_connection *connections;
} map_connections;

typedef struct map_block {
    u16 block_id : 10;
    u16 level : 6;
} map_block;

typedef struct map_data {
    map_block *blocks;
} map_data;

typedef struct map_tileset_info {
    u8 compression_used;
    u8 color_section : 1; //0 and 1 are possible
    u8 padding : 7;
    u8 field_2;
    u8 field_3;

} map_tileset_info;

typedef struct tileset {
    map_tileset_info info;
    void *graphic;
    u16 *colors; //6 * 16 colors
    void *blocks;
    void *(*animation_init)();
    block_data *behaviours;
} tileset;


//The actual map data

typedef struct mapfooter {
    u32 width;
    u32 height;
    u16 *border_blocks;
    map_block *map;
    tileset *tileset1;
    tileset *tileset2;
    u8 border_width;
    u8 border_height;
    u16 padding;
} mapfooter;


//Map header data 

typedef struct mapheader {
    mapfooter *footer;
    map_events *events;
    levelscript_head *levelscripts;
    map_connections *connections;
    u16 music;
    u16 map_index; //main table is used when map is loaded
    u8 name_bank;
    u8 flash;
    u8 weather;
    u8 type;
    u16 field_18;
    u8 show_name;
    u8 battle_style;

} mapheader;

//Simply a index based list of mapheaders

typedef struct mapbank {
    mapheader **maps;
} mapbank;

typedef struct map_dynamic_data {
    u32 width;
    u32 height;
    map_block *blocks;
} map_dynamic_data;

typedef struct footer_dynamic_data {
    mapfooter *footer;
    void *event_header;

} footer_dynamic_data;


footer_dynamic_data *foot_ddata = (footer_dynamic_data*) 0x02036DFC;


map_dynamic_data *map_ddata = (map_dynamic_data*) 0x03004F90;

typedef struct wild_pokemon_entry {
    u8 level_min;
    u8 level_max;
    u16 species;
} wild_pokemon_entry;

typedef struct wild_pokemon_habitat {
    u8 frequency;
    u8 field_1;
    u8 field_2;
    u8 field_3;
    wild_pokemon_entry *data;
} wild_pokemon_habitat;

typedef struct {
    u8 bank;
    u8 map;
    u8 field_2;
    u8 field_3;
    wild_pokemon_habitat *grass;
    wild_pokemon_habitat *water;
    wild_pokemon_habitat *other;
    wild_pokemon_habitat *rod;

} wild_pokemon_data;


u16 map_wild_pokemon_get_current_table_id(); //returns 0xFFFF if none matches

//mapbank *mapbank_table_ptr = (mapbank**) 0x0805526C;
//mapfooter ***main_map_table_ptr = (mapfooter***) 0x080551B4;
extern mapheader **mapbanks[];
extern mapfooter *mapfooters[];
tileset *tilesets = (tileset*) 0x082D49B8;
wild_pokemon_data **wild_pokemon_data_ptr = (wild_pokemon_data**) 0x080828F4;
u8 **map_namespaces = (u8**) 0x083F1504;

void overworld_load_tileset_pal(tileset *t, u16 dst_col, u16 bytecnt);

mapheader *get_mapheader(u8 bank, u8 map);
mapfooter *get_mapfooter();

#endif