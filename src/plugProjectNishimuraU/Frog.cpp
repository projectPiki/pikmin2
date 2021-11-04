#include "types.h"

/*
 * --INFO--
 * Address:	80258548
 * Size:	000138
 */
void Game::Frog::Obj::Obj()
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
	  addi      r0, r31, 0x2E0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E0(r31)
	  stw       r0, 0x2E4(r31)
	  stw       r0, 0x2E8(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1571F0
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2E0
	  addi      r5, r3, 0x24D0
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x304
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x234724
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x130C60
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x2338
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
	  bl        -0x234778
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x2314
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xD88
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
 * Address:	80258680
 * Size:	000004
 */
void Game::Frog::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80258684
 * Size:	000078
 */
void Game::Frog::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x156C40
	  lfs       f1, -0x3898(r2)
	  li        r4, -0x1
	  lfs       f0, -0x3894(r2)
	  li        r0, 0
	  stfs      f1, 0x2C4(r31)
	  mr        r3, r31
	  stfs      f0, 0x2C0(r31)
	  stw       r4, 0x2D4(r31)
	  stb       r0, 0x2D8(r31)
	  stb       r0, 0x2D9(r31)
	  bl        0xDD4
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
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
 * Address:	802586FC
 * Size:	000044
 */
void Game::Frog::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0xDC4
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x15683C
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
 * Address:	80258740
 * Size:	000044
 */
void Game::Frog::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x824
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
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
 * Address:	80258784
 * Size:	000280
 */
void Game::Frog::Obj::doSimulationFlying(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lfs       f0, -0x3894(r2)
	  lwz       r3, 0xC0(r3)
	  lfs       f2, 0x2C0(r31)
	  lfs       f3, 0x81C(r3)
	  fsubs     f8, f3, f2
	  fcmpo     cr0, f8, f0
	  ble-      .loc_0x128
	  lfs       f6, 0x1D0(r31)
	  lfs       f5, 0x1C8(r31)
	  fmuls     f2, f6, f6
	  fmadds    f4, f5, f5, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x70
	  ble-      .loc_0x74
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x74

	.loc_0x70:
	  fmr       f4, f0

	.loc_0x74:
	  lfs       f3, 0x2C8(r31)
	  lfs       f2, 0x18C(r31)
	  lfs       f0, -0x3894(r2)
	  fsubs     f2, f3, f2
	  stfs      f2, 0x1C8(r31)
	  lfs       f3, 0x2D0(r31)
	  lfs       f2, 0x194(r31)
	  fsubs     f2, f3, f2
	  stfs      f2, 0x1D0(r31)
	  lfs       f7, 0x1C8(r31)
	  lfs       f3, 0x1D0(r31)
	  fmuls     f2, f7, f7
	  fmuls     f3, f3, f3
	  fadds     f2, f2, f3
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xCC
	  fmadds    f2, f7, f7, f3
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xD0
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xD0

	.loc_0xCC:
	  fmr       f2, f0

	.loc_0xD0:
	  lfs       f0, -0x3890(r2)
	  fmuls     f0, f0, f2
	  fdivs     f3, f0, f8
	  fcmpo     cr0, f3, f4
	  ble-      .loc_0xF0
	  stfs      f5, 0x1C8(r31)
	  stfs      f6, 0x1D0(r31)
	  b         .loc_0x130

	.loc_0xF0:
	  lfs       f0, -0x3894(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x11C
	  fdivs     f0, f7, f2
	  fmuls     f0, f3, f0
	  stfs      f0, 0x1C8(r31)
	  lfs       f0, 0x1D0(r31)
	  fdivs     f0, f0, f2
	  fmuls     f0, f3, f0
	  stfs      f0, 0x1D0(r31)
	  b         .loc_0x130

	.loc_0x11C:
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1C8(r31)
	  b         .loc_0x130

	.loc_0x128:
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1C8(r31)

	.loc_0x130:
	  lwz       r3, -0x6C10(r13)
	  lfs       f2, 0x1CC(r31)
	  lfs       f3, 0x28(r3)
	  lfs       f0, -0x3894(r2)
	  fnmsubs   f1, f1, f3, f2
	  stfs      f1, 0x1CC(r31)
	  lfs       f1, 0x1CC(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x23C
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lfs       f30, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x2D0(r31)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x223824
	  bl        0x1B92A0
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x1B92A8
	  fmuls     f31, f1, f31
	  lfs       f0, -0x3888(r2)
	  lfs       f1, -0x388C(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x210
	  lfs       f0, -0x3894(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x20C
	  fmr       f31, f1
	  b         .loc_0x210

	.loc_0x20C:
	  fneg      f31, f1

	.loc_0x210:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0x1B9224
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  b         .loc_0x240

	.loc_0x23C:
	  stfs      f0, 0x1CC(r31)

	.loc_0x240:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258A04
 * Size:	000004
 */
void Game::Frog::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80258A08
 * Size:	000020
 */
void Game::Frog::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x152BA8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258A28
 * Size:	00004C
 */
void Game::Frog::Obj::setFSM(Game::Frog::FSM*)
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
 * Address:	80258A74
 * Size:	000110
 */
void Game::Frog::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, -0x3884(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x190(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x90
	  lfs       f0, -0x3880(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0xDC

	.loc_0x90:
	  lfs       f0, -0x387C(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0xDC

	.loc_0x9C:
	  mr        r3, r30
	  bl        -0x151720
	  cmpwi     r3, 0x4
	  bne-      .loc_0xBC
	  lfs       f1, 0x4(r31)
	  lfs       f0, -0x3878(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r31)

	.loc_0xBC:
	  lwz       r3, 0xC0(r30)
	  lfs       f1, -0x3874(r2)
	  lfs       f0, 0x844(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0xDC

	.loc_0xD4:
	  lfs       f0, -0x3870(r2)
	  stfs      f0, 0x18(r31)

	.loc_0xDC:
	  lfs       f2, -0x3894(r2)
	  lfs       f1, -0x386C(r2)
	  stfs      f2, 0xC(r31)
	  lfs       f0, -0x3878(r2)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  stfs      f0, 0x1C(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258B84
 * Size:	000104
 */
void Game::Frog::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r31, 0x0(r4)
	  cmplwi    r31, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x1E0(r29)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0xD0
	  lbz       r0, 0x2D9(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xD0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0

	.loc_0x88:
	  lwz       r5, 0xC0(r29)
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  li        r0, 0
	  lfs       f0, 0x604(r5)
	  subi      r5, r4, 0x5D00
	  subi      r3, r3, 0x4CE0
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r29, 0xC(r1)
	  stw       r3, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD0:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x240(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80258C88
 * Size:	000034
 */
void Game::Frog::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x155DA8
	  mr        r3, r31
	  bl        0x838
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258CBC
 * Size:	000064
 */
void Game::Frog::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x155DC8
	  mr        r3, r31
	  bl        -0x1518E4
	  cmpwi     r3, 0x3
	  blt-      .loc_0x50
	  cmpwi     r3, 0x6
	  bgt-      .loc_0x50
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258D20
 * Size:	000034
 */
void Game::Frog::Obj::doStartEarthquakeFitState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1513D0
	  mr        r3, r31
	  bl        0x7A0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258D54
 * Size:	00005C
 */
void Game::Frog::Obj::doFinishEarthquakeFitState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x151400
	  mr        r3, r31
	  bl        -0x15197C
	  cmpwi     r3, 0x3
	  bne-      .loc_0x48
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258DB0
 * Size:	000034
 */
void Game::Frog::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15142C
	  mr        r3, r31
	  bl        0x830
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258DE4
 * Size:	000034
 */
void Game::Frog::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x151430
	  mr        r3, r31
	  bl        0x7CC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258E18
 * Size:	000028
 */
void Game::Frog::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xA
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x153E28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258E40
 * Size:	00001C
 */
void Game::Frog::Obj::viewGetCollTreeOffset()
{
	/*
	.loc_0x0:
	  lfs       f0, -0x3868(r2)
	  lfs       f1, -0x3864(r2)
	  stfs      f0, 0x0(r3)
	  lfs       f0, -0x3894(r2)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258E5C
 * Size:	000020
 */
void Game::Frog::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x794
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258E7C
 * Size:	000020
 */
void Game::Frog::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x744
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258E9C
 * Size:	000088
 */
void Game::Frog::Obj::getOffsetForMapCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0x18C(r31)
	  lfs       f0, -0x3894(r2)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f2, 0x8(r1)
	  lfs       f0, 0x194(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x0(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258F24
 * Size:	000054
 */
void Game::Frog::Obj::getCommonEffectPos(Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258F78
 * Size:	000050
 */
void Game::Frog::Obj::updateCaution()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x1E0(r3)
	  rlwinm.   r0,r4,0,27,27
	  bne-      .loc_0x20
	  rlwinm.   r0,r4,0,30,30
	  bne-      .loc_0x20
	  lwz       r0, 0x1F4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x28

	.loc_0x20:
	  lfs       f0, -0x3894(r2)
	  stfs      f0, 0x2C4(r3)

	.loc_0x28:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2C4(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bgelr-
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258FC8
 * Size:	000024
 */
void Game::Frog::Obj::getViewAngle()
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2C4(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C
	  lfs       f1, -0x3860(r2)
	  blr

	.loc_0x1C:
	  lfs       f1, 0x424(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80258FEC
 * Size:	0000D8
 */
void Game::Frog::Obj::startJumpAttack()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  lfs       f2, -0x3894(r2)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r3)
	  stfs      f2, 0x2C0(r3)
	  lfs       f1, 0x2C8(r3)
	  lfs       f0, 0x18C(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1C8(r3)
	  lfs       f1, 0x2D0(r3)
	  lfs       f0, 0x194(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1D0(r3)
	  lfs       f3, 0x1C8(r3)
	  lfs       f1, 0x1D0(r3)
	  fmuls     f0, f3, f3
	  fmuls     f1, f1, f1
	  fadds     f0, f0, f1
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x68
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x6C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x6C

	.loc_0x68:
	  fmr       f1, f2

	.loc_0x6C:
	  lfs       f0, -0x3894(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x94
	  lfs       f0, 0x1C8(r3)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x1D0(r3)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x1D0(r3)
	  b         .loc_0x9C

	.loc_0x94:
	  stfs      f0, 0x1D0(r3)
	  stfs      f0, 0x1C8(r3)

	.loc_0x9C:
	  lfs       f0, -0x3890(r2)
	  lwz       r4, 0xC0(r3)
	  fmuls     f2, f0, f1
	  lfs       f0, 0x1C8(r3)
	  lfs       f1, 0x81C(r4)
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C8(r3)
	  lwz       r4, 0xC0(r3)
	  lfs       f0, 0x844(r4)
	  stfs      f0, 0x1CC(r3)
	  lfs       f0, 0x1D0(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802590C4
 * Size:	0000D8
 */
void Game::Frog::Obj::resetHomePosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f2, -0x385C(r2)
	  lwz       r4, 0xC0(r3)
	  lfs       f3, 0x1FC(r3)
	  lfs       f1, 0x384(r4)
	  lfs       f0, -0x3894(r2)
	  fmuls     f4, f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x50
	  lfs       f0, -0x3858(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f2, f0
	  b         .loc_0x74

	.loc_0x50:
	  lfs       f0, -0x3854(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0x74:
	  lfs       f1, 0x18C(r3)
	  lfs       f0, -0x3894(r2)
	  fmadds    f1, f4, f2, f1
	  stfs      f1, 0x198(r3)
	  lfs       f1, 0x190(r3)
	  stfs      f1, 0x19C(r3)
	  lfs       f2, 0x1FC(r3)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x9C
	  fneg      f2, f2

	.loc_0x9C:
	  lfs       f1, -0x3854(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  lfs       f0, 0x194(r3)
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r4, r0
	  lfs       f1, 0x4(r4)
	  fmadds    f0, f4, f1, f0
	  stfs      f0, 0x1A0(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025919C
 * Size:	00024C
 */
void Game::Frog::Obj::pressOnGround()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  lfs       f4, -0x3850(r2)
	  li        r4, 0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  lwz       r5, 0xC0(r3)
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1460AC
	  lfs       f0, -0x3894(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x44
	  stfs      f0, 0x20C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x190(r31)
	  lfs       f1, 0x44(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  lwz       r3, 0x280(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x0(r3)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5808
	  li        r5, 0
	  lis       r3, 0x804E
	  stw       r0, 0x54(r1)
	  addi      r0, r3, 0x6A3C
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x40(r1)
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  li        r9, 0x5C
	  subi      r10, r4, 0x5814
	  li        r8, 0x5D
	  li        r7, 0x5E
	  li        r6, 0x5F
	  stw       r0, 0x54(r1)
	  addi      r0, r3, 0x24BC
	  addi      r3, r1, 0x54
	  addi      r4, r1, 0x28
	  stfs      f2, 0x3C(r1)
	  stw       r10, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  sth       r9, 0x58(r1)
	  sth       r8, 0x5A(r1)
	  sth       r7, 0x5C(r1)
	  sth       r6, 0x5E(r1)
	  stw       r5, 0x60(r1)
	  stw       r5, 0x64(r1)
	  stw       r5, 0x68(r1)
	  stw       r5, 0x6C(r1)
	  stw       r0, 0x54(r1)
	  bl        0x155EBC
	  lfs       f1, -0x386C(r2)
	  mr        r3, r31
	  bl        0x21558C
	  b         .loc_0x1A8

	.loc_0x120:
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A64
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  stw       r0, 0x8(r1)
	  subi      r8, r4, 0x5814
	  addi      r0, r3, 0x24A8
	  li        r7, 0x60
	  li        r6, 0x61
	  stfs      f2, 0x3C(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x18
	  stw       r8, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  sth       r7, 0xC(r1)
	  sth       r6, 0xE(r1)
	  stw       r5, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x155CF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x38
	  bl        -0x155A00

	.loc_0x1A8:
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        -0x7118
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x5BE8
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x582D
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x20C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5827
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x238:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802593E8
 * Size:	0000B0
 */
void Game::Frog::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x23555C
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x245C
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x62
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x98:
	  stw       r3, 0x2DC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80259498
 * Size:	000010
 */
void Game::Frog::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2DC(r3)
	  addi      r0, r3, 0x18C
	  stw       r0, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802594A8
 * Size:	000034
 */
void Game::Frog::Obj::startJumpEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2DC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	802594DC
 * Size:	000030
 */
void Game::Frog::Obj::finishJumpEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2DC(r3)
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
 * Address:	8025950C
 * Size:	0000C0
 */
void Game::Frog::Obj::createDownEffect(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  fmr       f31, f1
	  mr        r31, r3
	  addi      r4, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x190(r31)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f1, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  fmr       f1, f31
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x155B78
	  b         .loc_0x7C

	.loc_0x6C:
	  fmr       f1, f31
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x155C44

	.loc_0x7C:
	  lwz       r3, -0x6960(r13)
	  addi      r5, r31, 0x18C
	  li        r4, 0
	  li        r6, 0x2
	  bl        -0x735C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r31, 0x18C
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x5E2C
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802595CC
 * Size:	000030
 */
void Game::Frog::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2DC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	802595FC
 * Size:	000030
 */
void Game::Frog::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2DC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	8025962C
 * Size:	00009C
 */
void efx::TFrogPota::~TFrogPota()
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
	  beq-      .loc_0x80
	  lis       r3, 0x804C
	  addi      r3, r3, 0x245C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x1C99FC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2355F4

	.loc_0x80:
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
 * Address:	802596C8
 * Size:	000004
 */
void efx::TSimple4::forceKill() { }

/*
 * --INFO--
 * Address:	802596CC
 * Size:	000004
 */
void efx::TSimple4::fade() { }

/*
 * --INFO--
 * Address:	802596D0
 * Size:	000004
 */
void Game::Frog::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802596D4
 * Size:	000004
 */
void Game::Frog::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802596D8
 * Size:	000008
 */
u32 Game::Frog::Obj::getEnemyTypeID() { return 0x11; }

/*
 * --INFO--
 * Address:	802596E0
 * Size:	000028
 */
void __sinit_Frog_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6948(r13)
	  stfsu     f0, 0x2450(r3)
	  stfs      f0, -0x6944(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80259708
 * Size:	000014
 */
void Game::EnemyBase::@736 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E0
	  b         -0x152DFC
	*/
}

/*
 * --INFO--
 * Address:	8025971C
 * Size:	000014
 */
void Game::EnemyBase::@736 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E0
	  b         -0x153084
	*/
}

/*
 * --INFO--
 * Address:	80259730
 * Size:	000014
 */
void Game::EnemyBase::@736 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E0
	  b         -0x153078
	*/
}

/*
 * --INFO--
 * Address:	80259744
 * Size:	000014
 */
void Game::EnemyBase::@736 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E0
	  b         -0x152CDC
	*/
}

/*
 * --INFO--
 * Address:	80259758
 * Size:	000014
 */
void Game::EnemyBase::@736 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E0
	  b         -0x152D1C
	*/
}

/*
 * --INFO--
 * Address:	8025976C
 * Size:	000014
 */
void Game::Frog::Obj::@736 @12 @viewGetCollTreeOffset()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r4, r11
	  add       r4, r4, r11
	  subi      r4, r4, 0x2E0
	  b         -0x93C
	*/
}

/*
 * --INFO--
 * Address:	80259780
 * Size:	000014
 */
void Game::EnemyBase::@736 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E0
	  b         -0x1530F0
	*/
}

/*
 * --INFO--
 * Address:	80259794
 * Size:	000008
 */
void efx::TFrogPota::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x16C
	*/
}
