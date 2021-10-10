

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void J2DGrafContext::J2DGrafContext(const JGeometry::TBox2<float>&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80036074
 * Size:	0000AC
 */
void J2DGrafContext::J2DGrafContext(float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  fadds     f0, f1, f3
	  stw       r0, 0x34(r1)
	  li        r0, -0x1
	  addi      r4, r4, 0x650
	  fadds     f3, f2, f4
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  addi      r5, r1, 0x10
	  stw       r4, 0x0(r3)
	  addi      r4, r1, 0xC
	  addi      r6, r1, 0x14
	  addi      r7, r1, 0x18
	  stfs      f1, 0x4(r3)
	  stfs      f2, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f3, 0x10(r3)
	  stfs      f1, 0x14(r3)
	  stfs      f2, 0x18(r3)
	  stfs      f0, 0x1C(r3)
	  stfs      f3, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x30(r3)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x8(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  bl        0x594
	  mr        r3, r31
	  li        r4, 0x6
	  bl        0x6A4
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80036120
 * Size:	000090
 */
void J2DGrafContext::setPort()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x4(r31)
	  lfs       f0, -0x7BB8(r2)
	  lfs       f2, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  lfs       f3, 0xC(r31)
	  lfs       f4, 0x10(r31)
	  bge-      .loc_0x58
	  fmr       f1, f0

	.loc_0x58:
	  lfs       f0, -0x7BB8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x68
	  fmr       f2, f0

	.loc_0x68:
	  fsubs     f3, f3, f1
	  lfs       f5, -0x7BB8(r2)
	  fsubs     f4, f4, f2
	  lfs       f6, -0x7BB4(r2)
	  bl        0xB35F8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800361B0
 * Size:	0001DC
 */
void J2DGrafContext::setup2D()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  li        r3, 0
	  bl        0xB2188
	  li        r31, 0

	.loc_0x24:
	  mr        r3, r31
	  bl        0xB21A0
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x10
	  blt+      .loc_0x24
	  li        r3, 0
	  bl        0xB2FCC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xB2748
	  li        r3, 0
	  li        r4, 0x3
	  li        r5, 0
	  bl        0xB2F70
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xB225C
	  li        r3, 0x1
	  bl        0xB0C3C
	  li        r3, 0x1
	  bl        0xB2988
	  li        r3, 0
	  bl        0xAED64
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xB27D0
	  li        r3, 0
	  bl        0xAF954
	  addi      r3, r30, 0x80
	  li        r4, 0
	  bl        0xB3318
	  addi      r3, r1, 0x8
	  bl        0xB4038
	  addi      r3, r1, 0x8
	  li        r4, 0x3C
	  li        r5, 0
	  bl        0xB33D4
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xB0C08
	  li        r3, 0x5
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xB0BE8
	  li        r3, 0
	  bl        0xB3358
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0xAEA40
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0xAE414
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        0xAE3FC
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xAE3E4
	  li        r3, 0
	  li        r4, 0xE
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xAE3CC
	  lbz       r3, 0x34(r30)
	  li        r4, 0
	  bl        0xAF798
	  bl        0xAE384
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xADF2C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xADF20
	  li        r3, 0xD
	  li        r4, 0
	  bl        0xADF14
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003638C
 * Size:	0002A8
 */
void J2DGrafContext::setScissor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lfs       f1, 0x14(r3)
	  lfs       f0, -0x7BB8(r2)
	  lfs       f29, 0x18(r3)
	  fcmpo     cr0, f1, f0
	  lfs       f31, 0x1C(r3)
	  lfs       f30, 0x20(r3)
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  stfs      f0, 0x14(r3)

	.loc_0x5C:
	  lfs       f2, 0x18(r3)
	  lfs       f0, -0x7BB8(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x74
	  stfs      f0, 0x18(r3)

	.loc_0x74:
	  lfs       f2, 0x1C(r3)
	  lfs       f0, -0x7BB0(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x8C
	  stfs      f0, 0x1C(r3)

	.loc_0x8C:
	  lfs       f2, 0x20(r3)
	  lfs       f0, -0x7BB0(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA4
	  stfs      f0, 0x20(r3)

	.loc_0xA4:
	  fcmpo     cr0, f31, f1
	  li        r0, 0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC4
	  fcmpo     cr0, f30, f29
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC4
	  li        r0, 0x1

	.loc_0xC4:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x14C
	  fcmpo     cr0, f1, f1
	  fmr       f0, f1
	  fmr       f2, f29
	  fmr       f3, f31
	  fmr       f4, f30
	  cror      2, 0x1, 0x2
	  fcmpo     cr0, f29, f29
	  cror      2, 0x1, 0x2
	  fcmpo     cr0, f1, f31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xFC
	  fmr       f1, f31

	.loc_0xFC:
	  fcmpo     cr0, f29, f30
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10C
	  fmr       f29, f30

	.loc_0x10C:
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x11C
	  fmr       f31, f0

	.loc_0x11C:
	  fcmpo     cr0, f30, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x12C
	  fmr       f30, f2

	.loc_0x12C:
	  fcmpo     cr0, f31, f3
	  cror      2, 0, 0x2
	  bne-      .loc_0x13C
	  fmr       f31, f3

	.loc_0x13C:
	  fcmpo     cr0, f30, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x14C
	  fmr       f30, f4

	.loc_0x14C:
	  lfs       f0, -0x7BB8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  fmr       f1, f0

	.loc_0x160:
	  lfs       f0, -0x7BB8(r2)
	  fcmpo     cr0, f29, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x174
	  fmr       f29, f0

	.loc_0x174:
	  lfs       f0, -0x7BB0(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x188
	  fmr       f31, f0

	.loc_0x188:
	  lfs       f0, -0x7BB0(r2)
	  fcmpo     cr0, f30, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x19C
	  fmr       f30, f0

	.loc_0x19C:
	  fcmpo     cr0, f31, f1
	  li        r0, 0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1BC
	  fcmpo     cr0, f30, f29
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1BC
	  li        r0, 0x1

	.loc_0x1BC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x258
	  bl        0x8B5FC
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x7BA8(r2)
	  fmr       f1, f29
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f29, f0, f2
	  bl        0x8B5DC
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f2, -0x7BA8(r2)
	  fmr       f1, f31
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f31, f0, f2
	  bl        0x98BB8
	  frsp      f28, f1
	  fmr       f1, f30
	  bl        0x98BAC
	  frsp      f0, f1
	  fsubs     f1, f0, f31
	  bl        0x8B5A4
	  fsubs     f1, f28, f29
	  mr        r29, r3
	  bl        0x8B598
	  fmr       f1, f31
	  mr        r30, r3
	  bl        0x8B58C
	  fmr       f1, f29
	  mr        r31, r3
	  bl        0x8B580
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        0xB31FC
	  b         .loc_0x26C

	.loc_0x258:
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  bl        0xB31E4

	.loc_0x26C:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80036634
 * Size:	000024
 */
void J2DGrafContext::scissor(const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r5, 0x14(r3)
	  lwz       r5, 0x8(r4)
	  stw       r0, 0x18(r3)
	  lwz       r0, 0xC(r4)
	  stw       r5, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80036658
 * Size:	000034
 */
void J2DGrafContext::place(const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  lwz       r7, 0x0(r4)
	  lwz       r6, 0x4(r4)
	  stw       r7, 0x4(r3)
	  lwz       r5, 0x8(r4)
	  stw       r6, 0x8(r3)
	  lwz       r0, 0xC(r4)
	  stw       r5, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r7, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r5, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003668C
 * Size:	00011C
 */
void J2DGrafContext::setColor(JUtility::TColor, JUtility::TColor,
                              JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  li        r9, 0x1
	  lbz       r11, 0x1(r4)
	  li        r8, 0x4
	  stb       r0, 0x24(r3)
	  li        r0, 0x5
	  lbz       r10, 0x2(r4)
	  stb       r11, 0x25(r3)
	  lbz       r4, 0x3(r4)
	  stb       r10, 0x26(r3)
	  lbz       r10, 0x0(r5)
	  stb       r4, 0x27(r3)
	  lbz       r4, 0x1(r5)
	  stb       r10, 0x28(r3)
	  lbz       r10, 0x2(r5)
	  stb       r4, 0x29(r3)
	  lbz       r4, 0x3(r5)
	  stb       r10, 0x2A(r3)
	  lbz       r5, 0x0(r6)
	  stb       r4, 0x2B(r3)
	  lbz       r4, 0x1(r6)
	  stb       r5, 0x2C(r3)
	  lbz       r5, 0x2(r6)
	  stb       r4, 0x2D(r3)
	  lbz       r4, 0x3(r6)
	  stb       r5, 0x2E(r3)
	  lbz       r5, 0x0(r7)
	  stb       r4, 0x2F(r3)
	  lbz       r4, 0x1(r7)
	  stb       r5, 0x30(r3)
	  lbz       r5, 0x2(r7)
	  stb       r4, 0x31(r3)
	  lbz       r4, 0x3(r7)
	  stb       r5, 0x32(r3)
	  stb       r4, 0x33(r3)
	  stb       r9, 0xB0(r3)
	  stb       r8, 0xB1(r3)
	  stb       r0, 0xB2(r3)
	  stb       r9, 0xB3(r3)
	  stb       r8, 0xB4(r3)
	  stb       r0, 0xB5(r3)
	  stb       r9, 0xB6(r3)
	  stb       r8, 0xB7(r3)
	  stb       r0, 0xB8(r3)
	  lwz       r0, 0x24(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  li        r4, 0
	  stb       r4, 0xB0(r3)
	  stb       r9, 0xB1(r3)
	  stb       r4, 0xB2(r3)
	  lwz       r0, 0x2C(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  stb       r4, 0xB3(r3)
	  stb       r9, 0xB4(r3)
	  stb       r4, 0xB5(r3)
	  lwz       r0, 0x28(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  lwz       r0, 0x30(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  stb       r4, 0xB6(r3)
	  stb       r9, 0xB7(r3)
	  stb       r4, 0xB8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800367A8
 * Size:	00002C
 */
void J2DGrafContext::setLineWidth(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stb       r4, 0x34(r3)
	  li        r4, 0
	  lbz       r3, 0x34(r3)
	  bl        0xAF320
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800367D4
 * Size:	0000FC
 */
void J2DGrafContext::fillBox(const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0xF
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r3, 0xB6(r3)
	  lbz       r4, 0xB7(r30)
	  lbz       r5, 0xB8(r30)
	  bl        0xB28D8
	  addi      r3, r30, 0x80
	  li        r4, 0
	  bl        0xB2D6C
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xADEE4
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xAF154
	  lfs       f2, 0x0(r31)
	  lis       r8, 0xCC01
	  lfs       f3, 0x4(r31)
	  li        r3, 0
	  stfs      f2, -0x8000(r8)
	  li        r4, 0x9
	  lfs       f1, -0x7BB8(r2)
	  li        r5, 0x1
	  stfs      f3, -0x8000(r8)
	  li        r6, 0x3
	  lfs       f0, 0x8(r31)
	  li        r7, 0
	  stfs      f1, -0x8000(r8)
	  lfs       f4, 0xC(r31)
	  lwz       r0, 0x24(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x28(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x30(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f2, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x2C(r30)
	  stw       r0, -0x8000(r8)
	  bl        0xADE54
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
 * Address:	800368D0
 * Size:	000110
 */
void J2DGrafContext::drawFrame(const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0xF
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r3, 0xB6(r3)
	  lbz       r4, 0xB7(r30)
	  lbz       r5, 0xB8(r30)
	  bl        0xB27DC
	  addi      r3, r30, 0x80
	  li        r4, 0
	  bl        0xB2C70
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xADDE8
	  li        r3, 0xB0
	  li        r4, 0
	  li        r5, 0x5
	  bl        0xAF058
	  lfs       f2, 0x0(r31)
	  lis       r8, 0xCC01
	  lfs       f3, 0x4(r31)
	  li        r3, 0
	  stfs      f2, -0x8000(r8)
	  li        r4, 0x9
	  lfs       f1, -0x7BB8(r2)
	  li        r5, 0x1
	  stfs      f3, -0x8000(r8)
	  li        r6, 0x3
	  lfs       f0, 0x8(r31)
	  li        r7, 0
	  stfs      f1, -0x8000(r8)
	  lfs       f4, 0xC(r31)
	  lwz       r0, 0x24(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x28(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x30(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f2, -0x8000(r8)
	  stfs      f4, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x2C(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f2, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  lwz       r0, 0x24(r30)
	  stw       r0, -0x8000(r8)
	  bl        0xADD44
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
 * Size:	0000E0
 */
void J2DGrafContext::line(JGeometry::TVec2<float>, JGeometry::TVec2<float>)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800369E0
 * Size:	000104
 */
void J2DGrafContext::lineTo(JGeometry::TVec2<float>)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r6, 0xF
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x0(r4)
	  lwz       r4, 0x4(r4)
	  lwz       r5, 0x38(r30)
	  lwz       r0, 0x3C(r30)
	  stw       r3, 0x8(r1)
	  lbz       r3, 0xB3(r30)
	  stw       r4, 0xC(r1)
	  lbz       r4, 0xB4(r30)
	  stw       r5, 0x10(r1)
	  lbz       r5, 0xB5(r30)
	  stw       r0, 0x14(r1)
	  bl        0xB26AC
	  addi      r3, r30, 0x80
	  li        r4, 0
	  bl        0xB2B40
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xADCB8
	  li        r3, 0xA8
	  li        r4, 0
	  li        r5, 0x2
	  bl        0xAEF28
	  lfs       f1, 0x10(r1)
	  lis       r8, 0xCC01
	  lfs       f0, 0x14(r1)
	  li        r3, 0
	  stfs      f1, -0x8000(r8)
	  li        r4, 0x9
	  lfs       f2, -0x7BB8(r2)
	  li        r5, 0x1
	  stfs      f0, -0x8000(r8)
	  li        r6, 0x3
	  lfs       f1, 0x8(r1)
	  li        r7, 0
	  stfs      f2, -0x8000(r8)
	  lfs       f0, 0xC(r1)
	  lwz       r0, 0x24(r30)
	  stw       r0, -0x8000(r8)
	  stfs      f1, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stfs      f2, -0x8000(r8)
	  lwz       r0, 0x2C(r30)
	  stw       r0, -0x8000(r8)
	  bl        0xADC50
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x4(r31)
	  stfs      f1, 0x38(r30)
	  stfs      f0, 0x3C(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000210
 */
void J2DGrafContext::polyline(JGeometry::TVec2<float>*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void J2DGrafContext::polyline(float*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000240
 */
void J2DGrafContext::polylineTo(JGeometry::TVec2<float>*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
void J2DGrafContext::polylineTo(float*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80036AE4
 * Size:	000008
 */
void J2DGrafContext::getGrafType() const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80036AEC
 * Size:	000004
 */
void J2DGrafContext::setLookat()
{
	/*
	.loc_0x0:
	  blr
	*/
}