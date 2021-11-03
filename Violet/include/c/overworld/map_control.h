/*
 * map_control.h
 *
 *  Created on: Mar 28, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_OVERWORLD_MAP_CONTROL_H_
#define INCLUDE_C_OVERWORLD_MAP_CONTROL_H_

#include "constants/map_types.h"
#include "map/header.h"

// essentially the 

typedef struct{
    u8 x_start_pixel;
    u8 y_start_pixel;
    u8 x_start;
    u8 y_start;
    u8 copy_to_vram;
} map_camera_offset_t;

extern map_camera_offset_t map_camera_offset;

typedef struct {
    u8 active:1;
    s32 x;
    s32 y;
} overworld_viewport_t;

extern overworld_viewport_t overworld_viewport;

/**
 * Initialize map blocks (executes mapscripts for blocks as well)
 **/
void map_blocks_initialize();

extern void (*map_reload_continuation)();

/**
 * Returns the state of an overworld flag (0 or != 0)
 * This is done by accessing 0x02037078 and masking the byte with the flag
 * Known flags:
 * 8 (=1 << 3) : If not set wildbattles in water are not triggered
 */
int overworld_flag_get(u8 flag);

/**
 * Reloads the map state
 */
void map_reload();

/**
 * Reloads the map state without fadings (small mapreaload)
 */
void map_reload_no_fading();

/**
 * Standard callback1 for the overworld
 **/
void overworld_callback1();

/**
 * Callback1 for overworld that only proceeds overworld tasks and doesn't set vblank callbacks according to fading state
 **/
void overworld_callback1_proceed_only();

/**
 * Callback function that proceeds standard overworld tasks
 **/
void overworld_proceed();

/**
 * Sets up the data for warping the player
 * @param bank the target map bank
 * @param map the target map id
 * @param exit the target warp
 * @param x the target x coordiante (if exit == 0xFF)
 * @param y the target y coordiante (if exit == 0xFF)
 */
void warp_setup(u8 bank, u8 map, u8 exit, s16 x, s16 y);

/**
 * Performs warp setup based on an event on a map.
 * @param bank the bank the warp targets
 * @param map the map inside the bank the warp targets
 * @param warp_idx the idx of the warp targeted by the triggering warp

 */
void warp_setup_by_event (u8 target_bank, u8 target_map, u8 warp_idx);

/**
 * Sets up callbacks to execute the warping process setup by warp_setup
 */
void warp_setup_callbacks();

/**
 * Sets up callback to execute the escalator warp
 **/
void warp_setup_escalator_callback();

/**
 * Sets up callback to execute the lavaridge b1f warp
 **/
void warp_setup_lavaridge_b1f_callback();

/**
 * Sets up callback to execute the lavaridge 1f warp
 **/
void warp_setup_lavaridge_1f_callback();

/**
 * Sets up callback to execute the union room warp
 **/
void warp_setup_union_room_callback();

// Overworld script for falling hole warps
extern u8 ow_script_fall_warp[];

/**
 * Sets up target data for where to warp to
 * @param header the map header where the warp is located
 * @param warp_idx which warp event to use
 * @param position at which position to warp from (7 shifted)
 **/
void warp_setup_by_event_and_position(map_header_t *header, s8 warp_idx, position_t *position);

/**
 * Sets the target warp map number to a dynamic idx (for escalators etc)
 * @param unused unused
 **/
void warp_set_dynamic_map_idx(u8 unused);

/**
 * Gets the weather currently present
 * @return The current weather
 */
u8 map_get_current_weather();

/**
 * Plays the fadeout sound for rain
 */
void map_play_sound_rain_fadeout();

/**
 * Sets up the warp teleport callback
 */
void warp_setup_teleport_callback();

/**
 * Sets up the warp muted teleport callback
 */
void warp_setup_muted_callback();

/**
 * Callback for the teleport warp
 * @param self self-reference
 **/
void warp_teleport_callback(u8 self);

/**
 * Starts the animation that moves the player out of the screen with a teleport warp
 **/
void warp_teleport_start_player_warp_out_animation();

/**
 * Attempts to fade out the current map music
 **/
void map_fade_out_music();

/**
 * Enables the warp flags
 */
void warp_enable_flags();

/**
 * Sets the warp history (last used warp)
 * @param unused not used
 * @param bank target map bank
 * @param map target map id
 * @param exit target warp
 * @param x x coordiante if exit == 0xFF
 * @param y y coordinate if exit == 0xFF
 */
void warp_last_map_set(int unused, u8 bank, u8 map, u8 exit, s16 x, s16 y);

/**
 * Sets the last map to a map and the current player coordinates.
 * @param unused unused
 * @param bank the bank to set
 * @param map the map to set
 * @param warp_idx the warp index to set
 */
void warp_last_map_set_on_current_position(s8 unused, u8 bank, u8 map, s8 warp_idx);

