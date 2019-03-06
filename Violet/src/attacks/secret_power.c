/*
 * secret_power.c
 *
 *  Created on: Sep 29, 2018
 *      Author: dominik
 */

#include "types.h"
#include "battle/battlescript.h"
#include "battle/bg.h"
#include "constants/battle_bgs.h"
#include "constants/battle_effects.h"
#include "battle/state.h"
#include "constants/attacks.h"
#include "battle/attack.h"
#include "callbacks.h"

void bsc_cmd_xE4_secret_power() {
	switch (battle_bg_get_id()) {
	case BATTLE_BG_GRASS:
		battle_effects[3] = BATTLE_EFFECT_POISON;
		break;
	case BATTLE_BG_STREET:
	case BATTLE_BG_GYM:
		battle_effects[3] = BATTLE_EFFECT_PARALYSIS;
		break;
	case BATTLE_BG_MOUNTAIN:
		battle_effects[3] = BATTLE_EFFECT_CONFUSION;
		break;
	case BATTLE_BG_POND:
		battle_effects[3] = BATTLE_EFFECT_LOWER_INITIATIVE;
		break;
	case BATTLE_BG_CLOUD:
		battle_effects[3] = BATTLE_EFFECT_ICE;
		break;
	case BATTLE_BG_SHORE:
	case BATTLE_BG_MILL:
		battle_effects[3] = BATTLE_EFFECT_LOWER_ACCURACY;
		break;
	case BATTLE_BG_OCEAN:
		battle_effects[3] = BATTLE_EFFECT_LOWER_ATTACK;
		break;
	case BATTLE_BG_CAVE:
	case BATTLE_BG_WATER_CAVE:
		battle_effects[3] = BATTLE_EFFECT_FLINCH;
		break;
	case BATTLE_BG_DESERT:
		battle_effects[3] = BATTLE_EFFECT_RESIDUAL_DAMAGE;
		break;
	case BATTLE_BG_MUSEUM:
		battle_effects[3] = BATTLE_EFFECT_LOWER_SPECIAL_DEFENSE;
		break;
	case BATTLE_BG_FIRE:
		battle_effects[3] = BATTLE_EFFECT_FIRE;
		break;
	default:
	case BATTLE_BG_EVOLUTION:
	case BATTLE_BG_CAPTURE:
		battle_effects[3] = BATTLE_EFFECT_NONE;
		break;
	}
	bsc_offset++;
}

void attack_anim_task_secret_power(u8 self) {
	// Instead of hardcoding the jump to the fitting animation into the script itself we write
	// a command for this.
	u16 attack;
	switch (battle_bg_get_id()) {
	case BATTLE_BG_STREET:
		attack = ATTACK_SLAM;
		break;
	case BATTLE_BG_GRASS:
		attack = ATTACK_ZAUBERBLATT;
		break;
	case BATTLE_BG_MOUNTAIN:
		attack = ATTACK_STEINHAGEL;
		break;
	case BATTLE_BG_POND:
		attack = ATTACK_BLUBBER;
		break;
	case BATTLE_BG_CLOUD:
		attack = ATTACK_WINDSCHNITT;
		break;
	case BATTLE_BG_SHORE:
		attack = ATTACK_SCHNAPPER;
		break;
	case BATTLE_BG_OCEAN:
		attack = ATTACK_SURFER;
		break;
	case BATTLE_BG_CAVE:
		attack = ATTACK_BISS;
		break;
	case BATTLE_BG_DESERT:
		attack = ATTACK_SANDGRAB;
		break;
	case BATTLE_BG_GYM:
		attack = ATTACK_NAHKAMPF;
		break;
	case BATTLE_BG_WATER_CAVE:
		attack = ATTACK_AQUAWELLE;
		break;
	case BATTLE_BG_MUSEUM:
		attack = ATTACK_ANTIK_KRAFT;
		break;
	case BATTLE_BG_FIRE:
		attack = ATTACK_FLAMMENWURF;
		break;
	default:
	case BATTLE_BG_EVOLUTION:
	case BATTLE_BG_CAPTURE:
		attack = ATTACK_TACKLE;
		break;
	case BATTLE_BG_MILL:
		attack = ATTACK_SCHNABEL;
		break;
	}
	u8 *animation = attack_anims[attack];
	attack_anim_script = animation;
	attack_anim_remove_big_callback(self);
}
