#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_enemyAction_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047AE88
    lbl_8047AE88:
        .asciz "teki-srch"
        .skip 2
    .global lbl_8047AE94
    lbl_8047AE94:
        .asciz "g2B_white_poison"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ABC48
    lbl_804ABC48:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game9EnemyFunc25EatPikminDefaultCondition
    __vt__Q34Game9EnemyFunc25EatPikminDefaultCondition:
        .4byte 0
        .4byte 0
        .4byte
   satisfy__Q34Game9EnemyFunc25EatPikminDefaultConditionFPQ24Game4Piki .global
   "__vt__23Condition<Q24Game4Piki>"
    "__vt__23Condition<Q24Game4Piki>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q34Game9EnemyFunc21ConditionPikminNearby
    __vt__Q34Game9EnemyFunc21ConditionPikminNearby:
        .4byte 0
        .4byte 0
        .4byte
   satisfy__Q34Game9EnemyFunc21ConditionPikminNearbyFPQ24Game8Creature .global
   "__vt__27Condition<Q24Game8Creature>"
    "__vt__27Condition<Q24Game8Creature>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__26Iterator<Q24Game8Creature>"
    "__vt__26Iterator<Q24Game8Creature>":
        .4byte 0
        .4byte 0
        .4byte "first__26Iterator<Q24Game8Creature>Fv"
        .4byte "next__26Iterator<Q24Game8Creature>Fv"
        .4byte "isDone__26Iterator<Q24Game8Creature>Fv"
        .4byte "__ml__26Iterator<Q24Game8Creature>Fv"
    .global "__vt__22Iterator<Q24Game4Piki>"
    "__vt__22Iterator<Q24Game4Piki>":
        .4byte 0
        .4byte 0
        .4byte "first__22Iterator<Q24Game4Piki>Fv"
        .4byte "next__22Iterator<Q24Game4Piki>Fv"
        .4byte "isDone__22Iterator<Q24Game4Piki>Fv"
        .4byte "__ml__22Iterator<Q24Game4Piki>Fv"
    .global "__vt__22Iterator<Q24Game4Navi>"
    "__vt__22Iterator<Q24Game4Navi>":
        .4byte 0
        .4byte 0
        .4byte "first__22Iterator<Q24Game4Navi>Fv"
        .4byte "next__22Iterator<Q24Game4Navi>Fv"
        .4byte "isDone__22Iterator<Q24Game4Navi>Fv"
        .4byte "__ml__22Iterator<Q24Game4Navi>Fv"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515878
    lbl_80515878:
        .skip 0x4
    .global lbl_8051587C
    lbl_8051587C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517A78
    lbl_80517A78:
        .4byte 0x40490FDB
    .global lbl_80517A7C
    lbl_80517A7C:
        .4byte 0x3BB60B61
    .global lbl_80517A80
    lbl_80517A80:
        .4byte 0x00000000
    .global lbl_80517A84
    lbl_80517A84:
        .4byte 0x47000000
    .global lbl_80517A88
    lbl_80517A88:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80517A90
    lbl_80517A90:
        .float 1.0
    .global lbl_80517A94
    lbl_80517A94:
        .float 0.5
*/

