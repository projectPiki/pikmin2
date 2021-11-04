#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034BB30
 * Size:	000020
 */
void Game::Egg::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x248F64
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034BB50
 * Size:	000020
 */
void birth__Q34Game3Egg3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x24915C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034BB70
 * Size:	000150
 */
void Game::Egg::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x24A12C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  bl        -0x24A1A8
	  lwz       r3, 0x1E0(r31)
	  li        r0, 0
	  mr        r4, r31
	  li        r5, 0
	  oris      r3, r3, 0x40
	  li        r6, 0
	  stw       r3, 0x1E0(r31)
	  stb       r0, 0x2BC(r31)
	  lwz       r3, 0x2C0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x2441C0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x13C
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  lfs       f1, 0x18C(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x28(r2)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x190(r31)

	.loc_0xDC:
	  lwz       r4, 0x188(r31)
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x168
	  addi      r5, r31, 0x1A4
	  addi      r6, r31, 0x18C
	  bl        0xDC65C
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x2619C4
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034BCC0
 * Size:	000138
 */
void Game::Egg::Obj::__ct(void)
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
	  addi      r0, r31, 0x2C4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)
	  stw       r0, 0x2CC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x24A968
	  lis       r3, 0x804E
	  addi      r4, r31, 0x2C4
	  subi      r3, r3, 0x3F88
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  addi      r5, r3, 0x1B0
	  addi      r6, r3, 0x2FC
	  li        r3, 0x2C
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r4, r4, r5
	  stw       r4, 0xC(r5)
	  stw       r0, 0x2C0(r31)
	  bl        -0x327EA4
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  bl        -0x2243E0
	  lis       r3, 0x804E
	  lis       r4, 0x804B
	  subi      r0, r3, 0x40A0
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

	.loc_0xD4:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x327EF8
	  mr.       r4, r3
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x40C4
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x108:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
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
 * Address:	8034BDF8
 * Size:	00004C
 */
