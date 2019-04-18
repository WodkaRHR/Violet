#include "types.h"
#include "callbacks.h"
#include "save.h"
#include "tile/any_grass.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "debug.h"
#include "color.h"
#include "music.h"
#include "vars.h"
#include "flags.h"

/*
 * Per each map on each bank we get an additional gras animation by this routine (a table determines which one)
 * Other extensions would be kind of inappropriate concerning the effort to put into
 * A table states which grass animation is on which map-bank combination
 */

extern const unsigned int gfx_grass_ashTiles[];
extern const unsigned short gfx_grass_ashPal[];
extern unsigned int gfx_rock_climb_animTiles[];
extern unsigned int gfx_rock_climb_animPal[];
extern u32 gfx_shallow_waterTiles[];
extern u32 gfx_graveyard_grassTiles[];
extern color_t gfx_graveyard_grassPal[16];

extern gfx_frame *overworld_effect_gfx_anim_table_grass[];

sprite overworld_effect_grass_sprite = {
    ATTR0_SHAPE_SQUARE, ATTR1_SIZE_16_16, ATTR2_PRIO(2), 0
};

graphic ash_grass_graphics[] = {
    {&gfx_grass_ashTiles[0x0], 0x80, 0},
    {&gfx_grass_ashTiles[0x20], 0x80, 0},
    {&gfx_grass_ashTiles[0x40], 0x80, 0},
    {&gfx_grass_ashTiles[0x60], 0x80, 0},
    {NULL, 0x80, 0}
};

graphic graveyard_grass_graphics[] = {
    {&gfx_graveyard_grassTiles[0], 0x80, 0},
    {&gfx_graveyard_grassTiles[0x20], 0x80, 0},
    {&gfx_graveyard_grassTiles[0x40], 0x80, 0},
    {&gfx_graveyard_grassTiles[0x60], 0x80, 0},
    {NULL, 0x80, 0}
};

palette any_grass_pals[] = {
    {gfx_grass_ashPal, 0x1080, 0},
    {gfx_graveyard_grassPal, 0x1081, 0}
};

oam_template any_grass_templates[] = {
    {0xFFFF, 0x1080, &overworld_effect_grass_sprite, overworld_effect_gfx_anim_table_grass,
    ash_grass_graphics, oam_rotscale_anim_table_null, overworld_effect_oam_callback_grass},
    {0xFFFF, 0x1081, &overworld_effect_grass_sprite, overworld_effect_gfx_anim_table_grass,
    graveyard_grass_graphics, oam_rotscale_anim_table_null, overworld_effect_oam_callback_grass}
};

gfx_frame rock_climb_gfx_anim[] = {
		{0, 10}, {1, 10}, {2, 10}, {3, 10}, {4, 10}, {GFX_ANIM_END, 0}
};

gfx_frame *rock_climb_gfx_anim_table[] = {rock_climb_gfx_anim};

graphic rock_climb_graphics[] = {
		{&gfx_rock_climb_animTiles[0 * 16 * 16 / 8], 16 * 16 / 2, 0},
		{&gfx_rock_climb_animTiles[1 * 16 * 16 / 8], 16 * 16 / 2, 0},
		{&gfx_rock_climb_animTiles[2 * 16 * 16 / 8], 16 * 16 / 2, 0},
		{&gfx_rock_climb_animTiles[3 * 16 * 16 / 8], 16 * 16 / 2, 0},
		{&gfx_rock_climb_animTiles[4 * 16 * 16 / 8], 16 * 16 / 2, 0},
	    {NULL, 16 * 16 / 2, 0}
};

sprite rock_climb_sprite = {
		ATTR0_SHAPE_SQUARE, ATTR1_SIZE_16_16, ATTR2_PRIO(1), 0
};

oam_template rock_climb_template = {
		0xFFFF, 0x7731, &rock_climb_sprite, rock_climb_gfx_anim_table, rock_climb_graphics,
		oam_rotscale_anim_table_null, oam_null_callback
};

palette rock_climb_pal = {
		gfx_rock_climb_animPal, 0x7731, 0
};

