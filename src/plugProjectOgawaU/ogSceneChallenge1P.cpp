#include "types.h"

/*
 * --INFO--
 * Address:	80328C30
 * Size:	00003C
 */
void og::newScreen::Challenge1P::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x40EC
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x6470
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
 * Size:	000060
 */
void og::newScreen::Challenge1P::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80328C6C
 * Size:	000004
 */
void og::newScreen::Challenge1P::doUserCallBackFunc((Resource::MgrCommand*)) { }

/*
 * --INFO--
 * Address:	80328C70
 * Size:	00009C
 */
void og::newScreen::Challenge1P::doCreateObj((JKRArchive*))
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
	  bl        -0x304DEC
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0xB30
	  bl        -0xF5C
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x1290C0
	  li        r3, 0xD4
	  bl        -0x304E18
	  mr.       r4, r3
	  beq-      .loc_0x60
	  bl        0x1C74C
	  mr        r4, r3

	.loc_0x60:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x12909C
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x129594
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
 * Address:	80328D0C
 * Size:	00004C
 */
void og::newScreen::Challenge1P::doStart((Screen::StartSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r5, 0xB30
	  bl        0x128B9C
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80328D58
 * Size:	000038
 */
void og::newScreen::Challenge1P::doUpdateActive(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6C18(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  lwz       r4, 0x21C(r3)
	  lfs       f1, 0x5C(r4)
	  addi      r4, r4, 0x68
	  bl        0x3FF8

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80328D90
 * Size:	00003C
 */
void og::newScreen::Challenge1P::startCountDown(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0xB1C
	  bl        0x128B20
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80328DCC
 * Size:	00000C
 */
void og::newScreen::Challenge1P::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0xB08
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80328DD8
 * Size:	000008
 */
void og::newScreen::Challenge1P::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2727
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80328DE0
 * Size:	00000C
 */
void og::newScreen::Challenge1P::getOwnerID(void)
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
 * Address:	80328DEC
 * Size:	000010
 */
void og::newScreen::Challenge1P::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x414C
	  li        r3, 0x4348
	  addi      r4, r4, 0x3150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80328DFC
 * Size:	000008
 */
void og::newScreen::Challenge1P::isDrawInDemo( const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}
