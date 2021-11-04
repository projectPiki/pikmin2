#include "types.h"

namespace og {

/*
 * --INFO--
 * Address:	8031BE60
 * Size:	00003C
 */
newScreen::Floor::Floor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13591C
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x7188
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
newScreen::Floor::~Floor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031BE9C
 * Size:	00013C
 */
void newScreen::Floor::doUserCallBackFunc(Resource::MgrCommand*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x4F
	  lis       r6, 0x8049
	  stw       r0, 0x54(r1)
	  lis       r5, 0x4C4F
	  addi      r4, r4, 0x4741
	  stw       r31, 0x4C(r1)
	  subi      r31, r6, 0x1380
	  addi      r6, r5, 0x4F52
	  li        r5, 0x46
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lwz       r3, 0x21C(r3)
	  bl        -0xCBBC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x2C
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x60
	  addi      r4, r31, 0x14

	.loc_0x60:
	  addi      r3, r29, 0x4
	  bl        -0x3FB4
	  addi      r3, r1, 0x8
	  addi      r4, r29, 0x4
	  bl        0x1306CC
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1307FC
	  cmplwi    r3, 0
	  li        r30, 0
	  beq-      .loc_0xB4
	  lwz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  mr        r30, r0
	  bne-      .loc_0xC8
	  addi      r3, r31, 0
	  addi      r5, r31, 0x48
	  li        r4, 0x5B
	  crclr     6, 0x6
	  bl        -0x2F1908
	  b         .loc_0xC8

	.loc_0xB4:
	  addi      r3, r31, 0
	  addi      r5, r31, 0x58
	  li        r4, 0x60
	  crclr     6, 0x6
	  bl        -0x2F1920

	.loc_0xC8:
	  li        r3, 0xBC
	  bl        -0x2F80C4
	  mr.       r4, r3
	  beq-      .loc_0xE4
	  addi      r4, r31, 0x68
	  bl        -0x1BB0
	  mr        r4, r3

	.loc_0xE4:
	  mr        r3, r29
	  mr        r5, r30
	  bl        0x135DEC
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x1362E4
	  b         .loc_0x120

	.loc_0x10C:
	  addi      r3, r31, 0
	  addi      r5, r31, 0x78
	  li        r4, 0x6F
	  crclr     6, 0x6
	  bl        -0x2F1978

	.loc_0x120:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BFD8
 * Size:	000004
 */
void newScreen::Floor::doCreateObj(JKRArchive*) { }

/*
 * --INFO--
 * Address:	8031BFDC
 * Size:	000008
 */
void newScreen::Floor::getResName() const
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x7A8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BFE4
 * Size:	000008
 */
u32 newScreen::Floor::getSceneType(void) { return 0x2713; }

/*
 * --INFO--
 * Address:	8031BFEC
 * Size:	00000C
 */
void newScreen::Floor::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BFF8
 * Size:	000010
 */
void newScreen::Floor::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C4F
	  li        r3, 0x46
	  addi      r4, r4, 0x4F52
	  blr
	*/
}
} // namespace og
