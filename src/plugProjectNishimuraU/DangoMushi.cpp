#include "types.h"

/*
 * --INFO--
 * Address:	802FC3BC
 * Size:	000134
 */
void Game::DangoMushi::Obj::Obj()
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
	  addi      r0, r31, 0x300
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x300(r31)
	  stw       r0, 0x304(r31)
	  stw       r0, 0x308(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1FB064
	  lis       r3, 0x804D
	  addi      r0, r31, 0x300
	  addi      r5, r3, 0x61EC
	  addi      r3, r31, 0x2E8
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x1D20E8
	  li        r3, 0x60
	  bl        -0x2D85A0
	  mr.       r30, r3
	  beq-      .loc_0xA4
	  bl        -0x1CE368
	  lis       r3, 0x804D
	  addi      r0, r3, 0x6518
	  stw       r0, 0x0(r30)

	.loc_0xA4:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x2D85C4
	  mr.       r4, r3
	  beq-      .loc_0xD8
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x5FD4
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0xD8:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x281C
	  li        r3, 0xC
	  bl        -0x2D8610
	  mr.       r30, r3
	  beq-      .loc_0x114
	  bl        0x137E94
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r30)

	.loc_0x114:
	  stw       r30, 0x2F0(r31)
	  mr        r3, r31
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
 * Address:	802FC4F0
 * Size:	000004
 */
void Game::DangoMushi::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802FC4F4
 * Size:	000130
 */
void Game::DangoMushi::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1FAAB0
	  lwz       r3, 0x1E0(r31)
	  li        r4, 0
	  lfs       f0, -0xFB8(r2)
	  li        r0, -0x1
	  ori       r5, r3, 0x1
	  mr        r3, r31
	  stw       r5, 0x1E0(r31)
	  lwz       r5, 0x1E0(r31)
	  rlwinm    r5,r5,0,26,24
	  stw       r5, 0x1E0(r31)
	  stb       r4, 0x2C0(r31)
	  stfs      f0, 0x2E4(r31)
	  stfs      f0, 0x2E0(r31)
	  stfs      f0, 0x2DC(r31)
	  stfs      f0, 0x2C4(r31)
	  stw       r0, 0x2CC(r31)
	  stfs      f0, 0x2C8(r31)
	  bl        0x1514
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1540
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C1(r31)
	  li        r4, 0
	  bl        0x1C74
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C3(r31)
	  bl        0x25D0
	  mr        r3, r31
	  bl        0x28B0
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0xBA8A4
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0xE0
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xE0:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x100:
	  lwz       r3, 0x2F0(r31)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x44(r4)
	  lwz       r12, 0x8(r12)
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
 * Address:	802FC624
 * Size:	000044
 */
void Game::DangoMushi::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0x2C04
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1FA764
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
 * Address:	802FC668
 * Size:	000050
 */
void Game::DangoMushi::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1B78
	  mr        r3, r31
	  bl        0x2C20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FC6B8
 * Size:	000044
 */
void Game::DangoMushi::Obj::doUpdateCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f0, 0x1C8(r3)
	  stfs      f0, 0x2DC(r3)
	  lfs       f0, 0x1D0(r3)
	  stfs      f0, 0x2E4(r3)
	  bl        -0x1F97C8
	  mr        r3, r31
	  bl        0x2370
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FC6FC
 * Size:	000094
 */
void Game::DangoMushi::Obj::doAnimationUpdateAnimator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r5, 0x526C
	  lfs       f1, -0x63C8(r2)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f0, -0xFB4(r2)
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x7E8
	  lwz       r5, -0x6514(r13)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lfs       f3, 0x54(r5)
	  lwz       r3, 0x184(r3)
	  fmuls     f2, f1, f3
	  fmuls     f1, f0, f3
	  fmr       f3, f2
	  bl        -0x1CE520
	  lwz       r3, 0x184(r31)
	  lwzu      r12, 0x10(r3)
	  lwz       r31, 0x174(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FC790
 * Size:	0000C4
 */
void Game::DangoMushi::Obj::changeMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x174(r3)
	  lwz       r29, 0x8(r3)
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r30, 0x4(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r28)
	  lfs       f1, -0xFB0(r2)
	  bl        0x137D74
	  lis       r3, 0x8051
	  li        r28, 0
	  subi      r31, r3, 0xDD0
	  b         .loc_0x94

	.loc_0x5C:
	  lwz       r4, 0xC0(r29)
	  rlwinm    r3,r28,6,10,25
	  rlwinm    r0,r28,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r31)
	  lwz       r3, 0x60(r30)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x94:
	  lhz       r0, 0x5C(r30)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x5C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FC854
 * Size:	000004
 */
void Game::DangoMushi::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802FC858
 * Size:	000020
 */
void Game::DangoMushi::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1F69F8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FC878
 * Size:	00004C
 */
void Game::DangoMushi::Obj::setFSM(Game::DangoMushi::FSM*)
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
 * Address:	802FC8C4
 * Size:	0000B8
 */
