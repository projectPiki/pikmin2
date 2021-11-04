#include "types.h"

/*
 * --INFO--
 * Address:	80264720
 * Size:	0003D0
 */
void Game::Ujia::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xB
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x133ED4
	  li        r3, 0x10
	  bl        -0x24089C
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  subi      r5, r2, 0x3558
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x46C8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x133E80
	  li        r3, 0x10
	  bl        -0x2408EC
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3550
	  addi      r0, r3, 0x46A4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x133ED4
	  li        r3, 0x10
	  bl        -0x240940
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3548
	  addi      r0, r3, 0x4680
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x133F28
	  li        r3, 0x10
	  bl        -0x240994
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3540
	  addi      r0, r3, 0x465C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x133F7C
	  li        r3, 0x10
	  bl        -0x2409E8
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3538
	  addi      r0, r3, 0x4638
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x133FD0
	  li        r3, 0x10
	  bl        -0x240A3C
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3530
	  addi      r0, r3, 0x4614
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x134024
	  li        r3, 0x10
	  bl        -0x240A90
	  mr.       r4, r3
	  beq-      .loc_0x260
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x46EC
	  addi      r5, r5, 0x5AD8
	  addi      r0, r3, 0x45F0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x13407C
	  li        r3, 0x10
	  bl        -0x240AE8
	  mr.       r4, r3
	  beq-      .loc_0x2B8
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x46EC
	  addi      r5, r5, 0x5AE4
	  addi      r0, r3, 0x45CC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B8:
	  mr        r3, r31
	  bl        -0x1340D4
	  li        r3, 0x10
	  bl        -0x240B40
	  mr.       r4, r3
	  beq-      .loc_0x30C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3528
	  addi      r0, r3, 0x45A8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x30C:
	  mr        r3, r31
	  bl        -0x134128
	  li        r3, 0x10
	  bl        -0x240B94
	  mr.       r4, r3
	  beq-      .loc_0x360
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3520
	  addi      r0, r3, 0x4584
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x360:
	  mr        r3, r31
	  bl        -0x13417C
	  li        r3, 0x10
	  bl        -0x240BE8
	  mr.       r4, r3
	  beq-      .loc_0x3B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  addi      r6, r5, 0x46EC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3518
	  addi      r0, r3, 0x4560
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x1341D0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264AF0
 * Size:	00005C
 */
