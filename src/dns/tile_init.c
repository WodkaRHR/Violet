#include "types.h"
#include "romfuncs.h"
#include "rtc.h"
#include "map.h"
#include "color.h"
#include "save.h"
#include "battle.h"
#include "dns.h"
#include "debug.h"

void tile_init(mapfooter *foot) {

    if (*vardecrypt(VAR_TIMEZONE) == 1 && !*built_in_shaders && dns_on()) {

        u16 *pal_save_copy = (u16*) 0x020371F8;

        if (foot->tileset1 == &tilesets[0]) {
            //Tileset1 = 0
            pal_save_copy[0x21] = 0x377D;
            pal_save_copy[0x22] = 0x377D;
            pal_save_copy[0x25] = 0x1ABB;
        }
        if(foot->tileset2 == &tilesets[245157]){
            //Orina City TS2
            pal_save_copy[7*16+7] = 0x3FBF;
            pal_save_copy[7*16+6] = 0x377D;
            pal_save_copy[7*16+13] = 0x377D;
            pal_save_copy[7*16+14] = 0x1ABB;
            pal_save_copy[7*16+10] = 0x1ABB;
            
            pal_save_copy[11*16+7] = 0x3FBF;
            pal_save_copy[11*16+6] = 0x377D;
            pal_save_copy[11*16+13] = 0x377D;
            pal_save_copy[11*16+14] = 0x1ABB;
            pal_save_copy[11*16+10] = 0x1ABB;
            
            pal_save_copy[8*16+8] = 0x377D;
            pal_save_copy[8*16+13] = 0x377D;
            pal_save_copy[8*16+14] = 0x377D;
            pal_save_copy[8*16+15] = 0x1ABB;
            
            pal_save_copy[9*16+12] = 0x377D;
            pal_save_copy[9*16+15] = 0x377D;
            pal_save_copy[9*16+11] = 0x1ABB;
            
        }else if(foot->tileset2 == &tilesets[4]){
            //Route 5, enlighten torches
            pal_save_copy[8*16+14] = 0x05DB;
            pal_save_copy[8*16+15] = 0x0ADE;
        }else if(foot->tileset2 == &tilesets[1]){
            //Route 1, Trainerschool
            pal_save_copy[8*16+3] = 0x1ABB;
            pal_save_copy[8*16+4] = 0x377D;
            pal_save_copy[8*16+5] = 0x377D;
            pal_save_copy[8*16+6] = 0x3FBF;
            
            pal_save_copy[10*16+2] = 0x377D;
            pal_save_copy[10*16+3] = 0x1ABB;
        }else if(foot->tileset2 == &tilesets[249598]){
            //Aktania
            pal_save_copy[8*16+4] = 0x3FBF;
            pal_save_copy[8*16+5] = 0x1ABB;
            pal_save_copy[8*16+14] = 0x377D;
        }else if(foot->tileset2 == &tilesets[2]){
            //Route 2, Meriana City
            pal_save_copy[7*16+12] = 0x377D;
            pal_save_copy[7*16+13] = 0x1ABB;
            pal_save_copy[10*16+10] = 0x1ABB;
            pal_save_copy[10*16+11] = 0x377D;
            pal_save_copy[10*16+12] = 0x377D;
            pal_save_copy[10*16+13] = 0x3FBF;
        }else if(foot->tileset2 == &tilesets[3]){
            //Route 3
            pal_save_copy[10*16+10] = 0x377D;
            pal_save_copy[10*16+12] = 0x1ABB;
        }else if(foot->tileset2 == &tilesets[302795]){
            //Silvania
            pal_save_copy[8*16+2] = 0x1ABB;
            pal_save_copy[8*16+11] = 0x377D;
        }else if(foot->tileset2 == &tilesets[242637]){
            pal_save_copy[11*16+2] = 0x377D;
            pal_save_copy[11*16+7] = 0x1ABB;
        }else if(foot->tileset2 == &tilesets[251828]){
            //Inferior, Route 6, Vulcano, Ashhain
            pal_save_copy[11*16+2] = 0x0CFA;
            pal_save_copy[11*16+9] = 0x1A3F;
            pal_save_copy[11*16+10] = 0x0D5D;
            pal_save_copy[11*16+12] = 0x12BF;
            pal_save_copy[7*16+5] = 0x21DF;
            pal_save_copy[7*16+6] = 0x21DC;
            pal_save_copy[7*16+7] = 0x2D96;
            pal_save_copy[7*16+8] = 0x2954;
            pal_save_copy[7*16+9] = 0x00D9;
            pal_save_copy[7*16+10] = 0x00D2;
            pal_save_copy[7*16+11] = 0x0C7E;
            pal_save_copy[7*16+12] = 0x025E;
        }
        
    }
}

void tileset_load_pal_as_ts0(mapfooter *foot){
    fmem->current_tileset_1 = foot->tileset1;
    overworld_load_tileset_pal(foot->tileset1, 0, 0xE0);

}

void tileset_load_pal_as_ts1(mapfooter *foot){
    fmem->current_tileset_2 = foot->tileset2;
    overworld_load_tileset_pal(foot->tileset2, 0x70, 0xC0);
}

void map_change_load_ts1_pal(mapfooter *foot){
    tileset *t = foot->tileset2;
    if(fmem->current_tileset_2 != t){
        tileset_load_pal_as_ts1(foot);
    }
}