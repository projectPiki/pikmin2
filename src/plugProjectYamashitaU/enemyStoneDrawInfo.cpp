#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80128280
 * Size:	0002D4
 */
void EnemyStone::StateMachine::init(Game::EnemyStone::DrawInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x9
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1714
	  li        r3, 0x10
	  bl        -0x1043FC
	  mr.       r4, r3
	  beq-      .loc_0x50
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x2248
	  li        r5, 0
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x226C
	  stw       r5, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r0, 0x0(r4)

	.loc_0x50:
	  mr        r3, r31
	  bl        0x17D8
	  li        r3, 0x14
	  bl        -0x104438
	  mr.       r4, r3
	  beq-      .loc_0xA0
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r0, r3, 0x2290
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)
	  stb       r6, 0x10(r4)

	.loc_0xA0:
	  mr        r3, r31
	  bl        0x1788
	  li        r3, 0x10
	  bl        -0x104488
	  mr.       r4, r3
	  beq-      .loc_0xEC
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r0, r3, 0x22B4
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xEC:
	  mr        r3, r31
	  bl        0x173C
	  li        r3, 0x10
	  bl        -0x1044D4
	  mr.       r4, r3
	  beq-      .loc_0x138
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r0, r3, 0x22D8
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x138:
	  mr        r3, r31
	  bl        0x16F0
	  li        r3, 0x10
	  bl        -0x104520
	  mr.       r4, r3
	  beq-      .loc_0x178
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x2248
	  li        r6, 0x4
	  stw       r0, 0x0(r4)
	  li        r5, 0
	  subi      r0, r3, 0x226C
	  stw       r6, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r0, 0x0(r4)

	.loc_0x178:
	  mr        r3, r31
	  bl        0x16B0
	  li        r3, 0x18
	  bl        -0x104560
	  mr.       r4, r3
	  beq-      .loc_0x1D4
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r3, r3, 0x22FC
	  li        r0, -0x1
	  lfs       f0, -0x63A0(r2)
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0x10(r4)
	  stfs      f0, 0x14(r4)

	.loc_0x1D4:
	  mr        r3, r31
	  bl        0x1654
	  li        r3, 0x10
	  bl        -0x1045BC
	  mr.       r4, r3
	  beq-      .loc_0x220
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r0, r3, 0x2320
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x220:
	  mr        r3, r31
	  bl        0x1608
	  li        r3, 0x10
	  bl        -0x104608
	  mr.       r4, r3
	  beq-      .loc_0x26C
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r0, r3, 0x2344
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x26C:
	  mr        r3, r31
	  bl        0x15BC
	  li        r3, 0x10
	  bl        -0x104654
	  mr.       r4, r3
	  beq-      .loc_0x2B8
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x2248
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r6, 0
	  subi      r5, r5, 0x226C
	  stw       r0, 0x4(r4)
	  subi      r0, r3, 0x2368
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B8:
	  mr        r3, r31
	  bl        0x1570
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80128554
 * Size:	000038
 */
