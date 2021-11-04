#include "types.h"

/*
 * --INFO--
 * Address:	80318050
 * Size:	00003C
 */
void og::newScreen::CourseName::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13972C
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x7468
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
void og::newScreen::CourseName::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void og::newScreen::CourseName::getCourseNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031808C
 * Size:	000128
 */
void og::newScreen::CourseName::doUserCallBackFunc((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x4F
	  lis       r5, 0x5552
	  stw       r0, 0x54(r1)
	  addi      r6, r5, 0x5345
	  addi      r4, r4, 0x4741
	  li        r5, 0x434F
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lis       r3, 0x8049
	  lwz       r30, 0x21C(r29)
	  subi      r31, r3, 0x1870
	  mr        r3, r30
	  bl        -0x8DB0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  lwz       r0, 0x8(r30)
	  stw       r0, 0x220(r29)
	  b         .loc_0x70

	.loc_0x58:
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x3A
	  li        r6, 0
	  crclr     6, 0x6
	  bl        -0x2EDAB8

	.loc_0x70:
	  lwz       r0, 0x220(r29)
	  cmpwi     r0, 0x4
	  blt-      .loc_0x84
	  li        r0, 0
	  stw       r0, 0x220(r29)

	.loc_0x84:
	  lwz       r0, 0x220(r29)
	  lis       r3, 0x804E
	  subi      r4, r3, 0x74D8
	  addi      r3, r29, 0x4
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  bl        -0x1DC
	  addi      r3, r1, 0x8
	  addi      r4, r29, 0x4
	  bl        0x1344A4
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1345D4
	  cmplwi    r3, 0
	  li        r30, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  mr        r30, r0
	  bne-      .loc_0x100
	  addi      r3, r31, 0
	  addi      r5, r31, 0x2C
	  li        r4, 0x62
	  crclr     6, 0x6
	  bl        -0x2EDB30
	  b         .loc_0x100

	.loc_0xEC:
	  addi      r3, r31, 0
	  addi      r5, r31, 0x3C
	  li        r4, 0x67
	  crclr     6, 0x6
	  bl        -0x2EDB48

	.loc_0x100:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x24
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
 * Address:	803181B4
 * Size:	000004
 */
void og::newScreen::CourseName::doCreateObj((JKRArchive*)) { }

/*
 * --INFO--
 * Address:	803181B8
 * Size:	000060
 */
void og::newScreen::CourseName::doCreateObjUserCallBackFunc((JKRArchive*))
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
	  li        r3, 0x60
	  bl        -0x2F4334
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0x1824
	  bl        -0xDD0
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x139B78
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
 * Address:	80318218
 * Size:	000008
 */
void og::newScreen::CourseName::getResName( const
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0xA30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80318220
 * Size:	000008
 */
void og::newScreen::CourseName::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x271E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80318228
 * Size:	00000C
 */
void og::newScreen::CourseName::getOwnerID(void)
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
 * Address:	80318234
 * Size:	000010
 */
void og::newScreen::CourseName::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5552
	  li        r3, 0x434F
	  addi      r4, r4, 0x5345
	  blr
	*/
}
