#include "types.h"

/*
 * --INFO--
 * Address:	8024FCC8
 * Size:	00005C
 */
void Game::Cave::GateNode::GateNode()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1C16B4
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r4, r4, 0x1AA8
	  li        r0, 0
	  stw       r4, 0x0(r31)
	  addi      r4, r3, 0x1B78
	  lfs       f0, -0x3AF8(r2)
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x20(r31)
	  stfs      f0, 0x1C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024FD24
 * Size:	00009C
 */
void Game::Cave::GateNode::GateNode(Game::Cave::GateUnit*, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        0x1C1640
	  xoris     r3, r31, 0x8000
	  lis       r0, 0x4330
	  lis       r4, 0x804C
	  stw       r3, 0xC(r1)
	  addi      r4, r4, 0x1AA8
	  lis       r3, 0x804C
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1B78
	  lfd       f1, -0x3AF0(r2)
	  mr        r3, r28
	  stw       r4, 0x0(r28)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x0(r28)
	  fsubs     f0, f0, f1
	  lfs       f1, -0x3AF4(r2)
	  stw       r29, 0x18(r28)
	  fmuls     f0, f1, f0
	  stw       r30, 0x20(r28)
	  stfs      f0, 0x1C(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024FDC0
 * Size:	000020
 */
void Game::Cave::GateNode::getObjectId()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x18
	  lwz       r3, 0x18(r3)
	  blr

	.loc_0x18:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024FDE0
 * Size:	000008
 */
u32 Game::Cave::GateNode::getObjectType() { return 0x2; }

/*
 * --INFO--
 * Address:	8024FDE8
 * Size:	000008
 */
u32 Game::Cave::GateNode::getBirthCount() { return 0x1; }

/*
 * --INFO--
 * Address:	8024FDF0
 * Size:	000008
 */
void Game::Cave::GateNode::getDirection()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024FDF8
 * Size:	000008
 */
void Game::Cave::GateNode::getBirthDoorIndex()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024FE00
 * Size:	000070
 */
void Game::Cave::GateNode::~GateNode()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804C
	  addi      r0, r4, 0x1B78
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1AA8
	  stw       r0, 0x0(r30)
	  bl        0x1C1748

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x22BD9C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
