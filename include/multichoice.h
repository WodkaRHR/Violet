/* 
 * File:   multichoice.h
 * Author: Domi
 *
 * Created on 28. August 2017, 18:08
 */

#ifndef MULTICHOICE_H
#define	MULTICHOICE_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "types.h"
    
    typedef struct{
        u8 **choices;
        int size;
    } multichoice_t;
    
    multichoice_t *multichoices = (multichoice_t*) 0x083DF9A0;



#ifdef	__cplusplus
}
#endif

#endif	/* MULTICHOICE_H */

