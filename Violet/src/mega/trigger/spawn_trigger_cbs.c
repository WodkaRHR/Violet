#include "types.h"
#include "oam.h"
#include "callbacks.h"
#include "mega.h"
#include "superstate.h"
#include "battle/state.h"
#include "color.h"

void spawn_trigger_cb() {
    if (!big_callback_is_active(trigger_cb)) {
        big_callback_new(trigger_cb, 0);
    }
}

void trigger_cb(u8 self) {



    //first we check if we are at battle cb 1
    if (super.callbacks[1] == battle_callback1) {

        //proceed in animation
        if (!big_callbacks[self].params[0]) {
            //Count upwards
            if (++big_callbacks[self].params[1] == 0x10) {
                //Switch to counting downwards
                big_callbacks[self].params[0] = 1;
            }
        } else {
            //counting downwards
            if (!(--big_callbacks[self].params[1])) {
                //Switch to counting upwards
                big_callbacks[self].params[0] = 0;
            }
        }

        //we execute our fading stuff
        int i;
        for (i = 0; i < battler_cnt; i++) {
            if (battlers[i].trigger && !battler_is_opponent((u8) i)) {
                //we find the palette 
                u8 oam_id = battler_oams[i];
                u8 pal = (u8) (((oams[oam_id].final_oam.attr2 >> 12) & 15) + 16);
                color_t white = {.value = 0x7FFF};
                pal_blend((u16) (pal << 4), 16, (u8) (big_callbacks[self].params[1]), white);
            }
        }




    }
}
