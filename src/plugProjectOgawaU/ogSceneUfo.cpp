#include "types.h"

namespace og {

/*
 * --INFO--
 * Address:	803248F4
 * Size:	00003C
 */
newScreen::UfoMenu::UfoMenu(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x12CE88
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x67B0
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
newScreen::UfoMenu::~UfoMenu(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80324930
 * Size:	000004
 */
void newScreen::UfoMenu::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80324934
 * Size:	000078
 */
void newScreen::UfoMenu::doCreateObj(JKRArchive*)
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
	  li        r3, 0x90
	  bl        -0x300AB0
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0xD38
	  bl        -0x11D0
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x12D3FC
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0xA0
	  bl        0x12D8F4
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
 * Address:	803249AC
 * Size:	000060
 */
void newScreen::UfoMenu::doConfirmSetScene(Screen::SetSceneArg&)
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
	  cmpwi     r3, 0x2717
	  bge-      .loc_0x3C
	  cmpwi     r3, 0x2710
	  beq-      .loc_0x44
	  b         .loc_0x48

	.loc_0x3C:
	  cmpwi     r3, 0x2719
	  bge-      .loc_0x48

	.loc_0x44:
	  li        r31, 0x1

	.loc_0x48:
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
 * Address:	80324A0C
 * Size:	00000C
 */
void newScreen::UfoMenu::doSetBackupScene(Screen::SetSceneArg&)
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
 * Address:	80324A18
 * Size:	00000C
 */
void newScreen::UfoMenu::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0xD28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80324A24
 * Size:	000008
 */
u32 newScreen::UfoMenu::getSceneType(void) { return 0x2719; }

/*
 * --INFO--
 * Address:	80324A2C
 * Size:	00000C
 */
void newScreen::UfoMenu::getOwnerID(void)
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
 * Address:	80324A38
 * Size:	000014
 */
void newScreen::UfoMenu::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4D45
	  lis       r3, 0x55
	  addi      r4, r4, 0x4E55
	  addi      r3, r3, 0x464F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80324A4C
 * Size:	000008
 */
u32 newScreen::UfoMenu::isUseBackupSceneInfo(void) { return 0x1; }
} // namespace og
