

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
 * Address:	8032D8E8
 * Size:	000140
 */
void og::Screen::OtakaraSensor::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x3E8(r2)
      stw       r0, 0x14(r1)
      li        r0, 0
      lfs       f0, -0x3E4(r2)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x8(r3)
      li        r3, 0x1C
      stw       r0, 0xC(r31)
      stfs      f1, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f1, 0x10(r31)
      stfs      f1, 0x14(r31)
      stfs      f1, 0x18(r31)
      stfs      f1, 0x1C(r31)
      stb       r0, 0x2C(r31)
      stfs      f0, 0x20(r31)
      bl        -0x309A90
      mr.       r0, r3
      beq-      .loc_0x60
      bl        -0x4B3C
      mr        r0, r3

    .loc_0x60:
      stw       r0, 0x24(r31)
      li        r0, 0
      lfs       f0, -0x3E0(r2)
      li        r3, 0x18
      stfs      f0, 0x28(r31)
      stb       r0, 0x2D(r31)
      bl        -0x309ABC
      mr.       r0, r3
      beq-      .loc_0x8C
      bl        0x2920
      mr        r0, r3

    .loc_0x8C:
      lfs       f1, -0x3E8(r2)
      stw       r0, 0x30(r31)
      fmr       f3, f1
      lfs       f2, -0x3DC(r2)
      lwz       r3, 0x30(r31)
      bl        0x2930
      lfs       f3, -0x3E8(r2)
      li        r4, 0
      lfs       f0, -0x3DC(r2)
      li        r0, 0x1
      stfs      f3, 0x34(r31)
      mr        r3, r31
      lfs       f2, -0x3D8(r2)
      stfs      f3, 0x38(r31)
      lfs       f1, -0x3D4(r2)
      stfs      f0, 0x3C(r31)
      lfs       f0, -0x3D0(r2)
      stb       r4, 0x40(r31)
      stw       r0, 0x80(r31)
      stfs      f3, 0x48(r31)
      stfs      f2, 0x4C(r31)
      stfs      f1, 0x50(r31)
      stb       r4, 0x54(r31)
      stfs      f3, 0x58(r31)
      stfs      f3, 0x5C(r31)
      stfs      f3, 0x60(r31)
      stfs      f3, 0x64(r31)
      stfs      f3, 0x68(r31)
      stb       r4, 0x84(r31)
      stb       r0, 0x85(r31)
      stb       r4, 0x6C(r31)
      stb       r4, 0x6D(r31)
      stw       r4, 0x70(r31)
      stfs      f3, 0x74(r31)
      stb       r4, 0x86(r31)
      stfs      f0, 0x88(r31)
      stfs      f3, 0x8C(r31)
      stb       r4, 0x90(r31)
      stb       r4, 0x78(r31)
      stfs      f3, 0x7C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DA28
 * Size:	0000A8
 */