graphic shallow_water_graphics[] = {
    {&gfx_shallow_waterTiles[0], 0x80, 0},
    {&gfx_shallow_waterTiles[0x20], 0x80, 0},
    {&gfx_shallow_waterTiles[0x40], 0x80, 0},
    {&gfx_shallow_waterTiles[0x60], 0x80, 0},
    {&gfx_shallow_waterTiles[0x80], 0x80, 0},
};

any_grass tile_any_grasses[ANY_GRASS_CNT] = {
    {0, 0, 2, true, (oam_template *)0x083A52E4, NULL, any_grass_step, any_grass_player_step_null}, //Normal Grass, behavior 2 triggered by any map
    {0, 0, 3, true, (oam_template *)0x083A5800, NULL, any_grass_step, any_grass_player_step_null},
    {3, 24, 0xBb, false, &any_grass_templates[0], &any_grass_pals[0], any_grass_step, ash_grass_player_step},
    {18, 3, 0xBb, false, &any_grass_templates[0], &any_grass_pals[0], any_grass_step, ash_grass_player_step},
    {1, 30, 0xBb, false, &any_grass_templates[0], &any_grass_pals[0], any_grass_step, ash_grass_player_step},
    {0, 12, 0xBb, false, &any_grass_templates[0], &any_grass_pals[0], any_grass_step, ash_grass_player_step},
	{0, 0, 0xBD, true, &rock_climb_template, &rock_climb_pal, rock_climb_step, any_grass_player_step_null},
	{3, 12, 0xBb, false, &any_grass_templates[1], &any_grass_pals[1], any_grass_step, any_grass_player_step_null},
    {0xFF, 0xFF, 0xFF, false, NULL, NULL, nullsub, any_grass_player_step_null} 
};

void any_grass_step(){
    play_sound(0x15C);
}

void rock_climb_step(){
	play_sound(0x7C);
}

bool tile_is_any_grass(u8 behavior){
    return behavior == 0x3; //we abuse "tall grass" byte for any grass
}

bool tile_is_high_grass(u8 behavior){
    return behavior == 2 || behavior == 0xD1 || behavior == 0xBb || behavior == 0xBD;
}


u8 *ash_grass_player_step(){
    u16 *collected = var_access(ASH);
    if(checkflag(ASHBAG_RECEIVED) && *collected < 50000){
        (*collected)++;
    }
    return NULL;
}

u8 *any_grass_player_step_null(){
    return NULL;
}

/**
 * Initializes any grass instead of tall grass(takes x, y to spawn oam), if none can be initialized it returns 64 (:= none)
 * @param pos
 * @return 
 */
u8 tile_any_grass_init(coordinate_t *pos){
    int i;
    s16 x = (s16)overworld_effect_state.x;
    s16 y = (s16)overworld_effect_state.y;
    u8 behavior = (u8)block_get_behaviour_by_pos(x, y);
    for(i = 0; tile_any_grasses[i].bank != 0xFF || tile_any_grasses[i].map != 0xFF; i++){
        if(tile_any_grasses[i].triggered_by_behavior == behavior &&(
                (save1->bank == tile_any_grasses[i].bank && 
                save1->map == tile_any_grasses[i].map )|| tile_any_grasses[i].apply_to_every_map)){
            
            if(tile_any_grasses[i].init_func)
                tile_any_grasses[i].init_func();
            
            //Load appropriate palette if present
            if(tile_any_grasses[i].pal){
                u8 pal_id = oam_palette_get_index(tile_any_grasses[i].pal->tag);
                if(pal_id == 0xFF)
                    pal_id = oam_allocate_palette(tile_any_grasses[i].pal->tag);
                u16 color = (u16)(pal_id * 16 + 256);
                pal_copy(tile_any_grasses[i].pal->pal, color, 32);
                pal_apply_shader(pal_id);
                pal_apply_fading(pal_id);
            }
            
            //Instanciate appropriate template
            return oam_new_backward_search(tile_any_grasses[i].temp, pos->x, pos->y, 0);
        }
        
    }
    debug1(behavior);
    err(ERR_UNKOWN_GRASS_ANIMATION);
    return 64;
}

