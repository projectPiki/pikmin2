

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __register_atexit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C16B8
 * Size:	000048
 */
void __destroy_global_chain(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  b         .loc_0x2C

	.loc_0x10:
	  lwz       r0, 0x0(r3)
	  li        r4, -0x1
	  stw       r0, -0x7360(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r3, 0x8(r3)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lwz       r3, -0x7360(r13)
	  cmplwi    r3, 0
	  bne+      .loc_0x10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1700
 * Size:	000018
 */
void __register_global_object(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7360(r13)
	  stw       r0, 0x0(r5)
	  stw       r4, 0x4(r5)
	  stw       r3, 0x8(r5)
	  stw       r5, -0x7360(r13)
	  blr
	*/
}
