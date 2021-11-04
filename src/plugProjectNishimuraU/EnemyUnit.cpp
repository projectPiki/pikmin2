#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802440F4
 * Size:	000074
 */
Cave::EnemyNode::EnemyNode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1CD288
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r0, r4, 0x1AA8
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r3, 0x1A78
	  li        r0, -0x1
	  lfs       f0, -0x3C58(r2)
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  stw       r4, 0x18(r31)
	  stw       r4, 0x1C(r31)
	  stw       r0, 0x20(r31)
	  stw       r4, 0x24(r31)
	  stfs      f0, 0x28(r31)
	  stfs      f0, 0x34(r31)
	  stfs      f0, 0x30(r31)
	  stfs      f0, 0x2C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80244168
 * Size:	000060
 */
ObjectLayoutNode::~ObjectLayoutNode(void)
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
	  addi      r0, r5, 0x1AA8
	  stw       r0, 0x0(r30)
	  bl        0x1CD3F0
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x2200F4

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
 * Address:	802441C8
 * Size:	000094
 */
Cave::EnemyNode::EnemyNode(Game::Cave::EnemyUnit*, Game::Cave::BaseGen*, int)
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
	  bl        0x1CD19C
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r4, r4, 0x1AA8
	  li        r0, -0x1
	  stw       r4, 0x0(r28)
	  addi      r4, r3, 0x1A78
	  lfs       f0, -0x3C58(r2)
	  mr        r3, r28
	  stw       r4, 0x0(r28)
	  stw       r29, 0x18(r28)
	  stw       r30, 0x1C(r28)
	  stw       r0, 0x20(r28)
	  stw       r31, 0x24(r28)
	  stfs      f0, 0x28(r28)
	  stfs      f0, 0x34(r28)
	  stfs      f0, 0x30(r28)
	  stfs      f0, 0x2C(r28)
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
 * Address:	8024425C
 * Size:	0001A8
 */
void Cave::EnemyNode::makeGlobalData(Game::Cave::MapNode*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r31, r3
	  mr        r30, r4
	  lwz       r5, 0x1C(r3)
	  addi      r3, r1, 0x8
	  bl        -0x7AC
	  lfs       f0, 0x8(r1)
	  mr        r3, r30
	  stfs      f0, 0x2C(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x34(r31)
	  lwz       r4, 0x1C(r31)
	  bl        -0x3B0
	  stfs      f1, 0x28(r31)
	  lwz       r3, 0x1C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x188
	  lfs       f31, 0x2C(r3)
	  bl        -0x17AD30
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f2, -0x3C40(r2)
	  stw       r0, 0x18(r1)
	  lfs       f0, -0x3C54(r2)
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f31, f1
	  fdivs     f31, f1, f0
	  bl        -0x17AD5C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x3C40(r2)
	  stw       r0, 0x20(r1)
	  lfs       f2, -0x3C50(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x3C54(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x3C58(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  stfs      f1, 0x28(r31)
	  lfs       f1, 0x28(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x110
	  lfs       f0, -0x3C4C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x134

	.loc_0x110:
	  lfs       f0, -0x3C48(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x134:
	  lfs       f1, 0x2C(r31)
	  lfs       f0, -0x3C58(r2)
	  fmadds    f1, f31, f2, f1
	  stfs      f1, 0x2C(r31)
	  lfs       f2, 0x28(r31)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x154
	  fneg      f2, f2

	.loc_0x154:
	  lfs       f1, -0x3C48(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x34(r31)
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x34(r31)

	.loc_0x188:
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80244404
 * Size:	000020
 */
void setGlobalData__Q34Game4Cave9EnemyNodeFR10Vector3f f(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x34(r3)
	  stfs      f1, 0x28(r3)
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80244424
 * Size:	000008
 */
void Cave::EnemyNode::setBirthDoorIndex(int a1)
{
	// Generated from stw r4, 0x20(r3)
	_20 = a1;
}

/*
 * --INFO--
 * Address:	8024442C
 * Size:	000020
 */
void Cave::EnemyNode::getObjectId(void)
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
 * Address:	8024444C
 * Size:	000020
 */
void Cave::EnemyNode::getExtraCode(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x18
	  lha       r3, 0x26(r3)
	  blr

	.loc_0x18:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024446C
 * Size:	000020
 */
void Cave::EnemyNode::getObjectType(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x18
	  lbz       r3, 0x24(r3)
	  blr

	.loc_0x18:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024448C
 * Size:	000008
 */
void Cave::EnemyNode::getBirthCount(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80244494
 * Size:	000014
 */
void Cave::EnemyNode::getBirthPosition(float&, float&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x34(r3)
	  stfs      f0, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802444A8
 * Size:	000008
 */
void Cave::EnemyNode::getDirection(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802444B0
 * Size:	000008
 */
void Cave::EnemyNode::getBirthDoorIndex(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802444B8
 * Size:	000070
 */
Cave::EnemyNode::~EnemyNode(void)
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
	  addi      r0, r4, 0x1A78
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1AA8
	  stw       r0, 0x0(r30)
	  bl        0x1CD090

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x220454

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
} // namespace Game
