

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80301EB8
 * Size:	000008
 */
void og::Screen::ArrowAlphaBlink::setSpeed((float))
{
    /*
    .loc_0x0:
      stfs      f1, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::Screen::ArrowAlphaBlink::setAmp((float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void og::Screen::ArrowAlphaBlink::setBottom((float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80301EC0
 * Size:	0000C0
 */
void og::Screen::ArrowAlphaBlink::calc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lfs       f3, -0xE58(r2)
      lwz       r4, -0x6514(r13)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x54(r4)
      fmuls     f2, f1, f0
      lfs       f1, 0x0(r3)
      lfs       f0, -0xE54(r2)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x0(r3)
      lfs       f1, 0x0(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x3C
      fsubs     f0, f1, f0
      stfs      f0, 0x0(r3)

    .loc_0x3C:
      lfs       f2, 0x0(r3)
      lfs       f0, -0xE44(r2)
      lfs       f3, 0x8(r3)
      fcmpo     cr0, f2, f0
      lfs       f1, -0xE50(r2)
      bge-      .loc_0x80
      lfs       f0, -0xE4C(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xA4

    .loc_0x80:
      lfs       f0, -0xE48(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xA4:
      fadds     f2, f1, f0
      lfs       f1, -0xE40(r2)
      lfs       f0, 0xC(r3)
      fmuls     f2, f3, f2
      fmadds    f1, f2, f1, f0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80301F80
 * Size:	00021C
 */
void og::Screen::capturePictureTreeColor((J2DPane*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r4
      stw       r29, 0x24(r1)
      mr        r29, r3
      lbz       r0, -0x686C(r13)
      extsb.    r0, r0
      bne-      .loc_0x3C
      li        r3, 0
      li        r0, 0x1
      stw       r3, -0x6870(r13)
      stb       r0, -0x686C(r13)

    .loc_0x3C:
      lbz       r0, -0x6864(r13)
      extsb.    r0, r0
      bne-      .loc_0x58
      li        r3, 0
      li        r0, 0x1
      stw       r3, -0x6868(r13)
      stb       r0, -0x6864(r13)

    .loc_0x58:
      lbz       r0, -0x685C(r13)
      extsb.    r0, r0
      bne-      .loc_0x74
      li        r3, 0
      li        r0, 0x1
      stw       r3, -0x6860(r13)
      stb       r0, -0x685C(r13)

    .loc_0x74:
      cmpwi     r30, 0
      li        r31, 0
      ble-      .loc_0xD0
      mulli     r3, r30, 0xC
      addi      r3, r3, 0x10
      bl        -0x2DE05C
      lis       r4, 0x8030
      mr        r7, r30
      addi      r4, r4, 0x219C
      li        r5, 0
      li        r6, 0xC
      bl        -0x240630
      stw       r3, -0x6870(r13)
      li        r3, 0x8
      stw       r30, -0x6868(r13)
      stw       r30, -0x6860(r13)
      bl        -0x2DE190
      cmplwi    r3, 0
      beq-      .loc_0xCC
      lwz       r0, -0x6870(r13)
      stw       r30, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0xCC:
      mr        r31, r3

    .loc_0xD0:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      cmplwi    r0, 0x12
      bne-      .loc_0x1C4
      mr        r4, r29
      addi      r3, r1, 0xC
      lwz       r12, 0x0(r29)
      lwz       r12, 0x138(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      lwz       r0, 0xC(r1)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x8
      stw       r0, 0x14(r1)
      lwz       r12, 0x134(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6860(r13)
      lwz       r3, 0x8(r1)
      cmpwi     r0, 0
      stw       r3, 0x10(r1)
      ble-      .loc_0x1A8
      lwz       r3, -0x6870(r13)
      lbz       r0, 0x14(r1)
      stw       r29, 0x0(r3)
      lbz       r4, 0x15(r1)
      lwz       r6, -0x6870(r13)
      lbz       r3, 0x16(r1)
      stb       r0, 0x4(r6)
      lbz       r0, 0x17(r1)
      stb       r4, 0x5(r6)
      lbz       r5, 0x10(r1)
      stb       r3, 0x6(r6)
      lbz       r4, 0x11(r1)
      stb       r0, 0x7(r6)
      lbz       r3, 0x12(r1)
      lwz       r6, -0x6870(r13)
      lbz       r0, 0x13(r1)
      stb       r5, 0x8(r6)
      stb       r4, 0x9(r6)
      stb       r3, 0xA(r6)
      stb       r0, 0xB(r6)
      lwz       r4, -0x6870(r13)
      lwz       r3, -0x6860(r13)
      addi      r4, r4, 0xC
      subi      r0, r3, 0x1
      stw       r4, -0x6870(r13)
      stw       r0, -0x6860(r13)
      b         .loc_0x1C4

    .loc_0x1A8:
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2334
      li        r4, 0x9D
      subi      r5, r5, 0x2324
      crclr     6, 0x6
      bl        -0x2D7B00

    .loc_0x1C4:
      lwz       r29, 0xDC(r29)
      cmplwi    r29, 0
      beq-      .loc_0x1F4
      subi      r29, r29, 0xC
      b         .loc_0x1F4

    .loc_0x1D8:
      lwz       r3, 0xC(r29)
      li        r4, 0
      bl        .loc_0x0
      lwz       r29, 0x18(r29)
      cmplwi    r29, 0
      beq-      .loc_0x1F4
      subi      r29, r29, 0xC

    .loc_0x1F4:
      cmplwi    r29, 0
      bne+      .loc_0x1D8
      lwz       r0, 0x34(r1)
      mr        r3, r31
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8030219C
 * Size:	00003C
 */
void og::Screen::PictureTreeColorInfo::__ct(void)
{
    /*
    .loc_0x0:
      li        r5, -0x1
      li        r4, 0
      stw       r5, 0x4(r3)
      li        r0, 0xFF
      stw       r5, 0x8(r3)
      stw       r4, 0x0(r3)
      stb       r0, 0x4(r3)
      stb       r0, 0x5(r3)
      stb       r0, 0x6(r3)
      stb       r0, 0x7(r3)
      stb       r4, 0x8(r3)
      stb       r4, 0x9(r3)
      stb       r4, 0xA(r3)
      stb       r4, 0xB(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void og::Screen::recoverPictureTreeColor(
    (og::Screen::PictureTreeColorCaptureInfo*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803021D8
 * Size:	000154
 */
void og::Screen::blendColor((JUtility::TColor&, JUtility::TColor&, float,
                             JUtility::TColor*))
{
    /*
    .loc_0x0:
      lfs       f0, -0xE44(r2)
      stwu      r1, -0x70(r1)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x14
      fmr       f1, f0

    .loc_0x14:
      lfs       f0, -0xE50(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x24
      fmr       f1, f0

    .loc_0x24:
      lbz       r0, 0x0(r4)
      lis       r9, 0x4330
      lbz       r7, 0x1(r4)
      li        r11, -0x1
      stw       r0, 0x1C(r1)
      lbz       r10, 0x0(r3)
      stw       r9, 0x18(r1)
      lfs       f0, -0xE50(r2)
      lbz       r6, 0x2(r4)
      stw       r7, 0x34(r1)
      fsubs     f7, f0, f1
      lfd       f6, -0xE38(r2)
      stw       r9, 0x30(r1)
      lfd       f2, 0x18(r1)
      lfd       f0, 0x30(r1)
      fsubs     f2, f2, f6
      lbz       r8, 0x1(r3)
      fsubs     f0, f0, f6
      stw       r10, 0x14(r1)
      lbz       r0, 0x3(r4)
      stw       r9, 0x10(r1)
      fmuls     f2, f2, f1
      lbz       r4, 0x2(r3)
      lfd       f4, 0x10(r1)
      fmuls     f3, f0, f1
      stw       r6, 0x4C(r1)
      fsubs     f4, f4, f6
      stw       r9, 0x48(r1)
      lbz       r3, 0x3(r3)
      lfd       f0, 0x48(r1)
      fmadds    f2, f4, f7, f2
      stw       r8, 0x2C(r1)
      fsubs     f0, f0, f6
      fctiwz    f5, f2
      stw       r9, 0x28(r1)
      lfd       f4, 0x28(r1)
      fmuls     f2, f0, f1
      stw       r0, 0x64(r1)
      fsubs     f0, f4, f6
      stw       r9, 0x60(r1)
      fmadds    f0, f0, f7, f3
      stw       r4, 0x44(r1)
      stfd      f5, 0x20(r1)
      fctiwz    f3, f0
      lfd       f0, 0x60(r1)
      lwz       r6, 0x24(r1)
      fsubs     f0, f0, f6
      stw       r9, 0x40(r1)
      stfd      f3, 0x38(r1)
      fmuls     f0, f0, f1
      lfd       f1, 0x40(r1)
      stw       r11, 0x8(r1)
      fsubs     f3, f1, f6
      lwz       r0, 0x3C(r1)
      stb       r6, 0x0(r5)
      fmadds    f2, f3, f7, f2
      stw       r3, 0x5C(r1)
      stw       r9, 0x58(r1)
      fctiwz    f2, f2
      lfd       f1, 0x58(r1)
      stb       r0, 0x1(r5)
      fsubs     f1, f1, f6
      stfd      f2, 0x50(r1)
      lwz       r3, 0x54(r1)
      fmadds    f0, f1, f7, f0
      stb       r0, 0x9(r1)
      fctiwz    f0, f0
      stb       r3, 0x2(r5)
      stb       r6, 0x8(r1)
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      stb       r3, 0xA(r1)
      stb       r0, 0xB(r1)
      stb       r0, 0x3(r5)
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003D0
 */
void og::Screen::setPictureTreeColor((J2DPane*, JUtility::TColor&,
                                      JUtility::TColor&, float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030232C
 * Size:	000370
 */
void og::Screen::blendPictureTreeColor(
    (og::Screen::PictureTreeColorCaptureInfo*, JUtility::TColor&,
     JUtility::TColor&, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x140(r1)
      mflr      r0
      stw       r0, 0x144(r1)
      stfd      f31, 0x130(r1)
      psq_st    f31,0x138(r1),0,0
      stfd      f30, 0x120(r1)
      psq_st    f30,0x128(r1),0,0
      stfd      f29, 0x110(r1)
      psq_st    f29,0x118(r1),0,0
      stfd      f28, 0x100(r1)
      psq_st    f28,0x108(r1),0,0
      stmw      r24, 0xE0(r1)
      fmr       f28, f1
      lfs       f29, -0xE44(r2)
      lfs       f30, -0xE50(r2)
      mr        r25, r3
      lwz       r30, 0x4(r3)
      mr        r26, r4
      lfd       f31, -0xE38(r2)
      mr        r27, r5
      li        r29, 0
      lis       r31, 0x4330
      b         .loc_0x330

    .loc_0x5C:
      lwz       r28, 0x0(r30)
      cmplwi    r28, 0
      beq-      .loc_0x33C
      lwz       r3, 0x4(r30)
      fmr       f7, f28
      lwz       r0, 0x8(r30)
      fcmpo     cr0, f28, f29
      stw       r3, 0x1C(r1)
      stw       r0, 0x18(r1)
      bge-      .loc_0x88
      fmr       f7, f29

    .loc_0x88:
      fcmpo     cr0, f7, f30
      ble-      .loc_0x94
      fmr       f7, f30

    .loc_0x94:
      lbz       r8, 0x0(r26)
      li        r10, -0x1
      lbz       r6, 0x1(r26)
      fsubs     f0, f30, f7
      stw       r8, 0x2C(r1)
      fmr       f1, f28
      lbz       r4, 0x2(r26)
      fcmpo     cr0, f28, f29
      stw       r31, 0x28(r1)
      lbz       r0, 0x3(r26)
      lfd       f2, 0x28(r1)
      stw       r6, 0x44(r1)
      fsubs     f3, f2, f31
      lbz       r9, 0x1C(r1)
      stw       r31, 0x40(r1)
      lbz       r7, 0x1D(r1)
      lfd       f2, 0x40(r1)
      fmuls     f6, f3, f7
      stw       r4, 0x5C(r1)
      fsubs     f3, f2, f31
      lbz       r5, 0x1E(r1)
      stw       r31, 0x58(r1)
      lbz       r3, 0x1F(r1)
      lfd       f2, 0x58(r1)
      fmuls     f5, f3, f7
      stw       r0, 0x74(r1)
      fsubs     f3, f2, f31
      stw       r31, 0x70(r1)
      lfd       f2, 0x70(r1)
      fmuls     f3, f3, f7
      stw       r9, 0x24(r1)
      fsubs     f2, f2, f31
      stw       r31, 0x20(r1)
      lfd       f4, 0x20(r1)
      fmuls     f2, f2, f7
      stw       r7, 0x3C(r1)
      fsubs     f7, f4, f31
      stw       r31, 0x38(r1)
      fmadds    f7, f7, f0, f6
      lfd       f4, 0x38(r1)
      stw       r5, 0x54(r1)
      fsubs     f6, f4, f31
      stw       r31, 0x50(r1)
      fctiwz    f7, f7
      lfd       f4, 0x50(r1)
      fmadds    f5, f6, f0, f5
      stfd      f7, 0x30(r1)
      fsubs     f4, f4, f31
      fctiwz    f5, f5
      lwz       r0, 0x34(r1)
      stw       r10, 0xC(r1)
      fmadds    f3, f4, f0, f3
      stfd      f5, 0x48(r1)
      lwz       r4, 0x4C(r1)
      fctiwz    f4, f3
      stw       r3, 0x6C(r1)
      stw       r31, 0x68(r1)
      lfd       f3, 0x68(r1)
      stfd      f4, 0x60(r1)
      fsubs     f3, f3, f31
      lwz       r3, 0x64(r1)
      stb       r0, 0xC(r1)
      fmadds    f0, f3, f0, f2
      stb       r0, 0x1C(r1)
      fctiwz    f0, f0
      stb       r4, 0xD(r1)
      stb       r3, 0xE(r1)
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      stb       r4, 0x1D(r1)
      stb       r0, 0xF(r1)
      stb       r3, 0x1E(r1)
      stb       r0, 0x1F(r1)
      bge-      .loc_0x1C0
      fmr       f1, f29

    .loc_0x1C0:
      fcmpo     cr0, f1, f30
      ble-      .loc_0x1CC
      fmr       f1, f30

    .loc_0x1CC:
      lbz       r0, 0x0(r27)
      li        r24, -0x1
      lbz       r9, 0x1(r27)
      fsubs     f0, f30, f1
      stw       r0, 0x8C(r1)
      mr        r3, r28
      lbz       r7, 0x2(r27)
      addi      r4, r1, 0x14
      stw       r31, 0x88(r1)
      lbz       r5, 0x3(r27)
      lfd       f2, 0x88(r1)
      stw       r9, 0xA4(r1)
      fsubs     f3, f2, f31
      lbz       r11, 0x18(r1)
      stw       r31, 0xA0(r1)
      lbz       r10, 0x19(r1)
      lfd       f2, 0xA0(r1)
      fmuls     f5, f3, f1
      stw       r7, 0xBC(r1)
      fsubs     f2, f2, f31
      lbz       r8, 0x1A(r1)
      stw       r31, 0xB8(r1)
      lbz       r6, 0x1B(r1)
      fmuls     f4, f2, f1
      lfd       f2, 0xB8(r1)
      stw       r5, 0xD4(r1)
      fsubs     f3, f2, f31
      lwz       r0, 0x1C(r1)
      stw       r31, 0xD0(r1)
      lfd       f2, 0xD0(r1)
      fmuls     f3, f3, f1
      stw       r11, 0x84(r1)
      fsubs     f2, f2, f31
      stw       r31, 0x80(r1)
      lfd       f6, 0x80(r1)
      fmuls     f1, f2, f1
      stw       r10, 0x9C(r1)
      fsubs     f6, f6, f31
      stw       r31, 0x98(r1)
      fmadds    f6, f6, f0, f5
      lfd       f2, 0x98(r1)
      stw       r8, 0xB4(r1)
      fsubs     f5, f2, f31
      stw       r31, 0xB0(r1)
      fctiwz    f6, f6
      lfd       f2, 0xB0(r1)
      fmadds    f4, f5, f0, f4
      stw       r0, 0x14(r1)
      fsubs     f2, f2, f31
      fctiwz    f4, f4
      stfd      f6, 0x90(r1)
      lwz       r12, 0x0(r28)
      fmadds    f2, f2, f0, f3
      lwz       r0, 0x94(r1)
      stw       r24, 0x8(r1)
      lwz       r12, 0x12C(r12)
      fctiwz    f3, f2
      stfd      f4, 0xA8(r1)
      lwz       r7, 0xAC(r1)
      stfd      f3, 0xC0(r1)
      lwz       r5, 0xC4(r1)
      stw       r6, 0xCC(r1)
      stw       r31, 0xC8(r1)
      lfd       f2, 0xC8(r1)
      stb       r0, 0x8(r1)
      fsubs     f2, f2, f31
      stb       r0, 0x18(r1)
      fmadds    f0, f2, f0, f1
      stb       r7, 0x9(r1)
      stb       r5, 0xA(r1)
      fctiwz    f0, f0
      stb       r7, 0x19(r1)
      stfd      f0, 0xD8(r1)
      lwz       r0, 0xDC(r1)
      stb       r5, 0x1A(r1)
      stb       r0, 0xB(r1)
      stb       r0, 0x1B(r1)
      mtctr     r12
      bctrl
      lwz       r0, 0x18(r1)
      mr        r3, r28
      addi      r4, r1, 0x10
      stw       r0, 0x10(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x128(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0xC
      addi      r29, r29, 0x1

    .loc_0x330:
      lwz       r0, 0x0(r25)
      cmpw      r29, r0
      blt+      .loc_0x5C

    .loc_0x33C:
      psq_l     f31,0x138(r1),0,0
      lfd       f31, 0x130(r1)
      psq_l     f30,0x128(r1),0,0
      lfd       f30, 0x120(r1)
      psq_l     f29,0x118(r1),0,0
      lfd       f29, 0x110(r1)
      psq_l     f28,0x108(r1),0,0
      lfd       f28, 0x100(r1)
      lmw       r24, 0xE0(r1)
      lwz       r0, 0x144(r1)
      mtlr      r0
      addi      r1, r1, 0x140
      blr
    */
}

/*
 * --INFO--
 * Address:	8030269C
 * Size:	0000C8
 */
void og::Screen::calcSmooth0to1((float, float))
{
    /*
    .loc_0x0:
      fdivs     f1, f1, f2
      lfs       f0, -0xE44(r2)
      stwu      r1, -0x20(r1)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x18
      fmr       f1, f0

    .loc_0x18:
      lfs       f0, -0xE50(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x28
      fmr       f1, f0

    .loc_0x28:
      lfs       f0, -0xE30(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x38
      b         .loc_0xC0

    .loc_0x38:
      lfd       f4, -0xE28(r2)
      fsubs     f1, f1, f0
      lfs       f2, -0xE20(r2)
      fsub      f3, f4, f0
      lfs       f0, -0xE44(r2)
      fmuls     f1, f2, f1
      lfs       f2, -0xE1C(r2)
      fdiv      f3, f4, f3
      fmul      f1, f3, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x94
      lfs       f0, -0xE4C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0xB8

    .loc_0x94:
      lfs       f0, -0xE48(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0xB8:
      lfs       f0, -0xE30(r2)
      fmadds    f1, f2, f1, f0

    .loc_0xC0:
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80302764
 * Size:	0000B0
 */
void calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      stw       r30, 0x38(r1)
      mr        r30, r3
      addi      r3, r1, 0x14
      mr        r4, r30
      bl        -0x2C97F4
      lwz       r5, 0x14(r1)
      mr        r4, r30
      lwz       r6, 0x18(r1)
      addi      r3, r1, 0x8
      lwz       r0, 0x1C(r1)
      stw       r5, 0x2C(r1)
      li        r5, 0x3
      stw       r6, 0x30(r1)
      stw       r0, 0x34(r1)
      bl        -0x2C981C
      lwz       r0, 0x8(r1)
      lwz       r3, 0xC(r1)
      stw       r0, 0x20(r1)
      lwz       r0, 0x10(r1)
      stw       r3, 0x24(r1)
      lfs       f3, 0x2C(r1)
      lfs       f2, 0x20(r1)
      lfs       f1, 0x30(r1)
      lfs       f0, 0x24(r1)
      fadds     f3, f3, f2
      lfs       f2, -0xE40(r2)
      fadds     f0, f1, f0
      stw       r0, 0x28(r1)
      fmuls     f1, f3, f2
      fmuls     f0, f0, f2
      stfs      f1, 0x0(r31)
      stfs      f0, 0x4(r31)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void og::Screen::kakomiPane((J2DPane*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000224
 */
void og::Screen::centeringPane((J2DPane*, bool, bool))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80302814
 * Size:	00010C
 */
void og::Screen::maskTag2((unsigned long long, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      rlwinm    r0,r5,0,16,31
      cmplwi    r0, 0x63
      stw       r31, 0x4C(r1)
      mr        r31, r3
      stw       r30, 0x48(r1)
      mr        r30, r5
      stw       r29, 0x44(r1)
      mr        r29, r4
      ble-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2334
      li        r4, 0x1C2
      subi      r5, r5, 0x2308
      crclr     6, 0x6
      bl        -0x2D821C

    .loc_0x4C:
      lis       r4, 0x6666
      lis       r0, 0xFFFF
      rlwinm    r11,r30,0,16,31
      li        r3, -0x1
      addi      r10, r4, 0x6667
      and       r0, r29, r0
      mulhw     r4, r10, r11
      and       r3, r31, r3
      addi      r5, r1, 0x8
      mr        r31, r3
      srawi     r8, r4, 0x2
      srawi     r4, r4, 0x2
      rlwinm    r6,r4,1,31,31
      rlwinm    r9,r8,1,31,31
      add       r7, r4, r6
      mulhw     r4, r10, r7
      add       r8, r8, r9
      srawi     r4, r4, 0x2
      rlwinm    r6,r4,1,31,31
      add       r4, r4, r6
      mulli     r4, r4, 0xA
      mulli     r6, r8, 0xA
      sub       r4, r7, r4
      sub       r6, r11, r6
      rlwinm    r4,r4,8,0,23
      add       r4, r6, r4
      addi      r4, r4, 0x3030
      or        r30, r4, r0
      mr        r4, r30
      bl        0x2F8
      lis       r3, 0x1
      addi      r5, r1, 0x28
      subi      r4, r3, 0x1
      li        r3, 0
      bl        0x530
      addi      r5, r1, 0x14
      lis       r4, 0xFFFF
      li        r3, -0x1
      bl        0x520
      lwz       r0, 0x54(r1)
      mr        r3, r31
      mr        r4, r30
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80302920
 * Size:	0000A0
 */
void og::Screen::maskTag((unsigned long long, unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      rlwinm    r5,r5,0,16,31
      stw       r0, 0x24(r1)
      cmplwi    r5, 0x8
      stmw      r27, 0xC(r1)
      mr        r28, r3
      mr        r27, r4
      mr        r29, r6
      blt-      .loc_0x34
      li        r4, 0
      li        r3, 0
      b         .loc_0x8C

    .loc_0x34:
      subi      r0, r5, 0x1
      li        r3, 0
      rlwinm    r31,r0,3,16,28
      li        r4, 0xFF
      mr        r5, r31
      bl        -0x24087C
      rlwinm    r5,r29,0,16,31
      not       r29, r4
      cmplwi    r5, 0x9
      not       r30, r3
      bgt-      .loc_0x6C
      addi      r4, r5, 0x30
      srawi     r3, r4, 0x1F
      b         .loc_0x74

    .loc_0x6C:
      addi      r4, r5, 0x37
      srawi     r3, r4, 0x1F

    .loc_0x74:
      mr        r5, r31
      bl        -0x2408AC
      and       r5, r27, r29
      and       r0, r28, r30
      or        r4, r4, r5
      or        r3, r3, r0

    .loc_0x8C:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803029C0
 * Size:	0000B4
 */
void og::Screen::CalcKeta((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x38(r1)
      lfd       f31, -0xE38(r2)
      stfd      f30, 0x30(r1)
      lfd       f30, -0xE10(r2)
      stw       r31, 0x2C(r1)
      lis       r31, 0x4330
      stw       r30, 0x28(r1)
      li        r30, 0x1
      stw       r29, 0x24(r1)
      li        r29, 0x1
      stw       r28, 0x20(r1)
      mr        r28, r3

    .loc_0x3C:
      xoris     r0, r29, 0x8000
      stw       r31, 0x8(r1)
      lfd       f1, -0xE18(r2)
      stw       r0, 0xC(r1)
      lfd       f0, 0x8(r1)
      fsub      f2, f0, f30
      bl        -0x233008
      stw       r28, 0x14(r1)
      stw       r31, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsub      f0, f0, f31
      fcmpo     cr0, f0, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x88
      addi      r0, r29, 0x1
      addi      r29, r29, 0x1
      cmpwi     r29, 0xA
      rlwinm    r30,r0,0,16,31
      blt+      .loc_0x3C

    .loc_0x88:
      lwz       r0, 0x44(r1)
      mr        r3, r30
      lfd       f31, 0x38(r1)
      lfd       f30, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80302A74
 * Size:	000158
 */
void og::Screen::MojiToNum((unsigned long long, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x68(r1)
      stfd      f30, 0x60(r1)
      stmw      r22, 0x38(r1)
      mr        r26, r5
      lis       r5, 0x8049
      mr        r25, r3
      cmpwi     r26, 0x1
      mr        r24, r4
      subi      r31, r5, 0x2340
      blt-      .loc_0x3C
      cmpwi     r26, 0x8
      ble-      .loc_0x64

    .loc_0x3C:
      mr        r4, r24
      mr        r3, r25
      addi      r5, r1, 0x14
      bl        .loc_0x158
      addi      r3, r31, 0xC
      addi      r5, r31, 0x134
      addi      r6, r1, 0x14
      li        r4, 0x237
      crclr     6, 0x6
      bl        -0x2D8494

    .loc_0x64:
      lfd       f30, -0xE10(r2)
      li        r28, 0
      li        r29, 0
      li        r27, 0
      li        r30, 0
      lis       r23, 0x4330
      b         .loc_0x12C

    .loc_0x80:
      mr        r3, r25
      mr        r4, r24
      mr        r5, r30
      bl        -0x2409F0
      li        r0, 0xFF
      and       r4, r4, r0
      li        r0, -0x30
      addc.     r22, r4, r0
      blt-      .loc_0xAC
      cmpwi     r22, 0x9
      ble-      .loc_0xD4

    .loc_0xAC:
      mr        r4, r24
      mr        r3, r25
      addi      r5, r1, 0x8
      bl        .loc_0x158
      addi      r3, r31, 0xC
      addi      r5, r31, 0x150
      addi      r6, r1, 0x8
      li        r4, 0x240
      crclr     6, 0x6
      bl        -0x2D8504

    .loc_0xD4:
      xoris     r0, r27, 0x8000
      stw       r23, 0x20(r1)
      lfd       f1, -0xE18(r2)
      stw       r0, 0x24(r1)
      lfd       f0, 0x20(r1)
      fsub      f2, f0, f30
      bl        -0x233154
      fmr       f31, f1
      mr        r3, r29
      mr        r4, r28
      bl        -0x240A14
      xoris     r0, r22, 0x8000
      stw       r23, 0x28(r1)
      stw       r0, 0x2C(r1)
      lfd       f0, 0x28(r1)
      fsub      f0, f0, f30
      fmadd     f1, f0, f31, f1
      bl        -0x240994
      mr        r28, r4
      mr        r29, r3
      addi      r27, r27, 0x1
      addi      r30, r30, 0x8

    .loc_0x12C:
      cmpw      r27, r26
      blt+      .loc_0x80
      lfd       f31, 0x68(r1)
      mr        r4, r28
      mr        r3, r29
      lfd       f30, 0x60(r1)
      lmw       r22, 0x38(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr

    .loc_0x158:
    */
}

/*
 * --INFO--
 * Address:	80302BCC
 * Size:	000158
 */
void og::Screen::TagToName((unsigned long long, char*))
{
    /*
    .loc_0x0:
      li        r8, 0xFF
      rlwinm    r0,r3,8,24,31
      and       r6, r0, r8
      li        r9, 0
      rlwinm    r0,r3,16,16,31
      stb       r6, 0x0(r5)
      and       r6, r0, r8
      rlwinm    r0,r3,24,8,31
      stb       r6, 0x1(r5)
      and       r7, r0, r8
      rlwinm    r6,r4,16,0,31
      stb       r7, 0x2(r5)
      and       r7, r3, r8
      rlwinm    r0,r4,8,0,31
      rlwimi    r6,r3,16,0,15
      rlwimi    r0,r3,8,0,23
      stb       r7, 0x3(r5)
      and       r7, r0, r8
      and       r6, r6, r8
      stb       r7, 0x4(r5)
      rlwinm    r0,r4,24,0,31
      rlwimi    r0,r3,24,0,7
      and       r3, r4, r8
      stb       r6, 0x5(r5)
      and       r0, r0, r8
      stb       r0, 0x6(r5)
      li        r0, 0x3F
      stb       r3, 0x7(r5)
      stb       r9, 0x8(r5)
      lbz       r3, 0x0(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0x8C
      cmpwi     r3, 0x7E
      ble-      .loc_0x90

    .loc_0x8C:
      stb       r0, 0x0(r5)

    .loc_0x90:
      lbz       r3, 0x1(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0xA8
      cmpwi     r3, 0x7E
      ble-      .loc_0xAC

    .loc_0xA8:
      stb       r0, 0x1(r5)

    .loc_0xAC:
      lbz       r3, 0x2(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0xC4
      cmpwi     r3, 0x7E
      ble-      .loc_0xC8

    .loc_0xC4:
      stb       r0, 0x2(r5)

    .loc_0xC8:
      lbz       r3, 0x3(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0xE0
      cmpwi     r3, 0x7E
      ble-      .loc_0xE4

    .loc_0xE0:
      stb       r0, 0x3(r5)

    .loc_0xE4:
      lbz       r3, 0x4(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0xFC
      cmpwi     r3, 0x7E
      ble-      .loc_0x100

    .loc_0xFC:
      stb       r0, 0x4(r5)

    .loc_0x100:
      lbz       r3, 0x5(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0x118
      cmpwi     r3, 0x7E
      ble-      .loc_0x11C

    .loc_0x118:
      stb       r0, 0x5(r5)

    .loc_0x11C:
      lbz       r3, 0x6(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0x134
      cmpwi     r3, 0x7E
      ble-      .loc_0x138

    .loc_0x134:
      stb       r0, 0x6(r5)

    .loc_0x138:
      lbz       r3, 0x7(r5)
      extsb     r3, r3
      cmpwi     r3, 0x20
      blt-      .loc_0x150
      cmpwi     r3, 0x7E
      blelr-

    .loc_0x150:
      stb       r0, 0x7(r5)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void og::Screen::NameToTag((char*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80302D24
 * Size:	0000F4
 */
void og::Screen::CharCodeToTag((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x24(r1)
      subi      r4, r4, 0x21D8
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      lbz       r5, 0x0(r3)
      lbz       r6, 0x1(r3)
      addi      r3, r1, 0x8
      crclr     6, 0x6
      bl        -0x23B918
      lbz       r0, 0x8(r1)
      li        r9, 0
      lbz       r3, 0x9(r1)
      li        r10, 0xFF
      extsb     r6, r0
      lbz       r0, 0xA(r1)
      srawi     r5, r6, 0x1F
      extsb     r4, r3
      extsb     r3, r0
      and       r30, r6, r10
      and       r0, r5, r9
      srawi     r7, r4, 0x1F
      rlwinm    r8,r0,8,0,23
      lbz       r0, 0xB(r1)
      and       r31, r4, r10
      srawi     r6, r3, 0x1F
      extsb     r4, r0
      lbz       r0, 0xC(r1)
      srawi     r5, r4, 0x1F
      rlwimi    r8,r30,8,24,31
      and       r11, r4, r10
      and       r4, r7, r9
      or        r4, r8, r4
      and       r12, r3, r10
      rlwimi    r31,r30,8,16,23
      extsb     r3, r0
      rlwinm    r7,r4,8,0,23
      and       r6, r6, r9
      rlwimi    r12,r31,8,8,23
      srawi     r0, r3, 0x1F
      rlwimi    r7,r31,8,24,31
      and       r4, r3, r10
      and       r3, r5, r9
      rlwimi    r11,r12,8,0,23
      or        r5, r7, r6
      lwz       r31, 0x1C(r1)
      rlwinm    r5,r5,8,0,23
      and       r0, r0, r9
      rlwimi    r5,r12,8,24,31
      rlwimi    r4,r11,8,0,23
      or        r3, r5, r3
      lwz       r30, 0x18(r1)
      rlwinm    r3,r3,8,0,23
      rlwimi    r3,r11,8,24,31
      or        r3, r3, r0
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80302E18
 * Size:	000094
 */
void og::Screen::TagToHex((unsigned long long, char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r24, 0x10(r1)
      mr        r26, r5
      li        r28, 0
      mr        r25, r3
      mr        r24, r4
      mr        r31, r26
      mr        r30, r28
      li        r27, 0
      li        r29, 0xF

    .loc_0x30:
      subfic    r5, r28, 0x3C
      mr        r3, r25
      mr        r4, r24
      bl        -0x240D44
      and       r3, r4, r29
      rlwinm    r0,r3,0,16,31
      cmplwi    r0, 0x9
      addi      r0, r3, 0x57
      extsb     r0, r0
      bgt-      .loc_0x60
      addi      r0, r3, 0x30
      extsb     r0, r0

    .loc_0x60:
      addi      r27, r27, 0x1
      stb       r0, 0x0(r31)
      cmpwi     r27, 0x10
      addi      r28, r28, 0x4
      addi      r31, r31, 0x1
      blt+      .loc_0x30
      li        r0, 0
      stb       r0, 0x10(r26)
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80302EAC
 * Size:	00018C
 */
void og::Screen::TagSearch((J2DScreen*, unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x430(r1)
      mflr      r0
      stw       r0, 0x434(r1)
      stw       r31, 0x42C(r1)
      stw       r30, 0x428(r1)
      mr        r30, r6
      stw       r29, 0x424(r1)
      stw       r28, 0x420(r1)
      mr        r28, r5
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      bne-      .loc_0x168
      li        r12, 0xFF
      rlwinm    r7,r28,8,24,31
      rlwinm    r6,r28,16,16,31
      rlwinm    r5,r28,24,8,31
      rlwinm    r4,r30,8,0,31
      rlwinm    r3,r30,16,0,31
      rlwinm    r0,r30,24,0,31
      li        r29, 0
      and       r11, r7, r12
      rlwimi    r4,r28,8,0,23
      and       r7, r4, r12
      and       r10, r6, r12
      rlwimi    r3,r28,16,0,15
      and       r9, r5, r12
      and       r6, r3, r12
      rlwimi    r0,r28,24,0,7
      and       r5, r0, r12
      and       r8, r28, r12
      and       r4, r30, r12
      stb       r9, 0xA(r1)
      li        r0, 0x2
      addi      r9, r1, 0x8
      stb       r11, 0x8(r1)
      li        r3, 0x3F
      stb       r10, 0x9(r1)
      stb       r8, 0xB(r1)
      stb       r7, 0xC(r1)
      stb       r6, 0xD(r1)
      stb       r5, 0xE(r1)
      stb       r4, 0xF(r1)
      stb       r29, 0x10(r1)
      mtctr     r0

    .loc_0xBC:
      lbz       r0, 0x0(r9)
      extsb     r0, r0
      cmpwi     r0, 0x20
      blt-      .loc_0xD4
      cmpwi     r0, 0x7E
      ble-      .loc_0xD8

    .loc_0xD4:
      stb       r3, 0x0(r9)

    .loc_0xD8:
      lbz       r0, 0x1(r9)
      extsb     r0, r0
      cmpwi     r0, 0x20
      blt-      .loc_0xF0
      cmpwi     r0, 0x7E
      ble-      .loc_0xF4

    .loc_0xF0:
      stb       r3, 0x1(r9)

    .loc_0xF4:
      lbz       r0, 0x2(r9)
      extsb     r0, r0
      cmpwi     r0, 0x20
      blt-      .loc_0x10C
      cmpwi     r0, 0x7E
      ble-      .loc_0x110

    .loc_0x10C:
      stb       r3, 0x2(r9)

    .loc_0x110:
      lbz       r0, 0x3(r9)
      extsb     r0, r0
      cmpwi     r0, 0x20
      blt-      .loc_0x128
      cmpwi     r0, 0x7E
      ble-      .loc_0x12C

    .loc_0x128:
      stb       r3, 0x3(r9)

    .loc_0x12C:
      addi      r9, r9, 0x4
      addi      r29, r29, 0x3
      bdnz+     .loc_0xBC
      lis       r4, 0x8049
      addi      r3, r1, 0x14
      subi      r4, r4, 0x21CC
      addi      r5, r1, 0x8
      crclr     6, 0x6
      bl        -0x23BBC0
      lis       r3, 0x8049
      addi      r5, r1, 0x14
      subi      r3, r3, 0x2334
      li        r4, 0x2B0
      crclr     6, 0x6
      bl        -0x2D89D0

    .loc_0x168:
      lwz       r0, 0x434(r1)
      mr        r3, r31
      lwz       r31, 0x42C(r1)
      lwz       r30, 0x428(r1)
      lwz       r29, 0x424(r1)
      lwz       r28, 0x420(r1)
      mtlr      r0
      addi      r1, r1, 0x430
      blr
    */
}

/*
 * --INFO--
 * Address:	80303038
 * Size:	000028
 */
void og::Screen::AlphaMgr::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f1, -0xE44(r2)
      stw       r0, 0x0(r3)
      lfs       f0, -0xE50(r2)
      stfs      f1, 0x4(r3)
      stfs      f1, 0x8(r3)
      stfs      f0, 0xC(r3)
      stfs      f1, 0x10(r3)
      stfs      f0, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80303060
 * Size:	00000C
 */
void og::Screen::AlphaMgr::setBlinkArea((float, float))
{
    /*
    .loc_0x0:
      stfs      f1, 0x10(r3)
      stfs      f2, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8030306C
 * Size:	000064
 */
void og::Screen::AlphaMgr::in((float))
{
    /*
    .loc_0x0:
      lfs       f3, -0xE50(r2)
      lfs       f0, 0x4(r3)
      fcmpu     cr0, f3, f0
      bne-      .loc_0x1C
      li        r0, 0
      stw       r0, 0x0(r3)
      blr

    .loc_0x1C:
      lfs       f0, -0xE44(r2)
      fcmpu     cr0, f0, f1
      bne-      .loc_0x38
      li        r0, 0
      stw       r0, 0x0(r3)
      stfs      f3, 0x4(r3)
      blr

    .loc_0x38:
      stfs      f0, 0x4(r3)
      li        r0, 0x1
      stw       r0, 0x0(r3)
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x4(r3)
      lfs       f0, 0x54(r4)
      fsubs     f2, f3, f2
      fdivs     f0, f1, f0
      fdivs     f0, f2, f0
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803030D0
 * Size:	000064
 */
void og::Screen::AlphaMgr::out((float))
{
    /*
    .loc_0x0:
      lfs       f0, -0xE50(r2)
      lfs       f2, -0xE44(r2)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x4(r3)
      fcmpu     cr0, f2, f0
      bne-      .loc_0x24
      li        r0, 0
      stw       r0, 0x0(r3)
      blr

    .loc_0x24:
      fcmpu     cr0, f2, f1
      bne-      .loc_0x3C
      li        r0, 0
      stw       r0, 0x0(r3)
      stfs      f2, 0x4(r3)
      blr

    .loc_0x3C:
      li        r0, 0x2
      stw       r0, 0x0(r3)
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x4(r3)
      lfs       f0, 0x54(r4)
      fneg      f2, f2
      fdivs     f0, f1, f0
      fdivs     f0, f2, f0
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80303134
 * Size:	000050
 */
void og::Screen::AlphaMgr::blink((float))
{
    /*
    .loc_0x0:
      lwz       r0, 0x0(r3)
      cmpwi     r0, 0
      beq-      .loc_0x14
      cmpwi     r0, 0x3
      bnelr-

    .loc_0x14:
      li        r0, 0x3
      lfs       f0, -0xE44(r2)
      stw       r0, 0x0(r3)
      lfs       f2, 0x8(r3)
      lwz       r4, -0x6514(r13)
      fcmpo     cr0, f2, f0
      lfs       f0, 0x54(r4)
      ble-      .loc_0x40
      fdivs     f0, f0, f1
      stfs      f0, 0x8(r3)
      blr

    .loc_0x40:
      fdivs     f0, f0, f1
      fneg      f0, f0
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80303184
 * Size:	000190
 */
void og::Screen::AlphaMgr::calc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      lwz       r0, 0x0(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xE4
      bge-      .loc_0x24
      cmpwi     r0, 0
      beq-      .loc_0x170
      bge-      .loc_0x34
      b         .loc_0x170

    .loc_0x24:
      cmpwi     r0, 0x4
      beq-      .loc_0x68
      bge-      .loc_0x170
      b         .loc_0x118

    .loc_0x34:
      lfs       f2, 0x4(r3)
      lfs       f1, 0x8(r3)
      lfs       f0, -0xE50(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x4(r3)
      lfs       f1, 0x4(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x170
      stfs      f0, 0x4(r3)
      li        r0, 0
      stw       r0, 0x0(r3)
      b         .loc_0x170

    .loc_0x68:
      lfs       f2, 0x4(r3)
      lfs       f1, 0x8(r3)
      lfs       f0, -0xE50(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x4(r3)
      lfs       f1, 0x4(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x170
      stfs      f0, 0x4(r3)
      lwz       r0, 0x0(r3)
      lfs       f2, 0xC(r3)
      cmpwi     r0, 0
      beq-      .loc_0xA8
      cmpwi     r0, 0x3
      bne-      .loc_0x170

    .loc_0xA8:
      li        r0, 0x3
      lfs       f0, -0xE44(r2)
      stw       r0, 0x0(r3)
      lfs       f1, 0x8(r3)
      lwz       r4, -0x6514(r13)
      fcmpo     cr0, f1, f0
      lfs       f0, 0x54(r4)
      ble-      .loc_0xD4
      fdivs     f0, f0, f2
      stfs      f0, 0x8(r3)
      b         .loc_0x170

    .loc_0xD4:
      fdivs     f0, f0, f2
      fneg      f0, f0
      stfs      f0, 0x8(r3)
      b         .loc_0x170

    .loc_0xE4:
      lfs       f2, 0x4(r3)
      lfs       f1, 0x8(r3)
      lfs       f0, -0xE44(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x4(r3)
      lfs       f1, 0x4(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x170
      stfs      f0, 0x4(r3)
      li        r0, 0
      stw       r0, 0x0(r3)
      b         .loc_0x170

    .loc_0x118:
      lfs       f1, 0x4(r3)
      lfs       f0, 0x8(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x4(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x14(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x150
      stfs      f0, 0x4(r3)
      lfs       f0, 0x8(r3)
      fneg      f0, f0
      stfs      f0, 0x8(r3)
      b         .loc_0x170

    .loc_0x150:
      lfs       f0, 0x10(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x170
      stfs      f0, 0x4(r3)
      lfs       f0, 0x8(r3)
      fneg      f0, f0
      stfs      f0, 0x8(r3)

    .loc_0x170:
      lfs       f1, -0xE08(r2)
      lfs       f0, 0x4(r3)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r3, 0xC(r1)
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80303314
 * Size:	0001D4
 */
void og::Screen::setAlphaScreen((J2DPane*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r4, 0x1
      li        r5, 0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r25, r3
      bl        -0x2CA584
      lwz       r31, 0xDC(r25)
      cmplwi    r31, 0
      beq-      .loc_0x1B8
      subi      r31, r31, 0xC
      b         .loc_0x1B8

    .loc_0x34:
      lwz       r28, 0xC(r31)
      li        r4, 0x1
      li        r5, 0
      mr        r3, r28
      bl        -0x2CA5AC
      lwz       r30, 0xDC(r28)
      cmplwi    r30, 0
      beq-      .loc_0x1A0
      subi      r30, r30, 0xC
      b         .loc_0x1A0

    .loc_0x5C:
      lwz       r28, 0xC(r30)
      li        r4, 0x1
      li        r5, 0
      mr        r3, r28
      bl        -0x2CA5D4
      lwz       r29, 0xDC(r28)
      cmplwi    r29, 0
      beq-      .loc_0x188
      subi      r29, r29, 0xC
      b         .loc_0x188

    .loc_0x84:
      lwz       r28, 0xC(r29)
      li        r4, 0x1
      li        r5, 0
      mr        r3, r28
      bl        -0x2CA5FC
      addi      r3, r28, 0xDC
      bl        -0x2DF790
      cmplwi    r3, 0
      beq-      .loc_0xAC
      subi      r3, r3, 0xC

    .loc_0xAC:
      mr        r26, r3
      b         .loc_0x170

    .loc_0xB4:
      lwz       r28, 0xC(r26)
      li        r4, 0x1
      li        r5, 0
      mr        r3, r28
      bl        -0x2CA62C
      addi      r27, r28, 0xDC
      mr        r3, r27
      bl        -0x2CAABC
      mr        r25, r3
      b         .loc_0x150

    .loc_0xDC:
      mr        r3, r25
      bl        -0x2CAAB8
      li        r4, 0x1
      mr        r28, r3
      li        r5, 0
      bl        -0x2CA658
      mr        r3, r28
      bl        0xE8
      mr        r28, r3
      bl        -0x2CAAEC
      mr        r4, r3
      addi      r3, r1, 0x8
      bl        -0x2CAB0C
      b         .loc_0x128

    .loc_0x114:
      addi      r3, r1, 0x8
      bl        .loc_0x1D4
      bl        .loc_0x0
      addi      r3, r1, 0x8
      bl        -0x2CAB40

    .loc_0x128:
      mr        r3, r28
      bl        -0x2CAB50
      mr        r4, r3
      addi      r3, r1, 0x8
      bl        -0x2CAB74
      rlwinm.   r0,r3,0,24,31
      bne+      .loc_0x114
      mr        r3, r25
      bl        -0x2CAB98
      mr        r25, r3

    .loc_0x150:
      mr        r3, r27
      bl        -0x2CAB78
      cmplw     r25, r3
      bne+      .loc_0xDC
      lwz       r26, 0x18(r26)
      cmplwi    r26, 0
      beq-      .loc_0x170
      subi      r26, r26, 0xC

    .loc_0x170:
      cmplwi    r26, 0
      bne+      .loc_0xB4
      lwz       r29, 0x18(r29)
      cmplwi    r29, 0
      beq-      .loc_0x188
      subi      r29, r29, 0xC

    .loc_0x188:
      cmplwi    r29, 0
      bne+      .loc_0x84
      lwz       r30, 0x18(r30)
      cmplwi    r30, 0
      beq-      .loc_0x1A0
      subi      r30, r30, 0xC

    .loc_0x1A0:
      cmplwi    r30, 0
      bne+      .loc_0x5C
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x1B8
      subi      r31, r31, 0xC

    .loc_0x1B8:
      cmplwi    r31, 0
      bne+      .loc_0x34
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x1D4:
    */
}

/*
 * --INFO--
 * Address:	803034E8
 * Size:	00000C
 */
void JSUTreeIterator<J2DPane>::getObject() const
{
    /*
    .loc_0x0:
      lwz       r3, 0x0(r3)
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803034F4
 * Size:	000008
 */
void J2DPane::getPaneTree()
{
    /*
    .loc_0x0:
      addi      r3, r3, 0xDC
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000364
 */
void printPaneTree__Q22og6ScreenFP7J2DPane25JSUTreeIterator<J2DPane>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void J2DPane::getTranslateY() const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void J2DPane::getTranslateX() const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803034FC
 * Size:	000010
 */
void J2DPane::getTagName() const
{
    /*
    .loc_0x0:
      mr        r4, r3
      lwz       r3, 0x10(r3)
      lwz       r4, 0x14(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void og::Screen::AnimeScreen::__ct((JKRArchive*, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030350C
 * Size:	000094
 */
void P2DScreen::Mgr_tuning::__dt(void)
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
      beq-      .loc_0x78
      lis       r3, 0x804F
      subi      r0, r3, 0x3B00
      stw       r0, 0x0(r30)
      beq-      .loc_0x68
      lis       r3, 0x804F
      addic.    r0, r30, 0x118
      subi      r0, r3, 0x3A60
      stw       r0, 0x0(r30)
      beq-      .loc_0x5C
      lis       r4, 0x804D
      addi      r3, r30, 0x118
      addi      r0, r4, 0x7B0C
      li        r4, 0
      stw       r0, 0x118(r30)
      bl        0x10E024

    .loc_0x5C:
      mr        r3, r30
      li        r4, 0
      bl        -0x2C4054

    .loc_0x68:
      extsh.    r0, r31
      ble-      .loc_0x78
      mr        r3, r30
      bl        -0x2DF4CC

    .loc_0x78:
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
 * Address:	........
 * Size:	0000C8
 */
void og::Screen::AnimeScreen::addAnim((unsigned long long, char*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void og::Screen::setP2DScreen((char*, unsigned long, JKRArchive*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void og::Screen::dumpInfoResTIMG((ResTIMG const*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
void og::Screen::drawPaneFrame((J2DGrafContext&, J2DPane*, JUtility::TColor&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803035A0
 * Size:	000004
 */
void P2DScreen::Node::update(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803035A4
 * Size:	000004
 */
void P2DScreen::Node::draw((Graphics&, J2DGrafContext&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803035A8
 * Size:	000004
 */
void P2DScreen::Node::doInit(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803035AC
 * Size:	000060
 */
void P2DScreen::Node::__dt(void)
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
      beq-      .loc_0x44
      lis       r5, 0x804D
      li        r4, 0
      addi      r0, r5, 0x7B0C
      stw       r0, 0x0(r30)
      bl        0x10DFAC
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x2DF538

    .loc_0x44:
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
 * Address:	........
 * Size:	0000A4
 */
void og::Screen::AnimeScreen::__dt(void)
{
    // UNUSED FUNCTION
}
