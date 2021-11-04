

/*
 * --INFO--
 * Address:	800BB390
 * Size:	0000F8
 */
void TRKNubMainLoop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  b         .loc_0xD8

	.loc_0x20:
	  addi      r3, r1, 0x8
	  bl        0x1F0
	  cmpwi     r3, 0
	  beq-      .loc_0x98
	  lwz       r0, 0x8(r1)
	  li        r30, 0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x64
	  bge-      .loc_0x54
	  cmpwi     r0, 0
	  beq-      .loc_0x8C
	  bge-      .loc_0x74
	  b         .loc_0x8C

	.loc_0x54:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x88
	  bge-      .loc_0x8C
	  b         .loc_0x7C

	.loc_0x64:
	  lwz       r3, 0x10(r1)
	  bl        0xB68
	  bl        0x1010
	  b         .loc_0x8C

	.loc_0x74:
	  li        r31, 0x1
	  b         .loc_0x8C

	.loc_0x7C:
	  addi      r3, r1, 0x8
	  bl        0x3404
	  b         .loc_0x8C

	.loc_0x88:
	  bl        0x2F78

	.loc_0x8C:
	  addi      r3, r1, 0x8
	  bl        .loc_0xF8
	  b         .loc_0xD8

	.loc_0x98:
	  cmpwi     r30, 0
	  beq-      .loc_0xB8
	  lis       r3, 0x8051
	  addi      r3, r3, 0x5308
	  lwz       r3, 0x0(r3)
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4

	.loc_0xB8:
	  li        r30, 0x1
	  bl        0xD98
	  b         .loc_0xD8

	.loc_0xC4:
	  bl        0x2F2C
	  cmpwi     r3, 0
	  bne-      .loc_0xD4
	  bl        0x555C

	.loc_0xD4:
	  li        r30, 0

	.loc_0xD8:
	  cmpwi     r31, 0
	  beq+      .loc_0x20
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xF8:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TRKIdle(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TRKHandleSupportEvent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void TRKHandleRequestEvent(void)
{
	// UNUSED FUNCTION
}