void og::Screen::OtakaraSensor::init((J2DPane*, J2DPane*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x70
      cmplwi    r5, 0
      beq-      .loc_0x70
      stw       r4, 0x8(r31)
      li        r0, 0
      lfs       f0, -0x3E8(r2)
      mr        r3, r5
      stw       r5, 0xC(r31)
      li        r4, 0x1E
      stfs      f0, 0x0(r31)
      stfs      f0, 0x4(r31)
      lwz       r5, 0xC(r31)
      lfs       f0, 0xD4(r5)
      stfs      f0, 0x18(r31)
      lwz       r5, 0xC(r31)
      lfs       f0, 0xD8(r5)
      stfs      f0, 0x1C(r31)
      stw       r6, 0x80(r31)
      stb       r0, 0x6D(r31)
      bl        -0x2BB0C
      stw       r3, 0x70(r31)
      b         .loc_0x8C

    .loc_0x70:
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x8E0
      li        r4, 0xED
      subi      r5, r5, 0x8CC
      crclr     6, 0x6
      bl        -0x303470

    .loc_0x8C:
      li        r0, 0x1
      stb       r0, 0x85(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DAD0
 * Size:	000150
 */
void og::Screen::OtakaraSensor::setParam((float, int, bool, bool))
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
      stw       r30, 0x18(r1)
      mr        r30, r3
      li        r0, 0
      stb       r0, 0x54(r3)
      fmr       f30, f1
      lfs       f0, -0x3DC(r2)
      li        r31, 0x1
      stb       r5, 0x84(r3)
      lfs       f31, -0x3CC(r2)
      stb       r6, 0x85(r3)
      stfs      f0, 0x3C(r3)
      lwz       r3, 0x80(r3)
      stw       r4, 0x80(r30)
      lwz       r0, 0x80(r30)
      cmpwi     r0, 0x2
      beq-      .loc_0x9C
      bge-      .loc_0x74
      cmpwi     r0, 0
      beq-      .loc_0x84
      bge-      .loc_0x90
      b         .loc_0x110

    .loc_0x74:
      cmpwi     r0, 0x4
      beq-      .loc_0xB8
      bge-      .loc_0x110
      b         .loc_0xA8

    .loc_0x84:
      lfs       f31, -0x3E8(r2)
      li        r31, 0
      b         .loc_0x110

    .loc_0x90:
      lfs       f0, -0x3E4(r2)
      stfs      f0, 0x3C(r30)
      b         .loc_0x110

    .loc_0x9C:
      lfs       f0, -0x3E4(r2)
      stfs      f0, 0x3C(r30)
      b         .loc_0x110

    .loc_0xA8:
      lfs       f0, -0x3C4(r2)
      lfs       f31, -0x3C8(r2)
      stfs      f0, 0x3C(r30)
      b         .loc_0x110

    .loc_0xB8:
      lfs       f0, -0x3C4(r2)
      li        r0, 0x1
      lfs       f31, -0x3C8(r2)
      stfs      f0, 0x3C(r30)
      stb       r0, 0x54(r30)
      lwz       r0, 0x80(r30)
      cmpw      r0, r3
      beq-      .loc_0x110
      bl        -0x264608
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3B0(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3C0(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3BC(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3B8(r2)
      fdivs     f2, f3, f2
      fmsubs    f0, f1, f2, f0
      stfs      f0, 0x58(r30)

    .loc_0x110:
      fmr       f1, f30
      mr        r3, r30
      bl        .loc_0x150
      stfs      f1, 0x0(r30)
      stb       r31, 0x2C(r30)
      stfs      f31, 0x28(r30)
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x44(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x150:
    */
}

/*
 * --INFO--
 * Address:	8032DC20
 * Size:	00005C
 */
void og::Screen::OtakaraSensor::calcLevel((float))
{
    /*
    .loc_0x0:
      lwz       r0, 0x80(r3)
      lfs       f3, -0x3E8(r2)
      cmpwi     r0, 0
      beq-      .loc_0x54
      lfs       f0, -0x3A8(r2)
      lfs       f2, -0x3E4(r2)
      fdivs     f1, f1, f0
      fmr       f0, f3
      fsubs     f3, f2, f1
      fcmpo     cr0, f3, f0
      bge-      .loc_0x34
      fmr       f3, f0
      b         .loc_0x40

    .loc_0x34:
      fcmpo     cr0, f3, f2
      ble-      .loc_0x40
      fmr       f3, f2

    .loc_0x40:
      fmuls     f3, f3, f3
      lfs       f1, -0x3A4(r2)
      lfs       f0, -0x3A0(r2)
      fmuls     f3, f3, f1
      fadds     f3, f3, f0

    .loc_0x54:
      fmr       f1, f3
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DC7C
 * Size:	000010
 */
void og::Screen::OtakaraSensor::show(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xC(r3)
      li        r0, 0x1
      stb       r0, 0xB0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DC8C
 * Size:	000010
 */
void og::Screen::OtakaraSensor::hide(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xC(r3)
      li        r0, 0
      stb       r0, 0xB0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DC9C
 * Size:	000014
 */
void og::Screen::OtakaraSensor::startSensorEff(void)
{
    /*
    .loc_0x0:
      li        r0, 0x1
      lfs       f0, -0x3DC(r2)
      stb       r0, 0x2D(r3)
      stfs      f0, 0x34(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DCB0
 * Size:	0000D8
 */
void og::Screen::OtakaraSensor::adjPos((float, float))
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
      fmr       f30, f1
      lbz       r0, 0x2D(r3)
      fmr       f31, f2
      lfs       f2, -0x3E8(r2)
      cmplwi    r0, 0
      beq-      .loc_0x84
      lwz       r3, 0x30(r31)
      bl        0x2658
      lfs       f0, -0x3E8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x54
      fneg      f1, f1

    .loc_0x54:
      lfs       f0, -0x39C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f2, -0x3C8(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f0, 0x4(r3)
      fmuls     f2, f2, f0

    .loc_0x84:
      lfs       f1, 0x1C(r31)
      lfs       f0, 0x18(r31)
      fadds     f1, f1, f31
      lwz       r3, 0xC(r31)
      fadds     f0, f0, f30
      fadds     f1, f2, f1
      stfs      f0, 0xD4(r3)
      stfs      f1, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
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
 * Address:	8032DD88
 * Size:	000008
 */
void og::Screen::OtakaraSensor::adjScale((float))
{
    /*
    .loc_0x0:
      stfs      f1, 0x20(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DD90
 * Size:	000088
 */
void og::Screen::OtakaraSensor::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x3E8(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lfs       f1, 0x44(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x34
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x44(r31)

    .loc_0x34:
      mr        r3, r31
      bl        0x520
      mr        r3, r31
      bl        0x1A8
      lwz       r0, 0x80(r31)
      cmpwi     r0, 0x5
      beq-      .loc_0x58
      mr        r3, r31
      bl        0x838

    .loc_0x58:
      mr        r3, r31
      bl        0xA5C
      lwz       r0, 0x80(r31)
      lfs       f1, 0x74(r31)
      lfs       f2, 0x0(r31)
      rlwinm    r3,r0,0,24,31
      bl        0x140EA0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032DE18
 * Size:	000160
 */
void og::Screen::OtakaraSensor::updateInit(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x8F0
      stw       r30, 0x8(r1)
      lbz       r0, 0x6D(r3)
      cmplwi    r0, 0
      bne-      .loc_0x148
      li        r4, 0x1
      stb       r4, 0x6D(r3)
      lbz       r0, 0x84(r3)
      cmplwi    r0, 0
      beq-      .loc_0x148
      lwz       r0, 0x80(r3)
      cmpwi     r0, 0
      bne-      .loc_0x148
      stb       r4, 0x6C(r3)
      lbz       r0, 0x85(r3)
      cmplwi    r0, 0
      beq-      .loc_0x140
      lfs       f0, -0x3E8(r2)
      stfs      f0, 0x74(r3)
      stb       r4, 0x86(r3)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x84
      addi      r3, r31, 0x30
      addi      r5, r31, 0x3C
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x303858

    .loc_0x84:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0xA4
      addi      r3, r31, 0x30
      addi      r5, r31, 0x3C
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x303878

    .loc_0xA4:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xC4
      addi      r3, r31, 0x48
      addi      r5, r31, 0x3C
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x303898

    .loc_0xC4:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xE8
      addi      r3, r31, 0x48
      addi      r5, r31, 0x54
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x3038BC

    .loc_0xE8:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x118
      addi      r3, r31, 0x78
      addi      r5, r31, 0x3C
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x3038EC

    .loc_0x118:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      mr        r3, r30
      bl        0x13C1F0
      b         .loc_0x148

    .loc_0x140:
      lfs       f0, -0x3E4(r2)
      stfs      f0, 0x74(r3)

    .loc_0x148:
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
 * Address:	8032DF78
 * Size:	000370
 */
void og::Screen::OtakaraSensor::calcGrayColor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lwz       r0, 0x80(r3)
      cmpwi     r0, 0x5
      beq-      .loc_0x35C
      lbz       r0, 0x86(r31)
      cmplwi    r0, 0
      beq-      .loc_0x7C
      lfs       f1, 0x88(r31)
      lfs       f0, -0x3E8(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x50
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x88(r31)
      b         .loc_0xE8

    .loc_0x50:
      li        r3, 0
      li        r0, 0x1
      stb       r3, 0x86(r31)
      stb       r0, 0x6C(r31)
      lwz       r3, -0x6858(r13)
      bl        -0x21100
      li        r0, 0x1
      lfs       f0, -0x398(r2)
      stb       r0, 0x78(r31)
      stfs      f0, 0x7C(r31)
      b         .loc_0xE8

    .loc_0x7C:
      lbz       r0, 0x6C(r31)
      cmplwi    r0, 0
      beq-      .loc_0xC4
      lfs       f2, 0x74(r31)
      lfs       f1, -0x3A0(r2)
      lfs       f0, -0x3E4(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x74(r31)
      lfs       f1, 0x74(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xAC
      stfs      f0, 0x74(r31)

    .loc_0xAC:
      lwz       r0, 0x80(r31)
      cmpwi     r0, 0
      beq-      .loc_0xE8
      li        r0, 0
      stb       r0, 0x6C(r31)
      b         .loc_0xE8

    .loc_0xC4:
      lfs       f2, 0x74(r31)
      lfs       f1, -0x3A0(r2)
      lfs       f0, -0x3E8(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x74(r31)
      lfs       f1, 0x74(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xE8
      stfs      f0, 0x74(r31)

    .loc_0xE8:
      lbz       r0, 0x78(r31)
      cmplwi    r0, 0
      beq-      .loc_0x130
      lfs       f2, 0x7C(r31)
      lfs       f1, -0x3E8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x130
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x7C(r31)
      lfs       f0, 0x7C(r31)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x130
      lwz       r3, -0x6858(r13)
      bl        -0x21194
      mr        r3, r31
      bl        0x440

    .loc_0x130:
      li        r6, 0xFF
      li        r5, 0
      stb       r6, 0xC(r1)
      stb       r6, 0xD(r1)
      stb       r6, 0xE(r1)
      stb       r6, 0xF(r1)
      stb       r5, 0x8(r1)
      stb       r5, 0x9(r1)
      stb       r5, 0xA(r1)
      stb       r5, 0xB(r1)
      lwz       r3, 0x80(r31)
      cmpwi     r3, 0x4
      beq-      .loc_0x244
      bge-      .loc_0x324
      cmpwi     r3, 0x3
      bge-      .loc_0x174
      b         .loc_0x324

    .loc_0x174:
      li        r0, 0xC8
      stb       r6, 0xC(r1)
      lwz       r3, -0x6514(r13)
      stb       r5, 0xD(r1)
      lfs       f2, -0x390(r2)
      stb       r0, 0xE(r1)
      lfs       f3, -0x394(r2)
      stb       r6, 0xF(r1)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x8C(r31)
      fmuls     f1, f2, f1
      fmadds    f0, f3, f1, f0
      stfs      f0, 0x8C(r31)
      lfs       f0, 0x8C(r31)
      fcmpo     cr0, f0, f2
      ble-      .loc_0x1BC
      fsubs     f0, f0, f2
      stfs      f0, 0x8C(r31)

    .loc_0x1BC:
      lfs       f3, 0x8C(r31)
      lfs       f0, -0x3E8(r2)
      lfs       f2, -0x3DC(r2)
      fcmpo     cr0, f3, f0
      lfs       f1, -0x3E4(r2)
      bge-      .loc_0x200
      lfs       f0, -0x38C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x224

    .loc_0x200:
      lfs       f0, -0x39C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x224:
      fadds     f1, f1, f0
      lfs       f0, -0x388(r2)
      li        r0, 0x1
      fmuls     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0x74(r31)
      stb       r0, 0x90(r31)
      b         .loc_0x348

    .loc_0x244:
      li        r0, 0xC8
      lis       r3, 0x8051
      stb       r6, 0xC(r1)
      addi      r4, r3, 0x3DDC
      lwz       r3, -0x6514(r13)
      stb       r5, 0xD(r1)
      lfs       f2, -0x390(r2)
      stb       r0, 0xE(r1)
      lfs       f3, 0x44(r4)
      stb       r6, 0xF(r1)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x8C(r31)
      fmuls     f1, f2, f1
      fmadds    f0, f3, f1, f0
      stfs      f0, 0x8C(r31)
      lfs       f0, 0x8C(r31)
      fcmpo     cr0, f0, f2
      ble-      .loc_0x294
      fsubs     f0, f0, f2
      stfs      f0, 0x8C(r31)

    .loc_0x294:
      lfs       f3, 0x8C(r31)
      lis       r3, 0x8051
      lfs       f0, -0x3E8(r2)
      addi      r3, r3, 0x3DDC
      lfs       f2, 0x48(r3)
      fcmpo     cr0, f3, f0
      lfs       f1, -0x3E4(r2)
      bge-      .loc_0x2E0
      lfs       f0, -0x38C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x304

    .loc_0x2E0:
      lfs       f0, -0x39C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x304:
      fadds     f1, f1, f0
      lfs       f0, -0x388(r2)
      li        r0, 0x1
      fmuls     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0x74(r31)
      stb       r0, 0x90(r31)
      b         .loc_0x348

    .loc_0x324:
      lbz       r0, 0x90(r31)
      cmplwi    r0, 0
      beq-      .loc_0x348
      cmpwi     r3, 0
      bne-      .loc_0x348
      li        r3, 0
      li        r0, 0x1
      stb       r3, 0x90(r31)
      stb       r0, 0x6C(r31)

    .loc_0x348:
      lwz       r3, 0x70(r31)
      addi      r4, r1, 0xC
      lfs       f1, 0x74(r31)
      addi      r5, r1, 0x8
      bl        -0x2BFA4

    .loc_0x35C:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8032E2E8
 * Size:	0001FC
 */
void og::Screen::OtakaraSensor::calcAppear(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stw       r31, 0x7C(r1)
      mr        r31, r3
      lbz       r0, 0x2D(r3)
      cmplwi    r0, 0
      beq-      .loc_0x6C
      lfs       f2, 0x34(r31)
      lfs       f1, -0x3E8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x6C
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x34(r31)
      lfs       f0, 0x34(r31)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x6C
      lwz       r3, 0x30(r31)
      lfs       f1, -0x384(r2)
      lfs       f2, 0x4C(r31)
      bl        0x1F88
      li        r0, 0x1
      stb       r0, 0x40(r31)
      lfs       f0, 0x50(r31)
      stfs      f0, 0x48(r31)

    .loc_0x6C:
      lbz       r0, 0x40(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1E8
      lfs       f1, 0x48(r31)
      lfs       f4, -0x3E8(r2)
      fcmpo     cr0, f1, f4
      ble-      .loc_0x1E8
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x48(r31)
      lfs       f0, 0x48(r31)
      fcmpo     cr0, f0, f4
      cror      2, 0, 0x2
      bne-      .loc_0x1E8
      lwz       r3, 0x24(r31)
      lfs       f1, -0x380(r2)
      lfs       f2, -0x37C(r2)
      lfs       f3, -0x388(r2)
      bl        -0x54C8
      lfs       f0, -0x3E0(r2)
      lis       r3, 0x804C
      addi      r0, r3, 0x14F0
      lis       r5, 0x804C
      stfs      f0, 0x44(r31)
      li        r8, 0
      li        r7, 0x1A
      li        r6, 0x1B
      stw       r0, 0x54(r1)
      addi      r0, r5, 0x14D8
      lis       r4, 0x804E
      lis       r3, 0x804E
      stw       r0, 0x54(r1)
      addi      r0, r4, 0x7458
      li        r4, 0x1C
      li        r5, 0
      stw       r0, 0x54(r1)
      subi      r0, r3, 0x5E58
      addi      r3, r1, 0x24
      stb       r8, 0x58(r1)
      stb       r8, 0x59(r1)
      sth       r7, 0x5C(r1)
      sth       r6, 0x5E(r1)
      sth       r4, 0x60(r1)
      stw       r8, 0x64(r1)
      stw       r8, 0x68(r1)
      stw       r8, 0x6C(r1)
      stw       r0, 0x54(r1)
      lwz       r4, 0x8(r31)
      bl        -0x2F5480
      lwz       r4, 0x24(r1)
      addi      r3, r1, 0x18
      lwz       r6, 0x28(r1)
      li        r5, 0x3
      lwz       r0, 0x2C(r1)
      stw       r4, 0x48(r1)
      lwz       r4, 0x8(r31)
      stw       r6, 0x4C(r1)
      stw       r0, 0x50(r1)
      bl        -0x2F54A8
      lwz       r4, 0x18(r1)
      lis       r3, 0x804C
      lwz       r6, 0x1C(r1)
      addi      r0, r3, 0x1514
      stw       r4, 0x3C(r1)
      addi      r3, r1, 0x54
      lwz       r5, 0x20(r1)
      addi      r4, r1, 0x30
      stw       r6, 0x40(r1)
      lfs       f3, 0x48(r1)
      lfs       f2, 0x3C(r1)
      lfs       f1, 0x4C(r1)
      lfs       f0, 0x40(r1)
      fadds     f4, f3, f2
      lfs       f3, -0x388(r2)
      lfs       f2, 0x64(r31)
      fadds     f1, f1, f0
      lfs       f0, 0x68(r31)
      fmadds    f2, f4, f3, f2
      stw       r5, 0x44(r1)
      fmadds    f0, f1, f3, f0
      stw       r0, 0x38(r1)
      stfs      f2, 0x10(r1)
      stfs      f0, 0x14(r1)
      lwz       r5, 0x10(r1)
      lwz       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      lfs       f1, 0x8(r1)
      lfs       f0, 0xC(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0x8B4B4
      lwz       r3, -0x6858(r13)
      bl        -0x2161C

    .loc_0x1E8:
      lwz       r0, 0x84(r1)
      lwz       r31, 0x7C(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	8032E4E4
 * Size:	000138
 */
void og::Screen::OtakaraSensor::startGraySensor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      lis       r4, 0x804C
      lis       r5, 0x804E
      stw       r0, 0x74(r1)
      addi      r0, r4, 0x14F0
      lis       r4, 0x804C
      li        r8, 0
      stw       r31, 0x6C(r1)
      li        r7, 0x24
      li        r6, 0x25
      mr        r31, r3
      stw       r0, 0x54(r1)
      addi      r0, r4, 0x14D8
      lis       r4, 0x804E
      addi      r3, r1, 0x24
      stw       r0, 0x54(r1)
      addi      r0, r5, 0x7470
      li        r5, 0
      stw       r0, 0x54(r1)
      subi      r0, r4, 0x5E70
      stb       r8, 0x58(r1)
      stb       r8, 0x59(r1)
      sth       r7, 0x5C(r1)
      sth       r6, 0x5E(r1)
      stw       r8, 0x60(r1)
      stw       r8, 0x64(r1)
      stw       r0, 0x54(r1)
      lwz       r4, 0x8(r31)
      bl        -0x2F55C0
      lwz       r4, 0x24(r1)
      addi      r3, r1, 0x18
      lwz       r6, 0x28(r1)
      li        r5, 0x3
      lwz       r0, 0x2C(r1)
      stw       r4, 0x48(r1)
      lwz       r4, 0x8(r31)
      stw       r6, 0x4C(r1)
      stw       r0, 0x50(r1)
      bl        -0x2F55E8
      lwz       r4, 0x18(r1)
      lis       r3, 0x804C
      lwz       r6, 0x1C(r1)
      addi      r0, r3, 0x1514
      stw       r4, 0x3C(r1)
      addi      r3, r1, 0x54
      lwz       r5, 0x20(r1)
      addi      r4, r1, 0x30
      stw       r6, 0x40(r1)
      lfs       f3, 0x48(r1)
      lfs       f2, 0x3C(r1)
      lfs       f1, 0x4C(r1)
      lfs       f0, 0x40(r1)
      fadds     f4, f3, f2
      lfs       f3, -0x388(r2)
      lfs       f2, 0x5C(r31)
      fadds     f1, f1, f0
      lfs       f0, 0x60(r31)
      fmadds    f2, f4, f3, f2
      stw       r5, 0x44(r1)
      fmadds    f0, f1, f3, f0
      stw       r0, 0x38(r1)
      stfs      f2, 0x10(r1)
      stfs      f0, 0x14(r1)
      lwz       r5, 0x10(r1)
      lwz       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      lfs       f1, 0x8(r1)
      lfs       f0, 0xC(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0x8B2C4
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8032E61C
 * Size:	00022C
 */
void og::Screen::OtakaraSensor::calcAngle(void)
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
      lfs       f0, -0x378(r2)
      lfs       f2, 0x4(r3)
      lfs       f1, 0x0(r3)
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      fadds     f0, f2, f0
      stfs      f0, 0x4(r3)
      lwz       r0, 0x8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x200
      lbz       r0, 0x54(r31)
      lfs       f2, -0x3BC(r2)
      lfs       f1, 0x4(r31)
      cmplwi    r0, 0
      lfs       f0, -0x3B8(r2)
      fnmsubs   f31, f2, f1, f0
      beq-      .loc_0x6C
      lfs       f31, 0x10(r31)

    .loc_0x6C:
      lbz       r0, 0x2C(r31)
      lfs       f0, -0x3E8(r2)
      cmplwi    r0, 0
      beq-      .loc_0xFC
      lfs       f2, 0x28(r31)
      fmr       f30, f0
      lfs       f1, -0x388(r2)
      lfs       f0, -0x374(r2)
      fmuls     f2, f2, f1
      fsubs     f1, f31, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0xA4
      fsubs     f30, f0, f1
      b         .loc_0xB8

    .loc_0xA4:
      fadds     f1, f31, f2
      lfs       f0, -0x3B8(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB8
      fsubs     f30, f0, f1

    .loc_0xB8:
      bl        -0x265134
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f1, -0x3B0(r2)
      stw       r0, 0x8(r1)
      lfs       f4, -0x3C0(r2)
      lfd       f0, 0x8(r1)
      lfs       f3, 0x28(r31)
      fsubs     f5, f0, f1
      lfs       f2, -0x388(r2)
      lfs       f1, -0x370(r2)
      lfs       f0, -0x3E4(r2)
      fmuls     f2, f3, f2
      fdivs     f3, f5, f4
      fmsubs    f0, f1, f3, f0
      fmadds    f0, f2, f0, f30

    .loc_0xFC:
      lfs       f1, 0x38(r31)
      lfs       f2, 0x3C(r31)
      fsubs     f0, f0, f1
      fmadds    f0, f2, f0, f1
      stfs      f0, 0x38(r31)
      lbz       r0, 0x54(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1B8
      lfs       f2, 0x58(r31)
      lfs       f1, 0x10(r31)
      lfs       f0, -0x36C(r2)
      fsubs     f2, f2, f1
      fabs      f1, f2
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x180
      bl        -0x2651B8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3B0(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3C0(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3BC(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3B8(r2)
      fdivs     f2, f3, f2
      fmsubs    f0, f1, f2, f0
      stfs      f0, 0x58(r31)
      lfs       f1, 0x58(r31)
      lfs       f0, 0x10(r31)
      fsubs     f2, f1, f0

    .loc_0x180:
      lfs       f1, -0x388(r2)
      lfs       f0, -0x368(r2)
      fmuls     f1, f1, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0x198
      fmr       f1, f0

    .loc_0x198:
      lfs       f0, -0x364(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1A8
      fmr       f1, f0

    .loc_0x1A8:
      lfs       f0, 0x10(r31)
      fadds     f0, f0, f1
      stfs      f0, 0x10(r31)
      lfs       f31, 0x10(r31)

    .loc_0x1B8:
      stfs      f31, 0x10(r31)
      lbz       r0, 0x6C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1D0
      lfs       f0, 0x38(r31)
      fadds     f31, f31, f0

    .loc_0x1D0:
      lfs       f0, -0x374(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x1E0
      fmr       f31, f0

    .loc_0x1E0:
      lfs       f0, -0x3B8(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1F0
      fmr       f31, f0

    .loc_0x1F0:
      fmr       f1, f31
      lwz       r3, 0x8(r31)
      bl        -0x2F63E4
      b         .loc_0x208

    .loc_0x200:
      lfs       f0, -0x3E8(r2)
      stfs      f0, 0x10(r31)

    .loc_0x208:
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
 * Address:	8032E848
 * Size:	000204
 */
void og::Screen::OtakaraSensor::calcReaction(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      lfs       f1, -0x3E8(r2)
      stw       r0, 0x74(r1)
      stw       r31, 0x6C(r1)
      mr        r31, r3
      lfs       f2, 0x14(r3)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x19C
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x14(r31)
      lfs       f0, 0x14(r31)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x1C4
      stfs      f1, 0x14(r31)
      bl        -0x16964
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C4
      lfs       f1, 0x0(r31)
      bl        0x1401A4
      lfs       f0, 0x44(r31)
      lfs       f4, -0x3E8(r2)
      fcmpo     cr0, f0, f4
      cror      2, 0, 0x2
      bne-      .loc_0x1C4
      lfs       f1, -0x360(r2)
      lfs       f0, 0x0(r31)
      lwz       r3, 0x24(r31)
      fmuls     f1, f1, f0
      lfs       f2, -0x364(r2)
      lfs       f3, -0x35C(r2)
      bl        -0x59F4
      lis       r3, 0x804C
      li        r7, 0
      addi      r0, r3, 0x14F0
      li        r6, 0x18
      lis       r3, 0x804C
      stw       r0, 0x54(r1)
      addi      r0, r3, 0x14D8
      lis       r4, 0x804E
      stw       r0, 0x54(r1)
      addi      r0, r4, 0x7470
      li        r4, 0x19
      lis       r3, 0x804E
      stw       r0, 0x54(r1)
      subi      r0, r3, 0x5E88
      addi      r3, r1, 0x24
      li        r5, 0
      stb       r7, 0x58(r1)
      stb       r7, 0x59(r1)
      sth       r6, 0x5C(r1)
      sth       r4, 0x5E(r1)
      stw       r7, 0x60(r1)
      stw       r7, 0x64(r1)
      stw       r0, 0x54(r1)
      lwz       r4, 0x8(r31)
      bl        -0x2F5998
      lwz       r4, 0x24(r1)
      addi      r3, r1, 0x18
      lwz       r6, 0x28(r1)
      li        r5, 0x3
      lwz       r0, 0x2C(r1)
      stw       r4, 0x48(r1)
      lwz       r4, 0x8(r31)
      stw       r6, 0x4C(r1)
      stw       r0, 0x50(r1)
      bl        -0x2F59C0
      lwz       r4, 0x18(r1)
      lis       r3, 0x804C
      lwz       r6, 0x1C(r1)
      addi      r0, r3, 0x1514
      stw       r4, 0x3C(r1)
      addi      r3, r1, 0x54
      lwz       r5, 0x20(r1)
      addi      r4, r1, 0x30
      stw       r6, 0x40(r1)
      lfs       f3, 0x48(r1)
      lfs       f2, 0x3C(r1)
      lfs       f1, 0x4C(r1)
      lfs       f0, 0x40(r1)
      fadds     f4, f3, f2
      lfs       f3, -0x388(r2)
      lfs       f2, 0x5C(r31)
      fadds     f1, f1, f0
      lfs       f0, 0x60(r31)
      fmadds    f2, f4, f3, f2
      stw       r5, 0x44(r1)
      fmadds    f0, f1, f3, f0
      stw       r0, 0x38(r1)
      stfs      f2, 0x10(r1)
      stfs      f0, 0x14(r1)
      lwz       r5, 0x10(r1)
      lwz       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      lfs       f1, 0x8(r1)
      lfs       f0, 0xC(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0x8AEEC
      b         .loc_0x1C4

    .loc_0x19C:
      lfs       f1, 0x0(r31)
      lfs       f0, -0x3DC(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1C4
      lfs       f0, -0x3E4(r2)
      lfs       f2, -0x370(r2)
      fsubs     f1, f0, f1
      lfs       f0, -0x3C4(r2)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x14(r31)

    .loc_0x1C4:
      lwz       r3, 0x24(r31)
      bl        -0x5A8C
      lfs       f0, 0x20(r31)
      lwz       r3, 0xC(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8032EA4C
 * Size:	000004
 */
void og::Screen::OtakaraSensor::draw((J2DGrafContext&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8032EA50
 * Size:	000004
 */
void efx2d::TSimple3::kill(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8032EA54
 * Size:	000004
 */
void efx2d::TSimple3::fade(void)
{
    /*
    .loc_0x0:
      blr
    */
}
