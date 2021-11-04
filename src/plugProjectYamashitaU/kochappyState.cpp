#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8010F874
 * Size:	000198
 */
void KochappyBase::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xA
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x20FD8
	  li        r3, 0x10
	  bl        -0xEB9F0
	  mr.       r4, r3
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        0x248
	  mr        r4, r3

	.loc_0x38:
	  mr        r3, r31
	  bl        0x21058
	  li        r3, 0x10
	  bl        -0xEBA14
	  mr.       r4, r3
	  beq-      .loc_0x5C
	  li        r4, 0x1
	  bl        0x654
	  mr        r4, r3

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x21034
	  li        r3, 0x14
	  bl        -0xEBA38
	  mr.       r4, r3
	  beq-      .loc_0x80
	  li        r4, 0x2
	  bl        0x700
	  mr        r4, r3

	.loc_0x80:
	  mr        r3, r31
	  bl        0x21010
	  li        r3, 0x14
	  bl        -0xEBA5C
	  mr.       r4, r3
	  beq-      .loc_0xA4
	  li        r4, 0x3
	  bl        0xEA0
	  mr        r4, r3

	.loc_0xA4:
	  mr        r3, r31
	  bl        0x20FEC
	  li        r3, 0x10
	  bl        -0xEBA80
	  mr.       r4, r3
	  beq-      .loc_0xC8
	  li        r4, 0x4
	  bl        0x166C
	  mr        r4, r3

	.loc_0xC8:
	  mr        r3, r31
	  bl        0x20FC8
	  li        r3, 0x14
	  bl        -0xEBAA4
	  mr.       r4, r3
	  beq-      .loc_0xEC
	  li        r4, 0x5
	  bl        0x1AE0
	  mr        r4, r3

	.loc_0xEC:
	  mr        r3, r31
	  bl        0x20FA4
	  li        r3, 0x10
	  bl        -0xEBAC8
	  mr.       r4, r3
	  beq-      .loc_0x110
	  li        r4, 0x6
	  bl        0x1D5C
	  mr        r4, r3

	.loc_0x110:
	  mr        r3, r31
	  bl        0x20F80
	  li        r3, 0x14
	  bl        -0xEBAEC
	  mr.       r4, r3
	  beq-      .loc_0x134
	  li        r4, 0x7
	  bl        0x2308
	  mr        r4, r3

	.loc_0x134:
	  mr        r3, r31
	  bl        0x20F5C
	  li        r3, 0x10
	  bl        -0xEBB10
	  mr.       r4, r3
	  beq-      .loc_0x158
	  li        r4, 0x8
	  bl        .loc_0x198
	  mr        r4, r3

	.loc_0x158:
	  mr        r3, r31
	  bl        0x20F38
	  li        r3, 0x10
	  bl        -0xEBB34
	  mr.       r4, r3
	  beq-      .loc_0x17C
	  li        r4, 0x9
	  bl        0x27E0
	  mr        r4, r3

	.loc_0x17C:
	  mr        r3, r31
	  bl        0x20F14
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x198:
	*/
}

/*
 * --INFO--
 * Address:	8010FA0C
 * Size:	00003C
 */
