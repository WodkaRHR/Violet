#include "types.h"
#include "romfuncs.h"
#include "callbacks.h"
#include "text.h"
#include "constants/vars.h"
#include "constants/flags.h"
#include "language.h"

u8 str_item_ashbag[] = LANGDEP(
    PSTRING("In der Aschetasche befindet\nsich BUFFER_1 Asche.PAUSE_UNTIL_PRESS"),
    PSTRING("The ashbag containsBUFFER_1\nashes.PAUSE_UNTIL_PRESS"));

void item_ashbag_field(u8 self){
    itoa(buffer0, *vardecrypt(ASH), 0, 5);
    string_decrypt(strbuf, str_item_ashbag);
    u8 n = (u8)big_callbacks[self].params[3];
    item_printstr(self, n, 4, strbuf);
}

bool special_ash_can_store(){
    u16 *ash = vardecrypt(ASH);
    u16 *picked_up = vardecrypt(0x8006);
    *picked_up = (u16)(*picked_up * 50);
    if(*ash+*picked_up <= 50000 && checkflag(ASHBAG_RECEIVED)){
        *ash = (u16)(*ash + *picked_up);
        return 1;
    }else{
        return 0;
    }
}
