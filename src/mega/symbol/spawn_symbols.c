#include "types.h"
#include "romfuncs.h"
#include "oams.h"
#include "callbacks.h"
#include "battle.h"
#include "basestats.h"
#include "mega.h"
#include <stdbool.h>


extern const unsigned short gfx_mega_symbolTiles[];
extern const unsigned short gfx_mega_symbolPal[];

static sprite final_oam = {
    ATTR0_SHAPE_VERTICAL, ATTR1_SIZE_8_16, 0x0, 0x0
};

static oam_template symbol_template = {
    0xADDD,
    0xADDD,
    &final_oam,
    (gfx_frame**) 0x08231Bc0,
    (graphic*) 0,
    (rotscale_frame**) 0x8231BC0,
    symbol_callback

};

static graphic symbol_graphic = {gfx_mega_symbolTiles, 0x200, 0xADDD};

void spawn_symbols(u8 state) {
    if (state == 2) {

        //spawn_trigger_cb();
        restore_trigger_cbs();

        //load palette
        u8 pal_id = allocate_obj_pal(0xADDD); //allocated a palette for the tag 0xADDD
        pal_load_comp(gfx_mega_symbolPal, (u16) ((pal_id + 0x10) << 4), 0x20);

        //load graphic
        u16 tile = load_and_alloc_obj_vram_lz77(&symbol_graphic);

        //spawn a mega symbol for each hp box
        int oams_to_spawn = is_double_battle() ? 4 : 2;
        int i;
        for (i = 0; i < oams_to_spawn; i++) {
            u8 oam_id = generate_oam_backward_search(&symbol_template, 0, 0, 0);
            oams[oam_id].private[0] = (u8) i; //each oam gets a unique bank to handle
            oams[oam_id].private[1] = tile;
        }
    }
}

u16 mega_symbol_tile_displacement(u16 species){
    if(species == POKEMON_GROUDON_REGENT){
        return 2;
    }
    //TODO: When including other regents use their crown
    //kyogre: return 4;
    //rayquaza: return 6;
    return 0;
}

void symbol_callback(oam_object *self) {

    //check if the pokemon is a mega pokemon
    u8 slot = (u8) self->private[0];
    u16 species = battlers[slot].species;

    int i;
    bool is_mega = false;
    bool is_emperor = false;
    for (i = 0; megas[i].species != 0xFFFF; i++) {
        //scan mega table for the a mega pokemon that matches this one
        if (megas[i].target == species) {
            is_mega = true;
            if (megas[i].regent) {
                is_emperor = true;
            }
            break;
        }
    }

    //mirror the hp box oam if is mega
    if (is_mega) {
        u8 *healthbar_oam_id_by_slot = (u8*) 0x3004F40;
        u8 hp_oam = healthbar_oam_id_by_slot[slot];

        if (!(oams[hp_oam].bitfield2 & 4)) { //checking if the healthbox is invisible (indicated by bitfield2 bit 2

            int dxmin = is_opponent(slot) ? 30 : 36; //the x value to subtract from the start to position the icon rightly

            //mirror the hp_box_priority
            u16 priority_bits = (oams[hp_oam].final_oam.attr2 & 0xC00);
            self->final_oam.attr2 = (u16) ((self->final_oam.attr2 & (~0xC00)) | priority_bits);

            self->x = oams[hp_oam].x;
            self->x2 = (s16) (oams[hp_oam].x2 + dxmin);
            self->y = (s16) (oams[hp_oam].y - 2);
            self->y2 = (s16) (oams[hp_oam].y2);

            self->bitfield2 = (u8) (self->bitfield2 & (~0x4)); //visible

            u16 base_tile = (u16) (self->private[1]+ mega_symbol_tile_displacement(species));

            self->final_oam.attr2 = (u16) ((self->final_oam.attr2 & (~0x3FF)) | base_tile);

            return;
        }
    }

    //This point is reached, we hide the oam
    self->bitfield2 = (u16) (self->bitfield2 | 0x4); //invisible

}