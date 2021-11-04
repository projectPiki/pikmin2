#include "types.h"

/*
 * --INFO--
 * Address:	802D72CC
 * Size:	00042C
 */
void Game::BigTreasure::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r4, 0x3E68
	  li        r4, 0xC
	  bl        -0x1A6A8C
	  li        r3, 0x10
	  bl        -0x2B3454
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  subi      r5, r2, 0x1920
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x3128
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x1A6A38
	  li        r3, 0x10
	  bl        -0x2B34A4
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1918
	  addi      r0, r3, 0x3104
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x1A6A8C
	  li        r3, 0x10
	  bl        -0x2B34F8
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1910
	  addi      r0, r3, 0x30E0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x1A6AE0
	  li        r3, 0x10
	  bl        -0x2B354C
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1908
	  addi      r0, r3, 0x30BC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x1A6B34
	  li        r3, 0x10
	  bl        -0x2B35A0
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x24
	  addi      r0, r3, 0x3098
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x1A6B88
	  li        r3, 0x10
	  bl        -0x2B35F4
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1900
	  addi      r0, r3, 0x3074
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x1A6BDC
	  li        r3, 0x10
	  bl        -0x2B3648
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x30
	  addi      r0, r3, 0x3050
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x1A6C30
	  li        r3, 0x10
	  bl        -0x2B369C
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x18F8
	  addi      r0, r3, 0x302C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x1A6C84
	  li        r3, 0x10
	  bl        -0x2B36F0
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x18F0
	  addi      r0, r3, 0x3008
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x1A6CD8
	  li        r3, 0x10
	  bl        -0x2B3744
	  mr.       r4, r3
	  beq-      .loc_0x364
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x3C
	  addi      r0, r3, 0x2FE4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x364:
	  mr        r3, r31
	  bl        -0x1A6D2C
	  li        r3, 0x10
	  bl        -0x2B3798
	  mr.       r4, r3
	  beq-      .loc_0x3B8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x18E8
	  addi      r0, r3, 0x2FC0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B8:
	  mr        r3, r31
	  bl        -0x1A6D80
	  li        r3, 0x10
	  bl        -0x2B37EC
	  mr.       r4, r3
	  beq-      .loc_0x40C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  addi      r6, r5, 0x314C
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x48
	  addi      r0, r3, 0x2F9C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x40C:
	  mr        r3, r31
	  bl        -0x1A6DD4
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
 * Address:	802D76F8
 * Size:	000080
 */
void Game::BigTreasure::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  mr        r3, r31
	  bl        0x6EA8
	  mr        r3, r31
	  bl        0x5740
	  mr        r3, r31
	  bl        0x57C8
	  mr        r3, r31
	  bl        -0x1D2010
	  lfs       f0, -0x18E0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1D5DCC
	  mr        r3, r31
	  li        r4, 0x1B
	  li        r5, 0x1
	  bl        0x77F8
	  mr        r3, r31
	  bl        0x9564
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D7778
 * Size:	000230
 */
void Game::BigTreasure::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1D2524
	  lfs       f0, -0x18DC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  mr        r3, r31
	  bl        0x99C4

	.loc_0x30:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x21C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x58
	  mr        r3, r31
	  bl        0x78A4
	  b         .loc_0x21C

	.loc_0x58:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6C
	  mr        r3, r31
	  bl        0x93E4
	  b         .loc_0x21C

	.loc_0x6C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x80
	  mr        r3, r31
	  bl        0x936C
	  b         .loc_0x21C

	.loc_0x80:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x98
	  mr        r3, r31
	  li        r4, 0
	  bl        0x9298
	  b         .loc_0x21C

	.loc_0x98:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xB0
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x9280
	  b         .loc_0x21C

	.loc_0xB0:
	  cmplwi    r0, 0x6
	  bne-      .loc_0xC8
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x9268
	  b         .loc_0x21C

	.loc_0xC8:
	  cmplwi    r0, 0x7
	  bne-      .loc_0xE0
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x9250
	  b         .loc_0x21C

	.loc_0xE0:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x104
	  mr        r3, r31
	  li        r4, 0
	  bl        0x8F8C
	  mr        r3, r31
	  li        r4, 0
	  bl        0x928C
	  b         .loc_0x21C

	.loc_0x104:
	  cmplwi    r0, 0x9
	  bne-      .loc_0x128
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x8F68
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x9268
	  b         .loc_0x21C

	.loc_0x128:
	  cmplwi    r0, 0xA
	  bne-      .loc_0x1AC
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x8F44
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x9244
	  mr        r3, r31
	  bl        0x9330
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x15
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x856CC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xC
	  li        r6, 0x2
	  bl        -0x8419C
	  b         .loc_0x21C

	.loc_0x1AC:
	  cmplwi    r0, 0xB
	  bne-      .loc_0x1D0
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x8EC0
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x91C0
	  b         .loc_0x21C

	.loc_0x1D0:
	  cmplwi    r0, 0x64
	  bne-      .loc_0x208
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x6258
	  mr        r3, r31
	  bl        0x90A0
	  mr        r3, r31
	  bl        0x9218
	  b         .loc_0x21C

	.loc_0x208:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x21C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x19C8A0

	.loc_0x21C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D79A8
 * Size:	000004
 */
