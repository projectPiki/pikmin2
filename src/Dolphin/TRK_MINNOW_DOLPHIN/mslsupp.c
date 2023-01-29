

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void __open_temp_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void __access_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void convertFileMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void __position_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void __close_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void __open_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __write_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __read_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C0A0C
 * Size:	000084
 */
void __close_console(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x34E4
	  cmpwi     r3, 0
	  bne-      .loc_0x28
	  li        r3, 0x1
	  b         .loc_0x70

	.loc_0x28:
	  mr        r4, r31
	  li        r3, 0xD3
	  bl        -0xFEC
	  rlwinm    r0,r3,0,24,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x6C
	  bge-      .loc_0x50
	  cmpwi     r0, 0
	  bge-      .loc_0x5C
	  b         .loc_0x6C

	.loc_0x50:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x6C
	  b         .loc_0x64

	.loc_0x5C:
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x64:
	  li        r3, 0x2
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0x1

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0A90
 * Size:	0000BC
 */
void __TRK_write_console(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  bl        -0xBC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x30
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0x30:
	  bl        -0x3584
	  cmpwi     r3, 0
	  bne-      .loc_0x44
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0x44:
	  lwz       r0, 0x0(r31)
	  mr        r6, r30
	  addi      r5, r1, 0x8
	  li        r3, 0xD0
	  stw       r0, 0x8(r1)
	  li        r4, 0x1
	  bl        -0x10AC
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, 0x8(r1)
	  cmpwi     r0, 0x1
	  stw       r3, 0x0(r31)
	  beq-      .loc_0xA0
	  bge-      .loc_0x84
	  cmpwi     r0, 0
	  bge-      .loc_0x90
	  b         .loc_0xA0

	.loc_0x84:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xA0
	  b         .loc_0x98

	.loc_0x90:
	  li        r3, 0
	  b         .loc_0xA4

	.loc_0x98:
	  li        r3, 0x2
	  b         .loc_0xA4

	.loc_0xA0:
	  li        r3, 0x1

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0B4C
 * Size:	0000BC
 */
void __read_console(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  bl        -0x178
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x30
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0x30:
	  bl        -0x3640
	  cmpwi     r3, 0
	  bne-      .loc_0x44
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0x44:
	  lwz       r0, 0x0(r31)
	  mr        r6, r30
	  addi      r5, r1, 0x8
	  li        r3, 0xD1
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  bl        -0x1168
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, 0x8(r1)
	  cmpwi     r0, 0x1
	  stw       r3, 0x0(r31)
	  beq-      .loc_0xA0
	  bge-      .loc_0x84
	  cmpwi     r0, 0
	  bge-      .loc_0x90
	  b         .loc_0xA0

	.loc_0x84:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xA0
	  b         .loc_0x98

	.loc_0x90:
	  li        r3, 0
	  b         .loc_0xA4

	.loc_0x98:
	  li        r3, 0x2
	  b         .loc_0xA4

	.loc_0xA0:
	  li        r3, 0x1

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
