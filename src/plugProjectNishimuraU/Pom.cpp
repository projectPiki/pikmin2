#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802547A4
 * Size:	000138
 */
Pom::Obj::Obj()
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
	  addi      r0, r31, 0x2F0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F0(r31)
	  stw       r0, 0x2F4(r31)
	  stw       r0, 0x2F8(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15344C
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2F0
	  addi      r5, r3, 0x1D3C
	  addi      r3, r31, 0x2D0
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x11C2DC
	  li        r3, 0x2C
	  bl        -0x230988
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  bl        -0x12CEC4
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x1C08
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
	  bl        -0x2309DC
	  mr.       r4, r3
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x2164
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
 * Address:	802548DC
 * Size:	000004
 */
void Pom::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802548E0
 * Size:	000114
 */
void Pom::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x152E9C
	  mr        r3, r31
	  bl        -0x14CED0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8
	  stw       r0, 0x1E0(r31)
	  bl        -0x14D190
	  b         .loc_0x6C

	.loc_0x4C:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)
	  bl        -0x14D1CC

	.loc_0x6C:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,20,18
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x152F84
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x12D30
	  mr        r3, r31
	  bl        0x4EC
	  li        r0, 0
	  lfs       f0, -0x39B8(r2)
	  stb       r0, 0x2C0(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  stb       r0, 0x2C1(r31)
	  stw       r0, 0x2C4(r31)
	  stfs      f0, 0x2E4(r31)
	  stfs      f0, 0x2E8(r31)
	  lwz       r3, 0x2BC(r31)
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
 * Address:	802549F4
 * Size:	000088
 */
void Pom::Obj::doUpdate()
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
	  addi      r3, r31, 0x2D0
	  bl        -0x11C3F8
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x74
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  rlwinm.   r0,r3,0,13,13
	  beq-      .loc_0x6C
	  ori       r0, r3, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x74

	.loc_0x6C:
	  mr        r3, r31
	  bl        -0x14D2E8

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
 * Address:	80254A7C
 * Size:	000110
 */
void Pom::Obj::changeMaterial()
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
	  lis       r3, 0x8048
	  lwz       r5, 0x174(r28)
	  addi      r4, r3, 0x4CD8
	  lwz       r31, 0x8(r5)
	  lwz       r29, 0x4(r31)
	  lwz       r3, 0x64(r29)
	  bl        -0x225D30
	  lwz       r4, 0x60(r29)
	  rlwinm    r3,r3,2,14,29
	  lha       r0, 0x2DC(r28)
	  addi      r5, r1, 0x8
	  lwzx      r3, r4, r3
	  li        r4, 0
	  sth       r0, 0x8(r1)
	  lha       r0, 0x2DE(r28)
	  sth       r0, 0xA(r1)
	  lha       r0, 0x2E0(r28)
	  sth       r0, 0xC(r1)
	  lha       r0, 0x2E2(r28)
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
	  lis       r3, 0x8051
	  li        r28, 0
	  subi      r30, r3, 0xDD0
	  b         .loc_0xE0

	.loc_0xA8:
	  lwz       r4, 0xC0(r31)
	  rlwinm    r3,r28,6,10,25
	  rlwinm    r0,r28,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r30)
	  lwz       r3, 0x60(r29)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0xE0:
	  lhz       r0, 0x5C(r29)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0xA8
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
 * Address:	80254B8C
 * Size:	000004
 */
void Pom::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80254B90
 * Size:	000020
 */
void Pom::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x14ED30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80254BB0
 * Size:	00004C
 */
void Pom::Obj::setFSM(Game::Pom::FSM*)
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
 * Address:	80254BFC
 * Size:	000044
 */
