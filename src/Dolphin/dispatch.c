#include "types.h"

/*
 * --INFO--
 * Address:	800BC40C
 * Size:	000170
 */
void TRKDispatchMessage(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0x500
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x5A0
	  lis       r3, 0x8048
	  lbz       r5, 0x14(r30)
	  subi      r4, r3, 0x6730
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x5104
	  lbz       r0, 0x14(r30)
	  cmplwi    r0, 0x1A
	  bgt-      .loc_0x13C
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x6808
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mr        r3, r30
	  bl        0x105C
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xFD4
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xF6C
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xF04
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xEEC
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xED4
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xC80
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xA34
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0x744
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0x4A4
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0x3E4
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0x1B4
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0xFC
	  mr        r31, r3
	  b         .loc_0x13C
	  mr        r3, r30
	  bl        0x44
	  mr        r31, r3

	.loc_0x13C:
	  lis       r3, 0x8048
	  mr        r5, r31
	  subi      r4, r3, 0x6714
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x4FEC
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC57C
 * Size:	000008
 */
u32 TRKInitializeDispatcher(void) { return 0x0; }
