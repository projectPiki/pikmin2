

/*
 * --INFO--
 * Address:	8030EF88
 * Size:	000098
 */
void og::Screen::BloGroup::__ct((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      rlwinm    r31,r4,2,14,29
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r31
      bl        -0x2EB004
      stw       r3, 0x0(r29)
      mr        r3, r31
      bl        -0x2EB010
      stw       r3, 0x4(r29)
      li        r4, 0
      mr        r5, r4
      li        r6, 0
      sth       r30, 0x8(r29)
      sth       r4, 0xA(r29)
      b         .loc_0x6C

    .loc_0x54:
      lwz       r3, 0x0(r29)
      addi      r6, r6, 0x1
      stwx      r4, r3, r5
      lwz       r3, 0x4(r29)
      stwx      r4, r3, r5
      addi      r5, r5, 0x4

    .loc_0x6C:
      lhz       r0, 0x8(r29)
      cmpw      r6, r0
      blt+      .loc_0x54
      lwz       r0, 0x24(r1)
      mr        r3, r29
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
 * Address:	........
 * Size:	0000B4
 */
void og::Screen::BloGroup::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F020
 * Size:	0000A0
 */
void og::Screen::BloGroup::addBlo((char*, P2DScreen::Mgr_tuning*, unsigned long,
                                   JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r3
      lhz       r3, 0xA(r3)
      lhz       r0, 0x8(r29)
      mr        r31, r3
      cmplw     r3, r0
      blt-      .loc_0x3C
      li        r3, -0x1
      b         .loc_0x84

    .loc_0x3C:
      lwz       r8, 0x0(r29)
      rlwinm    r0,r3,2,14,29
      mr        r3, r30
      mr        r5, r6
      stwx      r30, r8, r0
      mr        r6, r7
      bl        -0x2CFA50
      lhz       r0, 0xA(r29)
      li        r5, 0
      lwz       r4, 0x4(r29)
      mr        r3, r30
      rlwinm    r0,r0,2,0,29
      stwx      r5, r4, r0
      bl        -0xBD7C
      lhz       r4, 0xA(r29)
      mr        r3, r31
      addi      r0, r4, 0x1
      sth       r0, 0xA(r29)

    .loc_0x84:
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
 * Address:	........
 * Size:	000078
 */
void og::Screen::BloGroup::setScissor((int, float, float, float, float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void og::Screen::BloGroup::translate((float, float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F0C0
 * Size:	000044
 */
void og::Screen::BloGroup::scale((float))
{
    /*
    .loc_0x0:
      lfs       f2, 0x2434(r2)
      li        r6, 0
      lfs       f0, 0x2438(r2)
      li        r5, 0
      fmuls     f2, f1, f2
      fmuls     f0, f1, f0
      b         .loc_0x34

    .loc_0x1C:
      lwz       r4, 0x0(r3)
      addi      r6, r6, 0x1
      lwzx      r4, r4, r5
      addi      r5, r5, 0x4
      stfs      f2, 0x138(r4)
      stfs      f0, 0x13C(r4)

    .loc_0x34:
      lhz       r0, 0xA(r3)
      cmpw      r6, r0
      blt+      .loc_0x1C
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void og::Screen::BloGroup::setAlpha((unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F104
 * Size:	0000A4
 */
void og::Screen::BloGroup::rotate((float, float, J2DRotateAxis, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x28(r1)
      fmr       f31, f3
      stfd      f30, 0x20(r1)
      fmr       f30, f2
      stfd      f29, 0x18(r1)
      fmr       f29, f1
      stw       r31, 0x14(r1)
      li        r31, 0
      stw       r30, 0x10(r1)
      li        r30, 0
      stw       r29, 0xC(r1)
      mr        r29, r4
      stw       r28, 0x8(r1)
      mr        r28, r3
      b         .loc_0x6C

    .loc_0x48:
      lwz       r3, 0x0(r28)
      fmr       f1, f29
      fmr       f2, f30
      mr        r4, r29
      fmr       f3, f31
      lwzx      r3, r3, r31
      bl        -0x2D6D64
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x6C:
      lhz       r0, 0xA(r28)
      cmpw      r30, r0
      blt+      .loc_0x48
      lwz       r0, 0x34(r1)
      lfd       f31, 0x28(r1)
      lfd       f30, 0x20(r1)
      lfd       f29, 0x18(r1)
      lwz       r31, 0x14(r1)
      lwz       r30, 0x10(r1)
      lwz       r29, 0xC(r1)
      lwz       r28, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F1A8
 * Size:	000070
 */
void og::Screen::BloGroup::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      b         .loc_0x48

    .loc_0x28:
      lwz       r3, 0x0(r29)
      lwzx      r3, r3, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x48:
      lhz       r0, 0xA(r29)
      cmpw      r30, r0
      blt+      .loc_0x28
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
 * Address:	........
 * Size:	000064
 */
void og::Screen::BloGroup::animation(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F218
 * Size:	0000E8
 */
void og::Screen::BloGroup::draw((J2DPerspGraph*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x2C0(r1)
      mflr      r0
      stw       r0, 0x2C4(r1)
      stw       r31, 0x2BC(r1)
      stw       r30, 0x2B8(r1)
      stw       r29, 0x2B4(r1)
      mr        r29, r4
      stw       r28, 0x2B0(r1)
      mr        r28, r3
      addi      r3, r1, 0x8
      bl        0x118184
      li        r30, 0
      li        r31, 0
      b         .loc_0x60

    .loc_0x38:
      lwz       r3, 0x0(r28)
      mr        r5, r29
      addi      r4, r1, 0x8
      lwzx      r3, r3, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x60:
      lhz       r0, 0xA(r28)
      cmpw      r30, r0
      blt+      .loc_0x38
      lis       r3, 0x804E
      addic.    r4, r1, 0x198
      subi      r0, r3, 0x7CA0
      stw       r0, 0x274(r1)
      beq-      .loc_0xA0
      lis       r3, 0x804A
      cmplwi    r4, 0
      addi      r0, r3, 0x628
      stw       r0, 0x0(r4)
      beq-      .loc_0xA0
      lis       r3, 0x804A
      addi      r0, r3, 0x650
      stw       r0, 0x0(r4)

    .loc_0xA0:
      addic.    r4, r1, 0xC4
      beq-      .loc_0xC8
      lis       r3, 0x804A
      cmplwi    r4, 0
      addi      r0, r3, 0x600
      stw       r0, 0x0(r4)
      beq-      .loc_0xC8
      lis       r3, 0x804A
      addi      r0, r3, 0x650
      stw       r0, 0x0(r4)

    .loc_0xC8:
      lwz       r0, 0x2C4(r1)
      lwz       r31, 0x2BC(r1)
      lwz       r30, 0x2B8(r1)
      lwz       r29, 0x2B4(r1)
      lwz       r28, 0x2B0(r1)
      mtlr      r0
      addi      r1, r1, 0x2C0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void Graphics::~Graphics()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030F300
 * Size:	000004
 */
void Graphics::doJ3DDrawInit()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F304
 * Size:	000004
 */
void Graphics::doJ3DDraw(int)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F308
 * Size:	000004
 */
void Graphics::doJ3DFrameInit()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F30C
 * Size:	000004
 */
void Graphics::doJ3DAnimation()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F310
 * Size:	000004
 */
void Graphics::doJ3DUpdateInit()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F314
 * Size:	000004
 */
void Graphics::doJ3DSetView(int)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030F318
 * Size:	000004
 */
void Graphics::doJ3DViewCalc()
{
    /*
    .loc_0x0:
      blr
    */
}