void Pom::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f3, -0x39B4(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f2, -0x39B8(r2)
	  lfs       f0, 0x190(r3)
	  lfs       f1, -0x39B0(r2)
	  fadds     f3, f3, f0
	  lfs       f0, -0x39AC(r2)
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
 * Address:	80254C40
 * Size:	00012C
 */
void Pom::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr.       r29, r4
	  beq-      .loc_0x10C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  cmplwi    r30, 0
	  beq-      .loc_0x10C
	  lis       r4, 0x736C
	  addi      r3, r30, 0x30
	  addi      r4, r4, 0x6F74
	  bl        0x1BE79C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  lbz       r0, 0x2C1(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  lwz       r3, 0x2C4(r31)
	  lwz       r0, 0x2C8(r31)
	  cmpw      r3, r0
	  bge-      .loc_0x10C
	  addi      r3, r31, 0x2D0
	  li        r4, 0
	  bl        -0x11C550
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x5D00
	  lfs       f0, -0x39B0(r2)
	  stw       r0, 0x8(r1)
	  addi      r5, r4, 0x4DE0
	  lis       r4, 0x804B
	  li        r0, 0
	  stw       r5, 0x8(r1)
	  addi      r5, r4, 0x4DBC
	  addi      r4, r1, 0x8
	  stw       r3, 0x14(r1)
	  mr        r3, r29
	  stw       r31, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  lwz       r3, 0x2C4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x2C4(r31)

	.loc_0xF4:
	  lfs       f0, -0x39B8(r2)
	  mr        r3, r31
	  stfs      f0, 0x2E4(r31)
	  bl        0xCAC
	  li        r3, 0x1
	  b         .loc_0x110

	.loc_0x10C:
	  li        r3, 0

	.loc_0x110:
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
 * Address:	80254D6C
 * Size:	00002C
 */
void Pom::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
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
 * Address:	80254D98
 * Size:	0000A8
 */
void Pom::Obj::collisionCallback(Game::CollEvent&)
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
	  lwz       r3, 0x0(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90

	.loc_0x78:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x240(r12)
	  mtctr     r12
	  bctrl

	.loc_0x90:
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
 * Address:	80254E40
 * Size:	00004C
 */
void Pom::Obj::initMouthSlots()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2D0
	  bl        -0x11C904
	  lis       r3, 0x8048
	  lwz       r5, 0x174(r31)
	  addi      r6, r3, 0x4CE4
	  li        r4, 0
	  addi      r3, r31, 0x2D0
	  bl        -0x11C7E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80254E8C
 * Size:	000510
 */
void Pom::Obj::setPomParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0x27C
	  bge-      .loc_0x48
	  cmpwi     r3, 0x4
	  beq-      .loc_0x10C
	  bge-      .loc_0x1C4
	  cmpwi     r3, 0x3
	  bge-      .loc_0x58
	  b         .loc_0x4A0

	.loc_0x48:
	  cmpwi     r3, 0x8
	  beq-      .loc_0x3EC
	  bge-      .loc_0x4A0
	  b         .loc_0x334

	.loc_0x58:
	  li        r4, 0
	  stw       r4, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xC0
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  beq-      .loc_0x90
	  bge-      .loc_0xA8
	  b         .loc_0x4A0

	.loc_0x80:
	  cmpwi     r0, 0x4
	  beq-      .loc_0xF0
	  bge-      .loc_0x4A0
	  b         .loc_0xD8

	.loc_0x90:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0xA8:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x4A0

	.loc_0xC0:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0xD8:
	  li        r3, 0x1C
	  li        r0, 0x34
	  sth       r3, 0x2DC(r31)
	  sth       r4, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0xF0:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x10C:
	  li        r0, 0x1
	  stw       r0, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x174
	  bge-      .loc_0x134
	  cmpwi     r0, 0
	  beq-      .loc_0x144
	  bge-      .loc_0x15C
	  b         .loc_0x4A0

	.loc_0x134:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1A8
	  bge-      .loc_0x4A0
	  b         .loc_0x18C

	.loc_0x144:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x15C:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x4A0

	.loc_0x174:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x18C:
	  li        r0, 0x1C
	  li        r3, 0
	  sth       r0, 0x2DC(r31)
	  li        r0, 0x34
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x1A8:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x1C4:
	  li        r0, 0x2
	  stw       r0, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x22C
	  bge-      .loc_0x1EC
	  cmpwi     r0, 0
	  beq-      .loc_0x1FC
	  bge-      .loc_0x214
	  b         .loc_0x4A0

	.loc_0x1EC:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x260
	  bge-      .loc_0x4A0
	  b         .loc_0x244

	.loc_0x1FC:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x214:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x4A0

	.loc_0x22C:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x244:
	  li        r0, 0x1C
	  li        r3, 0
	  sth       r0, 0x2DC(r31)
	  li        r0, 0x34
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x260:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x27C:
	  li        r0, 0x3
	  stw       r0, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x2E4
	  bge-      .loc_0x2A4
	  cmpwi     r0, 0
	  beq-      .loc_0x2B4
	  bge-      .loc_0x2CC
	  b         .loc_0x4A0

	.loc_0x2A4:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x318
	  bge-      .loc_0x4A0
	  b         .loc_0x2FC

	.loc_0x2B4:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x2CC:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x4A0

	.loc_0x2E4:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x2FC:
	  li        r0, 0x1C
	  li        r3, 0
	  sth       r0, 0x2DC(r31)
	  li        r0, 0x34
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x318:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x334:
	  li        r0, 0x4
	  stw       r0, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x39C
	  bge-      .loc_0x35C
	  cmpwi     r0, 0
	  beq-      .loc_0x36C
	  bge-      .loc_0x384
	  b         .loc_0x4A0

	.loc_0x35C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x3D0
	  bge-      .loc_0x4A0
	  b         .loc_0x3B4

	.loc_0x36C:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x384:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x4A0

	.loc_0x39C:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x3B4:
	  li        r0, 0x1C
	  li        r3, 0
	  sth       r0, 0x2DC(r31)
	  li        r0, 0x34
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x3D0:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x3EC:
	  li        r0, 0x1
	  stw       r0, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x454
	  bge-      .loc_0x414
	  cmpwi     r0, 0
	  beq-      .loc_0x424
	  bge-      .loc_0x43C
	  b         .loc_0x4A0

	.loc_0x414:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x488
	  bge-      .loc_0x4A0
	  b         .loc_0x46C

	.loc_0x424:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x43C:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x4A0

	.loc_0x454:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x46C:
	  li        r0, 0x1C
	  li        r3, 0
	  sth       r0, 0x2DC(r31)
	  li        r0, 0x34
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x4A0

	.loc_0x488:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)

	.loc_0x4A0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x8
	  beq-      .loc_0x4DC
	  lwz       r4, 0xC0(r31)
	  li        r3, 0x1
	  li        r0, 0
	  lwz       r4, 0x81C(r4)
	  stw       r4, 0x2C8(r31)
	  stw       r3, 0x2CC(r31)
	  sth       r0, 0x2E2(r31)
	  b         .loc_0x4FC

	.loc_0x4DC:
	  lwz       r3, 0xC0(r31)
	  li        r0, 0xFF
	  lwz       r3, 0x844(r3)
	  stw       r3, 0x2C8(r31)
	  lwz       r3, 0xC0(r31)
	  lwz       r3, 0x86C(r3)
	  stw       r3, 0x2CC(r31)
	  sth       r0, 0x2E2(r31)

	.loc_0x4FC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025539C
 * Size:	000008
 */
void Pom::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2EC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802553A4
 * Size:	0004AC
 */
void Pom::Obj::shotPikmin()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  mr        r28, r3
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r28)
	  mr        r4, r28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r4, r28
	  lfs       f0, -0x39A8(r2)
	  addi      r3, r1, 0x64
	  lfs       f3, 0x10(r1)
	  lfs       f1, 0x18(r1)
	  fadds     f0, f2, f0
	  stfs      f2, 0x3C(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x3C(r1)
	  lwz       r5, 0x1F4(r28)
	  lwz       r0, 0x2CC(r28)
	  mullw     r30, r5, r0
	  bl        -0xB57B8
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x64
	  cmplwi    r0, 0
	  stw       r4, 0x28(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  bne-      .loc_0xB4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x2D4

	.loc_0xB4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x120

	.loc_0xCC:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D4
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0x120:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xCC
	  b         .loc_0x2D4

	.loc_0x140:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r31
	  bl        -0xB5F90
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  lbz       r3, 0x2B8(r31)
	  cmpwi     r3, 0x5
	  bge-      .loc_0x1C8
	  bl        -0x25A84
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x8
	  beq-      .loc_0x1C8
	  lbz       r3, 0x2B8(r31)
	  lwz       r0, 0x2D8(r28)
	  cmpw      r3, r0
	  bne-      .loc_0x1C8
	  lwz       r3, 0x2C4(r28)
	  subi      r0, r3, 0x1
	  stw       r0, 0x2C4(r28)

	.loc_0x1C8:
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x1C(r1)
	  subi      r4, r4, 0x5D30
	  addi      r5, r3, 0x4D98
	  addi      r0, r1, 0x8
	  li        r6, 0x1
	  stw       r4, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x1C
	  stw       r6, 0xC(r1)
	  stw       r28, 0x20(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x218:
	  lwz       r0, 0x34(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x244
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x2D4

	.loc_0x244:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x2B8

	.loc_0x264:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D4
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0x2B8:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x264

	.loc_0x2D4:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x140
	  li        r31, 0
	  b         .loc_0x464

	.loc_0x2FC:
	  lwz       r3, -0x6B90(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x460
	  bl        -0x18C11C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x84(r1)
	  lfd       f2, -0x3988(r2)
	  stw       r0, 0x80(r1)
	  lfs       f3, -0x39A4(r2)
	  lfd       f0, 0x80(r1)
	  lfs       f1, -0x39A0(r2)
	  fsubs     f4, f0, f2
	  lfs       f0, -0x39B8(r2)
	  lfs       f2, -0x399C(r2)
	  fmuls     f3, f3, f4
	  fdivs     f3, f3, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x384
	  lfs       f0, -0x3998(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x3A8

	.loc_0x384:
	  lfs       f0, -0x3994(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x3A8:
	  lfs       f0, -0x39B8(r2)
	  fmuls     f4, f2, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x3BC
	  fneg      f3, f3

	.loc_0x3BC:
	  lfs       f0, -0x3994(r2)
	  lis       r3, 0x804B
	  lwz       r9, 0x2D8(r28)
	  subi      r5, r3, 0x5D0C
	  fmuls     f0, f3, f0
	  li        r0, 0
	  lis       r6, 0x8050
	  lfs       f1, -0x3990(r2)
	  lis       r4, 0x804B
	  stw       r5, 0x44(r1)
	  fctiwz    f2, f0
	  addi      r7, r6, 0x71A0
	  addi      r6, r4, 0x2C7C
	  lis       r3, 0x804B
	  lfs       f0, -0x398C(r2)
	  addi      r5, r3, 0x2C70
	  stfd      f2, 0x98(r1)
	  mr        r3, r29
	  lfs       f3, -0x399C(r2)
	  addi      r4, r1, 0x44
	  stw       r6, 0x44(r1)
	  lwz       r8, 0x9C(r1)
	  stw       r5, 0x44(r1)
	  rlwinm    r6,r8,3,18,28
	  add       r6, r7, r6
	  stw       r9, 0x48(r1)
	  lfs       f2, 0x4(r6)
	  stfs      f1, 0x50(r1)
	  fmuls     f2, f3, f2
	  stfs      f4, 0x54(r1)
	  stfs      f2, 0x4C(r1)
	  stb       r0, 0x58(r1)
	  stw       r0, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  bl        -0x11A820
	  mr        r3, r29
	  addi      r4, r1, 0x38
	  li        r5, 0
	  bl        -0x11A650
	  lwz       r3, 0x2D8(r28)
	  bl        -0x25D9C

	.loc_0x460:
	  addi      r31, r31, 0x1

	.loc_0x464:
	  cmpw      r31, r30
	  blt+      .loc_0x2FC
	  mr        r3, r28
	  bl        0x35C
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x152F00
	  addi      r3, r1, 0x64
	  li        r4, -0x1
	  bl        -0xB5AC8
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80255850
 * Size:	00019C
 */
void Pom::Obj::changePomColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x8
	  bne-      .loc_0x188
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2E8(r31)
	  lfs       f0, 0x8BC(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x178
	  lis       r3, 0x8048
	  lwz       r4, 0x2D8(r31)
	  addi      r7, r3, 0x4CF0
	  addi      r30, r1, 0x8
	  lwz       r6, 0x0(r7)
	  addi      r29, r4, 0x3
	  lwz       r5, 0x4(r7)
	  addi      r28, r4, 0x1
	  lwz       r4, 0x8(r7)
	  lwz       r3, 0xC(r7)
	  lwz       r0, 0x10(r7)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  b         .loc_0x16C

	.loc_0x84:
	  cmpwi     r28, 0x2
	  mr        r27, r28
	  ble-      .loc_0x94
	  subi      r27, r28, 0x3

	.loc_0x94:
	  rlwinm    r0,r27,2,0,29
	  lwz       r3, -0x6B70(r13)
	  lwzx      r4, r30, r0
	  bl        -0x6E848
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168
	  stw       r27, 0x2D8(r31)
	  lwz       r0, 0x2D8(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x110
	  bge-      .loc_0xD0
	  cmpwi     r0, 0
	  beq-      .loc_0xE0
	  bge-      .loc_0xF8
	  b         .loc_0x15C

	.loc_0xD0:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x144
	  bge-      .loc_0x15C
	  b         .loc_0x128

	.loc_0xE0:
	  li        r3, 0x32
	  li        r0, 0xFF
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x15C

	.loc_0xF8:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  sth       r0, 0x2DE(r31)
	  b         .loc_0x15C

	.loc_0x110:
	  li        r3, 0xFF
	  li        r0, 0x14
	  sth       r3, 0x2DE(r31)
	  sth       r3, 0x2DC(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x15C

	.loc_0x128:
	  li        r0, 0x1C
	  li        r3, 0
	  sth       r0, 0x2DC(r31)
	  li        r0, 0x34
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)
	  b         .loc_0x15C

	.loc_0x144:
	  li        r0, 0xC8
	  li        r3, 0xFF
	  sth       r0, 0x2DC(r31)
	  li        r0, 0xDC
	  sth       r3, 0x2DE(r31)
	  sth       r0, 0x2E0(r31)

	.loc_0x15C:
	  lfs       f0, -0x39B8(r2)
	  stfs      f0, 0x2E8(r31)
	  b         .loc_0x188

	.loc_0x168:
	  addi      r28, r28, 0x1

	.loc_0x16C:
	  cmpw      r28, r29
	  blt+      .loc_0x84
	  b         .loc_0x188

	.loc_0x178:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2E8(r31)

	.loc_0x188:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802559EC
 * Size:	000184
 */
void Pom::Obj::createSwingSmokeEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  lwz       r0, 0x280(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lfs       f2, 0x18C(r3)
	  lfs       f1, 0x190(r3)
	  lfs       f0, 0x194(r3)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  stfs      f2, 0x34(r1)
	  lwz       r12, 0x14(r12)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r3)
	  li        r5, 0
	  lwz       r8, 0x34(r1)
	  lis       r3, 0x804B
	  stfs      f0, 0x38(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x3C(r1)
	  lis       r4, 0x804B
	  lwz       r7, 0x38(r1)
	  lis       r3, 0x804E
	  stw       r8, 0x8(r1)
	  subi      r11, r4, 0x5814
	  lfs       f0, -0x3980(r2)
	  lis       r4, 0x804B
	  stw       r7, 0xC(r1)
	  addi      r9, r3, 0x6A50
	  lfs       f3, 0x8(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x10(r1)
	  li        r8, 0x54
	  lfs       f2, 0xC(r1)
	  li        r7, 0x55
	  stw       r0, 0x40(r1)
	  li        r6, 0x56
	  lfs       f1, 0x10(r1)
	  subi      r10, r4, 0x5D24
	  stw       r11, 0x58(r1)
	  subi      r0, r3, 0x7A04
	  addi      r3, r1, 0x40
	  addi      r4, r1, 0x58
	  stw       r9, 0x40(r1)
	  stfs      f3, 0x5C(r1)
	  stfs      f2, 0x60(r1)
	  stfs      f1, 0x64(r1)
	  stw       r10, 0x58(r1)
	  stfs      f0, 0x68(r1)
	  sth       r8, 0x44(r1)
	  sth       r7, 0x46(r1)
	  sth       r6, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x40(r1)
	  bl        0x172CF0
	  b         .loc_0x174

	.loc_0xF8:
	  lis       r4, 0x804B
	  lfs       f4, 0x194(r3)
	  lfs       f2, 0x190(r3)
	  subi      r4, r4, 0x5808
	  lfs       f3, 0x18C(r3)
	  lis       r3, 0x804E
	  lfs       f0, -0x397C(r2)
	  addi      r0, r3, 0x6A78
	  stw       r4, 0x14(r1)
	  lis       r4, 0x804B
	  lfs       f1, -0x39B0(r2)
	  fsubs     f2, f2, f0
	  lis       r3, 0x804F
	  subi      r7, r4, 0x5814
	  li        r6, 0x53
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x79F0
	  lfs       f0, -0x3980(r2)
	  stfs      f1, 0x20(r1)
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x24
	  stw       r7, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f4, 0x30(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  bl        0x172C08

	.loc_0x174:
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80255B70
 * Size:	000094
 */
void Pom::Obj::createShotEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  lfs       f0, -0x3978(r2)
	  stw       r0, 0x34(r1)
	  subi      r4, r4, 0x5808
	  li        r5, 0
	  li        r7, 0x101
	  lfs       f2, 0x190(r3)
	  li        r6, 0x102
	  lfs       f1, 0x18C(r3)
	  lfs       f3, 0x194(r3)
	  lis       r3, 0x804E
	  addi      r0, r3, 0x6A64
	  fsubs     f2, f2, f0
	  stw       r4, 0x8(r1)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x5814
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x268C
	  addi      r3, r1, 0x8
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  stfs      f1, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  sth       r7, 0xC(r1)
	  sth       r6, 0xE(r1)
	  stw       r5, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x159424
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80255C04
 * Size:	000080
 */
void Pom::Obj::createPomDeadEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804E
	  stw       r0, 0x34(r1)
	  lis       r4, 0x804B
	  subi      r0, r4, 0x5814
	  subi      r8, r6, 0x5808
	  stw       r0, 0x14(r1)
	  addi      r7, r5, 0x6A78
	  lis       r4, 0x804C
	  li        r6, 0x271
	  lfs       f0, 0x18C(r3)
	  addi      r0, r4, 0x1D28
	  li        r5, 0
	  addi      r4, r1, 0x14
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x194(r3)
	  addi      r3, r1, 0x8
	  stw       r8, 0x8(r1)
	  stw       r7, 0x8(r1)
	  stfs      f0, 0x20(r1)
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0x159314
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80255C84
 * Size:	000004
 */
void Pom::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	80255C88
 * Size:	000004
 */
void Pom::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	80255C8C
 * Size:	000008
 */
u32 Pom::Obj::isLivingThing() { return 0x0; }

/*
 * --INFO--
 * Address:	80255C94
 * Size:	000008
 */
void Pom::Obj::getMouthSlots()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80255C9C
 * Size:	000008
 */
void Pom::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x3974(r2)
	  blr
	*/
}
} // namespace Game
