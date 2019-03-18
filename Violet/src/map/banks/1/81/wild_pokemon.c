#include "types.h"
#include "map/wild_pokemon.h"
#include "constants/wild_pokemon_densities.h"
#include "constants/species.h"

wild_pokemon_entry wild_pokemon_1_81_grass_entries[12] = {
	[WILD_POKEMON_DENSITY_GRASS_0_20_PERCENT] = 
		{.level_min = 26, .level_max = 30, .species = POKEMON_CAMAUB},
	[WILD_POKEMON_DENSITY_GRASS_1_20_PERCENT] = 
		{.level_min = 26, .level_max = 30, .species = POKEMON_KLEINSTEIN},
	[WILD_POKEMON_DENSITY_GRASS_2_10_PERCENT] = 
		{.level_min = 26, .level_max = 30, .species = POKEMON_SCHNECKMAG},
	[WILD_POKEMON_DENSITY_GRASS_3_10_PERCENT] = 
		{.level_min = 26, .level_max = 30, .species = POKEMON_KLEINSTEIN},
	[WILD_POKEMON_DENSITY_GRASS_4_10_PERCENT] = 
		{.level_min = 26, .level_max = 30, .species = POKEMON_SCHNECKMAG},
	[WILD_POKEMON_DENSITY_GRASS_5_10_PERCENT] = 
		{.level_min = 26, .level_max = 30, .species = POKEMON_SCHNECKMAG},
	[WILD_POKEMON_DENSITY_GRASS_6_5_PERCENT] = 
		{.level_min = 26, .level_max = 32, .species = POKEMON_KLEINSTEIN},
	[WILD_POKEMON_DENSITY_GRASS_7_5_PERCENT] = 
		{.level_min = 26, .level_max = 32, .species = POKEMON_KLEINSTEIN},
	[WILD_POKEMON_DENSITY_GRASS_8_4_PERCENT] = 
		{.level_min = 26, .level_max = 32, .species = POKEMON_GEOROK},
	[WILD_POKEMON_DENSITY_GRASS_9_4_PERCENT] = 
		{.level_min = 26, .level_max = 32, .species = POKEMON_GEOROK},
	[WILD_POKEMON_DENSITY_GRASS_10_1_PERCENT] = 
		{.level_min = 26, .level_max = 32, .species = POKEMON_KLEINSTEIN},
	[WILD_POKEMON_DENSITY_GRASS_11_1_PERCENT] = 
		{.level_min = 31, .level_max = 32, .species = POKEMON_MAGMAR},
};

wild_pokemon_habitat wild_pokemon_1_81_grass = {
	.frequency = 3, .data = wild_pokemon_1_81_grass_entries
};

wild_pokemon_data wild_pokemon_1_81 = {
	.bank = 1, .map = 81,
	.grass = &wild_pokemon_1_81_grass,
	.water = NULL,
	.other = NULL,
	.rod = NULL,
};
