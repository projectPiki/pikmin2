#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802EFA24
 * Size:	000330
 */
void Sokkuri::FSM::init(Game::EnemyBase*)
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
	  subi      r30, r4, 0x3218
	  li        r4, 0x9
	  bl        -0x1BF1E4
	  li        r3, 0x10
	  bl        -0x2CBBAC
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  subi      r5, r2, 0x12D0
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x4DE0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x1BF190
	  li        r3, 0x10
	  bl        -0x2CBBFC
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x12C8
	  addi      r0, r3, 0x4DBC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x1BF1E4
	  li        r3, 0x10
	  bl        -0x2CBC50
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x12C0
	  addi      r0, r3, 0x4D98
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x1BF238
	  li        r3, 0x10
	  bl        -0x2CBCA4
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x12B8
	  addi      r0, r3, 0x4D74
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x1BF28C
	  li        r3, 0x10
	  bl        -0x2CBCF8
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x14
	  addi      r0, r3, 0x4D50
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x1BF2E0
	  li        r3, 0x10
	  bl        -0x2CBD4C
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x12B0
	  addi      r0, r3, 0x4D2C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x1BF334
	  li        r3, 0x10
	  bl        -0x2CBDA0
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x20
	  addi      r0, r3, 0x4D08
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x1BF388
	  li        r3, 0x10
	  bl        -0x2CBDF4
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x2C
	  addi      r0, r3, 0x4CE4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x1BF3DC
	  li        r3, 0x10
	  bl        -0x2CBE48
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x4E04
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x12A8
	  addi      r0, r3, 0x4CC0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x1BF430
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
 * Address:	802EFD54
 * Size:	000064
 */
