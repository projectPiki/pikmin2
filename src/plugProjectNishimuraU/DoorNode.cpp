#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8024B874
 * Size:	000014
 */
Cave::Adjust::Adjust(void)
{
	/*
	.loc_0x0:
	  li        r0, -0x1
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B888
 * Size:	000044
 */
Cave::AdjustNode::AdjustNode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1C5AF4
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r4, r3, 0x1A58
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B8CC
 * Size:	00004C
 */
Cave::AdjustNode::AdjustNode(Game::Cave::Adjust*)
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
	  bl        0x1C5AA8
	  lis       r4, 0x804C
	  mr        r3, r30
	  addi      r0, r4, 0x1A58
	  stw       r0, 0x0(r30)
	  stw       r31, 0x18(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B918
 * Size:	000010
 */
Cave::Door::Door(void)
{
	/*
	.loc_0x0:
	  li        r0, -0x1
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B928
 * Size:	000050
 */
Cave::DoorNode::DoorNode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1C5A54
	  lis       r3, 0x804C
	  li        r0, -0x1
	  addi      r4, r3, 0x1AF8
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B978
 * Size:	000064
 */
Cave::DoorNode::DoorNode(Game::Cave::Door&)
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
	  bl        0x1C59FC
	  lis       r3, 0x804C
	  li        r0, -0x1
	  addi      r4, r3, 0x1AF8
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  stw       r0, 0x18(r30)
	  stw       r0, 0x1C(r30)
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x18(r30)
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x1C(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B9DC
 * Size:	000070
 */
void Cave::DoorNode::isDoorAdjust(Game::Cave::DoorNode*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x18(r3)
	  lwz       r3, 0x18(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x20
	  cmpwi     r3, 0x2
	  bne-      .loc_0x20
	  li        r3, 0x1
	  blr

	.loc_0x20:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x38
	  cmpwi     r3, 0
	  bne-      .loc_0x38
	  li        r3, 0x1
	  blr

	.loc_0x38:
	  cmpwi     r0, 0x3
	  bne-      .loc_0x50
	  cmpwi     r3, 0x1
	  bne-      .loc_0x50
	  li        r3, 0x1
	  blr

	.loc_0x50:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x68
	  cmpwi     r3, 0x3
	  bne-      .loc_0x68
	  li        r3, 0x1
	  blr

	.loc_0x68:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024BA4C
 * Size:	000060
 */
Cave::DoorNode::~DoorNode(void)
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
	  addi      r0, r5, 0x1AF8
	  stw       r0, 0x0(r30)
	  bl        0x1C5B0C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x2279D8

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
} // namespace Game
