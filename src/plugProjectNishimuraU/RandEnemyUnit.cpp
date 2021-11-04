#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80248914
 * Size:	0000A8
 */
Cave::RandEnemyUnit::RandEnemyUnit(Game::Cave::MapUnitGenerator*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  bl        -0x71C68
	  stw       r3, 0xC(r30)
	  b         .loc_0x48

	.loc_0x44:
	  stw       r0, 0xC(r30)

	.loc_0x48:
	  li        r3, 0
	  rlwinm.   r0,r31,0,24,31
	  stw       r3, 0x30(r30)
	  stw       r3, 0x34(r30)
	  stw       r3, 0x38(r30)
	  beq-      .loc_0x7C
	  lwz       r3, 0x0(r30)
	  lbz       r0, 0x2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  li        r0, 0x1
	  stb       r0, 0x3C(r30)
	  b         .loc_0x84

	.loc_0x7C:
	  li        r0, 0
	  stb       r0, 0x3C(r30)

	.loc_0x84:
	  mr        r3, r30
	  bl        0x7C
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802489BC
 * Size:	000008
 */
void Cave::RandEnemyUnit::setManageClassPtr(Game::Cave::RandMapScore* a1)
{
	// Generated from stw r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	802489C4
 * Size:	000054
 */
void Cave::RandEnemyUnit::setEnemySlot(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r4, r0
	  bge-      .loc_0x40
	  bl        0x2A8
	  mr        r3, r31
	  bl        0x390
	  mr        r3, r31
	  bl        0x454
	  mr        r3, r31
	  bl        0x518

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248A18
 * Size:	000278
 */
void Cave::RandEnemyUnit::setEnemyTypeWeight(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stmw      r27, 0x6C(r1)
	  mr        r30, r3
	  li        r3, 0
	  lwz       r10, 0x0(r30)
	  lis       r4, 0x8048
	  lwzu      r7, 0x40C0(r4)
	  addi      r0, r1, 0x28
	  lwz       r10, 0x14(r10)
	  addi      r8, r1, 0x18
	  lwz       r6, 0x4(r4)
	  li        r9, 0
	  lwz       r5, 0x8(r4)
	  lwz       r4, 0xC(r4)
	  stw       r3, 0x28(r1)
	  stw       r3, 0x10(r30)
	  stw       r3, 0x20(r30)
	  stw       r3, 0x14(r30)
	  stw       r3, 0x24(r30)
	  stw       r3, 0x18(r30)
	  stw       r3, 0x28(r30)
	  stw       r3, 0x1C(r30)
	  stw       r3, 0x2C(r30)
	  stw       r7, 0x38(r1)
	  lwz       r10, 0x10(r10)
	  stw       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r4, 0x44(r1)
	  stw       r3, 0x18(r1)
	  stw       r3, 0x2C(r1)
	  stw       r3, 0x1C(r1)
	  stw       r3, 0x30(r1)
	  stw       r3, 0x20(r1)
	  stw       r3, 0x34(r1)
	  stw       r3, 0x24(r1)
	  b         .loc_0x15C

	.loc_0xA8:
	  lwz       r3, 0x18(r10)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  li        r11, 0x4
	  mr        r5, r0
	  mr        r6, r30
	  mr        r7, r8
	  addi      r4, r1, 0x38
	  mtctr     r11

	.loc_0xD0:
	  lwz       r12, 0x20(r3)
	  lwz       r11, 0x0(r4)
	  cmpw      r12, r11
	  bne-      .loc_0x144
	  lis       r11, 0x6666
	  lwz       r29, 0x1C(r3)
	  addi      r11, r11, 0x6667
	  mulhw     r11, r11, r29
	  srawi     r12, r11, 0x2
	  rlwinm    r28,r12,1,31,31
	  srawi     r11, r11, 0x2
	  add       r12, r12, r28
	  mulli     r28, r12, 0xA
	  rlwinm    r12,r11,1,31,31
	  add       r31, r11, r12
	  sub.      r12, r29, r28
	  beq-      .loc_0x124
	  lwz       r11, 0x0(r5)
	  add       r9, r9, r12
	  add       r11, r11, r12
	  stw       r11, 0x0(r5)

	.loc_0x124:
	  cmpwi     r31, 0
	  beq-      .loc_0x144
	  lwz       r12, 0x20(r6)
	  lwz       r11, 0x0(r7)
	  add       r12, r12, r31
	  add       r11, r11, r31
	  stw       r12, 0x20(r6)
	  stw       r11, 0x0(r7)

	.loc_0x144:
	  addi      r4, r4, 0x4
	  addi      r5, r5, 0x4
	  addi      r6, r6, 0x4
	  addi      r7, r7, 0x4
	  bdnz+     .loc_0xD0

	.loc_0x158:
	  lwz       r10, 0x4(r10)

	.loc_0x15C:
	  cmplwi    r10, 0
	  bne+      .loc_0xA8
	  lwz       r4, 0x28(r1)
	  addi      r31, r1, 0x8
	  lwz       r0, 0x2C(r1)
	  xoris     r29, r9, 0x8000
	  lwz       r5, 0x18(r1)
	  lis       r28, 0x4330
	  lwz       r3, 0x1C(r1)
	  add       r6, r4, r0
	  lwz       r0, 0x30(r1)
	  stw       r6, 0xC(r1)
	  add       r5, r5, r3
	  lwz       r3, 0x20(r1)
	  add       r6, r6, r0
	  lwz       r0, 0x34(r1)
	  stw       r6, 0x10(r1)
	  add       r5, r5, r3
	  lwz       r3, 0x24(r1)
	  add       r6, r6, r0
	  stw       r4, 0x8(r1)
	  add       r5, r5, r3
	  lfd       f30, -0x3BD0(r2)
	  stw       r6, 0x14(r1)
	  mr        r27, r5
	  lfs       f31, -0x3BD8(r2)
	  b         .loc_0x248

	.loc_0x1C8:
	  bl        -0x17F640
	  xoris     r3, r3, 0x8000
	  stw       r28, 0x48(r1)
	  li        r0, 0x4
	  mr        r4, r31
	  stw       r3, 0x4C(r1)
	  li        r5, 0
	  lfd       f0, 0x48(r1)
	  stw       r29, 0x54(r1)
	  fsubs     f0, f0, f30
	  stw       r28, 0x50(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r3, 0x5C(r1)
	  mtctr     r0

	.loc_0x214:
	  lwz       r0, 0x0(r4)
	  cmpw      r3, r0
	  bge-      .loc_0x238
	  rlwinm    r3,r5,2,0,29
	  addi      r4, r3, 0x20
	  lwzx      r3, r30, r4
	  addi      r0, r3, 0x1
	  stwx      r0, r30, r4
	  b         .loc_0x244

	.loc_0x238:
	  addi      r4, r4, 0x4
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x214

	.loc_0x244:
	  addi      r27, r27, 0x1

	.loc_0x248:
	  lwz       r0, 0xC(r30)
	  cmpw      r27, r0
	  blt+      .loc_0x1C8
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  lmw       r27, 0x6C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248C90
 * Size:	0000F0
 */
void Cave::RandEnemyUnit::setEnemyTypeC(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x2(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C
	  bl        0x364

	.loc_0x2C:
	  lwz       r3, 0x18(r30)
	  lwz       r0, 0x28(r30)
	  cmpw      r3, r0
	  bge-      .loc_0xD8
	  lwz       r3, 0x0(r30)
	  lbz       r0, 0x2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  mr        r3, r30
	  bl        0x4CC

	.loc_0x54:
	  lwz       r3, 0x18(r30)
	  lwz       r0, 0x28(r30)
	  cmpw      r3, r0
	  bge-      .loc_0xD8
	  li        r31, 0

	.loc_0x68:
	  li        r0, -0x1
	  mr        r3, r30
	  stw       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  li        r5, -0x1
	  bl        0x644
	  mr        r3, r30
	  bl        0x934
	  lwz       r4, 0x30(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xD8
	  lwz       r5, 0x8(r1)
	  cmpwi     r5, 0
	  blt-      .loc_0xD8
	  lwz       r6, 0x38(r30)
	  cmplwi    r6, 0
	  beq-      .loc_0xD8
	  mr        r3, r30
	  bl        0xAA8
	  lwz       r3, 0x18(r30)
	  lwz       r0, 0x28(r30)
	  cmpw      r3, r0
	  blt-      .loc_0xCC
	  b         .loc_0xD8
	  b         .loc_0xD8

	.loc_0xCC:
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x64
	  blt+      .loc_0x68

	.loc_0xD8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248D80
 * Size:	0000CC
 */
void Cave::RandEnemyUnit::setEnemyTypeF(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0x1C(r3)
	  lwz       r0, 0x2C(r3)
	  cmpw      r4, r0
	  bge-      .loc_0xB4
	  lwz       r4, 0x0(r30)
	  lbz       r0, 0x2(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  bl        0xB08

	.loc_0x3C:
	  lwz       r3, 0x1C(r30)
	  lwz       r0, 0x2C(r30)
	  cmpw      r3, r0
	  bge-      .loc_0xB4
	  li        r31, 0

	.loc_0x50:
	  mr        r3, r30
	  li        r4, -0x1
	  bl        0xC64
	  mr        r3, r30
	  bl        0x103C
	  lwz       r4, 0x30(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xB4
	  lwz       r5, 0x34(r30)
	  cmplwi    r5, 0
	  beq-      .loc_0xB4
	  lwz       r6, 0x38(r30)
	  cmplwi    r6, 0
	  beq-      .loc_0xB4
	  mr        r3, r30
	  bl        0x11B0
	  lwz       r3, 0x1C(r30)
	  lwz       r0, 0x2C(r30)
	  cmpw      r3, r0
	  blt-      .loc_0xA8
	  b         .loc_0xB4
	  b         .loc_0xB4

	.loc_0xA8:
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x64
	  blt+      .loc_0x50

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248E4C
 * Size:	0000CC
 */
void Cave::RandEnemyUnit::setEnemyTypeB(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0x14(r3)
	  lwz       r0, 0x24(r3)
	  cmpw      r4, r0
	  bge-      .loc_0xB4
	  lwz       r4, 0x0(r30)
	  lbz       r0, 0x2(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  bl        0x11C0

	.loc_0x3C:
	  lwz       r3, 0x14(r30)
	  lwz       r0, 0x24(r30)
	  cmpw      r3, r0
	  bge-      .loc_0xB4
	  li        r31, 0

	.loc_0x50:
	  mr        r3, r30
	  li        r4, -0x1
	  bl        0x131C
	  mr        r3, r30
	  bl        0x16F4
	  lwz       r4, 0x30(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xB4
	  lwz       r5, 0x34(r30)
	  cmplwi    r5, 0
	  beq-      .loc_0xB4
	  lwz       r6, 0x38(r30)
	  cmplwi    r6, 0
	  beq-      .loc_0xB4
	  mr        r3, r30
	  bl        0x1868
	  lwz       r3, 0x14(r30)
	  lwz       r0, 0x24(r30)
	  cmpw      r3, r0
	  blt-      .loc_0xA8
	  b         .loc_0xB4
	  b         .loc_0xB4

	.loc_0xA8:
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x64
	  blt+      .loc_0x50

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80248F18
 * Size:	000104
 */
void Cave::RandEnemyUnit::setEnemyTypeA(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r4, 0x10(r3)
	  lwz       r0, 0x20(r3)
	  cmpw      r4, r0
	  bge-      .loc_0xEC
	  lwz       r4, 0x0(r30)
	  lbz       r0, 0x2(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  bl        0x1878
	  mr        r3, r30
	  bl        0x1C80

	.loc_0x44:
	  lwz       r3, 0x10(r30)
	  lwz       r0, 0x20(r30)
	  cmpw      r3, r0
	  bge-      .loc_0xEC
	  li        r31, 0

	.loc_0x58:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x10(r1)
	  addi      r4, r1, 0x10
	  addi      r5, r1, 0xC
	  li        r6, -0x1
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1E1C
	  lwz       r5, 0x10(r1)
	  mr        r3, r30
	  lwz       r6, 0xC(r1)
	  addi      r4, r1, 0x8
	  bl        0x21DC
	  lwz       r4, 0x30(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0xEC
	  lwz       r5, 0x34(r30)
	  cmplwi    r5, 0
	  beq-      .loc_0xEC
	  lwz       r6, 0x38(r30)
	  cmplwi    r6, 0
	  beq-      .loc_0xEC
	  lwz       r7, 0x8(r1)
	  cmpwi     r7, 0
	  beq-      .loc_0xEC
	  mr        r3, r30
	  bl        0x243C
	  lwz       r3, 0x10(r30)
	  lwz       r0, 0x20(r30)
	  cmpw      r3, r0
	  blt-      .loc_0xE0
	  b         .loc_0xEC
	  b         .loc_0xEC

	.loc_0xE0:
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x64
	  blt+      .loc_0x58

	.loc_0xEC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024901C
 * Size:	000190
 */
void Cave::RandEnemyUnit::setVersusHibaTypeC(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  lbz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  li        r3, 0x28
	  bl        -0x2251A4
	  mr.       r31, r3
	  beq-      .loc_0x64
	  bl        0x1C833C
	  lis       r4, 0x804C
	  li        r3, 0
	  subi      r4, r4, 0x7A20
	  li        r0, 0x1
	  stw       r4, 0x0(r31)
	  sth       r3, 0x26(r31)
	  stw       r3, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  stw       r3, 0x20(r31)
	  stb       r3, 0x24(r31)

	.loc_0x64:
	  li        r3, 0x16
	  li        r0, 0x5
	  stw       r3, 0x18(r31)
	  li        r3, 0x4
	  stw       r0, 0x20(r31)
	  bl        -0x2251F0
	  mr.       r30, r3
	  beq-      .loc_0x8C
	  li        r0, 0
	  stw       r0, 0x0(r30)

	.loc_0x8C:
	  stw       r31, 0x0(r30)
	  lwz       r3, 0x0(r27)
	  lwz       r3, 0x28(r3)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x16C

	.loc_0xA0:
	  lwz       r3, 0x18(r28)
	  bl        -0x6548
	  cmpwi     r3, 0x1
	  bne-      .loc_0x168
	  mr        r3, r28
	  bl        -0x5070
	  mr        r31, r3
	  li        r27, 0
	  b         .loc_0x160

	.loc_0xC4:
	  mr        r3, r28
	  mr        r4, r27
	  bl        -0x5C2C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x15C
	  mr        r4, r28
	  mr        r5, r27
	  addi      r3, r1, 0x8
	  bl        -0x5460
	  lfs       f2, 0x8(r1)
	  mr        r3, r28
	  lfs       f1, 0xC(r1)
	  mr        r4, r27
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x513C
	  fmr       f31, f1
	  li        r3, 0x38
	  bl        -0x22528C
	  mr.       r29, r3
	  beq-      .loc_0x134
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x4F80
	  mr        r29, r3

	.loc_0x134:
	  fmr       f1, f31
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  bl        -0x4D58
	  mr        r3, r29
	  mr        r4, r27
	  bl        -0x4D44
	  lwz       r3, 0x1C(r28)
	  mr        r4, r29
	  bl        0x1C8294

	.loc_0x15C:
	  addi      r27, r27, 0x1

	.loc_0x160:
	  cmpw      r27, r31
	  blt+      .loc_0xC4

	.loc_0x168:
	  lwz       r28, 0x4(r28)

	.loc_0x16C:
	  cmplwi    r28, 0
	  bne+      .loc_0xA0

	.loc_0x174:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802491AC
 * Size:	0001A4
 */
void Cave::RandEnemyUnit::setVersusEnemyTypeC(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r24, 0x20(r1)
	  mr        r29, r3
	  li        r31, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x188

	.loc_0x28:
	  lwz       r3, 0x18(r30)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x184
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x184
	  lis       r3, 0x6666
	  lwz       r0, 0x1C(r4)
	  addi      r3, r3, 0x6667
	  lwz       r4, 0x18(r29)
	  mulhw     r0, r3, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  add       r31, r31, r0
	  cmpw      r31, r4
	  ble-      .loc_0x184
	  sub       r0, r31, r4
	  rlwinm    r4,r0,1,31,31
	  rlwinm    r3,r0,0,31,31
	  add       r0, r4, r0
	  xor       r3, r3, r4
	  srawi     r0, r0, 0x1
	  sub       r27, r3, r4
	  rlwinm    r26,r0,1,0,30
	  bl        -0x17FC9C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  li        r24, 0
	  lfd       f3, -0x3BD0(r2)
	  li        r28, -0x1
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x3BD8(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x3BC8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r25, 0x1C(r1)
	  b         .loc_0x128

	.loc_0xD8:
	  stw       r28, 0xC(r1)
	  mr        r3, r29
	  mr        r5, r25
	  addi      r4, r1, 0xC
	  bl        .loc_0x1A4
	  lwz       r4, 0x30(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x190
	  lwz       r5, 0xC(r1)
	  cmpwi     r5, 0
	  blt-      .loc_0x190
	  lwz       r6, 0x38(r29)
	  cmplwi    r6, 0
	  beq-      .loc_0x190
	  mr        r3, r29
	  bl        0x528
	  b         .loc_0x120
	  b         .loc_0x190

	.loc_0x120:
	  xori      r25, r25, 0x1
	  addi      r24, r24, 0x1

	.loc_0x128:
	  cmpw      r24, r26
	  blt+      .loc_0xD8
	  cmpwi     r27, 0
	  beq-      .loc_0x184
	  li        r0, -0x1
	  mr        r3, r29
	  stw       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  li        r5, -0x1
	  bl        .loc_0x1A4
	  lwz       r4, 0x30(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x190
	  lwz       r5, 0x8(r1)
	  cmpwi     r5, 0
	  blt-      .loc_0x190
	  lwz       r6, 0x38(r29)
	  cmplwi    r6, 0
	  beq-      .loc_0x190
	  mr        r3, r29
	  bl        0x4C4
	  b         .loc_0x184
	  b         .loc_0x190

	.loc_0x184:
	  lwz       r30, 0x4(r30)

	.loc_0x188:
	  cmplwi    r30, 0
	  bne+      .loc_0x28

	.loc_0x190:
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	80249350
 * Size:	0002F8
 */
void Cave::RandEnemyUnit::setSlotEnemyTypeC(int&, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC60(r1)
	  mflr      r0
	  stw       r0, 0xC64(r1)
	  stmw      r17, 0xC24(r1)
	  mr        r30, r3
	  mr        r31, r4
	  li        r22, 0
	  li        r21, 0
	  lwz       r3, 0x0(r3)
	  lbz       r0, 0x2(r3)
	  lwz       r17, 0x28(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  cmpwi     r5, 0
	  li        r20, 0
	  li        r19, 0
	  bne-      .loc_0x68
	  lwz       r3, 0x4(r30)
	  li        r4, 0x3
	  bl        0x380C
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  bl        -0x59EC
	  li        r19, -0x1
	  mr        r20, r3
	  b         .loc_0x90

	.loc_0x68:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x90
	  lwz       r3, 0x4(r30)
	  li        r4, 0x4
	  bl        0x37E0
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  bl        -0x5A18
	  li        r19, 0x1
	  mr        r20, r3

	.loc_0x90:
	  lwz       r18, 0x10(r17)
	  addi      r25, r1, 0x808
	  addi      r24, r1, 0x408
	  addi      r23, r1, 0x8
	  b         .loc_0x15C

	.loc_0xA4:
	  lwz       r3, 0x18(r18)
	  bl        -0x6880
	  cmpwi     r3, 0x1
	  beq-      .loc_0xC4
	  lwz       r3, 0x18(r18)
	  bl        -0x6890
	  cmpwi     r3, 0x2
	  bne-      .loc_0x158

	.loc_0xC4:
	  mr        r3, r18
	  bl        -0x53B8
	  mr        r29, r3
	  mr        r28, r25
	  mr        r27, r24
	  mr        r26, r23
	  li        r17, 0
	  b         .loc_0x150

	.loc_0xE4:
	  mr        r3, r18
	  mr        r4, r17
	  bl        -0x5F80
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x14C
	  stw       r18, 0x0(r28)
	  stw       r17, 0x0(r27)
	  lwz       r3, 0x0(r28)
	  bl        -0x5A98
	  add       r0, r20, r3
	  mullw     r0, r19, r0
	  stw       r0, 0x0(r26)
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  bgt-      .loc_0x128
	  li        r0, 0x1
	  stw       r0, 0x0(r26)

	.loc_0x128:
	  lwz       r0, 0x0(r26)
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x4
	  addi      r23, r23, 0x4
	  add       r21, r21, r0
	  addi      r22, r22, 0x1
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x4

	.loc_0x14C:
	  addi      r17, r17, 0x1

	.loc_0x150:
	  cmpw      r17, r29
	  blt+      .loc_0xE4

	.loc_0x158:
	  lwz       r18, 0x4(r18)

	.loc_0x15C:
	  cmplwi    r18, 0
	  bne+      .loc_0xA4
	  b         .loc_0x230

	.loc_0x168:
	  lwz       r26, 0x10(r17)
	  addi      r23, r1, 0x808
	  addi      r24, r1, 0x408
	  addi      r25, r1, 0x8
	  b         .loc_0x228

	.loc_0x17C:
	  lwz       r3, 0x18(r26)
	  bl        -0x6958
	  cmpwi     r3, 0x1
	  beq-      .loc_0x19C
	  lwz       r3, 0x18(r26)
	  bl        -0x6968
	  cmpwi     r3, 0x2
	  bne-      .loc_0x224

	.loc_0x19C:
	  mr        r3, r26
	  bl        -0x5490
	  mr        r17, r3
	  lwz       r3, 0x18(r26)
	  li        r27, 0x1
	  bl        -0x6988
	  cmpwi     r3, 0x1
	  bne-      .loc_0x1C0
	  li        r27, 0x64

	.loc_0x1C0:
	  mr        r18, r23
	  mr        r19, r24
	  mr        r20, r25
	  li        r28, 0
	  b         .loc_0x21C

	.loc_0x1D4:
	  mr        r3, r26
	  mr        r4, r28
	  bl        -0x6070
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x218
	  stw       r27, 0x0(r20)
	  addi      r23, r23, 0x4
	  addi      r24, r24, 0x4
	  addi      r25, r25, 0x4
	  lwz       r0, 0x0(r20)
	  addi      r20, r20, 0x4
	  stw       r26, 0x0(r18)
	  addi      r18, r18, 0x4
	  add       r21, r21, r0
	  addi      r22, r22, 0x1
	  stw       r28, 0x0(r19)
	  addi      r19, r19, 0x4

	.loc_0x218:
	  addi      r28, r28, 0x1

	.loc_0x21C:
	  cmpw      r28, r17
	  blt+      .loc_0x1D4

	.loc_0x224:
	  lwz       r26, 0x4(r26)

	.loc_0x228:
	  cmplwi    r26, 0
	  bne+      .loc_0x17C

	.loc_0x230:
	  li        r0, 0
	  cmpwi     r22, 0
	  stw       r0, 0x30(r30)
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x2E4
	  bl        -0x17FFF4
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC0C(r1)
	  xoris     r0, r21, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  addi      r5, r1, 0x8
	  stw       r4, 0xC08(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  li        r7, 0
	  lfd       f1, 0xC08(r1)
	  stw       r0, 0xC14(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0xC10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0xC10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xC18(r1)
	  lwz       r3, 0xC1C(r1)
	  mtctr     r22
	  cmpwi     r22, 0
	  ble-      .loc_0x2E4

	.loc_0x2A8:
	  lwz       r0, 0x0(r5)
	  add       r6, r6, r0
	  cmpw      r6, r3
	  ble-      .loc_0x2D8
	  rlwinm    r0,r7,2,0,29
	  addi      r3, r1, 0x808
	  lwzx      r4, r3, r0
	  addi      r3, r1, 0x408
	  lwzx      r0, r3, r0
	  stw       r4, 0x30(r30)
	  stw       r0, 0x0(r31)
	  b         .loc_0x2E4

	.loc_0x2D8:
	  addi      r5, r5, 0x4
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x2A8

	.loc_0x2E4:
	  lmw       r17, 0xC24(r1)
	  lwz       r0, 0xC64(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80249648
 * Size:	0001A0
 */
void Cave::RandEnemyUnit::setUnitRandEnemyTypeC(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  li        r9, 0
	  stw       r0, 0x434(r1)
	  addi      r5, r1, 0x208
	  stw       r31, 0x42C(r1)
	  addi      r31, r1, 0x8
	  mr        r6, r31
	  stw       r30, 0x428(r1)
	  li        r30, 0
	  stw       r29, 0x424(r1)
	  li        r29, 0
	  stw       r28, 0x420(r1)
	  mr        r28, r3
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r10, 0x10(r3)
	  b         .loc_0xD8

	.loc_0x48:
	  lwz       r8, 0x18(r10)
	  lwz       r4, 0x0(r8)
	  cmplwi    r4, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x5
	  bne-      .loc_0xD4
	  lis       r3, 0x6666
	  lwz       r7, 0x1C(r4)
	  addi      r0, r3, 0x6667
	  mulhw     r0, r0, r7
	  srawi     r3, r0, 0x2
	  rlwinm    r4,r3,1,31,31
	  srawi     r0, r0, 0x2
	  add       r3, r3, r4
	  mulli     r4, r3, 0xA
	  rlwinm    r3,r0,1,31,31
	  add.      r11, r0, r3
	  sub       r3, r7, r4
	  beq-      .loc_0xB0
	  lwz       r0, 0x18(r28)
	  add       r9, r9, r11
	  cmpw      r9, r0
	  ble-      .loc_0xB0
	  stw       r8, 0x38(r28)
	  b         .loc_0x180

	.loc_0xB0:
	  cmpwi     r3, 0
	  beq-      .loc_0xD4
	  stw       r3, 0x0(r6)
	  addi      r30, r30, 0x1
	  lwz       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  stw       r8, 0x0(r5)
	  addi      r5, r5, 0x4
	  add       r29, r29, r0

	.loc_0xD4:
	  lwz       r10, 0x4(r10)

	.loc_0xD8:
	  cmplwi    r10, 0
	  bne+      .loc_0x48
	  li        r0, 0
	  cmpwi     r29, 0
	  stw       r0, 0x38(r28)
	  beq-      .loc_0x180
	  bl        -0x180198
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x40C(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x408(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x408(r1)
	  stw       r0, 0x414(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x410(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x410(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x418(r1)
	  lwz       r3, 0x41C(r1)
	  mtctr     r30
	  cmpwi     r30, 0
	  ble-      .loc_0x180

	.loc_0x150:
	  lwz       r0, 0x0(r31)
	  add       r5, r5, r0
	  cmpw      r5, r3
	  ble-      .loc_0x174
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x208
	  lwzx      r0, r3, r0
	  stw       r0, 0x38(r28)
	  b         .loc_0x180

	.loc_0x174:
	  addi      r31, r31, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x150

	.loc_0x180:
	  lwz       r0, 0x434(r1)
	  lwz       r31, 0x42C(r1)
	  lwz       r30, 0x428(r1)
	  lwz       r29, 0x424(r1)
	  lwz       r28, 0x420(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802497E8
 * Size:	0000D8
 */
void Cave::RandEnemyUnit::makeSetEnemyTypeC(Game::Cave::MapNode*, int,
                                            Game::Cave::EnemyUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  addi      r3, r1, 0x8
	  bl        -0x5B74
	  lfs       f2, 0x8(r1)
	  mr        r3, r28
	  lfs       f1, 0xC(r1)
	  mr        r4, r29
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x5850
	  fmr       f31, f1
	  li        r3, 0x38
	  bl        -0x2259A0
	  mr.       r31, r3
	  beq-      .loc_0x7C
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x5694
	  mr        r31, r3

	.loc_0x7C:
	  fmr       f1, f31
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  bl        -0x546C
	  mr        r3, r31
	  mr        r4, r29
	  bl        -0x5458
	  lwz       r3, 0x1C(r28)
	  mr        r4, r31
	  bl        0x1C7B80
	  lwz       r3, 0x18(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x18(r27)
	  lwz       r3, 0x8(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r27)
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802498C0
 * Size:	00017C
 */
void Cave::RandEnemyUnit::setVersusEnemyTypeF(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r29, r3
	  li        r31, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x160

	.loc_0x28:
	  lwz       r3, 0x18(r30)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x15C
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x8
	  bne-      .loc_0x15C
	  lis       r3, 0x6666
	  lwz       r0, 0x1C(r4)
	  addi      r3, r3, 0x6667
	  lwz       r4, 0x1C(r29)
	  mulhw     r0, r3, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  add       r31, r31, r0
	  cmpw      r31, r4
	  ble-      .loc_0x15C
	  sub       r0, r31, r4
	  rlwinm    r4,r0,1,31,31
	  rlwinm    r3,r0,0,31,31
	  add       r0, r4, r0
	  xor       r3, r3, r4
	  srawi     r0, r0, 0x1
	  sub       r28, r3, r4
	  rlwinm    r27,r0,1,0,30
	  bl        -0x1803B0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  li        r25, 0
	  lfd       f3, -0x3BD0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x3BD8(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x3BC8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r26, 0x14(r1)
	  b         .loc_0x114

	.loc_0xD4:
	  mr        r3, r29
	  mr        r4, r26
	  bl        .loc_0x17C
	  lwz       r4, 0x30(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x168
	  lwz       r5, 0x34(r29)
	  cmplwi    r5, 0
	  beq-      .loc_0x168
	  lwz       r6, 0x18(r30)
	  mr        r3, r29
	  bl        0x5FC
	  b         .loc_0x10C
	  b         .loc_0x168

	.loc_0x10C:
	  xori      r26, r26, 0x1
	  addi      r25, r25, 0x1

	.loc_0x114:
	  cmpw      r25, r27
	  blt+      .loc_0xD4
	  cmpwi     r28, 0
	  beq-      .loc_0x15C
	  mr        r3, r29
	  li        r4, -0x1
	  bl        .loc_0x17C
	  lwz       r4, 0x30(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x168
	  lwz       r5, 0x34(r29)
	  cmplwi    r5, 0
	  beq-      .loc_0x168
	  lwz       r6, 0x18(r30)
	  mr        r3, r29
	  bl        0x5AC
	  b         .loc_0x15C
	  b         .loc_0x168

	.loc_0x15C:
	  lwz       r30, 0x4(r30)

	.loc_0x160:
	  cmplwi    r30, 0
	  bne+      .loc_0x28

	.loc_0x168:
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x17C:
	*/
}

/*
 * --INFO--
 * Address:	80249A3C
 * Size:	0003E0
 */
void Cave::RandEnemyUnit::setSlotEnemyTypeF(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x6D0(r1)
	  mflr      r0
	  stw       r0, 0x6D4(r1)
	  stmw      r14, 0x688(r1)
	  mr        r15, r3
	  lis       r3, 0x8048
	  mr        r16, r4
	  li        r23, 0
	  li        r14, 0
	  li        r22, 0
	  li        r21, 0
	  li        r20, 0
	  lwz       r6, 0x0(r15)
	  lwzu      r5, 0x40D0(r3)
	  lbz       r0, 0x2(r6)
	  lwz       r4, 0x4(r3)
	  lwz       r3, 0x8(r3)
	  cmplwi    r0, 0
	  stw       r5, 0x2C(r1)
	  lwz       r17, 0x28(r6)
	  stw       r4, 0x30(r1)
	  stw       r3, 0x34(r1)
	  beq-      .loc_0x120
	  addi      r18, r1, 0x38
	  addi      r19, r1, 0x2C
	  li        r25, 0x3

	.loc_0x68:
	  lwz       r3, 0x4(r15)
	  mr        r4, r25
	  bl        0x30FC
	  mr        r0, r3
	  lwz       r3, 0x4(r15)
	  mr        r24, r0
	  mr        r4, r25
	  bl        0x30F8
	  cmplwi    r24, 0
	  beq-      .loc_0x110
	  mr        r4, r24
	  mr        r5, r3
	  addi      r3, r1, 0x20
	  bl        -0x5FFC
	  lfs       f1, 0x20(r1)
	  cmpwi     r16, 0
	  lfs       f0, -0x3BC4(r2)
	  stfs      f1, 0x0(r18)
	  lfs       f2, 0x24(r1)
	  lfs       f1, 0x28(r1)
	  stfs      f2, 0x4(r18)
	  stfs      f1, 0x8(r18)
	  stfs      f0, 0x0(r19)
	  bne-      .loc_0xE4
	  cmpwi     r23, 0
	  bne-      .loc_0xE4
	  mr        r3, r24
	  bl        -0x6154
	  li        r22, -0x1
	  mr        r14, r3
	  b         .loc_0x104

	.loc_0xE4:
	  cmpwi     r16, 0x1
	  bne-      .loc_0x104
	  cmpwi     r23, 0x1
	  bne-      .loc_0x104
	  mr        r3, r24
	  bl        -0x6178
	  li        r22, 0x1
	  mr        r14, r3

	.loc_0x104:
	  addi      r18, r18, 0xC
	  addi      r19, r19, 0x4
	  addi      r23, r23, 0x1

	.loc_0x110:
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0x4
	  ble+      .loc_0x68
	  b         .loc_0x188

	.loc_0x120:
	  li        r19, 0
	  addi      r16, r1, 0x38

	.loc_0x128:
	  lwz       r3, 0x4(r15)
	  mr        r4, r19
	  bl        0x303C
	  mr        r18, r3
	  lwz       r3, 0x4(r15)
	  mr        r4, r19
	  bl        0x303C
	  cmplwi    r18, 0
	  beq-      .loc_0x17C
	  mr        r4, r18
	  mr        r5, r3
	  addi      r3, r1, 0x14
	  bl        -0x60B8
	  lfs       f0, 0x14(r1)
	  addi      r23, r23, 0x1
	  lfs       f1, 0x18(r1)
	  stfs      f0, 0x0(r16)
	  lfs       f0, 0x1C(r1)
	  stfs      f1, 0x4(r16)
	  stfs      f0, 0x8(r16)
	  addi      r16, r16, 0xC

	.loc_0x17C:
	  addi      r19, r19, 0x1
	  cmpwi     r19, 0x2
	  ble+      .loc_0x128

	.loc_0x188:
	  addi      r0, r1, 0x5C
	  lwz       r19, 0x10(r17)
	  stw       r0, 0x678(r1)
	  mr        r24, r0
	  addi      r26, r1, 0x45C
	  addi      r25, r1, 0x25C
	  b         .loc_0x30C

	.loc_0x1A4:
	  lwz       r3, 0x18(r19)
	  bl        -0x706C
	  cmpwi     r3, 0x1
	  bne-      .loc_0x308
	  lwz       r3, 0x18(r19)
	  bl        -0x7034
	  cmplwi    r3, 0
	  beq-      .loc_0x308
	  lwz       r18, 0x10(r3)
	  mr        r29, r26
	  mr        r28, r25
	  mr        r27, r24
	  b         .loc_0x300

	.loc_0x1D8:
	  lwz       r0, 0x18(r18)
	  cmpwi     r0, 0x8
	  bne-      .loc_0x2FC
	  mr        r3, r15
	  mr        r4, r19
	  mr        r5, r18
	  bl        0x1C0C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2FC
	  addi      r31, r1, 0x38
	  addi      r30, r1, 0x2C
	  li        r17, 0x1
	  li        r16, 0
	  b         .loc_0x298

	.loc_0x210:
	  rlwinm.   r0,r17,0,24,31
	  beq-      .loc_0x28C
	  mr        r4, r19
	  mr        r5, r18
	  addi      r3, r1, 0x8
	  bl        -0x6184
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x4(r31)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r31)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x8(r31)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3BC0(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x278
	  ble-      .loc_0x27C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x27C

	.loc_0x278:
	  fmr       f1, f0

	.loc_0x27C:
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x28C
	  li        r17, 0

	.loc_0x28C:
	  addi      r31, r31, 0xC
	  addi      r30, r30, 0x4
	  addi      r16, r16, 0x1

	.loc_0x298:
	  cmpw      r16, r23
	  blt+      .loc_0x210
	  rlwinm.   r0,r17,0,24,31
	  beq-      .loc_0x2FC
	  stw       r19, 0x0(r29)
	  stw       r18, 0x0(r28)
	  lwz       r3, 0x0(r29)
	  bl        -0x6334
	  add       r0, r14, r3
	  mullw     r0, r22, r0
	  stw       r0, 0x0(r27)
	  lwz       r0, 0x0(r27)
	  cmpwi     r0, 0
	  bgt-      .loc_0x2D8
	  li        r0, 0x1
	  stw       r0, 0x0(r27)

	.loc_0x2D8:
	  lwz       r0, 0x0(r27)
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x4
	  add       r20, r20, r0
	  addi      r21, r21, 0x1
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4

	.loc_0x2FC:
	  lwz       r18, 0x4(r18)

	.loc_0x300:
	  cmplwi    r18, 0
	  bne+      .loc_0x1D8

	.loc_0x308:
	  lwz       r19, 0x4(r19)

	.loc_0x30C:
	  cmplwi    r19, 0
	  bne+      .loc_0x1A4
	  li        r0, 0
	  cmpwi     r21, 0
	  stw       r0, 0x30(r15)
	  stw       r0, 0x34(r15)
	  beq-      .loc_0x3CC
	  bl        -0x1807C4
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x664(r1)
	  xoris     r0, r20, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x660(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x660(r1)
	  stw       r0, 0x66C(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x668(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x668(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x670(r1)
	  lwz       r4, 0x674(r1)
	  mtctr     r21
	  cmpwi     r21, 0
	  ble-      .loc_0x3CC

	.loc_0x388:
	  lwz       r3, 0x678(r1)
	  lwz       r0, 0x0(r3)
	  add       r5, r5, r0
	  cmpw      r5, r4
	  ble-      .loc_0x3BC
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x45C
	  lwzx      r4, r3, r0
	  addi      r3, r1, 0x25C
	  lwzx      r0, r3, r0
	  stw       r4, 0x30(r15)
	  stw       r0, 0x34(r15)
	  b         .loc_0x3CC

	.loc_0x3BC:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1
	  stw       r3, 0x678(r1)
	  bdnz+     .loc_0x388

	.loc_0x3CC:
	  lmw       r14, 0x688(r1)
	  lwz       r0, 0x6D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x6D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80249E1C
 * Size:	0001A0
 */
void Cave::RandEnemyUnit::setUnitRandEnemyTypeF(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  li        r9, 0
	  stw       r0, 0x434(r1)
	  addi      r5, r1, 0x208
	  stw       r31, 0x42C(r1)
	  addi      r31, r1, 0x8
	  mr        r6, r31
	  stw       r30, 0x428(r1)
	  li        r30, 0
	  stw       r29, 0x424(r1)
	  li        r29, 0
	  stw       r28, 0x420(r1)
	  mr        r28, r3
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r10, 0x10(r3)
	  b         .loc_0xD8

	.loc_0x48:
	  lwz       r8, 0x18(r10)
	  lwz       r4, 0x0(r8)
	  cmplwi    r4, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x8
	  bne-      .loc_0xD4
	  lis       r3, 0x6666
	  lwz       r7, 0x1C(r4)
	  addi      r0, r3, 0x6667
	  mulhw     r0, r0, r7
	  srawi     r3, r0, 0x2
	  rlwinm    r4,r3,1,31,31
	  srawi     r0, r0, 0x2
	  add       r3, r3, r4
	  mulli     r4, r3, 0xA
	  rlwinm    r3,r0,1,31,31
	  add.      r11, r0, r3
	  sub       r3, r7, r4
	  beq-      .loc_0xB0
	  lwz       r0, 0x1C(r28)
	  add       r9, r9, r11
	  cmpw      r9, r0
	  ble-      .loc_0xB0
	  stw       r8, 0x38(r28)
	  b         .loc_0x180

	.loc_0xB0:
	  cmpwi     r3, 0
	  beq-      .loc_0xD4
	  stw       r3, 0x0(r6)
	  addi      r30, r30, 0x1
	  lwz       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  stw       r8, 0x0(r5)
	  addi      r5, r5, 0x4
	  add       r29, r29, r0

	.loc_0xD4:
	  lwz       r10, 0x4(r10)

	.loc_0xD8:
	  cmplwi    r10, 0
	  bne+      .loc_0x48
	  li        r0, 0
	  cmpwi     r29, 0
	  stw       r0, 0x38(r28)
	  beq-      .loc_0x180
	  bl        -0x18096C
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x40C(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x408(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x408(r1)
	  stw       r0, 0x414(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x410(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x410(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x418(r1)
	  lwz       r3, 0x41C(r1)
	  mtctr     r30
	  cmpwi     r30, 0
	  ble-      .loc_0x180

	.loc_0x150:
	  lwz       r0, 0x0(r31)
	  add       r5, r5, r0
	  cmpw      r5, r3
	  ble-      .loc_0x174
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x208
	  lwzx      r0, r3, r0
	  stw       r0, 0x38(r28)
	  b         .loc_0x180

	.loc_0x174:
	  addi      r31, r31, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x150

	.loc_0x180:
	  lwz       r0, 0x434(r1)
	  lwz       r31, 0x42C(r1)
	  lwz       r30, 0x428(r1)
	  lwz       r29, 0x424(r1)
	  lwz       r28, 0x420(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80249FBC
 * Size:	000088
 */
void Cave::RandEnemyUnit::makeSetEnemyTypeF(Game::Cave::MapNode*,
                                            Game::Cave::BaseGen*,
                                            Game::Cave::EnemyUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  li        r3, 0x38
	  bl        -0x22613C
	  mr.       r31, r3
	  beq-      .loc_0x44
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0x1
	  bl        -0x5E30
	  mr        r31, r3

	.loc_0x44:
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x5DAC
	  lwz       r3, 0x1C(r28)
	  mr        r4, r31
	  bl        0x1C73F4
	  lwz       r3, 0x1C(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1C(r27)
	  lwz       r3, 0x8(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024A044
 * Size:	00017C
 */
void Cave::RandEnemyUnit::setVersusEnemyTypeB(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r29, r3
	  li        r31, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x160

	.loc_0x28:
	  lwz       r3, 0x18(r30)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x15C
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x15C
	  lis       r3, 0x6666
	  lwz       r0, 0x1C(r4)
	  addi      r3, r3, 0x6667
	  lwz       r4, 0x14(r29)
	  mulhw     r0, r3, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  add       r31, r31, r0
	  cmpw      r31, r4
	  ble-      .loc_0x15C
	  sub       r0, r31, r4
	  rlwinm    r4,r0,1,31,31
	  rlwinm    r3,r0,0,31,31
	  add       r0, r4, r0
	  xor       r3, r3, r4
	  srawi     r0, r0, 0x1
	  sub       r28, r3, r4
	  rlwinm    r27,r0,1,0,30
	  bl        -0x180B34
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  li        r25, 0
	  lfd       f3, -0x3BD0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x3BD8(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x3BC8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r26, 0x14(r1)
	  b         .loc_0x114

	.loc_0xD4:
	  mr        r3, r29
	  mr        r4, r26
	  bl        .loc_0x17C
	  lwz       r4, 0x30(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x168
	  lwz       r5, 0x34(r29)
	  cmplwi    r5, 0
	  beq-      .loc_0x168
	  lwz       r6, 0x18(r30)
	  mr        r3, r29
	  bl        0x5FC
	  b         .loc_0x10C
	  b         .loc_0x168

	.loc_0x10C:
	  xori      r26, r26, 0x1
	  addi      r25, r25, 0x1

	.loc_0x114:
	  cmpw      r25, r27
	  blt+      .loc_0xD4
	  cmpwi     r28, 0
	  beq-      .loc_0x15C
	  mr        r3, r29
	  li        r4, -0x1
	  bl        .loc_0x17C
	  lwz       r4, 0x30(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x168
	  lwz       r5, 0x34(r29)
	  cmplwi    r5, 0
	  beq-      .loc_0x168
	  lwz       r6, 0x18(r30)
	  mr        r3, r29
	  bl        0x5AC
	  b         .loc_0x15C
	  b         .loc_0x168

	.loc_0x15C:
	  lwz       r30, 0x4(r30)

	.loc_0x160:
	  cmplwi    r30, 0
	  bne+      .loc_0x28

	.loc_0x168:
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x17C:
	*/
}

/*
 * --INFO--
 * Address:	8024A1C0
 * Size:	0003E0
 */
void Cave::RandEnemyUnit::setSlotEnemyTypeB(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x6D0(r1)
	  mflr      r0
	  stw       r0, 0x6D4(r1)
	  stmw      r14, 0x688(r1)
	  mr        r15, r3
	  lis       r3, 0x8048
	  mr        r16, r4
	  li        r23, 0
	  li        r14, 0
	  li        r22, 0
	  li        r21, 0
	  li        r20, 0
	  lwz       r6, 0x0(r15)
	  lwzu      r5, 0x40DC(r3)
	  lbz       r0, 0x2(r6)
	  lwz       r4, 0x4(r3)
	  lwz       r3, 0x8(r3)
	  cmplwi    r0, 0
	  stw       r5, 0x2C(r1)
	  lwz       r17, 0x28(r6)
	  stw       r4, 0x30(r1)
	  stw       r3, 0x34(r1)
	  beq-      .loc_0x120
	  addi      r18, r1, 0x38
	  addi      r19, r1, 0x2C
	  li        r25, 0x3

	.loc_0x68:
	  lwz       r3, 0x4(r15)
	  mr        r4, r25
	  bl        0x2978
	  mr        r0, r3
	  lwz       r3, 0x4(r15)
	  mr        r24, r0
	  mr        r4, r25
	  bl        0x2974
	  cmplwi    r24, 0
	  beq-      .loc_0x110
	  mr        r4, r24
	  mr        r5, r3
	  addi      r3, r1, 0x20
	  bl        -0x6780
	  lfs       f1, 0x20(r1)
	  cmpwi     r16, 0
	  lfs       f0, -0x3BC4(r2)
	  stfs      f1, 0x0(r18)
	  lfs       f2, 0x24(r1)
	  lfs       f1, 0x28(r1)
	  stfs      f2, 0x4(r18)
	  stfs      f1, 0x8(r18)
	  stfs      f0, 0x0(r19)
	  bne-      .loc_0xE4
	  cmpwi     r23, 0
	  bne-      .loc_0xE4
	  mr        r3, r24
	  bl        -0x68D8
	  li        r22, -0x1
	  mr        r14, r3
	  b         .loc_0x104

	.loc_0xE4:
	  cmpwi     r16, 0x1
	  bne-      .loc_0x104
	  cmpwi     r23, 0x1
	  bne-      .loc_0x104
	  mr        r3, r24
	  bl        -0x68FC
	  li        r22, 0x1
	  mr        r14, r3

	.loc_0x104:
	  addi      r18, r18, 0xC
	  addi      r19, r19, 0x4
	  addi      r23, r23, 0x1

	.loc_0x110:
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0x4
	  ble+      .loc_0x68
	  b         .loc_0x188

	.loc_0x120:
	  li        r19, 0
	  addi      r16, r1, 0x38

	.loc_0x128:
	  lwz       r3, 0x4(r15)
	  mr        r4, r19
	  bl        0x28B8
	  mr        r18, r3
	  lwz       r3, 0x4(r15)
	  mr        r4, r19
	  bl        0x28B8
	  cmplwi    r18, 0
	  beq-      .loc_0x17C
	  mr        r4, r18
	  mr        r5, r3
	  addi      r3, r1, 0x14
	  bl        -0x683C
	  lfs       f0, 0x14(r1)
	  addi      r23, r23, 0x1
	  lfs       f1, 0x18(r1)
	  stfs      f0, 0x0(r16)
	  lfs       f0, 0x1C(r1)
	  stfs      f1, 0x4(r16)
	  stfs      f0, 0x8(r16)
	  addi      r16, r16, 0xC

	.loc_0x17C:
	  addi      r19, r19, 0x1
	  cmpwi     r19, 0x2
	  ble+      .loc_0x128

	.loc_0x188:
	  addi      r0, r1, 0x5C
	  lwz       r19, 0x10(r17)
	  stw       r0, 0x678(r1)
	  mr        r24, r0
	  addi      r26, r1, 0x45C
	  addi      r25, r1, 0x25C
	  b         .loc_0x30C

	.loc_0x1A4:
	  lwz       r3, 0x18(r19)
	  bl        -0x77F0
	  cmpwi     r3, 0x1
	  bne-      .loc_0x308
	  lwz       r3, 0x18(r19)
	  bl        -0x77B8
	  cmplwi    r3, 0
	  beq-      .loc_0x308
	  lwz       r18, 0x10(r3)
	  mr        r29, r26
	  mr        r28, r25
	  mr        r27, r24
	  b         .loc_0x300

	.loc_0x1D8:
	  lwz       r0, 0x18(r18)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2FC
	  mr        r3, r15
	  mr        r4, r19
	  mr        r5, r18
	  bl        0x1488
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2FC
	  addi      r31, r1, 0x38
	  addi      r30, r1, 0x2C
	  li        r17, 0x1
	  li        r16, 0
	  b         .loc_0x298

	.loc_0x210:
	  rlwinm.   r0,r17,0,24,31
	  beq-      .loc_0x28C
	  mr        r4, r19
	  mr        r5, r18
	  addi      r3, r1, 0x8
	  bl        -0x6908
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x4(r31)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r31)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x8(r31)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3BC0(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x278
	  ble-      .loc_0x27C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x27C

	.loc_0x278:
	  fmr       f1, f0

	.loc_0x27C:
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x28C
	  li        r17, 0

	.loc_0x28C:
	  addi      r31, r31, 0xC
	  addi      r30, r30, 0x4
	  addi      r16, r16, 0x1

	.loc_0x298:
	  cmpw      r16, r23
	  blt+      .loc_0x210
	  rlwinm.   r0,r17,0,24,31
	  beq-      .loc_0x2FC
	  stw       r19, 0x0(r29)
	  stw       r18, 0x0(r28)
	  lwz       r3, 0x0(r29)
	  bl        -0x6AB8
	  add       r0, r14, r3
	  mullw     r0, r22, r0
	  stw       r0, 0x0(r27)
	  lwz       r0, 0x0(r27)
	  cmpwi     r0, 0
	  bgt-      .loc_0x2D8
	  li        r0, 0x1
	  stw       r0, 0x0(r27)

	.loc_0x2D8:
	  lwz       r0, 0x0(r27)
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x4
	  add       r20, r20, r0
	  addi      r21, r21, 0x1
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4

	.loc_0x2FC:
	  lwz       r18, 0x4(r18)

	.loc_0x300:
	  cmplwi    r18, 0
	  bne+      .loc_0x1D8

	.loc_0x308:
	  lwz       r19, 0x4(r19)

	.loc_0x30C:
	  cmplwi    r19, 0
	  bne+      .loc_0x1A4
	  li        r0, 0
	  cmpwi     r21, 0
	  stw       r0, 0x30(r15)
	  stw       r0, 0x34(r15)
	  beq-      .loc_0x3CC
	  bl        -0x180F48
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x664(r1)
	  xoris     r0, r20, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x660(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x660(r1)
	  stw       r0, 0x66C(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x668(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x668(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x670(r1)
	  lwz       r4, 0x674(r1)
	  mtctr     r21
	  cmpwi     r21, 0
	  ble-      .loc_0x3CC

	.loc_0x388:
	  lwz       r3, 0x678(r1)
	  lwz       r0, 0x0(r3)
	  add       r5, r5, r0
	  cmpw      r5, r4
	  ble-      .loc_0x3BC
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x45C
	  lwzx      r4, r3, r0
	  addi      r3, r1, 0x25C
	  lwzx      r0, r3, r0
	  stw       r4, 0x30(r15)
	  stw       r0, 0x34(r15)
	  b         .loc_0x3CC

	.loc_0x3BC:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1
	  stw       r3, 0x678(r1)
	  bdnz+     .loc_0x388

	.loc_0x3CC:
	  lmw       r14, 0x688(r1)
	  lwz       r0, 0x6D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x6D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024A5A0
 * Size:	0001A0
 */
void Cave::RandEnemyUnit::setUnitRandEnemyTypeB(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  li        r9, 0
	  stw       r0, 0x434(r1)
	  addi      r5, r1, 0x208
	  stw       r31, 0x42C(r1)
	  addi      r31, r1, 0x8
	  mr        r6, r31
	  stw       r30, 0x428(r1)
	  li        r30, 0
	  stw       r29, 0x424(r1)
	  li        r29, 0
	  stw       r28, 0x420(r1)
	  mr        r28, r3
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r10, 0x10(r3)
	  b         .loc_0xD8

	.loc_0x48:
	  lwz       r8, 0x18(r10)
	  lwz       r4, 0x0(r8)
	  cmplwi    r4, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xD4
	  lis       r3, 0x6666
	  lwz       r7, 0x1C(r4)
	  addi      r0, r3, 0x6667
	  mulhw     r0, r0, r7
	  srawi     r3, r0, 0x2
	  rlwinm    r4,r3,1,31,31
	  srawi     r0, r0, 0x2
	  add       r3, r3, r4
	  mulli     r4, r3, 0xA
	  rlwinm    r3,r0,1,31,31
	  add.      r11, r0, r3
	  sub       r3, r7, r4
	  beq-      .loc_0xB0
	  lwz       r0, 0x14(r28)
	  add       r9, r9, r11
	  cmpw      r9, r0
	  ble-      .loc_0xB0
	  stw       r8, 0x38(r28)
	  b         .loc_0x180

	.loc_0xB0:
	  cmpwi     r3, 0
	  beq-      .loc_0xD4
	  stw       r3, 0x0(r6)
	  addi      r30, r30, 0x1
	  lwz       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  stw       r8, 0x0(r5)
	  addi      r5, r5, 0x4
	  add       r29, r29, r0

	.loc_0xD4:
	  lwz       r10, 0x4(r10)

	.loc_0xD8:
	  cmplwi    r10, 0
	  bne+      .loc_0x48
	  li        r0, 0
	  cmpwi     r29, 0
	  stw       r0, 0x38(r28)
	  beq-      .loc_0x180
	  bl        -0x1810F0
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x40C(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x408(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x408(r1)
	  stw       r0, 0x414(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x410(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x410(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x418(r1)
	  lwz       r3, 0x41C(r1)
	  mtctr     r30
	  cmpwi     r30, 0
	  ble-      .loc_0x180

	.loc_0x150:
	  lwz       r0, 0x0(r31)
	  add       r5, r5, r0
	  cmpw      r5, r3
	  ble-      .loc_0x174
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x208
	  lwzx      r0, r3, r0
	  stw       r0, 0x38(r28)
	  b         .loc_0x180

	.loc_0x174:
	  addi      r31, r31, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x150

	.loc_0x180:
	  lwz       r0, 0x434(r1)
	  lwz       r31, 0x42C(r1)
	  lwz       r30, 0x428(r1)
	  lwz       r29, 0x424(r1)
	  lwz       r28, 0x420(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024A740
 * Size:	000088
 */
void Cave::RandEnemyUnit::makeSetEnemyTypeB(Game::Cave::MapNode*,
                                            Game::Cave::BaseGen*,
                                            Game::Cave::EnemyUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  li        r3, 0x38
	  bl        -0x2268C0
	  mr.       r31, r3
	  beq-      .loc_0x44
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0x1
	  bl        -0x65B4
	  mr        r31, r3

	.loc_0x44:
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x6530
	  lwz       r3, 0x1C(r28)
	  mr        r4, r31
	  bl        0x1C6C70
	  lwz       r3, 0x14(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r27)
	  lwz       r3, 0x8(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024A7C8
 * Size:	0002CC
 */
void Cave::RandEnemyUnit::setVersusEasyEnemy(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  li        r4, 0x3
	  stw       r0, 0x74(r1)
	  stmw      r24, 0x50(r1)
	  mr        r27, r3
	  lwz       r7, 0x2B30(r2)
	  lwz       r6, 0x2B34(r2)
	  lwz       r5, 0x2B38(r2)
	  lwz       r0, 0x2B3C(r2)
	  stw       r7, 0x20(r1)
	  lwz       r3, 0x4(r3)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  bl        0x23A4
	  stw       r3, 0x20(r1)
	  li        r4, 0x3
	  lwz       r3, 0x4(r27)
	  bl        0x23A4
	  stw       r3, 0x18(r1)
	  li        r4, 0x4
	  lwz       r3, 0x4(r27)
	  bl        0x2384
	  stw       r3, 0x24(r1)
	  li        r4, 0x4
	  lwz       r3, 0x4(r27)
	  bl        0x2384
	  lwz       r4, 0x0(r27)
	  lis       r5, 0x8048
	  lwzu      r8, 0x40E8(r5)
	  lwz       r30, 0x14(r4)
	  lwz       r9, -0x3BBC(r2)
	  lwz       r31, -0x3BB8(r2)
	  lwz       r7, 0x4(r5)
	  lwz       r6, 0x8(r5)
	  lwz       r5, 0xC(r5)
	  lwz       r4, 0x2B40(r2)
	  lwz       r0, 0x2B44(r2)
	  stw       r3, 0x1C(r1)
	  lwz       r28, 0x10(r30)
	  stw       r9, 0x10(r1)
	  stw       r31, 0x14(r1)
	  stw       r8, 0x28(r1)
	  stw       r7, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  b         .loc_0x17C

	.loc_0xC8:
	  lwz       r6, 0x18(r28)
	  lwz       r29, 0x4(r28)
	  lwz       r4, 0x0(r6)
	  cmplwi    r4, 0
	  beq-      .loc_0x178
	  lwz       r3, 0x18(r4)
	  lwz       r0, 0x10(r1)
	  cmpw      r3, r0
	  bne-      .loc_0x130
	  lis       r3, 0x6666
	  lwz       r0, 0x1C(r4)
	  addi      r3, r3, 0x6667
	  lwz       r5, 0x28(r1)
	  mulhw     r0, r3, r0
	  stw       r6, 0x8(r1)
	  mr        r3, r28
	  srawi     r0, r0, 0x2
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  add       r0, r5, r0
	  stw       r0, 0x28(r1)
	  bl        0x1C6CEC
	  mr        r3, r30
	  mr        r4, r28
	  bl        0x1C6AD0
	  b         .loc_0x178

	.loc_0x130:
	  cmpw      r3, r31
	  bne-      .loc_0x178
	  lis       r3, 0x6666
	  lwz       r0, 0x1C(r4)
	  addi      r3, r3, 0x6667
	  lwz       r5, 0x30(r1)
	  mulhw     r0, r3, r0
	  stw       r6, 0xC(r1)
	  mr        r3, r28
	  srawi     r0, r0, 0x2
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  add       r0, r5, r0
	  stw       r0, 0x30(r1)
	  bl        0x1C6CA0
	  mr        r3, r30
	  mr        r4, r28
	  bl        0x1C6A84

	.loc_0x178:
	  mr        r28, r29

	.loc_0x17C:
	  cmplwi    r28, 0
	  bne+      .loc_0xC8
	  addi      r30, r1, 0x28
	  addi      r31, r1, 0x8
	  li        r28, 0

	.loc_0x190:
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x2A4
	  rlwinm    r3,r0,1,31,31
	  rlwinm    r0,r0,0,31,31
	  xor       r0, r0, r3
	  lfs       f2, -0x3BC0(r2)
	  sub.      r0, r0, r3
	  beq-      .loc_0x1E8
	  bl        -0x1813DC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  lfd       f3, -0x3BD0(r2)
	  stw       r0, 0x38(r1)
	  lfs       f1, -0x3BC8(r2)
	  lfd       f2, 0x38(r1)
	  lfs       f0, -0x3BD8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  fmr       f2, f0

	.loc_0x1E8:
	  lwz       r5, 0x0(r30)
	  lis       r3, 0x4330
	  lwz       r0, 0x0(r31)
	  rlwinm    r4,r5,1,31,31
	  stw       r3, 0x38(r1)
	  add       r3, r4, r5
	  lfd       f1, -0x3BD0(r2)
	  srawi     r3, r3, 0x1
	  cmplwi    r0, 0
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x3C(r1)
	  lfd       f0, 0x38(r1)
	  fsubs     f0, f0, f1
	  fadds     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  stw       r0, 0x4(r30)
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0x0(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x2A4
	  mr        r29, r30
	  addi      r26, r1, 0x18
	  addi      r25, r1, 0x20
	  li        r24, 0

	.loc_0x254:
	  lwz       r0, 0x0(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0x28C
	  lwz       r4, 0x0(r25)
	  mr        r3, r27
	  lwz       r5, 0x0(r26)
	  bl        .loc_0x2CC
	  mr.       r5, r3
	  beq-      .loc_0x28C
	  lwz       r4, 0x0(r25)
	  mr        r3, r27
	  lwz       r6, 0x0(r31)
	  lwz       r7, 0x0(r29)
	  bl        0x9C8

	.loc_0x28C:
	  addi      r24, r24, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r24, 0x2
	  addi      r25, r25, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x254

	.loc_0x2A4:
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x2
	  addi      r30, r30, 0x8
	  blt+      .loc_0x190
	  lmw       r24, 0x50(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x2CC:
	*/
}

/*
 * --INFO--
 * Address:	8024AA94
 * Size:	000144
 */
void Cave::RandEnemyUnit::getVersusEasyEnemyBaseGen(Game::Cave::MapNode*,
                                                    Game::Cave::BaseGen*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  lfs       f31, -0x3BB4(r2)
	  lwz       r3, 0x0(r3)
	  mr        r26, r4
	  mr        r27, r5
	  li        r31, 0
	  lwz       r3, 0x28(r3)
	  li        r30, 0
	  lwz       r29, 0x10(r3)
	  b         .loc_0x10C

	.loc_0x40:
	  cmplw     r29, r26
	  bne-      .loc_0x108
	  lwz       r3, 0x18(r29)
	  bl        -0x7F20
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r28, 0x10(r3)
	  b         .loc_0x100

	.loc_0x60:
	  lwz       r0, 0x18(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0xFC
	  mr        r3, r25
	  mr        r4, r29
	  mr        r5, r28
	  bl        0xD2C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xFC
	  lfs       f1, 0x20(r28)
	  lfs       f0, 0x20(r27)
	  lfs       f3, 0x1C(r28)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r27)
	  lfs       f1, 0x24(r28)
	  lfs       f0, 0x24(r27)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3BC0(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD4
	  ble-      .loc_0xD8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xD8

	.loc_0xD4:
	  fmr       f1, f0

	.loc_0xD8:
	  lfs       f0, -0x3BB0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xEC
	  mr        r31, r28
	  b         .loc_0xFC

	.loc_0xEC:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xFC
	  mr        r30, r28
	  fmr       f31, f1

	.loc_0xFC:
	  lwz       r28, 0x4(r28)

	.loc_0x100:
	  cmplwi    r28, 0
	  bne+      .loc_0x60

	.loc_0x108:
	  lwz       r29, 0x4(r29)

	.loc_0x10C:
	  cmplwi    r29, 0
	  bne+      .loc_0x40
	  cmplwi    r30, 0
	  beq-      .loc_0x124
	  mr        r3, r30
	  b         .loc_0x128

	.loc_0x124:
	  mr        r3, r31

	.loc_0x128:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024ABD8
 * Size:	0001D4
 */
void Cave::RandEnemyUnit::setVersusEnemyTypeA(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r24, 0x30(r1)
	  mr        r26, r3
	  li        r31, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x1B8

	.loc_0x28:
	  lwz       r3, 0x18(r30)
	  lwz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x1B4
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x1B4
	  lis       r3, 0x6666
	  lwz       r0, 0x1C(r4)
	  addi      r3, r3, 0x6667
	  lwz       r4, 0x10(r26)
	  mulhw     r0, r3, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  add       r31, r31, r0
	  cmpw      r31, r4
	  ble-      .loc_0x1B4
	  sub       r29, r31, r4
	  bl        -0x1816AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  li        r27, 0
	  lfd       f3, -0x3BD0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x3BD8(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x3BC8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r28, 0x1C(r1)
	  b         .loc_0x1AC

	.loc_0xB8:
	  lwz       r0, 0x10(r26)
	  cmpw      r31, r0
	  ble-      .loc_0x1A4
	  li        r0, 0
	  mr        r3, r26
	  stw       r0, 0xC(r1)
	  mr        r6, r28
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        .loc_0x1D4
	  lwz       r0, 0x10(r26)
	  lwz       r3, 0xC(r1)
	  sub       r25, r31, r0
	  cmpw      r3, r25
	  bge-      .loc_0xFC
	  mr        r25, r3

	.loc_0xFC:
	  lwz       r24, 0x8(r1)
	  stw       r25, 0xC(r1)
	  cmpw      r25, r24
	  bgt-      .loc_0x114
	  mr        r7, r25
	  b         .loc_0x170

	.loc_0x114:
	  bl        -0x18174C
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1C(r1)
	  sub       r3, r25, r24
	  addi      r0, r3, 0x1
	  lfd       f2, -0x3BD0(r2)
	  stw       r4, 0x18(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x18(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f1, f2
	  lwz       r0, 0x8(r1)
	  stw       r4, 0x10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r3, 0x24(r1)
	  add       r7, r0, r3

	.loc_0x170:
	  lwz       r4, 0x30(r26)
	  cmplwi    r4, 0
	  beq-      .loc_0x1C0
	  lwz       r5, 0x34(r26)
	  cmplwi    r5, 0
	  beq-      .loc_0x1C0
	  cmpwi     r7, 0
	  beq-      .loc_0x1C0
	  lwz       r6, 0x18(r30)
	  mr        r3, r26
	  bl        0x6A8
	  b         .loc_0x1A4
	  b         .loc_0x1C0

	.loc_0x1A4:
	  xori      r28, r28, 0x1
	  addi      r27, r27, 0x1

	.loc_0x1AC:
	  cmpw      r27, r29
	  blt+      .loc_0xB8

	.loc_0x1B4:
	  lwz       r30, 0x4(r30)

	.loc_0x1B8:
	  cmplwi    r30, 0
	  bne+      .loc_0x28

	.loc_0x1C0:
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x1D4:
	*/
}

/*
 * --INFO--
 * Address:	8024ADAC
 * Size:	0003D4
 */
void Cave::RandEnemyUnit::setSlotEnemyTypeA(int&, int&, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x6C0(r1)
	  mflr      r0
	  stw       r0, 0x6C4(r1)
	  stmw      r14, 0x678(r1)
	  mr        r15, r3
	  mr        r24, r6
	  li        r23, 0
	  stw       r4, 0x8(r1)
	  li        r14, 0
	  li        r22, 0
	  li        r21, 0
	  stw       r5, 0xC(r1)
	  li        r20, 0
	  lwz       r8, 0x0(r3)
	  lwz       r7, -0x3BAC(r2)
	  lbz       r0, 0x2(r8)
	  lwz       r3, -0x3BA8(r2)
	  cmplwi    r0, 0
	  stw       r7, 0x10(r1)
	  lwz       r16, 0x28(r8)
	  stw       r3, 0x14(r1)
	  beq-      .loc_0x10C
	  li        r19, 0x3
	  addi      r17, r1, 0x3C

	.loc_0x60:
	  lwz       r3, 0x4(r15)
	  mr        r4, r19
	  bl        0x1D94
	  mr        r0, r3
	  lwz       r3, 0x4(r15)
	  mr        r18, r0
	  mr        r4, r19
	  bl        0x1D90
	  cmplwi    r18, 0
	  beq-      .loc_0xFC
	  mr        r4, r18
	  mr        r5, r3
	  addi      r3, r1, 0x30
	  bl        -0x7364
	  lfs       f0, 0x30(r1)
	  cmpwi     r24, 0
	  lfs       f1, 0x34(r1)
	  stfs      f0, 0x0(r17)
	  lfs       f0, 0x38(r1)
	  stfs      f1, 0x4(r17)
	  stfs      f0, 0x8(r17)
	  bne-      .loc_0xD4
	  cmpwi     r23, 0
	  bne-      .loc_0xD4
	  mr        r3, r18
	  bl        -0x74B4
	  li        r22, -0x1
	  mr        r14, r3
	  b         .loc_0xF4

	.loc_0xD4:
	  cmpwi     r24, 0x1
	  bne-      .loc_0xF4
	  cmpwi     r23, 0x1
	  bne-      .loc_0xF4
	  mr        r3, r18
	  bl        -0x74D8
	  li        r22, 0x1
	  mr        r14, r3

	.loc_0xF4:
	  addi      r17, r17, 0xC
	  addi      r23, r23, 0x1

	.loc_0xFC:
	  addi      r19, r19, 0x1
	  cmpwi     r19, 0x4
	  ble+      .loc_0x60
	  b         .loc_0x164

	.loc_0x10C:
	  lwz       r3, 0x4(r15)
	  li        r4, 0
	  bl        0x1CE8
	  mr        r17, r3
	  lwz       r3, 0x4(r15)
	  li        r4, 0
	  bl        0x1CE8
	  cmplwi    r17, 0
	  beq-      .loc_0x164
	  mr        r4, r17
	  mr        r5, r3
	  addi      r3, r1, 0x24
	  bl        -0x740C
	  lfs       f3, 0x24(r1)
	  li        r23, 0x1
	  lfs       f2, 0x28(r1)
	  lfs       f1, 0x2C(r1)
	  lfs       f0, -0x3BA4(r2)
	  stfs      f3, 0x3C(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x164:
	  addi      r0, r1, 0x54
	  lwz       r19, 0x10(r16)
	  stw       r0, 0x670(r1)
	  mr        r24, r0
	  addi      r26, r1, 0x454
	  addi      r25, r1, 0x254
	  b         .loc_0x2E8

	.loc_0x180:
	  lwz       r3, 0x18(r19)
	  bl        -0x83B8
	  cmpwi     r3, 0x1
	  bne-      .loc_0x2E4
	  lwz       r3, 0x18(r19)
	  bl        -0x8380
	  cmplwi    r3, 0
	  beq-      .loc_0x2E4
	  lwz       r18, 0x10(r3)
	  mr        r29, r26
	  mr        r28, r25
	  mr        r27, r24
	  b         .loc_0x2DC

	.loc_0x1B4:
	  lwz       r0, 0x18(r18)
	  cmpwi     r0, 0
	  bne-      .loc_0x2D8
	  mr        r3, r15
	  mr        r4, r19
	  mr        r5, r18
	  bl        0x8C0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D8
	  addi      r31, r1, 0x3C
	  addi      r30, r1, 0x10
	  li        r17, 0x1
	  li        r16, 0
	  b         .loc_0x274

	.loc_0x1EC:
	  rlwinm.   r0,r17,0,24,31
	  beq-      .loc_0x268
	  mr        r4, r19
	  mr        r5, r18
	  addi      r3, r1, 0x18
	  bl        -0x74D0
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x4(r31)
	  lfs       f3, 0x18(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r31)
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x8(r31)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3BC0(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x254
	  ble-      .loc_0x258
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x258

	.loc_0x254:
	  fmr       f1, f0

	.loc_0x258:
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x268
	  li        r17, 0

	.loc_0x268:
	  addi      r31, r31, 0xC
	  addi      r30, r30, 0x4
	  addi      r16, r16, 0x1

	.loc_0x274:
	  cmpw      r16, r23
	  blt+      .loc_0x1EC
	  rlwinm.   r0,r17,0,24,31
	  beq-      .loc_0x2D8
	  stw       r19, 0x0(r29)
	  stw       r18, 0x0(r28)
	  lwz       r3, 0x0(r29)
	  bl        -0x7680
	  add       r0, r14, r3
	  mullw     r0, r22, r0
	  stw       r0, 0x0(r27)
	  lwz       r0, 0x0(r27)
	  cmpwi     r0, 0
	  bgt-      .loc_0x2B4
	  li        r0, 0x1
	  stw       r0, 0x0(r27)

	.loc_0x2B4:
	  lwz       r0, 0x0(r27)
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x4
	  addi      r24, r24, 0x4
	  add       r20, r20, r0
	  addi      r21, r21, 0x1
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4

	.loc_0x2D8:
	  lwz       r18, 0x4(r18)

	.loc_0x2DC:
	  cmplwi    r18, 0
	  bne+      .loc_0x1B4

	.loc_0x2E4:
	  lwz       r19, 0x4(r19)

	.loc_0x2E8:
	  cmplwi    r19, 0
	  bne+      .loc_0x180
	  li        r0, 0
	  cmpwi     r21, 0
	  stw       r0, 0x30(r15)
	  stw       r0, 0x34(r15)
	  beq-      .loc_0x3C0
	  bl        -0x181B10
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x65C(r1)
	  xoris     r0, r20, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x658(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x658(r1)
	  stw       r0, 0x664(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x660(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x660(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x668(r1)
	  lwz       r4, 0x66C(r1)
	  mtctr     r21
	  cmpwi     r21, 0
	  ble-      .loc_0x3C0

	.loc_0x364:
	  lwz       r3, 0x670(r1)
	  lwz       r0, 0x0(r3)
	  add       r5, r5, r0
	  cmpw      r5, r4
	  ble-      .loc_0x3B0
	  rlwinm    r4,r6,2,0,29
	  addi      r3, r1, 0x454
	  lwzx      r0, r3, r4
	  addi      r3, r1, 0x254
	  lwzx      r4, r3, r4
	  stw       r0, 0x30(r15)
	  lwz       r3, 0x8(r1)
	  stw       r4, 0x34(r15)
	  lwz       r0, 0x34(r4)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x30(r4)
	  stw       r0, 0x0(r3)
	  b         .loc_0x3C0

	.loc_0x3B0:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1
	  stw       r3, 0x670(r1)
	  bdnz+     .loc_0x364

	.loc_0x3C0:
	  lmw       r14, 0x678(r1)
	  lwz       r0, 0x6C4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x6C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B180
 * Size:	000298
 */
void Cave::RandEnemyUnit::setUnitRandEnemyTypeA(int&, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  li        r9, 0
	  stw       r0, 0x444(r1)
	  stmw      r25, 0x424(r1)
	  mr        r25, r3
	  mr        r27, r5
	  addi      r31, r1, 0x8
	  mr        r28, r6
	  mr        r26, r4
	  mr        r6, r31
	  addi      r5, r1, 0x208
	  li        r30, 0
	  li        r29, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r10, 0x10(r3)
	  b         .loc_0x158

	.loc_0x48:
	  lwz       r8, 0x18(r10)
	  lwz       r4, 0x0(r8)
	  cmplwi    r4, 0
	  beq-      .loc_0x154
	  lwz       r0, 0x20(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x154
	  lis       r3, 0x6666
	  lwz       r7, 0x1C(r4)
	  addi      r0, r3, 0x6667
	  mulhw     r0, r0, r7
	  srawi     r3, r0, 0x2
	  rlwinm    r4,r3,1,31,31
	  srawi     r0, r0, 0x2
	  add       r3, r3, r4
	  mulli     r4, r3, 0xA
	  rlwinm    r3,r0,1,31,31
	  add.      r11, r0, r3
	  sub       r3, r7, r4
	  beq-      .loc_0x130
	  lwz       r0, 0x10(r25)
	  add       r9, r9, r11
	  cmpw      r9, r0
	  ble-      .loc_0x130
	  stw       r8, 0x38(r25)
	  lwz       r0, 0x10(r25)
	  sub       r25, r9, r0
	  cmpw      r27, r25
	  bge-      .loc_0xC0
	  mr        r25, r27

	.loc_0xC0:
	  cmpw      r25, r28
	  bgt-      .loc_0xD0
	  stw       r25, 0x0(r26)
	  b         .loc_0x284

	.loc_0xD0:
	  bl        -0x181CB0
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x40C(r1)
	  sub       r3, r25, r28
	  addi      r0, r3, 0x1
	  lfd       f2, -0x3BD0(r2)
	  stw       r4, 0x408(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x408(r1)
	  stw       r0, 0x414(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x410(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x410(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x418(r1)
	  lwz       r0, 0x41C(r1)
	  add       r0, r28, r0
	  stw       r0, 0x0(r26)
	  b         .loc_0x284

	.loc_0x130:
	  cmpwi     r3, 0
	  beq-      .loc_0x154
	  stw       r3, 0x0(r6)
	  addi      r30, r30, 0x1
	  lwz       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  stw       r8, 0x0(r5)
	  addi      r5, r5, 0x4
	  add       r29, r29, r0

	.loc_0x154:
	  lwz       r10, 0x4(r10)

	.loc_0x158:
	  cmplwi    r10, 0
	  bne+      .loc_0x48
	  li        r0, 0
	  cmpwi     r29, 0
	  stw       r0, 0x38(r25)
	  beq-      .loc_0x284
	  bl        -0x181D50
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x41C(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x3BD0(r2)
	  li        r5, 0
	  stw       r4, 0x418(r1)
	  li        r6, 0
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x418(r1)
	  stw       r0, 0x414(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x410(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x410(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x408(r1)
	  lwz       r3, 0x40C(r1)
	  mtctr     r30
	  cmpwi     r30, 0
	  ble-      .loc_0x284

	.loc_0x1D0:
	  lwz       r0, 0x0(r31)
	  add       r5, r5, r0
	  cmpw      r5, r3
	  ble-      .loc_0x278
	  rlwinm    r0,r6,2,0,29
	  addi      r3, r1, 0x208
	  lwzx      r0, r3, r0
	  stw       r0, 0x38(r25)
	  lwz       r3, 0x8(r25)
	  lwz       r0, 0xC(r25)
	  sub       r25, r0, r3
	  cmpw      r27, r25
	  bge-      .loc_0x208
	  mr        r25, r27

	.loc_0x208:
	  cmpw      r25, r28
	  bgt-      .loc_0x218
	  stw       r25, 0x0(r26)
	  b         .loc_0x284

	.loc_0x218:
	  bl        -0x181DF8
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x41C(r1)
	  sub       r3, r25, r28
	  addi      r0, r3, 0x1
	  lfd       f2, -0x3BD0(r2)
	  stw       r4, 0x418(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f0, -0x3BD8(r2)
	  lfd       f1, 0x418(r1)
	  stw       r0, 0x414(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x410(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x410(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x408(r1)
	  lwz       r0, 0x40C(r1)
	  add       r0, r28, r0
	  stw       r0, 0x0(r26)
	  b         .loc_0x284

	.loc_0x278:
	  addi      r31, r31, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x1D0

	.loc_0x284:
	  lmw       r25, 0x424(r1)
	  lwz       r0, 0x444(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B418
 * Size:	000420
 */
void Cave::RandEnemyUnit::makeSetEnemyTypeA(Game::Cave::MapNode*,
                                            Game::Cave::BaseGen*,
                                            Game::Cave::EnemyUnit*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  stw       r0, 0x1D4(r1)
	  stfd      f31, 0x1C0(r1)
	  psq_st    f31,0x1C8(r1),0,0
	  stfd      f30, 0x1B0(r1)
	  psq_st    f30,0x1B8(r1),0,0
	  stfd      f29, 0x1A0(r1)
	  psq_st    f29,0x1A8(r1),0,0
	  stfd      f28, 0x190(r1)
	  psq_st    f28,0x198(r1),0,0
	  stfd      f27, 0x180(r1)
	  psq_st    f27,0x188(r1),0,0
	  stfd      f26, 0x170(r1)
	  psq_st    f26,0x178(r1),0,0
	  stfd      f25, 0x160(r1)
	  psq_st    f25,0x168(r1),0,0
	  stfd      f24, 0x150(r1)
	  psq_st    f24,0x158(r1),0,0
	  stfd      f23, 0x140(r1)
	  psq_st    f23,0x148(r1),0,0
	  stfd      f22, 0x130(r1)
	  psq_st    f22,0x138(r1),0,0
	  stmw      r22, 0x108(r1)
	  lis       r8, 0x8012
	  mr        r23, r3
	  subi      r0, r8, 0xCB8
	  mr        r24, r4
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r4, r0
	  addi      r3, r1, 0x14
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x10
	  bl        -0x189C6C
	  mr        r4, r24
	  mr        r5, r25
	  addi      r3, r1, 0x8
	  bl        -0x79DC
	  addi      r29, r1, 0x14
	  lis       r3, 0x8050
	  lfs       f26, 0x8(r1)
	  mr        r30, r29
	  lfs       f25, 0xC(r1)
	  addi      r22, r3, 0x71A0
	  lfs       f24, 0x10(r1)
	  li        r28, 0
	  lfs       f23, 0x2C(r25)
	  lis       r31, 0x4330
	  lfd       f28, -0x3BD0(r2)
	  lfs       f29, -0x3BD8(r2)
	  lfs       f30, -0x3BA0(r2)
	  lfs       f31, -0x3BC0(r2)
	  lfs       f22, -0x3B98(r2)
	  b         .loc_0x1C0

	.loc_0xE4:
	  bl        -0x181F5C
	  xoris     r0, r3, 0x8000
	  stw       r31, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  lfd       f0, 0xD8(r1)
	  fsubs     f0, f0, f28
	  fmuls     f0, f23, f0
	  fdivs     f27, f0, f29
	  bl        -0x181F7C
	  xoris     r0, r3, 0x8000
	  stw       r31, 0xE0(r1)
	  stw       r0, 0xE4(r1)
	  lfd       f0, 0xE0(r1)
	  fsubs     f0, f0, f28
	  fmuls     f0, f30, f0
	  fdivs     f1, f0, f29
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x158
	  lfs       f0, -0x3B9C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xE8(r1)
	  lwz       r0, 0xEC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x17C

	.loc_0x158:
	  lfs       f0, -0x3B98(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xF0(r1)
	  lwz       r0, 0xF4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x17C:
	  fmadds    f0, f27, f0, f26
	  fcmpo     cr0, f1, f31
	  stfs      f0, 0x0(r30)
	  stfs      f25, 0x4(r30)
	  bge-      .loc_0x194
	  fneg      f1, f1

	.loc_0x194:
	  fmuls     f0, f1, f22
	  addi      r28, r28, 0x1
	  fctiwz    f0, f0
	  stfd      f0, 0xF8(r1)
	  lwz       r0, 0xFC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r22, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f0, f27, f0, f24
	  stfs      f0, 0x8(r30)
	  addi      r30, r30, 0xC

	.loc_0x1C0:
	  cmpw      r28, r27
	  blt+      .loc_0xE4
	  li        r5, 0

	.loc_0x1CC:
	  mr        r4, r29
	  li        r6, 0
	  b         .loc_0x31C

	.loc_0x1D8:
	  mr        r3, r29
	  li        r7, 0
	  mtctr     r27
	  cmpwi     r27, 0
	  ble-      .loc_0x314

	.loc_0x1EC:
	  cmpw      r6, r7
	  beq-      .loc_0x308
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  lfs       f4, 0x0(r4)
	  fsubs     f1, f1, f0
	  lfs       f2, 0x0(r3)
	  lfs       f3, 0x8(r4)
	  lfs       f0, 0x8(r3)
	  fsubs     f2, f4, f2
	  fmuls     f4, f1, f1
	  fsubs     f0, f3, f0
	  lfs       f3, -0x3BC0(r2)
	  fmadds    f4, f2, f2, f4
	  fmuls     f5, f0, f0
	  fadds     f6, f5, f4
	  fcmpo     cr0, f6, f3
	  ble-      .loc_0x244
	  ble-      .loc_0x248
	  fsqrte    f3, f6
	  fmuls     f6, f3, f6
	  b         .loc_0x248

	.loc_0x244:
	  fmr       f6, f3

	.loc_0x248:
	  lfs       f3, -0x3B94(r2)
	  fcmpo     cr0, f6, f3
	  bge-      .loc_0x308
	  fmuls     f4, f1, f1
	  lfs       f3, -0x3BC0(r2)
	  fmuls     f5, f0, f0
	  fmadds    f4, f2, f2, f4
	  fadds     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x280
	  ble-      .loc_0x284
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0x284

	.loc_0x280:
	  fmr       f4, f3

	.loc_0x284:
	  lfs       f3, -0x3BC0(r2)
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x2A4
	  lfs       f3, -0x3B90(r2)
	  fdivs     f3, f3, f4
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3

	.loc_0x2A4:
	  lfs       f3, -0x3B94(r2)
	  lfs       f5, -0x3B8C(r2)
	  fsubs     f4, f3, f6
	  lfs       f3, 0x0(r4)
	  fmuls     f4, f5, f4
	  fmuls     f2, f2, f4
	  fmuls     f1, f1, f4
	  fmuls     f0, f0, f4
	  fadds     f3, f3, f2
	  stfs      f3, 0x0(r4)
	  lfs       f3, 0x4(r4)
	  fadds     f3, f3, f1
	  stfs      f3, 0x4(r4)
	  lfs       f3, 0x8(r4)
	  fadds     f3, f3, f0
	  stfs      f3, 0x8(r4)
	  lfs       f3, 0x0(r3)
	  fsubs     f2, f3, f2
	  stfs      f2, 0x0(r3)
	  lfs       f2, 0x4(r3)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x4(r3)
	  lfs       f1, 0x8(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x8(r3)

	.loc_0x308:
	  addi      r3, r3, 0xC
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x1EC

	.loc_0x314:
	  addi      r4, r4, 0xC
	  addi      r6, r6, 0x1

	.loc_0x31C:
	  cmpw      r6, r27
	  blt+      .loc_0x1D8
	  addi      r5, r5, 0x1
	  cmpwi     r5, 0x5
	  blt+      .loc_0x1CC
	  lis       r3, 0x8051
	  li        r30, 0
	  subi      r28, r3, 0x2E20
	  b         .loc_0x39C

	.loc_0x340:
	  li        r3, 0x38
	  bl        -0x2278B8
	  mr.       r22, r3
	  beq-      .loc_0x364
	  mr        r4, r26
	  mr        r5, r25
	  li        r6, 0x1
	  bl        -0x75AC
	  mr        r22, r3

	.loc_0x364:
	  lfs       f1, 0x0(r29)
	  mr        r3, r28
	  lfs       f0, 0x8(r29)
	  fsubs     f1, f1, f26
	  fsubs     f2, f0, f24
	  bl        -0x216688
	  mr        r3, r22
	  mr        r4, r29
	  bl        -0x7398
	  lwz       r3, 0x1C(r24)
	  mr        r4, r22
	  bl        0x1C5C60
	  addi      r29, r29, 0xC
	  addi      r30, r30, 0x1

	.loc_0x39C:
	  cmpw      r30, r27
	  blt+      .loc_0x340
	  lwz       r0, 0x10(r23)
	  add       r0, r0, r27
	  stw       r0, 0x10(r23)
	  lwz       r0, 0x8(r23)
	  add       r0, r0, r27
	  stw       r0, 0x8(r23)
	  psq_l     f31,0x1C8(r1),0,0
	  lfd       f31, 0x1C0(r1)
	  psq_l     f30,0x1B8(r1),0,0
	  lfd       f30, 0x1B0(r1)
	  psq_l     f29,0x1A8(r1),0,0
	  lfd       f29, 0x1A0(r1)
	  psq_l     f28,0x198(r1),0,0
	  lfd       f28, 0x190(r1)
	  psq_l     f27,0x188(r1),0,0
	  lfd       f27, 0x180(r1)
	  psq_l     f26,0x178(r1),0,0
	  lfd       f26, 0x170(r1)
	  psq_l     f25,0x168(r1),0,0
	  lfd       f25, 0x160(r1)
	  psq_l     f24,0x158(r1),0,0
	  lfd       f24, 0x150(r1)
	  psq_l     f23,0x148(r1),0,0
	  lfd       f23, 0x140(r1)
	  psq_l     f22,0x138(r1),0,0
	  lfd       f22, 0x130(r1)
	  lmw       r22, 0x108(r1)
	  lwz       r0, 0x1D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B838
 * Size:	00003C
 */
void Cave::RandEnemyUnit::isEnemySetGen(Game::Cave::MapNode*,
                                        Game::Cave::BaseGen*)
{
	/*
	.loc_0x0:
	  cmplwi    r5, 0
	  beq-      .loc_0x34
	  lwz       r3, 0x1C(r4)
	  lwz       r3, 0x10(r3)
	  b         .loc_0x2C

	.loc_0x14:
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x28
	  li        r3, 0x1
	  blr

	.loc_0x28:
	  lwz       r3, 0x4(r3)

	.loc_0x2C:
	  cmplwi    r3, 0
	  bne+      .loc_0x14

	.loc_0x34:
	  li        r3, 0
	  blr
	*/
}
} // namespace Game
