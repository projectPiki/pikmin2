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
 * Address:	80323584
 * Size:	000050
 */
void og::newScreen::SMenuPauseDoukutu::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x12E1F8
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7A14
	  li        r4, 0x1
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x687C
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
void og::newScreen::SMenuPauseDoukutu::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803235D4
 * Size:	000004
 */
void og::newScreen::SMenuPauseDoukutu::doUserCallBackFunc(
    (Resource::MgrCommand*))
{
}

/*
 * --INFO--
 * Address:	803235D8
 * Size:	000060
 */
void og::newScreen::SMenuPauseDoukutu::doCreateObj((JKRArchive*))
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
	  li        r3, 0xFC
	  bl        -0x2FF754
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0xDC0
	  bl        -0x1580
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x12E758
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
 * Address:	80323638
 * Size:	000090
 */
void og::newScreen::SMenuPauseDoukutu::doGetFinishState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r30, 0x220(r3)
	  cmpwi     r30, 0x1
	  bne-      .loc_0x74
	  lwz       r31, 0x21C(r3)
	  lis       r4, 0x4F
	  lis       r6, 0x5F41
	  li        r5, 0x534D
	  mr        r3, r31
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4C4C
	  bl        -0x14358
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  lis       r4, 0x4F
	  lis       r6, 0x5345
	  lis       r5, 0x50
	  mr        r3, r31
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5F44
	  addi      r5, r5, 0x4155
	  bl        -0x141DC
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r30, 0x14(r3)

	.loc_0x74:
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
 * Address:	803236C8
 * Size:	000004
 */
void og::newScreen::SMenuPauseDoukutu::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	803236CC
 * Size:	000068
 */
void og::newScreen::SMenuPauseDoukutu::doConfirmSetScene((Screen::SetSceneArg&))
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
	  subi      r3, r3, 0x68EC
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
 * Address:	80323734
 * Size:	00000C
 */
void og::newScreen::SMenuPauseDoukutu::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0xDA4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80323740
 * Size:	000008
 */
u32  og::newScreen::SMenuPauseDoukutu::getSceneType(void)
{
	return 0x271B;
}

/*
 * --INFO--
 * Address:	80323748
 * Size:	00000C
 */
void og::newScreen::SMenuPauseDoukutu::getOwnerID(void)
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
 * Address:	80323754
 * Size:	000014
 */
void og::newScreen::SMenuPauseDoukutu::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5345
	  lis       r3, 0x50
	  addi      r4, r4, 0x5F44
	  addi      r3, r3, 0x4155
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80323768
 * Size:	000008
 */
u32  og::newScreen::SMenuPauseDoukutu::isUseBackupSceneInfo(void)
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	80323770
 * Size:	000028
 */
void __sinit_ogSceneSMenuPauseDoukutu_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x67F8(r13)
	  stfsu     f0, -0x68F8(r3)
	  stfs      f0, -0x67F4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
