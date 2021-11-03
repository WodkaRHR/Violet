#include "types.h"
#include "oam.h"
#include "overworld/sprite.h"
#include "overworld/effect.h"
#include "overworld/map_control.h"
#include "vars.h"
#include "io.h"
#include "callbacks.h"
#include "save.h"
#include "math.h"
#include "debug.h"
#include "map/cloud.h"
#include "bios.h"
#include "overworld/npc.h"
#include "prng.h"

static graphic overworld_effect_explosion_graphics[] = {
    [0] = {.sprite = gfx_overworld_explosionTiles + 0 * GRAPHIC_SIZE_4BPP(32, 32), .size = GRAPHIC_SIZE_4BPP(32, 32), .tag = 0xFFFF},
    [1] = {.sprite = gfx_overworld_explosionTiles + 1 * GRAPHIC_SIZE_4BPP(32, 32), .size = GRAPHIC_SIZE_4BPP(32, 32), .tag = 0xFFFF},
    [2] = {.sprite = gfx_overworld_explosionTiles + 2 * GRAPHIC_SIZE_4BPP(32, 32), .size = GRAPHIC_SIZE_4BPP(32, 32), .tag = 0xFFFF},
    [3] = {.sprite = gfx_overworld_explosionTiles + 3 * GRAPHIC_SIZE_4BPP(32, 32), .size = GRAPHIC_SIZE_4BPP(32, 32), .tag = 0xFFFF},
};

palette overworld_effect_explosion_palette = {
    .pal = gfx_overworld_explosionPal, .tag = GFX_TAG_OVERWORLD_EFFECT_EXPLOSION,
};

static sprite overworld_effect_explosion_sprite = {
    .attr0 = ATTR0_SHAPE_SQUARE, .attr1 = ATTR1_SIZE_32_32, .attr2 = ATTR2_PRIO(1),
};

static gfx_frame overworld_effect_explosion_gfx_animation[] = {
    {.data = 0, .duration = 0}, {.data = 0, .duration = 5}, {.data = 1, .duration = 5}, {.data = 2, .duration = 5}, 
    {.data = 3, .duration = 5}, {.data = GFX_ANIM_END}, 
};

static gfx_frame *overworld_effect_explosion_gfx_animations[] = {overworld_effect_explosion_gfx_animation};

static void overworld_effect_explosion_oam_callback(oam_object *self) {
    if (self->flags & OAM_FLAG_GFX_ANIM_END) {
        overworld_effect_delete(self, OVERWORLD_EFFECT_EXPLOSION);
    }
}

static oam_template overworld_effect_explosion_oam_template = {
    .tiles_tag = 0xFFFF, .pal_tag = GFX_TAG_OVERWORLD_EFFECT_EXPLOSION,
    .graphics = overworld_effect_explosion_graphics,
    .oam = &overworld_effect_explosion_sprite, .animation = overworld_effect_explosion_gfx_animations,
    .rotscale = oam_rotscale_anim_table_null, .callback = overworld_effect_explosion_oam_callback,
};

void overworld_effect_explosion_initialize() {
    s16 x = (s16)(overworld_effect_state.x + 7);
    s16 y = (s16)(overworld_effect_state.y + 7);
    overworld_effect_ow_coordinates_to_screen_coordinates(&x, &y, 8, 8);
    u8 oam_idx = oam_new_backward_search(&overworld_effect_explosion_oam_template, x, y , 0);
    oams[oam_idx].flags |= OAM_FLAG_CENTERED;
    oam_gfx_anim_start(oams + oam_idx, 0);
}

void special_overworld_effect_explosion() {
    overworld_effect_state.x = *var_access(0x8004);
    overworld_effect_state.y = *var_access(0x8005);
    overworld_effect_new(OVERWORLD_EFFECT_EXPLOSION);
}

static graphic overworld_effect_sound_wave_graphics[] = {
    {.tag = 0xFFFF, .size = GRAPHIC_SIZE_4BPP(64, 64), .sprite = gfx_overworld_effect_sound_waveTiles},
};

palette overworld_effect_sound_wave_palette = {
    .pal = gfx_overworld_effect_sound_wavePal, .tag = GFX_TAG_OVERWORLD_EFFECT_SOUND_WAVE,
};

static sprite overworld_effect_sound_wave_sprite = {
    .attr0 = ATTR0_SHAPE_SQUARE | ATTR0_DSIZE | ATTR0_ROTSCALE, .attr1 = ATTR1_SIZE_64_64, .attr2 = ATTR2_PRIO(1),
};


static rotscale_frame overworld_effect_sound_wave_rotscale_anim[] = {
    {.affine = {.affine_x_value = 32, .affine_y_value = 32, .duration = 0}},
    {.affine = {.affine_x_value = 8, .affine_y_value = 8, .duration = 16}},
    {.command = {.command = ROTSCALE_ANIM_END}}
};

static void overworld_effect_sound_wave_oam_callback(oam_object *self) {
    // if (self->private[0]++ >= overworld_effect_sound_wave_rotscale_anim[1].affine.duration) {
    if (self->flags & OAM_FLAG_GFX_ROTSCALE_ANIM_END) {
        oam_rotscale_free(self);
        overworld_effect_delete(self, OVERWORLD_EFFECT_SOUND_WAVE);
    }
}

static gfx_frame overworld_effect_sound_wave_gfx_animation[] = {
    {.data = 0, .duration = 0}, {.data = GFX_ANIM_END}, 
};

static gfx_frame *overworld_effect_sound_wave_gfx_animations[] = {overworld_effect_sound_wave_gfx_animation};

static rotscale_frame *overworld_effect_sound_wave_rotscale_animations[] = {overworld_effect_sound_wave_rotscale_anim};

