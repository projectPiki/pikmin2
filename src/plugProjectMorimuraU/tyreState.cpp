#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	803AB864
 * Size:	0000C0
 */
void Tyre::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x27B018
	  li        r3, 0x10
	  bl        -0x3879E0
	  mr.       r4, r3
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        .loc_0xC0
	  mr        r4, r3

	.loc_0x38:
	  mr        r3, r31
	  bl        -0x27AF98
	  li        r3, 0x10
	  bl        -0x387A04
	  mr.       r4, r3
	  beq-      .loc_0x5C
	  li        r4, 0x1
	  bl        0x1D0
	  mr        r4, r3

	.loc_0x5C:
	  mr        r3, r31
	  bl        -0x27AFBC
	  li        r3, 0x14
	  bl        -0x387A28
	  mr.       r4, r3
	  beq-      .loc_0x80
	  li        r4, 0x2
	  bl        0x2E4
	  mr        r4, r3

	.loc_0x80:
	  mr        r3, r31
	  bl        -0x27AFE0
	  li        r3, 0x10
	  bl        -0x387A4C
	  mr.       r4, r3
	  beq-      .loc_0xA4
	  li        r4, 0x3
	  bl        0x424
	  mr        r4, r3

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x27B004
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xC0:
	*/
}

/*
 * --INFO--
 * Address:	803AB924
 * Size:	00003C
 */
Tyre::StateMove::StateMove(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  addi      r6, r6, 0x6268
	  addi      r5, r5, 0x6244
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x1208
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803AB960
 * Size:	000048
 */
void Tyre::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  mr        r3, r31
	  bl        -0x2A697C
	  mr        r3, r31
	  bl        0x2334
	  mr        r3, r31
	  bl        0x2B00
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803AB9A8
 * Size:	0000BC
 */
void Tyre::StateMove::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0xC0(r4)
	  lfs       f1, 0x30C(r4)
	  lfs       f0, 0x81C(r5)
	  lbz       r0, 0x832(r5)
	  fmuls     f1, f1, f0
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lfs       f0, 0x2C4(r4)
	  lfs       f2, 0x1210(r2)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x1214(r2)
	  fabs      f1, f1
	  frsp      f1, f1
	  fmuls     f2, f2, f1
	  stfs      f2, 0x2C4(r4)
	  lfs       f1, 0x2C0(r4)
	  fadds     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x5C
	  fsubs     f2, f2, f0

	.loc_0x5C:
	  stfs      f2, 0x2C0(r4)
	  b         .loc_0x74

	.loc_0x64:
	  lfs       f0, -0x63C8(r2)
	  lwz       r5, 0x184(r4)
	  fmuls     f1, f1, f0
	  stfs      f1, 0x4(r5)

	.loc_0x74:
	  lfs       f1, 0x200(r4)
	  lfs       f0, 0x1218(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xAC
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xAC
	  lwz       r12, 0x0(r3)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABA64
 * Size:	000024
 */
void Tyre::StateMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x2A80
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABA88
 * Size:	00003C
 */
Tyre::StateLand::StateLand(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  addi      r6, r6, 0x6268
	  addi      r5, r5, 0x6220
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x121C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABAC4
 * Size:	000048
 */
void Tyre::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  mr        r3, r31
	  bl        -0x2A6AE0
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x1699F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABB0C
 * Size:	0000B4
 */
void Tyre::StateLand::exec(Game::EnemyBase*)
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
	  lwz       r0, 0xC8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  mr        r3, r31
	  bl        0x228C
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x29D0
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  li        r5, 0
	  bl        -0x169A84
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
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
 * Address:	803ABBC0
 * Size:	00003C
 */
Tyre::StateFreeze::StateFreeze(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  addi      r6, r6, 0x6268
	  addi      r5, r5, 0x61FC
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x1224
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABBFC
 * Size:	000074
 */
void Tyre::StateFreeze::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x2A493C
	  li        r0, 0
	  lfs       f0, 0x1218(r2)
	  stw       r0, 0x10(r30)
	  mr        r3, r31
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  bl        0x1F80
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
 * Address:	803ABC70
 * Size:	0000B4
 */
void Tyre::StateFreeze::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x1218(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stfs      f1, 0x1C8(r4)
	  stfs      f1, 0x1CC(r4)
	  stfs      f1, 0x1D0(r4)
	  stfs      f1, 0x1D4(r4)
	  stfs      f1, 0x1D8(r4)
	  stfs      f1, 0x1DC(r4)
	  lwz       r5, 0x10(r3)
	  addi      r0, r5, 0x1
	  stw       r0, 0x10(r3)
	  lfs       f0, 0x200(r4)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r3, 0x2BC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lwz       r0, 0x1E4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x94
	  mr        r3, r31
	  bl        -0x2A4590
	  b         .loc_0xA0

	.loc_0x94:
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABD24
 * Size:	00003C
 */
Tyre::StateDead::StateDead(int)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  addi      r6, r6, 0x6268
	  addi      r5, r5, 0x61D8
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x122C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABD60
 * Size:	000048
 */
void Tyre::StateDead::init(Game::EnemyBase*, Game::StateArg*)
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
	  bl        -0x2A6D7C
	  mr        r3, r31
	  bl        -0x2A6668
	  mr        r3, r31
	  bl        0x2600
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ABDA8
 * Size:	000044
 */
void Tyre::StateDead::exec(Game::EnemyBase*)
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
	  bl        -0x270CE8

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
} // namespace Game