void Game::BigTreasure::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D79AC
 * Size:	000080
 */
void Game::BigTreasure::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  li        r4, 0
	  stfs      f0, 0x2C0(r31)
	  bl        0x6BE8
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  mr        r3, r31
	  oris      r5, r4, 0x40
	  li        r4, 0
	  stw       r5, 0x1E0(r31)
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x230(r31)
	  bl        0x7544
	  mr        r3, r31
	  bl        -0x1D0734
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D7A2C
 * Size:	0000FC
 */
void Game::BigTreasure::StateStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lfs       f0, -0x18D8(r2)
	  mr        r31, r4
	  lfs       f2, 0x2C0(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xA8
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x1C2FAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  li        r0, 0x1
	  b         .loc_0x78

	.loc_0x54:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C3358
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0x1
	  b         .loc_0x78

	.loc_0x74:
	  li        r0, 0

	.loc_0x78:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xE0
	  mr        r3, r31
	  bl        0x96E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  lfs       f0, -0x18D8(r2)
	  stfs      f0, 0x2C0(r31)
	  b         .loc_0xE0

	.loc_0x9C:
	  lfs       f0, -0x18D4(r2)
	  stfs      f0, 0x2C0(r31)
	  b         .loc_0xE0

	.loc_0xA8:
	  lwz       r5, -0x6514(r13)
	  lfs       f0, -0x18D4(r2)
	  lfs       f1, 0x54(r5)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r31)
	  lfs       f1, 0x2C0(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE0
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D7B28
 * Size:	000004
 */
void Game::BigTreasure::StateStay::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D7B2C
 * Size:	0000AC
 */
void Game::BigTreasure::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r0, 0x2C8(r31)
	  mr        r3, r31
	  bl        0x6A70
	  lfs       f0, -0x18E0(r2)
	  li        r0, 0
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x230(r31)
	  bl        -0x1D61A4
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x95D9C
	  mr        r3, r31
	  bl        -0x1D0980
	  mr        r3, r31
	  bl        0x8B18
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x8BFC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C4A9C
	  mr        r3, r31
	  bl        0x7D14
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D7BD8
 * Size:	000324
 */
void Game::BigTreasure::StateLand::exec(Game::EnemyBase*)
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
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x30C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6C
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x86DC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C4B20
	  b         .loc_0x30C

	.loc_0x6C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x84
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x8B40
	  b         .loc_0x30C

	.loc_0x84:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xC0
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x8688
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C4B74
	  b         .loc_0x30C

	.loc_0xC0:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xD8
	  mr        r3, r31
	  li        r4, 0
	  bl        0x8AEC
	  b         .loc_0x30C

	.loc_0xD8:
	  cmplwi    r0, 0x6
	  bne-      .loc_0x114
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0
	  bl        0x8634
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C4BC8
	  b         .loc_0x30C

	.loc_0x114:
	  cmplwi    r0, 0x7
	  bne-      .loc_0x12C
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x8A98
	  b         .loc_0x30C

	.loc_0x12C:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x168
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x85E0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C4C1C
	  b         .loc_0x30C

	.loc_0x168:
	  cmplwi    r0, 0x9
	  bne-      .loc_0x1E8
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x2
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x85B48
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0x5
	  li        r6, 0x2
	  bl        -0x84618
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C4C9C
	  b         .loc_0x30C

	.loc_0x1E8:
	  cmplwi    r0, 0xA
	  bne-      .loc_0x214
	  mr        r3, r31
	  bl        0x5A0C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x30C
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1D2DE0
	  b         .loc_0x30C

	.loc_0x214:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x30C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x18E0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x24C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30C

	.loc_0x24C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C37D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2B8
	  mr        r3, r31
	  bl        0x599C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x294
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30C

	.loc_0x294:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30C

	.loc_0x2B8:
	  mr        r3, r31
	  bl        0x5944
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2EC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xB
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30C

	.loc_0x2EC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30C:
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
 * Address:	802D7EFC
 * Size:	000030
 */
void Game::BigTreasure::StateLand::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r4)
	  bl        0x4EDC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D7F2C
 * Size:	0000A0
 */
