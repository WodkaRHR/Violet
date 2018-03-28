/*
 * healing_place.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_MAP_HEALING_PLACE_H_
#define INCLUDE_C_MAP_HEALING_PLACE_H_


#define NUM_HEALING_PLACES 21

typedef struct{
    u16 bank;
    u16 map;
} stru_healing_place;

stru_healing_place healing_places[NUM_HEALING_PLACES];
u8 healing_place_target_persons[NUM_HEALING_PLACES];

#endif /* INCLUDE_C_MAP_HEALING_PLACE_H_ */
