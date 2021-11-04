#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802E7050
 * Size:	000148
 */
KumaKochappy::Obj::Obj(void)
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
	  addi      r0, r31, 0x2E8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)
	  stw       r0, 0x2F0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1E5CF8
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2E8
	  addi      r5, r3, 0x4218
	  addi      r3, r31, 0x2C0
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x1BCD7C
	  addi      r3, r31, 0x2D0
	  bl        -0x1AEB90
	  li        r3, 0x2C
	  bl        -0x2C323C
	  mr.       r30, r3
	  beq-      .loc_0xDC
	  bl        -0x1BF778
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  addi      r0, r3, 0x40E8
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

	.loc_0xDC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x2C3290
	  mr.       r4, r3
	  beq-      .loc_0x110
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x40C0
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x110:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xA48
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
 * Address:	802E7198
 * Size:	000004
 */
void KumaKochappy::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802E719C
 * Size:	000068
 */
void KumaKochappy::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E5758
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        0x434
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x394
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7204
 * Size:	000044
 */
void KumaKochappy::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0xA10
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1E5344
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
 * Address:	802E7248
 * Size:	00004C
 */
void KumaKochappy::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x910
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x2D0
	  bl        -0x1AEC50
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7294
 * Size:	000004
 */
void KumaKochappy::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802E7298
 * Size:	000020
 */
void KumaKochappy::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1E1438
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E72B8
 * Size:	00004C
 */
void KumaKochappy::Obj::setFSM(Game::KumaKochappy::FSM*)
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
 * Address:	802E7304
 * Size:	0000A8
 */
