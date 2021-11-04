#include "types.h"

/*
 * --INFO--
 * Address:	80115F90
 * Size:	000144
 */
void Game::Chappy::Obj::Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x40
	  addi      r0, r31, 0x2E4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E4(r31)
	  stw       r0, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x14978
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2E4
	  subi      r5, r3, 0x4330
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x334
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0xF216C
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        0x11958
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x3E18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  subi      r4, r4, 0x4678
	  subi      r3, r3, 0x4200
	  li        r0, 0
	  stw       r4, 0x10(r30)
	  stw       r3, 0x10(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x14(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x20(r30)

	.loc_0xCC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0xF21C0
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x3E3C
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x31C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801160D4
 * Size:	00004C
 */
void Game::ChappyBase::Obj::setFSM(Game::ChappyBase::FSM*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2BC(r3)
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x2B4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80116120
 * Size:	0000BC
 */
void Game::ChappyBase::Obj::~Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2E4
	  subi      r4, r3, 0x20B4
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x334
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x2FB3DC

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0xF2108

	.loc_0xA0:
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
 * Address:	801161DC
 * Size:	0002B0
 */
void Game::Chappy::Obj::changeMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r3, 0x180(r3)
	  lwz       r4, 0x174(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r28, 0x8(r4)
	  lwz       r12, 0xE0(r12)
	  lwz       r29, 0x4(r28)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lwz       r3, 0x180(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r27)
	  lbz       r0, 0x0(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x6C(r3)
	  lwz       r3, 0x4(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r30)
	  stb       r0, 0x1(r3)
	  lhz       r0, 0x2(r30)
	  sth       r0, 0x2(r3)
	  lhz       r0, 0x4(r30)
	  sth       r0, 0x4(r3)
	  lbz       r0, 0x6(r30)
	  stb       r0, 0x6(r3)
	  lbz       r0, 0x7(r30)
	  stb       r0, 0x7(r3)
	  lbz       r0, 0x8(r30)
	  stb       r0, 0x8(r3)
	  lbz       r0, 0x9(r30)
	  stb       r0, 0x9(r3)
	  lhz       r0, 0xA(r30)
	  sth       r0, 0xA(r3)
	  lwz       r0, 0xC(r30)
	  stw       r0, 0xC(r3)
	  lbz       r0, 0x10(r30)
	  stb       r0, 0x10(r3)
	  lbz       r0, 0x11(r30)
	  stb       r0, 0x11(r3)
	  lbz       r0, 0x12(r30)
	  stb       r0, 0x12(r3)
	  lbz       r0, 0x13(r30)
	  stb       r0, 0x13(r3)
	  lbz       r0, 0x14(r30)
	  stb       r0, 0x14(r3)
	  lbz       r0, 0x15(r30)
	  stb       r0, 0x15(r3)
	  lbz       r0, 0x16(r30)
	  stb       r0, 0x16(r3)
	  lbz       r0, 0x17(r30)
	  stb       r0, 0x17(r3)
	  lbz       r0, 0x18(r30)
	  stb       r0, 0x18(r3)
	  lbz       r0, 0x19(r30)
	  stb       r0, 0x19(r3)
	  lha       r0, 0x1A(r30)
	  sth       r0, 0x1A(r3)
	  lwz       r0, 0x1C(r30)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x1C(r3)
	  add       r0, r30, r0
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0xC(r3)
	  add       r0, r30, r0
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  lwz       r3, 0x174(r27)
	  lbz       r0, 0x0(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x6C(r3)
	  lwz       r3, 0x4(r4)
	  stb       r0, 0x20(r3)
	  lbz       r0, 0x1(r31)
	  stb       r0, 0x21(r3)
	  lhz       r0, 0x2(r31)
	  sth       r0, 0x22(r3)
	  lhz       r0, 0x4(r31)
	  sth       r0, 0x24(r3)
	  lbz       r0, 0x6(r31)
	  stb       r0, 0x26(r3)
	  lbz       r0, 0x7(r31)
	  stb       r0, 0x27(r3)
	  lbz       r0, 0x8(r31)
	  stb       r0, 0x28(r3)
	  lbz       r0, 0x9(r31)
	  stb       r0, 0x29(r3)
	  lhz       r0, 0xA(r31)
	  sth       r0, 0x2A(r3)
	  lwz       r0, 0xC(r31)
	  stw       r0, 0x2C(r3)
	  lbz       r0, 0x10(r31)
	  stb       r0, 0x30(r3)
	  lbz       r0, 0x11(r31)
	  stb       r0, 0x31(r3)
	  lbz       r0, 0x12(r31)
	  stb       r0, 0x32(r3)
	  lbz       r0, 0x13(r31)
	  stb       r0, 0x33(r3)
	  lbz       r0, 0x14(r31)
	  stb       r0, 0x34(r3)
	  lbz       r0, 0x15(r31)
	  stb       r0, 0x35(r3)
	  lbz       r0, 0x16(r31)
	  stb       r0, 0x36(r3)
	  lbz       r0, 0x17(r31)
	  lis       r5, 0x8051
	  subi      r27, r5, 0xDD0
	  li        r30, 0
	  stb       r0, 0x37(r3)
	  lbz       r0, 0x18(r31)
	  stb       r0, 0x38(r3)
	  lbz       r0, 0x19(r31)
	  stb       r0, 0x39(r3)
	  lha       r0, 0x1A(r31)
	  sth       r0, 0x3A(r3)
	  lwz       r0, 0x1C(r31)
	  stw       r0, 0x3C(r3)
	  lwz       r5, 0x4(r4)
	  lwz       r0, 0x3C(r5)
	  addi      r3, r5, 0x20
	  add       r0, r31, r0
	  sub       r0, r0, r3
	  stw       r0, 0x3C(r5)
	  lwz       r4, 0x4(r4)
	  lwz       r0, 0x2C(r4)
	  addi      r3, r4, 0x20
	  add       r0, r31, r0
	  sub       r0, r0, r3
	  stw       r0, 0x2C(r4)
	  b         .loc_0x28C

	.loc_0x254:
	  lwz       r4, 0xC0(r28)
	  rlwinm    r3,r30,6,10,25
	  rlwinm    r0,r30,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r27)
	  lwz       r3, 0x60(r29)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1

	.loc_0x28C:
	  lhz       r0, 0x5C(r29)
	  rlwinm    r3,r30,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x254
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011648C
 * Size:	000008
 */
void Game::Chappy::Mgr::getChangeTexture1()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x48(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80116494
 * Size:	000008
 */
void Game::Chappy::Mgr::getChangeTexture0()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011649C
 * Size:	0000EC
 */
void Game::Chappy::Obj::~Obj()
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804B
	  addi      r5, r30, 0x2E4
	  subi      r4, r3, 0x4330
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x334
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x20B4
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x334
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x2FB030

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0xF24B4

	.loc_0xD0:
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
 * Address:	80116588
 * Size:	000008
 */
u32 Game::Chappy::Obj::getEnemyTypeID() { return 0x2; }

/*
 * --INFO--
 * Address:	80116590
 * Size:	000008
 */
void Game::ChappyBase::Obj::getMouthSlots()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80116598
 * Size:	000020
 */
void Game::ChappyBase::Obj::setAnimationSpeed(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xF214
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801165B8
 * Size:	000004
 */
void Game::ChappyBase::Obj::resetUnderGround() { }

/*
 * --INFO--
 * Address:	801165BC
 * Size:	000004
 */
void Game::ChappyBase::Obj::setUnderGround() { }

/*
 * --INFO--
 * Address:	801165C0
 * Size:	000004
 */
void Game::ChappyBase::Obj::createFlickEffect() { }

/*
 * --INFO--
 * Address:	801165C4
 * Size:	000004
 */
void Game::ChappyBase::Obj::createSmokeEffect() { }

/*
 * --INFO--
 * Address:	801165C8
 * Size:	000008
 */
void Game::ChappyBase::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x68C8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801165D0
 * Size:	000014
 */
void Game::EnemyBase::@740 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E4
	  b         -0xFCC4
	*/
}

/*
 * --INFO--
 * Address:	801165E4
 * Size:	000014
 */
void Game::EnemyBase::@740 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E4
	  b         -0xFF4C
	*/
}

/*
 * --INFO--
 * Address:	801165F8
 * Size:	000014
 */
void Game::EnemyBase::@740 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E4
	  b         -0xFF40
	*/
}

/*
 * --INFO--
 * Address:	8011660C
 * Size:	000014
 */
void Game::EnemyBase::@740 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E4
	  b         -0xFBA4
	*/
}

/*
 * --INFO--
 * Address:	80116620
 * Size:	000014
 */
void Game::EnemyBase::@740 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E4
	  b         -0xFBE4
	*/
}

/*
 * --INFO--
 * Address:	80116634
 * Size:	000014
 */
void Game::EnemyBase::@740 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E4
	  b         -0xFFA4
	*/
}
