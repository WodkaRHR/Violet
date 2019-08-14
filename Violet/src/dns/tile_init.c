#include "types.h"
#include "rtc.h"
#include "map/footer.h"
#include "color.h"
#include "save.h"
#include "dns.h"
#include "debug.h"
#include "constants/vars.h"
#include "constants/shader_states.h"
#include "vars.h"

extern tileset maptileset0;
extern tileset maptileset1;
extern tileset maptileset2;
extern tileset maptileset3;
extern tileset maptileset4;
extern tileset maptileset245157;
extern tileset maptileset249598;
extern tileset maptileset302795;
extern tileset maptileset242637;
extern tileset maptileset251828;
extern tileset maptileset_laubdorf;


void tile_init(map_footer_t *foot) {

  color_t dns_color_light_yellow = {.rgb = {.red = 232 / 8, .green = 216 / 8, .blue = 104 / 8}};
  color_t dns_color_light_yellow_dark = {.rgb = {.red = 216 / 8, .green = 168 / 8, .blue = 48 / 8}};
  color_t dns_color_light_yellow_weak_dark = {.rgb = {.red = 248 / 8, .green = 200 / 8,
      .blue = 112 / 8}};
  color_t dns_color_light_yellow_light = {.rgb = {.red = 248 / 8, .green = 232 / 8,
      .blue = 192 / 8}};

    if (dns_on()) {
        if (foot->tileset1 == &maptileset0) {
            //Tileset1 = 0
            pal_restore[0x21] = dns_color_light_yellow;
            pal_restore[0x22] = dns_color_light_yellow;
            pal_restore[0x25] = dns_color_light_yellow_dark;
        }
        if (foot->tileset2 == &maptileset245157) {
            //Orina City TS2
            pal_restore[7*16+7] = dns_color_light_yellow_weak_dark;
            pal_restore[7*16+6] = dns_color_light_yellow;
            pal_restore[7*16+13] = dns_color_light_yellow;
            pal_restore[7*16+14] = dns_color_light_yellow_dark;
            pal_restore[7*16+10] = dns_color_light_yellow_dark;
            
            pal_restore[11*16+7] = dns_color_light_yellow_weak_dark;
            pal_restore[11*16+6] = dns_color_light_yellow;
            pal_restore[11*16+13] = dns_color_light_yellow;
            pal_restore[11*16+14] = dns_color_light_yellow_dark;
            pal_restore[11*16+10] = dns_color_light_yellow_dark;
            
            pal_restore[8*16+8] = dns_color_light_yellow;
            pal_restore[8*16+13] = dns_color_light_yellow;
            pal_restore[8*16+14] = dns_color_light_yellow;
            pal_restore[8*16+15] = dns_color_light_yellow_dark;
            
            pal_restore[9*16+12] = dns_color_light_yellow;
            pal_restore[9*16+15] = dns_color_light_yellow;
            pal_restore[9*16+11] = dns_color_light_yellow_dark;
        } else if (foot->tileset2 == &maptileset4) {
            //Route 5, enlighten torches
            pal_restore[8*16+14].value = 0x05DB;
            pal_restore[8*16+15].value = 0x0ADE;
        } else if (foot->tileset2 == &maptileset1) {
            //Route 1, Trainerschool
            pal_restore[8*16+3] = dns_color_light_yellow_dark;
            pal_restore[8*16+4] = dns_color_light_yellow;
            pal_restore[8*16+5] = dns_color_light_yellow;
            pal_restore[8*16+6] = dns_color_light_yellow_weak_dark;
            
            pal_restore[10*16+2] = dns_color_light_yellow;
            pal_restore[10*16+3] = dns_color_light_yellow_dark;
        } else if (foot->tileset2 == &maptileset249598) {
            //Aktania
            pal_restore[8*16+4] = dns_color_light_yellow_weak_dark;
            pal_restore[8*16+5] = dns_color_light_yellow_dark;
            pal_restore[8*16+14] = dns_color_light_yellow;
        } else if (foot->tileset2 == &maptileset2) {
            //Route 2, Meriana City
            pal_restore[7*16+12] = dns_color_light_yellow;
            pal_restore[7*16+13] = dns_color_light_yellow_dark;
            pal_restore[10*16+10] = dns_color_light_yellow_dark;
            pal_restore[10*16+11] = dns_color_light_yellow;
            pal_restore[10*16+12] = dns_color_light_yellow;
            pal_restore[10*16+13] = dns_color_light_yellow_weak_dark;
        } else if (foot->tileset2 == &maptileset3) {
            //Route 3
            pal_restore[10*16+10] = dns_color_light_yellow;
            pal_restore[10*16+12] = dns_color_light_yellow_dark;
        } else if (foot->tileset2 == &maptileset302795) {
            //Silvania
            pal_restore[8*16+2] = dns_color_light_yellow_dark;
            pal_restore[8*16+11] = dns_color_light_yellow;
        } else if (foot->tileset2 == &maptileset242637) {
            pal_restore[11*16+2] = dns_color_light_yellow;
            pal_restore[11*16+7] = dns_color_light_yellow_dark;
        } else if (foot->tileset2 == &maptileset251828) {
            //Inferior, Route 6, Vulcano, Ashhain
            pal_restore[11*16+2].value = 0x0CFA;
            pal_restore[11*16+9].value = 0x1A3F;
            pal_restore[11*16+10].value = 0x0D5D;
            pal_restore[11*16+12].value = 0x12BF;
            pal_restore[7*16+5].value = 0x21DF;
            pal_restore[7*16+6].value = 0x21DC;
            pal_restore[7*16+7].value = 0x2D96;
            pal_restore[7*16+8].value = 0x2954;
            pal_restore[7*16+9].value = 0x00D9;
            pal_restore[7*16+10].value = 0x00D2;
            pal_restore[7*16+11].value = 0x0C7E;
            pal_restore[7*16+12].value = 0x025E;
        } else if (foot->tileset2 == &maptileset_laubdorf) {
            pal_restore[7 * 16 + 14] = dns_color_light_yellow_dark;
            pal_restore[7 * 16 + 15] = dns_color_light_yellow;
            pal_restore[8 * 16 + 13] = dns_color_light_yellow_dark;
            pal_restore[8 * 16 + 14] = dns_color_light_yellow;
            pal_restore[8 * 16 + 15] = dns_color_light_yellow_light;
            pal_restore[9 * 16 + 13] = dns_color_light_yellow_dark;
            pal_restore[9 * 16 + 14] = dns_color_light_yellow;
            pal_restore[9 * 16 + 15] = dns_color_light_yellow_light;
        }
    }
}

void tileset_load_pal_as_ts0(map_footer_t *foot){
    fmem.current_tileset_1 = foot->tileset1;
    overworld_load_tileset_pal(foot->tileset1, 0, 0xE0);

}

void tileset_load_pal_as_ts1(map_footer_t *foot){
    fmem.current_tileset_2 = foot->tileset2;
    overworld_load_tileset_pal(foot->tileset2, 0x70, 0xC0);
}

void map_change_load_ts1_pal(map_footer_t *foot){
    tileset *t = foot->tileset2;
    if(fmem.current_tileset_2 != t){
        tileset_load_pal_as_ts1(foot);
    }
}
