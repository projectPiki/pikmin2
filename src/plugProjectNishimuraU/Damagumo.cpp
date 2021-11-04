#include "types.h"

/*
 * --INFO--
 * Address:	802A57A4
 * Size:	000024
 */
void Game::Damagumo::DamagumoGroundCallBack::invokeOnGround(int,
                                                            Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  bl        0x1F3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A57C8
 * Size:	000024
 */
void Game::Damagumo::DamagumoGroundCallBack::invokeOffGround(int,
                                                             Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  bl        0x2108
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A57EC
 * Size:	00016C
 */
void Game::Damagumo::Obj::Obj()
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
	  addi      r0, r31, 0x498
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x498(r31)
	  stw       r0, 0x49C(r31)
	  stw       r0, 0x4A0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A4494
	  lis       r4, 0x804D
	  addi      r0, r31, 0x498
	  subi      r6, r4, 0x2484
	  lis       r3, 0x8012
	  stw       r6, 0x0(r31)
	  addi      r5, r6, 0x1B0
	  addi      r9, r6, 0x2FC
	  subi      r4, r3, 0xCB8
	  stw       r5, 0x178(r31)
	  addi      r3, r31, 0x2F0
	  li        r5, 0
	  li        r6, 0xC
	  lwz       r8, 0x17C(r31)
	  li        r7, 0x10
	  stw       r9, 0x0(r8)
	  lwz       r8, 0x17C(r31)
	  sub       r0, r0, r8
	  stw       r0, 0xC(r8)
	  bl        -0x1E4044
	  li        r3, 0x2C
	  bl        -0x2819E4
	  mr.       r30, r3
	  beq-      .loc_0xE8
	  bl        -0x17DF20
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x2900
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

	.loc_0xE8:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x281A38
	  mr.       r4, r3
	  beq-      .loc_0x11C
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x2928
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x11C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x9E0
	  mr        r3, r31
	  bl        0xEDC
	  mr        r3, r31
	  bl        0x15FC
	  mr        r3, r31
	  bl        0xFAC
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
 * Address:	802A5958
 * Size:	000034
 */
void Game::Damagumo::Obj::constructor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A41E4
	  mr        r3, r31
	  bl        0x1438
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A598C
 * Size:	000004
 */
void Game::Damagumo::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802A5990
 * Size:	000134
 */
void Game::Damagumo::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A3F4C
	  mr        r3, r31
	  bl        -0x19E230
	  lwz       r3, 0x1E0(r31)
	  li        r4, -0x1
	  lfs       f1, -0x2490(r2)
	  li        r0, 0
	  rlwinm    r5,r3,0,20,18
	  mr        r3, r31
	  stw       r5, 0x1E0(r31)
	  lwz       r5, 0x1E0(r31)
	  rlwinm    r5,r5,0,25,23
	  stw       r5, 0x1E0(r31)
	  stfs      f1, 0x2C0(r31)
	  stfs      f1, 0x2C4(r31)
	  stw       r4, 0x2C8(r31)
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2CC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2D0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2D4(r31)
	  stfs      f1, 0x2D8(r31)
	  stb       r0, 0x2DC(r31)
	  stb       r0, 0x2DD(r31)
	  bl        0xA04
	  mr        r3, r31
	  bl        0xE3C
	  mr        r3, r31
	  bl        0x10B4
	  mr        r3, r31
	  bl        0x1B4C
	  mr        r3, r31
	  bl        0x1384
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x63D44
	  mr        r3, r31
	  bl        0xEF4
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x10C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x10C
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0x10C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5AC4
 * Size:	000050
 */
void Game::Damagumo::Obj::doUpdate()
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
	  bl        0x22CC
	  mr        r3, r31
	  bl        0xAE4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5B14
 * Size:	000034
 */
void Game::Damagumo::Obj::doUpdateCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A2C14
	  mr        r3, r31
	  bl        0x1180
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5B48
 * Size:	000098
 */
void Game::Damagumo::Obj::doAnimationCullingOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x188(r3)
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xAC4
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x1BB8C4
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  bl        -0x170114
	  mr        r3, r31
	  bl        0xD08
	  mr        r3, r31
	  bl        0xDD0
	  mr        r3, r31
	  bl        0xAD8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5BE0
 * Size:	000004
 */
void Game::Damagumo::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802A5BE4
 * Size:	000020
 */
void Game::Damagumo::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x19FD84
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5C04
 * Size:	00004C
 */
void Game::Damagumo::Obj::setFSM(Game::Damagumo::FSM*)
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
 * Address:	802A5C50
 * Size:	00003C
 */
void Game::Damagumo::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f2, -0x2490(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f1, -0x248C(r2)
	  lfs       f3, 0x190(r3)
	  lfs       f0, -0x2488(r2)
	  stfs      f3, 0x4(r4)
	  lfs       f3, 0x194(r3)
	  stfs      f3, 0x8(r4)
	  stfs      f2, 0xC(r4)
	  stfs      f1, 0x10(r4)
	  stfs      f2, 0x14(r4)
	  stfs      f0, 0x18(r4)
	  stfs      f0, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5C8C
 * Size:	000050
 */
void Game::Damagumo::Obj::needShadow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19E890
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x28
	  li        r3, 0x1
	  b         .loc_0x3C

	.loc_0x28:
	  mr        r3, r31
	  bl        -0x19E8C4
	  subfic    r0, r3, 0x2
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5CDC
 * Size:	00009C
 */
void Game::Damagumo::Obj::damageCallBack(Game::Creature*, float, CollPart*)
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
	  mr.       r31, r4
	  fmr       f31, f1
	  mr        r30, r3
	  beq-      .loc_0x78
	  cmplwi    r5, 0
	  beq-      .loc_0x78
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  mr        r3, r31
	  bl        -0x1067BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  fmr       f1, f31
	  lfs       f2, -0x248C(r2)
	  mr        r3, r30
	  bl        -0x19FD1C
	  li        r3, 0x1
	  b         .loc_0x7C

	.loc_0x78:
	  li        r3, 0

	.loc_0x7C:
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
 * Address:	802A5D78
 * Size:	0001AC
 */
void Game::Damagumo::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x178
	  lwz       r31, 0x0(r30)
	  cmplwi    r31, 0
	  beq-      .loc_0x178
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x104

	.loc_0xA4:
	  lwz       r4, 0x8(r30)
	  mr        r3, r29
	  bl        0x9BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  lwz       r5, 0xC0(r29)
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  li        r0, 0
	  lfs       f0, 0x604(r5)
	  subi      r4, r4, 0x5D00
	  subi      r5, r3, 0x4CE0
	  mr        r3, r31
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  stw       r29, 0x1C(r1)
	  stw       r5, 0x18(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x104:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  lwz       r4, 0x8(r30)
	  mr        r3, r29
	  bl        0x940
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  lwz       r5, 0x4(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D00
	  lfs       f0, -0x2484(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x4DE0
	  mr        r3, r31
	  stw       r29, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  stw       r5, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x178:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x240(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5F24
 * Size:	000034
 */
void Game::Damagumo::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A3044
	  mr        r3, r31
	  bl        0x1C68
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5F58
 * Size:	00005C
 */
void Game::Damagumo::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A3064
	  lfs       f1, -0x248C(r2)
	  mr        r3, r31
	  lfs       f2, -0x2480(r2)
	  li        r4, 0
	  lfs       f3, -0x2490(r2)
	  lfs       f4, -0x247C(r2)
	  bl        -0x192E6C
	  lbz       r0, 0x2DD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        0x1A6C

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
 * Address:	802A5FB4
 * Size:	000020
 */
void Game::Damagumo::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x21E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5FD4
 * Size:	000020
 */
void Game::Damagumo::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x2030
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5FF4
 * Size:	000060
 */
void Game::Damagumo::Obj::getThrowupItemPosition(Vector3<float>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r2, 0x2478
	  lwz       r3, 0x174(r3)
	  bl        0x198FD4
	  bl        0x18388C
	  lfs       f3, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f1, 0xC(r3)
	  lfs       f0, -0x2470(r2)
	  stfs      f1, 0x0(r31)
	  stfs      f2, 0x4(r31)
	  stfs      f3, 0x8(r31)
	  lfs       f1, 0x4(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6054
 * Size:	000014
 */
void Game::Damagumo::Obj::getThrowupItemVelocity(Vector3<float>*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x2490(r2)
	  stfs      f0, 0x8(r4)
	  stfs      f0, 0x4(r4)
	  stfs      f0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6068
 * Size:	000298
 */
void Game::Damagumo::Obj::getTargetPosition()
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
	  mr        r31, r3
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x1A0(r3)
	  lwz       r7, 0xC0(r3)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x18C(r3)
	  lfs       f4, 0x198(r3)
	  lfs       f0, 0x35C(r7)
	  fsubs     f3, f1, f4
	  fmuls     f1, f2, f2
	  fmuls     f0, f0, f0
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x254
	  lis       r5, 0x804B
	  lis       r4, 0x804D
	  subi      r6, r5, 0x43A0
	  stw       r31, 0xC(r1)
	  subi      r0, r4, 0x2490
	  addi      r5, r1, 0x8
	  stw       r6, 0x8(r1)
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x193588
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  mr        r4, r3
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x2CC(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x2D0(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x2D4(r31)
	  b         .loc_0x268

	.loc_0xC4:
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x2D4(r31)
	  lfs       f2, 0x18C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, -0x246C(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x268
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x1DCBC8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lis       r3, 0x8051
	  lwz       r4, 0xC0(r31)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x2450(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f5, -0x2468(r2)
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
	  bl        -0x2710B8
	  fmr       f30, f1
	  bl        -0x1DCC28
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, -0x2450(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, -0x2464(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f1, -0x2468(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x2460(r2)
	  lfs       f0, -0x2490(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f3, f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x1D4
	  lfs       f0, -0x245C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x1F8

	.loc_0x1D4:
	  lfs       f0, -0x2458(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x1F8:
	  lfs       f1, 0x198(r31)
	  lfs       f0, -0x2490(r2)
	  fmadds    f1, f31, f2, f1
	  fcmpo     cr0, f3, f0
	  stfs      f1, 0x2CC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2D0(r31)
	  bge-      .loc_0x21C
	  fneg      f3, f3

	.loc_0x21C:
	  lfs       f1, -0x2458(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x1A0(r31)
	  fmuls     f1, f3, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2D4(r31)
	  b         .loc_0x268

	.loc_0x254:
	  stfs      f4, 0x2CC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2D0(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2D4(r31)

	.loc_0x268:
	  mr        r3, r31
	  addi      r4, r31, 0x2CC
	  bl        0x2E8
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6300
 * Size:	00010C
 */
void Game::Damagumo::Obj::createIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x9C
	  bl        -0x282474
	  mr.       r0, r3
	  beq-      .loc_0x2C
	  bl        0x2794
	  mr        r0, r3

	.loc_0x2C:
	  stw       r0, 0x2E0(r31)
	  li        r3, 0x48
	  bl        -0x282490
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  li        r0, -0x1
	  lfs       f5, -0x2490(r2)
	  stw       r0, 0x0(r3)
	  lfs       f1, -0x2448(r2)
	  stfs      f5, 0x4(r3)
	  lfs       f0, -0x2444(r2)
	  stfs      f5, 0x8(r3)
	  lfs       f2, -0x2440(r2)
	  stfs      f1, 0xC(r3)
	  lfs       f1, -0x243C(r2)
	  stfs      f0, 0x10(r3)
	  lfs       f0, -0x2438(r2)
	  stfs      f2, 0x14(r3)
	  lfs       f2, -0x2480(r2)
	  stfs      f1, 0x18(r3)
	  lfs       f1, -0x2434(r2)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, -0x2430(r2)
	  stfs      f2, 0x20(r3)
	  lfs       f4, -0x2470(r2)
	  stfs      f1, 0x24(r3)
	  lfs       f3, -0x242C(r2)
	  stfs      f5, 0x28(r3)
	  lfs       f2, -0x2488(r2)
	  stfs      f0, 0x2C(r3)
	  lfs       f1, -0x2428(r2)
	  stfs      f5, 0x30(r3)
	  lfs       f0, -0x2424(r2)
	  stfs      f4, 0x34(r3)
	  stfs      f3, 0x38(r3)
	  stfs      f2, 0x3C(r3)
	  stfs      f1, 0x40(r3)
	  stfs      f0, 0x44(r3)

	.loc_0xC4:
	  stw       r3, 0x2E4(r31)
	  li        r3, 0x8
	  bl        -0x282528
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lis       r5, 0x804D
	  lis       r4, 0x804D
	  subi      r0, r5, 0x24A0
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x2158
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)

	.loc_0xF4:
	  stw       r3, 0x2E8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A640C
 * Size:	000124
 */
void Game::Damagumo::Obj::setupIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2E0(r3)
	  bl        0x2708
	  lis       r3, 0x8049
	  addi      r6, r1, 0x8
	  subi      r27, r3, 0x6700
	  li        r5, 0
	  lwz       r28, 0x0(r27)
	  lwz       r29, 0x4(r27)
	  lwz       r30, 0x8(r27)
	  lwz       r12, 0xC(r27)
	  lwz       r11, 0x10(r27)
	  lwz       r10, 0x14(r27)
	  lwz       r9, 0x18(r27)
	  lwz       r8, 0x1C(r27)
	  lwz       r7, 0x20(r27)
	  lwz       r4, 0x24(r27)
	  lwz       r3, 0x28(r27)
	  lwz       r0, 0x2C(r27)
	  stw       r28, 0x8(r1)
	  stw       r29, 0xC(r1)
	  stw       r30, 0x10(r1)
	  stw       r12, 0x14(r1)
	  stw       r11, 0x18(r1)
	  stw       r10, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r8, 0x24(r1)
	  stw       r7, 0x28(r1)
	  stw       r4, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x2E0(r31)
	  lwz       r4, 0x174(r31)
	  bl        0x27D0
	  lwz       r3, 0x2E0(r31)
	  addi      r6, r1, 0x14
	  lwz       r4, 0x174(r31)
	  li        r5, 0x1
	  bl        0x27BC
	  lwz       r3, 0x2E0(r31)
	  addi      r6, r1, 0x20
	  lwz       r4, 0x174(r31)
	  li        r5, 0x2
	  bl        0x27A8
	  lwz       r3, 0x2E0(r31)
	  addi      r6, r1, 0x2C
	  lwz       r4, 0x174(r31)
	  li        r5, 0x3
	  bl        0x2794
	  lis       r4, 0x8049
	  lwz       r3, 0x2E0(r31)
	  subi      r5, r4, 0x6778
	  lwz       r4, 0x174(r31)
	  bl        0x27EC
	  mr        r3, r31
	  bl        .loc_0x124
	  lwz       r3, 0x2E0(r31)
	  lwz       r4, 0x2E4(r31)
	  bl        0x2810
	  lwz       r0, 0x2E8(r31)
	  lwz       r3, 0x2E0(r31)
	  stw       r0, 0x94(r3)
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x124:
	*/
}

/*
 * --INFO--
 * Address:	802A6530
 * Size:	000090
 */
void Game::Damagumo::Obj::setIKParameter()
{
	/*
	.loc_0x0:
	  lfs       f0, -0x2420(r2)
	  lwz       r4, 0x2E4(r3)
	  stfs      f0, 0x28(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x334(r5)
	  stfs      f0, 0x38(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x2E4(r5)
	  stfs      f0, 0x2C(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x81C(r5)
	  stfs      f0, 0x14(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x844(r5)
	  stfs      f0, 0x18(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x86C(r5)
	  stfs      f0, 0x1C(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x8BC(r5)
	  stfs      f0, 0x20(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E4(r3)
	  lfs       f0, 0x894(r5)
	  stfs      f0, 0x24(r4)
	  lwz       r4, 0xC0(r3)
	  lwz       r3, 0x2E4(r3)
	  lfs       f0, 0x8E4(r4)
	  stfs      f0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A65C0
 * Size:	000020
 */
void Game::Damagumo::Obj::setIKSystemTargetPosition(Vector3<float>&)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2E0(r3)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A65E0
 * Size:	000060
 */
void Game::Damagumo::Obj::updateIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E0(r3)
	  bl        0x2AEC
	  lwz       r3, 0x2E0(r31)
	  lfs       f1, 0x3C(r3)
	  lfs       f2, 0x40(r3)
	  lfs       f0, 0x38(r3)
	  stfs      f0, 0x18C(r31)
	  stfs      f1, 0x190(r31)
	  stfs      f2, 0x194(r31)
	  lwz       r3, 0x2E0(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6640
 * Size:	000060
 */
void Game::Damagumo::Obj::doAnimationIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E0(r3)
	  bl        0x2A84
	  lwz       r7, 0x2E0(r31)
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x168
	  addi      r5, r31, 0x1A4
	  lfs       f1, 0x48(r7)
	  addi      r6, r1, 0x8
	  lfs       f2, 0x4C(r7)
	  lfs       f0, 0x44(r7)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  bl        0x181C50
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A66A0
 * Size:	000024
 */
void Game::Damagumo::Obj::finishAnimationIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x2A20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A66C4
 * Size:	000024
 */
void Game::Damagumo::Obj::startProgramedIK()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x26AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A66E8
 * Size:	000024
 */
void Game::Damagumo::Obj::startIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x2810
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A670C
 * Size:	000024
 */
void Game::Damagumo::Obj::finishIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x2810
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6730
 * Size:	000024
 */
void Game::Damagumo::Obj::forceFinishIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x27F8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6754
 * Size:	000024
 */
void Game::Damagumo::Obj::isFinishIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x28FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6778
 * Size:	000024
 */
void Game::Damagumo::Obj::startBlendMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x27C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A679C
 * Size:	000024
 */
void Game::Damagumo::Obj::finishBlendMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x27FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A67C0
 * Size:	000020
 */
void Game::Damagumo::Obj::getTraceCentrePosition()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2E0(r4)
	  lfs       f0, 0x44(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x48(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x4C(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A67E0
 * Size:	000024
 */
void Game::Damagumo::Obj::isCollisionCheck(CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  bl        0x2A04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6804
 * Size:	000048
 */
void Game::Damagumo::Obj::createShadowSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0xB0
	  bl        -0x282978
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x4568
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x2EC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A684C
 * Size:	000074
 */
void Game::Damagumo::Obj::setupShadowSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r3, 0x2EC(r3)
	  bl        0x473C
	  li        r29, 0
	  mr        r30, r27

	.loc_0x24:
	  li        r28, 0
	  mr        r31, r30

	.loc_0x2C:
	  lwz       r3, 0x2EC(r27)
	  mr        r4, r29
	  mr        r5, r28
	  addi      r6, r31, 0x2F0
	  bl        0x4864
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0xC
	  cmpwi     r28, 0x4
	  blt+      .loc_0x2C
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x30
	  cmpwi     r29, 0x4
	  blt+      .loc_0x24
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A68C0
 * Size:	000024
 */
void Game::Damagumo::Obj::doAnimationShadowSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2EC(r3)
	  bl        0x4834
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A68E4
 * Size:	00004C
 */
void Game::Damagumo::Obj::createMaterialAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x28
	  bl        -0x282950
	  lis       r4, 0x8016
	  li        r5, 0
	  addi      r4, r4, 0x38EC
	  li        r6, 0xC
	  li        r7, 0x2
	  bl        -0x1E4F24
	  stw       r3, 0x494(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6930
 * Size:	000060
 */
void Game::Damagumo::Obj::startMaterialAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x494(r3)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x44(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x494(r31)
	  lwzu      r12, 0xC(r3)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x8(r12)
	  lwz       r4, 0x48(r4)
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
 * Address:	802A6990
 * Size:	00013C
 */
void Game::Damagumo::Obj::updateMaterialAnimation()
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
	  stfd      f29, 0x10(r1)
	  psq_st    f29,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r4, 0x494(r31)
	  lwz       r3, 0x10(r4)
	  lfs       f30, 0x14(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  bl        0x18D6C8
	  fmr       f31, f1
	  b         .loc_0x5C

	.loc_0x58:
	  lfs       f31, -0x2490(r2)

	.loc_0x5C:
	  lfs       f0, -0x241C(r2)
	  lfs       f2, -0x248C(r2)
	  fsubs     f0, f31, f0
	  lwz       r3, 0x494(r31)
	  lfs       f1, -0x2490(r2)
	  fdivs     f29, f2, f0
	  bl        0x18DB48
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x94
	  lwz       r3, 0x494(r31)
	  lfs       f1, -0x2470(r2)
	  addi      r3, r3, 0xC
	  bl        0x18DB30
	  b         .loc_0xA4

	.loc_0x94:
	  lwz       r3, 0x494(r31)
	  lfs       f1, -0x2490(r2)
	  addi      r3, r3, 0xC
	  bl        0x18DB1C

	.loc_0xA4:
	  lfs       f1, 0x2D8(r31)
	  lfs       f0, -0x2490(r2)
	  fsubs     f1, f1, f29
	  stfs      f1, 0x2D8(r31)
	  lfs       f1, 0x2D8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x110
	  stfs      f0, 0x2D8(r31)
	  b         .loc_0x110

	.loc_0xC8:
	  lwz       r3, 0x494(r31)
	  lfs       f1, -0x2470(r2)
	  bl        0x18DAEC
	  lwz       r3, 0xC0(r31)
	  lwz       r4, 0x494(r31)
	  lfs       f1, 0x200(r31)
	  lfs       f0, 0x104(r3)
	  addi      r3, r4, 0xC
	  lfs       f2, -0x248C(r2)
	  fdivs     f0, f1, f0
	  lfs       f1, -0x241C(r2)
	  fsubs     f0, f2, f0
	  fmuls     f1, f1, f0
	  bl        0x18D950
	  lwz       r3, 0x494(r31)
	  lfs       f1, -0x2490(r2)
	  addi      r3, r3, 0xC
	  bl        0x18DAB0

	.loc_0x110:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  psq_l     f29,0x18(r1),0,0
	  lfd       f29, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6ACC
 * Size:	000090
 */
void Game::Damagumo::Obj::setupCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x34(r1)
	  subi      r6, r4, 0x66D0
	  stw       r31, 0x2C(r1)
	  addi      r31, r1, 0x8
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r5, 0x0(r6)
	  lwz       r4, 0x4(r6)
	  lwz       r3, 0x8(r6)
	  lwz       r0, 0xC(r6)
	  stw       r5, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)

	.loc_0x4C:
	  lwz       r3, 0x114(r29)
	  lwz       r4, 0x0(r31)
	  bl        -0x170CDC
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  bl        -0x16F790

	.loc_0x64:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x4C
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
 * Address:	802A6B5C
 * Size:	00008C
 */
void Game::Damagumo::Obj::createItemAndEnemy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x250
	  bl        -0x1392F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x4D
	  bl        -0x198EE8
	  mr.       r31, r3
	  beq-      .loc_0x74
	  addi      r3, r1, 0x8
	  bl        -0x177F78
	  lfs       f0, 0x1FC(r30)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x268(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0x19
	  bl        0xE2534

	.loc_0x74:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A6BE8
 * Size:	0000C8
 */
void Game::Damagumo::Obj::startBossFlickBGM()
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
	  subi      r3, r3, 0x66C0
	  li        r4, 0x454
	  subi      r5, r5, 0x66A8
	  crclr     6, 0x6
	  bl        -0x27C63C

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
 * Address:	802A6CB0
 * Size:	0000FC
 */
void Game::Damagumo::Obj::updateBossBGM()
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
	  subi      r3, r3, 0x66C0
	  li        r4, 0x454
	  subi      r5, r5, 0x66A8
	  crclr     6, 0x6
	  bl        -0x27C70C

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
 * Address:	802A6DAC
 * Size:	0000C4
 */
void Game::Damagumo::Obj::resetBossAppearBGM()
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
	  subi      r3, r3, 0x66C0
	  li        r4, 0x454
	  subi      r5, r5, 0x66A8
	  crclr     6, 0x6
	  bl        -0x27C800

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x1B8BA4
	  li        r0, 0x1
	  stb       r0, 0xFF(r30)
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
 * Address:	802A6E70
 * Size:	0000BC
 */
void Game::Damagumo::Obj::setBossAppearBGM()
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
	  subi      r3, r3, 0x66C0
	  li        r4, 0x454
	  subi      r5, r5, 0x66A8
	  crclr     6, 0x6
	  bl        -0x27C8C4

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x1B8AE0
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
 * Address:	802A6F2C
 * Size:	0005BC
 */
void Game::Damagumo::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r11, 0x804E
	  lis       r10, 0x804E
	  stw       r0, 0x54(r1)
	  lis       r9, 0x804D
	  lis       r8, 0x804E
	  lis       r7, 0x804D
	  stmw      r16, 0x10(r1)
	  mr        r31, r3
	  lis       r6, 0x804D
	  lis       r5, 0x804D
	  lis       r4, 0x804D
	  lis       r3, 0x804D
	  addi      r11, r11, 0x698C
	  addi      r10, r10, 0x6940
	  subi      r9, r9, 0x2508
	  addi      r8, r8, 0x6810
	  subi      r7, r7, 0x2554
	  subi      r6, r6, 0x25A0
	  subi      r5, r5, 0x25EC
	  subi      r4, r4, 0x2638
	  subi      r3, r3, 0x2684
	  mr        r29, r31
	  mr        r28, r31
	  mr        r27, r31
	  addi      r19, r11, 0x14
	  addi      r18, r10, 0x14
	  addi      r26, r9, 0x14
	  addi      r25, r8, 0x14
	  addi      r24, r7, 0x14
	  addi      r23, r6, 0x14
	  addi      r22, r5, 0x14
	  addi      r21, r4, 0x14
	  addi      r20, r3, 0x14
	  li        r17, 0

	.loc_0x90:
	  li        r3, 0x2C
	  bl        -0x28311C
	  mr.       r16, r3
	  beq-      .loc_0xBC
	  li        r4, 0
	  li        r5, 0x24
	  li        r6, 0x25
	  bl        0x109268
	  lis       r3, 0x804D
	  subi      r0, r3, 0x24BC
	  stw       r0, 0x0(r16)

	.loc_0xBC:
	  stw       r16, 0x3B0(r29)
	  li        r3, 0x14
	  bl        -0x28314C
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6940
	  li        r5, 0x23
	  subi      r0, r4, 0x2508
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r18, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r26, 0x4(r3)

	.loc_0x138:
	  stw       r3, 0x3C0(r29)
	  mr        r30, r28
	  li        r16, 0

	.loc_0x144:
	  li        r3, 0x18
	  bl        -0x2831D0
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6810
	  li        r5, 0x26
	  subi      r0, r4, 0x2554
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r25, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r24, 0x4(r3)

	.loc_0x1C0:
	  stw       r3, 0x3DC(r30)
	  li        r3, 0x18
	  bl        -0x283250
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6810
	  li        r5, 0x1D
	  subi      r0, r4, 0x25A0
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r25, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r23, 0x4(r3)

	.loc_0x240:
	  addi      r16, r16, 0x1
	  stw       r3, 0x40C(r30)
	  cmpwi     r16, 0x3
	  addi      r30, r30, 0x4
	  blt+      .loc_0x144
	  li        r16, 0
	  mr        r30, r27

	.loc_0x25C:
	  li        r3, 0x14
	  bl        -0x2832E8
	  cmplwi    r3, 0
	  beq-      .loc_0x2D4
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6940
	  li        r5, 0x1E
	  subi      r0, r4, 0x25EC
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r18, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r22, 0x4(r3)

	.loc_0x2D4:
	  stw       r3, 0x43C(r30)
	  li        r3, 0x18
	  bl        -0x283364
	  cmplwi    r3, 0
	  beq-      .loc_0x354
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6810
	  li        r5, 0x1F
	  subi      r0, r4, 0x2638
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r25, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r21, 0x4(r3)

	.loc_0x354:
	  addi      r16, r16, 0x1
	  stw       r3, 0x45C(r30)
	  cmpwi     r16, 0x2
	  addi      r30, r30, 0x4
	  blt+      .loc_0x25C
	  li        r3, 0x18
	  bl        -0x2833F4
	  cmplwi    r3, 0
	  beq-      .loc_0x3E4
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6810
	  li        r5, 0x20
	  subi      r0, r4, 0x2684
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r25, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r20, 0x4(r3)

	.loc_0x3E4:
	  addi      r17, r17, 0x1
	  stw       r3, 0x47C(r29)
	  cmpwi     r17, 0x4
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0xC
	  addi      r27, r27, 0x8
	  blt+      .loc_0x90
	  lis       r3, 0x804D
	  mr        r20, r31
	  subi      r3, r3, 0x26D0
	  li        r16, 0
	  addi      r21, r3, 0x14

	.loc_0x414:
	  li        r3, 0x14
	  bl        -0x2834A0
	  cmplwi    r3, 0
	  beq-      .loc_0x48C
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6940
	  li        r5, 0x27
	  subi      r0, r4, 0x26D0
	  stw       r19, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r18, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r21, 0x4(r3)

	.loc_0x48C:
	  addi      r16, r16, 0x1
	  stw       r3, 0x3D0(r20)
	  cmpwi     r16, 0x3
	  addi      r20, r20, 0x4
	  blt+      .loc_0x414
	  li        r3, 0x14
	  bl        -0x28352C
	  cmplwi    r3, 0
	  beq-      .loc_0x520
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  addi      r7, r5, 0x68A8
	  subi      r4, r4, 0x271C
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  li        r8, 0x2B2
	  addi      r6, r7, 0x14
	  stw       r19, 0x4(r3)
	  li        r5, 0x21
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

	.loc_0x520:
	  stw       r3, 0x48C(r31)
	  li        r3, 0x14
	  bl        -0x2835B0
	  cmplwi    r3, 0
	  beq-      .loc_0x5A4
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  addi      r7, r5, 0x68A8
	  subi      r4, r4, 0x2768
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  li        r8, 0x2B2
	  addi      r6, r7, 0x14
	  stw       r19, 0x4(r3)
	  li        r5, 0x22
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

	.loc_0x5A4:
	  stw       r3, 0x490(r31)
	  lmw       r16, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A74E8
 * Size:	000084
 */
void efx::TChasePosPos::~TChasePosPos()
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6810
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x2178A0

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x283498

	.loc_0x68:
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
 * Address:	802A756C
 * Size:	000184
 */
void Game::Damagumo::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  li        r27, 0
	  mr        r31, r26
	  mr        r30, r26
	  mr        r29, r26
	  mr        r28, r26

	.loc_0x28:
	  lwz       r3, 0x3B0(r30)
	  addi      r4, r31, 0x314
	  bl        0x108DA8
	  lwz       r3, 0x3C0(r30)
	  addi      r8, r31, 0x314
	  li        r6, 0x1
	  li        r0, 0x1
	  stw       r8, 0x10(r3)
	  mulli     r4, r6, 0xC
	  addi      r7, r31, 0x2F0
	  lwz       r9, 0x3DC(r29)
	  addi      r27, r27, 0x1
	  mulli     r5, r0, 0xC
	  li        r6, 0x2
	  addi      r10, r4, 0x2F0
	  stw       r7, 0x10(r9)
	  mr        r3, r7
	  add       r10, r31, r10
	  stw       r10, 0x14(r9)
	  mulli     r4, r6, 0xC
	  addi      r11, r5, 0x2F0
	  lwz       r9, 0x40C(r29)
	  li        r0, 0x2
	  mulli     r5, r0, 0xC
	  li        r6, 0x3
	  stw       r7, 0x10(r9)
	  addi      r7, r31, 0x2FC
	  add       r11, r31, r11
	  stw       r10, 0x14(r9)
	  addi      r10, r4, 0x2F0
	  addi      r0, r31, 0x308
	  lwz       r9, 0x3E0(r29)
	  add       r10, r31, r10
	  mulli     r4, r6, 0xC
	  cmpwi     r27, 0x4
	  stw       r7, 0x10(r9)
	  stw       r10, 0x14(r9)
	  lwz       r9, 0x410(r29)
	  stw       r7, 0x10(r9)
	  addi      r7, r31, 0x308
	  stw       r10, 0x14(r9)
	  addi      r10, r4, 0x2F0
	  add       r10, r31, r10
	  lwz       r9, 0x3E4(r29)
	  stw       r7, 0x10(r9)
	  stw       r10, 0x14(r9)
	  lwz       r9, 0x414(r29)
	  addi      r29, r29, 0xC
	  stw       r7, 0x10(r9)
	  stw       r10, 0x14(r9)
	  lwz       r4, 0x43C(r28)
	  stw       r11, 0x10(r4)
	  lwz       r4, 0x45C(r28)
	  stw       r3, 0x10(r4)
	  addi      r3, r31, 0x2FC
	  stw       r11, 0x14(r4)
	  addi      r11, r5, 0x2F0
	  add       r11, r31, r11
	  addi      r31, r31, 0x30
	  lwz       r4, 0x440(r28)
	  stw       r11, 0x10(r4)
	  lwz       r4, 0x460(r28)
	  addi      r28, r28, 0x8
	  stw       r3, 0x10(r4)
	  stw       r11, 0x14(r4)
	  lwz       r3, 0x47C(r30)
	  addi      r30, r30, 0x4
	  stw       r0, 0x10(r3)
	  stw       r8, 0x14(r3)
	  blt+      .loc_0x28
	  lwz       r3, 0x174(r26)
	  subi      r4, r2, 0x2418
	  bl        0x197930
	  bl        0x1821E8
	  lwz       r5, 0x48C(r26)
	  subi      r4, r2, 0x2410
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r26)
	  bl        0x197918
	  bl        0x1821D0
	  lwz       r4, 0x490(r26)
	  stw       r3, 0x10(r4)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A76F0
 * Size:	0001F0
 */
void Game::Damagumo::Obj::createOnGroundEffect(int, Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  mulli     r31, r30, 0x30
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  stw       r28, 0x60(r1)
	  add       r3, r29, r31
	  lfs       f2, 0x314(r3)
	  stfs      f2, 0x38(r1)
	  lfs       f1, 0x318(r3)
	  stfs      f1, 0x3C(r1)
	  lfs       f0, 0x31C(r3)
	  stfs      f0, 0x40(r1)
	  beq-      .loc_0xF4
	  mr        r3, r5
	  lwz       r12, 0x0(r5)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x0(r3)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5808
	  li        r5, 0
	  lis       r3, 0x804E
	  stw       r0, 0x44(r1)
	  addi      r0, r3, 0x6A50
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x40(r1)
	  lis       r4, 0x804B
	  lis       r3, 0x804D
	  li        r8, 0x28
	  subi      r9, r4, 0x5814
	  li        r7, 0x29
	  li        r6, 0x2A
	  stw       r0, 0x44(r1)
	  subi      r0, r3, 0x27B4
	  addi      r3, r1, 0x44
	  stfs      f2, 0x3C(r1)
	  addi      r4, r1, 0x28
	  stw       r9, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  sth       r8, 0x48(r1)
	  sth       r7, 0x4A(r1)
	  sth       r6, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r5, 0x58(r1)
	  stw       r0, 0x44(r1)
	  bl        0x1078F0
	  addi      r4, r31, 0x314
	  li        r3, 0x3849
	  add       r4, r29, r4
	  bl        0x1C68D8
	  b         .loc_0x158

	.loc_0xF4:
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A64
	  lis       r4, 0x804B
	  lis       r3, 0x804D
	  stw       r0, 0x8(r1)
	  subi      r4, r4, 0x5814
	  subi      r0, r3, 0x27C8
	  li        r7, 0x2B
	  li        r6, 0x2C
	  stw       r4, 0x18(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x18
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  sth       r7, 0xC(r1)
	  sth       r6, 0xE(r1)
	  stw       r5, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1077D0

	.loc_0x158:
	  lbz       r0, 0x2DD(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  mulli     r0, r30, 0xC
	  li        r28, 0
	  add       r30, r29, r0

	.loc_0x170:
	  lwz       r3, 0x3DC(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x3
	  blt+      .loc_0x170

	.loc_0x198:
	  addi      r4, r31, 0x314
	  li        r3, 0x5837
	  add       r4, r29, r4
	  bl        0x1C6820
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        -0x5566C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x5413C
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A78E0
 * Size:	000128
 */
void Game::Damagumo::Obj::createOffGroundEffect(int, Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x40
	  rlwinm    r0,r4,2,0,29
	  li        r4, 0
	  add       r3, r31, r0
	  lwz       r3, 0x3C0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x60

	.loc_0x40:
	  rlwinm    r0,r4,2,0,29
	  li        r4, 0
	  add       r3, r31, r0
	  lwz       r3, 0x3B0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x60:
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x200(r31)
	  lfs       f1, 0x104(r3)
	  lfs       f0, -0x2408(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xAC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5847
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x114

	.loc_0xAC:
	  lfs       f0, -0x2404(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5846
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x114

	.loc_0xE8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5845
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x114:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A7A08
 * Size:	0001A0
 */
void Game::Damagumo::Obj::startPinchJointEffect()
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
	  stmw      r26, 0x38(r1)
	  addi      r30, r1, 0x18
	  lfd       f31, -0x2450(r2)
	  lfs       f30, -0x2468(r2)
	  mr        r29, r3
	  lfs       f29, -0x2400(r2)
	  mr        r31, r30
	  li        r27, 0
	  lis       r28, 0x4330

	.loc_0x48:
	  bl        -0x1DE4B0
	  xoris     r0, r3, 0x8000
	  addi      r27, r27, 0x1
	  stw       r0, 0x2C(r1)
	  cmpwi     r27, 0x3
	  stw       r28, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f31
	  fdivs     f0, f0, f30
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r3, 0x34(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0x48
	  li        r5, 0
	  li        r4, 0x1
	  li        r3, 0x2
	  li        r0, 0x3
	  addi      r31, r1, 0x8
	  stw       r5, 0x8(r1)
	  lfd       f29, -0x2450(r2)
	  mr        r27, r31
	  stw       r4, 0xC(r1)
	  li        r26, 0
	  lfs       f30, -0x2468(r2)
	  lis       r28, 0x4330
	  stw       r3, 0x10(r1)
	  lfs       f31, -0x23FC(r2)
	  stw       r0, 0x14(r1)

	.loc_0xC8:
	  bl        -0x1DE530
	  xoris     r0, r3, 0x8000
	  addi      r26, r26, 0x1
	  stw       r0, 0x34(r1)
	  cmpwi     r26, 0x4
	  lwz       r4, 0x0(r27)
	  stw       r28, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f29
	  fdivs     f0, f0, f30
	  fmuls     f0, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r3,r0,2,0,29
	  lwzx      r0, r31, r3
	  stw       r0, 0x0(r27)
	  addi      r27, r27, 0x4
	  stwx      r4, r31, r3
	  blt+      .loc_0xC8
	  mr        r27, r29
	  li        r26, 0

	.loc_0x120:
	  lwz       r3, 0x0(r31)
	  li        r4, 0
	  lwz       r0, 0x0(r30)
	  mulli     r5, r3, 0x30
	  lwz       r3, 0x3D0(r27)
	  mulli     r0, r0, 0xC
	  add       r5, r5, r0
	  addi      r0, r5, 0x2F0
	  add       r0, r29, r0
	  stw       r0, 0x10(r3)
	  lwz       r3, 0x3D0(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r26, r26, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r26, 0x3
	  addi      r27, r27, 0x4
	  addi      r30, r30, 0x4
	  blt+      .loc_0x120
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A7BA8
 * Size:	000058
 */
void Game::Damagumo::Obj::finishPinchJointEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x1C:
	  lwz       r3, 0x3D0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x3
	  blt+      .loc_0x1C
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
 * Address:	802A7C00
 * Size:	0001C0
 */
void Game::Damagumo::Obj::startDeadEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x64(r1)
	  lis       r4, 0x804E
	  stmw      r18, 0x28(r1)
	  mr        r27, r3
	  lis       r3, 0x804D
	  subi      r21, r6, 0x5814
	  mr        r31, r27
	  mr        r30, r27
	  mr        r29, r27
	  mr        r28, r27
	  subi      r22, r5, 0x5808
	  addi      r23, r4, 0x6A78
	  subi      r26, r3, 0x27DC
	  li        r19, 0

	.loc_0x48:
	  addi      r20, r31, 0xC
	  li        r18, 0x1
	  li        r24, 0x1C
	  li        r25, 0

	.loc_0x58:
	  stw       r21, 0x14(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x14
	  lfs       f0, 0x2F0(r20)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x2F4(r20)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x2F8(r20)
	  stw       r22, 0x8(r1)
	  stw       r23, 0x8(r1)
	  stfs      f0, 0x20(r1)
	  sth       r24, 0xC(r1)
	  stw       r25, 0x10(r1)
	  stw       r26, 0x8(r1)
	  bl        0x1072F4
	  addi      r18, r18, 0x1
	  addi      r20, r20, 0xC
	  cmpwi     r18, 0x3
	  blt+      .loc_0x58
	  li        r18, 0
	  mr        r20, r30

	.loc_0xAC:
	  lwz       r3, 0x40C(r20)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1
	  addi      r20, r20, 0x4
	  cmpwi     r18, 0x3
	  blt+      .loc_0xAC
	  li        r18, 0
	  mr        r20, r29

	.loc_0xDC:
	  lwz       r3, 0x43C(r20)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x45C(r20)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1
	  addi      r20, r20, 0x4
	  cmpwi     r18, 0x2
	  blt+      .loc_0xDC
	  lwz       r3, 0x47C(r28)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1
	  addi      r30, r30, 0xC
	  cmpwi     r19, 0x4
	  addi      r29, r29, 0x8
	  addi      r28, r28, 0x4
	  addi      r31, r31, 0x30
	  blt+      .loc_0x48
	  lwz       r3, 0x48C(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x490(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r21, 0
	  mr        r20, r27

	.loc_0x188:
	  lwz       r3, 0x3D0(r20)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1
	  addi      r20, r20, 0x4
	  cmpwi     r21, 0x3
	  blt+      .loc_0x188
	  lmw       r18, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A7DC0
 * Size:	000250
 */
void Game::Damagumo::Obj::updatePinchLife()
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
	  stmw      r26, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x224
	  lwz       r3, 0xC0(r29)
	  lbz       r0, 0x2DD(r29)
	  lfs       f1, 0x200(r29)
	  lfs       f0, 0x104(r3)
	  cmplwi    r0, 0
	  fdivs     f1, f1, f0
	  beq-      .loc_0xA0
	  lfs       f0, -0x2404(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x224
	  li        r28, 0
	  mr        r27, r29
	  stb       r28, 0x2DD(r29)

	.loc_0x78:
	  lwz       r3, 0x3D0(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r28, 0x3
	  blt+      .loc_0x78
	  b         .loc_0x224

	.loc_0xA0:
	  lfs       f0, -0x2404(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x224
	  li        r0, 0x1
	  addi      r30, r1, 0x8
	  stb       r0, 0x2DD(r29)
	  mr        r31, r30
	  lfd       f31, -0x2450(r2)
	  li        r27, 0
	  lfs       f30, -0x2468(r2)
	  lis       r28, 0x4330
	  lfs       f29, -0x2400(r2)

	.loc_0xD0:
	  bl        -0x1DE8F0
	  xoris     r0, r3, 0x8000
	  addi      r27, r27, 0x1
	  stw       r0, 0x2C(r1)
	  cmpwi     r27, 0x3
	  stw       r28, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f31
	  fdivs     f0, f0, f30
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r3, 0x34(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0xD0
	  li        r27, 0
	  li        r4, 0x1
	  li        r3, 0x2
	  li        r0, 0x3
	  addi      r31, r1, 0x14
	  stw       r27, 0x14(r1)
	  lfd       f29, -0x2450(r2)
	  mr        r26, r31
	  stw       r4, 0x18(r1)
	  lis       r28, 0x4330
	  lfs       f30, -0x2468(r2)
	  stw       r3, 0x1C(r1)
	  lfs       f31, -0x23FC(r2)
	  stw       r0, 0x20(r1)

	.loc_0x14C:
	  bl        -0x1DE96C
	  xoris     r0, r3, 0x8000
	  addi      r27, r27, 0x1
	  stw       r0, 0x34(r1)
	  cmpwi     r27, 0x4
	  lwz       r4, 0x0(r26)
	  stw       r28, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f29
	  fdivs     f0, f0, f30
	  fmuls     f0, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r3,r0,2,0,29
	  lwzx      r0, r31, r3
	  stw       r0, 0x0(r26)
	  addi      r26, r26, 0x4
	  stwx      r4, r31, r3
	  blt+      .loc_0x14C
	  mr        r26, r29
	  li        r28, 0

	.loc_0x1A4:
	  lwz       r3, 0x0(r31)
	  li        r4, 0
	  lwz       r0, 0x0(r30)
	  mulli     r5, r3, 0x30
	  lwz       r3, 0x3D0(r26)
	  mulli     r0, r0, 0xC
	  add       r5, r5, r0
	  addi      r0, r5, 0x2F0
	  add       r0, r29, r0
	  stw       r0, 0x10(r3)
	  lwz       r3, 0x3D0(r26)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x3
	  addi      r26, r26, 0x4
	  addi      r30, r30, 0x4
	  blt+      .loc_0x1A4
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5844
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x224:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A8010
 * Size:	000198
 */
void Game::Damagumo::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  li        r30, 0
	  mr        r31, r27

	.loc_0x1C:
	  lwz       r3, 0x3B0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x1C
	  li        r30, 0
	  mr        r31, r27

	.loc_0x5C:
	  lwz       r3, 0x3D0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x3
	  blt+      .loc_0x5C
	  li        r29, 0
	  mr        r30, r27

	.loc_0x88:
	  li        r28, 0
	  mr        r31, r30

	.loc_0x90:
	  lwz       r3, 0x3DC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x3
	  blt+      .loc_0x90
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0xC
	  cmpwi     r29, 0x4
	  blt+      .loc_0x88
	  li        r28, 0
	  mr        r31, r27

	.loc_0xE0:
	  li        r29, 0
	  mr        r30, r31

	.loc_0xE8:
	  lwz       r3, 0x43C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x45C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x2
	  blt+      .loc_0xE8
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0xE0
	  li        r28, 0
	  mr        r30, r27

	.loc_0x138:
	  lwz       r3, 0x47C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x138
	  lwz       r3, 0x48C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x490(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	802A81A8
 * Size:	000198
 */
void Game::Damagumo::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  li        r30, 0
	  mr        r31, r27

	.loc_0x1C:
	  lwz       r3, 0x3B0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x1C
	  li        r30, 0
	  mr        r31, r27

	.loc_0x5C:
	  lwz       r3, 0x3D0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x3
	  blt+      .loc_0x5C
	  li        r29, 0
	  mr        r30, r27

	.loc_0x88:
	  li        r28, 0
	  mr        r31, r30

	.loc_0x90:
	  lwz       r3, 0x3DC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x3
	  blt+      .loc_0x90
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0xC
	  cmpwi     r29, 0x4
	  blt+      .loc_0x88
	  li        r28, 0
	  mr        r31, r27

	.loc_0xE0:
	  li        r29, 0
	  mr        r30, r31

	.loc_0xE8:
	  lwz       r3, 0x43C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x45C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x2
	  blt+      .loc_0xE8
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0xE0
	  li        r28, 0
	  mr        r30, r27

	.loc_0x138:
	  lwz       r3, 0x47C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x138
	  lwz       r3, 0x48C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x490(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	802A8340
 * Size:	000038
 */
void Game::Damagumo::Obj::addShadowScale()
{
	/*
	.loc_0x0:
	  lfs       f3, 0x2D8(r3)
	  lfs       f2, -0x248C(r2)
	  fcmpo     cr0, f3, f2
	  bgelr-
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0x2400(r2)
	  lfs       f0, 0x54(r4)
	  fmadds    f0, f1, f0, f3
	  stfs      f0, 0x2D8(r3)
	  lfs       f0, 0x2D8(r3)
	  fcmpo     cr0, f0, f2
	  blelr-
	  stfs      f2, 0x2D8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A8378
 * Size:	00009C
 */
void efx::TDamaDeadHahenC2::~TDamaDeadHahenC2()
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
	  subi      r3, r3, 0x2768
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
	  bl        -0x218748

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x284340

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
 * Address:	802A8414
 * Size:	00009C
 */
void efx::TDamaDeadHahenC1::~TDamaDeadHahenC1()
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
	  subi      r3, r3, 0x271C
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
	  bl        -0x2187E4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2843DC

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
 * Address:	802A84B0
 * Size:	00009C
 */
void efx::TDamaSmoke::~TDamaSmoke()
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
	  subi      r3, r3, 0x26D0
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
	  bl        -0x218880

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x284478

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
 * Address:	802A854C
 * Size:	00009C
 */
void efx::TDamaDeadHahenB::~TDamaDeadHahenB()
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
	  subi      r3, r3, 0x2684
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6810
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
	  bl        -0x21891C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x284514

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
 * Address:	802A85E8
 * Size:	00009C
 */
void efx::TDamaDeadHahenA::~TDamaDeadHahenA()
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
	  subi      r3, r3, 0x2638
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6810
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
	  bl        -0x2189B8

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2845B0

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
 * Address:	802A8684
 * Size:	00009C
 */
void efx::TDamaDeadElecB::~TDamaDeadElecB()
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
	  subi      r3, r3, 0x25EC
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
	  bl        -0x218A54

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x28464C

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
 * Address:	802A8720
 * Size:	00009C
 */
void efx::TDamaDeadElecA::~TDamaDeadElecA()
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
	  subi      r3, r3, 0x25A0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6810
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
	  bl        -0x218AF0

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2846E8

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
 * Address:	802A87BC
 * Size:	00009C
 */
void efx::TDamaHahen::~TDamaHahen()
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
	  subi      r3, r3, 0x2554
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6810
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
	  bl        -0x218B8C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x284784

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
 * Address:	802A8858
 * Size:	00009C
 */
void efx::TDamaFootw::~TDamaFootw()
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
	  subi      r3, r3, 0x2508
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
	  bl        -0x218C28

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x284820

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
 * Address:	802A88F4
 * Size:	000088
 */
void Game::ConditionNotStickClient::satisfy(Game::Piki*)
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
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  lwz       r3, 0xF4(r31)
	  lwz       r0, 0x4(r30)
	  cmplw     r3, r0
	  beq-      .loc_0x6C
	  li        r3, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
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
 * Address:	802A897C
 * Size:	000004
 */
void Game::Damagumo::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802A8980
 * Size:	000004
 */
void Game::Damagumo::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802A8984
 * Size:	000008
 */
void Game::Damagumo::Obj::getDamageCoeStoneState()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x23F8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A898C
 * Size:	000004
 */
void Game::Damagumo::Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	802A8990
 * Size:	000008
 */
u32 Game::Damagumo::Obj::getEnemyTypeID() { return 0x38; }

/*
 * --INFO--
 * Address:	802A8998
 * Size:	000028
 */
void __sinit_Damagumo_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x6910(r13)
	  stfsu     f0, -0x27E8(r3)
	  stfs      f0, -0x690C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A89C0
 * Size:	000014
 */
void Game::EnemyBase::@1176 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x498
	  b         -0x1A20B4
	*/
}

/*
 * --INFO--
 * Address:	802A89D4
 * Size:	000014
 */
void Game::EnemyBase::@1176 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x498
	  b         -0x1A233C
	*/
}

/*
 * --INFO--
 * Address:	802A89E8
 * Size:	000014
 */
void Game::EnemyBase::@1176 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x498
	  b         -0x1A2330
	*/
}

/*
 * --INFO--
 * Address:	802A89FC
 * Size:	000014
 */
void Game::EnemyBase::@1176 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x498
	  b         -0x1A1F94
	*/
}

/*
 * --INFO--
 * Address:	802A8A10
 * Size:	000014
 */
void Game::EnemyBase::@1176 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x498
	  b         -0x1A1FD4
	*/
}

/*
 * --INFO--
 * Address:	802A8A24
 * Size:	000014
 */
void Game::EnemyBase::@1176 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x498
	  b         -0x1A2394
	*/
}

/*
 * --INFO--
 * Address:	802A8A38
 * Size:	000008
 */
void efx::TDamaFootw::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1E4
	*/
}

/*
 * --INFO--
 * Address:	802A8A40
 * Size:	000008
 */
void efx::TDamaHahen::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x288
	*/
}

/*
 * --INFO--
 * Address:	802A8A48
 * Size:	000008
 */
void efx::TDamaDeadElecA::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x32C
	*/
}

/*
 * --INFO--
 * Address:	802A8A50
 * Size:	000008
 */
void efx::TDamaDeadElecB::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x3D0
	*/
}

/*
 * --INFO--
 * Address:	802A8A58
 * Size:	000008
 */
void efx::TDamaDeadHahenA::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x474
	*/
}

/*
 * --INFO--
 * Address:	802A8A60
 * Size:	000008
 */
void efx::TDamaDeadHahenB::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x518
	*/
}

/*
 * --INFO--
 * Address:	802A8A68
 * Size:	000008
 */
void efx::TDamaSmoke::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x5BC
	*/
}

/*
 * --INFO--
 * Address:	802A8A70
 * Size:	000008
 */
void efx::TDamaDeadHahenC1::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x660
	*/
}

/*
 * --INFO--
 * Address:	802A8A78
 * Size:	000008
 */
void efx::TDamaDeadHahenC2::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x704
	*/
}
