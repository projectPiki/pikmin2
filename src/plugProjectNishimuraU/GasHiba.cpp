#include "types.h"

/*
 * --INFO--
 * Address:	8026D14C
 * Size:	000138
 */
void Game::GasHiba::Obj::Obj()
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
	  addi      r0, r31, 0x2D4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2D4(r31)
	  stw       r0, 0x2D8(r31)
	  stw       r0, 0x2DC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x16BDF4
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2D4
	  addi      r5, r3, 0x59DC
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x249328
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x145864
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x58B8
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
	  bl        -0x24937C
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x5890
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xBE8
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
 * Address:	8026D284
 * Size:	000004
 */
void Game::GasHiba::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8026D288
 * Size:	000100
 */
void Game::GasHiba::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x16B84C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,20,18
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  bl        -0x165B54
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x16B8DC
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x2B688
	  lfs       f0, -0x32E8(r2)
	  mr        r3, r31
	  stfs      f0, 0x2C4(r31)
	  bl        0x490
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C1(r31)
	  bl        0xAEC
	  lwz       r3, 0xC0(r31)
	  lfs       f31, 0x81C(r3)
	  bl        -0x1A3D7C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  mr        r4, r31
	  lfd       f2, -0x32E0(r2)
	  addi      r6, r1, 0x8
	  stw       r0, 0x10(r1)
	  li        r5, 0x1
	  lfs       f0, -0x32E4(r2)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f31, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x8(r1)
	  lwz       r3, 0x2BC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8026D388
 * Size:	000034
 */
void Game::GasHiba::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2BC(r3)
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
 * Address:	8026D3BC
 * Size:	000004
 */
void Game::GasHiba::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026D3C0
 * Size:	000020
 */
void Game::GasHiba::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x167560
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D3E0
 * Size:	00004C
 */
void Game::GasHiba::Obj::setFSM(Game::GasHiba::FSM*)
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
 * Address:	8026D42C
 * Size:	000038
 */