static oam_template overworld_effect_sound_wave_oam_template = {
    .tiles_tag = 0xFFFF, .pal_tag = GFX_TAG_OVERWORLD_EFFECT_SOUND_WAVE,
    .graphics = overworld_effect_sound_wave_graphics,
    .oam = &overworld_effect_sound_wave_sprite, .animation = overworld_effect_sound_wave_gfx_animations,
    .rotscale = overworld_effect_sound_wave_rotscale_animations, .callback = overworld_effect_sound_wave_oam_callback,
};



void overworld_effect_sound_wave_initialize() {
    s16 x = (s16)(overworld_effect_state.x + 7);
    s16 y = (s16)(overworld_effect_state.y + 7);
    overworld_effect_ow_coordinates_to_screen_coordinates(&x, &y, 7, 4);
    u8 oam_idx = oam_new_backward_search(&overworld_effect_sound_wave_oam_template, x, y , 0);
    oams[oam_idx].flags |= OAM_FLAG_CENTERED;
    oam_rotscale_anim_init(oams + oam_idx, 0);
    oams[oam_idx].private[0] = 0;
    // oam_gfx_anim_start(oams + oam_idx, 0);
}

void special_overworld_effect_sound_wave() {
    // overworld_effect_state.x = *var_access(0x8004);
    // overworld_effect_state.y = *var_access(0x8005);
    coordinate_t pos;
    player_get_facing_position(&pos.x, &pos.y);
    overworld_effect_state.x = pos.x - 7;
    overworld_effect_state.y = pos.y - 7;
    overworld_effect_new(OVERWORLD_EFFECT_SOUND_WAVE);
}

static void overworld_effect_npc_transparent_flicker_big_callback(u8 self) {
    u8 person_idx = (u8)big_callbacks[self].params[0];
    u16 amplitude = big_callbacks[self].params[1];
    u16 period = big_callbacks[self].params[2];
    u16 *frame = big_callbacks[self].params + 3;
    u8 npc_idx = npc_get_by_person_idx(person_idx, save1->map, save1->bank);
    if (npc_idx < NUM_NPCS) {
        if (*frame <= period) {
            FIXED t = FIXED_DIV(INT_TO_FIXED(*frame), INT_TO_FIXED(2 * period));
            int y = FIXED_TO_INT(FIXED_MUL(FIXED_SIN(t), INT_TO_FIXED(amplitude)));
            io_set(IO_BLDALPHA, (u16)(IO_BLDALPHA_EVA(31 - y) | IO_BLDALPHA_EVB(y)));
            dprintf("Set eva to %d, evb to %d\n", 31 - y, y);
            ++*frame;
            return;
        } else {
            oams[npcs[npc_idx].oam_id].final_oam.attr0 &= (u16)(~ATTR0_MODE_SEMI_TRANSPARENT);
        }
    }

    big_callback_delete(self);
    overworld_effect_remove_from_active_list(OVERWORLD_EFFECT_NPC_TRANSPARENT_FLICKER);
}

void overworld_effect_npc_transparent_flicker_initialize() {
    u8 person_idx = (u8)overworld_effect_state.x;
    u8 npc_idx = npc_get_by_person_idx(person_idx, save1->map, save1->bank);
    u8 amplitude = (u8)overworld_effect_state.y;
    u8 half_period = (u8)overworld_effect_state.height;
    u8 cb_idx = big_callback_new(overworld_effect_npc_transparent_flicker_big_callback, 1);
    big_callbacks[cb_idx].params[0] = person_idx;
    big_callbacks[cb_idx].params[1] = amplitude;
    big_callbacks[cb_idx].params[2] = half_period;
    io_set(IO_BLDCNT, IO_BLDCNT_ALPHA_BLENDING | IO_BLDCNT_BG0_SECOND | IO_BLDCNT_BG1_SECOND | 
        IO_BLDCNT_BG2_SECOND | IO_BLDCNT_BG3_SECOND | IO_BLDCNT_BACKDROP_SECOND | 
        IO_BLDCNT_OBJ_FIRST);
    io_set(IO_BLDALPHA, (u16)(IO_BLDALPHA_EVA(31) | IO_BLDALPHA_EVB(0)));
    oams[npcs[npc_idx].oam_id].final_oam.attr0 |= ATTR0_MODE_SEMI_TRANSPARENT;
}

static void overworld_effect_npc_transparent_fade_big_callback(u8 self) {
    u8 person_idx = (u8)big_callbacks[self].params[0];
    u16 from = big_callbacks[self].params[1];
    u16 to = big_callbacks[self].params[2];
    u16 duration = big_callbacks[self].params[3];
    u16 *frame = big_callbacks[self].params + 4;
    u8 npc_idx = npc_get_by_person_idx(person_idx, save1->map, save1->bank);
    if (npc_idx < NUM_NPCS) {
        if (*frame <= duration) {
            FIXED dx = INT_TO_FIXED(duration);
            FIXED dy = INT_TO_FIXED(to - from);
            FIXED m = FIXED_DIV(dy, dx);
            int y = FIXED_TO_INT(FIXED_ADD(INT_TO_FIXED(from), FIXED_MUL(m, INT_TO_FIXED(*frame))));
            io_set(IO_BLDALPHA, (u16)(IO_BLDALPHA_EVA(31 - y) | IO_BLDALPHA_EVB(y)));
            dprintf("Set eva to %d, evb to %d\n", 31 - y, y);
            if (31 <= y) {
                oams[npcs[npc_idx].oam_id].flags |= OAM_FLAG_INVISIBLE;
            } else {
                oams[npcs[npc_idx].oam_id].flags &= (u16)(~OAM_FLAG_INVISIBLE);
            }
            ++*frame;
            return;
        }
    }
    big_callback_delete(self);
    overworld_effect_remove_from_active_list(OVERWORLD_EFFECT_NPC_TRANSPARENT_FADE);
}

