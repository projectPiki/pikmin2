#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void IsInitialized(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void OutputData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C11FC
 * Size:	000024
 */
void gdev_cc_initinterrupts(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xEEF0
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1220
 * Size:	000070
 */
void gdev_cc_peek(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x510(r1)
	  mflr      r0
	  stw       r0, 0x514(r1)
	  stw       r31, 0x50C(r1)
	  bl        0xEE2C
	  mr.       r31, r3
	  bgt-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x5C

	.loc_0x24:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0xED84
	  cmpwi     r3, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804F
	  mr        r5, r31
	  addi      r3, r3, 0x5540
	  addi      r4, r1, 0x8
	  bl        -0x1CC
	  b         .loc_0x58

	.loc_0x50:
	  li        r3, -0x2719
	  b         .loc_0x5C

	.loc_0x58:
	  mr        r3, r31

	.loc_0x5C:
	  lwz       r0, 0x514(r1)
	  lwz       r31, 0x50C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x510
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1290
 * Size:	000024
 */
void gdev_cc_post_stop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xEAD0
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C12B4
 * Size:	000024
 */
void gdev_cc_pre_continue(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xEAA8
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C12D8
 * Size:	0000C0
 */
void gdev_cc_write(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x61D0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x7368(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x4C
	  addi      r4, r31, 0
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x230
	  li        r3, -0x2711
	  b         .loc_0xA4

	.loc_0x4C:
	  mr        r5, r3
	  mr        r6, r4
	  addi      r4, r31, 0x14
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x210
	  b         .loc_0x98

	.loc_0x68:
	  mr        r5, r30
	  addi      r4, r31, 0x40
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x1F8
	  mr        r3, r29
	  mr        r4, r30
	  bl        0xEA14
	  cmpwi     r3, 0
	  beq-      .loc_0xA0
	  add       r29, r29, r3
	  sub       r30, r30, r3

	.loc_0x98:
	  cmpwi     r30, 0
	  bgt+      .loc_0x68

	.loc_0xA0:
	  li        r3, 0

	.loc_0xA4:
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
 * Address:	800C1398
 * Size:	0000F4
 */
void gdev_cc_read(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x520(r1)
	  mflr      r0
	  stw       r0, 0x524(r1)
	  stmw      r26, 0x508(r1)
	  mr        r26, r3
	  mr        r27, r4
	  li        r28, 0
	  lwz       r0, -0x7368(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  li        r3, -0x2711
	  b         .loc_0xE0

	.loc_0x30:
	  lis       r3, 0x8048
	  mr        r5, r27
	  subi      r4, r3, 0x6174
	  mr        r6, r27
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x168
	  lis       r3, 0x804F
	  mr        r29, r27
	  addi      r31, r3, 0x5540
	  mr        r30, r27
	  b         .loc_0x94

	.loc_0x60:
	  li        r28, 0
	  bl        0xEC60
	  mr.       r27, r3
	  beq-      .loc_0x94
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        0xEBC0
	  mr.       r28, r3
	  bne-      .loc_0x94
	  mr        r3, r31
	  mr        r5, r27
	  addi      r4, r1, 0x8
	  bl        -0x38C

	.loc_0x94:
	  mr        r3, r31
	  bl        -0x23C
	  cmplw     r3, r30
	  blt+      .loc_0x60
	  cmplwi    r28, 0
	  bne-      .loc_0xC4
	  lis       r3, 0x804F
	  mr        r4, r26
	  addi      r3, r3, 0x5540
	  mr        r5, r29
	  bl        -0x4C0
	  b         .loc_0xDC

	.loc_0xC4:
	  lis       r3, 0x8048
	  mr        r5, r28
	  subi      r4, r3, 0x614C
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0xD8

	.loc_0xDC:
	  mr        r3, r28

	.loc_0xE0:
	  lmw       r26, 0x508(r1)
	  lwz       r0, 0x524(r1)
	  mtlr      r0
	  addi      r1, r1, 0x520
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C148C
 * Size:	000008
 */
u32 gdev_cc_close(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800C1494
 * Size:	000024
 */
void gdev_cc_open(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7368(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x14
	  li        r3, -0x2715
	  blr

	.loc_0x14:
	  li        r0, 0x1
	  li        r3, 0
	  stw       r0, -0x7368(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C14B8
 * Size:	000008
 */
u32 gdev_cc_shutdown(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800C14C0
 * Size:	000088
 */
void gdev_cc_initialize(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x611C
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        .loc_0x88
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xEC50
	  lis       r4, 0x8048
	  li        r3, 0x1
	  subi      r4, r4, 0x6108
	  crclr     6, 0x6
	  bl        .loc_0x88
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  addi      r3, r3, 0x5540
	  li        r5, 0x500
	  addi      r4, r4, 0x5040
	  bl        -0x384
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x88:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void IsInitialized(void)
{
	// UNUSED FUNCTION
}
