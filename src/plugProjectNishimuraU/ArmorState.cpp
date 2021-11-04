#include "types.h"

/*
 * --INFO--
 * Address:	80285ED8
 * Size:	0004CC
 */
void Game::Armor::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xE
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15568C
	  li        r3, 0x10
	  bl        -0x262054
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  subi      r5, r2, 0x2C38
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x65DC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x155638
	  li        r3, 0x10
	  bl        -0x2620A4
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C30
	  subi      r0, r3, 0x6600
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x15568C
	  li        r3, 0x10
	  bl        -0x2620F8
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C28
	  subi      r0, r3, 0x6624
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x1556E0
	  li        r3, 0x10
	  bl        -0x26214C
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C20
	  subi      r0, r3, 0x6648
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x155734
	  li        r3, 0x10
	  bl        -0x2621A0
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C18
	  subi      r0, r3, 0x666C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x155788
	  li        r3, 0x10
	  bl        -0x2621F4
	  mr.       r4, r3
	  beq-      .loc_0x20C
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x65B8
	  addi      r5, r5, 0x7C40
	  subi      r0, r3, 0x6690
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x20C:
	  mr        r3, r31
	  bl        -0x1557E0
	  li        r3, 0x10
	  bl        -0x26224C
	  mr.       r4, r3
	  beq-      .loc_0x264
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x65B8
	  addi      r5, r5, 0x7C4C
	  subi      r0, r3, 0x66B4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x264:
	  mr        r3, r31
	  bl        -0x155838
	  li        r3, 0x10
	  bl        -0x2622A4
	  mr.       r4, r3
	  beq-      .loc_0x2B8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C10
	  subi      r0, r3, 0x66D8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B8:
	  mr        r3, r31
	  bl        -0x15588C
	  li        r3, 0x10
	  bl        -0x2622F8
	  mr.       r4, r3
	  beq-      .loc_0x30C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C08
	  subi      r0, r3, 0x66FC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x30C:
	  mr        r3, r31
	  bl        -0x1558E0
	  li        r3, 0x10
	  bl        -0x26234C
	  mr.       r4, r3
	  beq-      .loc_0x360
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2C00
	  subi      r0, r3, 0x6720
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x360:
	  mr        r3, r31
	  bl        -0x155934
	  li        r3, 0x10
	  bl        -0x2623A0
	  mr.       r4, r3
	  beq-      .loc_0x3B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BF8
	  subi      r0, r3, 0x6744
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x155988
	  li        r3, 0x10
	  bl        -0x2623F4
	  mr.       r4, r3
	  beq-      .loc_0x408
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BF0
	  subi      r0, r3, 0x6768
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x408:
	  mr        r3, r31
	  bl        -0x1559DC
	  li        r3, 0x10
	  bl        -0x262448
	  mr.       r4, r3
	  beq-      .loc_0x45C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BEC
	  subi      r0, r3, 0x678C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x45C:
	  mr        r3, r31
	  bl        -0x155A30
	  li        r3, 0x10
	  bl        -0x26249C
	  mr.       r4, r3
	  beq-      .loc_0x4B0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xD
	  li        r7, 0
	  subi      r6, r5, 0x65B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BE4
	  subi      r0, r3, 0x67B0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x4B0:
	  mr        r3, r31
	  bl        -0x155A84
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802863A4
 * Size:	00005C
 */
