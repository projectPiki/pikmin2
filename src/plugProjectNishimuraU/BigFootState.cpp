#include "types.h"

/*
 * --INFO--
 * Address:	802C62E8
 * Size:	000224
 */
void Game::BigFoot::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x6
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x195A9C
	  li        r3, 0x10
	  bl        -0x2A2464
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x1A5C
	  subi      r5, r2, 0x1CF8
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x1A38
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x195A48
	  li        r3, 0x10
	  bl        -0x2A24B4
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x1A5C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1CF0
	  addi      r0, r3, 0x1A14
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x195A9C
	  li        r3, 0x10
	  bl        -0x2A2508
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x1A5C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1CE8
	  addi      r0, r3, 0x19F0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x195AF0
	  li        r3, 0x10
	  bl        -0x2A255C
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x1A5C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1CE0
	  addi      r0, r3, 0x19CC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x195B44
	  li        r3, 0x10
	  bl        -0x2A25B0
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x1A5C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1CD8
	  addi      r0, r3, 0x19A8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x195B98
	  li        r3, 0x10
	  bl        -0x2A2604
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x1A5C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1CD0
	  addi      r0, r3, 0x1984
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x195BEC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C650C
 * Size:	0000CC
 */
void Game::BigFoot::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x2CA0
	  mr        r3, r31
	  bl        0x45A4
	  mr        r3, r31
	  bl        -0x1C0E14
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1CC8(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C4BDC
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1C1564
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x74370
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xA
	  li        r6, 0x2
	  bl        -0x72E40
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C65D8
 * Size:	000094
 */
void Game::BigFoot::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x49D4
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x58
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x2F60
	  b         .loc_0x80

	.loc_0x58:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x6C
	  li        r0, 0x1
	  stb       r0, 0x2DC(r31)
	  b         .loc_0x80

	.loc_0x6C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x80
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x18B564

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C666C
 * Size:	000004
 */
void Game::BigFoot::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802C6670
 * Size:	000084
 */
void Game::BigFoot::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x1CC8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2C4(r4)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r6, 0x1E0(r31)
	  oris      r6, r6, 0x40
	  stw       r6, 0x1E0(r31)
	  lwz       r6, 0x1E0(r31)
	  rlwinm    r6,r6,0,17,15
	  stw       r6, 0x1E0(r31)
	  lwz       r6, 0x1E0(r31)
	  oris      r6, r6, 0x4000
	  stw       r6, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C16D0
	  mr        r3, r31
	  bl        -0x1BF3FC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C66F4
 * Size:	0000B8
 */
void Game::BigFoot::StateStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r5, 0xC0(r31)
	  li        r4, 0
	  mr        r3, r31
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x1B1C6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x4C:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B2018
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x98
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C67AC
 * Size:	000004
 */
void Game::BigFoot::StateStay::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802C67B0
 * Size:	0000B4
 */
void Game::BigFoot::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1CC4(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C4(r4)
	  stfs      f0, 0x2D4(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x1E0(r4)
	  bl        -0x1C4E3C
	  li        r0, 0
	  lfs       f0, -0x1CC8(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C182C
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x84A5C
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x8474C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6864
 * Size:	000178
 */
void Game::BigFoot::StateLand::exec(Game::EnemyBase*)
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
	  bl        0x4B58
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC8
	  lwz       r0, 0x1E0(r31)
	  li        r30, 0
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)

	.loc_0x50:
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x3C8C
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x4
	  blt+      .loc_0x50
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xF
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x746D4
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0x731A4
	  b         .loc_0x160

	.loc_0xC8:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x160
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1CC8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x108
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x160

	.loc_0x108:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B231C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x140
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x160

	.loc_0x140:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
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
 * Address:	802C69DC
 * Size:	00005C
 */
void Game::BigFoot::StateLand::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x2764
	  mr        r3, r31
	  bl        0x31E8
	  lwz       r0, 0x1E0(r31)
	  mr        r4, r31
	  lfs       f0, -0x1CC0(r2)
	  li        r5, 0
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x2D4(r31)
	  lwz       r3, -0x6980(r13)
	  bl        -0x84920
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6A38
 * Size:	000070
 */
void Game::BigFoot::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1CC8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C4(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        0x1D98
	  mr        r3, r31
	  bl        0x24C8
	  li        r0, 0
	  lfs       f0, -0x1CC8(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C1A8C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6AA8
 * Size:	0000F4
 */
void Game::BigFoot::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1CC8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x2C0(r4)
	  lfs       f1, 0x54(r5)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r4)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1C1858
	  b         .loc_0xA0

	.loc_0x58:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B24B0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1C1880
	  b         .loc_0xA0

	.loc_0x80:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x1CBC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1C18A4

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
 * Address:	802C6B9C
 * Size:	000004
 */
void Game::BigFoot::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802C6BA0
 * Size:	00006C
 */
void Game::BigFoot::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1CC8(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C4(r4)
	  li        r0, 0
	  li        r4, 0x3
	  stfs      f0, 0x2C0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C1BE0
	  mr        r3, r31
	  bl        0x2620
	  mr        r3, r31
	  bl        0x2A38
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6C0C
 * Size:	0000C0
 */
void Game::BigFoot::StateFlick::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x5C
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1CB8(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1B3B3C
	  lfs       f0, -0x1CC8(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xAC

	.loc_0x5C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xAC
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1CC8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xAC

	.loc_0x94:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6CCC
 * Size:	000048
 */
void Game::BigFoot::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x254C
	  mr        r3, r31
	  bl        0x1B98
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x2DE(r31)
	  bl        0x2234
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6D14
 * Size:	000070
 */
void Game::BigFoot::StateWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1CC8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C4(r4)
	  li        r0, 0
	  stfs      f0, 0x2C0(r4)
	  stw       r0, 0x230(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        0x242C
	  mr        r3, r31
	  bl        0x1BB8
	  lbz       r0, 0x2DE(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  mr        r3, r31
	  bl        0x2988

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6D84
 * Size:	000100
 */
void Game::BigFoot::StateWalk::exec(Game::EnemyBase*)
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
	  bl        0x1B6C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C0(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x1CC8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE8

	.loc_0x70:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B27A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x98
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        0x238C
	  b         .loc_0xB8

	.loc_0x98:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x2D8(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB8
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        0x2368

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x23A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE8:
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
 * Address:	802C6E84
 * Size:	000038
 */
void Game::BigFoot::StateWalk::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x2DE(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r0, 0
	  mr        r3, r4
	  stb       r0, 0x2DE(r4)
	  bl        0x2914

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C6EBC
 * Size:	000028
 */
void __sinit_BigFootState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68D8(r13)
	  stfsu     f0, 0x1978(r3)
	  stfs      f0, -0x68D4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
