#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802850F0
 * Size:	000050
 */
Fart::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2786C
	  lis       r3, 0x804D
	  lis       r4, 0x8048
	  subi      r5, r3, 0x6BE8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x7C10
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
 * Address:	80285140
 * Size:	000048
 */
void Fart::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x948
	  bl        -0x2612B4
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0xC5C
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x1558D4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285188
 * Size:	000060
 */
void Fart::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x300
	  addi      r3, r3, 0x10
	  bl        -0x261200
	  lis       r4, 0x8028
	  lis       r5, 0x8028
	  addi      r4, r4, 0x5448
	  mr        r7, r31
	  addi      r5, r5, 0x51E8
	  li        r6, 0x300
	  bl        -0x1C37D8
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
 * Address:	802851E8
 * Size:	0000F0
 */
Fart::Obj::~Obj()
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
	  beq-      .loc_0xD4
	  lis       r3, 0x804D
	  addi      r0, r30, 0x2F0
	  subi      r4, r3, 0x6B00
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x320
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
	  lis       r3, 0x804C
	  addi      r0, r30, 0x2DC
	  addi      r4, r3, 0x30A8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x320
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
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
	  bl        0x18C2E0

	.loc_0xC4:
	  extsh.    r0, r31
	  ble-      .loc_0xD4
	  mr        r3, r30
	  bl        -0x261204

	.loc_0xD4:
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
 * Address:	802852D8
 * Size:	000010
 */
void Fart::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x300
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802852E8
 * Size:	000080
 */
void Fart::Mgr::loadTexData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r0, 0x44(r3)
	  addi      r3, r1, 0x8
	  lwz       r4, -0x7B58(r13)
	  bl        0x1C72CC
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1C7488
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x30(r3)
	  stw       r0, 0x44(r31)

	.loc_0x44:
	  lwz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x7C28
	  li        r4, 0x53
	  addi      r5, r5, 0x7C34
	  crclr     6, 0x6
	  bl        -0x25AD10

	.loc_0x6C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285368
 * Size:	0000C8
 */
Fart::Mgr::~Mgr()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x6BE8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x2FC0
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
	  bl        0x18C188

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x26135C

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
 * Address:	80285430
 * Size:	000008
 */
u32 Fart::Mgr::getEnemyTypeID() { return 0xB; }

/*
 * --INFO--
 * Address:	80285438
 * Size:	000008
 */
void Fart::Mgr::getChangeTexture()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285440
 * Size:	000008
 */
Fart::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xDC
	*/
}
} // namespace Game
