#include "types.h"
#include "map/wild_pokemon.h"
#include "constants/wild_pokemon_densities.h"
#include "constants/species.h"

wild_pokemon_entry wild_pokemon_3_76_grass_entries[12] = {
	[WILD_POKEMON_DENSITY_GRASS_0_20_PERCENT] = 
		{.level_min = 24, .level_max = 27, .species = POKEMON_WABLU},
	[WILD_POKEMON_DENSITY_GRASS_1_20_PERCENT] = 
		{.level_min = 23, .level_max = 28, .species = POKEMON_SCHWALBINI},
	[WILD_POKEMON_DENSITY_GRASS_2_10_PERCENT] = 
		{.level_min = 24, .level_max = 28, .species = POKEMON_KRAMURX},
	[WILD_POKEMON_DENSITY_GRASS_3_10_PERCENT] = 
		{.level_min = 24, .level_max = 29, .species = POKEMON_WABLU},
	[WILD_POKEMON_DENSITY_GRASS_4_10_PERCENT] = 
		{.level_min = 24, .level_max = 27, .species = POKEMON_SCHWALBINI},
	[WILD_POKEMON_DENSITY_GRASS_5_10_PERCENT] = 
		{.level_min = 26, .level_max = 28, .species = POKEMON_KRAMURX},
	[WILD_POKEMON_DENSITY_GRASS_6_5_PERCENT] = 
		{.level_min = 26, .level_max = 28, .species = POKEMON_WABLU},
	[WILD_POKEMON_DENSITY_GRASS_7_5_PERCENT] = 
		{.level_min = 27, .level_max = 29, .species = POKEMON_SCHWALBINI},
	[WILD_POKEMON_DENSITY_GRASS_8_4_PERCENT] = 
		{.level_min = 27, .level_max = 29, .species = POKEMON_SCHWALBINI},
	[WILD_POKEMON_DENSITY_GRASS_9_4_PERCENT] = 
		{.level_min = 28, .level_max = 30, .species = POKEMON_KRAMURX},
	[WILD_POKEMON_DENSITY_GRASS_10_1_PERCENT] = 
		{.level_min = 28, .level_max = 30, .species = POKEMON_WABLU},
	[WILD_POKEMON_DENSITY_GRASS_11_1_PERCENT] = 
		{.level_min = 32, .level_max = 32, .species = POKEMON_KRAMURX},
};

wild_pokemon_habitat wild_pokemon_3_76_grass = {
	.frequency = 3, .data = wild_pokemon_3_76_grass_entries
};

wild_pokemon_data wild_pokemon_3_76 = {
	.bank = 3, .map = 76,
	.grass = &wild_pokemon_3_76_grass,
	.water = NULL,
	.other = NULL,
	.rod = NULL,
};