void Game::DangoMushi::Obj::getShadowParam(Game::ShadowParam&)
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
	  lis       r3, 0x8049
	  subi      r0, r3, 0x2820
	  lwz       r3, 0x174(r30)
	  mr        r4, r0
	  bl        0x1426F4
	  bl        0x12CFAC
	  lfs       f4, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f3, -0xFAC(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0xFB8(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f0, -0xFA8(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f2, 0x190(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x88
	  lfs       f0, -0xFA4(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x90

	.loc_0x88:
	  lfs       f0, -0xFA0(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x90:
	  lfs       f1, -0xF9C(r2)
	  lfs       f0, 0x2C8(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1C(r31)
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
 * Address:	802FC97C
 * Size:	000070
 */
void Game::DangoMushi::Obj::needShadow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1F5580
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x28
	  li        r3, 0x1
	  b         .loc_0x5C

	.loc_0x28:
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  mr        r3, r31
	  bl        -0x1F55C4
	  cmpwi     r3, 0x1
	  beq-      .loc_0x50
	  cmpwi     r3, 0x2
	  bne-      .loc_0x58

	.loc_0x50:
	  li        r3, 0x1
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FC9EC
 * Size:	0000EC
 */
void Game::DangoMushi::Obj::damageCallBack(Game::Creature*, float, CollPart*)
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
	  cmplwi    r4, 0
	  mr        r30, r3
	  mr        r31, r5
	  beq-      .loc_0xC8
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  lwz       r0, 0x1E0(r30)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x70
	  fmr       f1, f31
	  lfs       f2, -0xFA8(r2)
	  mr        r3, r30
	  bl        -0x1F6A24
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0x70:
	  cmplwi    r31, 0
	  beq-      .loc_0xC8
	  lis       r4, 0x626F
	  addi      r3, r31, 0x30
	  addi      r4, r4, 0x6430
	  bl        0x1169C4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA8
	  lis       r4, 0x626F
	  addi      r3, r31, 0x30
	  addi      r4, r4, 0x6431
	  bl        0x1169AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8

	.loc_0xA8:
	  mr        r3, r30
	  bl        0x2630
	  fmr       f1, f31
	  lfs       f2, -0xFA8(r2)
	  mr        r3, r30
	  bl        -0x1F6A7C
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r3, 0

	.loc_0xCC:
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
 * Address:	802FCAD8
 * Size:	000008
 */
void Game::DangoMushi::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCAE0
 * Size:	000104
 */
void Game::DangoMushi::Obj::collisionCallback(Game::CollEvent&)
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
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0xD4
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lbz       r0, 0x2C0(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r0, 0xC8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  li        r0, 0
	  lfs       f0, 0x604(r6)
	  subi      r6, r5, 0x5D00
	  subi      r5, r4, 0x4CE0
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r30, 0xC(r1)
	  stw       r5, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x94:
	  lbz       r0, 0x2C1(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lis       r4, 0x6861
	  addi      r3, r3, 0x30
	  addi      r4, r4, 0x522A
	  li        r5, 0x2A
	  bl        0x116760
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  lwz       r4, 0x0(r31)
	  mr        r3, r30
	  bl        0x1330

	.loc_0xD4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x240(r12)
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
 * Address:	802FCBE4
 * Size:	00010C
 */
void Game::DangoMushi::Obj::wallCallback(const Game::MoveInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, 0x2C0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lfs       f3, 0x2E0(r31)
	  lfs       f5, 0x2E4(r31)
	  fmuls     f1, f3, f3
	  lfs       f4, 0x2DC(r31)
	  fmuls     f2, f5, f5
	  lfs       f0, -0xFB8(r2)
	  fmadds    f1, f4, f4, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  ble-      .loc_0x5C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x5C

	.loc_0x58:
	  fmr       f1, f0

	.loc_0x5C:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  lfs       f0, -0xFA8(r2)
	  fdivs     f0, f0, f1
	  fmuls     f4, f4, f0
	  fmuls     f3, f3, f0
	  fmuls     f5, f5, f0
	  b         .loc_0x84

	.loc_0x80:
	  fmr       f1, f0

	.loc_0x84:
	  lfs       f0, -0xFA4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  lfs       f0, 0x60(r4)
	  lfs       f2, 0x5C(r4)
	  fmuls     f1, f3, f0
	  lfs       f3, 0x64(r4)
	  lfs       f0, -0xF98(r2)
	  fmadds    f1, f4, f2, f1
	  fmadds    f1, f5, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF8
	  lwz       r6, 0x5C(r4)
	  mr        r3, r31
	  lwz       r5, 0x60(r4)
	  lwz       r0, 0x64(r4)
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x248C
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	802FCCF0
 * Size:	000038
 */
void Game::DangoMushi::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1F9E10
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
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
 * Address:	802FCD28
 * Size:	000074
 */
void Game::DangoMushi::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1F9E34
	  lfs       f1, -0xFA8(r2)
	  mr        r3, r31
	  lfs       f2, -0xFAC(r2)
	  li        r4, 0
	  lfs       f3, -0xFB8(r2)
	  lfs       f4, -0xF94(r2)
	  bl        -0x1E9C3C
	  mr        r3, r31
	  bl        -0x1F596C
	  cmpwi     r3, 0x6
	  bne-      .loc_0x54
	  mr        r3, r31
	  bl        0x141C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60

	.loc_0x54:
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCD9C
 * Size:	000028
 */
void Game::DangoMushi::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x8
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x1F7DAC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCDC4
 * Size:	000020
 */
void Game::DangoMushi::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x27D4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCDE4
 * Size:	000020
 */
void Game::DangoMushi::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x2750
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE04
 * Size:	00004C
 */
void Game::DangoMushi::Obj::initWalkSmokeEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2E8
	  bl        -0x1D2ABC
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2E8
	  lfs       f1, -0xF88(r2)
	  li        r4, 0
	  subi      r6, r2, 0xF90
	  bl        -0x1D2858
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE50
 * Size:	000008
 */
void Game::DangoMushi::Obj::getWalkSmokeEffectMgr()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2E8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE58
 * Size:	000024
 */
void Game::DangoMushi::Obj::getCommonEffectPos(Vector3<float>&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f1, -0xFB0(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x190(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE7C
 * Size:	000050
 */
void Game::DangoMushi::Obj::addShadowScale()
{
	/*
	.loc_0x0:
	  lfs       f3, 0x2C8(r3)
	  lfs       f2, -0xFA8(r2)
	  fcmpo     cr0, f3, f2
	  bge-      .loc_0x40
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0xF84(r2)
	  lfs       f0, 0x54(r4)
	  fmadds    f0, f1, f0, f3
	  stfs      f0, 0x2C8(r3)
	  lfs       f0, 0x2C8(r3)
	  fcmpo     cr0, f0, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x48
	  stfs      f2, 0x2C8(r3)
	  li        r3, 0x1
	  blr

	.loc_0x40:
	  li        r3, 0x1
	  blr

	.loc_0x48:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FCECC
 * Size:	000198
 */
void Game::DangoMushi::Obj::setRandTarget()
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
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x233960
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lis       r3, 0x8051
	  lwz       r4, 0xC0(r31)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x8(r1)
	  lfd       f1, -0xF68(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f5, -0xF80(r2)
	  fsubs     f0, f0, f1
	  lfs       f3, 0x18C(r31)
	  lfs       f1, 0x198(r31)
	  lfs       f4, 0x384(r4)
	  fmuls     f6, f30, f0
	  lfs       f2, 0x194(r31)
	  fsubs     f1, f3, f1
	  lfs       f0, 0x1A0(r31)
	  fdivs     f3, f6, f5
	  fadds     f31, f4, f3
	  fsubs     f2, f2, f0
	  bl        -0x2C7E50
	  fmr       f30, f1
	  bl        -0x2339C0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f2, -0xF68(r2)
	  stw       r0, 0x10(r1)
	  lfs       f3, -0xF7C(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0xF78(r2)
	  lfs       f0, -0xFB8(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f5, f2, f1
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0xE4
	  fneg      f1, f5

	.loc_0xE4:
	  lfs       f3, -0xF74(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0xFB8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f1, 0x1A0(r31)
	  fcmpo     cr0, f5, f0
	  lfs       f4, 0x19C(r31)
	  fctiwz    f0, f2
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f2, f31, f0, f1
	  bge-      .loc_0x148
	  lfs       f0, -0xF70(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x160

	.loc_0x148:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x160:
	  lfs       f0, 0x198(r31)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2D0(r31)
	  stfs      f4, 0x2D4(r31)
	  stfs      f2, 0x2D8(r31)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FD064
 * Size:	000034
 */
void Game::DangoMushi::Obj::isReachedTarget()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x2D8(r3)
	  lfs       f2, 0x18C(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2D0(r3)
	  lfs       f0, -0xF60(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FD098
 * Size:	000038
 */
void Game::DangoMushi::Obj::getSearchedTarget()
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
	  bl        -0x1EA06C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FD0D0
 * Size:	0002BC
 */
void Game::DangoMushi::Obj::rollingMove()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r3, -0x6D20(r13)
	  bl        -0x1A24E8
	  cmplwi    r3, 0
	  bne-      .loc_0x64
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f1, -0xF5C(r2)
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x1EA0E0

	.loc_0x64:
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  mr        r4, r3
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0x2C(r1)
	  lfs       f28, 0x34(r1)
	  b         .loc_0xA8

	.loc_0x90:
	  lfs       f3, 0x18C(r31)
	  lfs       f2, 0x1D4(r31)
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x1DC(r31)
	  fadds     f29, f3, f2
	  fadds     f28, f1, f0

	.loc_0xA8:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lfs       f30, 0x86C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x844(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f29, f4
	  fsubs     f2, f28, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x2C80BC
	  bl        0x114A08
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x114A10
	  fmuls     f31, f1, f31
	  lfs       f0, -0xF58(r2)
	  lfs       f1, -0xF7C(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x15C
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x158
	  fmr       f31, f1
	  b         .loc_0x15C

	.loc_0x158:
	  fneg      f31, f1

	.loc_0x15C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0x11498C
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x64(r12)
	  lfs       f30, 0x81C(r4)
	  mtctr     r12
	  bctrl
	  bl        -0x22DA54
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f29, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x20(r1)
	  stfs      f31, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x22DFF0
	  fmuls     f0, f30, f29
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f30, f1
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r0, 0x288(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x274
	  lfs       f2, 0x1D0(r31)
	  lfs       f0, 0x1C8(r31)
	  lfs       f1, -0xFB8(r2)
	  fmuls     f2, f2, f2
	  fmadds    f0, f0, f0, f1
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x22C
	  ble-      .loc_0x230
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x230

	.loc_0x22C:
	  fmr       f2, f1

	.loc_0x230:
	  lfs       f0, -0xFA4(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x258
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0xF54(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0x2C4(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x288

	.loc_0x258:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0xF50(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0x2C4(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x288

	.loc_0x274:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)

	.loc_0x288:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FD38C
 * Size:	0004E8
 */
void Game::DangoMushi::Obj::createCrashEnemy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  stw       r0, 0x164(r1)
	  stfd      f31, 0x150(r1)
	  psq_st    f31,0x158(r1),0,0
	  stfd      f30, 0x140(r1)
	  psq_st    f30,0x148(r1),0,0
	  stfd      f29, 0x130(r1)
	  psq_st    f29,0x138(r1),0,0
	  stfd      f28, 0x120(r1)
	  psq_st    f28,0x128(r1),0,0
	  stfd      f27, 0x110(r1)
	  psq_st    f27,0x118(r1),0,0
	  stfd      f26, 0x100(r1)
	  psq_st    f26,0x108(r1),0,0
	  stfd      f25, 0xF0(r1)
	  psq_st    f25,0xF8(r1),0,0
	  stfd      f24, 0xE0(r1)
	  psq_st    f24,0xE8(r1),0,0
	  stfd      f23, 0xD0(r1)
	  psq_st    f23,0xD8(r1),0,0
	  stfd      f22, 0xC0(r1)
	  psq_st    f22,0xC8(r1),0,0
	  stfd      f21, 0xB0(r1)
	  psq_st    f21,0xB8(r1),0,0
	  stfd      f20, 0xA0(r1)
	  psq_st    f20,0xA8(r1),0,0
	  stmw      r23, 0x7C(r1)
	  lwz       r6, -0xF4C(r2)
	  mr        r25, r3
	  lwz       r5, -0xF48(r2)
	  lwz       r4, -0xF44(r2)
	  lwz       r0, -0xF40(r2)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        .loc_0x4E8
	  stw       r3, 0xC(r1)
	  addi      r30, r1, 0x10
	  addi      r29, r1, 0x8
	  li        r28, 0

	.loc_0xA8:
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x0(r30)
	  bl        -0x1EF798
	  mr.       r27, r3
	  beq-      .loc_0x460
	  mr        r4, r25
	  mr        r5, r28
	  addi      r3, r1, 0x18
	  bl        0x50C
	  lfs       f28, 0x18(r1)
	  lfs       f27, 0x1C(r1)
	  lfs       f26, 0x20(r1)
	  bl        -0x233EC4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lis       r3, 0x8050
	  lfs       f23, -0xFB8(r2)
	  addi      r23, r3, 0x71A0
	  stw       r0, 0x58(r1)
	  li        r26, 0
	  lfd       f1, -0xF68(r2)
	  fmr       f31, f23
	  lfd       f0, 0x58(r1)
	  fmr       f20, f23
	  lfs       f3, -0xF7C(r2)
	  fsubs     f4, f0, f1
	  lfs       f2, -0xF80(r2)
	  lfs       f1, -0xF3C(r2)
	  lfs       f0, -0xF38(r2)
	  fmuls     f3, f3, f4
	  lwz       r31, 0x0(r29)
	  lfs       f30, -0xF14(r2)
	  lfs       f21, -0xF74(r2)
	  fdivs     f29, f3, f2
	  fadds     f25, f1, f29
	  fadds     f24, f0, f29
	  b         .loc_0x458

	.loc_0x140:
	  cmpwi     r26, 0
	  bne-      .loc_0x180
	  bl        -0x233F34
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lfd       f3, -0xF68(r2)
	  stw       r0, 0x58(r1)
	  lfs       f1, -0xF34(r2)
	  lfd       f2, 0x58(r1)
	  lfs       f0, -0xF80(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  fmr       f22, f0
	  b         .loc_0x330

	.loc_0x180:
	  cmpwi     r26, 0x4
	  bge-      .loc_0x214
	  bl        -0x233F74
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x5C(r1)
	  xoris     r0, r26, 0x8000
	  lfd       f4, -0xF68(r2)
	  stw       r4, 0x58(r1)
	  lfs       f0, -0xFA8(r2)
	  lfd       f2, 0x58(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f2, f4
	  stw       r0, 0x64(r1)
	  lfs       f2, -0xF30(r2)
	  stw       r4, 0x60(r1)
	  fmuls     f3, f0, f3
	  lfd       f0, 0x60(r1)
	  fdivs     f3, f3, f1
	  fsubs     f1, f0, f4
	  fadds     f0, f29, f3
	  fmadds    f23, f2, f1, f0
	  bl        -0x233FC4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x6C(r1)
	  lfd       f3, -0xF68(r2)
	  stw       r0, 0x68(r1)
	  lfs       f2, -0xF34(r2)
	  lfd       f0, 0x68(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0xF2C(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fadds     f22, f0, f1
	  b         .loc_0x330

	.loc_0x214:
	  cmpwi     r26, 0xA
	  bge-      .loc_0x2A8
	  bl        -0x234008
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x6C(r1)
	  xoris     r0, r26, 0x8000
	  lfd       f4, -0xF68(r2)
	  stw       r4, 0x68(r1)
	  lfs       f0, -0xF3C(r2)
	  lfd       f2, 0x68(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f2, f4
	  stw       r0, 0x64(r1)
	  lfs       f2, -0xF28(r2)
	  stw       r4, 0x60(r1)
	  fmuls     f3, f0, f3
	  lfd       f0, 0x60(r1)
	  fdivs     f3, f3, f1
	  fsubs     f1, f0, f4
	  fadds     f0, f25, f3
	  fmadds    f23, f2, f1, f0
	  bl        -0x234058
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lfd       f3, -0xF68(r2)
	  stw       r0, 0x58(r1)
	  lfs       f2, -0xF34(r2)
	  lfd       f0, 0x58(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0xF24(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fadds     f22, f0, f1
	  b         .loc_0x330

	.loc_0x2A8:
	  bl        -0x234094
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x6C(r1)
	  xoris     r0, r26, 0x8000
	  lfd       f4, -0xF68(r2)
	  stw       r4, 0x68(r1)
	  lfs       f0, -0xF20(r2)
	  lfd       f2, 0x68(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f2, f4
	  stw       r0, 0x64(r1)
	  lfs       f2, -0xF1C(r2)
	  stw       r4, 0x60(r1)
	  fmuls     f3, f0, f3
	  lfd       f0, 0x60(r1)
	  fdivs     f3, f3, f1
	  fsubs     f1, f0, f4
	  fadds     f0, f24, f3
	  fmadds    f23, f2, f1, f0
	  bl        -0x2340E4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lfd       f3, -0xF68(r2)
	  stw       r0, 0x58(r1)
	  lfs       f2, -0xF34(r2)
	  lfd       f0, 0x58(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0xF18(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fadds     f22, f0, f1

	.loc_0x330:
	  fcmpo     cr0, f23, f30
	  ble-      .loc_0x33C
	  fsubs     f23, f23, f30

	.loc_0x33C:
	  addi      r3, r1, 0x24
	  bl        -0x1CEAA8
	  lwz       r0, 0x0(r30)
	  fcmpo     cr0, f23, f31
	  stw       r0, 0x4C(r1)
	  lfs       f0, 0x1FC(r25)
	  stfs      f0, 0x30(r1)
	  bge-      .loc_0x388
	  lfs       f0, -0xF70(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f23, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x3AC

	.loc_0x388:
	  lfs       f0, -0xF74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f23, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x3AC:
	  fmadds    f0, f22, f0, f28
	  stfs      f27, 0x28(r1)
	  fmr       f1, f23
	  fcmpo     cr0, f23, f20
	  stfs      f0, 0x24(r1)
	  bge-      .loc_0x3C8
	  fneg      f1, f23

	.loc_0x3C8:
	  fmuls     f0, f1, f21
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0x25
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r23, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f0, f22, f0, f26
	  stfs      f0, 0x2C(r1)
	  bne-      .loc_0x404
	  li        r0, 0x1
	  stb       r0, 0x34(r1)
	  b         .loc_0x40C

	.loc_0x404:
	  lfs       f0, -0xFB0(r2)
	  stfs      f0, 0x50(r1)

	.loc_0x40C:
	  mr        r3, r27
	  addi      r4, r1, 0x24
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr.       r24, r3
	  beq-      .loc_0x454
	  li        r4, 0
	  bl        -0x1C27F4
	  lwz       r0, 0x1E0(r24)
	  lfs       f0, -0xF10(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r24)
	  lwz       r3, 0xC0(r24)
	  stfs      f0, 0x3AC(r3)
	  lwz       r3, 0xC0(r24)
	  stfs      f0, 0x3D4(r3)

	.loc_0x454:
	  addi      r26, r26, 0x1

	.loc_0x458:
	  cmpw      r26, r31
	  blt+      .loc_0x140

	.loc_0x460:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x2
	  addi      r30, r30, 0x4
	  blt+      .loc_0xA8
	  psq_l     f31,0x158(r1),0,0
	  lfd       f31, 0x150(r1)
	  psq_l     f30,0x148(r1),0,0
	  lfd       f30, 0x140(r1)
	  psq_l     f29,0x138(r1),0,0
	  lfd       f29, 0x130(r1)
	  psq_l     f28,0x128(r1),0,0
	  lfd       f28, 0x120(r1)
	  psq_l     f27,0x118(r1),0,0
	  lfd       f27, 0x110(r1)
	  psq_l     f26,0x108(r1),0,0
	  lfd       f26, 0x100(r1)
	  psq_l     f25,0xF8(r1),0,0
	  lfd       f25, 0xF0(r1)
	  psq_l     f24,0xE8(r1),0,0
	  lfd       f24, 0xE0(r1)
	  psq_l     f23,0xD8(r1),0,0
	  lfd       f23, 0xD0(r1)
	  psq_l     f22,0xC8(r1),0,0
	  lfd       f22, 0xC0(r1)
	  psq_l     f21,0xB8(r1),0,0
	  lfd       f21, 0xB0(r1)
	  psq_l     f20,0xA8(r1),0,0
	  lfd       f20, 0xA0(r1)
	  lmw       r23, 0x7C(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr

	.loc_0x4E8:
	*/
}

/*
 * --INFO--
 * Address:	802FD874
 * Size:	0000EC
 */
void Game::DangoMushi::Obj::getFallEggNum()
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
	  lwz       r3, -0x6D0C(r13)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x20(r3)
	  lfd       f1, -0xF68(r2)
	  xoris     r0, r0, 0x8000
	  lfs       f30, -0xFB8(r2)
	  stw       r0, 0xC(r1)
	  lwz       r3, -0x6D20(r13)
	  lfd       f0, 0x8(r1)
	  fsubs     f31, f0, f1
	  bl        -0x1A2C9C
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r3, 0x254(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xBC(r3)
	  lfd       f1, -0xF68(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f30, f0, f1

	.loc_0x78:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  bl        -0x234358
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  fdivs     f0, f30, f31
	  lfd       f4, -0xF68(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, -0xFA8(r2)
	  lfd       f3, 0x10(r1)
	  lfs       f1, -0xF80(r2)
	  fsubs     f3, f3, f4
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC8
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r3, 0

	.loc_0xCC:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f30, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FD960
 * Size:	000104
 */
void Game::DangoMushi::Obj::getFallPosition(int)
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
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  cmpwi     r5, 0
	  lfs       f31, 0x198(r4)
	  mr        r30, r3
	  lfs       f30, 0x19C(r4)
	  lfs       f29, 0x1A0(r4)
	  bne-      .loc_0xC8
	  lwz       r3, -0x6D20(r13)
	  bl        -0x1A2D8C
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  mr        r4, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x14(r1)
	  lfs       f30, 0x18(r1)
	  lfs       f29, 0x1C(r1)
	  b         .loc_0xC8

	.loc_0x80:
	  lfs       f1, -0xF5C(r2)
	  mr        r3, r31
	  lfs       f2, -0xF0C(r2)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  bl        -0x1EA9A8
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x8(r1)
	  lfs       f30, 0xC(r1)
	  lfs       f29, 0x10(r1)

	.loc_0xC8:
	  stfs      f31, 0x0(r30)
	  stfs      f30, 0x4(r30)
	  stfs      f29, 0x8(r30)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FDA64
 * Size:	000038
 */
void Game::DangoMushi::Obj::setupCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x6861
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x5230
	  lwz       r3, 0x114(r3)
	  bl        -0x1C7C38
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  bl        -0x1C66EC

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FDA9C
 * Size:	000444
 */
void Game::DangoMushi::Obj::setBodyCollision(bool)
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
	  stmw      r25, 0x84(r1)
	  lwz       r5, -0xF08(r2)
	  mr        r25, r4
	  lwz       r0, -0xF04(r2)
	  mr        r31, r3
	  stw       r5, 0x8(r1)
	  addi      r27, r1, 0x8
	  rlwinm    r28,r4,0,24,31
	  li        r26, 0
	  stw       r0, 0xC(r1)
	  lis       r29, 0x5F74
	  lis       r30, 0x7374

	.loc_0x54:
	  lwz       r3, 0x114(r31)
	  lwz       r4, 0x0(r27)
	  bl        -0x1C7CB4
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  cmplwi    r28, 0
	  beq-      .loc_0x80
	  addi      r3, r3, 0x3C
	  addi      r4, r29, 0x5F5F
	  bl        0x1158F0
	  b         .loc_0x8C

	.loc_0x80:
	  addi      r3, r3, 0x3C
	  addi      r4, r30, 0x5F5F
	  bl        0x1158E0

	.loc_0x8C:
	  addi      r26, r26, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r26, 0x2
	  blt+      .loc_0x54
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x418
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x418
	  lfs       f0, 0x200(r31)
	  lfs       f1, -0xFB8(r2)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  beq-      .loc_0x418
	  lfs       f3, 0x1FC(r31)
	  lfs       f0, -0xF7C(r2)
	  fcmpo     cr0, f3, f1
	  lfs       f2, -0xF00(r2)
	  fadds     f31, f0, f3
	  bge-      .loc_0x108
	  lfs       f0, -0xF70(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x12C

	.loc_0x108:
	  lfs       f0, -0xF74(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x12C:
	  lfs       f0, -0xFB8(r2)
	  fmuls     f30, f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x140
	  fneg      f3, f3

	.loc_0x140:
	  lfs       f0, -0xF74(r2)
	  lis       r3, 0x8050
	  addi      r5, r3, 0x71A0
	  lfs       f1, -0xF00(r2)
	  fmuls     f0, f3, f0
	  mr        r4, r31
	  addi      r3, r1, 0x4C
	  fctiwz    f0, f0
	  stfd      f0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r5, r5, r0
	  lfs       f0, 0x4(r5)
	  fmuls     f29, f1, f0
	  bl        -0x15DFB8
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x4C
	  cmplwi    r0, 0
	  stw       r4, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x1BC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x3EC

	.loc_0x1BC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x228

	.loc_0x1D4:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3EC
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x228:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1D4
	  b         .loc_0x3EC

	.loc_0x248:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x330
	  lbz       r0, 0x2B8(r28)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x2D4
	  lwz       r6, 0xC0(r31)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r28
	  lfs       f1, 0x4EC(r6)
	  subi      r5, r5, 0x5D00
	  lfs       f0, 0x4C4(r6)
	  addi      r0, r4, 0x4E04
	  addi      r4, r1, 0x38
	  stw       r5, 0x38(r1)
	  stw       r31, 0x3C(r1)
	  stw       r0, 0x38(r1)
	  stfs      f0, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f31, 0x48(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x330

	.loc_0x2D4:
	  lwz       r6, 0xC0(r31)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lfs       f1, 0x604(r6)
	  subi      r0, r5, 0x5D00
	  lfs       f0, -0xF00(r2)
	  addi      r5, r4, 0x4974
	  stw       r0, 0x20(r1)
	  addi      r0, r3, 0x4950
	  mr        r3, r28
	  addi      r4, r1, 0x20
	  stw       r5, 0x20(r1)
	  stw       r31, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f30, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f29, 0x34(r1)
	  stw       r0, 0x20(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x330:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x35C
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x3EC

	.loc_0x35C:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x3D0

	.loc_0x37C:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3EC
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x3D0:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x37C

	.loc_0x3EC:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x248
	  addi      r3, r1, 0x4C
	  li        r4, -0x1
	  bl        -0x15E14C

	.loc_0x418:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  lmw       r25, 0x84(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FDEE0
 * Size:	0002AC
 */
void Game::DangoMushi::Obj::flickHandCollision(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  mr        r31, r4
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f31, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x10(r1)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  lfs       f1, 0x18C(r30)
	  lfs       f0, 0x194(r30)
	  fsubs     f31, f31, f1
	  lfs       f1, -0xFB8(r2)
	  fsubs     f30, f30, f0
	  fmadds    f0, f31, f31, f1
	  fmuls     f2, f30, f30
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x9C
	  ble-      .loc_0xA0
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xA0

	.loc_0x9C:
	  fmr       f2, f1

	.loc_0xA0:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xBC
	  lfs       f0, -0xFA8(r2)
	  fdivs     f0, f0, f2
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0

	.loc_0xBC:
	  lwz       r5, 0xC0(r30)
	  lis       r4, 0x804B
	  lfs       f0, -0xEFC(r2)
	  lis       r3, 0x804B
	  lfs       f1, 0x604(r5)
	  subi      r0, r4, 0x5D00
	  lfs       f2, -0xFA8(r2)
	  fmuls     f31, f31, f0
	  stw       r0, 0x40(r1)
	  fmuls     f30, f30, f0
	  fmuls     f2, f2, f0
	  addi      r0, r3, 0x4974
	  lis       r3, 0x804B
	  stw       r0, 0x40(r1)
	  addi      r0, r3, 0x4950
	  mr        r3, r31
	  stw       r30, 0x44(r1)
	  addi      r4, r1, 0x40
	  stfs      f1, 0x48(r1)
	  stfs      f31, 0x4C(r1)
	  stfs      f2, 0x50(r1)
	  stfs      f30, 0x54(r1)
	  stw       r0, 0x40(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x284

	.loc_0x12C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x284
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x1C0
	  lfs       f1, 0x18C(r30)
	  lis       r3, 0x8051
	  lfs       f0, 0x194(r30)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f1, f31
	  fsubs     f2, f0, f30
	  bl        -0x2C8F44
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r31
	  lfs       f2, 0x4EC(r6)
	  subi      r5, r5, 0x5D00
	  lfs       f0, 0x4C4(r6)
	  addi      r0, r4, 0x4E04
	  addi      r4, r1, 0x2C
	  stw       r5, 0x2C(r1)
	  stw       r30, 0x30(r1)
	  stw       r0, 0x2C(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f2, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x284

	.loc_0x1C0:
	  lfs       f1, 0x18C(r30)
	  lfs       f0, 0x194(r30)
	  fsubs     f31, f31, f1
	  lfs       f1, -0xFB8(r2)
	  fsubs     f30, f30, f0
	  fmadds    f0, f31, f31, f1
	  fmuls     f2, f30, f30
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x1F8
	  ble-      .loc_0x1FC
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x1FC

	.loc_0x1F8:
	  fmr       f2, f1

	.loc_0x1FC:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x218
	  lfs       f0, -0xFA8(r2)
	  fdivs     f0, f0, f2
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0

	.loc_0x218:
	  lwz       r5, 0xC0(r30)
	  lis       r4, 0x804B
	  lfs       f0, -0xEFC(r2)
	  lis       r3, 0x804B
	  lfs       f1, 0x604(r5)
	  subi      r0, r4, 0x5D00
	  lfs       f2, -0xFA8(r2)
	  fmuls     f31, f31, f0
	  stw       r0, 0x14(r1)
	  fmuls     f30, f30, f0
	  fmuls     f2, f2, f0
	  addi      r0, r3, 0x4974
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x4950
	  mr        r3, r31
	  stw       r30, 0x18(r1)
	  addi      r4, r1, 0x14
	  stfs      f1, 0x1C(r1)
	  stfs      f31, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f30, 0x28(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x284:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FE18C
 * Size:	000058
 */
void Game::DangoMushi::Obj::isNoDamageCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x626F
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x6430
	  lwz       r3, 0x114(r3)
	  bl        -0x1C8360
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lis       r4, 0x7374
	  addi      r3, r3, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x115278
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x44:
	  li        r3, 0x1

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FE1E4
 * Size:	00002C
 */
void Game::DangoMushi::Obj::resetMapCollisionSize(bool)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  stb       r4, 0x2C2(r3)
	  beq-      .loc_0x1C
	  lfs       f0, -0xFB4(r2)
	  lwz       r3, 0xC0(r3)
	  stfs      f0, 0x1A4(r3)
	  blr

	.loc_0x1C:
	  lfs       f0, -0xEF8(r2)
	  lwz       r3, 0xC0(r3)
	  stfs      f0, 0x1A4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FE210
 * Size:	00008C
 */
void Game::DangoMushi::Obj::updateMapCollisionSize()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2C2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lwz       r5, 0xC0(r3)
	  lfs       f2, -0xFB4(r2)
	  lfs       f3, 0x1A4(r5)
	  fcmpo     cr0, f3, f2
	  blelr-
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0xEF4(r2)
	  lfs       f0, 0x54(r4)
	  fnmsubs   f0, f1, f0, f3
	  stfs      f0, 0x1A4(r5)
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x1A4(r3)
	  fcmpo     cr0, f0, f2
	  bgelr-
	  stfs      f2, 0x1A4(r3)
	  blr

	.loc_0x4C:
	  lwz       r5, 0xC0(r3)
	  lfs       f2, -0xEF8(r2)
	  lfs       f3, 0x1A4(r5)
	  fcmpo     cr0, f3, f2
	  bgelr-
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0xEF4(r2)
	  lfs       f0, 0x54(r4)
	  fmadds    f0, f1, f0, f3
	  stfs      f0, 0x1A4(r5)
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x1A4(r3)
	  fcmpo     cr0, f0, f2
	  blelr-
	  stfs      f2, 0x1A4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FE29C
 * Size:	0003AC
 */
void Game::DangoMushi::Obj::flickHandCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  stw       r0, 0x164(r1)
	  stfd      f31, 0x150(r1)
	  psq_st    f31,0x158(r1),0,0
	  stfd      f30, 0x140(r1)
	  psq_st    f30,0x148(r1),0,0
	  stfd      f29, 0x130(r1)
	  psq_st    f29,0x138(r1),0,0
	  stfd      f28, 0x120(r1)
	  psq_st    f28,0x128(r1),0,0
	  stfd      f27, 0x110(r1)
	  psq_st    f27,0x118(r1),0,0
	  stfd      f26, 0x100(r1)
	  psq_st    f26,0x108(r1),0,0
	  stfd      f25, 0xF0(r1)
	  psq_st    f25,0xF8(r1),0,0
	  stfd      f24, 0xE0(r1)
	  psq_st    f24,0xE8(r1),0,0
	  stfd      f23, 0xD0(r1)
	  psq_st    f23,0xD8(r1),0,0
	  stfd      f22, 0xC0(r1)
	  psq_st    f22,0xC8(r1),0,0
	  stfd      f21, 0xB0(r1)
	  psq_st    f21,0xB8(r1),0,0
	  stfd      f20, 0xA0(r1)
	  psq_st    f20,0xA8(r1),0,0
	  stfd      f19, 0x90(r1)
	  psq_st    f19,0x98(r1),0,0
	  stfd      f18, 0x80(r1)
	  psq_st    f18,0x88(r1),0,0
	  stfd      f17, 0x70(r1)
	  psq_st    f17,0x78(r1),0,0
	  stfd      f16, 0x60(r1)
	  psq_st    f16,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  stw       r28, 0x50(r1)
	  lbz       r0, 0x2C1(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x308
	  lwz       r3, 0x174(r3)
	  subi      r4, r2, 0xED8
	  bl        0x140C98
	  bl        0x12B550
	  lfs       f30, 0x10(r3)
	  lfs       f29, 0x20(r3)
	  fmuls     f0, f30, f30
	  lfs       f31, 0x0(r3)
	  lwz       r8, -0xEF0(r2)
	  fmuls     f1, f29, f29
	  lwz       r7, -0xEEC(r2)
	  fmadds    f0, f31, f31, f0
	  lwz       r6, -0xEE8(r2)
	  lwz       r5, -0xEE4(r2)
	  fadds     f1, f1, f0
	  lfs       f0, -0xFB8(r2)
	  lwz       r4, -0xEE0(r2)
	  lwz       r0, -0xEDC(r2)
	  fcmpo     cr0, f1, f0
	  stw       r8, 0x18(r1)
	  lfs       f28, 0x4(r3)
	  stw       r7, 0x1C(r1)
	  lfs       f27, 0x14(r3)
	  stw       r6, 0x10(r1)
	  lfs       f26, 0x24(r3)
	  stw       r5, 0x14(r1)
	  lfs       f25, 0x8(r3)
	  stw       r4, 0x8(r1)
	  lfs       f24, 0x18(r3)
	  stw       r0, 0xC(r1)
	  lfs       f23, 0x28(r3)
	  lfs       f22, 0xC(r3)
	  lfs       f21, 0x1C(r3)
	  lfs       f20, 0x2C(r3)
	  ble-      .loc_0x144
	  ble-      .loc_0x148
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x148

	.loc_0x144:
	  fmr       f1, f0

	.loc_0x148:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x168
	  lfs       f0, -0xFA8(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0

	.loc_0x168:
	  fmuls     f1, f27, f27
	  lfs       f0, -0xFB8(r2)
	  fmuls     f2, f26, f26
	  fmadds    f1, f28, f28, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x194
	  ble-      .loc_0x198
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x198

	.loc_0x194:
	  fmr       f1, f0

	.loc_0x198:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1B8
	  lfs       f0, -0xFA8(r2)
	  fdivs     f0, f0, f1
	  fmuls     f28, f28, f0
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0

	.loc_0x1B8:
	  fmuls     f1, f24, f24
	  lfs       f0, -0xFB8(r2)
	  fmuls     f2, f23, f23
	  fmadds    f1, f25, f25, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1E4
	  ble-      .loc_0x1E8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1E8

	.loc_0x1E4:
	  fmr       f1, f0

	.loc_0x1E8:
	  lfs       f0, -0xFB8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x208
	  lfs       f0, -0xFA8(r2)
	  fdivs     f0, f0, f1
	  fmuls     f25, f25, f0
	  fmuls     f24, f24, f0
	  fmuls     f23, f23, f0

	.loc_0x208:
	  lfs       f16, -0xED0(r2)
	  addi      r31, r1, 0x18
	  lfs       f17, -0xECC(r2)
	  addi      r30, r1, 0x10
	  lfs       f18, -0xFB8(r2)
	  addi      r29, r1, 0x8
	  lfs       f19, -0xFA8(r2)
	  li        r28, 0

	.loc_0x228:
	  lfs       f0, 0x0(r31)
	  li        r5, 0
	  lfs       f1, 0x0(r30)
	  li        r0, 0x1
	  fmuls     f3, f31, f0
	  lfs       f2, 0x0(r29)
	  fmuls     f4, f30, f0
	  stb       r0, 0x2C(r1)
	  fmuls     f0, f29, f0
	  lwz       r3, -0x6CF8(r13)
	  fmuls     f5, f28, f1
	  stw       r5, 0x34(r1)
	  fadds     f22, f22, f3
	  addi      r4, r1, 0x20
	  fmuls     f3, f27, f1
	  stfs      f16, 0x38(r1)
	  fadds     f21, f21, f4
	  stfs      f17, 0x3C(r1)
	  fmuls     f1, f26, f1
	  fadds     f20, f20, f0
	  stw       r5, 0x30(r1)
	  fmuls     f0, f25, f2
	  fadds     f22, f22, f5
	  stfs      f18, 0x40(r1)
	  fmuls     f4, f24, f2
	  fadds     f21, f21, f3
	  stfs      f19, 0x44(r1)
	  fadds     f22, f22, f0
	  fmuls     f0, f23, f2
	  stfs      f18, 0x48(r1)
	  fadds     f20, f20, f1
	  fadds     f21, f21, f4
	  stb       r5, 0x2D(r1)
	  fadds     f20, f20, f0
	  stfs      f22, 0x20(r1)
	  stfs      f21, 0x24(r1)
	  stfs      f20, 0x28(r1)
	  stb       r5, 0x2C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E8
	  lfs       f0, 0x3C(r1)
	  fcmpo     cr0, f0, f21
	  ble-      .loc_0x2F0

	.loc_0x2E8:
	  li        r3, 0x1
	  b         .loc_0x30C

	.loc_0x2F0:
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x2
	  addi      r29, r29, 0x4
	  addi      r31, r31, 0x4
	  blt+      .loc_0x228

	.loc_0x308:
	  li        r3, 0

	.loc_0x30C:
	  psq_l     f31,0x158(r1),0,0
	  lfd       f31, 0x150(r1)
	  psq_l     f30,0x148(r1),0,0
	  lfd       f30, 0x140(r1)
	  psq_l     f29,0x138(r1),0,0
	  lfd       f29, 0x130(r1)
	  psq_l     f28,0x128(r1),0,0
	  lfd       f28, 0x120(r1)
	  psq_l     f27,0x118(r1),0,0
	  lfd       f27, 0x110(r1)
	  psq_l     f26,0x108(r1),0,0
	  lfd       f26, 0x100(r1)
	  psq_l     f25,0xF8(r1),0,0
	  lfd       f25, 0xF0(r1)
	  psq_l     f24,0xE8(r1),0,0
	  lfd       f24, 0xE0(r1)
	  psq_l     f23,0xD8(r1),0,0
	  lfd       f23, 0xD0(r1)
	  psq_l     f22,0xC8(r1),0,0
	  lfd       f22, 0xC0(r1)
	  psq_l     f21,0xB8(r1),0,0
	  lfd       f21, 0xB0(r1)
	  psq_l     f20,0xA8(r1),0,0
	  lfd       f20, 0xA0(r1)
	  psq_l     f19,0x98(r1),0,0
	  lfd       f19, 0x90(r1)
	  psq_l     f18,0x88(r1),0,0
	  lfd       f18, 0x80(r1)
	  psq_l     f17,0x78(r1),0,0
	  lfd       f17, 0x70(r1)
	  psq_l     f16,0x68(r1),0,0
	  lfd       f16, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r0, 0x164(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FE648
 * Size:	00011C
 */
void Game::DangoMushi::Obj::startBlendAnimation(int, bool)
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
	  stw       r29, 0x14(r1)
	  rlwinm.   r0,r5,0,24,31
	  mr        r29, r3
	  mr        r30, r4
	  beq-      .loc_0xF0
	  lwz       r3, 0x184(r29)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r3)
	  mr        r31, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x80
	  lwz       r3, 0x18(r4)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lha       r0, 0x6(r3)
	  lfd       f1, -0xF68(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  b         .loc_0x84

	.loc_0x80:
	  lfs       f1, -0xFB8(r2)

	.loc_0x84:
	  lfs       f0, -0xFA8(r2)
	  lfs       f31, 0x8(r31)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f31
	  ble-      .loc_0xDC
	  cmplwi    r4, 0
	  beq-      .loc_0xA8
	  lha       r4, 0x20(r4)
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r4, -0x1

	.loc_0xAC:
	  cmpw      r30, r4
	  beq-      .loc_0xF8
	  lfs       f1, -0xFB0(r2)
	  mr        r3, r29
	  mr        r5, r30
	  subi      r6, r13, 0x6DC0
	  li        r7, 0
	  bl        -0x1F9958
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x12A6A4
	  b         .loc_0xF8

	.loc_0xDC:
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1F972C
	  b         .loc_0xF8

	.loc_0xF0:
	  li        r5, 0
	  bl        -0x1F9738

	.loc_0xF8:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FE764
 * Size:	000098
 */
void Game::DangoMushi::Obj::endBlendAnimation()
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
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  lha       r31, 0x20(r4)
	  b         .loc_0x50

	.loc_0x4C:
	  li        r31, -0x1

	.loc_0x50:
	  lfs       f31, 0x8(r3)
	  mr        r3, r30
	  bl        -0x1F9814
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0
	  bl        -0x1F97C8
	  fmr       f1, f31
	  mr        r3, r30
	  bl        -0x1F95B0
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
 * Address:	802FE7FC
 * Size:	0000C8
 */
void Game::DangoMushi::Obj::startBossFlickBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r31, 0x1

	.loc_0x74:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2814
	  li        r4, 0x454
	  subi      r5, r5, 0x27FC
	  crclr     6, 0x6
	  bl        -0x2D4250

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x4
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802FE8C4
 * Size:	0000C8
 */
void Game::DangoMushi::Obj::startBossAttackLoopBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r31, 0x1

	.loc_0x74:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2814
	  li        r4, 0x454
	  subi      r5, r5, 0x27FC
	  crclr     6, 0x6
	  bl        -0x2D4318

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x8
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802FE98C
 * Size:	0000C8
 */
void Game::DangoMushi::Obj::finishBossAttackLoopBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r31, 0x1

	.loc_0x74:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2814
	  li        r4, 0x454
	  subi      r5, r5, 0x27FC
	  crclr     6, 0x6
	  bl        -0x2D43E0

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802FEA54
 * Size:	0000FC
 */
void Game::DangoMushi::Obj::updateBossBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x78
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x78
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x7C

	.loc_0x78:
	  li        r31, 0x1

	.loc_0x7C:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xA0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2814
	  li        r4, 0x454
	  subi      r5, r5, 0x27FC
	  crclr     6, 0x6
	  bl        -0x2D44B0

	.loc_0xA0:
	  lwz       r0, 0x1F4(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0xC8
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE0

	.loc_0xC8:
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
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
 * Address:	802FEB50
 * Size:	0000BC
 */
void Game::DangoMushi::Obj::resetBossAppearBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r31, 0x1

	.loc_0x74:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2814
	  li        r4, 0x454
	  subi      r5, r5, 0x27FC
	  crclr     6, 0x6
	  bl        -0x2D45A4

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x160E00
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
 * Address:	802FEC0C
 * Size:	0000BC
 */
void Game::DangoMushi::Obj::setBossAppearBGM()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x28C(r3)
	  lwz       r12, 0x28(r30)
	  mr        r3, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x70
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0x74

	.loc_0x70:
	  li        r31, 0x1

	.loc_0x74:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x98
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x2814
	  li        r4, 0x454
	  subi      r5, r5, 0x27FC
	  crclr     6, 0x6
	  bl        -0x2D4660

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x160D44
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
 * Address:	802FECC8
 * Size:	000170
 */
void Game::DangoMushi::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  stw       r30, 0x8(r1)
	  bl        -0x2DAE40
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x61A0
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x2AD
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

	.loc_0x9C:
	  stw       r3, 0x2F4(r31)
	  li        r3, 0x14
	  bl        -0x2DAEC8
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x6154
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x2A2
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

	.loc_0x124:
	  stw       r3, 0x2F8(r31)
	  li        r3, 0x2C
	  bl        -0x2DAF50
	  mr.       r30, r3
	  beq-      .loc_0x154
	  li        r4, 0
	  li        r5, 0x2A9
	  li        r6, 0x2AA
	  bl        0xB1434
	  lis       r3, 0x804D
	  addi      r0, r3, 0x6138
	  stw       r0, 0x0(r30)

	.loc_0x154:
	  stw       r30, 0x2FC(r31)
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
 * Address:	802FEE38
 * Size:	000064
 */
void Game::DangoMushi::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0xED8
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x140190
	  bl        0x12AA48
	  lwz       r5, 0x2F4(r31)
	  subi      r4, r2, 0xEC8
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r31)
	  bl        0x140178
	  bl        0x12AA30
	  lwz       r5, 0x2F8(r31)
	  addi      r4, r31, 0x18C
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x2FC(r31)
	  bl        0xB14C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FEE9C
 * Size:	00007C
 */
void Game::DangoMushi::Obj::createDeadSmokeEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  subi      r4, r2, 0xEC0
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x140134
	  bl        0x12A9EC
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804D
	  li        r7, 0x2A8
	  stw       r0, 0x8(r1)
	  addi      r5, r5, 0x6A14
	  li        r6, 0
	  addi      r0, r4, 0x6124
	  stw       r5, 0x8(r1)
	  li        r4, 0
	  stw       r3, 0x14(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0xB03B0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FEF18
 * Size:	000088
 */
void Game::DangoMushi::Obj::createDeadBombEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  subi      r4, r2, 0xEC0
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x1400B8
	  bl        0x12A970
	  lis       r4, 0x804B
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A64
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x8(r1)
	  addi      r0, r5, 0x6A00
	  li        r7, 0x2A6
	  li        r5, 0x2A7
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6110
	  li        r4, 0
	  stw       r3, 0x18(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0xC(r1)
	  sth       r5, 0xE(r1)
	  stw       r6, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0xB040C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FEFA0
 * Size:	0000A0
 */
void Game::DangoMushi::Obj::createBodyTurnEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r8, 0
	  stw       r0, 0x34(r1)
	  subi      r0, r4, 0x5808
	  li        r5, 0x2AB
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A64
	  lis       r4, 0x804F
	  stw       r0, 0x8(r1)
	  subi      r7, r4, 0x5EA0
	  li        r0, 0x2AC
	  lis       r4, 0x804B
	  sth       r5, 0xC(r1)
	  subi      r6, r4, 0x5814
	  lis       r5, 0x804B
	  addi      r4, r1, 0x18
	  sth       r0, 0xE(r1)
	  addi      r0, r5, 0x6960
	  stw       r8, 0x10(r1)
	  stw       r8, 0x14(r1)
	  stw       r7, 0x8(r1)
	  lfs       f1, 0x1FC(r3)
	  stw       r6, 0x18(r1)
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x194(r3)
	  addi      r3, r1, 0x8
	  stfs      f0, 0x24(r1)
	  stw       r0, 0x18(r1)
	  stfs      f1, 0x28(r1)
	  bl        0xEC4DC
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF040
 * Size:	000054
 */
void Game::DangoMushi::Obj::createWallBreakEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
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
 * Address:	802FF094
 * Size:	000034
 */
void Game::DangoMushi::Obj::createFlickAttackEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
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
 * Address:	802FF0C8
 * Size:	00007C
 */
void Game::DangoMushi::Obj::createBodyDamageEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  subi      r4, r2, 0xEC0
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x13FF08
	  bl        0x12A7C0
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804D
	  li        r7, 0x2A5
	  stw       r0, 0x8(r1)
	  addi      r5, r5, 0x6A14
	  li        r6, 0
	  addi      r0, r4, 0x60FC
	  stw       r5, 0x8(r1)
	  li        r4, 0
	  stw       r3, 0x14(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0xB0184
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF144
 * Size:	0000CC
 */
void Game::DangoMushi::Obj::createBodyWallCrashEffect(Vector3<float>)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lfs       f1, 0x0(r4)
	  stw       r0, 0x44(r1)
	  lis       r6, 0x804B
	  lfs       f0, -0xFB4(r2)
	  subi      r0, r6, 0x5808
	  lfs       f2, 0x8(r4)
	  lis       r6, 0x804F
	  fmuls     f1, f1, f0
	  lfs       f3, 0x18C(r3)
	  fmuls     f2, f2, f0
	  lfs       f4, 0x194(r3)
	  lfs       f5, 0x190(r3)
	  subi      r5, r5, 0x5814
	  fsubs     f3, f3, f1
	  li        r7, 0
	  fsubs     f4, f4, f2
	  lfs       f2, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  li        r9, 0x2A3
	  lfs       f0, 0x8(r4)
	  li        r8, 0x2A4
	  lis       r10, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r10, 0x6A64
	  lis       r3, 0x804D
	  stw       r0, 0x8(r1)
	  subi      r6, r6, 0x5E8C
	  addi      r0, r3, 0x153C
	  addi      r3, r1, 0x8
	  stw       r5, 0x18(r1)
	  addi      r4, r1, 0x18
	  sth       r9, 0xC(r1)
	  sth       r8, 0xE(r1)
	  stw       r7, 0x10(r1)
	  stw       r7, 0x14(r1)
	  stw       r6, 0x8(r1)
	  stfs      f3, 0x1C(r1)
	  stfs      f5, 0x20(r1)
	  stfs      f4, 0x24(r1)
	  stw       r0, 0x18(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  bl        0xEC164
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF210
 * Size:	000034
 */
void Game::DangoMushi::Obj::startRollingMoveEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2FC(r3)
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
 * Address:	802FF244
 * Size:	000030
 */
void Game::DangoMushi::Obj::finishRollingMoveEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2FC(r3)
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
 * Address:	802FF274
 * Size:	000044
 */
void Game::DangoMushi::Obj::createEnemyBounceEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r31, 0x18C
	  bl        -0x1FB750
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF2B8
 * Size:	000008
 */
void Game::DangoMushi::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0xEB8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF2C0
 * Size:	0001E8
 */
void Game::DangoMushi::Obj::createMoveHandEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x1F7EE0
	  cmpwi     r3, 0x4
	  beq-      .loc_0x28
	  cmpwi     r3, 0x5
	  bne-      .loc_0x1D4

	.loc_0x28:
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0xED8
	  bl        0x13FCF4
	  bl        0x12A5AC
	  lfs       f0, 0x10(r3)
	  lfs       f1, 0x20(r3)
	  fmuls     f4, f0, f0
	  lfs       f9, 0x0(r3)
	  lfs       f2, 0x4(r3)
	  fmuls     f7, f1, f1
	  lfs       f3, 0x14(r3)
	  fmadds    f5, f9, f9, f4
	  lfs       f4, 0x24(r3)
	  lfs       f6, 0xC(r3)
	  fadds     f7, f7, f5
	  lfs       f5, -0xFB8(r2)
	  stfs      f6, 0x8(r1)
	  lfs       f6, 0x1C(r3)
	  fcmpo     cr0, f7, f5
	  stfs      f6, 0xC(r1)
	  lfs       f6, 0x2C(r3)
	  stfs      f6, 0x10(r1)
	  ble-      .loc_0x94
	  ble-      .loc_0x98
	  fsqrte    f5, f7
	  fmuls     f7, f5, f7
	  b         .loc_0x98

	.loc_0x94:
	  fmr       f7, f5

	.loc_0x98:
	  lfs       f5, -0xFB8(r2)
	  fcmpo     cr0, f7, f5
	  ble-      .loc_0xB8
	  lfs       f5, -0xFA8(r2)
	  fdivs     f5, f5, f7
	  fmuls     f9, f9, f5
	  fmuls     f0, f0, f5
	  fmuls     f1, f1, f5

	.loc_0xB8:
	  fmuls     f6, f3, f3
	  lfs       f5, -0xFB8(r2)
	  fmuls     f7, f4, f4
	  fmadds    f6, f2, f2, f6
	  fadds     f6, f7, f6
	  fcmpo     cr0, f6, f5
	  ble-      .loc_0xE4
	  ble-      .loc_0xE8
	  fsqrte    f5, f6
	  fmuls     f6, f5, f6
	  b         .loc_0xE8

	.loc_0xE4:
	  fmr       f6, f5

	.loc_0xE8:
	  lfs       f5, -0xFB8(r2)
	  fcmpo     cr0, f6, f5
	  ble-      .loc_0x108
	  lfs       f5, -0xFA8(r2)
	  fdivs     f5, f5, f6
	  fmuls     f2, f2, f5
	  fmuls     f3, f3, f5
	  fmuls     f4, f4, f5

	.loc_0x108:
	  lfs       f5, -0xEB4(r2)
	  addi      r4, r1, 0x8
	  lfs       f8, -0xEB0(r2)
	  fmuls     f9, f9, f5
	  lfs       f7, 0x8(r1)
	  fmuls     f0, f0, f5
	  lfs       f6, 0xC(r1)
	  fmuls     f1, f1, f5
	  lfs       f5, 0x10(r1)
	  fadds     f7, f7, f9
	  lwz       r3, -0x6CF8(r13)
	  fmuls     f2, f2, f8
	  fadds     f6, f6, f0
	  fmuls     f3, f3, f8
	  stfs      f7, 0x8(r1)
	  fadds     f0, f5, f1
	  fmuls     f4, f4, f8
	  stfs      f6, 0xC(r1)
	  fadds     f2, f7, f2
	  fadds     f1, f6, f3
	  stfs      f0, 0x10(r1)
	  fadds     f0, f0, f4
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lbz       r0, 0x2C3(r31)
	  fsubs     f1, f0, f1
	  cmplwi    r0, 0
	  beq-      .loc_0x1A8
	  lfs       f0, -0xFB0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1D4
	  li        r0, 0
	  stb       r0, 0x2C3(r31)
	  b         .loc_0x1D4

	.loc_0x1A8:
	  lfs       f0, -0xEAC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1D4
	  li        r0, 0x1
	  lfs       f1, -0xEA8(r2)
	  stb       r0, 0x2C3(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0xC(r1)
	  bl        -0x1FB940

	.loc_0x1D4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF4A8
 * Size:	000098
 */
void Game::DangoMushi::Obj::createAppearSmokeEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804D
	  lis       r4, 0x804B
	  stw       r0, 0x34(r1)
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  li        r8, 0x2B2
	  lis       r4, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A50
	  li        r7, 0x2B3
	  lis       r4, 0x804B
	  stw       r0, 0x18(r1)
	  subi      r0, r4, 0x5814
	  addi      r5, r5, 0x60E8
	  li        r4, 0x2B1
	  sth       r8, 0x1E(r1)
	  sth       r4, 0x1C(r1)
	  addi      r4, r1, 0x8
	  sth       r7, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r6, 0x28(r1)
	  stw       r6, 0x2C(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r3)
	  addi      r3, r1, 0x18
	  stfs      f0, 0x14(r1)
	  bl        0xAFB90
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF540
 * Size:	000064
 */
void Game::DangoMushi::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	802FF5A4
 * Size:	000064
 */
void Game::DangoMushi::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	802FF608
 * Size:	00009C
 */
void efx::TDangoAttack2::~TDangoAttack2()
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
	  lis       r3, 0x804D
	  addi      r3, r3, 0x6154
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
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
	  bl        -0x26F9D8

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2DB5D0

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
 * Address:	802FF6A4
 * Size:	00009C
 */
void efx::TDangoWallBreak::~TDangoWallBreak()
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
	  lis       r3, 0x804D
	  addi      r3, r3, 0x61A0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
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
	  bl        -0x26FA74

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2DB66C

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
 * Address:	802FF740
 * Size:	000008
 */
void Game::DangoMushi::Obj::getDamageCoeStoneState()
{
	/*
	.loc_0x0:
	  lfs       f1, -0xEA4(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF748
 * Size:	000008
 */
void Game::DangoMushi::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x5E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FF750
 * Size:	00006C
 */
void Game::DangoMushi::ProperAnimator::~ProperAnimator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804D
	  addi      r0, r3, 0x6518
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804B
	  subi      r0, r3, 0x7DC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804B
	  subi      r0, r3, 0x23A8
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x2DB6EC

	.loc_0x54:
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
 * Address:	802FF7BC
 * Size:	000008
 */
void efx::TDangoWallBreak::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x11C
	*/
}

/*
 * --INFO--
 * Address:	802FF7C4
 * Size:	000008
 */
void efx::TDangoAttack2::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1C0
	*/
}
