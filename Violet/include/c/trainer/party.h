/*
 * party.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_TRAINER_PARTY_H_
#define INCLUDE_C_TRAINER_PARTY_H_

#include "trainer/build.h"
#include "pokemon/virtual.h"

typedef struct {
	u8 ivs;
	union_build_field build;
    u8 level;
    u8 field_3;
    u16 species;
    u16 field_6;
} trainer_pokemon_default_item_default_attacks;

typedef struct {
	u8 ivs;
	union_build_field build;
    u8 level;
    u8 field_3;
    u16 species;
    u16 item;
} trainer_pokemon_custom_item_default_attacks;

typedef struct {
	u8 ivs;
	union_build_field build;
    u8 level;
    u8 field_3;
    u16 species;
    u16 moves[4];
    u16 field_6;
} trainer_pokemon_default_item_custom_attacks;

typedef struct {
	u8 ivs;
	union_build_field build;
    u8 level;
    u8 field_3;
    u16 species;
    u16 item;
    u16 moves[4];
} trainer_pokemon_custom_item_custom_attacks;

typedef union{
    trainer_pokemon_default_item_default_attacks default_item_default_attacks;
    trainer_pokemon_custom_item_default_attacks custom_item_default_attacks;
    trainer_pokemon_default_item_custom_attacks default_item_custom_attacks;
    trainer_pokemon_custom_item_custom_attacks custom_item_custom_attacks;
} trainer_pokemon;

#define TRAINER_PARTY_DEFAULT_ITEM_DEFAULT_MOVES(ivs, build, ability_bit, hidden_ability, shiny, level, species)\
{\
		ivs, \
        {.bitfield = {build, ability_bit, hidden_ability, shiny}}, \
        level,\
        0,\
        species,\
         0x0 \
}

#define TRAINER_PARTY_CUSTOM_ITEM_DEFAULT_MOVES(ivs, build, ability_bit, hidden_ability, shiny, level, species, item)\
{\
		ivs, \
        {.bitfield = {build, ability_bit, hidden_ability, shiny}}, \
        level,\
        0,\
        species,\
        item\
}

#define TRAINER_PARTY_DEFAULT_ITEM_CUSTOM_MOVES(ivs, build, ability_bit, hidden_ability, shiny, level, species, move0, move1, move2, move3)\
{\
		ivs, \
        {.bitfield = {build, ability_bit, hidden_ability, shiny}}, \
        level,\
        0,\
        species,\
        {move0, move1, move2, move3},\
        0x0\
}

#define TRAINER_PARTY_CUSTOM_ITEM_CUSTOM_MOVES(ivs, build, ability_bit, hidden_ability, shiny, level, species, item, move0, move1, move2, move3)\
{\
		ivs, \
        {.bitfield = {build, ability_bit, hidden_ability, shiny}}, \
        level,\
        0,\
        species,\
        item,\
        {move0, move1, move2, move3}\
}

/**
 * Builds / modifies a trainer pokemon based on its build field
 * @param poke the pokemon to modify
 * @param field the build field that encodes the information about the trainer
 */
void trainer_pokemon_new(pokemon *poke, union union_build_field field);

