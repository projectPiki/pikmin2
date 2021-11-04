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
 * Address:	........
 * Size:	000048
 */
void Game::JointShadowRootNode::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8024127C
 * Size:	000060
 */
void Game::JointShadowRootNode::__ct((Game::Creature*))
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
	  bl        0x1D00F8
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r3, r3, 0x1A44
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  stw       r31, 0x18(r30)
	  stb       r0, 0x1C(r30)
	  lwz       r3, -0x6980(r13)
	  bl        0xE20
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
 * Address:	........
 * Size:	000058
 */
void Game::JointShadowRootNode::init((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::JointShadowNode::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802412DC
 * Size:	000074
 */
void Game::JointShadowNode::__ct((int))
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
	  bl        0x1D0098
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r4, r3, 0x1A34
	  li        r3, 0x30
	  stw       r4, 0x0(r30)
	  stw       r0, 0x18(r30)
	  bl        -0x21D470
	  stw       r3, 0x1C(r30)
	  mulli     r3, r31, 0x30
	  bl        -0x21D374
	  stw       r3, 0x20(r30)
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x74
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x74:
	*/
}

/*
 * --INFO--
 * Address:	80241350
 * Size:	000074
 */
void Game::JointShadowNode::init((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x1C(r3)
	  bl        -0x1570D8
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x4C

	.loc_0x38:
	  lwz       r0, 0x20(r28)
	  add       r3, r0, r31
	  bl        -0x1570F0
	  addi      r31, r31, 0x30
	  addi      r30, r30, 0x1

	.loc_0x4C:
	  cmpw      r30, r29
	  blt+      .loc_0x38
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
 * Address:	........
 * Size:	00004C
 */
void Game::ShadowNode::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Game::ShadowNode::__ct((Game::Creature*, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Game::ShadowNode::init((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802413C4
 * Size:	000080
 */
void Game::ShadowMgr::__ct((int))
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
	  bl        0x1CFFB0
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r4, r3, 0x19F4
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  stw       r31, 0x18(r30)
	  stw       r0, 0x1C(r30)
	  bl        .loc_0x80
	  li        r5, 0x1
	  lis       r3, 0x8048
	  stb       r5, 0x3C(r30)
	  li        r4, 0
	  addi      r0, r3, 0x4014
	  mr        r3, r30
	  stb       r5, 0x3D(r30)
	  stw       r4, 0x40(r30)
	  stw       r4, 0x44(r30)
	  stw       r0, 0x14(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x80:
	*/
}

/*
 * --INFO--
 * Address:	80241444
 * Size:	000210
 */
void Game::ShadowMgr::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x3FF8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x60
	  stw       r29, 0x14(r1)
	  bl        -0x21D5C8
	  mr.       r29, r3
	  beq-      .loc_0xC4
	  addi      r0, r29, 0x5C
	  lis       r5, 0x6C6F
	  stw       r0, 0x0(r29)
	  li        r3, 0
	  addi      r0, r31, 0x28
	  mr        r4, r29
	  stw       r3, 0x4(r29)
	  addi      r3, r29, 0xC
	  addi      r5, r5, 0x646E
	  addi      r6, r31, 0x34
	  stw       r0, 0x8(r29)
	  bl        0x1D21B4
	  lis       r3, 0x804B
	  lis       r5, 0x6C6F
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3CA0(r2)
	  stw       r0, 0xC(r29)
	  mr        r4, r29
	  lfs       f1, -0x3C9C(r2)
	  addi      r3, r29, 0x34
	  stfs      f0, 0x24(r29)
	  addi      r5, r5, 0x6466
	  lfs       f0, -0x3C98(r2)
	  addi      r6, r31, 0x40
	  stfs      f1, 0x2C(r29)
	  stfs      f0, 0x30(r29)
	  bl        0x1D2178
	  lis       r3, 0x804B
	  lfs       f2, -0x3C94(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3C9C(r2)
	  stw       r0, 0x34(r29)
	  lfs       f0, -0x3C98(r2)
	  stfs      f2, 0x4C(r29)
	  stfs      f1, 0x54(r29)
	  stfs      f0, 0x58(r29)

	.loc_0xC4:
	  stw       r29, 0x4C(r30)
	  li        r3, 0x24
	  bl        -0x21D66C
	  mr.       r29, r3
	  beq-      .loc_0xF8
	  bl        0x1CFE74
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r3, r3, 0x1A24
	  stw       r3, 0x0(r29)
	  stw       r0, 0x18(r29)
	  stw       r0, 0x1C(r29)
	  stw       r0, 0x20(r29)

	.loc_0xF8:
	  stw       r29, 0x20(r30)
	  li        r3, 0x24
	  bl        -0x21D6A0
	  mr.       r29, r3
	  beq-      .loc_0x12C
	  bl        0x1CFE40
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r3, r3, 0x1A24
	  stw       r3, 0x0(r29)
	  stw       r0, 0x18(r29)
	  stw       r0, 0x1C(r29)
	  stw       r0, 0x20(r29)

	.loc_0x12C:
	  stw       r29, 0x24(r30)
	  li        r3, 0x64
	  bl        -0x21D6D4
	  mr.       r0, r3
	  beq-      .loc_0x150
	  lwz       r4, 0x4C(r30)
	  addi      r5, r30, 0x48
	  bl        -0x3420
	  mr        r0, r3

	.loc_0x150:
	  stw       r0, 0x28(r30)
	  li        r3, 0x58
	  bl        -0x21D6F8
	  mr.       r0, r3
	  beq-      .loc_0x174
	  lwz       r4, 0x4C(r30)
	  addi      r5, r30, 0x48
	  bl        -0x2934
	  mr        r0, r3

	.loc_0x174:
	  stw       r0, 0x2C(r30)
	  lwz       r0, 0x18(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x21D618
	  stw       r3, 0x30(r30)
	  li        r3, 0x20
	  bl        -0x21D72C
	  mr.       r29, r3
	  beq-      .loc_0x1B4
	  bl        0x1CFDB4
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r3, r3, 0x1A44
	  stw       r3, 0x0(r29)
	  stw       r0, 0x18(r29)
	  stb       r0, 0x1C(r29)

	.loc_0x1B4:
	  stw       r29, 0x34(r30)
	  li        r3, 0x20
	  bl        -0x21D75C
	  mr.       r29, r3
	  beq-      .loc_0x1E4
	  bl        0x1CFD84
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r3, r3, 0x1A44
	  stw       r3, 0x0(r29)
	  stw       r0, 0x18(r29)
	  stb       r0, 0x1C(r29)

	.loc_0x1E4:
	  stw       r29, 0x38(r30)
	  mr        r3, r30
	  addi      r4, r31, 0x4C
	  bl        0xE20
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
 * Address:	80241654
 * Size:	000004
 */
void Game::ShadowMgr::init(void) { }

/*
 * --INFO--
 * Address:	80241658
 * Size:	000010
 */
void Game::ShadowMgr::setViewport((Viewport*, int))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  rlwinm    r0,r5,2,0,29
	  stwx      r4, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80241668
 * Size:	000048
 */
void Game::ShadowMgr::setShadowColor((Color4*))
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
	  lwz       r3, 0x28(r3)
	  bl        -0x377C
	  lwz       r3, 0x2C(r30)
	  mr        r4, r31
	  bl        -0x3788
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
 * Address:	........
 * Size:	000040
 */
void Game::ShadowMgr::resetShadowColor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::ShadowMgr::drawShadowOn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::ShadowMgr::drawShadowOff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802416B0
 * Size:	000260
 */
void Game::ShadowMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stmw      r24, 0x60(r1)
	  mr        r27, r3
	  lbz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x24C
	  li        r28, 0
	  li        r26, 0
	  b         .loc_0x58

	.loc_0x2C:
	  lwz       r0, 0x40(r27)
	  mr        r5, r28
	  lwz       r3, 0x30(r27)
	  rlwinm    r6,r0,2,0,29
	  lwzx      r4, r3, r26
	  addi      r0, r6, 0x28
	  lwzx      r3, r27, r0
	  lwz       r4, 0x44(r4)
	  bl        -0x37C4
	  addi      r26, r26, 0x4
	  addi      r28, r28, 0x1

	.loc_0x58:
	  lwz       r0, 0x18(r27)
	  cmpw      r28, r0
	  blt+      .loc_0x2C
	  lwz       r3, 0x20(r27)
	  lwz       r29, 0x10(r3)
	  b         .loc_0x188

	.loc_0x70:
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  lwz       r3, 0x18(r29)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x20(r29)
	  addi      r4, r1, 0x28
	  addi      r5, r1, 0x8
	  rlwinm    r0,r0,0,0,3
	  stw       r0, 0x20(r29)
	  lwz       r0, 0x40(r27)
	  rlwinm    r3,r0,2,0,29
	  addi      r0, r3, 0x28
	  lwzx      r3, r27, r0
	  bl        -0x378C
	  li        r31, 0
	  li        r28, 0
	  mr        r30, r31
	  b         .loc_0x178

	.loc_0xDC:
	  lwz       r3, 0x30(r27)
	  lwzx      r3, r3, r31
	  bl        0x1E3AAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16C
	  lwz       r3, 0x30(r27)
	  li        r4, 0
	  lwz       r0, 0x1C(r29)
	  lwzx      r3, r3, r31
	  add       r26, r0, r30
	  lwz       r3, 0x44(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r26
	  addi      r4, r1, 0x28
	  bl        -0x1574D0
	  lbz       r0, 0x3D(r27)
	  li        r4, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  lwz       r0, 0x40(r27)
	  mr        r5, r28
	  addi      r4, r1, 0x8
	  rlwinm    r3,r0,2,0,29
	  addi      r0, r3, 0x28
	  lwzx      r3, r27, r0
	  bl        -0x3744
	  mr        r4, r3

	.loc_0x154:
	  mr        r3, r27
	  mr        r5, r28
	  bl        0xAB0
	  lwz       r0, 0x20(r29)
	  or        r0, r0, r3
	  stw       r0, 0x20(r29)

	.loc_0x16C:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x30
	  addi      r28, r28, 0x1

	.loc_0x178:
	  lwz       r0, 0x18(r27)
	  cmpw      r28, r0
	  blt+      .loc_0xDC

	.loc_0x184:
	  lwz       r29, 0x4(r29)

	.loc_0x188:
	  cmplwi    r29, 0
	  bne+      .loc_0x70
	  lwz       r3, 0x34(r27)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x244

	.loc_0x19C:
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x240
	  lwz       r25, 0x10(r31)
	  b         .loc_0x238

	.loc_0x1C0:
	  li        r29, 0
	  li        r24, 0
	  mr        r30, r29
	  b         .loc_0x228

	.loc_0x1D0:
	  lwz       r3, 0x30(r27)
	  lwzx      r3, r3, r29
	  bl        0x1E39B8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x21C
	  lwz       r3, 0x30(r27)
	  li        r4, 0
	  lwz       r0, 0x20(r25)
	  lwzx      r3, r3, r29
	  add       r28, r0, r30
	  lwz       r26, 0x1C(r25)
	  lwz       r3, 0x44(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r26
	  mr        r5, r28
	  bl        -0x1575C8

	.loc_0x21C:
	  addi      r29, r29, 0x4
	  addi      r30, r30, 0x30
	  addi      r24, r24, 0x1

	.loc_0x228:
	  lwz       r0, 0x18(r27)
	  cmpw      r24, r0
	  blt+      .loc_0x1D0
	  lwz       r25, 0x4(r25)

	.loc_0x238:
	  cmplwi    r25, 0
	  bne+      .loc_0x1C0

	.loc_0x240:
	  lwz       r31, 0x4(r31)

	.loc_0x244:
	  cmplwi    r31, 0
	  bne+      .loc_0x19C

	.loc_0x24C:
	  lmw       r24, 0x60(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000250
 */
void Game::ShadowMgr::draw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241910
 * Size:	000210
 */
void Game::ShadowMgr::draw((Graphics&, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  subi      r4, r2, 0x3C90
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r30, r5
	  mr        r29, r3
	  li        r5, 0x1
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x1E91C0
	  lbz       r0, 0x3C(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC
	  lwz       r3, 0x30(r29)
	  rlwinm    r31,r30,2,0,29
	  lwzx      r3, r3, r31
	  bl        0x1E38EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1EC
	  lwz       r3, 0x30(r29)
	  addi      r4, r1, 0x8
	  lwzx      r3, r3, r31
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x30(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x34(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x38(r3)
	  stfs      f0, 0x14(r1)
	  lwz       r0, 0x40(r29)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r3, 0x28(r3)
	  bl        -0x3A88
	  lwz       r0, 0x40(r29)
	  mr        r4, r30
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x40(r29)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r29)
	  lwzx      r3, r3, r31
	  bl        0x1E37B4
	  lwz       r3, 0x30(r29)
	  lwzx      r3, r3, r31
	  bl        0x1E3A4C
	  lwz       r3, 0x20(r29)
	  mulli     r31, r30, 0x30
	  lwz       r28, 0x10(r3)
	  b         .loc_0x154

	.loc_0xFC:
	  mr        r3, r29
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x93C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x150
	  lwz       r4, 0x20(r28)
	  mr        r3, r29
	  mr        r5, r30
	  bl        0x8D8
	  lwz       r4, 0x40(r29)
	  mr        r5, r3
	  lwz       r0, 0x1C(r28)
	  rlwinm    r4,r4,2,0,29
	  addi      r4, r4, 0x28
	  lwzx      r3, r29, r4
	  add       r4, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x150:
	  lwz       r28, 0x4(r28)

	.loc_0x154:
	  cmplwi    r28, 0
	  bne+      .loc_0xFC
	  lwz       r3, 0x34(r29)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x1C4

	.loc_0x168:
	  mr        r3, r29
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x950
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C0
	  lwz       r27, 0x10(r28)
	  b         .loc_0x1B8

	.loc_0x188:
	  lwz       r3, 0x40(r29)
	  lwz       r0, 0x20(r27)
	  rlwinm    r3,r3,2,0,29
	  lwz       r5, 0x18(r27)
	  addi      r3, r3, 0x28
	  add       r4, r0, r31
	  lwzx      r3, r29, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r27, 0x4(r27)

	.loc_0x1B8:
	  cmplwi    r27, 0
	  bne+      .loc_0x188

	.loc_0x1C0:
	  lwz       r28, 0x4(r28)

	.loc_0x1C4:
	  cmplwi    r28, 0
	  bne+      .loc_0x168
	  lwz       r0, 0x40(r29)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1EC:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3C90
	  lwz       r3, 0x28(r3)
	  bl        0x1E8FF4
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80241B20
 * Size:	0000F0
 */
void Game::ShadowMgr::createShadow((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  mr        r28, r4
	  lwz       r3, 0x24(r3)
	  lwz       r3, 0x10(r3)
	  b         .loc_0x34

	.loc_0x24:
	  lwz       r0, 0x18(r3)
	  cmplw     r28, r0
	  beq-      .loc_0xDC
	  lwz       r3, 0x4(r3)

	.loc_0x34:
	  cmplwi    r3, 0
	  bne+      .loc_0x24
	  lwz       r3, 0x20(r31)
	  lwz       r3, 0x10(r3)
	  b         .loc_0x58

	.loc_0x48:
	  lwz       r0, 0x18(r3)
	  cmplw     r28, r0
	  beq-      .loc_0xDC
	  lwz       r3, 0x4(r3)

	.loc_0x58:
	  cmplwi    r3, 0
	  bne+      .loc_0x48
	  li        r3, 0x24
	  bl        -0x21DCE0
	  mr.       r4, r3
	  beq-      .loc_0xC8
	  lwz       r30, 0x18(r31)
	  mr        r27, r4
	  bl        0x1CF7F8
	  lis       r3, 0x804C
	  addi      r0, r3, 0x1A24
	  stw       r0, 0x0(r27)
	  mulli     r3, r30, 0x30
	  stw       r28, 0x18(r27)
	  bl        -0x21DC04
	  stw       r3, 0x1C(r27)
	  li        r29, 0
	  mr        r28, r29
	  stw       r29, 0x20(r27)
	  b         .loc_0xBC

	.loc_0xA8:
	  lwz       r0, 0x1C(r27)
	  add       r3, r0, r28
	  bl        -0x157930
	  addi      r28, r28, 0x30
	  addi      r29, r29, 0x1

	.loc_0xBC:
	  cmpw      r29, r30
	  blt+      .loc_0xA8
	  mr        r4, r27

	.loc_0xC8:
	  lwz       r3, 0x24(r31)
	  bl        0x1CF81C
	  lwz       r3, 0x1C(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1C(r31)

	.loc_0xDC:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80241C10
 * Size:	000058
 */
void Game::ShadowMgr::killAll(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x34(r3)
	  li        r0, 0
	  stw       r0, 0x10(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0x4(r4)
	  lwz       r4, 0x38(r3)
	  stw       r0, 0x10(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0x4(r4)
	  lwz       r4, 0x20(r3)
	  stw       r0, 0x10(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0x4(r4)
	  lwz       r3, 0x24(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80241C68
 * Size:	000044
 */
void Game::ShadowMgr::killShadow((Game::Creature*))
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
	  bl        0x3AC
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x2F4
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
 * Address:	80241CAC
 * Size:	000044
 */
void Game::ShadowMgr::addShadow((Game::Creature*))
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
	  bl        0x118
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x60
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
 * Address:	........
 * Size:	000044
 */
void Game::ShadowMgr::addHeadShadow((Game::Creature*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241CF0
 * Size:	000044
 */
void Game::ShadowMgr::delShadow((Game::Creature*))
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
	  bl        0x1F8
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x180
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
 * Address:	80241D34
 * Size:	0000AC
 */
void Game::ShadowMgr::addNormalShadow((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  lwz       r3, 0x24(r3)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x84

	.loc_0x2C:
	  lwz       r0, 0x18(r28)
	  cmplw     r4, r0
	  bne-      .loc_0x80
	  mr        r3, r28
	  bl        0x1CF860
	  lwz       r3, 0x20(r29)
	  mr        r4, r28
	  bl        0x1CF68C
	  lwz       r30, 0x18(r29)
	  li        r31, 0
	  mr        r29, r31
	  stw       r31, 0x20(r28)
	  b         .loc_0x74

	.loc_0x60:
	  lwz       r0, 0x1C(r28)
	  add       r3, r0, r29
	  bl        -0x157AFC
	  addi      r29, r29, 0x30
	  addi      r31, r31, 0x1

	.loc_0x74:
	  cmpw      r31, r30
	  blt+      .loc_0x60
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r28, 0x4(r28)

	.loc_0x84:
	  cmplwi    r28, 0
	  bne+      .loc_0x2C

	.loc_0x8C:
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
 * Address:	80241DE0
 * Size:	0000B8
 */
void Game::ShadowMgr::addJointShadow((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  lwz       r3, 0x38(r3)
	  lwz       r28, 0x10(r3)
	  b         .loc_0x9C

	.loc_0x24:
	  lwz       r0, 0x18(r28)
	  lwz       r27, 0x4(r28)
	  cmplw     r26, r0
	  bne-      .loc_0x98
	  mr        r3, r28
	  bl        0x1CF7B8
	  lwz       r3, 0x34(r25)
	  mr        r4, r28
	  bl        0x1CF5E4
	  lwz       r30, 0x18(r25)
	  li        r0, 0
	  stb       r0, 0x1C(r28)
	  lwz       r31, 0x10(r28)
	  b         .loc_0x90

	.loc_0x5C:
	  lwz       r3, 0x1C(r31)
	  bl        -0x157BA0
	  li        r29, 0
	  mr        r28, r29
	  b         .loc_0x84

	.loc_0x70:
	  lwz       r0, 0x20(r31)
	  add       r3, r0, r28
	  bl        -0x157BB8
	  addi      r28, r28, 0x30
	  addi      r29, r29, 0x1

	.loc_0x84:
	  cmpw      r29, r30
	  blt+      .loc_0x70
	  lwz       r31, 0x4(r31)

	.loc_0x90:
	  cmplwi    r31, 0
	  bne+      .loc_0x5C

	.loc_0x98:
	  mr        r28, r27

	.loc_0x9C:
	  cmplwi    r28, 0
	  bne+      .loc_0x24
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void Game::ShadowMgr::addHeadNormalShadow((Game::Creature*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void Game::ShadowMgr::addHeadJointShadow((Game::Creature*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80241E98
 * Size:	00006C
 */
void Game::ShadowMgr::delNormalShadow((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x20(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x4C

	.loc_0x24:
	  lwz       r0, 0x18(r31)
	  cmplw     r4, r0
	  bne-      .loc_0x48
	  mr        r3, r31
	  bl        0x1CF704
	  lwz       r3, 0x24(r30)
	  mr        r4, r31
	  bl        0x1CF530
	  b         .loc_0x54

	.loc_0x48:
	  lwz       r31, 0x4(r31)

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne+      .loc_0x24

	.loc_0x54:
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
 * Address:	80241F04
 * Size:	000080
 */
void Game::ShadowMgr::delJointShadow((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x34(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r0, 0x18(r30)
	  lwz       r31, 0x4(r30)
	  cmplw     r29, r0
	  bne-      .loc_0x54
	  mr        r3, r30
	  bl        0x1CF688
	  lwz       r3, 0x38(r28)
	  mr        r4, r30
	  bl        0x1CF4B4

	.loc_0x54:
	  mr        r30, r31

	.loc_0x58:
	  cmplwi    r30, 0
	  bne+      .loc_0x30
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
 * Address:	80241F84
 * Size:	0000AC
 */
void Game::ShadowMgr::killNormalShadow((Game::Creature*))
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
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x20(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x50

	.loc_0x34:
	  lwz       r0, 0x18(r30)
	  cmplw     r29, r0
	  bne-      .loc_0x4C
	  stw       r31, 0x18(r30)
	  mr        r3, r30
	  bl        0x1CF604

	.loc_0x4C:
	  lwz       r30, 0x4(r30)

	.loc_0x50:
	  cmplwi    r30, 0
	  bne+      .loc_0x34
	  lwz       r3, 0x24(r28)
	  li        r31, 0
	  lwz       r30, 0x10(r3)
	  b         .loc_0x84

	.loc_0x68:
	  lwz       r0, 0x18(r30)
	  cmplw     r29, r0
	  bne-      .loc_0x80
	  stw       r31, 0x18(r30)
	  mr        r3, r30
	  bl        0x1CF5D0

	.loc_0x80:
	  lwz       r30, 0x4(r30)

	.loc_0x84:
	  cmplwi    r30, 0
	  bne+      .loc_0x68
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
 * Address:	80242030
 * Size:	0000AC
 */
void Game::ShadowMgr::killJointShadow((Game::Creature*))
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
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x34(r3)
	  lwz       r3, 0x10(r3)
	  b         .loc_0x50

	.loc_0x34:
	  lwz       r0, 0x18(r3)
	  lwz       r30, 0x4(r3)
	  cmplw     r29, r0
	  bne-      .loc_0x4C
	  stw       r31, 0x18(r3)
	  bl        0x1CF558

	.loc_0x4C:
	  mr        r3, r30

	.loc_0x50:
	  cmplwi    r3, 0
	  bne+      .loc_0x34
	  lwz       r3, 0x38(r28)
	  li        r31, 0
	  lwz       r3, 0x10(r3)
	  b         .loc_0x84

	.loc_0x68:
	  lwz       r0, 0x18(r3)
	  lwz       r30, 0x4(r3)
	  cmplw     r29, r0
	  bne-      .loc_0x80
	  stw       r31, 0x18(r3)
	  bl        0x1CF524

	.loc_0x80:
	  mr        r3, r30

	.loc_0x84:
	  cmplwi    r3, 0
	  bne+      .loc_0x68
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
 * Address:	802420DC
 * Size:	000024
 */
void Game::ShadowMgr::setJointShadowRootNode((Game::JointShadowRootNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x38(r3)
	  bl        0x1CF31C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80242100
 * Size:	0000F0
 */
void Game::ShadowMgr::setForceVisible((Game::Creature*, bool))
{
	/*
	.loc_0x0:
	  lwz       r6, 0x20(r3)
	  lwz       r6, 0x10(r6)
	  b         .loc_0x44

	.loc_0xC:
	  lwz       r0, 0x18(r6)
	  cmplw     r4, r0
	  bne-      .loc_0x40
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x30
	  lwz       r0, 0x20(r6)
	  oris      r0, r0, 0x1000
	  stw       r0, 0x20(r6)
	  b         .loc_0x4C

	.loc_0x30:
	  lwz       r0, 0x20(r6)
	  rlwinm    r0,r0,0,4,31
	  stw       r0, 0x20(r6)
	  b         .loc_0x4C

	.loc_0x40:
	  lwz       r6, 0x4(r6)

	.loc_0x44:
	  cmplwi    r6, 0
	  bne+      .loc_0xC

	.loc_0x4C:
	  lwz       r6, 0x24(r3)
	  lwz       r6, 0x10(r6)
	  b         .loc_0x90

	.loc_0x58:
	  lwz       r0, 0x18(r6)
	  cmplw     r4, r0
	  bne-      .loc_0x8C
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x7C
	  lwz       r0, 0x20(r6)
	  oris      r0, r0, 0x1000
	  stw       r0, 0x20(r6)
	  b         .loc_0x98

	.loc_0x7C:
	  lwz       r0, 0x20(r6)
	  rlwinm    r0,r0,0,4,31
	  stw       r0, 0x20(r6)
	  b         .loc_0x98

	.loc_0x8C:
	  lwz       r6, 0x4(r6)

	.loc_0x90:
	  cmplwi    r6, 0
	  bne+      .loc_0x58

	.loc_0x98:
	  lwz       r6, 0x34(r3)
	  rlwinm    r5,r5,0,24,31
	  lwz       r6, 0x10(r6)
	  b         .loc_0xBC

	.loc_0xA8:
	  lwz       r0, 0x18(r6)
	  cmplw     r4, r0
	  bne-      .loc_0xB8
	  stb       r5, 0x1C(r6)

	.loc_0xB8:
	  lwz       r6, 0x4(r6)

	.loc_0xBC:
	  cmplwi    r6, 0
	  bne+      .loc_0xA8
	  lwz       r3, 0x38(r3)
	  lwz       r3, 0x10(r3)
	  b         .loc_0xE4

	.loc_0xD0:
	  lwz       r0, 0x18(r3)
	  cmplw     r4, r0
	  bne-      .loc_0xE0
	  stb       r5, 0x1C(r3)

	.loc_0xE0:
	  lwz       r3, 0x4(r3)

	.loc_0xE4:
	  cmplwi    r3, 0
	  bne+      .loc_0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802421F0
 * Size:	000030
 */
void Game::ShadowMgr::getSize(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	80242220
 * Size:	000008
 */
void Game::ShadowMgr::getMax(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80242228
 * Size:	000038
 */
void Game::ShadowMgr::getCreature((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  bl        0x1CF464
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  lwz       r3, 0x18(r3)
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
 * Address:	80242260
 * Size:	000008
 */
u32 Game::ShadowMgr::getFirst(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80242268
 * Size:	000008
 */
void Game::ShadowMgr::getNext((int))
{
	/*
	.loc_0x0:
	  addi      r3, r4, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80242270
 * Size:	00004C
 */
void Game::ShadowMgr::isDone((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  srawi     r5, r31, 0x1F
	  rlwinm    r4,r3,1,31,31
	  subc      r0, r31, r3
	  lwz       r31, 0xC(r1)
	  adde      r0, r5, r4
	  rlwinm    r3,r0,0,24,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802422BC
 * Size:	00004C
 */
void Game::ShadowMgr::getShadowMaskType((int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0
	  bne-      .loc_0x10
	  mr        r3, r4
	  blr

	.loc_0x10:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x20
	  rlwinm    r3,r4,4,24,27
	  blr

	.loc_0x20:
	  cmpwi     r5, 0x2
	  bne-      .loc_0x30
	  rlwinm    r3,r4,8,20,23
	  blr

	.loc_0x30:
	  subi      r3, r5, 0x3
	  subfic    r0, r5, 0x3
	  nor       r3, r3, r0
	  rlwinm    r0,r4,12,16,19
	  srawi     r3, r3, 0x1F
	  and       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80242308
 * Size:	00004C
 */
void Game::ShadowMgr::getShadowType((int, int))
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0
	  bne-      .loc_0x10
	  rlwinm    r3,r4,0,28,31
	  blr

	.loc_0x10:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x20
	  rlwinm    r3,r4,28,28,31
	  blr

	.loc_0x20:
	  cmpwi     r5, 0x2
	  bne-      .loc_0x30
	  rlwinm    r3,r4,24,28,31
	  blr

	.loc_0x30:
	  subi      r3, r5, 0x3
	  subfic    r0, r5, 0x3
	  nor       r3, r3, r0
	  rlwinm    r0,r4,20,28,31
	  srawi     r3, r3, 0x1F
	  and       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80242354
 * Size:	000080
 */
void Game::ShadowMgr::isDrawNormalShadow((Game::ShadowNode*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, 0x18(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  lwz       r0, 0x20(r30)
	  rlwinm.   r0,r0,0,0,3
	  bne-      .loc_0x5C
	  lwz       r3, 0x18(r30)
	  li        r0, 0x10
	  slw       r0, r0, r31
	  lbz       r3, 0xD8(r3)
	  and.      r0, r3, r0
	  beq-      .loc_0x64

	.loc_0x5C:
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
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
 * Address:	802423D4
 * Size:	000080
 */
void Game::ShadowMgr::isDrawJointShadow((Game::JointShadowRootNode*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, 0x18(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  lbz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r3, 0x18(r30)
	  li        r0, 0x10
	  slw       r0, r0, r31
	  lbz       r3, 0xD8(r3)
	  and.      r0, r3, r0
	  beq-      .loc_0x64

	.loc_0x5C:
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
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
 * Address:	80242454
 * Size:	0000AC
 */
void Game::ShadowMgr::readShadowParms((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x444(r1)
	  li        r0, 0
	  li        r7, 0
	  li        r8, 0x2
	  stw       r31, 0x43C(r1)
	  li        r9, 0
	  li        r10, 0
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  mr        r3, r4
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x22330C
	  mr.       r31, r3
	  beq-      .loc_0x94
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x1D344C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x74
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x74:
	  mr        r3, r30
	  addi      r4, r1, 0x10
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x21E40C

	.loc_0x94:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80242500
 * Size:	000084
 */
void Game::ShadowMgr::write((Stream&))
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
	  lbz       r0, 0x3C(r3)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x1D3208
	  lbz       r0, 0x3D(r30)
	  mr        r3, r31
	  extsh     r4, r0
	  bl        0x1D31F8
	  lwz       r4, 0x40(r30)
	  mr        r3, r31
	  bl        0x1D327C
	  lwz       r4, 0x44(r30)
	  mr        r3, r31
	  bl        0x1D3270
	  mr        r4, r31
	  addi      r3, r30, 0x48
	  bl        0x1CF5AC
	  lwz       r3, 0x4C(r30)
	  mr        r4, r31
	  bl        0x1D119C
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
 * Address:	80242584
 * Size:	00007C
 */
void Game::ShadowMgr::read((Stream&))
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
	  bl        0x1D21C0
	  stb       r3, 0x3C(r30)
	  mr        r3, r31
	  bl        0x1D21B4
	  stb       r3, 0x3D(r30)
	  mr        r3, r31
	  bl        0x1D24D4
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  bl        0x1D24C8
	  stw       r3, 0x44(r30)
	  mr        r4, r31
	  addi      r3, r30, 0x48
	  bl        0x1CF594
	  lwz       r3, 0x4C(r30)
	  mr        r4, r31
	  bl        0x1D1210
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
 * Address:	80242600
 * Size:	000060
 */
void Game::ShadowMgr::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x19F4
	  stw       r0, 0x0(r30)
	  bl        0x1CEF58
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x21E58C

	.loc_0x44:
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
 * Address:	80242660
 * Size:	000060
 */
void Game::ShadowNode::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1A24
	  stw       r0, 0x0(r30)
	  bl        0x1CEEF8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x21E5EC

	.loc_0x44:
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
 * Address:	802426C0
 * Size:	000060
 */
void Game::JointShadowNode::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1A34
	  stw       r0, 0x0(r30)
	  bl        0x1CEE98
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x21E64C

	.loc_0x44:
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
 * Address:	80242720
 * Size:	000060
 */
void Game::JointShadowRootNode::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1A44
	  stw       r0, 0x0(r30)
	  bl        0x1CEE38
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x21E6AC

	.loc_0x44:
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
 * Address:	80242780
 * Size:	000028
 */
void __sinit_shadowMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6988(r13)
	  stfsu     f0, 0x19E8(r3)
	  stfs      f0, -0x6984(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