void Sokkuri::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1EA64C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x12A0(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EE414
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x1EAD9C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EFDB8
 * Size:	000060
 */
void Sokkuri::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x3C
	  lfs       f1, -0x129C(r2)
	  mr        r3, r4
	  lfs       f2, -0x1298(r2)
	  bl        0x2078
	  b         .loc_0x50

	.loc_0x3C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x50
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x1B4D14

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EFE18
 * Size:	000004
 */
void Sokkuri::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802EFE1C
 * Size:	000070
 */
void Sokkuri::StatePress::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x200(r4)
	  bl        -0x1EA71C
	  lfs       f0, -0x12A0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EE4D8
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x1EAE60
	  lfs       f1, -0x1294(r2)
	  mr        r3, r31
	  lfs       f2, -0x12A0(r2)
	  bl        0x1FF0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EFE8C
 * Size:	000060
 */
void Sokkuri::StatePress::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x3C
	  lfs       f1, -0x12A0(r2)
	  mr        r3, r4
	  lfs       f2, -0x1298(r2)
	  bl        0x1FA4
	  b         .loc_0x50

	.loc_0x3C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x50
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x1B4DE8

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EFEEC
 * Size:	000004
 */
void Sokkuri::StatePress::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802EFEF0
 * Size:	0000C4
 */
void Sokkuri::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x1EA8
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  rlwinm    r4,r4,0,21,19
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  oris      r4, r4, 0x40
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C0(r31)
	  bl        -0x1EE538
	  mr        r3, r31
	  bl        -0x1E87CC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x12A0(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,17,15
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EAF70
	  mr        r3, r31
	  bl        -0x1E8C9C
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x254(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EFFB4
 * Size:	000064
 */
void Sokkuri::StateStay::exec(Game::EnemyBase*)
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
	  bl        0x197C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
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
 * Address:	802F0018
 * Size:	00007C
 */
void Sokkuri::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x800
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  rlwinm    r4,r4,0,10,8
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C0(r31)
	  bl        -0x1E88BC
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x250(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F0094
 * Size:	000078
 */
void Sokkuri::StateAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x1D04
	  lfs       f0, -0x12A0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EE708
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1EB0E0
	  lfs       f1, -0x1290(r2)
	  mr        r3, r31
	  lfs       f2, -0x12A0(r2)
	  bl        0x1D70
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F010C
 * Size:	0000D8
 */
void Sokkuri::StateAppear::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC0

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1DBB08
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC0

	.loc_0x84:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC0:
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
 * Address:	802F01E4
 * Size:	000004
 */
void Sokkuri::StateAppear::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802F01E8
 * Size:	000070
 */
void Sokkuri::StateDisappear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x1BB0
	  lfs       f0, -0x12A0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EE8AC
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x1EB234
	  mr        r3, r31
	  bl        0x1CE8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F0258
 * Size:	00009C
 */
void Sokkuri::StateDisappear::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, -0x12A0(r2)
	  mr        r6, r4
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x200(r4)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8C

	.loc_0x40:
	  lwz       r5, 0x188(r6)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6C
	  lfs       f1, -0x1290(r2)
	  mr        r3, r6
	  bl        0x1BA8
	  b         .loc_0x8C

	.loc_0x6C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x8C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F02F4
 * Size:	000004
 */
void Sokkuri::StateDisappear::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802F02F8
 * Size:	000068
 */
void Sokkuri::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x1AA0
	  mr        r3, r31
	  bl        0x1AC4
	  lfs       f0, -0x12A0(r2)
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EB344
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F0360
 * Size:	000154
 */
void Sokkuri::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1DBD5C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0x84:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x8E4(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xEC
	  mr        r3, r31
	  bl        0x15D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB174
	  b         .loc_0xEC

	.loc_0xBC:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB194
	  b         .loc_0xEC

	.loc_0xDC:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB1A8

	.loc_0xEC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x13C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
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
 * Address:	802F04B4
 * Size:	000004
 */
void Sokkuri::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802F04B8
 * Size:	000060
 */
void Sokkuri::StateMoveGround::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x1594
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1EB4EC
	  lfs       f1, -0x128C(r2)
	  mr        r3, r31
	  lfs       f2, -0x12A0(r2)
	  bl        0x1964
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F0518
 * Size:	000234
 */
void Sokkuri::StateMoveGround::exec(Game::EnemyBase*)
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
	  stw       r29, 0x24(r1)
	  bl        0x1718
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x12A0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x60
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x218

	.loc_0x60:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1DBF28
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x98
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x218

	.loc_0x98:
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x81C(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x168
	  mr        r3, r31
	  bl        0x1404
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB340
	  b         .loc_0x1C8

	.loc_0xD0:
	  lwz       r29, 0xC0(r31)
	  bl        -0x22704C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x1280(r2)
	  stw       r0, 0x18(r1)
	  lfs       f2, -0x1288(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, -0x1284(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x8BC(r29)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x124
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB394
	  b         .loc_0x1C8

	.loc_0x124:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  lfs       f0, -0x12A0(r2)
	  li        r0, 0x7
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB3C4
	  b         .loc_0x1C8

	.loc_0x154:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB3D8
	  b         .loc_0x1C8

	.loc_0x168:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  lfs       f0, -0x12A0(r2)
	  li        r0, 0x7
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB408
	  b         .loc_0x1C8

	.loc_0x198:
	  lfs       f1, 0x2D4(r31)
	  mr        r3, r31
	  lfs       f2, 0x2D8(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x2D0(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lfs       f1, 0x2CC(r31)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1DB100

	.loc_0x1C8:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x218
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x218
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x218:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F074C
 * Size:	000004
 */
void Sokkuri::StateMoveGround::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802F0750
 * Size:	000050
 */
void Sokkuri::StateMoveWater::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x12FC
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x1EB784
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F07A0
 * Size:	0001D8
 */
void Sokkuri::StateMoveWater::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x1494
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x12A0(r2)
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
	  b         .loc_0x1C0

	.loc_0x5C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1DC1AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x94:
	  mr        r3, r31
	  bl        0x1194
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB5B0
	  b         .loc_0x170

	.loc_0xB8:
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x81C(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x110
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xEC
	  lfs       f0, -0x12A0(r2)
	  mr        r3, r31
	  stfs      f0, 0x2C4(r31)
	  bl        0x11F0
	  b         .loc_0x170

	.loc_0xEC:
	  lfs       f0, -0x12A0(r2)
	  li        r0, 0x6
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB608
	  b         .loc_0x170

	.loc_0x110:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x140
	  lfs       f0, -0x12A0(r2)
	  li        r0, 0x6
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB638
	  b         .loc_0x170

	.loc_0x140:
	  lfs       f1, 0x2D4(r31)
	  mr        r3, r31
	  lfs       f2, 0x2D8(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x2D0(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lfs       f1, 0x2CC(r31)
	  lfs       f2, 0x95C(r5)
	  lfs       f3, 0x984(r5)
	  bl        -0x1DB330

	.loc_0x170:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1C0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F0978
 * Size:	000004
 */
void Sokkuri::StateMoveWater::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802F097C
 * Size:	00006C
 */
void Sokkuri::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2C8(r4)
	  bl        0x141C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x12A0(r2)
	  li        r4, 0x7
	  rlwinm    r0,r0,0,11,9
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1EB9CC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F09E8
 * Size:	000198
 */
void Sokkuri::StateFlick::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x12A0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x180

	.loc_0x4C:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB7AC
	  b         .loc_0x7C

	.loc_0x6C:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x1EB7C0

	.loc_0x7C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xCC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f1, -0x1278(r2)
	  oris      r0, r0, 0x20
	  lfs       f2, -0x1298(r2)
	  stw       r0, 0x1E0(r31)
	  bl        0x13B8
	  b         .loc_0x180

	.loc_0xCC:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x140
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1274(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1DD348
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1274(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1DD624
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1274(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1DD9FC
	  lfs       f0, -0x12A0(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0x180

	.loc_0x140:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x158
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x180

	.loc_0x158:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
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
 * Address:	802F0B80
 * Size:	000010
 */
void Sokkuri::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}
} // namespace Game
