/*
 * door_animation.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_TILE_DOOR_ANIMATION_H_
#define INCLUDE_C_TILE_DOOR_ANIMATION_H_

typedef struct {
    u16 block;
    u8 type;
    u8 double_tiled;
    void *gfx;
    u8 *palette_map;
} door_animation;


#endif /* INCLUDE_C_TILE_DOOR_ANIMATION_H_ */
