

/*
 * --INFO--
 * Address:	80032F1C
 * Size:	0000F4
 */
void JUTTexture::JUTTexture(int, int, _GXTexFmt)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r7, 0x1
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r6
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  li        r6, 0
	  lbz       r0, 0x3B(r3)
	  rlwinm    r3,r4,0,16,31
	  rlwinm    r4,r5,0,16,31
	  mr        r5, r30
	  rlwinm    r0,r0,0,30,30
	  ori       r0, r0, 0x1
	  stb       r0, 0x3B(r27)
	  bl        0xB3FF8
	  mr        r31, r3
	  li        r4, 0x20
	  addi      r3, r31, 0x20
	  bl        -0xEF78
	  stw       r3, 0x3C(r27)
	  li        r7, 0
	  li        r6, 0x1
	  li        r0, 0x20
	  lwz       r4, 0x3C(r27)
	  mr        r3, r27
	  li        r5, 0
	  stb       r30, 0x0(r4)
	  stb       r7, 0x1(r4)
	  sth       r28, 0x2(r4)
	  sth       r29, 0x4(r4)
	  stb       r7, 0x6(r4)
	  stb       r7, 0x7(r4)
	  stb       r7, 0x8(r4)
	  stb       r7, 0x9(r4)
	  sth       r7, 0xA(r4)
	  stw       r7, 0xC(r4)
	  stb       r7, 0x10(r4)
	  stb       r7, 0x11(r4)
	  stb       r7, 0x12(r4)
	  stb       r7, 0x13(r4)
	  stb       r6, 0x14(r4)
	  stb       r6, 0x15(r4)
	  stb       r7, 0x16(r4)
	  stb       r7, 0x17(r4)
	  stb       r6, 0x18(r4)
	  sth       r7, 0x1A(r4)
	  stw       r0, 0x1C(r4)
	  stw       r7, 0x28(r27)
	  bl        0x9C
	  lwz       r3, 0x24(r27)
	  mr        r4, r31
	  bl        0xB9724
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033010
 * Size:	000074
 */
