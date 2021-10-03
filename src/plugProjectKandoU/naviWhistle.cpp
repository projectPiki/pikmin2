

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
 * Address:	80165088
 * Size:	000034
 */
void Game::NaviWhistle::__ct((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x34(r3)
      bl        .loc_0x34
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x34:
    */
}

/*
 * --INFO--
 * Address:	801650BC
 * Size:	000128
 */
void Game::NaviWhistle::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r5, 0
      lfs       f1, -0x5A80(r2)
      stw       r0, 0x34(r1)
      li        r4, 0xFF
      lfs       f0, -0x5A7C(r2)
      li        r0, 0x78
      stw       r31, 0x2C(r1)
      mr        r31, r3
      sth       r5, 0x28(r3)
      li        r3, 0x96
      stfs      f1, 0x24(r31)
      stfs      f0, 0x2C(r31)
      stb       r4, 0x38(r31)
      stb       r3, 0x39(r31)
      stb       r5, 0x3A(r31)
      stb       r0, 0x3B(r31)
      lwz       r3, 0x34(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x34(r31)
      fmr       f4, f1
      lfs       f0, -0x5A7C(r2)
      lwz       r3, 0xC0(r3)
      lfs       f3, -0x5A78(r2)
      fcmpo     cr0, f4, f0
      lfs       f2, 0x980(r3)
      fmuls     f5, f3, f2
      bge-      .loc_0x84
      fneg      f4, f4

    .loc_0x84:
      lfs       f3, -0x5A74(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5A7C(r2)
      addi      r4, r3, 0x71A0
      fmuls     f2, f4, f3
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f2, f5, f0
      bge-      .loc_0xE0
      lfs       f0, -0x5A70(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xF8

    .loc_0xE0:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xF8:
      fmuls     f1, f5, f0
      lfs       f0, -0x5A7C(r2)
      mr        r3, r31
      stfs      f1, 0x0(r31)
      stfs      f0, 0x4(r31)
      stfs      f2, 0x8(r31)
      bl        .loc_0x128
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x128:
    */
}

/*
 * --INFO--
 * Address:	801651E4
 * Size:	000190
 */
void Game::NaviWhistle::updatePosition(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      lwz       r4, 0x34(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      li        r4, 0
      lfs       f0, 0x0(r31)
      li        r0, 0x1
      lfs       f3, 0xC(r1)
      lfs       f2, 0x4(r31)
      fadds     f0, f1, f0
      lfs       f5, 0x10(r1)
      lfs       f4, 0x8(r31)
      fadds     f2, f3, f2
      lfs       f1, -0x5A7C(r2)
      stfs      f0, 0xC(r31)
      fadds     f0, f5, f4
      lfs       f3, -0x5A6C(r2)
      fmr       f31, f1
      stfs      f2, 0x10(r31)
      lfs       f2, -0x5A68(r2)
      stfs      f0, 0x14(r31)
      lfs       f0, -0x5A64(r2)
      stw       r4, 0x28(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f3, 0x2C(r1)
      cmplwi    r3, 0
      stfs      f2, 0x30(r1)
      stw       r4, 0x24(r1)
      stfs      f1, 0x34(r1)
      stfs      f0, 0x38(r1)
      stfs      f1, 0x3C(r1)
      stb       r0, 0x20(r1)
      stb       r4, 0x21(r1)
      lfs       f0, 0xC(r31)
      stfs      f0, 0x14(r1)
      lfs       f0, 0x10(r31)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x14(r31)
      stfs      f0, 0x1C(r1)
      beq-      .loc_0xFC
      stb       r4, 0x20(r1)
      addi      r4, r1, 0x14
      lwz       r12, 0x4(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x30(r1)
      lfs       f0, 0x34(r1)
      stfs      f0, 0x18(r31)
      lfs       f0, 0x38(r1)
      stfs      f0, 0x1C(r31)
      lfs       f0, 0x3C(r1)
      stfs      f0, 0x20(r31)

    .loc_0xFC:
      lwz       r3, -0x6BE0(r13)
      cmplwi    r3, 0
      beq-      .loc_0x140
      lfs       f0, -0x5A68(r2)
      addi      r4, r1, 0x14
      stfs      f0, 0x30(r1)
      bl        0x60BB0
      lfs       f1, 0x30(r1)
      fcmpo     cr0, f1, f31
      ble-      .loc_0x140
      lfs       f0, 0x34(r1)
      fmr       f31, f1
      stfs      f0, 0x18(r31)
      lfs       f0, 0x38(r1)
      stfs      f0, 0x1C(r31)
      lfs       f0, 0x3C(r1)
      stfs      f0, 0x20(r31)

    .loc_0x140:
      stfs      f31, 0x10(r31)
      lfs       f1, 0xC(r31)
      lfs       f0, 0x18(r31)
      lfs       f3, 0x10(r31)
      lfs       f2, 0x1C(r31)
      fadds     f0, f1, f0
      lfs       f4, 0x14(r31)
      lfs       f1, 0x20(r31)
      fadds     f2, f3, f2
      stfs      f0, 0xC(r31)
      fadds     f0, f4, f1
      stfs      f2, 0x10(r31)
      stfs      f0, 0x14(r31)
      psq_l     f31,0x58(r1),0,0
      lwz       r0, 0x64(r1)
      lfd       f31, 0x50(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80165374
 * Size:	000078
 */
void Game::NaviWhistle::start(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0x30(r3)
      lhz       r0, 0x28(r3)
      cmpwi     r0, 0x1
      beqlr-
      bge-      .loc_0x24
      cmpwi     r0, 0
      bge-      .loc_0x30
      blr

    .loc_0x24:
      cmpwi     r0, 0x3
      bgelr-
      b         .loc_0x54

    .loc_0x30:
      li        r0, 0x1
      lfs       f0, -0x5A7C(r2)
      sth       r0, 0x28(r3)
      stfs      f0, 0x2C(r3)
      lwz       r4, 0x34(r3)
      lwz       r4, 0xC0(r4)
      lfs       f0, 0x340(r4)
      stfs      f0, 0x24(r3)
      blr

    .loc_0x54:
      li        r0, 0x1
      lfs       f0, -0x5A7C(r2)
      sth       r0, 0x28(r3)
      stfs      f0, 0x2C(r3)
      lwz       r4, 0x34(r3)
      lwz       r4, 0xC0(r4)
      lfs       f0, 0x340(r4)
      stfs      f0, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801653EC
 * Size:	000034
 */
void Game::NaviWhistle::stop(void)
{
    /*
    .loc_0x0:
      lhz       r0, 0x28(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x18
      bgelr-
      blr
      blr

    .loc_0x18:
      li        r0, 0x2
      lfs       f0, -0x5A7C(r2)
      sth       r0, 0x28(r3)
      li        r0, 0x1
      stfs      f0, 0x2C(r3)
      stb       r0, 0x30(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80165420
 * Size:	000010
 */
void Game::NaviWhistle::timeout(void)
{
    /*
    .loc_0x0:
      lhz       r0, 0x28(r3)
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80165430
 * Size:	0000F4
 */
void Game::NaviWhistle::setFaceDir((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lfs       f3, 0x0(r3)
      lfs       f2, 0x4(r3)
      fmuls     f0, f3, f3
      lfs       f4, 0x8(r3)
      fmuls     f5, f2, f2
      lfs       f2, -0x5A7C(r2)
      fmuls     f4, f4, f4
      fadds     f0, f0, f5
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f2
      ble-      .loc_0x4C
      fmadds    f0, f3, f3, f5
      fadds     f4, f4, f0
      fcmpo     cr0, f4, f2
      ble-      .loc_0x50
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0x50

    .loc_0x4C:
      fmr       f4, f2

    .loc_0x50:
      lfs       f0, -0x5A7C(r2)
      fmr       f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x64
      fneg      f2, f1

    .loc_0x64:
      lfs       f3, -0x5A74(r2)
      lis       r4, 0x8050
      lfs       f0, -0x5A7C(r2)
      addi      r5, r4, 0x71A0
      fmuls     f2, f2, f3
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r5, r0
      lfs       f0, 0x4(r4)
      fmuls     f2, f4, f0
      bge-      .loc_0xC0
      lfs       f0, -0x5A70(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f0, f0
      b         .loc_0xD8

    .loc_0xC0:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0

    .loc_0xD8:
      fmuls     f1, f4, f0
      lfs       f0, -0x5A7C(r2)
      stfs      f1, 0x0(r3)
      stfs      f0, 0x4(r3)
      stfs      f2, 0x8(r3)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80165524
 * Size:	0001F4
 */
void Game::NaviWhistle::updateWhistle(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lhz       r0, 0x28(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x5C
      bge-      .loc_0x30
      cmpwi     r0, 0
      bge-      .loc_0x3C
      b         .loc_0x1E0

    .loc_0x30:
      cmpwi     r0, 0x3
      bge-      .loc_0x1E0
      b         .loc_0x168

    .loc_0x3C:
      li        r0, 0xFF
      li        r3, 0x78
      stb       r0, 0x38(r31)
      li        r0, 0
      stb       r3, 0x39(r31)
      stb       r0, 0x3A(r31)
      stb       r3, 0x3B(r31)
      b         .loc_0x1E0

    .loc_0x5C:
      lwz       r3, 0x34(r31)
      lfs       f2, 0x2C(r31)
      lwz       r3, 0xC0(r3)
      lfs       f3, -0x5A5C(r2)
      lfs       f0, 0x368(r3)
      lfs       f1, -0x5A60(r2)
      fdivs     f6, f2, f0
      lfs       f2, -0x5A7C(r2)
      lfs       f4, -0x5A58(r2)
      lfs       f0, -0x5A54(r2)
      fmadds    f3, f6, f3, f1
      fmadds    f0, f6, f0, f4
      fmadds    f1, f6, f1, f2
      fctiwz    f5, f3
      fctiwz    f3, f0
      fmadds    f0, f6, f2, f4
      stfd      f5, 0x8(r1)
      fctiwz    f1, f1
      stfd      f3, 0x10(r1)
      fctiwz    f0, f0
      lwz       r0, 0xC(r1)
      stfd      f1, 0x18(r1)
      lwz       r3, 0x14(r1)
      stb       r0, 0x38(r31)
      lwz       r0, 0x1C(r1)
      stb       r3, 0x39(r31)
      stfd      f0, 0x20(r1)
      stb       r0, 0x3A(r31)
      lwz       r0, 0x24(r1)
      stb       r0, 0x3B(r31)
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x2C(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x2C(r31)
      lwz       r3, 0x34(r31)
      lfs       f1, 0x2C(r31)
      lwz       r4, 0xC0(r3)
      lfs       f0, 0x368(r4)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x110
      stfs      f2, 0x2C(r31)
      li        r0, 0x2
      sth       r0, 0x28(r31)
      b         .loc_0x1E0

    .loc_0x110:
      bl        -0x24190
      li        r4, 0x2
      bl        0x80994
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f3, 0xBD8(r3)
      b         .loc_0x140

    .loc_0x134:
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f3, 0x318(r3)

    .loc_0x140:
      lwz       r3, 0x34(r31)
      lfs       f2, 0x2C(r31)
      lwz       r3, 0xC0(r3)
      lfs       f0, 0x368(r3)
      lfs       f1, 0x340(r3)
      fdivs     f2, f2, f0
      fsubs     f0, f3, f1
      fmadds    f0, f2, f0, f1
      stfs      f0, 0x24(r31)
      b         .loc_0x1E0

    .loc_0x168:
      lwz       r3, 0x34(r31)
      lfs       f1, 0x2C(r31)
      lwz       r3, 0xC0(r3)
      lfs       f2, -0x5A64(r2)
      lfs       f0, 0x390(r3)
      lfs       f3, -0x5A58(r2)
      fdivs     f0, f1, f0
      fsubs     f0, f2, f0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      stb       r0, 0x3B(r31)
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x2C(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x2C(r31)
      lwz       r3, 0x34(r31)
      lfs       f1, 0x2C(r31)
      lwz       r3, 0xC0(r3)
      lfs       f0, 0x390(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1E0
      lfs       f1, -0x5A7C(r2)
      li        r0, 0
      lfs       f0, -0x5A80(r2)
      stfs      f1, 0x2C(r31)
      sth       r0, 0x28(r31)
      stfs      f0, 0x24(r31)

    .loc_0x1E0:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80165718
 * Size:	0001D4
 */
void update__Q24Game11NaviWhistleFR10Vector3<float> b(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      rlwinm.   r0,r5,0,24,31
      mr        r31, r3
      beq-      .loc_0x34
      lfs       f1, -0x5A7C(r2)
      fmr       f2, f1
      fmr       f3, f1
      b         .loc_0x19C

    .loc_0x34:
      lfs       f3, 0x4(r4)
      lfs       f9, 0x8(r4)
      fmuls     f1, f3, f3
      lfs       f2, 0x0(r4)
      fmuls     f4, f9, f9
      lfs       f0, -0x5A7C(r2)
      fmadds    f1, f2, f2, f1
      fadds     f1, f4, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6C
      ble-      .loc_0x70
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x70

    .loc_0x6C:
      fmr       f1, f0

    .loc_0x70:
      lfs       f0, -0x5A7C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x90
      lfs       f0, -0x5A64(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f9, f9, f0

    .loc_0x90:
      lwz       r4, 0x34(r31)
      lwz       r3, -0x6514(r13)
      lwz       r4, 0xC0(r4)
      lfs       f0, 0x54(r3)
      lfs       f1, 0x9A8(r4)
      lfs       f5, 0x4(r31)
      fmuls     f8, f3, f1
      lfs       f4, 0x8(r31)
      fmuls     f7, f2, f1
      lfs       f6, 0x0(r31)
      fmuls     f9, f9, f1
      lfs       f11, -0x5A7C(r2)
      fmuls     f2, f8, f0
      fmuls     f3, f9, f0
      fmuls     f1, f7, f0
      fadds     f2, f2, f5
      fadds     f3, f3, f4
      fadds     f1, f1, f6
      fmuls     f12, f2, f2
      fmuls     f13, f3, f3
      fmadds    f10, f1, f1, f12
      fadds     f31, f13, f10
      fcmpo     cr0, f31, f11
      ble-      .loc_0x104
      ble-      .loc_0x100
      fsqrte    f10, f31
      fmuls     f11, f10, f31
      b         .loc_0x104

    .loc_0x100:
      fmr       f11, f31

    .loc_0x104:
      lfs       f10, 0x980(r4)
      fcmpo     cr0, f11, f10
      cror      2, 0x1, 0x2
      bne-      .loc_0x19C
      lfs       f11, -0x5A7C(r2)
      fcmpo     cr0, f31, f11
      ble-      .loc_0x13C
      fmadds    f10, f1, f1, f12
      fadds     f12, f13, f10
      fcmpo     cr0, f12, f11
      ble-      .loc_0x140
      fsqrte    f10, f12
      fmuls     f12, f10, f12
      b         .loc_0x140

    .loc_0x13C:
      fmr       f12, f11

    .loc_0x140:
      lfs       f10, -0x5A7C(r2)
      fcmpo     cr0, f12, f10
      ble-      .loc_0x160
      lfs       f10, -0x5A64(r2)
      fdivs     f10, f10, f12
      fmuls     f1, f1, f10
      fmuls     f2, f2, f10
      fmuls     f3, f3, f10

    .loc_0x160:
      fmuls     f10, f2, f8
      fmadds    f10, f1, f7, f10
      fmadds    f11, f3, f9, f10
      fmuls     f10, f1, f11
      fmuls     f2, f2, f11
      fmuls     f1, f3, f11
      fsubs     f3, f7, f10
      fsubs     f2, f8, f2
      fsubs     f7, f9, f1
      fmuls     f1, f3, f0
      fmuls     f2, f2, f0
      fmuls     f0, f7, f0
      fadds     f1, f1, f6
      fadds     f2, f2, f5
      fadds     f3, f0, f4

    .loc_0x19C:
      stfs      f1, 0x0(r31)
      mr        r3, r31
      stfs      f2, 0x4(r31)
      stfs      f3, 0x8(r31)
      bl        -0x6E0
      mr        r3, r31
      bl        -0x3A8
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}
