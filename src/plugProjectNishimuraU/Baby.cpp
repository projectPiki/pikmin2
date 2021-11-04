#include "types.h"

/*
 * --INFO--
 * Address:	8028D470
 * Size:	000140
 */
void Game::Baby::Obj::Obj()
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
	  addi      r0, r31, 0x2D8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2D8(r31)
	  stw       r0, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x18C118
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2D8
	  subi      r5, r3, 0x5A44
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
	  bl        -0x154FA8
	  li        r3, 0x2C
	  bl        -0x269654
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  bl        -0x165B90
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x5BA8
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
	  bl        -0x2696A8
	  mr.       r4, r3
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x5BCC
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x108:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x8B8
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
 * Address:	8028D5B0
 * Size:	000004
 */
void Game::Baby::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8028D5B4
 * Size:	0000B8
 */
void Game::Baby::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18BB70
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  bl        0x914
	  mr        r3, r31
	  bl        0x4C8
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x84
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x4A4
	  b         .loc_0xA4

	.loc_0x84:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D66C
 * Size:	000048
 */
void Game::Baby::Obj::doUpdate()
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
	  addi      r3, r31, 0x2C0
	  bl        -0x155070
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D6B4
 * Size:	000004
 */
void Game::Baby::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8028D6B8
 * Size:	000020
 */
void Game::Baby::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x187858
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D6D8
 * Size:	00004C
 */
void Game::Baby::Obj::setFSM(Game::Baby::FSM*)
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
 * Address:	8028D724
 * Size:	000068
 */
void Game::Baby::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f2, -0x2A80(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f1, -0x2A7C(r2)
	  lfs       f3, 0x190(r3)
	  lfs       f0, -0x2A78(r2)
	  stfs      f3, 0x4(r4)
	  lfs       f3, 0x194(r3)
	  stfs      f3, 0x8(r4)
	  lfs       f3, 0x4(r4)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r4)
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  stfs      f1, 0x14(r4)
	  lwz       r0, 0x1E4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x54
	  lfs       f0, -0x2A74(r2)
	  stfs      f0, 0x18(r4)
	  b         .loc_0x5C

	.loc_0x54:
	  lfs       f0, -0x2A70(r2)
	  stfs      f0, 0x18(r4)

	.loc_0x5C:
	  lfs       f0, -0x2A70(r2)
	  stfs      f0, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D78C
 * Size:	000074
 */
void Game::Baby::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x5C
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x5C
	  bl        -0x1863C0
	  cmpwi     r3, 0x2
	  ble-      .loc_0x5C
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

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
 * Address:	8028D800
 * Size:	000074
 */
void Game::Baby::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x5C
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x5C
	  bl        -0x186434
	  cmpwi     r3, 0x2
	  ble-      .loc_0x5C
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

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
 * Address:	8028D874
 * Size:	000020
 */
void Game::Baby::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x18A98C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D894
 * Size:	00005C
 */
void Game::Baby::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18A9A0
	  mr        r3, r31
	  bl        -0x1864BC
	  cmpwi     r3, 0x2
	  bne-      .loc_0x48
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x3
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
 * Address:	8028D8F0
 * Size:	000034
 */
void Game::Baby::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x185F6C
	  mr        r3, r31
	  bl        0x658
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D924
 * Size:	000034
 */
void Game::Baby::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x185F70
	  mr        r3, r31
	  bl        0x5F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D958
 * Size:	000020
 */
void Game::Baby::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x600
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D978
 * Size:	000020
 */
void Game::Baby::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x5B0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028D998
 * Size:	00008C
 */
void Game::Baby::Obj::initMouthSlots()
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
	  addi      r3, r30, 0x2C0
	  bl        -0x155468
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0
	  subi      r6, r2, 0x2A6C
	  bl        -0x155344
	  lfs       f31, -0x2A64(r2)
	  li        r31, 0
	  b         .loc_0x60

	.loc_0x4C:
	  mr        r4, r31
	  addi      r3, r30, 0x2C0
	  bl        -0x155274
	  stfs      f31, 0x1C(r3)
	  addi      r31, r31, 0x1

	.loc_0x60:
	  lwz       r0, 0x2C0(r30)
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
 * Address:	8028DA24
 * Size:	00008C
 */