void Game::Armor::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x180C9C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2BDC(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1813E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286400
 * Size:	000090
 */
void Game::Armor::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x24(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x70
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x9
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x32CE8
	  b         .loc_0x80

	.loc_0x70:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x80
	  li        r4, 0
	  bl        -0x14B38C

	.loc_0x80:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286490
 * Size:	000004
 */
void Game::Armor::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80286494
 * Size:	000070
 */
void Game::Armor::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x17ED30
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2BDC(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,21,19
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,17,15
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1814E0
	  mr        r3, r31
	  bl        -0x17F20C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286504
 * Size:	0000A0
 */
void Game::Armor::StateStay::exec(Game::EnemyBase*)
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
	  bl        -0x818C
	  lwz       r7, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r7)
	  li        r6, 0
	  lfs       f2, 0x3D4(r7)
	  bl        -0x1734F8
	  mr.       r31, r3
	  bne-      .loc_0x60
	  mr        r3, r30
	  bl        -0x7CFC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84

	.loc_0x60:
	  stw       r31, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x2
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
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
 * Address:	802865A4
 * Size:	00003C
 */
void Game::Armor::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x17EE28
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8000
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
 * Address:	802865E0
 * Size:	0000B8
 */
void Game::Armor::StateAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x8758
	  mr        r3, r31
	  bl        -0x17EE84
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2BDC(r2)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x184C58
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x181630
	  mr        r3, r31
	  bl        -0x73EC
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xA
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x32F00
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286698
 * Size:	0000CC
 */
void Game::Armor::StateAppear::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x9
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x32F7C
	  b         .loc_0xBC

	.loc_0x6C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xBC
	  lfs       f1, 0x200(r4)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xBC

	.loc_0xA4:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286764
 * Size:	000024
 */
void Game::Armor::StateAppear::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x17EFE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286788
 * Size:	000060
 */
void Game::Armor::StateDive::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x17F024
	  lfs       f0, -0x2BDC(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x184E3C
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1817C4
	  mr        r3, r31
	  bl        -0x74F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802867E8
 * Size:	00009C
 */
void Game::Armor::StateDive::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xA
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x330CC
	  b         .loc_0x8C

	.loc_0x6C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x8C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286884
 * Size:	000024
 */
void Game::Armor::StateDive::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x17F100
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802868A8
 * Size:	000034
 */
void Game::Armor::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x1818C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802868DC
 * Size:	0004F8
 */
void Game::Armor::StateMove::exec(Game::EnemyBase*)
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
	  bl        -0x1738FC
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
	  bl        -0x2518B0
	  bl        0x18B214
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x18B21C
	  fmr       f31, f1
	  lfs       f0, -0x2BD4(r2)
	  lfs       f1, -0x2BD8(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x148
	  lfs       f0, -0x2BDC(r2)
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
	  bl        0x18B194
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
	  bl        -0x1B724C
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
	  bl        -0x1B77E8
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
	  lfs       f0, -0x2BD4(r2)
	  fabs      f2, f31
	  lfs       f1, -0x2BD8(r2)
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
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181930
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
	  lfs       f0, -0x2BDC(r2)
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
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1819C0
	  b         .loc_0x3FC

	.loc_0x38C:
	  lfs       f1, 0x58C(r4)
	  mr        r3, r31
	  lfs       f2, 0x564(r4)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  bl        -0x173C30
	  cmplwi    r3, 0
	  beq-      .loc_0x3FC
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1819F8
	  b         .loc_0x3FC

	.loc_0x3C4:
	  mr        r3, r31
	  bl        -0x8448
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3EC
	  mr        r3, r31
	  bl        -0x860C
	  stw       r3, 0x2C4(r31)
	  mr        r3, r31
	  bl        -0x181A20
	  b         .loc_0x3FC

	.loc_0x3EC:
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181A34

	.loc_0x3FC:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x434
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4A8

	.loc_0x434:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        -0x1726C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x46C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xC
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4A8

	.loc_0x46C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4A8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4A8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4A8:
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
 * Address:	80286DD4
 * Size:	000004
 */
void Game::Armor::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80286DD8
 * Size:	000034
 */
void Game::Armor::StateMoveSide::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x181DF4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286E0C
 * Size:	000128
 */
void Game::Armor::StateMoveSide::exec(Game::EnemyBase*)
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
	  bl        -0x173DF4
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181BBC
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x860C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        -0x85F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181BF0
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181C04

	.loc_0x9C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0xD4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x110
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x110:
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
 * Address:	80286F34
 * Size:	000004
 */
void Game::Armor::StateMoveSide::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80286F38
 * Size:	000034
 */
void Game::Armor::StateMoveCentre::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x181F54
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80286F6C
 * Size:	000128
 */
void Game::Armor::StateMoveCentre::exec(Game::EnemyBase*)
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
	  bl        -0x173F54
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181D1C
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x876C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        -0x84AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181D50
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181D64

	.loc_0x9C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0xD4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x110
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x110:
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
 * Address:	80287094
 * Size:	000004
 */
void Game::Armor::StateMoveCentre::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80287098
 * Size:	000034
 */
void Game::Armor::StateMoveTop::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x1820B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802870CC
 * Size:	000128
 */
void Game::Armor::StateMoveTop::exec(Game::EnemyBase*)
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
	  bl        -0x1740B4
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181E7C
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x88CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        -0x8384
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181EB0
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x181EC4

	.loc_0x9C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0xD4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x110
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x110:
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
 * Address:	802871F4
 * Size:	000004
 */
void Game::Armor::StateMoveTop::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802871F8
 * Size:	000034
 */
void Game::Armor::StateGoHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x182214
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028722C
 * Size:	00021C
 */
void Game::Armor::StateGoHome::exec(Game::EnemyBase*)
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
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x19C(r31)
	  mr        r3, r31
	  lfs       f2, 0x1A0(r31)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x171CC8
	  lwz       r7, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x564(r7)
	  li        r6, 0
	  lfs       f2, 0x58C(r7)
	  bl        -0x174274
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x18203C
	  b         .loc_0x144

	.loc_0xB8:
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
	  lfs       f0, -0x2BDC(r2)
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
	  lfs       f0, 0x384(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x144
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1820CC

	.loc_0x144:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1B8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1EC

	.loc_0x1B8:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        -0x172D94
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1EC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xC
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1EC:
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
 * Address:	80287448
 * Size:	000004
 */
void Game::Armor::StateGoHome::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8028744C
 * Size:	000058
 */
void Game::Armor::StateAttack1::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2BDC(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x4
	  stfs      f0, 0x1D4(r31)
	  mr        r3, r31
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x182478
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x8124
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802874A4
 * Size:	00013C
 */
void Game::Armor::StateAttack1::exec(Game::EnemyBase*)
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
	  bl        -0x17448C
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  li        r0, 0x4
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x50:
	  mr        r3, r31
	  bl        -0x8C9C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  mr        r3, r31
	  bl        -0x8754
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0x9
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x7C:
	  li        r0, 0x7
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x88:
	  li        r0, 0x8
	  stw       r0, 0x2C4(r31)

	.loc_0x90:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC8
	  mr        r3, r31
	  bl        -0x8CF8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  mr        r3, r31
	  bl        -0x8494
	  b         .loc_0xF0

	.loc_0xC8:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
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
 * Address:	802875E0
 * Size:	000004
 */
void Game::Armor::StateAttack1::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802875E4
 * Size:	000040
 */
void Game::Armor::StateAttack2::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x2BDC(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x5
	  li        r5, 0
	  stfs      f0, 0x2C8(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x18260C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287624
 * Size:	0001B8
 */
void Game::Armor::StateAttack2::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x1823D8
	  lfs       f0, -0x2BD0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x44
	  lfs       f0, -0x2BCC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x44
	  mr        r3, r31
	  bl        -0x9794

	.loc_0x44:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  mr        r3, r31
	  bl        -0x1823E0

	.loc_0x60:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x9C
	  mr        r3, r31
	  bl        -0x849C
	  b         .loc_0x1A0

	.loc_0x9C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x10C
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x5B4(r6)
	  lfs       f2, 0x5DC(r6)
	  lfs       f3, 0x604(r6)
	  bl        -0x173484
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x9
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x33FA8
	  b         .loc_0x1A0

	.loc_0x10C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1A0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2BDC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x14C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x14C:
	  mr        r3, r31
	  bl        -0x94B8
	  cmpwi     r3, 0
	  beq-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xB
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x180:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xD
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1A0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802877DC
 * Size:	000004
 */
void Game::Armor::StateAttack2::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802877E0
 * Size:	00003C
 */
void Game::Armor::StateEat::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x2BDC(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x6
	  li        r5, 0
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x182804
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028781C
 * Size:	000098
 */
void Game::Armor::StateEat::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2BDC(r2)
	  mr        r6, r4
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x40:
	  lwz       r5, 0x188(r6)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x68
	  mr        r3, r6
	  bl        -0x952C
	  b         .loc_0x88

	.loc_0x68:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802878B4
 * Size:	000004
 */
void Game::Armor::StateEat::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802878B8
 * Size:	00003C
 */
void Game::Armor::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x2BDC(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x7
	  li        r5, 0
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1828DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802878F4
 * Size:	000144
 */
void Game::Armor::StateFlick::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2BDC(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x48:
	  lwz       r5, 0x188(r30)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x12C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x10C
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1741F8
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1744E8
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1748D4
	  lfs       f0, -0x2BDC(r2)
	  stfs      f0, 0x20C(r30)
	  b         .loc_0x12C

	.loc_0x10C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x12C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x12C:
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
 * Address:	80287A38
 * Size:	000004
 */
void Game::Armor::StateFlick::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80287A3C
 * Size:	00003C
 */
void Game::Armor::StateFail::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x2BDC(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x8
	  li        r5, 0
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x182A60
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287A78
 * Size:	000080
 */
void Game::Armor::StateFail::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2BDC(r2)
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x3C:
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
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
 * Address:	80287AF8
 * Size:	000004
 */
void Game::Armor::StateFail::cleanup(Game::EnemyBase*) { }
