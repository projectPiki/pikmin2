

/*
 * --INFO--
 * Address:	800C0F94
 * Size:	000108
 */
void CircleBufferReadBytes(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lwz       r0, 0x10(r3)
	  cmplw     r31, r0
	  ble-      .loc_0x3C
	  li        r3, -0x1
	  b         .loc_0xE8

	.loc_0x3C:
	  addi      r3, r30, 0x18
	  bl        0x5E8
	  lwz       r3, 0x8(r30)
	  lwz       r4, 0x0(r30)
	  lwz       r0, 0xC(r30)
	  sub       r3, r4, r3
	  sub       r29, r0, r3
	  cmplw     r31, r29
	  bge-      .loc_0x7C
	  mr        r3, r28
	  mr        r5, r31
	  bl        -0xBBE60
	  lwz       r0, 0x0(r30)
	  add       r0, r0, r31
	  stw       r0, 0x0(r30)
	  b         .loc_0xA8

	.loc_0x7C:
	  mr        r3, r28
	  mr        r5, r29
	  bl        -0xBBE7C
	  lwz       r4, 0x8(r30)
	  add       r3, r28, r29
	  sub       r5, r31, r29
	  bl        -0xBBE8C
	  lwz       r0, 0x8(r30)
	  add       r0, r0, r31
	  sub       r0, r0, r29
	  stw       r0, 0x0(r30)

	.loc_0xA8:
	  lwz       r4, 0x8(r30)
	  lwz       r0, 0x0(r30)
	  lwz       r3, 0xC(r30)
	  sub       r0, r0, r4
	  cmplw     r3, r0
	  bne-      .loc_0xC4
	  stw       r4, 0x0(r30)

	.loc_0xC4:
	  lwz       r0, 0x14(r30)
	  addi      r3, r30, 0x18
	  add       r0, r0, r31
	  stw       r0, 0x14(r30)
	  lwz       r0, 0x10(r30)
	  sub       r0, r0, r31
	  stw       r0, 0x10(r30)
	  bl        0x524
	  li        r3, 0

	.loc_0xE8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C109C
 * Size:	000108
 */
void CircleBufferWriteBytes(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lwz       r0, 0x14(r3)
	  cmplw     r31, r0
	  ble-      .loc_0x3C
	  li        r3, -0x1
	  b         .loc_0xE8

	.loc_0x3C:
	  addi      r3, r30, 0x18
	  bl        0x4E0
	  lwz       r4, 0x8(r30)
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0xC(r30)
	  sub       r4, r3, r4
	  sub       r29, r0, r4
	  cmplw     r29, r31
	  blt-      .loc_0x7C
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0xBBF68
	  lwz       r0, 0x4(r30)
	  add       r0, r0, r31
	  stw       r0, 0x4(r30)
	  b         .loc_0xA8

	.loc_0x7C:
	  mr        r4, r28
	  mr        r5, r29
	  bl        -0xBBF84
	  lwz       r3, 0x8(r30)
	  add       r4, r28, r29
	  sub       r5, r31, r29
	  bl        -0xBBF94
	  lwz       r0, 0x8(r30)
	  add       r0, r0, r31
	  sub       r0, r0, r29
	  stw       r0, 0x4(r30)

	.loc_0xA8:
	  lwz       r4, 0x8(r30)
	  lwz       r0, 0x4(r30)
	  lwz       r3, 0xC(r30)
	  sub       r0, r0, r4
	  cmplw     r3, r0
	  bne-      .loc_0xC4
	  stw       r4, 0x4(r30)

	.loc_0xC4:
	  lwz       r0, 0x14(r30)
	  addi      r3, r30, 0x18
	  sub       r0, r0, r31
	  stw       r0, 0x14(r30)
	  lwz       r0, 0x10(r30)
	  add       r0, r0, r31
	  stw       r0, 0x10(r30)
	  bl        0x41C
	  li        r3, 0

	.loc_0xE8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void CircleBufferTerminate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C11A4
 * Size:	000050
 */
void CircleBufferInitialize(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r4, 0x8(r3)
	  addi      r3, r6, 0x18
	  stw       r5, 0xC(r6)
	  lwz       r4, 0x8(r6)
	  stw       r4, 0x0(r6)
	  lwz       r4, 0x8(r6)
	  stw       r4, 0x4(r6)
	  stw       r0, 0x10(r6)
	  lwz       r0, 0xC(r6)
	  stw       r0, 0x14(r6)
	  bl        0x40C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void CBGetBytesAvailableForWrite(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C11F4
 * Size:	000008
 */
void CBGetBytesAvailableForRead(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x10(r3)
	  blr
	*/
}
