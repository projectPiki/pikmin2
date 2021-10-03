

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
 * Address:	........
 * Size:	000004
 */
void efx::TParticleCallBack_Yodare::init((JPABaseEmitter*, JPABaseParticle*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void efx::TParticleCallBack_Yodare::execute((JPABaseEmitter*, JPABaseParticle*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void efx::TTestYodareGen::create((efx::Arg*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B66B0
 * Size:	0000F0
 */
void efx::TPkNageBlur::create((efx::Arg*))
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
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r2, 0x1314
      bl        -0x2EC028
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x13F
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38C0D0

    .loc_0x64:
      lhz       r0, 0x10(r31)
      cmpwi     r0, 0x2
      beq-      .loc_0xAC
      bge-      .loc_0x84
      cmpwi     r0, 0
      beq-      .loc_0x94
      bge-      .loc_0xA0
      b         .loc_0xCC

    .loc_0x84:
      cmpwi     r0, 0x4
      beq-      .loc_0xC4
      bge-      .loc_0xCC
      b         .loc_0xB8

    .loc_0x94:
      li        r0, 0x173
      sth       r0, 0xC(r30)
      b         .loc_0xCC

    .loc_0xA0:
      li        r0, 0x174
      sth       r0, 0xC(r30)
      b         .loc_0xCC

    .loc_0xAC:
      li        r0, 0x176
      sth       r0, 0xC(r30)
      b         .loc_0xCC

    .loc_0xB8:
      li        r0, 0x172
      sth       r0, 0xC(r30)
      b         .loc_0xCC

    .loc_0xC4:
      li        r0, 0x175
      sth       r0, 0xC(r30)

    .loc_0xCC:
      mr        r3, r30
      mr        r4, r31
      bl        -0x7098
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
 * Address:	803B67A0
 * Size:	0001E0
 */
void efx::TDopingSmoke::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r4
      lis       r4, 0x8049
      stw       r29, 0x24(r1)
      mr        r29, r3
      mr        r3, r30
      addi      r31, r4, 0x5A28
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r31, 0x1C
      bl        -0x2EC124
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x68
      addi      r3, r31, 0
      addi      r5, r31, 0x10
      li        r4, 0x15D
      crclr     6, 0x6
      bl        -0x38C1C4

    .loc_0x68:
      lhz       r0, 0x1C(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x90
      bge-      .loc_0x9C
      cmpwi     r0, 0
      bge-      .loc_0x84
      b         .loc_0x9C

    .loc_0x84:
      li        r0, 0x45
      sth       r0, 0x4(r29)
      b         .loc_0xA4

    .loc_0x90:
      li        r0, 0x43
      sth       r0, 0x4(r29)
      b         .loc_0xA4

    .loc_0x9C:
      li        r0, 0x2B2
      sth       r0, 0x4(r29)

    .loc_0xA4:
      mr        r3, r29
      mr        r4, r30
      bl        -0x78C8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1C0
      lfs       f4, 0x10(r30)
      lfs       f3, 0x14(r30)
      fmuls     f0, f4, f4
      lfs       f2, 0x18(r30)
      fmuls     f5, f3, f3
      lfs       f1, 0x1310(r2)
      fmuls     f6, f2, f2
      stfs      f4, 0x8(r1)
      fadds     f0, f0, f5
      stfs      f3, 0xC(r1)
      stfs      f2, 0x10(r1)
      fadds     f0, f6, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x10C
      fmadds    f0, f4, f4, f5
      fadds     f3, f6, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x110
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x110

    .loc_0x10C:
      fmr       f3, f1

    .loc_0x110:
      lfs       f0, 0x1310(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x148
      lfs       f0, 0x131C(r2)
      lfs       f2, 0x8(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)

    .loc_0x148:
      lwz       r3, 0x8(r29)
      lfs       f0, 0x8(r1)
      lfs       f1, 0xC(r1)
      stfs      f0, 0x18(r3)
      lfs       f0, 0x10(r1)
      stfs      f1, 0x1C(r3)
      stfs      f0, 0x20(r3)
      lhz       r0, 0x1C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1B8
      lwz       r3, -0x65E8(r13)
      addi      r5, r30, 0x4
      li        r4, 0x44
      li        r6, 0
      bl        0x4F94
      cmplwi    r3, 0
      beq-      .loc_0x1B0
      subi      r0, r13, 0x6608
      lfs       f0, 0x8(r1)
      stw       r0, 0xEC(r3)
      lfs       f1, 0xC(r1)
      stfs      f0, 0x18(r3)
      lfs       f0, 0x10(r1)
      stfs      f1, 0x1C(r3)
      stfs      f0, 0x20(r3)
      b         .loc_0x1B8

    .loc_0x1B0:
      li        r3, 0
      b         .loc_0x1C4

    .loc_0x1B8:
      li        r3, 0x1
      b         .loc_0x1C4

    .loc_0x1C0:
      li        r3, 0

    .loc_0x1C4:
      lwz       r0, 0x34(r1)
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
 * Address:	803B6980
 * Size:	000060
 */
void efx::TOrimaLight::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x2C(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x3C
      bge-      .loc_0x4C
      cmpwi     r0, 0
      bge-      .loc_0x28
      b         .loc_0x4C

    .loc_0x28:
      li        r5, 0x123
      li        r0, 0x126
      sth       r5, 0x10(r3)
      sth       r0, 0x24(r3)
      b         .loc_0x4C

    .loc_0x3C:
      li        r5, 0xDE
      li        r0, 0xE1
      sth       r5, 0x10(r3)
      sth       r0, 0x24(r3)

    .loc_0x4C:
      bl        -0x4290
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B69E0
 * Size:	000060
 */
void efx::TOrimaLightAct::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x2C(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x3C
      bge-      .loc_0x4C
      cmpwi     r0, 0
      bge-      .loc_0x28
      b         .loc_0x4C

    .loc_0x28:
      li        r5, 0x124
      li        r0, 0x125
      sth       r5, 0x10(r3)
      sth       r0, 0x24(r3)
      b         .loc_0x4C

    .loc_0x3C:
      li        r5, 0xDF
      li        r0, 0xE0
      sth       r5, 0x10(r3)
      sth       r0, 0x24(r3)

    .loc_0x4C:
      bl        -0x42F0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B6A40
 * Size:	000078
 */
void efx::TCursor::init((long, long))
{
    /*
    .loc_0x0:
      cmpwi     r5, 0
      ble-      .loc_0x10
      cmpwi     r5, 0x10
      ble-      .loc_0x14

    .loc_0x10:
      li        r5, 0x10

    .loc_0x14:
      stw       r5, 0x38(r3)
      cmpwi     r4, 0x2
      lfs       f0, -0x7BF8(r13)
      stfs      f0, 0x28C(r3)
      beq-      .loc_0x60
      bge-      .loc_0x3C
      cmpwi     r4, 0
      beq-      .loc_0x48
      bge-      .loc_0x54
      blr

    .loc_0x3C:
      cmpwi     r4, 0x4
      bgelr-
      b         .loc_0x6C

    .loc_0x48:
      li        r0, 0x19
      sth       r0, 0x10(r3)
      blr

    .loc_0x54:
      li        r0, 0x1B
      sth       r0, 0x10(r3)
      blr

    .loc_0x60:
      li        r0, 0x1A
      sth       r0, 0x10(r3)
      blr

    .loc_0x6C:
      li        r0, 0x6A
      sth       r0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B6AB8
 * Size:	000154
 */
void efx::TCursor::create((efx::Arg*))
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
      lfs       f0, 0x1310(r2)
      mr        r28, r3
      mr        r29, r4
      lis       r4, 0x8049
      stfs      f0, 0x288(r3)
      mr        r3, r29
      addi      r31, r4, 0x5A28
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r31, 0x2C
      bl        -0x2EC450
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x7C
      addi      r3, r31, 0
      addi      r5, r31, 0x10
      li        r4, 0x1CB
      crclr     6, 0x6
      bl        -0x38C4F0

    .loc_0x7C:
      lfs       f0, 0x4(r29)
      mr        r31, r28
      li        r30, 0
      stfs      f0, 0x27C(r28)
      lfs       f0, 0x8(r29)
      stfs      f0, 0x280(r28)
      lfs       f0, 0xC(r29)
      stfs      f0, 0x284(r28)
      lfs       f31, 0x10(r29)
      b         .loc_0xD8

    .loc_0xA4:
      fmr       f1, f31
      mr        r3, r28
      mr        r5, r30
      addi      r4, r1, 0x8
      bl        0x1A0
      lfs       f0, 0x8(r1)
      addi      r30, r30, 0x1
      stfs      f0, 0x54(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x58(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x5C(r31)
      addi      r31, r31, 0x24

    .loc_0xD8:
      lwz       r0, 0x38(r28)
      cmpw      r30, r0
      blt+      .loc_0xA4
      mr        r31, r28
      li        r30, 0
      b         .loc_0x104

    .loc_0xF0:
      addi      r3, r28, 0x4
      addi      r4, r31, 0x3C
      bl        -0x82C4
      addi      r31, r31, 0x24
      addi      r30, r30, 0x1

    .loc_0x104:
      lwz       r0, 0x38(r28)
      cmpw      r30, r0
      blt+      .loc_0xF0
      addi      r3, r28, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
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
    */
}

/*
 * --INFO--
 * Address:	803B6C0C
 * Size:	000100
 */
void efx::TCursor::update((efx::Arg*))
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
      mr.       r30, r4
      mr        r29, r3
      bne-      .loc_0x48
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x1E0
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38C610

    .loc_0x48:
      lfs       f31, 0x10(r30)
      lfs       f1, 0x4(r30)
      lfs       f0, 0x1310(r2)
      stfs      f1, 0x27C(r29)
      lfs       f1, 0x8(r30)
      stfs      f1, 0x280(r29)
      lfs       f1, 0xC(r30)
      stfs      f1, 0x284(r29)
      lfs       f2, 0x288(r29)
      lfs       f1, 0x28C(r29)
      fsubs     f1, f2, f1
      stfs      f1, 0x288(r29)
      lfs       f1, 0x288(r29)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x90
      lfs       f0, 0x1320(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x288(r29)

    .loc_0x90:
      mr        r31, r29
      li        r30, 0
      b         .loc_0xD0

    .loc_0x9C:
      fmr       f1, f31
      mr        r3, r29
      mr        r5, r30
      addi      r4, r1, 0x8
      bl        .loc_0x100
      lfs       f0, 0x8(r1)
      addi      r30, r30, 0x1
      stfs      f0, 0x54(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x58(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x5C(r31)
      addi      r31, r31, 0x24

    .loc_0xD0:
      lwz       r0, 0x38(r29)
      cmpw      r30, r0
      blt+      .loc_0x9C
      psq_l     f31,0x38(r1),0,0
      lwz       r0, 0x44(r1)
      lfd       f31, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x100:
    */
}

/*
 * --INFO--
 * Address:	803B6D0C
 * Size:	000148
 */
void calcPos___Q23efx7TCursorFP10Vector3<float> fl(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r6, 0x4330
      lfd       f4, 0x1338(r2)
      stw       r0, 0x44(r1)
      xoris     r0, r5, 0x8000
      lfs       f2, 0x1328(r2)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      lfs       f5, 0x1324(r2)
      stw       r0, 0xC(r1)
      lwz       r0, 0x38(r3)
      stw       r6, 0x8(r1)
      xoris     r0, r0, 0x8000
      lfs       f6, 0x288(r3)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f0, f0, f4
      stw       r6, 0x10(r1)
      fmuls     f3, f2, f0
      lfd       f2, 0x10(r1)
      lfs       f0, 0x1310(r2)
      fsubs     f2, f2, f4
      fmuls     f3, f5, f3
      fdivs     f2, f3, f2
      fadds     f5, f6, f2
      fmr       f2, f5
      fcmpo     cr0, f5, f0
      bge-      .loc_0x78
      fneg      f2, f5

    .loc_0x78:
      lfs       f4, 0x132C(r2)
      lis       r4, 0x8050
      lfs       f0, 0x1310(r2)
      addi      r5, r4, 0x71A0
      fmuls     f3, f2, f4
      lfs       f2, 0x27C(r3)
      fcmpo     cr0, f5, f0
      fctiwz    f0, f3
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r5, r0
      lfs       f0, 0x4(r4)
      fmadds    f0, f1, f0, f2
      stfs      f0, 0x0(r31)
      bge-      .loc_0xDC
      lfs       f0, 0x1330(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f2, f0
      b         .loc_0xF4

    .loc_0xDC:
      fmuls     f0, f5, f4
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r5, r0

    .loc_0xF4:
      lfs       f0, 0x284(r3)
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x8(r31)
      lwz       r0, -0x6CF8(r13)
      cmplwi    r0, 0
      beq-      .loc_0x12C
      mr        r3, r0
      mr        r4, r31
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x4(r31)
      b         .loc_0x134

    .loc_0x12C:
      lfs       f0, 0x280(r3)
      stfs      f0, 0x4(r31)

    .loc_0x134:
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803B6E54
 * Size:	0000AC
 */
void efx::TFueactCircle::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x14(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      li        r3, 0
      b         .loc_0x98

    .loc_0x28:
      lis       r4, 0x8051
      lwz       r3, -0x65E8(r13)
      addi      r5, r4, 0x41E4
      li        r6, 0
      li        r4, 0x69
      bl        0x4A24
      stw       r3, 0x14(r31)
      lwz       r3, 0x14(r31)
      cmplwi    r3, 0
      beq-      .loc_0x94
      cmplwi    r31, 0
      mr        r0, r31
      beq-      .loc_0x60
      addi      r0, r31, 0x4

    .loc_0x60:
      cmplwi    r31, 0
      stw       r0, 0xEC(r3)
      mr        r0, r31
      beq-      .loc_0x74
      addi      r0, r31, 0x8

    .loc_0x74:
      lwz       r4, 0x14(r31)
      li        r3, 0x1
      stw       r0, 0xF0(r4)
      lwz       r4, 0x14(r31)
      lwz       r0, 0xF4(r4)
      ori       r0, r0, 0x40
      stw       r0, 0xF4(r4)
      b         .loc_0x98

    .loc_0x94:
      li        r3, 0

    .loc_0x98:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B6F00
 * Size:	000124
 */
void efx::TFueactCircle::execute((JPABaseEmitter*))
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
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x212
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38C900

    .loc_0x44:
      lwz       r0, 0x10(r30)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x213
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38C928

    .loc_0x6C:
      lwz       r5, 0x10(r30)
      lis       r3, 0x8051
      lwz       r4, 0xC(r30)
      lfs       f1, 0x4(r5)
      lfs       f0, 0x1C(r4)
      lfs       f2, 0x0(r5)
      fsubs     f5, f1, f0
      lfs       f0, 0xC(r4)
      lfs       f1, 0x8(r5)
      fsubs     f4, f2, f0
      lfs       f0, 0x2C(r4)
      fmuls     f2, f5, f5
      fsubs     f6, f1, f0
      lfs       f1, 0x1340(r2)
      lfs       f0, 0x48DC(r3)
      fmadds    f2, f4, f4, f2
      fmuls     f0, f1, f0
      fmadds    f7, f6, f6, f2
      fcmpo     cr0, f7, f0
      cror      2, 0, 0x2
      beq-      .loc_0x100
      lfs       f0, 0x1310(r2)
      fcmpo     cr0, f7, f0
      cror      2, 0, 0x2
      bne-      .loc_0xD4
      b         .loc_0xF4

    .loc_0xD4:
      fsqrte    f3, f7
      lfs       f2, 0x1344(r2)
      lfs       f0, 0x1348(r2)
      frsp      f3, f3
      fmuls     f1, f3, f3
      fmuls     f2, f2, f3
      fnmsubs   f0, f7, f1, f0
      fmuls     f7, f2, f0

    .loc_0xF4:
      fmuls     f4, f4, f7
      fmuls     f5, f5, f7
      fmuls     f6, f6, f7

    .loc_0x100:
      stfs      f4, 0x18(r31)
      stfs      f5, 0x1C(r31)
      stfs      f6, 0x20(r31)
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
 * Address:	803B7024
 * Size:	0002CC
 */
void efx::TFueactCircle::execute((JPABaseEmitter*, JPABaseParticle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r5
      stw       r30, 0x58(r1)
      mr        r30, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x223
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38CA24

    .loc_0x44:
      lwz       r0, 0x10(r30)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x224
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38CA4C

    .loc_0x6C:
      lwz       r3, 0x10(r30)
      lwz       r4, 0xC(r30)
      lfs       f0, 0x0(r3)
      lfs       f1, 0x4(r3)
      stfs      f0, 0x38(r1)
      lfs       f0, 0x8(r3)
      stfs      f1, 0x3C(r1)
      lwz       r0, 0x38(r1)
      lwz       r3, 0x3C(r1)
      stfs      f0, 0x40(r1)
      lfs       f5, 0xC(r4)
      stw       r0, 0x14(r1)
      lwz       r0, 0x40(r1)
      stw       r3, 0x18(r1)
      lfs       f1, 0x1C(r4)
      lfs       f2, 0x14(r1)
      lfs       f0, 0x18(r1)
      stw       r0, 0x1C(r1)
      fsubs     f3, f2, f5
      fsubs     f4, f0, f1
      lfs       f0, 0x2C(r4)
      lfs       f2, 0x1C(r1)
      stfs      f3, 0x14(r1)
      fsubs     f3, f2, f0
      lfs       f2, 0x1310(r2)
      stfs      f4, 0x18(r1)
      lwz       r0, 0x14(r1)
      lwz       r3, 0x18(r1)
      stfs      f3, 0x1C(r1)
      stw       r0, 0x2C(r1)
      lwz       r0, 0x1C(r1)
      stw       r3, 0x30(r1)
      lfs       f4, 0x2C(r1)
      lfs       f3, 0x30(r1)
      stw       r0, 0x34(r1)
      fmuls     f4, f4, f4
      fmuls     f3, f3, f3
      lfs       f6, 0x34(r1)
      stfs      f5, 0x44(r1)
      fmuls     f5, f6, f6
      fadds     f3, f4, f3
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)
      fadds     f6, f5, f3
      fcmpo     cr0, f6, f2
      cror      2, 0, 0x2
      bne-      .loc_0x130
      fmr       f3, f6
      b         .loc_0x154

    .loc_0x130:
      fsqrte    f5, f6
      lfs       f4, 0x1344(r2)
      lfs       f2, 0x1348(r2)
      frsp      f5, f5
      fmuls     f3, f5, f5
      fmuls     f4, f4, f5
      fnmsubs   f2, f6, f3, f2
      fmuls     f2, f4, f2
      fmuls     f3, f6, f2

    .loc_0x154:
      lfs       f2, 0x134C(r2)
      fcmpo     cr0, f3, f2
      ble-      .loc_0x268
      lis       r3, 0x8051
      lfs       f3, 0x1340(r2)
      lfs       f2, 0x48DC(r3)
      fmuls     f2, f3, f2
      fcmpo     cr0, f6, f2
      cror      2, 0, 0x2
      beq-      .loc_0x1D4
      lfs       f2, 0x1310(r2)
      fcmpo     cr0, f6, f2
      cror      2, 0, 0x2
      bne-      .loc_0x190
      b         .loc_0x1B0

    .loc_0x190:
      fsqrte    f5, f6
      lfs       f4, 0x1344(r2)
      lfs       f2, 0x1348(r2)
      frsp      f5, f5
      fmuls     f3, f5, f5
      fmuls     f4, f4, f5
      fnmsubs   f2, f6, f3, f2
      fmuls     f6, f4, f2

    .loc_0x1B0:
      lfs       f4, 0x2C(r1)
      lfs       f3, 0x30(r1)
      lfs       f2, 0x34(r1)
      fmuls     f4, f4, f6
      fmuls     f3, f3, f6
      fmuls     f2, f2, f6
      stfs      f4, 0x2C(r1)
      stfs      f3, 0x30(r1)
      stfs      f2, 0x34(r1)

    .loc_0x1D4:
      lwz       r4, 0x44(r1)
      lwz       r3, 0x48(r1)
      lwz       r0, 0x4C(r1)
      stw       r4, 0x8(r1)
      lfs       f5, 0x2C(r1)
      lfs       f4, 0x134C(r2)
      lfs       f3, 0x30(r1)
      lfs       f2, 0x34(r1)
      fmuls     f7, f5, f4
      stw       r3, 0xC(r1)
      fmuls     f6, f3, f4
      fmuls     f5, f2, f4
      lfs       f2, 0x8(r1)
      stw       r0, 0x10(r1)
      lfs       f3, 0xC(r1)
      fadds     f4, f2, f7
      lfs       f2, 0x10(r1)
      fadds     f3, f3, f6
      stfs      f7, 0x2C(r1)
      fadds     f2, f2, f5
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      lwz       r4, 0x8(r1)
      stfs      f2, 0x10(r1)
      lwz       r3, 0xC(r1)
      lwz       r0, 0x10(r1)
      stw       r4, 0x20(r1)
      stw       r3, 0x24(r1)
      lfs       f4, 0x20(r1)
      stw       r0, 0x28(r1)
      lfs       f3, 0x24(r1)
      lfs       f2, 0x28(r1)
      stfs      f6, 0x30(r1)
      stfs      f5, 0x34(r1)
      stfs      f4, 0x38(r1)
      stfs      f3, 0x3C(r1)
      stfs      f2, 0x40(r1)

    .loc_0x268:
      lwz       r0, 0x7C(r31)
      rlwinm.   r0,r0,0,29,29
      bne-      .loc_0x2B4
      lfs       f6, 0x84(r31)
      lfs       f2, 0x131C(r2)
      lfs       f4, 0x38(r1)
      lfs       f3, 0x3C(r1)
      fsubs     f7, f2, f6
      lfs       f2, 0x40(r1)
      fmuls     f4, f4, f6
      lfs       f5, 0x44(r1)
      fmuls     f3, f3, f6
      fmuls     f2, f2, f6
      fmadds    f4, f5, f7, f4
      fmadds    f1, f1, f7, f3
      fmadds    f0, f0, f7, f2
      stfs      f4, 0x18(r31)
      stfs      f1, 0x1C(r31)
      stfs      f0, 0x20(r31)

    .loc_0x2B4:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	803B72F0
 * Size:	0001D4
 */
void efx::TFueactBiriBase::doExecuteEmitterOperation((JPABaseEmitter*))
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
      mr        r30, r3
      mr        r31, r4
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x243
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38CCF8

    .loc_0x4C:
      lwz       r0, 0x14(r30)
      cmplwi    r0, 0
      bne-      .loc_0x74
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x244
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38CD20

    .loc_0x74:
      lwz       r4, 0x14(r30)
      lwz       r3, 0x10(r30)
      lfs       f0, 0x4(r4)
      lfs       f3, 0x1C(r3)
      lfs       f1, 0x8(r4)
      fsubs     f0, f0, f3
      lfs       f2, 0x2C(r3)
      lfs       f4, 0x0(r4)
      lfs       f10, 0xC(r3)
      fsubs     f1, f1, f2
      fmuls     f6, f0, f0
      fsubs     f8, f4, f10
      lfs       f31, 0x1310(r2)
      fmuls     f7, f1, f1
      fmadds    f4, f8, f8, f6
      fadds     f9, f7, f4
      fcmpo     cr0, f9, f31
      ble-      .loc_0xD0
      ble-      .loc_0xCC
      fsqrte    f4, f9
      fmuls     f31, f4, f9
      b         .loc_0xD0

    .loc_0xCC:
      fmr       f31, f9

    .loc_0xD0:
      lfs       f5, 0x1310(r2)
      fcmpo     cr0, f9, f5
      ble-      .loc_0xF8
      fmadds    f4, f8, f8, f6
      fadds     f6, f7, f4
      fcmpo     cr0, f6, f5
      ble-      .loc_0xFC
      fsqrte    f4, f6
      fmuls     f6, f4, f6
      b         .loc_0xFC

    .loc_0xF8:
      fmr       f6, f5

    .loc_0xFC:
      lfs       f4, 0x1310(r2)
      fcmpo     cr0, f6, f4
      ble-      .loc_0x11C
      lfs       f4, 0x131C(r2)
      fdivs     f4, f4, f6
      fmuls     f8, f8, f4
      fmuls     f0, f0, f4
      fmuls     f1, f1, f4

    .loc_0x11C:
      lfs       f5, 0x1310(r2)
      addi      r3, r1, 0x8
      lfs       f6, 0x131C(r2)
      addi      r4, r31, 0x68
      fmuls     f9, f5, f0
      stfs      f8, 0x10(r1)
      fmuls     f4, f5, f1
      addi      r5, r31, 0xA4
      stfs      f10, 0x14(r1)
      fnmsubs   f7, f6, f8, f9
      fmsubs    f6, f6, f1, f9
      stfs      f0, 0x20(r1)
      fmsubs    f9, f5, f8, f4
      fmuls     f4, f8, f7
      stfs      f3, 0x24(r1)
      fmuls     f3, f0, f6
      fmuls     f5, f1, f9
      stfs      f6, 0x8(r1)
      fmsubs    f4, f1, f6, f4
      fmsubs    f3, f8, f9, f3
      stfs      f9, 0x18(r1)
      fmsubs    f0, f0, f7, f5
      stfs      f4, 0x1C(r1)
      stfs      f0, 0xC(r1)
      stfs      f7, 0x28(r1)
      stfs      f3, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f2, 0x34(r1)
      bl        -0x323760
      lfs       f0, 0x134C(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1A0
      fmr       f31, f0

    .loc_0x1A0:
      lfs       f0, 0x1350(r2)
      fdivs     f0, f31, f0
      stfs      f0, 0x98(r31)
      stfs      f0, 0x9C(r31)
      stfs      f0, 0xA0(r31)
      psq_l     f31,0x48(r1),0,0
      lwz       r0, 0x54(r1)
      lfd       f31, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	803B74C4
 * Size:	00010C
 */
void efx::createSimpleDead(Vector3<float>&, long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      stw       r30, 0x38(r1)
      mr        r30, r4
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x26A
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38CEC4

    .loc_0x44:
      cmpwi     r30, 0x5
      beq-      .loc_0x50
      b         .loc_0xE4

    .loc_0x50:
      lis       r3, 0x804B
      lis       r4, 0x804E
      subi      r0, r3, 0x5808
      lis       r3, 0x804F
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x6A78
      li        r0, 0x52
      li        r7, 0
      stw       r4, 0x14(r1)
      subi      r6, r3, 0x798C
      lis       r4, 0x804B
      lis       r3, 0x804B
      sth       r0, 0x18(r1)
      subi      r5, r4, 0x5814
      lfs       f0, 0x1344(r2)
      subi      r0, r3, 0x5D24
      stw       r7, 0x1C(r1)
      addi      r3, r1, 0x14
      addi      r4, r1, 0x20
      stw       r6, 0x14(r1)
      lwz       r8, 0x0(r31)
      lwz       r7, 0x4(r31)
      lwz       r6, 0x8(r31)
      stw       r8, 0x8(r1)
      stw       r7, 0xC(r1)
      lfs       f3, 0x8(r1)
      stw       r6, 0x10(r1)
      lfs       f2, 0xC(r1)
      stw       r5, 0x20(r1)
      lfs       f1, 0x10(r1)
      stfs      f3, 0x24(r1)
      stfs      f2, 0x28(r1)
      stfs      f1, 0x2C(r1)
      stw       r0, 0x20(r1)
      stfs      f0, 0x30(r1)
      bl        0x10A30
      b         .loc_0xF4

    .loc_0xE4:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      mr        r5, r30
      bl        0xF1E4

    .loc_0xF4:
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
 * Address:	........
 * Size:	00005C
 */
void efx::createSimpleAttack(Vector3<float>&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void efx::createSimpleAttackDp(Vector3<float>&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void efx::createSimpleKanden(Vector3<float>&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B75D0
 * Size:	00005C
 */
void efx::createSimpleChinka(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x290
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38CFC8

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF3A0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B762C
 * Size:	00005C
 */
void efx::createSimpleGedoku(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x296
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D024

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF40C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7688
 * Size:	000098
 */
void efx::createSimpleBlackDrop(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r10, r6, 0x5808
      stw       r0, 0x8(r1)
      addi      r9, r5, 0x6A50
      lis       r4, 0x804E
      li        r8, 0x14B
      lfs       f0, 0x0(r3)
      addi      r0, r4, 0x7204
      li        r7, 0x14C
      li        r6, 0x14D
      stfs      f0, 0xC(r1)
      li        r5, 0
      addi      r4, r1, 0x8
      lfs       f0, 0x4(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x18
      stw       r10, 0x18(r1)
      stw       r9, 0x18(r1)
      stfs      f0, 0x14(r1)
      sth       r8, 0x1C(r1)
      sth       r7, 0x1E(r1)
      sth       r6, 0x20(r1)
      stw       r5, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r5, 0x2C(r1)
      stw       r0, 0x18(r1)
      bl        -0x8650
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7720
 * Size:	00008C
 */
void efx::createSimpleGate1Attack(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r9, r6, 0x5808
      stw       r0, 0x18(r1)
      addi      r8, r5, 0x6A64
      lis       r4, 0x804E
      li        r7, 0x76
      lfs       f0, 0x0(r3)
      addi      r0, r4, 0x71F0
      li        r6, 0x77
      li        r5, 0
      stfs      f0, 0x1C(r1)
      addi      r4, r1, 0x18
      lfs       f0, 0x4(r3)
      stfs      f0, 0x20(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x8
      stw       r9, 0x8(r1)
      stw       r8, 0x8(r1)
      stfs      f0, 0x24(r1)
      sth       r7, 0xC(r1)
      sth       r6, 0xE(r1)
      stw       r5, 0x10(r1)
      stw       r5, 0x14(r1)
      stw       r0, 0x8(r1)
      bl        -0x8784
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B77AC
 * Size:	00008C
 */
void efx::createSimplePkAp(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r9, r6, 0x5808
      stw       r0, 0x18(r1)
      addi      r8, r5, 0x6A64
      lis       r4, 0x804B
      li        r7, 0x146
      lfs       f0, 0x0(r3)
      addi      r0, r4, 0x458C
      li        r6, 0x147
      li        r5, 0
      stfs      f0, 0x1C(r1)
      addi      r4, r1, 0x18
      lfs       f0, 0x4(r3)
      stfs      f0, 0x20(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x8
      stw       r9, 0x8(r1)
      stw       r8, 0x8(r1)
      stfs      f0, 0x24(r1)
      sth       r7, 0xC(r1)
      sth       r6, 0xE(r1)
      stw       r5, 0x10(r1)
      stw       r5, 0x14(r1)
      stw       r0, 0x8(r1)
      bl        -0x8810
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7838
 * Size:	00005C
 */
void efx::createSimpleWaterOff(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x2B1
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D230

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF2C8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7894
 * Size:	00005C
 */
void efx::createSimpleDive(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x2B7
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D28C

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF334
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B78F0
 * Size:	000098
 */
void efx::createSimpleChiru(Vector3<float>&, long)
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
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x2BD
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D2F0

    .loc_0x44:
      cmpwi     r31, 0x3
      bge-      .loc_0x58
      cmpwi     r31, 0
      bge-      .loc_0x64
      b         .loc_0x80

    .loc_0x58:
      cmpwi     r31, 0x5
      bge-      .loc_0x80
      b         .loc_0x74

    .loc_0x64:
      lwz       r3, -0x65B0(r13)
      mr        r4, r30
      bl        0xF378
      b         .loc_0x80

    .loc_0x74:
      lwz       r3, -0x65B0(r13)
      mr        r4, r30
      bl        0xF538

    .loc_0x80:
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
 * Address:	803B7988
 * Size:	00005C
 */
void efx::createSimpleInattack(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x2CD
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D380

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF37C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B79E4
 * Size:	000080
 */
void efx::createSimpleInstick(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r8, r6, 0x5808
      stw       r0, 0x14(r1)
      addi      r7, r5, 0x6A78
      lis       r4, 0x804E
      li        r6, 0x164
      lfs       f0, 0x0(r3)
      addi      r0, r4, 0x71DC
      li        r5, 0
      addi      r4, r1, 0x14
      stfs      f0, 0x18(r1)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x1C(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x8
      stw       r8, 0x8(r1)
      stw       r7, 0x8(r1)
      stfs      f0, 0x20(r1)
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        -0x8ACC
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7A64
 * Size:	00008C
 */
void efx::createSimpleGate2Attack(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r9, r6, 0x5808
      stw       r0, 0x18(r1)
      addi      r8, r5, 0x6A64
      lis       r4, 0x804E
      li        r7, 0x7A
      lfs       f0, 0x0(r3)
      addi      r0, r4, 0x71C8
      li        r6, 0x7B
      li        r5, 0
      stfs      f0, 0x1C(r1)
      addi      r4, r1, 0x18
      lfs       f0, 0x4(r3)
      stfs      f0, 0x20(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x8
      stw       r9, 0x8(r1)
      stw       r8, 0x8(r1)
      stfs      f0, 0x24(r1)
      sth       r7, 0xC(r1)
      sth       r6, 0xE(r1)
      stw       r5, 0x10(r1)
      stw       r5, 0x14(r1)
      stw       r0, 0x8(r1)
      bl        -0x8AC8
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7AF0
 * Size:	000080
 */
void efx::createSimpleBridgeAttack(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r8, r6, 0x5808
      stw       r0, 0x14(r1)
      addi      r7, r5, 0x6A78
      lis       r4, 0x804E
      li        r6, 0x10
      lfs       f0, 0x0(r3)
      addi      r0, r4, 0x71B4
      li        r5, 0
      addi      r4, r1, 0x14
      stfs      f0, 0x18(r1)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x1C(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x8
      stw       r8, 0x8(r1)
      stw       r7, 0x8(r1)
      stfs      f0, 0x20(r1)
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        -0x8BD8
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7B70
 * Size:	00005C
 */
void efx::createSimpleWalksmoke(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x2E8
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D568

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF208
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7BCC
 * Size:	00008C
 */
void efx::createSimpleGlow2(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r5, 0x804C
      lis       r4, 0x804B
      stw       r0, 0x34(r1)
      subi      r0, r4, 0x5808
      li        r6, 0
      li        r7, 0x160
      lis       r4, 0x804E
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x6A64
      addi      r5, r5, 0x1520
      stw       r0, 0x18(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      li        r4, 0x15F
      sth       r7, 0x1E(r1)
      sth       r4, 0x1C(r1)
      addi      r4, r1, 0x8
      stw       r6, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r5, 0x18(r1)
      stw       r0, 0x8(r1)
      lfs       f0, 0x0(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x18
      stfs      f0, 0x14(r1)
      bl        -0x8C30
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7C58
 * Size:	000080
 */
void efx::createSimpleStoneAttack(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r5, 0x804B
      lis       r4, 0x804E
      stw       r0, 0x34(r1)
      subi      r0, r5, 0x5808
      lis       r5, 0x804E
      li        r7, 0x1AF
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x6A78
      li        r6, 0
      lis       r4, 0x804B
      stw       r0, 0x18(r1)
      subi      r0, r4, 0x5814
      addi      r5, r5, 0x71A0
      addi      r4, r1, 0x8
      sth       r7, 0x1C(r1)
      stw       r6, 0x20(r1)
      stw       r5, 0x18(r1)
      stw       r0, 0x8(r1)
      lfs       f0, 0x0(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x8(r3)
      addi      r3, r1, 0x18
      stfs      f0, 0x14(r1)
      bl        -0x8D40
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7CD8
 * Size:	00005C
 */
void efx::createSimpleDig(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x2FC
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D6D0

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF114
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7D34
 * Size:	00005C
 */
void efx::createSimpleGate3Attack(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x302
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D72C

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF1A0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7D90
 * Size:	00005C
 */
void efx::createSimpleWalkwater(Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x308
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D788

    .loc_0x3C:
      lwz       r3, -0x65B0(r13)
      mr        r4, r31
      bl        0xF1B8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7DEC
 * Size:	000038
 */
void init__Q23efx11TNaviEffectFP10Vector3<float> PA4_fP10Vector3<float>
Q33efx11TNaviEffect12enumNaviType(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r4, 0x8(r3)
      mr        r4, r7
      stw       r5, 0x10(r3)
      stw       r6, 0xC(r3)
      stw       r0, 0x18(r3)
      bl        .loc_0x38
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x38:
    */
}

/*
 * --INFO--
 * Address:	803B7E24
 * Size:	0000D8
 */
void efx::TNaviEffect::setNaviType((efx::TNaviEffect::enumNaviType))
{
    /*
    .loc_0x0:
      cmpwi     r4, 0x2
      beq-      .loc_0x80
      bge-      .loc_0x1C
      cmpwi     r4, 0
      beq-      .loc_0x28
      bge-      .loc_0x54
      blr

    .loc_0x1C:
      cmpwi     r4, 0x4
      bgelr-
      b         .loc_0xAC

    .loc_0x28:
      li        r0, 0x10
      cmpwi     r0, 0
      stw       r0, 0xE4(r3)
      li        r4, 0x19
      li        r0, 0
      lfs       f0, -0x7BF8(r13)
      stfs      f0, 0x338(r3)
      sth       r4, 0xBC(r3)
      stw       r0, 0x368(r3)
      stw       r0, 0x398(r3)
      blr

    .loc_0x54:
      li        r0, 0x10
      cmpwi     r0, 0
      stw       r0, 0xE4(r3)
      li        r4, 0x19
      li        r0, 0x1
      lfs       f0, -0x7BF8(r13)
      stfs      f0, 0x338(r3)
      sth       r4, 0xBC(r3)
      stw       r0, 0x368(r3)
      stw       r0, 0x398(r3)
      blr

    .loc_0x80:
      li        r0, 0x10
      cmpwi     r0, 0
      stw       r0, 0xE4(r3)
      li        r4, 0x1B
      li        r0, 0
      lfs       f0, -0x7BF8(r13)
      stfs      f0, 0x338(r3)
      sth       r4, 0xBC(r3)
      stw       r0, 0x368(r3)
      stw       r0, 0x398(r3)
      blr

    .loc_0xAC:
      li        r0, 0x10
      cmpwi     r0, 0
      stw       r0, 0xE4(r3)
      li        r4, 0x1A
      li        r0, 0x1
      lfs       f0, -0x7BF8(r13)
      stfs      f0, 0x338(r3)
      sth       r4, 0xBC(r3)
      stw       r0, 0x368(r3)
      stw       r0, 0x398(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B7EFC
 * Size:	000020
 */
void efx::TNaviEffect::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        .loc_0x20
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x20:
    */
}

/*
 * --INFO--
 * Address:	803B7F1C
 * Size:	0000D8
 */
void efx::TNaviEffect::updateHamon_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x18(r3)
      cmplwi    r0, 0
      beq-      .loc_0xBC
      lwz       r4, 0x8(r31)
      cmplwi    r4, 0
      beq-      .loc_0xBC
      lwz       r0, 0x0(r31)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xBC
      lfs       f0, 0x0(r4)
      stfs      f0, 0x1C(r31)
      lwz       r4, 0x18(r31)
      lfs       f0, 0x0(r4)
      stfs      f0, 0x20(r31)
      lwz       r4, 0x8(r31)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x24(r31)
      b         .loc_0x68
      b         .loc_0xBC

    .loc_0x68:
      lwz       r5, 0x18(r31)
      lwz       r4, 0x8(r31)
      lfs       f2, 0x0(r5)
      lfs       f1, 0x4(r4)
      lfs       f0, 0x1354(r2)
      fsubs     f31, f2, f1
      fcmpo     cr0, f31, f0
      bge-      .loc_0x94
      addi      r4, r31, 0x1C
      bl        .loc_0xD8
      b         .loc_0x98

    .loc_0x94:
      bl        0xA4

    .loc_0x98:
      lfs       f0, 0x1358(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0xB4
      mr        r3, r31
      addi      r4, r31, 0x1C
      bl        0xB0
      b         .loc_0xBC

    .loc_0xB4:
      mr        r3, r31
      bl        0x104

    .loc_0xBC:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xD8:
    */
}

/*
 * --INFO--
 * Address:	803B7FF4
 * Size:	000060
 */
void createHamonA___Q23efx11TNaviEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x35F
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38D9EC

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x28
      bl        0xF540
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
 * Address:	803B8054
 * Size:	000024
 */
void efx::TNaviEffect::killHamonA_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x28
      stw       r0, 0x14(r1)
      bl        0xF588
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8078
 * Size:	000060
 */
void createHamonB___Q23efx11TNaviEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x36A
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38DA70

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x44
      bl        0xF55C
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
 * Address:	803B80D8
 * Size:	000024
 */
void efx::TNaviEffect::killHamonB_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x44
      stw       r0, 0x14(r1)
      bl        0xF5A4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B80FC
 * Size:	000078
 */
void efx::TNaviEffect::createLight_((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x376
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38DAF4

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x33C
      bl        -0x7BA0
      addi      r3, r30, 0x33C
      li        r4, 0
      lwz       r12, 0x33C(r30)
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
 * Address:	803B8174
 * Size:	00002C
 */
void efx::TNaviEffect::killLight_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x33C(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803B81A0
 * Size:	000078
 */
void efx::TNaviEffect::createLightAct_((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x383
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38DB98

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x36C
      bl        -0x7C44
      addi      r3, r30, 0x36C
      li        r4, 0
      lwz       r12, 0x36C(r30)
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
 * Address:	803B8218
 * Size:	00002C
 */
void efx::TNaviEffect::killLightAct_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x36C(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803B8244
 * Size:	000064
 */
void createCursor___Q23efx11TNaviEffectF10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      lfs       f3, 0x0(r4)
      stw       r0, 0x24(r1)
      subi      r0, r5, 0x5814
      lfs       f2, 0x4(r4)
      lfs       f0, 0x8(r4)
      lis       r4, 0x804D
      stw       r0, 0x8(r1)
      subi      r0, r4, 0x3D80
      addi      r4, r1, 0x8
      stfs      f3, 0xC(r1)
      stfs      f2, 0x10(r1)
      stfs      f0, 0x14(r1)
      stw       r0, 0x8(r1)
      stfs      f1, 0x18(r1)
      lwzu      r12, 0xAC(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803B82A8
 * Size:	00002C
 */
void efx::TNaviEffect::killCursor_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0xAC(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803B82D4
 * Size:	000284
 */
void updateCursor___Q23efx11TNaviEffectF10Vector3<float> f(void)
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
      stfd      f29, 0xA0(r1)
      psq_st    f29,0xA8(r1),0,0
      stfd      f28, 0x90(r1)
      psq_st    f28,0x98(r1),0,0
      stfd      f27, 0x80(r1)
      psq_st    f27,0x88(r1),0,0
      stfd      f26, 0x70(r1)
      psq_st    f26,0x78(r1),0,0
      stmw      r27, 0x5C(r1)
      lis       r5, 0x804B
      lfs       f3, 0x0(r4)
      subi      r0, r5, 0x5814
      lfs       f2, 0x4(r4)
      lfs       f0, 0x8(r4)
      lis       r4, 0x804D
      stw       r0, 0x14(r1)
      subi      r4, r4, 0x3D80
      addic.    r0, r1, 0x14
      mr        r28, r3
      stfs      f3, 0x18(r1)
      stfs      f2, 0x1C(r1)
      stfs      f0, 0x20(r1)
      stw       r4, 0x14(r1)
      stfs      f1, 0x24(r1)
      bne-      .loc_0x9C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x1E0
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38DD2C

    .loc_0x9C:
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      stfs      f1, 0x328(r28)
      lfs       f1, 0x20(r1)
      stfs      f0, 0x32C(r28)
      lfs       f0, 0x1310(r2)
      stfs      f1, 0x330(r28)
      lfs       f26, 0x24(r1)
      lfs       f2, 0x334(r28)
      lfs       f1, 0x338(r28)
      fsubs     f1, f2, f1
      stfs      f1, 0x334(r28)
      lfs       f1, 0x334(r28)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xE4
      lfs       f0, 0x1320(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x334(r28)

    .loc_0xE4:
      lis       r3, 0x8050
      lfs       f27, 0x1324(r2)
      lfs       f28, 0x1328(r2)
      addi      r29, r28, 0xAC
      lfd       f29, 0x1338(r2)
      addi      r27, r3, 0x71A0
      lfs       f30, 0x1310(r2)
      li        r30, 0
      lfs       f31, 0x132C(r2)
      lis       r31, 0x4330
      b         .loc_0x234

    .loc_0x110:
      xoris     r3, r30, 0x8000
      xoris     r0, r0, 0x8000
      stw       r3, 0x2C(r1)
      lfs       f2, 0x334(r28)
      stw       r31, 0x28(r1)
      lfd       f0, 0x28(r1)
      stw       r0, 0x34(r1)
      fsubs     f0, f0, f29
      stw       r31, 0x30(r1)
      fmuls     f1, f28, f0
      lfd       f0, 0x30(r1)
      fsubs     f0, f0, f29
      fmuls     f1, f27, f1
      fdivs     f0, f1, f0
      fadds     f2, f2, f0
      fmr       f0, f2
      fcmpo     cr0, f2, f30
      bge-      .loc_0x15C
      fneg      f0, f2

    .loc_0x15C:
      fmuls     f1, f0, f31
      lfs       f0, 0x328(r28)
      fcmpo     cr0, f2, f30
      fctiwz    f1, f1
      stfd      f1, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r27, r0
      lfs       f1, 0x4(r3)
      fmadds    f0, f26, f1, f0
      stfs      f0, 0x8(r1)
      bge-      .loc_0x1B8
      lfs       f0, 0x1330(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0x1D8

    .loc_0x1B8:
      fmuls     f0, f2, f31
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r0, 0x4C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0x1D8:
      lfs       f0, 0x330(r28)
      lwz       r3, -0x6CF8(r13)
      fmadds    f0, f26, f1, f0
      cmplwi    r3, 0
      stfs      f0, 0x10(r1)
      beq-      .loc_0x20C
      lwz       r12, 0x4(r3)
      addi      r4, r1, 0x8
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0xC(r1)
      b         .loc_0x214

    .loc_0x20C:
      lfs       f0, 0x32C(r28)
      stfs      f0, 0xC(r1)

    .loc_0x214:
      lfs       f0, 0x8(r1)
      addi      r30, r30, 0x1
      stfs      f0, 0x54(r29)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x58(r29)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x5C(r29)
      addi      r29, r29, 0x24

    .loc_0x234:
      lwz       r0, 0xE4(r28)
      cmpw      r30, r0
      blt+      .loc_0x110
      psq_l     f31,0xC8(r1),0,0
      lfd       f31, 0xC0(r1)
      psq_l     f30,0xB8(r1),0,0
      lfd       f30, 0xB0(r1)
      psq_l     f29,0xA8(r1),0,0
      lfd       f29, 0xA0(r1)
      psq_l     f28,0x98(r1),0,0
      lfd       f28, 0x90(r1)
      psq_l     f27,0x88(r1),0,0
      lfd       f27, 0x80(r1)
      psq_l     f26,0x78(r1),0,0
      lfd       f26, 0x70(r1)
      lmw       r27, 0x5C(r1)
      lwz       r0, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8558
 * Size:	0000B4
 */
void createFueact___Q23efx11TNaviEffectFPA4_fP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr.       r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x3A2
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38DF58

    .loc_0x44:
      cmplwi    r31, 0
      bne-      .loc_0x68
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x3A3
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38DF7C

    .loc_0x68:
      stw       r30, 0x70(r29)
      addi      r3, r29, 0x60
      li        r4, 0
      stw       r31, 0x74(r29)
      stw       r30, 0x8C(r29)
      stw       r31, 0x90(r29)
      stw       r30, 0xA4(r29)
      stw       r31, 0xA8(r29)
      lwz       r12, 0x60(r29)
      lwz       r12, 0x8(r12)
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
 * Address:	803B860C
 * Size:	00002C
 */
void efx::TNaviEffect::killFueact_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x60(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803B8638
 * Size:	000078
 */
void efx::TNaviEffect::createOrimadamage_((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x3B1
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E030

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x39C
      bl        -0x7D7C
      addi      r3, r30, 0x39C
      li        r4, 0
      lwz       r12, 0x39C(r30)
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
 * Address:	........
 * Size:	00002C
 */
void efx::TNaviEffect::killOrimadamage_(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B86B0
 * Size:	00003C
 */
void efx::TPkEffect::init(void)
{
    /*
    .loc_0x0:
      li        r4, -0x1
      li        r0, 0
      stw       r4, 0x8(r3)
      stw       r0, 0xC(r3)
      stw       r0, 0x10(r3)
      stw       r0, 0x14(r3)
      stw       r0, 0x18(r3)
      stw       r0, 0x1C(r3)
      stw       r0, 0x20(r3)
      stw       r0, 0x24(r3)
      stb       r0, 0x0(r3)
      stb       r0, 0x1(r3)
      stb       r0, 0x2(r3)
      stb       r0, 0x3(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B86EC
 * Size:	000034
 */
void efx::TPkEffect::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        .loc_0x34
      mr        r3, r31
      bl        0x50
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x34:
    */
}

/*
 * --INFO--
 * Address:	803B8720
 * Size:	000038
 */
void efx::TPkEffect::updateMoeSmoke_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0x24(r3)
      cmpwi     r4, 0
      bne-      .loc_0x20
      bl        0x4DC
      b         .loc_0x28

    .loc_0x20:
      subi      r0, r4, 0x1
      stw       r0, 0x24(r3)

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8758
 * Size:	0000D0
 */
void efx::TPkEffect::updateHamon_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r5, 0x20(r3)
      cmplwi    r5, 0
      beq-      .loc_0xB4
      lwz       r4, 0x10(r31)
      cmplwi    r4, 0
      beq-      .loc_0xB4
      lwz       r0, 0x0(r31)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0xB4
      lfs       f2, 0x8(r4)
      lfs       f1, 0x0(r5)
      lfs       f0, 0x0(r4)
      stfs      f0, 0x28(r31)
      stfs      f1, 0x2C(r31)
      stfs      f2, 0x30(r31)
      b         .loc_0x60
      b         .loc_0xB4

    .loc_0x60:
      lwz       r5, 0x20(r31)
      lwz       r4, 0x10(r31)
      lfs       f2, 0x0(r5)
      lfs       f1, 0x4(r4)
      lfs       f0, 0x1354(r2)
      fsubs     f31, f2, f1
      fcmpo     cr0, f31, f0
      bge-      .loc_0x8C
      addi      r4, r31, 0x28
      bl        0x57C
      b         .loc_0x90

    .loc_0x8C:
      bl        0x5D4

    .loc_0x90:
      lfs       f0, 0x1358(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0xAC
      mr        r3, r31
      addi      r4, r31, 0x28
      bl        0x5E0
      b         .loc_0xB4

    .loc_0xAC:
      mr        r3, r31
      bl        0x634

    .loc_0xB4:
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
 * Address:	803B8828
 * Size:	000064
 */
void createKourin___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x3FB
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E220

    .loc_0x3C:
      lwz       r5, 0x8(r30)
      mr        r4, r31
      addi      r3, r30, 0x70
      bl        0xE7E4
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
 * Address:	803B888C
 * Size:	000024
 */
void efx::TPkEffect::killKourin_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x70
      stw       r0, 0x14(r1)
      bl        0xE8E0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B88B0
 * Size:	000060
 */
void createDoping___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x409
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E2A8

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x90
      bl        0xE940
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
 * Address:	803B8910
 * Size:	000024
 */
void efx::TPkEffect::killDoping_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x90
      stw       r0, 0x14(r1)
      bl        0xE97C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8934
 * Size:	0000F8
 */
void createNage___Q23efx9TPkEffectFP10Vector3<float> PA4_f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      mr        r30, r5
      stw       r29, 0x24(r1)
      mr.       r29, r4
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x416
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E334

    .loc_0x44:
      mr        r4, r29
      addi      r3, r31, 0xAC
      bl        0xE948
      cmplwi    r30, 0
      bne-      .loc_0x74
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x419
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E364

    .loc_0x74:
      lis       r3, 0x8051
      lwz       r6, 0x8(r31)
      addi      r4, r3, 0x41E4
      lis       r3, 0x804B
      lfs       f0, 0x0(r4)
      subi      r5, r3, 0x5814
      lfs       f1, 0x4(r4)
      lfs       f2, 0x8(r4)
      lis       r3, 0x804B
      stfs      f0, 0xC(r1)
      addi      r0, r3, 0x2680
      addi      r3, r31, 0x34
      addi      r4, r1, 0x8
      stw       r5, 0x8(r1)
      stfs      f1, 0x10(r1)
      stfs      f2, 0x14(r1)
      stw       r0, 0x8(r1)
      sth       r6, 0x18(r1)
      stfs      f0, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f2, 0x14(r1)
      stw       r30, 0x44(r31)
      lwz       r12, 0x34(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x34(r1)
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
 * Address:	803B8A2C
 * Size:	000044
 */
void efx::TPkEffect::killNage_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0xAC
      bl        0xE8EC
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
 * Address:	803B8A70
 * Size:	00007C
 */
void createMoe___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x42A
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E468

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0xC8
      bl        0xE8A8
      stw       r31, 0x58(r30)
      addi      r3, r30, 0x48
      li        r4, 0
      lwz       r12, 0x48(r30)
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
 * Address:	803B8AEC
 * Size:	000044
 */
void efx::TPkEffect::killMoe_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0xC8
      bl        0xE8D4
      addi      r3, r31, 0x48
      lwz       r12, 0x48(r31)
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
 * Address:	803B8B30
 * Size:	000060
 */
void createChudoku___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x43B
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E528

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x100
      bl        0xE8AC
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
 * Address:	803B8B90
 * Size:	000024
 */
void efx::TPkEffect::killChudoku_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x100
      stw       r0, 0x14(r1)
      bl        0xE8E8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8BB4
 * Size:	000060
 */
void createMoeSmoke___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x449
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E5AC

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x18C
      bl        0xEAC0
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
 * Address:	803B8C14
 * Size:	000024
 */
void efx::TPkEffect::killMoeSmoke_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x18C
      stw       r0, 0x14(r1)
      bl        0xEAFC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8C38
 * Size:	000070
 */
void createBlackDown___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x457
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E630

    .loc_0x3C:
      stw       r31, 0x6C(r30)
      addi      r3, r30, 0x5C
      li        r4, 0
      lwz       r12, 0x5C(r30)
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
 * Address:	803B8CA8
 * Size:	00002C
 */
void efx::TPkEffect::killBlackDown_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x5C(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803B8CD4
 * Size:	000060
 */
void createWater___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x465
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E6CC

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x11C
      bl        0xE79C
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
 * Address:	803B8D34
 * Size:	000024
 */
void efx::TPkEffect::killWater_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x11C
      stw       r0, 0x14(r1)
      bl        0xE7EC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8D58
 * Size:	000060
 */
void createHamonA___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x471
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E750

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x154
      bl        0xE7DC
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
 * Address:	803B8DB8
 * Size:	000024
 */
void efx::TPkEffect::killHamonA_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x154
      stw       r0, 0x14(r1)
      bl        0xE824
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8DDC
 * Size:	000060
 */
void createHamonB___Q23efx9TPkEffectFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x47C
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E7D4

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x170
      bl        0xE7F8
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
 * Address:	803B8E3C
 * Size:	000024
 */
void efx::TPkEffect::killHamonB_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x170
      stw       r0, 0x14(r1)
      bl        0xE840
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8E60
 * Size:	000020
 */
void efx::TPkEffectTane::init(void)
{
    /*
    .loc_0x0:
      li        r4, -0x1
      li        r0, 0
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0xC(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8E80
 * Size:	000060
 */
void createTanekira___Q23efx13TPkEffectTaneFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x496
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E878

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r30, 0x28
      bl        0xE888
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
 * Address:	803B8EE0
 * Size:	000024
 */
void efx::TPkEffectTane::killTanekira_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x28
      stw       r0, 0x14(r1)
      bl        0xE8C4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8F04
 * Size:	000064
 */
void createKourin___Q23efx13TPkEffectTaneFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x4A5
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E8FC

    .loc_0x3C:
      lwz       r5, 0x0(r30)
      mr        r4, r31
      addi      r3, r30, 0x44
      bl        0xE108
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
 * Address:	803B8F68
 * Size:	000024
 */
void efx::TPkEffectTane::killKourin_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x44
      stw       r0, 0x14(r1)
      bl        0xE204
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B8F8C
 * Size:	000070
 */
void createGlow1___Q23efx13TPkEffectTaneFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5A28
      li        r4, 0x4B2
      addi      r5, r5, 0x5A38
      crclr     6, 0x6
      bl        -0x38E984

    .loc_0x3C:
      stw       r31, 0x24(r30)
      addi      r3, r30, 0x14
      li        r4, 0
      lwz       r12, 0x14(r30)
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
 * Address:	........
 * Size:	00002C
 */
void efx::TPkEffectTane::killGlow1_(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B8FFC
 * Size:	000004
 */
void efx::TFueactCircle::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803B9000
 * Size:	00002C
 */
void efx::TCursor::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4(r3)
      lwz       r12, 0xC(r12)
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
 * Address:	........
 * Size:	000104
 */
void efx::TTestYodareGen::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void efx::TTestYodareGen::forceKill(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void efx::TTestYodareGen::fade(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void efx::TTestYodareHit::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void efx::TParticleCallBack_Yodare::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void @4 @efx::TTestYodareHit::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void @4 @efx::TTestYodareGen::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B902C
 * Size:	000008
 */
void @4 @efx::TPkNageBlur::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2713BC
    */
}

/*
 * --INFO--
 * Address:	803B9034
 * Size:	000008
 */
void @4 @efx::TFueactCircle::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x3C
    */
}

/*
 * --INFO--
 * Address:	803B903C
 * Size:	000008
 */
void @4 @efx::TFueactCircle::execute((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2140
    */
}

/*
 * --INFO--
 * Address:	803B9044
 * Size:	000008
 */
void @4 @efx::TFueactCircle::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2790CC
    */
}

/*
 * --INFO--
 * Address:	803B904C
 * Size:	000008
 */
void @8 @efx::TFueactCircle::execute((JPABaseEmitter*, JPABaseParticle*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x8
      b         -0x202C
    */
}

/*
 * --INFO--
 * Address:	803B9054
 * Size:	000008
 */
void @8 @efx::TFueactCircle::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x8
      b         -0x2790DC
    */
}

/*
 * --INFO--
 * Address:	803B905C
 * Size:	000008
 */
void @4 @efx::TFueactBiriBase::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x279168
    */
}
