#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80305E48
	 * Size:	000118
	 */
	void makeSujiFontTable(char**, JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r24, 0x10(r1)
		  mr        r25, r3
		  mr        r24, r4
		  li        r3, 0x2C
		  bl        -0x2E1EB8
		  cmplwi    r24, 0
		  mr        r26, r3
		  bne-      .loc_0x8C
		  lis       r4, 0x8049
		  lis       r3, 0x8049
		  mr        r31, r25
		  mr        r28, r26
		  subi      r30, r4, 0x2074
		  subi      r29, r3, 0x2064
		  li        r27, 0

		.loc_0x48:
		  lwz       r3, 0x0(r31)
		  bl        -0x2C53B8
		  stw       r3, 0x0(r28)
		  lwz       r0, 0x0(r28)
		  cmplwi    r0, 0
		  bne-      .loc_0x74
		  mr        r3, r30
		  mr        r5, r29
		  li        r4, 0x51
		  crclr     6, 0x6
		  bl        -0x2DB878

		.loc_0x74:
		  addi      r27, r27, 0x1
		  addi      r28, r28, 0x4
		  cmpwi     r27, 0xB
		  addi      r31, r31, 0x4
		  blt+      .loc_0x48
		  b         .loc_0x100

		.loc_0x8C:
		  lis       r4, 0x8049
		  lis       r3, 0x8049
		  mr        r28, r25
		  mr        r27, r26
		  subi      r30, r4, 0x2074
		  subi      r31, r3, 0x2064
		  li        r25, 0
		  lis       r29, 0x5449

		.loc_0xAC:
		  mr        r3, r24
		  addi      r4, r29, 0x4D47
		  lwz       r12, 0x0(r24)
		  lwz       r5, 0x0(r28)
		  lwz       r12, 0x18(r12)
		  mtctr     r12
		  bctrl
		  stw       r3, 0x0(r27)
		  lwz       r0, 0x0(r27)
		  cmplwi    r0, 0
		  bne-      .loc_0xEC
		  mr        r3, r30
		  mr        r5, r31
		  li        r4, 0x5A
		  crclr     6, 0x6
		  bl        -0x2DB8F0

		.loc_0xEC:
		  addi      r25, r25, 0x1
		  addi      r27, r27, 0x4
		  cmpwi     r25, 0xB
		  addi      r28, r28, 0x4
		  blt+      .loc_0xAC

		.loc_0x100:
		  mr        r3, r26
		  lmw       r24, 0x10(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305F60
	 * Size:	000050
	 */
	void CounterKeta::setSuji(ResTIMG**, unsigned long)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  mr        r6, r3
		  stw       r0, 0x14(r1)
		  stw       r5, 0x4(r3)
		  lwz       r3, 0x0(r3)
		  cmplwi    r3, 0
		  beq-      .loc_0x40
		  lwz       r12, 0x0(r3)
		  li        r5, 0
		  lwz       r0, 0x4(r6)
		  lwz       r12, 0x110(r12)
		  rlwinm    r0,r0,2,0,29
		  lwzx      r4, r4, r0
		  mtctr     r12
		  bctrl

		.loc_0x40:
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305FB0
	 * Size:	000088
	 */
	void CounterKeta::calcScale(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stfd      f31, 0x20(r1)
		  psq_st    f31,0x28(r1),0,0
		  stfd      f30, 0x10(r1)
		  psq_st    f30,0x18(r1),0,0
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r3, 0x8(r3)
		  bl        0x22FAC
		  lfs       f2, 0xC(r31)
		  li        r4, 0x4
		  lfs       f0, 0x10(r31)
		  fmuls     f31, f2, f1
		  lwz       r3, 0x0(r31)
		  fmuls     f30, f0, f1
		  bl        -0x2CD338
		  lwz       r3, 0x0(r31)
		  stfs      f31, 0xCC(r3)
		  stfs      f30, 0xD0(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x2C(r12)
		  mtctr     r12
		  bctrl
		  psq_l     f31,0x28(r1),0,0
		  lfd       f31, 0x20(r1)
		  psq_l     f30,0x18(r1),0,0
		  lfd       f30, 0x10(r1)
		  lwz       r0, 0x34(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr
		*/
	}
} // namespace Screen
} // namespace og
