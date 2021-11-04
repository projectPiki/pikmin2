#include "types.h"

/*
 * --INFO--
 * Address:	804560C8
 * Size:	00003C
 */
void P2JME::Analyzer::__ct((JMessage::TReference const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1CEEC
	  lis       r4, 0x804F
	  mr        r3, r31
	  subi      r0, r4, 0x23A0
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
 * Address:	80456104
 * Size:	000004
 */
void P2JME::Analyzer::do_character((int)) { }

/*
 * --INFO--
 * Address:	80456108
 * Size:	00007C
 */
void P2JME::Analyzer::exec((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  bl        -0x18DBC
	  lwz       r30, 0x8(r1)
	  mr        r3, r29
	  lwz       r31, 0xC(r1)
	  li        r4, 0
	  bl        -0x44EFEC
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  li        r6, 0
	  bl        -0x44F2F8
	  mr        r3, r29
	  li        r4, 0
	  bl        -0x44E00C
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
 * Address:	........
 * Size:	000064
 */
void P2JME::Analyzer::exec((unsigned short, unsigned short))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void P2JME::Analyzer::exec((unsigned long))
{
	// UNUSED FUNCTION
}
