

/*
 * --INFO--
 * Address:	80039ADC
 * Size:	0000B8
 */
void J2DPicture::J2DPicture()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x3000
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87D24
	  li        r0, 0
	  lis       r3, 0x8004
	  stw       r0, 0x144(r31)
	  li        r0, -0x1
	  subi      r4, r3, 0x646C
	  addi      r3, r31, 0x150
	  stw       r0, 0x148(r31)
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  stw       r0, 0x14C(r31)
	  bl        0x87CF4
	  li        r4, -0x1
	  li        r0, 0
	  stw       r4, 0x160(r31)
	  mr        r3, r31
	  stw       r4, 0x164(r31)
	  stw       r0, 0x100(r31)
	  stw       r0, 0x104(r31)
	  stw       r0, 0x108(r31)
	  stw       r0, 0x10C(r31)
	  stb       r0, 0x111(r31)
	  stb       r0, 0x110(r31)
	  bl        0x11FC
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
 * Address:	80039B94
 * Size:	00000C
 */
void JUtility::TColor::TColor()
{
	/*
	.loc_0x0:
	  li        r0, -0x1
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80039BA0
 * Size:	000004
 */
void JGeometry::TVec2<short>::TVec2()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80039BA4
 * Size:	0000CC
 */
void J2DPicture::J2DPicture(J2DPane*, JSURandomInputStream*, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x30E0
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r28)
	  addi      r3, r28, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87C44
	  li        r0, 0
	  lis       r3, 0x8004
	  stw       r0, 0x144(r28)
	  li        r0, -0x1
	  subi      r4, r3, 0x646C
	  addi      r3, r28, 0x150
	  stw       r0, 0x148(r28)
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  stw       r0, 0x14C(r28)
	  bl        0x87C14
	  li        r0, -0x1
	  mr        r3, r28
	  stw       r0, 0x160(r28)
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  stw       r0, 0x164(r28)
	  bl        0xB68
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
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
 * Address:	80039C70
 * Size:	0005EC
 */
void J2DPicture::J2DPicture(J2DPane*, JSURandomInputStream*, J2DMaterial*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stmw      r25, 0xB4(r1)
	  mr        r31, r3
	  mr        r25, r4
	  mr        r27, r5
	  mr        r28, r6
	  bl        -0x31A0
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87B84
	  li        r0, 0
	  lis       r3, 0x8004
	  stw       r0, 0x144(r31)
	  li        r0, -0x1
	  subi      r4, r3, 0x646C
	  addi      r3, r31, 0x150
	  stw       r0, 0x148(r31)
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  stw       r0, 0x14C(r31)
	  bl        0x87B54
	  li        r0, -0x1
	  mr        r3, r27
	  stw       r0, 0x160(r31)
	  stw       r0, 0x164(r31)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  mr        r3, r27
	  addi      r4, r1, 0x2C
	  li        r5, 0x8
	  bl        -0x13948
	  lis       r4, 0x5049
	  mr        r3, r27
	  addi      r0, r4, 0x4331
	  stw       r0, 0x8(r31)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  mr        r3, r27
	  addi      r4, r1, 0x24
	  li        r5, 0x8
	  bl        -0x13704
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r27
	  bl        -0xC64
	  lwz       r0, 0x28(r1)
	  mr        r3, r27
	  li        r5, 0
	  add       r4, r29, r0
	  bl        -0x1366C
	  lis       r4, 0x8004
	  addi      r3, r1, 0x44
	  subi      r4, r4, 0x6460
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87AAC
	  mr        r3, r27
	  addi      r4, r1, 0x34
	  li        r5, 0x30
	  bl        -0x139CC
	  li        r0, 0x2
	  addi      r10, r1, 0x34
	  lhz       r29, 0x38(r1)
	  li        r11, 0
	  mtctr     r0

	.loc_0x148:
	  lha       r3, 0x10(r10)
	  addi      r9, r11, 0x112
	  addi      r8, r11, 0x114
	  addi      r7, r11, 0x150
	  sthx      r3, r31, r9
	  addi      r6, r11, 0x151
	  addi      r4, r11, 0x152
	  addi      r0, r11, 0x153
	  lha       r3, 0x12(r10)
	  addi      r9, r11, 0x116
	  sthx      r3, r31, r8
	  addi      r8, r11, 0x118
	  lwz       r3, 0x20(r10)
	  stw       r3, 0x18(r1)
	  lbz       r5, 0x18(r1)
	  lbz       r3, 0x19(r1)
	  stbx      r5, r31, r7
	  addi      r7, r11, 0x154
	  lbz       r5, 0x1A(r1)
	  stbx      r3, r31, r6
	  addi      r6, r11, 0x155
	  lbz       r3, 0x1B(r1)
	  stbx      r5, r31, r4
	  addi      r4, r11, 0x156
	  stbx      r3, r31, r0
	  addi      r0, r11, 0x157
	  addi      r11, r11, 0x8
	  lha       r3, 0x14(r10)
	  sthx      r3, r31, r9
	  lha       r3, 0x16(r10)
	  sthx      r3, r31, r8
	  lwz       r3, 0x24(r10)
	  addi      r10, r10, 0x8
	  stw       r3, 0x18(r1)
	  lbz       r5, 0x18(r1)
	  lbz       r3, 0x19(r1)
	  stbx      r5, r31, r7
	  lbz       r5, 0x1A(r1)
	  stbx      r3, r31, r6
	  lbz       r3, 0x1B(r1)
	  stbx      r5, r31, r4
	  stbx      r3, r31, r0
	  bdnz+     .loc_0x148
	  lwz       r0, 0x30(r1)
	  mr        r3, r27
	  li        r5, 0
	  add       r4, r30, r0
	  bl        -0x1376C
	  cmplwi    r29, 0xFFFF
	  li        r30, 0
	  beq-      .loc_0x21C
	  mulli     r0, r29, 0x88
	  add       r30, r28, r0

	.loc_0x21C:
	  li        r0, 0xFF
	  cmplwi    r30, 0
	  stb       r0, 0xB2(r31)
	  beq-      .loc_0x234
	  lbz       r0, 0x13(r30)
	  stb       r0, 0xB2(r31)

	.loc_0x234:
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0x14(r1)
	  cmplwi    r30, 0
	  lbz       r3, 0x14(r1)
	  stw       r0, 0x10(r1)
	  lbz       r0, 0x15(r1)
	  stb       r3, 0x14C(r31)
	  lbz       r3, 0x16(r1)
	  stb       r0, 0x14D(r31)
	  lbz       r0, 0x17(r1)
	  stb       r3, 0x14E(r31)
	  lbz       r3, 0x10(r1)
	  stb       r0, 0x14F(r31)
	  lbz       r0, 0x11(r1)
	  stb       r3, 0x148(r31)
	  lbz       r3, 0x12(r1)
	  stb       r0, 0x149(r31)
	  lbz       r0, 0x13(r1)
	  stb       r3, 0x14A(r31)
	  stb       r0, 0x14B(r31)
	  stb       r4, 0x110(r31)
	  beq-      .loc_0x3AC
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x3AC
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x28(r30)
	  lwz       r12, 0x58(r12)
	  rlwinm    r29,r0,0,24,31
	  mtctr     r12
	  bctrl
	  cmplwi    r29, 0x1
	  bne-      .loc_0x2C8
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2E0

	.loc_0x2C8:
	  cmplwi    r29, 0x1
	  beq-      .loc_0x398
	  rlwinm    r3,r3,0,24,31
	  addi      r0, r29, 0x1
	  cmpw      r3, r0
	  beq-      .loc_0x398

	.loc_0x2E0:
	  lwz       r3, 0x70(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lha       r27, 0x0(r3)
	  li        r4, 0x1
	  lha       r28, 0x2(r3)
	  lha       r26, 0x4(r3)
	  lha       r25, 0x6(r3)
	  lwz       r3, 0x70(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r4,r28,16,8,15
	  lha       r0, 0x2(r3)
	  rlwimi    r4,r27,24,0,7
	  lha       r5, 0x0(r3)
	  rlwimi    r4,r26,8,16,23
	  rlwinm    r0,r0,16,8,15
	  rlwimi    r4,r25,0,24,31
	  lha       r6, 0x4(r3)
	  stw       r4, 0xC(r1)
	  rlwimi    r0,r5,24,0,7
	  lha       r7, 0x6(r3)
	  rlwimi    r0,r6,8,16,23
	  lbz       r3, 0xC(r1)
	  lbz       r5, 0xD(r1)
	  rlwimi    r0,r7,0,24,31
	  stb       r3, 0x14C(r31)
	  lbz       r4, 0xE(r1)
	  stb       r5, 0x14D(r31)
	  lbz       r3, 0xF(r1)
	  stw       r0, 0x8(r1)
	  stb       r4, 0x14E(r31)
	  lbz       r0, 0x8(r1)
	  stb       r3, 0x14F(r31)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x148(r31)
	  lbz       r3, 0xA(r1)
	  stb       r4, 0x149(r31)
	  lbz       r0, 0xB(r1)
	  stb       r3, 0x14A(r31)
	  stb       r0, 0x14B(r31)

	.loc_0x398:
	  cmplwi    r29, 0x4
	  li        r0, 0x4
	  bgt-      .loc_0x3A8
	  mr        r0, r29

	.loc_0x3A8:
	  stb       r0, 0x110(r31)

	.loc_0x3AC:
	  li        r25, 0
	  li        r26, 0
	  stb       r25, 0x111(r31)

	.loc_0x3B8:
	  cmplwi    r30, 0
	  addi      r0, r25, 0x100
	  li        r3, 0
	  stwx      r3, r31, r0
	  beq-      .loc_0x410
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x410
	  lwz       r12, 0x0(r3)
	  mr        r4, r26
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x410
	  addi      r4, r25, 0x100
	  li        r0, 0x1
	  stwx      r3, r31, r4
	  slw       r0, r0, r26
	  lbz       r3, 0x111(r31)
	  or        r0, r3, r0
	  stb       r0, 0x111(r31)

	.loc_0x410:
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmplwi    r26, 0x4
	  blt+      .loc_0x3B8
	  cmplwi    r30, 0
	  beq-      .loc_0x448
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x448
	  lwz       r12, 0x0(r3)
	  li        r4, 0xF0
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x448:
	  li        r0, -0x1
	  li        r3, 0
	  cmplwi    r30, 0
	  stw       r3, 0x144(r31)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  beq-      .loc_0x4DC
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x4DC
	  lwz       r12, 0x0(r3)
	  li        r4, 0x3
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lbz       r7, 0x0(r3)
	  li        r4, 0x1
	  lbz       r6, 0x1(r3)
	  lbz       r5, 0x2(r3)
	  lbz       r0, 0x3(r3)
	  lwz       r3, 0x70(r30)
	  stb       r7, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  stb       r6, 0x21(r1)
	  lwz       r12, 0x40(r12)
	  stb       r5, 0x22(r1)
	  stb       r0, 0x23(r1)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x0(r3)
	  lbz       r5, 0x1(r3)
	  lbz       r4, 0x2(r3)
	  lbz       r0, 0x3(r3)
	  stb       r6, 0x1C(r1)
	  stb       r5, 0x1D(r1)
	  stb       r4, 0x1E(r1)
	  stb       r0, 0x1F(r1)

	.loc_0x4DC:
	  lbz       r7, 0x23(r1)
	  lis       r6, 0x4330
	  lbz       r5, 0x22(r1)
	  mr        r3, r31
	  lbz       r4, 0x21(r1)
	  lbz       r0, 0x20(r1)
	  lfs       f5, -0x7B70(r2)
	  lwz       r12, 0x0(r31)
	  stw       r7, 0x6C(r1)
	  fmr       f6, f5
	  lfd       f4, -0x7B68(r2)
	  fmr       f7, f5
	  stw       r6, 0x68(r1)
	  fmr       f8, f5
	  lwz       r12, 0x108(r12)
	  lfd       f0, 0x68(r1)
	  stw       r5, 0x74(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x70(r1)
	  lfd       f0, 0x70(r1)
	  stw       r4, 0x7C(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x78(r1)
	  lfd       f0, 0x78(r1)
	  stw       r0, 0x84(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x80(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f4, f0, f4
	  mtctr     r12
	  bctrl
	  lbz       r7, 0x1F(r1)
	  lis       r6, 0x4330
	  lbz       r5, 0x1E(r1)
	  mr        r3, r31
	  lbz       r4, 0x1D(r1)
	  lbz       r0, 0x1C(r1)
	  lfs       f5, -0x7B70(r2)
	  lwz       r12, 0x0(r31)
	  stw       r7, 0x8C(r1)
	  fmr       f6, f5
	  lfd       f4, -0x7B68(r2)
	  fmr       f7, f5
	  stw       r6, 0x88(r1)
	  fmr       f8, f5
	  lwz       r12, 0x10C(r12)
	  lfd       f0, 0x88(r1)
	  stw       r5, 0x94(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x90(r1)
	  lfd       f0, 0x90(r1)
	  stw       r4, 0x9C(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x98(r1)
	  lfd       f0, 0x98(r1)
	  stw       r0, 0xA4(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0xA0(r1)
	  lfd       f0, 0xA0(r1)
	  fsubs     f4, f0, f4
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lmw       r25, 0xB4(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A25C
 * Size:	000008
 */
void J2DTevBlock::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A264
 * Size:	000004
 */
void J2DTevBlock::setUndeleteFlag(unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A268
 * Size:	000008
 */
void J2DTevBlock::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A270
 * Size:	000008
 */
void J2DTevBlock::getTevStageNum() const
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A278
 * Size:	0000E8
 */
void J2DPicture::J2DPicture(const ResTIMG*)
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
	  bl        -0x37A4
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87580
	  li        r0, -0x1
	  lis       r3, 0x8004
	  stw       r0, 0x148(r30)
	  subi      r4, r3, 0x646C
	  addi      r3, r30, 0x150
	  li        r5, 0
	  stw       r0, 0x14C(r30)
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87558
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0x160(r30)
	  cmplwi    r31, 0
	  stw       r3, 0x164(r30)
	  stw       r0, 0x100(r30)
	  stw       r0, 0x104(r30)
	  stw       r0, 0x108(r30)
	  stw       r0, 0x10C(r30)
	  stb       r0, 0x111(r30)
	  stb       r0, 0x110(r30)
	  beq-      .loc_0xBC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x144(r30)
	  bl        0xA34
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
 * Address:	8003A360
 * Size:	000030
 */
void J2DPicture::append(const ResTIMG*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lbz       r5, 0x110(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A390
 * Size:	000034
 */
void J2DPicture::insert(const ResTIMG*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A3C4
 * Size:	0000E8
 */
void J2DPicture::J2DPicture(const char*)
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
	  bl        -0x38F0
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x87434
	  li        r0, -0x1
	  lis       r3, 0x8004
	  stw       r0, 0x148(r30)
	  subi      r4, r3, 0x646C
	  addi      r3, r30, 0x150
	  li        r5, 0
	  stw       r0, 0x14C(r30)
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x8740C
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0x160(r30)
	  cmplwi    r31, 0
	  stw       r3, 0x164(r30)
	  stw       r0, 0x100(r30)
	  stw       r0, 0x104(r30)
	  stw       r0, 0x108(r30)
	  stw       r0, 0x10C(r30)
	  stb       r0, 0x111(r30)
	  stb       r0, 0x110(r30)
	  beq-      .loc_0xBC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x144(r30)
	  bl        0x8E8
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
 * Address:	8003A4AC
 * Size:	000030
 */
void J2DPicture::append(const char*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lbz       r5, 0x110(r3)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A4DC
 * Size:	000034
 */
void J2DPicture::insert(const char*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A510
 * Size:	0000E8
 */
void J2DPicture::J2DPicture(JUTTexture*)
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
	  bl        -0x3A3C
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x872E8
	  li        r0, -0x1
	  lis       r3, 0x8004
	  stw       r0, 0x148(r30)
	  subi      r4, r3, 0x646C
	  addi      r3, r30, 0x150
	  li        r5, 0
	  stw       r0, 0x14C(r30)
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x872C0
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0x160(r30)
	  cmplwi    r31, 0
	  stw       r3, 0x164(r30)
	  stw       r0, 0x100(r30)
	  stw       r0, 0x104(r30)
	  stw       r0, 0x108(r30)
	  stw       r0, 0x10C(r30)
	  stb       r0, 0x111(r30)
	  stb       r0, 0x110(r30)
	  beq-      .loc_0xBC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x144(r30)
	  bl        0x79C
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
 * Address:	8003A5F8
 * Size:	000030
 */
void J2DPicture::append(JUTTexture*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lbz       r5, 0x110(r3)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A628
 * Size:	0000EC
 */
void J2DPicture::J2DPicture(unsigned long long, const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x37E0
	  lis       r3, 0x804A
	  lis       r4, 0x8004
	  addi      r0, r3, 0x730
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x112
	  subi      r4, r4, 0x6460
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x871D8
	  li        r0, 0
	  lis       r3, 0x8004
	  stw       r0, 0x144(r31)
	  li        r0, -0x1
	  subi      r4, r3, 0x646C
	  addi      r3, r31, 0x150
	  stw       r0, 0x148(r31)
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  stw       r0, 0x14C(r31)
	  bl        0x871A8
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r0, 0x160(r31)
	  stw       r0, 0x164(r31)
	  bl        0x6CC
	  li        r0, 0
	  lfs       f1, -0x7B70(r2)
	  stw       r0, 0x100(r31)
	  mr        r3, r31
	  fmr       f2, f1
	  stw       r0, 0x104(r31)
	  fmr       f3, f1
	  fmr       f4, f1
	  stw       r0, 0x108(r31)
	  fmr       f5, f1
	  fmr       f6, f1
	  stw       r0, 0x10C(r31)
	  fmr       f7, f1
	  fmr       f8, f1
	  stb       r0, 0x111(r31)
	  stb       r0, 0x110(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8003A714
 * Size:	00009C
 */
void J2DPicture::setBlendRatio(float, float, float, float, float, float, float,
                               float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  addi      r11, r1, 0x50
	  bl        0x874AC
	  stw       r31, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  fmr       f24, f1
	  fmr       f25, f2
	  mr        r31, r3
	  lwz       r12, 0x108(r12)
	  fmr       f26, f3
	  fmr       f27, f4
	  fmr       f28, f5
	  fmr       f29, f6
	  fmr       f30, f7
	  fmr       f31, f8
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  fmr       f1, f24
	  lwz       r12, 0x0(r31)
	  fmr       f2, f25
	  fmr       f3, f26
	  lwz       r12, 0x10C(r12)
	  fmr       f4, f27
	  fmr       f5, f28
	  fmr       f6, f29
	  fmr       f7, f30
	  fmr       f8, f31
	  mtctr     r12
	  bctrl
	  addi      r11, r1, 0x50
	  bl        0x87484
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003A7B0
 * Size:	0003F4
 */
void J2DPicture::private_readStream(J2DPane*, JSURandomInputStream*,
                                    JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stmw      r22, 0x58(r1)
	  mr        r23, r5
	  mr        r22, r3
	  mr        r25, r4
	  mr        r3, r23
	  mr        r24, r6
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r23
	  addi      r4, r1, 0x4C
	  li        r5, 0x8
	  bl        -0x14420
	  lwz       r0, 0x4C(r1)
	  mr        r3, r22
	  mr        r4, r25
	  mr        r5, r23
	  stw       r0, 0x8(r22)
	  bl        -0x3724
	  mr        r3, r23
	  addi      r4, r1, 0xB
	  li        r26, 0
	  li        r5, 0x1
	  bl        -0x1444C
	  lis       r5, 0x5449
	  lbz       r25, 0xB(r1)
	  mr        r3, r22
	  mr        r4, r23
	  mr        r6, r24
	  addi      r5, r5, 0x4D47
	  bl        -0x147C
	  lis       r5, 0x544C
	  mr        r28, r3
	  mr        r3, r22
	  mr        r4, r23
	  mr        r6, r24
	  addi      r5, r5, 0x5554
	  bl        -0x1498
	  mr        r0, r3
	  mr        r3, r23
	  mr        r27, r0
	  addi      r4, r1, 0xA
	  li        r5, 0x1
	  bl        -0x1449C
	  subi      r25, r25, 0x3
	  lbz       r30, 0xA(r1)
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0xEC
	  mr        r3, r23
	  addi      r4, r1, 0x9
	  li        r5, 0x1
	  bl        -0x144BC
	  lbz       r26, 0x9(r1)
	  subi      r25, r25, 0x1

	.loc_0xEC:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x108
	  mr        r3, r23
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x144DC
	  subi      r25, r25, 0x1

	.loc_0x108:
	  li        r0, 0
	  li        r3, -0x1
	  stw       r0, 0x48(r1)
	  rlwinm.   r0,r25,0,24,31
	  lbz       r4, 0x48(r1)
	  stw       r3, 0x44(r1)
	  lbz       r0, 0x49(r1)
	  stb       r4, 0x14C(r22)
	  lbz       r3, 0x4A(r1)
	  stb       r0, 0x14D(r22)
	  lbz       r0, 0x4B(r1)
	  stb       r3, 0x14E(r22)
	  lbz       r3, 0x44(r1)
	  stb       r0, 0x14F(r22)
	  lbz       r0, 0x45(r1)
	  stb       r3, 0x148(r22)
	  lbz       r3, 0x46(r1)
	  stb       r0, 0x149(r22)
	  lbz       r0, 0x47(r1)
	  stb       r3, 0x14A(r22)
	  stb       r0, 0x14B(r22)
	  beq-      .loc_0x19C
	  mr        r3, r23
	  addi      r4, r1, 0x14
	  li        r5, 0x4
	  bl        -0x14548
	  lwz       r0, 0x14(r1)
	  subi      r25, r25, 0x1
	  stw       r0, 0x40(r1)
	  lbz       r3, 0x40(r1)
	  lbz       r0, 0x41(r1)
	  stb       r3, 0x14C(r22)
	  lbz       r3, 0x42(r1)
	  stb       r0, 0x14D(r22)
	  lbz       r0, 0x43(r1)
	  stb       r3, 0x14E(r22)
	  stb       r0, 0x14F(r22)

	.loc_0x19C:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x1E0
	  mr        r3, r23
	  addi      r4, r1, 0x10
	  li        r5, 0x4
	  bl        -0x1458C
	  lwz       r0, 0x10(r1)
	  subi      r25, r25, 0x1
	  stw       r0, 0x3C(r1)
	  lbz       r3, 0x3C(r1)
	  lbz       r0, 0x3D(r1)
	  stb       r3, 0x148(r22)
	  lbz       r3, 0x3E(r1)
	  stb       r0, 0x149(r22)
	  lbz       r0, 0x3F(r1)
	  stb       r3, 0x14A(r22)
	  stb       r0, 0x14B(r22)

	.loc_0x1E0:
	  li        r5, -0x1
	  mr        r29, r22
	  stw       r5, 0x38(r1)
	  li        r24, 0
	  lbz       r3, 0x38(r1)
	  stw       r5, 0x30(r1)
	  lbz       r0, 0x39(r1)
	  stb       r3, 0x150(r22)
	  lbz       r3, 0x3A(r1)
	  stb       r0, 0x151(r22)
	  lbz       r0, 0x3B(r1)
	  stb       r3, 0x152(r22)
	  lbz       r3, 0x30(r1)
	  stb       r0, 0x153(r22)
	  lbz       r0, 0x31(r1)
	  stb       r3, 0x154(r22)
	  lbz       r3, 0x32(r1)
	  stb       r0, 0x155(r22)
	  lbz       r0, 0x33(r1)
	  stw       r5, 0x28(r1)
	  stb       r3, 0x156(r22)
	  lbz       r3, 0x28(r1)
	  stb       r0, 0x157(r22)
	  lbz       r0, 0x29(r1)
	  stb       r3, 0x158(r22)
	  lbz       r4, 0x2A(r1)
	  stw       r5, 0x20(r1)
	  lbz       r3, 0x2B(r1)
	  stb       r0, 0x159(r22)
	  lbz       r0, 0x20(r1)
	  stb       r4, 0x15A(r22)
	  lbz       r4, 0x21(r1)
	  stb       r3, 0x15B(r22)
	  lbz       r3, 0x22(r1)
	  stb       r0, 0x15C(r22)
	  lbz       r0, 0x23(r1)
	  stb       r4, 0x15D(r22)
	  stb       r3, 0x15E(r22)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x24(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x34(r1)
	  stb       r0, 0x15F(r22)
	  b         .loc_0x2D4

	.loc_0x290:
	  mr        r3, r23
	  addi      r4, r1, 0xC
	  li        r5, 0x4
	  bl        -0x14678
	  lwz       r0, 0xC(r1)
	  subi      r25, r25, 0x1
	  addi      r24, r24, 0x1
	  stw       r0, 0x18(r1)
	  lbz       r3, 0x18(r1)
	  lbz       r0, 0x19(r1)
	  stb       r3, 0x150(r29)
	  lbz       r3, 0x1A(r1)
	  stb       r0, 0x151(r29)
	  lbz       r0, 0x1B(r1)
	  stb       r3, 0x152(r29)
	  stb       r0, 0x153(r29)
	  addi      r29, r29, 0x4

	.loc_0x2D4:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x2E4
	  cmpwi     r24, 0x4
	  blt+      .loc_0x290

	.loc_0x2E4:
	  lwz       r0, 0x50(r1)
	  mr        r3, r23
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x1439C
	  li        r3, 0
	  cmplwi    r28, 0
	  stw       r3, 0x100(r22)
	  li        r0, 0x1
	  stw       r3, 0x104(r22)
	  stw       r3, 0x108(r22)
	  stw       r3, 0x10C(r22)
	  stb       r3, 0x110(r22)
	  stb       r0, 0x111(r22)
	  beq-      .loc_0x360
	  li        r3, 0x40
	  bl        -0x16C30
	  mr.       r23, r3
	  beq-      .loc_0x350
	  li        r0, 0
	  mr        r4, r28
	  stw       r0, 0x28(r23)
	  li        r5, 0
	  bl        -0x7A6C
	  lbz       r0, 0x3B(r23)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r23)

	.loc_0x350:
	  stw       r23, 0x100(r22)
	  lbz       r3, 0x110(r22)
	  addi      r0, r3, 0x1
	  stb       r0, 0x110(r22)

	.loc_0x360:
	  cmplwi    r27, 0
	  beq-      .loc_0x394
	  li        r3, 0x18
	  bl        -0x16C78
	  mr.       r23, r3
	  beq-      .loc_0x384
	  mr        r5, r27
	  li        r4, 0
	  bl        -0xBC6C

	.loc_0x384:
	  stw       r23, 0x144(r22)
	  lwz       r3, 0x100(r22)
	  lwz       r4, 0x144(r22)
	  bl        -0x77A4

	.loc_0x394:
	  lwz       r4, 0x100(r22)
	  rlwinm    r7,r26,30,31,31
	  mr        r3, r22
	  mr        r5, r30
	  rlwinm    r6,r26,0,30,31
	  bl        0x2310
	  mr        r3, r22
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0x0(r22)
	  fmr       f2, f1
	  lwz       r12, 0x104(r12)
	  fmr       f3, f1
	  fmr       f4, f1
	  fmr       f5, f1
	  fmr       f6, f1
	  fmr       f7, f1
	  fmr       f8, f1
	  mtctr     r12
	  bctrl
	  lmw       r22, 0x58(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003ABA4
 * Size:	000094
 */
void J2DPicture::initiate(const ResTIMG*, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  bl        .loc_0x94
	  lwz       r3, 0x100(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  lwz       r6, 0x20(r3)
	  lis       r5, 0x4330
	  stw       r5, 0x18(r1)
	  mr        r3, r31
	  lhz       r0, 0x4(r6)
	  addi      r4, r1, 0x8
	  lhz       r6, 0x2(r6)
	  xoris     r0, r0, 0x8000
	  lfs       f3, -0x7B60(r2)
	  xoris     r6, r6, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f2, -0x7B58(r2)
	  stw       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  lfd       f1, 0x18(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f1, f1, f2
	  stfs      f3, 0x8(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        -0x2CE8

	.loc_0x80:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x94:
	*/
}

/*
 * --INFO--
 * Address:	8003AC38
 * Size:	00013C
 */
void J2DPicture::private_initiate(const ResTIMG*, const ResTLUT*)
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
	  lbz       r0, 0x110(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  cmplwi    r28, 0
	  beq-      .loc_0xCC
	  lwz       r3, 0x100(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0xA8
	  li        r3, 0x40
	  bl        -0x16DE0
	  mr.       r29, r3
	  beq-      .loc_0x78
	  li        r0, 0
	  mr        r4, r28
	  stw       r0, 0x28(r29)
	  li        r5, 0
	  bl        -0x7C1C
	  lbz       r0, 0x3B(r29)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r29)

	.loc_0x78:
	  stw       r29, 0x100(r30)
	  lwz       r0, 0x100(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lbz       r3, 0x110(r30)
	  addi      r0, r3, 0x1
	  stb       r0, 0x110(r30)
	  lbz       r0, 0x111(r30)
	  rlwinm    r0,r0,0,28,30
	  ori       r0, r0, 0x1
	  stb       r0, 0x111(r30)
	  b         .loc_0xCC

	.loc_0xA8:
	  li        r5, 0
	  bl        -0x7C60
	  lbz       r3, 0x110(r30)
	  addi      r0, r3, 0x1
	  stb       r0, 0x110(r30)
	  lbz       r0, 0x111(r30)
	  rlwinm    r0,r0,0,28,30
	  ori       r0, r0, 0x1
	  stb       r0, 0x111(r30)

	.loc_0xCC:
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r0, 0x144(r30)
	  beq-      .loc_0x11C
	  lwz       r0, 0x144(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  li        r3, 0x18
	  bl        -0x16E80
	  mr.       r29, r3
	  beq-      .loc_0x104
	  mr        r5, r31
	  li        r4, 0
	  bl        -0xBE74

	.loc_0x104:
	  stw       r29, 0x144(r30)
	  lwz       r3, 0x100(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  lwz       r4, 0x144(r30)
	  bl        -0x79B4

	.loc_0x11C:
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
 * Address:	8003AD74
 * Size:	00016C
 */
void J2DPicture::initinfo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x5049
	  li        r5, 0xF
	  stw       r0, 0x44(r1)
	  addi      r0, r4, 0x4331
	  li        r4, 0
	  li        r6, 0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  li        r7, 0
	  stw       r0, 0x8(r3)
	  bl        0x20C4
	  mr        r3, r31
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0x0(r31)
	  fmr       f2, f1
	  lwz       r12, 0x104(r12)
	  fmr       f3, f1
	  fmr       f4, f1
	  fmr       f5, f1
	  fmr       f6, f1
	  fmr       f7, f1
	  fmr       f8, f1
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  li        r7, -0x1
	  stw       r0, 0x2C(r1)
	  lbz       r0, 0x2C(r1)
	  stw       r7, 0x28(r1)
	  lbz       r3, 0x2D(r1)
	  stb       r0, 0x14C(r31)
	  lbz       r0, 0x2E(r1)
	  stb       r3, 0x14D(r31)
	  lbz       r3, 0x2F(r1)
	  stb       r0, 0x14E(r31)
	  lbz       r0, 0x28(r1)
	  stb       r3, 0x14F(r31)
	  lbz       r3, 0x29(r1)
	  stb       r0, 0x148(r31)
	  lbz       r0, 0x2A(r1)
	  stb       r3, 0x149(r31)
	  lbz       r3, 0x2B(r1)
	  stw       r7, 0x24(r1)
	  stb       r0, 0x14A(r31)
	  lbz       r0, 0x24(r1)
	  stb       r3, 0x14B(r31)
	  lbz       r4, 0x25(r1)
	  stb       r0, 0x150(r31)
	  lbz       r3, 0x26(r1)
	  stw       r7, 0x1C(r1)
	  lbz       r0, 0x27(r1)
	  stb       r4, 0x151(r31)
	  lbz       r4, 0x1C(r1)
	  stb       r3, 0x152(r31)
	  lbz       r3, 0x1D(r1)
	  stb       r0, 0x153(r31)
	  lbz       r0, 0x1E(r1)
	  stw       r7, 0x14(r1)
	  lbz       r5, 0x1F(r1)
	  stb       r4, 0x154(r31)
	  lbz       r4, 0x14(r1)
	  stb       r3, 0x155(r31)
	  lbz       r3, 0x15(r1)
	  stb       r0, 0x156(r31)
	  lbz       r0, 0x16(r1)
	  stw       r7, 0xC(r1)
	  lbz       r6, 0x17(r1)
	  stb       r5, 0x157(r31)
	  lbz       r5, 0xC(r1)
	  stb       r4, 0x158(r31)
	  lbz       r4, 0xD(r1)
	  stb       r3, 0x159(r31)
	  lbz       r3, 0xE(r1)
	  stb       r0, 0x15A(r31)
	  lbz       r0, 0xF(r1)
	  stb       r6, 0x15B(r31)
	  stb       r5, 0x15C(r31)
	  stb       r4, 0x15D(r31)
	  stb       r3, 0x15E(r31)
	  stw       r7, 0x8(r1)
	  stw       r7, 0x10(r1)
	  stw       r7, 0x18(r1)
	  stw       r7, 0x20(r1)
	  stb       r0, 0x15F(r31)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003AEE0
 * Size:	00009C
 */
void J2DPicture::~J2DPicture()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r27, r3
	  mr        r28, r4
	  beq-      .loc_0x84
	  lis       r3, 0x804A
	  mr        r30, r27
	  addi      r0, r3, 0x730
	  li        r29, 0
	  stw       r0, 0x0(r27)
	  li        r31, 0x1

	.loc_0x34:
	  lbz       r3, 0x111(r27)
	  slw       r0, r31, r29
	  and.      r0, r3, r0
	  beq-      .loc_0x50
	  lwz       r3, 0x100(r30)
	  li        r4, 0x1
	  bl        -0x7F1C

	.loc_0x50:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x4
	  blt+      .loc_0x34
	  lwz       r3, 0x144(r27)
	  bl        -0x16E90
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x396C
	  extsh.    r0, r28
	  ble-      .loc_0x84
	  mr        r3, r27
	  bl        -0x16EAC

	.loc_0x84:
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
 * Address:	8003AF7C
 * Size:	0000E0
 */
void J2DPicture::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0xB0

	.loc_0x2C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x4
	  blt-      .loc_0x40
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x40:
	  rlwinm    r3,r29,2,22,29
	  addi      r30, r3, 0x100
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r3, 0x40
	  bl        -0x17130
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)

	.loc_0x7C:
	  stwx      r3, r28, r30
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x94:
	  rlwinm    r0,r29,0,24,31
	  li        r3, 0x1
	  lbz       r4, 0x111(r28)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x111(r28)

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  rlwinm    r0,r29,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x2C
	  li        r3, 0x1

	.loc_0xC0:
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
 * Address:	8003B05C
 * Size:	00032C
 */
void J2DPicture::insert(const ResTIMG*, JUTPalette*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stmw      r26, 0x38(r1)
	  mr.       r28, r4
	  fmr       f31, f1
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  beq-      .loc_0x50
	  lbz       r4, 0x110(r27)
	  cmplwi    r4, 0x4
	  bge-      .loc_0x50
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x4
	  bge-      .loc_0x50
	  cmplw     r0, r4
	  ble-      .loc_0x58

	.loc_0x50:
	  li        r3, 0
	  b         .loc_0x310

	.loc_0x58:
	  lbz       r0, 0x8(r28)
	  li        r26, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  cmplwi    r29, 0
	  bne-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3

	.loc_0x84:
	  lbz       r0, 0x110(r27)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r27, r0
	  lwz       r3, 0x100(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x154
	  li        r3, 0x40
	  bl        -0x17258
	  mr.       r31, r3
	  beq-      .loc_0xCC
	  li        r0, 0
	  mr        r4, r28
	  stw       r0, 0x28(r31)
	  mr        r5, r26
	  bl        -0x8094
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0xCC:
	  cmplwi    r29, 0
	  beq-      .loc_0xE4
	  mr        r3, r31
	  mr        r4, r28
	  mr        r5, r29
	  bl        -0x7F0C

	.loc_0xE4:
	  rlwinm    r3,r30,0,24,31
	  li        r5, 0x3
	  b         .loc_0x114

	.loc_0xF0:
	  rlwinm    r0,r5,2,22,29
	  subi      r5, r5, 0x1
	  add       r4, r27, r0
	  lwz       r0, 0xFC(r4)
	  stw       r0, 0x100(r4)
	  lfs       f0, 0x120(r4)
	  stfs      f0, 0x124(r4)
	  lfs       f0, 0x130(r4)
	  stfs      f0, 0x134(r4)

	.loc_0x114:
	  rlwinm    r0,r5,0,24,31
	  cmplw     r0, r3
	  bgt+      .loc_0xF0
	  li        r0, 0x1
	  lbz       r4, 0x111(r27)
	  slw       r5, r0, r3
	  subi      r3, r5, 0x1
	  andc      r0, r4, r3
	  and       r3, r4, r3
	  rlwinm    r0,r0,1,0,30
	  or        r0, r3, r0
	  stb       r0, 0x111(r27)
	  lbz       r0, 0x111(r27)
	  or        r0, r0, r5
	  stb       r0, 0x111(r27)
	  b         .loc_0x250

	.loc_0x154:
	  cmplwi    r29, 0
	  mr        r31, r3
	  bne-      .loc_0x170
	  mr        r4, r28
	  mr        r5, r26
	  bl        -0x8140
	  b         .loc_0x17C

	.loc_0x170:
	  mr        r4, r28
	  mr        r5, r29
	  bl        -0x7FA4

	.loc_0x17C:
	  lbz       r3, 0x111(r27)
	  addi      r4, r1, 0x8
	  lbz       r8, 0x110(r27)
	  rlwinm    r0,r30,0,24,31
	  rlwinm    r7,r3,0,31,31
	  rlwinm    r6,r3,31,31,31
	  rlwinm    r5,r3,30,31,31
	  rlwinm    r3,r3,29,31,31
	  stb       r7, 0x8(r1)
	  stb       r6, 0x9(r1)
	  stb       r5, 0xA(r1)
	  stb       r3, 0xB(r1)
	  b         .loc_0x1E4

	.loc_0x1B0:
	  rlwinm    r3,r8,2,22,29
	  rlwinm    r6,r8,0,24,31
	  add       r7, r27, r3
	  subi      r8, r8, 0x1
	  lwz       r5, 0xFC(r7)
	  subi      r3, r6, 0x1
	  lbzx      r3, r4, r3
	  stw       r5, 0x100(r7)
	  lfs       f0, 0x120(r7)
	  stbx      r3, r4, r6
	  stfs      f0, 0x124(r7)
	  lfs       f0, 0x130(r7)
	  stfs      f0, 0x134(r7)

	.loc_0x1E4:
	  rlwinm    r3,r8,0,24,31
	  cmplw     r3, r0
	  bgt+      .loc_0x1B0
	  li        r0, 0
	  addi      r5, r1, 0x8
	  stb       r0, 0x111(r27)
	  li        r7, 0
	  li        r3, 0x1
	  b         .loc_0x22C

	.loc_0x208:
	  rlwinm    r6,r7,0,24,31
	  lbzx      r0, r5, r6
	  cmplwi    r0, 0
	  beq-      .loc_0x228
	  lbz       r4, 0x111(r27)
	  slw       r0, r3, r6
	  or        r0, r4, r0
	  stb       r0, 0x111(r27)

	.loc_0x228:
	  addi      r7, r7, 0x1

	.loc_0x22C:
	  rlwinm    r0,r7,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x208
	  rlwinm    r0,r30,0,24,31
	  li        r3, 0x1
	  lbz       r4, 0x111(r27)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x111(r27)

	.loc_0x250:
	  rlwinm    r0,r30,2,22,29
	  add       r3, r27, r0
	  stw       r31, 0x100(r3)
	  stfs      f31, 0x124(r3)
	  stfs      f31, 0x134(r3)
	  lbz       r0, 0x110(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F0
	  lwz       r3, 0x100(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x2F0
	  lwz       r6, 0x20(r3)
	  lis       r5, 0x4330
	  stw       r5, 0x20(r1)
	  mr        r3, r27
	  lhz       r0, 0x4(r6)
	  addi      r4, r1, 0xC
	  lhz       r6, 0x2(r6)
	  xoris     r0, r0, 0x8000
	  lfs       f3, -0x7B60(r2)
	  xoris     r6, r6, 0x8000
	  stw       r0, 0x2C(r1)
	  lfd       f2, -0x7B58(r2)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x28(r1)
	  lfd       f1, 0x20(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f1, f1, f2
	  stfs      f3, 0xC(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        -0x33F8
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  bl        0x1B20

	.loc_0x2F0:
	  lbz       r4, 0x110(r27)
	  mr        r3, r27
	  addi      r0, r4, 0x1
	  stb       r0, 0x110(r27)
	  bl        0x1704
	  mr        r3, r27
	  bl        0x184C
	  li        r3, 0x1

	.loc_0x310:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B388
 * Size:	000078
 */
void J2DPicture::insert(const char*, JUTPalette*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r6
	  stw       r30, 0x10(r1)
	  mr        r30, r5
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  mr        r3, r4
	  bl        0x5724
	  lwz       r12, 0x0(r29)
	  mr        r4, r3
	  fmr       f1, f31
	  mr        r3, r29
	  lwz       r12, 0xC8(r12)
	  mr        r5, r30
	  mr        r6, r31
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B400
 * Size:	0001D8
 */
void J2DPicture::insert(JUTTexture*, unsigned char, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr.       r31, r4
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r29, r5
	  beq-      .loc_0x54
	  lbz       r3, 0x110(r30)
	  cmplwi    r3, 0x4
	  bge-      .loc_0x54
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x4
	  bge-      .loc_0x54
	  cmplw     r0, r3
	  ble-      .loc_0x5C

	.loc_0x54:
	  li        r3, 0
	  b         .loc_0x1B4

	.loc_0x5C:
	  lwz       r3, 0x10C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lbz       r0, 0x111(r30)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x88
	  li        r4, 0x1
	  bl        -0x8468
	  lbz       r0, 0x111(r30)
	  rlwinm    r0,r0,0,29,31
	  stb       r0, 0x111(r30)

	.loc_0x88:
	  rlwinm    r3,r29,0,24,31
	  li        r5, 0x3
	  b         .loc_0xB8

	.loc_0x94:
	  rlwinm    r0,r5,2,22,29
	  subi      r5, r5, 0x1
	  add       r4, r30, r0
	  lwz       r0, 0xFC(r4)
	  stw       r0, 0x100(r4)
	  lfs       f0, 0x120(r4)
	  stfs      f0, 0x124(r4)
	  lfs       f0, 0x130(r4)
	  stfs      f0, 0x134(r4)

	.loc_0xB8:
	  rlwinm    r0,r5,0,24,31
	  cmplw     r0, r3
	  bgt+      .loc_0x94
	  li        r0, 0x1
	  lbz       r5, 0x111(r30)
	  slw       r6, r0, r3
	  rlwinm    r7,r29,2,22,29
	  subi      r4, r6, 0x1
	  andc      r0, r5, r4
	  add       r3, r30, r7
	  and       r4, r5, r4
	  rlwinm    r0,r0,1,0,30
	  or        r0, r4, r0
	  stb       r0, 0x111(r30)
	  stw       r31, 0x100(r3)
	  lbz       r0, 0x111(r30)
	  andc      r0, r0, r6
	  stb       r0, 0x111(r30)
	  stfs      f31, 0x124(r3)
	  stfs      f31, 0x134(r3)
	  lbz       r0, 0x110(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x194
	  addic.    r0, r30, 0x100
	  beq-      .loc_0x194
	  lwz       r4, 0x100(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  mr        r3, r30
	  lwz       r5, 0x20(r4)
	  addi      r4, r1, 0x8
	  stw       r0, 0x20(r1)
	  lhz       r0, 0x4(r5)
	  lhz       r5, 0x2(r5)
	  xoris     r0, r0, 0x8000
	  lfs       f3, -0x7B60(r2)
	  xoris     r5, r5, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f2, -0x7B58(r2)
	  stw       r5, 0x1C(r1)
	  lfd       f0, 0x20(r1)
	  lfd       f1, 0x18(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x8(r1)
	  fsubs     f1, f1, f2
	  stfs      f3, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        -0x3640
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  bl        0x18D8

	.loc_0x194:
	  lbz       r4, 0x110(r30)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stb       r0, 0x110(r30)
	  bl        0x14BC
	  mr        r3, r30
	  bl        0x1604
	  li        r3, 0x1

	.loc_0x1B4:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B5D8
 * Size:	000130
 */
void J2DPicture::remove(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  rlwinm    r29,r4,0,24,31
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lbz       r0, 0x110(r3)
	  cmplw     r0, r29
	  ble-      .loc_0x3C
	  cmplwi    r0, 0x1
	  bne-      .loc_0x44

	.loc_0x3C:
	  li        r3, 0
	  b         .loc_0x110

	.loc_0x44:
	  li        r0, 0x1
	  lbz       r3, 0x111(r30)
	  slw       r31, r0, r29
	  and.      r0, r3, r31
	  beq-      .loc_0x6C
	  rlwinm    r0,r28,2,22,29
	  li        r4, 0x1
	  add       r3, r30, r0
	  lwz       r3, 0x100(r3)
	  bl        -0x8630

	.loc_0x6C:
	  mr        r6, r28
	  b         .loc_0xA0

	.loc_0x74:
	  rlwinm    r3,r3,2,0,29
	  rlwinm    r0,r6,2,22,29
	  add       r4, r30, r3
	  addi      r6, r6, 0x1
	  lwz       r3, 0x104(r4)
	  add       r5, r30, r0
	  stw       r3, 0x100(r5)
	  lfs       f0, 0x128(r4)
	  stfs      f0, 0x124(r5)
	  lfs       f0, 0x138(r4)
	  stfs      f0, 0x134(r5)

	.loc_0xA0:
	  lbz       r4, 0x110(r30)
	  rlwinm    r3,r6,0,24,31
	  subi      r0, r4, 0x1
	  cmpw      r3, r0
	  blt+      .loc_0x74
	  rlwinm    r0,r4,2,0,29
	  li        r4, 0
	  add       r3, r30, r0
	  stw       r4, 0xFC(r3)
	  addi      r0, r29, 0x1
	  li        r3, 0x1
	  subi      r4, r31, 0x1
	  slw       r3, r3, r0
	  lbz       r5, 0x111(r30)
	  subi      r0, r3, 0x1
	  andc      r0, r5, r0
	  and       r4, r5, r4
	  srawi     r0, r0, 0x1
	  mr        r3, r30
	  or        r0, r4, r0
	  stb       r0, 0x111(r30)
	  lbz       r4, 0x110(r30)
	  subi      r0, r4, 0x1
	  stb       r0, 0x110(r30)
	  bl        0x1388
	  mr        r3, r30
	  bl        0x14D0
	  li        r3, 0x1

	.loc_0x110:
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
 * Address:	8003B708
 * Size:	000060
 */
void J2DPicture::remove(JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  lbz       r6, 0x110(r3)
	  b         .loc_0x30

	.loc_0x18:
	  rlwinm    r5,r7,2,22,29
	  addi      r0, r5, 0x100
	  lwzx      r0, r3, r0
	  cmplw     r0, r4
	  beq-      .loc_0x3C
	  addi      r7, r7, 0x1

	.loc_0x30:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r6
	  blt+      .loc_0x18

	.loc_0x3C:
	  lwz       r12, 0x0(r3)
	  mr        r4, r7
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B768
 * Size:	0000E8
 */
void J2DPicture::changeTexture(const ResTIMG*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r5
	  rlwinm    r0,r29,0,24,31
	  mr        r27, r3
	  mr        r28, r4
	  lbz       r5, 0x110(r3)
	  cmplw     r0, r5
	  bgt-      .loc_0x3C
	  cmplwi    r0, 0x4
	  bge-      .loc_0x3C
	  cmplwi    r28, 0
	  bne-      .loc_0x44

	.loc_0x3C:
	  li        r3, 0
	  b         .loc_0xD4

	.loc_0x44:
	  cmplw     r0, r5
	  bge-      .loc_0xBC
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r28)
	  li        r30, 0
	  lwz       r31, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  mr        r3, r27
	  mr        r4, r29
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3

	.loc_0x90:
	  mr        r3, r27
	  mr        r4, r29
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  mr        r5, r30
	  bl        -0x8794
	  mr        r3, r31
	  b         .loc_0xD4

	.loc_0xBC:
	  lwz       r12, 0x0(r3)
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0xD4:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B850
 * Size:	000024
 */
void J2DPicture::getTexture(unsigned char) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x4
	  bge-      .loc_0x1C
	  rlwinm    r0,r4,2,22,29
	  add       r3, r3, r0
	  lwz       r3, 0x100(r3)
	  blr

	.loc_0x1C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B874
 * Size:	000058
 */
void J2DPicture::changeTexture(const char*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r4
	  bl        0x5248
	  lwz       r12, 0x0(r30)
	  mr        r4, r3
	  mr        r3, r30
	  mr        r5, r31
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8003B8CC
 * Size:	000108
 */
void J2DPicture::changeTexture(const ResTIMG*, unsigned char, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r5
	  rlwinm    r0,r28,0,24,31
	  mr        r26, r3
	  mr        r27, r4
	  mr        r29, r6
	  lbz       r5, 0x110(r3)
	  cmplw     r0, r5
	  bgt-      .loc_0x40
	  cmplwi    r0, 0x4
	  bge-      .loc_0x40
	  cmplwi    r27, 0
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0
	  b         .loc_0xF4

	.loc_0x48:
	  cmplw     r0, r5
	  bge-      .loc_0xD8
	  lwz       r12, 0x0(r3)
	  mr        r4, r28
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r27)
	  li        r30, 0
	  lwz       r31, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  mr        r3, r26
	  mr        r4, r28
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r26
	  mr        r5, r0
	  mr        r4, r27
	  bl        0x1984
	  mr        r30, r3

	.loc_0xA8:
	  mr        r3, r26
	  mr        r4, r28
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r27
	  mr        r5, r29
	  mr        r6, r30
	  bl        -0x8734
	  mr        r3, r31
	  b         .loc_0xF4

	.loc_0xD8:
	  lwz       r12, 0x0(r3)
	  mr        r5, r29
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0xF4:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003B9D4
 * Size:	000030
 */
void J2DPicture::append(const ResTIMG*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lbz       r6, 0x110(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BA04
 * Size:	000068
 */
void J2DPicture::changeTexture(const char*, unsigned char, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r4
	  bl        0x50B0
	  lwz       r12, 0x0(r29)
	  mr        r4, r3
	  mr        r3, r29
	  mr        r5, r30
	  lwz       r12, 0x118(r12)
	  mr        r6, r31
	  mtctr     r12
	  bctrl
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
 * Address:	8003BA6C
 * Size:	000068
 */
void J2DPicture::drawSelf(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x48(r1)
	  fmr       f31, f2
	  stfd      f30, 0x40(r1)
	  fmr       f30, f1
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        0xAE80C
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x0(r31)
	  fmr       f2, f31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x48(r1)
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BAD4
 * Size:	00006C
 */
void J2DPicture::drawSelf(float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x100(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lbz       r0, 0x110(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lfs       f3, 0x30(r3)
	  lfs       f0, 0x34(r3)
	  lfs       f5, 0x28(r3)
	  fadds     f1, f3, f1
	  lfs       f3, 0x20(r3)
	  fadds     f2, f0, f2
	  lfs       f4, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f3, f5, f3
	  lwz       r12, 0x140(r12)
	  fsubs     f4, f4, f0
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BB40
 * Size:	000074
 */
void J2DPicture::drawFullSet(float, float, float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x100(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lbz       r0, 0x110(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lha       r0, 0x120(r3)
	  stw       r0, 0x8(r1)
	  stw       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x20(r3)
	  lwz       r12, 0x144(r12)
	  lfs       f2, 0x24(r3)
	  lha       r4, 0x112(r3)
	  lha       r5, 0x114(r3)
	  lha       r6, 0x116(r3)
	  lha       r7, 0x118(r3)
	  lha       r8, 0x11A(r3)
	  lha       r9, 0x11C(r3)
	  lha       r10, 0x11E(r3)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BBB4
 * Size:	0002F4
 */
void J2DPicture::draw(float, float, float, float, bool, bool, bool)
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
	  stmw      r27, 0x5C(r1)
	  mr        r27, r3
	  fmr       f28, f1
	  lbz       r0, 0xB0(r3)
	  fmr       f29, f2
	  fmr       f30, f3
	  mr        r28, r4
	  fmr       f31, f4
	  cmplwi    r0, 0
	  mr        r29, r5
	  mr        r30, r6
	  beq-      .loc_0x2C0
	  lbz       r0, 0x110(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lwz       r0, 0x100(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  li        r31, 0
	  b         .loc_0x98

	.loc_0x7C:
	  mr        r3, r27
	  mr        r4, r31
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x98:
	  lbz       r3, 0x110(r27)
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x7C
	  bl        0xA9340
	  lbz       r5, 0xB2(r27)
	  li        r0, -0x1
	  mr        r3, r27
	  addi      r4, r1, 0x18
	  stb       r5, 0xB3(r27)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        0x107C
	  mr        r3, r27
	  bl        0x8D4
	  mr        r3, r27
	  lfs       f3, -0x7B60(r2)
	  lwz       r12, 0x0(r27)
	  fmr       f1, f28
	  fmr       f2, f29
	  lwz       r12, 0x48(r12)
	  fmr       f4, f3
	  mtctr     r12
	  bctrl
	  addi      r3, r27, 0x50
	  li        r4, 0
	  bl        0xAD8BC
	  li        r3, 0
	  bl        0xAD954
	  bl        0xA8A08
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xA85B0
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xA85A4
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xA8598
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA8A04
	  rlwinm    r6,r28,1,23,30
	  rlwinm    r0,r29,0,24,31
	  or        r7, r6, r0
	  lwz       r5, 0x100(r27)
	  mr        r3, r27
	  mr        r8, r30
	  addi      r4, r1, 0x8
	  li        r6, 0xF
	  bl        0x117C
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0x8
	  bl        0xA89C8
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA9C38
	  lfs       f0, -0x7B60(r2)
	  lis       r8, 0xCC01
	  li        r3, 0
	  li        r4, 0xD
	  stfs      f0, -0x8000(r8)
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  stfs      f0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x18(r1)
	  stw       r0, -0x8000(r8)
	  lha       r0, 0x8(r1)
	  sth       r0, -0x8000(r8)
	  lha       r0, 0xA(r1)
	  sth       r0, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x1C(r1)
	  stw       r0, -0x8000(r8)
	  lha       r0, 0xC(r1)
	  sth       r0, -0x8000(r8)
	  lha       r0, 0xE(r1)
	  sth       r0, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x24(r1)
	  stw       r0, -0x8000(r8)
	  lha       r0, 0x14(r1)
	  sth       r0, -0x8000(r8)
	  lha       r0, 0x16(r1)
	  sth       r0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x20(r1)
	  stw       r0, -0x8000(r8)
	  lha       r0, 0x10(r1)
	  sth       r0, -0x8000(r8)
	  lha       r0, 0x12(r1)
	  sth       r0, -0x8000(r8)
	  bl        0xA8908
	  li        r3, 0
	  bl        0xA9194
	  li        r3, 0x1
	  bl        0xACDA8
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xAC660
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xACBEC
	  addi      r3, r1, 0x28
	  bl        0xAE468
	  addi      r3, r1, 0x28
	  li        r4, 0
	  bl        0xAD734
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xAB03C
	  li        r3, 0xD
	  li        r4, 0
	  bl        0xA8414

	.loc_0x2C0:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  lmw       r27, 0x5C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BEA8
 * Size:	000034
 */
void J2DPicture::load(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  rlwinm    r4,r4,0,24,31
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xFC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BEDC
 * Size:	00004C
 */
void J2DPicture::load(_GXTexMapID, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r6,r5,0,24,31
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x110(r3)
	  cmplw     r6, r0
	  bge-      .loc_0x3C
	  cmplwi    r6, 0x4
	  bge-      .loc_0x3C
	  rlwinm    r0,r5,2,22,29
	  add       r3, r3, r0
	  lwz       r3, 0x100(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  bl        -0x88E4

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003BF28
 * Size:	0003FC
 */
void J2DPicture::drawOut(const JGeometry::TBox2<float>&,
                         const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lbz       r0, 0xB0(r3)
	  mr        r30, r5
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  lbz       r0, 0x110(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  lwz       r0, 0x100(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  li        r31, 0
	  b         .loc_0x90

	.loc_0x74:
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x90:
	  lbz       r3, 0x110(r28)
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x74
	  bl        0xA8FD4
	  lfs       f3, 0x0(r30)
	  li        r0, -0x1
	  lfs       f2, 0x8(r30)
	  mr        r3, r28
	  lfs       f0, 0x8(r29)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x0(r29)
	  fsubs     f5, f2, f3
	  fsubs     f2, f0, f2
	  lfs       f6, 0x4(r30)
	  lfs       f8, 0xC(r30)
	  fsubs     f4, f1, f3
	  lfs       f0, 0xC(r29)
	  lfs       f1, 0x4(r29)
	  fsubs     f7, f8, f6
	  lbz       r5, 0xB2(r28)
	  fsubs     f0, f0, f8
	  lfs       f3, -0x7B70(r2)
	  fdivs     f2, f2, f5
	  stb       r5, 0xB3(r28)
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f1, f6
	  fdivs     f0, f0, f7
	  fdivs     f31, f4, f5
	  fdivs     f29, f1, f7
	  fadds     f30, f3, f2
	  fadds     f28, f3, f0
	  bl        0xCBC
	  mr        r3, r28
	  bl        0x514
	  bl        0xA8680
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xA8228
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xA821C
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xA8210
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA867C
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA8664
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA98D4
	  lfs       f0, 0x0(r29)
	  lis       r0, 0x4330
	  lfs       f2, 0x4(r29)
	  lis       r8, 0xCC01
	  fctiwz    f4, f0
	  lfs       f1, 0x8(r29)
	  fctiwz    f7, f2
	  lfs       f0, 0xC(r29)
	  fctiwz    f1, f1
	  stw       r0, 0x30(r1)
	  stfd      f4, 0x28(r1)
	  fctiwz    f2, f0
	  lfd       f6, -0x7B58(r2)
	  stfd      f7, 0x18(r1)
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x1C(r1)
	  extsh     r3, r3
	  stfd      f1, 0x48(r1)
	  xoris     r3, r3, 0x8000
	  extsh     r4, r4
	  stw       r3, 0x34(r1)
	  xoris     r4, r4, 0x8000
	  lwz       r3, 0x4C(r1)
	  lfd       f0, 0x30(r1)
	  stw       r4, 0x24(r1)
	  extsh     r3, r3
	  fsubs     f0, f0, f6
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x20(r1)
	  lfs       f3, -0x7B60(r2)
	  lfd       f5, 0x20(r1)
	  stfd      f7, 0x38(r1)
	  fsubs     f5, f5, f6
	  stfs      f0, -0x8000(r8)
	  lwz       r4, 0x3C(r1)
	  stfs      f5, -0x8000(r8)
	  extsh     r4, r4
	  stfs      f3, -0x8000(r8)
	  xoris     r5, r4, 0x8000
	  lwz       r4, 0x8(r1)
	  stw       r3, 0x54(r1)
	  stw       r0, 0x50(r1)
	  stw       r4, -0x8000(r8)
	  lfd       f0, 0x50(r1)
	  stfs      f31, -0x8000(r8)
	  fsubs     f0, f0, f6
	  stfs      f29, -0x8000(r8)
	  stfd      f1, 0x68(r1)
	  stfd      f2, 0x58(r1)
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x5C(r1)
	  extsh     r3, r3
	  stw       r5, 0x44(r1)
	  xoris     r3, r3, 0x8000
	  extsh     r4, r4
	  stw       r0, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f1, 0x40(r1)
	  stfs      f0, -0x8000(r8)
	  fsubs     f0, f1, f6
	  stw       r3, 0x74(r1)
	  stfs      f0, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  lwz       r3, 0xC(r1)
	  stw       r0, 0x70(r1)
	  stw       r3, -0x8000(r8)
	  lfd       f0, 0x70(r1)
	  stfs      f30, -0x8000(r8)
	  fsubs     f0, f0, f6
	  stfs      f29, -0x8000(r8)
	  stw       r4, 0x64(r1)
	  stw       r0, 0x60(r1)
	  lfd       f1, 0x60(r1)
	  stfs      f0, -0x8000(r8)
	  fsubs     f0, f1, f6
	  stfd      f4, 0x88(r1)
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  stfs      f0, -0x8000(r8)
	  li        r6, 0x3
	  lwz       r9, 0x8C(r1)
	  li        r7, 0
	  stfd      f2, 0x78(r1)
	  extsh     r9, r9
	  stfs      f3, -0x8000(r8)
	  xoris     r9, r9, 0x8000
	  lwz       r10, 0x7C(r1)
	  lwz       r11, 0x14(r1)
	  extsh     r10, r10
	  stw       r9, 0x94(r1)
	  xoris     r9, r10, 0x8000
	  stw       r0, 0x90(r1)
	  stw       r11, -0x8000(r8)
	  lfd       f0, 0x90(r1)
	  stfs      f30, -0x8000(r8)
	  fsubs     f0, f0, f6
	  stfs      f28, -0x8000(r8)
	  stw       r9, 0x84(r1)
	  stw       r0, 0x80(r1)
	  lfd       f1, 0x80(r1)
	  stfs      f0, -0x8000(r8)
	  fsubs     f0, f1, f6
	  stfs      f0, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  lwz       r0, 0x10(r1)
	  stw       r0, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  bl        0xA849C
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xA8484
	  li        r3, 0
	  bl        0xA8D10
	  li        r3, 0x1
	  bl        0xAC924
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xAC1DC
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xAC768
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xAABCC
	  li        r3, 0xD
	  li        r4, 0
	  bl        0xA7FA4

	.loc_0x3BC:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003C324
 * Size:	00023C
 */
void J2DPicture::drawTexCoord(float, float, float, float, short, short, short,
                              short, short, short, short, short,
                              float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stmw      r21, 0x54(r1)
	  mr        r21, r3
	  fmr       f28, f1
	  lbz       r0, 0x110(r3)
	  fmr       f29, f2
	  fmr       f31, f3
	  lha       r29, 0xCA(r1)
	  fmr       f30, f4
	  cmplwi    r0, 0
	  lwz       r30, 0xCC(r1)
	  mr        r22, r4
	  mr        r23, r5
	  mr        r24, r6
	  mr        r25, r7
	  mr        r26, r8
	  mr        r27, r9
	  mr        r28, r10
	  beq-      .loc_0x208
	  li        r31, 0
	  b         .loc_0x98

	.loc_0x7C:
	  mr        r3, r21
	  mr        r4, r31
	  lwz       r12, 0x0(r21)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x98:
	  lbz       r3, 0x110(r21)
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x7C
	  fadds     f31, f28, f31
	  fadds     f30, f29, f30
	  bl        0xA8BC8
	  li        r0, -0x1
	  mr        r3, r21
	  stw       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x90C
	  mr        r3, r21
	  bl        .loc_0x23C
	  mr        r3, r30
	  addi      r4, r21, 0x80
	  addi      r5, r1, 0x18
	  bl        0xADEF4
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xAD160
	  bl        0xA82B4
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xA7E5C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xA7E50
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xA7E44
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA82B0
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0x8
	  bl        0xA8298
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA9508
	  lis       r8, 0xCC01
	  lfs       f0, -0x7B60(r2)
	  stfs      f28, -0x8000(r8)
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  stfs      f29, -0x8000(r8)
	  li        r6, 0x2
	  li        r7, 0xF
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x8(r1)
	  stw       r0, -0x8000(r8)
	  sth       r22, -0x8000(r8)
	  sth       r23, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f29, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0xC(r1)
	  stw       r0, -0x8000(r8)
	  sth       r24, -0x8000(r8)
	  sth       r25, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x14(r1)
	  stw       r0, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x10(r1)
	  stw       r0, -0x8000(r8)
	  sth       r26, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  bl        0xA81F8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0xA81E0

	.loc_0x208:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  lmw       r21, 0x54(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr

	.loc_0x23C:
	*/
}

/*
 * --INFO--
 * Address:	8003C560
 * Size:	0004A0
 */
void J2DPicture::setTevMode()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  li        r28, 0
	  b         .loc_0x40

	.loc_0x28:
	  rlwinm    r3,r28,0,24,31
	  li        r6, 0xFF
	  mr        r4, r3
	  mr        r5, r3
	  bl        0xAC484
	  addi      r28, r28, 0x1

	.loc_0x40:
	  lbz       r0, 0x110(r30)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x28
	  li        r0, -0x1
	  addi      r4, r1, 0x1C
	  stw       r0, 0x18(r1)
	  li        r3, 0x3
	  stw       r0, 0x1C(r1)
	  bl        0xAC09C
	  li        r3, 0
	  li        r4, 0x8
	  li        r5, 0xF
	  li        r6, 0xF
	  li        r7, 0xF
	  bl        0xABF2C
	  lwz       r3, 0x100(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0xA8
	  li        r3, 0
	  li        r4, 0x3
	  li        r5, 0x7
	  li        r6, 0x7
	  li        r7, 0x7
	  bl        0xABF4C
	  b         .loc_0xEC

	.loc_0xA8:
	  lwz       r3, 0x20(r3)
	  lbz       r0, 0x1(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0xD4
	  li        r3, 0
	  li        r4, 0x4
	  li        r5, 0x7
	  li        r6, 0x7
	  li        r7, 0x7
	  bl        0xABF20
	  b         .loc_0xEC

	.loc_0xD4:
	  li        r3, 0
	  li        r4, 0x3
	  li        r5, 0x7
	  li        r6, 0x7
	  li        r7, 0x7
	  bl        0xABF04

	.loc_0xEC:
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABF2C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABF78
	  lwz       r0, 0x160(r30)
	  addi      r4, r1, 0x14
	  li        r3, 0
	  stw       r0, 0x14(r1)
	  bl        0xAC0C4
	  lwz       r0, 0x164(r30)
	  addi      r4, r1, 0x10
	  li        r3, 0x2
	  stw       r0, 0x10(r1)
	  bl        0xAC0B0
	  li        r31, 0x1
	  b         .loc_0x23C

	.loc_0x154:
	  rlwinm    r29,r31,0,24,31
	  rlwinm    r28,r31,2,22,29
	  mr        r3, r29
	  subfic    r4, r28, 0x20
	  bl        0xAC108
	  mr        r3, r29
	  subfic    r4, r28, 0x22
	  bl        0xAC158
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0x8
	  li        r6, 0xE
	  li        r7, 0xF
	  bl        0xABE20
	  mr        r3, r28
	  addi      r0, r3, 0x100
	  lwzx      r3, r30, r0
	  cmplwi    r3, 0
	  bne-      .loc_0x1BC
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0x3
	  li        r6, 0x6
	  li        r7, 0x7
	  bl        0xABE38
	  b         .loc_0x200

	.loc_0x1BC:
	  lwz       r3, 0x20(r3)
	  lbz       r0, 0x1(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x1E8
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0x4
	  li        r6, 0x6
	  li        r7, 0x7
	  bl        0xABE0C
	  b         .loc_0x200

	.loc_0x1E8:
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0x3
	  li        r6, 0x6
	  li        r7, 0x7
	  bl        0xABDF0

	.loc_0x200:
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABE18
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABE64
	  addi      r31, r31, 0x1

	.loc_0x23C:
	  lbz       r0, 0x110(r30)
	  rlwinm    r3,r31,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x154
	  lwz       r0, 0x14C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x268
	  lwz       r3, 0x148(r30)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x314

	.loc_0x268:
	  rlwinm    r28,r31,0,24,31
	  li        r4, 0xFF
	  mr        r3, r28
	  li        r5, 0xFF
	  li        r6, 0xFF
	  bl        0xAC240
	  lwz       r0, 0x14C(r30)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stw       r0, 0xC(r1)
	  bl        0xABE70
	  lwz       r0, 0x148(r30)
	  addi      r4, r1, 0x8
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  bl        0xABE5C
	  mr        r3, r28
	  li        r4, 0x2
	  li        r5, 0x4
	  li        r6, 0
	  li        r7, 0xF
	  bl        0xABCEC
	  mr        r3, r28
	  li        r4, 0x1
	  li        r5, 0x2
	  li        r6, 0
	  li        r7, 0x7
	  bl        0xABD18
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABD40
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABD8C
	  addi      r31, r31, 0x1

	.loc_0x314:
	  lbz       r0, 0xB3(r30)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x360
	  lwz       r3, 0x150(r30)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x360
	  lwz       r3, 0x154(r30)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x360
	  lwz       r3, 0x158(r30)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x360
	  lwz       r3, 0x15C(r30)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x3E4

	.loc_0x360:
	  rlwinm    r28,r31,0,24,31
	  li        r4, 0xFF
	  mr        r3, r28
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xAC148
	  mr        r3, r28
	  li        r4, 0xF
	  li        r5, 0
	  li        r6, 0xA
	  li        r7, 0xF
	  bl        0xABC1C
	  mr        r3, r28
	  li        r4, 0x7
	  li        r5, 0
	  li        r6, 0x5
	  li        r7, 0x7
	  bl        0xABC48
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABC70
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xABCBC
	  addi      r31, r31, 0x1

	.loc_0x3E4:
	  mr        r3, r31
	  bl        0xAC270
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        0xAC77C
	  li        r28, 0
	  b         .loc_0x428

	.loc_0x408:
	  rlwinm    r3,r28,0,24,31
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0xA839C
	  addi      r28, r28, 0x1

	.loc_0x428:
	  lbz       r0, 0x110(r30)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x408
	  li        r3, 0x1
	  bl        0xAA4C8
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xAA4E4
	  li        r3, 0
	  bl        0xAB990
	  li        r28, 0

	.loc_0x46C:
	  mr        r3, r28
	  bl        0xAB9A8
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x10
	  blt+      .loc_0x46C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CA00
 * Size:	000030
 */
void J2DPicture::setBlendColorRatio(float, float, float, float, float, float,
                                    float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stfs      f1, 0x124(r3)
	  stfs      f2, 0x128(r3)
	  stfs      f3, 0x12C(r3)
	  stfs      f4, 0x130(r3)
	  bl        0x44
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CA30
 * Size:	000030
 */
void J2DPicture::setBlendAlphaRatio(float, float, float, float, float, float,
                                    float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stfs      f1, 0x134(r3)
	  stfs      f2, 0x138(r3)
	  stfs      f3, 0x13C(r3)
	  stfs      f4, 0x140(r3)
	  bl        0x164
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CA60
 * Size:	000150
 */
void J2DPicture::setBlendKonstColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r7, 0
	  lfs       f3, -0x7B60(r2)
	  li        r8, 0x1
	  lbz       r6, 0x110(r3)
	  b         .loc_0x118

	.loc_0x18:
	  rlwinm    r0,r8,0,24,31
	  lfs       f7, -0x7B60(r2)
	  cmplwi    r0, 0
	  li        r5, 0
	  ble-      .loc_0xC4
	  cmplwi    r0, 0x8
	  subi      r0, r8, 0x8
	  ble-      .loc_0x9C
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0x90

	.loc_0x40:
	  rlwinm    r4,r5,2,22,29
	  addi      r5, r5, 0x8
	  addi      r4, r4, 0x124
	  add       r4, r3, r4
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fadds     f7, f7, f1
	  lfs       f6, 0x8(r4)
	  lfs       f5, 0xC(r4)
	  lfs       f4, 0x10(r4)
	  fadds     f7, f7, f0
	  lfs       f2, 0x14(r4)
	  lfs       f1, 0x18(r4)
	  lfs       f0, 0x1C(r4)
	  fadds     f7, f7, f6
	  fadds     f7, f7, f5
	  fadds     f7, f7, f4
	  fadds     f7, f7, f2
	  fadds     f7, f7, f1
	  fadds     f7, f7, f0

	.loc_0x90:
	  rlwinm    r4,r5,0,24,31
	  cmplw     r4, r0
	  blt+      .loc_0x40

	.loc_0x9C:
	  rlwinm    r0,r8,0,24,31
	  b         .loc_0xB8

	.loc_0xA4:
	  rlwinm    r4,r5,2,22,29
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x124
	  lfsx      f0, r3, r4
	  fadds     f7, f7, f0

	.loc_0xB8:
	  rlwinm    r4,r5,0,24,31
	  cmplw     r4, r0
	  blt+      .loc_0xA4

	.loc_0xC4:
	  rlwinm    r4,r8,2,22,29
	  rlwinm    r5,r8,0,24,31
	  addi      r0, r4, 0x124
	  lfsx      f0, r3, r0
	  fadds     f0, f7, f0
	  fcmpu     cr0, f3, f0
	  beq-      .loc_0x114
	  fdivs     f0, f7, f0
	  lfs       f1, -0x7B70(r2)
	  subi      r0, r5, 0x1
	  lfs       f2, -0x7B50(r2)
	  rlwinm    r0,r0,3,0,28
	  fsubs     f0, f1, f0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  rlwinm    r4,r4,0,24,31
	  slw       r0, r4, r0
	  or        r7, r7, r0

	.loc_0x114:
	  addi      r8, r8, 0x1

	.loc_0x118:
	  rlwinm    r0,r8,0,24,31
	  cmplw     r0, r6
	  blt+      .loc_0x18
	  stw       r7, 0x8(r1)
	  lbz       r4, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r4, 0x160(r3)
	  lbz       r4, 0xA(r1)
	  stb       r0, 0x161(r3)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x162(r3)
	  stb       r0, 0x163(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CBB0
 * Size:	000150
 */
void J2DPicture::setBlendKonstAlpha()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r7, 0
	  lfs       f3, -0x7B60(r2)
	  li        r8, 0x1
	  lbz       r6, 0x110(r3)
	  b         .loc_0x118

	.loc_0x18:
	  rlwinm    r0,r8,0,24,31
	  lfs       f7, -0x7B60(r2)
	  cmplwi    r0, 0
	  li        r5, 0
	  ble-      .loc_0xC4
	  cmplwi    r0, 0x8
	  subi      r0, r8, 0x8
	  ble-      .loc_0x9C
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0x90

	.loc_0x40:
	  rlwinm    r4,r5,2,22,29
	  addi      r5, r5, 0x8
	  addi      r4, r4, 0x134
	  add       r4, r3, r4
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fadds     f7, f7, f1
	  lfs       f6, 0x8(r4)
	  lfs       f5, 0xC(r4)
	  lfs       f4, 0x10(r4)
	  fadds     f7, f7, f0
	  lfs       f2, 0x14(r4)
	  lfs       f1, 0x18(r4)
	  lfs       f0, 0x1C(r4)
	  fadds     f7, f7, f6
	  fadds     f7, f7, f5
	  fadds     f7, f7, f4
	  fadds     f7, f7, f2
	  fadds     f7, f7, f1
	  fadds     f7, f7, f0

	.loc_0x90:
	  rlwinm    r4,r5,0,24,31
	  cmplw     r4, r0
	  blt+      .loc_0x40

	.loc_0x9C:
	  rlwinm    r0,r8,0,24,31
	  b         .loc_0xB8

	.loc_0xA4:
	  rlwinm    r4,r5,2,22,29
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x134
	  lfsx      f0, r3, r4
	  fadds     f7, f7, f0

	.loc_0xB8:
	  rlwinm    r4,r5,0,24,31
	  cmplw     r4, r0
	  blt+      .loc_0xA4

	.loc_0xC4:
	  rlwinm    r4,r8,2,22,29
	  rlwinm    r5,r8,0,24,31
	  addi      r0, r4, 0x134
	  lfsx      f0, r3, r0
	  fadds     f0, f7, f0
	  fcmpu     cr0, f3, f0
	  beq-      .loc_0x114
	  fdivs     f0, f7, f0
	  lfs       f1, -0x7B70(r2)
	  subi      r0, r5, 0x1
	  lfs       f2, -0x7B50(r2)
	  rlwinm    r0,r0,3,0,28
	  fsubs     f0, f1, f0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  rlwinm    r4,r4,0,24,31
	  slw       r0, r4, r0
	  or        r7, r7, r0

	.loc_0x114:
	  addi      r8, r8, 0x1

	.loc_0x118:
	  rlwinm    r0,r8,0,24,31
	  cmplw     r0, r6
	  blt+      .loc_0x18
	  stw       r7, 0x8(r1)
	  lbz       r4, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r4, 0x164(r3)
	  lbz       r4, 0xA(r1)
	  stb       r0, 0x165(r3)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x166(r3)
	  stb       r0, 0x167(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CD00
 * Size:	000124
 */
void J2DPicture::getNewColor(JUtility::TColor*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x150(r3)
	  stb       r0, 0x0(r4)
	  lbz       r0, 0x151(r3)
	  stb       r0, 0x1(r4)
	  lbz       r0, 0x152(r3)
	  stb       r0, 0x2(r4)
	  lbz       r0, 0x153(r3)
	  stb       r0, 0x3(r4)
	  lbz       r0, 0x154(r3)
	  stb       r0, 0x4(r4)
	  lbz       r0, 0x155(r3)
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x156(r3)
	  stb       r0, 0x6(r4)
	  lbz       r0, 0x157(r3)
	  stb       r0, 0x7(r4)
	  lbz       r0, 0x158(r3)
	  stb       r0, 0x8(r4)
	  lbz       r0, 0x159(r3)
	  stb       r0, 0x9(r4)
	  lbz       r0, 0x15A(r3)
	  stb       r0, 0xA(r4)
	  lbz       r0, 0x15B(r3)
	  stb       r0, 0xB(r4)
	  lbz       r0, 0x15C(r3)
	  stb       r0, 0xC(r4)
	  lbz       r0, 0x15D(r3)
	  stb       r0, 0xD(r4)
	  lbz       r0, 0x15E(r3)
	  stb       r0, 0xE(r4)
	  lbz       r0, 0x15F(r3)
	  stb       r0, 0xF(r4)
	  lbz       r7, 0xB3(r3)
	  cmplwi    r7, 0xFF
	  beqlr-
	  lbz       r0, 0x3(r4)
	  lis       r5, 0x8081
	  subi      r6, r5, 0x7F7F
	  mullw     r0, r0, r7
	  mulhw     r5, r6, r0
	  add       r0, r5, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r5,r0,1,31,31
	  add       r0, r0, r5
	  stb       r0, 0x3(r4)
	  lbz       r5, 0x7(r4)
	  lbz       r0, 0xB3(r3)
	  mullw     r0, r5, r0
	  mulhw     r5, r6, r0
	  add       r0, r5, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r5,r0,1,31,31
	  add       r0, r0, r5
	  stb       r0, 0x7(r4)
	  lbz       r5, 0xB(r4)
	  lbz       r0, 0xB3(r3)
	  mullw     r0, r5, r0
	  mulhw     r5, r6, r0
	  add       r0, r5, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r5,r0,1,31,31
	  add       r0, r0, r5
	  stb       r0, 0xB(r4)
	  lbz       r5, 0xF(r4)
	  lbz       r0, 0xB3(r3)
	  mullw     r0, r5, r0
	  mulhw     r3, r6, r0
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stb       r0, 0xF(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CE24
 * Size:	000044
 */
void J2DPicture::setTexCoord(const JGeometry::TVec2<short>*)
{
	/*
	.loc_0x0:
	  lha       r5, 0x0(r4)
	  lha       r0, 0x2(r4)
	  sth       r5, 0x112(r3)
	  lha       r5, 0x4(r4)
	  sth       r0, 0x114(r3)
	  lha       r0, 0x6(r4)
	  sth       r5, 0x116(r3)
	  lha       r5, 0x8(r4)
	  sth       r0, 0x118(r3)
	  lha       r0, 0xA(r4)
	  sth       r5, 0x11A(r3)
	  lha       r5, 0xC(r4)
	  sth       r0, 0x11C(r3)
	  lha       r0, 0xE(r4)
	  sth       r5, 0x11E(r3)
	  sth       r0, 0x120(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003CE68
 * Size:	00003C
 */
void J2DPicture::setTexCoord(const JUTTexture*, J2DBinding, J2DMirror, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r5
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r6
	  mr        r8, r7
	  mr        r6, r9
	  mr        r7, r0
	  addi      r4, r3, 0x112
	  bl        .loc_0x3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	8003CEA4
 * Size:	000318
 */
void J2DPicture::setTexCoord(JGeometry::TVec2<short>*, const JUTTexture*,
                             J2DBinding, J2DMirror, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  rlwinm.   r0,r8,0,24,31
	  mr        r31, r8
	  mr        r30, r4
	  bne-      .loc_0x98
	  rlwinm.   r4,r7,0,30,30
	  beq-      .loc_0x48
	  rlwinm    r0,r6,30,31,31
	  b         .loc_0x4C

	.loc_0x48:
	  rlwinm    r0,r6,29,31,31

	.loc_0x4C:
	  cmpwi     r4, 0
	  beq-      .loc_0x5C
	  rlwinm    r4,r6,29,31,31
	  b         .loc_0x60

	.loc_0x5C:
	  rlwinm    r4,r6,30,31,31

	.loc_0x60:
	  rlwinm.   r9,r7,0,31,31
	  beq-      .loc_0x70
	  rlwinm    r8,r6,0,31,31
	  b         .loc_0x74

	.loc_0x70:
	  rlwinm    r8,r6,31,31,31

	.loc_0x74:
	  cmpwi     r9, 0
	  mr        r9, r8
	  beq-      .loc_0x8C
	  rlwinm    r6,r6,31,31,31
	  mr        r10, r6
	  b         .loc_0xF4

	.loc_0x8C:
	  rlwinm    r6,r6,0,31,31
	  mr        r10, r6
	  b         .loc_0xF4

	.loc_0x98:
	  rlwinm.   r4,r7,0,30,30
	  beq-      .loc_0xA8
	  rlwinm    r0,r6,0,31,31
	  b         .loc_0xAC

	.loc_0xA8:
	  rlwinm    r0,r6,31,31,31

	.loc_0xAC:
	  cmpwi     r4, 0
	  beq-      .loc_0xBC
	  rlwinm    r4,r6,31,31,31
	  b         .loc_0xC0

	.loc_0xBC:
	  rlwinm    r4,r6,0,31,31

	.loc_0xC0:
	  rlwinm.   r9,r7,0,31,31
	  beq-      .loc_0xD0
	  rlwinm    r8,r6,29,31,31
	  b         .loc_0xD4

	.loc_0xD0:
	  rlwinm    r8,r6,30,31,31

	.loc_0xD4:
	  cmpwi     r9, 0
	  mr        r9, r8
	  beq-      .loc_0xEC
	  rlwinm    r6,r6,30,31,31
	  mr        r10, r6
	  b         .loc_0xF4

	.loc_0xEC:
	  rlwinm    r6,r6,29,31,31
	  mr        r10, r6

	.loc_0xF4:
	  rlwinm    r6,r31,0,24,31
	  cntlzw    r8, r6
	  rlwinm.   r6,r8,27,24,31
	  rlwinm    r6,r8,27,5,31
	  beq-      .loc_0x118
	  lfs       f1, 0x28(r3)
	  lfs       f0, 0x20(r3)
	  fsubs     f3, f1, f0
	  b         .loc_0x124

	.loc_0x118:
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f3, f1, f0

	.loc_0x124:
	  rlwinm.   r6,r6,0,24,31
	  beq-      .loc_0x13C
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f4, f1, f0
	  b         .loc_0x148

	.loc_0x13C:
	  lfs       f1, 0x28(r3)
	  lfs       f0, 0x20(r3)
	  fsubs     f4, f1, f0

	.loc_0x148:
	  cmplwi    r5, 0
	  bne-      .loc_0x15C
	  fmr       f5, f3
	  fmr       f6, f4
	  b         .loc_0x198

	.loc_0x15C:
	  lwz       r3, 0x20(r5)
	  lis       r5, 0x4330
	  stw       r5, 0x8(r1)
	  lhz       r6, 0x2(r3)
	  lhz       r3, 0x4(r3)
	  xoris     r6, r6, 0x8000
	  stw       r5, 0x10(r1)
	  xoris     r3, r3, 0x8000
	  lfd       f2, -0x7B58(r2)
	  stw       r6, 0xC(r1)
	  stw       r3, 0x14(r1)
	  lfd       f1, 0x8(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f5, f1, f2
	  fsubs     f6, f0, f2

	.loc_0x198:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x1BC
	  rlwinm.   r0,r4,0,24,31
	  lfs       f1, -0x7B60(r2)
	  beq-      .loc_0x1B4
	  lfs       f30, -0x7B70(r2)
	  b         .loc_0x1EC

	.loc_0x1B4:
	  fdivs     f30, f3, f5
	  b         .loc_0x1EC

	.loc_0x1BC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x1D8
	  fdivs     f0, f3, f5
	  lfs       f1, -0x7B70(r2)
	  fmr       f30, f1
	  fsubs     f1, f1, f0
	  b         .loc_0x1EC

	.loc_0x1D8:
	  fdivs     f0, f3, f5
	  lfs       f2, -0x7B4C(r2)
	  fmuls     f0, f0, f2
	  fsubs     f1, f2, f0
	  fadds     f30, f2, f0

	.loc_0x1EC:
	  rlwinm.   r0,r9,0,24,31
	  beq-      .loc_0x210
	  rlwinm.   r0,r10,0,24,31
	  lfs       f31, -0x7B60(r2)
	  beq-      .loc_0x208
	  lfs       f29, -0x7B70(r2)
	  b         .loc_0x240

	.loc_0x208:
	  fdivs     f29, f4, f6
	  b         .loc_0x240

	.loc_0x210:
	  rlwinm.   r0,r10,0,24,31
	  beq-      .loc_0x22C
	  fdivs     f0, f4, f6
	  lfs       f2, -0x7B70(r2)
	  fmr       f29, f2
	  fsubs     f31, f2, f0
	  b         .loc_0x240

	.loc_0x22C:
	  fdivs     f0, f4, f6
	  lfs       f2, -0x7B4C(r2)
	  fmuls     f0, f0, f2
	  fsubs     f31, f2, f0
	  fadds     f29, f2, f0

	.loc_0x240:
	  rlwinm.   r0,r7,0,30,30
	  beq-      .loc_0x254
	  fmr       f0, f1
	  fmr       f1, f30
	  fmr       f30, f0

	.loc_0x254:
	  rlwinm.   r0,r7,0,31,31
	  beq-      .loc_0x268
	  fmr       f0, f31
	  fmr       f31, f29
	  fmr       f29, f0

	.loc_0x268:
	  li        r3, 0x8
	  bl        -0x3E08
	  fmr       f1, f30
	  mr        r27, r3
	  li        r3, 0x8
	  bl        -0x3E18
	  fmr       f1, f31
	  mr        r28, r3
	  li        r3, 0x8
	  bl        -0x3E28
	  fmr       f1, f29
	  mr        r29, r3
	  li        r3, 0x8
	  bl        -0x3E38
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x2CC
	  sth       r27, 0x0(r30)
	  sth       r29, 0x2(r30)
	  sth       r28, 0x4(r30)
	  sth       r29, 0x6(r30)
	  sth       r27, 0x8(r30)
	  sth       r3, 0xA(r30)
	  sth       r28, 0xC(r30)
	  sth       r3, 0xE(r30)
	  b         .loc_0x2EC

	.loc_0x2CC:
	  sth       r27, 0x0(r30)
	  sth       r3, 0x2(r30)
	  sth       r27, 0x4(r30)
	  sth       r29, 0x6(r30)
	  sth       r28, 0x8(r30)
	  sth       r3, 0xA(r30)
	  sth       r28, 0xC(r30)
	  sth       r29, 0xE(r30)

	.loc_0x2EC:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D1BC
 * Size:	000064
 */
void J2DPicture::isUsed(const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  lbz       r6, 0x110(r3)
	  b         .loc_0x44

	.loc_0x18:
	  rlwinm    r5,r7,2,22,29
	  addi      r0, r5, 0x100
	  lwzx      r5, r3, r0
	  cmplwi    r5, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x20(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x40
	  li        r3, 0x1
	  b         .loc_0x54

	.loc_0x40:
	  addi      r7, r7, 0x1

	.loc_0x44:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r6
	  blt+      .loc_0x18
	  bl        -0x4818

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D220
 * Size:	0000D0
 */
void J2DPicture::getUsableTlut(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r6, 0x110(r3)
	  rlwinm    r5,r4,0,24,31
	  li        r8, 0
	  li        r9, 0
	  b         .loc_0x84

	.loc_0x14:
	  rlwinm    r0,r9,0,24,31
	  cmplw     r0, r5
	  beq-      .loc_0x80
	  rlwinm    r4,r9,2,22,29
	  addi      r0, r4, 0x100
	  lwzx      r7, r3, r0
	  cmplwi    r7, 0
	  beq-      .loc_0x80
	  lwz       r4, 0x20(r7)
	  cmplwi    r4, 0
	  beq-      .loc_0x80
	  lbz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lbz       r4, 0x3A(r7)
	  li        r0, 0
	  cmpwi     r4, 0x10
	  blt-      .loc_0x60
	  li        r0, 0x10

	.loc_0x60:
	  sub       r0, r4, r0
	  rlwinm    r4,r0,0,24,31
	  cmplwi    r4, 0x4
	  bge-      .loc_0x80
	  li        r0, 0x1
	  slw       r0, r0, r4
	  or        r0, r8, r0
	  rlwinm    r8,r0,0,24,31

	.loc_0x80:
	  addi      r9, r9, 0x1

	.loc_0x84:
	  rlwinm    r0,r9,0,24,31
	  cmplw     r0, r6
	  blt+      .loc_0x14
	  rlwinm    r5,r8,0,24,31
	  li        r3, 0
	  li        r6, 0
	  li        r4, 0x1
	  b         .loc_0xC0

	.loc_0xA4:
	  rlwinm    r0,r6,0,24,31
	  slw       r0, r4, r0
	  and.      r0, r5, r0
	  bne-      .loc_0xBC
	  mr        r3, r6
	  blr

	.loc_0xBC:
	  addi      r6, r6, 0x1

	.loc_0xC0:
	  rlwinm    r0,r6,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0xA4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D2F0
 * Size:	000034
 */
void J2DPicture::getTlutID(const ResTIMG*, unsigned char)
{
	/*
	.loc_0x0:
	  lhz       r0, 0xA(r4)
	  cmplwi    r0, 0x100
	  ble-      .loc_0x2C
	  rlwinm    r3,r5,0,24,31
	  rlwinm    r0,r5,30,0,1
	  rlwinm    r3,r3,1,31,31
	  sub       r0, r0, r3
	  rlwinm    r0,r0,2,0,31
	  add       r3, r0, r3
	  addi      r3, r3, 0x10
	  blr

	.loc_0x2C:
	  rlwinm    r3,r5,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D324
 * Size:	000008
 */
void J2DPicture::getTypeID() const
{
	/*
	.loc_0x0:
	  li        r3, 0x12
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D32C
 * Size:	000030
 */
void J2DPicture::append(const char*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lbz       r6, 0x110(r3)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D35C
 * Size:	000030
 */
void J2DPicture::prepend(JUTTexture*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D38C
 * Size:	000030
 */
void J2DPicture::prepend(const char*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D3BC
 * Size:	000030
 */
void J2DPicture::prepend(const char*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D3EC
 * Size:	000030
 */
void J2DPicture::prepend(const ResTIMG*, JUTPalette*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D41C
 * Size:	000030
 */
void J2DPicture::prepend(const ResTIMG*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D44C
 * Size:	000038
 */
void J2DPicture::remove()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lbz       r4, 0x110(r3)
	  lwz       r12, 0xD8(r12)
	  subi      r0, r4, 0x1
	  rlwinm    r4,r0,0,24,31
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D484
 * Size:	000098
 */
void J2DPicture::draw(float, float, unsigned char, bool, bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  rlwinm    r8,r4,0,24,31
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x110(r3)
	  cmplw     r8, r0
	  bge-      .loc_0x88
	  rlwinm    r0,r4,2,22,29
	  add       r4, r3, r0
	  lwz       r4, 0x100(r4)
	  cmplwi    r4, 0
	  beq-      .loc_0x88
	  lwz       r9, 0x20(r4)
	  lis       r8, 0x4330
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  lhz       r0, 0x4(r9)
	  mr        r5, r6
	  lhz       r9, 0x2(r9)
	  mr        r6, r7
	  xoris     r0, r0, 0x8000
	  stw       r8, 0x8(r1)
	  xoris     r7, r9, 0x8000
	  lfd       f4, -0x7B58(r2)
	  stw       r7, 0xC(r1)
	  lwz       r12, 0xEC(r12)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f3, f0, f4
	  stw       r8, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f4, f0, f4
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D51C
 * Size:	000040
 */
void J2DPicture::draw(float, float, bool, bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r7, r6
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r5, r4
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  mr        r6, r0
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D55C
 * Size:	000064
 */
void J2DPicture::drawOut(float, float, float, float, float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  fadds     f7, f5, f7
	  stw       r0, 0x34(r1)
	  fadds     f3, f1, f3
	  fadds     f0, f2, f4
	  addi      r4, r1, 0x18
	  stfs      f5, 0x8(r1)
	  fadds     f5, f6, f8
	  addi      r5, r1, 0x8
	  stfs      f6, 0xC(r1)
	  stfs      f7, 0x10(r1)
	  stfs      f5, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D5C0
 * Size:	0000AC
 */
void J2DPicture::drawOut(float, float, float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  lwz       r4, 0x100(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x9C
	  lwz       r4, 0x20(r4)
	  lis       r6, 0x4330
	  stw       r6, 0x28(r1)
	  fadds     f3, f1, f3
	  lhz       r0, 0x4(r4)
	  fadds     f0, f2, f4
	  lhz       r5, 0x2(r4)
	  addi      r4, r1, 0x18
	  xoris     r0, r0, 0x8000
	  xoris     r7, r5, 0x8000
	  stw       r0, 0x34(r1)
	  lfd       f8, -0x7B58(r2)
	  addi      r5, r1, 0x8
	  stw       r7, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  lfd       f7, 0x28(r1)
	  lfd       f4, 0x30(r1)
	  fsubs     f7, f7, f8
	  stfs      f5, 0x8(r1)
	  fsubs     f4, f4, f8
	  stfs      f6, 0xC(r1)
	  fadds     f5, f5, f7
	  fadds     f4, f6, f4
	  stfs      f1, 0x18(r1)
	  stfs      f5, 0x10(r1)
	  stfs      f4, 0x14(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D66C
 * Size:	000008
 */
void J2DPicture::getTextureCount() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x110(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D674
 * Size:	000028
 */
void J2DPicture::setBlack(JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x14C(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x14D(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x14E(r3)
	  stb       r0, 0x14F(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D69C
 * Size:	000028
 */
void J2DPicture::setWhite(JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x148(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x149(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x14A(r3)
	  stb       r0, 0x14B(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D6C4
 * Size:	000048
 */
void J2DPicture::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r6, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r6, 0x14C(r3)
	  lbz       r6, 0x2(r4)
	  stb       r0, 0x14D(r3)
	  lbz       r0, 0x3(r4)
	  stb       r6, 0x14E(r3)
	  lbz       r4, 0x0(r5)
	  stb       r0, 0x14F(r3)
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x148(r3)
	  lbz       r4, 0x2(r5)
	  stb       r0, 0x149(r3)
	  lbz       r0, 0x3(r5)
	  stb       r4, 0x14A(r3)
	  stb       r0, 0x14B(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D70C
 * Size:	00000C
 */
void J2DPicture::getBlack() const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x14C(r4)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D718
 * Size:	00000C
 */
void J2DPicture::getWhite() const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x148(r4)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D724
 * Size:	000008
 */
void J2DPicture::getMaterial() const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D72C
 * Size:	000020
 */
void J2DPicture::isUsed(const ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x4CBC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D74C
 * Size:	000004
 */
void J2DPicture::rewriteAlpha()
{
	/*
	.loc_0x0:
	  blr
	*/
}
