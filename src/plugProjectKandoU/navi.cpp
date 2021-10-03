

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8013F6D4
 * Size:	000050
 */
void Game::Navi::getShadowParam((Game::ShadowParam&))
{
    /*
    .loc_0x0:
      lfs       f0, 0x20C(r3)
      lfs       f4, -0x6018(r2)
      stfs      f0, 0x0(r4)
      lfs       f3, -0x6014(r2)
      lfs       f0, 0x210(r3)
      lfs       f2, -0x6010(r2)
      stfs      f0, 0x4(r4)
      lfs       f1, -0x600C(r2)
      lfs       f5, 0x214(r3)
      lfs       f0, -0x6008(r2)
      stfs      f5, 0x8(r4)
      lfs       f5, 0x4(r4)
      fadds     f4, f5, f4
      stfs      f4, 0x4(r4)
      stfs      f3, 0x18(r4)
      stfs      f2, 0x1C(r4)
      stfs      f1, 0xC(r4)
      stfs      f0, 0x10(r4)
      stfs      f1, 0x14(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8013F724
 * Size:	000024
 */
void Game::Navi::getLODSphere((Sys::Sphere&))
{
    /*
    .loc_0x0:
      lfs       f0, -0x6004(r2)
      stfs      f0, 0xC(r4)
      lfs       f0, 0x218(r3)
      stfs      f0, 0x0(r4)
      lfs       f0, 0x21C(r3)
      stfs      f0, 0x4(r4)
      lfs       f0, 0x220(r3)
      stfs      f0, 0x8(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8013F748
 * Size:	000208
 */
void Game::Navi::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      beq-      .loc_0x40
      addi      r0, r31, 0x310
      lis       r3, 0x804B
      stw       r0, 0x250(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x310(r31)
      stw       r0, 0x314(r31)
      stw       r0, 0x318(r31)

    .loc_0x40:
      mr        r3, r31
      bl        -0x2B24
      lis       r3, 0x804B
      addi      r5, r31, 0x310
      addi      r6, r3, 0x5BC
      li        r4, 0
      stw       r6, 0x0(r31)
      addi      r3, r6, 0x1B0
      addi      r7, r6, 0x230
      li        r0, 0x1
      stw       r3, 0x178(r31)
      li        r3, 0x3C8
      lwz       r6, 0x250(r31)
      stw       r7, 0x0(r6)
      lwz       r6, 0x250(r31)
      sub       r5, r5, r6
      stw       r5, 0xC(r6)
      stb       r4, 0x288(r31)
      stb       r4, 0x289(r31)
      stw       r4, 0x278(r31)
      stw       r4, 0x27C(r31)
      stw       r4, 0x280(r31)
      stw       r4, 0x284(r31)
      stw       r4, 0x28C(r31)
      sth       r0, 0x128(r31)
      bl        -0x11B948
      mr.       r0, r3
      beq-      .loc_0xB8
      bl        .loc_0x208
      mr        r0, r3

    .loc_0xB8:
      stw       r0, 0x2D0(r31)
      li        r4, 0
      li        r5, 0
      li        r6, 0
      lwz       r3, 0x2D0(r31)
      li        r7, 0
      bl        0x2785D4
      lwz       r4, 0x2D0(r31)
      addi      r0, r31, 0x20C
      li        r3, 0x20
      stw       r0, 0x8(r4)
      bl        -0x11B988
      cmplwi    r3, 0
      beq-      .loc_0x110
      lis       r5, 0x804B
      lis       r4, 0x804B
      addi      r0, r5, 0x974
      li        r5, -0x1
      stw       r0, 0x0(r3)
      addi      r0, r4, 0x376C
      stw       r5, 0x18(r3)
      stw       r0, 0x0(r3)

    .loc_0x110:
      stw       r3, 0x270(r31)
      mr        r4, r31
      lwz       r3, 0x270(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, 0x114
      bl        -0x11B9D4
      mr.       r0, r3
      beq-      .loc_0x148
      li        r4, 0x64
      bl        0x557D8
      mr        r0, r3

    .loc_0x148:
      stw       r0, 0x254(r31)
      li        r3, 0x20
      lfs       f0, -0x6008(r2)
      stfs      f0, 0x118(r31)
      bl        -0x11B9FC
      mr.       r0, r3
      beq-      .loc_0x16C
      bl        0x74F04
      mr        r0, r3

    .loc_0x16C:
      stw       r0, 0x2D8(r31)
      li        r4, 0x10
      lwz       r3, 0x2D8(r31)
      bl        0x74F0C
      li        r0, 0x1
      li        r3, 0x10
      stb       r0, 0x135(r31)
      bl        -0x11BA2C
      mr.       r30, r3
      beq-      .loc_0x1A4
      bl        0x2F4A78
      lis       r3, 0x804F
      subi      r0, r3, 0x3B88
      stw       r0, 0x0(r30)

    .loc_0x1A4:
      stw       r30, 0x298(r31)
      li        r3, 0xC
      bl        -0x11BA50
      mr.       r30, r3
      beq-      .loc_0x1C8
      bl        0x2F4A54
      lis       r3, 0x804F
      subi      r0, r3, 0x3B74
      stw       r0, 0x0(r30)

    .loc_0x1C8:
      stw       r30, 0x29C(r31)
      li        r3, 0x94
      bl        -0x11BA74
      mr.       r0, r3
      beq-      .loc_0x1E8
      mr        r4, r31
      bl        0x323198
      mr        r0, r3

    .loc_0x1E8:
      stw       r0, 0x26C(r31)
      mr        r3, r31
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x208:
    */
}

/*
 * --INFO--
 * Address:	8013F950
 * Size:	0002B0
 */
void efx::TNaviEffect::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r4, 0x8014
      lis       r5, 0x8014
      stw       r0, 0x44(r1)
      li        r0, 0
      addi      r4, r4, 0x5C
      subi      r5, r5, 0x4
      stmw      r21, 0x14(r1)
      mr        r31, r3
      li        r6, 0x1C
      li        r7, 0x1
      stb       r0, 0x0(r3)
      addi      r3, r31, 0x28
      stb       r0, 0x1(r31)
      stb       r0, 0x2(r31)
      stb       r0, 0x3(r31)
      stb       r0, 0x4(r31)
      stb       r0, 0x5(r31)
      stb       r0, 0x6(r31)
      stb       r0, 0x7(r31)
      stw       r0, 0x8(r31)
      stw       r0, 0xC(r31)
      stw       r0, 0x10(r31)
      stw       r0, 0x14(r31)
      stw       r0, 0x18(r31)
      bl        -0x7E17C
      lis       r3, 0x8014
      lis       r5, 0x8014
      addi      r4, r3, 0x5C
      li        r6, 0x1C
      addi      r3, r31, 0x44
      subi      r5, r5, 0x4
      li        r7, 0x1
      bl        -0x7E19C
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r4, r4, 0x5808
      lis       r6, 0x804A
      stw       r4, 0x60(r31)
      addi      r0, r3, 0x960
      lis       r3, 0x804E
      lis       r5, 0x804E
      stw       r0, 0x60(r31)
      addi      r25, r5, 0x698C
      lis       r8, 0x804A
      addi      r7, r3, 0x7264
      stw       r4, 0x64(r31)
      subi      r0, r8, 0x1D84
      lis       r3, 0x804E
      lis       r5, 0x804B
      stw       r0, 0x68(r31)
      addi      r27, r3, 0x7218
      addi      r6, r6, 0x3358
      addi      r28, r5, 0x914
      stw       r6, 0x6C(r31)
      lis       r3, 0x804B
      addi      r10, r3, 0x8C8
      lis       r5, 0x804E
      stw       r7, 0x64(r31)
      addi      r6, r7, 0x14
      addi      r8, r5, 0x72B8
      addi      r29, r31, 0xAC
      stw       r6, 0x68(r31)
      addi      r6, r7, 0x30
      lis       r3, 0x804E
      li        r24, 0
      stw       r6, 0x6C(r31)
      addi      r7, r3, 0x6B0C
      addi      r30, r29, 0x14
      addi      r23, r25, 0x14
      stw       r24, 0x78(r31)
      li        r26, 0x67
      addi      r22, r27, 0x14
      addi      r12, r28, 0x14
      stw       r4, 0x7C(r31)
      li        r11, 0x68
      addi      r9, r10, 0x14
      addi      r6, r7, 0x14
      stw       r0, 0x80(r31)
      li        r5, 0x19
      mr        r3, r30
      stw       r25, 0x7C(r31)
      stw       r23, 0x80(r31)
      stw       r24, 0x84(r31)
      sth       r26, 0x88(r31)
      stb       r24, 0x8A(r31)
      stw       r27, 0x7C(r31)
      stw       r22, 0x80(r31)
      stw       r28, 0x7C(r31)
      stw       r12, 0x80(r31)
      stw       r4, 0x94(r31)
      stw       r0, 0x98(r31)
      stw       r25, 0x94(r31)
      stw       r23, 0x98(r31)
      stw       r24, 0x9C(r31)
      sth       r11, 0xA0(r31)
      stb       r24, 0xA2(r31)
      stw       r27, 0x94(r31)
      stw       r22, 0x98(r31)
      stw       r10, 0x94(r31)
      stw       r9, 0x98(r31)
      stw       r4, 0xAC(r31)
      stw       r8, 0xAC(r31)
      stw       r4, 0xB0(r31)
      stw       r0, 0xB4(r31)
      stw       r7, 0xB0(r31)
      stw       r6, 0xB4(r31)
      stw       r24, 0xB8(r31)
      sth       r5, 0xBC(r31)
      bl        0x2D1888
      lis       r3, 0x804B
      lis       r4, 0x8014
      addi      r0, r3, 0x8B8
      li        r6, 0x24
      stw       r0, 0x0(r30)
      li        r0, 0
      lis       r3, 0x8014
      subi      r4, r4, 0x37C
      stw       r0, 0x10(r30)
      subi      r5, r3, 0x2A0
      addi      r3, r29, 0x3C
      li        r7, 0x10
      stw       r0, 0xC(r30)
      stw       r0, 0x8(r30)
      stw       r0, 0x4(r30)
      stw       r0, 0x24(r29)
      stw       r0, 0x20(r29)
      stw       r0, 0x1C(r29)
      stw       r0, 0x18(r29)
      bl        -0x7E31C
      mr        r3, r29
      li        r4, 0
      li        r5, 0x10
      bl        0x276ED8
      addi      r21, r31, 0x33C
      li        r4, 0
      mr        r3, r21
      li        r5, 0x123
      li        r6, 0x123
      bl        0x27091C
      lis       r3, 0x804E
      addi      r22, r31, 0x36C
      addi      r3, r3, 0x72E8
      li        r0, 0
      stw       r3, 0x0(r21)
      mr        r3, r22
      li        r4, 0
      li        r5, 0x124
      stw       r0, 0x2C(r21)
      li        r6, 0x125
      bl        0x2708F0
      lis       r3, 0x804E
      addi      r21, r31, 0x39C
      addi      r3, r3, 0x72CC
      li        r0, 0
      stw       r3, 0x0(r22)
      mr        r3, r21
      li        r4, 0
      li        r5, 0x121
      stw       r0, 0x2C(r22)
      li        r6, 0x122
      bl        0x270C24
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x89C
      stw       r0, 0x0(r21)
      lmw       r21, 0x14(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void efx::TOrimadamage::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8013FC00
 * Size:	000084
 */
void efx::TChaseMtxT::__dt(void)
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
      beq-      .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x685C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x58
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0xAFFB8

    .loc_0x58:
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x11BBB0

    .loc_0x68:
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
 * Size:	000080
 */
void efx::TChaseMtxT2::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void efx::TOrimaLightAct::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void efx::TOrimaLight::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void efx::TChaseMtx2::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void efx::TCursor::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8013FC84
 * Size:	000050
 */
void efx::Context::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x2D16F8
      lis       r3, 0x804B
      li        r0, 0
      addi      r4, r3, 0x8B8
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x10(r31)
      stw       r0, 0xC(r31)
      stw       r0, 0x8(r31)
      stw       r0, 0x4(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8013FCD4
 * Size:	00008C
 */
void efx::TOneEmitter::__dt(void)
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
      beq-      .loc_0x70
      lis       r3, 0x804E
      addic.    r0, r30, 0x10
      addi      r3, r3, 0x6B0C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x54
      lis       r4, 0x804B
      addi      r3, r30, 0x10
      addi      r0, r4, 0x8B8
      li        r4, 0
      stw       r0, 0x10(r30)
      bl        0x2D1864

    .loc_0x54:
      addi      r3, r30, 0x4
      li        r4, 0
      bl        -0xB0094
      extsh.    r0, r31
      ble-      .loc_0x70
      mr        r3, r30
      bl        -0x11BC8C

    .loc_0x70:
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
 * Address:	8013FD60
 * Size:	000060
 */
void efx::Context::__dt(void)
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
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0x8B8
      stw       r0, 0x0(r30)
      bl        0x2D17F8
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x11BCEC

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
 * Size:	000154
 */
void efx::TFueact::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8013FDC0
 * Size:	00009C
 */
void efx::TFueactBiri2::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804B
      addi      r3, r3, 0x8C8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x7218
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0xB0190

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x11BD88

    .loc_0x80:
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
 * Address:	8013FE5C
 * Size:	00009C
 */
void efx::TFueactBiri1::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804B
      addi      r3, r3, 0x914
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x7218
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0xB022C

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x11BE24

    .loc_0x80:
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
 * Address:	8013FEF8
 * Size:	000084
 */
void efx::TFueactBiriBase::__dt(void)
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
      beq-      .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x7218
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x58
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0xB02B0

    .loc_0x58:
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x11BEA8

    .loc_0x68:
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
 * Address:	8013FF7C
 * Size:	000080
 */
void efx::TFueactCircle::__dt(void)
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
      addi      r3, r30, 0x8
      addi      r6, r4, 0x7264
      li        r4, 0
      stw       r6, 0x0(r30)
      addi      r5, r6, 0x14
      addi      r0, r6, 0x30
      stw       r5, 0x4(r30)
      stw       r0, 0x8(r30)
      bl        -0xABF98
      addi      r3, r30, 0x4
      li        r4, 0
      bl        -0xB0330
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x11BF28

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
 * Address:	........
 * Size:	000060
 */
void efx::ToeHamonB::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::ToeHamonA::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8013FFFC
 * Size:	000060
 */
void efx::ContextChasePos::__dt(void)
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
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0x81C
      stw       r0, 0x0(r30)
      bl        0x2D155C
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x11BF88

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
 * Address:	8014005C
 * Size:	000054
 */
void efx::ContextChasePos::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x2D1320
      lis       r3, 0x804B
      li        r0, 0
      addi      r4, r3, 0x81C
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x10(r31)
      stw       r0, 0xC(r31)
      stw       r0, 0x8(r31)
      stw       r0, 0x4(r31)
      stw       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801400B0
 * Size:	000290
 */
void Game::Navi::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x3878
      stw       r30, 0x8(r1)
      mr        r30, r3
      stb       r0, 0x259(r3)
      stb       r0, 0x258(r3)
      bl        0x4A68
      mr        r3, r30
      bl        0x4AC4
      li        r0, 0
      lfs       f0, -0x600C(r2)
      stb       r0, 0x2A4(r30)
      mr        r3, r30
      stfs      f0, 0x2F8(r30)
      stw       r0, 0x260(r30)
      stw       r0, 0x25C(r30)
      bl        -0x3370
      lwz       r3, -0x6D20(r13)
      mr        r4, r30
      bl        0x1A924
      lwz       r4, 0x174(r30)
      li        r0, 0
      mr        r3, r30
      lwz       r4, 0x8(r4)
      lwz       r4, 0x4(r4)
      lwz       r4, 0x28(r4)
      lwz       r4, 0x0(r4)
      stw       r0, 0x54(r4)
      lwz       r4, 0x174(r30)
      lwz       r4, 0x8(r4)
      lwz       r4, 0x4(r4)
      lwz       r4, 0x28(r4)
      lwz       r4, 0x4(r4)
      stw       r0, 0x54(r4)
      stb       r0, 0x288(r30)
      stb       r0, 0x289(r30)
      lhz       r0, 0x288(r30)
      rlwinm    r0,r0,0,16,30
      sth       r0, 0x288(r30)
      bl        -0x32EC
      li        r0, 0
      lfs       f0, -0x600C(r2)
      stb       r0, 0x268(r30)
      li        r3, 0x3C
      stfs      f0, 0x308(r30)
      bl        -0x11C2D4
      mr.       r0, r3
      beq-      .loc_0xE0
      mr        r4, r30
      bl        0x24F00
      mr        r0, r3

    .loc_0xE0:
      stw       r0, 0x28C(r30)
      li        r0, 0
      lfs       f0, -0x600C(r2)
      li        r6, 0
      stb       r0, 0x2DE(r30)
      stw       r0, 0x2A8(r30)
      stfs      f0, 0x2B0(r30)
      stb       r0, 0x2AC(r30)
      lwz       r5, -0x6D20(r13)
      lwz       r3, 0x114(r30)
      lwz       r4, 0x174(r30)
      lwz       r5, 0xCC(r5)
      bl        -0xC154
      lwz       r3, 0x114(r30)
      lis       r0, 0x8000
      lwz       r3, 0x0(r3)
      cmplw     r3, r0
      bge-      .loc_0x13C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x346
      crclr     6, 0x6
      bl        -0x115BA8

    .loc_0x13C:
      lwz       r3, 0x114(r30)
      lwz       r4, 0x174(r30)
      bl        -0xA72C
      lwz       r3, 0x270(r30)
      mr        r4, r30
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1AC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x174(r30)
      addi      r4, r31, 0x34
      bl        0x2FEDB0
      stw       r3, 0x2C0(r30)
      lwz       r3, 0x2C0(r30)
      bl        0x2E9660
      lwz       r5, 0x2D0(r30)
      subi      r4, r2, 0x6000
      stw       r3, 0x10(r5)
      lwz       r5, 0x28C(r30)
      lwz       r3, 0x2D0(r30)
      addi      r0, r5, 0xC
      stw       r0, 0xC(r3)
      lwz       r3, 0x174(r30)
      bl        0x2FED80
      bl        0x2E9638
      lwz       r4, 0x2D0(r30)
      stw       r3, 0x14(r4)
      lhz       r4, 0x2DC(r30)
      lwz       r3, 0x2D0(r30)
      neg       r0, r4
      or        r0, r0, r4
      rlwinm    r4,r0,1,31,31
      bl        0x277B9C
      lwz       r3, 0x2D0(r30)
      lwz       r0, 0x0(r3)
      ori       r0, r0, 0x2
      stw       r0, 0x0(r3)
      lwz       r4, 0x10(r3)
      bl        0x277E5C
      mr        r3, r30
      bl        0x1D40
      li        r0, 0
      lfs       f0, -0x5FF8(r2)
      stb       r0, 0x26A(r30)
      fmr       f1, f0
      stb       r0, 0x269(r30)
      lhz       r0, 0x2DC(r30)
      cmplwi    r0, 0x1
      bne-      .loc_0x224
      lfs       f0, -0x5FF4(r2)
      fmr       f1, f0

    .loc_0x224:
      stfs      f0, 0x168(r30)
      stfs      f0, 0x16C(r30)
      stfs      f1, 0x170(r30)
      lwz       r3, 0x298(r30)
      lhz       r0, 0x2DC(r30)
      lwz       r12, 0x0(r3)
      mulli     r31, r0, 0x14
      lwz       r0, -0x6D20(r13)
      lwz       r12, 0x8(r12)
      addi      r4, r31, 0x60
      add       r4, r0, r4
      mtctr     r12
      bctrl
      lwz       r3, 0x29C(r30)
      addi      r4, r31, 0x88
      lwz       r0, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      add       r4, r0, r4
      lwz       r12, 0x8(r12)
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
 * Address:	80140340
 * Size:	000008
 */
void Game::Navi::getCreatureID(void)
{
    /*
    .loc_0x0:
      lhz       r3, 0x2DC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80140348
 * Size:	000034
 */
void start__Q24Game26StateMachine<Game::Navi>
FPQ24Game4NaviiPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r0, 0x274(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	8014037C
 * Size:	000088
 */
void onSetPosition__Q24Game4NaviFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lfs       f0, 0x0(r4)
      stfs      f0, 0x20C(r3)
      lfs       f0, 0x4(r4)
      stfs      f0, 0x210(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x214(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x218(r12)
      mtctr     r12
      bctrl
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      mr        r3, r31
      li        r4, 0xE
      li        r5, 0
      bl        0xDE1B4
      b         .loc_0x6C

    .loc_0x5C:
      mr        r3, r31
      li        r4, 0xD
      li        r5, 0
      bl        0xDE1A0

    .loc_0x6C:
      lwz       r3, 0x28C(r31)
      bl        0x24CD0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140404
 * Size:	000040
 */
void Game::Navi::onKill((Game::CreatureKillArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x35CC
      lwz       r3, 0x2D0(r31)
      lwz       r0, 0x0(r3)
      rlwinm    r0,r0,0,31,29
      stw       r0, 0x0(r3)
      bl        0x277D48
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140444
 * Size:	0000D4
 */
void Game::Navi::onKeyEvent((SysShape::KeyEvent const&))
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
      lwz       r3, 0x274(r3)
      cmplwi    r3, 0
      beq-      .loc_0x44
      lwz       r12, 0x0(r3)
      mr        r4, r29
      mr        r5, r30
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x44:
      lwz       r3, 0x248(r29)
      cmplwi    r3, 0
      beq-      .loc_0xB8
      addi      r3, r3, 0x5C
      bl        0x2DBF9C
      mr        r0, r3
      mr        r3, r29
      lwz       r12, 0x0(r29)
      mr        r31, r0
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      li        r31, 0x4

    .loc_0x80:
      lwz       r0, 0x1C(r30)
      cmplwi    r0, 0xC8
      bne-      .loc_0xA0
      lwz       r3, 0x26C(r29)
      mr        r5, r31
      li        r4, 0x840
      bl        0x322A28
      b         .loc_0xB8

    .loc_0xA0:
      cmplwi    r0, 0xC9
      bne-      .loc_0xB8
      lwz       r3, 0x26C(r29)
      mr        r5, r31
      li        r4, 0x820
      bl        0x322A0C

    .loc_0xB8:
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
 * Address:	80140518
 * Size:	000004
 */
void Game::NaviState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8014051C
 * Size:	000080
 */
void Game::Navi::getPosition(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r5, -0x64AC(r13)
      cmplwi    r5, 0
      beq-      .loc_0x54
      lwz       r0, 0x1F0(r5)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x54
      lwz       r3, 0x174(r4)
      lwz       r3, 0x10(r3)
      bl        0x2E9350
      lfs       f1, 0x1C(r3)
      lfs       f2, 0x2C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f2, 0x8(r31)
      b         .loc_0x6C

    .loc_0x54:
      lfs       f0, 0x20C(r4)
      stfs      f0, 0x0(r31)
      lfs       f0, 0x210(r4)
      stfs      f0, 0x4(r31)
      lfs       f0, 0x214(r4)
      stfs      f0, 0x8(r31)

    .loc_0x6C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Navi::insideOnyon(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014059C
 * Size:	000050
 */
void Game::Navi::onStickStart((Game::Creature*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3C
      lbz       r3, 0x259(r31)
      addi      r0, r3, 0x1
      stb       r0, 0x259(r31)

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801405EC
 * Size:	000058
 */
void Game::Navi::onStickEnd((Game::Creature*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x44
      lbz       r3, 0x259(r31)
      cmplwi    r3, 0
      beq-      .loc_0x44
      subi      r0, r3, 0x1
      stb       r0, 0x259(r31)

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140644
 * Size:	000654
 */
void Game::Navi::procActionButton(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      stw       r0, 0xE4(r1)
      stfd      f31, 0xD0(r1)
      psq_st    f31,0xD8(r1),0,0
      stfd      f30, 0xC0(r1)
      psq_st    f30,0xC8(r1),0,0
      stfd      f29, 0xB0(r1)
      psq_st    f29,0xB8(r1),0,0
      stfd      f28, 0xA0(r1)
      psq_st    f28,0xA8(r1),0,0
      stmw      r27, 0x8C(r1)
      mr        r31, r3
      lbz       r0, 0x26A(r3)
      cmplwi    r0, 0
      beq-      .loc_0x50
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f28, 0x2C8(r3)
      b         .loc_0x5C

    .loc_0x50:
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f28, 0x2A0(r3)

    .loc_0x5C:
      lwz       r3, -0x6B90(r13)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      addi      r3, r3, 0x30

    .loc_0x6C:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x5A4
      fmuls     f28, f28, f28
      cmplwi    r0, 0
      stw       r4, 0x38(r1)
      li        r30, 0
      stw       r0, 0x44(r1)
      stw       r0, 0x3C(r1)
      stw       r3, 0x40(r1)
      bne-      .loc_0xB0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2C8

    .loc_0xB0:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x11C

    .loc_0xC8:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2C8
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x11C:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xC8
      b         .loc_0x2C8

    .loc_0x13C:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      addi      r3, r1, 0x2C
      mr        r4, r0
      lwz       r12, 0x0(r4)
      mr        r28, r4
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r31)
      lfs       f31, 0x2C(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x30(r1)
      lfs       f29, 0x34(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x24(r1)
      mr        r3, r28
      lfs       f0, 0x28(r1)
      fsubs     f3, f30, f1
      lfs       f1, 0x20(r1)
      fsubs     f0, f29, f0
      fsubs     f2, f31, f1
      fabs      f1, f3
      fmuls     f0, f0, f0
      frsp      f31, f1
      fmadds    f29, f2, f2, f0
      bl        0x99C8C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x20C
      fcmpo     cr0, f29, f28
      bge-      .loc_0x20C
      lfs       f0, -0x5FF0(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x20C
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x204
      lhz       r0, 0x2DC(r31)
      lhz       r3, 0x1F4(r28)
      subfic    r0, r0, 0x1
      cmpw      r3, r0
      bne-      .loc_0x20C

    .loc_0x204:
      fmr       f28, f29
      mr        r30, r28

    .loc_0x20C:
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x238
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2C8

    .loc_0x238:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2AC

    .loc_0x258:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2C8
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x2AC:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x258

    .loc_0x2C8:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x13C
      cmplwi    r30, 0
      beq-      .loc_0x61C
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x7C(r1)
      mr        r4, r30
      addi      r5, r1, 0x64
      bl        0x3AC
      lwz       r3, 0x270(r31)
      mr        r4, r31
      addi      r6, r1, 0x64
      li        r5, 0x9
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r31)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr.       r29, r3
      beq-      .loc_0x614
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x614
      mr        r3, r29
      bl        0xA98
      cmpwi     r3, 0x1
      bne-      .loc_0x614
      lwz       r3, -0x6D20(r13)
      li        r28, 0
      lwz       r0, 0x44(r1)
      lwz       r3, 0xC8(r3)
      cmplwi    r0, 0
      lfs       f0, 0x2C8(r3)
      fmuls     f28, f0, f0
      bne-      .loc_0x3B0
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x5AC

    .loc_0x3B0:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x420

    .loc_0x3CC:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5AC
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x420:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x3CC
      b         .loc_0x5AC

    .loc_0x440:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r27, r3
      cmplw     r27, r30
      beq-      .loc_0x4F0
      mr        r4, r3
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f29, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18(r1)
      lfs       f31, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      mr        r3, r27
      lfs       f0, 0x10(r1)
      fsubs     f3, f30, f1
      lfs       f1, 0x8(r1)
      fsubs     f0, f31, f0
      fsubs     f2, f29, f1
      fabs      f1, f3
      fmuls     f0, f0, f0
      frsp      f31, f1
      fmadds    f29, f2, f2, f0
      bl        0x99984
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x4F0
      fcmpo     cr0, f29, f28
      bge-      .loc_0x4F0
      lfs       f0, -0x5FF0(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x4F0
      fmr       f28, f29
      mr        r28, r27

    .loc_0x4F0:
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x51C
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x5AC

    .loc_0x51C:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x590

    .loc_0x53C:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5AC
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x590:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x53C

    .loc_0x5AC:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x440
      cmplwi    r28, 0
      beq-      .loc_0x614
      li        r0, 0
      mr        r3, r29
      stb       r0, 0x60(r1)
      mr        r4, r28
      addi      r5, r1, 0x48
      bl        0xC8
      li        r0, 0x1
      mr        r4, r29
      stb       r0, 0x60(r1)
      addi      r6, r1, 0x48
      li        r5, 0x9
      lwz       r3, 0x270(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x614:
      li        r3, 0x1
      b         .loc_0x620

    .loc_0x61C:
      li        r3, 0

    .loc_0x620:
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      psq_l     f29,0xB8(r1),0,0
      lfd       f29, 0xB0(r1)
      psq_l     f28,0xA8(r1),0,0
      lfd       f28, 0xA0(r1)
      lmw       r27, 0x8C(r1)
      lwz       r0, 0xE4(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	80140C98
 * Size:	000010
 */
void MonoObjectMgr<Game::Navi>::getAt(int)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x320
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80140CA8
 * Size:	00004C
 */
void Iterator<Game::ItemPikihead::Item>::isDone()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      sub       r0, r3, r0
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140CF4
 * Size:	000138
 */
void Game::Navi::setupNukuAdjustArg((Game::ItemPikihead::Item*,
                                     Game::NaviNukuAdjustStateArg&))
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
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      mr        r29, r3
      mr        r30, r4
      mr        r4, r29
      mr        r31, r5
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x1C(r1)
      lfs       f2, 0x10(r1)
      lfs       f1, 0x14(r1)
      lfs       f0, 0x8(r1)
      fsubs     f30, f3, f2
      lfs       f3, 0x18(r1)
      fsubs     f29, f1, f0
      lfs       f0, 0xC(r1)
      fmr       f2, f30
      fsubs     f31, f3, f0
      fmr       f1, f29
      bl        0x2D0A50
      bl        0x2D0E40
      lfs       f2, 0x1FC(r29)
      bl        0x2D0E64
      lfs       f2, -0x6014(r2)
      fmuls     f0, f31, f31
      fdivs     f1, f1, f2
      fmadds    f0, f29, f29, f0
      stfs      f1, 0x0(r31)
      fmadds    f1, f30, f30, f0
      bl        0x2D0A50
      lfs       f2, -0x6008(r2)
      li        r0, 0x2
      lfs       f0, -0x5FE8(r2)
      fdivs     f2, f2, f1
      lfs       f3, -0x5FEC(r2)
      fsubs     f0, f1, f0
      fmuls     f0, f2, f0
      fmuls     f2, f3, f0
      fmuls     f1, f29, f2
      fmuls     f0, f31, f2
      fmuls     f2, f30, f2
      stfs      f1, 0x4(r31)
      stfs      f0, 0x8(r31)
      stfs      f2, 0xC(r31)
      stw       r0, 0x10(r31)
      stw       r30, 0x14(r31)
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r0, 0x64(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80140E2C
 * Size:	000050
 */
void Game::Navi::hasDope((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, -0x6C18(r13)
      lwz       r0, 0x44(r5)
      cmpwi     r0, 0x1
      bne-      .loc_0x38
      rlwinm    r0,r4,2,0,29
      add       r3, r3, r0
      lwz       r3, 0x25C(r3)
      neg       r0, r3
      andc      r0, r0, r3
      rlwinm    r3,r0,1,31,31
      b         .loc_0x40

    .loc_0x38:
      lwz       r3, -0x6B70(r13)
      bl        0xA76EC

    .loc_0x40:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140E7C
 * Size:	000044
 */
void Game::Navi::getDopeCount((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, -0x6C18(r13)
      lwz       r0, 0x44(r5)
      cmpwi     r0, 0x1
      bne-      .loc_0x2C
      rlwinm    r0,r4,2,0,29
      add       r3, r3, r0
      lwz       r3, 0x25C(r3)
      b         .loc_0x34

    .loc_0x2C:
      lwz       r3, -0x6B70(r13)
      bl        0xA752C

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140EC0
 * Size:	00004C
 */
void Game::Navi::useDope((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, -0x6C18(r13)
      lwz       r0, 0x44(r5)
      cmpwi     r0, 0x1
      bne-      .loc_0x34
      rlwinm    r0,r4,2,0,29
      add       r4, r3, r0
      lwz       r3, 0x25C(r4)
      subi      r0, r3, 0x1
      stw       r0, 0x25C(r4)
      b         .loc_0x3C

    .loc_0x34:
      lwz       r3, -0x6B70(r13)
      bl        0xA780C

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80140F0C
 * Size:	0000A0
 */
void Game::Navi::incDopeCount((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r6, -0x6C18(r13)
      lwz       r0, 0x44(r6)
      cmpwi     r0, 0x1
      bne-      .loc_0x80
      lhz       r5, 0x2DC(r30)
      lis       r3, 0x804B
      addi      r0, r3, 0x590
      lis       r3, 0x804B
      stw       r0, 0x8(r1)
      addi      r0, r3, 0x61BC
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      stw       r5, 0xC(r1)
      stw       r31, 0x10(r1)
      lwz       r3, 0x58(r6)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r31,2,0,29
      add       r4, r30, r0
      lwz       r3, 0x25C(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x25C(r4)
      b         .loc_0x88

    .loc_0x80:
      lwz       r3, -0x6B70(r13)
      bl        0xA7544

    .loc_0x88:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80140FAC
 * Size:	000008
 */
void Game::BaseGameSection::sendMessage((Game::GameMessage&))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80140FB4
 * Size:	0002E0
 */
void applyDopes__Q24Game4NaviFiR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r4
      cmpwi     r30, 0x1
      stw       r29, 0x54(r1)
      mr        r29, r3
      stw       r28, 0x50(r1)
      bne-      .loc_0x98
      lfs       f0, 0x0(r5)
      lis       r6, 0x804B
      lis       r3, 0x804B
      lwzu      r7, 0x4EC(r3)
      stfs      f0, 0x24(r1)
      addi      r9, r6, 0x584
      lis       r4, 0x804B
      lfs       f0, -0x5FE4(r2)
      lfs       f1, 0x4(r5)
      addi      r8, r4, 0x578
      lwz       r6, 0x4(r3)
      addi      r4, r1, 0x24
      stfs      f1, 0x28(r1)
      lwz       r0, 0x8(r3)
      lfs       f1, 0x8(r5)
      addi      r5, r1, 0x34
      lwz       r3, -0x6D38(r13)
      stw       r9, 0x34(r1)
      stfs      f1, 0x2C(r1)
      stfs      f0, 0x30(r1)
      stw       r8, 0x34(r1)
      stw       r29, 0x38(r1)
      stw       r7, 0x3C(r1)
      stw       r6, 0x40(r1)
      stw       r0, 0x44(r1)
      bl        0x15584
      b         .loc_0x2C0

    .loc_0x98:
      lwz       r3, 0x254(r29)
      li        r0, 0
      lis       r4, 0x804B
      li        r31, 0
      subi      r4, r4, 0x437C
      cmplwi    r0, 0
      stw       r4, 0x14(r1)
      stw       r0, 0x20(r1)
      stw       r0, 0x18(r1)
      stw       r3, 0x1C(r1)
      bne-      .loc_0xDC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x2A0

    .loc_0xDC:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x148

    .loc_0xF4:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2A0
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x148:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xF4
      b         .loc_0x2A0

    .loc_0x168:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r28, r3
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E4
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r4, r4, 0x5D00
      stw       r29, 0xC(r1)
      addi      r0, r3, 0x4998
      mr        r3, r28
      stw       r4, 0x8(r1)
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      stw       r30, 0x10(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E4
      cmplwi    r31, 0
      bne-      .loc_0x1E4
      mr        r31, r28

    .loc_0x1E4:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x210
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x2A0

    .loc_0x210:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x284

    .loc_0x230:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2A0
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x284:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x230

    .loc_0x2A0:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x168

    .loc_0x2C0:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      lwz       r28, 0x50(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80141294
 * Size:	0001B0
 */
void Game::Navi::applyDopeSmoke((Game::CellObject*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stfd      f31, 0x90(r1)
      psq_st    f31,0x98(r1),0,0
      stfd      f30, 0x80(r1)
      psq_st    f30,0x88(r1),0,0
      stfd      f29, 0x70(r1)
      psq_st    f29,0x78(r1),0,0
      stfd      f28, 0x60(r1)
      psq_st    f28,0x68(r1),0,0
      stfd      f27, 0x50(r1)
      psq_st    f27,0x58(r1),0,0
      stfd      f26, 0x40(r1)
      psq_st    f26,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r3
      mr        r0, r4
      mr        r4, r30
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r30)
      mr        r31, r0
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x28C(r30)
      lfs       f29, 0x18(r1)
      lfs       f0, 0x10(r3)
      lfs       f30, 0x14(r1)
      fsubs     f27, f0, f29
      lfs       f0, 0xC(r3)
      lfs       f31, 0x1C(r1)
      lfs       f1, 0x14(r3)
      fsubs     f28, f0, f30
      fmuls     f0, f27, f27
      fsubs     f26, f1, f31
      fmadds    f0, f28, f28, f0
      fmadds    f1, f26, f26, f0
      bl        0x2D04D4
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xC0
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f28, f28, f0
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0

    .loc_0xC0:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, -0x5FE0(r2)
      lfs       f3, 0xC(r1)
      fmuls     f2, f27, f4
      lfs       f1, 0x8(r1)
      fmuls     f0, f28, f4
      lfs       f5, 0x10(r1)
      fmuls     f4, f26, f4
      fadds     f2, f29, f2
      fadds     f0, f30, f0
      fadds     f4, f31, f4
      fsubs     f2, f3, f2
      fsubs     f1, f1, f0
      fsubs     f3, f5, f4
      fmuls     f0, f2, f2
      fmadds    f0, f1, f1, f0
      fmadds    f1, f3, f3, f0
      bl        0x2D0458
      lfs       f0, -0x5FE4(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x168
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r4, r4, 0x5D00
      li        r0, 0x1
      stw       r4, 0x20(r1)
      addi      r5, r3, 0x4998
      mr        r3, r31
      addi      r4, r1, 0x20
      stw       r30, 0x24(r1)
      stw       r5, 0x20(r1)
      stw       r0, 0x28(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x168:
      psq_l     f31,0x98(r1),0,0
      lfd       f31, 0x90(r1)
      psq_l     f30,0x88(r1),0,0
      lfd       f30, 0x80(r1)
      psq_l     f29,0x78(r1),0,0
      lfd       f29, 0x70(r1)
      psq_l     f28,0x68(r1),0,0
      lfd       f28, 0x60(r1)
      psq_l     f27,0x58(r1),0,0
      lfd       f27, 0x50(r1)
      psq_l     f26,0x48(r1),0,0
      lfd       f26, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r0, 0xA4(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr
    */
}

/*
 * --INFO--
 * Address:	80141444
 * Size:	00001C
 */
void Game::Navi::getStateID(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x274(r3)
      cmplwi    r3, 0
      beq-      .loc_0x14
      lwz       r3, 0x4(r3)
      blr

    .loc_0x14:
      li        r3, -0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80141460
 * Size:	000044
 */
void Game::Navi::transit((int, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r7, r3
      mr        r6, r5
      stw       r0, 0x14(r1)
      mr        r0, r4
      mr        r4, r7
      lwz       r3, 0x270(r3)
      mr        r5, r0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	801414A4
 * Size:	00000C
 */
void Game::Navi::getOlimarData(void)
{
    /*
    .loc_0x0:
      lwz       r3, -0x6B70(r13)
      addi      r3, r3, 0x48
      blr
    */
}

/*
 * --INFO--
 * Address:	801414B0
 * Size:	000014
 */
void Game::Navi::getJAIObject(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x26C(r3)
      cmplwi    r3, 0
      beqlr-
      addi      r3, r3, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801414C4
 * Size:	000008
 */
void Game::Navi::getPSCreature(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x26C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801414CC
 * Size:	000044
 */
void wallCallback__Q24Game4NaviFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x274(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80141510
 * Size:	000004
 */
void wallCallback__Q24Game9NaviStateFPQ24Game4NaviR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80141514
 * Size:	000044
 */
void Game::Navi::bounceCallback((Sys::Triangle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x274(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80141558
 * Size:	000004
 */
void Game::NaviState::bounceCallback((Game::Navi*, Sys::Triangle*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8014155C
 * Size:	000044
 */
void Game::Navi::collisionCallback((Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x274(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801415A0
 * Size:	000004
 */
void Game::NaviState::collisionCallback((Game::Navi*, Game::CollEvent&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801415A4
 * Size:	000194
 */
void Game::Navi::platCallback((Game::PlatEvent&))
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
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r30, r4
      lis       r4, 0x656C
      lwz       r5, 0x0(r30)
      mr        r29, r3
      lwz       r31, 0x10(r30)
      addi      r4, r4, 0x6563
      addi      r3, r5, 0xF8
      li        r5, 0x2A
      bl        0x2D1D08
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x138
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1
      addi      r3, r3, 0x48
      bl        0xA49C4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x160
      mr        r4, r31
      lwz       r5, 0x0(r30)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x8
      lwz       r5, 0xB8(r5)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x8(r5)
      lfs       f29, 0x18(r5)
      lfs       f31, 0x28(r5)
      mtctr     r12
      bctrl
      lfs       f1, 0x210(r29)
      lfs       f0, 0xC(r1)
      lfs       f2, 0x20C(r29)
      fsubs     f0, f1, f0
      lfs       f1, 0x8(r1)
      lfs       f4, 0x214(r29)
      fsubs     f2, f2, f1
      lfs       f3, 0x10(r1)
      fmuls     f1, f0, f29
      fsubs     f3, f4, f3
      lfs       f0, -0x600C(r2)
      fmadds    f1, f2, f30, f1
      fmadds    f1, f3, f31, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0xE8
      lfs       f0, -0x5FDC(r2)
      fmuls     f30, f30, f0
      fmuls     f31, f31, f0

    .loc_0xE8:
      lwz       r4, -0x6D20(r13)
      mr        r3, r29
      lfs       f1, -0x5FD8(r2)
      addi      r5, r1, 0x14
      lwz       r6, 0xC8(r4)
      li        r4, 0xC
      fmuls     f3, f30, f1
      lfs       f0, -0x5FD4(r2)
      lfs       f2, 0xC50(r6)
      fmuls     f1, f31, f1
      stw       r31, 0x14(r1)
      stfs      f3, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f1, 0x20(r1)
      stfs      f2, 0x24(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x22C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x160

    .loc_0x138:
      lwz       r6, 0x0(r30)
      lis       r3, 0x6669
      addi      r4, r3, 0x6E6C
      li        r5, 0x2A
      addi      r3, r6, 0xF8
      bl        0x2D1C0C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x160
      lwz       r3, 0x254(r29)
      bl        0x53954

    .loc_0x160:
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r0, 0x74(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Game::ColorAnimator::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void Game::ColorAnimLoop::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::ColorAnimator::start((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Game::ColorAnimator::setLoop((int, float, float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Game::ColorAnimator::animate((float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80141738
 * Size:	000004
 */
void viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8014173C
 * Size:	000008
 */
void Game::Navi::viewGetShape(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x174(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80141744
 * Size:	00001C
 */
void Game::Navi::viewGetBaseScale(void)
{
    /*
    .loc_0x0:
      lhz       r0, 0x2DC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x14
      lfs       f1, -0x5FF8(r2)
      blr

    .loc_0x14:
      lfs       f1, -0x5FF4(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	80141760
 * Size:	0001F8
 */
void Game::Navi::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x2FB0
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x50
      lbz       r0, 0x268(r31)
      cmplwi    r0, 0
      beq-      .loc_0x50
      lbz       r3, 0xD8(r31)
      li        r0, -0x35
      and       r0, r3, r0
      stb       r0, 0xD8(r31)

    .loc_0x50:
      lwz       r0, 0x278(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1E4
      lwz       r3, 0x298(r31)
      lfs       f1, -0x6014(r2)
      bl        0x2F2D88
      lwz       r3, 0x29C(r31)
      lfs       f1, -0x600C(r2)
      bl        0x2F2D7C
      lhz       r0, 0x288(r31)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0xD4
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x1F0(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xA8
      lwz       r3, 0x290(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      b         .loc_0xBC

    .loc_0xA8:
      lwz       r3, 0x290(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
      lwz       r3, 0x290(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xD4:
      lwz       r3, 0x2A8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x108
      lbz       r4, 0x2B8(r3)
      lis       r3, 0x8051
      addi      r0, r3, 0x22CC
      rlwinm    r3,r4,2,0,29
      add       r3, r0, r3
      lbz       r0, 0x0(r3)
      lbz       r6, 0x1(r3)
      lbz       r7, 0x2(r3)
      lbz       r8, 0x3(r3)
      b         .loc_0x118

    .loc_0x108:
      li        r7, 0xFF
      li        r8, 0xFF
      mr        r6, r7
      mr        r0, r7

    .loc_0x118:
      lwz       r3, 0x294(r31)
      lwz       r3, 0x8(r3)
      lwz       r3, 0x4(r3)
      lwz       r3, 0x60(r3)
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x184
      sth       r0, 0x8(r1)
      addi      r5, r1, 0x8
      li        r4, 0
      sth       r6, 0xA(r1)
      sth       r7, 0xC(r1)
      sth       r8, 0xE(r1)
      lwz       r3, 0x2C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x294(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x294(r31)
      lwz       r3, 0x8(r3)
      bl        -0xDAC74

    .loc_0x184:
      lhz       r0, 0x288(r31)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x1E4
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x1F0(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x1B8
      lwz       r3, 0x294(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1CC

    .loc_0x1B8:
      lwz       r3, 0x294(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1CC:
      lwz       r3, 0x294(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x1E4:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80141958
 * Size:	0002C4
 */
void Game::Navi::doAnimation(void)
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
      lwz       r12, 0x0(r3)
      mr        r31, r3
      lwz       r12, 0xC0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x12C
      lwz       r4, -0x6514(r13)
      mr        r3, r31
      lfs       f31, 0x54(r4)
      bl        -0x5C34
      addi      r3, r1, 0x2C
      bl        0x95E64
      lfs       f1, -0x5FD0(r2)
      mr        r3, r31
      lfs       f0, -0x5FCC(r2)
      addi      r4, r1, 0x2C
      stfs      f1, 0x2C(r1)
      stfs      f0, 0x30(r1)
      bl        0x95E7C
      lwz       r3, 0x174(r31)
      bl        0x2E7288
      lfs       f0, -0x5FC8(r2)
      addi      r3, r31, 0x1AC
      lwz       r12, 0x1AC(r31)
      fmuls     f31, f0, f31
      lwz       r12, 0xC(r12)
      fmr       f1, f31
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C8
      fmr       f1, f31
      lwz       r12, 0x1C8(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C8
      lwz       r30, 0x174(r31)
      lwz       r12, 0x1C8(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x8(r30)
      lwz       r4, 0x4(r4)
      lwz       r4, 0x28(r4)
      lwz       r4, 0x0(r4)
      stw       r3, 0x54(r4)
      addi      r3, r31, 0x138
      lwz       r4, 0x174(r31)
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x57788
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x114(r31)
      bl        -0xBFD8
      mr        r3, r31
      bl        .loc_0x2C4
      b         .loc_0x2A4

    .loc_0x12C:
      lwz       r0, -0x6CF8(r13)
      cmplwi    r0, 0
      beq-      .loc_0x144
      mr        r3, r31
      bl        -0x3210
      b         .loc_0x1F4

    .loc_0x144:
      lwz       r4, -0x6514(r13)
      mr        r3, r31
      lfs       f31, 0x54(r4)
      bl        -0x5D40
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x4A(r3)
      cmplwi    r0, 0
      bne-      .loc_0x19C
      addi      r3, r31, 0x1AC
      lfs       f0, 0x234(r31)
      lwz       r12, 0x1AC(r31)
      fmuls     f1, f0, f31
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C8
      lfs       f0, 0x234(r31)
      lwz       r12, 0x1C8(r31)
      fmuls     f1, f0, f31
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x19C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x3ED8
      mr        r3, r31
      bl        -0x3B2C
      lwz       r4, 0x174(r31)
      addi      r3, r31, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x5785C
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x114(r31)
      bl        -0xC0AC

    .loc_0x1F4:
      lwz       r3, 0x2C0(r31)
      bl        0x2E7D50
      lfs       f1, -0x5FC4(r2)
      addi      r4, r31, 0x2C4
      lfs       f0, -0x600C(r2)
      addi      r5, r1, 0x8
      stfs      f1, 0x2C4(r31)
      stfs      f0, 0x2C8(r31)
      stfs      f0, 0x2CC(r31)
      bl        -0x56F98
      lfs       f1, 0xC(r1)
      lfs       f2, 0x10(r1)
      lfs       f0, 0x8(r1)
      stfs      f0, 0x2C4(r31)
      stfs      f1, 0x2C8(r31)
      stfs      f2, 0x2CC(r31)
      lwz       r0, 0x278(r31)
      lwz       r3, 0x28C(r31)
      cmplwi    r0, 0
      lfs       f1, 0x24(r3)
      beq-      .loc_0x274
      lwz       r3, 0x2D0(r31)
      addi      r4, r1, 0x20
      lwz       r6, 0xC(r3)
      lwz       r5, 0x0(r6)
      lwz       r0, 0x4(r6)
      stw       r5, 0x20(r1)
      stw       r0, 0x24(r1)
      lwz       r0, 0x8(r6)
      stw       r0, 0x28(r1)
      bl        0x276710
      b         .loc_0x29C

    .loc_0x274:
      lwz       r3, 0x2D0(r31)
      addi      r4, r1, 0x14
      lwz       r6, 0xC(r3)
      lwz       r5, 0x0(r6)
      lwz       r0, 0x4(r6)
      stw       r5, 0x14(r1)
      stw       r0, 0x18(r1)
      lwz       r0, 0x8(r6)
      stw       r0, 0x1C(r1)
      bl        0x2766E4

    .loc_0x29C:
      mr        r3, r31
      bl        .loc_0x2C4

    .loc_0x2A4:
      psq_l     f31,0x48(r1),0,0
      lwz       r0, 0x54(r1)
      lfd       f31, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

    .loc_0x2C4:
    */
}

/*
 * --INFO--
 * Address:	80141C1C
 * Size:	000280
 */
void Game::Navi::updateCursor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x110(r1)
      mflr      r0
      stw       r0, 0x114(r1)
      stfd      f31, 0x100(r1)
      psq_st    f31,0x108(r1),0,0
      stfd      f30, 0xF0(r1)
      psq_st    f30,0xF8(r1),0,0
      stfd      f29, 0xE0(r1)
      psq_st    f29,0xE8(r1),0,0
      stfd      f28, 0xD0(r1)
      psq_st    f28,0xD8(r1),0,0
      stfd      f27, 0xC0(r1)
      psq_st    f27,0xC8(r1),0,0
      stfd      f26, 0xB0(r1)
      psq_st    f26,0xB8(r1),0,0
      stfd      f25, 0xA0(r1)
      psq_st    f25,0xA8(r1),0,0
      stfd      f24, 0x90(r1)
      psq_st    f24,0x98(r1),0,0
      stfd      f23, 0x80(r1)
      psq_st    f23,0x88(r1),0,0
      stfd      f22, 0x70(r1)
      psq_st    f22,0x78(r1),0,0
      stfd      f21, 0x60(r1)
      psq_st    f21,0x68(r1),0,0
      stfd      f20, 0x50(r1)
      psq_st    f20,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      mr        r4, r31
      lwz       r5, 0x28C(r31)
      lwz       r12, 0x0(r31)
      lfs       f31, 0xC(r5)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x10(r5)
      lfs       f29, 0x14(r5)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      lfs       f0, 0x8(r1)
      fsubs     f27, f30, f1
      lfs       f1, 0x10(r1)
      fsubs     f28, f31, f0
      fsubs     f26, f29, f1
      fmuls     f0, f27, f27
      fmadds    f0, f28, f28, f0
      fmadds    f1, f26, f26, f0
      bl        0x2CFB28
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xE4
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f28, f28, f0
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0

    .loc_0xE4:
      lwz       r3, 0x28C(r31)
      lfs       f25, 0x18(r3)
      lfs       f23, 0x20(r3)
      fmuls     f1, f25, f26
      lfs       f24, 0x1C(r3)
      fmuls     f2, f23, f27
      fmuls     f0, f24, f28
      fmsubs    f21, f23, f28, f1
      fmsubs    f22, f24, f26, f2
      fmsubs    f20, f25, f27, f0
      fmuls     f0, f21, f21
      fmadds    f0, f22, f22, f0
      fmadds    f1, f20, f20, f0
      bl        0x2CFAD0
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x13C
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f22, f22, f0
      fmuls     f21, f21, f0
      fmuls     f20, f20, f0

    .loc_0x13C:
      fmuls     f1, f22, f23
      fmuls     f2, f20, f24
      fmuls     f0, f21, f25
      fmsubs    f27, f20, f25, f1
      fmsubs    f26, f21, f23, f2
      fmsubs    f28, f22, f24, f0
      fmuls     f0, f27, f27
      fmadds    f0, f26, f26, f0
      fmadds    f1, f28, f28, f0
      bl        0x2CFA88
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x184
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f26, f26, f0
      fmuls     f27, f27, f0
      fmuls     f28, f28, f0

    .loc_0x184:
      stfs      f22, 0x14(r1)
      addi      r3, r1, 0x14
      stfs      f21, 0x24(r1)
      stfs      f20, 0x34(r1)
      stfs      f25, 0x18(r1)
      stfs      f24, 0x28(r1)
      stfs      f23, 0x38(r1)
      stfs      f26, 0x1C(r1)
      stfs      f27, 0x2C(r1)
      stfs      f28, 0x3C(r1)
      stfs      f31, 0x20(r1)
      stfs      f30, 0x30(r1)
      stfs      f29, 0x40(r1)
      lwz       r4, 0x290(r31)
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x57B14
      lwz       r4, 0x294(r31)
      addi      r3, r1, 0x14
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x57B28
      lwz       r3, 0x290(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x294(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x108(r1),0,0
      lfd       f31, 0x100(r1)
      psq_l     f30,0xF8(r1),0,0
      lfd       f30, 0xF0(r1)
      psq_l     f29,0xE8(r1),0,0
      lfd       f29, 0xE0(r1)
      psq_l     f28,0xD8(r1),0,0
      lfd       f28, 0xD0(r1)
      psq_l     f27,0xC8(r1),0,0
      lfd       f27, 0xC0(r1)
      psq_l     f26,0xB8(r1),0,0
      lfd       f26, 0xB0(r1)
      psq_l     f25,0xA8(r1),0,0
      lfd       f25, 0xA0(r1)
      psq_l     f24,0x98(r1),0,0
      lfd       f24, 0x90(r1)
      psq_l     f23,0x88(r1),0,0
      lfd       f23, 0x80(r1)
      psq_l     f22,0x78(r1),0,0
      lfd       f22, 0x70(r1)
      psq_l     f21,0x68(r1),0,0
      lfd       f21, 0x60(r1)
      psq_l     f20,0x58(r1),0,0
      lfd       f20, 0x50(r1)
      lwz       r0, 0x114(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x110
      blr
    */
}

/*
 * --INFO--
 * Address:	80141E9C
 * Size:	000058
 */
void Game::Navi::doSimulation((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, -0x64AC(r13)
      lwz       r0, 0x1F0(r4)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x44
      lfs       f0, -0x600C(r2)
      stfs      f0, 0x200(r3)
      stfs      f0, 0x204(r3)
      stfs      f0, 0x208(r3)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      stfs      f0, 0x11C(r3)
      stfs      f0, 0x120(r3)
      stfs      f0, 0x124(r3)

    .loc_0x44:
      bl        -0x3104
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80141EF4
 * Size:	0000B8
 */
void Game::Navi::doSetView((int))
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
      bl        -0x6660
      lwz       r3, 0x290(r30)
      mr        r4, r31
      bl        0x2FD1A4
      lwz       r3, 0x294(r30)
      mr        r4, r31
      bl        0x2FD198
      li        r0, 0x10
      lbz       r3, 0xD8(r30)
      slw       r0, r0, r31
      and.      r0, r3, r0
      beq-      .loc_0x78
      lwz       r3, 0x290(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x294(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA0

    .loc_0x78:
      lwz       r3, 0x290(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x294(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl

    .loc_0xA0:
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
 * Address:	80141FAC
 * Size:	00003C
 */
void Game::Navi::doViewCalc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x6608
      lwz       r3, 0x290(r31)
      bl        0x2FD090
      lwz       r3, 0x294(r31)
      bl        0x2FD088
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80141FE8
 * Size:	000014
 */
void Game::Navi::setLifeMax(void)
{
    /*
    .loc_0x0:
      lwz       r4, -0x6D20(r13)
      lwz       r4, 0xC8(r4)
      lfs       f0, 0x9D0(r4)
      stfs      f0, 0x2A0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80141FFC
 * Size:	000018
 */
void Game::Navi::getLifeRatio(void)
{
    /*
    .loc_0x0:
      lwz       r4, -0x6D20(r13)
      lfs       f1, 0x2A0(r3)
      lwz       r3, 0xC8(r4)
      lfs       f0, 0x9D0(r3)
      fdivs     f1, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	80142014
 * Size:	0000AC
 */
void Game::Navi::getDownfloorMass(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      lwz       r31, 0x274(r3)
      cmplwi    r31, 0
      beq-      .loc_0x2C
      lwz       r0, 0x4(r31)
      b         .loc_0x30

    .loc_0x2C:
      li        r0, -0x1

    .loc_0x30:
      lwz       r3, -0x6D20(r13)
      cmpwi     r0, 0x6
      lwz       r3, 0xC8(r3)
      lwz       r30, 0xC28(r3)
      bne-      .loc_0x8C
      lwz       r3, 0x14(r31)
      li        r29, 0x1
      cmplwi    r3, 0
      beq-      .loc_0x80
      bl        0x6ECC
      cmpwi     r3, 0x4
      bne-      .loc_0x78
      lwz       r3, 0x14(r31)
      lbz       r0, 0x2B8(r3)
      cmpwi     r0, 0x3
      bne-      .loc_0x84
      li        r29, 0x2
      b         .loc_0x84

    .loc_0x78:
      li        r29, 0
      b         .loc_0x84

    .loc_0x80:
      li        r29, 0

    .loc_0x84:
      add       r3, r30, r29
      b         .loc_0x90

    .loc_0x8C:
      mr        r3, r30

    .loc_0x90:
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
 * Address:	801420C0
 * Size:	0002A8
 */
void Game::Navi::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      stw       r30, 0x38(r1)
      lbz       r3, 0x2A4(r3)
      cmplwi    r3, 0
      beq-      .loc_0x2C
      subi      r0, r3, 0x1
      stb       r0, 0x2A4(r31)

    .loc_0x2C:
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0xDD2CC
      mr        r3, r31
      bl        -0x48D0
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x210(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x29AC
      mr        r3, r31
      bl        0x2A3C
      lwz       r3, 0x2D0(r31)
      bl        0x275DC4
      mr        r3, r31
      bl        0xD50
      cmplwi    r3, 0
      beq-      .loc_0xC4
      lwz       r5, 0x278(r31)
      cmplwi    r5, 0
      beq-      .loc_0xC4
      lwz       r0, 0x1C(r5)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0xC4
      lwz       r6, -0x6C18(r13)
      mr        r4, r3
      lwz       r3, 0x58(r6)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xDC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x290

    .loc_0xC4:
      mr        r3, r31
      bl        0x1030
      cmplwi    r3, 0
      beq-      .loc_0x110
      lwz       r4, 0x278(r31)
      cmplwi    r4, 0
      beq-      .loc_0x110
      lwz       r0, 0x1C(r4)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x110
      lwz       r6, -0x6C18(r13)
      mr        r4, r3
      lhz       r5, 0x2DC(r31)
      lwz       r3, 0x58(r6)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x290

    .loc_0x110:
      mr        r3, r31
      bl        0x12B0
      mr.       r30, r3
      beq-      .loc_0x174
      lwz       r4, 0x278(r31)
      cmplwi    r4, 0
      beq-      .loc_0x174
      lwz       r0, 0x1C(r4)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x174
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x174
      lwz       r3, -0x6C18(r13)
      mr        r4, r30
      lwz       r5, 0x278(r31)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xE0(r12)
      mtctr     r12
      bctrl
      b         .loc_0x290

    .loc_0x174:
      lwz       r4, -0x6C18(r13)
      lwz       r3, 0x2D8(r31)
      lwz       r4, 0x50(r4)
      lwz       r0, 0x10(r3)
      sub       r3, r0, r4
      bl        -0x7C0F8
      cmpwi     r3, 0xA
      ble-      .loc_0x1D8
      addi      r3, r1, 0x1C
      bl        0x7253C
      mr        r4, r31
      addi      r3, r1, 0x10
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x10(r1)
      addi      r4, r1, 0x1C
      lfs       f1, 0x14(r1)
      lfs       f0, 0x18(r1)
      stfs      f2, 0x1C(r1)
      stfs      f1, 0x20(r1)
      stfs      f0, 0x24(r1)
      lwz       r3, 0x2D8(r31)
      bl        0x725A4

    .loc_0x1D8:
      lwz       r3, -0x6C18(r13)
      bl        0x72D24
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x270
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x270
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0x270
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,20,20
      beq-      .loc_0x270
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0x270
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x270
      lhz       r5, 0x2DC(r31)
      lis       r3, 0x804B
      addi      r0, r3, 0x590
      lis       r3, 0x804B
      stw       r0, 0x8(r1)
      addi      r0, r3, 0x60F4
      lwz       r3, -0x6C18(r13)
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      stw       r5, 0xC(r1)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl

    .loc_0x270:
      lwz       r3, 0x270(r31)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x254(r31)
      bl        0x54250

    .loc_0x290:
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
 * Address:	80142368
 * Size:	000008
 */
void Game::NaviState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80142370
 * Size:	000004
 */
void Game::BaseGameSection::openKanketuMenu((Game::ItemBigFountain::Item*,
                                             Controller*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80142374
 * Size:	000004
 */
void Game::BaseGameSection::openCaveInMenu((Game::ItemCave::Item*, int))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80142378
 * Size:	000004
 */
void Game::BaseGameSection::openCaveMoreMenu((Game::ItemHole::Item*,
                                              Controller*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8014237C
 * Size:	000004
 */
void Game::Navi::do_updateLookCreature(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80142380
 * Size:	00009C
 */
void Game::Navi::inWaterCallback((Game::WaterBox*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x2D0(r29)
      stw       r3, 0x18(r4)
      lwz       r30, 0x2D0(r29)
      lwz       r4, 0x0(r30)
      mr        r3, r30
      ori       r0, r4, 0x1
      rlwinm    r31,r4,0,31,31
      stw       r0, 0x0(r30)
      bl        0x275B4C
      cmplwi    r31, 0
      bne-      .loc_0x64
      addi      r3, r30, 0x1C
      bl        0x2754B4

    .loc_0x64:
      lwz       r3, 0x26C(r29)
      li        r4, 0x814
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
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
 * Address:	8014241C
 * Size:	000044
 */
void Game::Navi::outWaterCallback(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x2D0(r3)
      lwz       r0, 0x0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x0(r31)
      bl        0x275C14
      mr        r3, r31
      bl        0x275C90
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80142460
 * Size:	0000B0
 */
void Game::Navi::ignoreAtari((Game::Creature*))
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
      lwz       r5, -0x64AC(r13)
      lwz       r0, 0x1F0(r5)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x50
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x50
      li        r3, 0x1
      b         .loc_0x98

    .loc_0x50:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      lbz       r0, 0x32C(r31)
      cmplwi    r0, 0x1
      bne-      .loc_0x80
      li        r3, 0x1
      b         .loc_0x98

    .loc_0x80:
      lwz       r3, 0x274(r30)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl

    .loc_0x98:
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
 * Address:	80142510
 * Size:	000008
 */
void Game::NaviState::ignoreAtari((Game::Creature*))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80142518
 * Size:	00004C
 */
void Game::Navi::on_movie_begin((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lhz       r0, 0x288(r3)
      ori       r0, r0, 0x1
      sth       r0, 0x288(r3)
      lwz       r31, 0x2D0(r3)
      mr        r3, r31
      bl        0x275D6C
      mr        r3, r31
      bl        0x275CD4
      mr        r3, r31
      bl        0x2760C0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80142564
 * Size:	000048
 */
void Game::Navi::on_movie_end((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1F
      li        r5, 0x1F
      stw       r0, 0x14(r1)
      li        r6, 0
      li        r7, 0
      lhz       r0, 0x288(r3)
      rlwinm    r0,r0,0,16,30
      sth       r0, 0x288(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
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
 * Address:	801425AC
 * Size:	00027C
 */
void Game::Navi::movieUserCommand((unsigned long, Game::MoviePlayer*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      subi      r0, r4, 0x64
      cmplwi    r0, 0x7
      lis       r4, 0x8048
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r5
      subi      r5, r4, 0x3878
      stw       r29, 0x44(r1)
      mr        r29, r3
      bgt-      .loc_0x260
      lis       r4, 0x804B
      rlwinm    r0,r0,2,0,29
      addi      r4, r4, 0x4F8
      lwzx      r0, r4, r0
      mtctr     r0
      bctr
      bl        0x222C
      lwz       r0, 0x1F0(r30)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x260
      lwz       r3, -0x6D0C(r13)
      li        r4, 0
      bl        0x1D6A4
      b         .loc_0x260
      lwz       r31, 0x194(r30)
      cmplwi    r31, 0
      bne-      .loc_0x8C
      addi      r3, r5, 0xC
      addi      r5, r5, 0x40
      li        r4, 0x856
      crclr     6, 0x6
      bl        -0x117FF4

    .loc_0x8C:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      mr        r3, r29
      lfs       f1, 0x18(r1)
      addi      r4, r1, 0x2C
      lfs       f0, 0x1C(r1)
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0x2544
      b         .loc_0x260
      lwz       r31, 0x194(r30)
      cmplwi    r31, 0
      bne-      .loc_0xEC
      addi      r3, r5, 0xC
      addi      r5, r5, 0x54
      li        r4, 0x864
      crclr     6, 0x6
      bl        -0x118054

    .loc_0xEC:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r29
      lfs       f1, 0xC(r1)
      addi      r4, r1, 0x20
      lfs       f0, 0x10(r1)
      stfs      f2, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        0x27F0
      b         .loc_0x260
      lwz       r3, -0x6980(r13)
      mr        r4, r29
      bl        0xFF610
      b         .loc_0x260
      lwz       r3, -0x6980(r13)
      mr        r4, r29
      bl        0xFF5BC
      b         .loc_0x260
      lwz       r31, 0x2D0(r29)
      lwz       r3, 0x0(r31)
      rlwinm.   r0,r3,0,0,0
      bne-      .loc_0x180
      stw       r3, 0x4(r31)
      li        r0, 0
      stb       r0, 0x0(r31)
      stb       r0, 0x1(r31)
      stb       r0, 0x2(r31)
      stb       r0, 0x3(r31)
      lwz       r0, 0x0(r31)
      oris      r0, r0, 0x8000
      stw       r0, 0x0(r31)

    .loc_0x180:
      addi      r3, r31, 0x33C
      lwz       r12, 0x33C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x36C
      lwz       r12, 0x36C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x39C
      lwz       r12, 0x39C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x2758E8
      mr        r3, r31
      bl        0x275964
      mr        r3, r31
      bl        0x2759F8
      mr        r3, r31
      bl        0x275A94
      mr        r3, r31
      bl        0x275B1C
      mr        r3, r31
      bl        0x275E78
      b         .loc_0x260
      lwz       r31, 0x2D0(r29)
      lwz       r0, 0x0(r31)
      rlwinm.   r0,r0,0,0,0
      beq-      .loc_0x214
      lwz       r0, 0x4(r31)
      stw       r0, 0x0(r31)
      lwz       r0, 0x0(r31)
      rlwinm    r0,r0,0,1,31
      stw       r0, 0x0(r31)

    .loc_0x214:
      lwz       r0, 0x0(r31)
      rlwinm.   r30,r0,0,31,31
      beq-      .loc_0x240
      ori       r0, r0, 0x1
      mr        r3, r31
      stw       r0, 0x0(r31)
      bl        0x275744
      cmplwi    r30, 0
      bne-      .loc_0x240
      addi      r3, r31, 0x1C
      bl        0x2750AC

    .loc_0x240:
      lwz       r3, 0x0(r31)
      rlwinm.   r0,r3,0,30,30
      beq-      .loc_0x260
      ori       r0, r3, 0x2
      mr        r3, r31
      stw       r0, 0x0(r31)
      lwz       r4, 0x10(r31)
      bl        0x2758F4

    .loc_0x260:
      lwz       r0, 0x54(r1)
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
 * Address:	80142828
 * Size:	000028
 */
void Game::Navi::movieSetFaceDir((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stfs      f1, 0x1FC(r3)
      lwz       r3, 0x28C(r3)
      bl        0x22BF4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80142850
 * Size:	00004C
 */
void Game::Navi::movieStartAnimation((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      li        r6, 0
      stw       r0, 0x14(r1)
      li        r7, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5FC8(r2)
      stfs      f0, 0x234(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8014289C
 * Size:	0000DC
 */
void Game::Navi::movieStartDemoAnimation((SysShape::AnimInfo*))
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
      addi      r3, r30, 0x1C8
      bl        0x2E6494
      mr        r4, r31
      addi      r3, r30, 0x1AC
      bl        0x2E6488
      lwz       r4, 0x174(r30)
      addi      r3, r30, 0x1AC
      bl        0x2E64E4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x60
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x386C
      li        r4, 0x899
      subi      r5, r5, 0x380C
      crclr     6, 0x6
      bl        -0x1182B8

    .loc_0x60:
      lwz       r4, 0x174(r30)
      addi      r3, r30, 0x1C8
      bl        0x2E64B4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x90
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x386C
      li        r4, 0x89A
      subi      r5, r5, 0x380C
      crclr     6, 0x6
      bl        -0x1182E8

    .loc_0x90:
      lwz       r3, 0x174(r30)
      bl        0x2E6320
      addi      r3, r30, 0x1C8
      lwz       r31, 0x174(r30)
      lwz       r12, 0x1C8(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x8(r31)
      lwz       r4, 0x4(r4)
      lwz       r4, 0x28(r4)
      lwz       r4, 0x0(r4)
      stw       r3, 0x54(r4)
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
 * Address:	80142978
 * Size:	000088
 */
void movieSetTranslation__Q24Game4NaviFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lfs       f0, -0x600C(r2)
      mr        r31, r3
      fmr       f31, f1
      li        r5, 0
      stfs      f0, 0x200(r3)
      stfs      f0, 0x204(r3)
      stfs      f0, 0x208(r3)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      stfs      f0, 0x11C(r3)
      stfs      f0, 0x120(r3)
      stfs      f0, 0x124(r3)
      lfs       f0, 0x20C(r3)
      stfs      f0, 0x238(r3)
      lfs       f0, 0x210(r3)
      stfs      f0, 0x23C(r3)
      lfs       f0, 0x214(r3)
      stfs      f0, 0x240(r3)
      bl        -0x7834
      stfs      f31, 0x1FC(r31)
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80142A00
 * Size:	00012C
 */
void movieGotoPosition__Q24Game4NaviFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stfd      f28, 0x10(r1)
      psq_st    f28,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lfs       f1, 0x0(r4)
      mr        r31, r3
      lfs       f0, 0x20C(r3)
      lfs       f3, 0x8(r4)
      fsubs     f31, f1, f0
      lfs       f2, 0x214(r3)
      lfs       f1, 0x4(r4)
      lfs       f0, 0x210(r3)
      fsubs     f29, f3, f2
      fmuls     f2, f31, f31
      fsubs     f30, f1, f0
      fmuls     f1, f29, f29
      fmadds    f0, f30, f30, f2
      fadds     f28, f2, f1
      fadds     f1, f1, f0
      bl        0x2CED98
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x90
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0

    .loc_0x90:
      lfs       f0, -0x5FC0(r2)
      fcmpo     cr0, f28, f0
      bge-      .loc_0xC0
      lfs       f0, -0x600C(r2)
      li        r3, 0x1
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      b         .loc_0xF8

    .loc_0xC0:
      lwz       r4, -0x6D20(r13)
      li        r3, 0
      lfs       f3, -0x6018(r2)
      lwz       r4, 0xC8(r4)
      lfs       f0, 0x3B8(r4)
      fmuls     f2, f31, f0
      fmuls     f1, f30, f0
      fmuls     f0, f29, f0
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x1E4(r31)
      stfs      f1, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0xF8:
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      psq_l     f28,0x18(r1),0,0
      lfd       f28, 0x10(r1)
      lwz       r0, 0x54(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80142B2C
 * Size:	0001A8
 */
void Game::Navi::set_movie_draw((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r12, 0x0(r3)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xCC
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0xCC
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x190
      lwz       r31, 0x2D0(r31)
      lwz       r0, 0x0(r31)
      rlwinm.   r0,r0,0,0,0
      beq-      .loc_0x7C
      lwz       r0, 0x4(r31)
      stw       r0, 0x0(r31)
      lwz       r0, 0x0(r31)
      rlwinm    r0,r0,0,1,31
      stw       r0, 0x0(r31)

    .loc_0x7C:
      lwz       r0, 0x0(r31)
      rlwinm.   r30,r0,0,31,31
      beq-      .loc_0xA8
      ori       r0, r0, 0x1
      mr        r3, r31
      stw       r0, 0x0(r31)
      bl        0x27535C
      cmplwi    r30, 0
      bne-      .loc_0xA8
      addi      r3, r31, 0x1C
      bl        0x274CC4

    .loc_0xA8:
      lwz       r3, 0x0(r31)
      rlwinm.   r0,r3,0,30,30
      beq-      .loc_0x190
      ori       r0, r3, 0x2
      mr        r3, r31
      stw       r0, 0x0(r31)
      lwz       r4, 0x10(r31)
      bl        0x27550C
      b         .loc_0x190

    .loc_0xCC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x190
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x190
      lwz       r30, 0x2D0(r31)
      lwz       r3, 0x0(r30)
      rlwinm.   r0,r3,0,0,0
      bne-      .loc_0x124
      stw       r3, 0x4(r30)
      li        r0, 0
      stb       r0, 0x0(r30)
      stb       r0, 0x1(r30)
      stb       r0, 0x2(r30)
      stb       r0, 0x3(r30)
      lwz       r0, 0x0(r30)
      oris      r0, r0, 0x8000
      stw       r0, 0x0(r30)

    .loc_0x124:
      addi      r3, r30, 0x33C
      lwz       r12, 0x33C(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r30, 0x36C
      lwz       r12, 0x36C(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r30, 0x39C
      lwz       r12, 0x39C(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        0x2753C4
      mr        r3, r30
      bl        0x275440
      mr        r3, r30
      bl        0x2754D4
      mr        r3, r30
      bl        0x275570
      mr        r3, r30
      bl        0x2755F8
      mr        r3, r30
      bl        0x275954

    .loc_0x190:
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
 * Address:	80142CD4
 * Size:	000050
 */
void Game::Navi::isWalking(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lfs       f1, 0x1E4(r3)
      lfs       f0, 0x1E8(r3)
      fmuls     f1, f1, f1
      lfs       f2, 0x1EC(r3)
      fmuls     f0, f0, f0
      fmuls     f2, f2, f2
      fadds     f0, f1, f0
      fadds     f1, f2, f0
      bl        0x2CEB04
      lfs       f0, -0x6014(r2)
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r3,r0,2,31,31
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80142D24
 * Size:	00016C
 */
void Game::Navi::setDeadLaydown(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r3
      lhz       r31, 0x2DC(r30)
      lwz       r3, -0x6B70(r13)
      cmpwi     r31, 0x8
      bge-      .loc_0x50
      addi      r0, r3, 0x20
      srawi     r4, r31, 0x3
      sub       r5, r0, r4
      li        r3, 0x1
      rlwinm    r0,r4,3,0,28
      lbz       r4, 0x0(r5)
      sub       r0, r31, r0
      slw       r0, r3, r0
      or        r0, r4, r0
      stb       r0, 0x0(r5)

    .loc_0x50:
      cmpwi     r31, 0
      bne-      .loc_0x74
      lfs       f2, -0x5FBC(r2)
      lfs       f1, -0x600C(r2)
      lfs       f0, -0x5FB8(r2)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      b         .loc_0x8C

    .loc_0x74:
      lfs       f2, -0x5FB4(r2)
      lfs       f1, -0x600C(r2)
      lfs       f0, -0x6014(r2)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)

    .loc_0x8C:
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x120
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      bl        -0x58210
      lfs       f2, 0x8(r1)
      mr        r3, r30
      lfs       f1, 0xC(r1)
      addi      r4, r1, 0x14
      lfs       f0, 0x10(r1)
      li        r5, 0
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x7C68
      mr        r3, r30
      li        r4, 0x5
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x268(r30)
      b         .loc_0x128

    .loc_0x120:
      li        r0, 0x1
      stb       r0, 0x268(r30)

    .loc_0x128:
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6D20(r13)
      mr        r4, r31
      bl        0x1839C
      lfs       f0, -0x600C(r2)
      stfs      f0, 0x2A0(r30)
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80142E90
 * Size:	0002DC
 */
void Game::Navi::checkHole(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      lwz       r4, -0x6BB8(r13)
      cmplwi    r4, 0
      bne-      .loc_0x2C
      li        r3, 0
      b         .loc_0x2C4

    .loc_0x2C:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      beq-      .loc_0x44
      li        r3, 0
      b         .loc_0x2C4

    .loc_0x44:
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r0, 0x4(r3)
      b         .loc_0x5C

    .loc_0x58:
      li        r0, -0x1

    .loc_0x5C:
      cmpwi     r0, 0
      beq-      .loc_0x6C
      li        r3, 0
      b         .loc_0x2C4

    .loc_0x6C:
      cmplwi    r4, 0
      beq-      .loc_0x78
      addi      r4, r4, 0x30

    .loc_0x78:
      li        r0, 0
      lis       r3, 0x804B
      addi      r3, r3, 0x560
      stw       r0, 0x20(r1)
      cmplwi    r0, 0
      stw       r3, 0x14(r1)
      stw       r0, 0x18(r1)
      stw       r4, 0x1C(r1)
      bne-      .loc_0xB8
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x2A0

    .loc_0xB8:
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x128

    .loc_0xD4:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2A0
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x128:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xD4
      b         .loc_0x2A0

    .loc_0x148:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r0, r3
      mr        r30, r0
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E4
      mr        r3, r30
      bl        0x8F4E8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E4
      lwz       r0, 0x1E4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1E4
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      lfs       f0, 0x214(r31)
      lfs       f2, 0x8(r1)
      fsubs     f3, f1, f0
      lfs       f1, 0x20C(r31)
      lfs       f0, -0x5FB0(r2)
      fsubs     f2, f2, f1
      fmuls     f1, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1E4
      mr        r3, r30
      b         .loc_0x2C4

    .loc_0x1E4:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x210
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x2A0

    .loc_0x210:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x284

    .loc_0x230:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2A0
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x284:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x230

    .loc_0x2A0:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x148
      li        r3, 0

    .loc_0x2C4:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8014316C
 * Size:	00004C
 */
void Iterator<Game::BaseItem>::isDone()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      sub       r0, r3, r0
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801431B8
 * Size:	0002CC
 */
void Game::Navi::checkCave(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      lwz       r4, -0x6B60(r13)
      cmplwi    r4, 0
      bne-      .loc_0x2C
      li        r3, 0
      b         .loc_0x2B4

    .loc_0x2C:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      beq-      .loc_0x44
      li        r3, 0
      b         .loc_0x2B4

    .loc_0x44:
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r0, 0x4(r3)
      b         .loc_0x5C

    .loc_0x58:
      li        r0, -0x1

    .loc_0x5C:
      cmpwi     r0, 0
      beq-      .loc_0x6C
      li        r3, 0
      b         .loc_0x2B4

    .loc_0x6C:
      cmplwi    r4, 0
      beq-      .loc_0x78
      addi      r4, r4, 0x30

    .loc_0x78:
      li        r0, 0
      lis       r3, 0x804B
      addi      r3, r3, 0x560
      stw       r0, 0x20(r1)
      cmplwi    r0, 0
      stw       r3, 0x14(r1)
      stw       r0, 0x18(r1)
      stw       r4, 0x1C(r1)
      bne-      .loc_0xB8
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x290

    .loc_0xB8:
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x128

    .loc_0xD4:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x290
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x128:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xD4
      b         .loc_0x290

    .loc_0x148:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r0, r3
      mr        r30, r0
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1D4
      lwz       r0, 0x1F4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1D4
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      lfs       f0, 0x214(r31)
      lfs       f2, 0x8(r1)
      fsubs     f3, f1, f0
      lfs       f1, 0x20C(r31)
      lfs       f0, -0x5FAC(r2)
      fsubs     f2, f2, f1
      fmuls     f1, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1D4
      mr        r3, r30
      b         .loc_0x2B4

    .loc_0x1D4:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x200
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x290

    .loc_0x200:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x274

    .loc_0x220:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x290
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x274:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x220

    .loc_0x290:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x148
      li        r3, 0

    .loc_0x2B4:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80143484
 * Size:	0002B4
 */
void Game::Navi::checkBigFountain(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      lwz       r4, -0x6B50(r13)
      cmplwi    r4, 0
      bne-      .loc_0x2C
      li        r3, 0
      b         .loc_0x29C

    .loc_0x2C:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      beq-      .loc_0x44
      li        r3, 0
      b         .loc_0x29C

    .loc_0x44:
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r0, 0x4(r3)
      b         .loc_0x5C

    .loc_0x58:
      li        r0, -0x1

    .loc_0x5C:
      cmpwi     r0, 0
      beq-      .loc_0x6C
      li        r3, 0
      b         .loc_0x29C

    .loc_0x6C:
      cmplwi    r4, 0
      beq-      .loc_0x78
      addi      r4, r4, 0x30

    .loc_0x78:
      li        r0, 0
      lis       r3, 0x804B
      addi      r3, r3, 0x560
      stw       r0, 0x20(r1)
      cmplwi    r0, 0
      stw       r3, 0x14(r1)
      stw       r0, 0x18(r1)
      stw       r4, 0x1C(r1)
      bne-      .loc_0xB8
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x278

    .loc_0xB8:
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x128

    .loc_0xD4:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x278
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x128:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xD4
      b         .loc_0x278

    .loc_0x148:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r30, r0
      bl        0xA9C80
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1BC
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      lfs       f0, 0x214(r31)
      lfs       f2, 0x8(r1)
      fsubs     f3, f1, f0
      lfs       f1, 0x20C(r31)
      lfs       f0, -0x5FAC(r2)
      fsubs     f2, f2, f1
      fmuls     f1, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1BC
      mr        r3, r30
      b         .loc_0x29C

    .loc_0x1BC:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1E8
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x278

    .loc_0x1E8:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x25C

    .loc_0x208:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x278
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x25C:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x208

    .loc_0x278:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x148
      li        r3, 0

    .loc_0x29C:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80143738
 * Size:	000368
 */
void Game::Navi::checkOnyon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r3
      stw       r29, 0x34(r1)
      lwz       r5, -0x6C18(r13)
      lwz       r4, 0x44(r5)
      cmpwi     r4, 0
      beq-      .loc_0x34
      li        r3, 0
      b         .loc_0x34C

    .loc_0x34:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      beq-      .loc_0x4C
      li        r3, 0
      b         .loc_0x34C

    .loc_0x4C:
      lwz       r6, -0x6CD0(r13)
      cmplwi    r6, 0
      bne-      .loc_0x60
      li        r3, 0
      b         .loc_0x34C

    .loc_0x60:
      cmpwi     r4, 0
      bne-      .loc_0x80
      lwz       r3, 0x40(r5)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      bne-      .loc_0x80
      li        r3, 0
      b         .loc_0x34C

    .loc_0x80:
      lwz       r3, 0x274(r30)
      cmplwi    r3, 0
      beq-      .loc_0x94
      lwz       r0, 0x4(r3)
      b         .loc_0x98

    .loc_0x94:
      li        r0, -0x1

    .loc_0x98:
      cmpwi     r0, 0
      beq-      .loc_0xA8
      li        r3, 0
      b         .loc_0x34C

    .loc_0xA8:
      cmplwi    r6, 0
      beq-      .loc_0xB4
      addi      r6, r6, 0x30

    .loc_0xB4:
      lis       r3, 0x804B
      li        r0, 0
      addi      r5, r3, 0x548
      stw       r0, 0x2C(r1)
      mr        r4, r30
      addi      r3, r1, 0x8
      stw       r5, 0x20(r1)
      stw       r0, 0x24(r1)
      stw       r6, 0x28(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x2C(r1)
      li        r31, 0
      lfs       f2, 0x8(r1)
      lfs       f1, 0xC(r1)
      cmplwi    r0, 0
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bne-      .loc_0x12C
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x328

    .loc_0x12C:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x19C

    .loc_0x148:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x328
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x19C:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x148
      b         .loc_0x328

    .loc_0x1BC:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lhz       r0, 0x22E(r3)
      mr        r29, r3
      cmplwi    r0, 0x3
      beq-      .loc_0x26C
      cmplwi    r0, 0x4
      bne-      .loc_0x210
      lwz       r3, -0x6B70(r13)
      li        r4, 0x4
      bl        0xA36F8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x210
      lwz       r3, -0x6B70(r13)
      li        r4, 0x3
      bl        0xA36E4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x26C

    .loc_0x210:
      mr        r3, r29
      addi      r4, r1, 0x14
      bl        0x36358
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x254
      mr        r3, r29
      li        r4, 0x1
      bl        0x3574C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x101B
      li        r5, 0
      bl        0x1F4CBC
      lhz       r0, 0x288(r30)
      mr        r31, r29
      rlwinm    r0,r0,0,31,29
      sth       r0, 0x288(r30)
      b         .loc_0x26C

    .loc_0x254:
      lhz       r0, 0x288(r30)
      mr        r3, r29
      li        r4, 0
      ori       r0, r0, 0x2
      sth       r0, 0x288(r30)
      bl        0x35710

    .loc_0x26C:
      lwz       r0, 0x2C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x298
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x328

    .loc_0x298:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x30C

    .loc_0x2B8:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x328
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x30C:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2B8

    .loc_0x328:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x24(r1)
      cmplw     r4, r3
      bne+      .loc_0x1BC
      mr        r3, r31

    .loc_0x34C:
      lwz       r0, 0x44(r1)
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
 * Address:	80143AA0
 * Size:	00004C
 */
void Iterator<Game::Onyon>::isDone()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      sub       r0, r3, r0
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80143AEC
 * Size:	000008
 */
void Game::Navi::getMapCollisionRadius(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x5FA8(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	80143AF4
 * Size:	000004
 */
void Game::Navi::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Navi::draw2d((J2DGrafContext&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Navi::changeCamera((Camera*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::Navi::restoreCamera(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80143AF8
 * Size:	00000C
 */
void Game::Navi::disableController(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x278(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Navi::changeController((Controller*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::Navi::restoreController(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80143B04
 * Size:	0000D8
 */
void Game::Navi::control(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, -0x64AC(r13)
      lwz       r0, 0x1F0(r4)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x28
      bl        .loc_0xD8

    .loc_0x28:
      mr        r3, r31
      li        r4, 0
      bl        0x22B4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC4
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0
      bne-      .loc_0x9C
      lwz       r3, -0x6D20(r13)
      bl        0x170B8
      cmplw     r3, r31
      bne-      .loc_0xC4
      lwz       r3, 0x26C(r31)
      lfs       f2, 0x2F4(r31)
      cmplwi    r3, 0
      lfs       f1, 0x2EC(r31)
      mr        r5, r3
      beq-      .loc_0x8C
      addi      r5, r3, 0x30

    .loc_0x8C:
      addi      r3, r3, 0x70
      li        r4, 0x1
      bl        0x1FBABC
      b         .loc_0xC4

    .loc_0x9C:
      lwz       r3, 0x26C(r31)
      lfs       f2, 0x2F4(r31)
      cmplwi    r3, 0
      lfs       f1, 0x2EC(r31)
      mr        r5, r3
      beq-      .loc_0xB8
      addi      r5, r3, 0x30

    .loc_0xB8:
      addi      r3, r3, 0x70
      li        r4, 0x1
      bl        0x1FBA90

    .loc_0xC4:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0xD8:
    */
}

/*
 * --INFO--
 * Address:	80143BDC
 * Size:	000418
 */
void Game::Navi::makeVelocity(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x100(r1)
      mflr      r0
      stw       r0, 0x104(r1)
      stfd      f31, 0xF0(r1)
      psq_st    f31,0xF8(r1),0,0
      stfd      f30, 0xE0(r1)
      psq_st    f30,0xE8(r1),0,0
      stfd      f29, 0xD0(r1)
      psq_st    f29,0xD8(r1),0,0
      stfd      f28, 0xC0(r1)
      psq_st    f28,0xC8(r1),0,0
      stfd      f27, 0xB0(r1)
      psq_st    f27,0xB8(r1),0,0
      stfd      f26, 0xA0(r1)
      psq_st    f26,0xA8(r1),0,0
      stfd      f25, 0x90(r1)
      psq_st    f25,0x98(r1),0,0
      stfd      f24, 0x80(r1)
      psq_st    f24,0x88(r1),0,0
      stfd      f23, 0x70(r1)
      psq_st    f23,0x78(r1),0,0
      stfd      f22, 0x60(r1)
      psq_st    f22,0x68(r1),0,0
      stfd      f21, 0x50(r1)
      psq_st    f21,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lwz       r3, 0x278(r3)
      cmplwi    r3, 0
      beq-      .loc_0xE0
      lwz       r3, 0x18(r3)
      rlwinm.   r0,r3,0,23,23
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,22,22
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,21,21
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,20,20
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,27,27
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,25,25
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,26,26
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,28,28
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,29,29
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,31,31
      bne-      .loc_0xD4
      rlwinm.   r0,r3,0,30,30
      beq-      .loc_0xE0

    .loc_0xD4:
      lfs       f0, -0x600C(r2)
      stfs      f0, 0x308(r31)
      b         .loc_0xF4

    .loc_0xE0:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x308(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x308(r31)

    .loc_0xF4:
      lfs       f1, -0x600C(r2)
      lwz       r3, 0x278(r31)
      fmr       f2, f1
      cmplwi    r3, 0
      beq-      .loc_0x114
      lfs       f0, 0x48(r3)
      lfs       f2, 0x4C(r3)
      fneg      f1, f0

    .loc_0x114:
      lfs       f0, -0x600C(r2)
      mr        r3, r31
      stfs      f1, 0x38(r1)
      addi      r4, r1, 0x38
      stfs      f0, 0x3C(r1)
      stfs      f2, 0x40(r1)
      bl        .loc_0x418
      lfs       f22, 0x38(r1)
      addi      r3, r1, 0x20
      lfs       f21, 0x40(r1)
      lwz       r4, 0x280(r31)
      bl        0x2D658C
      lfs       f27, 0x20(r1)
      addi      r3, r1, 0x14
      lfs       f25, 0x28(r1)
      lwz       r4, 0x280(r31)
      bl        0x2D6558
      lfs       f31, 0x14(r1)
      addi      r3, r1, 0x8
      lfs       f30, 0x18(r1)
      lfs       f29, 0x1C(r1)
      lwz       r4, 0x280(r31)
      bl        0x2D658C
      lfs       f26, -0x600C(r2)
      lfs       f24, 0x8(r1)
      fmadds    f0, f27, f27, f26
      lfs       f28, 0xC(r1)
      lfs       f23, 0x10(r1)
      fmadds    f1, f25, f25, f0
      bl        0x2CDAA0
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1AC
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0
      fmuls     f25, f25, f0

    .loc_0x1AC:
      fcmpo     cr0, f30, f28
      ble-      .loc_0x1B8
      b         .loc_0x1C0

    .loc_0x1B8:
      fmr       f24, f31
      fmr       f23, f29

    .loc_0x1C0:
      lfs       f28, -0x600C(r2)
      fmadds    f0, f24, f24, f28
      fmadds    f1, f23, f23, f0
      bl        0x2CDA5C
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1F0
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f24, f24, f0
      fmuls     f28, f28, f0
      fmuls     f23, f23, f0

    .loc_0x1F0:
      fmuls     f1, f27, f22
      lwz       r3, -0x6B70(r13)
      fmuls     f0, f24, f21
      li        r4, 0x7
      fmuls     f3, f26, f22
      addi      r3, r3, 0x48
      fmuls     f2, f28, f21
      fadds     f4, f1, f0
      fmuls     f1, f25, f22
      fmuls     f0, f23, f21
      fadds     f2, f3, f2
      stfs      f4, 0x2C(r1)
      fadds     f0, f1, f0
      stfs      f2, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0xA21C8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x248
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f21, 0xBB0(r3)
      b         .loc_0x254

    .loc_0x248:
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f21, 0x3B8(r3)

    .loc_0x254:
      lfs       f1, 0x2C(r1)
      lfs       f0, 0x30(r1)
      fmuls     f1, f1, f1
      lfs       f2, 0x34(r1)
      fmuls     f0, f0, f0
      fmuls     f2, f2, f2
      fadds     f0, f1, f0
      fadds     f1, f2, f0
      bl        0x2CD9B4
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x8E0(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x294
      lfs       f0, -0x600C(r2)
      stfs      f0, 0x308(r31)

    .loc_0x294:
      lfs       f0, 0x2C(r1)
      lfs       f2, 0x30(r1)
      fmuls     f0, f0, f21
      lfs       f3, -0x6008(r2)
      fmuls     f2, f2, f21
      lfs       f4, 0x34(r1)
      fmuls     f0, f0, f3
      fmuls     f4, f4, f21
      fmuls     f2, f2, f3
      stfs      f0, 0x1E4(r31)
      fmuls     f0, f4, f3
      stfs      f2, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      lwz       r0, 0x278(r31)
      cmplwi    r0, 0
      beq-      .loc_0x39C
      lwz       r3, -0x6D20(r13)
      li        r0, 0
      lfs       f2, 0x308(r31)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x890(r3)
      fcmpo     cr0, f2, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x2F8
      li        r0, 0x1

    .loc_0x2F8:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x310
      bne-      .loc_0x384
      lfs       f0, 0x8E0(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x384

    .loc_0x310:
      lfs       f0, 0x908(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x384
      lfs       f0, -0x600C(r2)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      lwz       r3, 0x28C(r31)
      lfs       f1, 0x0(r3)
      lfs       f2, 0x8(r3)
      bl        0x2CD8C4
      bl        0x2CDCB4
      lfs       f2, 0x1FC(r31)
      bl        0x2CDCD8
      lfs       f2, -0x5FA4(r2)
      lfs       f0, 0x1FC(r31)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x1FC(r31)
      lfs       f1, 0x1FC(r31)
      bl        0x2CDC94
      stfs      f1, 0x1FC(r31)
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x39C

    .loc_0x384:
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl

    .loc_0x39C:
      lwz       r3, 0x28C(r31)
      addi      r4, r1, 0x2C
      li        r5, 0
      bl        0x21794
      psq_l     f31,0xF8(r1),0,0
      lfd       f31, 0xF0(r1)
      psq_l     f30,0xE8(r1),0,0
      lfd       f30, 0xE0(r1)
      psq_l     f29,0xD8(r1),0,0
      lfd       f29, 0xD0(r1)
      psq_l     f28,0xC8(r1),0,0
      lfd       f28, 0xC0(r1)
      psq_l     f27,0xB8(r1),0,0
      lfd       f27, 0xB0(r1)
      psq_l     f26,0xA8(r1),0,0
      lfd       f26, 0xA0(r1)
      psq_l     f25,0x98(r1),0,0
      lfd       f25, 0x90(r1)
      psq_l     f24,0x88(r1),0,0
      lfd       f24, 0x80(r1)
      psq_l     f23,0x78(r1),0,0
      lfd       f23, 0x70(r1)
      psq_l     f22,0x68(r1),0,0
      lfd       f22, 0x60(r1)
      psq_l     f21,0x58(r1),0,0
      lfd       f21, 0x50(r1)
      lwz       r0, 0x104(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x100
      blr

    .loc_0x418:
    */
}

/*
 * --INFO--
 * Address:	80143FF4
 * Size:	0001A4
 */
void reviseController__Q24Game4NaviFR10Vector3<float>(void)
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
      mr        r31, r4
      lfs       f1, 0x0(r4)
      lfs       f0, 0x4(r4)
      fmuls     f1, f1, f1
      lfs       f2, 0x8(r4)
      fmuls     f0, f0, f0
      fmuls     f2, f2, f2
      fadds     f0, f1, f0
      fadds     f1, f2, f0
      bl        0x2CD7BC
      fmr       f31, f1
      lfs       f1, 0x0(r31)
      lfs       f2, 0x8(r31)
      bl        0x2CD784
      bl        0x2CDB74
      lwz       r3, -0x6D20(r13)
      lis       r0, 0x4330
      lfs       f3, -0x5F9C(r2)
      lwz       r3, 0xC8(r3)
      lfs       f5, -0x5FA0(r2)
      lfs       f2, 0x840(r3)
      lfs       f0, -0x6018(r2)
      fmuls     f4, f3, f2
      stw       r0, 0x10(r1)
      lfd       f3, -0x5F90(r2)
      lfs       f2, -0x5F98(r2)
      fmuls     f4, f5, f4
      stw       r0, 0x20(r1)
      fmadds    f0, f0, f4, f1
      fdivs     f0, f0, f4
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      xoris     r0, r0, 0x8000
      stw       r0, 0x14(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f3
      fmuls     f29, f4, f0
      fdivs     f0, f29, f2
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      xoris     r0, r0, 0x8000
      stw       r0, 0x24(r1)
      lfd       f0, 0x20(r1)
      fsubs     f0, f0, f3
      fnmsubs   f28, f2, f0, f29
      fsubs     f1, f2, f28
      bl        0x2CD64C
      fmr       f30, f1
      fmr       f1, f28
      bl        0x2CD640
      fadds     f30, f1, f30
      lfs       f1, -0x5F98(r2)
      bl        0x2CD634
      fdivs     f1, f1, f30
      lfs       f2, -0x6008(r2)
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x930(r3)
      fdivs     f1, f2, f1
      fmuls     f31, f31, f1
      fcmpo     cr0, f31, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x138
      fmr       f31, f2

    .loc_0x138:
      lfs       f0, 0x8E0(r3)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x148
      lfs       f31, -0x600C(r2)

    .loc_0x148:
      fmr       f1, f29
      bl        0x2CD658
      fmuls     f30, f31, f1
      fmr       f1, f29
      bl        0x2CD5E4
      fmuls     f1, f31, f1
      lfs       f0, -0x600C(r2)
      stfs      f1, 0x0(r31)
      stfs      f0, 0x4(r31)
      stfs      f30, 0x8(r31)
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      psq_l     f28,0x38(r1),0,0
      lfd       f28, 0x30(r1)
      lwz       r0, 0x74(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80144198
 * Size:	0001D4
 */
void Game::Navi::callPikis(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xD0(r1)
      mflr      r0
      stw       r0, 0xD4(r1)
      stfd      f31, 0xC0(r1)
      psq_st    f31,0xC8(r1),0,0
      stfd      f30, 0xB0(r1)
      psq_st    f30,0xB8(r1),0,0
      stw       r31, 0xAC(r1)
      stw       r30, 0xA8(r1)
      stw       r29, 0xA4(r1)
      stw       r28, 0xA0(r1)
      li        r0, 0
      mr        r31, r3
      stw       r0, -0x6D68(r13)
      lis       r3, 0x8048
      subi      r30, r3, 0x3878
      addi      r3, r1, 0x2C
      lwz       r5, 0x28C(r31)
      addi      r4, r1, 0x1C
      lfs       f2, 0x10(r5)
      lfs       f3, 0x14(r5)
      lfs       f1, 0x24(r5)
      lfs       f0, 0xC(r5)
      stfs      f0, 0x1C(r1)
      stfs      f2, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f1, 0x28(r1)
      bl        0xEA19C
      addi      r3, r1, 0x4C
      addi      r4, r1, 0x2C
      bl        0xEA1D0
      lfs       f30, -0x600C(r2)
      addi      r3, r1, 0x4C
      li        r29, 0
      bl        0xEA23C
      lfs       f31, -0x5FE8(r2)
      b         .loc_0x194

    .loc_0x94:
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fadds     f30, f30, f0
      fcmpo     cr0, f30, f31
      ble-      .loc_0xE0
      lwz       r0, 0x64(r1)
      addi      r3, r30, 0xC
      addi      r5, r30, 0x78
      li        r4, 0xC54
      stw       r0, 0x8(r1)
      lwz       r0, 0x68(r1)
      stw       r0, 0xC(r1)
      lwz       r6, 0x50(r1)
      lwz       r7, 0x54(r1)
      lwz       r8, 0x58(r1)
      lwz       r9, 0x5C(r1)
      lwz       r10, 0x60(r1)
      crclr     6, 0x6
      bl        -0x119C34

    .loc_0xE0:
      addi      r3, r1, 0x4C
      bl        0xEA2C8
      cmplwi    r29, 0
      mr        r28, r3
      beq-      .loc_0x134
      cmplw     r29, r28
      bne-      .loc_0x134
      lwz       r0, 0x64(r1)
      addi      r3, r30, 0xC
      addi      r5, r30, 0x98
      li        r4, 0xC61
      stw       r0, 0x8(r1)
      lwz       r0, 0x68(r1)
      stw       r0, 0xC(r1)
      lwz       r6, 0x50(r1)
      lwz       r7, 0x54(r1)
      lwz       r8, 0x58(r1)
      lwz       r9, 0x5C(r1)
      lwz       r10, 0x60(r1)
      crclr     6, 0x6
      bl        -0x119C88

    .loc_0x134:
      cmplwi    r28, 0
      mr        r29, r28
      beq-      .loc_0x18C
      cmplw     r28, r31
      beq-      .loc_0x18C
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r0, r4, 0x5D00
      li        r5, 0
      stw       r0, 0x10(r1)
      addi      r6, r3, 0x49BC
      li        r0, 0x1
      mr        r3, r28
      stw       r31, 0x14(r1)
      addi      r4, r1, 0x10
      stw       r6, 0x10(r1)
      stb       r5, 0x18(r1)
      stb       r0, 0x19(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x18C:
      addi      r3, r1, 0x4C
      bl        0xEA1D8

    .loc_0x194:
      addi      r3, r1, 0x4C
      bl        0xEA204
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x94
      psq_l     f31,0xC8(r1),0,0
      lfd       f31, 0xC0(r1)
      psq_l     f30,0xB8(r1),0,0
      lfd       f30, 0xB0(r1)
      lwz       r31, 0xAC(r1)
      lwz       r30, 0xA8(r1)
      lwz       r29, 0xA4(r1)
      lwz       r0, 0xD4(r1)
      lwz       r28, 0xA0(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void Game::Navi::applyForceObjectsInWhistle((Game::CellObject*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014436C
 * Size:	00008C
 */
void Game::Navi::invincible(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, -0x64AC(r13)
      cmplwi    r4, 0
      beq-      .loc_0x2C
      lwz       r0, 0x18(r4)
      cmpwi     r0, 0
      beq-      .loc_0x2C
      li        r3, 0x1
      b         .loc_0x7C

    .loc_0x2C:
      lbz       r0, 0x2A4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x40
      li        r3, 0x1
      b         .loc_0x7C

    .loc_0x40:
      lwz       r4, -0x6C18(r13)
      lbz       r0, 0x3C(r4)
      rlwinm.   r0,r0,0,26,26
      bne-      .loc_0x58
      li        r3, 0x1
      b         .loc_0x7C

    .loc_0x58:
      lwz       r3, 0x274(r3)
      cmplwi    r3, 0
      beq-      .loc_0x78
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      b         .loc_0x7C

    .loc_0x78:
      li        r3, 0x1

    .loc_0x7C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801443F8
 * Size:	000008
 */
void Game::NaviState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80144400
 * Size:	000008
 */
void Game::Navi::setInvincibleTimer((unsigned char))
{
    /*
    .loc_0x0:
      stb       r4, 0x2A4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80144408
 * Size:	000208
 */
void Game::Navi::startDamage((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      lwz       r12, 0x0(r3)
      fmr       f31, f1
      mr        r31, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1EC
      lwz       r3, -0x64AC(r13)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      beq-      .loc_0x58
      li        r3, 0x1
      b         .loc_0xA8

    .loc_0x58:
      lbz       r0, 0x2A4(r31)
      cmplwi    r0, 0
      beq-      .loc_0x6C
      li        r3, 0x1
      b         .loc_0xA8

    .loc_0x6C:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,26,26
      bne-      .loc_0x84
      li        r3, 0x1
      b         .loc_0xA8

    .loc_0x84:
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0xA4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA8

    .loc_0xA4:
      li        r3, 0x1

    .loc_0xA8:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB4
      b         .loc_0x1EC

    .loc_0xB4:
      lwz       r3, -0x6B70(r13)
      li        r4, 0x5
      addi      r3, r3, 0x48
      bl        0xA1B08
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xDC
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0xC00(r3)
      fmuls     f31, f31, f0

    .loc_0xDC:
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0xF0
      lwz       r0, 0x4(r3)
      b         .loc_0xF4

    .loc_0xF0:
      li        r0, -0x1

    .loc_0xF4:
      cmpwi     r0, 0xD
      beq-      .loc_0x1EC
      lis       r3, 0x804B
      stfs      f31, 0x8(r1)
      addi      r0, r3, 0x53C
      mr        r4, r31
      stw       r0, 0xC(r1)
      addi      r6, r1, 0x8
      li        r5, 0xD
      lwz       r3, 0x270(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x2A0(r31)
      li        r4, 0x80F
      li        r5, 0
      fsubs     f0, f0, f31
      stfs      f0, 0x2A0(r31)
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6960(r13)
      li        r4, 0x1D
      lhz       r5, 0x2DC(r31)
      bl        0x10DE28
      lwz       r3, -0x6958(r13)
      li        r4, 0x1
      lhz       r5, 0x2DC(r31)
      bl        0x10F3AC
      lwz       r3, 0x2D0(r31)
      lwz       r4, 0x14(r3)
      bl        0x2740B4
      bl        0x3148F8
      cmplwi    r3, 0
      beq-      .loc_0x19C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x19C:
      lfs       f1, 0x2A0(r31)
      lfs       f0, -0x6008(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1EC
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0x1C0
      lwz       r0, 0x4(r3)
      b         .loc_0x1C4

    .loc_0x1C0:
      li        r0, -0x1

    .loc_0x1C4:
      cmpwi     r0, 0x13
      beq-      .loc_0x1EC
      lwz       r3, 0x270(r31)
      mr        r4, r31
      li        r5, 0x13
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x1EC:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80144610
 * Size:	000214
 */
void Game::Navi::addDamage((float, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lwz       r5, -0x64AC(r13)
      fmr       f31, f1
      mr        r30, r3
      mr        r31, r4
      cmplwi    r5, 0
      beq-      .loc_0x40
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      bne-      .loc_0x1F4

    .loc_0x40:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0x1F4
      lwz       r3, -0x6B70(r13)
      li        r4, 0x5
      addi      r3, r3, 0x48
      bl        0xA1964
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x78
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0xC00(r3)
      fmuls     f31, f31, f0

    .loc_0x78:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1F4
      lwz       r3, 0x274(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB4
      b         .loc_0x1F4

    .loc_0xB4:
      lwz       r3, -0x64AC(r13)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      beq-      .loc_0xD4
      li        r3, 0x1
      b         .loc_0x124

    .loc_0xD4:
      lbz       r0, 0x2A4(r30)
      cmplwi    r0, 0
      beq-      .loc_0xE8
      li        r3, 0x1
      b         .loc_0x124

    .loc_0xE8:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,26,26
      bne-      .loc_0x100
      li        r3, 0x1
      b         .loc_0x124

    .loc_0x100:
      lwz       r3, 0x274(r30)
      cmplwi    r3, 0
      beq-      .loc_0x120
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      b         .loc_0x124

    .loc_0x120:
      li        r3, 0x1

    .loc_0x124:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1F4
      lfs       f0, 0x2A0(r30)
      rlwinm.   r0,r31,0,24,31
      fsubs     f0, f0, f31
      stfs      f0, 0x2A0(r30)
      beq-      .loc_0x1A4
      lwz       r3, 0x26C(r30)
      li        r4, 0x80F
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6960(r13)
      li        r4, 0x1D
      lhz       r5, 0x2DC(r30)
      bl        0x10DC18
      lwz       r3, -0x6958(r13)
      li        r4, 0x1
      lhz       r5, 0x2DC(r30)
      bl        0x10F19C
      lwz       r3, 0x2D0(r30)
      lwz       r4, 0x14(r3)
      bl        0x273EA4
      bl        0x3146E8
      cmplwi    r3, 0
      beq-      .loc_0x1A4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x1A4:
      lfs       f1, 0x2A0(r30)
      lfs       f0, -0x6008(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1F4
      lwz       r3, 0x274(r30)
      cmplwi    r3, 0
      beq-      .loc_0x1C8
      lwz       r0, 0x4(r3)
      b         .loc_0x1CC

    .loc_0x1C8:
      li        r0, -0x1

    .loc_0x1CC:
      cmpwi     r0, 0x13
      beq-      .loc_0x1F4
      lwz       r3, 0x270(r30)
      mr        r4, r30
      li        r5, 0x13
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x1F4:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80144824
 * Size:	00029C
 */
void Game::Navi::enterAllPikis(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x1C0(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x1C4(r1)
      subi      r0, r4, 0x4364
      stw       r31, 0x1BC(r1)
      li        r31, 0
      stw       r30, 0x1B8(r1)
      stw       r29, 0x1B4(r1)
      li        r29, 0
      cmplwi    r29, 0
      stw       r28, 0x1B0(r1)
      lwz       r3, -0x6D0C(r13)
      stw       r29, 0x1C(r1)
      stw       r0, 0x10(r1)
      stw       r29, 0x14(r1)
      stw       r3, 0x18(r1)
      bne-      .loc_0x60
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0x1E8

    .loc_0x60:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0xCC

    .loc_0x78:
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1E8
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)

    .loc_0xCC:
      lwz       r12, 0x10(r1)
      addi      r3, r1, 0x10
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x78
      b         .loc_0x1E8

    .loc_0xEC:
      lwz       r3, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r30, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x12C
      addi      r3, r1, 0x20
      addi      r31, r31, 0x1
      stwx      r30, r3, r29
      addi      r29, r29, 0x4

    .loc_0x12C:
      lwz       r0, 0x1C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x158
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0x1E8

    .loc_0x158:
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0x1CC

    .loc_0x178:
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1E8
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)

    .loc_0x1CC:
      lwz       r12, 0x10(r1)
      addi      r3, r1, 0x10
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x178

    .loc_0x1E8:
      lwz       r3, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x14(r1)
      cmplw     r4, r3
      bne+      .loc_0xEC
      addi      r29, r1, 0x20
      li        r30, 0
      b         .loc_0x274

    .loc_0x214:
      lwz       r28, 0x0(r29)
      lbz       r4, 0x2B8(r28)
      cmpwi     r4, 0x2
      bgt-      .loc_0x230
      lwz       r3, -0x6CD0(r13)
      bl        0x37050
      b         .loc_0x238

    .loc_0x230:
      lwz       r3, -0x6CD0(r13)
      lwz       r3, 0xB0(r3)

    .loc_0x238:
      cmplwi    r3, 0
      beq-      .loc_0x26C
      lis       r5, 0x804B
      lis       r4, 0x804B
      addi      r6, r5, 0x530
      stw       r3, 0xC(r1)
      addi      r0, r4, 0x524
      addi      r5, r1, 0x8
      stw       r6, 0x8(r1)
      li        r4, 0x2
      stw       r0, 0x8(r1)
      lwz       r3, 0x294(r28)
      bl        0x52508

    .loc_0x26C:
      addi      r29, r29, 0x4
      addi      r30, r30, 0x1

    .loc_0x274:
      cmpw      r30, r31
      blt+      .loc_0x214
      lwz       r0, 0x1C4(r1)
      lwz       r31, 0x1BC(r1)
      lwz       r30, 0x1B8(r1)
      lwz       r29, 0x1B4(r1)
      lwz       r28, 0x1B0(r1)
      mtlr      r0
      addi      r1, r1, 0x1C0
      blr
    */
}

/*
 * --INFO--
 * Address:	80144AC0
 * Size:	000014
 */
void Game::Navi::formationable(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x2D4(r3)
      extsb     r0, r0
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::Navi::startKaisanDisable(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80144AD4
 * Size:	000070
 */
void Game::Navi::updateKaisanDisable(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x2D4(r3)
      extsb.    r0, r0
      ble-      .loc_0x5C
      lfs       f1, 0x1E4(r31)
      lfs       f0, 0x1E8(r31)
      fmuls     f1, f1, f1
      lfs       f2, 0x1EC(r31)
      fmuls     f0, f0, f0
      fmuls     f2, f2, f2
      fadds     f0, f1, f0
      fadds     f1, f2, f0
      bl        0x2CCCF0
      lfs       f0, -0x5F88(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x5C
      lbz       r3, 0x2D4(r31)
      subi      r0, r3, 0x1
      stb       r0, 0x2D4(r31)

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80144B44
 * Size:	00000C
 */
void Game::Navi::clearKaisanDisable(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0x2D4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80144B50
 * Size:	000010
 */
void Game::Navi::throwable(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x2BC(r3)
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80144B60
 * Size:	00000C
 */
void Game::Navi::startThrowDisable(void)
{
    /*
    .loc_0x0:
      li        r0, 0xA
      stb       r0, 0x2BC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80144B6C
 * Size:	00003C
 */
void Game::Navi::updateThrowDisable(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x2BC(r3)
      cmplwi    r0, 0
      beqlr-
      lwz       r4, 0x278(r3)
      cmplwi    r4, 0
      beq-      .loc_0x2C
      lwz       r0, 0x18(r4)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x2C
      li        r0, 0xA
      stb       r0, 0x2BC(r3)

    .loc_0x2C:
      lbz       r4, 0x2BC(r3)
      subi      r0, r4, 0x1
      stb       r0, 0x2BC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80144BA8
 * Size:	00000C
 */
void Game::Navi::clearThrowDisable(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0x2BC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80144BB4
 * Size:	0002FC
 */
void holeinAllPikis__Q24Game4NaviFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x1D0(r1)
      mflr      r0
      stw       r0, 0x1D4(r1)
      stw       r31, 0x1CC(r1)
      stw       r30, 0x1C8(r1)
      mr        r30, r4
      li        r4, 0
      stw       r29, 0x1C4(r1)
      stw       r28, 0x1C0(r1)
      mr        r28, r3
      lwz       r3, -0x6D20(r13)
      bl        0x166EC
      lwz       r3, 0x254(r28)
      li        r29, 0
      lis       r4, 0x804B
      li        r31, 0
      subi      r0, r4, 0x437C
      cmplwi    r29, 0
      stw       r0, 0x14(r1)
      stw       r29, 0x20(r1)
      stw       r29, 0x18(r1)
      stw       r3, 0x1C(r1)
      bne-      .loc_0x74
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x268

    .loc_0x74:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0xE0

    .loc_0x8C:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x268
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0xE0:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x8C
      b         .loc_0x268

    .loc_0x100:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r0, r3
      mr        r28, r0
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1AC
      lwz       r3, 0x290(r28)
      li        r4, 0x1B
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x188
      lwz       r3, 0x290(r28)
      li        r4, 0x1B
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x188
      addi      r3, r1, 0x24
      addi      r31, r31, 0x1
      stwx      r28, r3, r29
      addi      r29, r29, 0x4
      b         .loc_0x1AC

    .loc_0x188:
      lwz       r3, 0x28C(r28)
      mr        r4, r28
      li        r5, 0
      li        r6, 0
      bl        0x452E4
      addi      r3, r1, 0x24
      addi      r31, r31, 0x1
      stwx      r28, r3, r29
      addi      r29, r29, 0x4

    .loc_0x1AC:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1D8
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x268

    .loc_0x1D8:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x24C

    .loc_0x1F8:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x268
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x24C:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1F8

    .loc_0x268:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x100
      addi      r29, r1, 0x24
      li        r28, 0
      b         .loc_0x2D4

    .loc_0x294:
      lfs       f0, 0x0(r30)
      addi      r6, r1, 0x8
      lwz       r4, 0x0(r29)
      li        r5, 0x1B
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r30)
      stfs      f0, 0x10(r1)
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x4
      addi      r28, r28, 0x1

    .loc_0x2D4:
      cmpw      r28, r31
      blt+      .loc_0x294
      lwz       r0, 0x1D4(r1)
      lwz       r31, 0x1CC(r1)
      lwz       r30, 0x1C8(r1)
      lwz       r29, 0x1C4(r1)
      lwz       r28, 0x1C0(r1)
      mtlr      r0
      addi      r1, r1, 0x1D0
      blr
    */
}

/*
 * --INFO--
 * Address:	80144EB0
 * Size:	000008
 */
void Game::PikiState::soft_transittable((int))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80144EB8
 * Size:	000008
 */
void Game::PikiState::transittable((int))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80144EC0
 * Size:	0002F8
 */
void fountainonAllPikis__Q24Game4NaviFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x1D0(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x1D4(r1)
      subi      r0, r5, 0x437C
      stw       r31, 0x1CC(r1)
      li        r31, 0
      stw       r30, 0x1C8(r1)
      mr        r30, r4
      stw       r29, 0x1C4(r1)
      li        r29, 0
      cmplwi    r29, 0
      stw       r28, 0x1C0(r1)
      lwz       r3, 0x254(r3)
      stw       r0, 0x14(r1)
      stw       r29, 0x20(r1)
      stw       r29, 0x18(r1)
      stw       r3, 0x1C(r1)
      bne-      .loc_0x64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x264

    .loc_0x64:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0xD0

    .loc_0x7C:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x264
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0xD0:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x7C
      b         .loc_0x264

    .loc_0xF0:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r0, r3
      mr        r28, r0
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1A8
      lbz       r0, 0x2B8(r28)
      cmpwi     r0, 0x5
      beq-      .loc_0x1A8
      lwz       r3, 0x290(r28)
      li        r4, 0x1C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x184
      lwz       r3, 0x290(r28)
      li        r4, 0x1C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x184
      addi      r3, r1, 0x24
      addi      r31, r31, 0x1
      stwx      r28, r3, r29
      addi      r29, r29, 0x4
      b         .loc_0x1A8

    .loc_0x184:
      lwz       r3, 0x28C(r28)
      mr        r4, r28
      li        r5, 0
      li        r6, 0
      bl        0x44FDC
      addi      r3, r1, 0x24
      addi      r31, r31, 0x1
      stwx      r28, r3, r29
      addi      r29, r29, 0x4

    .loc_0x1A8:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1D4
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x264

    .loc_0x1D4:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x248

    .loc_0x1F4:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x264
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x248:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1F4

    .loc_0x264:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0xF0
      addi      r29, r1, 0x24
      li        r28, 0
      b         .loc_0x2D0

    .loc_0x290:
      lfs       f0, 0x0(r30)
      addi      r6, r1, 0x8
      lwz       r4, 0x0(r29)
      li        r5, 0x1C
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r30)
      stfs      f0, 0x10(r1)
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x4
      addi      r28, r28, 0x1

    .loc_0x2D0:
      cmpw      r28, r31
      blt+      .loc_0x290
      lwz       r0, 0x1D4(r1)
      lwz       r31, 0x1CC(r1)
      lwz       r30, 0x1C8(r1)
      lwz       r29, 0x1C4(r1)
      lwz       r28, 0x1C0(r1)
      mtlr      r0
      addi      r1, r1, 0x1D0
      blr
    */
}

/*
 * --INFO--
 * Address:	801451B8
 * Size:	0002D4
 */
void Game::Navi::demowaitAllPikis(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x1C0(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x1C4(r1)
      subi      r0, r4, 0x437C
      stw       r31, 0x1BC(r1)
      li        r31, 0
      stw       r30, 0x1B8(r1)
      li        r30, 0
      cmplwi    r30, 0
      stw       r29, 0x1B4(r1)
      lwz       r3, 0x254(r3)
      stw       r0, 0x8(r1)
      stw       r30, 0x14(r1)
      stw       r30, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x5C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x25C

    .loc_0x5C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xC8

    .loc_0x74:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x25C
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xC8:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x74
      b         .loc_0x25C

    .loc_0xE8:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r0, r3
      mr        r29, r0
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1A0
      lbz       r0, 0x2B8(r29)
      cmpwi     r0, 0x5
      beq-      .loc_0x1A0
      lwz       r3, 0x290(r29)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x17C
      lwz       r3, 0x290(r29)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x17C
      addi      r3, r1, 0x18
      addi      r31, r31, 0x1
      stwx      r29, r3, r30
      addi      r30, r30, 0x4
      b         .loc_0x1A0

    .loc_0x17C:
      lwz       r3, 0x28C(r29)
      mr        r4, r29
      li        r5, 0
      li        r6, 0
      bl        0x44CEC
      addi      r3, r1, 0x18
      addi      r31, r31, 0x1
      stwx      r29, r3, r30
      addi      r30, r30, 0x4

    .loc_0x1A0:
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1CC
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x25C

    .loc_0x1CC:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x240

    .loc_0x1EC:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x25C
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x240:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1EC

    .loc_0x25C:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xE8
      addi      r30, r1, 0x18
      li        r29, 0
      b         .loc_0x2B0

    .loc_0x288:
      lwz       r4, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x4
      addi      r29, r29, 0x1

    .loc_0x2B0:
      cmpw      r29, r31
      blt+      .loc_0x288
      lwz       r0, 0x1C4(r1)
      lwz       r31, 0x1BC(r1)
      lwz       r30, 0x1B8(r1)
      lwz       r29, 0x1B4(r1)
      mtlr      r0
      addi      r1, r1, 0x1C0
      blr
    */
}

/*
 * --INFO--
 * Address:	8014548C
 * Size:	000954
 */
void Game::Navi::releasePikis(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x320(r1)
      mflr      r0
      stw       r0, 0x324(r1)
      stfd      f31, 0x310(r1)
      psq_st    f31,0x318(r1),0,0
      stfd      f30, 0x300(r1)
      psq_st    f30,0x308(r1),0,0
      stfd      f29, 0x2F0(r1)
      psq_st    f29,0x2F8(r1),0,0
      stmw      r17, 0x2B4(r1)
      lwz       r4, -0x6C18(r13)
      mr        r30, r3
      lbz       r0, 0x3C(r4)
      rlwinm.   r0,r0,0,30,30
      bne-      .loc_0x44
      li        r3, 0
      b         .loc_0x928

    .loc_0x44:
      lwz       r3, -0x6D20(r13)
      li        r21, 0
      lhz       r0, 0x2DC(r30)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x274(r3)
      cmplwi    r4, 0
      beq-      .loc_0x78
      lwz       r0, 0x4(r4)
      b         .loc_0x7C

    .loc_0x78:
      li        r0, -0x1

    .loc_0x7C:
      cmpwi     r0, 0x1
      bne-      .loc_0x88
      li        r21, 0x1

    .loc_0x88:
      lis       r5, 0x804B
      lis       r4, 0x804C
      subi      r5, r5, 0x5D00
      stw       r30, 0xC(r1)
      subi      r0, r4, 0x79E0
      addi      r4, r1, 0x8
      stw       r5, 0x8(r1)
      stw       r0, 0x8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      li        r29, 0
      lwz       r3, 0x254(r30)
      lis       r4, 0x804B
      li        r31, 0
      subi      r0, r4, 0x437C
      cmplwi    r29, 0
      stw       r0, 0x40(r1)
      stw       r29, 0x4C(r1)
      stw       r29, 0x44(r1)
      stw       r3, 0x48(r1)
      bne-      .loc_0xFC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r1)
      b         .loc_0x2CC

    .loc_0xFC:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r1)
      b         .loc_0x168

    .loc_0x114:
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2CC
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r1)

    .loc_0x168:
      lwz       r12, 0x40(r1)
      addi      r3, r1, 0x40
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x114
      b         .loc_0x2CC

    .loc_0x188:
      lwz       r3, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r17, r0
      bl        0x3904
      lwz       r3, 0x290(r17)
      cmplwi    r3, 0
      beq-      .loc_0x1CC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x210

    .loc_0x1CC:
      mr        r3, r17
      lwz       r12, 0x0(r17)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x210
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      addi      r4, r1, 0x108
      addi      r31, r31, 0x1
      stwx      r3, r4, r29
      addi      r29, r29, 0x4

    .loc_0x210:
      lwz       r0, 0x4C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x23C
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r1)
      b         .loc_0x2CC

    .loc_0x23C:
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r1)
      b         .loc_0x2B0

    .loc_0x25C:
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2CC
      lwz       r3, 0x48(r1)
      lwz       r4, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r1)

    .loc_0x2B0:
      lwz       r12, 0x40(r1)
      addi      r3, r1, 0x40
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x25C

    .loc_0x2CC:
      lwz       r3, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x44(r1)
      cmplw     r4, r3
      bne+      .loc_0x188
      rlwinm.   r0,r21,0,24,31
      bne-      .loc_0x2FC
      cmpwi     r31, 0
      ble-      .loc_0x304

    .loc_0x2FC:
      lwz       r3, 0x26C(r30)
      bl        0x31D6D8

    .loc_0x304:
      cmpwi     r31, 0
      bne-      .loc_0x314
      mr        r3, r21
      b         .loc_0x928

    .loc_0x314:
      lfs       f0, -0x600C(r2)
      li        r0, 0
      addi      r22, r1, 0xA8
      addi      r23, r1, 0x88
      stfs      f0, 0xA8(r1)
      mr        r18, r23
      mr        r19, r22
      li        r21, 0
      stfs      f0, 0xAC(r1)
      stfs      f0, 0xB0(r1)
      stw       r0, 0x88(r1)
      stfs      f0, 0xB4(r1)
      stfs      f0, 0xB8(r1)
      stfs      f0, 0xBC(r1)
      stw       r0, 0x8C(r1)
      stfs      f0, 0xC0(r1)
      stfs      f0, 0xC4(r1)
      stfs      f0, 0xC8(r1)
      stw       r0, 0x90(r1)
      stfs      f0, 0xCC(r1)
      stfs      f0, 0xD0(r1)
      stfs      f0, 0xD4(r1)
      stw       r0, 0x94(r1)
      stfs      f0, 0xD8(r1)
      stfs      f0, 0xDC(r1)
      stfs      f0, 0xE0(r1)
      stw       r0, 0x98(r1)
      stfs      f0, 0xE4(r1)
      stfs      f0, 0xE8(r1)
      stfs      f0, 0xEC(r1)
      stw       r0, 0x9C(r1)
      stfs      f0, 0xF0(r1)
      stfs      f0, 0xF4(r1)
      stfs      f0, 0xF8(r1)
      stw       r0, 0xA0(r1)
      stfs      f0, 0xFC(r1)
      stfs      f0, 0x100(r1)
      stfs      f0, 0x104(r1)
      stw       r0, 0xA4(r1)

    .loc_0x3B0:
      addi      r17, r1, 0x108
      li        r20, 0
      b         .loc_0x490

    .loc_0x3BC:
      cmpwi     r21, 0x2
      beq-      .loc_0x428
      lwz       r4, 0x0(r17)
      lbz       r0, 0x2B8(r4)
      cmpw      r21, r0
      bne-      .loc_0x488
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x34
      lwz       r5, 0x0(r18)
      lwz       r12, 0x8(r12)
      addi      r0, r5, 0x1
      stw       r0, 0x0(r18)
      mtctr     r12
      bctrl
      lfs       f2, 0x0(r19)
      lfs       f0, 0x34(r1)
      lfs       f1, 0x38(r1)
      fadds     f2, f2, f0
      lfs       f0, 0x3C(r1)
      stfs      f2, 0x0(r19)
      lfs       f2, 0x4(r19)
      fadds     f1, f2, f1
      stfs      f1, 0x4(r19)
      lfs       f1, 0x8(r19)
      fadds     f0, f1, f0
      stfs      f0, 0x8(r19)
      b         .loc_0x488

    .loc_0x428:
      lwz       r4, 0x0(r17)
      lbz       r0, 0x2B8(r4)
      cmpwi     r0, 0x2
      bne-      .loc_0x488
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x28
      lwz       r5, 0x90(r1)
      lwz       r12, 0x8(r12)
      addi      r0, r5, 0x1
      stw       r0, 0x90(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0xC0(r1)
      lfs       f0, 0x28(r1)
      lfs       f3, 0xC4(r1)
      lfs       f2, 0x2C(r1)
      fadds     f4, f1, f0
      lfs       f1, 0xC8(r1)
      lfs       f0, 0x30(r1)
      fadds     f2, f3, f2
      stfs      f4, 0xC0(r1)
      fadds     f0, f1, f0
      stfs      f2, 0xC4(r1)
      stfs      f0, 0xC8(r1)

    .loc_0x488:
      addi      r17, r17, 0x4
      addi      r20, r20, 0x1

    .loc_0x490:
      cmpw      r20, r31
      blt+      .loc_0x3BC
      addi      r21, r21, 0x1
      addi      r19, r19, 0xC
      cmpwi     r21, 0x8
      addi      r18, r18, 0x4
      blt+      .loc_0x3B0
      addi      r21, r1, 0x68
      mr        r17, r23
      mr        r18, r22
      li        r20, 0
      mr        r19, r21

    .loc_0x4C0:
      lwz       r0, 0x0(r17)
      cmpwi     r0, 0
      ble-      .loc_0x534
      xoris     r3, r0, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x29C(r1)
      lfd       f3, -0x5F90(r2)
      stw       r0, 0x298(r1)
      lfs       f2, -0x6008(r2)
      lfd       f0, 0x298(r1)
      lfs       f1, 0x0(r18)
      fsubs     f0, f0, f3
      stw       r3, 0x2A4(r1)
      stw       r0, 0x2A0(r1)
      fdivs     f4, f2, f0
      lfd       f0, 0x2A0(r1)
      fmuls     f2, f1, f4
      fsubs     f1, f0, f3
      stfs      f2, 0x0(r18)
      lfs       f0, 0x4(r18)
      fmuls     f0, f0, f4
      stfs      f0, 0x4(r18)
      lfs       f0, 0x8(r18)
      fmuls     f0, f0, f4
      stfs      f0, 0x8(r18)
      bl        0x2CBE54
      lfs       f0, -0x5F84(r2)
      fmuls     f0, f0, f1
      stfs      f0, 0x0(r19)

    .loc_0x534:
      addi      r20, r20, 0x1
      addi      r18, r18, 0xC
      cmpwi     r20, 0x8
      addi      r19, r19, 0x4
      addi      r17, r17, 0x4
      blt+      .loc_0x4C0
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r30)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      li        r19, 0
      mr        r20, r3

    .loc_0x570:
      mr        r26, r23
      mr        r25, r22
      mr        r24, r21
      li        r18, 0

    .loc_0x580:
      lwz       r0, 0x0(r26)
      cmpwi     r0, 0
      ble-      .loc_0x730
      mr        r4, r30
      addi      r3, r1, 0x1C
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x4(r25)
      lfs       f0, 0x20(r1)
      lfs       f1, 0x0(r25)
      fsubs     f30, f2, f0
      lfs       f0, 0x1C(r1)
      lfs       f2, 0x8(r25)
      fsubs     f31, f1, f0
      lfs       f1, 0x24(r1)
      fmuls     f0, f30, f30
      fsubs     f29, f2, f1
      fmadds    f0, f31, f31, f0
      fmadds    f1, f29, f29, f0
      bl        0x2CBDA4
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x5FC
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0
      b         .loc_0x600

    .loc_0x5FC:
      fmr       f1, f0

    .loc_0x600:
      lfs       f0, 0x0(r24)
      lfs       f2, -0x5FF0(r2)
      fsubs     f1, f1, f0
      lfs       f0, -0x5F88(r2)
      fsubs     f1, f1, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0x650
      fsubs     f0, f0, f1
      lfs       f3, 0x0(r25)
      fmuls     f2, f31, f0
      fmuls     f1, f30, f0
      fmuls     f0, f29, f0
      fadds     f2, f3, f2
      stfs      f2, 0x0(r25)
      lfs       f2, 0x4(r25)
      fadds     f1, f2, f1
      stfs      f1, 0x4(r25)
      lfs       f1, 0x8(r25)
      fadds     f0, f1, f0
      stfs      f0, 0x8(r25)

    .loc_0x650:
      mr        r3, r20
      lwz       r12, 0x0(r20)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x730
      mr        r4, r20
      addi      r3, r1, 0x10
      lwz       r12, 0x0(r20)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x4(r25)
      lfs       f0, 0x14(r1)
      lfs       f1, 0x0(r25)
      fsubs     f30, f2, f0
      lfs       f0, 0x10(r1)
      lfs       f2, 0x8(r25)
      fsubs     f29, f1, f0
      lfs       f1, 0x18(r1)
      fmuls     f0, f30, f30
      fsubs     f31, f2, f1
      fmadds    f0, f29, f29, f0
      fmadds    f1, f31, f31, f0
      bl        0x2CBCC4
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6DC
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f29, f29, f0
      fmuls     f30, f30, f0
      fmuls     f31, f31, f0
      b         .loc_0x6E0

    .loc_0x6DC:
      fmr       f1, f0

    .loc_0x6E0:
      lfs       f0, 0x0(r24)
      lfs       f2, -0x5FF0(r2)
      fsubs     f1, f1, f0
      lfs       f0, -0x5F88(r2)
      fsubs     f1, f1, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0x730
      fsubs     f0, f0, f1
      lfs       f3, 0x0(r25)
      fmuls     f2, f29, f0
      fmuls     f1, f30, f0
      fmuls     f0, f31, f0
      fadds     f2, f3, f2
      stfs      f2, 0x0(r25)
      lfs       f2, 0x4(r25)
      fadds     f1, f2, f1
      stfs      f1, 0x4(r25)
      lfs       f1, 0x8(r25)
      fadds     f0, f1, f0
      stfs      f0, 0x8(r25)

    .loc_0x730:
      addi      r17, r18, 0x1
      addi      r29, r1, 0x88
      mulli     r0, r17, 0xC
      addi      r28, r1, 0xA8
      rlwinm    r3,r17,2,0,29
      addi      r27, r1, 0x68
      add       r29, r29, r3
      add       r28, r28, r0
      add       r27, r27, r3
      b         .loc_0x850

    .loc_0x758:
      lwz       r0, 0x0(r26)
      cmpwi     r0, 0
      ble-      .loc_0x840
      lwz       r0, 0x0(r29)
      cmpwi     r0, 0
      ble-      .loc_0x840
      lfs       f2, 0x4(r25)
      lfs       f0, 0x4(r28)
      lfs       f1, 0x0(r25)
      fsubs     f30, f2, f0
      lfs       f0, 0x0(r28)
      lfs       f2, 0x8(r25)
      fsubs     f29, f1, f0
      lfs       f1, 0x8(r28)
      fmuls     f0, f30, f30
      fsubs     f31, f2, f1
      fmadds    f0, f29, f29, f0
      fmadds    f1, f31, f31, f0
      bl        0x2CBBD8
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x7C8
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f29, f29, f0
      fmuls     f30, f30, f0
      fmuls     f31, f31, f0
      b         .loc_0x7CC

    .loc_0x7C8:
      fmr       f1, f0

    .loc_0x7CC:
      lfs       f0, 0x0(r24)
      lfs       f2, 0x0(r27)
      fsubs     f1, f1, f0
      lfs       f0, -0x5F88(r2)
      fsubs     f1, f1, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0x840
      fsubs     f3, f0, f1
      lfs       f0, 0x0(r25)
      fmuls     f1, f29, f3
      fmuls     f2, f30, f3
      fmuls     f3, f31, f3
      fadds     f0, f0, f1
      stfs      f0, 0x0(r25)
      lfs       f0, 0x4(r25)
      fadds     f0, f0, f2
      stfs      f0, 0x4(r25)
      lfs       f0, 0x8(r25)
      fadds     f0, f0, f3
      stfs      f0, 0x8(r25)
      lfs       f0, 0x0(r28)
      fsubs     f0, f0, f1
      stfs      f0, 0x0(r28)
      lfs       f0, 0x4(r28)
      fsubs     f0, f0, f2
      stfs      f0, 0x4(r28)
      lfs       f0, 0x8(r28)
      fsubs     f0, f0, f3
      stfs      f0, 0x8(r28)

    .loc_0x840:
      addi      r29, r29, 0x4
      addi      r28, r28, 0xC
      addi      r27, r27, 0x4
      addi      r17, r17, 0x1

    .loc_0x850:
      cmpwi     r17, 0x8
      blt+      .loc_0x758
      addi      r18, r18, 0x1
      addi      r25, r25, 0xC
      cmpwi     r18, 0x8
      addi      r24, r24, 0x4
      addi      r26, r26, 0x4
      blt+      .loc_0x580
      addi      r19, r19, 0x1
      cmpwi     r19, 0x4
      blt+      .loc_0x570
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r20, r1, 0x108
      addi      r19, r1, 0x68
      addi      r18, r4, 0x530
      addi      r17, r3, 0x518
      li        r21, 0
      b         .loc_0x914

    .loc_0x89C:
      lwz       r8, 0x0(r20)
      addi      r9, r1, 0xA8
      li        r3, 0x1
      li        r4, 0x2800
      lbz       r7, 0x2B8(r8)
      li        r5, 0x5A
      li        r6, 0
      mulli     r0, r7, 0xC
      rlwinm    r7,r7,2,0,29
      stw       r18, 0x50(r1)
      lfsx      f3, r19, r7
      add       r9, r9, r0
      stw       r17, 0x50(r1)
      lfs       f2, 0x0(r9)
      lfs       f1, 0x4(r9)
      lfs       f0, 0x8(r9)
      stb       r3, 0x54(r1)
      stfs      f2, 0x58(r1)
      stfs      f1, 0x5C(r1)
      stfs      f0, 0x60(r1)
      stfs      f3, 0x64(r1)
      lwz       r3, 0x250(r8)
      bl        0x31C800
      lwz       r3, 0x0(r20)
      addi      r5, r1, 0x50
      li        r4, 0x1
      lwz       r3, 0x294(r3)
      bl        0x51200
      addi      r20, r20, 0x4
      addi      r21, r21, 0x1

    .loc_0x914:
      cmpw      r21, r31
      blt+      .loc_0x89C
      li        r0, 0x3C
      li        r3, 0x1
      stb       r0, 0x2D4(r30)

    .loc_0x928:
      psq_l     f31,0x318(r1),0,0
      lfd       f31, 0x310(r1)
      psq_l     f30,0x308(r1),0,0
      lfd       f30, 0x300(r1)
      psq_l     f29,0x2F8(r1),0,0
      lfd       f29, 0x2F0(r1)
      lmw       r17, 0x2B4(r1)
      lwz       r0, 0x324(r1)
      mtlr      r0
      addi      r1, r1, 0x320
      blr
    */
}

/*
 * --INFO--
 * Address:	80145DE0
 * Size:	000008
 */
void Game::PikiState::releasable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80145DE8
 * Size:	000920
 */
void Game::Navi::makeCStick((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x190(r1)
      mflr      r0
      stw       r0, 0x194(r1)
      stfd      f31, 0x180(r1)
      psq_st    f31,0x188(r1),0,0
      stfd      f30, 0x170(r1)
      psq_st    f30,0x178(r1),0,0
      stfd      f29, 0x160(r1)
      psq_st    f29,0x168(r1),0,0
      stfd      f28, 0x150(r1)
      psq_st    f28,0x158(r1),0,0
      stfd      f27, 0x140(r1)
      psq_st    f27,0x148(r1),0,0
      stfd      f26, 0x130(r1)
      psq_st    f26,0x138(r1),0,0
      stfd      f25, 0x120(r1)
      psq_st    f25,0x128(r1),0,0
      stfd      f24, 0x110(r1)
      psq_st    f24,0x118(r1),0,0
      stfd      f23, 0x100(r1)
      psq_st    f23,0x108(r1),0,0
      stfd      f22, 0xF0(r1)
      psq_st    f22,0xF8(r1),0,0
      stfd      f21, 0xE0(r1)
      psq_st    f21,0xE8(r1),0,0
      stw       r31, 0xDC(r1)
      stw       r30, 0xD8(r1)
      mr        r31, r3
      lfs       f22, -0x600C(r2)
      lwz       r5, 0x278(r3)
      mr        r30, r4
      fmr       f21, f22
      cmplwi    r5, 0
      beq-      .loc_0xA4
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0xA4
      lfs       f0, 0x58(r5)
      lfs       f21, 0x5C(r5)
      fneg      f22, f0

    .loc_0xA4:
      lwz       r4, 0x280(r31)
      addi      r3, r1, 0x80
      bl        0x2D4414
      lfs       f27, 0x80(r1)
      addi      r3, r1, 0x74
      lfs       f25, 0x88(r1)
      lwz       r4, 0x280(r31)
      bl        0x2D43E0
      lfs       f31, 0x74(r1)
      addi      r3, r1, 0x68
      lfs       f30, 0x78(r1)
      lfs       f29, 0x7C(r1)
      lwz       r4, 0x280(r31)
      bl        0x2D4414
      lfs       f26, -0x600C(r2)
      lfs       f24, 0x68(r1)
      fmadds    f0, f27, f27, f26
      lfs       f28, 0x6C(r1)
      lfs       f23, 0x70(r1)
      fmadds    f1, f25, f25, f0
      bl        0x2CB928
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x118
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0
      fmuls     f25, f25, f0

    .loc_0x118:
      fcmpo     cr0, f30, f28
      ble-      .loc_0x124
      b         .loc_0x12C

    .loc_0x124:
      fmr       f24, f31
      fmr       f23, f29

    .loc_0x12C:
      lfs       f28, -0x600C(r2)
      fmadds    f0, f24, f24, f28
      fmadds    f1, f23, f23, f0
      bl        0x2CB8E4
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x15C
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f24, f24, f0
      fmuls     f28, f28, f0
      fmuls     f23, f23, f0

    .loc_0x15C:
      fmuls     f5, f27, f22
      rlwinm.   r0,r30,0,24,31
      fmuls     f4, f24, f21
      fmuls     f0, f23, f21
      fmuls     f1, f25, f22
      fmuls     f3, f26, f22
      fmuls     f2, f28, f21
      fadds     f23, f5, f4
      fadds     f25, f1, f0
      fadds     f24, f3, f2
      beq-      .loc_0x194
      lfs       f23, -0x600C(r2)
      fmr       f24, f23
      fmr       f25, f23

    .loc_0x194:
      fmuls     f0, f24, f24
      lfs       f1, -0x600C(r2)
      li        r0, 0
      stfs      f1, 0x2EC(r31)
      fmadds    f0, f23, f23, f0
      stfs      f1, 0x2F0(r31)
      fmadds    f28, f25, f25, f0
      stfs      f1, 0x2F4(r31)
      stb       r0, 0x30D(r31)
      fmr       f1, f28
      bl        0x2CB860
      lfs       f0, -0x5F80(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x338
      li        r0, 0x1
      lfs       f0, -0x600C(r2)
      stb       r0, 0x30D(r31)
      fmr       f1, f23
      fmr       f2, f25
      stfs      f0, 0x308(r31)
      stfs      f23, 0x2EC(r31)
      stfs      f24, 0x2F0(r31)
      stfs      f25, 0x2F4(r31)
      bl        0x2CB804
      lwz       r3, 0x254(r31)
      fmr       f29, f1
      lfs       f30, 0xF0(r3)
      bl        0x2CB7B0
      fmr       f27, f1
      fmr       f1, f29
      bl        0x2CB73C
      fmr       f26, f1
      fmr       f1, f30
      bl        0x2CB798
      fmr       f22, f1
      fmr       f1, f30
      bl        0x2CB724
      fmr       f21, f1
      lfs       f1, -0x5F78(r2)
      bl        0x2CB780
      lfs       f0, -0x600C(r2)
      fmadds    f0, f26, f21, f0
      fmadds    f0, f27, f22, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x260
      fmr       f1, f29
      fmr       f2, f30
      bl        0x2CBBC4
      lfs       f0, -0x5F7C(r2)
      fmadds    f1, f0, f1, f30
      b         .loc_0x264

    .loc_0x260:
      fmr       f1, f29

    .loc_0x264:
      bl        0x2CBB84
      fmr       f21, f1
      fmr       f1, f28
      stfs      f21, 0x2F8(r31)
      bl        0x2CB7A8
      lfs       f0, -0x5F80(r2)
      lfs       f2, -0x5F74(r2)
      fsubs     f1, f1, f0
      lfs       f0, -0x5F6C(r2)
      fdivs     f1, f1, f2
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x2A0
      lfs       f1, -0x6008(r2)
      b         .loc_0x2AC

    .loc_0x2A0:
      fdivs     f0, f1, f0
      lfs       f1, -0x5F70(r2)
      fmuls     f1, f1, f0

    .loc_0x2AC:
      lwz       r3, 0x254(r31)
      lwz       r4, 0xC8(r3)
      bl        0x5005C
      lbz       r3, 0x258(r31)
      cmplwi    r3, 0x28
      bge-      .loc_0x2CC
      addi      r0, r3, 0x1
      stb       r0, 0x258(r31)

    .loc_0x2CC:
      mr        r4, r31
      addi      r3, r1, 0x5C
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x5C(r1)
      fmr       f1, f21
      lfs       f2, 0x60(r1)
      addi      r4, r1, 0xCC
      lfs       f0, 0x64(r1)
      addi      r5, r31, 0x200
      stfs      f3, 0xCC(r1)
      stfs      f2, 0xD0(r1)
      stfs      f0, 0xD4(r1)
      lbz       r0, 0x258(r31)
      lwz       r3, 0x254(r31)
      cmplwi    r0, 0x28
      blt-      .loc_0x320
      lfs       f2, -0x5F68(r2)
      b         .loc_0x324

    .loc_0x320:
      lfs       f2, -0x6008(r2)

    .loc_0x324:
      bl        0x4F1E0
      li        r0, 0
      stb       r0, 0x2FC(r31)
      stb       r0, 0x30C(r31)
      b         .loc_0x8A4

    .loc_0x338:
      li        r0, 0
      stb       r0, 0x258(r31)
      lbz       r0, 0x2FC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x354
      li        r0, 0x1
      stb       r0, 0x30C(r31)

    .loc_0x354:
      lbz       r0, 0x2FC(r31)
      lfs       f1, -0x5FA0(r2)
      lfs       f0, 0x1FC(r31)
      cmplwi    r0, 0
      fadds     f21, f1, f0
      bne-      .loc_0x40C
      lfs       f1, 0x1E4(r31)
      lfs       f0, 0x1E8(r31)
      fmuls     f1, f1, f1
      lfs       f2, 0x1EC(r31)
      fmuls     f0, f0, f0
      fmuls     f2, f2, f2
      fadds     f0, f1, f0
      fadds     f1, f2, f0
      bl        0x2CB690
      lfs       f0, -0x5FE0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x40C
      lwz       r3, 0x274(r31)
      cmplwi    r3, 0
      beq-      .loc_0x3B0
      lwz       r0, 0x4(r3)
      b         .loc_0x3B4

    .loc_0x3B0:
      li        r0, -0x1

    .loc_0x3B4:
      cmpwi     r0, 0x6
      beq-      .loc_0x40C
      mr        r4, r31
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r31)
      lfs       f21, 0x2F8(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x50(r1)
      fmr       f1, f21
      lfs       f3, 0x54(r1)
      addi      r4, r1, 0xC0
      lfs       f0, 0x58(r1)
      addi      r5, r31, 0x200
      stfs      f2, 0xC0(r1)
      lfs       f2, -0x6008(r2)
      stfs      f3, 0xC4(r1)
      stfs      f0, 0xC8(r1)
      lwz       r3, 0x254(r31)
      bl        0x4F100
      b         .loc_0x414

    .loc_0x40C:
      li        r0, 0x1
      stb       r0, 0x2FC(r31)

    .loc_0x414:
      lwz       r3, 0x254(r31)
      lfs       f1, -0x600C(r2)
      lwz       r4, 0xC8(r3)
      bl        0x4FEF0
      lwz       r3, 0x254(r31)
      li        r0, 0
      lis       r4, 0x804B
      lfs       f22, -0x5F64(r2)
      subi      r4, r4, 0x437C
      cmplwi    r0, 0
      stw       r4, 0xB0(r1)
      stw       r0, 0xBC(r1)
      stw       r0, 0xB4(r1)
      stw       r3, 0xB8(r1)
      bne-      .loc_0x468
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x63C

    .loc_0x468:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x4D4

    .loc_0x480:
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xBC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x63C
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)

    .loc_0x4D4:
      lwz       r12, 0xB0(r1)
      addi      r3, r1, 0xB0
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x480
      b         .loc_0x63C

    .loc_0x4F4:
      lwz       r3, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      bl        0x2C40
      mr        r4, r31
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x44
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x48(r1)
      lfs       f0, 0x3C(r1)
      lfs       f1, 0x44(r1)
      fsubs     f3, f2, f0
      lfs       f0, 0x38(r1)
      lfs       f2, 0x4C(r1)
      fsubs     f4, f1, f0
      lfs       f1, 0x40(r1)
      fmuls     f0, f3, f3
      fsubs     f1, f2, f1
      fmadds    f0, f4, f4, f0
      fmadds    f1, f1, f1, f0
      bl        0x2CB4AC
      fcmpo     cr0, f1, f22
      bge-      .loc_0x580
      fmr       f22, f1

    .loc_0x580:
      lwz       r0, 0xBC(r1)
      cmplwi    r0, 0
      bne-      .loc_0x5AC
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x63C

    .loc_0x5AC:
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)
      b         .loc_0x620

    .loc_0x5CC:
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xBC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x63C
      lwz       r3, 0xB8(r1)
      lwz       r4, 0xB4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB4(r1)

    .loc_0x620:
      lwz       r12, 0xB0(r1)
      addi      r3, r1, 0xB0
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x5CC

    .loc_0x63C:
      lwz       r3, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xB4(r1)
      cmplw     r4, r3
      bne+      .loc_0x4F4
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x6B0(r3)
      fcmpo     cr0, f22, f0
      bge-      .loc_0x69C
      lwz       r0, 0x300(r31)
      cmpwi     r0, 0
      bne-      .loc_0x68C
      lwz       r3, 0x304(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x304(r31)
      b         .loc_0x704

    .loc_0x68C:
      li        r0, 0
      stw       r0, 0x304(r31)
      stw       r0, 0x300(r31)
      b         .loc_0x704

    .loc_0x69C:
      lfs       f0, 0x6D8(r3)
      fcmpo     cr0, f22, f0
      bge-      .loc_0x6D8
      lwz       r0, 0x300(r31)
      cmpwi     r0, 0x1
      bne-      .loc_0x6C4
      lwz       r3, 0x304(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x304(r31)
      b         .loc_0x704

    .loc_0x6C4:
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x304(r31)
      stw       r0, 0x300(r31)
      b         .loc_0x704

    .loc_0x6D8:
      lwz       r0, 0x300(r31)
      cmpwi     r0, 0x2
      bne-      .loc_0x6F4
      lwz       r3, 0x304(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x304(r31)
      b         .loc_0x704

    .loc_0x6F4:
      li        r3, 0
      li        r0, 0x2
      stw       r3, 0x304(r31)
      stw       r0, 0x300(r31)

    .loc_0x704:
      lwz       r0, 0x300(r31)
      cmpwi     r0, 0
      bne-      .loc_0x71C
      li        r0, 0x1
      stb       r0, 0x2FD(r31)
      b         .loc_0x8A4

    .loc_0x71C:
      cmpwi     r0, 0x1
      bne-      .loc_0x7F4
      li        r0, 0x1
      mr        r4, r31
      stb       r0, 0x2FD(r31)
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x254(r31)
      lfs       f0, 0x30(r1)
      lfs       f2, 0xA8(r3)
      lfs       f1, 0xA4(r3)
      fsubs     f3, f2, f0
      lfs       f0, 0x2C(r1)
      lfs       f2, 0xAC(r3)
      fsubs     f21, f1, f0
      lfs       f1, 0x34(r1)
      fmuls     f0, f3, f3
      fsubs     f22, f2, f1
      fmadds    f0, f21, f21, f0
      fmadds    f1, f22, f22, f0
      bl        0x2CB2A4
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x798
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f21, f21, f0
      fmuls     f22, f22, f0

    .loc_0x798:
      fmr       f1, f21
      fmr       f2, f22
      bl        0x2CB254
      lwz       r12, 0x0(r31)
      fmr       f21, f1
      mr        r4, r31
      addi      r3, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      fmr       f1, f21
      lfs       f3, 0x24(r1)
      addi      r4, r1, 0xA4
      lfs       f0, 0x28(r1)
      addi      r5, r31, 0x200
      stfs      f2, 0xA4(r1)
      lfs       f2, -0x6008(r2)
      stfs      f3, 0xA8(r1)
      stfs      f0, 0xAC(r1)
      lwz       r3, 0x254(r31)
      bl        0x4EF28
      b         .loc_0x8A4

    .loc_0x7F4:
      cmpwi     r0, 0x2
      bne-      .loc_0x8A4
      li        r0, 0
      stb       r0, 0x30C(r31)
      lbz       r0, 0x2FD(r31)
      cmplwi    r0, 0
      beq-      .loc_0x85C
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x14(r1)
      fmr       f1, f21
      lfs       f2, 0x18(r1)
      addi      r4, r1, 0x98
      lfs       f0, 0x1C(r1)
      addi      r5, r31, 0x200
      stfs      f3, 0x98(r1)
      stfs      f2, 0x9C(r1)
      stfs      f0, 0xA0(r1)
      lwz       r3, 0x254(r31)
      bl        0x4F81C
      li        r0, 0
      stb       r0, 0x2FD(r31)

    .loc_0x85C:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      fmr       f1, f21
      lfs       f3, 0xC(r1)
      addi      r4, r1, 0x8C
      lfs       f0, 0x10(r1)
      addi      r5, r31, 0x200
      stfs      f2, 0x8C(r1)
      lfs       f2, -0x6008(r2)
      stfs      f3, 0x90(r1)
      stfs      f0, 0x94(r1)
      lwz       r3, 0x254(r31)
      bl        0x4EC64

    .loc_0x8A4:
      stfs      f23, 0x2E0(r31)
      stfs      f24, 0x2E4(r31)
      stfs      f25, 0x2E8(r31)
      psq_l     f31,0x188(r1),0,0
      lfd       f31, 0x180(r1)
      psq_l     f30,0x178(r1),0,0
      lfd       f30, 0x170(r1)
      psq_l     f29,0x168(r1),0,0
      lfd       f29, 0x160(r1)
      psq_l     f28,0x158(r1),0,0
      lfd       f28, 0x150(r1)
      psq_l     f27,0x148(r1),0,0
      lfd       f27, 0x140(r1)
      psq_l     f26,0x138(r1),0,0
      lfd       f26, 0x130(r1)
      psq_l     f25,0x128(r1),0,0
      lfd       f25, 0x120(r1)
      psq_l     f24,0x118(r1),0,0
      lfd       f24, 0x110(r1)
      psq_l     f23,0x108(r1),0,0
      lfd       f23, 0x100(r1)
      psq_l     f22,0xF8(r1),0,0
      lfd       f22, 0xF0(r1)
      psq_l     f21,0xE8(r1),0,0
      lfd       f21, 0xE0(r1)
      lwz       r31, 0xDC(r1)
      lwz       r0, 0x194(r1)
      lwz       r30, 0xD8(r1)
      mtlr      r0
      addi      r1, r1, 0x190
      blr
    */
}

/*
 * --INFO--
 * Address:	80146708
 * Size:	000064
 */
void Game::Navi::isCStickNetural(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lfs       f1, 0x2EC(r3)
      lfs       f0, 0x2F0(r3)
      fmuls     f1, f1, f1
      lfs       f2, 0x2F4(r3)
      fmuls     f0, f0, f0
      lwz       r3, -0x6D20(r13)
      fmuls     f2, f2, f2
      lwz       r31, 0xC8(r3)
      fadds     f0, f1, f0
      fadds     f1, f2, f0
      bl        0x2CB0C4
      lfs       f0, 0x8E0(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      mfcr      r0
      rlwinm    r3,r0,3,31,31
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8014676C
 * Size:	0002BC
 */
void Game::Navi::findNextThrowPiki(void)
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
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      li        r5, 0
      mr        r31, r3
      stw       r5, 0x2A8(r3)
      lis       r4, 0x804B
      cmplwi    r5, 0
      lfs       f29, -0x5FD8(r2)
      lwz       r3, 0x254(r3)
      subi      r0, r4, 0x437C
      stw       r0, 0x20(r1)
      stw       r5, 0x2C(r1)
      stw       r5, 0x24(r1)
      stw       r3, 0x28(r1)
      bne-      .loc_0x78
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x26C

    .loc_0x78:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0xE4

    .loc_0x90:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x26C
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0xE4:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x90
      b         .loc_0x26C

    .loc_0x104:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r31)
      mr        r30, r3
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x10(r1)
      lfs       f1, 0x8(r1)
      fsubs     f0, f30, f0
      fsubs     f1, f31, f1
      fmuls     f0, f0, f0
      fmadds    f1, f1, f1, f0
      bl        0x2CAF2C
      lwz       r0, 0x2C4(r30)
      fmr       f30, f1
      cmplw     r0, r31
      bne-      .loc_0x1B0
      fcmpo     cr0, f30, f29
      bge-      .loc_0x1B0
      mr        r3, r30
      bl        0x263C
      cmpwi     r3, 0
      bne-      .loc_0x1B0
      mr        r3, r30
      bl        0x2B1C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1B0
      stw       r30, 0x2A8(r31)
      fmr       f29, f30

    .loc_0x1B0:
      lwz       r0, 0x2C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1DC
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x26C

    .loc_0x1DC:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x250

    .loc_0x1FC:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x26C
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x250:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1FC

    .loc_0x26C:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x24(r1)
      cmplw     r4, r3
      bne+      .loc_0x104
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r0, 0x74(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80146A28
 * Size:	00002C
 */
void Game::Navi::ogGetNextThrowPiki(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x2A8(r3)
      cmplwi    r3, 0
      bne-      .loc_0x14
      li        r3, 0
      blr

    .loc_0x14:
      lbz       r0, 0x2B8(r3)
      lbz       r3, 0x2B9(r3)
      mulli     r0, r0, 0x3
      add       r3, r0, r3
      addi      r3, r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80146A54
 * Size:	0002C0
 */
void throwPiki__Q24Game4NaviFPQ24Game4PikiR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stfd      f28, 0x40(r1)
      psq_st    f28,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r29, r3
      mr        r30, r4
      lwz       r3, 0x26C(r3)
      mr        r31, r5
      li        r4, 0x806
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      stfs      f2, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      lfs       f1, 0x1FC(r29)
      bl        -0x77834
      frsp      f29, f1
      lfs       f1, 0x1FC(r29)
      bl        -0x772D8
      frsp      f6, f1
      lfs       f2, -0x5F60(r2)
      lfs       f1, 0x24(r1)
      mr        r3, r30
      lfs       f0, -0x600C(r2)
      fmuls     f3, f2, f29
      fadds     f5, f1, f0
      lfs       f4, 0x28(r1)
      lfs       f0, -0x6014(r2)
      fmuls     f1, f2, f6
      lfs       f2, 0x20(r1)
      fadds     f3, f4, f3
      fadds     f1, f2, f1
      stfs      f5, 0x24(r1)
      fadds     f0, f5, f0
      addi      r4, r1, 0x20
      stfs      f3, 0x28(r1)
      li        r5, 0
      stfs      f1, 0x20(r1)
      stfs      f0, 0x24(r1)
      bl        -0xB9A0
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r31)
      lfs       f0, 0x10(r1)
      lfs       f1, 0x0(r31)
      fsubs     f29, f2, f0
      lfs       f0, 0x8(r1)
      fsubs     f30, f1, f0
      fmuls     f0, f29, f29
      fmadds    f1, f30, f30, f0
      bl        0x2CAC80
      fmr       f31, f1
      fmr       f1, f30
      fmr       f2, f29
      bl        0x2CAC48
      fmr       f29, f1
      bl        0x2CB034
      stfs      f1, 0x1FC(r30)
      mr        r3, r30
      lfs       f1, -0x6018(r2)
      lwz       r4, -0x6D20(r13)
      lwz       r4, 0xC8(r4)
      lfs       f0, 0x638(r4)
      fmuls     f30, f1, f0
      bl        0x2A28
      lbz       r0, 0x2B8(r30)
      cmpwi     r0, 0x3
      bne-      .loc_0x180
      lfs       f0, -0x6018(r2)
      fmuls     f30, f30, f0

    .loc_0x180:
      fdivs     f0, f1, f30
      lwz       r3, -0x6C10(r13)
      lfs       f2, -0x6018(r2)
      cmpwi     r0, 0x3
      lfs       f3, 0x28(r3)
      fmuls     f1, f2, f3
      fmadds    f30, f30, f1, f0
      fdivs     f3, f30, f3
      bne-      .loc_0x1A8
      fmuls     f3, f3, f2

    .loc_0x1A8:
      lfs       f0, -0x5F5C(r2)
      fmr       f1, f29
      fmuls     f0, f0, f3
      fdivs     f28, f31, f0
      bl        0x2CAB8C
      fmuls     f31, f28, f1
      fmr       f1, f29
      bl        0x2CAB18
      fmuls     f2, f28, f1
      lfs       f29, -0x600C(r2)
      lfs       f1, -0x6008(r2)
      fmuls     f0, f29, f29
      stfs      f2, 0x200(r30)
      stfs      f30, 0x204(r30)
      stfs      f31, 0x208(r30)
      lfs       f2, 0x200(r29)
      lfs       f3, 0x208(r29)
      fmuls     f30, f2, f1
      fmuls     f31, f3, f1
      fmadds    f0, f30, f30, f0
      fmadds    f1, f31, f31, f0
      bl        0x2CABB4
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x224
      lfs       f0, -0x6008(r2)
      fdivs     f0, f0, f1
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0
      fmuls     f31, f31, f0
      b         .loc_0x228

    .loc_0x224:
      fmr       f1, f0

    .loc_0x228:
      lfs       f2, 0x308(r29)
      lfs       f0, -0x600C(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x23C
      fmr       f1, f0

    .loc_0x23C:
      fmuls     f2, f30, f1
      lfs       f0, 0x200(r30)
      fmuls     f3, f29, f1
      fmuls     f1, f31, f1
      fadds     f0, f0, f2
      stfs      f0, 0x200(r30)
      lfs       f0, 0x204(r30)
      fadds     f0, f0, f3
      stfs      f0, 0x204(r30)
      lfs       f0, 0x208(r30)
      fadds     f0, f0, f1
      stfs      f0, 0x208(r30)
      lfs       f0, 0x200(r30)
      stfs      f0, 0x1E4(r30)
      lfs       f0, 0x204(r30)
      stfs      f0, 0x1E8(r30)
      lfs       f0, 0x208(r30)
      stfs      f0, 0x1EC(r30)
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      psq_l     f28,0x48(r1),0,0
      lfd       f28, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r0, 0x84(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	80146D14
 * Size:	000008
 */
void Game::Navi::commandOn(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x30D(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80146D1C
 * Size:	00000C
 */
void PikiAI::ActFreeArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0x37C0
      blr
    */
}

/*
 * --INFO--
 * Address:	80146D28
 * Size:	00000C
 */
void PikiAI::CreatureActionArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0x37B4
      blr
    */
}

/*
 * --INFO--
 * Address:	80146D34
 * Size:	00000C
 */
void PikiAI::ActionArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0x37A0
      blr
    */
}

/*
 * --INFO--
 * Address:	80146D40
 * Size:	00000C
 */
void Game::NaviDamageArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0x3794
      blr
    */
}

/*
 * --INFO--
 * Address:	80146D4C
 * Size:	000038
 */
void Iterator<Game::Onyon>::operator*()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r4, 0x4(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
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
 * Address:	80146D84
 * Size:	0000E4
 */
void Iterator<Game::Onyon>::next()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x40
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xD0

    .loc_0x40:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xB4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60

    .loc_0xD0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80146E68
 * Size:	0000DC
 */
void Iterator<Game::Onyon>::first()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xC8

    .loc_0x3C:
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xAC

    .loc_0x58:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xAC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x58

    .loc_0xC8:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80146F44
 * Size:	000038
 */
void Iterator<Game::BaseItem>::operator*()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r4, 0x4(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
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
 * Address:	80146F7C
 * Size:	0000E4
 */
void Iterator<Game::BaseItem>::next()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x40
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xD0

    .loc_0x40:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xB4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60

    .loc_0xD0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80147060
 * Size:	0000DC
 */
void Iterator<Game::BaseItem>::first()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xC8

    .loc_0x3C:
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xAC

    .loc_0x58:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xAC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x58

    .loc_0xC8:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8014713C
 * Size:	000008
 */
void Game::GameMessage::actCommon((Game::BaseGameSection*))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80147144
 * Size:	000008
 */
void Game::GameMessage::actSingle((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8014714C
 * Size:	000008
 */
void Game::GameMessage::actVs((Game::VsGameSection*))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80147154
 * Size:	000038
 */
void Iterator<Game::ItemPikihead::Item>::operator*()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r4, 0x4(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
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
 * Address:	8014718C
 * Size:	0000E4
 */
void Iterator<Game::ItemPikihead::Item>::next()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x40
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xD0

    .loc_0x40:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xB4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60

    .loc_0xD0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80147270
 * Size:	0000DC
 */
void Iterator<Game::ItemPikihead::Item>::first()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xC8

    .loc_0x3C:
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xAC

    .loc_0x58:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xAC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x58

    .loc_0xC8:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8014734C
 * Size:	00001C
 */
void setVelocity__Q24Game4NaviFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x0(r4)
      stfs      f0, 0x1E4(r3)
      lfs       f0, 0x4(r4)
      stfs      f0, 0x1E8(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x1EC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80147368
 * Size:	000008
 */
void Game::Navi::getCreatureName(void)
{
    /*
    .loc_0x0:
      subi      r3, r2, 0x5F58
      blr
    */
}

/*
 * --INFO--
 * Address:	80147370
 * Size:	00009C
 */
void efx::TFueact::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      addi      r3, r30, 0x4
      lwz       r12, 0x4(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      addi      r3, r30, 0x1C
      li        r4, 0
      lwz       r12, 0x1C(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      addi      r3, r30, 0x34
      li        r4, 0
      lwz       r12, 0x34(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      li        r31, 0x1

    .loc_0x80:
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
 * Address:	8014740C
 * Size:	000064
 */
void efx::TFueact::fade(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C
      lwz       r12, 0x1C(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x34
      lwz       r12, 0x34(r31)
      lwz       r12, 0x10(r12)
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
 * Address:	80147470
 * Size:	00003C
 */
void efx::TFueactCircle::fade(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x65E8(r13)
      lwz       r4, 0x14(r31)
      bl        0x274620
      li        r0, 0
      stw       r0, 0x14(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801474AC
 * Size:	000064
 */
void efx::TFueact::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C
      lwz       r12, 0x1C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x34
      lwz       r12, 0x34(r31)
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
 * Address:	80147510
 * Size:	00003C
 */
void efx::TFueactCircle::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x65E8(r13)
      lwz       r4, 0x14(r31)
      bl        0x274554
      li        r0, 0
      stw       r0, 0x14(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8014754C
 * Size:	000004
 */
void init__Q24Game26StateMachine<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80147550
 * Size:	000030
 */
void Delegate1<Game::Navi, Game::CellObject*>::invoke(Game::CellObject*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r3
      stw       r0, 0x14(r1)
      addi      r12, r5, 0x8
      lwz       r3, 0x4(r3)
      bl        -0x85A44
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80147580
 * Size:	00009C
 */
void transit__Q24Game26StateMachine<Game::Navi>
FPQ24Game4NaviiPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      rlwinm    r0,r5,2,0,29
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r6
      lwz       r30, 0x274(r4)
      lwz       r3, 0x14(r3)
      cmplwi    r30, 0
      lwzx      r31, r3, r0
      beq-      .loc_0x50
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r30)
      stw       r0, 0x18(r27)

    .loc_0x50:
      lwz       r0, 0xC(r27)
      cmpw      r31, r0
      blt-      .loc_0x60

    .loc_0x5C:
      b         .loc_0x5C

    .loc_0x60:
      lwz       r3, 0x4(r27)
      rlwinm    r0,r31,2,0,29
      mr        r4, r28
      mr        r5, r29
      lwzx      r3, r3, r0
      stw       r3, 0x274(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8014761C
 * Size:	000004
 */
void init__Q24Game22FSMState<Game::Navi> FPQ24Game4NaviPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80147620
 * Size:	000004
 */
void cleanup__Q24Game22FSMState<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80147624
 * Size:	000038
 */
void exec__Q24Game26StateMachine<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x274(r4)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8014765C
 * Size:	000004
 */
void exec__Q24Game22FSMState<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80147660
 * Size:	000028
 */
void __sinit_navi_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804B
      stw       r0, -0x6D70(r13)
      stfsu     f0, 0x4E0(r3)
      stfs      f0, -0x6D6C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80147688
 * Size:	000008
 */
void @4 @efx::TFueactBiri1::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x7830
    */
}

/*
 * --INFO--
 * Address:	80147690
 * Size:	000008
 */
void @4 @efx::TFueactBiri2::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x78D4
    */
}

/*
 * --INFO--
 * Address:	80147698
 * Size:	000008
 */
void @376 @Game::Navi::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x178
      b         -0x7258
    */
}

/*
 * --INFO--
 * Address:	801476A0
 * Size:	000014
 */
void @784 @12 @viewEntryShape__Q24Game4NaviFR7MatrixfR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x310
      b         -0x5F78
    */
}

/*
 * --INFO--
 * Address:	801476B4
 * Size:	000014
 */
void @784 @12 @Game::Navi::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x310
      b         -0x5F88
    */
}

/*
 * --INFO--
 * Address:	801476C8
 * Size:	000014
 */
void @784 @12 @Game::Navi::viewGetBaseScale(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x310
      b         -0x5F94
    */
}
