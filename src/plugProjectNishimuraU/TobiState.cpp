#include "types.h"

/*
 * --INFO--
 * Address:	8026759C
 * Size:	0004CC
 */
void Game::Tobi::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xE
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x136D50
	  li        r3, 0x10
	  bl        -0x243718
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  subi      r5, r2, 0x3488
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x4D54
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x136CFC
	  li        r3, 0x10
	  bl        -0x243768
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3480
	  addi      r0, r3, 0x4D30
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x136D50
	  li        r3, 0x10
	  bl        -0x2437BC
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3478
	  addi      r0, r3, 0x4D0C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x136DA4
	  li        r3, 0x10
	  bl        -0x243810
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3470
	  addi      r0, r3, 0x4CE8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x136DF8
	  li        r3, 0x10
	  bl        -0x243864
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3468
	  addi      r0, r3, 0x4CC4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x136E4C
	  li        r3, 0x10
	  bl        -0x2438B8
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3460
	  addi      r0, r3, 0x4CA0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x136EA0
	  li        r3, 0x10
	  bl        -0x24390C
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
	  addi      r6, r6, 0x4D78
	  addi      r5, r5, 0x5B38
	  addi      r0, r3, 0x4C7C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x136EF8
	  li        r3, 0x10
	  bl        -0x243964
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
	  addi      r6, r6, 0x4D78
	  addi      r5, r5, 0x5B44
	  addi      r0, r3, 0x4C58
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B8:
	  mr        r3, r31
	  bl        -0x136F50
	  li        r3, 0x10
	  bl        -0x2439BC
	  mr.       r4, r3
	  beq-      .loc_0x30C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3458
	  addi      r0, r3, 0x4C34
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x30C:
	  mr        r3, r31
	  bl        -0x136FA4
	  li        r3, 0x10
	  bl        -0x243A10
	  mr.       r4, r3
	  beq-      .loc_0x360
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3450
	  addi      r0, r3, 0x4C10
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x360:
	  mr        r3, r31
	  bl        -0x136FF8
	  li        r3, 0x10
	  bl        -0x243A64
	  mr.       r4, r3
	  beq-      .loc_0x3B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3448
	  addi      r0, r3, 0x4BEC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x13704C
	  li        r3, 0x10
	  bl        -0x243AB8
	  mr.       r4, r3
	  beq-      .loc_0x408
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3444
	  addi      r0, r3, 0x4BC8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x408:
	  mr        r3, r31
	  bl        -0x1370A0
	  li        r3, 0x10
	  bl        -0x243B0C
	  mr.       r4, r3
	  beq-      .loc_0x45C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x343C
	  addi      r0, r3, 0x4BA4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x45C:
	  mr        r3, r31
	  bl        -0x1370F4
	  li        r3, 0x10
	  bl        -0x243B60
	  mr.       r4, r3
	  beq-      .loc_0x4B0
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xD
	  li        r7, 0
	  addi      r6, r5, 0x4D78
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3434
	  addi      r0, r3, 0x4B80
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x4B0:
	  mr        r3, r31
	  bl        -0x137148
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267A68
 * Size:	000070
 */