void Game::GasHiba::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f1, -0x32E8(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f0, -0x32D8(r2)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0x4(r4)
	  lfs       f2, 0x194(r3)
	  stfs      f2, 0x8(r4)
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  stfs      f1, 0x14(r4)
	  stfs      f0, 0x18(r4)
	  stfs      f0, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D464
 * Size:	0000C8
 */
void Game::GasHiba::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r31, r4
	  fmr       f31, f1
	  mr        r30, r3
	  beq-      .loc_0xA4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA4
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x190(r30)
	  lwz       r3, 0xC0(r30)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x564(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xA4
	  lfs       f0, 0x58C(r3)
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA4
	  fmr       f1, f31
	  lfs       f2, -0x32D8(r2)
	  mr        r3, r30
	  bl        -0x1674D0
	  li        r3, 0x1
	  b         .loc_0xA8

	.loc_0xA4:
	  li        r3, 0

	.loc_0xA8:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D52C
 * Size:	000030
 */
void Game::GasHiba::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x278(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D55C
 * Size:	000030
 */
void Game::GasHiba::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x278(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D58C
 * Size:	000034
 */
void Game::GasHiba::Obj::bombCallBack(Game::Creature*, Vector3<float>&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x278(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D5C0
 * Size:	0001D0
 */
void Game::GasHiba::Obj::interactGasAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x30
	  lwz       r5, 0xC0(r30)
	  addi      r4, r1, 0x20
	  lfs       f2, 0x190(r30)
	  lfs       f0, 0x564(r5)
	  lfs       f1, 0x58C(r5)
	  lfs       f3, 0x5B4(r5)
	  fadds     f31, f2, f0
	  lfs       f0, 0x18C(r30)
	  fsubs     f30, f2, f1
	  fmuls     f29, f3, f3
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x28(r1)
	  stfs      f3, 0x2C(r1)
	  bl        -0x3F294
	  li        r0, 0x1
	  addi      r3, r1, 0x50
	  stb       r0, 0x4C(r1)
	  addi      r4, r1, 0x30
	  bl        -0x3F268
	  addi      r3, r1, 0x50
	  bl        -0x3F1F4
	  b         .loc_0x190

	.loc_0x98:
	  addi      r3, r1, 0x50
	  bl        -0x3F118
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188

	.loc_0xF4:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fcmpo     cr0, f31, f0
	  lfs       f3, 0x10(r1)
	  ble-      .loc_0x188
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x188
	  lfs       f0, 0x194(r30)
	  lfs       f1, 0x18C(r30)
	  fsubs     f0, f0, f3
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x188
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r31
	  lfs       f0, 0x604(r6)
	  subi      r5, r5, 0x5D00
	  addi      r0, r4, 0x480C
	  addi      r4, r1, 0x14
	  stw       r5, 0x14(r1)
	  stw       r30, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  addi      r3, r1, 0x50
	  bl        -0x3F24C

	.loc_0x190:
	  addi      r3, r1, 0x50
	  bl        -0x3F220
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x98
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D790
 * Size:	000018
 */
void Game::GasHiba::Obj::resetBridgeGateCheck()
{
	/*
	.loc_0x0:
	  li        r4, 0x1
	  li        r0, 0
	  stb       r4, 0x2C0(r3)
	  stw       r0, 0x2C8(r3)
	  stw       r0, 0x2CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026D7A8
 * Size:	0005B0
 */
void Game::GasHiba::Obj::setInitLivingThing()
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
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r31, r3
	  lbz       r0, 0x2C0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x588
	  li        r0, 0
	  stb       r0, 0x2C0(r31)
	  stw       r0, 0x2C8(r31)
	  stw       r0, 0x2CC(r31)
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x55C
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x55C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x55C
	  lwz       r3, -0x6B48(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2E0
	  beq-      .loc_0x7C
	  addi      r3, r3, 0x30

	.loc_0x7C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x30(r1)
	  stw       r0, 0x34(r1)
	  stw       r3, 0x38(r1)
	  bne-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x140

	.loc_0xB8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x124

	.loc_0xD0:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x140
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x124:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD0

	.loc_0x140:
	  lfs       f31, -0x32E8(r2)
	  lfs       f30, -0x32D4(r2)
	  b         .loc_0x2C0

	.loc_0x14C:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x14
	  mr        r30, r0
	  lwz       r12, 0x0(r30)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x190(r31)
	  lfs       f2, 0x14(r1)
	  fsubs     f0, f1, f0
	  lfs       f3, 0x1C(r1)
	  fcmpo     cr0, f0, f31
	  ble-      .loc_0x1A0
	  b         .loc_0x1A4

	.loc_0x1A0:
	  fneg      f0, f0

	.loc_0x1A4:
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x204
	  lfs       f1, 0x18C(r31)
	  lfs       f0, -0x32E8(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C4
	  b         .loc_0x1C8

	.loc_0x1C4:
	  fneg      f1, f1

	.loc_0x1C8:
	  lfs       f0, -0x32D0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x204
	  lfs       f1, 0x194(r31)
	  lfs       f0, -0x32E8(r2)
	  fsubs     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1EC
	  b         .loc_0x1F0

	.loc_0x1EC:
	  fneg      f1, f1

	.loc_0x1F0:
	  lfs       f0, -0x32D0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x204
	  stw       r30, 0x2C8(r31)
	  b         .loc_0x2E0

	.loc_0x204:
	  lwz       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x230
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x2C0

	.loc_0x230:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x2A4

	.loc_0x250:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C0
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x2A4:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x250

	.loc_0x2C0:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x34(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x14C

	.loc_0x2E0:
	  lwz       r5, -0x6BD0(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x55C
	  lwz       r0, 0x2C8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x55C
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r4, r3, 0x5A7C
	  addi      r3, r5, 0x30
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x338
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3C0

	.loc_0x338:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3A4

	.loc_0x350:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C0
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x3A4:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x350

	.loc_0x3C0:
	  lfs       f30, -0x32E8(r2)
	  lfs       f31, -0x32D4(r2)
	  b         .loc_0x53C

	.loc_0x3CC:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x190(r31)
	  lfs       f2, 0x8(r1)
	  fsubs     f0, f1, f0
	  lfs       f3, 0x10(r1)
	  fcmpo     cr0, f0, f30
	  ble-      .loc_0x41C
	  b         .loc_0x420

	.loc_0x41C:
	  fneg      f0, f0

	.loc_0x420:
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x480
	  lfs       f1, 0x18C(r31)
	  lfs       f0, -0x32E8(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x440
	  b         .loc_0x444

	.loc_0x440:
	  fneg      f1, f1

	.loc_0x444:
	  lfs       f0, -0x32D0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x480
	  lfs       f1, 0x194(r31)
	  lfs       f0, -0x32E8(r2)
	  fsubs     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x468
	  b         .loc_0x46C

	.loc_0x468:
	  fneg      f1, f1

	.loc_0x46C:
	  lfs       f0, -0x32D0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x480
	  stw       r30, 0x2CC(r31)
	  b         .loc_0x55C

	.loc_0x480:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4AC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x53C

	.loc_0x4AC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x520

	.loc_0x4CC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x53C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x520:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x4CC

	.loc_0x53C:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x3CC

	.loc_0x55C:
	  lwz       r0, 0x2C8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x574
	  lwz       r0, 0x2CC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x580

	.loc_0x574:
	  li        r0, 0
	  stb       r0, 0x2C1(r31)
	  b         .loc_0x588

	.loc_0x580:
	  li        r0, 0x1
	  stb       r0, 0x2C1(r31)

	.loc_0x588:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DD58
 * Size:	00009C
 */
void Game::GasHiba::Obj::updateLivingThing()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  lwz       r3, 0x2C8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r0, 0x218(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x88
	  li        r0, 0x1
	  stb       r0, 0x2C1(r31)
	  b         .loc_0x88

	.loc_0x50:
	  lwz       r3, 0x2CC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  li        r0, 0x1
	  stb       r0, 0x2C1(r31)
	  b         .loc_0x88

	.loc_0x80:
	  li        r0, 0x1
	  stb       r0, 0x2C1(r31)

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DDF4
 * Size:	000008
 */
void Game::GasHiba::Obj::isLivingThing()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x2C1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DDFC
 * Size:	000024
 */
void Game::GasHiba::Obj::setupLodParms()
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  li        r0, 0
	  lfs       f0, 0x8BC(r4)
	  stfs      f0, 0x264(r3)
	  lwz       r4, 0xC0(r3)
	  lfs       f0, 0x8E4(r4)
	  stfs      f0, 0x268(r3)
	  stb       r0, 0x26C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DE20
 * Size:	00002C
 */
void Game::GasHiba::Obj::updateEfxLod()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xD8(r3)
	  lwz       r3, 0x2D0(r3)
	  rlwinm    r4,r0,0,30,31
	  bl        0x146D14
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DE4C
 * Size:	00005C
 */
void Game::GasHiba::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x24
	  bl        -0x249FC4
	  mr.       r31, r3
	  beq-      .loc_0x40
	  li        r4, 0x74
	  li        r5, 0x75
	  bl        0x142194
	  lis       r3, 0x804E
	  addi      r0, r3, 0x6B98
	  stw       r0, 0x0(r31)

	.loc_0x40:
	  stw       r31, 0x2D0(r30)
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
 * Address:	8026DEA8
 * Size:	0000A0
 */
void Game::GasHiba::Obj::startGasEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r8, 0
	  stw       r0, 0x34(r1)
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x2C
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C
	  li        r8, 0x1

	.loc_0x2C:
	  lwz       r0, 0x18C(r3)
	  lis       r5, 0x804B
	  lwz       r7, 0x190(r3)
	  lis       r4, 0x804C
	  lwz       r6, 0x194(r3)
	  subi      r5, r5, 0x5814
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x59D0
	  addi      r4, r1, 0x14
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stb       r8, 0x24(r1)
	  lwz       r3, 0x2D0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DF48
 * Size:	000030
 */
void Game::GasHiba::Obj::finishGasEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D0(r3)
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
 * Address:	8026DF78
 * Size:	000044
 */
void Game::GasHiba::Obj::generatorKill()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xC4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        -0xC32A8
	  li        r0, 0
	  stw       r0, 0xC4(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DFBC
 * Size:	00000C
 */
void efx::ArgGasuHiba::getName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x64F8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026DFC8
 * Size:	000004
 */
void Game::GasHiba::Obj::doSimulation(float) { }

/*
 * --INFO--
 * Address:	8026DFCC
 * Size:	000004
 */
void Game::GasHiba::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8026DFD0
 * Size:	000004
 */
void Game::GasHiba::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8026DFD4
 * Size:	000004
 */
void Game::GasHiba::Obj::lifeRecover() { }
