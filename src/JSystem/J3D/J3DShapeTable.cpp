

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void J3DShapeTable::hide()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void J3DShapeTable::show()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089664
 * Size:	000064
 */
void J3DShapeTable::initShapeNodes(J3DDrawMtxData*, J3DVertexData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  li        r30, 0
	  lhz       r31, 0x4(r3)
	  b         .loc_0x44

	.loc_0x28:
	  lwz       r3, 0x8(r27)
	  rlwinm    r0,r30,2,14,29
	  lwzx      r3, r3, r0
	  stw       r28, 0x50(r3)
	  stw       r29, 0x4C(r3)
	  bl        -0x28900
	  addi      r30, r30, 0x1

	.loc_0x44:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x28
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800896C8
 * Size:	000094
 */
void J3DShapeTable::sortVcdVatCmd()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  li        r27, 0
	  lhz       r28, 0x4(r3)
	  b         .loc_0x74

	.loc_0x20:
	  rlwinm    r31,r27,0,16,31
	  rlwinm    r30,r27,2,14,29
	  li        r26, 0
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r4, 0x8(r25)
	  rlwinm    r29,r26,2,14,29
	  lwzx      r3, r30, r4
	  lwzx      r4, r4, r29
	  bl        -0x28D50
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  lwz       r3, 0x8(r25)
	  lwzx      r4, r3, r29
	  lwzx      r3, r30, r3
	  lwz       r0, 0x2C(r4)
	  stw       r0, 0x2C(r3)

	.loc_0x60:
	  addi      r26, r26, 0x1

	.loc_0x64:
	  rlwinm    r0,r26,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x30
	  addi      r27, r27, 0x1

	.loc_0x74:
	  rlwinm    r0,r27,0,16,31
	  cmplw     r0, r28
	  blt+      .loc_0x20
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void J3DShapeTable::addTexMtxIndex(_GXAttr, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void J3DShapeTable::isDeformableVcd() const
{
	// UNUSED FUNCTION
}