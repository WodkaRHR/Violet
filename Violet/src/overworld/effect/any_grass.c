#include "types.h"
#include "callbacks.h"
#include "save.h"
#include "overworld/effect.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "debug.h"
#include "color.h"
#include "music.h"
#include "vars.h"
#include "flags.h"
#include "dns.h"
#include "overworld/weather.h"
#include "constants/block_behaviour.h"
#include "bios.h"

/*
 * Per each map on each bank we get an additional gras animation by this routine (a table determines which one)
 * Other extensions would be kind of inappropriate concerning the effort to put into
 * A table states which grass animation is on which map-bank combination
 */

extern const unsigned int gfx_grass_ashTiles[];
extern const unsigned short gfx_grass_ashPal[];
extern unsigned int gfx_rock_climb_animTiles[];
extern unsigned int gfx_rock_climb_animPal[];
extern unsigned int gfx_rock_climb_sky_island_animTiles[];
extern unsigned int gfx_rock_climb_sky_island_animPal[];
extern u32 gfx_shallow_waterTiles[];
extern u32 gfx_graveyard_grassTiles[];
extern color_t gfx_graveyard_grassPal[16];
extern unsigned int gfx_grass_haweilandTiles[];
extern color_t gfx_grass_haweilandPal[16];
extern unsigned int gfx_grass_cloudTiles[];
extern color_t gfx_grass_cloudPal[16];

extern gfx_frame *overworld_effect_gfx_anim_table_grass[];

sprite overworld_effect_grass_sprite = {
    ATTR0_SHAPE_SQUARE, ATTR1_SIZE_16_16, ATTR2_PRIO(3), 0
};

