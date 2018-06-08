#include "types.h"
#include "map/header.h"
#include "save.h"
#include "dungeon2.h"
#include "debug.h"
#include "constants/map_weathers.h"
#include "map/footer.h"
#include "agbmemory.h"
#include "prng.h"

map_connections dungeon2_connections = {0, NULL};

levelscript_head dungeon2_lscr [] = {
    {0, {0, 0, 0, 0} }
};

void dungeon2_compute(int dungeon_type){
    dprintf("Computing dungeon type %d\n", dungeon_type);
    switch(dungeon_type){
        case DTYPE_FOREST:
            dungeon2_compute_forest();
            break;
        case DTYPE_CAVE:
            derrf("Cave dungeon not implemented yet...\n");
            break;
    }
}

void dungeon2_init() {
    int dungeon_type = dungeon_get_type();
    dprintf("Initializing header structures for dungeon type %d\n", dungeon_type);
    switch(dungeon_type) {
      case DTYPE_FOREST: {
        dungeon2_init_forest();
        break;
      }
    }
}
