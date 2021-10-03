

/*
 * --INFO--
 * Address:	80306038
 * Size:	000158
 */
void og::Screen::CallBack_LifeGauge::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r0, r31
      stw       r30, 0x8(r1)
      mr        r30, r0
      bl        0x10B338
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r3, 0x804D
      stw       r0, 0x0(r30)
      li        r5, 0
      addi      r4, r4, 0x7F2C
      addi      r0, r3, 0x7F10
      stw       r5, 0x18(r30)
      li        r3, 0xC
      lfs       f2, -0xDB0(r2)
      stw       r4, 0x0(r30)
      lfs       f1, -0xDAC(r2)
      stw       r0, 0x0(r31)
      lfs       f0, -0xDA8(r2)
      stw       r5, 0x1C(r31)
      stfs      f2, 0x20(r31)
      stfs      f1, 0x24(r31)
      stfs      f0, 0x28(r31)
      stfs      f0, 0x2C(r31)
      stfs      f0, 0x54(r31)
      stfs      f2, 0x58(r31)
      stw       r5, 0x5C(r31)
      stw       r5, 0x60(r31)
      stw       r5, 0x64(r31)
      stw       r5, 0x68(r31)
      stw       r5, 0x6C(r31)
      bl        -0x2E2224
      mr.       r0, r3
      beq-      .loc_0xA4
      bl        -0x1EC4D8
      mr        r0, r3

    .loc_0xA4:
      stw       r0, 0x4C(r31)
      li        r4, 0x1
      lfs       f0, -0xDA8(r2)
      li        r0, 0
      li        r3, 0x18
      stfs      f0, 0x34(r31)
      stfs      f0, 0x38(r31)
      stfs      f0, 0x3C(r31)
      stfs      f0, 0x40(r31)
      stfs      f0, 0x44(r31)
      stfs      f0, 0x48(r31)
      stfs      f0, 0x30(r31)
      stb       r4, 0x50(r31)
      lbz       r4, 0x50(r31)
      stb       r4, 0x51(r31)
      stw       r0, 0x70(r31)
      stw       r0, 0x74(r31)
      stw       r0, 0x78(r31)
      stw       r0, 0x7C(r31)
      stw       r0, 0x80(r31)
      stw       r0, 0x84(r31)
      bl        -0x2E228C
      mr.       r0, r3
      beq-      .loc_0x10C
      bl        0x2A150
      mr        r0, r3

    .loc_0x10C:
      stw       r0, 0x88(r31)
      li        r3, 0x1C
      bl        -0x2E22A8
      mr.       r0, r3
      beq-      .loc_0x128
      bl        0x22CAC
      mr        r0, r3

    .loc_0x128:
      stw       r0, 0x8C(r31)
      li        r0, 0
      lfs       f0, -0xDA8(r2)
      mr        r3, r31
      stb       r0, 0x94(r31)
      stfs      f0, 0x98(r31)
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
 * Address:	80306190
 * Size:	000070
 */
void P2DScreen::CallBackNode::__dt(void)
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
      beq-      .loc_0x54
      lis       r4, 0x804D
      addi      r0, r4, 0x7F2C
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804D
      li        r4, 0
      addi      r0, r5, 0x7B0C
      stw       r0, 0x0(r30)
      bl        0x10B3B8

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x2E212C

    .loc_0x54:
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
 * Address:	80306200
 * Size:	0002C4
 */
