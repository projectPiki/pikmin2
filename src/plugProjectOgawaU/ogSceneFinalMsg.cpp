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
 * Address:	803258E8
 * Size:	00003C
 */
void og::newScreen::FinalMsg::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x12BE94
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x6620
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
void og::newScreen::FinalMsg::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80325924
 * Size:	000004
 */
void og::newScreen::FinalMsg::doUserCallBackFunc((Resource::MgrCommand*)) { }

/*
 * --INFO--
 * Address:	80325928
 * Size:	000078
 */
void og::newScreen::FinalMsg::doCreateObj((JKRArchive*))
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
	  li        r3, 0x5C
	  bl        -0x301AA4
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0xCC8
	  bl        -0xA30
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x12C408
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0xB4
	  bl        0x12C900
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
 * Address:	803259A0
 * Size:	000064
 */
void og::newScreen::FinalMsg::doGetFinishState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x4F
	  lis       r6, 0x4C4D
	  stw       r0, 0x14(r1)
	  lis       r5, 0x4649
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5347
	  stw       r31, 0xC(r1)
	  addi      r5, r5, 0x4E41
	  stw       r30, 0x8(r1)
	  li        r30, 0
	  lwz       r31, 0x21C(r3)
	  mr        r3, r31
	  bl        -0x166BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  lwz       r30, 0x8(r31)

	.loc_0x48:
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
 * Address:	80325A04
 * Size:	00000C
 */
void og::newScreen::FinalMsg::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0xCB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80325A10
 * Size:	000008
 */
void og::newScreen::FinalMsg::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2726
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80325A18
 * Size:	00000C
 */
void og::newScreen::FinalMsg::getOwnerID(void)
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
 * Address:	80325A24
 * Size:	000014
 */
void og::newScreen::FinalMsg::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C4D
	  lis       r3, 0x4649
	  addi      r4, r4, 0x5347
	  addi      r3, r3, 0x4E41
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80325A38
 * Size:	000008
 */
void og::newScreen::FinalMsg::isUseBackupSceneInfo(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}
