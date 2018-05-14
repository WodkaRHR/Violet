/*
 * cloud.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_TILE_CLOUD_H_
#define INCLUDE_C_TILE_CLOUD_H_

extern u8 *script_cloud_none_ref;
extern u8 *script_use_cloud_ref;
extern u8 *script_use_cloud_back_ref;
extern u8 *script_cloud_facings[5];
extern u8 *script_cloud_force_ref[5];

u8 *cloud_trigger(bool back);
void cloud_enter();

#endif /* INCLUDE_C_TILE_CLOUD_H_ */
