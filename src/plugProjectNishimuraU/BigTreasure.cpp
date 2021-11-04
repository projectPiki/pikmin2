#include "types.h"

/*
 * --INFO--
 * Address:	802DBBB4
 * Size:	000024
 */
void Game::BigTreasure::BigTreasureGroundCallBack::invokeOnGround(
    int, Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  bl        0x4734
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DBBD8
 * Size:	000024
 */
void Game::BigTreasure::BigTreasureGroundCallBack::invokeOffGround(
    int, Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  bl        0x48D0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DBBFC
 * Size:	00013C
 */
void Game::BigTreasure::Obj::Obj()
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
	  addi      r0, r31, 0x584
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x584(r31)
	  stw       r0, 0x588(r31)
	  stw       r0, 0x58C(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1DA8A4
	  lis       r4, 0x804D
	  addi      r0, r31, 0x584
	  addi      r6, r4, 0x3580
	  lis       r3, 0x8012
	  stw       r6, 0x0(r31)
	  addi      r5, r6, 0x1B0
	  addi      r9, r6, 0x2FC
	  subi      r4, r3, 0xCB8
	  stw       r5, 0x178(r31)
	  addi      r3, r31, 0x304
	  li        r5, 0
	  li        r6, 0xC
	  lwz       r8, 0x17C(r31)
	  li        r7, 0x10
	  stw       r9, 0x0(r8)
	  lwz       r8, 0x17C(r31)
	  sub       r0, r0, r8
	  stw       r0, 0xC(r8)
	  bl        -0x21A454
	  li        r3, 0x60
	  bl        -0x2B7DF4
	  mr.       r30, r3
	  beq-      .loc_0xB8
	  bl        -0x1ADBBC
	  lis       r3, 0x804D
	  addi      r0, r3, 0x38AC
	  stw       r0, 0x0(r30)

	.loc_0xB8:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x2B7E18
	  mr.       r4, r3
	  beq-      .loc_0xEC
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x3170
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0xEC:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xD3C
	  mr        r3, r31
	  bl        0x1248
	  mr        r3, r31
	  bl        0x1F1C
	  mr        r3, r31
	  bl        0x3D20
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
 * Address:	802DBD38
 * Size:	000004
 */
void Game::BigTreasure::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802DBD3C
 * Size:	000160
 */
void Game::BigTreasure::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1DA2F8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x1D45E8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1730(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,20,18
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x2C0(r31)
	  bl        0x788
	  li        r0, -0x1
	  lfs       f0, -0x172C(r2)
	  stw       r0, 0x2C8(r31)
	  mr        r3, r31
	  lfs       f1, 0x198(r31)
	  stfs      f1, 0x2CC(r31)
	  lfs       f1, 0x19C(r31)
	  stfs      f1, 0x2D0(r31)
	  lfs       f1, 0x1A0(r31)
	  stfs      f1, 0x2D4(r31)
	  stfs      f0, 0x2D8(r31)
	  bl        0xD80
	  mr        r3, r31
	  bl        0x11C8
	  mr        r3, r31
	  bl        0x1E9C
	  mr        r3, r31
	  bl        0x125C
	  mr        r3, r31
	  bl        0x12E4
	  mr        r3, r31
	  bl        0x250C
	  mr        r3, r31
	  bl        0x42E0
	  mr        r3, r31
	  bl        0x3A18
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x9A11C
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
	  beq-      .loc_0x130
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x130
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x144

	.loc_0x130:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
	  mr        r3, r31
	  bl        0x4EF8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DBE9C
 * Size:	00004C
 */
void Game::BigTreasure::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0x4EF8
	  mr        r3, r30
	  bl        0x1D00
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1D9FE4
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
 * Address:	802DBEE8
 * Size:	00004C
 */
void Game::BigTreasure::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2B94
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xDF4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DBF34
 * Size:	00003C
 */
void Game::BigTreasure::Obj::doUpdateCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1D50
	  mr        r3, r31
	  bl        -0x1D903C
	  mr        r3, r31
	  bl        0x37C4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DBF70
 * Size:	000094
 */
void Game::BigTreasure::Obj::doAnimationUpdateAnimator()
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
	  lfs       f0, -0x1728(r2)
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
	  bl        -0x1ADD94
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
 * Address:	802DC004
 * Size:	000098
 */
void Game::BigTreasure::Obj::doAnimationCullingOff()
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
	  bl        0xD38
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x1F1D80
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  bl        -0x1A65D0
	  mr        r3, r31
	  bl        0xFA4
	  mr        r3, r31
	  bl        0x13AC
	  mr        r3, r31
	  bl        0xD4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC09C
 * Size:	000194
 */
void Game::BigTreasure::Obj::changeMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x74(r1)
	  stmw      r25, 0x54(r1)
	  mr        r30, r3
	  subi      r29, r4, 0x3580
	  addi      r4, r29, 0x1C
	  lwz       r3, 0x174(r3)
	  lwz       r31, 0x8(r3)
	  lwz       r28, 0x4(r31)
	  lwz       r3, 0x64(r28)
	  bl        -0x2AD348
	  lwz       r4, 0x60(r28)
	  rlwinm    r3,r3,2,14,29
	  lha       r0, 0x414(r30)
	  addi      r5, r1, 0x18
	  lwzx      r3, r4, r3
	  li        r4, 0
	  sth       r0, 0x18(r1)
	  lha       r0, 0x416(r30)
	  sth       r0, 0x1A(r1)
	  lha       r0, 0x418(r30)
	  sth       r0, 0x1C(r1)
	  lha       r0, 0x41A(r30)
	  sth       r0, 0x1E(r1)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x450(r30)
	  addi      r4, r29, 0x28
	  lfs       f1, 0x454(r30)
	  lfs       f0, 0x458(r30)
	  fctiwz    f2, f2
	  fctiwz    f1, f1
	  lwz       r3, 0x64(r28)
	  fctiwz    f0, f0
	  stfd      f2, 0x20(r1)
	  stfd      f1, 0x28(r1)
	  lwz       r27, 0x24(r1)
	  stfd      f0, 0x30(r1)
	  lwz       r26, 0x2C(r1)
	  lwz       r25, 0x34(r1)
	  bl        -0x2AD3CC
	  lwz       r4, 0x60(r28)
	  rlwinm    r3,r3,2,14,29
	  li        r0, 0xFF
	  addi      r5, r1, 0x10
	  lwzx      r3, r4, r3
	  li        r4, 0
	  sth       r27, 0x10(r1)
	  sth       r26, 0x12(r1)
	  sth       r25, 0x14(r1)
	  sth       r0, 0x16(r1)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x474(r30)
	  addi      r4, r29, 0x34
	  lfs       f1, 0x478(r30)
	  lfs       f0, 0x47C(r30)
	  fctiwz    f2, f2
	  fctiwz    f1, f1
	  lwz       r3, 0x64(r28)
	  fctiwz    f0, f0
	  stfd      f2, 0x38(r1)
	  stfd      f1, 0x40(r1)
	  lwz       r25, 0x3C(r1)
	  stfd      f0, 0x48(r1)
	  lwz       r26, 0x44(r1)
	  lwz       r27, 0x4C(r1)
	  bl        -0x2AD444
	  lwz       r4, 0x60(r28)
	  rlwinm    r3,r3,2,14,29
	  li        r0, 0xFF
	  addi      r5, r1, 0x8
	  lwzx      r3, r4, r3
	  li        r4, 0
	  sth       r25, 0x8(r1)
	  sth       r26, 0xA(r1)
	  sth       r27, 0xC(r1)
	  sth       r0, 0xE(r1)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lmw       r25, 0x54(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC230
 * Size:	000004
 */
void Game::BigTreasure::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802DC234
 * Size:	000020
 */
void Game::BigTreasure::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1D63D4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC254
 * Size:	00004C
 */
void Game::BigTreasure::Obj::setFSM(Game::BigTreasure::FSM*)
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
 * Address:	802DC2A0
 * Size:	00003C
 */
void Game::BigTreasure::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f2, -0x1730(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f1, -0x172C(r2)
	  lfs       f3, 0x190(r3)
	  lfs       f0, -0x1724(r2)
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
 * Address:	802DC2DC
 * Size:	000100
 */
void Game::BigTreasure::Obj::damageCallBack(Game::Creature*, float, CollPart*)
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
	  mr.       r31, r5
	  fmr       f31, f1
	  mr        r30, r3
	  beq-      .loc_0xDC
	  cmplwi    r4, 0
	  beq-      .loc_0xDC
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  mr        r3, r30
	  bl        -0x1D4F3C
	  cmpwi     r3, 0x2
	  bne-      .loc_0x68
	  lfs       f0, -0x1720(r2)
	  fmuls     f31, f31, f0

	.loc_0x68:
	  li        r0, 0x4
	  mr        r3, r30
	  li        r4, 0
	  mtctr     r0

	.loc_0x78:
	  lwz       r0, 0x3F8(r3)
	  cmplw     r0, r31
	  bne-      .loc_0xA8
	  fmr       f1, f31
	  mr        r3, r30
	  bl        0x1534
	  lfs       f1, 0x20C(r30)
	  li        r3, 0x1
	  lfs       f0, -0x172C(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20C(r30)
	  b         .loc_0xE0

	.loc_0xA8:
	  addi      r3, r3, 0x4
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x78
	  mr        r3, r30
	  bl        0x1444
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xDC
	  fmr       f1, f31
	  lfs       f2, -0x172C(r2)
	  mr        r3, r30
	  bl        -0x1D6380
	  li        r3, 0x1
	  b         .loc_0xE0

	.loc_0xDC:
	  li        r3, 0

	.loc_0xE0:
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
 * Address:	802DC3DC
 * Size:	000038
 */
void Game::BigTreasure::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
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
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC414
 * Size:	000020
 */
void Game::BigTreasure::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1D952C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC434
 * Size:	000048
 */
void Game::BigTreasure::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1D9540
	  lfs       f1, -0x172C(r2)
	  mr        r3, r31
	  lfs       f2, -0x171C(r2)
	  li        r4, 0
	  lfs       f3, -0x1730(r2)
	  lfs       f4, -0x1718(r2)
	  bl        -0x1C9348
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC47C
 * Size:	000020
 */
void Game::BigTreasure::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x4B1C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC49C
 * Size:	000020
 */
void Game::BigTreasure::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x4938
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC4BC
 * Size:	000050
 */
void Game::BigTreasure::Obj::getThrowupItemPosition(Vector3<float>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r2, 0x1714
	  lwz       r3, 0x174(r3)
	  bl        0x162B0C
	  bl        0x14D3C4
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC50C
 * Size:	000014
 */
void Game::BigTreasure::Obj::getThrowupItemVelocity(Vector3<float>*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x1730(r2)
	  stfs      f0, 0x8(r4)
	  stfs      f0, 0x4(r4)
	  stfs      f0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC520
 * Size:	00005C
 */
void Game::BigTreasure::Obj::resetAttackLimitTimer()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x212F94
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x1700(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x170C(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x1708(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC57C
 * Size:	000228
 */
void Game::BigTreasure::Obj::isAttackLimitTime()
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
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  lwz       r4, -0x6514(r13)
	  mr        r29, r3
	  lfs       f0, -0x16F8(r2)
	  li        r31, 0
	  lfs       f1, 0x54(r4)
	  fmr       f31, f1
	  fmuls     f30, f0, f1
	  bl        0x1288
	  lfs       f0, 0x18C(r29)
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfd       f2, -0x1700(r2)
	  addi      r3, r1, 0x24
	  stw       r0, 0x90(r1)
	  addi      r4, r1, 0x14
	  lfs       f3, -0x170C(r2)
	  stfs      f0, 0x14(r1)
	  lfd       f1, 0x90(r1)
	  lfs       f0, 0x190(r29)
	  fsubs     f4, f1, f2
	  lfs       f2, -0x16F4(r2)
	  stfs      f0, 0x18(r1)
	  lfs       f0, -0x16F0(r2)
	  lfs       f1, 0x194(r29)
	  fmadds    f29, f3, f4, f2
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  bl        -0xAE27C
	  li        r0, 0x1
	  addi      r3, r1, 0x44
	  stb       r0, 0x40(r1)
	  addi      r4, r1, 0x24
	  bl        -0xAE250
	  addi      r3, r1, 0x44
	  bl        -0xAE1DC
	  b         .loc_0x1C4

	.loc_0xC4:
	  addi      r3, r1, 0x44
	  bl        -0xAE100
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x120
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC

	.loc_0x120:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x19C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x18C(r29)
	  lfs       f1, 0x8(r1)
	  lfs       f0, -0x1730(r2)
	  fsubs     f1, f2, f1
	  lfs       f2, 0x10(r1)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x160
	  b         .loc_0x164

	.loc_0x160:
	  fneg      f1, f1

	.loc_0x164:
	  lfs       f0, -0x16EC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x19C
	  lfs       f1, 0x194(r29)
	  lfs       f0, -0x1730(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x188
	  b         .loc_0x18C

	.loc_0x188:
	  fneg      f1, f1

	.loc_0x18C:
	  lfs       f0, -0x16EC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x19C
	  li        r31, 0x1

	.loc_0x19C:
	  mr        r3, r30
	  bl        -0x13D1A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  lwz       r0, 0xF4(r30)
	  cmplw     r0, r29
	  beq-      .loc_0x1BC
	  fmr       f31, f30

	.loc_0x1BC:
	  addi      r3, r1, 0x44
	  bl        -0xAE23C

	.loc_0x1C4:
	  addi      r3, r1, 0x44
	  bl        -0xAE210
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC4
	  lfs       f0, 0x2C4(r29)
	  fcmpo     cr0, f0, f29
	  ble-      .loc_0x1E8
	  mr        r3, r31
	  b         .loc_0x1F4

	.loc_0x1E8:
	  fadds     f0, f0, f31
	  li        r3, 0
	  stfs      f0, 0x2C4(r29)

	.loc_0x1F4:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DC7A4
 * Size:	000298
 */
void Game::BigTreasure::Obj::getTargetPosition()
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
	  bl        -0x1C9CC4
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
	  lfs       f0, -0x16E8(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x268
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x213304
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lis       r3, 0x8051
	  lwz       r4, 0xC0(r31)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x1700(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f5, -0x1708(r2)
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
	  bl        -0x2A77F4
	  fmr       f30, f1
	  bl        -0x213364
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, -0x1700(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, -0x16E4(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f1, -0x1708(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x16E0(r2)
	  lfs       f0, -0x1730(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f3, f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x1D4
	  lfs       f0, -0x16DC(r2)
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
	  lfs       f0, -0x16D8(r2)
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
	  lfs       f0, -0x1730(r2)
	  fmadds    f1, f31, f2, f1
	  fcmpo     cr0, f3, f0
	  stfs      f1, 0x2CC(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2D0(r31)
	  bge-      .loc_0x21C
	  fneg      f3, f3

	.loc_0x21C:
	  lfs       f1, -0x16D8(r2)
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
	  bl        0x2DC
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
 * Address:	802DCA3C
 * Size:	00010C
 */
void Game::BigTreasure::Obj::createIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x9C
	  bl        -0x2B8BB0
	  mr.       r0, r3
	  beq-      .loc_0x2C
	  bl        -0x33FA8
	  mr        r0, r3

	.loc_0x2C:
	  stw       r0, 0x2E4(r31)
	  li        r3, 0x48
	  bl        -0x2B8BCC
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  li        r0, -0x1
	  lfs       f5, -0x1730(r2)
	  stw       r0, 0x0(r3)
	  lfs       f1, -0x16D4(r2)
	  stfs      f5, 0x4(r3)
	  lfs       f0, -0x16D0(r2)
	  stfs      f5, 0x8(r3)
	  lfs       f2, -0x16F8(r2)
	  stfs      f1, 0xC(r3)
	  lfs       f1, -0x16CC(r2)
	  stfs      f0, 0x10(r3)
	  lfs       f0, -0x16C8(r2)
	  stfs      f2, 0x14(r3)
	  lfs       f2, -0x171C(r2)
	  stfs      f1, 0x18(r3)
	  lfs       f1, -0x16C4(r2)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, -0x16C0(r2)
	  stfs      f2, 0x20(r3)
	  lfs       f4, -0x16BC(r2)
	  stfs      f1, 0x24(r3)
	  lfs       f3, -0x1728(r2)
	  stfs      f5, 0x28(r3)
	  lfs       f2, -0x1724(r2)
	  stfs      f0, 0x2C(r3)
	  lfs       f1, -0x16B8(r2)
	  stfs      f5, 0x30(r3)
	  lfs       f0, -0x16B4(r2)
	  stfs      f4, 0x34(r3)
	  stfs      f3, 0x38(r3)
	  stfs      f2, 0x3C(r3)
	  stfs      f1, 0x40(r3)
	  stfs      f0, 0x44(r3)

	.loc_0xC4:
	  stw       r3, 0x2E8(r31)
	  li        r3, 0x8
	  bl        -0x2B8C64
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lis       r5, 0x804D
	  lis       r4, 0x804D
	  subi      r0, r5, 0x24A0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x38D4
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)

	.loc_0xF4:
	  stw       r3, 0x2EC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCB48
 * Size:	000124
 */
void Game::BigTreasure::Obj::setupIKSystem()
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
	  lwz       r3, 0x2E4(r3)
	  bl        -0x34034
	  lis       r3, 0x8049
	  addi      r6, r1, 0x8
	  subi      r27, r3, 0x34B0
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
	  lwz       r3, 0x2E4(r31)
	  lwz       r4, 0x174(r31)
	  bl        -0x33F6C
	  lwz       r3, 0x2E4(r31)
	  addi      r6, r1, 0x14
	  lwz       r4, 0x174(r31)
	  li        r5, 0x1
	  bl        -0x33F80
	  lwz       r3, 0x2E4(r31)
	  addi      r6, r1, 0x20
	  lwz       r4, 0x174(r31)
	  li        r5, 0x2
	  bl        -0x33F94
	  lwz       r3, 0x2E4(r31)
	  addi      r6, r1, 0x2C
	  lwz       r4, 0x174(r31)
	  li        r5, 0x3
	  bl        -0x33FA8
	  lis       r4, 0x8049
	  lwz       r3, 0x2E4(r31)
	  subi      r5, r4, 0x3528
	  lwz       r4, 0x174(r31)
	  bl        -0x33F50
	  mr        r3, r31
	  bl        .loc_0x124
	  lwz       r3, 0x2E4(r31)
	  lwz       r4, 0x2E8(r31)
	  bl        -0x33F2C
	  lwz       r0, 0x2EC(r31)
	  lwz       r3, 0x2E4(r31)
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
 * Address:	802DCC6C
 * Size:	000084
 */
void Game::BigTreasure::Obj::setIKParameter()
{
	/*
	.loc_0x0:
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x334(r5)
	  stfs      f0, 0x38(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x2E4(r5)
	  stfs      f0, 0x2C(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x81C(r5)
	  stfs      f0, 0x14(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x844(r5)
	  stfs      f0, 0x18(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x86C(r5)
	  stfs      f0, 0x1C(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x8BC(r5)
	  stfs      f0, 0x20(r4)
	  lwz       r5, 0xC0(r3)
	  lwz       r4, 0x2E8(r3)
	  lfs       f0, 0x894(r5)
	  stfs      f0, 0x24(r4)
	  lwz       r4, 0xC0(r3)
	  lwz       r3, 0x2E8(r3)
	  lfs       f0, 0x8E4(r4)
	  stfs      f0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCCF0
 * Size:	000020
 */
void Game::BigTreasure::Obj::setIKSystemTargetPosition(Vector3<float>&)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2E4(r3)
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
 * Address:	802DCD10
 * Size:	000060
 */
void Game::BigTreasure::Obj::updateIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33C44
	  lwz       r3, 0x2E4(r31)
	  lfs       f1, 0x3C(r3)
	  lfs       f2, 0x40(r3)
	  lfs       f0, 0x38(r3)
	  stfs      f0, 0x18C(r31)
	  stfs      f1, 0x190(r31)
	  stfs      f2, 0x194(r31)
	  lwz       r3, 0x2E4(r31)
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
 * Address:	802DCD70
 * Size:	000060
 */
void Game::BigTreasure::Obj::doAnimationIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33CAC
	  lwz       r7, 0x2E4(r31)
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
	  bl        0x14B520
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCDD0
 * Size:	000024
 */
void Game::BigTreasure::Obj::finishAnimationIKSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33D10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCDF4
 * Size:	000024
 */
void Game::BigTreasure::Obj::startProgramedIK()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x34084
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCE18
 * Size:	000024
 */
void Game::BigTreasure::Obj::startIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33F20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCE3C
 * Size:	000024
 */
void Game::BigTreasure::Obj::finishIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33F20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCE60
 * Size:	000024
 */
void Game::BigTreasure::Obj::forceFinishIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33F38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCE84
 * Size:	000024
 */
void Game::BigTreasure::Obj::isFinishIKMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33E34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCEA8
 * Size:	000024
 */
void Game::BigTreasure::Obj::startBlendMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33F6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCECC
 * Size:	000024
 */
void Game::BigTreasure::Obj::finishBlendMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33F34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCEF0
 * Size:	000024
 */
void Game::BigTreasure::Obj::checkJointScaleOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E4(r3)
	  bl        -0x33EFC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCF14
 * Size:	000020
 */
void Game::BigTreasure::Obj::getTraceCentrePosition()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2E4(r4)
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
 * Address:	802DCF34
 * Size:	00001C
 */
void Game::BigTreasure::Obj::getJointPositionPtr(int, int)
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x30
	  mr        r6, r3
	  mulli     r0, r5, 0xC
	  add       r3, r4, r0
	  addi      r3, r3, 0x304
	  add       r3, r6, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCF50
 * Size:	000048
 */
void Game::BigTreasure::Obj::createShadowSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x170
	  bl        -0x2B90C4
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        -0x29B0
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x2F0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DCF98
 * Size:	000080
 */
void Game::BigTreasure::Obj::setupShadowSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r3, 0x2F0(r3)
	  bl        -0x25D0
	  lwz       r3, 0x2F0(r27)
	  addi      r4, r27, 0x2F8
	  bl        -0x2328
	  li        r29, 0
	  mr        r30, r27

	.loc_0x30:
	  li        r28, 0
	  mr        r31, r30

	.loc_0x38:
	  lwz       r3, 0x2F0(r27)
	  mr        r4, r29
	  mr        r5, r28
	  addi      r6, r31, 0x304
	  bl        -0x2344
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0xC
	  cmpwi     r28, 0x4
	  blt+      .loc_0x38
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x30
	  cmpwi     r29, 0x4
	  blt+      .loc_0x30
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD018
 * Size:	000024
 */
void Game::BigTreasure::Obj::doAnimationShadowSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F0(r3)
	  bl        -0x2374
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD03C
 * Size:	000090
 */
void Game::BigTreasure::Obj::setupCollision()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x34(r1)
	  subi      r6, r4, 0x3480
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
	  bl        -0x1A724C
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  bl        -0x1A5D00

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
 * Address:	802DD0CC
 * Size:	00035C
 */
void Game::BigTreasure::Obj::setupTreasure()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stmw      r22, 0x88(r1)
	  lis       r4, 0x8049
	  mr        r24, r3
	  subi      r30, r4, 0x3580
	  lis       r4, 0x804B
	  lwz       r22, 0x110(r30)
	  lis       r3, 0x804B
	  lwz       r12, 0x114(r30)
	  mr        r29, r24
	  lwz       r11, 0x118(r30)
	  addi      r28, r1, 0x28
	  lwz       r10, 0x11C(r30)
	  addi      r27, r1, 0x18
	  lwz       r9, 0x120(r30)
	  addi      r26, r1, 0x8
	  lwz       r8, 0x124(r30)
	  subi      r31, r4, 0x5D0C
	  lwz       r7, 0x128(r30)
	  subi      r23, r3, 0x5D48
	  lwz       r6, 0x12C(r30)
	  li        r25, 0
	  lwz       r5, 0x16C(r30)
	  lwz       r4, 0x170(r30)
	  lwz       r3, 0x174(r30)
	  lwz       r0, 0x178(r30)
	  stw       r22, 0x28(r1)
	  lfs       f31, -0x1730(r2)
	  stw       r12, 0x2C(r1)
	  stw       r11, 0x30(r1)
	  stw       r10, 0x34(r1)
	  stw       r9, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r7, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)

	.loc_0xAC:
	  addi      r0, r25, 0x2DD
	  li        r3, 0
	  stbx      r3, r24, r0
	  lwz       r4, 0x0(r28)
	  stw       r3, 0x3C4(r29)
	  stfs      f31, 0x3D8(r29)
	  stfs      f31, 0x3E8(r29)
	  lwz       r3, 0x114(r24)
	  bl        -0x1A7354
	  stw       r3, 0x3F8(r29)
	  li        r8, 0
	  li        r0, -0x1
	  li        r7, 0xFF
	  stw       r31, 0x60(r1)
	  li        r6, 0x1
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x60
	  stw       r23, 0x60(r1)
	  lwz       r5, 0x0(r27)
	  stb       r8, 0x7C(r1)
	  sth       r8, 0x74(r1)
	  stb       r7, 0x76(r1)
	  stw       r8, 0x78(r1)
	  stb       r8, 0x77(r1)
	  stb       r6, 0x64(r1)
	  stb       r8, 0x7D(r1)
	  stw       r0, 0x84(r1)
	  stw       r0, 0x80(r1)
	  stb       r8, 0x7E(r1)
	  stb       r8, 0x7F(r1)
	  bl        -0x16F80C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x60
	  bl        -0x16FD44
	  stw       r3, 0x3C4(r29)
	  lwz       r0, 0x3C4(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  lwz       r3, 0x174(r24)
	  lwz       r4, 0x0(r26)
	  bl        0x161DC4
	  bl        0x14C67C
	  mr        r0, r3
	  lwz       r3, 0x3C4(r29)
	  mr        r4, r0
	  bl        -0x13D78C
	  lfs       f0, -0x1694(r2)
	  stfs      f0, 0x3D8(r29)

	.loc_0x174:
	  addi      r25, r25, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r25, 0x4
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0xAC
	  li        r8, 0
	  lis       r3, 0x804B
	  stw       r8, 0x3D4(r24)
	  li        r0, -0x1
	  subi      r4, r3, 0x5D0C
	  lis       r3, 0x804B
	  stw       r4, 0x38(r1)
	  subi      r3, r3, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r3, 0x38(r1)
	  addi      r4, r1, 0x38
	  lwz       r3, -0x6CE0(r13)
	  subi      r5, r2, 0x1690
	  stb       r8, 0x54(r1)
	  sth       r8, 0x4C(r1)
	  stb       r7, 0x4E(r1)
	  stw       r8, 0x50(r1)
	  stb       r8, 0x4F(r1)
	  stb       r6, 0x3C(r1)
	  stb       r8, 0x55(r1)
	  stw       r0, 0x5C(r1)
	  stw       r0, 0x58(r1)
	  stb       r8, 0x56(r1)
	  stb       r8, 0x57(r1)
	  bl        -0x16F8DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x23C
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x38
	  bl        -0x16FE14
	  stw       r3, 0x3D4(r24)
	  lwz       r0, 0x3D4(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x23C
	  lwz       r3, 0x174(r24)
	  addi      r4, r30, 0x17C
	  bl        0x161CF4
	  bl        0x14C5AC
	  mr        r0, r3
	  lwz       r3, 0x3D4(r24)
	  mr        r4, r0
	  bl        -0x13D85C

	.loc_0x23C:
	  mr        r25, r24
	  li        r23, 0x1
	  li        r22, 0

	.loc_0x248:
	  lwz       r0, 0x3C4(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x25C
	  li        r23, 0
	  b         .loc_0x2A4

	.loc_0x25C:
	  lwz       r4, 0x3F8(r25)
	  cmplwi    r4, 0
	  beq-      .loc_0x2A4
	  mr        r3, r24
	  bl        0x604
	  lwz       r5, 0x3F8(r25)
	  lis       r3, 0x5F74
	  addi      r4, r3, 0x5F5F
	  addi      r3, r5, 0x3C
	  bl        0x1360B8
	  lfs       f0, -0x1730(r2)
	  li        r4, 0x1
	  lwz       r3, 0x3F8(r25)
	  li        r0, 0
	  stfs      f0, 0x1C(r3)
	  lwz       r3, 0x3F8(r25)
	  sth       r4, 0x48(r3)
	  stw       r0, 0x3F8(r25)

	.loc_0x2A4:
	  addi      r22, r22, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r22, 0x4
	  blt+      .loc_0x248
	  lis       r4, 0x7461
	  lwz       r3, 0x114(r24)
	  addi      r4, r4, 0x6D31
	  bl        -0x1A7548
	  mr        r26, r3
	  lis       r4, 0x7461
	  lwz       r3, 0x114(r24)
	  addi      r4, r4, 0x6D32
	  bl        -0x1A755C
	  cmplwi    r26, 0
	  mr        r25, r3
	  beq-      .loc_0x338
	  cmplwi    r25, 0
	  beq-      .loc_0x338
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x318
	  lis       r4, 0x7374
	  addi      r3, r26, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x136038
	  lis       r4, 0x7374
	  addi      r3, r25, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x136028
	  b         .loc_0x338

	.loc_0x318:
	  lis       r4, 0x5F74
	  addi      r3, r26, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x136014
	  lis       r4, 0x5F74
	  addi      r3, r25, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x136004

	.loc_0x338:
	  li        r0, -0x1
	  stw       r0, 0x408(r24)
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  lmw       r22, 0x88(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD428
 * Size:	000168
 */
void Game::BigTreasure::Obj::updateTreasure()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r29, r3
	  bl        .loc_0x168
	  li        r30, 0
	  mr        r31, r29

	.loc_0x28:
	  lwz       r0, 0x3C4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  addi      r3, r1, 0x38
	  bl        -0x1F31C0
	  addi      r3, r30, 0x2DD
	  lbzx      r0, r29, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  lfs       f2, 0x3E8(r31)
	  lfs       f1, -0x1688(r2)
	  lfs       f0, -0x1684(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x3E8(r31)
	  lfs       f1, 0x3E8(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x7C
	  lfs       f0, -0x1730(r2)
	  li        r0, 0
	  stfs      f0, 0x3E8(r31)
	  stbx      r0, r29, r3

	.loc_0x7C:
	  lfs       f2, 0x3E8(r31)
	  addi      r3, r1, 0x8
	  lfs       f0, -0x1730(r2)
	  li        r4, 0x59
	  lfs       f1, -0x1680(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xC4
	  lfs       f0, -0x16DC(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f0, f0
	  b         .loc_0xE8

	.loc_0xC4:
	  lfs       f0, -0x16D8(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0

	.loc_0xE8:
	  fmuls     f1, f1, f0
	  bl        -0x1F3000
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x8
	  mr        r5, r3
	  bl        -0x1F3224

	.loc_0x100:
	  cmpwi     r30, 0x2
	  bne-      .loc_0x110
	  lfs       f0, -0x167C(r2)
	  stfs      f0, 0x54(r1)

	.loc_0x110:
	  lwz       r3, 0x3C4(r31)
	  addi      r4, r1, 0x38
	  bl        -0x13DA44

	.loc_0x11C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x28
	  lwz       r0, 0x3D4(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x14C
	  addi      r3, r1, 0x38
	  bl        -0x1F32C4
	  lwz       r3, 0x3D4(r29)
	  addi      r4, r1, 0x38
	  bl        -0x13DA74

	.loc_0x14C:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr

	.loc_0x168:
	*/
}

/*
 * --INFO--
 * Address:	802DD590
 * Size:	0001C0
 */
void Game::BigTreasure::Obj::dropTreasure()
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
	  stw       r28, 0x10(r1)
	  mr        r31, r3
	  lfs       f31, -0x1730(r2)
	  mr        r29, r31
	  li        r28, 0
	  li        r30, 0

	.loc_0x38:
	  lwz       r0, 0x3C4(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  lfs       f0, 0x3D8(r29)
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  mr        r3, r31
	  mr        r4, r30
	  li        r28, 0x1
	  bl        0x2FDC
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x2F98
	  mr        r3, r31
	  mr        r4, r30
	  bl        .loc_0x1C0

	.loc_0x7C:
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x38
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x198
	  mr        r3, r31
	  bl        0x1F44
	  mr        r28, r31
	  li        r29, 0x1
	  li        r30, 0

	.loc_0xA8:
	  lwz       r0, 0x3C4(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  li        r29, 0
	  b         .loc_0x104

	.loc_0xBC:
	  lwz       r4, 0x3F8(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x104
	  mr        r3, r31
	  bl        0x2E0
	  lwz       r5, 0x3F8(r28)
	  lis       r3, 0x5F74
	  addi      r4, r3, 0x5F5F
	  addi      r3, r5, 0x3C
	  bl        0x135D94
	  lfs       f0, -0x1730(r2)
	  li        r4, 0x1
	  lwz       r3, 0x3F8(r28)
	  li        r0, 0
	  stfs      f0, 0x1C(r3)
	  lwz       r3, 0x3F8(r28)
	  sth       r4, 0x48(r3)
	  stw       r0, 0x3F8(r28)

	.loc_0x104:
	  addi      r30, r30, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0xA8
	  lis       r4, 0x7461
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x6D31
	  bl        -0x1A786C
	  mr        r30, r3
	  lis       r4, 0x7461
	  lwz       r3, 0x114(r31)
	  addi      r4, r4, 0x6D32
	  bl        -0x1A7880
	  cmplwi    r30, 0
	  mr        r31, r3
	  beq-      .loc_0x198
	  cmplwi    r31, 0
	  beq-      .loc_0x198
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x178
	  lis       r4, 0x7374
	  addi      r3, r30, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x135D14
	  lis       r4, 0x7374
	  addi      r3, r31, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x135D04
	  b         .loc_0x198

	.loc_0x178:
	  lis       r4, 0x5F74
	  addi      r3, r30, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x135CF0
	  lis       r4, 0x5F74
	  addi      r3, r31, 0x3C
	  addi      r4, r4, 0x5F5F
	  bl        0x135CE0

	.loc_0x198:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1C0:
	*/
}

/*
 * --INFO--
 * Address:	802DD750
 * Size:	000088
 */
void Game::BigTreasure::Obj::dropTreasure(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  rlwinm    r30,r4,2,0,29
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  add       r31, r29, r30
	  lwz       r3, 0x3C4(r31)
	  bl        -0x13DBDC
	  lfs       f1, -0x1730(r2)
	  addi      r4, r1, 0x8
	  lfs       f0, -0x1678(r2)
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  lwz       r3, 0x3C4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lfs       f0, -0x1730(r2)
	  stw       r0, 0x3C4(r31)
	  li        r3, 0x1
	  stfs      f0, 0x3D8(r31)
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
 * Address:	802DD7D8
 * Size:	00005C
 */
void Game::BigTreasure::Obj::isCapturedTreasure()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3C4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, 0x1
	  blr

	.loc_0x14:
	  lwz       r0, 0x3C8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r3, 0x1
	  blr

	.loc_0x28:
	  addi      r3, r3, 0x8
	  lwz       r0, 0x3C4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  li        r3, 0x1
	  blr

	.loc_0x40:
	  lwz       r0, 0x3C8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD834
 * Size:	00001C
 */
void Game::BigTreasure::Obj::isCapturedTreasure(int)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x3C4(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD850
 * Size:	00004C
 */
void Game::BigTreasure::Obj::getCapturedTreasureNum()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3C4(r3)
	  li        r4, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r4, 0x1

	.loc_0x14:
	  lwz       r0, 0x3C8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  addi      r4, r4, 0x1

	.loc_0x24:
	  lwz       r0, 0x3CC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  addi      r4, r4, 0x1

	.loc_0x34:
	  lwz       r0, 0x3D0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  addi      r4, r4, 0x1

	.loc_0x44:
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD89C
 * Size:	0000A0
 */
void Game::BigTreasure::Obj::addTreasureDamage(int, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  add       r6, r3, r0
	  lwz       r0, 0x3C4(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r0, 0x1E0(r3)
	  lfs       f3, 0x3D8(r6)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x38
	  lfs       f0, -0x1724(r2)
	  fmuls     f1, f1, f0

	.loc_0x38:
	  add       r5, r3, r4
	  li        r0, 0x1
	  stb       r0, 0x2DD(r5)
	  lfs       f0, -0x1730(r2)
	  lfs       f2, 0x3D8(r6)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x3D8(r6)
	  lfs       f1, 0x3D8(r6)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x64
	  stfs      f0, 0x3D8(r6)

	.loc_0x64:
	  lfs       f1, -0x1674(r2)
	  fcmpo     cr0, f3, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x84
	  lfs       f0, 0x3D8(r6)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x84
	  bl        0x2C3C

	.loc_0x84:
	  li        r3, 0x1
	  b         .loc_0x90

	.loc_0x8C:
	  li        r3, 0

	.loc_0x90:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DD93C
 * Size:	000284
 */
void Game::BigTreasure::Obj::flickStickCollPartPikmin(CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  mr        r4, r30
	  addi      r3, r1, 0x2C
	  stw       r29, 0x54(r1)
	  bl        -0x13DD08
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x2C
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x23C

	.loc_0x6C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xD8

	.loc_0x84:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x23C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xD8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x84
	  b         .loc_0x23C

	.loc_0xF8:
	  lwz       r3, 0x10(r1)
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
	  beq-      .loc_0x180
	  lwz       r0, 0xF8(r29)
	  cmplw     r0, r31
	  bne-      .loc_0x180
	  lis       r3, 0x804B
	  lfs       f2, -0x171C(r2)
	  subi      r0, r3, 0x5D00
	  lfs       f1, -0x1730(r2)
	  lfs       f0, -0x1718(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x4E04
	  mr        r3, r29
	  addi      r4, r1, 0x18
	  stw       r30, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1AC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x23C

	.loc_0x1AC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x220

	.loc_0x1CC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x23C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x220:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1CC

	.loc_0x23C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF8
	  addi      r3, r1, 0x2C
	  li        r4, -0x1
	  bl        -0x13DE3C
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDBC0
 * Size:	00006C
 */
void Game::BigTreasure::Obj::releaseItemLoozy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x3D4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  bl        -0x13E044
	  lfs       f1, -0x1730(r2)
	  addi      r4, r1, 0x8
	  lfs       f0, -0x1670(r2)
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  lwz       r3, 0x3D4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x3D4(r31)

	.loc_0x58:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDC2C
 * Size:	000048
 */
void Game::BigTreasure::Obj::createAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x120
	  bl        -0x2B9DA0
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x17014
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x2F4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDC74
 * Size:	000024
 */
void Game::BigTreasure::Obj::setupAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
	  bl        0x17798
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDC98
 * Size:	000024
 */
void Game::BigTreasure::Obj::updateAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
	  bl        0x1793C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDCBC
 * Size:	000074
 */
void Game::BigTreasure::Obj::startAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x408(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x50
	  bge-      .loc_0x2C
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  bge-      .loc_0x44
	  b         .loc_0x64

	.loc_0x2C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x64
	  b         .loc_0x5C

	.loc_0x38:
	  lwz       r3, 0x2F4(r3)
	  bl        0x194A0
	  b         .loc_0x64

	.loc_0x44:
	  lwz       r3, 0x2F4(r3)
	  bl        0x179C8
	  b         .loc_0x64

	.loc_0x50:
	  lwz       r3, 0x2F4(r3)
	  bl        0x17E24
	  b         .loc_0x64

	.loc_0x5C:
	  lwz       r3, 0x2F4(r3)
	  bl        0x18664

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDD30
 * Size:	000024
 */
void Game::BigTreasure::Obj::finishAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
	  bl        0x19B74
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDD54
 * Size:	0001A8
 */
void Game::BigTreasure::Obj::setTreasureAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  addi      r31, r1, 0x8
	  lwz       r0, 0x3C4(r3)
	  mr        r4, r31
	  lfs       f31, -0x1730(r2)
	  addi      r3, r1, 0x18
	  cmplwi    r0, 0
	  lfs       f1, -0x166C(r2)
	  li        r30, 0
	  li        r5, 0
	  beq-      .loc_0x70
	  lfs       f0, 0x3D8(r29)
	  addi      r4, r31, 0x4
	  stw       r5, 0x18(r1)
	  li        r30, 0x1
	  fsubs     f0, f1, f0
	  addi      r3, r3, 0x4
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x0(r31)
	  fadds     f31, f31, f0

	.loc_0x70:
	  lwz       r0, 0x3C8(r29)
	  li        r5, 0x1
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lfs       f0, 0x3DC(r29)
	  addi      r30, r30, 0x1
	  stw       r5, 0x0(r3)
	  addi      r3, r3, 0x4
	  fsubs     f0, f1, f0
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x0(r4)
	  addi      r4, r4, 0x4
	  fadds     f31, f31, f0

	.loc_0xA4:
	  lwz       r0, 0x3CC(r29)
	  li        r5, 0x2
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  lfs       f0, 0x3E0(r29)
	  addi      r30, r30, 0x1
	  stw       r5, 0x0(r3)
	  addi      r3, r3, 0x4
	  fsubs     f0, f1, f0
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x0(r4)
	  addi      r4, r4, 0x4
	  fadds     f31, f31, f0

	.loc_0xD8:
	  lwz       r0, 0x3D0(r29)
	  li        r5, 0x3
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  lfs       f0, 0x3E4(r29)
	  addi      r30, r30, 0x1
	  stw       r5, 0x0(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x0(r4)
	  fadds     f31, f31, f0

	.loc_0x104:
	  cmpwi     r30, 0
	  beq-      .loc_0x17C
	  bl        -0x2148C0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  li        r3, 0
	  lfd       f2, -0x1700(r2)
	  stw       r0, 0x28(r1)
	  lfs       f0, -0x1708(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f3, -0x1730(r2)
	  fsubs     f1, f1, f2
	  fmuls     f1, f31, f1
	  fdivs     f1, f1, f0
	  mtctr     r30
	  cmpwi     r30, 0
	  ble-      .loc_0x17C

	.loc_0x14C:
	  lfs       f0, 0x0(r31)
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x170
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r1, 0x18
	  lwzx      r0, r3, r0
	  stw       r0, 0x408(r29)
	  b         .loc_0x184

	.loc_0x170:
	  addi      r31, r31, 0x4
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x14C

	.loc_0x17C:
	  li        r0, -0x1
	  stw       r0, 0x408(r29)

	.loc_0x184:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDEFC
 * Size:	000048
 */
void Game::BigTreasure::Obj::getPreAttackAnimIndex()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x408(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x14
	  li        r3, 0x15
	  blr

	.loc_0x14:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x24
	  li        r3, 0x3
	  blr

	.loc_0x24:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x34
	  li        r3, 0x12
	  blr

	.loc_0x34:
	  cmpwi     r0, 0x3
	  li        r3, 0x18
	  bnelr-
	  li        r3, 0xF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDF44
 * Size:	000090
 */
void Game::BigTreasure::Obj::getAttackAnimIndex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x408(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x20
	  li        r3, 0x16
	  b         .loc_0x80

	.loc_0x20:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x60
	  bl        0x1198
	  cmpwi     r3, 0x3
	  bne-      .loc_0x3C
	  li        r3, 0x4
	  b         .loc_0x80

	.loc_0x3C:
	  cmpwi     r3, 0x6
	  bne-      .loc_0x4C
	  li        r3, 0x7
	  b         .loc_0x80

	.loc_0x4C:
	  cmpwi     r3, 0x9
	  li        r3, 0xD
	  bne-      .loc_0x80
	  li        r3, 0xA
	  b         .loc_0x80

	.loc_0x60:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x70
	  li        r3, 0x13
	  b         .loc_0x80

	.loc_0x70:
	  cmpwi     r0, 0x3
	  li        r3, 0x18
	  bne-      .loc_0x80
	  li        r3, 0x10

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DDFD4
 * Size:	000090
 */
void Game::BigTreasure::Obj::getPutItemAnimIndex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x408(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x20
	  li        r3, 0x17
	  b         .loc_0x80

	.loc_0x20:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x60
	  bl        0x1108
	  cmpwi     r3, 0x4
	  bne-      .loc_0x3C
	  li        r3, 0x5
	  b         .loc_0x80

	.loc_0x3C:
	  cmpwi     r3, 0x7
	  bne-      .loc_0x4C
	  li        r3, 0x8
	  b         .loc_0x80

	.loc_0x4C:
	  cmpwi     r3, 0xA
	  li        r3, 0xE
	  bne-      .loc_0x80
	  li        r3, 0xB
	  b         .loc_0x80

	.loc_0x60:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x70
	  li        r3, 0x14
	  b         .loc_0x80

	.loc_0x70:
	  cmpwi     r0, 0x3
	  li        r3, 0x18
	  bne-      .loc_0x80
	  li        r3, 0x11

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE064
 * Size:	000184
 */
void Game::BigTreasure::Obj::getFireAttackAnimIndex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f1, -0x1668(r2)
	  li        r4, 0
	  stw       r0, 0x34(r1)
	  li        r5, 0
	  lfs       f2, -0x1664(r2)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  bl        -0x1CB994
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f1, 0x18C(r31)
	  subi      r3, r3, 0x2E20
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x194(r31)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0x2A8FC4
	  lfs       f0, -0x1730(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x84
	  lfs       f0, -0x1684(r2)
	  fadds     f1, f0, f1
	  b         .loc_0x98

	.loc_0x84:
	  lfs       f0, -0x1684(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x98
	  fsubs     f1, f1, f0

	.loc_0x98:
	  lfs       f2, 0x1FC(r31)
	  lfs       f0, -0x1730(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB8
	  lfs       f0, -0x1684(r2)
	  fadds     f1, f0, f1
	  b         .loc_0x100

	.loc_0xB8:
	  lfs       f0, -0x1684(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x100
	  fsubs     f1, f1, f0
	  b         .loc_0x100

	.loc_0xD0:
	  bl        -0x214B94
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x1700(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x1684(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x1708(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f1, f1, f0

	.loc_0x100:
	  lfs       f0, -0x1660(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x124
	  lfs       f0, -0x165C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  li        r3, 0x9
	  b         .loc_0x170

	.loc_0x124:
	  lfs       f0, -0x165C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x148
	  lfs       f0, -0x1658(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x148
	  li        r3, 0xC
	  b         .loc_0x170

	.loc_0x148:
	  lfs       f0, -0x1658(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x16C
	  lfs       f0, -0x1654(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x16C
	  li        r3, 0x6
	  b         .loc_0x170

	.loc_0x16C:
	  li        r3, 0x3

	.loc_0x170:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE1E8
 * Size:	000098
 */
void Game::BigTreasure::Obj::getPreAttackTimeMax()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x408(r3)
	  cmpwi     r4, 0
	  bne-      .loc_0x2C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x90C(r3)
	  b         .loc_0x84

	.loc_0x2C:
	  cmpwi     r4, 0x1
	  bne-      .loc_0x58
	  bl        0xC0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x934(r3)
	  b         .loc_0x84

	.loc_0x4C:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x95C(r3)
	  b         .loc_0x84

	.loc_0x58:
	  cmpwi     r4, 0x2
	  bne-      .loc_0x6C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x984(r3)
	  b         .loc_0x84

	.loc_0x6C:
	  cmpwi     r4, 0x3
	  bne-      .loc_0x80
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x9AC(r3)
	  b         .loc_0x84

	.loc_0x80:
	  lfs       f1, -0x1650(r2)

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE280
 * Size:	00005C
 */
void Game::BigTreasure::Obj::getAttackTimeMax()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x408(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x18
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x9D4(r3)
	  blr

	.loc_0x18:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x9FC(r3)
	  blr

	.loc_0x2C:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x40
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0xA24(r3)
	  blr

	.loc_0x40:
	  cmpwi     r0, 0x3
	  bne-      .loc_0x54
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0xA4C(r3)
	  blr

	.loc_0x54:
	  lfs       f1, -0x1650(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE2DC
 * Size:	000020
 */
void Game::BigTreasure::Obj::isNormalAttack(int)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lfs       f0, -0x1674(r2)
	  add       r3, r3, r0
	  lfs       f1, 0x3D8(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE2FC
 * Size:	0000B0
 */
void Game::BigTreasure::Obj::resetMaterialColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r4, 0x2DC(r3)
	  lwz       r0, 0x3C4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  li        r4, 0x1
	  b         .loc_0x6C

	.loc_0x30:
	  lwz       r0, 0x3C8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r4, 0x1
	  b         .loc_0x6C

	.loc_0x44:
	  addi      r3, r31, 0x8
	  lwz       r0, 0x3CC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  li        r4, 0x1
	  b         .loc_0x6C

	.loc_0x5C:
	  lwz       r0, 0x3C8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r4, 0x1

	.loc_0x6C:
	  mr        r3, r31
	  bl        .loc_0xB0
	  mr        r3, r31
	  bl        0x70
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x41C(r31)
	  bl        0x84
	  mr        r3, r31
	  bl        0xD4
	  mr        r3, r31
	  bl        0x100
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xB0:
	*/
}

/*
 * --INFO--
 * Address:	802DE3AC
 * Size:	000038
 */
void Game::BigTreasure::Obj::resetTargetMatBodyColor(bool)
{
	/*
	.loc_0x0:
	  li        r5, 0x1E
	  rlwinm.   r0,r4,0,24,31
	  sth       r5, 0x40C(r3)
	  li        r4, 0x46
	  li        r0, 0x3C
	  sth       r4, 0x40E(r3)
	  sth       r0, 0x410(r3)
	  beq-      .loc_0x2C
	  li        r0, 0xFF
	  sth       r0, 0x412(r3)
	  blr

	.loc_0x2C:
	  li        r0, 0
	  sth       r0, 0x412(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE3E4
 * Size:	000024
 */
void Game::BigTreasure::Obj::resetCurrentMatBodyColor()
{
	/*
	.loc_0x0:
	  lha       r0, 0x40C(r3)
	  sth       r0, 0x414(r3)
	  lha       r0, 0x40E(r3)
	  sth       r0, 0x416(r3)
	  lha       r0, 0x410(r3)
	  sth       r0, 0x418(r3)
	  lha       r0, 0x412(r3)
	  sth       r0, 0x41A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE408
 * Size:	000058
 */
void Game::BigTreasure::Obj::resetTargetEyeMatColor()
{
	/*
	.loc_0x0:
	  lfs       f2, -0x164C(r2)
	  lfs       f0, -0x1728(r2)
	  stfs      f2, 0x438(r3)
	  lfs       f1, -0x16D0(r2)
	  stfs      f0, 0x43C(r3)
	  lfs       f0, -0x1648(r2)
	  stfs      f2, 0x440(r3)
	  lfs       f4, -0x1644(r2)
	  stfs      f1, 0x444(r3)
	  lfs       f3, -0x1730(r2)
	  stfs      f0, 0x448(r3)
	  lfs       f2, -0x16BC(r2)
	  stfs      f4, 0x44C(r3)
	  lfs       f1, -0x1668(r2)
	  stfs      f3, 0x45C(r3)
	  lfs       f0, -0x1640(r2)
	  stfs      f2, 0x460(r3)
	  stfs      f3, 0x464(r3)
	  stfs      f4, 0x468(r3)
	  stfs      f1, 0x46C(r3)
	  stfs      f0, 0x470(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE460
 * Size:	000034
 */
void Game::BigTreasure::Obj::resetCurrentMatEyeColor()
{
	/*
	.loc_0x0:
	  lfs       f0, 0x438(r3)
	  stfs      f0, 0x450(r3)
	  lfs       f0, 0x43C(r3)
	  stfs      f0, 0x454(r3)
	  lfs       f0, 0x440(r3)
	  stfs      f0, 0x458(r3)
	  lfs       f0, 0x45C(r3)
	  stfs      f0, 0x474(r3)
	  lfs       f0, 0x460(r3)
	  stfs      f0, 0x478(r3)
	  lfs       f0, 0x464(r3)
	  stfs      f0, 0x47C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE494
 * Size:	00012C
 */
void Game::BigTreasure::Obj::setMatEyeAnimSpeed()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2DC(r3)
	  lfs       f5, -0x16BC(r2)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  lfs       f5, -0x171C(r2)

	.loc_0x14:
	  li        r0, 0x3
	  mr        r5, r3
	  lfs       f3, -0x1730(r2)
	  li        r6, 0
	  lfs       f2, -0x172C(r2)
	  mtctr     r0

	.loc_0x2C:
	  lwz       r0, 0x41C(r3)
	  lfs       f0, 0x450(r5)
	  mulli     r0, r0, 0xC
	  add       r4, r0, r6
	  addi      r0, r4, 0x438
	  lfsx      f1, r3, r0
	  fsubs     f4, f1, f0
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x54
	  b         .loc_0x58

	.loc_0x54:
	  fneg      f4, f4

	.loc_0x58:
	  lfs       f1, 0x444(r5)
	  lfs       f0, 0x438(r5)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x70
	  b         .loc_0x74

	.loc_0x70:
	  fneg      f0, f0

	.loc_0x74:
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x80
	  b         .loc_0x84

	.loc_0x80:
	  fmr       f4, f0

	.loc_0x84:
	  stfs      f4, 0x420(r5)
	  lfs       f0, 0x420(r5)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x98
	  stfs      f2, 0x420(r5)

	.loc_0x98:
	  lfs       f0, 0x420(r5)
	  fdivs     f0, f0, f5
	  stfs      f0, 0x420(r5)
	  lwz       r0, 0x41C(r3)
	  lfs       f0, 0x474(r5)
	  mulli     r0, r0, 0xC
	  add       r4, r0, r6
	  addi      r0, r4, 0x45C
	  lfsx      f1, r3, r0
	  fsubs     f4, f1, f0
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0xCC
	  b         .loc_0xD0

	.loc_0xCC:
	  fneg      f4, f4

	.loc_0xD0:
	  lfs       f1, 0x468(r5)
	  lfs       f0, 0x45C(r5)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0xE8
	  b         .loc_0xEC

	.loc_0xE8:
	  fneg      f0, f0

	.loc_0xEC:
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0xF8
	  b         .loc_0xFC

	.loc_0xF8:
	  fmr       f4, f0

	.loc_0xFC:
	  stfs      f4, 0x42C(r5)
	  lfs       f0, 0x42C(r5)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x110
	  stfs      f2, 0x42C(r5)

	.loc_0x110:
	  lfs       f0, 0x42C(r5)
	  addi      r6, r6, 0x4
	  fdivs     f0, f0, f5
	  stfs      f0, 0x42C(r5)
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x2C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DE5C0
 * Size:	0004D0
 */
void Game::BigTreasure::Obj::setAttackMaterialColor(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r4, 0x2DC(r3)
	  lbz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  lwz       r0, 0x408(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x128
	  bge-      .loc_0x44
	  cmpwi     r0, 0
	  beq-      .loc_0x50
	  bge-      .loc_0xBC
	  b         .loc_0x394

	.loc_0x44:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x394
	  b         .loc_0x19C

	.loc_0x50:
	  li        r0, 0x96
	  li        r3, 0x82
	  sth       r0, 0x40C(r31)
	  li        r0, 0x14
	  lfs       f5, -0x16BC(r2)
	  sth       r3, 0x40E(r31)
	  lfs       f1, -0x1730(r2)
	  sth       r0, 0x410(r31)
	  lfs       f4, -0x1648(r2)
	  stfs      f5, 0x438(r31)
	  lfs       f0, -0x1668(r2)
	  stfs      f5, 0x43C(r31)
	  lfs       f3, -0x163C(r2)
	  stfs      f1, 0x440(r31)
	  lfs       f2, -0x1728(r2)
	  stfs      f4, 0x444(r31)
	  lfs       f1, -0x1670(r2)
	  stfs      f0, 0x448(r31)
	  lfs       f0, -0x1638(r2)
	  stfs      f3, 0x44C(r31)
	  stfs      f2, 0x45C(r31)
	  stfs      f2, 0x460(r31)
	  stfs      f5, 0x464(r31)
	  stfs      f4, 0x468(r31)
	  stfs      f1, 0x46C(r31)
	  stfs      f0, 0x470(r31)
	  b         .loc_0x394

	.loc_0xBC:
	  li        r0, 0xA0
	  li        r3, 0x32
	  sth       r0, 0x40C(r31)
	  li        r0, 0x14
	  lfs       f6, -0x1728(r2)
	  sth       r3, 0x40E(r31)
	  lfs       f0, -0x164C(r2)
	  sth       r0, 0x410(r31)
	  lfs       f5, -0x1648(r2)
	  stfs      f6, 0x438(r31)
	  lfs       f4, -0x1678(r2)
	  stfs      f0, 0x43C(r31)
	  lfs       f3, -0x1638(r2)
	  stfs      f0, 0x440(r31)
	  lfs       f2, -0x1634(r2)
	  stfs      f5, 0x444(r31)
	  lfs       f1, -0x1670(r2)
	  stfs      f4, 0x448(r31)
	  lfs       f0, -0x16D0(r2)
	  stfs      f4, 0x44C(r31)
	  stfs      f3, 0x45C(r31)
	  stfs      f6, 0x460(r31)
	  stfs      f2, 0x464(r31)
	  stfs      f5, 0x468(r31)
	  stfs      f1, 0x46C(r31)
	  stfs      f0, 0x470(r31)
	  b         .loc_0x394

	.loc_0x128:
	  li        r0, 0x5A
	  li        r3, 0x5
	  sth       r0, 0x40C(r31)
	  li        r0, 0x78
	  lfs       f4, -0x16BC(r2)
	  sth       r3, 0x40E(r31)
	  lfs       f0, -0x1730(r2)
	  sth       r0, 0x410(r31)
	  lfs       f3, -0x1630(r2)
	  stfs      f4, 0x438(r31)
	  lfs       f2, -0x162C(r2)
	  stfs      f0, 0x43C(r31)
	  lfs       f1, -0x1640(r2)
	  stfs      f4, 0x440(r31)
	  lfs       f0, -0x1628(r2)
	  stfs      f3, 0x444(r31)
	  lfs       f3, -0x164C(r2)
	  stfs      f2, 0x448(r31)
	  lfs       f2, -0x1638(r2)
	  stfs      f1, 0x44C(r31)
	  lfs       f1, -0x16D0(r2)
	  stfs      f0, 0x45C(r31)
	  lfs       f0, -0x1624(r2)
	  stfs      f3, 0x460(r31)
	  stfs      f2, 0x464(r31)
	  stfs      f1, 0x468(r31)
	  stfs      f3, 0x46C(r31)
	  stfs      f0, 0x470(r31)
	  b         .loc_0x394

	.loc_0x19C:
	  li        r0, 0x28
	  li        r3, 0x64
	  sth       r0, 0x40C(r31)
	  li        r0, 0xB4
	  lfs       f2, -0x1628(r2)
	  sth       r3, 0x40E(r31)
	  lfs       f1, -0x1638(r2)
	  sth       r0, 0x410(r31)
	  lfs       f0, -0x163C(r2)
	  stfs      f2, 0x438(r31)
	  lfs       f4, -0x16D0(r2)
	  stfs      f1, 0x43C(r31)
	  lfs       f3, -0x1648(r2)
	  stfs      f0, 0x440(r31)
	  lfs       f0, -0x1668(r2)
	  stfs      f4, 0x444(r31)
	  lfs       f2, -0x164C(r2)
	  stfs      f3, 0x448(r31)
	  lfs       f1, -0x1728(r2)
	  stfs      f0, 0x44C(r31)
	  lfs       f0, -0x1670(r2)
	  stfs      f2, 0x45C(r31)
	  stfs      f2, 0x460(r31)
	  stfs      f1, 0x464(r31)
	  stfs      f4, 0x468(r31)
	  stfs      f0, 0x46C(r31)
	  stfs      f3, 0x470(r31)
	  b         .loc_0x394

	.loc_0x20C:
	  lwz       r0, 0x3C4(r31)
	  li        r4, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x224
	  li        r4, 0x1
	  b         .loc_0x260

	.loc_0x224:
	  lwz       r0, 0x3C8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  li        r4, 0x1
	  b         .loc_0x260

	.loc_0x238:
	  addi      r3, r31, 0x8
	  lwz       r0, 0x3CC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x250
	  li        r4, 0x1
	  b         .loc_0x260

	.loc_0x250:
	  lwz       r0, 0x3C8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x260
	  li        r4, 0x1

	.loc_0x260:
	  li        r3, 0x1E
	  rlwinm.   r0,r4,0,24,31
	  sth       r3, 0x40C(r31)
	  li        r3, 0x46
	  li        r0, 0x3C
	  sth       r3, 0x40E(r31)
	  sth       r0, 0x410(r31)
	  beq-      .loc_0x28C
	  li        r0, 0xFF
	  sth       r0, 0x412(r31)
	  b         .loc_0x294

	.loc_0x28C:
	  li        r0, 0
	  sth       r0, 0x412(r31)

	.loc_0x294:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x2F4
	  lfs       f2, -0x164C(r2)
	  lfs       f0, -0x1728(r2)
	  stfs      f2, 0x438(r31)
	  lfs       f1, -0x16D0(r2)
	  stfs      f0, 0x43C(r31)
	  lfs       f0, -0x1648(r2)
	  stfs      f2, 0x440(r31)
	  lfs       f4, -0x1644(r2)
	  stfs      f1, 0x444(r31)
	  lfs       f3, -0x1730(r2)
	  stfs      f0, 0x448(r31)
	  lfs       f2, -0x16BC(r2)
	  stfs      f4, 0x44C(r31)
	  lfs       f1, -0x1668(r2)
	  stfs      f3, 0x45C(r31)
	  lfs       f0, -0x1640(r2)
	  stfs      f2, 0x460(r31)
	  stfs      f3, 0x464(r31)
	  stfs      f4, 0x468(r31)
	  stfs      f1, 0x46C(r31)
	  stfs      f0, 0x470(r31)
	  b         .loc_0x394

	.loc_0x2F4:
	  lfs       f0, -0x171C(r2)
	  lfs       f3, -0x1678(r2)
	  stfs      f0, 0x438(r31)
	  lfs       f0, -0x1648(r2)
	  stfs      f3, 0x43C(r31)
	  lfs       f2, -0x1668(r2)
	  stfs      f0, 0x440(r31)
	  lfs       f1, -0x1620(r2)
	  stfs      f0, 0x444(r31)
	  lfs       f0, -0x1728(r2)
	  stfs      f2, 0x448(r31)
	  lfs       f2, -0x161C(r2)
	  stfs      f1, 0x44C(r31)
	  lfs       f1, -0x16BC(r2)
	  stfs      f0, 0x45C(r31)
	  lfs       f0, -0x1624(r2)
	  stfs      f2, 0x460(r31)
	  stfs      f1, 0x464(r31)
	  stfs      f3, 0x468(r31)
	  stfs      f1, 0x46C(r31)
	  stfs      f0, 0x470(r31)
	  lha       r0, 0x412(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x394
	  lha       r0, 0x41A(r31)
	  cmpwi     r0, 0xFF
	  bne-      .loc_0x394
	  mr        r3, r31
	  bl        0x2300
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x591B
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x394:
	  lbz       r0, 0x2DC(r31)
	  lfs       f4, -0x16BC(r2)
	  cmplwi    r0, 0
	  beq-      .loc_0x3A8
	  lfs       f4, -0x171C(r2)

	.loc_0x3A8:
	  li        r0, 0x3
	  li        r5, 0
	  mr        r4, r31
	  lfs       f3, -0x1730(r2)
	  lfs       f2, -0x172C(r2)
	  mtctr     r0

	.loc_0x3C0:
	  lwz       r0, 0x41C(r31)
	  lfs       f0, 0x450(r4)
	  mulli     r0, r0, 0xC
	  add       r3, r0, r5
	  addi      r0, r3, 0x438
	  lfsx      f1, r31, r0
	  fsubs     f5, f1, f0
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x3E8
	  b         .loc_0x3EC

	.loc_0x3E8:
	  fneg      f5, f5

	.loc_0x3EC:
	  lfs       f1, 0x444(r4)
	  lfs       f0, 0x438(r4)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x404
	  b         .loc_0x408

	.loc_0x404:
	  fneg      f0, f0

	.loc_0x408:
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x414
	  b         .loc_0x418

	.loc_0x414:
	  fmr       f5, f0

	.loc_0x418:
	  stfs      f5, 0x420(r4)
	  lfs       f0, 0x420(r4)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x42C
	  stfs      f2, 0x420(r4)

	.loc_0x42C:
	  lfs       f0, 0x420(r4)
	  fdivs     f0, f0, f4
	  stfs      f0, 0x420(r4)
	  lwz       r0, 0x41C(r31)
	  lfs       f0, 0x474(r4)
	  mulli     r0, r0, 0xC
	  add       r3, r0, r5
	  addi      r0, r3, 0x45C
	  lfsx      f1, r31, r0
	  fsubs     f5, f1, f0
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x460
	  b         .loc_0x464

	.loc_0x460:
	  fneg      f5, f5

	.loc_0x464:
	  lfs       f1, 0x468(r4)
	  lfs       f0, 0x45C(r4)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x47C
	  b         .loc_0x480

	.loc_0x47C:
	  fneg      f0, f0

	.loc_0x480:
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x48C
	  b         .loc_0x490

	.loc_0x48C:
	  fmr       f5, f0

	.loc_0x490:
	  stfs      f5, 0x42C(r4)
	  lfs       f0, 0x42C(r4)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x4A4
	  stfs      f2, 0x42C(r4)

	.loc_0x4A4:
	  lfs       f0, 0x42C(r4)
	  addi      r5, r5, 0x4
	  fdivs     f0, f0, f4
	  stfs      f0, 0x42C(r4)
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x3C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DEA90
 * Size:	0004C0
 */
void Game::BigTreasure::Obj::updateMaterialColor()
{
	/*
	.loc_0x0:
	  lha       r4, 0x40C(r3)
	  lha       r5, 0x414(r3)
	  sub.      r6, r5, r4
	  neg       r0, r6
	  ble-      .loc_0x18
	  mr        r0, r6

	.loc_0x18:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x24
	  b         .loc_0x3C

	.loc_0x24:
	  cmpw      r5, r4
	  bge-      .loc_0x34
	  addi      r5, r5, 0x5
	  b         .loc_0x38

	.loc_0x34:
	  subi      r5, r5, 0x5

	.loc_0x38:
	  mr        r4, r5

	.loc_0x3C:
	  sth       r4, 0x414(r3)
	  lha       r4, 0x40E(r3)
	  lha       r5, 0x416(r3)
	  sub.      r6, r5, r4
	  neg       r0, r6
	  ble-      .loc_0x58
	  mr        r0, r6

	.loc_0x58:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x64
	  b         .loc_0x7C

	.loc_0x64:
	  cmpw      r5, r4
	  bge-      .loc_0x74
	  addi      r5, r5, 0x5
	  b         .loc_0x78

	.loc_0x74:
	  subi      r5, r5, 0x5

	.loc_0x78:
	  mr        r4, r5

	.loc_0x7C:
	  sth       r4, 0x416(r3)
	  lha       r4, 0x410(r3)
	  lha       r5, 0x418(r3)
	  sub.      r6, r5, r4
	  neg       r0, r6
	  ble-      .loc_0x98
	  mr        r0, r6

	.loc_0x98:
	  cmpwi     r0, 0x5
	  bge-      .loc_0xA4
	  b         .loc_0xBC

	.loc_0xA4:
	  cmpw      r5, r4
	  bge-      .loc_0xB4
	  addi      r5, r5, 0x5
	  b         .loc_0xB8

	.loc_0xB4:
	  subi      r5, r5, 0x5

	.loc_0xB8:
	  mr        r4, r5

	.loc_0xBC:
	  sth       r4, 0x418(r3)
	  lha       r4, 0x412(r3)
	  lha       r5, 0x41A(r3)
	  sub.      r6, r5, r4
	  neg       r0, r6
	  ble-      .loc_0xD8
	  mr        r0, r6

	.loc_0xD8:
	  cmpwi     r0, 0x5
	  bge-      .loc_0xE4
	  b         .loc_0xFC

	.loc_0xE4:
	  cmpw      r5, r4
	  bge-      .loc_0xF4
	  addi      r5, r5, 0x5
	  b         .loc_0xF8

	.loc_0xF4:
	  subi      r5, r5, 0x5

	.loc_0xF8:
	  mr        r4, r5

	.loc_0xFC:
	  sth       r4, 0x41A(r3)
	  lfs       f0, -0x1730(r2)
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x450(r3)
	  mulli     r0, r0, 0xC
	  lfs       f3, 0x420(r3)
	  add       r4, r3, r0
	  lfs       f2, 0x438(r4)
	  fsubs     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x12C
	  b         .loc_0x130

	.loc_0x12C:
	  fneg      f4, f4

	.loc_0x130:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x13C
	  b         .loc_0x150

	.loc_0x13C:
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x14C
	  fadds     f2, f1, f3
	  b         .loc_0x150

	.loc_0x14C:
	  fsubs     f2, f1, f3

	.loc_0x150:
	  stfs      f2, 0x450(r3)
	  lfs       f0, -0x1730(r2)
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x454(r3)
	  mulli     r0, r0, 0xC
	  lfs       f3, 0x424(r3)
	  add       r4, r3, r0
	  lfs       f2, 0x43C(r4)
	  fsubs     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x180
	  b         .loc_0x184

	.loc_0x180:
	  fneg      f4, f4

	.loc_0x184:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x190
	  b         .loc_0x1A4

	.loc_0x190:
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x1A0
	  fadds     f2, f1, f3
	  b         .loc_0x1A4

	.loc_0x1A0:
	  fsubs     f2, f1, f3

	.loc_0x1A4:
	  stfs      f2, 0x454(r3)
	  lfs       f0, -0x1730(r2)
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x458(r3)
	  mulli     r0, r0, 0xC
	  lfs       f3, 0x428(r3)
	  add       r4, r3, r0
	  lfs       f2, 0x440(r4)
	  fsubs     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x1D4
	  b         .loc_0x1D8

	.loc_0x1D4:
	  fneg      f4, f4

	.loc_0x1D8:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x1E4
	  b         .loc_0x1F8

	.loc_0x1E4:
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x1F4
	  fadds     f2, f1, f3
	  b         .loc_0x1F8

	.loc_0x1F4:
	  fsubs     f2, f1, f3

	.loc_0x1F8:
	  stfs      f2, 0x458(r3)
	  lfs       f0, -0x1730(r2)
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x474(r3)
	  mulli     r0, r0, 0xC
	  lfs       f3, 0x42C(r3)
	  add       r4, r3, r0
	  lfs       f2, 0x45C(r4)
	  fsubs     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x228
	  b         .loc_0x22C

	.loc_0x228:
	  fneg      f4, f4

	.loc_0x22C:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x238
	  b         .loc_0x24C

	.loc_0x238:
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x248
	  fadds     f2, f1, f3
	  b         .loc_0x24C

	.loc_0x248:
	  fsubs     f2, f1, f3

	.loc_0x24C:
	  stfs      f2, 0x474(r3)
	  lfs       f0, -0x1730(r2)
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x478(r3)
	  mulli     r0, r0, 0xC
	  lfs       f3, 0x430(r3)
	  add       r4, r3, r0
	  lfs       f2, 0x460(r4)
	  fsubs     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x27C
	  b         .loc_0x280

	.loc_0x27C:
	  fneg      f4, f4

	.loc_0x280:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x28C
	  b         .loc_0x2A0

	.loc_0x28C:
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x29C
	  fadds     f2, f1, f3
	  b         .loc_0x2A0

	.loc_0x29C:
	  fsubs     f2, f1, f3

	.loc_0x2A0:
	  stfs      f2, 0x478(r3)
	  lfs       f0, -0x1730(r2)
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x47C(r3)
	  mulli     r0, r0, 0xC
	  lfs       f3, 0x434(r3)
	  add       r4, r3, r0
	  lfs       f2, 0x464(r4)
	  fsubs     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x2D0
	  b         .loc_0x2D4

	.loc_0x2D0:
	  fneg      f4, f4

	.loc_0x2D4:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x2E0
	  b         .loc_0x2F4

	.loc_0x2E0:
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x2F0
	  fadds     f2, f1, f3
	  b         .loc_0x2F4

	.loc_0x2F0:
	  fsubs     f2, f1, f3

	.loc_0x2F4:
	  li        r0, 0x3
	  stfs      f2, 0x47C(r3)
	  mr        r5, r3
	  li        r7, 0x1
	  lfs       f3, -0x1730(r2)
	  li        r4, 0
	  lfs       f2, -0x1618(r2)
	  mtctr     r0

	.loc_0x314:
	  lwz       r0, 0x41C(r3)
	  lfs       f1, 0x450(r5)
	  mulli     r0, r0, 0xC
	  add       r6, r0, r4
	  add       r6, r3, r6
	  lfs       f0, 0x438(r6)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x33C
	  b         .loc_0x340

	.loc_0x33C:
	  fneg      f0, f0

	.loc_0x340:
	  fcmpo     cr0, f0, f2
	  bgt-      .loc_0x36C
	  lfs       f1, 0x474(r5)
	  lfs       f0, 0x45C(r6)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x360
	  b         .loc_0x364

	.loc_0x360:
	  fneg      f0, f0

	.loc_0x364:
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x374

	.loc_0x36C:
	  li        r7, 0
	  b         .loc_0x380

	.loc_0x374:
	  addi      r4, r4, 0x4
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x314

	.loc_0x380:
	  rlwinm.   r0,r7,0,24,31
	  beqlr-
	  lwz       r0, 0x41C(r3)
	  lfs       f4, -0x16BC(r2)
	  xori      r0, r0, 0x1
	  stw       r0, 0x41C(r3)
	  lbz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3A8
	  lfs       f4, -0x171C(r2)

	.loc_0x3A8:
	  li        r0, 0x3
	  li        r6, 0
	  mr        r5, r3
	  lfs       f3, -0x1730(r2)
	  lfs       f2, -0x172C(r2)
	  mtctr     r0

	.loc_0x3C0:
	  lwz       r0, 0x41C(r3)
	  lfs       f0, 0x450(r5)
	  mulli     r0, r0, 0xC
	  add       r4, r0, r6
	  addi      r0, r4, 0x438
	  lfsx      f1, r3, r0
	  fsubs     f5, f1, f0
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x3E8
	  b         .loc_0x3EC

	.loc_0x3E8:
	  fneg      f5, f5

	.loc_0x3EC:
	  lfs       f1, 0x444(r5)
	  lfs       f0, 0x438(r5)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x404
	  b         .loc_0x408

	.loc_0x404:
	  fneg      f0, f0

	.loc_0x408:
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x414
	  b         .loc_0x418

	.loc_0x414:
	  fmr       f5, f0

	.loc_0x418:
	  stfs      f5, 0x420(r5)
	  lfs       f0, 0x420(r5)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x42C
	  stfs      f2, 0x420(r5)

	.loc_0x42C:
	  lfs       f0, 0x420(r5)
	  fdivs     f0, f0, f4
	  stfs      f0, 0x420(r5)
	  lwz       r0, 0x41C(r3)
	  lfs       f0, 0x474(r5)
	  mulli     r0, r0, 0xC
	  add       r4, r0, r6
	  addi      r0, r4, 0x45C
	  lfsx      f1, r3, r0
	  fsubs     f5, f1, f0
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x460
	  b         .loc_0x464

	.loc_0x460:
	  fneg      f5, f5

	.loc_0x464:
	  lfs       f1, 0x468(r5)
	  lfs       f0, 0x45C(r5)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x47C
	  b         .loc_0x480

	.loc_0x47C:
	  fneg      f0, f0

	.loc_0x480:
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x48C
	  b         .loc_0x490

	.loc_0x48C:
	  fmr       f5, f0

	.loc_0x490:
	  stfs      f5, 0x42C(r5)
	  lfs       f0, 0x42C(r5)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x4A4
	  stfs      f2, 0x42C(r5)

	.loc_0x4A4:
	  lfs       f0, 0x42C(r5)
	  addi      r6, r6, 0x4
	  fdivs     f0, f0, f4
	  stfs      f0, 0x42C(r5)
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x3C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DEF50
 * Size:	00011C
 */
void Game::BigTreasure::Obj::startBlendAnimation(int, bool)
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
	  lfd       f1, -0x1700(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  b         .loc_0x84

	.loc_0x80:
	  lfs       f1, -0x1730(r2)

	.loc_0x84:
	  lfs       f0, -0x172C(r2)
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
	  lfs       f1, -0x16BC(r2)
	  mr        r3, r29
	  mr        r5, r30
	  subi      r6, r13, 0x6DC0
	  li        r7, 0
	  bl        -0x1DA260
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x149D9C
	  b         .loc_0xF8

	.loc_0xDC:
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1DA034
	  b         .loc_0xF8

	.loc_0xF0:
	  li        r5, 0
	  bl        -0x1DA040

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
 * Address:	802DF06C
 * Size:	000098
 */
void Game::BigTreasure::Obj::endBlendAnimation()
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
	  bl        -0x1DA11C
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0
	  bl        -0x1DA0D0
	  fmr       f1, f31
	  mr        r3, r30
	  bl        -0x1D9EB8
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
 * Address:	802DF104
 * Size:	00004C
 */
void Game::BigTreasure::Obj::getCurrAnimationIndex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lha       r3, 0x20(r3)
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, -0x1

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DF150
 * Size:	0000C8
 */
void Game::BigTreasure::Obj::startBossChargeBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B4BA4

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x2
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
 * Address:	802DF218
 * Size:	000120
 */
void Game::BigTreasure::Obj::startBossAttackBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B4C74

	.loc_0xA0:
	  lwz       r0, 0x408(r29)
	  li        r4, 0x3
	  cmpwi     r0, 0x2
	  beq-      .loc_0xE0
	  bge-      .loc_0xC4
	  cmpwi     r0, 0
	  beq-      .loc_0xD0
	  bge-      .loc_0xD8
	  b         .loc_0xEC

	.loc_0xC4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xEC
	  b         .loc_0xE8

	.loc_0xD0:
	  li        r4, 0x7
	  b         .loc_0xEC

	.loc_0xD8:
	  li        r4, 0x3
	  b         .loc_0xEC

	.loc_0xE0:
	  li        r4, 0x5
	  b         .loc_0xEC

	.loc_0xE8:
	  li        r4, 0x6

	.loc_0xEC:
	  mr        r3, r30
	  rlwinm    r4,r4,0,16,31
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802DF338
 * Size:	00016C
 */
void Game::BigTreasure::Obj::finishBossAttackBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B4D94

	.loc_0xA0:
	  lwz       r0, 0x3C4(r29)
	  li        r4, 0x1
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  li        r3, 0x1

	.loc_0xB8:
	  lwz       r0, 0x3C8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  addi      r3, r3, 0x1

	.loc_0xC8:
	  lwz       r0, 0x3CC(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  addi      r3, r3, 0x1

	.loc_0xD8:
	  lwz       r0, 0x3D0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  addi      r3, r3, 0x1

	.loc_0xE8:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x124
	  bge-      .loc_0x104
	  cmpwi     r3, 0
	  beq-      .loc_0x114
	  bge-      .loc_0x11C
	  b         .loc_0x138

	.loc_0x104:
	  cmpwi     r3, 0x4
	  beq-      .loc_0x134
	  bge-      .loc_0x138
	  b         .loc_0x12C

	.loc_0x114:
	  li        r4, 0xB
	  b         .loc_0x138

	.loc_0x11C:
	  li        r4, 0xA
	  b         .loc_0x138

	.loc_0x124:
	  li        r4, 0x9
	  b         .loc_0x138

	.loc_0x12C:
	  li        r4, 0x8
	  b         .loc_0x138

	.loc_0x134:
	  li        r4, 0x1

	.loc_0x138:
	  mr        r3, r30
	  rlwinm    r4,r4,0,16,31
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802DF4A4
 * Size:	0000C8
 */
void Game::BigTreasure::Obj::startBossFlickBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B4EF8

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
 * Address:	802DF56C
 * Size:	0001B0
 */
void Game::BigTreasure::Obj::startBossItemDropBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B4FC8

	.loc_0xA0:
	  lwz       r0, 0x3C4(r29)
	  li        r31, 0x8
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  li        r3, 0x1

	.loc_0xB8:
	  lwz       r0, 0x3C8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  addi      r3, r3, 0x1

	.loc_0xC8:
	  lwz       r0, 0x3CC(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  addi      r3, r3, 0x1

	.loc_0xD8:
	  lwz       r0, 0x3D0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  addi      r3, r3, 0x1

	.loc_0xE8:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x120
	  bge-      .loc_0x104
	  cmpwi     r3, 0
	  beq-      .loc_0x110
	  bge-      .loc_0x118
	  b         .loc_0x12C

	.loc_0x104:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x12C
	  b         .loc_0x128

	.loc_0x110:
	  li        r31, 0xB
	  b         .loc_0x12C

	.loc_0x118:
	  li        r31, 0xA
	  b         .loc_0x12C

	.loc_0x120:
	  li        r31, 0x9
	  b         .loc_0x12C

	.loc_0x128:
	  li        r31, 0x8

	.loc_0x12C:
	  mr        r3, r29
	  bl        -0x1D82A8
	  cmpwi     r3, 0x7
	  bne-      .loc_0x17C
	  lwz       r0, 0x1E0(r29)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x194
	  lwz       r0, 0x408(r29)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r0, 0x3C4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x194
	  mr        r3, r30
	  rlwinm    r4,r31,0,16,31
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x194

	.loc_0x17C:
	  mr        r3, r30
	  rlwinm    r4,r31,0,16,31
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x194:
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
 * Address:	802DF71C
 * Size:	0000FC
 */
void Game::BigTreasure::Obj::updateBossBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B5178

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
 * Address:	802DF818
 * Size:	0000BC
 */
void Game::BigTreasure::Obj::resetBossAppearBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B526C

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x180138
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
 * Address:	802DF8D4
 * Size:	000164
 */
void Game::BigTreasure::Obj::setBossAppearBGM()
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
	  subi      r3, r3, 0x33F4
	  li        r4, 0x454
	  subi      r5, r5, 0x33DC
	  crclr     6, 0x6
	  bl        -0x2B5330

	.loc_0xA0:
	  lwz       r0, 0x3C4(r29)
	  li        r4, 0x1
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  li        r3, 0x1

	.loc_0xB8:
	  lwz       r0, 0x3C8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  addi      r3, r3, 0x1

	.loc_0xC8:
	  lwz       r0, 0x3CC(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  addi      r3, r3, 0x1

	.loc_0xD8:
	  lwz       r0, 0x3D0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  addi      r3, r3, 0x1

	.loc_0xE8:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x124
	  bge-      .loc_0x104
	  cmpwi     r3, 0
	  beq-      .loc_0x114
	  bge-      .loc_0x11C
	  b         .loc_0x138

	.loc_0x104:
	  cmpwi     r3, 0x4
	  beq-      .loc_0x134
	  bge-      .loc_0x138
	  b         .loc_0x12C

	.loc_0x114:
	  li        r4, 0xB
	  b         .loc_0x138

	.loc_0x11C:
	  li        r4, 0xA
	  b         .loc_0x138

	.loc_0x124:
	  li        r4, 0x9
	  b         .loc_0x138

	.loc_0x12C:
	  li        r4, 0x8
	  b         .loc_0x138

	.loc_0x134:
	  li        r4, 0x1

	.loc_0x138:
	  sth       r4, 0x11C(r30)
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x17FFD8
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
 * Address:	802DFA38
 * Size:	00061C
 */
void Game::BigTreasure::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r11, 0x804E
	  lis       r10, 0x804E
	  stw       r0, 0x54(r1)
	  lis       r9, 0x804D
	  lis       r8, 0x804D
	  lis       r7, 0x804E
	  stmw      r15, 0xC(r1)
	  mr        r31, r3
	  lis       r6, 0x804D
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  lis       r3, 0x804D
	  addi      r11, r11, 0x698C
	  addi      r10, r10, 0x6940
	  subi      r9, r9, 0x2508
	  subi      r8, r8, 0x26D0
	  addi      r7, r7, 0x685C
	  addi      r6, r6, 0x3518
	  addi      r5, r5, 0x6778
	  addi      r4, r4, 0x34CC
	  addi      r3, r3, 0x3464
	  mr        r28, r31
	  mr        r27, r31
	  mr        r26, r31
	  addi      r18, r11, 0x14
	  addi      r17, r10, 0x14
	  addi      r25, r9, 0x14
	  addi      r24, r8, 0x14
	  addi      r23, r7, 0x14
	  addi      r22, r6, 0x14
	  addi      r21, r5, 0x14
	  addi      r20, r4, 0x14
	  addi      r19, r3, 0x14
	  li        r16, 0

	.loc_0x90:
	  li        r3, 0x2C
	  bl        -0x2BBC28
	  mr.       r15, r3
	  beq-      .loc_0xBC
	  li        r4, 0
	  li        r5, 0x111
	  li        r6, 0x112
	  bl        0xD075C
	  lis       r3, 0x804D
	  addi      r0, r3, 0x3564
	  stw       r0, 0x0(r15)

	.loc_0xBC:
	  stw       r15, 0x480(r28)
	  li        r3, 0x14
	  bl        -0x2BBC58
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
	  stw       r18, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r17, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r25, 0x4(r3)

	.loc_0x138:
	  stw       r3, 0x490(r28)
	  li        r3, 0x14
	  bl        -0x2BBCD4
	  cmplwi    r3, 0
	  beq-      .loc_0x1B4
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
	  stw       r18, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r17, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r24, 0x4(r3)

	.loc_0x1B4:
	  stw       r3, 0x4A0(r28)
	  li        r3, 0x14
	  bl        -0x2BBD50
	  cmplwi    r3, 0
	  beq-      .loc_0x230
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
	  addi      r6, r5, 0x685C
	  li        r5, 0x26B
	  addi      r0, r4, 0x3518
	  stw       r18, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r23, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r22, 0x4(r3)

	.loc_0x230:
	  stw       r3, 0x4B4(r28)
	  mr        r30, r27
	  li        r29, 0

	.loc_0x23C:
	  li        r3, 0x1C
	  bl        -0x2BBDD4
	  cmplwi    r3, 0
	  beq-      .loc_0x2C0
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
	  addi      r6, r5, 0x6778
	  lfs       f0, -0x1678(r2)
	  li        r5, 0x26A
	  stw       r18, 0x4(r3)
	  addi      r0, r4, 0x34CC
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r21, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r20, 0x4(r3)

	.loc_0x2C0:
	  addi      r29, r29, 0x1
	  stw       r3, 0x4C4(r30)
	  cmpwi     r29, 0x3
	  addi      r30, r30, 0x4
	  blt+      .loc_0x23C
	  li        r15, 0
	  mr        r29, r26

	.loc_0x2DC:
	  li        r3, 0x58
	  bl        -0x2BBE74
	  mr.       r30, r3
	  beq-      .loc_0x314
	  lfs       f1, -0x1678(r2)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x266
	  li        r7, 0x267
	  li        r8, 0x27E
	  bl        0xD0E90
	  lis       r3, 0x804D
	  addi      r0, r3, 0x34B0
	  stw       r0, 0x0(r30)

	.loc_0x314:
	  stw       r30, 0x4F4(r29)
	  li        r3, 0x1C
	  bl        -0x2BBEB0
	  cmplwi    r3, 0
	  beq-      .loc_0x39C
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
	  addi      r6, r5, 0x6778
	  lfs       f0, -0x1678(r2)
	  li        r5, 0x278
	  stw       r18, 0x4(r3)
	  addi      r0, r4, 0x3464
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r21, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r19, 0x4(r3)

	.loc_0x39C:
	  addi      r15, r15, 0x1
	  stw       r3, 0x53C(r29)
	  cmpwi     r15, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x2DC
	  addi      r16, r16, 0x1
	  addi      r27, r27, 0xC
	  cmpwi     r16, 0x4
	  addi      r26, r26, 0x10
	  addi      r28, r28, 0x4
	  blt+      .loc_0x90
	  li        r3, 0x14
	  bl        -0x2BBF60
	  cmplwi    r3, 0
	  beq-      .loc_0x448
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
	  addi      r4, r4, 0x3418
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  li        r8, 0x2B2
	  addi      r6, r7, 0x14
	  stw       r18, 0x4(r3)
	  li        r5, 0x269
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

	.loc_0x448:
	  stw       r3, 0x4B0(r31)
	  li        r3, 0x40
	  bl        -0x2BBFE4
	  mr.       r15, r3
	  beq-      .loc_0x47C
	  li        r4, 0
	  li        r5, 0x264
	  li        r6, 0x265
	  li        r7, 0x27D
	  bl        0xD0708
	  lis       r3, 0x804D
	  addi      r0, r3, 0x33FC
	  stw       r0, 0x0(r15)

	.loc_0x47C:
	  stw       r15, 0x534(r31)
	  li        r3, 0x14
	  bl        -0x2BC018
	  cmplwi    r3, 0
	  beq-      .loc_0x500
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
	  addi      r4, r4, 0x33B0
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  li        r8, 0x2B2
	  addi      r6, r7, 0x14
	  stw       r18, 0x4(r3)
	  li        r5, 0x263
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

	.loc_0x500:
	  stw       r3, 0x538(r31)
	  li        r3, 0x14
	  bl        -0x2BC09C
	  cmplwi    r3, 0
	  beq-      .loc_0x584
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
	  addi      r4, r4, 0x3364
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  li        r8, 0x2B2
	  addi      r6, r7, 0x14
	  stw       r18, 0x4(r3)
	  li        r5, 0x277
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

	.loc_0x584:
	  stw       r3, 0x57C(r31)
	  li        r3, 0x14
	  bl        -0x2BC120
	  cmplwi    r3, 0
	  beq-      .loc_0x604
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
	  addi      r4, r4, 0x3318
	  li        r8, 0
	  stw       r0, 0x0(r3)
	  li        r7, 0x2B2
	  addi      r6, r5, 0x6940
	  li        r5, 0x280
	  stw       r18, 0x4(r3)
	  addi      r0, r4, 0x14
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r17, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x604:
	  stw       r3, 0x580(r31)
	  lmw       r15, 0xC(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E0054
 * Size:	000084
 */
void efx::TChasePosPosLocalYScale::~TChasePosPosLocalYScale()
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
	  addi      r3, r3, 0x6778
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
	  bl        -0x25040C

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x2BC004

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
 * Address:	802E00D8
 * Size:	000220
 */
void Game::BigTreasure::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r20, 0x10(r1)
	  mr        r25, r3
	  lis       r3, 0x8049
	  li        r26, 0
	  mr        r30, r25
	  mr        r29, r25
	  mr        r28, r25
	  mr        r27, r25
	  subi      r31, r3, 0x3580
	  addi      r24, r25, 0x2F8

	.loc_0x34:
	  lwz       r3, 0x480(r29)
	  addi      r4, r30, 0x328
	  bl        0xD0230
	  lwz       r3, 0x490(r29)
	  addi      r0, r30, 0x328
	  addi      r5, r30, 0x304
	  addi      r6, r30, 0x310
	  stw       r0, 0x10(r3)
	  addi      r0, r30, 0x31C
	  mr        r4, r24
	  lwz       r3, 0x4C4(r28)
	  stw       r24, 0x10(r3)
	  stw       r5, 0x14(r3)
	  lwz       r3, 0x4C8(r28)
	  stw       r5, 0x10(r3)
	  stw       r6, 0x14(r3)
	  lwz       r3, 0x4CC(r28)
	  stw       r6, 0x10(r3)
	  stw       r0, 0x14(r3)
	  lwz       r3, 0x4F4(r27)
	  bl        0xD0B38
	  lwz       r3, 0x53C(r27)
	  addi      r0, r30, 0x304
	  addi      r23, r30, 0xC
	  addi      r22, r27, 0x4
	  stw       r24, 0x10(r3)
	  li        r20, 0x1
	  stw       r0, 0x14(r3)

	.loc_0xA4:
	  subi      r0, r20, 0x1
	  lwz       r3, 0x4F4(r22)
	  mulli     r4, r0, 0xC
	  addi      r5, r23, 0x304
	  addi      r21, r4, 0x304
	  add       r21, r30, r21
	  mr        r4, r21
	  bl        0xD0AFC
	  lwz       r3, 0x53C(r22)
	  addi      r20, r20, 0x1
	  addi      r0, r23, 0x304
	  addi      r23, r23, 0xC
	  stw       r21, 0x10(r3)
	  cmpwi     r20, 0x4
	  addi      r22, r22, 0x4
	  stw       r0, 0x14(r3)
	  blt+      .loc_0xA4
	  addi      r26, r26, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r26, 0x4
	  addi      r28, r28, 0xC
	  addi      r27, r27, 0x10
	  addi      r30, r30, 0x30
	  blt+      .loc_0x34
	  lwz       r5, 0x3C4(r25)
	  cmplwi    r5, 0
	  beq-      .loc_0x11C
	  lwz       r3, 0x4A0(r25)
	  addi      r0, r5, 0x3AC
	  stw       r0, 0x10(r3)

	.loc_0x11C:
	  lwz       r5, 0x3C8(r25)
	  cmplwi    r5, 0
	  beq-      .loc_0x134
	  lwz       r3, 0x4A4(r25)
	  addi      r0, r5, 0x3AC
	  stw       r0, 0x10(r3)

	.loc_0x134:
	  addi      r4, r25, 0x8
	  lwz       r5, 0x3CC(r25)
	  cmplwi    r5, 0
	  beq-      .loc_0x150
	  lwz       r3, 0x4A0(r4)
	  addi      r0, r5, 0x3AC
	  stw       r0, 0x10(r3)

	.loc_0x150:
	  lwz       r5, 0x3C8(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x168
	  lwz       r3, 0x4A4(r4)
	  addi      r0, r5, 0x3AC
	  stw       r0, 0x10(r3)

	.loc_0x168:
	  lwz       r3, 0x174(r25)
	  subi      r4, r2, 0x1714
	  bl        0x15ED9C
	  bl        0x149654
	  lwz       r4, 0x4B0(r25)
	  mr        r20, r3
	  stw       r20, 0x10(r4)
	  mr        r4, r20
	  lwz       r3, 0x534(r25)
	  bl        0xD03E8
	  lwz       r3, 0x538(r25)
	  addi      r4, r31, 0x130
	  stw       r20, 0x10(r3)
	  lwz       r3, 0x57C(r25)
	  stw       r20, 0x10(r3)
	  lwz       r3, 0x174(r25)
	  bl        0x15ED64
	  bl        0x14961C
	  lwz       r5, 0x4B4(r25)
	  addi      r4, r31, 0x140
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r25)
	  bl        0x15ED4C
	  bl        0x149604
	  lwz       r5, 0x4B8(r25)
	  addi      r4, r31, 0x150
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r25)
	  bl        0x15ED34
	  bl        0x1495EC
	  lwz       r5, 0x4BC(r25)
	  addi      r4, r31, 0x15C
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r25)
	  bl        0x15ED1C
	  bl        0x1495D4
	  lwz       r4, 0x4C0(r25)
	  addi      r0, r25, 0x198
	  stw       r3, 0x10(r4)
	  lwz       r3, 0x580(r25)
	  stw       r0, 0x10(r3)
	  lmw       r20, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E02F8
 * Size:	0001C0
 */
void Game::BigTreasure::Obj::createOnGroundEffect(int, Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mulli     r31, r4, 0x30
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  add       r3, r30, r31
	  lfs       f2, 0x328(r3)
	  stfs      f2, 0x38(r1)
	  lfs       f1, 0x32C(r3)
	  stfs      f1, 0x3C(r1)
	  lfs       f0, 0x330(r3)
	  stfs      f0, 0x40(r1)
	  beq-      .loc_0x10C
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
	  bl        0xCECF4
	  addi      r4, r31, 0x328
	  li        r3, 0x3849
	  add       r4, r30, r4
	  bl        0x18DCDC
	  cmplwi    r3, 0
	  beq-      .loc_0x170
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lfs       f1, -0x1614(r2)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x170

	.loc_0x10C:
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
	  addi      r0, r3, 0xF00
	  li        r7, 0x115
	  li        r6, 0x116
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
	  bl        0xCEBB0

	.loc_0x170:
	  addi      r4, r31, 0x328
	  li        r3, 0x5948
	  add       r4, r30, r4
	  bl        0x18DC40
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        -0x8E24C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x8CD1C
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E04B8
 * Size:	0000A0
 */
void Game::BigTreasure::Obj::createOffGroundEffect(int, Game::WaterBox*)
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
	  lwz       r3, 0x490(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x60

	.loc_0x40:
	  rlwinm    r0,r4,2,0,29
	  li        r4, 0
	  add       r3, r31, r0
	  lwz       r3, 0x480(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x60:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5949
	  li        r5, 0
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
 * Address:	802E0558
 * Size:	00003C
 */
void Game::BigTreasure::Obj::startTreasurePinchSmoke(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  li        r4, 0
	  lwz       r3, 0x4A0(r3)
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
 * Address:	802E0594
 * Size:	000038
 */
void Game::BigTreasure::Obj::finishTreasurePinchSmoke(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x4A0(r3)
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
 * Address:	802E05CC
 * Size:	0000D8
 */
void Game::BigTreasure::Obj::createDropTreasureEffect(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  rlwinm    r0,r4,2,0,29
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  add       r4, r31, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x3C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x8(r1)
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f1, 0xC(r1)
	  lis       r4, 0x804B
	  lfs       f0, 0x10(r1)
	  lis       r3, 0x804D
	  subi      r4, r4, 0x5814
	  li        r6, 0x268
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x32CC
	  addi      r3, r1, 0x14
	  stw       r4, 0x20(r1)
	  addi      r4, r1, 0x20
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0xCE924
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x594F
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E06A4
 * Size:	0000F0
 */
void Game::BigTreasure::Obj::createAppearBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r3, 0x4B0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r30, 0
	  mr        r31, r29

	.loc_0x3C:
	  lwz       r0, 0x3C4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  lwz       r3, 0x4B4(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x60:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x3C
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x5814
	  lis       r4, 0x804E
	  stw       r0, 0x14(r1)
	  lis       r3, 0x804D
	  subi      r8, r5, 0x5808
	  addi      r7, r4, 0x6A78
	  lfs       f0, 0x18C(r29)
	  addi      r0, r3, 0x32B8
	  li        r6, 0x26C
	  li        r5, 0
	  stfs      f0, 0x18(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x14
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x194(r29)
	  stw       r8, 0x8(r1)
	  stw       r7, 0x8(r1)
	  stfs      f0, 0x20(r1)
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0xCE810
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
 * Address:	802E0794
 * Size:	000060
 */
void Game::BigTreasure::Obj::createAppearLegEffect(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mulli     r0, r4, 0xC
	  stw       r31, 0xC(r1)
	  add       r31, r3, r0
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x20:
	  lwz       r3, 0x4C4(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x3
	  blt+      .loc_0x20
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
 * Address:	802E07F4
 * Size:	00021C
 */
void Game::BigTreasure::Obj::createDeadBombLegEffect(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0xD4(r1)
	  stmw      r23, 0xAC(r1)
	  mr        r29, r3
	  bne-      .loc_0x114
	  mulli     r0, r4, 0xC
	  lis       r8, 0x8051
	  lis       r7, 0x804B
	  lis       r6, 0x804D
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  add       r30, r29, r0
	  addi      r31, r8, 0x41E4
	  subi      r24, r7, 0x5814
	  addi      r28, r6, 0xEA4
	  subi      r27, r5, 0x5808
	  addi      r26, r4, 0x6A78
	  subi      r25, r3, 0x5EC8
	  li        r23, 0

	.loc_0x58:
	  lwz       r11, 0x304(r30)
	  li        r5, 0x262
	  lwz       r10, 0x308(r30)
	  li        r0, 0
	  lwz       r9, 0x30C(r30)
	  addi      r3, r1, 0x44
	  lwz       r8, 0x2F8(r29)
	  addi      r4, r1, 0x78
	  lwz       r7, 0x2FC(r29)
	  lwz       r6, 0x300(r29)
	  stw       r11, 0x20(r1)
	  lfs       f8, 0x0(r31)
	  stw       r10, 0x24(r1)
	  lfs       f7, 0x4(r31)
	  stw       r9, 0x28(r1)
	  lfs       f6, 0x8(r31)
	  stw       r8, 0x2C(r1)
	  lfs       f2, 0x20(r1)
	  stw       r7, 0x30(r1)
	  lfs       f5, 0x2C(r1)
	  stw       r6, 0x34(r1)
	  lfs       f4, 0x30(r1)
	  stw       r27, 0x44(r1)
	  lfs       f3, 0x34(r1)
	  stw       r24, 0x78(r1)
	  lfs       f1, 0x24(r1)
	  stw       r26, 0x44(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f8, 0x7C(r1)
	  stfs      f7, 0x80(r1)
	  stfs      f6, 0x84(r1)
	  stw       r28, 0x78(r1)
	  stfs      f5, 0x88(r1)
	  stfs      f4, 0x8C(r1)
	  stfs      f3, 0x90(r1)
	  stfs      f2, 0x94(r1)
	  stfs      f1, 0x98(r1)
	  stfs      f0, 0x9C(r1)
	  sth       r5, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  stw       r25, 0x44(r1)
	  bl        0x10AE90
	  addi      r23, r23, 0x1
	  addi      r30, r30, 0x30
	  cmpwi     r23, 0x4
	  blt+      .loc_0x58
	  b         .loc_0x208

	.loc_0x114:
	  mulli     r0, r4, 0xC
	  lis       r8, 0x8051
	  lis       r7, 0x804B
	  lis       r6, 0x804D
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  add       r30, r29, r0
	  addi      r31, r8, 0x41E4
	  subi      r25, r7, 0x5814
	  addi      r26, r6, 0xEA4
	  subi      r27, r5, 0x5808
	  addi      r28, r4, 0x6A78
	  subi      r29, r3, 0x5EC8
	  li        r23, 0

	.loc_0x150:
	  lwz       r11, 0x304(r30)
	  li        r5, 0x262
	  lwz       r10, 0x308(r30)
	  li        r0, 0
	  lwz       r9, 0x30C(r30)
	  addi      r3, r1, 0x38
	  lwz       r8, 0x2F8(r30)
	  addi      r4, r1, 0x50
	  lwz       r7, 0x2FC(r30)
	  lwz       r6, 0x300(r30)
	  stw       r11, 0x8(r1)
	  lfs       f8, 0x0(r31)
	  stw       r10, 0xC(r1)
	  lfs       f7, 0x4(r31)
	  stw       r9, 0x10(r1)
	  lfs       f6, 0x8(r31)
	  stw       r8, 0x14(r1)
	  lfs       f2, 0x8(r1)
	  stw       r7, 0x18(r1)
	  lfs       f5, 0x14(r1)
	  stw       r6, 0x1C(r1)
	  lfs       f4, 0x18(r1)
	  stw       r27, 0x38(r1)
	  lfs       f3, 0x1C(r1)
	  stw       r25, 0x50(r1)
	  lfs       f1, 0xC(r1)
	  stw       r28, 0x38(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f8, 0x54(r1)
	  stfs      f7, 0x58(r1)
	  stfs      f6, 0x5C(r1)
	  stw       r26, 0x50(r1)
	  stfs      f5, 0x60(r1)
	  stfs      f4, 0x64(r1)
	  stfs      f3, 0x68(r1)
	  stfs      f2, 0x6C(r1)
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  sth       r5, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  stw       r29, 0x38(r1)
	  bl        0x10AD98
	  addi      r23, r23, 0x1
	  addi      r30, r30, 0x30
	  cmpwi     r23, 0x4
	  blt+      .loc_0x150

	.loc_0x208:
	  lmw       r23, 0xAC(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E0A10
 * Size:	000090
 */
void Game::BigTreasure::Obj::createDeadBombBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  subi      r4, r2, 0x1714
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x15E5C0
	  bl        0x148E78
	  lis       r4, 0x804B
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  subi      r4, r4, 0x5808
	  lfs       f0, 0xC(r3)
	  lis       r3, 0x804E
	  addi      r0, r3, 0x6A78
	  lis       r5, 0x804B
	  stw       r4, 0x8(r1)
	  lis       r3, 0x804D
	  subi      r4, r5, 0x5814
	  li        r6, 0x261
	  li        r5, 0
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x32A4
	  addi      r3, r1, 0x8
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x14
	  stfs      f0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0xCE4F8
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E0AA0
 * Size:	000060
 */
void Game::BigTreasure::Obj::startDeadBubbleLegEffect(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  stw       r31, 0xC(r1)
	  add       r31, r3, r0
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x20:
	  lwz       r3, 0x4F4(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r30, 0x4
	  blt+      .loc_0x20
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
 * Address:	802E0B00
 * Size:	00005C
 */
void Game::BigTreasure::Obj::finishDeadBubbleLegEffect(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  stw       r31, 0xC(r1)
	  add       r31, r3, r0
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x20:
	  lwz       r3, 0x4F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r30, 0x4
	  blt+      .loc_0x20
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
 * Address:	802E0B5C
 * Size:	000034
 */
void Game::BigTreasure::Obj::startDeadBubbleBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x534(r3)
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
 * Address:	802E0B90
 * Size:	000030
 */
void Game::BigTreasure::Obj::finishDeadBubbleBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x534(r3)
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
 * Address:	802E0BC0
 * Size:	000034
 */
void Game::BigTreasure::Obj::startDeadBubbleMouthEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x538(r3)
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
 * Address:	802E0BF4
 * Size:	000030
 */
void Game::BigTreasure::Obj::finishDeadBubbleMouthEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x538(r3)
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
 * Address:	802E0C24
 * Size:	0000A0
 */
void Game::BigTreasure::Obj::createChangeMaterialEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x57C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r29, 0
	  mr        r30, r28

	.loc_0x40:
	  li        r28, 0
	  mr        r31, r30

	.loc_0x48:
	  lwz       r3, 0x53C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x48
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x10
	  cmpwi     r29, 0x4
	  blt+      .loc_0x40
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
 * Address:	802E0CC4
 * Size:	0000B8
 */
void Game::BigTreasure::Obj::createDeadBombFootEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r7, 0x804B
	  lis       r6, 0x804B
	  stw       r0, 0x54(r1)
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stmw      r22, 0x28(r1)
	  mr        r24, r3
	  subi      r26, r7, 0x5814
	  subi      r27, r6, 0x5808
	  addi      r28, r5, 0x6A78
	  subi      r31, r4, 0x27DC
	  li        r23, 0

	.loc_0x38:
	  mr        r25, r24
	  li        r22, 0
	  li        r29, 0x1C
	  li        r30, 0

	.loc_0x48:
	  stw       r26, 0x14(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x14
	  lfs       f0, 0x304(r25)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x308(r25)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x30C(r25)
	  stw       r27, 0x8(r1)
	  stw       r28, 0x8(r1)
	  stfs      f0, 0x20(r1)
	  sth       r29, 0xC(r1)
	  stw       r30, 0x10(r1)
	  stw       r31, 0x8(r1)
	  bl        0xCE240
	  addi      r22, r22, 0x1
	  addi      r25, r25, 0xC
	  cmpwi     r22, 0x3
	  blt+      .loc_0x48
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x30
	  cmpwi     r23, 0x4
	  blt+      .loc_0x38
	  lmw       r22, 0x28(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E0D7C
 * Size:	000034
 */
void Game::BigTreasure::Obj::startShineParticleEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x580(r3)
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
 * Address:	802E0DB0
 * Size:	000030
 */
void Game::BigTreasure::Obj::finishShineParticleEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x580(r3)
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
 * Address:	802E0DE0
 * Size:	0001C4
 */
void Game::BigTreasure::Obj::effectDrawOn()
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
	  lwz       r3, 0x480(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x490(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4A0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x1C
	  lwz       r3, 0x4B0(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  li        r30, 0
	  mr        r31, r27

	.loc_0x84:
	  lwz       r3, 0x4B4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x84
	  li        r29, 0
	  mr        r30, r27

	.loc_0xB0:
	  li        r28, 0
	  mr        r31, r30

	.loc_0xB8:
	  lwz       r3, 0x4C4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x3
	  blt+      .loc_0xB8
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0xC
	  cmpwi     r29, 0x4
	  blt+      .loc_0xB0
	  li        r28, 0
	  mr        r31, r27

	.loc_0xF4:
	  li        r29, 0
	  mr        r30, r31

	.loc_0xFC:
	  lwz       r3, 0x4F4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x4
	  blt+      .loc_0xFC
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r28, 0x4
	  blt+      .loc_0xF4
	  lwz       r3, 0x534(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x538(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  mr        r31, r27

	.loc_0x160:
	  li        r29, 0
	  mr        r30, r31

	.loc_0x168:
	  lwz       r3, 0x53C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x4
	  blt+      .loc_0x168
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r28, 0x4
	  blt+      .loc_0x160
	  lwz       r3, 0x57C(r27)
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
 * Address:	802E0FA4
 * Size:	0001C4
 */
void Game::BigTreasure::Obj::effectDrawOff()
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
	  lwz       r3, 0x480(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x490(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4A0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x1C
	  lwz       r3, 0x4B0(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  li        r30, 0
	  mr        r31, r27

	.loc_0x84:
	  lwz       r3, 0x4B4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x84
	  li        r29, 0
	  mr        r30, r27

	.loc_0xB0:
	  li        r28, 0
	  mr        r31, r30

	.loc_0xB8:
	  lwz       r3, 0x4C4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x3
	  blt+      .loc_0xB8
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0xC
	  cmpwi     r29, 0x4
	  blt+      .loc_0xB0
	  li        r28, 0
	  mr        r31, r27

	.loc_0xF4:
	  li        r29, 0
	  mr        r30, r31

	.loc_0xFC:
	  lwz       r3, 0x4F4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x4
	  blt+      .loc_0xFC
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r28, 0x4
	  blt+      .loc_0xF4
	  lwz       r3, 0x534(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x538(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  mr        r31, r27

	.loc_0x160:
	  li        r29, 0
	  mr        r30, r31

	.loc_0x168:
	  lwz       r3, 0x53C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x4
	  blt+      .loc_0x168
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r28, 0x4
	  blt+      .loc_0x160
	  lwz       r3, 0x57C(r27)
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
 * Address:	802E1168
 * Size:	00002C
 */
void Game::BigTreasure::Obj::subShadowScale()
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6514(r13)
	  lfs       f2, 0x2D8(r3)
	  lfs       f1, 0x54(r4)
	  lfs       f0, -0x1610(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x2D8(r3)
	  lfs       f1, 0x2D8(r3)
	  fcmpo     cr0, f1, f0
	  bgelr-
	  stfs      f0, 0x2D8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E1194
 * Size:	0000FC
 */
void Game::BigTreasure::Obj::startBigTreasureBootUpDemo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0xE4
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0xE4
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xE4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x17
	  bl        -0xF9DF4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x17
	  bl        -0xF9E44
	  lfs       f0, -0x1730(r2)
	  lis       r3, 0x8049
	  li        r0, 0
	  lwz       r5, -0x64AC(r13)
	  subi      r6, r3, 0x33D0
	  stw       r0, 0xC(r1)
	  mr        r3, r31
	  li        r4, 0
	  stw       r6, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x38(r1)
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x2C(r1)
	  stw       r31, 0x194(r5)
	  bl        -0x1A5810
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x8
	  bl        0x14B764
	  li        r3, 0x1
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r3, 0

	.loc_0xE8:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E1290
 * Size:	00009C
 */
void efx::TOootaParticle::~TOootaParticle()
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
	  addi      r3, r3, 0x3318
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
	  bl        -0x251660

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD258

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
 * Address:	802E132C
 * Size:	00009C
 */
void efx::TOootaChangeBody::~TOootaChangeBody()
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
	  addi      r3, r3, 0x3364
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
	  bl        -0x2516FC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD2F4

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
 * Address:	802E13C8
 * Size:	00009C
 */
void efx::TOootaDeadAwa::~TOootaDeadAwa()
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
	  addi      r3, r3, 0x33B0
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
	  bl        -0x251798

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD390

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
 * Address:	802E1464
 * Size:	00009C
 */
void efx::TOootaStartBody::~TOootaStartBody()
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
	  addi      r3, r3, 0x3418
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
	  bl        -0x251834

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD42C

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
 * Address:	802E1500
 * Size:	00009C
 */
void efx::TOootaChangeLeg::~TOootaChangeLeg()
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
	  addi      r3, r3, 0x3464
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6778
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
	  bl        -0x2518D0

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD4C8

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
 * Address:	802E159C
 * Size:	00009C
 */
void efx::TOootaStartLeg::~TOootaStartLeg()
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
	  addi      r3, r3, 0x34CC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6778
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
	  bl        -0x25196C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD564

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
 * Address:	802E1638
 * Size:	00009C
 */
void efx::TOootaStartOta::~TOootaStartOta()
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
	  addi      r3, r3, 0x3518
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
	  bl        -0x251A08

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2BD600

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
 * Address:	802E16D4
 * Size:	000004
 */
void Game::BigTreasure::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802E16D8
 * Size:	000004
 */
void Game::BigTreasure::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802E16DC
 * Size:	000008
 */
void Game::BigTreasure::Obj::getDamageCoeStoneState()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x16C8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E16E4
 * Size:	000004
 */
void Game::BigTreasure::Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	802E16E8
 * Size:	000008
 */
u32 Game::BigTreasure::Obj::getEnemyTypeID() { return 0x49; }

/*
 * --INFO--
 * Address:	802E16F0
 * Size:	00006C
 */
void Game::BigTreasure::ProperAnimator::~ProperAnimator()
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
	  addi      r0, r3, 0x38AC
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
	  bl        -0x2BD68C

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
 * Address:	802E175C
 * Size:	000028
 */
void __sinit_BigTreasure_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68A0(r13)
	  stfsu     f0, 0x3298(r3)
	  stfs      f0, -0x689C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E1784
 * Size:	000014
 */
void Game::EnemyBase::@1412 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x584
	  b         -0x1DAE78
	*/
}

/*
 * --INFO--
 * Address:	802E1798
 * Size:	000014
 */
void Game::EnemyBase::@1412 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x584
	  b         -0x1DB100
	*/
}

/*
 * --INFO--
 * Address:	802E17AC
 * Size:	000014
 */
void Game::EnemyBase::@1412 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x584
	  b         -0x1DB0F4
	*/
}

/*
 * --INFO--
 * Address:	802E17C0
 * Size:	000014
 */
void Game::EnemyBase::@1412 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x584
	  b         -0x1DAD58
	*/
}

/*
 * --INFO--
 * Address:	802E17D4
 * Size:	000014
 */
void Game::EnemyBase::@1412 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x584
	  b         -0x1DAD98
	*/
}

/*
 * --INFO--
 * Address:	802E17E8
 * Size:	000014
 */
void Game::EnemyBase::@1412 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x584
	  b         -0x1DB158
	*/
}

/*
 * --INFO--
 * Address:	802E17FC
 * Size:	000008
 */
void efx::TOootaStartOta::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1C8
	*/
}

/*
 * --INFO--
 * Address:	802E1804
 * Size:	000008
 */
void efx::TOootaStartLeg::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x26C
	*/
}

/*
 * --INFO--
 * Address:	802E180C
 * Size:	000008
 */
void efx::TOootaChangeLeg::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x310
	*/
}

/*
 * --INFO--
 * Address:	802E1814
 * Size:	000008
 */
void efx::TOootaStartBody::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x3B4
	*/
}

/*
 * --INFO--
 * Address:	802E181C
 * Size:	000008
 */
void efx::TOootaDeadAwa::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x458
	*/
}

/*
 * --INFO--
 * Address:	802E1824
 * Size:	000008
 */
void efx::TOootaChangeBody::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x4FC
	*/
}

/*
 * --INFO--
 * Address:	802E182C
 * Size:	000008
 */
void efx::TOootaParticle::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x5A0
	*/
}
