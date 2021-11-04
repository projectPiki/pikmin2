#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802EBFF8
 * Size:	000148
 */
void Game::MiniHoudai::Obj::__ct(void)
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
	  addi      r0, r31, 0x308
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x308(r31)
	  stw       r0, 0x30C(r31)
	  stw       r0, 0x310(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1EACA0
	  lis       r3, 0x804D
	  addi      r0, r31, 0x308
	  addi      r5, r3, 0x492C
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
	  bl        -0x1C1D24
	  li        r3, 0x2C
	  bl        -0x2C81DC
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  bl        -0x1C4718
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  addi      r0, r3, 0x4728
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
	  bl        -0x2C8230
	  mr.       r4, r3
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x4704
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x108:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1100
	  mr        r3, r31
	  bl        0x131C
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
 * Address:	802EC140
 * Size:	000004
 */
void Game::MiniHoudai::Obj::setInitialSetting((Game::EnemyInitialParamBase*)) {
}

/*
 * --INFO--
 * Address:	802EC144
 * Size:	0000C8
 */
void Game::MiniHoudai::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1EA700
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x61
	  bne-      .loc_0x58
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)

	.loc_0x58:
	  lfs       f1, -0x13D8(r2)
	  li        r0, -0x1
	  lfs       f0, -0x13D4(r2)
	  mr        r3, r31
	  stfs      f1, 0x2C8(r31)
	  stfs      f0, 0x2CC(r31)
	  stfs      f0, 0x2D0(r31)
	  stw       r0, 0x2D4(r31)
	  bl        0x7C0
	  mr        r3, r31
	  bl        0x7C8
	  mr        r3, r31
	  bl        0x1094
	  mr        r3, r31
	  bl        0x13A0
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x7
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
 * Address:	802EC20C
 * Size:	00004C
 */
void Game::MiniHoudai::Obj::onKill((Game::CreatureKillArg*))
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
	  bl        0x1584
	  mr        r3, r30
	  bl        0x11E8
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1EA354
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
 * Address:	802EC258
 * Size:	000054
 */
void Game::MiniHoudai::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x69C
	  mr        r3, r31
	  bl        0xA94
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1038
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC2AC
 * Size:	000034
 */
void Game::MiniHoudai::Obj::doUpdateCommon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E93AC
	  mr        r3, r31
	  bl        0x1028
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC2E0
 * Size:	00003C
 */
void Game::MiniHoudai::Obj::doAnimationCullingOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xFB4
	  mr        r3, r31
	  bl        -0x1E927C
	  mr        r3, r31
	  bl        0xF80
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC31C
 * Size:	000004
 */
void Game::MiniHoudai::Obj::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	802EC320
 * Size:	000020
 */
void Game::MiniHoudai::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1E64C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC340
 * Size:	00004C
 */
void Game::MiniHoudai::Obj::setFSM((Game::MiniHoudai::FSM*))
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
 * Address:	802EC38C
 * Size:	0000E0
 */