/**
 * Updates the last outdoor map to the current map if and only if the current map is an outdoor
 * map and the target map is not an outdoor map.
 * @param x position on the current map (+7 because of borders)
 * @param y position on the current map (+7 because of borders)
 */
void warp_update_last_outdoor_map (s16 x, s16 y);

/**
 * Sets a map and position to the last outdoor map visited by the player.
 * @param bank the bank of the last outdoor map
 * @param map the map index of the last outdoor map
 * @param exit the warp index on the last outdoor map (or -1)
 * @param x the x coordinate on the last outdoor map (or -1)
 * @param y the y coordinate on the last outdoor map (or -1)
 */
void warp_set_last_outdoor_map (u8 bank, u8 map, s8 exit, s16 x, s16 y);

/**
 * Frees all components of the overworld (i.e. virtual maps)
 */
void overworld_free();

/**
 * Stops the lighting effect in the pokemon league (if present)
 **/
void overworld_pokemon_league_stop_lighting_effect();

/**
 * Callback1 that triggers a mapreload. Used if the overworld interface was not visible previously.
 **/
void overworld_return_to();

/**
 * Checks if a safari is currently ongoing.
 * @return if a safari is currently active
 **/
bool safari_is_active();

/**
 * Checks if the map idx is 0x40 and the bank 0 (TODO: what kind of map is this? maybe link?)
 * @return if the current bank is 0 and the current map idx is 0x40
 **/
bool is_bank_x0_and_map_x40();

/**
 * Checks if the link update callback is currently cb0
 * @return if the callback for updating the link state is cb0
 **/
bool callback_update_link_state_is_cb0();

/**
 * Checks if flash is usable on the current map.
 * @param if flash is usable on the current map, i.e. the map is darkened
 **/
bool map_flash_usable();

/**
 * Continuation that is invoked by the map realod function itself and that continues a script.
 **/
void map_reload_continuation_resume_script();

/**
 * Continuation that plays the map song, (goes into previously on quest) and enables the script context.
 **/
void map_reload_continuation_exit_warp();

/**
 * Callback for map reload that opens the start menu after map reload.
 **/
void map_reload_and_open_start_menu();

/**
 * Proceeds the ambient cries, i.e. it may, if the delay is finished, play an ambient cry
 * @param state the state of the ambient cry
 * @param delay the delay of the ambient cry
 **/
void ambient_cry_proceed(u16 *state, u16 *delay);

/**
 * Gets the offset in the tilemap buffers of the overworld using a position and the camera state
 * @param c the camera state
 * @param x the x coordinate
 * @param y the y coordinate
 * @return -1 on failure, otherwise the offset in the bg tilemaps
 **/
int map_position_to_bg_tilemap_offset(map_camera_offset_t *c, s16 x, s16 y);

/**
 * Shows the name of the map namespace as popup.
 * @param pal_into_restore If the palette is to be saved into the restore buffer
 **/
void map_transition_show_namespace(bool pal_into_restore);

/**
 * Gets the type of the previous map
 * @return type of the previous map
 **/
u8 map_previous_get_type();

/**
 * Gets the type of the current map (i.e. map to transition to)
 * @return type of the current map
 **/
u8 map_current_get_type();

/**
 * Gets if a transition is using an exit from a dark indoor place (e.g. caves)
 * @param previous_type the previous map type
 * @param current_type the current type, i.e. the type to transition to
 * @return if the transition is an exit
 **/
bool map_transition_is_exit(u8 previous_type, u8 current_type);

/**
 * Moves the overworld viewport and redraws all things (npcs, bgs, ...)
 * @param dx how many blocks to move the viewport in x direction
 * @param dy how many blocks to move the viewport in y direction
 **/
void overworld_viewport_move_and_update_all(s16 dx, s16 dy);

/**
 * Fades-out the rain sound
 **/
void overworld_rain_sound_fade_out();

/**
 * Redraws the entire map view
 * @param x upper left corner
 * @param y upper left corner
 * @param footer the footer to draw
 **/
void map_draw_all_by_position_and_footer(int x, int y, map_footer_t *footer);

/**
 * Translates a map position into the displacement of the tilemap
 * @param camera the current camera offset
 * @param x x coordinate
 * @param y y coordinate
 **/
int map_position_to_tilemap_offset(map_camera_offset_t *camera, int x, int y);

/**
 * Draws a block on a map
 * @param footer the map
 * @param offset the tilemap offset
 * @param x the x coordinate
 * @param y the y coordinate
 **/
void map_draw_block_at(map_footer_t *footer, int offset, int x, int y);

/**
 * Draws a certain block at an offset in the tilemap
 * @param layer at which layer
 * @param block the block to draw
 * @param offset the offset in the tilemap
 **/
void map_draw_block(int layer, u16 *block, int offset);

#endif /* INCLUDE_C_OVERWORLD_MAP_CONTROL_H_ */
