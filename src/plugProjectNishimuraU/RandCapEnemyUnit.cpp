#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80300E68
 * Size:	00002C
 */
Cave::RandCapEnemyUnit::RandCapEnemyUnit(Game::Cave::MapUnitGenerator*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r0, 0
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0x18(r4)
	  stw       r4, 0x8(r3)
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0x1C(r4)
	  stw       r4, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80300E94
 * Size:	000008
 */
void Cave::RandCapEnemyUnit::setManageClassPtr(Game::Cave::RandItemUnit* a1)
{
	// Generated from stw r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	80300E9C
 * Size:	000108
 */
void Cave::RandCapEnemyUnit::setCapEnemySlot()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x0(r3)
	  lwz       r31, 0x28(r3)
	  lwz       r30, 0x10(r31)
	  b         .loc_0x80

	.loc_0x2C:
	  lwz       r3, 0x18(r30)
	  bl        -0xBE354
	  cmpwi     r3, 0
	  bne-      .loc_0x7C
	  mr        r3, r30
	  bl        -0xBD518
	  subi      r4, r2, 0xEA0
	  li        r5, 0x4
	  bl        -0x236868
	  cmpwi     r3, 0
	  bne-      .loc_0x7C
	  lwz       r3, 0x4(r29)
	  mr        r4, r30
	  bl        -0xB28F0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7C
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0
	  bl        .loc_0x108

	.loc_0x7C:
	  lwz       r30, 0x4(r30)

	.loc_0x80:
	  cmplwi    r30, 0
	  bne+      .loc_0x2C
	  lwz       r30, 0x10(r31)
	  b         .loc_0xE4

	.loc_0x90:
	  lwz       r3, 0x18(r30)
	  bl        -0xBE3B8
	  cmpwi     r3, 0
	  bne-      .loc_0xE0
	  mr        r3, r30
	  bl        -0xBD57C
	  subi      r4, r2, 0xEA0
	  li        r5, 0x4
	  bl        -0x2368CC
	  cmpwi     r3, 0
	  bne-      .loc_0xE0
	  lwz       r3, 0x4(r29)
	  mr        r4, r30
	  bl        -0xB286C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE0
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x1
	  bl        .loc_0x108

	.loc_0xE0:
	  lwz       r30, 0x4(r30)

	.loc_0xE4:
	  cmplwi    r30, 0
	  bne+      .loc_0x90
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x108:
	*/
}

/*
 * --INFO--
 * Address:	80300FA4
 * Size:	0001BC
 */
void Cave::RandCapEnemyUnit::setCapCommonEnemySlot(Game::Cave::MapNode*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stmw      r25, 0x24(r1)
	  mr        r29, r5
	  rlwinm    r6,r29,2,0,29
	  mr        r27, r3
	  add       r31, r27, r6
	  lis       r5, 0x6666
	  mr        r28, r4
	  addi      r12, r6, 0x10
	  addi      r10, r5, 0x6667
	  li        r30, 0
	  lwz       r3, 0x8(r31)
	  lwz       r25, 0x10(r3)
	  b         .loc_0xD0

	.loc_0x44:
	  lwz       r5, 0x18(r25)
	  lwz       r11, 0x0(r5)
	  cmplwi    r11, 0
	  beq-      .loc_0xCC
	  lwz       r26, 0x1C(r11)
	  lwzx      r3, r27, r12
	  mulhw     r4, r10, r26
	  srawi     r8, r4, 0x2
	  srawi     r4, r4, 0x2
	  rlwinm    r7,r4,1,31,31
	  rlwinm    r9,r8,1,31,31
	  add       r4, r4, r7
	  add       r7, r8, r9
	  mulli     r4, r4, 0xA
	  add       r0, r0, r7
	  sub       r4, r26, r4
	  cmpw      r0, r3
	  add       r30, r30, r4
	  ble-      .loc_0xCC
	  lwz       r3, 0x20(r11)
	  li        r7, 0x1
	  cmpwi     r3, 0
	  bne-      .loc_0xB8
	  add       r3, r27, r6
	  lwz       r3, 0x10(r3)
	  sub       r0, r0, r3
	  cmpwi     r0, 0x1
	  ble-      .loc_0xB8
	  li        r7, 0x2

	.loc_0xB8:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r6, r29
	  bl        .loc_0x1BC
	  b         .loc_0x1A8

	.loc_0xCC:
	  lwz       r25, 0x4(r25)

	.loc_0xD0:
	  cmplwi    r25, 0
	  bne+      .loc_0x44
	  bl        -0x237ADC
	  lis       r6, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  xoris     r0, r30, 0x8000
	  lwz       r5, 0x8(r31)
	  lis       r3, 0x6666
	  stw       r6, 0x8(r1)
	  addi      r4, r3, 0x6667
	  lfd       f2, -0xE90(r2)
	  li        r9, 0
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0xE98(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0x14(r1)
	  lwz       r10, 0x10(r5)
	  stw       r6, 0x10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r7, 0x1C(r1)
	  b         .loc_0x1A0

	.loc_0x13C:
	  lwz       r5, 0x18(r10)
	  lwz       r8, 0x0(r5)
	  cmplwi    r8, 0
	  beq-      .loc_0x19C
	  lwz       r6, 0x1C(r8)
	  mulhw     r0, r4, r6
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0xA
	  sub       r0, r6, r0
	  add       r9, r9, r0
	  cmpw      r9, r7
	  ble-      .loc_0x19C
	  lwz       r0, 0x20(r8)
	  li        r7, 0x1
	  cmpwi     r0, 0
	  bne-      .loc_0x188
	  li        r7, 0x2

	.loc_0x188:
	  mr        r3, r27
	  mr        r4, r28
	  mr        r6, r29
	  bl        .loc_0x1BC
	  b         .loc_0x1A8

	.loc_0x19C:
	  lwz       r10, 0x4(r10)

	.loc_0x1A0:
	  cmplwi    r10, 0
	  bne+      .loc_0x13C

	.loc_0x1A8:
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x1BC:
	*/
}

/*
 * --INFO--
 * Address:	80301160
 * Size:	000098
 */
void Cave::RandCapEnemyUnit::setCapEnemy(Game::Cave::MapNode*,
                                         Game::Cave::EnemyUnit*, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  rlwinm    r6,r6,2,0,29
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r7
	  addi      r30, r6, 0x10
	  li        r29, 0
	  b         .loc_0x7C

	.loc_0x30:
	  li        r3, 0x38
	  bl        -0x2DD2F0
	  mr.       r31, r3
	  beq-      .loc_0x54
	  mr        r4, r27
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0xBCFE4
	  mr        r31, r3

	.loc_0x54:
	  mr        r3, r31
	  mr        r4, r26
	  bl        -0xBCF60
	  lwz       r3, 0x1C(r26)
	  mr        r4, r31
	  bl        0x110240
	  lwzx      r3, r25, r30
	  addi      r29, r29, 0x1
	  addi      r0, r3, 0x1
	  stwx      r0, r25, r30

	.loc_0x7C:
	  cmpw      r29, r28
	  blt+      .loc_0x30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
} // namespace Game