void Game::Ujia::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x15F3E8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3510(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x15FB30
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264B4C
 * Size:	000044
 */
void Game::Ujia::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x34
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x129A8C

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264B90
 * Size:	000004
 */
void Game::Ujia::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80264B94
 * Size:	000064
 */
void Game::Ujia::StatePress::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3510(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x200(r4)
	  bl        -0x15F494
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3510(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x15FBDC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264BF8
 * Size:	000044
 */
void Game::Ujia::StatePress::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x34
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x129B38

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264C3C
 * Size:	000004
 */
void Game::Ujia::StatePress::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80264C40
 * Size:	0000BC
 */
void Game::Ujia::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x188C
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  ori       r4, r4, 0x1
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x15D51C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3510(r2)
	  li        r4, 0x2
	  rlwinm    r0,r0,0,21,19
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,17,15
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x4000
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x15FCD8
	  mr        r3, r31
	  bl        -0x15DA04
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264CFC
 * Size:	0000D4
 */
void Game::Ujia::StateStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  bl        0x18E0
	  mr        r3, r30
	  bl        0x1D98
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB8

	.loc_0x5C:
	  lwz       r7, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r7)
	  li        r6, 0
	  lfs       f2, 0x3D4(r7)
	  bl        -0x151D24
	  mr.       r31, r3
	  beq-      .loc_0xB8
	  mr        r3, r30
	  bl        0x1814
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  stw       r31, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x3
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264DD0
 * Size:	000084
 */
void Game::Ujia::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  li        r4, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  mr        r3, r31
	  rlwinm    r4,r4,0,0,30
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  bl        -0x15D690
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264E54
 * Size:	000080
 */
void Game::Ujia::StateAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x1614
	  mr        r3, r31
	  bl        -0x15D6F8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3510(r2)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1634D8
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x15FEB0
	  mr        r3, r31
	  bl        0x24A8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264ED4
 * Size:	0000DC
 */
void Game::Ujia::StateAppear::exec(Game::EnemyBase*)
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
	  beq-      .loc_0xC4
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC4

	.loc_0x68:
	  mr        r3, r31
	  bl        0x1B80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  mr        r3, r31
	  bl        0x19BC
	  lwz       r12, 0x0(r30)
	  mr        r5, r3
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x1C(r12)
	  li        r6, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0xC4

	.loc_0xA4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
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
 * Address:	80264FB0
 * Size:	00003C
 */
void Game::Ujia::StateAppear::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x15D834
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264FEC
 * Size:	00006C
 */
void Game::Ujia::StateDive::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x15D888
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3510(r2)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1636AC
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x160034
	  mr        r3, r31
	  bl        0x23B0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265058
 * Size:	000050
 */
void Game::Ujia::StateDive::exec(Game::EnemyBase*)
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
	  li        r5, 0x2
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
 * Address:	802650A8
 * Size:	00003C
 */
void Game::Ujia::StateDive::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x15D92C
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802650E4
 * Size:	000034
 */
void Game::Ujia::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x160100
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265118
 * Size:	0004C8
 */
void Game::Ujia::StateMove::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stfd      f31, 0xF0(r1)
	  psq_st    f31,0xF8(r1),0,0
	  stfd      f30, 0xE0(r1)
	  psq_st    f30,0xE8(r1),0,0
	  stfd      f29, 0xD0(r1)
	  psq_st    f29,0xD8(r1),0,0
	  stfd      f28, 0xC0(r1)
	  psq_st    f28,0xC8(r1),0,0
	  stfd      f27, 0xB0(r1)
	  psq_st    f27,0xB8(r1),0,0
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stfd      f25, 0x90(r1)
	  psq_st    f25,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x194C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  mr        r3, r31
	  bl        0x1788
	  stw       r3, 0x2C4(r31)
	  mr        r3, r31
	  bl        -0x15FEF0
	  b         .loc_0x3F8

	.loc_0x80:
	  lwz       r29, 0x230(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x3E8
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3E8
	  mr        r4, r29
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x8
	  lfs       f30, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f25, 0x8(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f26, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f25, f1
	  fsubs     f2, f26, f0
	  bl        -0x230114
	  bl        0x1AC9B0
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x1AC9B8
	  fmr       f31, f1
	  lfs       f0, -0x3508(r2)
	  lfs       f1, -0x350C(r2)
	  fmuls     f0, f0, f30
	  fmuls     f25, f31, f29
	  fmuls     f1, f1, f0
	  fabs      f0, f25
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x170
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f25, f0
	  ble-      .loc_0x16C
	  fmr       f25, f1
	  b         .loc_0x170

	.loc_0x16C:
	  fneg      f25, f1

	.loc_0x170:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f25, f1
	  bl        0x1AC930
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x64(r12)
	  lfs       f30, 0x2E4(r4)
	  mtctr     r12
	  bctrl
	  bl        -0x195AB0
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f25, f1
	  lfs       f29, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x74(r1)
	  stfs      f29, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x19604C
	  fmuls     f0, f30, f25
	  mr        r4, r31
	  frsp      f1, f1
	  addi      r3, r1, 0x38
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f30, f1
	  stfs      f29, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x3D4(r5)
	  lfs       f25, 0x3FC(r5)
	  lfs       f26, 0x3AC(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x38(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x2C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x50
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x54(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x48(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x68
	  fsubs     f28, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x64(r1)
	  fmuls     f26, f26, f26
	  fmuls     f1, f30, f30
	  li        r3, 0x1
	  fsubs     f0, f0, f29
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f27, f27, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x314
	  fcmpo     cr0, f0, f1
	  mr        r0, r4
	  ble-      .loc_0x308
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f25
	  bge-      .loc_0x308
	  mr        r0, r3

	.loc_0x308:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x314
	  li        r4, 0x1

	.loc_0x314:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x34C
	  lfs       f0, -0x3508(r2)
	  fabs      f2, f31
	  lfs       f1, -0x350C(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x34C
	  li        r3, 0

	.loc_0x34C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x360
	  li        r0, 0
	  stw       r0, 0x230(r31)
	  b         .loc_0x3F8

	.loc_0x360:
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f25, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f26, 0x19C(r31)
	  lfs       f27, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x24(r1)
	  lfs       f2, 0x20(r1)
	  fsubs     f3, f0, f26
	  lfs       f1, 0x28(r1)
	  fsubs     f2, f2, f25
	  lfs       f0, -0x3510(r2)
	  fsubs     f1, f1, f27
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C8
	  ble-      .loc_0x3CC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x3CC

	.loc_0x3C8:
	  fmr       f1, f0

	.loc_0x3CC:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3F8
	  li        r0, 0
	  stw       r0, 0x230(r31)
	  b         .loc_0x3F8

	.loc_0x3E8:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x16026C

	.loc_0x3F8:
	  mr        r3, r31
	  bl        0xF9C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x438
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x474

	.loc_0x438:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x474
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x474
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x474:
	  psq_l     f31,0xF8(r1),0,0
	  lfd       f31, 0xF0(r1)
	  psq_l     f30,0xE8(r1),0,0
	  lfd       f30, 0xE0(r1)
	  psq_l     f29,0xD8(r1),0,0
	  lfd       f29, 0xD0(r1)
	  psq_l     f28,0xC8(r1),0,0
	  lfd       f28, 0xC0(r1)
	  psq_l     f27,0xB8(r1),0,0
	  lfd       f27, 0xB0(r1)
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  psq_l     f25,0x98(r1),0,0
	  lfd       f25, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r0, 0x104(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802655E0
 * Size:	000004
 */
void Game::Ujia::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802655E4
 * Size:	000034
 */
void Game::Ujia::StateMoveSide::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x160600
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265618
 * Size:	0000F4
 */
void Game::Ujia::StateMoveSide::exec(Game::EnemyBase*)
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
	  bl        0x1488
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        0x14A0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1603C0
	  b         .loc_0x60

	.loc_0x50:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1603D4

	.loc_0x60:
	  mr        r3, r31
	  bl        0xE34
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xDC

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
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
 * Address:	8026570C
 * Size:	000004
 */
void Game::Ujia::StateMoveSide::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80265710
 * Size:	000034
 */
void Game::Ujia::StateMoveCentre::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x16072C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265744
 * Size:	0000F4
 */
void Game::Ujia::StateMoveCentre::exec(Game::EnemyBase*)
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
	  bl        0x135C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        0x161C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1604EC
	  b         .loc_0x60

	.loc_0x50:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x160500

	.loc_0x60:
	  mr        r3, r31
	  bl        0xD08
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xDC

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
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
 * Address:	80265838
 * Size:	000004
 */
void Game::Ujia::StateMoveCentre::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026583C
 * Size:	000034
 */
void Game::Ujia::StateMoveTop::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x160858
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265870
 * Size:	0000F4
 */
void Game::Ujia::StateMoveTop::exec(Game::EnemyBase*)
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
	  bl        0x1230
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        0x1778
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x160618
	  b         .loc_0x60

	.loc_0x50:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x16062C

	.loc_0x60:
	  mr        r3, r31
	  bl        0xBDC
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xDC

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
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
 * Address:	80265964
 * Size:	000004
 */
void Game::Ujia::StateMoveTop::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80265968
 * Size:	000034
 */
void Game::Ujia::StateGoHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x160984
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026599C
 * Size:	000198
 */
void Game::Ujia::StateGoHome::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lfs       f1, 0x19C(r31)
	  addi      r4, r1, 0x14
	  lfs       f2, 0x1A0(r31)
	  mr        r3, r31
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x150424
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x19C(r31)
	  lfs       f29, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f0, f30
	  lfs       f1, 0x10(r1)
	  fsubs     f2, f2, f31
	  lfs       f0, -0x3510(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD0
	  ble-      .loc_0xD4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xD4

	.loc_0xD0:
	  fmr       f1, f0

	.loc_0xD4:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xEC
	  mr        r3, r31
	  bl        -0x1607E4

	.loc_0xEC:
	  mr        r3, r31
	  bl        0xA24
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x12C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x168

	.loc_0x12C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x168
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x168:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265B34
 * Size:	000004
 */
void Game::Ujia::StateGoHome::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80265B38
 * Size:	000058
 */
void Game::Ujia::StateAttack1::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3510(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x5
	  stfs      f0, 0x1D4(r31)
	  mr        r3, r31
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x160B64
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        0x1904
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80265B90
 * Size:	00010C
 */
void Game::Ujia::StateAttack1::exec(Game::EnemyBase*)
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
	  bl        0xF10
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  mr        r3, r31
	  bl        0x1458
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  li        r0, 0xA
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x5C

	.loc_0x48:
	  li        r0, 0x8
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x5C

	.loc_0x54:
	  li        r0, 0x9
	  stw       r0, 0x2C4(r31)

	.loc_0x5C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3510(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x94
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF4

	.loc_0x94:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xCC
	  mr        r3, r31
	  bl        0xE7C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  mr        r3, r31
	  bl        0x16B4
	  b         .loc_0xF4

	.loc_0xCC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
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
 * Address:	80265C9C
 * Size:	000004
 */
void Game::Ujia::StateAttack1::cleanup(Game::EnemyBase*) { }