void KumaKochappy::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r2, 0x14A0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  bl        0x157CBC
	  bl        0x142574
	  lfs       f4, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f3, -0x149C(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x1498(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f0, -0x1494(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f2, 0x190(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x80
	  lfs       f0, -0x1490(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x88

	.loc_0x80:
	  lfs       f0, -0x148C(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x88:
	  lfs       f0, -0x1488(r2)
	  stfs      f0, 0x1C(r31)
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
 * Address:	802E73AC
 * Size:	000088
 */
void KumaKochappy::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x70
	  mr        r3, r31
	  bl        -0x1DFFF4
	  cmpwi     r3, 0x1
	  ble-      .loc_0x70
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

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
 * Address:	802E7434
 * Size:	00002C
 */
void KumaKochappy::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x27C(r12)
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
 * Address:	802E7460
 * Size:	000028
 */
void KumaKochappy::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x1E2470
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7488
 * Size:	00008C
 */
void KumaKochappy::Obj::initMouthSlots(void)
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
	  mr        r30, r3
	  li        r4, 0x1
	  addi      r3, r30, 0x2D0
	  bl        -0x1AEF58
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2D0
	  li        r4, 0
	  subi      r6, r2, 0x1484
	  bl        -0x1AEE34
	  lfs       f31, -0x147C(r2)
	  li        r31, 0
	  b         .loc_0x60

	.loc_0x4C:
	  mr        r4, r31
	  addi      r3, r30, 0x2D0
	  bl        -0x1AED64
	  stfs      f31, 0x1C(r3)
	  addi      r31, r31, 0x1

	.loc_0x60:
	  lwz       r0, 0x2D0(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x4C
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
 * Address:	802E7514
 * Size:	000064
 */
void KumaKochappy::Obj::initWalkSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2C0
	  bl        -0x1BD1CC
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x1470(r2)
	  li        r4, 0
	  subi      r6, r2, 0x1478
	  bl        -0x1BCF68
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x1470(r2)
	  li        r4, 0x1
	  subi      r6, r2, 0x146C
	  bl        -0x1BCF80
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7578
 * Size:	000008
 */
void KumaKochappy::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7580
 * Size:	000078
 */
void KumaKochappy::Obj::resetZukanAnimationFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x64
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x64
	  bl        -0x21E00C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x1460(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x1490(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x1464(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f1, f1, f0
	  bl        -0x1E23B8

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E75F8
 * Size:	000380
 */
void KumaKochappy::Obj::setNearestParent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r30, r3
	  lwz       r3, -0x6E20(r13)
	  li        r31, 0
	  li        r4, 0x23
	  bl        -0x1D9994
	  cmplwi    r3, 0
	  beq-      .loc_0x33C
	  lwz       r4, 0xC0(r30)
	  lfs       f0, 0x44C(r4)
	  lfs       f31, 0x49C(r4)
	  fmuls     f30, f0, f0
	  beq-      .loc_0x64
	  addi      r3, r3, 0x4

	.loc_0x64:
	  li        r0, 0
	  lis       r4, 0x804D
	  addi      r4, r4, 0x4200
	  stw       r0, 0x50(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x44(r1)
	  stw       r0, 0x48(r1)
	  stw       r3, 0x4C(r1)
	  bne-      .loc_0xA0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x31C

	.loc_0xA0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x10C

	.loc_0xB8:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x31C
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x10C:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB8
	  b         .loc_0x31C

	.loc_0x12C:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r29, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x260
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r30)
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
	  bl        -0x2B26C8
	  bl        0x12A3FC
	  lwz       r12, 0x0(r30)
	  fmr       f29, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x12A404
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x260
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x194(r30)
	  lfs       f0, 0x40(r1)
	  lfs       f2, 0x18C(r30)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x38(r1)
	  fsubs     f2, f2, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x260
	  mr        r31, r29
	  fmr       f30, f0

	.loc_0x260:
	  lwz       r0, 0x50(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x28C
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x31C

	.loc_0x28C:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x300

	.loc_0x2AC:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x31C
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x300:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2AC

	.loc_0x31C:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x48(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x12C

	.loc_0x33C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x360
	  mr        r3, r31
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802E7978
 * Size:	00004C
 */
void isDone__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802E79C4
 * Size:	0001A8
 */
void KumaKochappy::Obj::setTargetParentPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  bl        -0x3E4
	  lwz       r3, 0x2E4(r30)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C
	  mr        r3, r30
	  bl        0x260
	  lwz       r31, 0x18(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x18C
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  bl        0x24C
	  mr        r4, r31
	  addi      r3, r1, 0xC
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r1)
	  lfs       f1, 0x18C(r30)
	  lfs       f0, 0x10(r1)
	  fsubs     f3, f1, f2
	  lfs       f1, 0x14(r1)
	  lfs       f4, -0x1498(r2)
	  stfs      f3, 0x2D8(r30)
	  stfs      f4, 0x2DC(r30)
	  lfs       f3, 0x194(r30)
	  fsubs     f3, f3, f1
	  stfs      f3, 0x2E0(r30)
	  lfs       f6, 0x2D8(r30)
	  lfs       f5, 0x2DC(r30)
	  lfs       f7, 0x2E0(r30)
	  fmuls     f3, f6, f6
	  fmuls     f5, f5, f5
	  fmuls     f7, f7, f7
	  fadds     f3, f3, f5
	  fadds     f3, f7, f3
	  fcmpo     cr0, f3, f4
	  ble-      .loc_0xDC
	  fmadds    f3, f6, f6, f5
	  fadds     f5, f7, f3
	  fcmpo     cr0, f5, f4
	  ble-      .loc_0xE0
	  fsqrte    f3, f5
	  fmuls     f5, f3, f5
	  b         .loc_0xE0

	.loc_0xDC:
	  fmr       f5, f4

	.loc_0xE0:
	  lfs       f3, -0x1498(r2)
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x118
	  lfs       f4, -0x1494(r2)
	  lfs       f3, 0x2D8(r30)
	  fdivs     f4, f4, f5
	  fmuls     f3, f3, f4
	  stfs      f3, 0x2D8(r30)
	  lfs       f3, 0x2DC(r30)
	  fmuls     f3, f3, f4
	  stfs      f3, 0x2DC(r30)
	  lfs       f3, 0x2E0(r30)
	  fmuls     f3, f3, f4
	  stfs      f3, 0x2E0(r30)

	.loc_0x118:
	  lwz       r4, 0x8(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  addi      r3, r30, 0x2D8
	  xoris     r0, r4, 0x8000
	  lfd       f5, -0x1460(r2)
	  stw       r0, 0x1C(r1)
	  lfs       f6, -0x1488(r2)
	  lfd       f3, 0x18(r1)
	  lfs       f4, -0x147C(r2)
	  fsubs     f5, f3, f5
	  lfs       f3, 0x2D8(r30)
	  fmadds    f4, f6, f5, f4
	  fmuls     f3, f3, f4
	  stfs      f3, 0x2D8(r30)
	  lfs       f3, 0x2DC(r30)
	  fmuls     f3, f3, f4
	  stfs      f3, 0x2DC(r30)
	  lfs       f3, 0x2E0(r30)
	  fmuls     f3, f3, f4
	  stfs      f3, 0x2E0(r30)
	  lfs       f3, 0x2D8(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x2D8(r30)
	  stfs      f0, 0x2DC(r30)
	  lfs       f0, 0x2E0(r30)
	  fadds     f0, f0, f1
	  stfs      f0, 0x2E0(r30)
	  b         .loc_0x190

	.loc_0x18C:
	  li        r3, 0

	.loc_0x190:
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
 * Address:	802E7B6C
 * Size:	00001C
 */
void KumaKochappy::Obj::updateHomePosition(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x198(r3)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x19C(r3)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x1A0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7B88
 * Size:	000038
 */
void KumaKochappy::Obj::getSearchedTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r6, 0
	  lwz       r7, 0xC0(r3)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x1D4B5C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7BC0
 * Size:	000070
 */
void KumaKochappy::Obj::createChappyRelation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x1C
	  bl        -0x2C3D38
	  mr.       r31, r3
	  beq-      .loc_0x3C
	  bl        0x1297A8
	  lis       r3, 0x804D
	  subi      r0, r3, 0x4370
	  stw       r0, 0x0(r31)
	  stw       r30, 0x18(r31)

	.loc_0x3C:
	  stw       r31, 0x2E4(r30)
	  li        r0, 0
	  lwz       r3, 0x2E4(r30)
	  stw       r0, 0x10(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x4(r3)
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
 * Address:	802E7C30
 * Size:	000024
 */
void KumaKochappy::Obj::releaseParent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        0x129990
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C54
 * Size:	00000C
 */
void KumaKochappy::Obj::getParentRelation(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2E4(r3)
	  lwz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C60
 * Size:	00003C
 */
void KumaKochappy::Obj::getEnemyIndex(int&)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x2E4(r3)
	  li        r6, 0
	  lwz       r5, 0xC(r5)
	  lwz       r5, 0x10(r5)
	  b         .loc_0x2C

	.loc_0x14:
	  lwz       r0, 0x2E4(r3)
	  cmplw     r5, r0
	  bne-      .loc_0x24
	  stw       r6, 0x0(r4)

	.loc_0x24:
	  lwz       r5, 0x4(r5)
	  addi      r6, r6, 0x1

	.loc_0x2C:
	  cmplwi    r5, 0
	  bne+      .loc_0x14
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7C9C
 * Size:	0000A0
 */
void KumaKochappy::Obj::addParentEnemy(Game::KumaChappy::Obj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r4, 0x2E4(r29)
	  lwz       r12, 0x0(r30)
	  lwz       r31, 0xC(r4)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r3, r31
	  beq-      .loc_0x84
	  lwz       r3, 0x2E4(r29)
	  bl        0x1298E8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2E4(r29)
	  bl        0x129704
	  b         .loc_0x84

	.loc_0x70:
	  lwz       r3, 0x2E4(r29)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  bl        0x1298B4

	.loc_0x84:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802E7D3C
 * Size:	000038
 */
void __ml__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
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
 * Address:	802E7D74
 * Size:	0000E4
 */
void next__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7E58
 * Size:	0000DC
 */
void first__Q24Game38EnemyIterator<Game::KumaChappy::Obj> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802E7F34
 * Size:	000008
 */
void KumaKochappy::Obj::getMouthSlots(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7F3C
 * Size:	000008
 */
void KumaKochappy::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x1458(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E7F44
 * Size:	000008
 */
u32 KumaKochappy::Obj::getEnemyTypeID(void) { return 0x4C; }
} // namespace Game
