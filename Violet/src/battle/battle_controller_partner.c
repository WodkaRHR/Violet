#include "types.h"
#include "battle/state.h"
#include "battle/battler.h"
#include "battle/controller.h"
#include "battle/ai.h"
#include "constants/battle/battle_actions.h"
#include "attack.h"
#include "constants/attack_affects_whom_flags.h"
#include "mega.h"
#include "debug.h"
#include "save.h"

// Just copy the player's battle controller essentially...
void (*battle_controller_partner[BATTLE_CONTROLLER_COMMAND_CNT])() = {
    [0x0] = (void (*)(void))0x8030a91,
    [0x1] = (void (*)(void))0x80312b1,
    [0x2] = (void (*)(void))0x8031339,
    [0x3] = (void (*)(void))0x8031d8d,
    [0x4] = (void (*)(void))0x8031e01,
    [0x5] = (void (*)(void))0x8031e69,
    [0x6] = (void (*)(void))0x8032061,
    [0x7] = (void (*)(void))0x803217d,
    [0x8] = (void (*)(void))0x8032329,
    [0x9] = (void (*)(void))0x8032491,
    [0xa] = (void (*)(void))0x8032551,
    [0xb] = (void (*)(void))0x803263d,
    [0xc] = (void (*)(void))0x803265d,
    [0xd] = (void (*)(void))0x80326b1,
    [0xe] = (void (*)(void))0x8032711,
    [0xf] = (void (*)(void))0x8032741,
    [0x10] = (void (*)(void))0x80329fd,
    [0x11] = battle_controller_partner_handle_print_selection_string,
    [0x12] = battle_controller_partner_handle_choose_action, //(void (*)(void))0x8032ad5,
    [0x13] = (void (*)(void))0x8032b49,
    [0x14] = battle_controller_partner_handle_choose_move,
    [0x15] = (void (*)(void))0x8032bed,
    [0x16] = battle_controller_partner_handle_choose_pokemon, //(void (*)(void))0x8032c51,
    [0x17] = (void (*)(void))0x8032d29,
    [0x18] = (void (*)(void))0x8032d4d,
    [0x19] = (void (*)(void))0x8032e4d,
    [0x1a] = (void (*)(void))0x8032ee9,
    [0x1b] = (void (*)(void))0x8032f61,
    [0x1c] = (void (*)(void))0x8032fc9,
    [0x1d] = (void (*)(void))0x8033035,
    [0x1e] = (void (*)(void))0x8033041,
    [0x1f] = (void (*)(void))0x80330f5,
    [0x20] = (void (*)(void))0x8033125,
    [0x21] = (void (*)(void))0x8033131,
    [0x22] = (void (*)(void))0x8033145,
    [0x23] = (void (*)(void))0x8033159,
    [0x24] = (void (*)(void))0x803316d,
    [0x25] = (void (*)(void))0x8033181,
    [0x26] = (void (*)(void))0x803319d,
    [0x27] = (void (*)(void))0x80331d5,
    [0x28] = (void (*)(void))0x80331ed,
    [0x29] = (void (*)(void))0x8033215,
    [0x2a] = (void (*)(void))0x8033285,
    [0x2b] = (void (*)(void))0x8033291,
    [0x2c] = (void (*)(void))0x80332d5,
    [0x2d] = (void (*)(void))0x8033305,
    [0x2e] = (void (*)(void))0x8033345,
    [0x2f] = (void (*)(void))0x8033379,
    [0x30] = (void (*)(void))0x803366d,
    [0x31] = (void (*)(void))0x8033779,
    [0x32] = (void (*)(void))0x80337c9,
    [0x33] = (void (*)(void))0x80337ed,
    [0x34] = (void (*)(void))0x803384d,
    [0x35] = (void (*)(void))0x80338b5,
    [0x36] = (void (*)(void))0x8033911,
    [0x37] = (void (*)(void))0x8033979,
    [0x38] = (void (*)(void))0x80339c5,
};


