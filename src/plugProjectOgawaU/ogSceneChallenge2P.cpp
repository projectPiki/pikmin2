#include "types.h"

namespace og {

/*
 * --INFO--
 * Address:	8031FD04
 * Size:	00003C
 */
newScreen::Challenge2P::Challenge2P(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xD018
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x6AC0
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
newScreen::Challenge2P::~Challenge2P(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031FD40
 * Size:	000004
 */
void newScreen::Challenge2P::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031FD44
 * Size:	0000C0
 */
void newScreen::Challenge2P::doCreateObj(JKRArchive*)
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
	  li        r3, 0x74
	  bl        -0x2FBEC0
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0x1078
	  bl        -0x1190
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x131FEC
	  li        r3, 0xD4
	  bl        -0x2FBEEC
	  mr.       r4, r3
	  beq-      .loc_0x60
	  bl        0x25880
	  mr        r4, r3

	.loc_0x60:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x131FC8
	  li        r3, 0xD4
	  bl        -0x2FBF10
	  mr.       r4, r3
	  beq-      .loc_0x84
	  bl        0x25AA8
	  mr        r4, r3

	.loc_0x84:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x131FA4
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x13249C
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
 * Address:	8031FE04
 * Size:	00004C
 */
void newScreen::Challenge2P::doStart(Screen::StartSceneArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r5, 0x1078
	  bl        0x131AA4
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
 * Address:	8031FE50
 * Size:	000038
 */
void newScreen::Challenge2P::doUpdateActive(void)
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
	  bl        0xCF00

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031FE88
 * Size:	000084
 */
void newScreen::Challenge2P::startCountDown(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0x1064
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x131A20
	  lis       r4, 0x8049
	  mr        r0, r3
	  mr        r3, r31
	  subi      r4, r4, 0x1050
	  mr        r31, r0
	  bl        0x131A08
	  mr        r0, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r31, r0
	  li        r4, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF0C
 * Size:	00000C
 */
void newScreen::Challenge2P::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0x103C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF18
 * Size:	000008
 */
u32 newScreen::Challenge2P::getSceneType(void) { return 0x2724; }

/*
 * --INFO--
 * Address:	8031FF20
 * Size:	00000C
 */
void newScreen::Challenge2P::getOwnerID(void)
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
 * Address:	8031FF2C
 * Size:	000010
 */
void newScreen::Challenge2P::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x414C
	  li        r3, 0x4348
	  addi      r4, r4, 0x3250
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031FF3C
 * Size:	000008
 */
u32 newScreen::Challenge2P::isDrawInDemo() const { return 0x0; }
} // namespace og