KochappyBase::StatePress::StatePress(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x4518
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x6988
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FA48
 * Size:	000054
 */
void KochappyBase::StatePress::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x6980(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  li        r4, 0x4
	  stfs      f0, 0x200(r31)
	  bl        -0xAA6C
	  mr        r3, r31
	  bl        -0xA358
	  lwz       r3, 0x188(r31)
	  li        r0, 0
	  stb       r0, 0x24(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FA9C
 * Size:	000050
 */
void KochappyBase::StatePress::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
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
 * Address:	8010FAEC
 * Size:	00003C
 */
KochappyBase::StateWait::StateWait(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x453C
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x697C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FB28
 * Size:	0000C8
 */
void KochappyBase::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r31, r5
	  mr        r3, r30
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0xAB54
	  subis     r0, r31, 0x7261
	  li        r3, 0
	  cmplwi    r0, 0x6E64
	  stw       r3, 0x230(r30)
	  bne-      .loc_0x84
	  bl        -0x465D0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r30
	  lfd       f2, -0x6968(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x6974(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f31, f1, f0
	  bl        -0x8924
	  fmuls     f1, f31, f1
	  mr        r3, r30
	  bl        -0xA980

	.loc_0x84:
	  mr        r3, r30
	  lfs       f1, -0x6970(r2)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r30)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r30)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FBF0
 * Size:	000308
 */
void KochappyBase::StateWait::exec(Game::EnemyBase*)
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
	  stw       r30, 0x48(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x4A24
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0x2
	  mr        r3, r30
	  stw       r0, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x5
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x29C

	.loc_0x7C:
	  lwz       r0, 0x230(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f1, -0x6960(r2)
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        0x33BC
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  stw       r3, 0x230(r31)
	  mr        r3, r31
	  bl        -0xAA08

	.loc_0xBC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x29C
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x118
	  bge-      .loc_0x29C
	  cmpwi     r0, 0x2
	  beq-      .loc_0xE8
	  b         .loc_0x29C

	.loc_0xE8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x596A
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x29C

	.loc_0x118:
	  lwz       r4, 0x230(r31)
	  addi      r3, r1, 0x24
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r4)
	  lfs       f31, 0x86C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x334(r5)
	  lfs       f29, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x30
	  lfs       f1, 0x28(r1)
	  lfs       f0, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x30(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x38(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x14(r1)
	  lfs       f4, 0x34(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x18(r1)
	  stfs      f4, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  bl        -0xDAC88
	  bl        0x301E3C
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f30
	  bl        0x301E44
	  fmr       f30, f1
	  lfs       f0, -0x6958(r2)
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f28
	  fmuls     f28, f30, f29
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x20C
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x208
	  fmr       f28, f1
	  b         .loc_0x20C

	.loc_0x208:
	  fneg      f28, f1

	.loc_0x20C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x301DBC
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f30
	  stfs      f1, 0x1FC(r31)
	  fmuls     f0, f0, f31
	  lfs       f1, -0x695C(r2)
	  lfs       f3, 0x1FC(r31)
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  stfs      f3, 0x1A8(r31)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x27C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x29C

	.loc_0x27C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x29C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2D0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2D0:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FEF8
 * Size:	000024
 */
void KochappyBase::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x879C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FF1C
 * Size:	00003C
 */
KochappyBase::StateDead::StateDead(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x4560
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x6954
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FF58
 * Size:	000040
 */
void KochappyBase::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  mr        r3, r31
	  bl        -0xAF74
	  mr        r3, r31
	  bl        -0xA860
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010FF98
 * Size:	000050
 */
void KochappyBase::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
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
 * Address:	8010FFE8
 * Size:	000004
 */
void KochappyBase::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8010FFEC
 * Size:	00003C
 */
KochappyBase::StateTurn::StateTurn(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x4584
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x694C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80110028
 * Size:	000054
 */
void KochappyBase::StateTurn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0xE67C
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0xB054
	  li        r0, -0x1
	  stw       r0, 0x10(r30)
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
 * Address:	8011007C
 * Size:	000710
 */
void KochappyBase::StateTurn::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x190(r1)
	  mflr      r0
	  stw       r0, 0x194(r1)
	  stfd      f31, 0x180(r1)
	  psq_st    f31,0x188(r1),0,0
	  stfd      f30, 0x170(r1)
	  psq_st    f30,0x178(r1),0,0
	  stfd      f29, 0x160(r1)
	  psq_st    f29,0x168(r1),0,0
	  stfd      f28, 0x150(r1)
	  psq_st    f28,0x158(r1),0,0
	  stfd      f27, 0x140(r1)
	  psq_st    f27,0x148(r1),0,0
	  stfd      f26, 0x130(r1)
	  psq_st    f26,0x138(r1),0,0
	  stfd      f25, 0x120(r1)
	  psq_st    f25,0x128(r1),0,0
	  stfd      f24, 0x110(r1)
	  psq_st    f24,0x118(r1),0,0
	  stw       r31, 0x10C(r1)
	  stw       r30, 0x108(r1)
	  stw       r29, 0x104(r1)
	  stw       r28, 0x100(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x4570
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x67C

	.loc_0x9C:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f24, 0x3AC(r5)
	  fmr       f1, f24
	  bl        0x4994
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  li        r3, 0x1
	  b         .loc_0xE8

	.loc_0xC4:
	  fmr       f1, f24
	  mr        r3, r31
	  li        r4, 0
	  bl        0x45E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  li        r3, 0x1
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r3, 0

	.loc_0xE8:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x108
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x200(r31)
	  lfs       f0, 0x17C(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x108:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x118
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x2CC(r31)

	.loc_0x118:
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x2CC(r31)
	  lfs       f0, 0x62C(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x148
	  lwz       r3, -0x6514(r13)
	  lfs       f30, -0x6960(r2)
	  lfs       f0, 0x54(r3)
	  fmr       f1, f30
	  fadds     f0, f2, f0
	  stfs      f0, 0x2CC(r31)
	  b         .loc_0x150

	.loc_0x148:
	  lfs       f30, 0x424(r3)
	  lfs       f1, 0x49C(r3)

	.loc_0x150:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r6, 0
	  lfs       f2, 0x44C(r5)
	  li        r5, 0
	  bl        0x2E6C
	  cmplwi    r3, 0
	  beq-      .loc_0x630
	  stw       r3, 0x230(r31)
	  addi      r3, r1, 0xE0
	  lwz       r4, 0x230(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0xE0(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xEC
	  lfs       f1, 0xE4(r1)
	  lfs       f0, 0xE8(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0xC8(r1)
	  stfs      f1, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0xEC(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0xF4(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0xC8(r1)
	  lfs       f0, 0xD0(r1)
	  lfs       f4, 0xF0(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0xD4(r1)
	  stfs      f4, 0xD8(r1)
	  stfs      f3, 0xDC(r1)
	  bl        -0xDB164
	  bl        0x301960
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x301968
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  addi      r3, r1, 0x44
	  lfs       f27, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r28, 0
	  lfs       f28, 0x564(r5)
	  lwz       r29, 0x230(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x38(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  fsubs     f25, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x60(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x54(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  fsubs     f24, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x7C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f24, f24
	  lfs       f2, 0x70(r1)
	  fmuls     f0, f28, f28
	  fsubs     f2, f2, f29
	  fmadds    f1, f25, f25, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x328
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f31
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f27
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x328
	  li        r28, 0x1

	.loc_0x328:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x35C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xB118
	  mr        r3, r31
	  lfs       f1, -0x6944(r2)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x640

	.loc_0x35C:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8C
	  lfs       f24, 0x3FC(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x3D4(r5)
	  lfs       f26, 0x3AC(r5)
	  lwz       r28, 0x230(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x8C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x80(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xA4
	  fsubs     f28, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x98
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0xA8(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x9C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xBC
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0xC4(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xB8(r1)
	  fmuls     f26, f26, f26
	  fmuls     f25, f25, f25
	  li        r3, 0x1
	  fsubs     f0, f0, f29
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f28, f28, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x470
	  fcmpo     cr0, f0, f25
	  mr        r0, r4
	  ble-      .loc_0x464
	  fabs      f0, f27
	  frsp      f0, f0
	  fcmpo     cr0, f0, f24
	  bge-      .loc_0x464
	  mr        r0, r3

	.loc_0x464:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x470
	  li        r4, 0x1

	.loc_0x470:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x4A8
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f31
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x4A8
	  li        r3, 0

	.loc_0x4A8:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C4
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xB298
	  b         .loc_0x640

	.loc_0x4C4:
	  lwz       r4, 0x230(r31)
	  addi      r3, r1, 0x20
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r4)
	  lfs       f31, 0x86C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x334(r5)
	  lfs       f24, 0x30C(r5)
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
	  bl        -0xDB4C0
	  bl        0x301604
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x30160C
	  fmr       f30, f1
	  lfs       f0, -0x6958(r2)
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f25
	  fmuls     f24, f30, f24
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x5B8
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x5B4
	  fmr       f24, f1
	  b         .loc_0x5B8

	.loc_0x5B4:
	  fneg      f24, f1

	.loc_0x5B8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x301584
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f30
	  stfs      f1, 0x1FC(r31)
	  fmuls     f0, f0, f31
	  lfs       f1, -0x695C(r2)
	  lfs       f3, 0x1FC(r31)
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  stfs      f3, 0x1A8(r31)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x640
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xB3EC
	  mr        r3, r31
	  lfs       f1, -0x6944(r2)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x640

	.loc_0x630:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xB418

	.loc_0x640:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x67C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x67C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x10(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x67C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x6B0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6B0:
	  psq_l     f31,0x188(r1),0,0
	  lfd       f31, 0x180(r1)
	  psq_l     f30,0x178(r1),0,0
	  lfd       f30, 0x170(r1)
	  psq_l     f29,0x168(r1),0,0
	  lfd       f29, 0x160(r1)
	  psq_l     f28,0x158(r1),0,0
	  lfd       f28, 0x150(r1)
	  psq_l     f27,0x148(r1),0,0
	  lfd       f27, 0x140(r1)
	  psq_l     f26,0x138(r1),0,0
	  lfd       f26, 0x130(r1)
	  psq_l     f25,0x128(r1),0,0
	  lfd       f25, 0x120(r1)
	  psq_l     f24,0x118(r1),0,0
	  lfd       f24, 0x110(r1)
	  lwz       r31, 0x10C(r1)
	  lwz       r30, 0x108(r1)
	  lwz       r29, 0x104(r1)
	  lwz       r0, 0x194(r1)
	  lwz       r28, 0x100(r1)
	  mtlr      r0
	  addi      r1, r1, 0x190
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011078C
 * Size:	000024
 */
void KochappyBase::StateTurn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0xEE20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801107B0
 * Size:	000044
 */
KochappyBase::StateWalk::StateWalk(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x45A8
	  stw       r4, 0x4(r3)
	  li        r4, -0x1
	  subi      r0, r2, 0x6940
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r4, 0x10(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801107F4
 * Size:	000080
 */
void KochappyBase::StateWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0xEE48
	  lwz       r4, 0xC0(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lfs       f1, 0x2E4(r4)
	  lfs       f0, -0x6934(r2)
	  lfs       f2, -0x6938(r2)
	  fdivs     f0, f1, f0
	  lwz       r12, 0x2FC(r12)
	  fmuls     f1, f2, f0
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0xB84C
	  li        r0, -0x1
	  stw       r0, 0x10(r30)
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
 * Address:	80110874
 * Size:	0006E4
 */
void KochappyBase::StateWalk::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x170(r1)
	  mflr      r0
	  stw       r0, 0x174(r1)
	  stfd      f31, 0x160(r1)
	  psq_st    f31,0x168(r1),0,0
	  stfd      f30, 0x150(r1)
	  psq_st    f30,0x158(r1),0,0
	  stfd      f29, 0x140(r1)
	  psq_st    f29,0x148(r1),0,0
	  stfd      f28, 0x130(r1)
	  psq_st    f28,0x138(r1),0,0
	  stfd      f27, 0x120(r1)
	  psq_st    f27,0x128(r1),0,0
	  stfd      f26, 0x110(r1)
	  psq_st    f26,0x118(r1),0,0
	  stfd      f25, 0x100(r1)
	  psq_st    f25,0x108(r1),0,0
	  stfd      f24, 0xF0(r1)
	  psq_st    f24,0xF8(r1),0,0
	  stw       r31, 0xEC(r1)
	  stw       r30, 0xE8(r1)
	  stw       r29, 0xE4(r1)
	  stw       r28, 0xE0(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x3D78
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x650

	.loc_0x9C:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f24, 0x3AC(r5)
	  fmr       f1, f24
	  bl        0x419C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  li        r3, 0x1
	  b         .loc_0xE8

	.loc_0xC4:
	  fmr       f1, f24
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3DF0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  li        r3, 0x1
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r3, 0

	.loc_0xE8:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x108
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x200(r31)
	  lfs       f0, 0x17C(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x108:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x118
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x2CC(r31)

	.loc_0x118:
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x2CC(r31)
	  lfs       f0, 0x62C(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x144
	  lwz       r3, -0x6514(r13)
	  lfs       f1, -0x6960(r2)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f2, f0
	  stfs      f0, 0x2CC(r31)
	  b         .loc_0x148

	.loc_0x144:
	  lfs       f1, 0x49C(r3)

	.loc_0x148:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r6, 0
	  lfs       f2, 0x44C(r5)
	  li        r5, 0
	  bl        0x267C
	  cmplwi    r3, 0
	  beq-      .loc_0x54C
	  stw       r3, 0x230(r31)
	  addi      r3, r1, 0xBC
	  lwz       r4, 0x230(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0xBC(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xC8
	  lfs       f1, 0xC0(r1)
	  lfs       f0, 0xC4(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0xA4(r1)
	  stfs      f1, 0xA8(r1)
	  stfs      f0, 0xAC(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0xC8(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0xD0(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0xA4(r1)
	  lfs       f0, 0xAC(r1)
	  lfs       f4, 0xCC(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0xB0(r1)
	  stfs      f4, 0xB4(r1)
	  stfs      f3, 0xB8(r1)
	  bl        -0xDB954
	  bl        0x301170
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x301178
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  addi      r3, r1, 0x14
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r28, 0
	  lfs       f30, 0x564(r5)
	  lwz       r29, 0x230(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f25, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f24, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f24, f24
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f29
	  fmadds    f1, f25, f25, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x320
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f31
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x320
	  li        r28, 0x1

	.loc_0x320:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x364
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xB908
	  lfs       f0, -0x6980(r2)
	  mr        r3, r31
	  lfs       f1, -0x6944(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x578

	.loc_0x364:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x424(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f24, 0x3FC(r5)
	  lfs       f25, 0x3D4(r5)
	  lfs       f26, 0x3AC(r5)
	  lwz       r28, 0x230(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x68(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x5C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x80
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x84(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x78(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x98
	  fsubs     f28, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0xA0(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x94(r1)
	  fmuls     f26, f26, f26
	  fmuls     f25, f25, f25
	  li        r3, 0x1
	  fsubs     f0, f0, f29
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f27, f27, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x47C
	  fcmpo     cr0, f0, f25
	  mr        r0, r4
	  ble-      .loc_0x470
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f24
	  bge-      .loc_0x470
	  mr        r0, r3

	.loc_0x470:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x47C
	  li        r4, 0x1

	.loc_0x47C:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x4B4
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f31
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x4B4
	  li        r3, 0

	.loc_0x4B4:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4E0
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xBA9C
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x578

	.loc_0x4E0:
	  lwz       r5, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x6958(r2)
	  lfs       f3, 0x424(r5)
	  lfs       f1, -0x695C(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x528
	  lwz       r4, 0x230(r31)
	  mr        r3, r31
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        0x466C
	  b         .loc_0x578

	.loc_0x528:
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xBB08
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x578

	.loc_0x54C:
	  lfs       f1, 0x20C(r31)
	  lfs       f0, -0x6980(r2)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x568
	  li        r0, 0x5
	  stw       r0, 0x10(r30)
	  b         .loc_0x570

	.loc_0x568:
	  li        r0, 0x6
	  stw       r0, 0x10(r30)

	.loc_0x570:
	  mr        r3, r31
	  bl        -0xBB48

	.loc_0x578:
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r31)
	  lfs       f24, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x19C(r31)
	  lfs       f26, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x54(r1)
	  lfs       f2, 0x50(r1)
	  fsubs     f3, f0, f25
	  lfs       f1, 0x58(r1)
	  fsubs     f2, f2, f24
	  lfs       f0, -0x6980(r2)
	  fsubs     f1, f1, f26
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5E0
	  ble-      .loc_0x5E4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x5E4

	.loc_0x5E0:
	  fmr       f1, f0

	.loc_0x5E4:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x614
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x10(r30)
	  bl        -0xBBD4
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x614:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x650
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x650
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x10(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x650:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x684
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x684:
	  psq_l     f31,0x168(r1),0,0
	  lfd       f31, 0x160(r1)
	  psq_l     f30,0x158(r1),0,0
	  lfd       f30, 0x150(r1)
	  psq_l     f29,0x148(r1),0,0
	  lfd       f29, 0x140(r1)
	  psq_l     f28,0x138(r1),0,0
	  lfd       f28, 0x130(r1)
	  psq_l     f27,0x128(r1),0,0
	  lfd       f27, 0x120(r1)
	  psq_l     f26,0x118(r1),0,0
	  lfd       f26, 0x110(r1)
	  psq_l     f25,0x108(r1),0,0
	  lfd       f25, 0x100(r1)
	  psq_l     f24,0xF8(r1),0,0
	  lfd       f24, 0xF0(r1)
	  lwz       r31, 0xEC(r1)
	  lwz       r30, 0xE8(r1)
	  lwz       r29, 0xE4(r1)
	  lwz       r0, 0x174(r1)
	  lwz       r28, 0xE0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x170
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80110F58
 * Size:	000048
 */
void KochappyBase::StateWalk::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0xF5F4
	  mr        r3, r31
	  bl        -0x9BDC
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80110FA0
 * Size:	00003C
 */
KochappyBase::StateAttack::StateAttack(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x45CC
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x6930
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80110FDC
 * Size:	000048
 */
void KochappyBase::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0xF628
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0xC000
	  mr        r3, r31
	  bl        -0x9C70
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111024
 * Size:	0003F0
 */
void KochappyBase::StateAttack::exec(Game::EnemyBase*)
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
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r29, r4
	  mr        r28, r3
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x36C
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x108
	  bge-      .loc_0x80
	  cmpwi     r0, 0x2
	  bge-      .loc_0x8C
	  b         .loc_0x36C

	.loc_0x80:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x120
	  b         .loc_0x36C

	.loc_0x8C:
	  lwz       r6, 0xC0(r29)
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x5B4(r6)
	  lfs       f2, 0x5DC(r6)
	  lfs       f3, 0x604(r6)
	  bl        0x3194
	  mr        r3, r29
	  li        r4, 0
	  bl        0x2A5C
	  cmpwi     r3, 0
	  bne-      .loc_0xD0
	  mr        r3, r29
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0xC0EC

	.loc_0xD0:
	  mr        r3, r29
	  lwz       r30, 0xC0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r30)
	  lfs       f2, 0x4C4(r30)
	  mr        r3, r29
	  lfs       f3, 0x4EC(r30)
	  li        r4, 0
	  bl        0x1FF8
	  b         .loc_0x36C

	.loc_0x108:
	  lwz       r5, 0xC0(r29)
	  mr        r3, r29
	  li        r4, 0
	  lfs       f1, 0x844(r5)
	  bl        0x2D48
	  b         .loc_0x36C

	.loc_0x120:
	  lwz       r7, 0xC0(r29)
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x49C(r7)
	  li        r6, 0
	  lfs       f2, 0x44C(r7)
	  bl        0x1EF0
	  cmplwi    r3, 0
	  beq-      .loc_0x34C
	  stw       r3, 0x230(r29)
	  addi      r3, r1, 0x68
	  lwz       r4, 0x230(r29)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0xDC0E0
	  bl        0x3009E4
	  lwz       r12, 0x0(r29)
	  fmr       f26, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x3009EC
	  mr        r4, r29
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r29)
	  fmr       f30, f1
	  addi      r3, r1, 0x14
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r30, 0
	  lfs       f29, 0x564(r5)
	  lwz       r31, 0x230(r29)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f31
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2FC
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f30
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2FC
	  li        r30, 0x1

	.loc_0x2FC:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x328
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x36C

	.loc_0x328:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x36C

	.loc_0x34C:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x36C:
	  lfs       f1, 0x200(r29)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3A0
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3A0:
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
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111414
 * Size:	000024
 */
void KochappyBase::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0xFAA8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111438
 * Size:	000044
 */
KochappyBase::StateFlick::StateFlick(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x45F0
	  stw       r4, 0x4(r3)
	  subi      r4, r2, 0x6928
	  li        r0, -0x1
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r4, 0xC(r3)
	  stw       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011147C
 * Size:	000094
 */
void KochappyBase::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0xED8
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x140190
	  bl        0x12AA48
	  lwz       r5, 0x2F4(r31)
	  subi      r4, r2, 0xEC8
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r31)
	  bl        0x140178
	  bl        0x12AA30
	  lwz       r5, 0x2F8(r31)
	  addi      r4, r31, 0x18C
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x2FC(r31)
	  bl        0xB14C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  subi      r4, r2, 0xEC0
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x140134
	  bl        0x12A9EC
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	*/
}

/*
 * --INFO--
 * Address:	80111510
 * Size:	000178
 */
void KochappyBase::StateFlick::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x12C
	  lwz       r0, 0x1C(r5)
	  cmpwi     r0, 0x3
	  beq-      .loc_0xD4
	  bge-      .loc_0x48
	  cmpwi     r0, 0x2
	  bge-      .loc_0x54
	  b         .loc_0x12C

	.loc_0x48:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0xEC
	  b         .loc_0x12C

	.loc_0x54:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x6920(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        0x1B9C
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x6920(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        0x1F34
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x6920(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        0x21D0
	  lfs       f0, -0x6980(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0xD4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0xEC:
	  lwz       r5, 0x10(r30)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x110
	  lwz       r12, 0x0(r3)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x110:
	  lwz       r12, 0x0(r3)
	  li        r6, 0
	  lwz       r5, 0x8(r30)
	  lwz       r12, 0x1C(r12)
	  lwz       r5, 0x18(r5)
	  mtctr     r12
	  bctrl

	.loc_0x12C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
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
 * Address:	80111688
 * Size:	000050
 */
void KochappyBase::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0xFD24
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801116D8
 * Size:	000040
 */
KochappyBase::StateTurnToHome::StateTurnToHome(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r7, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r6, 0x804B
	  stw       r0, 0x0(r3)
	  lis       r5, 0x8048
	  li        r8, 0
	  subi      r7, r7, 0x44F4
	  stw       r4, 0x4(r3)
	  subi      r4, r6, 0x4614
	  subi      r0, r5, 0x54D8
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111718
 * Size:	000120
 */
void KochappyBase::StateTurnToHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lfs       f0, -0x6980(r2)
	  mr        r31, r4
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r12, 0x0(r4)
	  lfs       f31, 0x198(r4)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x19C(r4)
	  lfs       f29, 0x1A0(r4)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f0, f30
	  lfs       f1, 0x10(r1)
	  fsubs     f2, f2, f31
	  lfs       f0, -0x6980(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA8
	  ble-      .loc_0xAC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xAC

	.loc_0xA8:
	  fmr       f1, f0

	.loc_0xAC:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xE0:
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0xC800

	.loc_0xF0:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111838
 * Size:	00046C
 */
void KochappyBase::StateTurnToHome::exec(Game::EnemyBase*)
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
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  mr        r29, r4
	  mr        r28, r3
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x2DC4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x41C

	.loc_0x8C:
	  mr        r4, r29
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x8C
	  lfs       f26, 0x198(r29)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x1A0(r29)
	  lfs       f31, 0x58C(r5)
	  lfs       f30, 0x334(r5)
	  lfs       f29, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x94(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x90(r1)
	  fsubs     f1, f26, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x80(r1)
	  stfs      f3, 0x84(r1)
	  stfs      f0, 0x88(r1)
	  bl        -0xDC814
	  bl        0x3002B0
	  lwz       r12, 0x0(r29)
	  fmr       f26, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x3002B8
	  fmr       f28, f1
	  lfs       f0, -0x6958(r2)
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f30
	  fmuls     f29, f28, f29
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x150
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x14C
	  fmr       f29, f1
	  b         .loc_0x150

	.loc_0x14C:
	  fneg      f29, f1

	.loc_0x150:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0x300230
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f28
	  stfs      f1, 0x1FC(r29)
	  fmuls     f0, f0, f31
	  lfs       f1, -0x695C(r2)
	  lfs       f3, 0x1FC(r29)
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  stfs      f3, 0x1A8(r29)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1A4
	  mr        r3, r29
	  bl        -0xC738

	.loc_0x1A4:
	  lwz       r3, 0x188(r29)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x1C4
	  b         .loc_0x1E4

	.loc_0x1C4:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E4:
	  lwz       r7, 0xC0(r29)
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x49C(r7)
	  li        r6, 0
	  lfs       f2, 0x44C(r7)
	  bl        0x1618
	  cmplwi    r3, 0
	  beq-      .loc_0x3E8
	  stw       r3, 0x230(r29)
	  addi      r3, r1, 0x68
	  lwz       r31, 0x230(r29)
	  lwz       r5, 0xC0(r29)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0xDC9C8
	  bl        0x3000FC
	  lwz       r12, 0x0(r29)
	  fmr       f26, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x300104
	  mr        r4, r29
	  fmr       f28, f1
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x14
	  li        r30, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3C0
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f28
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3C0
	  li        r30, 0x1

	.loc_0x3C0:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x3E8
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3E8:
	  lfs       f1, 0x200(r29)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x41C
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x41C:
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
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111CA4
 * Size:	000004
 */
void KochappyBase::StateTurnToHome::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80111CA8
 * Size:	00003C
 */
KochappyBase::StateGoHome::StateGoHome(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x4638
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x691C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80111CE4
 * Size:	000064
 */
void KochappyBase::StateGoHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x6938(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0xCD20
	  li        r0, -0x1
	  stw       r0, 0x10(r30)
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
 * Address:	80111D48
 * Size:	000440
 */
void KochappyBase::StateGoHome::exec(Game::EnemyBase*)
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
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x28B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3BC

	.loc_0x8C:
	  lfs       f1, 0x19C(r31)
	  mr        r3, r31
	  lfs       f2, 0x1A0(r31)
	  addi      r4, r1, 0x8C
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x8C(r1)
	  stfs      f1, 0x90(r1)
	  stfs      f2, 0x94(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        0x37D8
	  mr        r4, r31
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x19C(r31)
	  lfs       f28, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x84(r1)
	  lfs       f2, 0x80(r1)
	  fsubs     f3, f0, f27
	  lfs       f1, 0x88(r1)
	  fsubs     f2, f2, f26
	  lfs       f0, -0x6980(r2)
	  fsubs     f1, f1, f28
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x128
	  ble-      .loc_0x12C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x12C

	.loc_0x128:
	  fmr       f1, f0

	.loc_0x12C:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x15C
	  mr        r3, r31
	  bl        -0xCBE8
	  lfs       f0, -0x6980(r2)
	  li        r0, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x10(r30)

	.loc_0x15C:
	  lwz       r7, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x49C(r7)
	  li        r6, 0
	  lfs       f2, 0x44C(r7)
	  bl        0x1190
	  cmplwi    r3, 0
	  beq-      .loc_0x37C
	  stw       r3, 0x230(r31)
	  addi      r3, r1, 0x68
	  lwz       r29, 0x230(r31)
	  lwz       r5, 0xC0(r31)
	  mr        r4, r29
	  lwz       r12, 0x0(r29)
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0xDCE50
	  bl        0x2FFC74
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x2FFC7C
	  mr        r4, r31
	  fmr       f28, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  li        r28, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x338
	  lfs       f0, -0x6958(r2)
	  fabs      f2, f28
	  lfs       f1, -0x695C(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x338
	  li        r28, 0x1

	.loc_0x338:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x36C
	  mr        r3, r31
	  bl        -0xCDEC
	  mr        r3, r31
	  lfs       f1, -0x6944(r2)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x4
	  stw       r0, 0x10(r30)
	  b         .loc_0x37C

	.loc_0x36C:
	  mr        r3, r31
	  bl        -0xCE18
	  li        r0, 0x3
	  stw       r0, 0x10(r30)

	.loc_0x37C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x39C
	  b         .loc_0x3BC

	.loc_0x39C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x10(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3BC:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6980(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3F0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3F0:
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
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80112188
 * Size:	000040
 */
void KochappyBase::StateGoHome::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0xAE04
	  lfs       f0, -0x6980(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801121C8
 * Size:	00003C
 */
KochappyBase::StateDemo::StateDemo(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x44F4
	  subi      r5, r5, 0x465C
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x6914
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80112204
 * Size:	00007C
 */
void KochappyBase::StateDemo::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        0x28ED8
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x3
	  beq-      .loc_0x6C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x25
	  bl        0xD519C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x3
	  lfs       f1, -0x690C(r2)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80112280
 * Size:	000004
 */
void BaseGameSection::enableTimer(float, unsigned long) { }

/*
 * --INFO--
 * Address:	80112284
 * Size:	000008
 */
u32 BaseGameSection::getTimerType() { return 0x0; }

} // namespace Game

/*
 * --INFO--
 * Address:	8011228C
 * Size:	000028
 */
void __sinit_kochappyState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6E10(r13)
	  stfsu     f0, -0x4668(r3)
	  stfs      f0, -0x6E0C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
