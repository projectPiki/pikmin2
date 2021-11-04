#include "types.h"

namespace og {

/*
 * --INFO--
 * Address:	80319BDC
 * Size:	000044
 */
newScreen::KanteiDemo::KanteiDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x137BA0
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x7348
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x220(r31)
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
newScreen::KanteiDemo::~KanteiDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80319C20
 * Size:	000004
 */
void newScreen::KanteiDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80319C24
 * Size:	000068
 */
void newScreen::KanteiDemo::doCreateObj(JKRArchive*)
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
	  li        r3, 0xF8
	  bl        -0x2F5DA0
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0x1548
	  bl        -0x1A14
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, 0x220(r30)
	  mr        r3, r30
	  mr        r5, r31
	  lwz       r4, 0x220(r30)
	  bl        0x138104
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
 * Address:	80319C8C
 * Size:	00000C
 */
void newScreen::KanteiDemo::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0x1538
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80319C98
 * Size:	000008
 */
u32 newScreen::KanteiDemo::getSceneType(void) { return 0x2722; }

/*
 * --INFO--
 * Address:	80319CA0
 * Size:	00000C
 */
void newScreen::KanteiDemo::getOwnerID(void)
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
 * Address:	80319CAC
 * Size:	000010
 */
void newScreen::KanteiDemo::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4E54
	  li        r3, 0x4B41
	  addi      r4, r4, 0x4549
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80319CBC
 * Size:	000008
 */
u32 newScreen::KanteiDemo::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace og
