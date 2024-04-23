#include "types.h"
#include "overworld/npc.h"
#include "overworld/sprite.h"
#include "tile/block.h"
#include "tile/coordinate.h"
#include "debug.h"
#include "constants/overworld/overworld_collisions.h"
#include "constants/block_behaviour.h"

// The minecart uses the RAM data of the mach bike for moving

static u8 npc_collision_on_minecart_at(const npc *n, s16 x, s16 y, u8 direction, u16 behaviour_to) {
    u8 collision = npc_get_collision_at(n, x, y, direction, behaviour_to);
    switch (collision) {
        case COLLISION_NONE: {
            if (behaviour_to != MB_RAIL) {
                collision = COLLISION_IMPASSABLE;
            }
            break;
        }
    }
    return collision;
}

static u8 npc_player_collision_on_minecart(u8 direction) {
    npc *player = npcs + player_state.npc_idx;
    s16 x = player->from_x;
    s16 y = player->from_y;
    coordinates_apply_direction(direction, &x, &y);
    u16 behaviour = block_get_behaviour_by_pos(x, y);
    return npc_collision_on_minecart_at(player, x, y, direction, behaviour);
}

enum {
    MINECART_INPUT_HANDLER_FACING,
    MINECART_INPUT_HANDLER_TURNING,
    MINECART_INPUT_HANDLER_MOVING,
    MINECART_INPUT_HANDLER_START_MOVING,
    NUM_MINECART_INPUT_HANDLERS,
};


static void minecart_input_handler_facing(u8 direction) {
    bike_reset_tile_count_and_speed();
    npc_player_init_move_face(direction);
}

static void minecart_input_handler_turning(u8 direction) {
    bike_reset_tile_count_and_speed();
    npc_player_init_move_turn_in_place(direction);
}

static void minecart_init_move(u8 direction) {
    DEBUG("Minecart init move, direction %d, step counter %d\n", direction, player_state.bike_step_counter);
    switch (player_state.bike_step_counter) {
        case 0: {
            npc_player_init_move_walking(direction);
            break;
        }
        case 1: {
            npc_player_init_move_bike(direction);
            break;
        }
        case 2: {
            npc_player_init_move_fastest(direction);
            break;
        }
    }
}

static void minecart_input_handler_moving(u8 direction) {
    u8 collision = npc_player_collision_on_minecart(direction);
    DEBUG("Minecart input handler moving, collision %d\n", collision);
    switch (collision) {
        case COLLISION_NONE: {
            minecart_init_move(direction);
            // We speed up the bike if possible
            player_state.bike_speed = (u8)(player_state.bike_step_counter / 2);
            player_state.bike_step_counter = MIN(2, (u8)(player_state.bike_step_counter + 1));
            break;
        }
        default: {
            bike_reset_tile_count_and_speed();
            npc_player_init_move_bike_blocked(direction);
            break;
        }
    }
}


static void minecart_input_handler_start_moving(u8 direction) {

    if (player_state.bike_speed != PLAYER_SPEED_NOT_MOVING) {
        player_state.bike_step_counter = (u8)(--player_state.bike_speed); 
    }

    u8 collision = npc_player_collision_on_minecart(direction);
    switch (collision) {
        case COLLISION_NONE: {
            minecart_init_move(direction);
            break;
        }
        default: {
            bike_reset_tile_count_and_speed();
            npc_player_collision_on_bike(direction);
            break;
        }
    }
}


static void (*const minecart_input_handlers[NUM_MINECART_INPUT_HANDLERS])(u8) = {
    [MINECART_INPUT_HANDLER_FACING] = minecart_input_handler_facing,
    [MINECART_INPUT_HANDLER_TURNING] = minecart_input_handler_turning,
    [MINECART_INPUT_HANDLER_MOVING] = minecart_input_handler_moving,
    [MINECART_INPUT_HANDLER_START_MOVING] = minecart_input_handler_start_moving,
};

static u8 minecart_get_input_handler_idx(u8 *direction) {
    u8 direction_currently_moving_to = player_get_movement_direction();
    if (*direction == DIR_NONE) {
        // The cart is currently moving, the momentum keeps it going even if no input direction is given
        *direction = direction_currently_moving_to;
        if (player_state.bike_speed == PLAYER_SPEED_NOT_MOVING) {
            player_state.running_state = RUNNING_STATE_NOT_MOVING;
            return MINECART_INPUT_HANDLER_FACING;
        } else {
            player_state.running_state = RUNNING_STATE_MOVING;
            return MINECART_INPUT_HANDLER_START_MOVING;
        }
    } else if (direction_currently_moving_to != *direction && player_state.running_state != RUNNING_STATE_MOVING){
        if (player_state.bike_speed != PLAYER_SPEED_NOT_MOVING) {
            *direction = direction_currently_moving_to;
            player_state.running_state = RUNNING_STATE_MOVING;
            return MINECART_INPUT_HANDLER_START_MOVING;
        } else {
            player_state.running_state = RUNNING_STATE_TURNING;
            return MINECART_INPUT_HANDLER_TURNING;
        }
    } else {
        player_state.running_state = RUNNING_STATE_MOVING;
        return MINECART_INPUT_HANDLER_MOVING;
    } 
}

void player_npc_controll_on_minecart(u8 direction, UNUSED key keys_new, UNUSED key keys_held) {
    u8 input_handler_idx = minecart_get_input_handler_idx(&direction);
    DEBUG("Handle inputs minecart handler idx %d, direction %d\n", input_handler_idx, direction);
    minecart_input_handlers[input_handler_idx](direction);
}