namespace Game {

/*
 * --INFO--
 * Address:	801126F4
 * Size:	000424
 */
void EnemyFunc::getNearestNavi(Game::Creature*, float, float, float*, Condition<Game::Navi>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  lfs       f3, -0x68E4(r2)
	  mr        r29, r3
	  lfs       f0, -0x68E0(r2)
	  mr        r30, r4
	  fmuls     f1, f3, f1
	  lfs       f3, -0x68E8(r2)
	  fcmpo     cr0, f2, f0
	  li        r31, 0
	  fmuls     f30, f3, f1
	  bge-      .loc_0x78
	  lis       r3, 0x8051
	  lfs       f1, 0x48D8(r3)
	  b         .loc_0x7C

	.loc_0x78:
	  fmuls     f1, f2, f2

	.loc_0x7C:
	  cmplwi    r30, 0
	  beq-      .loc_0xA0
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x98
	  fmr       f31, f0
	  b         .loc_0xA4

	.loc_0x98:
	  fmr       f31, f1
	  b         .loc_0xA4

	.loc_0xA0:
	  fmr       f31, f1

	.loc_0xA4:
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x434C
	  li        r0, 0
	  cmplwi    r5, 0
	  stw       r4, 0x68(r1)
	  stw       r5, 0x74(r1)
	  stw       r0, 0x6C(r1)
	  stw       r3, 0x70(r1)
	  bne-      .loc_0xE4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3A4

	.loc_0xE4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x150

	.loc_0xFC:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A4
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x150:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xFC
	  b         .loc_0x3A4

	.loc_0x170:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E8
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0xDD804
	  bl        0x2FF2C0
	  lwz       r12, 0x0(r29)
	  fmr       f27, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x2FF2C8
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x2E8
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x40(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x58(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f29, f27
	  lfs       f1, 0x5C(r1)
	  fsubs     f1, f1, f28
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x2E8
	  mr        r31, r28
	  fmr       f31, f0

	.loc_0x2E8:
	  lwz       r0, 0x74(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3A4

	.loc_0x314:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x388

	.loc_0x334:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A4
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x388:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x334

	.loc_0x3A4:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x6C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x170
	  cmplwi    r31, 0
	  beq-      .loc_0x3D8
	  cmplwi    r30, 0
	  beq-      .loc_0x3D8
	  stfs      f31, 0x0(r30)

	.loc_0x3D8:
	  mr        r3, r31
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80112B18
 * Size:	00004C
 */
void Iterator<Game::Navi>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80112B64
 * Size:	000484
 */
void EnemyFunc::getNearestPikmin(Game::Creature*, float, float, float*, Condition<Game::Piki>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stmw      r27, 0x7C(r1)
	  lwz       r7, -0x6514(r13)
	  lis       r6, 0x8048
	  fmr       f30, f1
	  mr        r29, r3
	  fmr       f27, f2
	  subi      r0, r6, 0x5178
	  mr        r30, r4
	  mr        r27, r5
	  lwz       r3, 0x28(r7)
	  mr        r4, r0
	  li        r5, 0x1
	  bl        0x317F30
	  lfs       f1, -0x68E4(r2)
	  li        r31, 0
	  lfs       f0, -0x68E0(r2)
	  fmuls     f1, f1, f30
	  lfs       f2, -0x68E8(r2)
	  fcmpo     cr0, f27, f0
	  fmuls     f30, f2, f1
	  bge-      .loc_0x94
	  lis       r3, 0x8051
	  lfs       f27, 0x48D8(r3)
	  b         .loc_0x98

	.loc_0x94:
	  fmuls     f27, f27, f27

	.loc_0x98:
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f0, f27
	  bge-      .loc_0xB4
	  fmr       f31, f0
	  b         .loc_0xC0

	.loc_0xB4:
	  fmr       f31, f27
	  b         .loc_0xC0

	.loc_0xBC:
	  fmr       f31, f27

	.loc_0xC0:
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x4364
	  li        r0, 0
	  cmplwi    r27, 0
	  stw       r4, 0x68(r1)
	  stw       r27, 0x74(r1)
	  stw       r0, 0x6C(r1)
	  stw       r3, 0x70(r1)
	  bne-      .loc_0x100
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3FC

	.loc_0x100:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x16C

	.loc_0x118:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3FC
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x16C:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x118
	  b         .loc_0x3FC

	.loc_0x18C:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  li        r28, 0
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  mr        r3, r27
	  bl        0x8C844
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F0
	  li        r28, 0x1

	.loc_0x1F0:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x340
	  mr        r4, r27
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0xDDCCC
	  bl        0x2FEDF8
	  lwz       r12, 0x0(r29)
	  fmr       f27, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x2FEE00
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x340
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x40(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r27
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r27)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r27
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r27)
	  lfs       f29, 0x58(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f29, f27
	  lfs       f1, 0x5C(r1)
	  fsubs     f1, f1, f28
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x340
	  mr        r31, r27
	  fmr       f31, f0

	.loc_0x340:
	  lwz       r0, 0x74(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x36C
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3FC

	.loc_0x36C:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3E0

	.loc_0x38C:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3FC
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x3E0:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x38C

	.loc_0x3FC:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x6C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x18C
	  cmplwi    r31, 0
	  beq-      .loc_0x430
	  cmplwi    r30, 0
	  beq-      .loc_0x430
	  stfs      f31, 0x0(r30)

	.loc_0x430:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5178
	  lwz       r3, 0x28(r5)
	  bl        0x317B58
	  mr        r3, r31
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  lmw       r27, 0x7C(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80112FE8
 * Size:	00001C
 */
void FakePiki::getPosition()
{
	/*
	lfs      f0, 0x20c(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x210(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x214(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80113004
 * Size:	00004C
 */
void Iterator<Game::Piki>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80113050
 * Size:	0000C4
 */
void EnemyFunc::getNearestPikminOrNavi(Game::Creature*, float, float, float*, Condition<Game::Navi>*, Condition<Game::Piki>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lis       r7, 0x8051
	  mr.       r29, r4
	  lfs       f0, 0x48D8(r7)
	  fmr       f30, f1
	  fmr       f31, f2
	  mr        r28, r3
	  stfs      f0, 0x8(r1)
	  mr        r30, r6
	  bne-      .loc_0x54
	  addi      r29, r1, 0x8

	.loc_0x54:
	  fmr       f1, f30
	  mr        r3, r28
	  fmr       f2, f31
	  mr        r4, r29
	  bl        -0x9C0
	  fmr       f1, f30
	  mr        r31, r3
	  fmr       f2, f31
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x56C
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  b         .loc_0x94

	.loc_0x90:
	  mr        r3, r31

	.loc_0x94:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80113114
 * Size:	000008
 */
u32 Creature::stimulate(Game::Interaction&) { return 0x0; }

/*
 * --INFO--
 * Address:	8011311C
 * Size:	00036C
 */
void EnemyFunc::flickStickPikmin(Game::Creature*, float, float, float, float, Condition<Game::Piki>*)
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
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  fmr       f28, f1
	  mr        r30, r3
	  fmr       f29, f2
	  mr        r31, r4
	  fmr       f30, f3
	  mr        r4, r30
	  fmr       f31, f4
	  addi      r3, r1, 0x2C
	  bl        0x8CAE8
	  lfs       f0, -0x68E8(r2)
	  li        r3, 0
	  lis       r4, 0x804B
	  addi      r0, r1, 0x2C
	  fadds     f31, f31, f0
	  subi      r4, r4, 0x437C
	  stw       r4, 0x8(r1)
	  fmr       f1, f31
	  stw       r3, 0x14(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x2FEA2C
	  lwz       r0, 0x14(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  bne-      .loc_0xB8
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x304

	.loc_0xB8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x128

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x304
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x128:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x304

	.loc_0x148:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x248
	  cmplwi    r31, 0
	  beq-      .loc_0x1A4
	  beq-      .loc_0x248
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x248

	.loc_0x1A4:
	  bl        -0x49D20
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x4C(r1)
	  lfd       f2, -0x68D8(r2)
	  stw       r0, 0x48(r1)
	  lfs       f0, -0x68DC(r2)
	  lfd       f1, 0x48(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x248
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xF4(r3)
	  mr        r29, r3
	  cmplw     r0, r30
	  bne-      .loc_0x248
	  bl        0x8C270
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x248
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r30, 0x1C(r1)
	  addi      r0, r3, 0x4E04
	  mr        r3, r29
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  stw       r0, 0x18(r1)
	  stfs      f29, 0x20(r1)
	  stfs      f30, 0x24(r1)
	  stfs      f31, 0x28(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x248:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x274
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x304

	.loc_0x274:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x2E8

	.loc_0x294:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x304
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x2E8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x294

	.loc_0x304:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  addi      r3, r1, 0x2C
	  li        r4, -0x1
	  bl        0x8C91C
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80113488
 * Size:	00004C
 */
void Iterator<Game::Creature>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801134D4
 * Size:	0002BC
 */
void EnemyFunc::flickNearbyPikmin(Game::Creature*, float, float, float, float, Condition<Game::Piki>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lis       r5, 0x804B
	  fmuls     f1, f1, f1
	  subi      r7, r5, 0x4388
	  lfs       f0, -0x68E8(r2)
	  lwz       r0, -0x6D0C(r13)
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  mr        r31, r3
	  li        r3, 0
	  subi      r5, r5, 0x4364
	  stw       r7, 0x18(r1)
	  subi      r6, r6, 0x4394
	  fmr       f29, f2
	  fmr       f30, f3
	  cmplwi    r4, 0
	  fadds     f31, f4, f0
	  stw       r6, 0x18(r1)
	  stw       r31, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stw       r5, 0x8(r1)
	  stw       r4, 0x14(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bne-      .loc_0xA8
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x26C

	.loc_0xA8:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x118

	.loc_0xC4:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x118:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC4
	  b         .loc_0x26C

	.loc_0x138:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x18
	  lwz       r12, 0x8(r12)
	  mr        r4, r30
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r31, 0x28(r1)
	  addi      r0, r3, 0x4E04
	  mr        r3, r30
	  stw       r4, 0x24(r1)
	  addi      r4, r1, 0x24
	  stw       r0, 0x24(r1)
	  stfs      f29, 0x2C(r1)
	  stfs      f30, 0x30(r1)
	  stfs      f31, 0x34(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x26C

	.loc_0x1DC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x250

	.loc_0x1FC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x250:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1FC

	.loc_0x26C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x138
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80113790
 * Size:	0003A4
 */
void EnemyFunc::flickNearbyNavi(Game::Creature*, float, float, float, float, Condition<Game::Navi>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stfd      f25, 0xA0(r1)
	  psq_st    f25,0xA8(r1),0,0
	  stfd      f24, 0x90(r1)
	  psq_st    f24,0x98(r1),0,0
	  stfd      f23, 0x80(r1)
	  psq_st    f23,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  lfs       f0, -0x68E8(r2)
	  lis       r5, 0x804B
	  lwz       r0, -0x6D20(r13)
	  subi      r6, r5, 0x434C
	  li        r5, 0
	  fmr       f24, f2
	  fmr       f25, f3
	  cmplwi    r4, 0
	  fmuls     f23, f1, f1
	  stw       r6, 0x50(r1)
	  fadds     f26, f4, f0
	  stw       r4, 0x5C(r1)
	  mr        r30, r3
	  stw       r5, 0x54(r1)
	  stw       r0, 0x58(r1)
	  bne-      .loc_0xB8
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x324

	.loc_0xB8:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x128

	.loc_0xD4:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x324
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x128:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x324

	.loc_0x148:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  mr        r4, r31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f27, 0x10(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x18(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r30)
	  lfs       f29, 0x20(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r30)
	  lfs       f30, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0x3C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f31, f28
	  lfs       f2, 0x44(r1)
	  fsubs     f1, f30, f27
	  fsubs     f2, f2, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f2, f2, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f23
	  bge-      .loc_0x268
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r30, 0x64(r1)
	  addi      r0, r3, 0x4E04
	  mr        r3, r31
	  stw       r4, 0x60(r1)
	  addi      r4, r1, 0x60
	  stw       r0, 0x60(r1)
	  stfs      f24, 0x68(r1)
	  stfs      f25, 0x6C(r1)
	  stfs      f26, 0x70(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x268:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x294
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x324

	.loc_0x294:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x308

	.loc_0x2B4:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x324
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x308:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2B4

	.loc_0x324:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  psq_l     f25,0xA8(r1),0,0
	  lfd       f25, 0xA0(r1)
	  psq_l     f24,0x98(r1),0,0
	  lfd       f24, 0x90(r1)
	  psq_l     f23,0x88(r1),0,0
	  lfd       f23, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80113B34
 * Size:	000350
 */
void EnemyFunc::eatPikmin(Game::EnemyBase*, Condition<Game::Piki>*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stmw     r26, 0x58(r1)
	mr       r29, r3
	mr       r26, r4
	li       r31, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x25c(r12)
	mtctr    r12
	bctrl
	lis      r5, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r4, __vt__Q34Game9EnemyFunc25EatPikminDefaultCondition@ha
	addi     r0, r5, "__vt__23Condition<Q24Game4Piki>"@l
	cmplwi   r26, 0
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q34Game9EnemyFunc25EatPikminDefaultCondition@l
	mr       r30, r3
	stw      r0, 8(r1)
	stw      r29, 0xc(r1)
	bne      lbl_80113B8C
	addi     r26, r1, 8

lbl_80113B8C:
	cmplwi   r30, 0
	beq      lbl_80113E6C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	li       r0, 0
	cmplwi   r26, 0
	stw      r4, 0x28(r1)
	stw      r26, 0x34(r1)
	stw      r0, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_80113BD4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80113E4C

lbl_80113BD4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80113C40

lbl_80113BEC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80113E4C
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_80113C40:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80113BEC
	b        lbl_80113E4C

lbl_80113C60:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r26, 0
	mr       r27, r3
	b        lbl_80113D84

lbl_80113C80:
	mr       r3, r30
	mr       r4, r26
	bl       getSlot__10MouthSlotsFi
	mr       r28, r3
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	bne      lbl_80113D80
	addi     r4, r1, 0x1c
	bl       "getPosition__13MouthCollPartFR10Vector3<f>"
	mr       r4, r27
	addi     r3, r1, 0x10
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x20(r1)
	lfs      f0, 0x14(r1)
	lfs      f3, 0x1c(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x10(r1)
	lfs      f1, 0x24(r1)
	lfs      f0, 0x18(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80517A80@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80113D0C
	ble      lbl_80113D10
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80113D10

lbl_80113D0C:
	fmr      f1, f0

lbl_80113D10:
	lfs      f0, 0x1c(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_80113D80
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game14InteractAttack@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_80517A90@sda21(r2)
	stw      r0, 0x38(r1)
	addi     r4, r3, __vt__Q24Game14InteractAttack@l
	lis      r3, __vt__Q24Game15InteractSwallow@ha
	li       r0, 0
	stw      r4, 0x38(r1)
	addi     r5, r3, __vt__Q24Game15InteractSwallow@l
	mr       r3, r27
	addi     r4, r1, 0x38
	stw      r29, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stw      r28, 0x44(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x48(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80113D90
	addi     r31, r31, 1
	b        lbl_80113D90

lbl_80113D80:
	addi     r26, r26, 1

lbl_80113D84:
	lwz      r0, 0(r30)
	cmpw     r26, r0
	blt      lbl_80113C80

lbl_80113D90:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_80113DBC
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80113E4C

lbl_80113DBC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80113E30

lbl_80113DDC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80113E4C
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_80113E30:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80113DDC

lbl_80113E4C:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_80113C60

lbl_80113E6C:
	mr       r3, r31
	lmw      r26, 0x58(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80113E84
 * Size:	0003DC
 */
void EnemyFunc::swallowPikmin(Game::Creature*, float, Condition<Game::Piki>*)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	fmr      f31, f1
	mr       r30, r3
	mr       r31, r4
	addi     r3, r1, 0x30
	mr       r4, r30
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x30
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80113EFC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80114210

lbl_80113EFC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80113F68

lbl_80113F14:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114210
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80113F68:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80113F14
	b        lbl_80114210

lbl_80113F88:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114154
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	mr       r29, r3
	beq      lbl_80113FFC
	beq      lbl_80114154
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114154

lbl_80113FFC:
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114154
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractKill@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 0
	stw      r4, 0x14(r1)
	addi     r5, r3, __vt__Q24Game12InteractKill@l
	mr       r3, r29
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114154
	lbz      r0, 0x2b8(r29)
	cmpwi    r0, 4
	bne      lbl_80114154
	mr       r3, r30
	fmr      f1, f31
	lwz      r12, 0(r30)
	mr       r4, r29
	lwz      r12, 0x298(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80114154
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xc
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114154
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80114154
	lfs      f0, lbl_80517A80@sda21(r2)
	lis      r3, lbl_8047AE94@ha
	li       r0, 0
	mr       r4, r30
	addi     r5, r3, lbl_8047AE94@l
	stw      r0, 0x50(r1)
	addi     r3, r1, 8
	stw      r5, 0x4c(r1)
	stw      r0, 0x58(r1)
	stfs     f0, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stw      r0, 0x74(r1)
	stw      r0, 0x5c(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x78(r1)
	stw      r0, 0x60(r1)
	stw      r0, 0x7c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r30
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x64(r1)
	stfs     f1, 0x68(r1)
	stfs     f0, 0x6c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x70(r1)
	addi     r4, r1, 0x4c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r30, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xc
	bl       setDemoFlag__Q24Game8PlayDataFi

lbl_80114154:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80114180
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80114210

lbl_80114180:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_801141F4

lbl_801141A0:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114210
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_801141F4:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801141A0

lbl_80114210:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80113F88
	addi     r3, r1, 0x30
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	psq_l    f31, 152(r1), 0, qr0
	lwz      r0, 0xa4(r1)
	lfd      f31, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80114260
 * Size:	0003F8
 */
void EnemyFunc::attackNavi(Game::Creature*, float, float, float, CollPart*, Condition<Game::Navi>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stmw      r27, 0x7C(r1)
	  lfs       f0, -0x68E4(r2)
	  lis       r6, 0x804B
	  lwz       r0, -0x6D20(r13)
	  subi      r7, r6, 0x434C
	  fmuls     f0, f0, f2
	  lfs       f2, -0x68E8(r2)
	  li        r6, 0
	  fmr       f29, f1
	  fmr       f31, f3
	  cmplwi    r5, 0
	  fmuls     f30, f2, f0
	  stw       r7, 0x60(r1)
	  mr        r29, r3
	  mr        r30, r4
	  stw       r5, 0x6C(r1)
	  li        r31, 0
	  stw       r6, 0x64(r1)
	  stw       r0, 0x68(r1)
	  bne-      .loc_0xA8
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x134

	.loc_0xA8:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x118

	.loc_0xC4:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x134
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x118:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC4

	.loc_0x134:
	  lis       r3, 0x8051
	  subi      r28, r3, 0x2E20
	  b         .loc_0x390

	.loc_0x140:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r27)
	  mr        r4, r27
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  mr        r3, r28
	  lfs       f3, 0x34(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0xDF324
	  bl        0x2FD7A0
	  lwz       r12, 0x0(r29)
	  fmr       f28, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f28
	  bl        0x2FD7A8
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x2D4
	  mr        r4, r27
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x48(r1)
	  lfs       f26, 0x4C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x3C(r1)
	  lfs       f2, 0x38(r1)
	  fsubs     f3, f0, f27
	  lfs       f1, 0x40(r1)
	  fsubs     f2, f2, f28
	  lfs       f0, -0x68E0(r2)
	  fsubs     f1, f1, f26
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x288
	  ble-      .loc_0x28C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x28C

	.loc_0x288:
	  fmr       f1, f0

	.loc_0x28C:
	  fcmpo     cr0, f1, f29
	  bge-      .loc_0x2D4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r29, 0x54(r1)
	  addi      r0, r3, 0x4DE0
	  mr        r3, r27
	  stw       r4, 0x50(r1)
	  addi      r4, r1, 0x50
	  stw       r0, 0x50(r1)
	  stfs      f31, 0x58(r1)
	  stw       r30, 0x5C(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x2D4:
	  lwz       r0, 0x6C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x300
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x390

	.loc_0x300:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)
	  b         .loc_0x374

	.loc_0x320:
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x390
	  lwz       r3, 0x68(r1)
	  lwz       r4, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x64(r1)

	.loc_0x374:
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x320

	.loc_0x390:
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x64(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x140
	  mr        r3, r31
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  lmw       r27, 0x7C(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80114658
 * Size:	0000DC
 */
void EnemyFunc::isStartFlick(Game::EnemyBase*, bool)
{
	/*
	stwu     r1, -0x10(r1)
	li       r7, 0
	lfs      f0, lbl_80517A80@sda21(r2)
	lfs      f1, 0x20c(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80114680
	lfs      f0, lbl_80517A94@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80114688

lbl_80114680:
	lfs      f0, lbl_80517A94@sda21(r2)
	fsubs    f0, f1, f0

lbl_80114688:
	fctiwz   f0, f0
	lwz      r6, 0xc0(r3)
	lwz      r5, 0x1f4(r3)
	lwz      r0, 0x71c(r6)
	stfd     f0, 8(r1)
	cmpw     r5, r0
	lwz      r0, 0xc(r1)
	clrlwi   r8, r0, 0x18
	bge      lbl_801146C0
	lwz      r0, 0x6f4(r6)
	cmpw     r8, r0
	ble      lbl_80114710
	li       r7, 1
	b        lbl_80114710

lbl_801146C0:
	lwz      r0, 0x76c(r6)
	cmpw     r5, r0
	bge      lbl_801146E0
	lwz      r0, 0x744(r6)
	cmpw     r8, r0
	ble      lbl_80114710
	li       r7, 1
	b        lbl_80114710

lbl_801146E0:
	lwz      r0, 0x7bc(r6)
	cmpw     r5, r0
	bge      lbl_80114700
	lwz      r0, 0x794(r6)
	cmpw     r8, r0
	ble      lbl_80114710
	li       r7, 1
	b        lbl_80114710

lbl_80114700:
	lwz      r0, 0x7e4(r6)
	cmpw     r8, r0
	ble      lbl_80114710
	li       r7, 1

lbl_80114710:
	clrlwi.  r0, r7, 0x18
	beq      lbl_80114728
	clrlwi.  r0, r4, 0x18
	beq      lbl_80114728
	lfs      f0, lbl_80517A80@sda21(r2)
	stfs     f0, 0x20c(r3)

lbl_80114728:
	mr       r3, r7
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80114734
 * Size:	00038C
 */
void EnemyFunc::isTherePikmin(Game::Creature*, float, Condition<Game::Piki>*)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	lwz      r0, pikiMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r6, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	li       r5, 0
	cmplwi   r4, 0
	fmuls    f26, f1, f1
	stw      r6, 0x50(r1)
	mr       r31, r3
	stw      r4, 0x5c(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x58(r1)
	bne      lbl_801147C8
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114A50

lbl_801147C8:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114838

lbl_801147E4:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114A50
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114838:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801147E4
	b        lbl_80114A50

lbl_80114858:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801148BC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801148BC
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801148BC
	li       r30, 1

lbl_801148BC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80114994
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f27, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f28, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x2c
	lwz      r12, 0(r29)
	lfs      f29, 0x20(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f30, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x44
	lwz      r12, 0(r29)
	lfs      f31, 0x3c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f28
	lfs      f2, 0x44(r1)
	fsubs    f1, f30, f27
	fsubs    f2, f2, f29
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_80114994
	li       r3, 1
	b        lbl_80114A74

lbl_80114994:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_801149C0
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114A50

lbl_801149C0:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114A34

lbl_801149E0:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114A50
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114A34:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801149E0

lbl_80114A50:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_80114858
	li       r3, 0

lbl_80114A74:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xd4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80114AC0
 * Size:	000330
 */
void EnemyFunc::isThereOlimar(Game::Creature*, float, Condition<Game::Navi>*)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	addi     r6, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	li       r5, 0
	cmplwi   r4, 0
	fmuls    f26, f1, f1
	stw      r6, 0x50(r1)
	mr       r30, r3
	stw      r4, 0x5c(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x58(r1)
	bne      lbl_80114B50
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114D84

lbl_80114B50:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114BC0

lbl_80114B6C:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114D84
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114BC0:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114B6C
	b        lbl_80114D84

lbl_80114BE0:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r30)
	mr       r31, r3
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lfs      f27, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f28, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f29, 0x20(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lfs      f30, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lfs      f31, 0x3c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f28
	lfs      f2, 0x44(r1)
	fsubs    f1, f30, f27
	fsubs    f2, f2, f29
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_80114CC8
	li       r3, 1
	b        lbl_80114DA8

lbl_80114CC8:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_80114CF4
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114D84

lbl_80114CF4:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114D68

lbl_80114D14:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80114D84
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114D68:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114D14

lbl_80114D84:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_80114BE0
	li       r3, 0

lbl_80114DA8:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80114DF0
 * Size:	0003C4
 */
void EnemyFunc::getSurroundPikminNum(Game::Creature*, float, Condition<Game::Piki>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stfd      f27, 0x80(r1)
	  psq_st    f27,0x88(r1),0,0
	  stfd      f26, 0x70(r1)
	  psq_st    f26,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  lwz       r6, -0x6514(r13)
	  lis       r5, 0x8048
	  fmr       f26, f1
	  mr        r30, r3
	  subi      r0, r5, 0x5178
	  lwz       r3, 0x28(r6)
	  mr        r28, r4
	  li        r5, 0x1
	  mr        r4, r0
	  bl        0x315C98
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x4364
	  li        r0, 0
	  cmplwi    r28, 0
	  fmuls     f26, f26, f26
	  stw       r4, 0x50(r1)
	  li        r31, 0
	  stw       r28, 0x5C(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x33C

	.loc_0xBC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x128

	.loc_0xD4:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x33C
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x128:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x33C

	.loc_0x148:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  li        r29, 0
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  mr        r3, r28
	  bl        0x8A5FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1AC
	  li        r29, 0x1

	.loc_0x1AC:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x280
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lfs       f27, 0x10(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lfs       f28, 0x18(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x20(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r28)
	  lfs       f31, 0x3C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f31, f28
	  lfs       f2, 0x44(r1)
	  fsubs     f1, f30, f27
	  fsubs     f2, f2, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f2, f2, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f26
	  bge-      .loc_0x280
	  addi      r31, r31, 0x1

	.loc_0x280:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2AC
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x33C

	.loc_0x2AC:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x320

	.loc_0x2CC:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x33C
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x320:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2CC

	.loc_0x33C:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5178
	  lwz       r3, 0x28(r5)
	  bl        0x3159A0
	  mr        r3, r31
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  psq_l     f27,0x88(r1),0,0
	  lfd       f27, 0x80(r1)
	  psq_l     f26,0x78(r1),0,0
	  lfd       f26, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801151B4
 * Size:	00024C
 */
void EnemyFunc::getStickPikminColorNum(Game::Creature*, int)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	li       r31, 0
	stw      r30, 0x38(r1)
	mr       r30, r4
	mr       r4, r3
	addi     r3, r1, 0x18
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x18
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8011521C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801153B8

lbl_8011521C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80115288

lbl_80115234:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801153B8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80115288:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115234
	b        lbl_801153B8

lbl_801152A8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801152FC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	cmpw     r30, r0
	bne      lbl_801152FC
	addi     r31, r31, 1

lbl_801152FC:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80115328
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801153B8

lbl_80115328:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8011539C

lbl_80115348:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801153B8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8011539C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115348

lbl_801153B8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801152A8
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0x44(r1)
	mr       r3, r31
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115400
 * Size:	0001DC
 */
void EnemyFunc::walkToTarget(Game::EnemyBase*, Game::Creature*, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  lwz       r12, 0x0(r4)
	  mr        r31, r3
	  fmr       f31, f1
	  addi      r3, r1, 0x20
	  lwz       r12, 0x8(r12)
	  fmr       f28, f2
	  fmr       f29, f3
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0xE03AC
	  bl        0x2FC718
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f30
	  bl        0x2FC720
	  fmuls     f30, f1, f28
	  lfs       f0, -0x68E4(r2)
	  lfs       f1, -0x68E8(r2)
	  fmuls     f0, f0, f29
	  fabs      f2, f30
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x11C
	  lfs       f0, -0x68E0(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x118
	  fmr       f30, f1
	  b         .loc_0x11C

	.loc_0x118:
	  fneg      f30, f1

	.loc_0x11C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f30, f1
	  bl        0x2FC69C
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x45D3C
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f29, f1
	  lfs       f30, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x38(r1)
	  stfs      f30, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x462D8
	  fmuls     f0, f31, f29
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f31, f1
	  stfs      f30, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801155DC
 * Size:	0001BC
 */
void EnemyFunc::walkToTarget(Game::EnemyBase*, Vector3f&, float, float, float)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r31, r4
	mr       r4, r30
	fmr      f31, f1
	lwz      r12, 0(r30)
	fmr      f28, f2
	fmr      f29, f3
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0(r31)
	lfs      f0, 8(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f30, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f30
	bl       angDist__Fff
	fmuls    f30, f1, f28
	lfs      f0, lbl_80517A7C@sda21(r2)
	lfs      f1, lbl_80517A78@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_801156D4
	lfs      f0, lbl_80517A80@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_801156D0
	fmr      f30, f1
	b        lbl_801156D4

lbl_801156D0:
	fneg     f30, f1

lbl_801156D4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	mr       r3, r30
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f29, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f31, f29
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f31, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115798
 * Size:	000080
 */
void EnemyFunc::EatPikminDefaultCondition::satisfy(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r12, 0(r29)
	lwz      r30, 4(r3)
	mr       r3, r29
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801157F8
	lwz      r0, 0xf4(r29)
	cmplw    r0, r30
	beq      lbl_801157F8
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801157F8
	li       r31, 1

lbl_801157F8:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115818
 * Size:	000168
 */
void EnemyFunc::ConditionPikminNearby::satisfy(Game::Creature*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0xf4(r4)
	lwz      r0, 4(r30)
	cmplw    r3, r0
	beq      lbl_8011593C
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f27, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f28, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0x2c
	lfs      f29, 0x20(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0x38
	lfs      f30, 0x34(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0x44
	lfs      f31, 0x3c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f31, f28
	lfs      f3, 0x44(r1)
	fsubs    f2, f30, f27
	lfs      f0, 8(r30)
	fsubs    f3, f3, f29
	fmuls    f1, f1, f1
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8011593C
	li       r3, 1
	b        lbl_80115940

lbl_8011593C:
	li       r3, 0

lbl_80115940:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80115980
 * Size:	000038
 */
void Iterator<Game::Creature>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801159B8
 * Size:	0000E4
 */
void Iterator<Game::Creature>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_801159F8
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115A88

lbl_801159F8:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115A6C

lbl_80115A18:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80115A88
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80115A6C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115A18

lbl_80115A88:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115A9C
 * Size:	0000DC
 */
void Iterator<Game::Creature>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80115AD8
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115B64

lbl_80115AD8:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115B48

lbl_80115AF4:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80115B64
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80115B48:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115AF4

lbl_80115B64:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115B78
 * Size:	000038
 */
void Iterator<Game::Piki>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115BB0
 * Size:	0000E4
 */
void Iterator<Game::Piki>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80115BF0
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115C80

lbl_80115BF0:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115C64

lbl_80115C10:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80115C80
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80115C64:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115C10

lbl_80115C80:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115C94
 * Size:	0000DC
 */
void Iterator<Game::Piki>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80115CD0
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115D5C

lbl_80115CD0:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115D40

lbl_80115CEC:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80115D5C
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80115D40:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115CEC

lbl_80115D5C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115D70
 * Size:	000038
 */
void Iterator<Game::Navi>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115DA8
 * Size:	0000E4
 */
void Iterator<Game::Navi>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80115DE8
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115E78

lbl_80115DE8:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115E5C

lbl_80115E08:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80115E78
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80115E5C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115E08

lbl_80115E78:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115E8C
 * Size:	0000DC
 */
void Iterator<Game::Navi>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_80115EC8
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115F54

lbl_80115EC8:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_80115F38

lbl_80115EE4:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80115F54
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_80115F38:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80115EE4

lbl_80115F54:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80115F68
 * Size:	000028
 */
void __sinit_enemyAction_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804ABC48@ha
	stw      r0, lbl_80515878@sda21(r13)
	stfsu    f0, lbl_804ABC48@l(r3)
	stfs     f0, lbl_8051587C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