graphic haweiland_grass_graphics[] = {
    {&gfx_grass_haweilandTiles[0x0], 0x80, 0},
    {&gfx_grass_haweilandTiles[0x20], 0x80, 0},
    {&gfx_grass_haweilandTiles[0x40], 0x80, 0},
    {&gfx_grass_haweilandTiles[0x60], 0x80, 0},
    {NULL, 0x80, 0}
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

graphic cloud_grass_graphics[] = {
    {&gfx_grass_cloudTiles[0], 0x80, 0},
    {&gfx_grass_cloudTiles[0x20], 0x80, 0},
    {&gfx_grass_cloudTiles[0x40], 0x80, 0},
    {&gfx_grass_cloudTiles[0x60], 0x80, 0},
    {NULL, 0x80, 0}
};

palette any_grass_pals[] = {
    [ANY_GRASS_ASH] = {gfx_grass_ashPal, TAG_ANY_GRASS_ASH, 0},
    [ANY_GRASS_GRAVEYARD] = {gfx_graveyard_grassPal, TAG_ANY_GRASS_GRAVEYARD, 0},
    [ANY_GRASS_HAWEILAND] = {gfx_grass_haweilandPal, TAG_ANY_GRASS_HAWEILAND, 0},
    [ANY_GRASS_CLOUD] = {gfx_grass_cloudPal, TAG_ANY_GRASS_CLOUD, 0},
};



oam_template any_grass_templates[] = {
    [ANY_GRASS_ASH] = {0xFFFF, TAG_ANY_GRASS_ASH, &overworld_effect_grass_sprite, overworld_effect_gfx_anim_table_grass,
    ash_grass_graphics, oam_rotscale_anim_table_null, overworld_effect_oam_callback_grass},
    [ANY_GRASS_GRAVEYARD] = {0xFFFF, TAG_ANY_GRASS_GRAVEYARD, &overworld_effect_grass_sprite, overworld_effect_gfx_anim_table_grass,
    graveyard_grass_graphics, oam_rotscale_anim_table_null, overworld_effect_oam_callback_grass},
    [ANY_GRASS_HAWEILAND] = {0xFFFF, TAG_ANY_GRASS_HAWEILAND, &overworld_effect_grass_sprite, overworld_effect_gfx_anim_table_grass,
    haweiland_grass_graphics, oam_rotscale_anim_table_null, overworld_effect_oam_callback_grass},
    [ANY_GRASS_CLOUD] = {0xFFFF, TAG_ANY_GRASS_CLOUD, &overworld_effect_grass_sprite, overworld_effect_gfx_anim_table_grass,
    cloud_grass_graphics, oam_rotscale_anim_table_null, overworld_effect_oam_callback_grass},
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
		0xFFFF, TAG_ROCK_CLIMB, &rock_climb_sprite, rock_climb_gfx_anim_table, rock_climb_graphics,
		oam_rotscale_anim_table_null, oam_null_callback
};

static graphic rock_climb_sky_island_graphics[] = {
    {&gfx_rock_climb_sky_island_animTiles[0 * 16 * 16 / 8], 16 * 16 / 2, 0},
    {&gfx_rock_climb_sky_island_animTiles[1 * 16 * 16 / 8], 16 * 16 / 2, 0},
    {&gfx_rock_climb_sky_island_animTiles[2 * 16 * 16 / 8], 16 * 16 / 2, 0},
    {&gfx_rock_climb_sky_island_animTiles[3 * 16 * 16 / 8], 16 * 16 / 2, 0},
    {&gfx_rock_climb_sky_island_animTiles[4 * 16 * 16 / 8], 16 * 16 / 2, 0},
    {NULL, 16 * 16 / 2, 0}
};

static oam_template rock_climb_sky_island_template = {
		0xFFFF, 0x1084, &rock_climb_sprite, rock_climb_gfx_anim_table, rock_climb_sky_island_graphics,
		oam_rotscale_anim_table_null, oam_null_callback
};

palette rock_climb_pal = {
		gfx_rock_climb_animPal, TAG_ROCK_CLIMB, 0
};

palette rock_climb_sky_island_pal = {
		gfx_rock_climb_sky_island_animPal, TAG_ROCK_CLIMB_SKY_ISLANG, 0
};

graphic shallow_water_graphics[] = {
    {&gfx_shallow_waterTiles[0], 0x80, 0},
    {&gfx_shallow_waterTiles[0x20], 0x80, 0},
    {&gfx_shallow_waterTiles[0x40], 0x80, 0},
    {&gfx_shallow_waterTiles[0x60], 0x80, 0},
    {&gfx_shallow_waterTiles[0x80], 0x80, 0},
};

extern palette overworld_effect_high_grass_pal;
extern oam_template overworld_effect_oam_template_high_grass;

any_grass any_grasses[] = {
    {&maptileset0, MB_TALL_GRASS, &overworld_effect_oam_template_high_grass, &overworld_effect_high_grass_pal, any_grass_step, any_grass_player_step_null},
    {&maptileset0_kaskada, MB_TALL_GRASS, &overworld_effect_oam_template_high_grass, &overworld_effect_high_grass_pal, any_grass_step, any_grass_player_step_null},
    {&maptileset0_route_4, MB_TALL_GRASS, &overworld_effect_oam_template_high_grass, &overworld_effect_high_grass_pal, any_grass_step, any_grass_player_step_null},
    // {&maptileset0, MB_3, (oam_template *)0x083A5800, NULL, any_grass_step, any_grass_player_step_null},
    {&maptileset0, MB_BD, &rock_climb_template, &rock_climb_pal, rock_climb_step, any_grass_player_step_null},
    {&maptileset251828, MB_BB, any_grass_templates + ANY_GRASS_ASH, any_grass_pals + ANY_GRASS_ASH, any_grass_step, ash_grass_player_step},
    {&maptileset_ceometria, MB_BB, any_grass_templates + ANY_GRASS_GRAVEYARD, any_grass_pals + ANY_GRASS_GRAVEYARD, 
        any_grass_step, any_grass_player_step_null},
    {&maptileset_haweiland, MB_BB, any_grass_templates + ANY_GRASS_HAWEILAND, any_grass_pals + ANY_GRASS_HAWEILAND, 
        any_grass_step, any_grass_player_step_null},
    {&maptileset_clouds, 2, any_grass_templates + ANY_GRASS_CLOUD, any_grass_pals + ANY_GRASS_CLOUD, 
        any_grass_step, any_grass_player_step_null},
    {&maptileset_clouds, MB_BB, &rock_climb_sky_island_template, &rock_climb_sky_island_pal, 
        rock_climb_step, any_grass_player_step_null},
};

any_grass *any_grass_get_on_current_map_by_behaviour(u8 behaviour) {
    for (size_t i = 0; i < ARRAY_COUNT(any_grasses); i++) {
        if ((mapheader_virtual.footer->tileset1 == any_grasses[i].tileset || 
            mapheader_virtual.footer->tileset2 == any_grasses[i].tileset)
             && behaviour == any_grasses[i].triggered_by_behavior) 
            return any_grasses + i;
    }
    return NULL;
}

void any_grass_step(bool reinitialize){
    if (!reinitialize)
        play_sound(0x15C);
}

void rock_climb_step(bool reinitialize){
    if (!reinitialize)
	    play_sound(0x7C);
}

bool tile_is_high_grass(u8 behavior){
    return behavior == MB_TALL_GRASS || behavior == 0xD1 || behavior == MB_BB || behavior == MB_BD;
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
int tile_any_grass_init(){
    s16 x = (s16)(overworld_effect_state.x), y = (s16)(overworld_effect_state.y);
    u8 behavior = (u8)block_get_behaviour_by_pos((s16)(overworld_effect_state.x), (s16)(overworld_effect_state.y));
    any_grass *g = any_grass_get_on_current_map_by_behaviour(behavior);
    dprintf("New any grass init: 0x%x, behaviour %d.\n", g, behavior);
    if (g) {
        if (g->init_func) 
            g->init_func(overworld_effect_state.reinitialize);
        // Initialize pal
        if (g->pal) {
            u8 pal_idx = oam_palette_get_index(g->pal->tag);
            if(pal_idx == 0xFF) {
                pal_idx = oam_allocate_palette(g->pal->tag);
            }
            u16 color = (u16)(pal_idx * 16 + 256);
            pal_copy(g->pal->pal, color, 32);
            pal_apply_shaders_by_oam_palette_idx(pal_idx);
            pal_oam_apply_fading(pal_idx);
        }
        overworld_effect_ow_coordinates_to_screen_coordinates(&x, &y, 8, 8);
        u8 oam_idx = oam_new_backward_search(g->temp, x, y, 0);
        if (oam_idx < ARRAY_COUNT(oams)) {
            oam_object *o = oams + oam_idx;
            o->flags |= OAM_FLAG_CENTERED;
            o->final_oam.attr2 = (u16)((o->final_oam.attr2 & (~ATTR2_PRIO(3))) | ATTR2_PRIO(overworld_effect_state.bg_priority));
            o->private[0] = (u16)(overworld_effect_state.height);
            o->private[1] = (u16)(overworld_effect_state.x);
            o->private[2] = (u16)(overworld_effect_state.y);
            o->private[3] = (u16)(overworld_effect_state.target_ow_and_their_map);
            o->private[4] = (u16)(overworld_effect_state.target_ow_bank);
            o->private[5] = (u16)(overworld_effect_state.origin_map_and_bank);
            if (overworld_effect_state.reinitialize) {
                oam_gfx_anim_init(o, 4);
            }
            return 0;
        }   
    }
    dprintf("No grass animation possible for behaviour %d on current map.\n", behavior);
    return 0;
}

bool tag_is_ground_effect(u16 tag) {
    return tag >= 0x1000 && tag < 0x1100; // If we ever need other ground effect tags, we need to add them here...
}