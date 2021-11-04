#include "types.h"

/*
 * --INFO--
 * Address:	80282614
 * Size:	00042C
 */
void Game::Mar::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  addi      r30, r4, 0x7800
	  li        r4, 0xC
	  bl        -0x151DD4
	  li        r3, 0x10
	  bl        -0x25E79C
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  subi      r5, r2, 0x2D20
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x70E4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x151D80
	  li        r3, 0x10
	  bl        -0x25E7EC
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2D18
	  subi      r0, r3, 0x7108
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x151DD4
	  li        r3, 0x10
	  bl        -0x25E840
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2D10
	  subi      r0, r3, 0x712C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x151E28
	  li        r3, 0x10
	  bl        -0x25E894
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2D08
	  subi      r0, r3, 0x7150
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x151E7C
	  li        r3, 0x10
	  bl        -0x25E8E8
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x10
	  subi      r0, r3, 0x7174
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x151ED0
	  li        r3, 0x10
	  bl        -0x25E93C
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2D00
	  subi      r0, r3, 0x7198
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x151F24
	  li        r3, 0x10
	  bl        -0x25E990
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2CF8
	  subi      r0, r3, 0x71BC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x151F78
	  li        r3, 0x10
	  bl        -0x25E9E4
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2CF0
	  subi      r0, r3, 0x71E0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x151FCC
	  li        r3, 0x10
	  bl        -0x25EA38
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2CE8
	  subi      r0, r3, 0x7204
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x152020
	  li        r3, 0x10
	  bl        -0x25EA8C
	  mr.       r4, r3
	  beq-      .loc_0x364
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2CE0
	  subi      r0, r3, 0x7228
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x364:
	  mr        r3, r31
	  bl        -0x152074
	  li        r3, 0x10
	  bl        -0x25EAE0
	  mr.       r4, r3
	  beq-      .loc_0x3B8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x1C
	  subi      r0, r3, 0x724C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B8:
	  mr        r3, r31
	  bl        -0x1520C8
	  li        r3, 0x10
	  bl        -0x25EB34
	  mr.       r4, r3
	  beq-      .loc_0x40C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  subi      r6, r5, 0x70C0
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x28
	  subi      r0, r3, 0x7270
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x40C:
	  mr        r3, r31
	  bl        -0x15211C
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
 * Address:	80282A40
 * Size:	0000AC
 */
void Game::Mar::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x17D360
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x17DAA8
	  b         .loc_0x84

	.loc_0x74:
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x17DABC

	.loc_0x84:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x1148
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80282AEC
 * Size:	000088
 */
void Game::Mar::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x17D898
	  lfs       f0, -0x2CD4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  mr        r3, r31
	  bl        -0x2B14

	.loc_0x30:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x74
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x1084
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x147A6C

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80282B74
 * Size:	000004
 */
void Game::Mar::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80282B78
 * Size:	000054
 */
void Game::Mar::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stfs      f0, 0x2C0(r4)
	  li        r4, 0x5
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  stw       r0, 0x230(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r3)
	  bl        -0x17DBB4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80282BCC
 * Size:	000138
 */
void Game::Mar::StateWait::exec(Game::EnemyBase*)
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
	  bl        -0x2F50
	  mr        r3, r31
	  bl        -0x2AB4
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        -0x2428

	.loc_0x3C:
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x3
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xA0

	.loc_0x6C:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA0:
	  mr        r3, r31
	  bl        -0x2C0C
	  mr.       r5, r3
	  blt-      .loc_0xD0
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0xD0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x120
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
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
 * Address:	80282D04
 * Size:	000004
 */
void Game::Mar::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80282D08
 * Size:	00004C
 */