void overworld_effect_npc_transparent_fade_initialize() {
    u8 person_idx = (u8)overworld_effect_state.x;
    u8 npc_idx = npc_get_by_person_idx(person_idx, save1->map, save1->bank);
    u8 from = (u8)overworld_effect_state.y;
    u8 to = (u8)overworld_effect_state.height;
    u8 duration = (u8)overworld_effect_state.bg_priority;
    u8 cb_idx = big_callback_new(overworld_effect_npc_transparent_fade_big_callback, 1);
    big_callbacks[cb_idx].params[0] = person_idx;
    big_callbacks[cb_idx].params[1] = from;
    big_callbacks[cb_idx].params[2] = to;
    big_callbacks[cb_idx].params[3] = duration;
    io_set(IO_BLDCNT, IO_BLDCNT_ALPHA_BLENDING | IO_BLDCNT_BG0_SECOND | IO_BLDCNT_BG1_SECOND | 
        IO_BLDCNT_BG2_SECOND | IO_BLDCNT_BG3_SECOND | IO_BLDCNT_BACKDROP_SECOND | 
        IO_BLDCNT_OBJ_FIRST);
    io_set(IO_BLDALPHA, (u16)(IO_BLDALPHA_EVA(31) | IO_BLDALPHA_EVB(0)));
    oams[npcs[npc_idx].oam_id].final_oam.attr0 |= ATTR0_MODE_SEMI_TRANSPARENT;
}

bool overworld_effect_is_oam_outside_camera_view(s16 x, s16 y, int width, int height) {
    int left = save1->x_cam_orig + 7 - 7 - (width / 16);
    int right = save1->x_cam_orig + 7 + 7 + (width / 16);
    int top = save1->y_cam_orig + 7 - 5 - (height / 16);
    int bottom = save1->y_cam_orig + 7 + 5 + (height / 16);
    return x < left || x > right || y < top || y > bottom;
}


extern palette overworld_effect_pokeball_palette;

void overworld_effect_sliding_pokeball_load_palette() {
    // Loads the palette without applying any filters (dns or weather)
    oam_palette_load_if_not_present(&overworld_effect_pokeball_palette);
}

static void overworld_effect_whirlwind_continuation() {
    overworld_effect_remove_from_active_list(OVERWORLD_EFFECT_WHIRLWIND);
}

void overworld_effect_whirlwind_initialize() {
    oam_cloud_upstream_state_t *state = map_cloud_upstream_whirlwind_at((s16)overworld_effect_state.x, (s16)overworld_effect_state.y);
    state->contunation = overworld_effect_whirlwind_continuation;
}

