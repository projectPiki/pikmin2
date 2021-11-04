#include "types.h"

/*
 * --INFO--
 * Address:	8002ECCC
 * Size:	000040
 */
JUTNameTab::JUTNameTab()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x4E0
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  bl        0x58
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
 * Address:	8002ED0C
 * Size:	00003C
 */
JUTNameTab::JUTNameTab(const ResNTAB*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x4E0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  bl        .loc_0x3C
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
JUTNameTab::JUTNameTab(const JUTNameTab&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002ED48
 * Size:	00003C
 */
void JUTNameTab::setResource(const ResNTAB*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  stw       r4, 0x4(r3)
	  beq-      .loc_0x2C
	  lhz       r0, 0x0(r4)
	  sth       r0, 0xC(r3)
	  lhz       r0, 0xC(r3)
	  rlwinm    r5,r0,2,0,29
	  addi      r0, r5, 0x4
	  add       r0, r4, r0
	  stw       r0, 0x8(r3)
	  blr

	.loc_0x2C:
	  li        r0, 0
	  sth       r0, 0xC(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002ED84
 * Size:	000098
 */
void JUTNameTab::getIndex(const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r5, 0x4(r3)
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  mr        r26, r4
	  addi      r28, r5, 0x4
	  bl        0xA8
	  lwz       r29, 0x4(r27)
	  rlwinm    r30,r3,0,16,31
	  lhz       r31, 0xC(r27)
	  li        r27, 0
	  b         .loc_0x74

	.loc_0x38:
	  lhz       r0, 0x0(r28)
	  cmplw     r0, r30
	  bne-      .loc_0x6C
	  rlwinm    r3,r27,2,14,29
	  mr        r4, r26
	  addi      r0, r3, 0x6
	  lhzx      r0, r29, r0
	  add       r3, r29, r0
	  bl        0x9B8E4
	  cmpwi     r3, 0
	  bne-      .loc_0x6C
	  rlwinm    r3,r27,0,16,31
	  b         .loc_0x84

	.loc_0x6C:
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x1

	.loc_0x74:
	  rlwinm    r0,r27,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x38
	  li        r3, -0x1

	.loc_0x84:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EE1C
 * Size:	000030
 */
void JUTNameTab::getName(unsigned short) const
{
	/*
	.loc_0x0:
	  lhz       r0, 0xC(r3)
	  rlwinm    r5,r4,0,16,31
	  cmplw     r5, r0
	  bge-      .loc_0x28
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r4,2,14,29
	  add       r3, r5, r0
	  lhz       r0, 0x6(r3)
	  add       r3, r5, r0
	  blr

	.loc_0x28:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EE4C
 * Size:	000030
 */
void JUTNameTab::calcKeyCode(const char*) const
{
	/*
	.loc_0x0:
	  li        r5, 0
	  b         .loc_0x1C

	.loc_0x8:
	  lbz       r3, 0x0(r4)
	  mulli     r0, r5, 0x3
	  addi      r4, r4, 0x1
	  extsb     r3, r3
	  add       r5, r3, r0

	.loc_0x1C:
	  lbz       r0, 0x0(r4)
	  extsb.    r0, r0
	  bne+      .loc_0x8
	  rlwinm    r3,r5,0,16,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EE7C
 * Size:	000048
 */
JUTNameTab::~JUTNameTab()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x4E0
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0xADF4

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
