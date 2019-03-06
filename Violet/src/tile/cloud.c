#include "types.h"
#include "vars.h"
#include "map/header.h"
#include "map/event.h"
#include "save.h"
#include "constants/items.h"
#include "tile/cloud.h"
#include "tile/coordinate.h"
#include "overworld/npc.h"
#include "constants/flags.h"
#include "flags.h"
#include "item/item.h"
#include "overworld/map_control.h"

u8 *cloud_trigger(bool back) {
    if (item_check(ITEM_FAHRRAD, 1)) {
    	// Check if the player is facing a warp
    	position_t pos;
    	player_get_position_faced(&pos);
    	s8 warp_idx = map_get_warp_idx_by_position(&mapheader_virtual, &pos);
    	if (warp_idx != -1) {
			if (back) {
				fmem.additional_levelscript_4 = script_cloud_facings[player_get_facing() + 4];
				return script_use_cloud_back_ref;
			} else {
				fmem.additional_levelscript_4 = script_cloud_facings[player_get_facing()];
				return script_use_cloud_ref;
			}
    	}
    	return NULL;
    } else {
        return script_cloud_none_ref;
    }
}

void cloud_enter() {
	position_t pos;
	player_get_position_faced(&pos);
	s8 warp_idx = map_get_warp_idx_by_position(&mapheader_virtual, &pos);
	map_event_warp *w = &(mapheader_virtual.events->warps[warp_idx]);
	warp_setup_by_event(w->target_bank, w->target_map, w->target_warp_id);
	// warp_update_last_outdoor_map(pos.coordinates.x, pos.coordinates.y);
	// As MAP_TYPE_UNDERWATER is treaded as clouds as well, we need to update the last outdoor
	// map manually
	if (map_type_is_outside(mapheader_virtual.type)) {
		warp_set_last_outdoor_map(save1->bank, save1->map, -1, (s16)(pos.coordinates.x - 7),
			(s16)(pos.coordinates.y - 7));
	}
	warp_last_map_set_on_current_position(save1->bank, save1->map, warp_idx);
    warp_setup_muted_callback();
    warp_enable_flags();
    clearflag(TRANS_PALETTE_FETCH);
}

void warp_to_pos_with_facing() {
    u16 x = *var_access(0x8000);
    u16 y = *var_access(0x8001);
    u16 bank = *var_access(0x8002);
    u16 map = *var_access(0x8003);
    u16 facing = *var_access(0x8004);


	position_t pos;
	player_get_position(&pos);
	warp_update_last_outdoor_map(pos.coordinates.x, pos.coordinates.y);
	warp_last_map_set(0, save1->bank, save1->map, 0xFF, (s16)(pos.coordinates.x - 7),
			(s16)(pos.coordinates.y - 7));
    fmem.additional_levelscript_4 = script_cloud_facings[facing];
    warp_setup((u8) bank, (u8) map, 0xFF, (s16) x, (s16) y);
    //warp_setup_callbacks();
    warp_setup_muted_callback();
    warp_enable_flags();
    clearflag(TRANS_PALETTE_FETCH);
}

