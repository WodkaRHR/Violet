/*
 * wild_pokemon.c
 *
 *  Created on: Mar 18, 2019
 *      Author: dominik
 */
#include "types.h"
#include "map/wild_pokemon.h"
#include "constants/wild_pokemon_densities.h"
#include "constants/species.h"

wild_pokemon_entry wild_pokemon_3_8_grass_entries[12] = {
  [WILD_POKEMON_DENSITY_GRASS_0_20_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_MOBAI},
  [WILD_POKEMON_DENSITY_GRASS_1_20_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_ELEKID},
  [WILD_POKEMON_DENSITY_GRASS_2_10_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_AZURILL},
  [WILD_POKEMON_DENSITY_GRASS_3_10_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_MAGBY},
  [WILD_POKEMON_DENSITY_GRASS_4_10_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_KLINGPLIM},
  [WILD_POKEMON_DENSITY_GRASS_5_10_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_FLUFFELUFF},
  [WILD_POKEMON_DENSITY_GRASS_6_5_PERCENT] =
    {.level_min = 32, .level_max = 36, .species = POKEMON_RABAUZ},
  [WILD_POKEMON_DENSITY_GRASS_7_5_PERCENT] =
    {.level_min = 32, .level_max = 37, .species = POKEMON_RABAUZ},
  [WILD_POKEMON_DENSITY_GRASS_8_4_PERCENT] =
    {.level_min = 33, .level_max = 37, .species = POKEMON_KLINGPLIM},
  [WILD_POKEMON_DENSITY_GRASS_9_4_PERCENT] =
    {.level_min = 34, .level_max = 37, .species = POKEMON_ELEKID},
  [WILD_POKEMON_DENSITY_GRASS_10_1_PERCENT] =
    {.level_min = 35, .level_max = 39, .species = POKEMON_FLUFFELUFF},
  [WILD_POKEMON_DENSITY_GRASS_11_1_PERCENT] =
    {.level_min = 38, .level_max = 41, .species = POKEMON_MOBAI},
};

wild_pokemon_habitat wild_pokemon_3_8_grass = {
  .frequency = 30, .data = wild_pokemon_3_8_grass_entries
};

wild_pokemon_entry wild_pokemon_3_8_other_entries[5] = {
  [WILD_POKEMON_DENSITY_OTHER_0_30_PERCENT] =
    {.level_min = 35, .level_max = 40, .species = POKEMON_KLINGPLIM},
  [WILD_POKEMON_DENSITY_OTHER_1_25_PERCENT] =
    {.level_min = 35, .level_max = 31, .species = POKEMON_AZURILL},
  [WILD_POKEMON_DENSITY_OTHER_2_20_PERCENT] =
    {.level_min = 35, .level_max = 30, .species = POKEMON_MAGBY},
  [WILD_POKEMON_DENSITY_OTHER_3_15_PERCENT] =
    {.level_min = 35, .level_max = 32, .species = POKEMON_TOGEPI},
  [WILD_POKEMON_DENSITY_OTHER_4_10_PERCENT] =
    {.level_min = 38, .level_max = 42, .species = POKEMON_RIOLU},
};

wild_pokemon_habitat wild_pokemon_3_8_other = {
  .frequency = 128, .data = wild_pokemon_3_8_other_entries
};

wild_pokemon_entry wild_pokemon_3_8_water_entries[5] = {
  [WILD_POKEMON_DENSITY_WATER_0_60_PERCENT] =
    {.level_min = 25, .level_max = 30, .species = POKEMON_MARILL},
  [WILD_POKEMON_DENSITY_WATER_1_30_PERCENT] =
    {.level_min = 25, .level_max = 35, .species = POKEMON_GEHWEIHER},
  [WILD_POKEMON_DENSITY_WATER_2_5_PERCENT] =
    {.level_min = 30, .level_max = 35, .species = POKEMON_ENTON},
  [WILD_POKEMON_DENSITY_WATER_3_4_PERCENT] =
    {.level_min = 25, .level_max = 35, .species = POKEMON_LOTURZEL},
  [WILD_POKEMON_DENSITY_WATER_3_1_PERCENT] =
    {.level_min = 30, .level_max = 39, .species = POKEMON_AZUMARILL},
};

wild_pokemon_habitat wild_pokemon_3_8_water = {
  .frequency = 2, .data = wild_pokemon_3_8_water_entries
};

wild_pokemon_entry wild_pokemon_3_8_rod_entries[10] = {
  [WILD_POKEMON_DENSITY_OLD_ROD_0_70_PERCENT] =
    {.level_min = 5, .level_max = 5, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_OLD_ROD_1_30_PERCENT] =
    {.level_min = 5, .level_max = 5, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_GOOD_ROD_0_60_PERCENT] =
    {.level_min = 25, .level_max = 35, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_GOOD_ROD_1_20_PERCENT] =
    {.level_min = 25, .level_max = 35, .species = POKEMON_FLEGMON},
  [WILD_POKEMON_DENSITY_GOOD_ROD_2_20_PERCENT] =
    {.level_min = 25, .level_max = 35, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_SUPER_ROD_0_40_PERCENT] =
    {.level_min = 35, .level_max = 50, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_SUPER_ROD_1_40_PERCENT] =
    {.level_min = 35, .level_max = 40, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_SUPER_ROD_2_15_PERCENT] =
    {.level_min = 35, .level_max = 45, .species = POKEMON_FLEGMON},
  [WILD_POKEMON_DENSITY_SUPER_ROD_3_4_PERCENT] =
    {.level_min = 40, .level_max = 45, .species = POKEMON_KARPADOR},
  [WILD_POKEMON_DENSITY_SUPER_ROD_4_1_PERCENT] =
    {.level_min = 45, .level_max = 50, .species = POKEMON_GARADOS},
};

wild_pokemon_habitat wild_pokemon_3_8_rod = {
  .frequency = 10, .data = wild_pokemon_3_8_rod_entries
};


