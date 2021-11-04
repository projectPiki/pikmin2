

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void setbuf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000164
 */
void setvbuf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6160
 * Size:	0000C4
 */
void __flush_buffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, 0x1C(r3)
	  lwz       r0, 0x24(r31)
	  sub.      r0, r0, r3
	  beq-      .loc_0x78
	  stw       r0, 0x28(r31)
	  addi      r5, r31, 0x28
	  lwz       r12, 0x40(r31)
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x1C(r31)
	  lwz       r6, 0x48(r31)
	  mtctr     r12
	  bctrl
	  cmplwi    r30, 0
	  beq-      .loc_0x5C
	  lwz       r0, 0x28(r31)
	  stw       r0, 0x0(r30)

	.loc_0x5C:
	  cmpwi     r3, 0
	  beq-      .loc_0x68
	  b         .loc_0xAC

	.loc_0x68:
	  lwz       r3, 0x18(r31)
	  lwz       r0, 0x28(r31)
	  add       r0, r3, r0
	  stw       r0, 0x18(r31)

	.loc_0x78:
	  lwz       r0, 0x1C(r31)
	  li        r3, 0
	  stw       r0, 0x24(r31)
	  lwz       r0, 0x20(r31)
	  stw       r0, 0x28(r31)
	  lwz       r5, 0x18(r31)
	  lwz       r4, 0x2C(r31)
	  lwz       r0, 0x28(r31)
	  and       r4, r5, r4
	  sub       r0, r0, r4
	  stw       r0, 0x28(r31)
	  lwz       r0, 0x18(r31)
	  stw       r0, 0x34(r31)

	.loc_0xAC:
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
 * Address:	........
 * Size:	000110
 */
void __load_buffer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6224
 * Size:	000034
 */
void __prep_buffer(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x24(r3)
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x28(r3)
	  lwz       r5, 0x18(r3)
	  lwz       r4, 0x2C(r3)
	  lwz       r0, 0x28(r3)
	  and       r4, r5, r4
	  sub       r0, r0, r4
	  stw       r0, 0x28(r3)
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void __convert_to_newlines(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void __convert_from_newlines(void)
{
	// UNUSED FUNCTION
}
