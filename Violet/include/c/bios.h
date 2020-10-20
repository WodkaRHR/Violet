/*
 * bios.h
 *
 *  Created on: May 1, 2018
 *      Author: dominik
 */

#ifndef INCLUDE_C_BIOS_H_
#define INCLUDE_C_BIOS_H_

/**
 * Calls software interrupt for lz77 decompression into WRAM
 * @param src Source offset (lz77 compressed)
 * @param dst Destination offset (in WRAM)
 */
void lz77uncompwram(const void* src, void *dst);

/**
 * Calls software interrupt for lz77 decompression into VRAM
 * @param src Source offset (lz77 compressed)
 * @param dst Destination offset (in VRAM)
 */
void lz77uncompvram(const void *src, void*dst);

#define CPUSET_COPY 0x0
#define CPUSET_FILL 0x1000000
#define CPUSET_HALFWORD 0x0
#define CPUSET_WORD 0x4000000
#define CPUSET_WORD_SIZE(x) ((u32)((x) >> 2))
#define CPUSET_HALFWORD_SIZE(x) ((u32)((x) >> 1))
/**
 * Calls software interrupt for cpuset
 * @param src Source data (aligned to data unit size)
 * @param dst Destination offset (alinged to data unit size)
 * @param cntrl Data size in units | data unit size | mode
 */
void cpuset(const void *src, void *dst, u32 cnt_and_mode);

#define CPUFASTSET_COPY 0x0
#define CPUFASTSET_FILL 0x1000000
#define CPUFASTSET_SIZE(x) ((u32)((x) >> 2))

/**
 * Calls software interrupt for cpufastset (in units of 4 bytes)
 * @param src Source data (4 aligned)
 * @param dst Destination offset (4 aligned)
 * @param cntrl Data size in units of 4 | mode
 */
void cpufastset(void *src, void *dst, u32 cnt_and_mode);

/**
 * Calcualtes the square root of x
 * @param x x
 * @return sqrt(x)
 */
u16 sqrt32(u32 x);


#endif /* INCLUDE_C_BIOS_H_ */