void EnemyStone::StateMachine::makeMatrix(Game::EnemyStone::DrawInfo*, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x34(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012858C
 * Size:	000024
 */
void EnemyStone::FSMState::makeMatrix(Game::EnemyStone::DrawInfo*, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r5
	  stw       r0, 0x14(r1)
	  bl        -0x3E2FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801285B0
 * Size:	000014
 */
void EnemyStone::FSMStateExpansion::init(Game::EnemyStone::DrawInfo*,
                                         Game::StateArg*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x639C(r2)
	  li        r0, 0
	  stfs      f0, 0x3C(r4)
	  stb       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801285C4
 * Size:	0001BC
 */
void EnemyStone::FSMStateExpansion::exec(Game::EnemyStone::DrawInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r4)
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x170
	  lfs       f1, 0x38(r31)
	  lfs       f0, -0x6398(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x170
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x10(r30)
	  addi      r4, r1, 0x30
	  addi      r5, r1, 0x8
	  bl        0x10A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x170
	  lwz       r8, -0x6DD0(r13)
	  lis       r4, 0x804B
	  lwz       r7, 0x30(r1)
	  lis       r3, 0x804B
	  lwz       r6, 0x34(r1)
	  subi      r4, r4, 0x5814
	  lwz       r5, 0x38(r1)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0x1F8(r8)
	  lfs       f1, 0x8(r1)
	  stw       r7, 0xC(r1)
	  fmuls     f3, f1, f0
	  stw       r6, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r4, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stfs      f3, 0x4C(r1)
	  lwz       r3, 0x40(r31)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x130
	  bge-      .loc_0x170
	  cmpwi     r0, 0
	  bge-      .loc_0xEC
	  b         .loc_0x170

	.loc_0xEC:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AC
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x7950
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x3C
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  bl        0x29F650
	  b         .loc_0x170

	.loc_0x130:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AE
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x7978
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x3C
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0x29F7C4

	.loc_0x170:
	  lfs       f0, 0x38(r31)
	  lfs       f1, 0x3C(r31)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1A4
	  stfs      f1, 0x38(r31)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x2
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1A4:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80128780
 * Size:	000030
 */
void FSMState<Game::EnemyStone::DrawInfo>::transit(Game::EnemyStone::DrawInfo*,
                                                   int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801287B0
 * Size:	000004
 */
void EnemyStone::FSMStateExpansion::cleanup(Game::EnemyStone::DrawInfo*) { }

/*
 * --INFO--
 * Address:	801287B4
 * Size:	000140
 */
void EnemyStone::FSMStateExpansion::makeMatrix(Game::EnemyStone::DrawInfo*,
                                               Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lfs       f2, 0x38(r4)
	  mr        r31, r5
	  lfs       f1, 0x3C(r4)
	  lfs       f0, -0x6398(r2)
	  fdivs     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x3C
	  fmr       f2, f0
	  b         .loc_0x4C

	.loc_0x3C:
	  lfs       f0, -0x6394(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x4C
	  fmr       f2, f0

	.loc_0x4C:
	  lfs       f1, -0x6388(r2)
	  lfs       f0, -0x6398(r2)
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x8C
	  lfs       f0, -0x6390(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f31, f0
	  b         .loc_0xB0

	.loc_0x8C:
	  lfs       f0, -0x638C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f31, r3, r0

	.loc_0xB0:
	  mr        r3, r31
	  bl        -0x3E5C8
	  lfs       f0, 0x0(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x10(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x10(r31)
	  lfs       f0, 0x14(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x14(r31)
	  lfs       f0, 0x18(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x20(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x24(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x24(r31)
	  lfs       f0, 0x28(r31)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x28(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801288F4
 * Size:	0000A0
 */
void EnemyStone::FSMStateExpansionFull::makeMatrix(Game::EnemyStone::DrawInfo*,
                                                   Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  bl        -0x3E66C
	  lfs       f0, 0x0(r31)
	  lfs       f1, -0x6394(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x10(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r31)
	  lfs       f0, 0x14(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r31)
	  lfs       f0, 0x18(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x20(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x24(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x24(r31)
	  lfs       f0, 0x28(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80128994
 * Size:	000014
 */
void EnemyStone::FSMStateFit::init(Game::EnemyStone::DrawInfo*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6398(r2)
	  lfs       f0, -0x6384(r2)
	  stfs      f1, 0x38(r4)
	  stfs      f0, 0x3C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801289A8
 * Size:	00005C
 */
void EnemyStone::FSMStateFit::exec(Game::EnemyStone::DrawInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r4)
	  lfs       f0, 0x38(r4)
	  lfs       f1, 0x3C(r4)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x4C
	  stfs      f1, 0x38(r4)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80128A04
 * Size:	000004
 */
void EnemyStone::FSMStateFit::cleanup(Game::EnemyStone::DrawInfo*) { }

/*
 * --INFO--
 * Address:	80128A08
 * Size:	0000DC
 */
void EnemyStone::FSMStateFit::makeMatrix(Game::EnemyStone::DrawInfo*, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x6398(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  lfs       f2, 0x38(r4)
	  lfs       f1, 0x3C(r4)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x34
	  fmr       f1, f0
	  b         .loc_0x44

	.loc_0x34:
	  lfs       f0, -0x6394(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x44
	  fmr       f1, f0

	.loc_0x44:
	  lfs       f0, -0x6388(r2)
	  fmuls     f1, f0, f1
	  bl        -0x597A0
	  mr        r3, r31
	  bl        -0x3E7BC
	  lfs       f0, 0x0(r31)
	  lfs       f1, -0x6394(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x10(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r31)
	  lfs       f0, 0x14(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r31)
	  lfs       f0, 0x18(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x20(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x24(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x24(r31)
	  lfs       f0, 0x28(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80128AE4
 * Size:	000024
 */
void EnemyStone::FSMStateShake::init(Game::EnemyStone::DrawInfo*,
                                     Game::StateArg*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6380(r2)
	  li        r0, 0
	  lfs       f1, -0x637C(r2)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x14(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x3C(r4)
	  stw       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80128B08
 * Size:	000278
 */
void EnemyStone::FSMStateShake::exec(Game::EnemyStone::DrawInfo*)
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
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r4)
	  lfs       f0, 0x38(r4)
	  lfs       f1, 0x3C(r4)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x11C
	  stfs      f1, 0x38(r31)
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xBC
	  bge-      .loc_0x64
	  cmpwi     r0, 0
	  beq-      .loc_0x74
	  bge-      .loc_0x98
	  b         .loc_0x11C

	.loc_0x64:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x104
	  bge-      .loc_0x11C
	  b         .loc_0xE0

	.loc_0x74:
	  lfs       f0, -0x6398(r2)
	  li        r0, 0x1
	  lfs       f1, -0x6378(r2)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x14(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x3C(r31)
	  stw       r0, 0x10(r30)
	  b         .loc_0x11C

	.loc_0x98:
	  lfs       f0, -0x6398(r2)
	  li        r0, 0x2
	  lfs       f1, -0x6378(r2)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x14(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x3C(r31)
	  stw       r0, 0x10(r30)
	  b         .loc_0x11C

	.loc_0xBC:
	  lfs       f0, -0x6398(r2)
	  li        r0, 0x3
	  lfs       f1, -0x6374(r2)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x14(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x3C(r31)
	  stw       r0, 0x10(r30)
	  b         .loc_0x11C

	.loc_0xE0:
	  lfs       f0, -0x6398(r2)
	  li        r0, 0x4
	  lfs       f1, -0x6370(r2)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x14(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x3C(r31)
	  stw       r0, 0x10(r30)
	  b         .loc_0x11C

	.loc_0x104:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lfs       f1, 0x38(r31)
	  lfs       f0, 0x3C(r31)
	  lwz       r0, 0x10(r30)
	  fdivs     f1, f1, f0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x150
	  bge-      .loc_0x144
	  cmpwi     r0, 0
	  beq-      .loc_0x150
	  b         .loc_0x260

	.loc_0x144:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1D4
	  b         .loc_0x260

	.loc_0x150:
	  lfs       f0, -0x63A0(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  rlwinm    r0,r3,30,0,1
	  rlwinm    r3,r3,1,31,31
	  sub       r0, r0, r3
	  rlwinm    r0,r0,2,0,31
	  add.      r0, r0, r3
	  bne-      .loc_0x260
	  lwz       r3, -0x6DD0(r13)
	  lwz       r31, 0x28C(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x190
	  addi      r31, r31, 0x30

	.loc_0x190:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x4100
	  li        r4, 0x237
	  subi      r5, r5, 0x40F4
	  crclr     6, 0x6
	  bl        -0xFE67C

	.loc_0x1B8:
	  lwz       r3, -0x6E38(r13)
	  mr        r4, r31
	  li        r5, 0x58B1
	  li        r6, 0
	  lwz       r3, 0x10(r3)
	  bl        0x216BE4
	  b         .loc_0x260

	.loc_0x1D4:
	  lfs       f0, -0x636C(r2)
	  lis       r3, 0x6666
	  addi      r0, r3, 0x6667
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mulhw     r0, r0, r4
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0xA
	  sub.      r0, r4, r0
	  bne-      .loc_0x260
	  lwz       r3, -0x6DD0(r13)
	  lwz       r31, 0x28C(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x220
	  addi      r31, r31, 0x30

	.loc_0x220:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x248
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x4100
	  li        r4, 0x237
	  subi      r5, r5, 0x40F4
	  crclr     6, 0x6
	  bl        -0xFE70C

	.loc_0x248:
	  lwz       r3, -0x6E38(r13)
	  mr        r4, r31
	  li        r5, 0x58B2
	  li        r6, 0
	  lwz       r3, 0x10(r3)
	  bl        0x216B54

	.loc_0x260:
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
 * Address:	80128D80
 * Size:	000004
 */
void EnemyStone::FSMStateShake::cleanup(Game::EnemyStone::DrawInfo*) { }

/*
 * --INFO--
 * Address:	80128D84
 * Size:	0002E4
 */
void EnemyStone::FSMStateShake::makeMatrix(Game::EnemyStone::DrawInfo*,
                                           Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  lfs       f2, 0x38(r4)
	  mr        r31, r5
	  lfs       f0, 0x3C(r4)
	  lfs       f7, -0x6398(r2)
	  fdivs     f0, f2, f0
	  fcmpo     cr0, f0, f7
	  bge-      .loc_0x3C
	  fmr       f0, f7
	  b         .loc_0x4C

	.loc_0x3C:
	  lfs       f2, -0x6394(r2)
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x4C
	  fmr       f0, f2

	.loc_0x4C:
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xDC
	  bge-      .loc_0x6C
	  cmpwi     r0, 0
	  beq-      .loc_0x7C
	  bge-      .loc_0x170
	  b         .loc_0x1E8

	.loc_0x6C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x180
	  bge-      .loc_0x1E8
	  b         .loc_0x170

	.loc_0x7C:
	  lfs       f2, -0x6368(r2)
	  lfs       f1, -0x6398(r2)
	  fmuls     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x94
	  fneg      f2, f2

	.loc_0x94:
	  lfs       f1, -0x638C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f4, -0x6394(r2)
	  fmuls     f3, f2, f1
	  lfs       f5, -0x639C(r2)
	  lfs       f2, -0x6360(r2)
	  lfs       f1, -0x6364(r2)
	  fctiwz    f3, f3
	  stfd      f3, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f3, 0x4(r3)
	  fsubs     f3, f4, f3
	  fmuls     f7, f5, f3
	  fmuls     f31, f2, f7
	  b         .loc_0x1E8

	.loc_0xDC:
	  lfs       f1, -0x6368(r2)
	  lfs       f3, -0x635C(r2)
	  fmuls     f2, f1, f0
	  lfs       f1, -0x6398(r2)
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x124
	  lfs       f1, -0x6390(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0
	  fneg      f3, f1
	  b         .loc_0x148

	.loc_0x124:
	  lfs       f1, -0x638C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0x148:
	  lfs       f2, -0x639C(r2)
	  lfs       f1, -0x6398(r2)
	  fmuls     f7, f2, f3
	  fcmpo     cr0, f7, f1
	  bge-      .loc_0x160
	  fmr       f7, f1

	.loc_0x160:
	  lfs       f2, -0x6360(r2)
	  lfs       f1, -0x6358(r2)
	  fmuls     f31, f2, f7
	  b         .loc_0x1E8

	.loc_0x170:
	  lfs       f7, -0x6398(r2)
	  fmr       f1, f7
	  fmr       f31, f7
	  b         .loc_0x1E8

	.loc_0x180:
	  lfs       f1, -0x6350(r2)
	  lfs       f3, -0x6354(r2)
	  fmuls     f2, f1, f0
	  lfs       f1, -0x6398(r2)
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f3, f1
	  bge-      .loc_0x1A0
	  fneg      f3, f3

	.loc_0x1A0:
	  lfs       f2, -0x638C(r2)
	  lis       r3, 0x8050
	  lfs       f1, -0x6344(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f2, f3, f2
	  lfs       f3, -0x6394(r2)
	  fmuls     f31, f1, f0
	  lfs       f4, -0x634C(r2)
	  lfs       f1, -0x6348(r2)
	  fctiwz    f2, f2
	  stfd      f2, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f2, 0x4(r3)
	  fsubs     f2, f3, f2
	  fmuls     f2, f4, f2
	  fmuls     f7, f0, f2

	.loc_0x1E8:
	  fmuls     f6, f1, f0
	  lfs       f2, -0x6398(r2)
	  fmr       f3, f6
	  fcmpo     cr0, f6, f2
	  bge-      .loc_0x200
	  fneg      f3, f6

	.loc_0x200:
	  lfs       f4, -0x638C(r2)
	  lis       r3, 0x8050
	  lfs       f2, -0x6398(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f3, f3, f4
	  fcmpo     cr0, f6, f2
	  fctiwz    f2, f3
	  stfd      f2, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f2, 0x4(r3)
	  fmuls     f5, f7, f2
	  bge-      .loc_0x25C
	  lfs       f2, -0x6390(r2)
	  fmuls     f2, f6, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0
	  fneg      f2, f2
	  b         .loc_0x274

	.loc_0x25C:
	  fmuls     f2, f6, f4
	  fctiwz    f2, f2
	  stfd      f2, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0x274:
	  fmuls     f3, f7, f2
	  lfs       f2, -0x6398(r2)
	  fmuls     f1, f1, f0
	  stfs      f5, 0x1C(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  bl        -0x597F4
	  frsp      f1, f1
	  lfs       f0, -0x6398(r2)
	  lfs       f2, -0x6340(r2)
	  mr        r3, r31
	  lfs       f3, -0x6350(r2)
	  addi      r4, r1, 0x14
	  fmuls     f1, f31, f1
	  stfs      f0, 0xC(r1)
	  addi      r5, r1, 0x8
	  stfs      f0, 0x10(r1)
	  fmuls     f0, f2, f1
	  fmuls     f0, f3, f0
	  stfs      f0, 0x8(r1)
	  bl        0x2FF840
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129068
 * Size:	00011C
 */
void EnemyStone::FSMStateBreakable::makeMatrix(Game::EnemyStone::DrawInfo*,
                                               Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x633C(r2)
	  stw       r0, 0x44(r1)
	  lfs       f2, -0x6368(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r5
	  lfs       f0, 0x38(r4)
	  fmuls     f1, f1, f0
	  lfs       f0, -0x6398(r2)
	  fmuls     f1, f2, f1
	  fmr       f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3C
	  fneg      f2, f1

	.loc_0x3C:
	  lfs       f3, -0x638C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x6398(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, -0x6338(r2)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f5, f4, f0
	  bge-      .loc_0x9C
	  lfs       f0, -0x6390(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xB4

	.loc_0x9C:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xB4:
	  fmuls     f2, f4, f0
	  lfs       f0, -0x6398(r2)
	  stfs      f5, 0x1C(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        -0x59914
	  frsp      f3, f1
	  lfs       f0, -0x6398(r2)
	  lfs       f1, -0x6344(r2)
	  mr        r3, r31
	  lfs       f2, -0x6340(r2)
	  addi      r4, r1, 0x14
	  fmuls     f1, f1, f3
	  lfs       f3, -0x6350(r2)
	  stfs      f0, 0xC(r1)
	  addi      r5, r1, 0x8
	  fmuls     f1, f2, f1
	  stfs      f0, 0x10(r1)
	  fmuls     f0, f3, f1
	  stfs      f0, 0x8(r1)
	  bl        0x2FF71C
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129184
 * Size:	00000C
 */
void EnemyStone::FSMStateBreakable::init(Game::EnemyStone::DrawInfo*,
                                         Game::StateArg*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6398(r2)
	  stfs      f0, 0x38(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129190
 * Size:	000018
 */
void EnemyStone::FSMStateBreakable::exec(Game::EnemyStone::DrawInfo*)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801291A8
 * Size:	000144
 */
void EnemyStone::FSMStateDisappear::init(Game::EnemyStone::DrawInfo*,
                                         Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x30
	  mr        r3, r31
	  bl        0x504
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  lwz       r8, -0x6DD0(r13)
	  lis       r4, 0x804B
	  lwz       r7, 0x30(r1)
	  lis       r3, 0x804B
	  lwz       r6, 0x34(r1)
	  subi      r4, r4, 0x5814
	  lwz       r5, 0x38(r1)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0x1F8(r8)
	  lfs       f1, 0x8(r1)
	  stw       r7, 0xC(r1)
	  fmuls     f3, f1, f0
	  stw       r6, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r4, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stfs      f3, 0x4C(r1)
	  lwz       r3, 0x40(r31)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF0
	  bge-      .loc_0x130
	  cmpwi     r0, 0
	  bge-      .loc_0xAC
	  b         .loc_0x130

	.loc_0xAC:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AB
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x793C
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x3C
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  bl        0x29E9D0
	  b         .loc_0x130

	.loc_0xF0:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AD
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x7964
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x3C
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0x29EB44

	.loc_0x130:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801292EC
 * Size:	000004
 */
void EnemyStone::FSMStateDisappear::cleanup(Game::EnemyStone::DrawInfo*) { }

/*
 * --INFO--
 * Address:	801292F0
 * Size:	000004
 */
void EnemyStone::FSMStateDisappear::exec(Game::EnemyStone::DrawInfo*) { }

/*
 * --INFO--
 * Address:	801292F4
 * Size:	000024
 */
void EnemyStone::FSMStateDisappear::makeMatrix(Game::EnemyStone::DrawInfo*,
                                               Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r5
	  stw       r0, 0x14(r1)
	  bl        -0x3F064
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129318
 * Size:	000144
 */
void EnemyStone::FSMStateDead::init(Game::EnemyStone::DrawInfo*,
                                    Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x30
	  mr        r3, r31
	  bl        0x394
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  lwz       r8, -0x6DD0(r13)
	  lis       r4, 0x804B
	  lwz       r7, 0x30(r1)
	  lis       r3, 0x804B
	  lwz       r6, 0x34(r1)
	  subi      r4, r4, 0x5814
	  lwz       r5, 0x38(r1)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0x1F8(r8)
	  lfs       f1, 0x8(r1)
	  stw       r7, 0xC(r1)
	  fmuls     f3, f1, f0
	  stw       r6, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r4, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stfs      f3, 0x4C(r1)
	  lwz       r3, 0x40(r31)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF0
	  bge-      .loc_0x130
	  cmpwi     r0, 0
	  bge-      .loc_0xAC
	  b         .loc_0x130

	.loc_0xAC:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AB
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x793C
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x3C
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  bl        0x29E860
	  b         .loc_0x130

	.loc_0xF0:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AD
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x7964
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x3C
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0x29E9D4

	.loc_0x130:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012945C
 * Size:	000024
 */
void EnemyStone::FSMStateDead::makeMatrix(Game::EnemyStone::DrawInfo*, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r5
	  stw       r0, 0x14(r1)
	  bl        -0x3F1CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129480
 * Size:	0000BC
 */
EnemyStone::DrawInfo::DrawInfo(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x14(r1)
	  lis       r7, 0x804F
	  subi      r0, r7, 0x4AD8
	  li        r8, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804B
	  subi      r7, r2, 0x6334
	  stw       r0, 0x0(r31)
	  rlwinm.   r0,r4,0,24,31
	  subi      r6, r6, 0x5E2C
	  subi      r5, r5, 0x2380
	  stw       r8, 0x10(r31)
	  li        r4, -0x1
	  subi      r3, r3, 0x2228
	  lfs       f0, -0x6398(r2)
	  stw       r8, 0xC(r31)
	  stw       r8, 0x8(r31)
	  stw       r8, 0x4(r31)
	  stw       r7, 0x14(r31)
	  stw       r6, 0x0(r31)
	  stw       r5, 0x18(r31)
	  stw       r4, 0x30(r31)
	  stw       r3, 0x18(r31)
	  stfs      f0, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  stw       r8, 0x40(r31)
	  stw       r8, 0x44(r31)
	  beq-      .loc_0xA4
	  lwz       r12, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r4, 0x18
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        .loc_0xBC

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xBC:
	*/
}

/*
 * --INFO--
 * Address:	8012953C
 * Size:	000064
 */
void EnemyStone::DrawInfo::reset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2E8080
	  li        r0, 0
	  lfs       f0, -0x6398(r2)
	  stw       r0, 0x40(r31)
	  addi      r3, r31, 0x18
	  mr        r4, r31
	  li        r5, 0
	  stw       r0, 0x44(r31)
	  li        r6, 0
	  stfs      f0, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0xC(r12)
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
 * Address:	801295A0
 * Size:	000034
 */
void StateMachine<Game::EnemyStone::DrawInfo>::start(
    Game::EnemyStone::DrawInfo*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801295D4
 * Size:	000044
 */
void EnemyStone::DrawInfo::update(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x18
	  stw       r4, -0x6DD0(r13)
	  mr        r4, r5
	  lwz       r12, 0x18(r5)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6DD0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129618
 * Size:	0000A8
 */
void EnemyStone::DrawInfo::makeMatrix(Matrixf*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  li        r31, 0x1
	  stw       r30, 0x48(r1)
	  mr        r30, r5
	  stw       r29, 0x44(r1)
	  mr        r29, r4
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  lwz       r3, 0x44(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r4, 0x40(r28)
	  mr        r5, r29
	  addi      r4, r4, 0x8
	  bl        -0x3F35C
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x84
	  addi      r3, r28, 0x18
	  mr        r4, r28
	  lwz       r12, 0x18(r28)
	  addi      r5, r1, 0x8
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  mr        r5, r29
	  addi      r4, r1, 0x8
	  bl        -0x3F390
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, 0

	.loc_0x84:
	  lwz       r0, 0x54(r1)
	  mr        r3, r31
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801296C0
 * Size:	00000C
 */
void EnemyStone::DrawInfo::getStateID()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x34(r3)
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801296CC
 * Size:	000114
 */
void EnemyStone::DrawInfo::getPosAndScale(Vector3f*, float*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  li        r31, 0x1
	  stw       r30, 0x48(r1)
	  mr        r30, r5
	  stw       r29, 0x44(r1)
	  mr        r29, r4
	  lwz       r0, 0x44(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r4, 0x40(r3)
	  mr        r3, r0
	  addi      r5, r1, 0x8
	  addi      r4, r4, 0x8
	  bl        -0x3F40C
	  b         .loc_0x4C

	.loc_0x48:
	  li        r31, 0

	.loc_0x4C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xF4
	  lfs       f1, -0x6398(r2)
	  li        r0, 0x3
	  addi      r4, r1, 0x18
	  addi      r5, r1, 0x28
	  stfs      f1, 0x0(r30)
	  addi      r3, r1, 0x8
	  mtctr     r0

	.loc_0x70:
	  lfs       f0, 0x0(r4)
	  lfs       f2, 0x0(r5)
	  fmuls     f3, f0, f0
	  lfs       f0, 0x0(r3)
	  fmuls     f2, f2, f2
	  fmadds    f0, f0, f0, f3
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xA4
	  ble-      .loc_0xA8
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xA8

	.loc_0xA4:
	  fmr       f2, f1

	.loc_0xA8:
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x4
	  addi      r4, r4, 0x4
	  addi      r5, r5, 0x4
	  fadds     f0, f0, f2
	  stfs      f0, 0x0(r30)
	  bdnz+     .loc_0x70
	  lfs       f1, 0x0(r30)
	  li        r3, 0x1
	  lfs       f0, -0x6330(r2)
	  fdivs     f0, f1, f0
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x8(r29)
	  b         .loc_0xF8

	.loc_0xF4:
	  li        r3, 0

	.loc_0xF8:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801297E0
 * Size:	00004C
 */
void EnemyStone::DrawInfo::appear(Game::EnemyBase*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r4, -0x6DD0(r13)
	  mr        r4, r3
	  addi      r3, r4, 0x18
	  stfs      f1, 0x38(r4)
	  lwz       r12, 0x18(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6DD0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012982C
 * Size:	00004C
 */
void EnemyStone::DrawInfo::fit(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  li        r5, 0x3
	  stw       r0, 0x14(r1)
	  addi      r3, r6, 0x18
	  stw       r4, -0x6DD0(r13)
	  mr        r4, r6
	  lwz       r12, 0x18(r6)
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6DD0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129878
 * Size:	00004C
 */
void EnemyStone::DrawInfo::shake(Game::EnemyBase*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x5
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r4, -0x6DD0(r13)
	  mr        r4, r3
	  addi      r3, r4, 0x18
	  stfs      f1, 0x38(r4)
	  lwz       r12, 0x18(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6DD0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801298C4
 * Size:	00004C
 */
void EnemyStone::DrawInfo::disappear(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  li        r5, 0x7
	  stw       r0, 0x14(r1)
	  addi      r3, r6, 0x18
	  stw       r4, -0x6DD0(r13)
	  mr        r4, r6
	  lwz       r12, 0x18(r6)
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6DD0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129910
 * Size:	00004C
 */
void EnemyStone::DrawInfo::dead(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  addi      r3, r6, 0x18
	  stw       r4, -0x6DD0(r13)
	  mr        r4, r6
	  lwz       r12, 0x18(r6)
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6DD0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012995C
 * Size:	000004
 */
void FSMState<Game::EnemyStone::DrawInfo>::init(Game::EnemyStone::DrawInfo*,
                                                Game::StateArg*)
{
}

/*
 * --INFO--
 * Address:	80129960
 * Size:	000004
 */
void FSMState<Game::EnemyStone::DrawInfo>::exec(Game::EnemyStone::DrawInfo*) { }

/*
 * --INFO--
 * Address:	80129964
 * Size:	000004
 */
void FSMState<Game::EnemyStone::DrawInfo>::cleanup(Game::EnemyStone::DrawInfo*)
{
}

/*
 * --INFO--
 * Address:	80129968
 * Size:	000004
 */
void FSMState<Game::EnemyStone::DrawInfo>::resume(Game::EnemyStone::DrawInfo*)
{
}

/*
 * --INFO--
 * Address:	8012996C
 * Size:	000004
 */
void FSMState<Game::EnemyStone::DrawInfo>::restart(Game::EnemyStone::DrawInfo*)
{
}

/*
 * --INFO--
 * Address:	80129970
 * Size:	000004
 */
void StateMachine<Game::EnemyStone::DrawInfo>::init(Game::EnemyStone::DrawInfo*)
{
}

/*
 * --INFO--
 * Address:	80129974
 * Size:	000038
 */
void StateMachine<Game::EnemyStone::DrawInfo>::exec(Game::EnemyStone::DrawInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x34(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801299AC
 * Size:	000064
 */
void StateMachine<Game::EnemyStone::DrawInfo>::create(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x105A28
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x105A38
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x105A48
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129A10
 * Size:	00009C
 */
void StateMachine<Game::EnemyStone::DrawInfo>::transit(
    Game::EnemyStone::DrawInfo*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x34(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x34(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129AAC
 * Size:	000084
 */
void StateMachine<Game::EnemyStone::DrawInfo>::registerState(
    Game::FSMState<Game::EnemyStone::DrawInfo>*)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}
} // namespace Game
