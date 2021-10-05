#include "dolphin/rand.h"

extern u32 next;

/*
 * --INFO--
 * Address:	800C9598
 * Size:	000008
 */
void srand(u32 seed)
{
    next = seed;
    /*
  .loc_0x0:
    stw       r3, -0x7DD8(r13)
    blr
  */
}

/*
 * --INFO--
 * Address:	800C95A0
 * Size:	000020
 */
s16 rand(void)
{
    next = next * 0x41c64e6d + 0x3039;
    return (s16)((u16)((u32)next >> 0x10) & 0x7fff);
    /*
  .loc_0x0:
    lis       r3, 0x41C6
    lwz       r4, -0x7DD8(r13)
    addi      r0, r3, 0x4E6D
    mullw     r3, r4, r0
    addi      r0, r3, 0x3039
    stw       r0, -0x7DD8(r13)
    rlwinm    r3,r0,16,17,31
    blr
  */
}
