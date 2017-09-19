.include "std.s"

@// Wild data map_3_57_wild_grass
.global map_3_57_wild_grass
map_3_57_wild_grass:
.byte 0x15 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_57_wild_grass_entries

map_3_57_wild_grass_entries:
.byte 2, 3 @//Level range
.hword POKEMON_FLABEBE @// 20 percent percent
.byte 2, 3 @//Level range
.hword POKEMON_FIFFYEN @// 20 percent percent
.byte 2, 3 @//Level range
.hword POKEMON_ZIGZACHS @// 10 percent percent
.byte 3, 3 @//Level range
.hword POKEMON_FLABEBE @// 10 percent percent
.byte 3, 3 @//Level range
.hword POKEMON_FIFFYEN @// 10 percent percent
.byte 3, 3 @//Level range
.hword POKEMON_ZIGZACHS @// 10 percent percent
.byte 3, 3 @//Level range
.hword POKEMON_FLABEBE @// 5 percent percent
.byte 3, 3 @//Level range
.hword POKEMON_FIFFYEN @// 5 percent percent
.byte 3, 3 @//Level range
.hword POKEMON_ZIGZACHS @// 4 percent percent
.byte 3, 4 @//Level range
.hword POKEMON_FLABEBE @// 4 percent percent
.byte 3, 4 @//Level range
.hword POKEMON_FIFFYEN @// 1 percent percent
.byte 3, 4 @//Level range
.hword POKEMON_ZIGZACHS @// 1 percent percent

@// Wild data map_3_57_wild_water
.global map_3_57_wild_water
map_3_57_wild_water:
.byte 0x6 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_57_wild_water_entries

map_3_57_wild_water_entries:
.byte 5, 35 @//Level range
.hword POKEMON_TENTACHA @// 60 percent percent
.byte 5, 15 @//Level range
.hword POKEMON_QUABBEL @// 30 percent percent
.byte 35, 40 @//Level range
.hword POKEMON_TENTACHA @// 5 percent percent
.byte 35, 40 @//Level range
.hword POKEMON_TENTOXA @// 4 percent percent
.byte 35, 40 @//Level range
.hword POKEMON_TENTOXA @// 1 percent percent

@// Wild data map_3_57_wild_other
.global map_3_57_wild_other
map_3_57_wild_other:
.byte 0x0 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_57_wild_other_entries

map_3_57_wild_other_entries:
.byte 9, 11 @//Level range
.hword POKEMON_ABRA @// 60 percent percent
.byte 7, 11 @//Level range
.hword POKEMON_HORNLIU @// 30 percent percent
.byte 8, 11 @//Level range
.hword POKEMON_ABRA @// 5 percent percent
.byte 8, 11 @//Level range
.hword POKEMON_WATTZAPF @// 4 percent percent
.byte 9, 12 @//Level range
.hword POKEMON_WATTZAPF @// 1 percent percent

@// Wild data map_3_57_wild_rod
.global map_3_57_wild_rod
map_3_57_wild_rod:
.byte 0x6 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_57_wild_rod_entries

map_3_57_wild_rod_entries:
.byte 5, 35 @//Level range
.hword POKEMON_TENTACHA @// 70 percent, rod percent
.byte 5, 15 @//Level range
.hword POKEMON_QUABBEL @// 30 percent, rod percent
.byte 35, 40 @//Level range
.hword POKEMON_TENTACHA @// 60 percent, profi rod percent
.byte 35, 40 @//Level range
.hword POKEMON_TENTOXA @// 20 percent, profi rod percent
.byte 35, 40 @//Level range
.hword POKEMON_TENTOXA @// 20 percent, profi rod percent
.byte 6, 0 @//Level range
.hword POKEMON_POKEMON_0 @// 40 percent, super rod percent
.byte 156, 137 @//Level range
.hword 0x83c @// 40 percent, super rod percent
.byte 5, 5 @//Level range
.hword POKEMON_KARPADOR @// 15 percent, super rod percent
.byte 5, 5 @//Level range
.hword POKEMON_KARPADOR @// 4 percent, super rod percent
.byte 5, 15 @//Level range
.hword POKEMON_SEEPER @// 1 percent, super rod percent

