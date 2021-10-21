#include "oam.h"
#include "types.h"

extern const unsigned int gfx_high_grassTiles[];
// extern const unsigned short gfx_high_grassPal[];

graphic high_grass_graphics[5] = {
    {&gfx_high_grassTiles[0x0], 0x80, 0},
    {&gfx_high_grassTiles[0x20], 0x80, 0},
    {&gfx_high_grassTiles[0x40], 0x80, 0},
    {&gfx_high_grassTiles[0x60], 0x80, 0},
    {&gfx_high_grassTiles[0x80], 0x80, 0}};
