

/*
 * --INFO--
 * Address:	803087B8
 * Size:	000134
 */
void og::Screen::setAnimTextScreen((JKRArchive*, P2DScreen::Mgr*,
                                    unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r28, r3
      mr        r29, r4
      mr        r31, r5
      mr        r30, r6
      li        r3, 0x138
      bl        -0x2E4938
      mr.       r26, r3
      beq-      .loc_0x38
      bl        0x12C2D8
      mr        r26, r3

    .loc_0x38:
      lis       r4, 0x8049
      mr        r3, r26
      subi      r4, r4, 0x2020
      mr        r6, r28
      lis       r5, 0x4
      bl        -0x2C91E0
      mr        r3, r29
      mr        r6, r30
      mr        r5, r31
      bl        -0x5968
      mr        r27, r3
      subi      r4, r2, 0xD20
      crclr     6, 0x6
      bl        -0x2C68B0
      li        r0, 0
      li        r3, 0xB8
      stb       r0, 0xB0(r27)
      bl        -0x2E4990
      mr.       r25, r3
      beq-      .loc_0xA0
      lis       r5, 0x6F69
      mr        r4, r26
      addi      r6, r5, 0x6E74
      li        r5, 0x6A
      bl        0x314
      mr        r25, r3

    .loc_0xA0:
      stw       r27, 0x24(r25)
      mr        r3, r25
      lwz       r5, 0x18(r27)
      lwz       r6, 0x1C(r27)
      bl        0xBB8
      li        r3, 0x44
      bl        -0x2E49CC
      mr.       r27, r3
      beq-      .loc_0xCC
      bl        -0x39F4
      mr        r27, r3

    .loc_0xCC:
      lis       r4, 0x8049
      mr        r3, r27
      subi      r6, r4, 0x2010
      mr        r5, r26
      mr        r4, r28
      bl        -0x3974
      mr        r3, r25
      mr        r4, r27
      bl        0xB74
      mr        r3, r29
      mr        r6, r30
      mr        r5, r31
      mr        r7, r25
      bl        0x12C26C
      mr        r3, r26
      bl        0x1540
      li        r0, 0
      mr        r3, r25
      stb       r0, 0x38(r27)
      bl        0xB6C
      mr        r3, r25
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803088EC
 * Size:	00013C
 */
void og::Screen::setMenuScreen((JKRArchive*, P2DScreen::Mgr*,
                                unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r28, r3
      mr        r29, r4
      mr        r31, r5
      mr        r30, r6
      li        r3, 0x138
      bl        -0x2E4A6C
      mr.       r26, r3
      beq-      .loc_0x38
      bl        0x12C1A4
      mr        r26, r3

    .loc_0x38:
      lis       r4, 0x8049
      mr        r3, r26
      subi      r4, r4, 0x2020
      mr        r6, r28
      lis       r5, 0x4
      bl        -0x2C9314
      mr        r3, r29
      mr        r6, r30
      mr        r5, r31
      bl        -0x5A9C
      mr        r27, r3
      subi      r4, r2, 0xD20
      crclr     6, 0x6
      bl        -0x2C69E4
      li        r0, 0
      li        r3, 0xB8
      stb       r0, 0xB0(r27)
      bl        -0x2E4AC4
      mr.       r25, r3
      beq-      .loc_0xA0
      lis       r5, 0x6F69
      mr        r4, r26
      addi      r6, r5, 0x6E74
      li        r5, 0x6A
      bl        0x1E0
      mr        r25, r3

    .loc_0xA0:
      stw       r27, 0x24(r25)
      mr        r3, r25
      lwz       r5, 0x18(r27)
      lwz       r6, 0x1C(r27)
      bl        0xA84
      li        r3, 0x44
      bl        -0x2E4B00
      mr.       r27, r3
      beq-      .loc_0xCC
      bl        -0x3B28
      mr        r27, r3

    .loc_0xCC:
      lis       r4, 0x8049
      mr        r3, r27
      subi      r6, r4, 0x2010
      mr        r5, r26
      mr        r4, r28
      bl        -0x3AA8
      mr        r3, r25
      mr        r4, r27
      bl        0xA40
      mr        r3, r29
      mr        r6, r30
      mr        r5, r31
      mr        r7, r25
      bl        0x12C138
      mr        r3, r26
      bl        0x140C
      li        r0, 0
      mr        r3, r25
      stb       r0, 0x38(r27)
      bl        0xA38
      li        r0, 0x1
      mr        r3, r25
      stw       r0, 0x34(r25)
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80308A28
 * Size:	00013C
 */
void og::Screen::setMenuTitleScreen((JKRArchive*, P2DScreen::Mgr*,
                                     unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r28, r3
      mr        r29, r4
      mr        r31, r5
      mr        r30, r6
      li        r3, 0x138
      bl        -0x2E4BA8
      mr.       r26, r3
      beq-      .loc_0x38
      bl        0x12C068
      mr        r26, r3

    .loc_0x38:
      lis       r4, 0x8049
      mr        r3, r26
      subi      r4, r4, 0x2020
      mr        r6, r28
      lis       r5, 0x4
      bl        -0x2C9450
      mr        r3, r29
      mr        r6, r30
      mr        r5, r31
      bl        -0x5BD8
      mr        r27, r3
      subi      r4, r2, 0xD20
      crclr     6, 0x6
      bl        -0x2C6B20
      li        r0, 0
      li        r3, 0xB8
      stb       r0, 0xB0(r27)
      bl        -0x2E4C00
      mr.       r25, r3
      beq-      .loc_0xA0
      lis       r5, 0x6F69
      mr        r4, r26
      addi      r6, r5, 0x6E74
      li        r5, 0x6A
      bl        .loc_0x13C
      mr        r25, r3

    .loc_0xA0:
      stw       r27, 0x24(r25)
      mr        r3, r25
      lwz       r5, 0x18(r27)
      lwz       r6, 0x1C(r27)
      bl        0x948
      li        r3, 0x44
      bl        -0x2E4C3C
      mr.       r27, r3
      beq-      .loc_0xCC
      bl        -0x3C64
      mr        r27, r3

    .loc_0xCC:
      lis       r4, 0x8049
      mr        r3, r27
      subi      r6, r4, 0x2010
      mr        r5, r26
      mr        r4, r28
      bl        -0x3BE4
      mr        r3, r25
      mr        r4, r27
      bl        0x904
      mr        r3, r29
      mr        r6, r30
      mr        r5, r31
      mr        r7, r25
      bl        0x12BFFC
      mr        r3, r26
      bl        0x12D0
      li        r0, 0
      mr        r3, r25
      stb       r0, 0x38(r27)
      bl        0x8FC
      li        r0, 0x3
      mr        r3, r25
      stw       r0, 0x34(r25)
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x13C:
    */
}

/*
 * --INFO--
 * Address:	80308B64
 * Size:	000228
 */
void og::Screen::AnimText_Screen::__ct((P2DScreen::Mgr*, unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r3
      stw       r30, 0x48(r1)
      mr        r30, r4
      stw       r29, 0x44(r1)
      mr        r29, r6
      stw       r28, 0x40(r1)
      mr        r28, r5
      bl        0x27E0
      lis       r3, 0x804E
      li        r0, -0x1
      subi      r3, r3, 0x7E98
      stw       r3, 0x0(r31)
      stw       r0, 0x70(r31)
      stw       r0, 0x74(r31)
      stw       r0, 0x78(r31)
      stw       r0, 0x7C(r31)
      stw       r0, 0x80(r31)
      stw       r0, 0x84(r31)
      stw       r0, 0x88(r31)
      stw       r0, 0x8C(r31)
      stw       r0, 0x90(r31)
      stw       r0, 0x94(r31)
      stw       r0, 0x98(r31)
      stw       r0, 0x9C(r31)
      stw       r0, 0xA0(r31)
      stw       r0, 0xA4(r31)
      stw       r0, 0xA8(r31)
      stw       r0, 0xAC(r31)
      stw       r0, 0xB0(r31)
      lwz       r0, 0x20(r31)
      cmplwi    r0, 0
      bne-      .loc_0xA0
      mr        r4, r29
      mr        r3, r28
      addi      r5, r1, 0x28
      bl        -0x6034

    .loc_0xA0:
      li        r0, 0
      lis       r5, 0x626F
      stw       r0, 0x38(r31)
      lis       r4, 0x6D73
      mr        r3, r30
      addi      r6, r5, 0x6479
      stb       r0, 0x3C(r31)
      addi      r5, r4, 0x675F
      stw       r0, 0x40(r31)
      stw       r0, 0x44(r31)
      stb       r0, 0x48(r31)
      stw       r0, 0x54(r31)
      stw       r0, 0x50(r31)
      bl        -0x5D8C
      stw       r3, 0x40(r31)
      lis       r5, 0x6261
      lis       r4, 0x6D73
      mr        r3, r30
      addi      r6, r5, 0x636B
      addi      r5, r4, 0x675F
      bl        -0x5DA8
      stw       r3, 0x44(r31)
      li        r8, 0
      lfs       f1, -0xD1C(r2)
      addi      r28, r31, 0x90
      lfs       f0, -0xD18(r2)
      addi      r29, r31, 0x94
      stfs      f1, 0x58(r31)
      addi      r30, r31, 0xA4
      addi      r12, r31, 0xA8
      addi      r11, r31, 0xAC
      stfs      f1, 0x5C(r31)
      addi      r0, r31, 0xB0
      addi      r3, r31, 0x70
      addi      r4, r31, 0x74
      stfs      f0, 0x60(r31)
      addi      r5, r31, 0x78
      addi      r6, r31, 0x7C
      addi      r7, r31, 0x80
      stb       r8, 0x68(r31)
      addi      r8, r31, 0x84
      addi      r9, r31, 0x88
      addi      r10, r31, 0x8C
      stfs      f0, 0x6C(r31)
      stw       r28, 0x8(r1)
      stw       r29, 0xC(r1)
      stw       r30, 0x10(r1)
      stw       r12, 0x14(r1)
      stw       r11, 0x18(r1)
      stw       r0, 0x1C(r1)
      bl        0xB56C
      lwz       r4, 0x44(r31)
      addi      r3, r1, 0x24
      lwz       r12, 0x0(r4)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x24(r1)
      addi      r3, r1, 0x20
      stb       r0, 0x98(r31)
      lbz       r0, 0x25(r1)
      stb       r0, 0x99(r31)
      lbz       r0, 0x26(r1)
      stb       r0, 0x9A(r31)
      lbz       r0, 0x27(r1)
      stb       r0, 0x9B(r31)
      lwz       r4, 0x44(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0xB0(r12)
      mtctr     r12
      bctrl
      lbz       r4, 0x20(r1)
      li        r0, 0
      mr        r3, r31
      stb       r4, 0x9C(r31)
      lbz       r4, 0x21(r1)
      stb       r4, 0x9D(r31)
      lbz       r4, 0x22(r1)
      stb       r4, 0x9E(r31)
      lbz       r4, 0x23(r1)
      stb       r4, 0x9F(r31)
      lbz       r4, 0x80(r31)
      stb       r4, 0xA0(r31)
      lbz       r4, 0x81(r31)
      stb       r4, 0xA1(r31)
      lbz       r4, 0x82(r31)
      stb       r4, 0xA2(r31)
      lbz       r4, 0x83(r31)
      stb       r4, 0xA3(r31)
      stw       r0, 0x34(r31)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      lwz       r28, 0x40(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80308D8C
 * Size:	000080
 */
void og::Screen::CallBack_Screen::__dt(void)
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
      beq-      .loc_0x64
      lis       r4, 0x804E
      subi      r0, r4, 0x7E58
      stw       r0, 0x0(r30)
      beq-      .loc_0x54
      lis       r4, 0x804D
      addi      r0, r4, 0x7F2C
      stw       r0, 0x0(r30)
      beq-      .loc_0x54
      lis       r5, 0x804D
      li        r4, 0
      addi      r0, r5, 0x7B0C
      stw       r0, 0x0(r30)
      bl        0x1087AC

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x2E4D38

    .loc_0x64:
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
 * Address:	80308E0C
 * Size:	00060C
 */
void og::Screen::AnimText_Screen::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stmw      r26, 0x58(r1)
      mr        r31, r3
      bl        0x25FC
      lwz       r3, 0x38(r31)
      cmplwi    r3, 0
      beq-      .loc_0x5F0
      bl        -0x4020
      stb       r3, 0x3C(r31)
      lbz       r0, 0x48(r31)
      cmplwi    r0, 0
      beq-      .loc_0x94
      lwz       r5, 0x50(r31)
      li        r4, 0
      lwz       r6, 0x54(r31)
      xor       r0, r5, r4
      xor       r3, r6, r4
      or.       r0, r3, r0
      beq-      .loc_0x84
      lbz       r0, 0x3C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x94
      mr        r3, r31
      bl        0x5B0
      li        r0, 0
      lfs       f1, -0xD1C(r2)
      stw       r0, 0x54(r31)
      mr        r3, r31
      stw       r0, 0x50(r31)
      bl        0x5CC
      b         .loc_0x94

    .loc_0x84:
      lbz       r0, 0x3C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x94
      stb       r4, 0x48(r31)

    .loc_0x94:
      lwz       r0, 0x34(r31)
      li        r3, -0x1
      stw       r3, 0x38(r1)
      cmpwi     r0, 0x2
      lwz       r26, 0x24(r31)
      stw       r3, 0x34(r1)
      stw       r3, 0x30(r1)
      stw       r3, 0x2C(r1)
      beq-      .loc_0x210
      bge-      .loc_0xCC
      cmpwi     r0, 0
      beq-      .loc_0xD8
      bge-      .loc_0x18C
      b         .loc_0x318

    .loc_0xCC:
      cmpwi     r0, 0x4
      bge-      .loc_0x318
      b         .loc_0x294

    .loc_0xD8:
      mr        r4, r26
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r26)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      mr        r4, r26
      lbz       r7, 0x20(r1)
      lwz       r12, 0x0(r26)
      addi      r3, r1, 0x1C
      lbz       r6, 0x21(r1)
      lbz       r5, 0x22(r1)
      lbz       r0, 0x23(r1)
      lwz       r12, 0xB0(r12)
      stb       r7, 0x38(r1)
      stb       r6, 0x39(r1)
      stb       r5, 0x3A(r1)
      stb       r0, 0x3B(r1)
      mtctr     r12
      bctrl
      lbz       r26, 0x1C(r1)
      lbz       r12, 0x1D(r1)
      lbz       r11, 0x1E(r1)
      lbz       r10, 0x1F(r1)
      lbz       r9, 0x98(r31)
      lbz       r8, 0x99(r31)
      lbz       r7, 0x9A(r31)
      lbz       r6, 0x9B(r31)
      lbz       r5, 0x9C(r31)
      lbz       r4, 0x9D(r31)
      lbz       r3, 0x9E(r31)
      lbz       r0, 0x9F(r31)
      stb       r26, 0x34(r1)
      stb       r12, 0x35(r1)
      stb       r11, 0x36(r1)
      stb       r10, 0x37(r1)
      stb       r9, 0x30(r1)
      stb       r8, 0x31(r1)
      stb       r7, 0x32(r1)
      stb       r6, 0x33(r1)
      stb       r5, 0x2C(r1)
      stb       r4, 0x2D(r1)
      stb       r3, 0x2E(r1)
      stb       r0, 0x2F(r1)
      b         .loc_0x334

    .loc_0x18C:
      lbz       r30, 0x80(r31)
      lbz       r29, 0x81(r31)
      lbz       r28, 0x82(r31)
      lbz       r27, 0x83(r31)
      lbz       r26, 0x84(r31)
      lbz       r12, 0x85(r31)
      lbz       r11, 0x86(r31)
      lbz       r10, 0x87(r31)
      lbz       r9, 0x88(r31)
      lbz       r8, 0x89(r31)
      lbz       r7, 0x8A(r31)
      lbz       r6, 0x8B(r31)
      lbz       r5, 0x8C(r31)
      lbz       r4, 0x8D(r31)
      lbz       r3, 0x8E(r31)
      lbz       r0, 0x8F(r31)
      stb       r30, 0x38(r1)
      stb       r29, 0x39(r1)
      stb       r28, 0x3A(r1)
      stb       r27, 0x3B(r1)
      stb       r26, 0x34(r1)
      stb       r12, 0x35(r1)
      stb       r11, 0x36(r1)
      stb       r10, 0x37(r1)
      stb       r9, 0x30(r1)
      stb       r8, 0x31(r1)
      stb       r7, 0x32(r1)
      stb       r6, 0x33(r1)
      stb       r5, 0x2C(r1)
      stb       r4, 0x2D(r1)
      stb       r3, 0x2E(r1)
      stb       r0, 0x2F(r1)
      b         .loc_0x334

    .loc_0x210:
      lbz       r30, 0x70(r31)
      lbz       r29, 0x71(r31)
      lbz       r28, 0x72(r31)
      lbz       r27, 0x73(r31)
      lbz       r26, 0x74(r31)
      lbz       r12, 0x75(r31)
      lbz       r11, 0x76(r31)
      lbz       r10, 0x77(r31)
      lbz       r9, 0x90(r31)
      lbz       r8, 0x91(r31)
      lbz       r7, 0x92(r31)
      lbz       r6, 0x93(r31)
      lbz       r5, 0x94(r31)
      lbz       r4, 0x95(r31)
      lbz       r3, 0x96(r31)
      lbz       r0, 0x97(r31)
      stb       r30, 0x38(r1)
      stb       r29, 0x39(r1)
      stb       r28, 0x3A(r1)
      stb       r27, 0x3B(r1)
      stb       r26, 0x34(r1)
      stb       r12, 0x35(r1)
      stb       r11, 0x36(r1)
      stb       r10, 0x37(r1)
      stb       r9, 0x30(r1)
      stb       r8, 0x31(r1)
      stb       r7, 0x32(r1)
      stb       r6, 0x33(r1)
      stb       r5, 0x2C(r1)
      stb       r4, 0x2D(r1)
      stb       r3, 0x2E(r1)
      stb       r0, 0x2F(r1)
      b         .loc_0x334

    .loc_0x294:
      lbz       r26, 0xA4(r31)
      lbz       r27, 0xA5(r31)
      lbz       r28, 0xA6(r31)
      lbz       r29, 0xA7(r31)
      lbz       r30, 0xA8(r31)
      lbz       r12, 0xA9(r31)
      lbz       r11, 0xAA(r31)
      lbz       r10, 0xAB(r31)
      lbz       r9, 0xAC(r31)
      lbz       r8, 0xAD(r31)
      lbz       r7, 0xAE(r31)
      lbz       r6, 0xAF(r31)
      lbz       r5, 0xB0(r31)
      lbz       r4, 0xB1(r31)
      lbz       r3, 0xB2(r31)
      lbz       r0, 0xB3(r31)
      stb       r26, 0x38(r1)
      stb       r27, 0x39(r1)
      stb       r28, 0x3A(r1)
      stb       r29, 0x3B(r1)
      stb       r30, 0x34(r1)
      stb       r12, 0x35(r1)
      stb       r11, 0x36(r1)
      stb       r10, 0x37(r1)
      stb       r9, 0x30(r1)
      stb       r8, 0x31(r1)
      stb       r7, 0x32(r1)
      stb       r6, 0x33(r1)
      stb       r5, 0x2C(r1)
      stb       r4, 0x2D(r1)
      stb       r3, 0x2E(r1)
      stb       r0, 0x2F(r1)
      b         .loc_0x334

    .loc_0x318:
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2000
      li        r4, 0xE5
      subi      r5, r5, 0x1FE8
      crclr     6, 0x6
      bl        -0x2DEAFC

    .loc_0x334:
      lwz       r0, 0x34(r1)
      addi      r4, r1, 0x18
      stw       r0, 0x18(r1)
      lwz       r3, 0x40(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x30(r1)
      addi      r4, r1, 0x14
      stw       r0, 0x14(r1)
      lwz       r3, 0x44(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x2C(r1)
      addi      r4, r1, 0x10
      stw       r0, 0x10(r1)
      lwz       r3, 0x44(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x68(r31)
      cmplwi    r0, 0
      beq-      .loc_0x574
      lfs       f0, 0x5C(r31)
      lfs       f2, -0xD1C(r2)
      fcmpo     cr0, f0, f2
      ble-      .loc_0x4A8
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x58(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x58(r31)
      lfs       f1, 0x58(r31)
      lfs       f0, 0x5C(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x3DC
      stfs      f2, 0x58(r31)

    .loc_0x3DC:
      lfs       f2, 0x60(r31)
      lfs       f1, -0xD1C(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x408
      lfs       f0, -0xD14(r2)
      fsubs     f0, f2, f0
      stfs      f0, 0x60(r31)
      lfs       f0, 0x60(r31)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x408
      stfs      f1, 0x60(r31)

    .loc_0x408:
      lfs       f1, -0xD10(r2)
      lfs       f0, 0x58(r31)
      lfs       f2, 0x5C(r31)
      fmuls     f3, f1, f0
      lfs       f0, -0xD1C(r2)
      lfs       f4, 0x64(r31)
      lfs       f1, -0xD18(r2)
      fdivs     f2, f3, f2
      fcmpo     cr0, f2, f0
      bge-      .loc_0x45C
      lfs       f0, -0xD0C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x480

    .loc_0x45C:
      lfs       f0, -0xD08(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r0, 0x4C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x480:
      fadds     f3, f1, f0
      lfs       f2, -0xD04(r2)
      lfs       f1, 0x64(r31)
      lfs       f0, -0xD00(r2)
      fmuls     f2, f3, f2
      fsubs     f1, f2, f1
      fdivs     f0, f1, f0
      fadds     f0, f4, f0
      stfs      f0, 0x64(r31)
      b         .loc_0x4D4

    .loc_0x4A8:
      lfs       f2, 0x60(r31)
      lfs       f1, -0xD18(r2)
      fcmpo     cr0, f2, f1
      bge-      .loc_0x4D4
      lfs       f0, -0xCFC(r2)
      fadds     f0, f2, f0
      stfs      f0, 0x60(r31)
      lfs       f0, 0x60(r31)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x4D4
      stfs      f1, 0x60(r31)

    .loc_0x4D4:
      li        r0, -0x1
      lfs       f0, -0xD1C(r2)
      stw       r0, 0x28(r1)
      lfs       f1, 0x5C(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x53C
      stw       r0, 0x24(r1)
      addi      r3, r31, 0x78
      addi      r4, r31, 0x7C
      addi      r5, r1, 0x24
      lfs       f1, 0x64(r31)
      bl        -0x7134
      lfs       f1, 0x60(r31)
      addi      r3, r1, 0x24
      addi      r4, r31, 0x80
      addi      r5, r1, 0x28
      bl        -0x7148
      lbz       r0, 0x28(r1)
      stb       r0, 0xA0(r31)
      lbz       r0, 0x29(r1)
      stb       r0, 0xA1(r31)
      lbz       r0, 0x2A(r1)
      stb       r0, 0xA2(r31)
      lbz       r0, 0x2B(r1)
      stb       r0, 0xA3(r31)
      b         .loc_0x550

    .loc_0x53C:
      lfs       f1, 0x60(r31)
      addi      r3, r31, 0xA0
      addi      r4, r31, 0x80
      addi      r5, r1, 0x28
      bl        -0x7180

    .loc_0x550:
      lwz       r0, 0x28(r1)
      addi      r4, r1, 0xC
      stw       r0, 0xC(r1)
      lwz       r3, 0x40(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x594

    .loc_0x574:
      lwz       r0, 0x38(r1)
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      lwz       r3, 0x40(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl

    .loc_0x594:
      lfs       f1, -0xCF8(r2)
      lfs       f0, 0x6C(r31)
      lwz       r0, 0x34(r31)
      fmuls     f0, f1, f0
      cmpwi     r0, 0x2
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r26, 0x4C(r1)
      bne-      .loc_0x5BC
      lbz       r26, 0x73(r31)

    .loc_0x5BC:
      lwz       r3, 0x40(r31)
      mr        r4, r26
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x44(r31)
      mr        r4, r26
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x5F8

    .loc_0x5F0:
      li        r0, 0
      stb       r0, 0x3C(r31)

    .loc_0x5F8:
      lmw       r26, 0x58(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80309418
 * Size:	000008
 */
void og::Screen::AnimText_Screen::setAnimScreen((og::Screen::AnimScreen*))
{
    /*
    .loc_0x0:
      stw       r4, 0x38(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80309420
 * Size:	00001C
 */
void og::Screen::AnimText_Screen::setText((unsigned long long))
{
    /*
    .loc_0x0:
      lwz       r4, 0x40(r3)
      stw       r6, 0x1C(r4)
      stw       r5, 0x18(r4)
      lwz       r3, 0x44(r3)
      stw       r6, 0x1C(r3)
      stw       r5, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void og::Screen::AnimText_Screen::setTextAnim((unsigned long long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030943C
 * Size:	000018
 */
void og::Screen::AnimText_Screen::stop(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0xD1C(r2)
      lwz       r4, 0x38(r3)
      stfs      f0, 0x20(r4)
      lwz       r3, 0x38(r3)
      stfs      f0, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80309454
 * Size:	00003C
 */
void og::Screen::AnimText_Screen::open((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, -0xD18(r2)
      stw       r0, 0x14(r1)
      lfs       f0, -0xD1C(r2)
      lwz       r4, 0x38(r3)
      stfs      f2, 0x20(r4)
      lwz       r4, 0x38(r3)
      stfs      f0, 0x18(r4)
      lwz       r3, 0x38(r3)
      bl        -0x47CC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80309490
 * Size:	000048
 */
void og::Screen::AnimText_Screen::close(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0xCF4(r2)
      stw       r0, 0x14(r1)
      lwz       r4, 0x38(r3)
      stfs      f0, 0x20(r4)
      lwz       r4, 0x38(r3)
      lfs       f0, 0x1C(r4)
      stfs      f0, 0x18(r4)
      lwz       r3, 0x38(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	803094D8
 * Size:	0000AC
 */
void og::Screen::AnimText_Screen::blink((float, float))
{
    /*
    .loc_0x0:
      lfs       f0, -0xD1C(r2)
      stwu      r1, -0x20(r1)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x18
      li        r0, 0x1
      stb       r0, 0x68(r3)

    .loc_0x18:
      stfs      f1, 0x5C(r3)
      lfs       f3, -0xD10(r2)
      stfs      f2, 0x58(r3)
      lfs       f0, -0xD1C(r2)
      lfs       f1, 0x58(r3)
      lfs       f2, 0x5C(r3)
      fmuls     f3, f3, f1
      lfs       f1, -0xD18(r2)
      fdivs     f2, f3, f2
      fcmpo     cr0, f2, f0
      bge-      .loc_0x70
      lfs       f0, -0xD0C(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x94

    .loc_0x70:
      lfs       f0, -0xD08(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x94:
      fadds     f1, f1, f0
      lfs       f0, -0xD04(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0x64(r3)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80309584
 * Size:	000090
 */
void og::Screen::AnimText_Screen::__dt(void)
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
      beq-      .loc_0x74
      lis       r4, 0x804E
      subi      r0, r4, 0x7E98
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804E
      subi      r0, r4, 0x7E58
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804D
      addi      r0, r4, 0x7F2C
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r5, 0x804D
      li        r4, 0
      addi      r0, r5, 0x7B0C
      stw       r0, 0x0(r30)
      bl        0x107FA4

    .loc_0x64:
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        -0x2E5540

    .loc_0x74:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
