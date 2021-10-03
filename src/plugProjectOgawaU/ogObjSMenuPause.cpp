

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
 * Address:	80314238
 * Size:	0001F4
 */
void og::newScreen::ObjSMenuPause::ObjHIOVal::getMenuColor(
    (JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*,
     JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*,
     JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*,
     JUtility::TColor*, JUtility::TColor*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lis       r11, 0x8051
      addi      r11, r11, 0x3CB0
      stmw      r27, 0xC(r1)
      lwz       r27, 0x28(r1)
      lwz       r28, 0x2C(r1)
      lwz       r29, 0x30(r1)
      lwz       r30, 0x34(r1)
      lwz       r31, 0x38(r1)
      lwz       r12, 0x3C(r1)
      lbz       r0, 0x10(r11)
      stb       r0, 0x0(r3)
      lbz       r0, 0x11(r11)
      stb       r0, 0x1(r3)
      lbz       r0, 0x12(r11)
      stb       r0, 0x2(r3)
      lbz       r0, 0x13(r11)
      stb       r0, 0x3(r3)
      lbz       r0, 0x14(r11)
      stb       r0, 0x0(r4)
      lbz       r0, 0x15(r11)
      stb       r0, 0x1(r4)
      lbz       r0, 0x16(r11)
      stb       r0, 0x2(r4)
      lbz       r0, 0x17(r11)
      stb       r0, 0x3(r4)
      lbz       r0, 0x4(r11)
      stb       r0, 0x0(r5)
      lbz       r0, 0x5(r11)
      stb       r0, 0x1(r5)
      lbz       r0, 0x6(r11)
      stb       r0, 0x2(r5)
      lbz       r0, 0x7(r11)
      stb       r0, 0x3(r5)
      lbz       r0, 0x8(r11)
      stb       r0, 0x0(r6)
      lbz       r0, 0x9(r11)
      stb       r0, 0x1(r6)
      lbz       r0, 0xA(r11)
      stb       r0, 0x2(r6)
      lbz       r0, 0xB(r11)
      stb       r0, 0x3(r6)
      lbz       r0, 0xC(r11)
      stb       r0, 0x0(r7)
      lbz       r0, 0xD(r11)
      stb       r0, 0x1(r7)
      lbz       r0, 0xE(r11)
      stb       r0, 0x2(r7)
      lbz       r0, 0xF(r11)
      stb       r0, 0x3(r7)
      lbz       r0, 0x18(r11)
      stb       r0, 0x0(r8)
      lbz       r0, 0x19(r11)
      stb       r0, 0x1(r8)
      lbz       r0, 0x1A(r11)
      stb       r0, 0x2(r8)
      lbz       r0, 0x1B(r11)
      stb       r0, 0x3(r8)
      lbz       r0, 0x1C(r11)
      stb       r0, 0x0(r9)
      lbz       r0, 0x1D(r11)
      stb       r0, 0x1(r9)
      lbz       r0, 0x1E(r11)
      stb       r0, 0x2(r9)
      lbz       r0, 0x1F(r11)
      stb       r0, 0x3(r9)
      lbz       r0, 0x20(r11)
      stb       r0, 0x0(r10)
      lbz       r0, 0x21(r11)
      stb       r0, 0x1(r10)
      lbz       r0, 0x22(r11)
      stb       r0, 0x2(r10)
      lbz       r0, 0x23(r11)
      stb       r0, 0x3(r10)
      lbz       r0, 0x24(r11)
      stb       r0, 0x0(r27)
      lbz       r0, 0x25(r11)
      stb       r0, 0x1(r27)
      lbz       r0, 0x26(r11)
      stb       r0, 0x2(r27)
      lbz       r0, 0x27(r11)
      stb       r0, 0x3(r27)
      lbz       r0, 0x28(r11)
      stb       r0, 0x0(r28)
      lbz       r0, 0x29(r11)
      stb       r0, 0x1(r28)
      lbz       r0, 0x2A(r11)
      stb       r0, 0x2(r28)
      lbz       r0, 0x2B(r11)
      stb       r0, 0x3(r28)
      lbz       r0, 0x2C(r11)
      stb       r0, 0x0(r29)
      lbz       r0, 0x2D(r11)
      stb       r0, 0x1(r29)
      lbz       r0, 0x2E(r11)
      stb       r0, 0x2(r29)
      lbz       r0, 0x2F(r11)
      stb       r0, 0x3(r29)
      lbz       r0, 0x30(r11)
      stb       r0, 0x0(r30)
      lbz       r0, 0x31(r11)
      stb       r0, 0x1(r30)
      lbz       r0, 0x32(r11)
      stb       r0, 0x2(r30)
      lbz       r0, 0x33(r11)
      stb       r0, 0x3(r30)
      lbz       r0, 0x34(r11)
      stb       r0, 0x0(r31)
      lbz       r0, 0x35(r11)
      stb       r0, 0x1(r31)
      lbz       r0, 0x36(r11)
      stb       r0, 0x2(r31)
      lbz       r0, 0x37(r11)
      stb       r0, 0x3(r31)
      lbz       r0, 0x38(r11)
      stb       r0, 0x0(r12)
      lbz       r0, 0x39(r11)
      stb       r0, 0x1(r12)
      lbz       r0, 0x3A(r11)
      stb       r0, 0x2(r12)
      lbz       r0, 0x3B(r11)
      stb       r0, 0x3(r12)
      lmw       r27, 0xC(r1)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8031442C
 * Size:	0000D0
 */
void og::newScreen::ObjSMenuPause::__ct((char const*))
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
      bl        0x1DC8
      lis       r3, 0x804E
      li        r4, 0
      subi      r3, r3, 0x76F8
      li        r0, 0x1
      stw       r3, 0x0(r30)
      addi      r5, r3, 0x10
      lfs       f0, -0xB08(r2)
      mr        r3, r30
      stw       r5, 0x18(r30)
      stw       r4, 0xA8(r30)
      stw       r31, 0x14(r30)
      stw       r4, 0xAC(r30)
      stw       r4, 0xB0(r30)
      stw       r4, 0xB4(r30)
      stw       r0, 0xB8(r30)
      sth       r4, 0xBC(r30)
      stw       r4, 0xC0(r30)
      stw       r4, 0xC4(r30)
      stw       r4, 0xC8(r30)
      stw       r4, 0xCC(r30)
      stw       r4, 0xD0(r30)
      stw       r4, 0xD4(r30)
      stw       r4, 0xD8(r30)
      stw       r4, 0xDC(r30)
      stw       r4, 0xE0(r30)
      stw       r4, 0xE4(r30)
      stw       r4, 0xE8(r30)
      stw       r4, 0xEC(r30)
      stw       r4, 0xF0(r30)
      stw       r4, 0xF4(r30)
      stw       r4, 0xF8(r30)
      stw       r4, 0xFC(r30)
      stb       r4, 0x100(r30)
      stfs      f0, 0x104(r30)
      stb       r4, 0x108(r30)
      stfs      f0, 0x10C(r30)
      stb       r4, 0x110(r30)
      stfs      f0, 0x114(r30)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803144FC
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuPause::__dt(void)
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
      beq-      .loc_0xA8
      lis       r4, 0x804E
      subi      r4, r4, 0x76F8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x98
      lis       r4, 0x804E
      subi      r4, r4, 0x7650
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x98
      lis       r4, 0x804F
      subi      r4, r4, 0x28A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x98
      lis       r4, 0x804E
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0xFD058
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x2F7550
      mr        r3, r30
      li        r4, 0
      bl        0xFCFF8

    .loc_0x98:
      extsh.    r0, r31
      ble-      .loc_0xA8
      mr        r3, r30
      bl        -0x2F04EC

    .loc_0xA8:
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
 * Address:	803145C0
 * Size:	00054C
 */
void og::newScreen::ObjSMenuPause::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      stw       r28, 0x20(r1)
      lis       r5, 0x8049
      mr        r29, r3
      mr        r30, r4
      subi      r31, r5, 0x1A58
      bl        0x13F9B4
      lis       r4, 0x4F
      lis       r6, 0x4155
      lis       r5, 0x534D
      mr        r28, r3
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x5345
      addi      r5, r5, 0x5F50
      bl        -0x5154
      stw       r3, 0xA8(r29)
      lwz       r0, 0xA8(r29)
      cmplwi    r0, 0
      bne-      .loc_0xA8
      li        r3, 0xC4
      bl        -0x2F0788
      mr.       r0, r3
      beq-      .loc_0x80
      bl        -0xFF340
      mr        r0, r3

    .loc_0x80:
      lis       r4, 0x4F
      lis       r6, 0x4155
      lis       r5, 0x534D
      mr        r28, r0
      mr        r3, r0
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x5345
      addi      r5, r5, 0x5F50
      bl        -0x51A0
      stw       r3, 0xA8(r29)

    .loc_0xA8:
      lbz       r0, 0xC0(r28)
      li        r3, 0x148
      stb       r0, 0x50(r29)
      bl        -0x2F07D0
      mr.       r0, r3
      beq-      .loc_0xC8
      bl        0x12072C
      mr        r0, r3

    .loc_0xC8:
      stw       r0, 0xC0(r29)
      mr        r6, r30
      addi      r4, r31, 0x14
      lis       r5, 0x104
      lwz       r3, 0xC0(r29)
      bl        -0x2D5078
      li        r3, 0x78
      bl        -0x2F0800
      mr.       r0, r3
      beq-      .loc_0xF8
      bl        -0xA888
      mr        r0, r3

    .loc_0xF8:
      stw       r0, 0xC4(r29)
      li        r3, 0x78
      bl        -0x2F081C
      mr.       r0, r3
      beq-      .loc_0x114
      bl        -0xA8A4
      mr        r0, r3

    .loc_0x114:
      stw       r0, 0xC8(r29)
      li        r3, 0x78
      bl        -0x2F0838
      mr.       r0, r3
      beq-      .loc_0x130
      bl        -0xA8C0
      mr        r0, r3

    .loc_0x130:
      stw       r0, 0xCC(r29)
      li        r0, 0x1
      lis       r3, 0x735F
      lis       r6, 0x696C
      stw       r0, 0xB8(r29)
      addi      r0, r3, 0x3030
      lis       r5, 0x6972
      lis       r4, 0x755F
      stw       r0, 0xC(r1)
      li        r11, 0
      lis       r3, 0x685F
      addi      r6, r6, 0x3030
      stw       r11, 0x8(r1)
      addi      r0, r5, 0x3030
      addi      r8, r4, 0x3030
      addi      r10, r3, 0x3030
      stw       r6, 0x14(r1)
      li        r5, 0x3
      li        r7, 0x6E
      li        r9, 0
      stw       r11, 0x10(r1)
      stw       r0, 0x1C(r1)
      stw       r11, 0x18(r1)
      lwz       r3, 0xC4(r29)
      lwz       r4, 0xC0(r29)
      bl        -0xA118
      li        r11, 0
      lis       r3, 0x735F
      stw       r11, 0xAC(r29)
      addi      r0, r3, 0x3034
      lis       r6, 0x696C
      lis       r5, 0x6972
      stw       r0, 0xC(r1)
      lis       r4, 0x755F
      lis       r3, 0x685F
      addi      r6, r6, 0x3034
      stw       r11, 0x8(r1)
      addi      r0, r5, 0x3034
      addi      r8, r4, 0x3034
      addi      r10, r3, 0x3034
      stw       r6, 0x14(r1)
      li        r5, 0x2
      li        r7, 0x6E
      li        r9, 0
      stw       r11, 0x10(r1)
      stw       r0, 0x1C(r1)
      stw       r11, 0x18(r1)
      lwz       r3, 0xC8(r29)
      lwz       r4, 0xC0(r29)
      bl        -0xA178
      li        r0, 0x1
      lis       r3, 0x735F
      stw       r0, 0xB0(r29)
      addi      r0, r3, 0x3037
      lis       r6, 0x696C
      lis       r5, 0x6972
      stw       r0, 0xC(r1)
      li        r11, 0
      lis       r4, 0x755F
      lis       r3, 0x685F
      stw       r11, 0x8(r1)
      addi      r6, r6, 0x3037
      addi      r0, r5, 0x3037
      addi      r8, r4, 0x3037
      stw       r6, 0x14(r1)
      addi      r10, r3, 0x3037
      li        r5, 0x2
      li        r7, 0x6E
      stw       r11, 0x10(r1)
      li        r9, 0
      stw       r0, 0x1C(r1)
      stw       r11, 0x18(r1)
      lwz       r3, 0xCC(r29)
      lwz       r4, 0xC0(r29)
      bl        -0xA1DC
      li        r0, 0x1
      lis       r4, 0x685F
      stw       r0, 0xB4(r29)
      mr        r3, r30
      addi      r6, r4, 0x3030
      li        r5, 0
      lwz       r4, 0xC0(r29)
      bl        -0xBF4C
      stw       r3, 0xD8(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3031
      bl        -0xBF68
      stw       r3, 0xDC(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3032
      bl        -0xBF84
      stw       r3, 0xE0(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3033
      bl        -0xBE64
      stw       r3, 0xE4(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3034
      bl        -0xBFBC
      stw       r3, 0xE8(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3035
      bl        -0xBFD8
      stw       r3, 0xEC(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3036
      bl        -0xBEB8
      stw       r3, 0xF0(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3037
      bl        -0xC010
      stw       r3, 0xF4(r29)
      lis       r6, 0x685F
      mr        r3, r30
      li        r5, 0
      lwz       r4, 0xC0(r29)
      addi      r6, r6, 0x3038
      bl        -0xC02C
      stw       r3, 0xF8(r29)
      lis       r3, 0x8051
      lfs       f31, 0x3CB0(r3)
      lwz       r3, 0xD8(r29)
      fmr       f1, f31
      bl        -0xB4DC
      lfs       f0, -0xB04(r2)
      lwz       r3, 0xDC(r29)
      fadds     f1, f0, f31
      bl        -0xB4EC
      lfs       f0, -0xB00(r2)
      lwz       r3, 0xE0(r29)
      fadds     f1, f0, f31
      bl        -0xB4FC
      lwz       r4, 0xAC(r29)
      mr        r3, r29
      bl        .loc_0x54C
      li        r3, 0x1C
      bl        -0x2F0AC0
      mr.       r0, r3
      beq-      .loc_0x3BC
      li        r4, 0x4
      bl        -0xF51C
      mr        r0, r3

    .loc_0x3BC:
      stw       r0, 0xFC(r29)
      lis       r3, 0x8051
      addi      r7, r3, 0x3CF4
      mr        r4, r30
      lwz       r3, 0xFC(r29)
      addi      r6, r31, 0x28
      lwz       r5, 0xC0(r29)
      lfs       f1, 0x0(r7)
      bl        -0xF004
      lis       r4, 0x8051
      lwz       r3, 0xFC(r29)
      lfs       f1, 0x3CF4(r4)
      mr        r4, r30
      lwz       r5, 0xC0(r29)
      addi      r6, r31, 0x3C
      bl        -0xF020
      lis       r4, 0x8051
      lwz       r3, 0xFC(r29)
      lfs       f1, 0x3CF4(r4)
      mr        r4, r30
      lwz       r5, 0xC0(r29)
      addi      r6, r31, 0x54
      bl        -0xF03C
      lis       r4, 0x8051
      lwz       r3, 0xFC(r29)
      lfs       f1, 0x3CF4(r4)
      mr        r4, r30
      lwz       r5, 0xC0(r29)
      addi      r6, r31, 0x6C
      bl        -0xF058
      stw       r30, 0x8(r1)
      lis       r3, 0x696E
      addi      r6, r3, 0x3031
      li        r5, 0x5066
      lwz       r4, 0xA8(r29)
      li        r8, 0xA
      lwz       r3, 0xC0(r29)
      li        r9, 0
      addi      r7, r4, 0xC
      li        r10, 0x1
      bl        -0x8414
      stw       r30, 0x8(r1)
      lis       r3, 0x6D70
      lis       r5, 0x50
      li        r8, 0xA
      lwz       r4, 0xA8(r29)
      addi      r6, r3, 0x3031
      lwz       r3, 0xC0(r29)
      addi      r5, r5, 0x636F
      addi      r7, r4, 0xC
      li        r9, 0
      li        r10, 0x1
      bl        -0x8444
      lwz       r3, 0xA8(r29)
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0x2710
      bge-      .loc_0x4DC
      lis       r4, 0x4E66
      lwz       r3, 0xC0(r29)
      addi      r6, r4, 0x696E
      li        r5, 0
      bl        -0x11BC4
      li        r0, 0x1
      lis       r4, 0x636F
      stb       r0, 0xB0(r3)
      addi      r6, r4, 0x6D70
      li        r5, 0x4E
      lwz       r3, 0xC0(r29)
      bl        -0x11BE0
      li        r0, 0
      stb       r0, 0xB0(r3)
      b         .loc_0x514

    .loc_0x4DC:
      lis       r4, 0x636F
      lwz       r3, 0xC0(r29)
      addi      r6, r4, 0x6D70
      li        r5, 0x4E
      bl        -0x11C00
      li        r0, 0x1
      lis       r4, 0x4E66
      stb       r0, 0xB0(r3)
      addi      r6, r4, 0x696E
      li        r5, 0
      lwz       r3, 0xC0(r29)
      bl        -0x11C1C
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0x514:
      lwz       r5, 0xC0(r29)
      mr        r3, r29
      mr        r4, r30
      bl        0x1898
      psq_l     f31,0x38(r1),0,0
      lwz       r0, 0x44(r1)
      lfd       f31, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x54C:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void og::newScreen::ObjSMenuPause::open_TopMenu(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void og::newScreen::ObjSMenuPause::close_TopMenu(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80314B0C
 * Size:	0000DC
 */
void og::newScreen::ObjSMenuPause::blink_TopMenu((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lbz       r0, 0x50(r3)
      cmplwi    r0, 0
      beq-      .loc_0x68
      lwz       r0, 0xAC(r31)
      cmpwi     r0, 0
      bne-      .loc_0x40
      lwz       r3, 0xD8(r31)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xB66C
      b         .loc_0x50

    .loc_0x40:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r31)
      fmr       f2, f1
      bl        -0xB680

    .loc_0x50:
      lwz       r3, 0xDC(r31)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r31)
      stw       r0, 0x34(r3)
      b         .loc_0xC8

    .loc_0x68:
      lfs       f0, -0xB08(r2)
      cmpwi     r4, 0
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      stfs      f0, 0x10(r1)
      blt-      .loc_0x98
      cmpwi     r4, 0x2
      bgt-      .loc_0x98
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r4,2,0,29
      addi      r3, r1, 0x8
      stfsx     f0, r3, r0

    .loc_0x98:
      lfs       f1, 0x8(r1)
      lwz       r3, 0xD8(r31)
      fmr       f2, f1
      bl        -0xB6D8
      lfs       f1, 0xC(r1)
      lwz       r3, 0xDC(r31)
      fmr       f2, f1
      bl        -0xB6E8
      lfs       f1, 0x10(r1)
      lwz       r3, 0xE0(r31)
      fmr       f2, f1
      bl        -0xB6F8

    .loc_0xC8:
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
 * Size:	000084
 */
void og::newScreen::ObjSMenuPause::open_Yuugata(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void og::newScreen::ObjSMenuPause::close_Yuugata(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void og::newScreen::ObjSMenuPause::blink_Yuugata((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void og::newScreen::ObjSMenuPause::open_Zenkai(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void og::newScreen::ObjSMenuPause::close_Zenkai(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void og::newScreen::ObjSMenuPause::blink_Zenkai((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80314BE8
 * Size:	00006C
 */
void og::newScreen::ObjSMenuPause::doUpdateLAction(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        0x13F3AC
      lis       r5, 0x804E
      lis       r4, 0x804E
      subi      r0, r5, 0x7B98
      li        r6, 0x271D
      stw       r0, 0x8(r1)
      subi      r7, r4, 0x7BA8
      li        r5, 0
      li        r0, 0x1
      stw       r3, 0x14(r1)
      mr        r3, r31
      addi      r4, r1, 0x8
      stw       r7, 0x8(r1)
      stw       r6, 0xC(r1)
      stb       r5, 0x10(r1)
      stb       r0, 0x11(r1)
      bl        0x1BBC
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80314C54
 * Size:	0000C8
 */
void og::newScreen::ObjSMenuPause::doUpdateRAction(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x34(r1)
      addi      r4, r4, 0x3CF4
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lbz       r0, 0x18(r4)
      cmplwi    r0, 0
      beq-      .loc_0x70
      bl        0x13F32C
      lis       r5, 0x804E
      lis       r4, 0x804E
      subi      r0, r5, 0x7B98
      li        r6, 0x272B
      stw       r0, 0x18(r1)
      subi      r7, r4, 0x7BA8
      li        r5, 0
      li        r0, 0x1
      stw       r3, 0x24(r1)
      mr        r3, r31
      addi      r4, r1, 0x18
      stw       r7, 0x18(r1)
      stw       r6, 0x1C(r1)
      stb       r5, 0x20(r1)
      stb       r0, 0x21(r1)
      bl        0x1C20
      b         .loc_0xB4

    .loc_0x70:
      bl        0x13F2E4
      lis       r5, 0x804E
      lis       r4, 0x804E
      subi      r0, r5, 0x7B98
      li        r6, 0x271C
      stw       r0, 0x8(r1)
      subi      r7, r4, 0x7BA8
      li        r5, 0
      li        r0, 0x1
      stw       r3, 0x14(r1)
      mr        r3, r31
      addi      r4, r1, 0x8
      stw       r7, 0x8(r1)
      stw       r6, 0xC(r1)
      stb       r5, 0x10(r1)
      stb       r0, 0x11(r1)
      bl        0x1BD8

    .loc_0xB4:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80314D1C
 * Size:	000010
 */
void og::newScreen::ObjSMenuPause::doUpdateCancelAction(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xA8(r3)
      li        r0, 0x2
      stw       r0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80314D2C
 * Size:	000084
 */
void og::newScreen::ObjSMenuPause::commonUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x17FC
      lis       r4, 0x8051
      mr        r3, r31
      addi      r4, r4, 0x3CB0
      lfs       f1, 0x3C(r4)
      lfs       f2, 0x40(r4)
      bl        0x15E0
      lfs       f3, 0x40(r31)
      lfs       f2, 0x243C(r2)
      lfs       f1, -0xB08(r2)
      lfs       f0, 0x2440(r2)
      fadds     f2, f3, f2
      lwz       r3, 0xC0(r31)
      fadds     f0, f1, f0
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xFC(r31)
      bl        -0xF8B0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80314DB0
 * Size:	0000B0
 */
void og::newScreen::ObjSMenuPause::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x48(r30)
      cmplwi    r0, 0
      beq-      .loc_0x40
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x40:
      lwz       r0, 0x38(r30)
      cmpwi     r0, 0x4
      bne-      .loc_0x80
      lwz       r0, 0xB8(r30)
      cmpwi     r0, 0x1
      bne-      .loc_0x70
      lwz       r3, 0xC4(r30)
      lbz       r0, 0x2C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x70
      lfs       f1, -0xB00(r2)
      bl        -0xAD1C

    .loc_0x70:
      mr        r3, r30
      bl        0x111C
      mr        r31, r3
      b         .loc_0x94

    .loc_0x80:
      lwz       r3, 0xC4(r30)
      lbz       r0, 0x2C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x94
      bl        -0xACAC

    .loc_0x94:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80314E60
 * Size:	000098
 */
void og::newScreen::ObjSMenuPause::doDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r0, 0xC0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x70
      addi      r31, r30, 0x190
      lwz       r3, 0xC4(r29)
      mr        r4, r31
      bl        -0x9D0C
      lwz       r3, 0xC8(r29)
      mr        r4, r31
      bl        -0x9D18
      lwz       r3, 0xCC(r29)
      mr        r4, r31
      bl        -0x9D24
      lwz       r3, 0xC0(r29)
      mr        r4, r30
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl

    .loc_0x70:
      mr        r3, r29
      mr        r4, r30
      bl        0x1FB4
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
 * Address:	80314EF8
 * Size:	0000A4
 */
void og::newScreen::ObjSMenuPause::doStart((Screen::StartSceneArg const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0xB08(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0xFC(r3)
      bl        -0xF7BC
      lwz       r3, 0xFC(r30)
      li        r4, 0x1
      bl        -0xF824
      lwz       r3, 0xFC(r30)
      lfs       f1, -0xAF0(r2)
      bl        -0xF88C
      lwz       r3, 0xFC(r30)
      bl        -0xF684
      lis       r3, 0x36
      lis       r6, 0x305F
      addi      r5, r3, 0x3035
      lis       r8, 0x315F
      lis       r4, 0x325F
      mr        r3, r30
      mr        r7, r5
      mr        r9, r5
      addi      r6, r6, 0x3030
      addi      r8, r8, 0x3030
      addi      r10, r4, 0x3030
      bl        0x1BA4
      mr        r3, r30
      bl        0x1C08
      mr        r3, r30
      mr        r4, r31
      bl        0x1A40
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
 * Address:	80314F9C
 * Size:	000008
 */
void og::newScreen::ObjSMenuPause::doEnd((Screen::EndSceneArg const*))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80314FA4
 * Size:	000034
 */
void og::newScreen::ObjSMenuPause::doUpdateFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x16D0
      mr        r3, r31
      bl        0xF40
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80314FD8
 * Size:	00004C
 */
void og::newScreen::ObjSMenuPause::doUpdateFadeout(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA0(r12)
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
 * Address:	80315024
 * Size:	00012C
 */
void og::newScreen::ObjSMenuPause::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x3C(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x74
      bge-      .loc_0x34
      cmpwi     r0, 0
      beq-      .loc_0x94
      bge-      .loc_0x40
      b         .loc_0xFC

    .loc_0x34:
      cmpwi     r0, 0x4
      bge-      .loc_0xFC
      b         .loc_0x54

    .loc_0x40:
      bl        0x16F4
      mr        r3, r31
      li        r4, 0x2
      bl        0x128C
      b         .loc_0x118

    .loc_0x54:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      bl        0x126C
      b         .loc_0x118

    .loc_0x74:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x98(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      bl        0x124C
      b         .loc_0x118

    .loc_0x94:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xA8(r31)
      lwz       r0, 0x10(r4)
      cmpwi     r0, 0x2
      beq-      .loc_0xC4
      blt-      .loc_0xE8
      cmpwi     r0, 0x5
      bge-      .loc_0xE8
      b         .loc_0xD8

    .loc_0xC4:
      mr        r3, r31
      bl        0x166C
      mr        r3, r31
      bl        0xE0C
      b         .loc_0xE8

    .loc_0xD8:
      li        r4, 0
      bl        0x13CE90
      mr        r3, r31
      bl        0xDF8

    .loc_0xE8:
      lwz       r4, 0xA8(r31)
      mr        r3, r31
      lwz       r4, 0x10(r4)
      bl        0x11E4
      b         .loc_0x118

    .loc_0xFC:
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x1A58
      li        r4, 0x29E
      subi      r5, r5, 0x19D4
      crclr     6, 0x6
      bl        -0x2EAAF8

    .loc_0x118:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80315150
 * Size:	0004C0
 */
void og::newScreen::ObjSMenuPause::menu_pause(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      li        r31, 0
      stw       r30, 0x38(r1)
      mr        r30, r3
      stw       r29, 0x34(r1)
      lbz       r0, 0x100(r3)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x104(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0xAF0(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x104(r30)
      lfs       f1, 0x104(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x5C
      li        r0, 0x1
      stb       r0, 0x100(r30)

    .loc_0x5C:
      mr        r3, r30
      bl        0x13EE90
      mr        r29, r3
      lwz       r3, 0xC4(r30)
      bl        -0xA5B0
      lis       r3, 0x800
      lwz       r4, 0x1C(r29)
      addi      r0, r3, 0x8
      and.      r0, r4, r0
      beq-      .loc_0x160
      lwz       r3, 0xAC(r30)
      cmpwi     r3, 0
      ble-      .loc_0x4A0
      subi      r0, r3, 0x1
      stw       r0, 0xAC(r30)
      lwz       r0, 0xAC(r30)
      lwz       r3, 0xC4(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xA694
      lbz       r0, 0x50(r30)
      lwz       r3, 0xAC(r30)
      cmplwi    r0, 0
      beq-      .loc_0xFC
      cmpwi     r3, 0
      bne-      .loc_0xD4
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xBD44
      b         .loc_0xE4

    .loc_0xD4:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xBD58

    .loc_0xE4:
      lwz       r3, 0xDC(r30)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r30)
      stw       r0, 0x34(r3)
      b         .loc_0x4A0

    .loc_0xFC:
      lfs       f0, -0xB08(r2)
      cmpwi     r3, 0
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x2C(r1)
      blt-      .loc_0x12C
      cmpwi     r3, 0x2
      bgt-      .loc_0x12C
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x24
      stfsx     f0, r3, r0

    .loc_0x12C:
      lfs       f1, 0x24(r1)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xBDB0
      lfs       f1, 0x28(r1)
      lwz       r3, 0xDC(r30)
      fmr       f2, f1
      bl        -0xBDC0
      lfs       f1, 0x2C(r1)
      lwz       r3, 0xE0(r30)
      fmr       f2, f1
      bl        -0xBDD0
      b         .loc_0x4A0

    .loc_0x160:
      lis       r3, 0x400
      addi      r0, r3, 0x4
      and.      r0, r4, r0
      beq-      .loc_0x24C
      lwz       r3, 0xAC(r30)
      cmpwi     r3, 0x1
      bge-      .loc_0x4A0
      addi      r0, r3, 0x1
      stw       r0, 0xAC(r30)
      lwz       r0, 0xAC(r30)
      lwz       r3, 0xC4(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xA780
      lbz       r0, 0x50(r30)
      lwz       r3, 0xAC(r30)
      cmplwi    r0, 0
      beq-      .loc_0x1E8
      cmpwi     r3, 0
      bne-      .loc_0x1C0
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xBE30
      b         .loc_0x1D0

    .loc_0x1C0:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xBE44

    .loc_0x1D0:
      lwz       r3, 0xDC(r30)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r30)
      stw       r0, 0x34(r3)
      b         .loc_0x4A0

    .loc_0x1E8:
      lfs       f0, -0xB08(r2)
      cmpwi     r3, 0
      stfs      f0, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f0, 0x20(r1)
      blt-      .loc_0x218
      cmpwi     r3, 0x2
      bgt-      .loc_0x218
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x18
      stfsx     f0, r3, r0

    .loc_0x218:
      lfs       f1, 0x18(r1)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xBE9C
      lfs       f1, 0x1C(r1)
      lwz       r3, 0xDC(r30)
      fmr       f2, f1
      bl        -0xBEAC
      lfs       f1, 0x20(r1)
      lwz       r3, 0xE0(r30)
      fmr       f2, f1
      bl        -0xBEBC
      b         .loc_0x4A0

    .loc_0x24C:
      lbz       r0, 0x100(r30)
      cmplwi    r0, 0
      beq-      .loc_0x494
      rlwinm.   r0,r4,0,23,23
      beq-      .loc_0x494
      lwz       r0, 0xAC(r30)
      cmpwi     r0, 0x1
      bne-      .loc_0x360
      lbz       r0, 0x50(r30)
      cmplwi    r0, 0
      beq-      .loc_0x284
      lwz       r3, -0x6858(r13)
      bl        -0x8758
      b         .loc_0x4A0

    .loc_0x284:
      li        r0, 0x1
      stw       r0, 0xB0(r30)
      lwz       r3, 0xD8(r30)
      bl        -0xBF50
      lwz       r3, 0xDC(r30)
      bl        -0xBF58
      lwz       r3, 0xE0(r30)
      bl        -0xBF60
      lwz       r3, 0xE4(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xBFA8
      lwz       r3, 0xE8(r30)
      lfs       f1, -0xAF8(r2)
      bl        -0xBFB4
      lwz       r3, 0xEC(r30)
      lfs       f1, -0xAF4(r2)
      bl        -0xBFC0
      lwz       r0, 0xB0(r30)
      lfs       f0, -0xB08(r2)
      cmpwi     r0, 0
      stfs      f0, 0x10(r1)
      stfs      f0, 0x14(r1)
      blt-      .loc_0x2F8
      cmpwi     r0, 0x1
      bgt-      .loc_0x2F8
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r0,2,0,29
      addi      r3, r1, 0x10
      stfsx     f0, r3, r0

    .loc_0x2F8:
      lwz       r3, 0xE8(r30)
      lfs       f1, 0x10(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xBF7C
      lwz       r3, 0xEC(r30)
      lfs       f1, 0x14(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xBF8C
      lwz       r0, 0xB0(r30)
      lwz       r3, 0xC8(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xA87C
      lwz       r3, 0xC8(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xB380
      li        r0, 0
      lfs       f0, -0xB08(r2)
      stb       r0, 0x108(r30)
      li        r0, 0x3
      stfs      f0, 0x10C(r30)
      stw       r0, 0xB8(r30)
      lwz       r3, 0xC4(r30)
      bl        -0xB30C
      lwz       r3, -0x6858(r13)
      bl        -0x8984
      b         .loc_0x4A0

    .loc_0x360:
      cmpwi     r0, 0x2
      bne-      .loc_0x45C
      lbz       r0, 0x50(r30)
      cmplwi    r0, 0
      beq-      .loc_0x380
      lwz       r3, -0x6858(r13)
      bl        -0x8854
      b         .loc_0x4A0

    .loc_0x380:
      li        r0, 0x1
      stw       r0, 0xB4(r30)
      lwz       r3, 0xD8(r30)
      bl        -0xC04C
      lwz       r3, 0xDC(r30)
      bl        -0xC054
      lwz       r3, 0xE0(r30)
      bl        -0xC05C
      lwz       r3, 0xF0(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xC0A4
      lwz       r3, 0xF4(r30)
      lfs       f1, -0xAF8(r2)
      bl        -0xC0B0
      lwz       r3, 0xF8(r30)
      lfs       f1, -0xAF4(r2)
      bl        -0xC0BC
      lwz       r0, 0xB4(r30)
      lfs       f0, -0xB08(r2)
      cmpwi     r0, 0
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      blt-      .loc_0x3F4
      cmpwi     r0, 0x1
      bgt-      .loc_0x3F4
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r0,2,0,29
      addi      r3, r1, 0x8
      stfsx     f0, r3, r0

    .loc_0x3F4:
      lwz       r3, 0xF4(r30)
      lfs       f1, 0x8(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC078
      lwz       r3, 0xF8(r30)
      lfs       f1, 0xC(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC088
      lwz       r0, 0xB4(r30)
      lwz       r3, 0xCC(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xA978
      lwz       r3, 0xCC(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xB47C
      li        r0, 0
      lfs       f0, -0xB08(r2)
      stb       r0, 0x110(r30)
      li        r0, 0x4
      stfs      f0, 0x114(r30)
      stw       r0, 0xB8(r30)
      lwz       r3, 0xC4(r30)
      bl        -0xB408
      lwz       r3, -0x6858(r13)
      bl        -0x8A80
      b         .loc_0x4A0

    .loc_0x45C:
      cmpwi     r0, 0
      bne-      .loc_0x4A0
      lwz       r4, 0xA8(r30)
      li        r0, 0x2
      mr        r3, r30
      stw       r0, 0x10(r4)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6858(r13)
      li        r31, 0x1
      bl        -0x8AB8
      b         .loc_0x4A0

    .loc_0x494:
      mr        r3, r30
      bl        0xF74
      mr        r31, r3

    .loc_0x4A0:
      lwz       r0, 0x44(r1)
      mr        r3, r31
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80315610
 * Size:	000478
 */
void og::newScreen::ObjSMenuPause::menu_yuugata(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      li        r31, 0
      stw       r30, 0x38(r1)
      mr        r30, r3
      stw       r29, 0x34(r1)
      lbz       r0, 0x108(r3)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x10C(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0xAF0(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x10C(r30)
      lfs       f1, 0x10C(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x5C
      li        r0, 0x1
      stb       r0, 0x108(r30)

    .loc_0x5C:
      mr        r3, r30
      bl        0x13E9D0
      mr        r29, r3
      lwz       r3, 0xC8(r30)
      bl        -0xAA70
      lis       r3, 0x800
      lwz       r4, 0x1C(r29)
      addi      r0, r3, 0x8
      and.      r0, r4, r0
      beq-      .loc_0xFC
      lwz       r3, 0xB0(r30)
      cmpwi     r3, 0
      ble-      .loc_0x458
      subi      r0, r3, 0x1
      stw       r0, 0xB0(r30)
      lwz       r0, 0xB0(r30)
      lwz       r3, 0xC8(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xAB54
      lwz       r0, 0xB0(r30)
      lfs       f0, -0xB08(r2)
      cmpwi     r0, 0
      stfs      f0, 0x10(r1)
      stfs      f0, 0x14(r1)
      blt-      .loc_0xD8
      cmpwi     r0, 0x1
      bgt-      .loc_0xD8
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r0,2,0,29
      addi      r3, r1, 0x10
      stfsx     f0, r3, r0

    .loc_0xD8:
      lwz       r3, 0xE8(r30)
      lfs       f1, 0x10(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC21C
      lwz       r3, 0xEC(r30)
      lfs       f1, 0x14(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC22C
      b         .loc_0x458

    .loc_0xFC:
      lis       r3, 0x400
      addi      r0, r3, 0x4
      and.      r0, r4, r0
      beq-      .loc_0x184
      lwz       r3, 0xB0(r30)
      cmpwi     r3, 0x1
      bge-      .loc_0x458
      addi      r0, r3, 0x1
      stw       r0, 0xB0(r30)
      lwz       r0, 0xB0(r30)
      lwz       r3, 0xC8(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xABDC
      lwz       r0, 0xB0(r30)
      lfs       f0, -0xB08(r2)
      cmpwi     r0, 0
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      blt-      .loc_0x160
      cmpwi     r0, 0x1
      bgt-      .loc_0x160
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r0,2,0,29
      addi      r3, r1, 0x8
      stfsx     f0, r3, r0

    .loc_0x160:
      lwz       r3, 0xE8(r30)
      lfs       f1, 0x8(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC2A4
      lwz       r3, 0xEC(r30)
      lfs       f1, 0xC(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC2B4
      b         .loc_0x458

    .loc_0x184:
      lbz       r3, 0x108(r30)
      cmplwi    r3, 0
      beq-      .loc_0x2D0
      rlwinm.   r0,r4,0,22,22
      beq-      .loc_0x2D0
      li        r0, 0x1
      stw       r0, 0xB8(r30)
      lwz       r3, 0xC8(r30)
      bl        -0xB620
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xC36C
      lwz       r3, 0xDC(r30)
      lfs       f1, -0xAF8(r2)
      bl        -0xC378
      lwz       r3, 0xE0(r30)
      lfs       f1, -0xAF4(r2)
      bl        -0xC384
      lbz       r0, 0x50(r30)
      lwz       r3, 0xAC(r30)
      cmplwi    r0, 0
      beq-      .loc_0x220
      cmpwi     r3, 0
      bne-      .loc_0x1F8
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xC328
      b         .loc_0x208

    .loc_0x1F8:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC33C

    .loc_0x208:
      lwz       r3, 0xDC(r30)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r30)
      stw       r0, 0x34(r3)
      b         .loc_0x280

    .loc_0x220:
      lfs       f0, -0xB08(r2)
      cmpwi     r3, 0
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x2C(r1)
      blt-      .loc_0x250
      cmpwi     r3, 0x2
      bgt-      .loc_0x250
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x24
      stfsx     f0, r3, r0

    .loc_0x250:
      lfs       f1, 0x24(r1)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC394
      lfs       f1, 0x28(r1)
      lwz       r3, 0xDC(r30)
      fmr       f2, f1
      bl        -0xC3A4
      lfs       f1, 0x2C(r1)
      lwz       r3, 0xE0(r30)
      fmr       f2, f1
      bl        -0xC3B4

    .loc_0x280:
      lwz       r0, 0xAC(r30)
      lwz       r3, 0xC4(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xACA4
      lwz       r3, 0xC4(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xB7A8
      li        r0, 0
      lfs       f0, -0xB08(r2)
      stb       r0, 0x100(r30)
      stfs      f0, 0x104(r30)
      lwz       r3, 0xE4(r30)
      bl        -0xC430
      lwz       r3, 0xE8(r30)
      bl        -0xC438
      lwz       r3, 0xEC(r30)
      bl        -0xC440
      lwz       r3, -0x6858(r13)
      bl        -0x8D88
      b         .loc_0x458

    .loc_0x2D0:
      cmplwi    r3, 0
      beq-      .loc_0x44C
      rlwinm.   r0,r4,0,23,23
      beq-      .loc_0x44C
      lwz       r0, 0xB0(r30)
      cmpwi     r0, 0
      bne-      .loc_0x314
      lwz       r4, 0xA8(r30)
      li        r0, 0x3
      mr        r3, r30
      stw       r0, 0x10(r4)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      li        r31, 0x1
      b         .loc_0x438

    .loc_0x314:
      li        r0, 0x1
      lfs       f1, -0xAFC(r2)
      stw       r0, 0xB8(r30)
      lwz       r3, 0xD8(r30)
      bl        -0xC4E0
      lwz       r3, 0xDC(r30)
      lfs       f1, -0xAF8(r2)
      bl        -0xC4EC
      lwz       r3, 0xE0(r30)
      lfs       f1, -0xAF4(r2)
      bl        -0xC4F8
      lbz       r0, 0x50(r30)
      lwz       r3, 0xAC(r30)
      cmplwi    r0, 0
      beq-      .loc_0x394
      cmpwi     r3, 0
      bne-      .loc_0x36C
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xC49C
      b         .loc_0x37C

    .loc_0x36C:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC4B0

    .loc_0x37C:
      lwz       r3, 0xDC(r30)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r30)
      stw       r0, 0x34(r3)
      b         .loc_0x3F4

    .loc_0x394:
      lfs       f0, -0xB08(r2)
      cmpwi     r3, 0
      stfs      f0, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f0, 0x20(r1)
      blt-      .loc_0x3C4
      cmpwi     r3, 0x2
      bgt-      .loc_0x3C4
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x18
      stfsx     f0, r3, r0

    .loc_0x3C4:
      lfs       f1, 0x18(r1)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC508
      lfs       f1, 0x1C(r1)
      lwz       r3, 0xDC(r30)
      fmr       f2, f1
      bl        -0xC518
      lfs       f1, 0x20(r1)
      lwz       r3, 0xE0(r30)
      fmr       f2, f1
      bl        -0xC528

    .loc_0x3F4:
      lwz       r0, 0xAC(r30)
      lwz       r3, 0xC4(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xAE18
      lwz       r3, 0xC4(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xB91C
      li        r0, 0
      lfs       f0, -0xB08(r2)
      stb       r0, 0x100(r30)
      stfs      f0, 0x104(r30)
      lwz       r3, 0xE4(r30)
      bl        -0xC5A4
      lwz       r3, 0xE8(r30)
      bl        -0xC5AC
      lwz       r3, 0xEC(r30)
      bl        -0xC5B4

    .loc_0x438:
      lwz       r3, 0xC8(r30)
      bl        -0xB8B8
      lwz       r3, -0x6858(r13)
      bl        -0x8F30
      b         .loc_0x458

    .loc_0x44C:
      mr        r3, r30
      bl        0xAFC
      mr        r31, r3

    .loc_0x458:
      lwz       r0, 0x44(r1)
      mr        r3, r31
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80315A88
 * Size:	000478
 */
void og::newScreen::ObjSMenuPause::menu_zenkai(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      li        r31, 0
      stw       r30, 0x38(r1)
      mr        r30, r3
      stw       r29, 0x34(r1)
      lbz       r0, 0x110(r3)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x114(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0xAF0(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x114(r30)
      lfs       f1, 0x114(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x5C
      li        r0, 0x1
      stb       r0, 0x110(r30)

    .loc_0x5C:
      mr        r3, r30
      bl        0x13E558
      mr        r29, r3
      lwz       r3, 0xCC(r30)
      bl        -0xAEE8
      lis       r3, 0x800
      lwz       r4, 0x1C(r29)
      addi      r0, r3, 0x8
      and.      r0, r4, r0
      beq-      .loc_0xFC
      lwz       r3, 0xB4(r30)
      cmpwi     r3, 0
      ble-      .loc_0x458
      subi      r0, r3, 0x1
      stw       r0, 0xB4(r30)
      lwz       r0, 0xB4(r30)
      lwz       r3, 0xCC(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xAFCC
      lwz       r0, 0xB4(r30)
      lfs       f0, -0xB08(r2)
      cmpwi     r0, 0
      stfs      f0, 0x10(r1)
      stfs      f0, 0x14(r1)
      blt-      .loc_0xD8
      cmpwi     r0, 0x1
      bgt-      .loc_0xD8
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r0,2,0,29
      addi      r3, r1, 0x10
      stfsx     f0, r3, r0

    .loc_0xD8:
      lwz       r3, 0xF4(r30)
      lfs       f1, 0x10(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC694
      lwz       r3, 0xF8(r30)
      lfs       f1, 0x14(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC6A4
      b         .loc_0x458

    .loc_0xFC:
      lis       r3, 0x400
      addi      r0, r3, 0x4
      and.      r0, r4, r0
      beq-      .loc_0x184
      lwz       r3, 0xB4(r30)
      cmpwi     r3, 0x1
      bge-      .loc_0x458
      addi      r0, r3, 0x1
      stw       r0, 0xB4(r30)
      lwz       r0, 0xB4(r30)
      lwz       r3, 0xCC(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xB054
      lwz       r0, 0xB4(r30)
      lfs       f0, -0xB08(r2)
      cmpwi     r0, 0
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      blt-      .loc_0x160
      cmpwi     r0, 0x1
      bgt-      .loc_0x160
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r0,2,0,29
      addi      r3, r1, 0x8
      stfsx     f0, r3, r0

    .loc_0x160:
      lwz       r3, 0xF4(r30)
      lfs       f1, 0x8(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC71C
      lwz       r3, 0xF8(r30)
      lfs       f1, 0xC(r1)
      lfs       f2, -0xB08(r2)
      bl        -0xC72C
      b         .loc_0x458

    .loc_0x184:
      lbz       r3, 0x110(r30)
      cmplwi    r3, 0
      beq-      .loc_0x2D0
      rlwinm.   r0,r4,0,22,22
      beq-      .loc_0x2D0
      li        r0, 0x1
      stw       r0, 0xB8(r30)
      lwz       r3, 0xCC(r30)
      bl        -0xBA98
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xC7E4
      lwz       r3, 0xDC(r30)
      lfs       f1, -0xAF8(r2)
      bl        -0xC7F0
      lwz       r3, 0xE0(r30)
      lfs       f1, -0xAF4(r2)
      bl        -0xC7FC
      lbz       r0, 0x50(r30)
      lwz       r3, 0xAC(r30)
      cmplwi    r0, 0
      beq-      .loc_0x220
      cmpwi     r3, 0
      bne-      .loc_0x1F8
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xC7A0
      b         .loc_0x208

    .loc_0x1F8:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC7B4

    .loc_0x208:
      lwz       r3, 0xDC(r30)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r30)
      stw       r0, 0x34(r3)
      b         .loc_0x280

    .loc_0x220:
      lfs       f0, -0xB08(r2)
      cmpwi     r3, 0
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x2C(r1)
      blt-      .loc_0x250
      cmpwi     r3, 0x2
      bgt-      .loc_0x250
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x24
      stfsx     f0, r3, r0

    .loc_0x250:
      lfs       f1, 0x24(r1)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC80C
      lfs       f1, 0x28(r1)
      lwz       r3, 0xDC(r30)
      fmr       f2, f1
      bl        -0xC81C
      lfs       f1, 0x2C(r1)
      lwz       r3, 0xE0(r30)
      fmr       f2, f1
      bl        -0xC82C

    .loc_0x280:
      lwz       r0, 0xAC(r30)
      lwz       r3, 0xC4(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xB11C
      lwz       r3, 0xC4(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xBC20
      li        r0, 0
      lfs       f0, -0xB08(r2)
      stb       r0, 0x100(r30)
      stfs      f0, 0x104(r30)
      lwz       r3, 0xF0(r30)
      bl        -0xC8A8
      lwz       r3, 0xF4(r30)
      bl        -0xC8B0
      lwz       r3, 0xF8(r30)
      bl        -0xC8B8
      lwz       r3, -0x6858(r13)
      bl        -0x9200
      b         .loc_0x458

    .loc_0x2D0:
      cmplwi    r3, 0
      beq-      .loc_0x44C
      rlwinm.   r0,r4,0,23,23
      beq-      .loc_0x44C
      lwz       r0, 0xB4(r30)
      cmpwi     r0, 0
      bne-      .loc_0x314
      lwz       r4, 0xA8(r30)
      li        r0, 0x4
      mr        r3, r30
      stw       r0, 0x10(r4)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      li        r31, 0x1
      b         .loc_0x438

    .loc_0x314:
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xC950
      lwz       r3, 0xDC(r30)
      lfs       f1, -0xAF8(r2)
      bl        -0xC95C
      lwz       r3, 0xE0(r30)
      lfs       f1, -0xAF4(r2)
      bl        -0xC968
      lbz       r0, 0x50(r30)
      lwz       r3, 0xAC(r30)
      cmplwi    r0, 0
      beq-      .loc_0x38C
      cmpwi     r3, 0
      bne-      .loc_0x364
      lwz       r3, 0xD8(r30)
      lfs       f1, -0xAF8(r2)
      lfs       f2, -0xB08(r2)
      bl        -0xC90C
      b         .loc_0x374

    .loc_0x364:
      lfs       f1, -0xB08(r2)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC920

    .loc_0x374:
      lwz       r3, 0xDC(r30)
      li        r0, 0x2
      stw       r0, 0x34(r3)
      lwz       r3, 0xE0(r30)
      stw       r0, 0x34(r3)
      b         .loc_0x3EC

    .loc_0x38C:
      lfs       f0, -0xB08(r2)
      cmpwi     r3, 0
      stfs      f0, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f0, 0x20(r1)
      blt-      .loc_0x3BC
      cmpwi     r3, 0x2
      bgt-      .loc_0x3BC
      lfs       f0, -0xAF8(r2)
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x18
      stfsx     f0, r3, r0

    .loc_0x3BC:
      lfs       f1, 0x18(r1)
      lwz       r3, 0xD8(r30)
      fmr       f2, f1
      bl        -0xC978
      lfs       f1, 0x1C(r1)
      lwz       r3, 0xDC(r30)
      fmr       f2, f1
      bl        -0xC988
      lfs       f1, 0x20(r1)
      lwz       r3, 0xE0(r30)
      fmr       f2, f1
      bl        -0xC998

    .loc_0x3EC:
      lwz       r0, 0xAC(r30)
      lwz       r3, 0xC4(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0xB288
      lwz       r3, 0xC4(r30)
      lfs       f1, -0xAFC(r2)
      bl        -0xBD8C
      li        r0, 0
      lfs       f0, -0xB08(r2)
      stb       r0, 0x100(r30)
      stfs      f0, 0x104(r30)
      lwz       r3, 0xF0(r30)
      bl        -0xCA14
      lwz       r3, 0xF4(r30)
      bl        -0xCA1C
      lwz       r3, 0xF8(r30)
      bl        -0xCA24
      li        r0, 0x1
      stw       r0, 0xB8(r30)

    .loc_0x438:
      lwz       r3, -0x6858(r13)
      bl        -0x93A0
      lwz       r3, 0xCC(r30)
      bl        -0xBD38
      b         .loc_0x458

    .loc_0x44C:
      mr        r3, r30
      bl        0x684
      mr        r31, r3

    .loc_0x458:
      lwz       r0, 0x44(r1)
      mr        r3, r31
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80315F00
 * Size:	000040
 */
void og::newScreen::ObjSMenuPause::killCursorAll(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0xC4(r3)
      bl        -0xBD84
      lwz       r3, 0xC8(r31)
      bl        -0xBD8C
      lwz       r3, 0xCC(r31)
      bl        -0xBD94
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80315F40
 * Size:	00006C
 */
void og::newScreen::ObjSMenuPause::menu(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r0, 0xB8(r3)
      cmpwi     r0, 0x3
      beq-      .loc_0x44
      bge-      .loc_0x2C
      cmpwi     r0, 0x1
      beq-      .loc_0x38
      b         .loc_0x58

    .loc_0x2C:
      cmpwi     r0, 0x5
      bge-      .loc_0x58
      b         .loc_0x50

    .loc_0x38:
      bl        -0xE28
      mr        r4, r3
      b         .loc_0x58

    .loc_0x44:
      bl        -0x974
      mr        r4, r3
      b         .loc_0x58

    .loc_0x50:
      bl        -0x508
      mr        r4, r3

    .loc_0x58:
      lwz       r0, 0x14(r1)
      mr        r3, r4
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80315FAC
 * Size:	000014
 */
void og::newScreen::ObjSMenuPause::in_L(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f0, -0xAEC(r2)
      stw       r0, 0x38(r3)
      stfs      f0, 0x4C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80315FC0
 * Size:	000014
 */
void og::newScreen::ObjSMenuPause::in_R(void)
{
    /*
    .loc_0x0:
      li        r0, 0x1
      lfs       f0, -0xAEC(r2)
      stw       r0, 0x38(r3)
      stfs      f0, 0x4C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80315FD4
 * Size:	000030
 */
void og::newScreen::ObjSMenuPause::wait(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0xB00(r2)
      stw       r0, 0x14(r1)
      li        r0, 0x4
      stw       r0, 0x38(r3)
      lwz       r3, 0xC4(r3)
      bl        -0xBEF0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80316004
 * Size:	00002C
 */
void og::newScreen::ObjSMenuPause::out_L(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0x2
      stw       r0, 0x38(r3)
      lwz       r3, -0x6858(r13)
      bl        -0x93D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80316030
 * Size:	00002C
 */
void og::newScreen::ObjSMenuPause::out_R(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0x3
      stw       r0, 0x38(r3)
      lwz       r3, -0x6858(r13)
      bl        -0x9400
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8031605C
 * Size:	000028
 */
void __sinit_ogObjSMenuPause_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8051
      stw       r0, 0x14(r1)
      addi      r3, r3, 0x3CB0
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	80316084
 * Size:	000184
 */
void og::newScreen::ObjSMenuPause::ObjHIOVal::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      li        r12, 0
      lfs       f1, -0xAE8(r2)
      li        r11, 0x31
      stmw      r25, 0x14(r1)
      li        r25, -0x1
      li        r26, 0xFD
      li        r27, 0x91
      li        r28, 0x15
      li        r29, 0x27
      li        r30, 0xFF
      li        r31, 0x6B
      li        r10, 0x49
      li        r9, 0x80
      li        r8, 0xC8
      li        r7, 0xAF
      li        r6, 0x40
      li        r5, 0xBB
      li        r4, 0x4C
      li        r0, 0x4A
      lfs       f0, -0xAF0(r2)
      stw       r25, 0x4(r3)
      stw       r25, 0x8(r3)
      stw       r25, 0xC(r3)
      stw       r25, 0x10(r3)
      stw       r25, 0x14(r3)
      stw       r25, 0x18(r3)
      stw       r25, 0x1C(r3)
      stw       r25, 0x20(r3)
      stw       r25, 0x24(r3)
      stw       r25, 0x28(r3)
      stw       r25, 0x2C(r3)
      stw       r25, 0x30(r3)
      stw       r25, 0x34(r3)
      stw       r25, 0x38(r3)
      stfs      f1, 0x0(r3)
      stb       r26, 0x4(r3)
      stb       r27, 0x5(r3)
      stb       r28, 0x6(r3)
      stb       r29, 0x7(r3)
      stb       r30, 0x8(r3)
      stb       r31, 0x9(r3)
      stb       r12, 0xA(r3)
      stb       r30, 0xB(r3)
      stb       r30, 0xC(r3)
      stb       r30, 0xD(r3)
      stb       r30, 0xE(r3)
      stb       r11, 0xF(r3)
      stb       r26, 0x18(r3)
      stb       r30, 0x19(r3)
      stb       r30, 0x1A(r3)
      stb       r12, 0x1B(r3)
      stb       r12, 0x1C(r3)
      stb       r10, 0x1D(r3)
      stb       r9, 0x1E(r3)
      stb       r8, 0x1F(r3)
      stb       r7, 0x20(r3)
      stb       r7, 0x21(r3)
      stb       r30, 0x22(r3)
      stb       r12, 0x23(r3)
      stb       r12, 0x2C(r3)
      stb       r12, 0x2D(r3)
      stb       r30, 0x2E(r3)
      stb       r30, 0x2F(r3)
      stb       r30, 0x30(r3)
      stb       r30, 0x31(r3)
      stb       r30, 0x32(r3)
      stb       r12, 0x33(r3)
      stb       r30, 0x34(r3)
      stb       r30, 0x35(r3)
      stb       r30, 0x36(r3)
      stb       r30, 0x37(r3)
      stb       r12, 0x38(r3)
      stb       r30, 0x39(r3)
      stb       r30, 0x3A(r3)
      stb       r12, 0x3B(r3)
      stb       r12, 0x10(r3)
      stb       r12, 0x11(r3)
      stb       r30, 0x12(r3)
      stb       r6, 0x13(r3)
      stb       r30, 0x14(r3)
      stb       r30, 0x15(r3)
      stb       r5, 0x16(r3)
      stb       r12, 0x17(r3)
      stb       r4, 0x24(r3)
      stb       r0, 0x25(r3)
      stb       r12, 0x26(r3)
      stb       r30, 0x27(r3)
      stb       r30, 0x28(r3)
      stb       r30, 0x29(r3)
      stb       r30, 0x2A(r3)
      stb       r12, 0x2B(r3)
      stfs      f0, 0x3C(r3)
      stfs      f0, 0x40(r3)
      lmw       r25, 0x14(r1)
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80316208
 * Size:	000008
 */
void @24 @og::newScreen::ObjSMenuPause::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x1D10
    */
}
