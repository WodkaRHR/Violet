#include "types.h"
#include "abilities.h"
#include "battle/battler.h"
#include "battle/battlescript.h"
#include "battle/state.h"
#include "attack.h"
#include "debug.h"
#include "constants/abilities.h"
#include "constants/pokemon_types.h"
#include "prng.h"

extern u8 bsc_flinch_aura[];
extern u8 bsc_flinch_raura[];
extern u8 bsc_flinch_baura[];
extern u8 bsc_flinch_gaura[];


u8 *attack_negating_abilities(u8 defender_ability, u16 used_attack){
    
    if(defender_ability == R_KAISERAURA || defender_ability == B_KAISERAURA
            || defender_ability == G_KAISERAURA){
        if(!(rnd16() & 3)){
            //1/4 chance of flinching due to emperors aura
            stat_change[0x17] = *attacking_battler;
            stat_change[0x18] = *defending_battler;
            if(battlers[*attacking_battler].status2 & 0x1000){
                *bsc_status_flags |= 0x800;
            }
            return bsc_flinch_aura;
        }else if(defender_ability == R_KAISERAURA){
            if(attacks[used_attack].type == TYPE_WATER){
                return bsc_flinch_raura;
            }
        }else if(defender_ability == B_KAISERAURA){
            if(attacks[used_attack].type == TYPE_FIRE){
                return bsc_flinch_baura;
            }
        }else if(defender_ability == G_KAISERAURA){
            if(attacks[used_attack].type == TYPE_WATER || 
                    attacks[used_attack].type == TYPE_FIRE || 
                    attacks[used_attack].type == TYPE_GRASS){
                return bsc_flinch_gaura;
            }
        }
    }else if(defender_ability == LAERMSCHUTZ){
        //check if attack is blocked by lärmschutz
        u16 *learmschutz_blockated_moves = (u16*)0x08250028;
        int i;
        for(i = 0; learmschutz_blockated_moves[i] != 0xFFFF; i++){
            if(used_attack == learmschutz_blockated_moves[i]) break;
            
        }
        if(learmschutz_blockated_moves[i] != 0xFFFF){
            return (u8*)0x081DD704;
        }
    }
    
    
    
    return NULL;
}