void Game::Tobi::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3430(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x200(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x162374
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3430(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x162ABC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267AD8
 * Size:	000044
 */
void Game::Tobi::StateDead::exec(Game::EnemyBase*)
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
	  bl        -0x12CA18

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267B1C
 * Size:	000004
 */
void Game::Tobi::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80267B20
 * Size:	000070
 */
void Game::Tobi::StatePress::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3430(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x200(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x16242C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3430(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x162B74
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267B90
 * Size:	000044
 */
void Game::Tobi::StatePress::exec(Game::EnemyBase*)
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
	  bl        -0x12CAD0

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267BD4
 * Size:	000004
 */
void Game::Tobi::StatePress::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80267BD8
 * Size:	0000BC
 */
void Game::Tobi::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x268C
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
	  bl        -0x1604B4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3430(r2)
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
	  bl        -0x162C70
	  mr        r3, r31
	  bl        -0x16099C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267C94
 * Size:	0000B0
 */
void Game::Tobi::StateStay::exec(Game::EnemyBase*)
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
	  bl        0x26E0
	  lwz       r7, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r7)
	  li        r6, 0
	  lfs       f2, 0x3D4(r7)
	  bl        -0x154C88
	  mr.       r31, r3
	  bne-      .loc_0x60
	  mr        r3, r30
	  bl        0x2B70
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94

	.loc_0x60:
	  mr        r3, r30
	  bl        0x2638
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  stw       r31, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x3
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
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
 * Address:	80267D44
 * Size:	000084
 */
void Game::Tobi::StateStay::cleanup(Game::EnemyBase*)
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
	  bl        -0x160604
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
 * Address:	80267DC8
 * Size:	000080
 */
void Game::Tobi::StateAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x21F4
	  mr        r3, r31
	  bl        -0x16066C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3430(r2)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x16644C
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x162E24
	  mr        r3, r31
	  bl        0x32CC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267E48
 * Size:	000080
 */
void Game::Tobi::StateAppear::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x70
	  lfs       f1, 0x200(r4)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267EC8
 * Size:	00003C
 */
void Game::Tobi::StateAppear::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x16074C
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
 * Address:	80267F04
 * Size:	00006C
 */
void Game::Tobi::StateDive::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1607A0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3430(r2)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1665C4
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x162F4C
	  mr        r3, r31
	  bl        0x3230
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80267F70
 * Size:	000050
 */
void Game::Tobi::StateDive::exec(Game::EnemyBase*)
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
 * Address:	80267FC0
 * Size:	00003C
 */
void Game::Tobi::StateDive::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x160844
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
 * Address:	80267FFC
 * Size:	000034
 */
void Game::Tobi::StateMove::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x163018
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268030
 * Size:	0004E8
 */
void Game::Tobi::StateMove::exec(Game::EnemyBase*)
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
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r7, 0xC0(r31)
	  li        r4, 0
	  mr        r3, r31
	  li        r5, 0
	  lfs       f1, 0x424(r7)
	  li        r6, 0
	  lfs       f2, 0x3D4(r7)
	  bl        -0x155050
	  mr.       r28, r3
	  beq-      .loc_0x3C4
	  stw       r28, 0x230(r31)
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x334(r5)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x50(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x5C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x64(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f26, f1
	  fsubs     f2, f27, f0
	  bl        -0x233004
	  bl        0x1A9AC0
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x1A9AC8
	  fmr       f31, f1
	  lfs       f0, -0x3428(r2)
	  lfs       f1, -0x342C(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x148
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x144
	  fmr       f28, f1
	  b         .loc_0x148

	.loc_0x144:
	  fneg      f28, f1

	.loc_0x148:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x1A9A40
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x64(r12)
	  lfs       f29, 0x2E4(r4)
	  mtctr     r12
	  bctrl
	  bl        -0x1989A0
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f30, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x74(r1)
	  stfs      f30, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x198F3C
	  fmuls     f0, f29, f26
	  mr        r4, r31
	  frsp      f1, f1
	  addi      r3, r1, 0x14
	  li        r29, 0
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f29, f1
	  stfs      f30, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f30
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2E0
	  lfs       f0, -0x3428(r2)
	  fabs      f2, f31
	  lfs       f1, -0x342C(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2E0
	  li        r29, 0x1

	.loc_0x2E0:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2FC
	  li        r0, 0xC
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163084
	  b         .loc_0x3FC

	.loc_0x2FC:
	  mr        r4, r31
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x19C(r31)
	  lfs       f28, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x6C(r1)
	  lfs       f2, 0x68(r1)
	  fsubs     f3, f0, f27
	  lfs       f1, 0x70(r1)
	  fsubs     f2, f2, f26
	  lfs       f0, -0x3430(r2)
	  fsubs     f1, f1, f28
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x364
	  ble-      .loc_0x368
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x368

	.loc_0x364:
	  fmr       f1, f0

	.loc_0x368:
	  lwz       r4, 0xC0(r31)
	  lfs       f0, 0x35C(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x38C
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163114
	  b         .loc_0x3FC

	.loc_0x38C:
	  lfs       f1, 0x58C(r4)
	  mr        r3, r31
	  lfs       f2, 0x564(r4)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  bl        -0x155384
	  cmplwi    r3, 0
	  beq-      .loc_0x3FC
	  li        r0, 0xC
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x16314C
	  b         .loc_0x3FC

	.loc_0x3C4:
	  mr        r3, r31
	  bl        0x2460
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3EC
	  mr        r3, r31
	  bl        0x229C
	  stw       r3, 0x2C4(r31)
	  mr        r3, r31
	  bl        -0x163174
	  b         .loc_0x3FC

	.loc_0x3EC:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163188

	.loc_0x3FC:
	  mr        r3, r31
	  bl        0x1DF4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x41C
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1631A8

	.loc_0x41C:
	  mr        r3, r31
	  bl        0x1DF8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x45C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x498

	.loc_0x45C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x498
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x498
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x498:
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
 * Address:	80268518
 * Size:	000004
 */
void Game::Tobi::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026851C
 * Size:	000034
 */
void Game::Tobi::StateMoveSide::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x163538
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268550
 * Size:	000150
 */
void Game::Tobi::StateMoveSide::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x155538
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163300
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        0x22AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        0x22C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163334
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163348

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x1C34
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163368

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x1C38
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xFC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x138

	.loc_0xFC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x138
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
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
 * Address:	802686A0
 * Size:	000004
 */
void Game::Tobi::StateMoveSide::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802686A4
 * Size:	000034
 */
void Game::Tobi::StateMoveCentre::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x1636C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802686D8
 * Size:	000150
 */
void Game::Tobi::StateMoveCentre::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x1556C0
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163488
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        0x2124
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        0x23E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1634BC
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1634D0

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x1AAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1634F0

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x1AB0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xFC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x138

	.loc_0xFC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x138
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
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
 * Address:	80268828
 * Size:	000004
 */
void Game::Tobi::StateMoveCentre::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026882C
 * Size:	000034
 */
void Game::Tobi::StateMoveTop::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x163848
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268860
 * Size:	000150
 */
void Game::Tobi::StateMoveTop::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x155848
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163610
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        0x1F9C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        0x24E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0xB
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163644
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163658

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x1924
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163678

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x1928
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xFC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x138

	.loc_0xFC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x138
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
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
 * Address:	802689B0
 * Size:	000004
 */
void Game::Tobi::StateMoveTop::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802689B4
 * Size:	000034
 */
void Game::Tobi::StateGoHome::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x1639D0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802689E8
 * Size:	0001FC
 */
void Game::Tobi::StateGoHome::exec(Game::EnemyBase*)
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
	  bl        -0x153470
	  lwz       r7, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x564(r7)
	  li        r6, 0
	  lfs       f2, 0x58C(r7)
	  bl        -0x155A1C
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  li        r0, 0xC
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1637E4
	  b         .loc_0x130

	.loc_0xA4:
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
	  lfs       f0, -0x3430(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x10C
	  ble-      .loc_0x110
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x110

	.loc_0x10C:
	  fmr       f1, f0

	.loc_0x110:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x130
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163874

	.loc_0x130:
	  mr        r3, r31
	  bl        0x1708
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x150
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x163894

	.loc_0x150:
	  mr        r3, r31
	  bl        0x170C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x190
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1CC

	.loc_0x190:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1CC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1CC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1CC:
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
 * Address:	80268BE4
 * Size:	000004
 */
void Game::Tobi::StateGoHome::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80268BE8
 * Size:	000094
 */
void Game::Tobi::StateFly::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r3, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  mr        r3, r31
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x2D0(r31)
	  stfs      f1, 0x2D4(r31)
	  stfs      f2, 0x2D8(r31)
	  bl        0x13D8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3430(r2)
	  li        r4, 0x5
	  ori       r0, r0, 0x1
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x163C60
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268C7C
 * Size:	000130
 */
void Game::Tobi::StateFly::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x1368
	  lfs       f1, 0x2D4(r31)
	  mr        r3, r31
	  lfs       f2, 0x2D8(r31)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x2D0(r31)
	  stfs      f0, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1536F4
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x200(r31)
	  lfs       f1, 0x104(r3)
	  lfs       f0, 0x844(r3)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xDC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)
	  bl        -0x163A60
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r1)
	  mr        r3, r31
	  lfs       f0, -0x3424(r2)
	  addi      r4, r1, 0x14
	  lfs       f3, 0x8(r1)
	  lfs       f1, 0x10(r1)
	  fmuls     f0, f2, f0
	  stfs      f2, 0x18(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x118
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268DAC
 * Size:	00001C
 */
void Game::Tobi::StateFly::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268DC8
 * Size:	000058
 */
void Game::Tobi::StateAttack1::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3430(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x6
	  stfs      f0, 0x1D4(r31)
	  mr        r3, r31
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x163DF4
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        0x240C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268E20
 * Size:	000158
 */
void Game::Tobi::StateAttack1::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x155E08
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  li        r0, 0x5
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x50:
	  mr        r3, r31
	  bl        0x19E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  mr        r3, r31
	  bl        0x1F2C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0xB
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x7C:
	  li        r0, 0x8
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x88:
	  li        r0, 0x9
	  stw       r0, 0x2C4(r31)

	.loc_0x90:
	  mr        r3, r31
	  bl        0x1370
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  li        r0, 0xA
	  stw       r0, 0x2C4(r31)

	.loc_0xA8:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xE0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x140

	.loc_0xE0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x118
	  mr        r3, r31
	  bl        0x1938
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x140
	  mr        r3, r31
	  bl        0x2170
	  b         .loc_0x140

	.loc_0x118:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x140
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x140:
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
 * Address:	80268F78
 * Size:	000004
 */
void Game::Tobi::StateAttack1::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80268F7C
 * Size:	000048
 */
void Game::Tobi::StateAttack2::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x3430(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x7
	  li        r5, 0
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x163FAC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80268FC4
 * Size:	000218
 */
void Game::Tobi::StateAttack2::exec(Game::EnemyBase*)
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
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x124C
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x68
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x1E8

	.loc_0x68:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x80
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x1E8

	.loc_0x80:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xB8
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x5B4(r6)
	  lfs       f2, 0x5DC(r6)
	  lfs       f3, 0x604(r6)
	  bl        -0x154E08
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x155540
	  b         .loc_0x1E8

	.loc_0xB8:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1E8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xF8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0xF8:
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xD
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0x128:
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
	  lfs       f0, -0x3430(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x190
	  ble-      .loc_0x194
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x194

	.loc_0x190:
	  fmr       f1, f0

	.loc_0x194:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0x1C8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E8:
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
 * Address:	802691DC
 * Size:	000010
 */
void Game::Tobi::StateAttack2::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802691EC
 * Size:	00003C
 */
void Game::Tobi::StateEat::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x3430(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x8
	  li        r5, 0
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x164210
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80269228
 * Size:	0001A8
 */
void Game::Tobi::StateEat::exec(Game::EnemyBase*)
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
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0xFE8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3430(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x74
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x74:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f1, 0x894(r5)
	  bl        -0x155444
	  mr        r3, r31
	  bl        0x1FD4
	  b         .loc_0x178

	.loc_0xB0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x178
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
	  lfs       f0, -0x3430(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x120
	  ble-      .loc_0x124
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x124

	.loc_0x120:
	  fmr       f1, f0

	.loc_0x124:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x158
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x158:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x178:
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
 * Address:	802693D0
 * Size:	000004
 */
void Game::Tobi::StateEat::cleanup(Game::EnemyBase*) { }
