#include "types.h"

/*
 * --INFO--
 * Address:	80327C5C
 * Size:	00003C
 */
void og::newScreen::Vs::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x129B20
	  lis       r4, 0x804E
	  mr        r3, r31
	  subi      r0, r4, 0x6548
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
void og::newScreen::Vs::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80327C98
 * Size:	000004
 */
void og::newScreen::Vs::doUserCallBackFunc((Resource::MgrCommand*)) { }

/*
 * --INFO--
 * Address:	80327C9C
 * Size:	000078
 */
void og::newScreen::Vs::doCreateObj((JKRArchive*))
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
	  li        r3, 0x12C
	  bl        -0x303E18
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lis       r4, 0x8049
	  subi      r4, r4, 0xBF0
	  bl        -0x2290
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x12A094
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x12A58C
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
 * Address:	80327D14
 * Size:	00000C
 */
void og::newScreen::Vs::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0xBE4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80327D20
 * Size:	000008
 */
u32  og::newScreen::Vs::getSceneType(void)
{
	return 0x2712;
}

/*
 * --INFO--
 * Address:	80327D28
 * Size:	00000C
 */
void og::newScreen::Vs::getOwnerID(void)
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
 * Address:	80327D34
 * Size:	00000C
 */
void og::newScreen::Vs::getMemberID(void)
{
	/*
	.loc_0x0:
	  li        r4, 0x5653
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80327D40
 * Size:	000008
 */
u32  og::newScreen::Vs::isDrawInDemo( const
{
	return 0x0;
}
