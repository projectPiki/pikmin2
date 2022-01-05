#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	800BB848
 * Size:	000044
 */
void TRKMessageSend(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x8(r3)
	  addi      r3, r3, 0x10
	  bl        0x4D7C
	  lis       r4, 0x8048
	  mr        r5, r3
	  li        r3, 0x1
	  subi      r4, r4, 0x6908
	  crclr     6, 0x6
	  bl        0x5CD4
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