trainer_pokemon_default_item_default_attacks trainer_party_x0[1];
trainer_pokemon_default_item_default_attacks trainer_party_x1[1];
trainer_pokemon_default_item_default_attacks trainer_party_x2[1];
trainer_pokemon_default_item_default_attacks trainer_party_x3[1];
trainer_pokemon_default_item_default_attacks trainer_party_x4[1];
trainer_pokemon_default_item_default_attacks trainer_party_x5[2];
trainer_pokemon_default_item_default_attacks trainer_party_x6[2];
trainer_pokemon_default_item_default_attacks trainer_party_x7[4];
trainer_pokemon_default_item_default_attacks trainer_party_x8[2];
trainer_pokemon_default_item_default_attacks trainer_party_x9[2];
trainer_pokemon_default_item_default_attacks trainer_party_xa[2];
trainer_pokemon_default_item_default_attacks trainer_party_xb[3];
trainer_pokemon_default_item_default_attacks trainer_party_xc[3];
trainer_pokemon_default_item_default_attacks trainer_party_xd[2];
trainer_pokemon_default_item_default_attacks trainer_party_xe[3];
trainer_pokemon_default_item_default_attacks trainer_party_xf[2];
trainer_pokemon_default_item_default_attacks trainer_party_x10[2];
trainer_pokemon_default_item_default_attacks trainer_party_x11[3];
trainer_pokemon_default_item_default_attacks trainer_party_x12[2];
trainer_pokemon_default_item_default_attacks trainer_party_x13[2];
trainer_pokemon_default_item_default_attacks trainer_party_x14[2];
trainer_pokemon_default_item_default_attacks trainer_party_x15[1];
trainer_pokemon_default_item_default_attacks trainer_party_x16[3];
trainer_pokemon_default_item_default_attacks trainer_party_x17[2];
trainer_pokemon_default_item_default_attacks trainer_party_x18[2];
trainer_pokemon_default_item_default_attacks trainer_party_x19[2];
trainer_pokemon_default_item_default_attacks trainer_party_x1a[2];
trainer_pokemon_default_item_default_attacks trainer_party_x1b[3];
trainer_pokemon_default_item_default_attacks trainer_party_x1c[1];
trainer_pokemon_default_item_default_attacks trainer_party_x1d[2];
trainer_pokemon_default_item_default_attacks trainer_party_x1e[3];
trainer_pokemon_default_item_default_attacks trainer_party_x1f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x20[2];
trainer_pokemon_default_item_default_attacks trainer_party_x21[3];
trainer_pokemon_default_item_default_attacks trainer_party_x22[4];
trainer_pokemon_custom_item_custom_attacks trainer_party_x23[4];
trainer_pokemon_default_item_default_attacks trainer_party_x24[2];
trainer_pokemon_default_item_default_attacks trainer_party_x25[3];
trainer_pokemon_default_item_default_attacks trainer_party_x26[3];
trainer_pokemon_default_item_default_attacks trainer_party_x27[3];
trainer_pokemon_default_item_default_attacks trainer_party_x28[3];
trainer_pokemon_custom_item_default_attacks trainer_party_x29[2];
trainer_pokemon_custom_item_default_attacks trainer_party_x2a[2];
trainer_pokemon_custom_item_default_attacks trainer_party_x2b[2];
trainer_pokemon_default_item_default_attacks trainer_party_x2c[2];
trainer_pokemon_default_item_default_attacks trainer_party_x2d[4];
trainer_pokemon_default_item_default_attacks trainer_party_x2e[3];
trainer_pokemon_default_item_default_attacks trainer_party_x2f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x30[4];
trainer_pokemon_default_item_default_attacks trainer_party_x31[2];
trainer_pokemon_default_item_default_attacks trainer_party_x32[2];
trainer_pokemon_default_item_default_attacks trainer_party_x33[2];
trainer_pokemon_default_item_default_attacks trainer_party_x34[2];
trainer_pokemon_default_item_default_attacks trainer_party_x35[2];
trainer_pokemon_default_item_default_attacks trainer_party_x36[3];
trainer_pokemon_default_item_default_attacks trainer_party_x37[3];
trainer_pokemon_default_item_default_attacks trainer_party_x38[5];
trainer_pokemon_default_item_default_attacks trainer_party_x39[1];
trainer_pokemon_default_item_default_attacks trainer_party_x3a[2];
trainer_pokemon_default_item_default_attacks trainer_party_x3b[4];
trainer_pokemon_default_item_default_attacks trainer_party_x3c[3];
trainer_pokemon_default_item_default_attacks trainer_party_x3d[3];
trainer_pokemon_default_item_default_attacks trainer_party_x3e[2];
trainer_pokemon_default_item_default_attacks trainer_party_x3f[1];
trainer_pokemon_default_item_default_attacks trainer_party_x40[5];
trainer_pokemon_default_item_default_attacks trainer_party_x41[2];
trainer_pokemon_default_item_default_attacks trainer_party_x42[3];
trainer_pokemon_custom_item_default_attacks trainer_party_x43[3];
trainer_pokemon_custom_item_default_attacks trainer_party_x44[3];
trainer_pokemon_custom_item_default_attacks trainer_party_x45[3];
trainer_pokemon_default_item_default_attacks trainer_party_x46[2];
trainer_pokemon_default_item_default_attacks trainer_party_x47[2];
trainer_pokemon_default_item_default_attacks trainer_party_x48[2];
trainer_pokemon_default_item_default_attacks trainer_party_x49[2];
trainer_pokemon_default_item_default_attacks trainer_party_x4a[2];
trainer_pokemon_default_item_default_attacks trainer_party_x4b[2];
trainer_pokemon_custom_item_custom_attacks trainer_party_x4c[3];
trainer_pokemon_default_item_default_attacks trainer_party_x4d[2];
trainer_pokemon_default_item_default_attacks trainer_party_x4e[1];
trainer_pokemon_default_item_default_attacks trainer_party_x4f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x50[3];
trainer_pokemon_default_item_default_attacks trainer_party_x51[2];
trainer_pokemon_default_item_default_attacks trainer_party_x52[1];
trainer_pokemon_default_item_default_attacks trainer_party_x53[2];
trainer_pokemon_default_item_default_attacks trainer_party_x54[3];
trainer_pokemon_default_item_default_attacks trainer_party_x55[2];
trainer_pokemon_default_item_default_attacks trainer_party_x56[3];
trainer_pokemon_custom_item_default_attacks trainer_party_x57[1];
trainer_pokemon_default_item_default_attacks trainer_party_x58[4];
trainer_pokemon_default_item_default_attacks trainer_party_x59[2];
trainer_pokemon_default_item_default_attacks trainer_party_x5a[2];
trainer_pokemon_default_item_default_attacks trainer_party_x5b[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_x5c[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_x5d[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_x5e[3];
trainer_pokemon_default_item_default_attacks trainer_party_x5f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x60[2];
trainer_pokemon_default_item_default_attacks trainer_party_x61[5];
trainer_pokemon_default_item_default_attacks trainer_party_x62[2];
trainer_pokemon_default_item_default_attacks trainer_party_x63[3];
trainer_pokemon_default_item_default_attacks trainer_party_x64[2];
trainer_pokemon_default_item_default_attacks trainer_party_x65[2];
trainer_pokemon_default_item_default_attacks trainer_party_x66[2];
trainer_pokemon_default_item_default_attacks trainer_party_x67[3];
trainer_pokemon_default_item_default_attacks trainer_party_x68[1];
trainer_pokemon_default_item_default_attacks trainer_party_x69[3];
trainer_pokemon_default_item_default_attacks trainer_party_x6a[4];
trainer_pokemon_default_item_default_attacks trainer_party_x6b[2];
trainer_pokemon_default_item_default_attacks trainer_party_x6c[2];
trainer_pokemon_default_item_default_attacks trainer_party_x6d[3];
trainer_pokemon_default_item_default_attacks trainer_party_x6e[4];
trainer_pokemon_default_item_default_attacks trainer_party_x6f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x70[1];
trainer_pokemon_default_item_default_attacks trainer_party_x71[3];
trainer_pokemon_default_item_default_attacks trainer_party_x72[2];
trainer_pokemon_default_item_default_attacks trainer_party_x73[3];
trainer_pokemon_default_item_default_attacks trainer_party_x74[3];
trainer_pokemon_default_item_default_attacks trainer_party_x75[2];
trainer_pokemon_default_item_default_attacks trainer_party_x76[3];
trainer_pokemon_default_item_default_attacks trainer_party_x77[2];
trainer_pokemon_default_item_default_attacks trainer_party_x78[2];
trainer_pokemon_default_item_default_attacks trainer_party_x79[1];
trainer_pokemon_default_item_default_attacks trainer_party_x7a[2];
trainer_pokemon_default_item_default_attacks trainer_party_x7b[3];
trainer_pokemon_default_item_default_attacks trainer_party_x7c[2];
trainer_pokemon_default_item_default_attacks trainer_party_x7d[3];
trainer_pokemon_default_item_default_attacks trainer_party_x7e[2];
trainer_pokemon_default_item_default_attacks trainer_party_x7f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x80[2];
trainer_pokemon_default_item_default_attacks trainer_party_x81[1];
trainer_pokemon_default_item_default_attacks trainer_party_x82[3];
trainer_pokemon_default_item_default_attacks trainer_party_x83[1];
trainer_pokemon_default_item_default_attacks trainer_party_x84[6];
trainer_pokemon_default_item_default_attacks trainer_party_x85[2];
trainer_pokemon_default_item_default_attacks trainer_party_x86[2];
trainer_pokemon_default_item_default_attacks trainer_party_x87[3];
trainer_pokemon_default_item_default_attacks trainer_party_x88[2];
trainer_pokemon_default_item_default_attacks trainer_party_x89[2];
trainer_pokemon_default_item_default_attacks trainer_party_x8a[1];
trainer_pokemon_default_item_default_attacks trainer_party_x8b[2];
trainer_pokemon_default_item_default_attacks trainer_party_x8c[2];
trainer_pokemon_default_item_default_attacks trainer_party_x8d[3];
trainer_pokemon_default_item_default_attacks trainer_party_x8e[1];
trainer_pokemon_default_item_default_attacks trainer_party_x8f[2];
trainer_pokemon_default_item_default_attacks trainer_party_x90[1];
trainer_pokemon_default_item_default_attacks trainer_party_x91[3];
trainer_pokemon_default_item_default_attacks trainer_party_x92[2];
trainer_pokemon_default_item_default_attacks trainer_party_x93[3];
trainer_pokemon_default_item_default_attacks trainer_party_x94[2];
trainer_pokemon_default_item_default_attacks trainer_party_x95[4];
trainer_pokemon_default_item_default_attacks trainer_party_x96[1];
trainer_pokemon_default_item_default_attacks trainer_party_x97[2];
trainer_pokemon_default_item_default_attacks trainer_party_x98[3];
trainer_pokemon_default_item_default_attacks trainer_party_x99[2];
trainer_pokemon_default_item_default_attacks trainer_party_x9a[4];
trainer_pokemon_default_item_default_attacks trainer_party_x9b[1];
trainer_pokemon_default_item_default_attacks trainer_party_x9c[3];
trainer_pokemon_default_item_default_attacks trainer_party_x9d[2];
trainer_pokemon_default_item_default_attacks trainer_party_x9e[2];
trainer_pokemon_default_item_default_attacks trainer_party_x9f[6];
trainer_pokemon_default_item_default_attacks trainer_party_xa0[2];
trainer_pokemon_default_item_default_attacks trainer_party_xa1[4];
trainer_pokemon_default_item_default_attacks trainer_party_xa2[2];
trainer_pokemon_default_item_default_attacks trainer_party_xa3[2];
trainer_pokemon_default_item_default_attacks trainer_party_xa4[3];
trainer_pokemon_default_item_default_attacks trainer_party_xa5[2];
trainer_pokemon_default_item_default_attacks trainer_party_xa6[1];
trainer_pokemon_default_item_custom_attacks trainer_party_xa7[2];
trainer_pokemon_default_item_default_attacks trainer_party_xa8[1];
trainer_pokemon_default_item_default_attacks trainer_party_xa9[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_xaa[1];
trainer_pokemon_default_item_default_attacks trainer_party_xab[4];
trainer_pokemon_default_item_default_attacks trainer_party_xac[3];
trainer_pokemon_default_item_default_attacks trainer_party_xad[3];
trainer_pokemon_default_item_default_attacks trainer_party_xae[3];
trainer_pokemon_default_item_default_attacks trainer_party_xaf[2];
trainer_pokemon_default_item_default_attacks trainer_party_xb0[2];
trainer_pokemon_default_item_default_attacks trainer_party_xb1[3];
trainer_pokemon_default_item_default_attacks trainer_party_xb2[4];
trainer_pokemon_default_item_default_attacks trainer_party_xb3[2];
trainer_pokemon_default_item_default_attacks trainer_party_xb4[2];
trainer_pokemon_default_item_default_attacks trainer_party_xb5[2];
trainer_pokemon_custom_item_custom_attacks trainer_party_xb6[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_xb7[4];
trainer_pokemon_custom_item_custom_attacks trainer_party_xb8[4];
trainer_pokemon_custom_item_custom_attacks trainer_party_xb9[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_xba[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_xbb[3];
trainer_pokemon_custom_item_custom_attacks trainer_party_xbc[4];
trainer_pokemon_custom_item_custom_attacks trainer_party_xbd[4];
trainer_pokemon_custom_item_custom_attacks trainer_party_xbe[4];
trainer_pokemon_default_item_default_attacks trainer_party_xbf_inferior_gym[3];
trainer_pokemon_default_item_default_attacks trainer_party_xc0_inferior_gym[1];
trainer_pokemon_default_item_default_attacks trainer_party_xc1_inferior_gym[2];
trainer_pokemon_default_item_default_attacks trainer_party_xc2_inferior_gym[3];
trainer_pokemon_default_item_default_attacks trainer_party_xc3_inferior_gym[1];
trainer_pokemon_custom_item_custom_attacks trainer_party_xc4_inferior_gymleader[4];
trainer_pokemon_default_item_default_attacks trainer_party_xc5_route_8_trainer_0[2];
trainer_pokemon_default_item_default_attacks trainer_party_xc6_route_8_trainer_1[3];
trainer_pokemon_default_item_default_attacks trainer_party_xc7_route_8_trainer_2[2];
trainer_pokemon_default_item_default_attacks trainer_party_xc8_route_8_trainer_3[5];
trainer_pokemon_default_item_default_attacks trainer_party_xc9_route_8_trainer_4[1];
trainer_pokemon_default_item_default_attacks trainer_party_xcA_route_9_trainer_0[3];
trainer_pokemon_default_item_default_attacks trainer_party_xcb_route_9_trainer_1[2];
trainer_pokemon_default_item_default_attacks trainer_party_xcc_route_9_trainer_2[3];
trainer_pokemon_default_item_default_attacks trainer_party_xcd_route_9_trainer_3[2];
trainer_pokemon_default_item_default_attacks trainer_party_xce_route_9_trainer_4[3];
trainer_pokemon_default_item_default_attacks trainer_party_xcf_route_9_trainer_5[3];
trainer_pokemon_default_item_default_attacks trainer_party_xd0_route_9_trainer_6[1];
trainer_pokemon_default_item_default_attacks trainer_party_xd1_route_9_trainer_7[3];
trainer_pokemon_default_item_default_attacks trainer_party_xd2_route_9_trainer_8[2];
trainer_pokemon_default_item_default_attacks trainer_party_xd3_route_9_trainer_9[3];
trainer_pokemon_default_item_default_attacks trainer_party_xd4_route_9_trainer_10[1];
trainer_pokemon_default_item_default_attacks trainer_party_xd5_route_9_trainer_11[2];
trainer_pokemon_default_item_default_attacks trainer_party_xd6_route_9_trainer_12[3];
trainer_pokemon_default_item_default_attacks trainer_party_xd7_route_9_trainer_13[2];
trainer_pokemon_default_item_default_attacks trainer_party_xd8_route_10_trainer_0[1];
trainer_pokemon_default_item_default_attacks trainer_party_xd9_route_10_trainer_1[3];
trainer_pokemon_default_item_default_attacks trainer_party_xda_route_10_trainer_2[2];
trainer_pokemon_default_item_default_attacks trainer_party_xdb_route_10_trainer_3[1];
trainer_pokemon_default_item_default_attacks trainer_party_xdc_route_10_trainer_4[2];
trainer_pokemon_default_item_default_attacks trainer_party_xdd_route_10_trainer_5[3];
trainer_pokemon_default_item_default_attacks trainer_party_xde_route_10_trainer_6[3];
trainer_pokemon_default_item_default_attacks trainer_party_xdf_route_10_trainer_7[1];
trainer_pokemon_default_item_default_attacks trainer_party_xe0_route_10_trainer_8[3];
trainer_pokemon_default_item_default_attacks trainer_party_xe1_route_11_trainer_0[3];
trainer_pokemon_default_item_default_attacks trainer_party_xe2_route_11_trainer_1[2];
trainer_pokemon_default_item_default_attacks trainer_party_xe3_route_11_trainer_2[1];
trainer_pokemon_default_item_default_attacks trainer_party_xe4_route_11_trainer_3[2];
trainer_pokemon_default_item_default_attacks trainer_party_xe5_route_11_trainer_4[3];
trainer_pokemon_default_item_default_attacks trainer_party_xe6_route_11_trainer_5[2];
trainer_pokemon_default_item_default_attacks trainer_party_xe7_route_11_trainer_6[3];
trainer_pokemon_default_item_default_attacks trainer_party_xe8_route_11_trainer_7[2];
trainer_pokemon_default_item_default_attacks trainer_party_xe9_route_11_trainer_8[4];
trainer_pokemon_default_item_default_attacks trainer_party_xea_forest_cemetery_trainer_0[3];
trainer_pokemon_default_item_default_attacks trainer_party_xeb_forest_cemetery_trainer_1[2];
trainer_pokemon_default_item_default_attacks trainer_party_xec_forest_cemetery_trainer_2[3];
trainer_pokemon_default_item_default_attacks trainer_party_xed_forest_cemetery_trainer_3[3];
trainer_pokemon_default_item_default_attacks trainer_party_xee_forest_cemetery_trainer_4[1];
trainer_pokemon_default_item_default_attacks trainer_party_xef_forest_cemetery_trainer_5[2];
trainer_pokemon_default_item_default_attacks trainer_party_xf0_forest_cemetery_trainer_6[1];
trainer_pokemon_default_item_default_attacks trainer_party_xf1_forest_cemetery_trainer_7[3];
trainer_pokemon_default_item_default_attacks trainer_party_xf2_forest_cemetery_trainer_8[2];
trainer_pokemon_default_item_default_attacks trainer_party_xfc_route_12_trainer_0[2];
trainer_pokemon_default_item_default_attacks trainer_party_xfd_route_12_trainer_1[3];
trainer_pokemon_default_item_default_attacks trainer_party_xfe_route_12_trainer_2[1];
trainer_pokemon_default_item_default_attacks trainer_party_x100_route_12_trainer_4[2];
trainer_pokemon_default_item_default_attacks trainer_party_x101_route_12_trainer_5[2];
trainer_pokemon_default_item_default_attacks trainer_party_x102_route_12_trainer_6[3];
trainer_pokemon_default_item_default_attacks trainer_party_x103_route_12_trainer_7[1];
trainer_pokemon_default_item_default_attacks trainer_party_x104_route_12_trainer_8[1];
trainer_pokemon_default_item_default_attacks trainer_party_x105_route_12_trainer_9[2];
#endif /* INCLUDE_C_TRAINER_PARTY_H_ */
