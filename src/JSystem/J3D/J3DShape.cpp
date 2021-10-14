

/*
 * --INFO--
 * Address:	80060850
 * Size:	000070
 */
void J3DShape::initialize()
{
	/*
	.loc_0x0:
	  li        r5, 0
	  lis       r4, 0x1
	  stw       r5, 0x4(r3)
	  subi      r4, r4, 0x1
	  lfs       f0, -0x79B8(r2)
	  subi      r0, r13, 0x76A0
	  sth       r4, 0x8(r3)
	  sth       r5, 0xA(r3)
	  stw       r5, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f0, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  stfs      f0, 0x1C(r3)
	  stfs      f0, 0x20(r3)
	  stfs      f0, 0x24(r3)
	  stfs      f0, 0x28(r3)
	  stw       r5, 0x30(r3)
	  stw       r5, 0x38(r3)
	  stw       r5, 0x3C(r3)
	  stw       r5, 0x4C(r3)
	  stw       r5, 0x50(r3)
	  stw       r5, 0x54(r3)
	  stw       r5, 0x58(r3)
	  stw       r5, 0x5C(r3)
	  stw       r0, 0x60(r3)
	  stb       r5, 0x34(r3)
	  stb       r5, 0x48(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void J3DShape::~J3DShape()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void J3DShape::addTexMtxIndexInDL(_GXAttr, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void J3DShape::addTexMtxIndexInVcd(_GXAttr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800608C0
 * Size:	000078
 */
void J3DShape::calcNBTScale(const Vec&, float (*)[3][3], float (*)[3][3])
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
	  mr        r30, r6
	  li        r31, 0
	  b         .loc_0x54

	.loc_0x28:
	  lwz       r3, 0x38(r27)
	  rlwinm    r0,r31,2,14,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  mr        r6, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x54:
	  lhz       r0, 0xA(r27)
	  rlwinm    r3,r31,0,16,31
	  cmplw     r3, r0
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
 * Address:	80060938
 * Size:	000080
 */
void J3DShape::countBumpMtxNum() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  lhz       r31, 0xA(r3)
	  stw       r30, 0x18(r1)
	  lwz       r30, 0x38(r3)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  li        r28, 0
	  b         .loc_0x50

	.loc_0x30:
	  rlwinm    r0,r28,2,14,29
	  lwzx      r3, r30, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  add       r29, r29, r3
	  addi      r28, r28, 0x1

	.loc_0x50:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Size:	000018
 */
void J3DLoadCPCmd(unsigned char, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void J3DLoadArrayBasePtr(_GXAttr, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void J3DShape::loadVtxArray() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800609B8
 * Size:	0000EC
 */
void J3DShape::isSameVcdVatCmd(J3DShape*)
{
	/*
	.loc_0x0:
	  li        r0, 0x18
	  lwz       r4, 0x2C(r4)
	  lwz       r3, 0x2C(r3)
	  li        r6, 0
	  mtctr     r0

	.loc_0x14:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x0(r3)
	  cmplw     r5, r0
	  beq-      .loc_0x2C
	  li        r3, 0
	  blr

	.loc_0x2C:
	  lbz       r5, 0x1(r4)
	  lbz       r0, 0x1(r3)
	  cmplw     r5, r0
	  beq-      .loc_0x44
	  li        r3, 0
	  blr

	.loc_0x44:
	  lbz       r5, 0x2(r4)
	  lbz       r0, 0x2(r3)
	  cmplw     r5, r0
	  beq-      .loc_0x5C
	  li        r3, 0
	  blr

	.loc_0x5C:
	  lbz       r5, 0x3(r4)
	  lbz       r0, 0x3(r3)
	  cmplw     r5, r0
	  beq-      .loc_0x74
	  li        r3, 0
	  blr

	.loc_0x74:
	  lbz       r5, 0x4(r4)
	  lbz       r0, 0x4(r3)
	  cmplw     r5, r0
	  beq-      .loc_0x8C
	  li        r3, 0
	  blr

	.loc_0x8C:
	  lbz       r5, 0x5(r4)
	  lbz       r0, 0x5(r3)
	  cmplw     r5, r0
	  beq-      .loc_0xA4
	  li        r3, 0
	  blr

	.loc_0xA4:
	  lbz       r5, 0x6(r4)
	  lbz       r0, 0x6(r3)
	  cmplw     r5, r0
	  beq-      .loc_0xBC
	  li        r3, 0
	  blr

	.loc_0xBC:
	  lbz       r5, 0x7(r4)
	  lbz       r0, 0x7(r3)
	  cmplw     r5, r0
	  beq-      .loc_0xD4
	  li        r3, 0
	  blr

	.loc_0xD4:
	  addi      r6, r6, 0x7
	  addi      r3, r3, 0x8
	  addi      r4, r4, 0x8
	  bdnz+     .loc_0x14
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80060AA4
 * Size:	0002FC
 */
void J3DShape::makeVtxArrayCmd()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  li        r0, 0
	  stw       r31, 0x5C(r1)
	  addi      r31, r1, 0x14
	  stw       r30, 0x58(r1)
	  addi      r30, r1, 0x8
	  stw       r29, 0x54(r1)
	  lwz       r4, 0x4C(r3)
	  stb       r0, 0x8(r1)
	  lwz       r4, 0x14(r4)
	  stw       r0, 0x14(r1)
	  stb       r0, 0x9(r1)
	  stw       r0, 0x18(r1)
	  stb       r0, 0xA(r1)
	  stw       r0, 0x1C(r1)
	  stb       r0, 0xB(r1)
	  stw       r0, 0x20(r1)
	  stb       r0, 0xC(r1)
	  stw       r0, 0x24(r1)
	  stb       r0, 0xD(r1)
	  stw       r0, 0x28(r1)
	  stb       r0, 0xE(r1)
	  stw       r0, 0x2C(r1)
	  stb       r0, 0xF(r1)
	  stw       r0, 0x30(r1)
	  stb       r0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stb       r0, 0x11(r1)
	  stw       r0, 0x38(r1)
	  stb       r0, 0x12(r1)
	  stw       r0, 0x3C(r1)
	  stb       r0, 0x13(r1)
	  stw       r0, 0x40(r1)
	  b         .loc_0x21C

	.loc_0x90:
	  cmpwi     r6, 0xA
	  beq-      .loc_0x120
	  bge-      .loc_0xA8
	  cmpwi     r6, 0x9
	  bge-      .loc_0xBC
	  b         .loc_0x218

	.loc_0xA8:
	  cmpwi     r6, 0x15
	  bge-      .loc_0x218
	  cmpwi     r6, 0xD
	  bge-      .loc_0x1C0
	  b         .loc_0x184

	.loc_0xBC:
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0xDC
	  addi      r5, r1, 0x8
	  subi      r0, r6, 0x9
	  li        r6, 0xC
	  stbx      r6, r5, r0
	  b         .loc_0xEC

	.loc_0xDC:
	  addi      r5, r1, 0x8
	  subi      r0, r6, 0x9
	  li        r6, 0x6
	  stbx      r6, r5, r0

	.loc_0xEC:
	  lwz       r9, 0x4C(r3)
	  addi      r7, r1, 0x14
	  lwz       r5, 0x0(r4)
	  lwz       r8, 0x18(r9)
	  lbz       r0, 0xC(r4)
	  rlwinm    r5,r5,2,0,29
	  subi      r6, r5, 0x24
	  stb       r0, 0x4C(r9)
	  lwz       r0, 0x8(r4)
	  lwz       r5, 0x4C(r3)
	  stwx      r8, r7, r6
	  stw       r0, 0x50(r5)
	  b         .loc_0x218

	.loc_0x120:
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x140
	  addi      r5, r1, 0x8
	  subi      r0, r6, 0x9
	  li        r6, 0xC
	  stbx      r6, r5, r0
	  b         .loc_0x150

	.loc_0x140:
	  addi      r5, r1, 0x8
	  subi      r0, r6, 0x9
	  li        r6, 0x6
	  stbx      r6, r5, r0

	.loc_0x150:
	  lwz       r9, 0x4C(r3)
	  addi      r7, r1, 0x14
	  lwz       r5, 0x0(r4)
	  lwz       r8, 0x1C(r9)
	  lbz       r0, 0xC(r4)
	  rlwinm    r5,r5,2,0,29
	  subi      r6, r5, 0x24
	  stb       r0, 0x54(r9)
	  lwz       r0, 0x8(r4)
	  lwz       r5, 0x4C(r3)
	  stwx      r8, r7, r6
	  stw       r0, 0x58(r5)
	  b         .loc_0x218

	.loc_0x184:
	  lwz       r5, 0x0(r4)
	  subi      r8, r6, 0x9
	  lwz       r7, 0x4C(r3)
	  addi      r9, r1, 0x8
	  subi      r0, r5, 0xB
	  rlwinm    r6,r5,2,0,29
	  rlwinm    r5,r0,2,22,29
	  li        r10, 0x4
	  addi      r0, r5, 0x24
	  stbx      r10, r9, r8
	  lwzx      r7, r7, r0
	  addi      r5, r1, 0x14
	  subi      r0, r6, 0x24
	  stwx      r7, r5, r0
	  b         .loc_0x218

	.loc_0x1C0:
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1E0
	  addi      r5, r1, 0x8
	  subi      r0, r6, 0x9
	  li        r6, 0x8
	  stbx      r6, r5, r0
	  b         .loc_0x1F0

	.loc_0x1E0:
	  addi      r5, r1, 0x8
	  subi      r0, r6, 0x9
	  li        r6, 0x4
	  stbx      r6, r5, r0

	.loc_0x1F0:
	  lwz       r6, 0x0(r4)
	  addi      r5, r1, 0x14
	  lwz       r8, 0x4C(r3)
	  subi      r0, r6, 0xD
	  rlwinm    r6,r6,2,0,29
	  rlwinm    r7,r0,2,22,29
	  addi      r7, r7, 0x2C
	  subi      r0, r6, 0x24
	  lwzx      r6, r8, r7
	  stwx      r6, r5, r0

	.loc_0x218:
	  addi      r4, r4, 0x10

	.loc_0x21C:
	  lwz       r6, 0x0(r4)
	  cmpwi     r6, 0xFF
	  bne+      .loc_0x90
	  lwz       r6, 0x30(r3)
	  li        r0, 0
	  stb       r0, 0x48(r3)
	  b         .loc_0x290

	.loc_0x238:
	  cmpwi     r4, 0x19
	  bne-      .loc_0x270
	  lwz       r0, 0x4(r6)
	  cmpwi     r0, 0
	  beq-      .loc_0x270
	  li        r4, 0x1
	  lbz       r0, 0x9(r1)
	  stb       r4, 0x34(r3)
	  mulli     r5, r0, 0x3
	  lwz       r4, 0x4C(r3)
	  lwz       r0, 0x20(r4)
	  stb       r5, 0x9(r1)
	  stw       r0, 0x18(r1)
	  b         .loc_0x28C

	.loc_0x270:
	  cmpwi     r4, 0
	  bne-      .loc_0x28C
	  lwz       r0, 0x4(r6)
	  cmpwi     r0, 0
	  beq-      .loc_0x28C
	  li        r0, 0x1
	  stb       r0, 0x48(r3)

	.loc_0x28C:
	  addi      r6, r6, 0x8

	.loc_0x290:
	  lwz       r4, 0x0(r6)
	  cmpwi     r4, 0xFF
	  bne+      .loc_0x238
	  li        r29, 0

	.loc_0x2A0:
	  lwz       r4, 0x0(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x2BC
	  lbz       r5, 0x0(r30)
	  addi      r3, r29, 0x9
	  bl        0x81514
	  b         .loc_0x2CC

	.loc_0x2BC:
	  lbz       r5, 0x0(r30)
	  addi      r3, r29, 0x9
	  li        r4, 0
	  bl        0x8170C

	.loc_0x2CC:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x1
	  cmplwi    r29, 0xC
	  addi      r31, r31, 0x4
	  blt+      .loc_0x2A0
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80060DA0
 * Size:	0000A0
 */
void J3DShape::makeVcdVatCmd()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, -0x7684(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x30
	  bl        0x8DE78
	  li        r0, 0x1
	  stw       r3, -0x7688(r13)
	  stb       r0, -0x7684(r13)

	.loc_0x30:
	  bl        0x90C34
	  lwz       r4, 0x2C(r31)
	  addi      r3, r1, 0x8
	  li        r5, 0xC0
	  bl        0x80D24
	  addi      r0, r1, 0x8
	  stw       r0, -0x7158(r13)
	  lwz       r3, 0x30(r31)
	  bl        0x80E80
	  mr        r3, r31
	  bl        -0x354
	  lwz       r4, 0x4C(r31)
	  li        r3, 0
	  lbz       r5, 0x34(r31)
	  lwz       r4, 0x14(r4)
	  bl        0x14100
	  bl        0x80D38
	  bl        0x80D08
	  li        r0, 0
	  stw       r0, -0x7158(r13)
	  bl        0x90C24
	  lwz       r3, -0x7688(r13)
	  bl        0x8DE38
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void J3DShape::loadCurrentMtx() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80060E40
 * Size:	0000A0
 */
void J3DShape::loadPreDrawSetting() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  lwz       r0, -0x7690(r13)
	  cmplw     r0, r3
	  beq-      .loc_0x34
	  li        r4, 0xC0
	  bl        0x88570
	  lwz       r0, 0x2C(r31)
	  stw       r0, -0x7690(r13)

	.loc_0x34:
	  li        r9, 0x8
	  lis       r8, 0xCC01
	  stb       r9, -0x8000(r8)
	  li        r0, 0x30
	  lwz       r3, 0x40(r31)
	  li        r7, 0x40
	  stb       r0, -0x8000(r8)
	  li        r6, 0x10
	  lwz       r10, 0x44(r31)
	  li        r5, 0x1
	  stw       r3, -0x8000(r8)
	  li        r4, 0x1018
	  lwz       r3, 0x40(r31)
	  stb       r9, -0x8000(r8)
	  lwz       r0, 0x44(r31)
	  stb       r7, -0x8000(r8)
	  stw       r10, -0x8000(r8)
	  stb       r6, -0x8000(r8)
	  sth       r5, -0x8000(r8)
	  sth       r4, -0x8000(r8)
	  stw       r3, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void J3DShape::setArrayAndBindPipeline() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80060EE0
 * Size:	000278
 */
void J3DShape::drawFast() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  lwz       r0, -0x7690(r13)
	  cmplw     r0, r3
	  beq-      .loc_0x34
	  li        r4, 0xC0
	  bl        0x884D0
	  lwz       r0, 0x2C(r31)
	  stw       r0, -0x7690(r13)

	.loc_0x34:
	  lbz       r0, -0x768C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lbz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  li        r9, 0x8
	  lis       r8, 0xCC01
	  stb       r9, -0x8000(r8)
	  li        r0, 0x30
	  lwz       r3, 0x40(r31)
	  li        r7, 0x40
	  stb       r0, -0x8000(r8)
	  li        r6, 0x10
	  lwz       r10, 0x44(r31)
	  li        r5, 0x1
	  stw       r3, -0x8000(r8)
	  li        r4, 0x1018
	  lwz       r3, 0x40(r31)
	  stb       r9, -0x8000(r8)
	  lwz       r0, 0x44(r31)
	  stb       r7, -0x8000(r8)
	  stw       r10, -0x8000(r8)
	  stb       r6, -0x8000(r8)
	  sth       r5, -0x8000(r8)
	  sth       r4, -0x8000(r8)
	  stw       r3, -0x8000(r8)
	  stw       r0, -0x8000(r8)

	.loc_0xA4:
	  lwz       r4, 0xC(r31)
	  lis       r3, 0x8051
	  lbz       r0, 0x34(r31)
	  li        r6, 0x8
	  rlwinm    r4,r4,30,29,31
	  lis       r5, 0xCC01
	  stw       r4, -0x7658(r13)
	  li        r4, 0xA0
	  subi      r3, r3, 0xDD0
	  cmplwi    r0, 0
	  stb       r6, -0x8000(r5)
	  stb       r4, -0x8000(r5)
	  lwz       r0, 0x10C(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r5)
	  bne-      .loc_0xFC
	  stb       r6, -0x8000(r5)
	  li        r0, 0xA1
	  stb       r0, -0x8000(r5)
	  lwz       r0, 0x110(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r5)

	.loc_0xFC:
	  li        r0, 0x8
	  lis       r8, 0xCC01
	  stb       r0, -0x8000(r8)
	  li        r0, 0xA2
	  lis       r3, 0x8051
	  lwz       r4, 0x60(r31)
	  stb       r0, -0x8000(r8)
	  subi      r7, r3, 0xDD0
	  lwz       r6, 0x58(r31)
	  li        r3, 0x15
	  lwz       r0, 0x114(r7)
	  li        r5, 0x30
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r8)
	  lwz       r0, 0x0(r4)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r6, r0
	  stw       r4, 0x104(r7)
	  bl        0x83C5C
	  lwz       r4, 0x60(r31)
	  lis       r3, 0x8051
	  subi      r6, r3, 0xDD0
	  lwz       r7, 0x5C(r31)
	  lwz       r0, 0x0(r4)
	  li        r3, 0x16
	  li        r5, 0x24
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r7, r0
	  stw       r4, 0x108(r6)
	  bl        0x83C30
	  lwz       r3, 0xC(r31)
	  lwz       r6, 0x54(r31)
	  lbz       r5, 0x34(r31)
	  rlwinm.   r0,r3,0,22,22
	  lbz       r4, 0x48(r31)
	  rlwinm    r3,r3,0,16,19
	  stw       r6, -0x7654(r13)
	  stb       r5, -0x7650(r13)
	  stb       r4, -0x768C(r13)
	  stw       r3, -0x764C(r13)
	  bne-      .loc_0x208
	  lbz       r0, -0x764F(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B0
	  bl        0x25078

	.loc_0x1B0:
	  lhz       r28, 0xA(r31)
	  li        r27, 0
	  lwz       r29, 0x38(r31)
	  lwz       r30, 0x3C(r31)
	  b         .loc_0x1F8

	.loc_0x1C4:
	  rlwinm    r31,r27,2,14,29
	  lwzx      r3, r29, r31
	  cmplwi    r3, 0
	  beq-      .loc_0x1E4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E4:
	  lwzx      r3, r30, r31
	  cmplwi    r3, 0
	  beq-      .loc_0x1F4
	  bl        0x27794

	.loc_0x1F4:
	  addi      r27, r27, 0x1

	.loc_0x1F8:
	  rlwinm    r0,r27,0,16,31
	  cmplw     r0, r28
	  blt+      .loc_0x1C4
	  b         .loc_0x264

	.loc_0x208:
	  lis       r3, 0x8051
	  li        r4, 0
	  subi      r30, r3, 0xDD0
	  lwz       r3, 0x40(r30)
	  lwz       r3, 0x30(r3)
	  bl        0x15DBC
	  lwz       r3, 0x40(r30)
	  li        r4, 0
	  lwz       r3, 0x30(r3)
	  bl        0x15E2C
	  lhz       r27, 0xA(r31)
	  li        r28, 0
	  lwz       r31, 0x3C(r31)
	  b         .loc_0x258

	.loc_0x240:
	  rlwinm    r0,r28,2,14,29
	  lwzx      r3, r31, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x254
	  bl        0x27734

	.loc_0x254:
	  addi      r28, r28, 0x1

	.loc_0x258:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r27
	  blt+      .loc_0x240

	.loc_0x264:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80061158
 * Size:	0000B8
 */
void J3DShape::draw() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  stw       r0, -0x7690(r13)
	  cmplw     r0, r3
	  beq-      .loc_0x38
	  li        r4, 0xC0
	  bl        0x88254
	  lwz       r0, 0x2C(r31)
	  stw       r0, -0x7690(r13)

	.loc_0x38:
	  li        r10, 0x8
	  lis       r9, 0xCC01
	  stb       r10, -0x8000(r9)
	  li        r0, 0x30
	  lwz       r3, 0x40(r31)
	  li        r8, 0x40
	  stb       r0, -0x8000(r9)
	  li        r7, 0x10
	  lwz       r11, 0x44(r31)
	  li        r6, 0x1
	  stw       r3, -0x8000(r9)
	  li        r5, 0x1018
	  lwz       r4, 0x40(r31)
	  mr        r3, r31
	  stb       r10, -0x8000(r9)
	  lwz       r0, 0x44(r31)
	  stb       r8, -0x8000(r9)
	  stw       r11, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  sth       r6, -0x8000(r9)
	  sth       r5, -0x8000(r9)
	  stw       r4, -0x8000(r9)
	  stw       r0, -0x8000(r9)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80061210
 * Size:	000160
 */
void J3DShape::simpleDraw() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  stw       r30, 0x18(r1)
	  cmplw     r0, r3
	  stw       r29, 0x14(r1)
	  stw       r0, -0x7690(r13)
	  beq-      .loc_0x40
	  li        r4, 0xC0
	  bl        0x88194
	  lwz       r0, 0x2C(r31)
	  stw       r0, -0x7690(r13)

	.loc_0x40:
	  li        r12, 0x8
	  lis       r11, 0xCC01
	  stb       r12, -0x8000(r11)
	  li        r0, 0x30
	  lis       r3, 0x8051
	  lwz       r5, 0x40(r31)
	  stb       r0, -0x8000(r11)
	  li        r10, 0x40
	  lbz       r0, 0x34(r31)
	  li        r9, 0x10
	  stw       r5, -0x8000(r11)
	  li        r8, 0x1
	  cmplwi    r0, 0
	  lwz       r4, 0xC(r31)
	  stb       r12, -0x8000(r11)
	  li        r7, 0x1018
	  rlwinm    r5,r4,30,29,31
	  lwz       r30, 0x44(r31)
	  stb       r10, -0x8000(r11)
	  li        r4, 0xA0
	  lwz       r6, 0x40(r31)
	  subi      r3, r3, 0xDD0
	  stw       r30, -0x8000(r11)
	  lwz       r0, 0x44(r31)
	  stb       r9, -0x8000(r11)
	  sth       r8, -0x8000(r11)
	  sth       r7, -0x8000(r11)
	  stw       r6, -0x8000(r11)
	  stw       r0, -0x8000(r11)
	  stw       r5, -0x7658(r13)
	  stb       r12, -0x8000(r11)
	  stb       r4, -0x8000(r11)
	  lwz       r0, 0x10C(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r11)
	  bne-      .loc_0xE8
	  stb       r12, -0x8000(r11)
	  li        r0, 0xA1
	  stb       r0, -0x8000(r11)
	  lwz       r0, 0x110(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r11)

	.loc_0xE8:
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0xA2
	  lis       r3, 0x8051
	  lhz       r30, 0xA(r31)
	  stb       r0, -0x8000(r4)
	  subi      r3, r3, 0xDD0
	  lwz       r31, 0x3C(r31)
	  li        r29, 0
	  lwz       r0, 0x114(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r4)
	  b         .loc_0x138

	.loc_0x120:
	  rlwinm    r0,r29,2,14,29
	  lwzx      r3, r31, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  bl        0x27524

	.loc_0x134:
	  addi      r29, r29, 0x1

	.loc_0x138:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x120
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
 * Address:	80061370
 * Size:	000170
 */
void J3DShape::simpleDrawCache() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r0, -0x7690(r13)
	  cmplw     r0, r3
	  beq-      .loc_0x3C
	  li        r4, 0xC0
	  bl        0x88038
	  lwz       r0, 0x2C(r31)
	  stw       r0, -0x7690(r13)

	.loc_0x3C:
	  lbz       r0, -0x768C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lbz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r9, 0x8
	  lis       r8, 0xCC01
	  stb       r9, -0x8000(r8)
	  li        r0, 0x30
	  lwz       r3, 0x40(r31)
	  li        r7, 0x40
	  stb       r0, -0x8000(r8)
	  li        r6, 0x10
	  lwz       r10, 0x44(r31)
	  li        r5, 0x1
	  stw       r3, -0x8000(r8)
	  li        r4, 0x1018
	  lwz       r3, 0x40(r31)
	  stb       r9, -0x8000(r8)
	  lwz       r0, 0x44(r31)
	  stb       r7, -0x8000(r8)
	  stw       r10, -0x8000(r8)
	  stb       r6, -0x8000(r8)
	  sth       r5, -0x8000(r8)
	  sth       r4, -0x8000(r8)
	  stw       r3, -0x8000(r8)
	  stw       r0, -0x8000(r8)

	.loc_0xAC:
	  li        r6, 0x8
	  lis       r5, 0xCC01
	  stb       r6, -0x8000(r5)
	  li        r4, 0xA0
	  lis       r3, 0x8051
	  lbz       r0, 0x34(r31)
	  stb       r4, -0x8000(r5)
	  subi      r3, r3, 0xDD0
	  cmplwi    r0, 0
	  lwz       r0, 0x10C(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r5)
	  bne-      .loc_0xF8
	  stb       r6, -0x8000(r5)
	  li        r0, 0xA1
	  stb       r0, -0x8000(r5)
	  lwz       r0, 0x110(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r5)

	.loc_0xF8:
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0xA2
	  lis       r3, 0x8051
	  lhz       r30, 0xA(r31)
	  stb       r0, -0x8000(r4)
	  subi      r3, r3, 0xDD0
	  lwz       r31, 0x3C(r31)
	  li        r29, 0
	  lwz       r0, 0x114(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, -0x8000(r4)
	  b         .loc_0x148

	.loc_0x130:
	  rlwinm    r0,r29,2,14,29
	  lwzx      r3, r31, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x144
	  bl        0x273B4

	.loc_0x144:
	  addi      r29, r29, 0x1

	.loc_0x148:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r30
	  blt+      .loc_0x130
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
