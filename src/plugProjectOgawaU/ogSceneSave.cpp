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
 * Address:	80324DB4
 * Size:	00003C
 */
void og::newScreen::Save::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x12C9C8
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x66E8
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
void og::newScreen::Save::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80324DF0
 * Size:	000078
 */
void og::newScreen::Save::doUserCallBackFunc((Resource::MgrCommand*))
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
	  bl        0xB7A64
	  stw       r3, 0x220(r29)
	  lwz       r31, 0x220(r29)
	  addi      r3, r31, 0x18
	  bl        0xB8B98
	  lwz       r30, -0x77D4(r13)
	  addi      r3, r31, 0x100
	  mr        r4, r30
	  bl        0x9D484
	  lwz       r3, -0x6514(r13)
	  mr        r4, r30
	  lwz       r3, 0x5C(r3)
	  bl        0x11DD90
	  mr        r3, r29
	  li        r4, 0
	  bl        0x50
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
 * Address:	80324E68
 * Size:	000030
 */
void og::newScreen::Save::doCreateObj((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r6, 0xFF
	  li        r7, 0xFF
	  bl        0x12D400
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80324E98
 * Size:	000068
 */
void og::newScreen::Save::doCreateObjUserCallBackFunc((JKRArchive*))
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
	  li        r3, 0x48
	  bl        -0x301014
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0xCE8
	  bl        -0x478
	  mr        r4, r3

	.loc_0x3C:
	  lwz       r0, 0x220(r30)
	  mr        r3, r30
	  mr        r5, r31
	  stw       r0, 0x40(r4)
	  bl        0x12CE90
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
 * Address:	80324F00
 * Size:	000008
 */
void og::newScreen::Save::getResName( const
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5F0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80324F08
 * Size:	000008
 */
u32  og::newScreen::Save::getSceneType(void)
{
	return 0x2725;
}

/*
 * --INFO--
 * Address:	80324F10
 * Size:	00000C
 */
void og::newScreen::Save::getOwnerID(void)
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
 * Address:	80324F1C
 * Size:	000010
 */
void og::newScreen::Save::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5341
	  li        r3, 0
	  addi      r4, r4, 0x5645
	  blr
	*/
}