void og::Screen::CallBack_LifeGauge::init(
    (P2DScreen::Mgr*, og::Screen::DataNavi*,
     og::Screen::CallBack_LifeGauge::LifeGaugeType))
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
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x2A4
      stw       r30, 0x1C(r28)
      li        r4, 0x80
      lfs       f0, 0x0(r30)
      stfs      f0, 0x20(r28)
      lwz       r3, 0x4C(r28)
      bl        -0x1EC61C
      lfs       f1, -0xDA4(r2)
      lis       r4, 0x7069
      lfs       f0, 0x20(r28)
      mr        r3, r29
      lwz       r7, 0x4C(r28)
      addi      r6, r4, 0x6E31
      fmuls     f0, f1, f0
      li        r5, 0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      stb       r0, 0x8(r7)
      stw       r29, 0x5C(r28)
      bl        -0x33D8
      stw       r3, 0x60(r28)
      lis       r4, 0x7069
      mr        r3, r29
      li        r5, 0
      addi      r6, r4, 0x6E32
      bl        -0x33F0
      stw       r3, 0x64(r28)
      lis       r4, 0x6E61
      mr        r3, r29
      li        r5, 0
      addi      r6, r4, 0x5F69
      bl        -0x3408
      stw       r3, 0x68(r28)
      lis       r4, 0x6C69
      mr        r3, r29
      li        r5, 0
      addi      r6, r4, 0x5F69
      bl        -0x3420
      stw       r3, 0x6C(r28)
      lis       r4, 0x7669
      li        r0, 0
      mr        r3, r29
      lwz       r7, 0x68(r28)
      addi      r6, r4, 0x5F69
      li        r5, 0x6E61
      lfs       f0, 0xD4(r7)
      stfs      f0, 0x3C(r28)
      lwz       r4, 0x68(r28)
      lfs       f0, 0xD8(r4)
      stfs      f0, 0x40(r28)
      lwz       r4, 0x6C(r28)
      lfs       f0, 0xD4(r4)
      stfs      f0, 0x44(r28)
      lwz       r4, 0x6C(r28)
      lfs       f0, 0xD8(r4)
      stfs      f0, 0x48(r28)
      lwz       r4, 0x60(r28)
      stb       r0, 0xB0(r4)
      lwz       r4, 0x64(r28)
      stb       r0, 0xB0(r4)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r28)
      mr        r3, r29
      lis       r5, 0x6932
      lis       r4, 0x6E
      lwz       r12, 0x0(r29)
      addi      r6, r5, 0x5F69
      addi      r5, r4, 0x6176
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r28)
      mr        r3, r29
      lis       r5, 0x6933
      lis       r4, 0x6E
      lwz       r12, 0x0(r29)
      addi      r6, r5, 0x5F69
      addi      r5, r4, 0x6176
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r28)
      mr        r3, r29
      lis       r4, 0x6E61
      li        r5, 0
      lwz       r12, 0x0(r29)
      addi      r6, r4, 0x7669
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x7C(r28)
      mr        r3, r29
      lis       r4, 0x6176
      li        r5, 0x6E
      lwz       r12, 0x0(r29)
      addi      r6, r4, 0x6932
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x80(r28)
      mr        r3, r29
      lis       r4, 0x6176
      li        r5, 0x6E
      lwz       r12, 0x0(r29)
      addi      r6, r4, 0x6933
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x84(r28)
      lwz       r4, 0x80(r28)
      cmplwi    r4, 0
      beq-      .loc_0x22C
      lwz       r0, 0x84(r28)
      cmplwi    r0, 0
      beq-      .loc_0x22C
      li        r0, 0
      mr        r3, r28
      stb       r0, 0xB0(r4)
      mr        r4, r31
      lwz       r5, 0x84(r28)
      stb       r0, 0xB0(r5)
      bl        .loc_0x2C4

    .loc_0x22C:
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0
      beq-      .loc_0x26C
      lfs       f1, -0xDA8(r2)
      lis       r3, 0x8051
      li        r0, 0x1
      stfs      f1, 0x30(r28)
      addi      r4, r3, 0x3BFC
      stb       r0, 0x50(r28)
      lbz       r0, 0x50(r28)
      stb       r0, 0x51(r28)
      lwz       r3, 0x88(r28)
      lfs       f2, 0x8(r4)
      lfs       f3, 0xC(r4)
      bl        0x29E54
      b         .loc_0x29C

    .loc_0x26C:
      lfs       f1, -0xDA0(r2)
      lis       r3, 0x8051
      li        r0, 0
      stfs      f1, 0x30(r28)
      addi      r4, r3, 0x3BFC
      stb       r0, 0x50(r28)
      lbz       r0, 0x50(r28)
      stb       r0, 0x51(r28)
      lwz       r3, 0x88(r28)
      lfs       f2, 0x8(r4)
      lfs       f3, 0xC(r4)
      bl        0x29E20

    .loc_0x29C:
      li        r0, 0
      stb       r0, 0x94(r28)

    .loc_0x2A4:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x2C4:
    */
}

/*
 * --INFO--
 * Address:	803064C4
 * Size:	000434
 */
