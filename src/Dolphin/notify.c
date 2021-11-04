

/*
 * --INFO--
 * Address:	800BDD20
 * Size:	000098
 */
void TRKDoNotifyStopped(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r1, 0xC
	  bl        -0x1DB4
	  mr.       r31, r3
	  bne-      .loc_0x7C
	  bne-      .loc_0x4C
	  cmpwi     r30, 0x90
	  bne-      .loc_0x44
	  lwz       r3, 0x8(r1)
	  bl        0xA2C
	  b         .loc_0x4C

	.loc_0x44:
	  lwz       r3, 0x8(r1)
	  bl        0x99C

	.loc_0x4C:
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x10
	  li        r5, 0x2
	  li        r6, 0x3
	  li        r7, 0x1
	  bl        -0x478
	  mr.       r31, r3
	  bne-      .loc_0x74
	  lwz       r3, 0x10(r1)
	  bl        -0x1E94

	.loc_0x74:
	  lwz       r3, 0xC(r1)
	  bl        -0x1E9C

	.loc_0x7C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void TRKWaitForACK(void)
{
	// UNUSED FUNCTION
}