void Game::Mar::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x2F68
	  lfs       f0, -0x2CD8(r2)
	  li        r0, 0
	  stfs      f0, 0x2C0(r31)
	  stw       r0, 0x230(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
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
 * Address:	80282D54
 * Size:	0001A0
 */
void Game::Mar::StateMove::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x30E0
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  mr        r3, r31
	  lfs       f5, 0x2D8(r31)
	  lfs       f1, 0x2D0(r31)
	  fsubs     f2, f0, f5
	  lfs       f0, 0x8(r1)
	  lfs       f4, 0x2D4(r31)
	  fsubs     f3, f0, f1
	  fmuls     f0, f2, f2
	  stfs      f1, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  fmadds    f31, f3, f3, f0
	  stfs      f5, 0x1C(r1)
	  bl        -0x2C8C
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x3
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xAC:
	  lfs       f0, -0x2CD0(r2)
	  fcmpo     cr0, f31, f0
	  blt-      .loc_0xC8
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x2CCC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE4

	.loc_0xC8:
	  lfs       f0, -0x2CD8(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x17DB90
	  b         .loc_0x100

	.loc_0xE4:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x16D874

	.loc_0x100:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        -0x2E08
	  mr.       r5, r3
	  blt-      .loc_0x144
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x180

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
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80282EF4
 * Size:	000004
 */
void Game::Mar::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80282EF8
 * Size:	000030
 */
void Game::Mar::StateChase::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x181548
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80282F28
 * Size:	000530
 */
void Game::Mar::StateChase::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stfd      f31, 0x120(r1)
	  psq_st    f31,0x128(r1),0,0
	  stfd      f30, 0x110(r1)
	  psq_st    f30,0x118(r1),0,0
	  stfd      f29, 0x100(r1)
	  psq_st    f29,0x108(r1),0,0
	  stfd      f28, 0xF0(r1)
	  psq_st    f28,0xF8(r1),0,0
	  stfd      f27, 0xE0(r1)
	  psq_st    f27,0xE8(r1),0,0
	  stfd      f26, 0xD0(r1)
	  psq_st    f26,0xD8(r1),0,0
	  stfd      f25, 0xC0(r1)
	  psq_st    f25,0xC8(r1),0,0
	  stfd      f24, 0xB0(r1)
	  psq_st    f24,0xB8(r1),0,0
	  stfd      f23, 0xA0(r1)
	  psq_st    f23,0xA8(r1),0,0
	  stfd      f22, 0x90(r1)
	  psq_st    f22,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x3300
	  mr        r3, r31
	  bl        -0x17BCA4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x428
	  lwz       r29, 0x230(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x3FC
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f26, 0x50(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x44(r1)
	  lfs       f6, 0x4C(r1)
	  fsubs     f3, f26, f5
	  lfs       f1, -0x2CD8(r2)
	  fsubs     f4, f25, f6
	  fmadds    f0, f3, f3, f1
	  fmuls     f2, f4, f4
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x10C
	  ble-      .loc_0x110
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x110

	.loc_0x10C:
	  fmr       f2, f1

	.loc_0x110:
	  lfs       f0, -0x2CD8(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x12C
	  lfs       f0, -0x2CC8(r2)
	  fdivs     f0, f0, f2
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0x12C:
	  lwz       r4, 0xC0(r31)
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  lfs       f0, 0x564(r4)
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fadds     f24, f5, f3
	  fadds     f23, f6, f4
	  fsubs     f1, f24, f26
	  fsubs     f2, f23, f25
	  bl        -0x24DF74
	  lwz       r12, 0x0(r29)
	  fmr       f29, f1
	  lwz       r5, 0xC0(r31)
	  mr        r4, r29
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x20
	  lfs       f30, 0x334(r5)
	  lfs       f31, 0x30C(r5)
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
	  bl        -0x24E000
	  bl        0x18EAC4
	  lwz       r12, 0x0(r31)
	  fmr       f22, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f22
	  bl        0x18EACC
	  fmuls     f31, f1, f31
	  lfs       f0, -0x2CC0(r2)
	  lfs       f1, -0x2CC4(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x248
	  lfs       f0, -0x2CD8(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x244
	  fmr       f31, f1
	  b         .loc_0x248

	.loc_0x244:
	  fneg      f31, f1

	.loc_0x248:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0x18EA48
	  fsubs     f3, f25, f23
	  stfs      f1, 0x1FC(r31)
	  fsubs     f4, f26, f24
	  lfs       f0, -0x2CBC(r2)
	  lfs       f2, 0x1FC(r31)
	  fmuls     f1, f3, f3
	  stfs      f2, 0x1A8(r31)
	  fmadds    f1, f4, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x35C
	  lfs       f0, -0x2CD8(r2)
	  lwz       r4, 0xC0(r31)
	  fcmpo     cr0, f29, f0
	  lfs       f3, 0x2E4(r4)
	  bge-      .loc_0x2CC
	  lfs       f0, -0x2CB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x2F0

	.loc_0x2CC:
	  lfs       f0, -0x2CB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x2F0:
	  lfs       f0, -0x2CD8(r2)
	  fmuls     f3, f3, f2
	  lfs       f1, 0x1D4(r31)
	  lfs       f2, 0x1D8(r31)
	  fcmpo     cr0, f29, f0
	  lfs       f0, 0x1DC(r31)
	  stfs      f1, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bge-      .loc_0x31C
	  fneg      f29, f29

	.loc_0x31C:
	  lfs       f0, -0x2CB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f1, 0x2E4(r4)
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  stfs      f3, 0x1D4(r31)
	  fmuls     f0, f1, f0
	  stfs      f2, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x36C

	.loc_0x35C:
	  lfs       f0, -0x2CD8(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x36C:
	  fsubs     f1, f25, f27
	  lwz       r3, 0xC0(r31)
	  fsubs     f2, f26, f28
	  lfs       f0, 0x35C(r3)
	  fmuls     f1, f1, f1
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3B4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3FC

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x2DF4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3FC
	  mr        r3, r31
	  bl        -0x31B0
	  cmplwi    r3, 0
	  beq-      .loc_0x3DC
	  stw       r3, 0x230(r31)
	  b         .loc_0x3FC

	.loc_0x3DC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3FC:
	  mr        r3, r31
	  bl        -0x2B4C
	  cmplwi    r3, 0
	  beq-      .loc_0x428
	  stw       r3, 0x230(r31)
	  mr        r3, r31
	  lfs       f0, -0x2CD8(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x17E0AC

	.loc_0x428:
	  mr        r3, r31
	  bl        -0x32F0
	  mr.       r5, r3
	  blt-      .loc_0x458
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4C4

	.loc_0x458:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4C4
	  lwz       r0, 0x230(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x4A4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4C4

	.loc_0x4A4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C4:
	  psq_l     f31,0x128(r1),0,0
	  lfd       f31, 0x120(r1)
	  psq_l     f30,0x118(r1),0,0
	  lfd       f30, 0x110(r1)
	  psq_l     f29,0x108(r1),0,0
	  lfd       f29, 0x100(r1)
	  psq_l     f28,0xF8(r1),0,0
	  lfd       f28, 0xF0(r1)
	  psq_l     f27,0xE8(r1),0,0
	  lfd       f27, 0xE0(r1)
	  psq_l     f26,0xD8(r1),0,0
	  lfd       f26, 0xD0(r1)
	  psq_l     f25,0xC8(r1),0,0
	  lfd       f25, 0xC0(r1)
	  psq_l     f24,0xB8(r1),0,0
	  lfd       f24, 0xB0(r1)
	  psq_l     f23,0xA8(r1),0,0
	  lfd       f23, 0xA0(r1)
	  psq_l     f22,0x98(r1),0,0
	  lfd       f22, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r0, 0x134(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283458
 * Size:	000024
 */
void Game::Mar::StateChase::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x181AEC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028347C
 * Size:	000124
 */
void Game::Mar::StateChaseInside::init(Game::EnemyBase*, Game::StateArg*)
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
	  mr        r31, r4
	  lwz       r4, 0x230(r4)
	  lfs       f31, 0x198(r31)
	  cmplwi    r4, 0
	  lfs       f0, 0x19C(r31)
	  lfs       f30, 0x1A0(r31)
	  beq-      .loc_0xE0
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f6, 0x8(r1)
	  lfs       f7, 0x10(r1)
	  fsubs     f3, f31, f6
	  lfs       f4, -0x2CD8(r2)
	  fsubs     f5, f30, f7
	  lfs       f2, 0xC(r1)
	  fmadds    f0, f3, f3, f4
	  fmuls     f1, f5, f5
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f4
	  ble-      .loc_0x8C
	  ble-      .loc_0x90
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x90

	.loc_0x8C:
	  fmr       f1, f4

	.loc_0x90:
	  lfs       f0, -0x2CD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB0
	  lfs       f0, -0x2CC8(r2)
	  fdivs     f0, f0, f1
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0

	.loc_0xB0:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x3D4(r3)
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0
	  fadds     f0, f6, f3
	  fadds     f2, f2, f4
	  fadds     f1, f7, f5
	  stfs      f0, 0x2D0(r31)
	  stfs      f2, 0x2D4(r31)
	  stfs      f1, 0x2D8(r31)
	  b         .loc_0xEC

	.loc_0xE0:
	  stfs      f31, 0x2D0(r31)
	  stfs      f0, 0x2D4(r31)
	  stfs      f30, 0x2D8(r31)

	.loc_0xEC:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x181BAC
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802835A0
 * Size:	00037C
 */
void Game::Mar::StateChaseInside::exec(Game::EnemyBase*)
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
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x395C
	  mr        r4, r31
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x4C(r1)
	  lfs       f29, 0x2D8(r31)
	  lfs       f28, 0x44(r1)
	  fsubs     f1, f31, f29
	  lfs       f30, 0x2D0(r31)
	  lfs       f0, -0x2CD0(r2)
	  fsubs     f2, f28, f30
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2C0

	.loc_0xC4:
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1E0
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x20
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f26, 0x334(r5)
	  lfs       f27, 0x30C(r5)
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
	  bl        -0x24E5E8
	  bl        0x18E4DC
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x18E4E4
	  fmuls     f27, f1, f27
	  lfs       f0, -0x2CC0(r2)
	  lfs       f1, -0x2CC4(r2)
	  fmuls     f0, f0, f26
	  fabs      f2, f27
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1B8
	  lfs       f0, -0x2CD8(r2)
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x1B4
	  fmr       f27, f1
	  b         .loc_0x1B8

	.loc_0x1B4:
	  fneg      f27, f1

	.loc_0x1B8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f27, f1
	  bl        0x18E460
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0x1E0:
	  fsubs     f1, f30, f28
	  lis       r3, 0x8051
	  fsubs     f2, f29, f31
	  subi      r3, r3, 0x2E20
	  bl        -0x24E688
	  lfs       f0, -0x2CD8(r2)
	  lwz       r4, 0xC0(r31)
	  fcmpo     cr0, f1, f0
	  lfs       f4, 0x2E4(r4)
	  bge-      .loc_0x234
	  lfs       f0, -0x2CB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f3, f0
	  b         .loc_0x258

	.loc_0x234:
	  lfs       f0, -0x2CB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0x258:
	  lfs       f0, -0x2CD8(r2)
	  fmuls     f4, f4, f3
	  lfs       f2, 0x1D4(r31)
	  lfs       f3, 0x1D8(r31)
	  fcmpo     cr0, f1, f0
	  lfs       f0, 0x1DC(r31)
	  stfs      f2, 0x38(r1)
	  stfs      f3, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bge-      .loc_0x284
	  fneg      f1, f1

	.loc_0x284:
	  lfs       f0, -0x2CB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f2, 0x2E4(r4)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  stfs      f4, 0x1D4(r31)
	  fmuls     f0, f2, f0
	  stfs      f3, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x2C0:
	  mr        r3, r31
	  bl        -0x3800
	  mr.       r5, r3
	  blt-      .loc_0x2F0
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x32C

	.loc_0x2F0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x32C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x32C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x32C:
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
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028391C
 * Size:	000024
 */
void Game::Mar::StateChaseInside::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x181FB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283940
 * Size:	000088
 */
void Game::Mar::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  rlwinm    r4,r4,0,26,24
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x181FBC
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x17E994
	  li        r0, 0
	  lfs       f0, -0x2CD8(r2)
	  stb       r0, 0x308(r31)
	  mr        r3, r31
	  stfs      f0, 0x304(r31)
	  bl        -0x1FA8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802839C8
 * Size:	0000E0
 */
void Game::Mar::StateAttack::exec(Game::EnemyBase*)
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
	  bl        -0x3D4C
	  lbz       r0, 0x308(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  mr        r3, r31
	  bl        -0x2B00

	.loc_0x38:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2CD8(r2)
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
	  b         .loc_0xC8

	.loc_0x70:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA0
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x308(r31)
	  bl        -0x2024
	  b         .loc_0xC8

	.loc_0xA0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
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
 * Address:	80283AA8
 * Size:	000054
 */
void Game::Mar::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x182150
	  li        r0, 0
	  lfs       f0, -0x2CD8(r2)
	  stb       r0, 0x308(r31)
	  mr        r3, r31
	  stfs      f0, 0x304(r31)
	  bl        -0x2018
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283AFC
 * Size:	000068
 */
void Game::Mar::StateFall::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x182170
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x17EB48
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283B64
 * Size:	0001A4
 */
void Game::Mar::StateFall::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r31
	  bl        -0x3F0C
	  b         .loc_0xE0

	.loc_0x4C:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r4, r31
	  lfs       f1, 0x18(r1)
	  addi      r3, r1, 0x8
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x20
	  lfs       f31, 0xC(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  lfs       f0, -0x2CB0(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0xD0
	  lfs       f0, -0x2CD8(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xD8

	.loc_0xD0:
	  mr        r3, r31
	  bl        -0x17E998

	.loc_0xD8:
	  mr        r3, r31
	  bl        -0x3C98

	.loc_0xE0:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x2CAC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xFC
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)

	.loc_0xFC:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C0(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2CD8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x148
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x184

	.loc_0x148:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x184
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x184:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283D08
 * Size:	000038
 */
void Game::Mar::StateFall::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x3D84
	  mr        r3, r31
	  bl        -0x1823AC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283D40
 * Size:	000070
 */
void Game::Mar::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1823B4
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x17ED8C
	  mr        r3, r31
	  bl        -0x2254
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283DB0
 * Size:	000080
 */
void Game::Mar::StateLand::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
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
	  li        r5, 0x8
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
 * Address:	80283E30
 * Size:	000024
 */
void Game::Mar::StateLand::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1824C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283E54
 * Size:	000068
 */
void Game::Mar::StateGround::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1824C8
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x17EEA0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283EBC
 * Size:	000114
 */
void Game::Mar::StateGround::exec(Game::EnemyBase*)
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
	  lwz       r0, 0x1F4(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x3C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x894(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x44

	.loc_0x3C:
	  mr        r3, r31
	  bl        -0x17EC5C

	.loc_0x44:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C0(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2CD8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xFC

	.loc_0x90:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xFC
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xB
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xFC

	.loc_0xDC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
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
 * Address:	80283FD0
 * Size:	000024
 */
void Game::Mar::StateGround::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x182664
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80283FF4
 * Size:	000064
 */
void Game::Mar::StateTakeOff::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x182664
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x17F03C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80284058
 * Size:	0000EC
 */
void Game::Mar::StateTakeOff::exec(Game::EnemyBase*)
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
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        -0x43F8
	  mr        r3, r31
	  bl        -0x40CC

	.loc_0x48:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2CD8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x80:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xAC
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xD4

	.loc_0xAC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xD4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
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
 * Address:	80284144
 * Size:	000038
 */
void Game::Mar::StateTakeOff::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x41CC
	  mr        r3, r31
	  bl        -0x1827E8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028417C
 * Size:	000064
 */
void Game::Mar::StateFlyFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1827EC
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x17F1C4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802841E0
 * Size:	0000E4
 */
void Game::Mar::StateFlyFlick::exec(Game::EnemyBase*)
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
	  bl        -0x4564
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2CD8(r2)
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
	  b         .loc_0xCC

	.loc_0x5C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA4
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2CA8(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x171158
	  lfs       f0, -0x2CD8(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xCC

	.loc_0xA4:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xCC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
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
 * Address:	802842C4
 * Size:	000024
 */
void Game::Mar::StateFlyFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x182958
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802842E8
 * Size:	000064
 */
void Game::Mar::StateGroundFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x182958
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x17F330
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028434C
 * Size:	000100
 */
void Game::Mar::StateGroundFlick::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2CD8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xEC

	.loc_0x44:
	  lwz       r5, 0x188(r31)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xCC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2CA8(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x170C38
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2CA8(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x170F14
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2CA8(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1712EC
	  lfs       f0, -0x2CD8(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xEC

	.loc_0xCC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xEC
	  lwz       r12, 0x0(r3)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028444C
 * Size:	000024
 */
void Game::Mar::StateGroundFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x182AE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