static graphic overworld_effect_lightning_graphics[] = {
    [0] = {.sprite = gfx_overworld_effect_lightningTiles + 0 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [1] = {.sprite = gfx_overworld_effect_lightningTiles + 1 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [2] = {.sprite = gfx_overworld_effect_lightningTiles + 2 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [3] = {.sprite = gfx_overworld_effect_lightningTiles + 3 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [4] = {.sprite = gfx_overworld_effect_lightningTiles + 4 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [5] = {.sprite = gfx_overworld_effect_lightningTiles + 5 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [6] = {.sprite = gfx_overworld_effect_lightningTiles + 6 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [7] = {.sprite = gfx_overworld_effect_lightningTiles + 7 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
    [8] = {.sprite = gfx_overworld_effect_lightningTiles + 8 * GRAPHIC_SIZE_4BPP(16, 32), .size = GRAPHIC_SIZE_4BPP(16, 32), .tag = 0xFFFF},
};

palette overworld_effect_lightning_palette = {
    .pal = gfx_overworld_effect_lightningPal, .tag = GFX_TAG_OVERWORLD_EFFECT_LIGHTNING,
};

static sprite overworld_effect_lightning_sprite = {
    .attr0 = ATTR0_SHAPE_VERTICAL, .attr1 = ATTR1_SIZE_16_32, .attr2 = ATTR2_PRIO(1),
};

#define LIGHTNING_FRAME_DURATION 4

static gfx_frame overworld_effect_lightning_gfx_animation[] = {
    {.data = 0, .duration = 0},
    {.data = 0, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 8, .duration = LIGHTNING_FRAME_DURATION}, // empty
    {.data = 1, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 8, .duration = LIGHTNING_FRAME_DURATION}, // empty
    {.data = 2, .duration = LIGHTNING_FRAME_DURATION}, 
    {.data = 8, .duration = LIGHTNING_FRAME_DURATION}, // empty
    {.data = 1, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 8, .duration = LIGHTNING_FRAME_DURATION}, // empty & whole screen to white
    {.data = 3, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 4, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 5, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 6, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 7, .duration = LIGHTNING_FRAME_DURATION},
    {.data = 8, .duration = 0},
    {.data = GFX_ANIM_END}, 
};

static gfx_frame *overworld_effect_lightning_gfx_animations[] = {overworld_effect_lightning_gfx_animation};

static void overworld_effect_lightning_oam_callback(oam_object *self) {
    if ((self->private[3] != save1->bank || self->private[4] != save1->map) && overworld_viewport.active) {
        self->private[5] = (u16)(self->private[5] - overworld_viewport.x);
        self->private[6] = (u16)(self->private[6] - overworld_viewport.y);
        self->private[3] = save1->bank;
        self->private[4] = save1->map;
    }
    if (overworld_effect_is_oam_outside_camera_view((s16)self->private[5], (s16)self->private[6], 16, 32)) {
        self->flags |= OAM_FLAG_INVISIBLE;
    } else {
        self->flags &= (u16)(~OAM_FLAG_INVISIBLE);
    }
    u16 *frame = self->private + 1;
    if (*frame == 7 * LIGHTNING_FRAME_DURATION + 1) {
        cpuset(pals, pal_tmp, CPUSET_COPY | CPUSET_HALFWORD | CPUSET_HALFWORD_SIZE(sizeof(pals)));
        pal_set_all_to_white();
    } else if (*frame == 8 * LIGHTNING_FRAME_DURATION + 1) {
        cpuset(pal_tmp, pals, CPUSET_COPY | CPUSET_HALFWORD | CPUSET_HALFWORD_SIZE(sizeof(pals)));
    }
    ++*frame;
    if (self->flags & OAM_FLAG_GFX_ANIM_END) {
        overworld_effect_delete(self, OVERWORLD_EFFECT_LIGHTNING);
    }
}

static oam_template overworld_effect_lightning_oam_template = {
    .tiles_tag = 0xFFFF, .pal_tag = GFX_TAG_OVERWORLD_EFFECT_LIGHTNING,
    .graphics = overworld_effect_lightning_graphics,
    .oam = &overworld_effect_lightning_sprite, .animation = overworld_effect_lightning_gfx_animations,
    .rotscale = oam_rotscale_anim_table_null, .callback = overworld_effect_lightning_oam_callback,
};

void overworld_effect_lightning_initialize() {
    s16 x = (s16)(overworld_effect_state.x + 7);
    s16 y = (s16)(overworld_effect_state.y + 7);
    overworld_effect_ow_coordinates_to_screen_coordinates(&x, &y, 8, 0);
    u8 oam_idx = oam_new_backward_search(&overworld_effect_lightning_oam_template, x, y , 0);
    oams[oam_idx].flags |= OAM_FLAG_CENTERED;
    oam_gfx_anim_start(oams + oam_idx, 0);
    oams[oam_idx].private[5] = (u16)x;
    oams[oam_idx].private[6] = (u16)y;
    oams[oam_idx].private[3] = (u16)overworld_effect_state.target_ow_bank;
    oams[oam_idx].private[4] = (u16)overworld_effect_state.target_ow_and_their_map;
}

void special_overworld_effect_lightning() {
    overworld_effect_state.x = *var_access(0x8004);
    overworld_effect_state.y = *var_access(0x8005);
    overworld_effect_state.target_ow_bank = save1->bank;
    overworld_effect_state.target_ow_and_their_map = save1->map;
    overworld_effect_new(OVERWORLD_EFFECT_LIGHTNING);
}


static graphic overworld_effect_rainbow_sparkles_graphics[] = {
    [0] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 0 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [1] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 1 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [2] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 2 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [3] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 3 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [4] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 4 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [5] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 5 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [6] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 6 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [7] = {.sprite = gfx_overworld_effect_rainbow_sparklesTiles + 7 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
};

palette overworld_effect_rainbow_sparkles_palette = {
    .pal = gfx_overworld_effect_rainbow_sparklesPal, .tag = GFX_TAG_OVERWORLD_EFFECT_RAINBOW_SPARKLES,
};

static sprite overworld_effect_rainbow_sparkles_sprite = {
    .attr0 = ATTR0_SHAPE_SQUARE, .attr1 = ATTR1_SIZE_16_16, .attr2 = ATTR2_PRIO(2),
};

#define RAINBOW_SPARKLES_FRAME_DURATION 4

static gfx_frame overworld_effect_rainbow_sparkles_animation[] = {
    {.data = 0, .duration = 0},
    {.data = 0, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 1, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 2, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 3, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 4, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 5, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 6, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = 7, .duration = RAINBOW_SPARKLES_FRAME_DURATION},
    {.data = GFX_ANIM_END}, 
};

static gfx_frame *overworld_effect_rainbow_sparkles_animations[] = {overworld_effect_rainbow_sparkles_animation};

static void overworld_effect_rainbow_sparkles_oam_callback(oam_object *self) {
    oam_set_priority_by_height(self, (u8)self->private[2]);
    oam_set_subpriority_by_height((u8)self->private[2], self, 2);
    if ((self->private[3] != save1->bank || self->private[4] != save1->map) && overworld_viewport.active) {
        self->private[0] = (u16)(self->private[0] - overworld_viewport.x);
        self->private[1] = (u16)(self->private[1] - overworld_viewport.y);
        self->private[3] = save1->bank;
        self->private[4] = save1->map;
    }
    if (self->flags & OAM_FLAG_GFX_ANIM_END 
            || overworld_effect_is_oam_outside_camera_view((s16)self->private[0], (s16)self->private[1], 16, 16)) {
        overworld_effect_delete(self, OVERWORLD_EFFECT_RAINBOW_SPARKLES);
    }
}

static oam_template overworld_effect_rainbow_sparkles_oam_template = {
    .tiles_tag = 0xFFFF, .pal_tag = GFX_TAG_OVERWORLD_EFFECT_RAINBOW_SPARKLES,
    .graphics = overworld_effect_rainbow_sparkles_graphics,
    .oam = &overworld_effect_rainbow_sparkles_sprite, .animation = overworld_effect_rainbow_sparkles_animations,
    .rotscale = oam_rotscale_anim_table_null, .callback = overworld_effect_rainbow_sparkles_oam_callback,
};

void overworld_effect_rainbow_sparkles_initialize() {
    s16 x = (s16)(overworld_effect_state.x + 7);
    s16 y = (s16)(overworld_effect_state.y + 7);
    overworld_effect_ow_coordinates_to_screen_coordinates(&x, &y, 8, 0);
    u8 oam_idx = oam_new_forward_search(&overworld_effect_rainbow_sparkles_oam_template, x, y , 0);
    oam_set_priority_by_height(oams + oam_idx, 8);
    oams[oam_idx].flags |= OAM_FLAG_CENTERED;
    oam_gfx_anim_start(oams + oam_idx, 0);
    oams[oam_idx].private[0] = (u16)(overworld_effect_state.x + 7);
    oams[oam_idx].private[1] = (u16)(overworld_effect_state.y + 7);
    oams[oam_idx].private[2] = (u16)overworld_effect_state.height;
    oams[oam_idx].private[3] = (u16)overworld_effect_state.target_ow_bank;
    oams[oam_idx].private[4] = (u16)overworld_effect_state.target_ow_and_their_map;
}

void special_overworld_effect_rainbow_sparkles() {
    overworld_effect_state.x = *var_access(0x8004);
    overworld_effect_state.y = *var_access(0x8005);
    overworld_effect_state.height = *var_access(0x8006);
    overworld_effect_state.target_ow_bank = save1->bank;
    overworld_effect_state.target_ow_and_their_map = save1->map;
    overworld_effect_new(OVERWORLD_EFFECT_RAINBOW_SPARKLES);
}

static graphic overworld_effect_feathers_graphics[] = {
    [0] = {.sprite = gfx_overworld_effect_featherTiles + 0 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [1] = {.sprite = gfx_overworld_effect_featherTiles + 1 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [2] = {.sprite = gfx_overworld_effect_featherTiles + 2 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [3] = {.sprite = gfx_overworld_effect_featherTiles + 3 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [4] = {.sprite = gfx_overworld_effect_featherTiles + 4 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [5] = {.sprite = gfx_overworld_effect_featherTiles + 5 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [6] = {.sprite = gfx_overworld_effect_featherTiles + 6 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [7] = {.sprite = gfx_overworld_effect_featherTiles + 7 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [8] = {.sprite = gfx_overworld_effect_featherTiles + 8 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [9] = {.sprite = gfx_overworld_effect_featherTiles + 9 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [10] = {.sprite = gfx_overworld_effect_featherTiles + 10 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [11] = {.sprite = gfx_overworld_effect_featherTiles + 11 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [12] = {.sprite = gfx_overworld_effect_featherTiles + 12 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [13] = {.sprite = gfx_overworld_effect_featherTiles + 13 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [14] = {.sprite = gfx_overworld_effect_featherTiles + 14 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
    [15] = {.sprite = gfx_overworld_effect_featherTiles + 15 * GRAPHIC_SIZE_4BPP(16, 16), .size = GRAPHIC_SIZE_4BPP(16, 16), .tag = 0xFFFF},
};

palette overworld_effect_feathers_palette = {
    .pal = gfx_overworld_effect_featherPal, .tag = GFX_TAG_OVERWORLD_EFFECT_FEATHERS,
};

static sprite overworld_effect_feathers_sprite = {
    .attr0 = ATTR0_SHAPE_SQUARE, .attr1 = ATTR1_SIZE_16_16, .attr2 = ATTR2_PRIO(2),
};

static sprite overworld_effect_feathers_sprite_controller = {
    .attr0 = ATTR0_SHAPE_SQUARE, .attr1 = ATTR1_SIZE_16_16, .attr2 = ATTR2_PRIO(2),
};

static gfx_frame overworld_effect_feathers_animation_type_white[] = {
    {.data = 0, .duration = 0}, 
    {.data = 0, .duration = 8}, 
    {.data = 1, .duration = 8}, 
    {.data = 2, .duration = 8}, 
    {.data = 3, .duration = 8}, 
    {.data = 2, .duration = 8}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_white_flipped[] = {
    {.data = 0, .duration = 0  | GFX_ANIM_HFLIP}, 
    {.data = 0, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 1, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 2, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 3, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 2, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_red[] = {
    {.data = 4, .duration = 0}, 
    {.data = 4, .duration = 8}, 
    {.data = 5, .duration = 8}, 
    {.data = 6, .duration = 8}, 
    {.data = 7, .duration = 8}, 
    {.data = 6, .duration = 8}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_red_flipped[] = {
    {.data = 4, .duration = 0 | GFX_ANIM_HFLIP}, 
    {.data = 4, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 5, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 6, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 7, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 6, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_blue[] = {
    {.data = 8, .duration = 0}, 
    {.data = 8, .duration = 8}, 
    {.data = 9, .duration = 8}, 
    {.data = 10, .duration = 8}, 
    {.data = 11, .duration = 8}, 
    {.data = 10, .duration = 8}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_blue_flipped[] = {
    {.data = 8, .duration = 0 | GFX_ANIM_HFLIP}, 
    {.data = 8, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 9, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 10, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 11, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 10, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_yellow[] = {
    {.data = 12, .duration = 0}, 
    {.data = 12, .duration = 8}, 
    {.data = 13, .duration = 8}, 
    {.data = 14, .duration = 8}, 
    {.data = 15, .duration = 8}, 
    {.data = 14, .duration = 8}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

static gfx_frame overworld_effect_feathers_animation_type_yellow_flipped[] = {
    {.data = 12, .duration = 0 | GFX_ANIM_HFLIP}, 
    {.data = 12, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 13, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 14, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 15, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = 14, .duration = 8 | GFX_ANIM_HFLIP}, 
    {.data = GFX_ANIM_JUMP, .duration = 2}, 
};

enum {
    FEATHER_ANIMATION_TYPE_WHITE,
    FEATHER_ANIMATION_TYPE_RED,
    FEATHER_ANIMATION_TYPE_BLUE,
    FEATHER_ANIMATION_TYPE_YELLOW,
    FEATHER_ANIMATION_TYPE_WHITE_FLIPPED,
    FEATHER_ANIMATION_TYPE_RED_FLIPPED,
    FEATHER_ANIMATION_TYPE_BLUE_FLIPPED,
    FEATHER_ANIMATION_TYPE_YELLOW_FLIPPED,
};

static gfx_frame *overworld_effect_feathers_animations[] = {
    [FEATHER_ANIMATION_TYPE_WHITE] = overworld_effect_feathers_animation_type_white,
    [FEATHER_ANIMATION_TYPE_RED] = overworld_effect_feathers_animation_type_red,
    [FEATHER_ANIMATION_TYPE_BLUE] = overworld_effect_feathers_animation_type_blue,
    [FEATHER_ANIMATION_TYPE_YELLOW] = overworld_effect_feathers_animation_type_yellow,
    [FEATHER_ANIMATION_TYPE_WHITE_FLIPPED] = overworld_effect_feathers_animation_type_white_flipped,
    [FEATHER_ANIMATION_TYPE_RED_FLIPPED] = overworld_effect_feathers_animation_type_red_flipped,
    [FEATHER_ANIMATION_TYPE_BLUE_FLIPPED] = overworld_effect_feathers_animation_type_blue_flipped,
    [FEATHER_ANIMATION_TYPE_YELLOW_FLIPPED] = overworld_effect_feathers_animation_type_yellow_flipped,
};

// static rotscale_frame overworld_effect_feathers_affine_animation[] = {
//     {.affine = {.rotation = 1, .duration = 12}},
//     {.affine = {.rotation = (u8)(-1), .duration = 24}}, 
//     {.affine = {.rotation = 1, .duration = 12}},
//     {.command = {.command = ROTSCALE_ANIM_JUMP, .parameter = 0}},  
// };

// static rotscale_frame *overworld_effect_feathers_affine_animations[] = {
//     overworld_effect_feathers_affine_animation,
// };

#define FEATHERS_FRAME_DURATION 8
#define FEATHERS_FRAME_DELAY 8

static void overworld_effect_feathers_oam_callback_center(oam_object *self) {
    oam_set_priority_by_height(self, (u8)self->private[2]);
    oam_set_subpriority_by_height((u8)self->private[2], self, 2);
    self->priority_on_layer = (u8)(oams[player_state.oam_idx].priority_on_layer + 1);

    if ((self->private[3] != save1->bank || self->private[4] != save1->map) && overworld_viewport.active) {
        self->private[0] = (u16)(self->private[0] - overworld_viewport.x);
        self->private[1] = (u16)(self->private[1] - overworld_viewport.y);
        self->private[3] = save1->bank;
        self->private[4] = save1->map;
    }
    if (self->private[6] > 0 && ~overworld_effect_is_oam_outside_camera_view((s16)self->private[0], (s16)self->private[1], 16, 16)) {
        if (self->private[5] > 0) {
            self->private[5]--;
            return;
        }
        self->private[5] = FEATHERS_FRAME_DELAY;
        self->y2++;
        self->private[6]--;
    } else {
        self->private[7] = true;
        self->flags |= OAM_FLAG_INVISIBLE;
        self->callback = oam_null_callback;
    }
}

static void overworld_effect_feathers_oam_callback_gfx_anim_with_delay(oam_object *self) {
    if (self->private[6] > 0) {
        self->flags |= OAM_FLAG_INVISIBLE;
        (self->private[6])--;
    } else {
        self->flags &= (u16)(~OAM_FLAG_INVISIBLE);
        oam_gfx_anim_start(self, (u8)self->private[5]);
        self->private[5] = FEATHERS_FRAME_DELAY;
        self->private[6] = FEATHERS_FRAME_DURATION;
        self->private[7] = false; // is finished ?
        self->callback = overworld_effect_feathers_oam_callback_center;
        self->callback(self);
    }
}

static coordinate_t feather_positions[] = {
    {.x = -9, .y = -4},
    {.x = 12, .y = -7},
    {.x = -13, .y = -11},
    {.x = 8, .y = -4},
    {.x = 6, .y = -9},
    {.x = -5, .y = -4},
};

static u8 feather_types[] = {
    FEATHER_ANIMATION_TYPE_BLUE,
    FEATHER_ANIMATION_TYPE_WHITE_FLIPPED,
    FEATHER_ANIMATION_TYPE_RED_FLIPPED,
    FEATHER_ANIMATION_TYPE_YELLOW,
    FEATHER_ANIMATION_TYPE_BLUE_FLIPPED,
    FEATHER_ANIMATION_TYPE_RED,
};

#define FEATHER_START_FRAME 8

static u8 feather_delays[] = {
    FEATHER_START_FRAME + 0,
    FEATHER_START_FRAME + 8,
    FEATHER_START_FRAME + 20,
    FEATHER_START_FRAME + 26,
    FEATHER_START_FRAME + 31,
    FEATHER_START_FRAME + 40,
};


static void overworld_effect_feathers_oam_callback_controller(oam_object *self) {

    u16 *feather_oams = self->private;
    for (u8 i = 0; i < ARRAY_COUNT(feather_positions); i++) {
        if (!oams[feather_oams[i]].private[7])
            return;
    }
    for (u8 i = 0; i < ARRAY_COUNT(feather_positions); i++) {
        oam_rotscale_free(oams + feather_oams[i]);
        overworld_effect_delete_oam_and_free_resources_if_unused(oams + feather_oams[i]);
    }
    overworld_effect_delete(self, OVERWORLD_EFFECT_FEATHERS);
}

static oam_template overworld_effect_feathers_oam_template = {
    .tiles_tag = 0xFFFF, .pal_tag = GFX_TAG_OVERWORLD_EFFECT_FEATHERS,
    .graphics = overworld_effect_feathers_graphics,
    .oam = &overworld_effect_feathers_sprite, .animation = overworld_effect_feathers_animations,
    .rotscale = oam_rotscale_anim_table_null, .callback = overworld_effect_feathers_oam_callback_gfx_anim_with_delay,
};

static oam_template overworld_effect_feathers_oam_template_controller = {
    .tiles_tag = 0xFFFF, .pal_tag = 0xFFFF,
    .graphics = overworld_effect_feathers_graphics,
    .oam = &overworld_effect_feathers_sprite_controller, .animation = oam_gfx_anim_table_null,
    .rotscale = oam_rotscale_anim_table_null, .callback = overworld_effect_feathers_oam_callback_controller,
};


void overworld_effect_feathers_initialize() {
    s16 x = (s16)(overworld_effect_state.x + 7);
    s16 y = (s16)(overworld_effect_state.y + 7);
    overworld_effect_ow_coordinates_to_screen_coordinates(&x, &y, 8, 0);
    // Create a controller oam
    u8 controller_oam_idx = oam_new_forward_search(&overworld_effect_feathers_oam_template_controller, 0, 0, 0);
    oams[controller_oam_idx].flags |= OAM_FLAG_INVISIBLE;
    for (u8 i = 0; i < ARRAY_COUNT(feather_positions); i++) {
        u8 oam_idx = oam_new_forward_search(&overworld_effect_feathers_oam_template, x, y ,10);
        oam_set_priority_by_height(oams + oam_idx, (u8)overworld_effect_state.height);
        oams[oam_idx].flags |= OAM_FLAG_CENTERED;
        oams[oam_idx].private[0] = (u16)(overworld_effect_state.x + 7);
        oams[oam_idx].private[1] = (u16)(overworld_effect_state.y + 7);
        oams[oam_idx].private[2] = (u16)overworld_effect_state.height;
        oams[oam_idx].private[3] = (u16)overworld_effect_state.target_ow_bank;
        oams[oam_idx].private[4] = (u16)overworld_effect_state.target_ow_and_their_map;
        oams[oam_idx].private[5] = feather_types[i];
        oams[oam_idx].private[6] = feather_delays[i];
        oams[oam_idx].private[7] = false;
        oams[oam_idx].x2 = feather_positions[i].x;
        oams[oam_idx].y2 = feather_positions[i].y;
        oams[controller_oam_idx].private[i] = oam_idx;
    }
}

const u8 *overworld_effects[NUM_OVERWORLD_EFFECTS] = {
    [OVERWORLD_EFFECT_EXCLAMATION_MARK_ICON] = overworld_effect_script_exclamation_mark_icon,
    [OVERWORLD_EFFECT_USE_CUT_ON_GRASS] = overworld_effect_script_use_cut_on_grass,
    [OVERWORLD_EFFECT_USE_CUT_ON_TREE] = overworld_effect_script_use_cut_on_tree,
    [OVERWORLD_EFFECT_SHADOW] = overworld_effect_script_shadow,
    [OVERWORLD_EFFECT_TALL_GRASS] = overworld_effect_script_high_grass,
    [OVERWORLD_EFFECT_RIPPLE] = overworld_effect_script_ripple,
    [OVERWORLD_EFFECT_FIELD_MOVE_SHOW_MON] = overworld_effect_script_field_move_show_mon,
    [OVERWORLD_EFFECT_ASH] = overworld_effect_script_ash,
    [OVERWORLD_EFFECT_SURF_BLOB] = overworld_effect_script_surf_blob,
    [OVERWORLD_EFFECT_USE_SURF] = overworld_effect_script_use_surf,
    [OVERWORLD_EFFECT_DUST] = overworld_effect_script_dust,
    [OVERWORLD_EFFECT_USE_SECRET_POWER_CAVE] = overworld_effect_script_use_secret_power_cave,
    [OVERWORLD_EFFECT_JUMP_TALL_GRASS] = overworld_effect_script_jump_tall_grass,
    [OVERWORLD_EFFECT_SAND_FOOTPRINTS] = overworld_effect_script_sand_footprints,
    [OVERWORLD_EFFECT_JUMP_BIG_SPLASH] = overworld_effect_script_jump_big_splash,
    [OVERWORLD_EFFECT_SPLASH] = overworld_effect_script_splash,
    [OVERWORLD_EFFECT_JUMP_SMALL_SPLASH] = overworld_effect_script_jump_small_splash,
    [OVERWORLD_EFFECT_LONG_GRASS] = overworld_effect_script_tall_grass,
    [OVERWORLD_EFFECT_JUMP_LONG_GRASS] = overworld_effect_script_jump_long_grass,
    [OVERWORLD_EFFECT_UNKNOWN_19] = overworld_effect_script_unknown_19,
    [OVERWORLD_EFFECT_UNKNOWN_20] = overworld_effect_script_unknown_20,
    [OVERWORLD_EFFECT_UNKNOWN_21] = overworld_effect_script_unknown_21,
    [OVERWORLD_EFFECT_UNKNOWN_22] = overworld_effect_script_unknown_22,
    [OVERWORLD_EFFECT_BERRY_TREE_GROWTH_SPARKLE] = overworld_effect_script_berry_tree_growth_sparkle,
    [OVERWORLD_EFFECT_DEEP_SAND_FOOTPRINTS] = overworld_effect_script_deep_sand_footprints,
    [OVERWORLD_EFFECT_POKECENTER_HEAL] = overworld_effect_script_pokecenter_heal,
    [OVERWORLD_EFFECT_USE_SECRET_POWER_TREE] = overworld_effect_script_use_secret_power_tree,
    [OVERWORLD_EFFECT_USE_SECRET_POWER_SHRUB] = overworld_effect_script_use_secret_power_shrub,
    [OVERWORLD_EFFECT_TREE_DISGUISE] = overworld_effect_script_tree_disguise,
    [OVERWORLD_EFFECT_MOUNTAIN_DISGUISE] = overworld_effect_script_mountain_disguise,
    [OVERWORLD_EFFECT_NPCFLY_OUT] = overworld_effect_script_npcfly_out,
    [OVERWORLD_EFFECT_USE_FLY] = overworld_effect_script_use_fly,
    [OVERWORLD_EFFECT_FLY_IN] = overworld_effect_script_fly_in,
    [OVERWORLD_EFFECT_QUESTION_MARK_ICON] = overworld_effect_script_question_mark_icon,
    [OVERWORLD_EFFECT_FEET_IN_FLOWING_WATER] = overworld_effect_script_feet_in_flowing_water,
    [OVERWORLD_EFFECT_BIKE_TIRE_TRACKS] = overworld_effect_script_bike_tire_tracks,
    [OVERWORLD_EFFECT_SAND_DISGUISE] = overworld_effect_script_sand_disguise,
    [OVERWORLD_EFFECT_USE_ROCK_SMASH] = overworld_effect_script_use_rock_smash,
    [OVERWORLD_EFFECT_USE_DIG] = overworld_effect_script_use_dig,
    [OVERWORLD_EFFECT_SAND_PILE] = overworld_effect_script_sand_pile,
    [OVERWORLD_EFFECT_USE_STRENGTH] = overworld_effect_script_use_strength,
    [OVERWORLD_EFFECT_SHORT_GRASS] = overworld_effect_script_short_grass,
    [OVERWORLD_EFFECT_HOT_SPRINGS_WATER] = overworld_effect_script_hot_springs_water,
    [OVERWORLD_EFFECT_USE_WATERFALL] = overworld_effect_script_use_waterfall,
    [OVERWORLD_EFFECT_USE_DIVE] = overworld_effect_script_use_dive,
    [OVERWORLD_EFFECT_POKEBALL] = overworld_effect_script_pokeball,
    [OVERWORLD_EFFECT_X_ICON] = overworld_effect_script_x_icon,
    [OVERWORLD_EFFECT_NOP_47] = overworld_effect_script_nop_47,
    [OVERWORLD_EFFECT_NOP_48] = overworld_effect_script_nop_48,
    [OVERWORLD_EFFECT_POP_OUT_OF_ASH] = overworld_effect_script_pop_out_of_ash,
    [OVERWORLD_EFFECT_LAVARIDGE_GYM_WARP] = overworld_effect_script_lavaridge_gym_warp,
    [OVERWORLD_EFFECT_SWEET_SCENT] = overworld_effect_script_sweet_scent,
    [OVERWORLD_EFFECT_SAND_PILLAR] = overworld_effect_script_sand_pillar,
    [OVERWORLD_EFFECT_BUBBLES] = overworld_effect_script_bubbles,
    [OVERWORLD_EFFECT_SPARKLE] = overworld_effect_script_sparkle,
    [OVERWORLD_EFFECT_SECRET_POWER_CAVE] = overworld_effect_script_secret_power_cave,
    [OVERWORLD_EFFECT_SECRET_POWER_TREE] = overworld_effect_script_secret_power_tree,
    [OVERWORLD_EFFECT_SECRET_POWER_SHRUB] = overworld_effect_script_secret_power_shrub,
    [OVERWORLD_EFFECT_CUT_GRASS] = overworld_effect_script_cut_grass,
    [OVERWORLD_EFFECT_FIELD_MOVE_SHOW_MON_INIT] = overworld_effect_script_field_move_show_mon_init,
    [OVERWORLD_EFFECT_USE_FLY_ANCIENT_TOMB] = overworld_effect_script_use_fly_ancient_tomb,
    [OVERWORLD_EFFECT_PCTURN_ON] = overworld_effect_script_pcturn_on,
    [OVERWORLD_EFFECT_HALL_OF_FAME_RECORD] = overworld_effect_script_hall_of_fame_record,
    [OVERWORLD_EFFECT_USE_TELEPORT] = overworld_effect_script_use_teleport,
    [OVERWORLD_EFFECT_SMILEY_FACE_ICON] = overworld_effect_script_smiley_face_icon,
    [OVERWORLD_EFFECT_USE_VS_SEEKER] = overworld_effect_script_use_vs_seeker,
    [OVERWORLD_EFFECT_DOUBLE_EXCL_MARK_ICON] = overworld_effect_script_double_excl_mark_icon,
    [OVERWORLD_EFFECT_MOVE_DEOXYS_ROCK] = overworld_effect_script_move_deoxys_rock,
    [OVERWORLD_EFFECT_UNK_44] = overworld_effect_script_unk_44,
    [OVERWORLD_EFFECT_UNK_45] = overworld_effect_script_unk_45,
    [OVERWORLD_EFFECT_EXPLOSION] = overworld_effect_script_explosion,
    [OVERWORLD_EFFECT_NPC_TRANSPARENT_FLICKER] = overworld_effect_script_npc_transparent_flicker,
    [OVERWORLD_EFFECT_NPC_TRANSPARENT_FADE] = overworld_effect_script_npc_transparent_fade,
    [OVERWORLD_EFFECT_SOUND_WAVE] = overworld_effect_script_sound_wave,
    [OVERWORLD_EFFECT_WHIRLWIND] = overworld_effect_script_whirlwind,
    [OVERWORLD_EFFECT_LIGHTNING] = overworld_effect_script_lightning,
    [OVERWORLD_EFFECT_RAINBOW_SPARKLES] = overworld_effect_script_rainbow_sparkles,
    [OVERWORLD_EFFECT_FEATHERS] = overworld_effect_script_feathers,
};