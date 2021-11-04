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
 * Address:	80313F4C
 * Size:	000050
 */
void og::newScreen::SMenuItem::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13D830
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7A14
	  li        r4, 0x1
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x7818
	  mr        r3, r31
	  stw       r4, 0x220(r31)
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
 * Size:	000084
 */
void og::newScreen::SMenuItem::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80313F9C
 * Size:	000068
 */
void og::newScreen::SMenuItem::doConfirmSetScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  subi      r0, r3, 0x2710
	  cmplwi    r0, 0x1B
	  bgt-      .loc_0x50
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x7888
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r31, 0x1

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80314004
 * Size:	00000C
 */
void og::newScreen::SMenuItem::doSetBackupScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x9(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80314010
 * Size:	000004
 */
void og::newScreen::SMenuItem::doUserCallBackFunc((Resource::MgrCommand*)) { }

/*
 * --INFO--
 * Address:	80314014
 * Size:	000060
 */
void og::newScreen::SMenuItem::doCreateObj((JKRArchive*))
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
	  li        r3, 0xD4
	  bl        -0x2F0190
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0x1AB0
	  bl        -0x1150
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x13DD1C
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
 * Address:	80314074
 * Size:	000004
 */
void og::newScreen::SMenuItem::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	80314078
 * Size:	00000C
 */
void og::newScreen::SMenuItem::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0x1A9C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80314084
 * Size:	000008
 */
u32  og::newScreen::SMenuItem::getSceneType(void)
{
	return 0x271C;
}

/*
 * --INFO--
 * Address:	8031408C
 * Size:	00000C
 */
void og::newScreen::SMenuItem::getOwnerID(void)
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
 * Address:	80314098
 * Size:	000014
 */
void og::newScreen::SMenuItem::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4954
	  lis       r3, 0x53
	  addi      r4, r4, 0x454D
	  addi      r3, r3, 0x4D5F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803140AC
 * Size:	000008
 */
u32  og::newScreen::SMenuItem::isUseBackupSceneInfo(void)
{
	return 0x1;
}
