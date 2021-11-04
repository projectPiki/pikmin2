#include "types.h"

/*
 * --INFO--
 * Address:	8023D64C
 * Size:	000090
 */
VSFifo::VSFifo(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r5, 0x1758
	  stw       r3, 0x0(r31)
	  stw       r0, 0xC(r31)
	  lwz       r3, -0x77D4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r4, 0xC(r31)
	  li        r5, 0x20
	  addi      r4, r4, 0x80
	  bl        -0x21A050
	  stw       r3, 0x4(r31)

	.loc_0x4C:
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x80
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x8(r31)
	  lwz       r5, 0xC(r31)
	  bl        -0x159B7C
	  lwz       r4, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  mr        r5, r4
	  bl        -0x159B20
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
 * Address:	8023D6DC
 * Size:	000048
 */
VSFifo::~VSFifo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804C
	  extsh.    r0, r4
	  addi      r0, r5, 0x1758
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x219654

	.loc_0x30:
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
 * Address:	8023D724
 * Size:	00008C
 */
void VSFifo::becomeCurrent()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r4, -0x7714(r13)
	  lwz       r3, 0x4(r4)
	  bl        -0x159884
	  subi      r31, r13, 0x7710
	  mr        r30, r31
	  mr        r29, r31
	  addi      r28, r31, 0x1
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x3
	  addi      r29, r29, 0x2

	.loc_0x3C:
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  subi      r3, r13, 0x7710
	  bl        -0x1597BC
	  lbz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  beq+      .loc_0x3C
	  lwz       r4, 0x8(r27)
	  lwz       r3, 0x4(r27)
	  mr        r5, r4
	  bl        -0x159BF0
	  lwz       r3, 0x4(r27)
	  bl        -0x159B7C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void VSFifo::setBreakPt()
{
	// UNUSED FUNCTION
}
