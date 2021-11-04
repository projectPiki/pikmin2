#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8025DC8C
 * Size:	000130
 */
Kogane::Obj::Obj()
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
	  addi      r0, r31, 0x2DC
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)
	  stw       r0, 0x2E4(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15C934
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2DC
	  addi      r5, r3, 0x30A8
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x320
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x239E68
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x1363A4
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x33F8
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
	  bl        -0x239EBC
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x2F98
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
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
 * Address:	8025DDBC
 * Size:	000004
 */
void Kogane::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8025DDC0
 * Size:	000130
 */
void Kogane::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15C37C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  bl        -0x15C3F8
	  lfs       f0, -0x3738(r2)
	  stfs      f0, 0x1F8(r31)
	  stfs      f0, 0x168(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x170(r31)
	  lwz       r3, 0x114(r31)
	  lfs       f1, 0x1F8(r31)
	  lwz       r3, 0x0(r3)
	  bl        -0x126018
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2C0(r31)
	  bl        0x9A0
	  lfs       f1, -0x3734(r2)
	  mr        r3, r31
	  fmr       f2, f1
	  bl        0xA88
	  lfs       f0, -0x3738(r2)
	  mr        r3, r31
	  stfs      f0, 0x2CC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x108
	  lfs       f0, -0x3730(r2)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x2BC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x11C

	.loc_0x108:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025DEF0
 * Size:	000004
 */
void Kogane::Obj::resetFartTimer() { }

/*
 * --INFO--
 * Address:	8025DEF4
 * Size:	000050
 */
void Kogane::Obj::onKill(Game::CreatureKillArg*)
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x15C040
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
 * Address:	8025DF44
 * Size:	000034
 */
void Kogane::Obj::doUpdate()
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
 * Address:	8025DF78
 * Size:	000020
 */
void Kogane::Obj::doUpdateCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x15B070
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025DF98
 * Size:	000004
 */
void Kogane::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8025DF9C
 * Size:	000020
 */
void Kogane::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x15813C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025DFBC
 * Size:	00004C
 */
void Kogane::Obj::setFSM(Game::Kogane::FSM*)
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
 * Address:	8025E008
 * Size:	0000A0
 */
void Kogane::Obj::getShadowParam(Game::ShadowParam&)
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
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        0x47C
	  lfs       f0, 0x8(r1)
	  lfs       f3, -0x372C(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x3734(r2)
	  lfs       f2, 0xC(r1)
	  lfs       f0, -0x3728(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f2, -0x3724(r2)
	  lfs       f4, 0x10(r1)
	  stfs      f4, 0x8(r31)
	  lfs       f4, 0x4(r31)
	  fsubs     f3, f4, f3
	  stfs      f3, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x190(r30)
	  fsubs     f0, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x2CC(r30)
	  fmuls     f0, f2, f0
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
 * Address:	8025E0A8
 * Size:	00006C
 */
void Kogane::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  beq-      .loc_0x50
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x22C
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E114
 * Size:	00003C
 */
void Kogane::Obj::wallCallback(const Game::MoveInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f2, 0x5C(r4)
	  stw       r0, 0x24(r1)
	  lfs       f1, 0x60(r4)
	  lfs       f0, 0x64(r4)
	  addi      r4, r1, 0x8
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0x4EC
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E150
 * Size:	000060
 */
void Kogane::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x48
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  lfs       f1, -0x3734(r2)
	  mr        r3, r31
	  bl        0x18C
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E1B0
 * Size:	00006C
 */
void Kogane::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  beq-      .loc_0x50
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x124
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E21C
 * Size:	000050
 */
void Kogane::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15B33C
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x100
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
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
 * Address:	8025E26C
 * Size:	000050
 */
void Kogane::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15B378
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
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
 * Address:	8025E2BC
 * Size:	00002C
 */
void Kogane::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x314(r12)
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
 * Address:	8025E2E8
 * Size:	000004
 */
void Kogane::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	8025E2EC
 * Size:	00002C
 */
void Kogane::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x310(r12)
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
 * Address:	8025E318
 * Size:	000004
 */
void Kogane::Obj::effectDrawOn() { }

/*
 * --INFO--
 * Address:	8025E31C
 * Size:	000084
 */
void Kogane::Obj::transitDamageState(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x30
	  lfs       f2, -0x3728(r2)
	  bl        -0x158314
	  li        r3, 0x1
	  b         .loc_0x70

	.loc_0x30:
	  bl        -0x156F58
	  cmpwi     r3, 0x2
	  beq-      .loc_0x44
	  cmpwi     r3, 0x3
	  bne-      .loc_0x6C

	.loc_0x44:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E3A0
 * Size:	000108
 */
void Kogane::Obj::transitDisappear()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x2C0(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xF0
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, -0x6978(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lis       r3, 0x804B
	  li        r8, 0
	  subi      r4, r3, 0x5D0C
	  li        r0, -0x1
	  lis       r3, 0x804B
	  stw       r4, 0x8(r1)
	  subi      r3, r3, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r3, 0x8(r1)
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x8
	  stb       r8, 0x24(r1)
	  addi      r5, r31, 0x250
	  sth       r8, 0x1C(r1)
	  stb       r7, 0x1E(r1)
	  stw       r8, 0x20(r1)
	  stb       r8, 0x1F(r1)
	  stb       r6, 0xC(r1)
	  stb       r8, 0x25(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  stb       r8, 0x26(r1)
	  stb       r8, 0x27(r1)
	  bl        -0xF08C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lwz       r3, -0x6978(r13)
	  addi      r4, r31, 0x18C
	  addi      r5, r31, 0x1FC
	  bl        -0x19568
	  lfs       f0, 0x18C(r31)
	  li        r3, 0
	  stfs      f0, 0x198(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x19C(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x1A0(r31)
	  b         .loc_0xF4

	.loc_0xF0:
	  li        r3, 0x1

	.loc_0xF4:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E4A8
 * Size:	000050
 */
void Kogane::Obj::getBodyJointPos()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r4)
	  subi      r4, r2, 0x3720
	  bl        0x1E0B20
	  bl        0x1CB3D8
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E4F8
 * Size:	0000A4
 */
void Kogane::Obj::koganeScaleUp()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r4, 0xC0(r3)
	  lfs       f2, 0x2CC(r3)
	  lfs       f0, 0x934(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x8C
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0x3718(r2)
	  lfs       f0, 0x54(r4)
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x2CC(r3)
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x934(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x68
	  stfs      f0, 0x2CC(r3)
	  li        r31, 0x1
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r3)

	.loc_0x68:
	  lfs       f0, 0x2CC(r3)
	  stfs      f0, 0x1F8(r3)
	  stfs      f0, 0x168(r3)
	  stfs      f0, 0x16C(r3)
	  stfs      f0, 0x170(r3)
	  lwz       r4, 0x114(r3)
	  lfs       f1, 0x2CC(r3)
	  lwz       r3, 0x0(r4)
	  bl        -0x126774

	.loc_0x8C:
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
 * Address:	8025E59C
 * Size:	00008C
 */
void Kogane::Obj::koganeScaleDown()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, -0x3738(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lfs       f3, 0x2CC(r3)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x74
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0x3718(r2)
	  lfs       f0, 0x54(r4)
	  fnmsubs   f0, f1, f0, f3
	  stfs      f0, 0x2CC(r3)
	  lfs       f0, 0x2CC(r3)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x50
	  stfs      f2, 0x2CC(r3)
	  li        r31, 0x1

	.loc_0x50:
	  lfs       f0, 0x2CC(r3)
	  stfs      f0, 0x1F8(r3)
	  stfs      f0, 0x168(r3)
	  stfs      f0, 0x16C(r3)
	  stfs      f0, 0x170(r3)
	  lwz       r4, 0x114(r3)
	  lfs       f1, 0x2CC(r3)
	  lwz       r3, 0x0(r4)
	  bl        -0x126800

	.loc_0x74:
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
 * Address:	8025E628
 * Size:	0001AC
 */
void Kogane::Obj::setTargetPosition(Vector3f*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  cmplwi    r4, 0
	  mr        r31, r3
	  beq-      .loc_0x54
	  lfs       f2, -0x3714(r2)
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x18C(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2D0(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x2D4(r31)
	  lfs       f1, 0x8(r4)
	  lfs       f0, 0x194(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2D8(r31)
	  b         .loc_0x190

	.loc_0x54:
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, -0x3710(r2)
	  lfs       f31, -0x3734(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB0
	  lwz       r3, 0xC0(r31)
	  lfs       f1, -0x370C(r2)
	  lfs       f0, 0x90C(r3)
	  fmuls     f31, f1, f0
	  bl        -0x195100
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r31)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x36F0(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3708(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x90C(r3)
	  fmuls     f2, f31, f2
	  fdivs     f1, f2, f1
	  fsubs     f31, f1, f0

	.loc_0xB0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x3700(r2)
	  lfs       f4, -0x3704(r2)
	  fmuls     f2, f0, f31
	  lfs       f0, -0x3734(r2)
	  lfs       f3, -0x3714(r2)
	  fmadds    f4, f4, f2, f1
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x110
	  lfs       f0, -0x36FC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x134

	.loc_0x110:
	  lfs       f0, -0x36F8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x134:
	  lfs       f1, 0x18C(r31)
	  lfs       f0, -0x3734(r2)
	  fmadds    f1, f3, f2, f1
	  fcmpo     cr0, f4, f0
	  stfs      f1, 0x2D0(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x2D4(r31)
	  bge-      .loc_0x158
	  fneg      f4, f4

	.loc_0x158:
	  lfs       f0, -0x36F8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f2, -0x3714(r2)
	  fmuls     f1, f4, f0
	  lfs       f0, 0x194(r31)
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x2D8(r31)

	.loc_0x190:
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
 * Address:	8025E7D4
 * Size:	000078
 */
void Kogane::Obj::resetAppearTimer()
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
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x844(r3)
	  lfs       f0, 0x81C(r3)
	  fsubs     f31, f1, f0
	  bl        -0x195260
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x36F0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x3708(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f31, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
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
 * Address:	8025E84C
 * Size:	000080
 */
void Kogane::Obj::isAppear()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r4, 0
	  lwz       r5, 0xC0(r3)
	  lfs       f31, 0x3D4(r5)
	  fmr       f1, f31
	  bl        -0x149DB8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x40:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x14A164
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x60:
	  li        r3, 0

	.loc_0x64:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E8CC
 * Size:	000084
 */
void Kogane::Obj::resetMoveTimer(float, float)
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
	  stw       r31, 0x1C(r1)
	  fmr       f30, f1
	  mr        r31, r3
	  fmr       f31, f2
	  bl        -0x195358
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  fsubs     f1, f31, f30
	  lfd       f3, -0x36F0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x3708(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025E950
 * Size:	000194
 */
void Kogane::Obj::createTreasureItem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0x2C0(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x17C
	  lis       r3, 0x804B
	  li        r8, 0
	  subi      r4, r3, 0x5D0C
	  li        r0, -0x1
	  lis       r3, 0x804B
	  stw       r4, 0x20(r1)
	  subi      r3, r3, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r3, 0x20(r1)
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x20
	  stb       r8, 0x3C(r1)
	  addi      r5, r31, 0x250
	  sth       r8, 0x34(r1)
	  stb       r7, 0x36(r1)
	  stw       r8, 0x38(r1)
	  stb       r8, 0x37(r1)
	  stb       r6, 0x24(r1)
	  stb       r8, 0x3D(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x40(r1)
	  stb       r8, 0x3E(r1)
	  stb       r8, 0x3F(r1)
	  bl        -0xF0E40
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x17C
	  lbz       r0, -0x7BE0(r13)
	  li        r3, 0x2
	  sth       r3, 0x34(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  li        r0, 0x1
	  stb       r0, 0x3F(r1)

	.loc_0xA8:
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x20
	  bl        -0xF1540
	  stw       r3, 0x254(r31)
	  lwz       r0, 0x254(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x17C
	  lfs       f1, -0x3734(r2)
	  subi      r4, r2, 0x3720
	  lfs       f0, -0x36E8(r2)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  lwz       r3, 0x174(r31)
	  bl        0x1E05B4
	  bl        0x1CAE6C
	  lfs       f2, 0x2C(r3)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x1C(r3)
	  li        r5, 0
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r3, 0x254(r31)
	  bl        -0x1238B4
	  lwz       r3, 0x254(r31)
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x254(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1FC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x404A0
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x5810
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x36E4(r2)
	  li        r0, 0x3200
	  li        r3, 0x1
	  stfs      f0, 0x2C4(r31)
	  stw       r0, 0x2C0(r31)
	  b         .loc_0x180

	.loc_0x17C:
	  li        r3, 0

	.loc_0x180:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025EAE4
 * Size:	000294
 */
void Kogane::Obj::createPellet(int, int)
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
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stmw      r25, 0x74(r1)
	  lis       r6, 0x8048
	  mr        r29, r4
	  lwzu      r4, 0x53D8(r6)
	  mr        r25, r3
	  mr        r30, r5
	  addi      r26, r1, 0x20
	  lwz       r3, 0x4(r6)
	  li        r27, 0
	  lwz       r0, 0x8(r6)
	  li        r28, 0
	  stw       r4, 0x20(r1)
	  stw       r3, 0x24(r1)
	  stw       r0, 0x28(r1)

	.loc_0x64:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r28
	  bl        -0x77AA8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  stw       r28, 0x0(r26)
	  addi      r26, r26, 0x4
	  addi      r27, r27, 0x1

	.loc_0x84:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x3
	  blt+      .loc_0x64
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x1
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  lfs       f3, -0x36E0(r2)
	  stw       r3, 0x5C(r1)
	  subi      r4, r2, 0x3720
	  lfd       f2, -0x36F0(r2)
	  fadds     f29, f3, f1
	  stw       r0, 0x58(r1)
	  lwz       r3, 0x174(r25)
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f2
	  fdivs     f28, f3, f0
	  bl        0x1E0428
	  bl        0x1CACE0
	  lfs       f2, 0x2C(r3)
	  xoris     r27, r27, 0x8000
	  lfs       f1, 0x1C(r3)
	  addi      r28, r1, 0x20
	  lfs       f0, 0xC(r3)
	  li        r31, 0
	  lfd       f30, -0x36F0(r2)
	  lis       r26, 0x4330
	  stfs      f0, 0x14(r1)
	  lfs       f31, -0x3708(r2)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  b         .loc_0x258

	.loc_0x114:
	  bl        -0x195658
	  xoris     r0, r3, 0x8000
	  stw       r26, 0x58(r1)
	  mr        r4, r29
	  addi      r3, r1, 0x2C
	  stw       r0, 0x5C(r1)
	  lfd       f0, 0x58(r1)
	  stw       r27, 0x64(r1)
	  fsubs     f0, f0, f30
	  stw       r26, 0x60(r1)
	  fdivs     f1, f0, f31
	  lfd       f0, 0x60(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r5, r28, r0
	  bl        -0xF80D0
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x2C
	  bl        -0xF1790
	  mr.       r25, r3
	  beq-      .loc_0x254
	  addi      r4, r1, 0x2C
	  bl        -0x123C98
	  mr        r3, r25
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  fadds     f29, f29, f28
	  lfs       f0, -0x3734(r2)
	  fmr       f1, f29
	  fcmpo     cr0, f29, f0
	  bge-      .loc_0x1B0
	  fneg      f1, f29

	.loc_0x1B0:
	  lfs       f2, -0x36F8(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x3734(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x36DC(r2)
	  fcmpo     cr0, f29, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f3, f0
	  bge-      .loc_0x210
	  lfs       f0, -0x36FC(r2)
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x228

	.loc_0x210:
	  fmuls     f0, f29, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x228:
	  fmuls     f1, f3, f0
	  lfs       f0, -0x36E8(r2)
	  stfs      f4, 0x10(r1)
	  mr        r3, r25
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x254:
	  addi      r31, r31, 0x1

	.loc_0x258:
	  cmpw      r31, r30
	  blt+      .loc_0x114
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  lmw       r25, 0x74(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025ED78
 * Size:	0001DC
 */
void Kogane::Obj::createDoping(unsigned char, int)
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
	  stmw      r26, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  mr        r30, r4
	  mr        r31, r5
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  lfs       f3, -0x36E0(r2)
	  stw       r3, 0x2C(r1)
	  subi      r4, r2, 0x3720
	  lfd       f2, -0x36F0(r2)
	  fadds     f31, f3, f1
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x174(r26)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f2
	  fdivs     f30, f3, f0
	  bl        0x1E01FC
	  bl        0x1CAAB4
	  lfs       f2, 0x2C(r3)
	  lis       r5, 0x804B
	  lfs       f1, 0x1C(r3)
	  lis       r4, 0x804B
	  lfs       f0, 0xC(r3)
	  subi      r28, r5, 0x5D0C
	  subi      r29, r4, 0x5D18
	  li        r27, 0
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  b         .loc_0x1B0

	.loc_0xA8:
	  stw       r28, 0x8(r1)
	  li        r0, 0
	  lwz       r3, -0x6BB0(r13)
	  stw       r29, 0x8(r1)
	  stb       r30, 0xC(r1)
	  stb       r0, 0xD(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  beq-      .loc_0x1AC
	  addi      r4, r1, 0x8
	  bl        -0x123E8C
	  mr        r3, r26
	  addi      r4, r1, 0x1C
	  li        r5, 0
	  bl        -0x123CBC
	  fadds     f31, f31, f30
	  lfs       f0, -0x3734(r2)
	  fmr       f1, f31
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x108
	  fneg      f1, f31

	.loc_0x108:
	  lfs       f2, -0x36F8(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x3734(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x36DC(r2)
	  fcmpo     cr0, f31, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f4, f3, f0
	  bge-      .loc_0x168
	  lfs       f0, -0x36FC(r2)
	  fmuls     f0, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x180

	.loc_0x168:
	  fmuls     f0, f31, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x180:
	  fmuls     f1, f3, f0
	  lfs       f0, -0x36E8(r2)
	  stfs      f4, 0x18(r1)
	  mr        r3, r26
	  addi      r4, r1, 0x10
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  addi      r27, r27, 0x1

	.loc_0x1B0:
	  cmpw      r27, r31
	  blt+      .loc_0xA8
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lmw       r26, 0x48(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025EF54
 * Size:	0000BC
 */
Kogane::Obj::~Obj()
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
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2DC
	  addi      r4, r3, 0x30A8
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x320
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
	  bl        0x1B25A8

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x23AF3C

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
 * Address:	8025F010
 * Size:	000004
 */
void Kogane::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8025F014
 * Size:	000004
 */
void Kogane::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8025F018
 * Size:	000008
 */
u32 Kogane::Obj::getEnemyTypeID() { return 0x9; }
} // namespace Game