void Game::Baby::Obj::getSlotPikiNum()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x25C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x0(r3)
	  li        r28, 0
	  mr        r29, r3
	  b         .loc_0x60

	.loc_0x40:
	  mr        r3, r29
	  mr        r4, r28
	  bl        -0x1552F4
	  lwz       r0, 0x64(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  addi      r30, r30, 0x1

	.loc_0x5C:
	  addi      r28, r28, 0x1

	.loc_0x60:
	  cmpw      r28, r31
	  blt+      .loc_0x40
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	8028DAB0
 * Size:	000008
 */
void Game::Baby::Obj::getMouthSlots()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028DAB8
 * Size:	00001C
 */
void Game::Baby::Obj::resetRandTargetPosition()
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x2C8(r3)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x2CC(r3)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x2D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028DAD4
 * Size:	000074
 */
void Game::Baby::Obj::resetZukanAnimationFrame()
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
	  bl        -0x1868D0
	  fmr       f31, f1
	  bl        -0x1C4558
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f2, -0x2A58(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x2A60(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f31, f1
	  fdivs     f1, f1, f0
	  bl        -0x188900
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
 * Address:	8028DB48
 * Size:	00020C
 */
void Game::Baby::Obj::moveNoTarget()
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
	  lwz       r4, -0x6C18(r13)
	  mr        r31, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x1D8
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1D8
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x2D0(r31)
	  lfs       f2, 0x18C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0x2A50(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1B8
	  bl        -0x1C4610
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lis       r3, 0x8051
	  lfd       f2, -0x2A58(r2)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x2A4C(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f5, -0x2A60(r2)
	  fsubs     f2, f1, f2
	  lfs       f3, 0x18C(r31)
	  lfs       f1, 0x198(r31)
	  lfs       f4, -0x2A74(r2)
	  fmuls     f6, f0, f2
	  lfs       f2, 0x194(r31)
	  fsubs     f1, f3, f1
	  lfs       f0, 0x1A0(r31)
	  fdivs     f3, f6, f5
	  fadds     f31, f4, f3
	  fsubs     f2, f2, f0
	  bl        -0x258B00
	  fmr       f30, f1
	  bl        -0x1C4670
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f2, -0x2A58(r2)
	  stw       r0, 0x10(r1)
	  lfs       f3, -0x2A48(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, -0x2A60(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x2A44(r2)
	  lfs       f0, -0x2A7C(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f3, f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x13C
	  lfs       f0, -0x2A40(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x160

	.loc_0x13C:
	  lfs       f0, -0x2A3C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x160:
	  lfs       f1, 0x198(r31)
	  lfs       f0, -0x2A7C(r2)
	  fmadds    f1, f31, f2, f1
	  fcmpo     cr0, f3, f0
	  stfs      f1, 0x2C8(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2CC(r31)
	  bge-      .loc_0x184
	  fneg      f3, f3

	.loc_0x184:
	  lfs       f1, -0x2A3C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x1A0(r31)
	  fmuls     f1, f3, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2D0(r31)

	.loc_0x1B8:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r31, 0x2C8
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x17873C
	  b         .loc_0x1E8

	.loc_0x1D8:
	  lfs       f0, -0x2A7C(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x1E8:
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
 * Address:	8028DD54
 * Size:	0000F4
 */
void Game::Baby::Obj::createHoney()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r31, 0xC0(r3)
	  bl        -0x1C47D0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x2A58(r2)
	  stw       r0, 0x20(r1)
	  lfs       f2, -0x2A78(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x2A60(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x844(r31)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xDC
	  lis       r3, 0x804B
	  li        r0, 0
	  subi      r4, r3, 0x5D0C
	  lis       r3, 0x804B
	  stw       r4, 0x8(r1)
	  subi      r4, r3, 0x5D18
	  lwz       r3, -0x6BB0(r13)
	  stw       r4, 0x8(r1)
	  stb       r0, 0xC(r1)
	  stb       r0, 0xD(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0xDC
	  addi      r4, r1, 0x8
	  bl        -0x152E28
	  mr        r3, r31
	  addi      r4, r30, 0x18C
	  li        r5, 0
	  bl        -0x152C58
	  lfs       f1, -0x2A7C(r2)
	  mr        r3, r31
	  lfs       f0, -0x2A38(r2)
	  addi      r4, r1, 0x10
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
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
 * Address:	8028DE48
 * Size:	0000B4
 */
void Game::Baby::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x269FBC
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
	  addi      r8, r4, 0x6940
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x5A90
	  li        r10, 0
	  li        r9, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r7, r8, 0x14
	  addi      r6, r31, 0x18C
	  li        r5, 0x4
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

	.loc_0x9C:
	  stw       r3, 0x2D4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028DEFC
 * Size:	000004
 */
void Game::Baby::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	8028DF00
 * Size:	000034
 */
void Game::Baby::Obj::createBornEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D4(r3)
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
 * Address:	8028DF34
 * Size:	000030
 */
void Game::Baby::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D4(r3)
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
 * Address:	8028DF64
 * Size:	000030
 */
void Game::Baby::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D4(r3)
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
 * Address:	8028DF94
 * Size:	00009C
 */
void efx::TBabyBorn::~TBabyBorn()
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
	  subi      r3, r3, 0x5A90
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
	  bl        -0x1FE364

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x269F5C

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
 * Address:	8028E030
 * Size:	000004
 */
void Game::Baby::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8028E034
 * Size:	000004
 */
void Game::Baby::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8028E038
 * Size:	000008
 */
u32 Game::Baby::Obj::getEnemyTypeID() { return 0x1F; }

/*
 * --INFO--
 * Address:	8028E040
 * Size:	000008
 */
void efx::TBabyBorn::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xB0
	*/
}
