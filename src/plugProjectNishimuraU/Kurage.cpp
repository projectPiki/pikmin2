#include "types.h"

/*
 * --INFO--
 * Address:	802AD6F0
 * Size:	000138
 */
void Game::Kurage::Obj::Obj()
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
	  addi      r0, r31, 0x2FC
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2FC(r31)
	  stw       r0, 0x300(r31)
	  stw       r0, 0x304(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1AC398
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2FC
	  subi      r5, r3, 0x1CD8
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
	  bl        -0x2898CC
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x185E08
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x1F20
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
	  bl        -0x289920
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x1F48
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1AE4
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
 * Address:	802AD828
 * Size:	000004
 */
void Game::Kurage::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802AD82C
 * Size:	0000A8
 */
void Game::Kurage::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1ABDE8
	  lwz       r3, 0x1E0(r31)
	  li        r4, -0x1
	  lfs       f1, -0x22A0(r2)
	  li        r0, 0
	  rlwinm    r3,r3,0,25,23
	  lfs       f0, -0x229C(r2)
	  stw       r3, 0x1E0(r31)
	  mr        r3, r31
	  lwz       r5, 0x1E0(r31)
	  ori       r5, r5, 0x4
	  stw       r5, 0x1E0(r31)
	  lwz       r5, 0x1E0(r31)
	  rlwinm    r5,r5,0,24,22
	  stw       r5, 0x1E0(r31)
	  stw       r4, 0x2C0(r31)
	  stfs      f1, 0x2C4(r31)
	  stfs      f1, 0x2CC(r31)
	  stfs      f0, 0x2C8(r31)
	  stw       r0, 0x2E0(r31)
	  stb       r0, 0x2DC(r31)
	  bl        0x1D0C
	  mr        r3, r31
	  bl        0x1D90
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
 * Address:	802AD8D4
 * Size:	000054
 */
void Game::Kurage::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0x1DC4
	  mr        r3, r30
	  bl        0x1E5C
	  mr        r3, r30
	  bl        0x1F20
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1ABA24
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
 * Address:	802AD928
 * Size:	000100
 */
void Game::Kurage::Obj::doUpdate()
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
	  bl        0xD08
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xEC
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,25,25
	  beq-      .loc_0xEC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x50C7
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0xEC
	  lfs       f1, -0x22A0(r2)
	  lfs       f0, 0x210(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0xEC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58C8
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADA28
 * Size:	000004
 */
void Game::Kurage::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802ADA2C
 * Size:	000020
 */
void Game::Kurage::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1A7BCC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADA4C
 * Size:	00004C
 */
void Game::Kurage::Obj::setFSM(Game::Kurage::FSM*)
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
 * Address:	802ADA98
 * Size:	000118
 */
void Game::Kurage::Obj::getShadowParam(Game::ShadowParam&)
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
	  mr        r31, r4
	  lwz       r3, 0x174(r3)
	  subi      r4, r2, 0x2298
	  bl        0x191520
	  bl        0x17BDD8
	  lfs       f2, 0x2C(r3)
	  mr        r4, r31
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  fmr       f31, f1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lfs       f0, -0x2290(r2)
	  fadds     f0, f0, f31
	  stfs      f0, 0x4(r31)
	  b         .loc_0xA0

	.loc_0x94:
	  lfs       f0, -0x228C(r2)
	  fadds     f0, f0, f31
	  stfs      f0, 0x4(r31)

	.loc_0xA0:
	  lfs       f1, -0x22A0(r2)
	  mr        r3, r30
	  lfs       f0, -0x2288(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lwz       r3, 0xC0(r30)
	  lfs       f1, -0x2284(r2)
	  lfs       f0, 0x81C(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0xF0

	.loc_0xE8:
	  lfs       f0, -0x2284(r2)
	  stfs      f0, 0x18(r31)

	.loc_0xF0:
	  lfs       f0, -0x2280(r2)
	  stfs      f0, 0x1C(r31)
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
 * Address:	802ADBB0
 * Size:	000038
 */
void Game::Kurage::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x24
	  lfs       f2, -0x2288(r2)
	  bl        -0x1A7B9C
	  li        r3, 0x1
	  b         .loc_0x28

	.loc_0x24:
	  li        r3, 0

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADBE8
 * Size:	000044
 */
void Game::Kurage::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AAD08
	  mr        r3, r31
	  bl        0x1AB0
	  mr        r3, r31
	  bl        0x1B48
	  mr        r3, r31
	  bl        0x1C0C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADC2C
 * Size:	00007C
 */
void Game::Kurage::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AAD38
	  mr        r3, r31
	  bl        0x19E4
	  mr        r3, r31
	  bl        -0x1A685C
	  cmpwi     r3, 0x1
	  blt-      .loc_0x38
	  cmpwi     r3, 0x5
	  ble-      .loc_0x48

	.loc_0x38:
	  cmpwi     r3, 0x8
	  blt-      .loc_0x68
	  cmpwi     r3, 0x9
	  bgt-      .loc_0x68

	.loc_0x48:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	802ADCA8
 * Size:	000034
 */
void Game::Kurage::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A6324
	  mr        r3, r31
	  bl        0x1D14
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADCDC
 * Size:	000034
 */
void Game::Kurage::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A6328
	  mr        r3, r31
	  bl        0x1C40
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADD10
 * Size:	000020
 */
void Game::Kurage::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1CBC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADD30
 * Size:	000020
 */
void Game::Kurage::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1BFC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADD50
 * Size:	000098
 */
void Game::Kurage::Obj::setHeightVelocity(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6CF8(r13)
	  fmr       f30, f1
	  addi      r4, r31, 0x18C
	  lwz       r12, 0x4(r3)
	  fmr       f31, f2
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x190(r31)
	  lfs       f2, 0x81C(r3)
	  lfs       f3, 0x844(r3)
	  fadds     f2, f30, f2
	  fadds     f3, f31, f3
	  fadds     f2, f1, f2
	  fsubs     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x190(r31)
	  fsubs     f1, f0, f1
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADDE8
 * Size:	0001D8
 */
void Game::Kurage::Obj::setRandTarget()
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
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f27, f1, f0
	  bl        -0x1E4894
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  addi      r3, r1, 0x8
	  stw       r0, 0x18(r1)
	  lfd       f1, -0x2268(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  fsubs     f2, f0, f1
	  lfs       f1, -0x227C(r2)
	  lfs       f0, 0x384(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f2, f27, f2
	  fdivs     f1, f2, f1
	  fadds     f28, f0, f1
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x198(r31)
	  lis       r3, 0x8051
	  lfs       f1, 0x8(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f29, 0x1A0(r31)
	  lfs       f0, 0x10(r1)
	  fsubs     f1, f1, f31
	  lfs       f30, 0x19C(r31)
	  fsubs     f2, f0, f29
	  bl        -0x278DA0
	  fmr       f27, f1
	  bl        -0x1E4910
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f2, -0x2268(r2)
	  stw       r0, 0x20(r1)
	  lfs       f3, -0x2278(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x227C(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x2274(r2)
	  lfs       f0, -0x22A0(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f27, f1
	  fadds     f3, f2, f1
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x118
	  fneg      f1, f3

	.loc_0x118:
	  lfs       f2, -0x2270(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x22A0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f1, f28, f0, f29
	  bge-      .loc_0x174
	  lfs       f0, -0x226C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x18C

	.loc_0x174:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x18C:
	  fmadds    f0, f28, f0, f31
	  stfs      f0, 0x2D0(r31)
	  stfs      f30, 0x2D4(r31)
	  stfs      f1, 0x2D8(r31)
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ADFC0
 * Size:	0000A4
 */
void Game::Kurage::Obj::getMovePitchOffset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f3, -0x2278(r2)
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x2C8(r3)
	  lfs       f2, 0x54(r4)
	  lfs       f0, -0x2260(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x2C8(r3)
	  lfs       f1, 0x2C8(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x34
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2C8(r3)

	.loc_0x34:
	  lfs       f2, 0x2C8(r3)
	  lfs       f0, -0x22A0(r2)
	  lfs       f1, -0x2284(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x74
	  lfs       f0, -0x226C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x98

	.loc_0x74:
	  lfs       f0, -0x2270(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x98:
	  fmuls     f1, f1, f0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE064
 * Size:	0001A8
 */
void Game::Kurage::Obj::getAttackPitchOffset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  lis       r5, 0x8049
	  stw       r0, 0x64(r1)
	  subi      r10, r4, 0x623C
	  stmw      r27, 0x4C(r1)
	  lwzu      r27, -0x6258(r5)
	  lwz       r9, 0x0(r10)
	  lwz       r28, 0x4(r5)
	  lwz       r29, 0x8(r5)
	  lwz       r30, 0xC(r5)
	  lwz       r31, 0x10(r5)
	  lwz       r12, 0x14(r5)
	  lwz       r11, 0x18(r5)
	  lwz       r8, 0x4(r10)
	  lwz       r7, 0x8(r10)
	  lwz       r6, 0xC(r10)
	  lwz       r5, 0x10(r10)
	  lwz       r4, 0x14(r10)
	  lwz       r0, 0x18(r10)
	  stw       r27, 0x24(r1)
	  stw       r28, 0x28(r1)
	  stw       r29, 0x2C(r1)
	  stw       r30, 0x30(r1)
	  stw       r31, 0x34(r1)
	  stw       r12, 0x38(r1)
	  stw       r11, 0x3C(r1)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r5, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        -0x1A8E84
	  addi      r5, r1, 0x24
	  addi      r6, r1, 0x8
	  li        r0, 0x2
	  lfs       f0, -0x22A0(r2)
	  mr        r4, r5
	  mr        r3, r6
	  lfs       f3, -0x2288(r2)
	  li        r7, 0
	  mtctr     r0

	.loc_0xB4:
	  lfs       f2, 0x0(r5)
	  addi      r0, r7, 0x1
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF8
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0xF8
	  fsubs     f5, f1, f2
	  lfs       f0, 0x0(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0xF8:
	  lfs       f2, 0x4(r5)
	  addi      r0, r7, 0x2
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x13C
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0x13C
	  fsubs     f5, f1, f2
	  lfs       f0, 0x4(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0x13C:
	  lfs       f2, 0x8(r5)
	  addi      r0, r7, 0x3
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x180
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0x180
	  fsubs     f5, f1, f2
	  lfs       f0, 0x8(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0x180:
	  addi      r5, r5, 0xC
	  addi      r6, r6, 0xC
	  addi      r7, r7, 0x3
	  bdnz+     .loc_0xB4
	  lmw       r27, 0x4C(r1)
	  fmr       f1, f0
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE20C
 * Size:	0001A8
 */
void Game::Kurage::Obj::getFlickPitchOffset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  lis       r5, 0x8049
	  stw       r0, 0x64(r1)
	  subi      r10, r4, 0x6204
	  stmw      r27, 0x4C(r1)
	  lwzu      r27, -0x6220(r5)
	  lwz       r9, 0x0(r10)
	  lwz       r28, 0x4(r5)
	  lwz       r29, 0x8(r5)
	  lwz       r30, 0xC(r5)
	  lwz       r31, 0x10(r5)
	  lwz       r12, 0x14(r5)
	  lwz       r11, 0x18(r5)
	  lwz       r8, 0x4(r10)
	  lwz       r7, 0x8(r10)
	  lwz       r6, 0xC(r10)
	  lwz       r5, 0x10(r10)
	  lwz       r4, 0x14(r10)
	  lwz       r0, 0x18(r10)
	  stw       r27, 0x24(r1)
	  stw       r28, 0x28(r1)
	  stw       r29, 0x2C(r1)
	  stw       r30, 0x30(r1)
	  stw       r31, 0x34(r1)
	  stw       r12, 0x38(r1)
	  stw       r11, 0x3C(r1)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r5, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        -0x1A902C
	  addi      r5, r1, 0x24
	  addi      r6, r1, 0x8
	  li        r0, 0x2
	  lfs       f0, -0x22A0(r2)
	  mr        r4, r5
	  mr        r3, r6
	  lfs       f3, -0x2288(r2)
	  li        r7, 0
	  mtctr     r0

	.loc_0xB4:
	  lfs       f2, 0x0(r5)
	  addi      r0, r7, 0x1
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF8
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0xF8
	  fsubs     f5, f1, f2
	  lfs       f0, 0x0(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0xF8:
	  lfs       f2, 0x4(r5)
	  addi      r0, r7, 0x2
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x13C
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0x13C
	  fsubs     f5, f1, f2
	  lfs       f0, 0x4(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0x13C:
	  lfs       f2, 0x8(r5)
	  addi      r0, r7, 0x3
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x180
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0x180
	  fsubs     f5, f1, f2
	  lfs       f0, 0x8(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0x180:
	  addi      r5, r5, 0xC
	  addi      r6, r6, 0xC
	  addi      r7, r7, 0x3
	  bdnz+     .loc_0xB4
	  lmw       r27, 0x4C(r1)
	  fmr       f1, f0
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE3B4
 * Size:	000144
 */
void Game::Kurage::Obj::getTakeOffPitchOffset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  lis       r5, 0x8049
	  stw       r0, 0x44(r1)
	  subi      r8, r4, 0x61D4
	  stw       r31, 0x3C(r1)
	  lwzu      r31, -0x61E8(r5)
	  lwz       r7, 0x0(r8)
	  lwz       r12, 0x4(r5)
	  lwz       r11, 0x8(r5)
	  lwz       r10, 0xC(r5)
	  lwz       r9, 0x10(r5)
	  lwz       r6, 0x4(r8)
	  lwz       r5, 0x8(r8)
	  lwz       r4, 0xC(r8)
	  lwz       r0, 0x10(r8)
	  stw       r31, 0x1C(r1)
	  stw       r12, 0x20(r1)
	  stw       r11, 0x24(r1)
	  stw       r10, 0x28(r1)
	  stw       r9, 0x2C(r1)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  bl        -0x1A91B4
	  addi      r5, r1, 0x1C
	  addi      r6, r1, 0x8
	  li        r0, 0x2
	  lfs       f0, -0x22A0(r2)
	  mr        r4, r5
	  mr        r3, r6
	  lfs       f3, -0x2288(r2)
	  li        r7, 0
	  mtctr     r0

	.loc_0x94:
	  lfs       f2, 0x0(r5)
	  addi      r0, r7, 0x1
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xD8
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0xD8
	  fsubs     f5, f1, f2
	  lfs       f0, 0x0(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0xD8:
	  lfs       f2, 0x4(r5)
	  addi      r0, r7, 0x2
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x11C
	  rlwinm    r0,r0,2,0,29
	  lfsx      f4, r4, r0
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0x11C
	  fsubs     f5, f1, f2
	  lfs       f0, 0x4(r6)
	  fsubs     f2, f4, f2
	  lfsx      f4, r3, r0
	  fdivs     f5, f5, f2
	  fsubs     f2, f3, f5
	  fmuls     f0, f2, f0
	  fmadds    f0, f5, f4, f0

	.loc_0x11C:
	  addi      r5, r5, 0x8
	  addi      r6, r6, 0x8
	  addi      r7, r7, 0x2
	  bdnz+     .loc_0x94
	  lwz       r0, 0x44(r1)
	  fmr       f1, f0
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE4F8
 * Size:	000168
 */
void Game::Kurage::Obj::getFallPitchOffset(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  lis       r4, 0x8049
	  lis       r3, 0x8049
	  lfs       f0, -0x225C(r2)
	  stmw      r21, 0x54(r1)
	  subi      r6, r4, 0x61C0
	  subi      r5, r3, 0x61A0
	  addi      r23, r1, 0x28
	  addi      r22, r1, 0x8
	  fmuls     f6, f0, f1
	  li        r0, 0x2
	  mr        r4, r23
	  mr        r3, r22
	  li        r21, 0
	  lfs       f1, -0x22A0(r2)
	  lfs       f2, -0x2288(r2)
	  lwz       r24, 0x0(r6)
	  lwz       r25, 0x4(r6)
	  lwz       r26, 0x8(r6)
	  lwz       r27, 0xC(r6)
	  lwz       r28, 0x10(r6)
	  lwz       r29, 0x14(r6)
	  lwz       r30, 0x18(r6)
	  lwz       r31, 0x1C(r6)
	  lwz       r12, 0x0(r5)
	  lwz       r11, 0x4(r5)
	  lwz       r10, 0x8(r5)
	  lwz       r9, 0xC(r5)
	  lwz       r8, 0x10(r5)
	  lwz       r7, 0x14(r5)
	  lwz       r6, 0x18(r5)
	  lwz       r5, 0x1C(r5)
	  stw       r24, 0x28(r1)
	  stw       r25, 0x2C(r1)
	  stw       r26, 0x30(r1)
	  stw       r27, 0x34(r1)
	  stw       r28, 0x38(r1)
	  stw       r29, 0x3C(r1)
	  stw       r30, 0x40(r1)
	  stw       r31, 0x44(r1)
	  stw       r12, 0x8(r1)
	  stw       r11, 0xC(r1)
	  stw       r10, 0x10(r1)
	  stw       r9, 0x14(r1)
	  stw       r8, 0x18(r1)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  mtctr     r0

	.loc_0xC4:
	  lfs       f3, 0x0(r23)
	  addi      r0, r21, 0x1
	  fcmpo     cr0, f6, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x108
	  rlwinm    r0,r0,2,0,29
	  lfsx      f5, r4, r0
	  fcmpo     cr0, f6, f5
	  bge-      .loc_0x108
	  fsubs     f4, f6, f3
	  lfs       f0, 0x0(r22)
	  fsubs     f1, f5, f3
	  lfsx      f3, r3, r0
	  fdivs     f4, f4, f1
	  fsubs     f1, f2, f4
	  fmuls     f0, f1, f0
	  fmadds    f1, f4, f3, f0

	.loc_0x108:
	  lfs       f3, 0x4(r23)
	  addi      r0, r21, 0x2
	  fcmpo     cr0, f6, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x14C
	  rlwinm    r0,r0,2,0,29
	  lfsx      f5, r4, r0
	  fcmpo     cr0, f6, f5
	  bge-      .loc_0x14C
	  fsubs     f4, f6, f3
	  lfs       f0, 0x4(r22)
	  fsubs     f1, f5, f3
	  lfsx      f3, r3, r0
	  fdivs     f4, f4, f1
	  fsubs     f1, f2, f4
	  fmuls     f0, f1, f0
	  fmadds    f1, f4, f3, f0

	.loc_0x14C:
	  addi      r23, r23, 0x8
	  addi      r22, r22, 0x8
	  addi      r21, r21, 0x2
	  bdnz+     .loc_0xC4
	  lmw       r21, 0x54(r1)
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE660
 * Size:	000030
 */
void Game::Kurage::Obj::updateFallTimer()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1F4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x24
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r3)
	  blr

	.loc_0x24:
	  lfs       f0, -0x22A0(r2)
	  stfs      f0, 0x2CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE690
 * Size:	0000A4
 */
void Game::Kurage::Obj::getFlyingNextState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x22A0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x30:
	  li        r4, 0x3
	  bl        -0x199510
	  cmpwi     r3, 0
	  ble-      .loc_0x48
	  li        r3, 0x5
	  b         .loc_0x90

	.loc_0x48:
	  lwz       r4, 0xC0(r31)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x8E4(r4)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x6C
	  lwz       r3, 0x1F4(r31)
	  lwz       r0, 0x90C(r4)
	  cmpw      r3, r0
	  blt-      .loc_0x8C

	.loc_0x6C:
	  lwz       r3, 0x1F4(r31)
	  lwz       r0, 0x90C(r4)
	  cmpw      r3, r0
	  bge-      .loc_0x84
	  li        r3, 0x9
	  b         .loc_0x90

	.loc_0x84:
	  li        r3, 0x5
	  b         .loc_0x90

	.loc_0x8C:
	  li        r3, -0x1

	.loc_0x90:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AE734
 * Size:	000448
 */
void Game::Kurage::Obj::getSearchedTarget(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r30, r3
	  li        r31, 0
	  lfs       f2, 0x194(r3)
	  lfs       f0, 0x1A0(r3)
	  lwz       r4, 0xC0(r3)
	  fsubs     f4, f2, f0
	  lfs       f3, 0x18C(r3)
	  lfs       f2, 0x198(r3)
	  lfs       f0, 0x35C(r4)
	  fsubs     f3, f3, f2
	  fmuls     f2, f4, f4
	  fmuls     f0, f0, f0
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x3F0
	  lfs       f30, 0x190(r30)
	  lis       r3, 0x804B
	  lfs       f2, -0x2258(r2)
	  li        r0, 0
	  lfs       f0, 0x424(r4)
	  fsubs     f5, f30, f1
	  lfs       f4, -0x2284(r2)
	  cmplwi    r0, 0
	  lfs       f1, 0x3D4(r4)
	  fmuls     f2, f2, f0
	  lfs       f0, 0x564(r4)
	  lfs       f3, -0x2278(r2)
	  subi      r4, r3, 0x4364
	  lwz       r3, -0x6D0C(r13)
	  fsubs     f29, f5, f4
	  fmuls     f28, f3, f2
	  stw       r4, 0x44(r1)
	  fmuls     f27, f1, f1
	  fmuls     f26, f0, f0
	  stw       r0, 0x50(r1)
	  stw       r0, 0x48(r1)
	  stw       r3, 0x4C(r1)
	  bne-      .loc_0x100
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x3D0

	.loc_0x100:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x16C

	.loc_0x118:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3D0
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x16C:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x118
	  b         .loc_0x3D0

	.loc_0x18C:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lwz       r0, 0xF4(r29)
	  cmplw     r0, r30
	  beq-      .loc_0x314
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x3C(r1)
	  lfs       f2, 0x38(r1)
	  fcmpo     cr0, f0, f29
	  lfs       f3, 0x40(r1)
	  ble-      .loc_0x314
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x314
	  lfs       f0, 0x194(r30)
	  lfs       f1, 0x18C(r30)
	  fsubs     f0, f0, f3
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f0
	  fmadds    f31, f1, f1, f0
	  fcmpo     cr0, f31, f26
	  bge-      .loc_0x240
	  mr        r3, r29
	  b         .loc_0x3F4

	.loc_0x240:
	  fcmpo     cr0, f31, f27
	  bge-      .loc_0x314
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
	  bl        -0x2798EC
	  bl        0x1631D8
	  lwz       r12, 0x0(r30)
	  fmr       f25, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x1631E0
	  lfs       f0, -0x22A0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2FC
	  b         .loc_0x300

	.loc_0x2FC:
	  fneg      f1, f1

	.loc_0x300:
	  fcmpo     cr0, f1, f28
	  cror      2, 0, 0x2
	  bne-      .loc_0x314
	  mr        r31, r29
	  fmr       f27, f31

	.loc_0x314:
	  lwz       r0, 0x50(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x340
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x3D0

	.loc_0x340:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x3B4

	.loc_0x360:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3D0
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x3B4:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x360

	.loc_0x3D0:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x48(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x18C

	.loc_0x3F0:
	  mr        r3, r31

	.loc_0x3F4:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AEB7C
 * Size:	00033C
 */
void Game::Kurage::Obj::isSuck(float, Game::Creature*)
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
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r3
	  lfs       f2, -0x2284(r2)
	  lfs       f30, 0x190(r3)
	  cmplwi    r4, 0
	  lwz       r3, 0xC0(r3)
	  fsubs     f1, f30, f1
	  lfs       f0, 0x564(r3)
	  fsubs     f29, f1, f2
	  fmuls     f31, f0, f0
	  beq-      .loc_0xAC
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  fcmpo     cr0, f0, f29
	  lfs       f3, 0x1C(r1)
	  ble-      .loc_0x308
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x308
	  lfs       f0, 0x194(r31)
	  lfs       f1, 0x18C(r31)
	  fsubs     f0, f0, f3
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x308
	  li        r3, 0x1
	  b         .loc_0x30C

	.loc_0xAC:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x2C(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0xEC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x2E8

	.loc_0xEC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x158

	.loc_0x104:
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
	  bne-      .loc_0x2E8
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x158:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x104
	  b         .loc_0x2E8

	.loc_0x178:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x22C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x22C
	  lwz       r0, 0xF4(r30)
	  cmplw     r0, r31
	  beq-      .loc_0x22C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fcmpo     cr0, f0, f29
	  lfs       f3, 0x10(r1)
	  ble-      .loc_0x22C
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x22C
	  lfs       f0, 0x194(r31)
	  lfs       f1, 0x18C(r31)
	  fsubs     f0, f0, f3
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x22C
	  li        r3, 0x1
	  b         .loc_0x30C

	.loc_0x22C:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x258
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x2E8

	.loc_0x258:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x2CC

	.loc_0x278:
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
	  bne-      .loc_0x2E8
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x2CC:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x278

	.loc_0x2E8:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x178

	.loc_0x308:
	  li        r3, 0

	.loc_0x30C:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AEEB8
 * Size:	000434
 */
void Game::Kurage::Obj::suckPikmin(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stfd      f27, 0x70(r1)
	  psq_st    f27,0x78(r1),0,0
	  stfd      f26, 0x60(r1)
	  psq_st    f26,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  stw       r28, 0x50(r1)
	  mr        r30, r3
	  lis       r3, 0x7375
	  lfs       f28, 0x190(r30)
	  addi      r4, r3, 0x636B
	  lwz       r3, 0xC0(r30)
	  fsubs     f2, f28, f1
	  lfs       f1, -0x2284(r2)
	  lfs       f0, 0x5B4(r3)
	  lwz       r3, 0x114(r30)
	  fsubs     f27, f2, f1
	  fmuls     f26, f0, f0
	  bl        -0x1790EC
	  mr        r31, r3
	  lis       r3, 0x804B
	  li        r0, 0
	  lfs       f31, 0x4C(r31)
	  lfs       f30, 0x50(r31)
	  cmplwi    r0, 0
	  lfs       f29, 0x54(r31)
	  subi      r4, r3, 0x4364
	  lwz       r3, -0x6D0C(r13)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0xCC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x3A8

	.loc_0xCC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x138

	.loc_0xE4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A8
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x138:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xE4
	  b         .loc_0x3A8

	.loc_0x158:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2EC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2EC
	  lwz       r0, 0xF4(r29)
	  cmplw     r0, r30
	  beq-      .loc_0x2EC
	  lwz       r28, 0xC0(r30)
	  lwz       r3, 0x2E0(r30)
	  lwz       r0, 0x934(r28)
	  cmpw      r3, r0
	  bge-      .loc_0x2EC
	  bl        -0x1E5ADC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  lfd       f3, -0x2268(r2)
	  stw       r0, 0x40(r1)
	  lfs       f2, -0x2288(r2)
	  lfd       f0, 0x40(r1)
	  lfs       f1, -0x227C(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x8BC(r28)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2EC
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fcmpo     cr0, f3, f27
	  lfs       f4, 0x10(r1)
	  ble-      .loc_0x2EC
	  fcmpo     cr0, f3, f28
	  bge-      .loc_0x2EC
	  lfs       f0, 0x194(r30)
	  lfs       f1, 0x18C(r30)
	  fsubs     f0, f0, f4
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f26
	  bge-      .loc_0x2EC
	  lis       r3, 0x804B
	  fsubs     f2, f31, f2
	  subi      r4, r3, 0x5D00
	  fsubs     f1, f30, f3
	  fsubs     f0, f29, f4
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r4, 0x24(r1)
	  addi      r5, r3, 0x489C
	  mr        r3, r29
	  stw       r30, 0x28(r1)
	  addi      r4, r1, 0x24
	  stw       r5, 0x24(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stw       r0, 0x38(r1)
	  stw       r31, 0x3C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2EC
	  lwz       r4, 0x2E0(r30)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, 0x2E0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x282A
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2EC:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x318
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x3A8

	.loc_0x318:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x38C

	.loc_0x338:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A8
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x38C:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x338

	.loc_0x3A8:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x158
	  lwz       r3, 0xC0(r30)
	  lwz       r5, 0x2E0(r30)
	  lwz       r0, 0x934(r3)
	  srawi     r4, r5, 0x1F
	  rlwinm    r3,r0,1,31,31
	  subc      r0, r5, r0
	  adde      r3, r4, r3
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  psq_l     f27,0x78(r1),0,0
	  lfd       f27, 0x70(r1)
	  psq_l     f26,0x68(r1),0,0
	  lfd       f26, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF2EC
 * Size:	0002B4
 */
void Game::Kurage::Obj::createEffect()
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
	  bl        -0x28B464
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
	  subi      r4, r4, 0x1D24
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0xE5
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
	  stw       r3, 0x2E4(r31)
	  li        r3, 0x14
	  bl        -0x28B4EC
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
	  subi      r4, r4, 0x1D24
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0xE5
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
	  stw       r3, 0x2E8(r31)
	  li        r3, 0x40
	  bl        -0x28B574
	  mr.       r30, r3
	  beq-      .loc_0x158
	  li        r4, 0
	  li        r5, 0xE7
	  li        r6, 0xE8
	  li        r7, 0xE9
	  bl        0x101178
	  lis       r3, 0x804D
	  subi      r0, r3, 0x1D40
	  stw       r0, 0x0(r30)

	.loc_0x158:
	  stw       r30, 0x2EC(r31)
	  li        r3, 0x14
	  bl        -0x28B5A8
	  cmplwi    r3, 0
	  beq-      .loc_0x1E4
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r8, r4, 0x6940
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x1D8C
	  li        r10, 0
	  li        r9, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r7, r8, 0x14
	  addi      r6, r31, 0x18C
	  li        r5, 0xEA
	  stw       r10, 0x8(r3)
	  addi      r0, r4, 0x14
	  sth       r9, 0xC(r3)
	  stb       r10, 0xE(r3)
	  stw       r8, 0x0(r3)
	  stw       r7, 0x4(r3)
	  stw       r6, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x1E4:
	  stw       r3, 0x2F0(r31)
	  li        r3, 0x24
	  bl        -0x28B634
	  mr.       r30, r3
	  beq-      .loc_0x210
	  li        r4, 0xEB
	  li        r5, 0xEC
	  bl        0x100B24
	  lis       r3, 0x804D
	  subi      r0, r3, 0x1DA8
	  stw       r0, 0x0(r30)

	.loc_0x210:
	  stw       r30, 0x2F4(r31)
	  li        r3, 0x14
	  bl        -0x28B660
	  cmplwi    r3, 0
	  beq-      .loc_0x298
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x685C
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x1DF4
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0xE4
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

	.loc_0x298:
	  stw       r3, 0x2F8(r31)
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
 * Address:	802AF5A0
 * Size:	00008C
 */
void Game::Kurage::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x2254
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x18FA28
	  bl        0x17A2E0
	  lwz       r5, 0x2E4(r31)
	  subi      r4, r2, 0x224C
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r31)
	  bl        0x18FA10
	  bl        0x17A2C8
	  lwz       r5, 0x2E8(r31)
	  subi      r4, r2, 0x2244
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r31)
	  bl        0x18F9F8
	  bl        0x17A2B0
	  mr        r4, r3
	  lwz       r3, 0x2EC(r31)
	  bl        0x101050
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x223C
	  bl        0x18F9DC
	  bl        0x17A294
	  lwz       r4, 0x2F8(r31)
	  stw       r3, 0x10(r4)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF62C
 * Size:	000088
 */
void Game::Kurage::Obj::startEyeHireBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
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
 * Address:	802AF6B4
 * Size:	00007C
 */
void Game::Kurage::Obj::finishEyeBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
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
 * Address:	802AF730
 * Size:	000024
 */
void Game::Kurage::Obj::setHireEffectLife(short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2EC(r3)
	  bl        0x10429C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF754
 * Size:	000050
 */
void Game::Kurage::Obj::finishHireEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2EC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	802AF7A4
 * Size:	000058
 */
void Game::Kurage::Obj::startSuckEffect(Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r5, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x8(r4)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF7FC
 * Size:	000024
 */
void Game::Kurage::Obj::updateSuckEffect(Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
	  bl        0x104190
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF820
 * Size:	000030
 */
void Game::Kurage::Obj::finishSuckEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
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
 * Address:	802AF850
 * Size:	00009C
 */
void Game::Kurage::Obj::createBodyBombEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  subi      r4, r2, 0x223C
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x18F780
	  bl        0x17A038
	  lis       r4, 0x804B
	  lfs       f0, 0xC(r3)
	  lfs       f1, 0x1C(r3)
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x2C(r3)
	  lis       r3, 0x804E
	  addi      r5, r3, 0x6A64
	  li        r6, 0
	  stw       r0, 0x18(r1)
	  lis       r4, 0x804D
	  lis       r3, 0x804B
	  li        r8, 0xE2
	  subi      r0, r3, 0x5814
	  li        r7, 0xE3
	  stw       r5, 0x18(r1)
	  subi      r5, r4, 0x1E08
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x8
	  sth       r8, 0x1C(r1)
	  sth       r7, 0x1E(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  bl        0xFF73C
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF8EC
 * Size:	000044
 */
void Game::Kurage::Obj::createDownEffect()
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
	  bl        -0x1ABDC8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF930
 * Size:	000008
 */
void Game::Kurage::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x2234(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802AF938
 * Size:	0000A0
 */
void Game::Kurage::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	802AF9D8
 * Size:	0000A0
 */
void Game::Kurage::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	802AFA78
 * Size:	00009C
 */
void efx::TNewkurageDeadrun::~TNewkurageDeadrun()
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
	  subi      r3, r3, 0x1DF4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x685C
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
	  bl        -0x21FE48

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x28BA40

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
 * Address:	802AFB14
 * Size:	00009C
 */
void efx::TNewkurageKira::~TNewkurageKira()
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
	  subi      r3, r3, 0x1D8C
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
	  bl        -0x21FEE4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x28BADC

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
 * Address:	802AFBB0
 * Size:	00009C
 */
void efx::TNewkurageEye::~TNewkurageEye()
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
	  subi      r3, r3, 0x1D24
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
	  bl        -0x21FF80

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x28BB78

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
 * Address:	802AFC4C
 * Size:	000004
 */
void Game::Kurage::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802AFC50
 * Size:	000004
 */
void Game::Kurage::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802AFC54
 * Size:	000008
 */
u32 Game::Kurage::Obj::getEnemyTypeID() { return 0x39; }

/*
 * --INFO--
 * Address:	802AFC5C
 * Size:	000008
 */
void efx::TNewkurageEye::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xB0
	*/
}

/*
 * --INFO--
 * Address:	802AFC64
 * Size:	000008
 */
void efx::TNewkurageKira::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x154
	*/
}

/*
 * --INFO--
 * Address:	802AFC6C
 * Size:	000008
 */
void efx::TNewkurageDeadrun::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1F8
	*/
}
