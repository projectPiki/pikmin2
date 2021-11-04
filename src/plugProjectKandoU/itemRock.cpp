#include "types.h"

/*
 * --INFO--
 * Address:	801E0E84
 * Size:	000134
 */
void Game::ItemRock::FSM::init(Game::ItemRock::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x259C
	  li        r3, 0x14
	  bl        -0x1BD000
	  mr.       r4, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x5D78
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  lis       r3, 0x804C
	  subi      r6, r6, 0x5DAC
	  stw       r7, 0x4(r4)
	  subi      r5, r5, 0x5DE0
	  subi      r0, r3, 0x5E14
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x2648
	  li        r3, 0x14
	  bl        -0x1BD054
	  mr.       r4, r3
	  beq-      .loc_0xC0
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x5D78
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x5DAC
	  subi      r5, r5, 0x5DE0
	  subi      r0, r3, 0x5E48
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC0:
	  mr        r3, r31
	  bl        0x25F0
	  li        r3, 0x14
	  bl        -0x1BD0AC
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x5D78
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x5DAC
	  subi      r5, r5, 0x5DE0
	  subi      r0, r3, 0x5E7C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        0x2598
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E0FB8
 * Size:	00003C
 */
void Game::ItemRock::NormalState::init(Game::ItemRock::Item*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  bl        0xF40
	  li        r0, 0
	  stb       r0, 0x10(r31)
	  stb       r0, 0x11(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E0FF4
 * Size:	000090
 */
void Game::ItemRock::NormalState::exec(Game::ItemRock::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x21C(r4)
	  lwz       r5, 0x20C(r4)
	  rlwinm    r0,r6,2,0,29
	  cmpwi     r6, 0
	  lfsx      f2, r5, r0
	  ble-      .loc_0x80
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x214(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x214(r4)
	  lfs       f0, 0x214(r4)
	  fcmpo     cr0, f0, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x80
	  li        r0, 0x1
	  li        r5, 0x2
	  stb       r0, 0x11(r3)
	  li        r6, 0
	  lwz       r0, 0x21C(r4)
	  lwz       r7, 0x208(r4)
	  rlwinm    r0,r0,2,0,29
	  add       r7, r7, r0
	  lfs       f0, -0x4(r7)
	  stfs      f0, 0x200(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1084
 * Size:	000030
 */
void Game::FSMState<Game::ItemRock::Item>::transit(Game::ItemRock::Item*, int,
                                                   Game::StateArg*)
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
 * Address:	801E10B4
 * Size:	000004
 */
void Game::ItemRock::NormalState::cleanup(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E10B8
 * Size:	0000BC
 */
void Game::ItemRock::NormalState::onDamage(Game::ItemRock::Item*, float)
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
	  fmr       f31, f1
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0xF58
	  lfs       f1, 0x218(r31)
	  lfs       f0, -0x4A98(r2)
	  fadds     f1, f1, f31
	  stfs      f1, 0x218(r31)
	  lfs       f2, 0x200(r31)
	  lfs       f1, 0x218(r31)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x200(r31)
	  stfs      f0, 0x218(r31)
	  lwz       r0, 0x21C(r31)
	  lwz       r3, 0x208(r31)
	  rlwinm    r0,r0,2,0,29
	  lfs       f1, 0x200(r31)
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x9C
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x10(r30)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
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
 * Address:	801E1174
 * Size:	0000F8
 */
void Game::ItemRock::NormalState::onKeyEvent(Game::ItemRock::Item*,
                                             const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  lwz       r0, 0x1C(r5)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  cmplwi    r0, 0x64
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  bne-      .loc_0x60
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
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
	  bl        0x7F8

	.loc_0x60:
	  lbz       r0, 0x11(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  lwz       r0, 0x21C(r31)
	  mr        r3, r30
	  lwz       r6, 0x208(r31)
	  mr        r4, r31
	  rlwinm    r0,r0,2,0,29
	  li        r5, 0x2
	  add       r7, r6, r0
	  li        r6, 0
	  lfs       f0, -0x4(r7)
	  stfs      f0, 0x200(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE0

	.loc_0xA8:
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE0

	.loc_0xD8:
	  mr        r3, r31
	  bl        0xCC0

	.loc_0xE0:
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
 * Address:	801E126C
 * Size:	000048
 */
void Game::ItemRock::DownState::init(Game::ItemRock::Item*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0xE54
	  mr        r3, r31
	  li        r4, 0x383B
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
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
 * Address:	801E12B4
 * Size:	000004
 */
void Game::ItemRock::DownState::exec(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E12B8
 * Size:	000004
 */
void Game::ItemRock::DownState::cleanup(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E12BC
 * Size:	000010
 */
void Game::ItemRock::DownState::onDamage(Game::ItemRock::Item*, float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x218(r4)
	  fadds     f0, f0, f1
	  stfs      f0, 0x218(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E12CC
 * Size:	0000F0
 */
void Game::ItemRock::DownState::onKeyEvent(Game::ItemRock::Item*,
                                           const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x4A98(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stfs      f0, 0x214(r4)
	  lwz       r3, 0x21C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x21C(r4)
	  lwz       r0, 0x21C(r4)
	  lwz       r3, 0x220(r4)
	  cmpw      r0, r3
	  blt-      .loc_0x64
	  stw       r3, 0x21C(r31)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x638

	.loc_0x64:
	  lwz       r3, 0x21C(r31)
	  lis       r4, 0x4330
	  lwz       r0, 0x220(r31)
	  xoris     r3, r3, 0x8000
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x4A90(r2)
	  stw       r3, 0xC(r1)
	  lfs       f3, -0x4A94(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  lwz       r3, 0x1EC(r31)
	  stw       r4, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f1, f3, f0
	  bl        -0xBDE80
	  mr        r3, r31
	  bl        0x4D8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801E13BC
 * Size:	000058
 */
void Game::ItemRock::UpState::init(Game::ItemRock::Item*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0xF90
	  lfs       f1, -0x4A88(r2)
	  mr        r3, r31
	  lfs       f0, -0x4A98(r2)
	  li        r4, 0x383A
	  stfs      f1, 0x1D4(r31)
	  stfs      f0, 0x214(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
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
 * Address:	801E1414
 * Size:	000004
 */
void Game::ItemRock::UpState::exec(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E1418
 * Size:	000004
 */
void Game::ItemRock::UpState::cleanup(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E141C
 * Size:	000010
 */
void Game::ItemRock::UpState::onDamage(Game::ItemRock::Item*, float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x218(r4)
	  fadds     f0, f0, f1
	  stfs      f0, 0x218(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E142C
 * Size:	0000CC
 */
void Game::ItemRock::UpState::onKeyEvent(Game::ItemRock::Item*,
                                         const SysShape::KeyEvent&)
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
	  lwz       r5, 0x21C(r4)
	  li        r4, 0x1
	  subi      r0, r5, 0x1
	  stw       r0, 0x21C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r31)
	  lis       r4, 0x4330
	  lwz       r0, 0x220(r31)
	  xoris     r3, r3, 0x8000
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x4A90(r2)
	  stw       r3, 0xC(r1)
	  lfs       f3, -0x4A94(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  lwz       r3, 0x1EC(r31)
	  stw       r4, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f1, f3, f0
	  bl        -0xBDFBC
	  mr        r3, r31
	  bl        0x39C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801E14F8
 * Size:	000048
 */
void Game::ItemRock::Item::constructor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x84
	  bl        -0x1BD66C
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x280100
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x17C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1540
 * Size:	00020C
 */
void Game::ItemRock::Item::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x4A98(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  stw       r30, 0x8(r1)
	  stfs      f0, 0x214(r31)
	  bl        -0x1BD6C0
	  mr.       r30, r3
	  beq-      .loc_0x54
	  lwz       r3, -0x6B80(r13)
	  li        r4, 0
	  bl        -0x14428
	  mr        r4, r3
	  mr        r3, r30
	  lis       r5, 0x2
	  li        r6, 0x2
	  bl        0x25CC4C
	  mr        r30, r3

	.loc_0x54:
	  stw       r30, 0x174(r31)
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x17ACAC
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x17ADE8
	  li        r3, 0x24
	  bl        -0x1BD740
	  mr.       r30, r3
	  beq-      .loc_0xC8
	  li        r4, 0xC7
	  li        r5, 0xC8
	  bl        0x1CEA18
	  lis       r3, 0x804C
	  subi      r0, r3, 0x6534
	  stw       r0, 0x0(r30)

	.loc_0xC8:
	  stw       r30, 0x1F0(r31)
	  li        r3, 0x24
	  bl        -0x1BD76C
	  mr.       r30, r3
	  beq-      .loc_0xF4
	  li        r4, 0xC9
	  li        r5, 0xCA
	  bl        0x1CE9EC
	  lis       r3, 0x804C
	  subi      r0, r3, 0x6550
	  stw       r0, 0x0(r30)

	.loc_0xF4:
	  stw       r30, 0x1F4(r31)
	  li        r3, 0x24
	  bl        -0x1BD798
	  mr.       r30, r3
	  beq-      .loc_0x120
	  li        r4, 0xCB
	  li        r5, 0xCC
	  bl        0x1CE9C0
	  lis       r3, 0x804C
	  subi      r0, r3, 0x656C
	  stw       r0, 0x0(r30)

	.loc_0x120:
	  stw       r30, 0x1F8(r31)
	  cmplwi    r31, 0
	  lfs       f0, -0x4A88(r2)
	  mr        r5, r31
	  stfs      f0, 0x1D4(r31)
	  lwz       r3, -0x6B80(r13)
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x1B8(r31)
	  beq-      .loc_0x148
	  addi      r5, r31, 0x178

	.loc_0x148:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x2
	  bl        0x2475F8
	  lwz       r3, 0x1D8(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0xF18
	  lwz       r4, -0x6B80(r13)
	  addi      r6, r31, 0x1C4
	  lwz       r3, 0x210(r31)
	  li        r5, 0
	  lwz       r4, 0x88(r4)
	  li        r7, 0
	  lfs       f0, 0x240(r4)
	  stfs      f0, 0x0(r3)
	  lwz       r4, -0x6B80(r13)
	  lwz       r3, 0x210(r31)
	  lwz       r4, 0x88(r4)
	  lfs       f0, 0x268(r4)
	  stfs      f0, 0x4(r3)
	  lwz       r4, -0x6B80(r13)
	  lwz       r3, 0x210(r31)
	  lwz       r4, 0x88(r4)
	  lfs       f0, 0x290(r4)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x114(r31)
	  lwz       r4, 0x174(r31)
	  bl        -0xAD678
	  li        r0, 0
	  stb       r0, 0x1FC(r31)
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
 * Address:	801E174C
 * Size:	000034
 */
void Game::StateMachine<Game::ItemRock::Item>::start(Game::ItemRock::Item*, int,
                                                     Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
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
 * Address:	801E1780
 * Size:	000034
 */
void Game::ItemRock::Item::onKill(Game::CreatureKillArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6B80(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
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
 * Address:	801E17B4
 * Size:	00005C
 */
void Game::ItemRock::Item::onSetPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x4A84(r2)
	  stw       r0, 0x14(r1)
	  lfs       f2, -0x4A94(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, -0x6E28(r13)
	  bl        -0xBD364
	  stw       r3, 0x1EC(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x60
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1810
 * Size:	000044
 */
void Game::ItemRock::Item::onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1854
 * Size:	000004
 */
void Game::ItemState<Game::ItemRock::Item>::onKeyEvent(
    Game::ItemRock::Item*, const SysShape::KeyEvent&)
{
}

/*
 * --INFO--
 * Address:	801E1858
 * Size:	00010C
 */
void Game::ItemRock::Item::startLoopEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x5814
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x14(r1)
	  lwz       r0, 0x21C(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x8C
	  bge-      .loc_0x54
	  cmpwi     r0, 0
	  bge-      .loc_0x60
	  b         .loc_0xE4

	.loc_0x54:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xE4
	  b         .loc_0xB8

	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0x8C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0xB8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F0(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0xE4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1964
 * Size:	000064
 */
void Game::ItemRock::Item::finishLoopEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1F0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	801E19C8
 * Size:	0000B0
 */
void Game::ItemRock::Item::startFukuEffect(Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x804C
	  lis       r5, 0x804B
	  stw       r0, 0x34(r1)
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  li        r7, 0
	  stw       r31, 0x2C(r1)
	  li        r8, 0xD0
	  mr        r31, r3
	  subi      r6, r6, 0x658C
	  stw       r0, 0x18(r1)
	  addi      r0, r5, 0x6A64
	  lis       r5, 0x804B
	  addi      r3, r1, 0x18
	  stw       r0, 0x18(r1)
	  subi      r0, r5, 0x5814
	  li        r5, 0xD1
	  sth       r8, 0x1C(r1)
	  sth       r5, 0x1E(r1)
	  stw       r7, 0x20(r1)
	  stw       r7, 0x24(r1)
	  stw       r6, 0x18(r1)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x8(r4)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  bl        0x1CD5CC
	  mr        r3, r31
	  li        r4, 0x3839
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1A78
 * Size:	000204
 */
void Game::ItemRock::Item::doLoad(Stream&)
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
	  bl        0x232FF8
	  stw       r3, 0x21C(r30)
	  mr        r3, r31
	  bl        0x233308
	  stfs      f1, 0x214(r30)
	  mr        r3, r31
	  bl        0x2332FC
	  stfs      f1, 0x200(r30)
	  lis       r4, 0x4330
	  lfd       f2, -0x4A90(r2)
	  lwz       r3, 0x21C(r30)
	  lwz       r0, 0x220(r30)
	  xoris     r3, r3, 0x8000
	  stw       r4, 0x18(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f3, -0x4A94(r2)
	  stw       r3, 0x1C(r1)
	  lwz       r3, 0x1EC(r30)
	  lfd       f0, 0x18(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f1, f0, f2
	  stw       r4, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f1, f3, f0
	  bl        -0xBE608
	  mr        r3, r30
	  bl        0x3C8
	  lwz       r3, 0x1F0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x21C(r30)
	  lwz       r3, 0x220(r30)
	  cmpw      r0, r3
	  blt-      .loc_0xFC
	  stw       r3, 0x21C(r30)
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r30)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r30)
	  stfs      f0, 0x14(r1)
	  lwz       r0, 0x21C(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x178
	  bge-      .loc_0x13C
	  cmpwi     r0, 0
	  bge-      .loc_0x148
	  b         .loc_0x1D8

	.loc_0x13C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1D8
	  b         .loc_0x1A8

	.loc_0x148:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1EC

	.loc_0x178:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1EC

	.loc_0x1A8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F0(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1EC

	.loc_0x1D8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1EC:
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
 * Address:	801E1C7C
 * Size:	000058
 */
void Game::ItemRock::Item::doSave(Stream&)
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
	  lwz       r4, 0x21C(r3)
	  mr        r3, r31
	  bl        0x233B20
	  lfs       f1, 0x214(r30)
	  mr        r3, r31
	  bl        0x233B9C
	  lfs       f1, 0x200(r30)
	  mr        r3, r31
	  bl        0x233B90
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
 * Address:	801E1CD4
 * Size:	000048
 */
void Game::ItemRock::Item::updateBoundSphere()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xC10
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x1C4(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x1C8(r31)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f1, 0x1D0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1D1C
 * Size:	0001B4
 */
void Game::ItemRock::Item::doAI()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r4, r30
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        -0x15744
	  lwz       r4, 0x114(r30)
	  mr        r3, r30
	  lwz       r31, 0x0(r4)
	  bl        0xB98
	  stfs      f1, 0x1C(r31)
	  lbz       r0, 0xD8(r30)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x14C
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r30)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r30)
	  stfs      f0, 0x14(r1)
	  lwz       r0, 0x21C(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD4
	  bge-      .loc_0x98
	  cmpwi     r0, 0
	  bge-      .loc_0xA4
	  b         .loc_0x134

	.loc_0x98:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x134
	  b         .loc_0x104

	.loc_0xA4:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0xD4:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0x104:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F0(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0x134:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0x14C:
	  lwz       r3, 0x1F0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  lbz       r3, 0x1FC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x19C
	  subi      r0, r3, 0x1
	  stb       r0, 0x1FC(r30)

	.loc_0x19C:
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
 * Address:	801E1ED0
 * Size:	000020
 */
void Game::ItemRock::Item::initMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E1EF0
 * Size:	000020
 */
void Game::ItemRock::Item::on_movie_end(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x20:
	*/
}

/*
 * --INFO--
 * Address:	801E1F10
 * Size:	00012C
 */
void Game::ItemRock::Item::startWaitMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r0, 0x21C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD4
	  bge-      .loc_0x34
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  bge-      .loc_0xB4
	  b         .loc_0x118

	.loc_0x34:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x118
	  b         .loc_0xF4

	.loc_0x40:
	  bl        -0x1189B0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4A90(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x4A80(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x4A78(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x94
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x84
	  addi      r5, r31, 0x178

	.loc_0x84:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x2
	  bl        0x246CEC
	  b         .loc_0x118

	.loc_0x94:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xA4
	  addi      r5, r31, 0x178

	.loc_0xA4:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x3
	  bl        0x246CCC
	  b         .loc_0x118

	.loc_0xB4:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xC4
	  addi      r5, r5, 0x178

	.loc_0xC4:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x1
	  bl        0x246CAC
	  b         .loc_0x118

	.loc_0xD4:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xE4
	  addi      r5, r5, 0x178

	.loc_0xE4:
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  bl        0x246C8C
	  b         .loc_0x118

	.loc_0xF4:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x9
	  li        r5, 0
	  bl        0x246C78
	  addi      r3, r31, 0x1A8
	  li        r4, 0x3E8
	  bl        0x246DE4
	  lfs       f0, -0x4A98(r2)
	  stfs      f0, 0x1D4(r31)

	.loc_0x118:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E203C
 * Size:	00009C
 */
void Game::ItemRock::Item::startDamageMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x21C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x70
	  bge-      .loc_0x8C
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  bge-      .loc_0x50
	  b         .loc_0x8C
	  b         .loc_0x8C

	.loc_0x30:
	  cmplwi    r3, 0
	  mr        r5, r3
	  beq-      .loc_0x40
	  addi      r5, r5, 0x178

	.loc_0x40:
	  addi      r3, r3, 0x1A8
	  li        r4, 0x6
	  bl        0x246C04
	  b         .loc_0x8C

	.loc_0x50:
	  cmplwi    r3, 0
	  mr        r5, r3
	  beq-      .loc_0x60
	  addi      r5, r5, 0x178

	.loc_0x60:
	  addi      r3, r3, 0x1A8
	  li        r4, 0x5
	  bl        0x246BE4
	  b         .loc_0x8C

	.loc_0x70:
	  cmplwi    r3, 0
	  mr        r5, r3
	  beq-      .loc_0x80
	  addi      r5, r5, 0x178

	.loc_0x80:
	  addi      r3, r3, 0x1A8
	  li        r4, 0x4
	  bl        0x246BC4

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E20D8
 * Size:	00028C
 */
void Game::ItemRock::Item::startDownMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  lwz       r3, 0x1F0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x21C(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1CC
	  bge-      .loc_0x278
	  cmpwi     r0, 0
	  beq-      .loc_0x74
	  bge-      .loc_0x11C
	  b         .loc_0x278
	  b         .loc_0x278

	.loc_0x74:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x84
	  addi      r5, r31, 0x178

	.loc_0x84:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x7
	  bl        0x246B24
	  lis       r3, 0x804B
	  lfs       f0, 0x19C(r31)
	  lfs       f1, 0x1A0(r31)
	  subi      r0, r3, 0x5808
	  lfs       f2, 0x1A4(r31)
	  lis       r3, 0x804E
	  addi      r5, r3, 0x6A64
	  li        r6, 0
	  stw       r0, 0x48(r1)
	  lis       r4, 0x804C
	  lis       r3, 0x804B
	  li        r8, 0xD0
	  subi      r0, r3, 0x5814
	  li        r7, 0xD1
	  stw       r5, 0x48(r1)
	  subi      r5, r4, 0x658C
	  addi      r3, r1, 0x48
	  addi      r4, r1, 0x58
	  sth       r8, 0x4C(r1)
	  sth       r7, 0x4E(r1)
	  stw       r6, 0x50(r1)
	  stw       r6, 0x54(r1)
	  stw       r5, 0x48(r1)
	  stw       r0, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f2, 0x64(r1)
	  bl        0x1CCE40
	  mr        r3, r31
	  li        r4, 0x3839
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x278

	.loc_0x11C:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x12C
	  addi      r5, r31, 0x178

	.loc_0x12C:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x8
	  bl        0x246A7C
	  lis       r3, 0x804B
	  lfs       f1, 0x19C(r31)
	  lfs       f2, 0x1A0(r31)
	  subi      r0, r3, 0x5808
	  lfs       f3, 0x1A4(r31)
	  lis       r3, 0x804E
	  lfs       f0, -0x4A74(r2)
	  addi      r5, r3, 0x6A64
	  stw       r0, 0x28(r1)
	  lis       r4, 0x804C
	  li        r6, 0
	  fsubs     f2, f2, f0
	  lis       r3, 0x804B
	  li        r8, 0xD0
	  subi      r0, r3, 0x5814
	  li        r7, 0xD1
	  stw       r5, 0x28(r1)
	  subi      r5, r4, 0x658C
	  addi      r3, r1, 0x28
	  sth       r8, 0x2C(r1)
	  addi      r4, r1, 0x38
	  sth       r7, 0x2E(r1)
	  stw       r6, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r5, 0x28(r1)
	  stw       r0, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f3, 0x44(r1)
	  bl        0x1CCD90
	  mr        r3, r31
	  li        r4, 0x3839
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x278

	.loc_0x1CC:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x1DC
	  addi      r5, r31, 0x178

	.loc_0x1DC:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x9
	  bl        0x2469CC
	  lis       r3, 0x804B
	  lfs       f1, 0x19C(r31)
	  lfs       f2, 0x1A0(r31)
	  subi      r0, r3, 0x5808
	  lfs       f3, 0x1A4(r31)
	  lis       r3, 0x804E
	  lfs       f0, -0x4A70(r2)
	  addi      r5, r3, 0x6A64
	  stw       r0, 0x8(r1)
	  lis       r4, 0x804C
	  li        r6, 0
	  fsubs     f2, f2, f0
	  lis       r3, 0x804B
	  li        r8, 0xD0
	  subi      r0, r3, 0x5814
	  li        r7, 0xD1
	  stw       r5, 0x8(r1)
	  subi      r5, r4, 0x658C
	  addi      r3, r1, 0x8
	  sth       r8, 0xC(r1)
	  addi      r4, r1, 0x18
	  sth       r7, 0xE(r1)
	  stw       r6, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  bl        0x1CCCE0
	  mr        r3, r31
	  li        r4, 0x3839
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x278:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2364
 * Size:	0000EC
 */
void Game::ItemRock::Item::startUpMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1F0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x21C(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x9C
	  bge-      .loc_0x70
	  cmpwi     r0, 0
	  beq-      .loc_0xD8
	  bge-      .loc_0x7C
	  b         .loc_0xD8

	.loc_0x70:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xD8
	  b         .loc_0xBC

	.loc_0x7C:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x8C
	  addi      r5, r31, 0x178

	.loc_0x8C:
	  addi      r3, r31, 0x1A8
	  li        r4, 0xC
	  bl        0x246890
	  b         .loc_0xD8

	.loc_0x9C:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xAC
	  addi      r5, r31, 0x178

	.loc_0xAC:
	  addi      r3, r31, 0x1A8
	  li        r4, 0xB
	  bl        0x246870
	  b         .loc_0xD8

	.loc_0xBC:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xCC
	  addi      r5, r31, 0x178

	.loc_0xCC:
	  addi      r3, r31, 0x1A8
	  li        r4, 0xA
	  bl        0x246850

	.loc_0xD8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2450
 * Size:	000114
 */
void Game::ItemRock::Item::getVectorField(Sys::Sphere&, Vector3<float>&)
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
	  stfd      f28, 0x10(r1)
	  psq_st    f28,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lfs       f0, 0x4(r4)
	  mr        r31, r5
	  lfs       f1, 0x1A0(r3)
	  lfs       f3, 0x1A4(r3)
	  fsubs     f29, f1, f0
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0x19C(r3)
	  fsubs     f28, f3, f2
	  lfs       f0, 0x0(r4)
	  fmuls     f2, f29, f29
	  fsubs     f30, f1, f0
	  lfs       f0, -0x4A98(r2)
	  fmuls     f3, f28, f28
	  fmadds    f1, f30, f30, f2
	  fadds     f31, f3, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x84
	  ble-      .loc_0x88
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x88

	.loc_0x84:
	  fmr       f31, f0

	.loc_0x88:
	  lfs       f0, -0x4A98(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xAC
	  lfs       f0, -0x4A94(r2)
	  fdivs     f0, f0, f31
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0
	  fmuls     f28, f28, f0
	  b         .loc_0xB0

	.loc_0xAC:
	  fmr       f31, f0

	.loc_0xB0:
	  bl        0x3F8
	  fcmpo     cr0, f31, f1
	  ble-      .loc_0xCC
	  stfs      f30, 0x0(r31)
	  stfs      f29, 0x4(r31)
	  stfs      f28, 0x8(r31)
	  b         .loc_0xDC

	.loc_0xCC:
	  lfs       f0, -0x4A98(r2)
	  stfs      f0, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f0, 0x8(r31)

	.loc_0xDC:
	  li        r3, 0x1
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  psq_l     f28,0x18(r1),0,0
	  lfd       f28, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2564
 * Size:	000088
 */
void Game::ItemRock::Item::getWorkDistance(Sys::Sphere&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  lfs       f0, 0x4(r4)
	  lfs       f1, 0x1A0(r3)
	  lfs       f3, 0x1A4(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0x19C(r3)
	  fsubs     f2, f3, f2
	  lfs       f0, 0x0(r4)
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x4A98(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f31, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x64
	  ble-      .loc_0x68
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x68

	.loc_0x64:
	  fmr       f31, f0

	.loc_0x68:
	  bl        0x32C
	  fsubs     f1, f31, f1
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E25EC
 * Size:	000194
 */
void Game::ItemRock::Item::createRock(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x4A98(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r0, r31, 0x1
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  rlwinm    r29,r0,2,0,29
	  stw       r31, 0x220(r3)
	  li        r3, 0
	  stw       r3, 0x21C(r30)
	  mr        r3, r29
	  stfs      f0, 0x218(r30)
	  bl        -0x1BE680
	  stw       r3, 0x208(r30)
	  mr        r3, r29
	  bl        -0x1BE68C
	  stw       r3, 0x20C(r30)
	  rlwinm    r3,r31,2,0,29
	  bl        -0x1BE698
	  stw       r3, 0x210(r30)
	  addic.    r0, r31, 0x1
	  lfs       f1, -0x4A6C(r2)
	  li        r3, 0
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x208(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x100(r5)
	  stfs      f0, 0x0(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x208(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x128(r5)
	  stfs      f0, 0x4(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x208(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x150(r5)
	  stfs      f0, 0x8(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x208(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x178(r5)
	  stfs      f0, 0xC(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x20C(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x1A0(r5)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x0(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x20C(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x1C8(r5)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x4(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x20C(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x1F0(r5)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x8(r4)
	  lwz       r5, -0x6B80(r13)
	  lwz       r4, 0x20C(r30)
	  lwz       r5, 0x88(r5)
	  lfs       f0, 0x218(r5)
	  fmuls     f0, f1, f0
	  stfs      f0, 0xC(r4)
	  lwz       r4, 0x208(r30)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x204(r30)
	  lfs       f0, 0x204(r30)
	  stfs      f0, 0x200(r30)
	  ble-      .loc_0x178
	  addi      r0, r31, 0x1
	  subi      r4, r31, 0x7
	  cmpwi     r0, 0x8
	  ble-      .loc_0x160
	  addi      r0, r4, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r4, 0
	  ble-      .loc_0x160

	.loc_0x158:
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0x158

	.loc_0x160:
	  addi      r4, r31, 0x1
	  sub       r0, r4, r3
	  mtctr     r0
	  cmpw      r3, r4
	  bge-      .loc_0x178

	.loc_0x174:
	  bdnz-     .loc_0x174

	.loc_0x178:
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
 * Address:	801E2780
 * Size:	000174
 */
void Game::ItemRock::Item::interactAttack(Game::InteractAttack&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lfs       f1, 0x8(r5)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1FC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lwz       r0, 0x21C(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x7C
	  bge-      .loc_0x68
	  cmpwi     r0, 0
	  bge-      .loc_0x74
	  b         .loc_0x88

	.loc_0x68:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x88
	  b         .loc_0x84

	.loc_0x74:
	  li        r31, 0x2
	  b         .loc_0x88

	.loc_0x7C:
	  li        r31, 0x1
	  b         .loc_0x88

	.loc_0x84:
	  li        r31, 0

	.loc_0x88:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r4, r4, 0x6A78
	  li        r0, 0xCD
	  li        r7, 0
	  stw       r4, 0x8(r1)
	  addi      r6, r3, 0x710C
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  sth       r0, 0xC(r1)
	  subi      r5, r4, 0x5814
	  subi      r0, r3, 0x6578
	  addi      r3, r1, 0x8
	  stw       r7, 0x10(r1)
	  addi      r4, r1, 0x20
	  stw       r6, 0x8(r1)
	  lwz       r8, 0x19C(r30)
	  lwz       r7, 0x1A0(r30)
	  lwz       r6, 0x1A4(r30)
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  stw       r6, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stw       r5, 0x20(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  stw       r31, 0x30(r1)
	  bl        0x1D375C
	  bl        -0x1192F4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  lfd       f3, -0x4A90(r2)
	  stw       r0, 0x38(r1)
	  lfs       f1, -0x4A80(r2)
	  lfd       f2, 0x38(r1)
	  lfs       f0, -0x4A7C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r3, 0x44(r1)
	  addi      r0, r3, 0x6
	  stb       r0, 0x1FC(r30)

	.loc_0x158:
	  lwz       r0, 0x54(r1)
	  li        r3, 0x1
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E28F4
 * Size:	000004
 */
void Game::ItemRock::State::onDamage(Game::ItemRock::Item*, float) { }

/*
 * --INFO--
 * Address:	801E28F8
 * Size:	000028
 */
void Game::ItemRock::Item::getWorkRadius()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x21C(r3)
	  lwz       r0, 0x220(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x18
	  lfs       f1, -0x4A98(r2)
	  blr

	.loc_0x18:
	  lwz       r3, 0x210(r3)
	  rlwinm    r0,r4,2,0,29
	  lfsx      f1, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2920
 * Size:	000120
 */
void Game::ItemRock::Mgr::Mgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  stw       r0, 0x444(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x43C(r1)
	  addi      r31, r4, 0xB10
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x8C
	  stw       r0, 0x4(r30)

	.loc_0x30:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x15538
	  lis       r3, 0x804C
	  addi      r0, r31, 0xC
	  subi      r4, r3, 0x6658
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x74
	  li        r4, 0x1
	  stw       r5, 0x30(r30)
	  stw       r0, 0x8(r30)
	  bl        -0x15BB4
	  addi      r0, r31, 0x20
	  li        r3, 0x2A4
	  stw       r0, 0x28(r30)
	  bl        -0x1BEAEC
	  mr.       r0, r3
	  beq-      .loc_0x84
	  bl        0xC8
	  mr        r0, r3

	.loc_0x84:
	  stw       r0, 0x88(r30)
	  li        r0, 0
	  addi      r3, r31, 0x40
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x1C3848
	  mr.       r31, r3
	  beq-      .loc_0x104
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x232F10
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0xE4
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0xE4:
	  lwz       r3, 0x88(r30)
	  addi      r4, r1, 0x10
	  lwz       r12, 0xD8(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x1BE948

	.loc_0x104:
	  lwz       r0, 0x444(r1)
	  mr        r3, r30
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2A40
 * Size:	000024
 */
void Game::ItemRock::RockParms::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xDC
	  stw       r0, 0x14(r1)
	  bl        0x230DA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2A64
 * Size:	0001A4
 */
void Game::ItemRock::RockParms::RockParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x7330
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x5350
	  addi      r5, r5, 0x3030
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  stw       r30, 0x8(r1)
	  addi      r30, r3, 0xB10
	  li        r3, 0
	  mr        r4, r31
	  stw       r0, 0xD8(r31)
	  addi      r0, r31, 0xD4
	  addi      r6, r30, 0x70
	  stw       r0, 0x0(r31)
	  addi      r0, r30, 0x5C
	  stw       r3, 0x4(r31)
	  addi      r3, r31, 0xC
	  stw       r0, 0x8(r31)
	  bl        0x230B9C
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A68(r2)
	  stw       r0, 0xC(r31)
	  mr        r4, r31
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r31, 0x34
	  stfs      f0, 0x24(r31)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x4A94(r2)
	  addi      r6, r30, 0x84
	  stfs      f1, 0x2C(r31)
	  stfs      f0, 0x30(r31)
	  bl        0x230B60
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A68(r2)
	  stw       r0, 0x34(r31)
	  mr        r4, r31
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r31, 0x5C
	  stfs      f0, 0x4C(r31)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x4A94(r2)
	  addi      r6, r30, 0x94
	  stfs      f1, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  bl        0x230B24
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A64(r2)
	  stw       r0, 0x5C(r31)
	  mr        r4, r31
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r31, 0x84
	  stfs      f0, 0x74(r31)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x4A94(r2)
	  subi      r6, r2, 0x4A60
	  stfs      f1, 0x7C(r31)
	  stfs      f0, 0x80(r31)
	  bl        0x230AE8
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A58(r2)
	  stw       r0, 0x84(r31)
	  mr        r4, r31
	  lfs       f1, -0x4A54(r2)
	  addi      r3, r31, 0xAC
	  stfs      f0, 0x9C(r31)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x4A50(r2)
	  addi      r6, r30, 0xA4
	  stfs      f1, 0xA4(r31)
	  stfs      f0, 0xA8(r31)
	  bl        0x230AAC
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5344
	  lfs       f0, -0x4A4C(r2)
	  stw       r0, 0xAC(r31)
	  subi      r0, r3, 0x6598
	  lfs       f1, -0x4A54(r2)
	  addi      r3, r31, 0xDC
	  stfs      f0, 0xC4(r31)
	  li        r4, 0x1
	  lfs       f0, -0x4A50(r2)
	  stfs      f1, 0xCC(r31)
	  stfs      f0, 0xD0(r31)
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x1A4
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	801E2C08
 * Size:	0002F0
 */
void Game::ItemRock::RockParms::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0xB10
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x1C4
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7030
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0xB4
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0xC4
	  bl        0x2309FC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A48(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A94(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x4A44(r2)
	  addi      r6, r31, 0xD0
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2309C0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A40(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A94(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x4A44(r2)
	  addi      r6, r31, 0xDC
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x230984
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A3C(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A94(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x4A44(r2)
	  addi      r6, r31, 0xE8
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x230948
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A38(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A94(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x4A44(r2)
	  addi      r6, r31, 0xF4
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x23090C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A94(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x4A34(r2)
	  addi      r6, r31, 0x108
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2308D0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A94(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x4A34(r2)
	  addi      r6, r31, 0x11C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x230894
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A94(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x4A34(r2)
	  addi      r6, r31, 0x130
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x230858
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A94(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x4A34(r2)
	  addi      r6, r31, 0x144
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x23081C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A30(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x4A34(r2)
	  addi      r6, r31, 0x144
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x2307E0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4A2C(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x4A98(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x4A34(r2)
	  addi      r6, r31, 0x144
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x2307A4
	  lis       r3, 0x804B
	  lfs       f2, -0x4A74(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x4A98(r2)
	  stw       r0, 0x19C(r30)
	  mr        r3, r30
	  lfs       f0, -0x4A34(r2)
	  stfs      f2, 0x1B4(r30)
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E2EF8
 * Size:	000110
 */
void Game::ItemRock::Mgr::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x228
	  bl        -0x1BF070
	  mr.       r31, r3
	  beq-      .loc_0xE8
	  li        r4, 0x409
	  bl        -0x16F3C
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x60A0
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1BF0A8
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x60B8
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x60D0
	  subi      r0, r4, 0x5D58
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x8C:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804C
	  addi      r3, r31, 0x1E0
	  subi      r4, r4, 0x62F4
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x4BC14
	  lis       r3, 0x804C
	  lfs       f0, -0x4A98(r2)
	  subi      r3, r3, 0x6518
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  addi      r3, r3, 0x1B0
	  stw       r3, 0x178(r31)
	  stfs      f0, 0x118(r31)
	  stw       r0, 0x1EC(r31)

	.loc_0xE8:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x157C0
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3008
 * Size:	000060
 */
void Game::ItemRock::Mgr::generatorBirth(Vector3<float>&, Vector3<float>&,
                                         Game::GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  mr        r31, r3
	  bl        -0xA8070
	  mr        r3, r31
	  mr        r4, r30
	  li        r5, 0
	  bl        -0xA7EA0
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3068
 * Size:	0000A8
 */
void Game::ItemRock::Mgr::onLoadResources()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0xB10
	  subi      r4, r2, 0x4A28
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x161BC
	  mr        r3, r29
	  addi      r4, r31, 0x150
	  li        r5, 0
	  lis       r6, 0x2002
	  bl        -0x16154
	  lwz       r3, 0x1C(r29)
	  lis       r4, 0x4
	  lwz       r3, 0x0(r3)
	  bl        -0x15F7DC
	  lwz       r3, 0x1C(r29)
	  lwz       r3, 0x0(r3)
	  bl        -0x15F690
	  mr        r3, r29
	  addi      r4, r31, 0x15C
	  bl        -0x15F00
	  mr        r0, r3
	  mr        r3, r29
	  mr        r30, r0
	  addi      r5, r31, 0x168
	  mr        r4, r30
	  bl        -0x160E8
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x15EA0
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
 * Address:	801E3110
 * Size:	000134
 */
void Game::ItemRock::Mgr::~Mgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  subi      r3, r3, 0x6658
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x7180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x724C
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0x723C
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x22E3F8

	.loc_0x84:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x7348
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x22E3A8

	.loc_0xD4:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x7348
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x22E374

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0x1BF170

	.loc_0x118:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3244
 * Size:	0000F8
 */
void Game::ItemRock::Mgr::doNew()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x228
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1BF3B4
	  mr.       r31, r3
	  beq-      .loc_0xE0
	  li        r4, 0x409
	  bl        -0x17280
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x60A0
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1BF3EC
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x60B8
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x60D0
	  subi      r0, r4, 0x5D58
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x84:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804C
	  addi      r3, r31, 0x1E0
	  subi      r4, r4, 0x62F4
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x4B8D0
	  lis       r3, 0x804C
	  lfs       f0, -0x4A98(r2)
	  subi      r3, r3, 0x6518
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  addi      r3, r3, 0x1B0
	  stw       r3, 0x178(r31)
	  stfs      f0, 0x118(r31)
	  stw       r0, 0x1EC(r31)

	.loc_0xE0:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E333C
 * Size:	00000C
 */
void Game::ItemRock::Mgr::generatorGetID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x726F
	  addi      r3, r3, 0x636B
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3348
 * Size:	00000C
 */
void efx::ArgKouhai::getName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0xC84
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3354
 * Size:	00000C
 */
void Game::ItemRock::Item::getCreatureName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0xC90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3360
 * Size:	000034
 */
void Game::FSMItem<Game::ItemRock::Item, Game::ItemRock::FSM,
                   Game::ItemRock::State>::doAI()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	801E3394
 * Size:	000044
 */
void Game::FSMItem<Game::ItemRock::Item, Game::ItemRock::FSM,
                   Game::ItemRock::State>::onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E33D8
 * Size:	000004
 */
void Game::ItemState<Game::ItemRock::Item>::onDamage(Game::ItemRock::Item*,
                                                     float)
{
}

/*
 * --INFO--
 * Address:	801E33DC
 * Size:	000004
 */
void Game::ItemState<Game::ItemRock::Item>::onBounce(Game::ItemRock::Item*,
                                                     Sys::Triangle*)
{
}

/*
 * --INFO--
 * Address:	801E33E0
 * Size:	000004
 */
void Game::ItemState<Game::ItemRock::Item>::onPlatCollision(
    Game::ItemRock::Item*, Game::PlatEvent&)
{
}

/*
 * --INFO--
 * Address:	801E33E4
 * Size:	000004
 */
void Game::ItemState<Game::ItemRock::Item>::onCollision(Game::ItemRock::Item*,
                                                        Game::CollEvent&)
{
}

/*
 * --INFO--
 * Address:	801E33E8
 * Size:	000004
 */
void Game::FSMState<Game::ItemRock::Item>::init(Game::ItemRock::Item*,
                                                Game::StateArg*)
{
}

/*
 * --INFO--
 * Address:	801E33EC
 * Size:	000004
 */
void Game::FSMState<Game::ItemRock::Item>::exec(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E33F0
 * Size:	000004
 */
void Game::FSMState<Game::ItemRock::Item>::cleanup(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E33F4
 * Size:	000004
 */
void Game::FSMState<Game::ItemRock::Item>::resume(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E33F8
 * Size:	000004
 */
void Game::FSMState<Game::ItemRock::Item>::restart(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E33FC
 * Size:	000004
 */
void Game::StateMachine<Game::ItemRock::Item>::init(Game::ItemRock::Item*) { }

/*
 * --INFO--
 * Address:	801E3400
 * Size:	000038
 */
void Game::StateMachine<Game::ItemRock::Item>::exec(Game::ItemRock::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
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
 * Address:	801E3438
 * Size:	000064
 */
void Game::StateMachine<Game::ItemRock::Item>::create(int)
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
	  bl        -0x1BF4B4
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1BF4C4
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1BF4D4
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
 * Address:	801E349C
 * Size:	00009C
 */
void Game::StateMachine<Game::ItemRock::Item>::transit(Game::ItemRock::Item*,
                                                       int, Game::StateArg*)
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
	  lwz       r30, 0x1DC(r4)
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
	  stw       r3, 0x1DC(r28)
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
 * Address:	801E3538
 * Size:	000084
 */
void Game::StateMachine<Game::ItemRock::Item>::registerState(
    Game::FSMState<Game::ItemRock::Item>*)
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

/*
 * --INFO--
 * Address:	801E35BC
 * Size:	000044
 */
void Game::FSMItem<Game::ItemRock::Item, Game::ItemRock::FSM,
                   Game::ItemRock::State>::platCallback(Game::PlatEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3600
 * Size:	000044
 */
void Game::FSMItem<Game::ItemRock::Item, Game::ItemRock::FSM,
                   Game::ItemRock::State>::collisionCallback(Game::CollEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3644
 * Size:	000044
 */
void Game::FSMItem<Game::ItemRock::Item, Game::ItemRock::FSM,
                   Game::ItemRock::State>::bounceCallback(Sys::Triangle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E3688
 * Size:	000008
 */
void Game::FSMItem<Game::ItemRock::Item, Game::ItemRock::FSM,
                   Game::ItemRock::State>::@376
    @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x2F8
	*/
}

/*
 * --INFO--
 * Address:	801E3690
 * Size:	000008
 */
void Game::ItemRock::Item::@376 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x1E84
	*/
}

/*
 * --INFO--
 * Address:	801E3698
 * Size:	000008
 */
void Game::ItemRock::Mgr::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x58C
	*/
}
