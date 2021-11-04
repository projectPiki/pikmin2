

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __exit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2460
 * Size:	0000F0
 */
void exit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, -0x7358(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x74
	  li        r3, 0
	  bl        0x3DDC
	  li        r3, 0
	  bl        0x3DD0
	  bl        -0xDD4
	  lis       r3, 0x8047
	  addi      r0, r3, 0x32C0
	  mr        r31, r0
	  b         .loc_0x4C

	.loc_0x40:
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x4

	.loc_0x4C:
	  lwz       r12, 0x0(r31)
	  cmplwi    r12, 0
	  bne+      .loc_0x40
	  lwz       r12, -0x7350(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x74
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x7350(r13)

	.loc_0x74:
	  li        r3, 0
	  bl        0x3D84
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5570
	  b         .loc_0xA4

	.loc_0x88:
	  lwz       r3, -0x7354(r13)
	  subi      r3, r3, 0x1
	  rlwinm    r0,r3,2,0,29
	  stw       r3, -0x7354(r13)
	  lwzx      r12, r31, r0
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r0, -0x7354(r13)
	  cmpwi     r0, 0
	  bgt+      .loc_0x88
	  li        r3, 0
	  bl        0x3D44
	  bl        0x3D48
	  lwz       r12, -0x734C(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xD8
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x734C(r13)

	.loc_0xD8:
	  bl        0x30AF0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __atexit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void atexit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void abort(void)
{
	// UNUSED FUNCTION
}