void JUTTexture::~JUTTexture()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x58
	  lbz       r0, 0x3B(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x34
	  lwz       r3, 0x3C(r30)
	  bl        -0xEF68

	.loc_0x34:
	  lbz       r0, 0x3B(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x48
	  lwz       r3, 0x28(r30)
	  bl        -0xEFA0

	.loc_0x48:
	  extsh.    r0, r31
	  ble-      .loc_0x58
	  mr        r3, r30
	  bl        -0xEFB0

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033084
 * Size:	0001AC
 */
void JUTTexture::storeTIMG(const ResTIMG*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  beq-      .loc_0x190
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x10
	  bge-      .loc_0x190
	  stw       r4, 0x20(r31)
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x1C(r3)
	  add       r0, r3, r0
	  stw       r0, 0x24(r31)
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  addi      r0, r3, 0x20
	  stw       r0, 0x24(r31)

	.loc_0x5C:
	  li        r0, 0
	  stw       r0, 0x2C(r31)
	  stb       r0, 0x3A(r31)
	  lwz       r3, 0x20(r31)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x30(r31)
	  lwz       r3, 0x20(r31)
	  lbz       r0, 0x7(r3)
	  stb       r0, 0x31(r31)
	  lwz       r3, 0x20(r31)
	  lbz       r0, 0x14(r3)
	  stb       r0, 0x32(r31)
	  lwz       r3, 0x20(r31)
	  lbz       r0, 0x15(r3)
	  stb       r0, 0x33(r31)
	  lwz       r3, 0x20(r31)
	  lbz       r0, 0x16(r3)
	  extsb     r0, r0
	  sth       r0, 0x34(r31)
	  lwz       r3, 0x20(r31)
	  lbz       r0, 0x17(r3)
	  extsb     r0, r0
	  sth       r0, 0x36(r31)
	  lwz       r3, 0x20(r31)
	  lha       r0, 0x1A(r3)
	  sth       r0, 0x38(r31)
	  lwz       r8, 0x20(r31)
	  lhz       r7, 0xA(r8)
	  cmplwi    r7, 0
	  bne-      .loc_0xE0
	  mr        r3, r31
	  bl        0x2E8
	  b         .loc_0x190

	.loc_0xE0:
	  cmplwi    r7, 0x100
	  ble-      .loc_0x108
	  rlwinm    r3,r5,0,24,31
	  rlwinm    r0,r5,30,0,1
	  rlwinm    r3,r3,1,31,31
	  sub       r0, r0, r3
	  rlwinm    r0,r0,2,0,31
	  add       r3, r0, r3
	  addi      r29, r3, 0x10
	  b         .loc_0x10C

	.loc_0x108:
	  rlwinm    r29,r5,0,24,31

	.loc_0x10C:
	  lwz       r3, 0x28(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lbz       r0, 0x3B(r31)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x16C

	.loc_0x124:
	  li        r3, 0x18
	  bl        -0xF308
	  mr.       r30, r3
	  beq-      .loc_0x154
	  lwz       r7, 0x20(r31)
	  mr        r4, r29
	  lwz       r0, 0xC(r7)
	  lbz       r5, 0x9(r7)
	  lbz       r6, 0x1(r7)
	  add       r8, r7, r0
	  lhz       r7, 0xA(r7)
	  bl        -0x4278

	.loc_0x154:
	  stw       r30, 0x28(r31)
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,31,31
	  ori       r0, r0, 0x2
	  stb       r0, 0x3B(r31)
	  b         .loc_0x184

	.loc_0x16C:
	  lwz       r0, 0xC(r8)
	  mr        r4, r29
	  lbz       r5, 0x9(r8)
	  lbz       r6, 0x1(r8)
	  add       r8, r8, r0
	  bl        -0x42A8

	.loc_0x184:
	  lwz       r4, 0x28(r31)
	  mr        r3, r31
	  bl        0x18C

	.loc_0x190:
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
 * Address:	80033230
 * Size:	000034
 */
void JUTTexture::storeTIMG(const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x1C
	  lbz       r6, 0xC(r5)
	  b         .loc_0x20

	.loc_0x1C:
	  li        r6, 0

	.loc_0x20:
	  bl        .loc_0x34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x34:
	*/
}

/*
 * --INFO--
 * Address:	80033264
 * Size:	000138
 */
void JUTTexture::storeTIMG(const ResTIMG*, JUTPalette*, _GXTlut)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  beq-      .loc_0x11C
	  stw       r4, 0x20(r31)
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x1C(r3)
	  add       r0, r3, r0
	  stw       r0, 0x24(r31)
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  addi      r0, r3, 0x20
	  stw       r0, 0x24(r31)

	.loc_0x58:
	  lbz       r0, 0x3B(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x6C
	  lwz       r3, 0x28(r31)
	  bl        -0xF218

	.loc_0x6C:
	  stw       r29, 0x28(r31)
	  cmplwi    r29, 0
	  li        r0, 0
	  lbz       r3, 0x3B(r31)
	  rlwinm    r3,r3,0,31,31
	  stb       r3, 0x3B(r31)
	  stw       r0, 0x2C(r31)
	  beq-      .loc_0xB8
	  stb       r30, 0x3A(r31)
	  lbz       r0, 0xC(r29)
	  cmpw      r30, r0
	  beq-      .loc_0xB8
	  lbz       r5, 0xD(r29)
	  mr        r3, r29
	  lbz       r6, 0x16(r29)
	  mr        r4, r30
	  lhz       r7, 0x14(r29)
	  lwz       r8, 0x10(r29)
	  bl        -0x43BC

	.loc_0xB8:
	  lwz       r4, 0x20(r31)
	  mr        r3, r31
	  lbz       r0, 0x6(r4)
	  stb       r0, 0x30(r31)
	  lwz       r4, 0x20(r31)
	  lbz       r0, 0x7(r4)
	  stb       r0, 0x31(r31)
	  lwz       r4, 0x20(r31)
	  lbz       r0, 0x14(r4)
	  stb       r0, 0x32(r31)
	  lwz       r4, 0x20(r31)
	  lbz       r0, 0x15(r4)
	  stb       r0, 0x33(r31)
	  lwz       r4, 0x20(r31)
	  lbz       r0, 0x16(r4)
	  extsb     r0, r0
	  sth       r0, 0x34(r31)
	  lwz       r4, 0x20(r31)
	  lbz       r0, 0x17(r4)
	  extsb     r0, r0
	  sth       r0, 0x36(r31)
	  lwz       r4, 0x20(r31)
	  lha       r0, 0x1A(r4)
	  sth       r0, 0x38(r31)
	  bl        0x78

	.loc_0x11C:
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
 * Address:	8003339C
 * Size:	000058
 */
void JUTTexture::attachPalette(JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x20(r3)
	  lbz       r0, 0x8(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  cmplwi    r4, 0
	  bne-      .loc_0x38
	  lwz       r0, 0x28(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  stw       r0, 0x2C(r3)
	  b         .loc_0x3C

	.loc_0x38:
	  stw       r4, 0x2C(r3)

	.loc_0x3C:
	  lwz       r4, 0x2C(r3)
	  lbz       r4, 0xC(r4)
	  bl        0x154

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800333F4
 * Size:	000050
 */
void JUTTexture::init()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x20(r3)
	  lhz       r0, 0xA(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x24
	  bl        .loc_0x50
	  b         .loc_0x40

	.loc_0x24:
	  lwz       r0, 0x28(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  stw       r0, 0x2C(r3)
	  lwz       r4, 0x2C(r3)
	  lbz       r4, 0xC(r4)
	  bl        0x104

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	80033444
 * Size:	0000F0
 */
void JUTTexture::initTexObj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0x20
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r7, 0x20(r3)
	  lbz       r4, 0x10(r7)
	  lwz       r5, 0x1C(r7)
	  neg       r3, r4
	  or        r3, r3, r4
	  cmplwi    r5, 0
	  rlwinm    r10,r3,1,31,31
	  beq-      .loc_0x3C
	  mr        r0, r5

	.loc_0x3C:
	  add       r4, r7, r0
	  lhz       r5, 0x2(r7)
	  lhz       r6, 0x4(r7)
	  mr        r3, r31
	  lbz       r7, 0x0(r7)
	  lbz       r8, 0x30(r31)
	  lbz       r9, 0x31(r31)
	  bl        0xB3CE0
	  lha       r0, 0x38(r31)
	  lis       r5, 0x4330
	  lwz       r8, 0x20(r31)
	  mr        r3, r31
	  xoris     r0, r0, 0x8000
	  lhz       r4, 0x34(r31)
	  stw       r0, 0x1C(r1)
	  lhz       r0, 0x36(r31)
	  stw       r5, 0x18(r1)
	  lfd       f2, -0x7C48(r2)
	  lfd       f1, 0x18(r1)
	  lfs       f0, -0x7C54(r2)
	  fsubs     f1, f1, f2
	  stw       r4, 0xC(r1)
	  lfd       f4, -0x7C50(r2)
	  stw       r5, 0x8(r1)
	  fdivs     f3, f1, f0
	  lfs       f2, -0x7C58(r2)
	  lfd       f1, 0x8(r1)
	  stw       r0, 0x14(r1)
	  lbz       r4, 0x32(r31)
	  stw       r5, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f1, f1, f4
	  lbz       r5, 0x33(r31)
	  fsubs     f0, f0, f4
	  lbz       r6, 0x12(r8)
	  fmuls     f1, f1, f2
	  lbz       r7, 0x11(r8)
	  lbz       r8, 0x13(r8)
	  fmuls     f2, f0, f2
	  bl        0xB3EF4
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033534
 * Size:	0000FC
 */
void JUTTexture::initTexObj(_GXTlut)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0x20
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x20(r3)
	  lbz       r5, 0x10(r3)
	  stb       r4, 0x3A(r31)
	  neg       r3, r5
	  or        r3, r3, r5
	  lwz       r7, 0x20(r31)
	  rlwinm    r10,r3,1,31,31
	  lwz       r3, 0x1C(r7)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  mr        r0, r3

	.loc_0x44:
	  stw       r4, 0x8(r1)
	  add       r4, r7, r0
	  mr        r3, r31
	  lhz       r5, 0x2(r7)
	  lhz       r6, 0x4(r7)
	  lbz       r7, 0x0(r7)
	  lbz       r8, 0x30(r31)
	  lbz       r9, 0x31(r31)
	  bl        0xB3E30
	  lha       r0, 0x38(r31)
	  lis       r5, 0x4330
	  lwz       r8, 0x20(r31)
	  mr        r3, r31
	  xoris     r0, r0, 0x8000
	  lhz       r4, 0x34(r31)
	  stw       r0, 0x24(r1)
	  lhz       r0, 0x36(r31)
	  stw       r5, 0x20(r1)
	  lfd       f2, -0x7C48(r2)
	  lfd       f1, 0x20(r1)
	  lfs       f0, -0x7C54(r2)
	  fsubs     f1, f1, f2
	  stw       r4, 0x14(r1)
	  lfd       f4, -0x7C50(r2)
	  stw       r5, 0x10(r1)
	  fdivs     f3, f1, f0
	  lfs       f2, -0x7C58(r2)
	  lfd       f1, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  lbz       r4, 0x32(r31)
	  stw       r5, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f1, f1, f4
	  lbz       r5, 0x33(r31)
	  fsubs     f0, f0, f4
	  lbz       r6, 0x12(r8)
	  fmuls     f1, f1, f2
	  lbz       r7, 0x11(r8)
	  lbz       r8, 0x13(r8)
	  fmuls     f2, f0, f2
	  bl        0xB3DF8
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80033630
 * Size:	000050
 */
void JUTTexture::load(_GXTexMapID)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x2C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  bl        -0x46BC

	.loc_0x2C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xB40AC
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
 * Address:	80033680
 * Size:	0000C4
 */
void JUTTexture::capture(int, int, _GXTexFmt, bool, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r8
	  stw       r30, 0x18(r1)
	  mr        r30, r7
	  stw       r29, 0x14(r1)
	  mr        r29, r6
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lbz       r0, 0x3B(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xA4
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x64
	  lwz       r6, 0x20(r28)
	  rlwinm    r3,r4,0,16,31
	  rlwinm    r4,r5,0,16,31
	  lhz       r5, 0x2(r6)
	  lhz       r0, 0x4(r6)
	  rlwinm    r5,r5,1,16,30
	  rlwinm    r6,r0,1,16,30
	  bl        0xB25E4
	  b         .loc_0x7C

	.loc_0x64:
	  lwz       r6, 0x20(r28)
	  rlwinm    r3,r4,0,16,31
	  rlwinm    r4,r5,0,16,31
	  lhz       r5, 0x2(r6)
	  lhz       r6, 0x4(r6)
	  bl        0xB25C8

	.loc_0x7C:
	  lwz       r4, 0x20(r28)
	  mr        r5, r29
	  rlwinm    r6,r30,0,24,31
	  lhz       r3, 0x2(r4)
	  lhz       r4, 0x4(r4)
	  bl        0xB2660
	  lwz       r3, 0x24(r28)
	  mr        r4, r31
	  bl        0xB2F90
	  bl        0xB1E9C

	.loc_0xA4:
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
 * Size:	000188
 */
void JUTTexture::captureTexture(int, int, int, int, bool, _GXTexFmt, _GXTexFmt)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JUTTexture::captureDolTexture(void*, int, int, int, int, bool, _GXTexFmt)
{
	// UNUSED FUNCTION
}