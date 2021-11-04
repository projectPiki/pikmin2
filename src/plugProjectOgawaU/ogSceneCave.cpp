#include "types.h"

/*
 * --INFO--
 * Address:	8031CC90
 * Size:	00003C
 */
void og::newScreen::Cave::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x134AEC
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x70B0
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
void og::newScreen::Cave::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CCCC
 * Size:	000004
 */
void og::newScreen::Cave::doUserCallBackFunc((Resource::MgrCommand*)) { }

/*
 * --INFO--
 * Address:	8031CCD0
 * Size:	000078
 */
void og::newScreen::Cave::doCreateObj((JKRArchive*))
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
	  li        r3, 0x7C
	  bl        -0x2F8E4C
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0x1248
	  bl        -0xCFC
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x135060
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x135558
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
 * Address:	8031CD48
 * Size:	00000C
 */
void og::newScreen::Cave::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0x123C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031CD54
 * Size:	000008
 */
void og::newScreen::Cave::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2711
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031CD5C
 * Size:	00000C
 */
void og::newScreen::Cave::getOwnerID(void)
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
 * Address:	8031CD68
 * Size:	000010
 */
void og::newScreen::Cave::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4341
	  li        r3, 0
	  addi      r4, r4, 0x5645
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031CD78
 * Size:	000008
 */
void og::newScreen::Cave::isDrawInDemo( const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}
