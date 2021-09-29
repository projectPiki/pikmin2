

/*
 * --INFO--
 * Address:	8005EB80
 * Size:	000068
 */
void J3DVertexData::J3DVertexData()
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x4
  stw       r4, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r4, 0x8(r3)
  stw       r4, 0xC(r3)
  stw       r4, 0x10(r3)
  stw       r4, 0x14(r3)
  stw       r4, 0x18(r3)
  stw       r4, 0x1C(r3)
  stw       r4, 0x20(r3)
  stw       r4, 0x24(r3)
  stw       r4, 0x28(r3)
  stw       r4, 0x2C(r3)
  stw       r4, 0x30(r3)
  stw       r4, 0x34(r3)
  stw       r4, 0x38(r3)
  stw       r4, 0x3C(r3)
  stw       r4, 0x40(r3)
  stw       r4, 0x44(r3)
  stw       r4, 0x48(r3)
  stb       r4, 0x4C(r3)
  stw       r0, 0x50(r3)
  stb       r4, 0x54(r3)
  stw       r0, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void J3DVertexData::isDeformablePositionFormat() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void J3DVertexData::isDeformableNormalFormat() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void J3DVertexData::isCpuSkinningPositionFormat() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void J3DVertexData::isCpuSkinningNormalFormat() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005EBE8
 * Size:	000060
 */
void J3DVertexBuffer::setVertexData(J3DVertexData *)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  li        r5, 0
  lwz       r0, 0x18(r4)
  stw       r0, 0x4(r3)
  lwz       r0, 0x1C(r4)
  stw       r0, 0xC(r3)
  lwz       r0, 0x24(r4)
  stw       r0, 0x14(r3)
  stw       r5, 0x8(r3)
  stw       r5, 0x10(r3)
  stw       r5, 0x18(r3)
  lwz       r0, 0x18(r4)
  stw       r0, 0x1C(r3)
  lwz       r0, 0x1C(r4)
  stw       r0, 0x24(r3)
  stw       r5, 0x20(r3)
  stw       r5, 0x28(r3)
  lwz       r0, 0x4(r3)
  stw       r0, 0x2C(r3)
  lwz       r0, 0xC(r3)
  stw       r0, 0x30(r3)
  lwz       r0, 0x14(r3)
  stw       r0, 0x34(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005EC48
 * Size:	000058
 */
void J3DVertexBuffer::init()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x20(r3)
  stw       r0, 0x1C(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x30(r3)
  stw       r0, 0x34(r3)
  lwz       r0, 0x4(r3)
  stw       r0, 0x2C(r3)
  lwz       r0, 0xC(r3)
  stw       r0, 0x30(r3)
  lwz       r0, 0x14(r3)
  stw       r0, 0x34(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ECA0
 * Size:	00003C
 */
void J3DVertexBuffer::~J3DVertexBuffer()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x24
  extsh.    r0, r4
  ble-      .loc_0x24
  bl        -0x3AC0C

.loc_0x24:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ECDC
 * Size:	000024
 */
void J3DVertexBuffer::setArray() const
{
/*
.loc_0x0:
  lis       r4, 0x8051
  lwz       r6, 0x2C(r3)
  subi      r5, r4, 0xDD0
  lwz       r4, 0x30(r3)
  lwz       r0, 0x34(r3)
  stw       r6, 0x10C(r5)
  stw       r4, 0x110(r5)
  stw       r0, 0x114(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void J3DVertexBuffer::copyLocalVtxPosArray(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void J3DVertexBuffer::copyLocalVtxNrmArray(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001F0
 */
void J3DVertexBuffer::copyLocalVtxArray(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void J3DVertexBuffer::allocTransformedVtxPosArray()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void J3DVertexBuffer::allocTransformedVtxNrmArray()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void J3DVertexBuffer::allocTransformedVtxArray(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void J3DVertexBuffer::copyTransformedVtxArray()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005ED00
 * Size:	000128
 */
void J3DVertexBuffer::copyVtxColorArray(J3DDeformAttachFlag)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwz       r0, 0x14(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r0, 0x18(r31)
  cmplwi    r0, 0
  bne-      .loc_0x10C

.loc_0x34:
  rlwinm.   r0,r4,0,31,31
  beq-      .loc_0xB0
  li        r29, 0
  mr        r30, r31

.loc_0x44:
  cmpwi     r29, 0
  beq-      .loc_0x58
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x9C

.loc_0x58:
  lwz       r3, 0x0(r31)
  li        r4, 0x20
  lwz       r0, 0x8(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x3AD70
  stw       r3, 0x14(r30)
  lwz       r4, 0x0(r31)
  lwz       r3, 0x14(r30)
  lwz       r0, 0x8(r4)
  lwz       r4, 0x24(r4)
  rlwinm    r5,r0,2,0,29
  bl        -0x59BE8
  lwz       r4, 0x0(r31)
  lwz       r3, 0x14(r30)
  lwz       r0, 0x8(r4)
  rlwinm    r4,r0,2,0,29
  bl        0x8D9B0

.loc_0x9C:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x2
  blt+      .loc_0x44
  b         .loc_0x10C

.loc_0xB0:
  lwz       r3, 0x0(r31)
  lwz       r0, 0x24(r3)
  stw       r0, 0x14(r31)
  lwz       r0, 0x18(r31)
  cmplwi    r0, 0
  bne-      .loc_0xE0
  lwz       r3, 0x0(r31)
  li        r4, 0x20
  lwz       r0, 0x8(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x3ADE0
  stw       r3, 0x18(r31)

.loc_0xE0:
  lwz       r4, 0x0(r31)
  lwz       r3, 0x18(r31)
  lwz       r0, 0x8(r4)
  lwz       r4, 0x24(r4)
  rlwinm    r5,r0,2,0,29
  bl        -0x59C58
  lwz       r4, 0x0(r31)
  lwz       r3, 0x18(r31)
  lwz       r0, 0x8(r4)
  rlwinm    r4,r0,2,0,29
  bl        0x8D940

.loc_0x10C:
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
 * Address:	........
 * Size:	000084
 */
void J3DVertexBuffer::resetVtxColorArray()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005EE28
 * Size:	000014
 */
void J3DDrawMtxData::J3DDrawMtxData()
{
/*
.loc_0x0:
  li        r0, 0
  sth       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005EE3C
 * Size:	00003C
 */
void J3DDrawMtxData::~J3DDrawMtxData()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x24
  extsh.    r0, r4
  ble-      .loc_0x24
  bl        -0x3ADA8

.loc_0x24:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}