void Game::BigTreasure::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C8(r4)
	  bl        -0x20E9A8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x18C0(r2)
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x18CC(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x18C8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x663C
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x19
	  li        r5, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x6FA4
	  mr        r3, r31
	  bl        0x4EF4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D7FCC
 * Size:	000140
 */
void Game::BigTreasure::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
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
	  stw       r0, 0x2C8(r31)
	  bl        -0x1D2D7C
	  b         .loc_0xA0

	.loc_0x58:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C39D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1D2DA4
	  b         .loc_0xA0

	.loc_0x80:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x18CC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1D2DC8

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xC8
	  mr        r3, r31
	  bl        0x6FE0
	  b         .loc_0x128

	.loc_0xC8:
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x594E
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0x100:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
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
 * Address:	802D810C
 * Size:	000024
 */
void Game::BigTreasure::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x4DB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8130
 * Size:	0000A0
 */
void Game::BigTreasure::StateItemWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C8(r4)
	  bl        -0x20EBAC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x18C0(r2)
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x18CC(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x18C8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x6438
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x6DA0
	  mr        r3, r31
	  bl        0x4CF0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D81D0
 * Size:	000124
 */
void Game::BigTreasure::StateItemWait::exec(Game::EnemyBase*)
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
	  bl        0x55E8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x10C

	.loc_0x50:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C3BD0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  mr        r3, r31
	  bl        0x4344
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88

	.loc_0x74:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1D2FB0
	  b         .loc_0xA8

	.loc_0x88:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x18CC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA8
	  li        r0, 0xB
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1D2FD4

	.loc_0xA8:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xE4
	  mr        r3, r31
	  bl        0x6DC0
	  b         .loc_0x10C

	.loc_0xE4:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x10C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x10C:
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
 * Address:	802D82F4
 * Size:	000024
 */
void Game::BigTreasure::StateItemWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x4BC8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8318
 * Size:	000074
 */
void Game::BigTreasure::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  li        r4, 0
	  stfs      f0, 0x2C0(r31)
	  bl        0x627C
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x1A
	  li        r5, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x6BE4
	  mr        r3, r31
	  bl        0x4B34
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D838C
 * Size:	0000DC
 */
void Game::BigTreasure::StateFlick::exec(Game::EnemyBase*)
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
	  beq-      .loc_0xC8
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        0x6CAC
	  b         .loc_0xC8

	.loc_0x3C:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x78
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C52D0
	  lfs       f0, -0x18E0(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  bl        0x70A8
	  b         .loc_0xC8

	.loc_0x78:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x18E0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB0
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC8

	.loc_0xB0:
	  lwz       r12, 0x0(r3)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8468
 * Size:	000024
 */
void Game::BigTreasure::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x4A54
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D848C
 * Size:	000098
 */
void Game::BigTreasure::StatePreAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        0x406C
	  mr        r3, r31
	  li        r4, 0
	  bl        0x6100
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x5874
	  mr        r3, r31
	  bl        0x5A14
	  mr        r0, r3
	  mr        r3, r31
	  mr        r4, r0
	  li        r5, 0x1
	  bl        0x6A54
	  mr        r3, r31
	  bl        0x49A4
	  mr        r3, r31
	  bl        0x6C44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8524
 * Size:	00019C
 */
void Game::BigTreasure::StatePreAttack::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  bl        0x528C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x17C

	.loc_0x58:
	  lwz       r4, 0x408(r31)
	  mr        r3, r31
	  bl        0x52B0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x17C

	.loc_0x90:
	  lfs       f31, 0x2C0(r31)
	  mr        r3, r31
	  bl        0x5C2C
	  fcmpo     cr0, f31, f1
	  ble-      .loc_0xAC
	  mr        r3, r31
	  bl        -0x1D332C

	.loc_0xAC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x17C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xE8
	  mr        r3, r31
	  bl        0x6A68
	  b         .loc_0x17C

	.loc_0xE8:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x128
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x5FA4
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x18D0(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1C5520
	  lfs       f0, -0x18E0(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0x17C

	.loc_0x128:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x154
	  mr        r3, r31
	  bl        0x5A0C
	  mr        r4, r3
	  cmpwi     r4, 0x3
	  beq-      .loc_0x17C
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x1D366C
	  b         .loc_0x17C

	.loc_0x154:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x17C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x17C:
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
 * Address:	802D86C0
 * Size:	000024
 */
void Game::BigTreasure::StatePreAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x47FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D86E4
 * Size:	000078
 */
void Game::BigTreasure::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  li        r0, 0
	  stfs      f0, 0x2C0(r4)
	  stw       r0, 0x230(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        0x5824
	  mr        r0, r3
	  mr        r3, r31
	  mr        r4, r0
	  li        r5, 0x1
	  bl        0x681C
	  mr        r3, r31
	  bl        0x476C
	  mr        r3, r31
	  bl        0x6AD4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D875C
 * Size:	000148
 */
void Game::BigTreasure::StateAttack::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  bl        0x5054
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0x58:
	  lwz       r4, 0x408(r31)
	  mr        r3, r31
	  bl        0x5078
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0x90:
	  lfs       f31, 0x2C0(r31)
	  mr        r3, r31
	  bl        0x5A8C
	  fcmpo     cr0, f31, f1
	  ble-      .loc_0xAC
	  mr        r3, r31
	  bl        -0x1D3564

	.loc_0xAC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xE4
	  mr        r3, r31
	  bl        0x6830

	.loc_0xE4:
	  lwz       r3, 0x188(r31)
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x100
	  mr        r3, r31
	  bl        0x5468
	  b         .loc_0x128

	.loc_0x100:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
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
 * Address:	802D88A4
 * Size:	000040
 */
void Game::BigTreasure::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x4610
	  mr        r3, r31
	  bl        0x546C
	  mr        r3, r31
	  bl        0x6A6C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D88E4
 * Size:	000080
 */
void Game::BigTreasure::StatePutItem::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  li        r4, 0
	  stfs      f0, 0x2C0(r31)
	  bl        0x5CB0
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x56A4
	  mr        r0, r3
	  mr        r3, r31
	  mr        r4, r0
	  li        r5, 0x1
	  bl        0x660C
	  mr        r3, r31
	  bl        0x455C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8964
 * Size:	000128
 */
void Game::BigTreasure::StatePutItem::exec(Game::EnemyBase*)
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
	  bl        0x4E54
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0x50:
	  lwz       r4, 0x408(r31)
	  mr        r3, r31
	  bl        0x4E78
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0x88:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xB0
	  mr        r3, r31
	  bl        0x6660
	  b         .loc_0x110

	.loc_0xB0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x110
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C43CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x110

	.loc_0xF0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xB
	  li        r6, 0
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
 * Address:	802D8A8C
 * Size:	000024
 */
void Game::BigTreasure::StatePutItem::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x4430
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8AB0
 * Size:	000074
 */
void Game::BigTreasure::StateDropItem::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  li        r4, 0
	  stfs      f0, 0x2C0(r31)
	  bl        0x5AE4
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x18
	  li        r5, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x644C
	  mr        r3, r31
	  bl        0x439C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8B24
 * Size:	0000EC
 */
void Game::BigTreasure::StateDropItem::exec(Game::EnemyBase*)
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
	  beq-      .loc_0xD4
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x44
	  mr        r3, r31
	  bl        0x650C
	  b         .loc_0xD4

	.loc_0x44:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xD4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x18E0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x7C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C4550
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0xB4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD4:
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
 * Address:	802D8C10
 * Size:	000024
 */
void Game::BigTreasure::StateDropItem::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x42AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8C34
 * Size:	0000A8
 */
void Game::BigTreasure::StateWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C8(r4)
	  bl        -0x20F6B0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x18C0(r2)
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x18B8(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x18C8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x5934
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x1D
	  li        r5, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x629C
	  mr        r3, r31
	  bl        0x415C
	  mr        r3, r31
	  bl        0x3AE0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8CDC
 * Size:	000144
 */
void Game::BigTreasure::StateWalk::exec(Game::EnemyBase*)
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
	  bl        0x3AA8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x18E0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x5C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C46E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        0x40E4
	  b         .loc_0xA4

	.loc_0x84:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x18B8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA4
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        0x40C0

	.loc_0xA4:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x12C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xE0
	  mr        r3, r31
	  bl        0x62B8
	  b         .loc_0x12C

	.loc_0xE0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x12C
	  mr        r3, r31
	  bl        0x40BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x11C:
	  mr        r3, r31
	  li        r4, 0x1D
	  li        r5, 0
	  bl        0x614C

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
 * Address:	802D8E20
 * Size:	000004
 */
void Game::BigTreasure::StateWalk::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D8E24
 * Size:	0000A8
 */
void Game::BigTreasure::StateItemWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C8(r4)
	  bl        -0x20F8A0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x18C0(r2)
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x18B8(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x18C8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x5744
	  li        r0, 0
	  lfs       f0, -0x18E0(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x1C
	  li        r5, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x60AC
	  mr        r3, r31
	  bl        0x3F6C
	  mr        r3, r31
	  bl        0x38F0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D8ECC
 * Size:	0001EC
 */
void Game::BigTreasure::StateItemWalk::exec(Game::EnemyBase*)
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
	  bl        0x38B8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x18E0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x61D8
	  cmpwi     r3, 0x1C
	  bne-      .loc_0x9C
	  mr        r3, r31
	  bl        0x489C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  mr        r3, r31
	  li        r4, 0
	  bl        0x5670
	  mr        r3, r31
	  li        r4, 0x18
	  li        r5, 0x1
	  bl        0x5FF0
	  b         .loc_0x12C

	.loc_0x9C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C4918
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC0
	  mr        r3, r31
	  bl        0x35FC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0

	.loc_0xC0:
	  mr        r3, r31
	  bl        0x4848
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  li        r0, 0x6
	  stw       r0, 0x2C8(r31)
	  b         .loc_0xE4

	.loc_0xDC:
	  li        r0, 0x5
	  stw       r0, 0x2C8(r31)

	.loc_0xE4:
	  mr        r3, r31
	  bl        0x3E88
	  b         .loc_0x12C

	.loc_0xF0:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x18B8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x12C
	  mr        r3, r31
	  bl        0x4808
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  li        r0, 0x4
	  stw       r0, 0x2C8(r31)
	  b         .loc_0x124

	.loc_0x11C:
	  li        r0, 0x3
	  stw       r0, 0x2C8(r31)

	.loc_0x124:
	  mr        r3, r31
	  bl        0x3E48

	.loc_0x12C:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x3E74
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x170
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x170:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x198
	  mr        r3, r31
	  bl        0x6010
	  b         .loc_0x1D4

	.loc_0x198:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1D4
	  mr        r3, r31
	  bl        0x4768
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  mr        r3, r31
	  li        r4, 0x1C
	  li        r5, 0
	  bl        0x5EC8
	  b         .loc_0x1D4

	.loc_0x1C4:
	  mr        r3, r31
	  li        r4, 0x19
	  li        r5, 0
	  bl        0x5EB4

	.loc_0x1D4:
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
 * Address:	802D90B8
 * Size:	000004
 */
void Game::BigTreasure::StateItemWalk::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D90BC
 * Size:	000028
 */
void __sinit_BigTreasureState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68A8(r13)
	  stfsu     f0, 0x2F90(r3)
	  stfs      f0, -0x68A4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