void Game::Egg::Obj::setFSM((Game::Egg::FSM*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2C0(r3)
	  mr        r4, r31
	  lwz       r3, 0x2C0(r3)
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
 * Address:	8034BE44
 * Size:	00006C
 */
void Game::Egg::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xC8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lfs       f0, 0x2C(r2)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  b         .loc_0x48

	.loc_0x30:
	  lfs       f0, 0x1C8(r4)
	  stfs      f0, 0x1D4(r4)
	  lfs       f0, 0x1CC(r4)
	  stfs      f0, 0x1D8(r4)
	  lfs       f0, 0x1D0(r4)
	  stfs      f0, 0x1DC(r4)

	.loc_0x48:
	  lwz       r3, 0x2C0(r4)
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
 * Address:	8034BEB0
 * Size:	000004
 */
void Game::Egg::Obj::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	8034BEB4
 * Size:	000020
 */
void Game::Egg::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x246054
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034BED4
 * Size:	00004C
 */
void Game::Egg::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0xB8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x38
	  lfs       f2, 0x2C(r4)
	  lfs       f1, 0x1C(r4)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x18C(r3)
	  stfs      f1, 0x190(r3)
	  stfs      f2, 0x194(r3)
	  bl        -0x248634
	  b         .loc_0x3C

	.loc_0x38:
	  bl        -0x2474B4

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034BF20
 * Size:	000128
 */
void Game::Egg::Obj::doAnimationCullingOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0x188(r3)
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB8(r30)
	  lfs       f3, 0x164(r30)
	  cmplwi    r3, 0
	  lfs       f2, 0x154(r30)
	  lfs       f1, 0x144(r30)
	  beq-      .loc_0x84
	  lfs       f0, 0xC(r3)
	  li        r31, 0
	  lfs       f4, 0x2C(r3)
	  fcmpu     cr0, f1, f0
	  lfs       f0, 0x1C(r3)
	  bne-      .loc_0x74
	  fcmpu     cr0, f2, f0
	  bne-      .loc_0x74
	  fcmpu     cr0, f3, f4
	  beq-      .loc_0xC4

	.loc_0x74:
	  addi      r4, r30, 0x138
	  li        r31, 0x1
	  bl        -0x261CD0
	  b         .loc_0xC4

	.loc_0x84:
	  lfs       f0, 0x18C(r30)
	  li        r31, 0
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0xAC
	  lfs       f0, 0x190(r30)
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0xAC
	  lfs       f0, 0x194(r30)
	  fcmpu     cr0, f0, f3
	  beq-      .loc_0xC4

	.loc_0xAC:
	  addi      r3, r30, 0x138
	  addi      r4, r30, 0x168
	  addi      r5, r30, 0x1A4
	  addi      r6, r30, 0x18C
	  li        r31, 0x1
	  bl        0xDC2F8

	.loc_0xC4:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xDC
	  mr        r3, r30
	  bl        -0x244CB8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x110

	.loc_0xDC:
	  lwz       r4, 0x174(r30)
	  addi      r3, r30, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x261D40
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  bl        -0x216590

	.loc_0x110:
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
 * Address:	8034C048
 * Size:	000008
 */
u32 Game::Egg::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8034C050
 * Size:	000054
 */
void Game::Egg::Obj::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2BC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C
	  bl        -0x244644
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40

	.loc_0x2C:
	  lwz       r0, 0x1E0(r31)
	  lfs       f0, 0x2C(r2)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x200(r31)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C0A4
 * Size:	000090
 */
void Game::Egg::Obj::collisionCallback((Game::CollEvent&))
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
	  bl        -0x245AB0
	  mr        r3, r30
	  bl        -0x24469C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  mr        r3, r30
	  bl        -0x244D08
	  cmpwi     r3, 0
	  bne-      .loc_0x78
	  lwz       r0, 0x1E0(r30)
	  lfs       f0, 0x2C(r2)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r30)
	  stfs      f0, 0x200(r30)

	.loc_0x78:
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
 * Address:	8034C134
 * Size:	000050
 */
void Game::Egg::Obj::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f5, 0x30(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f3, 0x2C(r2)
	  lfs       f0, 0x190(r3)
	  lfs       f2, 0x34(r2)
	  stfs      f0, 0x4(r4)
	  lfs       f1, 0x28(r2)
	  lfs       f4, 0x194(r3)
	  lfs       f0, 0x38(r2)
	  stfs      f4, 0x8(r4)
	  lfs       f4, 0x190(r3)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r4)
	  stfs      f3, 0xC(r4)
	  stfs      f2, 0x10(r4)
	  stfs      f3, 0x14(r4)
	  stfs      f1, 0x18(r4)
	  stfs      f0, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C184
 * Size:	000048
 */
void Game::Egg::Obj::needShadow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x244D88
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x34

	.loc_0x28:
	  lwz       r0, 0xB8(r31)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C1CC
 * Size:	0000A0
 */
void Game::Egg::Obj::onStartCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r5, 0xB8(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x8C
	  lfs       f2, 0x2C(r5)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x1C(r5)
	  lfs       f0, 0xC(r5)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2C(r2)
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C26C
 * Size:	000040
 */
void Game::Egg::Obj::onEndCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x244B14
	  li        r0, 0x1
	  stb       r0, 0x2BC(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
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
 * Address:	8034C2AC
 * Size:	0005F4
 */
void Game::Egg::Obj::genItem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  lfs       f2, 0x2C(r2)
	  mr        r29, r3
	  lfs       f1, 0x3C(r2)
	  li        r30, 0x2
	  stfs      f2, 0x20(r1)
	  lfs       f0, 0x30(r2)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lfs       f1, 0x18C(r3)
	  stfs      f1, 0x14(r1)
	  lfs       f1, 0x190(r3)
	  stfs      f1, 0x18(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x194(r3)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  bl        -0x282D6C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xB4(r1)
	  lwz       r3, 0xC0(r29)
	  stw       r0, 0xB0(r1)
	  lfd       f2, 0x60(r2)
	  lfd       f1, 0xB0(r1)
	  lfs       f0, 0x40(r2)
	  fsubs     f1, f1, f2
	  lfs       f2, 0x81C(r3)
	  fdivs     f1, f1, f0
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0xA0
	  li        r30, 0x2
	  b         .loc_0xFC

	.loc_0xA0:
	  lfs       f0, 0x844(r3)
	  fadds     f2, f2, f0
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0xB8
	  li        r30, 0x3
	  b         .loc_0xFC

	.loc_0xB8:
	  lfs       f0, 0x86C(r3)
	  fadds     f2, f2, f0
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0xD0
	  li        r30, 0x4
	  b         .loc_0xFC

	.loc_0xD0:
	  lfs       f0, 0x894(r3)
	  fadds     f2, f2, f0
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0xE8
	  li        r30, 0x5
	  b         .loc_0xFC

	.loc_0xE8:
	  lfs       f0, 0x8BC(r3)
	  fadds     f2, f2, f0
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0xFC
	  li        r30, 0x6

	.loc_0xFC:
	  lbz       r4, 0x8D0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x10C
	  subi      r30, r4, 0x1

	.loc_0x10C:
	  lbz       r0, 0x8D1(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x15C
	  cmpwi     r30, 0x5
	  bne-      .loc_0x13C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1D
	  bl        -0x164FF4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x15C
	  li        r30, 0x2
	  b         .loc_0x15C

	.loc_0x13C:
	  cmpwi     r30, 0x6
	  bne-      .loc_0x15C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1E
	  bl        -0x165018
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x15C
	  li        r30, 0x2

	.loc_0x15C:
	  cmpwi     r30, 0x3
	  li        r31, 0
	  beq-      .loc_0x2F4
	  bge-      .loc_0x184
	  cmpwi     r30, 0x1
	  beq-      .loc_0x218
	  bge-      .loc_0x298
	  cmpwi     r30, 0
	  bge-      .loc_0x198
	  b         .loc_0x5D0

	.loc_0x184:
	  cmpwi     r30, 0x7
	  bge-      .loc_0x5D0
	  cmpwi     r30, 0x5
	  bge-      .loc_0x568
	  b         .loc_0x47C

	.loc_0x198:
	  bl        -0x282EA4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xB4(r1)
	  addi      r3, r1, 0x88
	  lfd       f3, 0x60(r2)
	  li        r4, 0x1
	  stw       r0, 0xB0(r1)
	  lfs       f1, 0x40(r2)
	  lfd       f2, 0xB0(r1)
	  lfs       f0, 0x44(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xB8(r1)
	  lwz       r5, 0xBC(r1)
	  bl        -0x1E5914
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x88
	  bl        -0x1DEFD4
	  addi      r4, r1, 0x14
	  mr        r30, r3
	  li        r5, 0
	  bl        -0x2112FC
	  mr        r3, r30
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5D0

	.loc_0x218:
	  bl        -0x282F24
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xBC(r1)
	  addi      r3, r1, 0x60
	  lfd       f3, 0x60(r2)
	  li        r4, 0x5
	  stw       r0, 0xB8(r1)
	  lfs       f1, 0x40(r2)
	  lfd       f2, 0xB8(r1)
	  lfs       f0, 0x44(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xB0(r1)
	  lwz       r5, 0xB4(r1)
	  bl        -0x1E5994
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x60
	  bl        -0x1DF054
	  addi      r4, r1, 0x14
	  mr        r31, r3
	  li        r5, 0
	  bl        -0x21137C
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5D0

	.loc_0x298:
	  lwz       r3, -0x6BB0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r0, r3
	  beq-      .loc_0x5D0
	  mr        r30, r0
	  li        r4, 0
	  bl        -0x2115A0
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x1E0(r30)
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x2113D8
	  mr        r3, r30
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5D0

	.loc_0x2F4:
	  bl        -0x283000
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xBC(r1)
	  li        r31, 0
	  lfd       f3, 0x60(r2)
	  stw       r0, 0xB8(r1)
	  lfs       f1, 0x40(r2)
	  lfd       f2, 0xB8(r1)
	  lfs       f0, 0x48(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f31, f0, f1

	.loc_0x328:
	  lwz       r3, -0x6BB0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  cmplwi    r3, 0
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  beq-      .loc_0x46C
	  xoris     r4, r31, 0x8000
	  lis       r0, 0x4330
	  stw       r4, 0xBC(r1)
	  mr        r30, r3
	  lfd       f2, 0x60(r2)
	  stw       r0, 0xB8(r1)
	  lfs       f3, 0x4C(r2)
	  lfd       f1, 0xB8(r1)
	  lfs       f0, 0x2C(r2)
	  fsubs     f2, f1, f2
	  lfs       f1, 0x50(r2)
	  fmadds    f2, f3, f2, f31
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x3C0
	  lfs       f0, 0x54(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xB0(r1)
	  lwz       r0, 0xB4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x3E4

	.loc_0x3C0:
	  lfs       f0, 0x58(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xC0(r1)
	  lwz       r0, 0xC4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x3E4:
	  fmuls     f1, f1, f0
	  lfs       f0, 0x2C(r2)
	  fcmpo     cr0, f2, f0
	  stfs      f1, 0x8(r1)
	  bge-      .loc_0x3FC
	  fneg      f2, f2

	.loc_0x3FC:
	  lfs       f0, 0x58(r2)
	  lis       r3, 0x8050
	  addi      r0, r3, 0x71A0
	  lfs       f1, 0x50(r2)
	  fmuls     f0, f2, f0
	  mr        r3, r30
	  li        r4, 0
	  fctiwz    f0, f0
	  stfd      f0, 0xC8(r1)
	  lwz       r5, 0xCC(r1)
	  rlwinm    r5,r5,3,18,28
	  add       r5, r0, r5
	  lfs       f0, 0x4(r5)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x10(r1)
	  bl        -0x21171C
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x1E0(r30)
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x211554
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x46C:
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x2
	  blt+      .loc_0x328
	  b         .loc_0x5D0

	.loc_0x47C:
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x44
	  bl        -0x23EA8C
	  mr.       r30, r3
	  beq-      .loc_0x504
	  addi      r3, r1, 0x2C
	  bl        -0x21DB1C
	  lfs       f0, 0x18C(r29)
	  stfs      f0, 0x2C(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x34(r1)
	  bl        -0x2831BC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xCC(r1)
	  mr        r3, r30
	  lfs       f0, 0x5C(r2)
	  addi      r4, r1, 0x2C
	  stw       r0, 0xC8(r1)
	  addi      r6, r1, 0x20
	  lfd       f3, 0x60(r2)
	  li        r5, 0xA
	  lfd       f1, 0xC8(r1)
	  lfs       f2, 0x40(r2)
	  fsubs     f3, f1, f3
	  lfs       f1, 0x48(r2)
	  stfs      f0, 0x24(r1)
	  fdivs     f0, f3, f2
	  fmuls     f0, f1, f0
	  stfs      f0, 0x38(r1)
	  bl        0x21688
	  mr        r31, r3

	.loc_0x504:
	  cmplwi    r31, 0
	  bne-      .loc_0x5D0
	  lwz       r3, -0x6BB0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r0, r3
	  beq-      .loc_0x5D0
	  mr        r30, r0
	  li        r4, 0
	  bl        -0x211814
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x1E0(r30)
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x21164C
	  mr        r3, r30
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5D0

	.loc_0x568:
	  lwz       r3, -0x6BB0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r0, r3
	  beq-      .loc_0x5D0
	  mr        r31, r0
	  li        r4, 0
	  bl        -0x211870
	  li        r0, 0x1
	  cmpwi     r30, 0x6
	  stb       r0, 0x1E0(r31)
	  bne-      .loc_0x5A8
	  li        r0, 0x2
	  stb       r0, 0x1E0(r31)

	.loc_0x5A8:
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  li        r5, 0
	  bl        -0x2116B8
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5D0:
	  psq_l     f31,0xE8(r1),0,0
	  lwz       r0, 0xF4(r1)
	  lfd       f31, 0xE0(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C8A0
 * Size:	000004
 */
void Game::Egg::Obj::setInitialSetting((Game::EnemyInitialParamBase*)) { }

/*
 * --INFO--
 * Address:	8034C8A4
 * Size:	000010
 */
void Game::Egg::Obj::isLivingThing(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xB8(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C8B4
 * Size:	000008
 */
u32 Game::Egg::Obj::getEnemyTypeID(void) { return 0x25; }

/*
 * --INFO--
 * Address:	8034C8BC
 * Size:	000008
 */
void Game::Egg::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x68(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034C8C4
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C4
	  b         -0x245FB8
	*/
}

/*
 * --INFO--
 * Address:	8034C8D8
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C4
	  b         -0x246240
	*/
}

/*
 * --INFO--
 * Address:	8034C8EC
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C4
	  b         -0x246234
	*/
}

/*
 * --INFO--
 * Address:	8034C900
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C4
	  b         -0x245E98
	*/
}

/*
 * --INFO--
 * Address:	8034C914
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C4
	  b         -0x245ED8
	*/
}

/*
 * --INFO--
 * Address:	8034C928
 * Size:	000014
 */
void @708 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C4
	  b         -0x246298
	*/
}