void og::Screen::CallBack_LifeGauge::setType(
    (og::Screen::CallBack_LifeGauge::LifeGaugeType))
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      cmpwi     r4, 0x2
      stw       r0, 0x94(r1)
      li        r0, -0x1
      stw       r31, 0x8C(r1)
      stw       r30, 0x88(r1)
      stw       r29, 0x84(r1)
      stw       r28, 0x80(r1)
      mr        r28, r3
      stw       r0, 0x68(r1)
      stw       r0, 0x6C(r1)
      stw       r0, 0x70(r1)
      stw       r0, 0x74(r1)
      stw       r4, 0x90(r3)
      beq-      .loc_0x234
      bge-      .loc_0x414
      cmpwi     r4, 0x1
      bge-      .loc_0x50
      b         .loc_0x414

    .loc_0x50:
      lwz       r3, 0x74(r28)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x120(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x70(r28)
      lwz       r4, 0x20(r4)
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x110(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x80(r28)
      addi      r3, r1, 0x40
      lwz       r12, 0x0(r4)
      lwz       r12, 0x138(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x40(r1)
      addi      r4, r1, 0x44
      stw       r0, 0x44(r1)
      lwz       r3, 0x7C(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x12C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x80(r28)
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r4)
      lwz       r12, 0x134(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x38(r1)
      addi      r4, r1, 0x3C
      stw       r0, 0x3C(r1)
      lwz       r3, 0x7C(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x128(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x80(r28)
      lwz       r3, 0x7C(r28)
      lbz       r4, 0x150(r5)
      lbz       r0, 0x151(r5)
      lbz       r31, 0x152(r5)
      lbz       r8, 0x153(r5)
      stb       r4, 0x68(r1)
      lbz       r4, 0x154(r5)
      stb       r0, 0x69(r1)
      lbz       r0, 0x155(r5)
      lbz       r30, 0x156(r5)
      lbz       r7, 0x157(r5)
      lbz       r29, 0x158(r5)
      lbz       r28, 0x159(r5)
      lbz       r12, 0x15A(r5)
      lbz       r6, 0x15B(r5)
      lbz       r11, 0x15C(r5)
      lbz       r10, 0x15D(r5)
      lbz       r9, 0x15E(r5)
      lbz       r5, 0x15F(r5)
      stb       r31, 0x6A(r1)
      stb       r8, 0x6B(r1)
      lwz       r8, 0x68(r1)
      stb       r4, 0x6C(r1)
      stw       r8, 0x18(r1)
      lbz       r4, 0x18(r1)
      stb       r0, 0x6D(r1)
      lbz       r0, 0x19(r1)
      stb       r4, 0x150(r3)
      lbz       r4, 0x1A(r1)
      stb       r0, 0x151(r3)
      lbz       r0, 0x1B(r1)
      stb       r4, 0x152(r3)
      stb       r30, 0x6E(r1)
      stb       r7, 0x6F(r1)
      lwz       r7, 0x6C(r1)
      stb       r0, 0x153(r3)
      stw       r7, 0x1C(r1)
      lbz       r4, 0x1C(r1)
      stb       r29, 0x70(r1)
      lbz       r0, 0x1D(r1)
      stb       r4, 0x154(r3)
      lbz       r4, 0x1E(r1)
      stb       r0, 0x155(r3)
      lbz       r0, 0x1F(r1)
      stb       r4, 0x156(r3)
      stb       r28, 0x71(r1)
      stb       r12, 0x72(r1)
      stb       r6, 0x73(r1)
      lwz       r6, 0x70(r1)
      stb       r0, 0x157(r3)
      stw       r6, 0x20(r1)
      lbz       r4, 0x20(r1)
      stb       r11, 0x74(r1)
      lbz       r0, 0x21(r1)
      stb       r4, 0x158(r3)
      lbz       r4, 0x22(r1)
      stb       r0, 0x159(r3)
      lbz       r0, 0x23(r1)
      stb       r4, 0x15A(r3)
      stb       r10, 0x75(r1)
      stb       r9, 0x76(r1)
      stb       r5, 0x77(r1)
      lwz       r5, 0x74(r1)
      stb       r0, 0x15B(r3)
      stw       r5, 0x24(r1)
      lbz       r4, 0x24(r1)
      lbz       r0, 0x25(r1)
      stb       r4, 0x15C(r3)
      lbz       r4, 0x26(r1)
      stb       r0, 0x15D(r3)
      lbz       r0, 0x27(r1)
      stb       r4, 0x15E(r3)
      stw       r8, 0x58(r1)
      stw       r7, 0x5C(r1)
      stw       r6, 0x60(r1)
      stw       r5, 0x64(r1)
      stb       r0, 0x15F(r3)
      b         .loc_0x414

    .loc_0x234:
      lwz       r3, 0x78(r28)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x120(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x70(r28)
      lwz       r4, 0x20(r4)
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x110(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x84(r28)
      addi      r3, r1, 0x30
      lwz       r12, 0x0(r4)
      lwz       r12, 0x138(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x30(r1)
      addi      r4, r1, 0x34
      stw       r0, 0x34(r1)
      lwz       r3, 0x7C(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x12C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x84(r28)
      addi      r3, r1, 0x28
      lwz       r12, 0x0(r4)
      lwz       r12, 0x134(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x28(r1)
      addi      r4, r1, 0x2C
      stw       r0, 0x2C(r1)
      lwz       r3, 0x7C(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x128(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x84(r28)
      lwz       r3, 0x7C(r28)
      lbz       r4, 0x150(r5)
      lbz       r0, 0x151(r5)
      lbz       r28, 0x152(r5)
      lbz       r8, 0x153(r5)
      stb       r4, 0x68(r1)
      lbz       r4, 0x154(r5)
      stb       r0, 0x69(r1)
      lbz       r0, 0x155(r5)
      lbz       r29, 0x156(r5)
      lbz       r7, 0x157(r5)
      lbz       r30, 0x158(r5)
      lbz       r31, 0x159(r5)
      lbz       r12, 0x15A(r5)
      lbz       r6, 0x15B(r5)
      lbz       r11, 0x15C(r5)
      lbz       r10, 0x15D(r5)
      lbz       r9, 0x15E(r5)
      lbz       r5, 0x15F(r5)
      stb       r28, 0x6A(r1)
      stb       r8, 0x6B(r1)
      lwz       r8, 0x68(r1)
      stb       r4, 0x6C(r1)
      stw       r8, 0x8(r1)
      lbz       r4, 0x8(r1)
      stb       r0, 0x6D(r1)
      lbz       r0, 0x9(r1)
      stb       r4, 0x150(r3)
      lbz       r4, 0xA(r1)
      stb       r0, 0x151(r3)
      lbz       r0, 0xB(r1)
      stb       r4, 0x152(r3)
      stb       r29, 0x6E(r1)
      stb       r7, 0x6F(r1)
      lwz       r7, 0x6C(r1)
      stb       r0, 0x153(r3)
      stw       r7, 0xC(r1)
      lbz       r4, 0xC(r1)
      stb       r30, 0x70(r1)
      lbz       r0, 0xD(r1)
      stb       r4, 0x154(r3)
      lbz       r4, 0xE(r1)
      stb       r0, 0x155(r3)
      lbz       r0, 0xF(r1)
      stb       r4, 0x156(r3)
      stb       r31, 0x71(r1)
      stb       r12, 0x72(r1)
      stb       r6, 0x73(r1)
      lwz       r6, 0x70(r1)
      stb       r0, 0x157(r3)
      stw       r6, 0x10(r1)
      lbz       r4, 0x10(r1)
      stb       r11, 0x74(r1)
      lbz       r0, 0x11(r1)
      stb       r4, 0x158(r3)
      lbz       r4, 0x12(r1)
      stb       r0, 0x159(r3)
      lbz       r0, 0x13(r1)
      stb       r4, 0x15A(r3)
      stb       r10, 0x75(r1)
      stb       r9, 0x76(r1)
      stb       r5, 0x77(r1)
      lwz       r5, 0x74(r1)
      stb       r0, 0x15B(r3)
      stw       r5, 0x14(r1)
      lbz       r4, 0x14(r1)
      lbz       r0, 0x15(r1)
      stb       r4, 0x15C(r3)
      lbz       r4, 0x16(r1)
      stb       r0, 0x15D(r3)
      lbz       r0, 0x17(r1)
      stb       r4, 0x15E(r3)
      stw       r8, 0x48(r1)
      stw       r7, 0x4C(r1)
      stw       r6, 0x50(r1)
      stw       r5, 0x54(r1)
      stb       r0, 0x15F(r3)

    .loc_0x414:
      lwz       r0, 0x94(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      lwz       r29, 0x84(r1)
      lwz       r28, 0x80(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	803068F8
 * Size:	000078
 */
void og::Screen::CallBack_LifeGauge::setOffset((float, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0x18(r3)
      cmplwi    r4, 0
      bne-      .loc_0x38
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2048
      li        r4, 0xF3
      subi      r5, r5, 0x2038
      crclr     6, 0x6
      bl        -0x2DC2E8
      b         .loc_0x68

    .loc_0x38:
      lfs       f4, 0x28(r4)
      lfs       f0, 0x20(r4)
      lfs       f3, -0xD9C(r2)
      fsubs     f0, f4, f0
      fmadds    f0, f0, f3, f1
      stfs      f0, 0x28(r3)
      lwz       r4, 0x18(r3)
      lfs       f1, 0x2C(r4)
      lfs       f0, 0x24(r4)
      fsubs     f0, f1, f0
      fmadds    f0, f0, f3, f2
      stfs      f0, 0x2C(r3)

    .loc_0x68:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80306970
 * Size:	000318
 */
void og::Screen::CallBack_LifeGauge::moveIcon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lbz       r0, 0x50(r3)
      stb       r0, 0x51(r3)
      lwz       r3, 0x1C(r3)
      cmplwi    r3, 0
      beq-      .loc_0x38
      lbz       r0, 0x14(r3)
      stb       r0, 0x50(r31)

    .loc_0x38:
      lbz       r3, 0x50(r31)
      lbz       r0, 0x51(r31)
      cmplw     r3, r0
      beq-      .loc_0xD4
      cmplwi    r3, 0
      beq-      .loc_0x9C
      lis       r4, 0x8051
      lwz       r3, 0x88(r31)
      addi      r4, r4, 0x3BFC
      lfs       f1, 0x30(r31)
      lfs       f2, 0x8(r4)
      lfs       f3, 0xC(r4)
      bl        0x298E0
      lis       r4, 0x8051
      lwz       r3, 0x88(r31)
      addi      r4, r4, 0x3BFC
      lfs       f1, -0xDA8(r2)
      lfs       f2, 0x4(r4)
      bl        0x298D8
      li        r0, 0x1
      lis       r3, 0x8051
      stb       r0, 0x94(r31)
      lfs       f0, 0x3BFC(r3)
      stfs      f0, 0x98(r31)
      b         .loc_0x138

    .loc_0x9C:
      lis       r4, 0x8051
      lwz       r3, 0x88(r31)
      addi      r4, r4, 0x3BFC
      lfs       f1, 0x30(r31)
      lfs       f2, 0x8(r4)
      lfs       f3, 0xC(r4)
      bl        0x29894
      lis       r4, 0x8051
      lwz       r3, 0x88(r31)
      addi      r4, r4, 0x3BFC
      lfs       f1, -0xDA0(r2)
      lfs       f2, 0x4(r4)
      bl        0x2988C
      b         .loc_0x138

    .loc_0xD4:
      cmplwi    r3, 0
      beq-      .loc_0x138
      lbz       r0, 0x94(r31)
      cmplwi    r0, 0
      beq-      .loc_0x138
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x98(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0xDA8(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x98(r31)
      lfs       f1, 0x98(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x138
      li        r0, 0
      stb       r0, 0x94(r31)
      lwz       r3, -0x6858(r13)
      lwz       r4, 0x90(r31)
      bl        0x655C
      lwz       r3, 0x8C(r31)
      lfs       f1, -0xD98(r2)
      lfs       f2, -0xD94(r2)
      lfs       f3, -0xD90(r2)
      lfs       f4, -0xDA8(r2)
      bl        0x22434

    .loc_0x138:
      lwz       r3, 0x88(r31)
      bl        0x2989C
      stfs      f1, 0x30(r31)
      lfs       f0, -0xDA8(r2)
      lfs       f2, 0x30(r31)
      lfs       f1, -0xD8C(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x184
      lfs       f0, -0xD88(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x1A8

    .loc_0x184:
      lfs       f0, -0xD84(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x1A8:
      fmuls     f1, f1, f0
      lfs       f0, -0xDA8(r2)
      stfs      f1, 0x34(r31)
      lfs       f2, 0x30(r31)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x1C4
      fneg      f2, f2

    .loc_0x1C4:
      lfs       f0, -0xD84(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f1, -0xD94(r2)
      fmuls     f2, f2, f0
      addi      r4, r3, 0x4
      lfs       f0, -0xDA8(r2)
      fctiwz    f2, f2
      stfd      f2, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r4, r0
      fmuls     f1, f1, f2
      stfs      f1, 0x38(r31)
      lfs       f1, 0x30(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x20C
      fneg      f1, f1

    .loc_0x20C:
      lfs       f0, -0xD84(r2)
      lfs       f3, -0xDB0(r2)
      fmuls     f2, f1, f0
      lfs       f0, -0xD9C(r2)
      lfs       f1, -0xD80(r2)
      lwz       r3, 0x8C(r31)
      fctiwz    f2, f2
      stfd      f2, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r4, r0
      fadds     f2, f3, f2
      fmuls     f2, f2, f0
      fsubs     f0, f3, f2
      fmadds    f31, f1, f0, f2
      bl        0x223CC
      lwz       r3, 0x68(r31)
      fmuls     f31, f31, f1
      lfs       f1, 0x40(r31)
      lfs       f0, -0xD94(r2)
      lwz       r12, 0x0(r3)
      fsubs     f1, f1, f0
      lfs       f0, 0x38(r31)
      lfs       f4, 0x3C(r31)
      lfs       f3, 0x34(r31)
      lwz       r12, 0x10(r12)
      fadds     f2, f1, f0
      fsubs     f1, f4, f3
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r31)
      lfs       f2, 0x3C(r31)
      lfs       f1, 0x44(r31)
      lfs       f0, 0x34(r31)
      lwz       r12, 0x0(r3)
      fsubs     f4, f1, f2
      fsubs     f3, f2, f0
      lfs       f2, 0x48(r31)
      lfs       f1, -0xD94(r2)
      lfs       f0, 0x38(r31)
      fsubs     f2, f2, f1
      lwz       r12, 0x10(r12)
      fmadds    f1, f31, f4, f3
      fadds     f2, f2, f0
      mtctr     r12
      bctrl
      lwz       r3, 0x68(r31)
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r31)
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x38(r1),0,0
      lwz       r0, 0x44(r1)
      lfd       f31, 0x30(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80306C88
 * Size:	00026C
 */
void og::Screen::CallBack_LifeGauge::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stfd      f30, 0x20(r1)
      psq_st    f30,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        0x1127C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x248
      mr        r3, r31
      bl        -0x34C
      lwz       r3, 0x1C(r31)
      lfs       f0, 0x0(r3)
      stfs      f0, 0x20(r31)
      lwz       r3, 0x4C(r31)
      lfs       f1, 0x20(r31)
      bl        -0x1ED090
      lfs       f1, 0x20(r31)
      lfs       f0, -0xD9C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x234
      lwz       r3, 0x60(r31)
      li        r0, 0x1
      lfs       f0, -0xDB0(r2)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x64(r31)
      stb       r0, 0xB0(r3)
      lwz       r3, -0x6514(r13)
      lfs       f3, 0x58(r31)
      lfs       f2, 0x54(r3)
      lfs       f1, 0x54(r31)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x54(r31)
      lfs       f1, 0x54(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xC8
      lfs       f1, -0xDA8(r2)
      stfs      f1, 0x54(r31)
      lfs       f0, 0x20(r31)
      fcmpo     cr0, f0, f1
      ble-      .loc_0xC8
      lbz       r0, 0x50(r31)
      cmplwi    r0, 0
      beq-      .loc_0xC8
      lwz       r3, -0x6858(r13)
      bl        0x5C8C

    .loc_0xC8:
      lwz       r3, 0x60(r31)
      li        r4, 0x7A
      lfs       f31, 0x54(r31)
      lfs       f3, 0x28(r3)
      lfs       f2, 0x20(r3)
      lfs       f1, 0x2C(r3)
      lfs       f0, 0x24(r3)
      fsubs     f2, f3, f2
      lfs       f5, -0xD9C(r2)
      fsubs     f0, f1, f0
      lfs       f4, -0xDB0(r2)
      fmuls     f1, f2, f5
      lfs       f3, -0xDA8(r2)
      fmadds    f30, f31, f5, f4
      fmuls     f2, f0, f5
      bl        -0x2CE98C
      lwz       r3, 0x60(r31)
      stfs      f30, 0xCC(r3)
      stfs      f30, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0xD7C(r2)
      lwz       r3, 0x60(r31)
      fnmsubs   f0, f0, f31, f0
      lwz       r12, 0x0(r3)
      fctiwz    f0, f0
      lwz       r12, 0x24(r12)
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lfs       f3, -0xD78(r2)
      lfs       f2, 0x58(r31)
      lfs       f1, 0x54(r31)
      lfs       f0, -0xDA8(r2)
      fnmsubs   f30, f3, f2, f1
      fcmpo     cr0, f30, f0
      bge-      .loc_0x170
      lfs       f0, -0xDB0(r2)
      fadds     f30, f30, f0

    .loc_0x170:
      lwz       r3, 0x64(r31)
      li        r4, 0x7A
      lfs       f5, -0xD9C(r2)
      lfs       f3, 0x28(r3)
      lfs       f2, 0x20(r3)
      lfs       f1, 0x2C(r3)
      lfs       f0, 0x24(r3)
      fsubs     f2, f3, f2
      lfs       f4, -0xDB0(r2)
      fsubs     f0, f1, f0
      lfs       f3, -0xDA8(r2)
      fmuls     f1, f2, f5
      fmadds    f31, f30, f5, f4
      fmuls     f2, f0, f5
      bl        -0x2CEA30
      lwz       r3, 0x64(r31)
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0xD7C(r2)
      lwz       r3, 0x64(r31)
      fnmsubs   f0, f0, f30, f0
      lwz       r12, 0x0(r3)
      fctiwz    f0, f0
      lwz       r12, 0x24(r12)
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x20(r31)
      lfs       f0, -0xDA8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x21C
      lwz       r3, 0x68(r31)
      li        r0, 0
      stb       r0, 0xB0(r3)
      lwz       r3, 0x6C(r31)
      stb       r0, 0xB0(r3)
      b         .loc_0x248

    .loc_0x21C:
      lwz       r3, 0x68(r31)
      li        r0, 0x1
      stb       r0, 0xB0(r3)
      lwz       r3, 0x6C(r31)
      stb       r0, 0xB0(r3)
      b         .loc_0x248

    .loc_0x234:
      lwz       r3, 0x60(r31)
      li        r0, 0
      stb       r0, 0xB0(r3)
      lwz       r3, 0x64(r31)
      stb       r0, 0xB0(r3)

    .loc_0x248:
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r0, 0x44(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80306EF4
 * Size:	0000B4
 */
void og::Screen::CallBack_LifeGauge::draw((Graphics&, J2DGrafContext&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lfs       f0, -0xDA8(r2)
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r5
      stw       r30, 0x38(r1)
      mr        r30, r3
      lfs       f1, 0x20(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x9C
      bl        -0x1ECF54
      lwz       r4, 0x18(r30)
      addi      r3, r31, 0x80
      addi      r5, r1, 0x8
      addi      r4, r4, 0x80
      bl        -0x21CC34
      addi      r3, r1, 0x8
      li        r4, 0
      bl        -0x21D9C8
      lwz       r3, 0x4C(r30)
      lfs       f1, 0x24(r30)
      lfs       f2, 0x28(r30)
      lfs       f3, 0x2C(r30)
      bl        -0x1ED144
      lfs       f1, 0x20(r30)
      lfs       f0, -0xD9C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x9C
      lwz       r3, 0x64(r30)
      li        r4, 0
      lfs       f1, 0x28(r30)
      li        r5, 0
      lwz       r12, 0x0(r3)
      li        r6, 0
      lfs       f2, 0x2C(r30)
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl

    .loc_0x9C:
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
 * Address:	80306FA8
 * Size:	000118
 */
void og::Screen::NaviLifeGauge::setCallBack(
    (og::Screen::DataNavi*, og::Screen::CallBack_LifeGauge::LifeGaugeType))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r0, 0x150(r3)
      cmplwi    r0, 0
      bne-      .loc_0xFC
      stw       r30, 0x150(r29)
      bl        -0x3CC8
      li        r3, 0x9C
      bl        -0x2E3140
      mr.       r0, r3
      beq-      .loc_0x50
      bl        -0xFB8
      mr        r0, r3

    .loc_0x50:
      stw       r0, 0x148(r29)
      mr        r4, r29
      mr        r5, r30
      mr        r6, r31
      lwz       r3, 0x148(r29)
      bl        -0xE0C
      lis       r4, 0x6C69
      lwz       r7, 0x148(r29)
      mr        r3, r29
      li        r5, 0
      addi      r6, r4, 0x6665
      bl        0x12DB00
      lis       r4, 0x6D65
      mr        r3, r29
      addi      r6, r4, 0x7465
      li        r5, 0
      bl        0x2674C
      stw       r3, 0x14C(r29)
      lwz       r3, 0x148(r29)
      lwz       r4, 0x18(r3)
      cmplwi    r4, 0
      bne-      .loc_0xC8
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2048
      li        r4, 0xF3
      subi      r5, r5, 0x2038
      crclr     6, 0x6
      bl        -0x2DCA28
      b         .loc_0xFC

    .loc_0xC8:
      lfs       f1, 0x28(r4)
      lfs       f0, 0x20(r4)
      lfs       f3, -0xD9C(r2)
      fsubs     f0, f1, f0
      lfs       f2, -0xDA8(r2)
      fmadds    f0, f0, f3, f2
      stfs      f0, 0x28(r3)
      lwz       r4, 0x18(r3)
      lfs       f1, 0x2C(r4)
      lfs       f0, 0x24(r4)
      fsubs     f0, f1, f0
      fmadds    f0, f0, f3, f2
      stfs      f0, 0x2C(r3)

    .loc_0xFC:
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
 * Address:	803070C0
 * Size:	00002C
 */
void og::Screen::NaviLifeGauge::setType(
    (og::Screen::CallBack_LifeGauge::LifeGaugeType))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x148(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1C
      bl        -0xC14

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803070EC
 * Size:	00005C
 */
void og::Screen::NaviLifeGauge::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x12DBE0
      lwz       r3, 0x150(r31)
      lfs       f0, -0xDA8(r2)
      lfs       f1, 0x0(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x3C
      lwz       r3, 0x14C(r31)
      li        r0, 0x1
      stb       r0, 0x24(r3)
      b         .loc_0x48

    .loc_0x3C:
      lwz       r3, 0x14C(r31)
      li        r0, 0
      stb       r0, 0x24(r3)

    .loc_0x48:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80307148
 * Size:	0000A4
 */
void og::Screen::NaviLifeGauge::__dt(void)
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
      beq-      .loc_0x88
      lis       r3, 0x804D
      addi      r0, r3, 0x7E70
      stw       r0, 0x0(r30)
      beq-      .loc_0x78
      lis       r3, 0x804F
      subi      r0, r3, 0x3B00
      stw       r0, 0x0(r30)
      beq-      .loc_0x78
      lis       r3, 0x804F
      addic.    r0, r30, 0x118
      subi      r0, r3, 0x3A60
      stw       r0, 0x0(r30)
      beq-      .loc_0x6C
      lis       r4, 0x804D
      addi      r3, r30, 0x118
      addi      r0, r4, 0x7B0C
      li        r4, 0
      stw       r0, 0x118(r30)
      bl        0x10A3D8

    .loc_0x6C:
      mr        r3, r30
      li        r4, 0
      bl        -0x2C7CA0

    .loc_0x78:
      extsh.    r0, r31
      ble-      .loc_0x88
      mr        r3, r30
      bl        -0x2E3118

    .loc_0x88:
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
 * Address:	803071EC
 * Size:	000080
 */
void og::Screen::CallBack_LifeGauge::__dt(void)
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
      lis       r4, 0x804D
      addi      r0, r4, 0x7F10
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
      bl        0x10A34C

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x2E3198

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
 * Address:	8030726C
 * Size:	000004
 */
void P2DScreen::CallBackNode::update(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80307270
 * Size:	000024
 */
void __sinit_ogLifeGauge_cpp(void)
{
    /*
    .loc_0x0:
      lfs       f2, -0xD98(r2)
      lis       r3, 0x8051
      lfs       f1, -0xD90(r2)
      stfsu     f2, 0x3BFC(r3)
      lfs       f0, -0xD78(r2)
      stfs      f1, 0x4(r3)
      stfs      f0, 0x8(r3)
      stfs      f2, 0xC(r3)
      blr
    */
}
