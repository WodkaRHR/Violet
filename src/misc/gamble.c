#include "types.h"
#include "vars.h"

void special_gamble_remove() {

    u16 *v_8004 = var_access(0x8004);
    u16 *v_8005 = var_access(0x8005);
    u16 r = *v_8004 & 3;
    *v_8005 = r;
    *v_8004 = (u16) (*v_8004 - r);

}