void Game::MiniHoudai::Obj::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r2, 0x13D0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  bl        0x152C34
	  bl        0x13D4EC
	  lfs       f4, 0x2C(r3)
	  lfs       f3, 0x1C(r3)
	  lfs       f1, 0xC(r3)
	  lfs       f0, -0x13C8(r2)
	  stfs      f1, 0x0(r31)
	  lfs       f2, -0x13C4(r2)
	  stfs      f3, 0x4(r31)
	  stfs      f4, 0x8(r31)
	  lfs       f1, 0x4(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  lfs       f1, 0x190(r30)
	  lfs       f0, 0x4(r31)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x70
	  stfs      f1, 0x4(r31)

	.loc_0x70:
	  lfs       f1, -0x13D4(r2)
	  mr        r3, r30
	  lfs       f0, -0x13C0(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  bl        -0x1E5020
	  cmpwi     r3, 0x1
	  bgt-      .loc_0xA0
	  lfs       f0, -0x13BC(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0xC0

	.loc_0xA0:
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB8
	  lfs       f0, -0x13B8(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0xC0

	.loc_0xB8:
	  lfs       f0, -0x13B4(r2)
	  stfs      f0, 0x18(r31)

	.loc_0xC0:
	  lfs       f0, -0x13B0(r2)
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
 * Address:	802EC46C
 * Size:	000044
 */
void Game::MiniHoudai::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x20
	  lfs       f2, -0x13C0(r2)
	  bl        -0x1E6458
	  b         .loc_0x30

	.loc_0x20:
	  lfs       f0, -0x13AC(r2)
	  lfs       f2, -0x13C0(r2)
	  fmuls     f1, f1, f0
	  bl        -0x1E646C

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC4B0
 * Size:	000034
 */
void Game::MiniHoudai::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E95D0
	  mr        r3, r31
	  bl        0x12E0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC4E4
 * Size:	000020
 */
void Game::MiniHoudai::Obj::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1E95E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC504
 * Size:	000034
 */
void Game::MiniHoudai::Obj::doStartEarthquakeFitState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E4BB4
	  mr        r3, r31
	  bl        0x128C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC538
 * Size:	000020
 */
void Game::MiniHoudai::Obj::doFinishEarthquakeFitState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1E4BDC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC558
 * Size:	000034
 */
void Game::MiniHoudai::Obj::doStartWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E4BD4
	  mr        r3, r31
	  bl        0x14C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC58C
 * Size:	000034
 */
void Game::MiniHoudai::Obj::doFinishWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1E4BD8
	  mr        r3, r31
	  bl        0x143C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC5C0
 * Size:	000028
 */
void Game::MiniHoudai::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x6
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x1E75D0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC5E8
 * Size:	000020
 */
void Game::MiniHoudai::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x1448
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC608
 * Size:	000020
 */
void Game::MiniHoudai::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x13D0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC628
 * Size:	000064
 */
void Game::MiniHoudai::Obj::initWalkSmokeEffect(void)
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
	  bl        -0x1C22E0
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x13C4(r2)
	  li        r4, 0
	  subi      r6, r2, 0x13A8
	  bl        -0x1C207C
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2C0
	  lfs       f1, -0x13C4(r2)
	  li        r4, 0x1
	  subi      r6, r2, 0x13A0
	  bl        -0x1C2094
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC68C
 * Size:	000008
 */
void Game::MiniHoudai::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC694
 * Size:	000014
 */
void Game::MiniHoudai::Obj::doBecomeCarcass(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x13D4(r2)
	  stfs      f0, 0x2C8(r3)
	  stfs      f0, 0x200(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC6A8
 * Size:	0001FC
 */
void Game::MiniHoudai::Obj::doUpdateCarcass(void)
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
	  lwz       r3, 0x17C(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x81C(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x9C
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1D8
	  lwz       r4, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x81C(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D8
	  lfs       f1, -0x13D4(r2)
	  mr        r4, r31
	  bl        -0x1D1CA8
	  b         .loc_0x1D8

	.loc_0x9C:
	  lfs       f2, 0x200(r31)
	  lfs       f1, 0x204(r31)
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x1D8
	  lfs       f0, 0x844(r3)
	  lwz       r3, -0x6514(r13)
	  fdivs     f1, f1, f0
	  lfs       f0, 0x54(r3)
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x200(r31)
	  lfs       f1, 0x200(r31)
	  lfs       f0, 0x204(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D8
	  lwz       r3, 0x17C(r31)
	  li        r4, 0
	  lwz       r3, 0x4(r3)
	  bl        -0x1B169C
	  lfs       f31, 0x140(r31)
	  addi      r3, r1, 0x8
	  lfs       f30, 0x160(r31)
	  bl        -0x1BDB78
	  lfs       f0, 0x18C(r31)
	  lis       r3, 0x8051
	  fmr       f1, f31
	  subi      r3, r3, 0x2E20
	  stfs      f0, 0x8(r1)
	  fmr       f2, f30
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x10(r1)
	  bl        -0x2B76C0
	  stfs      f1, 0x14(r1)
	  mr        r3, r31
	  lfs       f0, 0x2AC(r31)
	  stfs      f0, 0x34(r1)
	  lbz       r4, 0x1F3(r31)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x38(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6E20(r13)
	  addi      r5, r1, 0x8
	  bl        -0x1DF34C
	  cmplwi    r3, 0
	  beq-      .loc_0x1D8
	  li        r4, 0
	  bl        -0x1B1854
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x19C:
	  lwz       r0, -0x6DF8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D8
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x81C(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D8
	  lfs       f0, -0x13D4(r2)
	  mr        r4, r31
	  stfs      f0, 0x2C8(r31)
	  stfs      f0, 0x200(r31)
	  lwz       r3, -0x6DF8(r13)
	  bl        -0x1D1D04

	.loc_0x1D8:
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
 * Address:	802EC8A4
 * Size:	000064
 */
void Game::MiniHoudai::Obj::doGetLifeGaugeParam((Game::LifeGaugeParam&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x0(r4)
	  lwz       r5, 0x17C(r3)
	  lwz       r0, 0x4(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C
	  lfs       f1, -0x13B4(r2)
	  lfs       f0, 0x190(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r4)
	  b         .loc_0x40

	.loc_0x2C:
	  lwz       r5, 0xC0(r3)
	  lfs       f1, 0x190(r3)
	  lfs       f0, 0x12C(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r4)

	.loc_0x40:
	  lfs       f1, 0x194(r3)
	  lfs       f0, -0x1398(r2)
	  stfs      f1, 0x8(r4)
	  lfs       f2, 0x200(r3)
	  lfs       f1, 0x204(r3)
	  fdivs     f1, f2, f1
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC908
 * Size:	000050
 */
void Game::MiniHoudai::Obj::updateCaution(void)
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
	  lfs       f0, -0x13D4(r2)
	  stfs      f0, 0x2C8(r3)

	.loc_0x28:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2C8(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bgelr-
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC958
 * Size:	000024
 */
void Game::MiniHoudai::Obj::getViewAngle(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2C8(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C
	  lfs       f1, -0x1394(r2)
	  blr

	.loc_0x1C:
	  lfs       f1, 0x424(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC97C
 * Size:	000010
 */
void Game::MiniHoudai::Obj::resetWayPoint(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x2F0(r3)
	  stw       r0, 0x2F4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EC98C
 * Size:	0000B0
 */
void Game::MiniHoudai::Obj::setNearestWayPoint(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1398(r2)
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  addi      r4, r1, 0x8
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F0(r3)
	  stw       r3, 0x2F4(r31)
	  lfs       f1, 0x18C(r31)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stb       r0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x8(r3)
	  bl        -0x179A1C
	  stw       r3, 0x2F0(r31)
	  lwz       r3, 0x2F0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2E4(r31)
	  stfs      f1, 0x2E8(r31)
	  stfs      f2, 0x2EC(r31)
	  b         .loc_0x9C

	.loc_0x84:
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2E4(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2E8(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2EC(r31)

	.loc_0x9C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ECA3C
 * Size:	000260
 */
void Game::MiniHoudai::Obj::setLinkWayPoint(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  stw       r28, 0x70(r1)
	  lwz       r4, 0x2F0(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x1B8
	  lwz       r3, 0x2F4(r31)
	  li        r29, 0
	  li        r28, -0x1
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lha       r28, 0x36(r3)

	.loc_0x44:
	  addi      r3, r1, 0x8
	  li        r5, 0x1
	  bl        -0x17A568
	  addi      r3, r1, 0x8
	  bl        -0x17A55C
	  addi      r30, r1, 0x2C
	  b         .loc_0xB8

	.loc_0x60:
	  addi      r3, r1, 0x8
	  bl        -0x17A4DC
	  extsh     r0, r3
	  cmpw      r0, r28
	  beq-      .loc_0xB0
	  lwz       r5, -0x6CF8(r13)
	  mr        r4, r3
	  lwz       r3, 0x8(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xB0
	  stw       r3, 0x0(r30)
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  addi      r3, r1, 0x8
	  bl        -0x17A594

	.loc_0xB8:
	  addi      r3, r1, 0x8
	  bl        -0x17A570
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  cmpwi     r29, 0
	  beq-      .loc_0x154
	  lwz       r0, 0x2F0(r31)
	  stw       r0, 0x2F4(r31)
	  bl        -0x223574
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x54(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f2, -0x1388(r2)
	  addi      r3, r1, 0x2C
	  stw       r4, 0x50(r1)
	  lfs       f0, -0x1390(r2)
	  lfd       f1, 0x50(r1)
	  stw       r0, 0x5C(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x58(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  stw       r0, 0x2F0(r31)
	  lwz       r3, 0x2F0(r31)
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2E4(r31)
	  stfs      f1, 0x2E8(r31)
	  stfs      f2, 0x2EC(r31)
	  b         .loc_0x240

	.loc_0x154:
	  cmpwi     r28, 0
	  blt-      .loc_0x1B8
	  lwz       r3, -0x6CF8(r13)
	  extsh     r4, r28
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x1B8
	  lbz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x1B8
	  lwz       r0, 0x2F0(r31)
	  stw       r0, 0x2F4(r31)
	  stw       r3, 0x2F0(r31)
	  lwz       r3, 0x2F0(r31)
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2E4(r31)
	  stfs      f1, 0x2E8(r31)
	  stfs      f2, 0x2EC(r31)
	  b         .loc_0x240

	.loc_0x1B8:
	  lwz       r3, 0x2F0(r31)
	  li        r0, 0
	  lfs       f0, -0x1398(r2)
	  addi      r4, r1, 0x14
	  stw       r3, 0x2F4(r31)
	  lfs       f1, 0x18C(r31)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x14(r1)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  stb       r0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r3, 0x8(r3)
	  bl        -0x179C70
	  stw       r3, 0x2F0(r31)
	  lwz       r3, 0x2F0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x228
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2E4(r31)
	  stfs      f1, 0x2E8(r31)
	  stfs      f2, 0x2EC(r31)
	  b         .loc_0x240

	.loc_0x228:
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2E4(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2E8(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2EC(r31)

	.loc_0x240:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r28, 0x70(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ECC9C
 * Size:	00006C
 */
void Game::MiniHoudai::Obj::getSearchedTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2C8(r3)
	  lfs       f0, 0x62C(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x30
	  lfs       f1, -0x1394(r2)
	  b         .loc_0x34

	.loc_0x30:
	  lfs       f1, 0x424(r4)

	.loc_0x34:
	  lfs       f2, 0x3D4(r4)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  bl        -0x1D9C90
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lfs       f0, -0x13D4(r2)
	  stfs      f0, 0x2C8(r31)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ECD08
 * Size:	000128
 */
void Game::MiniHoudai::Obj::updateTargetDistance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lfs       f0, 0x58(r3)
	  b         .loc_0x30

	.loc_0x28:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)

	.loc_0x30:
	  lfs       f2, 0x194(r31)
	  fmuls     f0, f0, f0
	  lfs       f1, 0x2EC(r31)
	  lfs       f3, 0x18C(r31)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x2E4(r31)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x6C
	  mr        r3, r31
	  bl        -0x32C
	  lfs       f0, -0x13D4(r2)
	  stfs      f0, 0x2D0(r31)

	.loc_0x6C:
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, -0x13C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  lfs       f1, -0x13D4(r2)
	  li        r0, 0
	  lfs       f0, -0x1398(r2)
	  addi      r4, r1, 0x8
	  stfs      f1, 0x2D0(r31)
	  lwz       r3, 0x2F0(r31)
	  stw       r3, 0x2F4(r31)
	  lfs       f1, 0x18C(r31)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stb       r0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x8(r3)
	  bl        -0x179E08
	  stw       r3, 0x2F0(r31)
	  lwz       r3, 0x2F0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lfs       f1, 0x50(r3)
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  stfs      f0, 0x2E4(r31)
	  stfs      f1, 0x2E8(r31)
	  stfs      f2, 0x2EC(r31)
	  b         .loc_0x10C

	.loc_0xF4:
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x2E4(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x2E8(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x2EC(r31)

	.loc_0x10C:
	  mr        r3, r31
	  bl        .loc_0x128

	.loc_0x114:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x128:
	*/
}

/*
 * --INFO--
 * Address:	802ECE30
 * Size:	0000BC
 */
void Game::MiniHoudai::Obj::updateHomePosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f0, -0x13D4(r2)
	  lfs       f5, 0x1FC(r3)
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x1C
	  fneg      f1, f5

	.loc_0x1C:
	  lfs       f3, -0x1380(r2)
	  lis       r5, 0x8050
	  lfs       f0, -0x13D4(r2)
	  addi      r5, r5, 0x71A0
	  fmuls     f2, f1, f3
	  lwz       r4, 0xC0(r3)
	  fcmpo     cr0, f5, f0
	  lfs       f1, 0x194(r3)
	  lfs       f6, 0x384(r4)
	  fctiwz    f0, f2
	  lfs       f2, 0x190(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r5, r0
	  lfs       f0, 0x4(r4)
	  fmadds    f4, f0, f6, f1
	  bge-      .loc_0x88
	  lfs       f0, -0x137C(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f1, f0
	  b         .loc_0xA0

	.loc_0x88:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r5, r0

	.loc_0xA0:
	  lfs       f0, 0x18C(r3)
	  fmadds    f0, f1, f6, f0
	  stfs      f0, 0x198(r3)
	  stfs      f2, 0x19C(r3)
	  stfs      f4, 0x1A0(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ECEEC
 * Size:	00032C
 */
void Game::MiniHoudai::Obj::isAttackableTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stfd      f31, 0x120(r1)
	  psq_st    f31,0x128(r1),0,0
	  stfd      f30, 0x110(r1)
	  psq_st    f30,0x118(r1),0,0
	  stfd      f29, 0x100(r1)
	  psq_st    f29,0x108(r1),0,0
	  stfd      f28, 0xF0(r1)
	  psq_st    f28,0xF8(r1),0,0
	  stfd      f27, 0xE0(r1)
	  psq_st    f27,0xE8(r1),0,0
	  stfd      f26, 0xD0(r1)
	  psq_st    f26,0xD8(r1),0,0
	  stw       r31, 0xCC(r1)
	  stw       r30, 0xC8(r1)
	  stw       r29, 0xC4(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x20
	  lwz       r4, 0x2F8(r31)
	  bl        0x23A8
	  lfs       f3, 0x1FC(r31)
	  lfs       f0, -0x13D4(r2)
	  fmr       f1, f3
	  lfs       f28, 0x20(r1)
	  fcmpo     cr0, f3, f0
	  lfs       f27, 0x24(r1)
	  lfs       f26, 0x28(r1)
	  bge-      .loc_0x7C
	  fneg      f1, f3

	.loc_0x7C:
	  lfs       f2, -0x1380(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x13D4(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0xA8(r1)
	  lwz       r0, 0xAC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f30, 0x4(r3)
	  bge-      .loc_0xD4
	  lfs       f0, -0x137C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xB0(r1)
	  lwz       r0, 0xB4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f29, f0
	  b         .loc_0xEC

	.loc_0xD4:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0xB8(r1)
	  lwz       r0, 0xBC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f29, r4, r0

	.loc_0xEC:
	  lwz       r4, 0xC0(r31)
	  fneg      f31, f30
	  lfs       f0, -0x1378(r2)
	  addi      r3, r1, 0x3C
	  lfs       f2, 0x44C(r4)
	  addi      r4, r1, 0x2C
	  lfs       f1, -0x1374(r2)
	  fmuls     f5, f0, f2
	  lfs       f3, 0x194(r31)
	  lfs       f0, 0x18C(r31)
	  fmuls     f4, f1, f2
	  lfs       f1, 0x190(r31)
	  lfs       f2, -0x13D4(r2)
	  fmadds    f3, f30, f5, f3
	  stfs      f4, 0x38(r1)
	  fmadds    f1, f2, f5, f1
	  fmadds    f0, f29, f5, f0
	  stfs      f3, 0x34(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  bl        -0xBEC88
	  li        r0, 0x1
	  addi      r3, r1, 0x5C
	  stb       r0, 0x58(r1)
	  addi      r4, r1, 0x3C
	  bl        -0xBEC5C
	  addi      r3, r1, 0x5C
	  bl        -0xBEBE8
	  b         .loc_0x2CC

	.loc_0x160:
	  addi      r3, r1, 0x5C
	  bl        -0xBEB0C
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r29, r3
	  bne-      .loc_0x1E0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E0
	  li        r29, 0x1

	.loc_0x1E0:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2C4
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x18(r1)
	  lfs       f3, 0x14(r1)
	  fsubs     f2, f2, f27
	  lfs       f4, 0x1C(r1)
	  lfs       f0, -0x13D4(r2)
	  fsubs     f3, f3, f28
	  fsubs     f4, f4, f26
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x22C
	  fmr       f1, f2
	  b         .loc_0x230

	.loc_0x22C:
	  fneg      f1, f2

	.loc_0x230:
	  lfs       f0, -0x1370(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2C4
	  lfs       f1, -0x13D4(r2)
	  fmuls     f5, f1, f2
	  fmadds    f0, f31, f3, f5
	  fmadds    f2, f29, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x258
	  b         .loc_0x25C

	.loc_0x258:
	  fneg      f2, f2

	.loc_0x25C:
	  lfs       f0, -0x136C(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x2C4
	  fmadds    f1, f29, f3, f5
	  lfs       f0, -0x13C0(r2)
	  fmadds    f1, f30, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2C4
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x44C(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2C4
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  li        r3, 0x1
	  stfs      f0, 0x2D8(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x2DC(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x2E0(r31)
	  b         .loc_0x2E0

	.loc_0x2C4:
	  addi      r3, r1, 0x5C
	  bl        -0xBECB4

	.loc_0x2CC:
	  addi      r3, r1, 0x5C
	  bl        -0xBEC88
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x160
	  li        r3, 0

	.loc_0x2E0:
	  psq_l     f31,0x128(r1),0,0
	  lfd       f31, 0x120(r1)
	  psq_l     f30,0x118(r1),0,0
	  lfd       f30, 0x110(r1)
	  psq_l     f29,0x108(r1),0,0
	  lfd       f29, 0x100(r1)
	  psq_l     f28,0xF8(r1),0,0
	  lfd       f28, 0xF0(r1)
	  psq_l     f27,0xE8(r1),0,0
	  lfd       f27, 0xE0(r1)
	  psq_l     f26,0xD8(r1),0,0
	  lfd       f26, 0xD0(r1)
	  lwz       r31, 0xCC(r1)
	  lwz       r30, 0xC8(r1)
	  lwz       r0, 0x134(r1)
	  lwz       r29, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED218
 * Size:	000048
 */
void Game::MiniHoudai::Obj::createShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x34
	  bl        -0x2C938C
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x17B0
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x2F8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED260
 * Size:	000024
 */
void Game::MiniHoudai::Obj::setupShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x1960
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void setShotGunTarget__Q34Game10MiniHoudai3ObjFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802ED284
 * Size:	000024
 */
void Game::MiniHoudai::Obj::resetShotGunCallBack(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x19A8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2A8
 * Size:	000024
 */
void Game::MiniHoudai::Obj::setShotGunCallBack(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x1990
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2CC
 * Size:	000024
 */
void Game::MiniHoudai::Obj::doUpdateShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x1EA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2F0
 * Size:	000024
 */
void Game::MiniHoudai::Obj::doUpdateCommonShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x1EF4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED314
 * Size:	000024
 */
void Game::MiniHoudai::Obj::startShotGunRotation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x192C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED338
 * Size:	000024
 */
void Game::MiniHoudai::Obj::finishShotGunRotation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x192C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED35C
 * Size:	000024
 */
void Game::MiniHoudai::Obj::isShotGunRotation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x191C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED380
 * Size:	000024
 */
void Game::MiniHoudai::Obj::isShotGunLockOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x1900
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3A4
 * Size:	000024
 */
void Game::MiniHoudai::Obj::isFinishShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x18E4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3C8
 * Size:	000024
 */
void Game::MiniHoudai::Obj::emitShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x18E4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3EC
 * Size:	00002C
 */
void Game::MiniHoudai::Obj::setShotGunTargetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x2D8
	  lwz       r3, 0x2F8(r3)
	  bl        0x189C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Game::MiniHoudai::Obj::shotGunDoDebugDraw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802ED418
 * Size:	000024
 */
void Game::MiniHoudai::Obj::forceFinishShotGun(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F8(r3)
	  bl        0x1E44
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED43C
 * Size:	000138
 */
void Game::MiniHoudai::Obj::createEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x2C95B0
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
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x48E0
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x230
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
	  stw       r3, 0x300(r31)
	  li        r3, 0x14
	  bl        -0x2C9638
	  cmplwi    r3, 0
	  beq-      .loc_0x120
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
	  addi      r4, r4, 0x4894
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x231
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

	.loc_0x120:
	  stw       r3, 0x304(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED574
 * Size:	000058
 */
void Game::MiniHoudai::Obj::setupEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x1368
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x151A54
	  bl        0x13C30C
	  lwz       r5, 0x300(r31)
	  subi      r4, r2, 0x1360
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x174(r31)
	  bl        0x151A3C
	  bl        0x13C2F4
	  lwz       r4, 0x304(r31)
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
 * Address:	802ED5CC
 * Size:	0000A0
 */
void Game::MiniHoudai::Obj::createSmokeSmallEffect((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x2C
	  lwz       r3, 0x174(r3)
	  subi      r4, r2, 0x1358
	  bl        0x1519FC
	  bl        0x13C2B4
	  mr        r7, r3
	  b         .loc_0x40

	.loc_0x2C:
	  lwz       r3, 0x174(r3)
	  subi      r4, r2, 0x1350
	  bl        0x1519E4
	  bl        0x13C29C
	  mr        r7, r3

	.loc_0x40:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804D
	  li        r6, 0x23E
	  stw       r0, 0x8(r1)
	  addi      r4, r4, 0x6A14
	  li        r5, 0
	  addi      r0, r3, 0x4880
	  stw       r4, 0x8(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r7, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0xC1C5C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED66C
 * Size:	0000E8
 */
void Game::MiniHoudai::Obj::createSmokeLargeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  subi      r4, r2, 0x1358
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x15195C
	  bl        0x13C214
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804D
	  li        r7, 0x23D
	  stw       r0, 0x18(r1)
	  addi      r5, r5, 0x6A14
	  li        r6, 0
	  addi      r0, r4, 0x486C
	  stw       r5, 0x18(r1)
	  li        r4, 0
	  stw       r3, 0x24(r1)
	  addi      r3, r1, 0x18
	  sth       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0xC1BD8
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x1350
	  bl        0x1518FC
	  bl        0x13C1B4
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804D
	  li        r7, 0x23D
	  stw       r0, 0x8(r1)
	  addi      r5, r5, 0x6A14
	  li        r6, 0
	  addi      r0, r4, 0x486C
	  stw       r5, 0x8(r1)
	  li        r4, 0
	  stw       r3, 0x14(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0xC1B78
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED754
 * Size:	000024
 */
void Game::MiniHoudai::Obj::createDownEffect((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r3, 0x18C
	  stw       r0, 0x14(r1)
	  bl        -0x1E9C14
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802ED778
 * Size:	000034
 */
void Game::MiniHoudai::Obj::startChargeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x300(r3)
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
 * Address:	802ED7AC
 * Size:	000030
 */
void Game::MiniHoudai::Obj::finishChargeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x300(r3)
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
 * Address:	802ED7DC
 * Size:	000034
 */
void Game::MiniHoudai::Obj::createDeadLightEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x304(r3)
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
 * Address:	802ED810
 * Size:	0001D4
 */
void Game::MiniHoudai::Obj::createDeadBombEmitEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  subi      r4, r2, 0x1368
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  bl        0x1517B4
	  bl        0x13C06C
	  lis       r4, 0x804B
	  li        r5, 0
	  subi      r0, r4, 0x5808
	  mr        r31, r3
	  lis       r3, 0x804E
	  stw       r0, 0x40(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804E
	  stw       r0, 0x40(r1)
	  addi      r0, r3, 0x69EC
	  lis       r3, 0x804D
	  li        r4, 0x23A
	  stw       r0, 0x40(r1)
	  addi      r0, r3, 0x4858
	  li        r7, 0x23B
	  li        r6, 0x23C
	  sth       r4, 0x44(r1)
	  addi      r3, r1, 0x40
	  li        r4, 0
	  sth       r7, 0x46(r1)
	  sth       r6, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r31, 0x58(r1)
	  stw       r0, 0x40(r1)
	  bl        0xC1C14
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804D
	  li        r6, 0x232
	  stw       r0, 0x8(r1)
	  addi      r4, r4, 0x6A14
	  li        r5, 0
	  addi      r0, r3, 0x4844
	  stw       r4, 0x8(r1)
	  addi      r3, r1, 0x8
	  li        r4, 0
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r31, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0xC19C4
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x1358
	  bl        0x1516E8
	  bl        0x13BFA0
	  lis       r4, 0x804B
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x2C(r1)
	  addi      r0, r4, 0x6A64
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x2C(r1)
	  addi      r0, r5, 0x6A00
	  li        r7, 0x233
	  li        r5, 0x234
	  stw       r0, 0x2C(r1)
	  addi      r0, r4, 0x4830
	  li        r4, 0
	  stw       r3, 0x3C(r1)
	  addi      r3, r1, 0x2C
	  sth       r7, 0x30(r1)
	  sth       r5, 0x32(r1)
	  stw       r6, 0x34(r1)
	  stw       r6, 0x38(r1)
	  stw       r0, 0x2C(r1)
	  bl        0xC1A3C
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x1350
	  bl        0x15167C
	  bl        0x13BF34
	  lis       r4, 0x804B
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A64
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x18(r1)
	  addi      r0, r5, 0x6A00
	  li        r7, 0x233
	  li        r5, 0x234
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x4830
	  li        r4, 0
	  stw       r3, 0x28(r1)
	  addi      r3, r1, 0x18
	  sth       r7, 0x1C(r1)
	  sth       r5, 0x1E(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r0, 0x18(r1)
	  bl        0xC19D0
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
 * Address:	802ED9E4
 * Size:	000058
 */
void Game::MiniHoudai::Obj::effectDrawOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F8(r3)
	  bl        0x1DEC
	  lwz       r3, 0x300(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x304(r31)
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
 * Address:	802EDA3C
 * Size:	000058
 */
void Game::MiniHoudai::Obj::effectDrawOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2F8(r3)
	  bl        0x1E1C
	  lwz       r3, 0x300(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x304(r31)
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
 * Address:	802EDA94
 * Size:	00009C
 */
void efx::TChibiDeadLight::__dt(void)
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
	  addi      r3, r3, 0x4894
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
	  bl        -0x25DE64

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2C9A5C

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
 * Address:	802EDB30
 * Size:	00009C
 */
void efx::TChibiCharge::__dt(void)
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
	  addi      r3, r3, 0x48E0
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
	  bl        -0x25DF00

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2C9AF8

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
 * Address:	802EDBCC
 * Size:	0000BC
 */
void Game::MiniHoudai::Obj::__dt(void)
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
	  lis       r3, 0x804D
	  addi      r0, r31, 0x308
	  addi      r4, r3, 0x492C
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
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
	  bl        0x123930

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x2C9BB4

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
 * Address:	802EDC88
 * Size:	000008
 */
void Game::MiniHoudai::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x1348(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802EDC90
 * Size:	000008
 */
void @4 @efx::TChibiCharge::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x164
	*/
}

/*
 * --INFO--
 * Address:	802EDC98
 * Size:	000008
 */
void @4 @efx::TChibiDeadLight::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x208
	*/
}
