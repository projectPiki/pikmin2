

/*
 * --INFO--
 * Address:	8006B200
 * Size:	000098
 */
void J3DMtxCalcJ3DSysInitBasic::init(const Vec&, const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r9, r3
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r6, r5, 0x7650
	  lfs       f1, 0x0(r9)
	  lis       r8, 0x8051
	  lwz       r0, 0x0(r6)
	  lis       r5, 0x8051
	  lwz       r7, 0x4(r6)
	  lis       r3, 0x8051
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0xC2C
	  lwz       r6, 0x8(r6)
	  mr        r3, r4
	  stw       r7, 0xC(r1)
	  mr        r4, r0
	  lfs       f5, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f2, 0x4(r9)
	  stfsu     f1, -0xBFC(r8)
	  lfs       f3, 0x8(r9)
	  stfs      f2, 0x4(r8)
	  lfs       f4, 0xC(r1)
	  stfsu     f5, -0xBF0(r5)
	  lfs       f0, 0x10(r1)
	  stfs      f3, 0x8(r8)
	  lfs       f1, 0x0(r9)
	  lfs       f2, 0x4(r9)
	  lfs       f3, 0x8(r9)
	  stfs      f4, 0x4(r5)
	  stfs      f0, 0x8(r5)
	  bl        -0x361E8
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B298
 * Size:	000098
 */
void J3DMtxCalcJ3DSysInitMaya::init(const Vec&, const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r9, r3
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r7, r5, 0x7644
	  lfs       f5, 0x0(r9)
	  lis       r5, 0x8051
	  lwz       r0, 0x0(r7)
	  lis       r6, 0x8051
	  lwz       r8, 0x4(r7)
	  lis       r3, 0x8051
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0xC2C
	  lwz       r7, 0x8(r7)
	  mr        r3, r4
	  stw       r8, 0xC(r1)
	  mr        r4, r0
	  lfs       f1, 0x8(r1)
	  stw       r7, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stfsu     f1, -0xBF0(r6)
	  lfs       f3, 0x10(r1)
	  stfs      f2, 0x4(r6)
	  lfs       f4, 0x4(r9)
	  stfsu     f5, -0xBFC(r5)
	  lfs       f0, 0x8(r9)
	  stfs      f3, 0x8(r6)
	  lfs       f1, 0x0(r9)
	  lfs       f2, 0x4(r9)
	  lfs       f3, 0x8(r9)
	  stfs      f4, 0x4(r5)
	  stfs      f0, 0x8(r5)
	  bl        -0x36280
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B330
 * Size:	000118
 */
void J3DMtxCalcCalcTransformBasic::calcTransform(const J3DTransformInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  lfs       f0, 0x0(r3)
	  stw       r0, 0x24(r1)
	  lfs       f2, 0x4(r3)
	  stmw      r27, 0xC(r1)
	  subi      r31, r4, 0xBFC
	  mr        r27, r3
	  lwz       r5, -0x7674(r13)
	  lfs       f1, 0x0(r31)
	  lhz       r28, 0x14(r5)
	  fmuls     f4, f1, f0
	  lfs       f3, 0x4(r31)
	  lwz       r29, -0x7678(r13)
	  mulli     r0, r28, 0x30
	  lfs       f1, 0x8(r31)
	  fmuls     f2, f3, f2
	  lwz       r4, 0xC(r29)
	  lfs       f0, 0x8(r3)
	  add       r30, r4, r0
	  stfs      f4, 0x0(r31)
	  fmuls     f0, f1, f0
	  mr        r4, r30
	  stfs      f2, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  bl        -0xC22C
	  lis       r3, 0x8051
	  lfs       f1, -0x78E8(r2)
	  lfs       f0, -0xBFC(r3)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0xA0
	  lfs       f0, 0x4(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0xA0
	  lfs       f0, 0x8(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0xA0
	  li        r0, 0x1
	  b         .loc_0xA4

	.loc_0xA0:
	  li        r0, 0

	.loc_0xA4:
	  cmpwi     r0, 0
	  bne-      .loc_0xD4
	  lwz       r4, 0x4(r29)
	  li        r0, 0
	  lfs       f1, 0x0(r27)
	  mr        r3, r30
	  stbx      r0, r4, r28
	  mr        r4, r30
	  lfs       f2, 0x4(r27)
	  lfs       f3, 0x8(r27)
	  bl        -0x36360
	  b         .loc_0xE0

	.loc_0xD4:
	  lwz       r3, 0x4(r29)
	  li        r0, 0x1
	  stbx      r0, r3, r28

	.loc_0xE0:
	  lis       r3, 0x8051
	  mr        r4, r30
	  subi      r3, r3, 0xC2C
	  mr        r5, r3
	  bl        0x7EEE0
	  lis       r3, 0x8051
	  mr        r4, r30
	  subi      r3, r3, 0xC2C
	  bl        0x7EE9C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B448
 * Size:	000168
 */
void J3DMtxCalcCalcTransformSoftimage::calcTransform(const J3DTransformInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  lfs       f1, 0x14(r27)
	  subi      r29, r3, 0xBFC
	  lfs       f4, 0x18(r27)
	  lfs       f3, 0x1C(r27)
	  lha       r5, 0x10(r27)
	  lwz       r4, -0x7674(r13)
	  lfs       f0, 0x0(r29)
	  lhz       r30, 0x14(r4)
	  lwz       r28, -0x7678(r13)
	  fmuls     f1, f1, f0
	  lfs       f2, 0x4(r29)
	  mulli     r0, r30, 0x30
	  lfs       f0, 0x8(r29)
	  lwz       r3, 0xC(r28)
	  fmuls     f2, f4, f2
	  fmuls     f3, f3, f0
	  lha       r4, 0xE(r27)
	  add       r31, r3, r0
	  lha       r3, 0xC(r27)
	  mr        r6, r31
	  bl        -0xC294
	  lis       r3, 0x8051
	  mr        r4, r31
	  subi      r3, r3, 0xC2C
	  mr        r5, r3
	  bl        0x7EE3C
	  lis       r3, 0x8051
	  lfs       f1, 0x0(r27)
	  lfsu      f2, -0xBFC(r3)
	  lfs       f3, 0x4(r29)
	  fmuls     f4, f2, f1
	  lfs       f0, 0x4(r27)
	  lfs       f2, 0x8(r29)
	  fmuls     f3, f3, f0
	  lfs       f1, 0x8(r27)
	  lfs       f0, -0x78E8(r2)
	  fmuls     f1, f2, f1
	  stfs      f4, 0x0(r3)
	  fcmpu     cr0, f0, f4
	  stfs      f3, 0x4(r29)
	  stfs      f1, 0x8(r29)
	  bne-      .loc_0xD8
	  fcmpu     cr0, f0, f3
	  bne-      .loc_0xD8
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0xD8
	  li        r0, 0x1
	  b         .loc_0xDC

	.loc_0xD8:
	  li        r0, 0

	.loc_0xDC:
	  cmpwi     r0, 0
	  bne-      .loc_0x138
	  lwz       r5, 0x4(r28)
	  li        r0, 0
	  lis       r3, 0x8051
	  lis       r4, 0x8051
	  stbx      r0, r5, r30
	  subi      r5, r3, 0xBFC
	  subi      r3, r4, 0xC2C
	  mr        r4, r31
	  lfs       f1, 0x0(r5)
	  lfs       f2, 0x4(r29)
	  lfs       f3, 0x8(r29)
	  bl        -0x364BC
	  lis       r3, 0x8051
	  subi      r3, r3, 0xC2C
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0xC(r31)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x1C(r31)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x2C(r31)
	  b         .loc_0x154

	.loc_0x138:
	  lwz       r5, 0x4(r28)
	  li        r0, 0x1
	  lis       r3, 0x8051
	  mr        r4, r31
	  stbx      r0, r5, r30
	  subi      r3, r3, 0xC2C
	  bl        0x7ED34

	.loc_0x154:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B5B0
 * Size:	000178
 */
void J3DMtxCalcCalcTransformMaya::calcTransform(const J3DTransformInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  lwz       r29, -0x7674(r13)
	  lwz       r28, -0x7678(r13)
	  lhz       r27, 0x14(r29)
	  lwz       r4, 0xC(r28)
	  mulli     r0, r27, 0x30
	  add       r30, r4, r0
	  mr        r4, r30
	  bl        -0xC474
	  lfs       f1, -0x78E8(r2)
	  lfs       f0, 0x0(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x6C
	  lfs       f0, 0x4(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x6C
	  lfs       f0, 0x8(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x6C
	  lwz       r3, 0x4(r28)
	  li        r0, 0x1
	  stbx      r0, r3, r27
	  b         .loc_0x90

	.loc_0x6C:
	  lwz       r4, 0x4(r28)
	  li        r0, 0
	  lfs       f1, 0x0(r31)
	  mr        r3, r30
	  stbx      r0, r4, r27
	  mr        r4, r30
	  lfs       f2, 0x4(r31)
	  lfs       f3, 0x8(r31)
	  bl        -0x365A0

	.loc_0x90:
	  lbz       r0, 0x17(r29)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x124
	  lis       r3, 0x8051
	  lfsu      f1, -0xBF0(r3)
	  lfs       f0, 0x0(r30)
	  fres      f3, f1
	  lfs       f2, 0x4(r3)
	  lfs       f1, 0x8(r3)
	  fmuls     f0, f0, f3
	  fres      f2, f2
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x4(r30)
	  fmuls     f0, f0, f3
	  fres      f1, f1
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  fmuls     f0, f0, f3
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0x10(r30)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x10(r30)
	  lfs       f0, 0x14(r30)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x18(r30)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x18(r30)
	  lfs       f0, 0x20(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x20(r30)
	  lfs       f0, 0x24(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x24(r30)
	  lfs       f0, 0x28(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r30)

	.loc_0x124:
	  lis       r3, 0x8051
	  mr        r4, r30
	  subi      r3, r3, 0xC2C
	  mr        r5, r3
	  bl        0x7EC1C
	  lis       r3, 0x8051
	  mr        r4, r30
	  subi      r3, r3, 0xC2C
	  bl        0x7EBD8
	  lfs       f2, 0x0(r31)
	  lis       r3, 0x8051
	  lfs       f1, 0x4(r31)
	  stfsu     f2, -0xBF0(r3)
	  lfs       f0, 0x8(r31)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B728
 * Size:	000104
 */
void J3DNewMtxCalcAnm(unsigned long, J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  beq-      .loc_0x74
	  bge-      .loc_0x2C
	  cmpwi     r3, 0
	  bge-      .loc_0x38
	  b         .loc_0xEC

	.loc_0x2C:
	  cmpwi     r3, 0x3
	  bge-      .loc_0xEC
	  b         .loc_0xB0

	.loc_0x38:
	  li        r3, 0xC
	  bl        -0x478C0
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0x4C4
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1BB4
	  addi      r0, r4, 0x1B88
	  stw       r5, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r0, 0x0(r3)
	  b         .loc_0xF0

	.loc_0x74:
	  li        r3, 0xC
	  bl        -0x478FC
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0x4C4
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1BB4
	  addi      r0, r4, 0x1B5C
	  stw       r5, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r0, 0x0(r3)
	  b         .loc_0xF0

	.loc_0xB0:
	  li        r3, 0xC
	  bl        -0x47938
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0x4C4
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1BB4
	  addi      r0, r4, 0x1B30
	  stw       r5, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r0, 0x0(r3)
	  b         .loc_0xF0

	.loc_0xEC:
	  li        r3, 0

	.loc_0xF0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B82C
 * Size:	00005C
 */
void J3DMtxCalcAnmBase::~J3DMtxCalcAnmBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x477B8

	.loc_0x44:
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
 * Address:	8006B888
 * Size:	000034
 */
void J3DJoint::appendChild(J3DJoint*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  stw       r4, 0xC(r3)
	  blr

	.loc_0x14:
	  mr        r3, r0
	  b         .loc_0x20

	.loc_0x1C:
	  mr        r3, r0

	.loc_0x20:
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x1C
	  stw       r4, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B8BC
 * Size:	0000FC
 */
void J3DJoint::J3DJoint()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r8, 0
	  lis       r6, 0x8048
	  li        r0, 0x1
	  stw       r8, 0x0(r3)
	  lis       r5, 0x8048
	  subi      r7, r6, 0x77C0
	  lis       r4, 0x8048
	  stw       r8, 0x4(r3)
	  subi      r6, r5, 0x7638
	  subi      r5, r4, 0x762C
	  lfs       f0, -0x78E4(r2)
	  stw       r8, 0x8(r3)
	  stw       r8, 0xC(r3)
	  stw       r8, 0x10(r3)
	  sth       r8, 0x14(r3)
	  stb       r0, 0x16(r3)
	  stb       r8, 0x17(r3)
	  lwz       r4, 0x0(r7)
	  lwz       r0, 0x4(r7)
	  stw       r4, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  lwz       r4, 0x8(r7)
	  lwz       r0, 0xC(r7)
	  stw       r4, 0x20(r3)
	  stw       r0, 0x24(r3)
	  lwz       r4, 0x10(r7)
	  lwz       r0, 0x14(r7)
	  stw       r4, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  lwz       r4, 0x18(r7)
	  lwz       r0, 0x1C(r7)
	  stw       r4, 0x30(r3)
	  stw       r0, 0x34(r3)
	  stfs      f0, 0x38(r3)
	  stw       r8, 0x54(r3)
	  stw       r8, 0x58(r3)
	  lwz       r0, 0x0(r6)
	  lwz       r4, 0x4(r6)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x8(r6)
	  stw       r4, 0x18(r1)
	  lfs       f0, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stfs      f0, 0x3C(r3)
	  lfs       f0, 0x1C(r1)
	  stfs      f1, 0x40(r3)
	  stfs      f0, 0x44(r3)
	  lwz       r0, 0x0(r5)
	  lwz       r4, 0x4(r5)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0xC(r1)
	  lfs       f0, 0x8(r1)
	  stw       r0, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stfs      f0, 0x48(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f1, 0x4C(r3)
	  stfs      f0, 0x50(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006B9B8
 * Size:	00019C
 */
void J3DJoint::entryIn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  subi      r31, r4, 0xDD0
	  lwz       r5, 0x38(r31)
	  lhz       r0, 0x14(r3)
	  lwz       r5, 0x84(r5)
	  mulli     r0, r0, 0x30
	  lwz       r4, 0x48(r31)
	  lwz       r5, 0xC(r5)
	  add       r30, r5, r0
	  stw       r30, 0x1C(r4)
	  lwz       r4, 0x4C(r31)
	  stw       r30, 0x1C(r4)
	  lwz       r28, 0x58(r3)
	  b         .loc_0x180

	.loc_0x48:
	  lwz       r3, 0x8(r28)
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x60
	  lwz       r28, 0x4(r28)
	  b         .loc_0x180

	.loc_0x60:
	  lwz       r5, 0x38(r31)
	  lhz       r0, 0x14(r28)
	  lwz       r4, 0xC0(r5)
	  rlwinm    r0,r0,6,0,25
	  lhz       r3, 0x8(r3)
	  add       r29, r4, r0
	  lwz       r4, 0xC4(r5)
	  lwz       r0, 0x10(r29)
	  mulli     r3, r3, 0x3C
	  rlwinm.   r0,r0,0,31,31
	  add       r27, r4, r3
	  bne-      .loc_0xF4
	  lwz       r3, 0x3C(r28)
	  lis       r0, 0xC000
	  cmplw     r3, r0
	  bge-      .loc_0xA8
	  mr        r0, r3
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r0, 0

	.loc_0xAC:
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lis       r0, 0xC000
	  cmplw     r3, r0
	  bge-      .loc_0xC4
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
	  lwz       r12, 0x0(r3)
	  mr        r4, r28
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  mr        r3, r28
	  bl        -0x87C4
	  lwz       r3, 0x3C(r28)
	  lis       r0, 0xC000
	  cmplw     r3, r0
	  bge-      .loc_0x110
	  b         .loc_0x114

	.loc_0x110:
	  li        r3, 0

	.loc_0x114:
	  stw       r3, 0x3C(r29)
	  lis       r4, 0x8051
	  subi      r0, r4, 0xDD0
	  mr        r3, r29
	  stw       r27, 0x2C(r29)
	  lwz       r4, 0x10(r28)
	  lwz       r12, 0x0(r29)
	  rlwinm    r4,r4,0,30,31
	  cntlzw    r4, r4
	  lwz       r12, 0x8(r12)
	  rlwinm    r4,r4,29,22,29
	  add       r4, r0, r4
	  lwz       r4, 0x48(r4)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x17C
	  lwz       r4, -0x7680(r13)
	  mr        r3, r28
	  stw       r29, 0x3C(r31)
	  addi      r0, r4, 0x1
	  stw       r0, -0x7680(r13)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x17C:
	  lwz       r28, 0x4(r28)

	.loc_0x180:
	  cmplwi    r28, 0
	  bne+      .loc_0x48
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BB54
 * Size:	0001A8
 */
void J3DJoint::recursiveCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stfd      f27, 0x60(r1)
	  psq_st    f27,0x68(r1),0,0
	  stfd      f26, 0x50(r1)
	  psq_st    f26,0x58(r1),0,0
	  stmw      r27, 0x3C(r1)
	  lis       r4, 0x8051
	  mr        r31, r3
	  subi      r3, r4, 0xC2C
	  li        r27, 0
	  addi      r4, r1, 0x8
	  bl        0x7E724
	  lwz       r3, 0x54(r31)
	  lis       r5, 0x8051
	  lis       r4, 0x8051
	  subi      r29, r5, 0xBFC
	  cmplwi    r3, 0
	  subi      r30, r4, 0xBF0
	  lfs       f31, 0x0(r29)
	  lfs       f30, 0x4(r29)
	  lfs       f29, 0x8(r29)
	  lfs       f28, 0x0(r30)
	  lfs       f27, 0x4(r30)
	  lfs       f26, 0x8(r30)
	  beq-      .loc_0xAC
	  lwz       r27, -0x7670(r13)
	  stw       r31, -0x7674(r13)
	  stw       r3, -0x7670(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0xAC:
	  lwz       r3, -0x7670(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  stw       r31, -0x7674(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
	  lwz       r28, 0x4(r31)
	  cmplwi    r28, 0
	  beq-      .loc_0xEC
	  mr        r12, r28
	  mr        r3, r31
	  li        r4, 0
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r3, 0xC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xFC
	  bl        .loc_0x0

	.loc_0xFC:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xC2C
	  bl        0x7E670
	  lis       r4, 0x8051
	  lis       r3, 0x8051
	  cmplwi    r27, 0
	  stfs      f31, -0xBFC(r4)
	  stfs      f30, 0x4(r29)
	  stfs      f29, 0x8(r29)
	  stfs      f28, -0xBF0(r3)
	  stfs      f27, 0x4(r30)
	  stfs      f26, 0x8(r30)
	  beq-      .loc_0x138
	  stw       r27, -0x7670(r13)

	.loc_0x138:
	  cmplwi    r28, 0
	  beq-      .loc_0x154
	  mr        r12, r28
	  mr        r3, r31
	  li        r4, 0x1
	  mtctr     r12
	  bctrl

	.loc_0x154:
	  lwz       r3, 0x10(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  bl        .loc_0x0

	.loc_0x164:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  psq_l     f27,0x68(r1),0,0
	  lfd       f27, 0x60(r1)
	  psq_l     f26,0x58(r1),0,0
	  lfd       f26, 0x50(r1)
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BCFC
 * Size:	000008
 */
void J3DMtxCalcAnmBase::getAnmTransform()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BD04
 * Size:	000008
 */
void J3DMtxCalcAnmBase::setAnmTransform(J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BD0C
 * Size:	00006C
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>,
    J3DMtxCalcJ3DSysInitMaya>::~J3DMtxCalcAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1B30
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x47CA8

	.loc_0x54:
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
 * Address:	8006BD78
 * Size:	000094
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>,
    J3DMtxCalcJ3DSysInitMaya>::init(const Vec&, const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r10, r4
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r9, r3, 0x7644
	  lfs       f5, 0x0(r10)
	  lis       r6, 0x8051
	  lwz       r4, 0x0(r9)
	  lis       r7, 0x8051
	  lwz       r8, 0x4(r9)
	  lis       r3, 0x8051
	  stw       r4, 0x8(r1)
	  subi      r4, r3, 0xC2C
	  lwz       r0, 0x8(r9)
	  mr        r3, r5
	  stw       r8, 0xC(r1)
	  lfs       f1, 0x8(r1)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stfsu     f1, -0xBF0(r7)
	  lfs       f3, 0x10(r1)
	  stfs      f2, 0x4(r7)
	  lfs       f4, 0x4(r10)
	  stfsu     f5, -0xBFC(r6)
	  lfs       f0, 0x8(r10)
	  stfs      f3, 0x8(r7)
	  lfs       f1, 0x0(r10)
	  lfs       f2, 0x4(r10)
	  lfs       f3, 0x8(r10)
	  stfs      f4, 0x4(r6)
	  stfs      f0, 0x8(r6)
	  bl        -0x36D5C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BE0C
 * Size:	000008
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>,
    J3DMtxCalcJ3DSysInitMaya>::setAnmTransform(J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BE14
 * Size:	00006C
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>,
    J3DMtxCalcJ3DSysInitSoftimage>::~J3DMtxCalcAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1B5C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x47DB0

	.loc_0x54:
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
 * Address:	8006BE80
 * Size:	00004C
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>,
    J3DMtxCalcJ3DSysInitSoftimage>::init(const Vec&, const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  lfs       f2, 0x0(r4)
	  stw       r0, 0x14(r1)
	  subi      r6, r3, 0xBFC
	  lfs       f1, 0x4(r4)
	  lis       r3, 0x8051
	  lfs       f0, 0x8(r4)
	  subi      r4, r3, 0xC2C
	  stfs      f2, 0x0(r6)
	  mr        r3, r5
	  stfs      f1, 0x4(r6)
	  stfs      f0, 0x8(r6)
	  bl        0x7E414
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BECC
 * Size:	000008
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>,
    J3DMtxCalcJ3DSysInitSoftimage>::setAnmTransform(J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BED4
 * Size:	00006C
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>,
    J3DMtxCalcJ3DSysInitBasic>::~J3DMtxCalcAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1B88
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x47E70

	.loc_0x54:
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
 * Address:	8006BF40
 * Size:	000098
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>,
    J3DMtxCalcJ3DSysInitBasic>::init(const Vec&, const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r10, r4
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r8, r3, 0x7650
	  lis       r9, 0x8051
	  lis       r6, 0x8051
	  lwz       r4, 0x0(r8)
	  lis       r3, 0x8051
	  lwz       r7, 0x4(r8)
	  lwz       r0, 0x8(r8)
	  subi      r8, r9, 0xBFC
	  stw       r4, 0x8(r1)
	  subi      r4, r3, 0xC2C
	  lfs       f1, 0x0(r10)
	  mr        r3, r5
	  stw       r7, 0xC(r1)
	  lfs       f5, 0x8(r1)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0x4(r10)
	  lfs       f3, 0x8(r10)
	  stfs      f1, 0x0(r8)
	  lfs       f4, 0xC(r1)
	  stfsu     f5, -0xBF0(r6)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x4(r8)
	  lfs       f1, 0x0(r10)
	  stfs      f3, 0x8(r8)
	  lfs       f2, 0x4(r10)
	  lfs       f3, 0x8(r10)
	  stfs      f4, 0x4(r6)
	  stfs      f0, 0x8(r6)
	  bl        -0x36F28
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BFD8
 * Size:	000008
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>,
    J3DMtxCalcJ3DSysInitBasic>::setAnmTransform(J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BFE0
 * Size:	000178
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>,
    J3DMtxCalcJ3DSysInitBasic>::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  mr        r3, r27
	  lwz       r4, -0x7674(r13)
	  lwz       r12, 0x0(r27)
	  lhz       r30, 0x14(r4)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  addi      r5, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r1, 0x8
	  b         .loc_0x70

	.loc_0x68:
	  lwz       r3, -0x7674(r13)
	  addi      r30, r3, 0x18

	.loc_0x70:
	  lis       r3, 0x8051
	  lwz       r27, -0x7678(r13)
	  subi      r31, r3, 0xBFC
	  lwz       r4, -0x7674(r13)
	  lfs       f1, 0x0(r31)
	  mr        r3, r30
	  lfs       f0, 0x0(r30)
	  lhz       r28, 0x14(r4)
	  fmuls     f0, f1, f0
	  lwz       r4, 0xC(r27)
	  mulli     r0, r28, 0x30
	  lfs       f2, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  stfs      f0, 0x0(r31)
	  add       r29, r4, r0
	  lfs       f0, 0x4(r30)
	  mr        r4, r29
	  fmuls     f0, f2, f0
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x8(r31)
	  bl        -0xCF3C
	  lis       r3, 0x8051
	  lfs       f1, -0x78E8(r2)
	  lfs       f0, -0xBFC(r3)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x100
	  lfs       f0, 0x4(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x100
	  lfs       f0, 0x8(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x100
	  li        r0, 0x1
	  b         .loc_0x104

	.loc_0x100:
	  li        r0, 0

	.loc_0x104:
	  cmpwi     r0, 0
	  bne-      .loc_0x134
	  lwz       r5, 0x4(r27)
	  li        r0, 0
	  mr        r3, r29
	  mr        r4, r29
	  stbx      r0, r5, r28
	  lfs       f1, 0x0(r30)
	  lfs       f2, 0x4(r30)
	  lfs       f3, 0x8(r30)
	  bl        -0x37070
	  b         .loc_0x140

	.loc_0x134:
	  lwz       r3, 0x4(r27)
	  li        r0, 0x1
	  stbx      r0, r3, r28

	.loc_0x140:
	  lis       r3, 0x8051
	  mr        r4, r29
	  subi      r3, r3, 0xC2C
	  mr        r5, r3
	  bl        0x7E1D0
	  lis       r3, 0x8051
	  mr        r4, r29
	  subi      r3, r3, 0xC2C
	  bl        0x7E18C
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006C158
 * Size:	0001C4
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>,
    J3DMtxCalcJ3DSysInitSoftimage>::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  mr        r3, r27
	  lwz       r4, -0x7674(r13)
	  lwz       r12, 0x0(r27)
	  lhz       r28, 0x14(r4)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r28
	  addi      r5, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r1, 0x8
	  b         .loc_0x70

	.loc_0x68:
	  lwz       r3, -0x7674(r13)
	  addi      r28, r3, 0x18

	.loc_0x70:
	  lwz       r4, -0x7674(r13)
	  lis       r3, 0x8051
	  subi      r29, r3, 0xBFC
	  lwz       r27, -0x7678(r13)
	  lhz       r30, 0x14(r4)
	  lfs       f1, 0x14(r28)
	  lfs       f0, 0x0(r29)
	  mulli     r0, r30, 0x30
	  lwz       r3, 0xC(r27)
	  lfs       f4, 0x18(r28)
	  fmuls     f1, f1, f0
	  lfs       f2, 0x4(r29)
	  add       r31, r3, r0
	  lfs       f3, 0x1C(r28)
	  mr        r6, r31
	  lfs       f0, 0x8(r29)
	  fmuls     f2, f4, f2
	  lha       r3, 0xC(r28)
	  fmuls     f3, f3, f0
	  lha       r4, 0xE(r28)
	  lha       r5, 0x10(r28)
	  bl        -0xD000
	  lis       r3, 0x8051
	  mr        r4, r31
	  subi      r3, r3, 0xC2C
	  mr        r5, r3
	  bl        0x7E0D0
	  lis       r3, 0x8051
	  lfs       f0, 0x0(r28)
	  lfsu      f1, -0xBFC(r3)
	  lfs       f3, 0x4(r29)
	  fmuls     f1, f1, f0
	  lfs       f0, -0x78E8(r2)
	  lfs       f2, 0x8(r29)
	  stfs      f1, 0x0(r3)
	  fcmpu     cr0, f0, f1
	  lfs       f1, 0x4(r28)
	  fmuls     f3, f3, f1
	  stfs      f3, 0x4(r29)
	  lfs       f1, 0x8(r28)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x8(r29)
	  bne-      .loc_0x134
	  fcmpu     cr0, f0, f3
	  bne-      .loc_0x134
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x134
	  li        r0, 0x1
	  b         .loc_0x138

	.loc_0x134:
	  li        r0, 0

	.loc_0x138:
	  cmpwi     r0, 0
	  bne-      .loc_0x194
	  lwz       r5, 0x4(r27)
	  li        r0, 0
	  lis       r3, 0x8051
	  lis       r4, 0x8051
	  stbx      r0, r5, r30
	  subi      r5, r3, 0xBFC
	  subi      r3, r4, 0xC2C
	  mr        r4, r31
	  lfs       f1, 0x0(r5)
	  lfs       f2, 0x4(r29)
	  lfs       f3, 0x8(r29)
	  bl        -0x37228
	  lis       r3, 0x8051
	  subi      r3, r3, 0xC2C
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0xC(r31)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x1C(r31)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x2C(r31)
	  b         .loc_0x1B0

	.loc_0x194:
	  lwz       r5, 0x4(r27)
	  li        r0, 0x1
	  lis       r3, 0x8051
	  mr        r4, r31
	  stbx      r0, r5, r30
	  subi      r3, r3, 0xC2C
	  bl        0x7DFC8

	.loc_0x1B0:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006C31C
 * Size:	000088
 */
void J3DMtxCalcAnimation<
    J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>,
    J3DMtxCalcJ3DSysInitMaya>::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  mr        r3, r31
	  lwz       r4, -0x7674(r13)
	  lwz       r12, 0x0(r31)
	  lhz       r31, 0x14(r4)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  addi      r5, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x8
	  b         .loc_0x70

	.loc_0x68:
	  lwz       r3, -0x7674(r13)
	  addi      r3, r3, 0x18

	.loc_0x70:
	  bl        -0xDDC
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
