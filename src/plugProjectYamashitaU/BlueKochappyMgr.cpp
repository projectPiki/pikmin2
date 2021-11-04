#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012CC1C
 * Size:	000050
 */
BlueKochappy::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xBDC
	  lis       r3, 0x804B
	  lis       r4, 0x8048
	  subi      r5, r3, 0x1448
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x3F0C
	  stw       r5, 0x4(r31)
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
 * Address:	8012CC6C
 * Size:	000048
 */
void BlueKochappy::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x880
	  bl        -0x108DE0
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x1A894
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        0x2C00
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CCB4
 * Size:	000048
 */
void BlueKochappy::Mgr::loadTexData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  lwz       r4, -0x7C10(r13)
	  bl        0x31F94C
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x31FAC4
	  lwz       r0, 0x30(r3)
	  stw       r0, 0x44(r31)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CCFC
 * Size:	0000C8
 */
BlueKochappy::Mgr::~Mgr()
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804B
	  subi      r3, r3, 0x1448
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0xC08
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x2E47F4

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x108CF0

	.loc_0xAC:
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
 * Address:	8012CDC4
 * Size:	000008
 */
void BlueKochappy::Mgr::getChangeTexture()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CDCC
 * Size:	000008
 */
u32 BlueKochappy::Mgr::getEnemyTypeID() { return 0x2C; }

/*
 * --INFO--
 * Address:	8012CDD4
 * Size:	000060
 */
void BlueKochappy::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x2E8
	  addi      r3, r3, 0x10
	  bl        -0x108E4C
	  lis       r4, 0x8013
	  lis       r5, 0x8013
	  subi      r4, r4, 0x30C8
	  mr        r7, r31
	  subi      r5, r5, 0x31CC
	  li        r6, 0x2E8
	  bl        -0x6B424
	  stw       r3, 0x48(r30)
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
 * Address:	8012CE34
 * Size:	0000EC
 */
BlueKochappy::Obj::~Obj()
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804B
	  addi      r5, r30, 0x2D8
	  subi      r4, r3, 0x1360
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x308
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  subi      r4, r3, 0xB20
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x308
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x2E4698

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x108E4C

	.loc_0xD0:
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
 * Address:	8012CF20
 * Size:	000010
 */
void BlueKochappy::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2E8
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012CF30
 * Size:	000008
 */
BlueKochappy::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x238
	*/
}
} // namespace Game
