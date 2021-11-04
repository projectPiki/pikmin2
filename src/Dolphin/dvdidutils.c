

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void strnlen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DF7EC
 * Size:	0000F8
 */
void DVDCompareDiskID(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lbz       r0, 0x0(r3)
	  extsb.    r0, r0
	  beq-      .loc_0x54
	  lbz       r0, 0x0(r31)
	  extsb.    r0, r0
	  beq-      .loc_0x54
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  li        r5, 0x4
	  bl        -0x151AC
	  cmpwi     r3, 0
	  beq-      .loc_0x54
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0x54:
	  lbz       r0, 0x4(r30)
	  extsb.    r0, r0
	  beq-      .loc_0x84
	  lbz       r0, 0x4(r31)
	  extsb.    r0, r0
	  beq-      .loc_0x84
	  addi      r3, r30, 0x4
	  addi      r4, r31, 0x4
	  li        r5, 0x2
	  bl        -0x151E4
	  cmpwi     r3, 0
	  beq-      .loc_0x8C

	.loc_0x84:
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0x8C:
	  lbz       r3, 0x6(r30)
	  cmplwi    r3, 0xFF
	  beq-      .loc_0xB4
	  lbz       r0, 0x6(r31)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0xB4
	  cmplw     r3, r0
	  beq-      .loc_0xB4
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0xB4:
	  lbz       r3, 0x7(r30)
	  cmplwi    r3, 0xFF
	  beq-      .loc_0xDC
	  lbz       r0, 0x7(r31)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0xDC
	  cmplw     r3, r0
	  beq-      .loc_0xDC
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0xDC:
	  li        r3, 0x1

	.loc_0xE0:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void DVDGenerateDiskID(void)
{
	// UNUSED FUNCTION
}
