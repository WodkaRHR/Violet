/*
 * header.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_MAP_HEADER_H_
#define INCLUDE_C_MAP_HEADER_H_

#include "map/footer.h"
#include "map/levelscript.h"
#include "map/connection.h"
#include "map/header.h"
#include "map/event.h"

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
    u8 worldmap_shape_id; // Used to associate the map with a shape in the worldmap pattern of the namespace
    u8 field_19;
    u8 show_name;
    u8 battle_style;

} mapheader;

int dungeon_get_type();

extern mapheader **mapbanks[];
extern mapheader mapheader_virtual;

/**
 * Gets a mapheader by the current bank and map id
 * @param bank the desired bank
 * @param map the desired map id
 * @return the mapheader object
 */
mapheader *get_mapheader(u8 bank, u8 map);

/**
 * Checks if the current map is 40.0
 * @return if the current map is in bank 40 the and has map id 0
 */
bool map_is_x40_x0();

#endif /* INCLUDE_C_MAP_HEADER_H_ */