// A shared execution finished function that either sets the controller to the player or the AI's control
void battle_controller_player_or_partner_execution_finished() {
    if (battle_is_tag() && battler_get_position(active_battler) == BATTLE_POSITION_PLAYER_RIGHT) {
        battle_controllers[active_battler] = battle_controller_partner_execute_command;
    } else {
        battle_controllers[active_battler] = battle_controller_player_execute_command;
    }
    if (battle_flags & BATTLE_LINK) {
        u8 multiplayer_idx = multiplayer_get_idx();
        battle_prepare_buffer_data_transfer_link(2, 3 + 1, &multiplayer_idx);
        battle_general_buffers0[active_battler][0] = 0x38; // Battle Controller Command: END (nop)
    } else {
        battler_marked_for_controller_execution &= ~int_bitmasks[active_battler];
    }
}

void battle_controller_partner_execute_command() {
    if (battler_marked_for_controller_execution & int_bitmasks[active_battler]) {
        u8 command_idx = battle_general_buffers0[active_battler][0];
        if (command_idx >= BATTLE_CONTROLLER_COMMAND_CNT) {
            battle_controllers[active_battler] = battle_controller_player_or_partner_execution_finished;
        } else {
            battle_controller_partner[command_idx]();
        }
    }
}

void battle_controller_partner_handle_choose_move() {

    trainer_load_ai();
    u8 move_idx = trainer_ai_choose_move_or_action();
    trainer_ai_choosing_state_t *ai_state = (trainer_ai_choosing_state_t*) &battle_general_buffers0[active_battler][4];
    switch (move_idx) {
        case AI_CHOICE_FLEE: {
            battle_controller_emit_two_values(1, BATTLE_ACTION_RUN, 0);
            break;
        }
        case AI_CHOICE_WATCH: {
            battle_controller_emit_two_values(1, BATTLE_ACTION_SAFARI_WATCH_CAREFULLY, 0);
            break;
        }
        default: { // Move chosen
            u8 affects = attacks[ai_state->moves[move_idx]].affects_whom;
            if (affects & (TARGET_USER | TARGET_UNUSED)) {
                defending_battler = active_battler;
            }
            if (affects & TARGET_BOTH_FOES) {
                defending_battler = battler_get_by_position(BATTLE_POSITION_OPPONENT_LEFT);
                if (battlers_absent & int_bitmasks[defending_battler]) // If the left is absent, target the right one...
                    defending_battler = battler_get_by_position(BATTLE_POSITION_OPPONENT_RIGHT);
            }
            dprintf("The chosen target of the partner was %d\n", defending_battler);
            // TODO: battle_controller_emit_move_chosen instead for link compatibility?
            battle_controller_emit_two_values(1, BATTLE_ACTION_EXECUTE_SCRIPT, (u16)(move_idx | (defending_battler << 8)));
            break;
        }

    }
    // Mega evolution
    // dprintf("Mega evolution for partner %d: %x\n", active_battler, battler_get_available_mega_evolution(active_battler));
    if (battler_get_available_mega_evolution(active_battler)) {
        MEGA_STATE.marked_for_mega_evolution[active_battler] = 1;
    }
    battle_controller_player_or_partner_execution_finished();
}

void battle_controller_partner_handle_print_selection_string() {
    battle_controller_player_or_partner_execution_finished();
}


void battle_controller_partner_handle_choose_action() {
    trainer_ai_try_switch_or_choose_item();
    battle_controller_player_or_partner_execution_finished();
}

void battle_controller_partner_handle_choose_pokemon() {
    u8 target_idx;
    if (battle_state->battler_to_switch_into[battler_get_position(active_battler) >> 1] == 6) {
        target_idx = battle_ai_get_pokemon_to_switch_into();
        if (target_idx == 6)
            dprintf("No pokemon to switch into (partner) for battler %d\n", active_battler);
    } else {
        target_idx = battle_state->battler_to_switch_into[battler_get_position(active_battler) >> 1];
        battle_state->battler_to_switch_into[battler_get_position(active_battler) >> 1] = 6;
    }
    battle_state->battler_to_switch_into[active_battler] = target_idx;
    battle_controller_opponent_emit_chosen_pokemon(1, target_idx, NULL);
    battle_controller_player_or_partner_execution_finished();
}