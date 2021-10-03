

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
 * Address:	804473BC
 * Size:	000030
 */
void TinyPikmin::TinyPikmin()
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f1, 0x2640(r2)
      stw       r0, 0x0(r3)
      lfs       f0, 0x2644(r2)
      stw       r0, 0x4(r3)
      stfs      f1, 0x8(r3)
      stfs      f1, 0xC(r3)
      stfs      f1, 0x14(r3)
      stfs      f0, 0x18(r3)
      stfs      f1, 0x20(r3)
      stfs      f0, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void TinyPikmin::init(int, float, float, float)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void TinyPikmin::wind(float)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TinyPikmin::appear()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void TinyPikmin::disappear()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804473EC
 * Size:	0004B8
 */
void TinyPikmin::update()
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r31, r3
      lwz       r0, 0x0(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x374
      bge-      .loc_0x48
      cmpwi     r0, 0
      beq-      .loc_0x460
      bge-      .loc_0x58
      b         .loc_0x460

    .loc_0x48:
      cmpwi     r0, 0x4
      beq-      .loc_0x3C0
      bge-      .loc_0x460
      b         .loc_0xC8

    .loc_0x58:
      lfs       f1, 0x20(r31)
      lfs       f0, 0x24(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB4
      lfs       f0, 0x2640(r2)
      li        r0, 0x3
      stfs      f0, 0x20(r31)
      stw       r0, 0x0(r31)
      bl        -0x37DEC4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x264C(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x267C(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x2678(r2)
      fdivs     f2, f3, f2
      fnmadds   f0, f1, f2, f0
      stfs      f0, 0x2C(r31)
      b         .loc_0x460

    .loc_0xB4:
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x20(r31)
      b         .loc_0x460

    .loc_0xC8:
      lfs       f2, 0x2C(r31)
      lfs       f0, 0x2680(r2)
      lfs       f1, 0x2640(r2)
      fadds     f0, f2, f0
      stfs      f0, 0x2C(r31)
      lfs       f2, 0x14(r31)
      lfs       f0, 0x2C(r31)
      fadds     f0, f2, f0
      stfs      f0, 0x14(r31)
      lfs       f2, 0x2C(r31)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x460
      lfs       f0, 0x14(r31)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x460
      lwz       r3, -0x63E4(r13)
      lbz       r0, 0x9(r3)
      cmplwi    r0, 0
      beq-      .loc_0x254
      lwz       r0, 0x4(r31)
      cmpwi     r0, 0x4
      bne-      .loc_0x254
      lfs       f0, 0x2668(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x254
      li        r28, 0
      li        r29, 0
      b         .loc_0x23C

    .loc_0x138:
      cmplw     r28, r0
      lwz       r3, -0x63E4(r13)
      bge-      .loc_0x150
      lwz       r0, 0x0(r3)
      add       r30, r0, r29
      b         .loc_0x154

    .loc_0x150:
      li        r30, 0

    .loc_0x154:
      cmplw     r30, r31
      beq-      .loc_0x234
      lfs       f1, 0xC(r30)
      lfs       f0, 0xC(r31)
      lfs       f4, 0x8(r30)
      fsubs     f2, f1, f0
      lfs       f3, 0x8(r31)
      lfs       f0, 0x2640(r2)
      fsubs     f1, f4, f3
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x198
      ble-      .loc_0x19C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x19C

    .loc_0x198:
      fmr       f1, f0

    .loc_0x19C:
      lfs       f0, 0x2684(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x234
      fdivs     f0, f1, f0
      lfs       f2, 0x2644(r2)
      lfs       f1, 0x266C(r2)
      fsubs     f0, f2, f0
      fcmpo     cr0, f4, f3
      fmuls     f1, f1, f0
      bge-      .loc_0x1C8
      lfs       f2, 0x2688(r2)

    .loc_0x1C8:
      lwz       r0, 0x0(r30)
      fmuls     f1, f1, f2
      cmpwi     r0, 0
      beq-      .loc_0x234
      cmpwi     r0, 0x1
      beq-      .loc_0x234
      li        r0, 0x4
      stw       r0, 0x0(r30)
      lfs       f0, 0x28(r30)
      fadds     f0, f0, f1
      stfs      f0, 0x28(r30)
      bl        -0x37E040
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f2, 0x2660(r2)
      stw       r0, 0x8(r1)
      lfs       f3, 0x264C(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x266C(r2)
      fsubs     f4, f0, f2
      lfs       f0, 0x2668(r2)
      lfs       f2, 0x2C(r30)
      fdivs     f3, f4, f3
      fmadds    f0, f1, f3, f0
      fsubs     f0, f2, f0
      stfs      f0, 0x2C(r30)

    .loc_0x234:
      addi      r29, r29, 0x34
      addi      r28, r28, 0x1

    .loc_0x23C:
      lwz       r0, -0x7970(r13)
      cmplw     r28, r0
      blt+      .loc_0x138
      lfs       f0, 0x268C(r2)
      lwz       r3, -0x63E8(r13)
      stfs      f0, 0xE4(r3)

    .loc_0x254:
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x2C(r31)
      stfs      f0, 0x14(r31)
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x20(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x20(r31)
      lwz       r3, -0x63E4(r13)
      lbz       r0, 0x8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2D0
      lfs       f1, 0x20(r31)
      lfs       f0, 0x2644(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2D0
      li        r0, 0x2
      stw       r0, 0x0(r31)
      bl        -0x37E0E8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x8(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, 0x2690(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmadds    f0, f0, f1, f0
      stfs      f0, 0x2C(r31)

    .loc_0x2D0:
      bl        -0x37E11C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x8(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, 0x2694(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x460
      lwz       r0, 0x4(r31)
      cmpwi     r0, 0x4
      beq-      .loc_0x328
      bge-      .loc_0x330
      cmpwi     r0, 0x3
      bge-      .loc_0x320
      b         .loc_0x330

    .loc_0x320:
      lfs       f31, 0x2650(r2)
      b         .loc_0x334

    .loc_0x328:
      lfs       f31, 0x2698(r2)
      b         .loc_0x334

    .loc_0x330:
      lfs       f31, 0x2644(r2)

    .loc_0x334:
      bl        -0x37E180
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x264C(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x2690(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x2688(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      fmuls     f0, f31, f0
      stfs      f0, 0x2C(r31)
      b         .loc_0x460

    .loc_0x374:
      lfs       f1, 0x14(r31)
      lfs       f0, 0x2648(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x39C
      stfs      f0, 0x14(r31)
      li        r0, 0
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x2C(r31)
      stw       r0, 0x0(r31)
      b         .loc_0x460

    .loc_0x39C:
      lfs       f1, 0x2C(r31)
      lfs       f0, 0x2680(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x2C(r31)
      lfs       f1, 0x14(r31)
      lfs       f0, 0x2C(r31)
      fadds     f0, f1, f0
      stfs      f0, 0x14(r31)
      b         .loc_0x460

    .loc_0x3C0:
      lfs       f2, 0x28(r31)
      lfs       f0, 0x269C(r2)
      lfs       f1, 0x2680(r2)
      fmuls     f2, f2, f0
      lfs       f3, 0x26A0(r2)
      lfs       f0, 0x26A4(r2)
      stfs      f2, 0x28(r31)
      lfs       f2, 0x2C(r31)
      fadds     f1, f2, f1
      stfs      f1, 0x2C(r31)
      lfs       f2, 0x10(r31)
      lfs       f1, 0x28(r31)
      fadds     f1, f2, f1
      stfs      f1, 0x10(r31)
      lfs       f2, 0x14(r31)
      lfs       f1, 0x2C(r31)
      fadds     f1, f2, f1
      stfs      f1, 0x14(r31)
      lfs       f2, 0x28(r31)
      lfs       f1, 0x30(r31)
      fnmsubs   f1, f3, f2, f1
      stfs      f1, 0x30(r31)
      lfs       f1, 0x30(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x42C
      fsubs     f0, f1, f0
      stfs      f0, 0x30(r31)

    .loc_0x42C:
      lfs       f1, 0x30(r31)
      lfs       f0, 0x2640(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x448
      lfs       f0, 0x26A4(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x30(r31)

    .loc_0x448:
      lfs       f1, 0x14(r31)
      lfs       f0, 0x26A8(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x460
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x460:
      lwz       r3, -0x6514(r13)
      lfs       f3, 0x1C(r31)
      lfs       f2, 0x54(r3)
      lfs       f1, 0x18(r31)
      lfs       f0, 0x2644(r2)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x18(r31)
      lfs       f1, 0x18(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x490
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x18(r31)

    .loc_0x490:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void TinyPikmin::draw()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void TinyPikmin::drawPikmin(float, float, float, float)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
void TinyPikminMgr::TinyPikminMgr()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void TinyPikminMgr::loadResource(JKRArchive*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804478A4
 * Size:	0004C8
 */
void TinyPikminMgr::init()
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
      stfd      f27, 0x90(r1)
      psq_st    f27,0x98(r1),0,0
      stfd      f26, 0x80(r1)
      psq_st    f26,0x88(r1),0,0
      stfd      f25, 0x70(r1)
      psq_st    f25,0x78(r1),0,0
      stfd      f24, 0x60(r1)
      psq_st    f24,0x68(r1),0,0
      stmw      r23, 0x3C(r1)
      lwz       r5, -0x7970(r13)
      lis       r0, 0x4330
      mr        r25, r3
      stw       r0, 0x8(r1)
      lfd       f3, 0x26E0(r2)
      rlwinm    r3,r5,2,0,29
      stw       r5, 0xC(r1)
      li        r4, -0x20
      lfs       f4, 0x2658(r2)
      lfd       f0, 0x8(r1)
      stw       r5, 0x14(r1)
      fsubs     f2, f0, f3
      lfs       f1, 0x26D0(r2)
      stw       r0, 0x10(r1)
      lfd       f0, 0x10(r1)
      fdivs     f30, f4, f2
      fsubs     f0, f0, f3
      fdivs     f31, f1, f0
      bl        -0x423944
      mr        r29, r3
      lfd       f28, 0x2660(r2)
      lfs       f27, 0x264C(r2)
      mr        r23, r29
      lfs       f26, 0x26A0(r2)
      li        r26, 0
      lfs       f25, 0x2698(r2)
      lis       r24, 0x4330
      b         .loc_0x10C

    .loc_0xC0:
      bl        -0x37E3C4
      xoris     r3, r3, 0x8000
      xoris     r0, r26, 0x8000
      stw       r3, 0x14(r1)
      addi      r26, r26, 0x1
      stw       r24, 0x10(r1)
      lfd       f0, 0x10(r1)
      stw       r0, 0xC(r1)
      fsubs     f0, f0, f28
      stw       r24, 0x8(r1)
      fdivs     f0, f0, f27
      lfd       f1, 0x8(r1)
      fsubs     f0, f0, f25
      fsubs     f1, f1, f28
      fmuls     f0, f31, f0
      fmuls     f0, f26, f0
      fmadds    f0, f31, f1, f0
      stfs      f0, 0x0(r23)
      addi      r23, r23, 0x4

    .loc_0x10C:
      lwz       r0, -0x7970(r13)
      cmplw     r26, r0
      blt+      .loc_0xC0
      lfd       f27, 0x2660(r2)
      li        r23, 0
      lfs       f26, 0x264C(r2)
      lis       r24, 0x4330
      lfd       f25, 0x26E0(r2)
      b         .loc_0x1CC

    .loc_0x130:
      bl        -0x37E434
      xoris     r3, r3, 0x8000
      lwz       r0, -0x7970(r13)
      stw       r3, 0x14(r1)
      stw       r24, 0x10(r1)
      lfd       f0, 0x10(r1)
      stw       r0, 0xC(r1)
      fsubs     f0, f0, f27
      stw       r24, 0x8(r1)
      fdivs     f1, f0, f26
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f25
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r26, 0x1C(r1)
      bl        -0x37E474
      xoris     r3, r3, 0x8000
      lwz       r0, -0x7970(r13)
      stw       r3, 0x24(r1)
      rlwinm    r3,r26,2,0,29
      lfsx      f2, r29, r3
      addi      r23, r23, 0x1
      stw       r24, 0x20(r1)
      lfd       f0, 0x20(r1)
      stw       r0, 0x2C(r1)
      fsubs     f0, f0, f27
      stw       r24, 0x28(r1)
      fdivs     f1, f0, f26
      lfd       f0, 0x28(r1)
      fsubs     f0, f0, f25
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,2,0,29
      lfsx      f0, r29, r0
      stfsx     f0, r29, r3
      stfsx     f2, r29, r0

    .loc_0x1CC:
      lwz       r0, -0x7970(r13)
      cmplw     r23, r0
      blt+      .loc_0x130
      li        r28, 0x1
      li        r27, 0
      bl        -0x37E4E4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x30(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, 0x26A0(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x254
      li        r27, 0x1
      bl        -0x37E51C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x30(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, 0x2674(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r28, 0x2C(r1)

    .loc_0x254:
      lfs       f1, 0x2698(r2)
      mr        r31, r29
      lfs       f0, 0x26D4(r2)
      li        r26, 0
      lfs       f25, 0x26D8(r2)
      li        r30, 0
      fmadds    f31, f1, f31, f0
      lfs       f26, 0x2640(r2)
      lfs       f27, 0x2648(r2)
      lis       r24, 0x4330
      lfd       f28, 0x2660(r2)
      lfs       f29, 0x264C(r2)
      b         .loc_0x460

    .loc_0x288:
      lbz       r0, 0x9(r25)
      cmplwi    r0, 0
      beq-      .loc_0x2F0
      subi      r0, r3, 0x1
      cmplw     r26, r0
      bne-      .loc_0x2A8
      li        r28, 0x4
      b         .loc_0x334

    .loc_0x2A8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x334
      bl        -0x37E5B4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x30(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, 0x2670(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r28, 0x2C(r1)
      b         .loc_0x334

    .loc_0x2F0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x334
      bl        -0x37E5FC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x30(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, 0x2674(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r28, 0x2C(r1)

    .loc_0x334:
      cmpwi     r26, 0
      bne-      .loc_0x344
      lfs       f24, 0x2640(r2)
      b         .loc_0x388

    .loc_0x344:
      bl        -0x37E648
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x34(r1)
      xoris     r0, r26, 0x8000
      lfd       f2, 0x2660(r2)
      stw       r4, 0x30(r1)
      lfs       f0, 0x264C(r2)
      lfd       f1, 0x30(r1)
      stw       r0, 0x2C(r1)
      fsubs     f1, f1, f2
      stw       r4, 0x28(r1)
      fdivs     f3, f1, f0
      lfd       f0, 0x28(r1)
      fsubs     f1, f0, f2
      fmuls     f0, f30, f3
      fmadds    f24, f1, f30, f0

    .loc_0x388:
      lwz       r3, 0x0(r25)
      li        r0, 0
      lfs       f0, 0x0(r31)
      add       r23, r3, r30
      stw       r0, 0x0(r23)
      fadds     f0, f31, f0
      stw       r28, 0x4(r23)
      stfs      f0, 0x8(r23)
      stfs      f25, 0xC(r23)
      stfs      f26, 0x10(r23)
      stfs      f27, 0x14(r23)
      bl        -0x37E6B8
      xoris     r0, r3, 0x8000
      stw       r24, 0x30(r1)
      stw       r0, 0x34(r1)
      lfd       f0, 0x30(r1)
      fsubs     f0, f0, f28
      fdivs     f0, f0, f29
      stfs      f0, 0x18(r23)
      stfs      f26, 0x20(r23)
      stfs      f24, 0x24(r23)
      stfs      f26, 0x28(r23)
      stfs      f26, 0x2C(r23)
      stfs      f26, 0x30(r23)
      lwz       r0, 0x4(r23)
      cmpwi     r0, 0x4
      beq-      .loc_0x410
      bge-      .loc_0x434
      cmpwi     r0, 0x3
      bge-      .loc_0x404
      b         .loc_0x434

    .loc_0x404:
      lfs       f0, 0x2650(r2)
      stfs      f0, 0x1C(r23)
      b         .loc_0x43C

    .loc_0x410:
      lfs       f0, 0x2644(r2)
      stfs      f0, 0x1C(r23)
      lwz       r3, -0x63E4(r13)
      lbz       r0, 0x9(r3)
      cmplwi    r0, 0
      beq-      .loc_0x43C
      lfs       f0, 0x2654(r2)
      stfs      f0, 0x14(r23)
      b         .loc_0x43C

    .loc_0x434:
      lfs       f0, 0x2658(r2)
      stfs      f0, 0x1C(r23)

    .loc_0x43C:
      lwz       r3, -0x63E4(r13)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x454
      lfs       f0, 0x2654(r2)
      stfs      f0, 0x14(r23)

    .loc_0x454:
      addi      r31, r31, 0x4
      addi      r30, r30, 0x34
      addi      r26, r26, 0x1

    .loc_0x460:
      lwz       r3, -0x7970(r13)
      cmplw     r26, r3
      blt+      .loc_0x288
      mr        r3, r29
      bl        -0x423C3C
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      psq_l     f29,0xB8(r1),0,0
      lfd       f29, 0xB0(r1)
      psq_l     f28,0xA8(r1),0,0
      lfd       f28, 0xA0(r1)
      psq_l     f27,0x98(r1),0,0
      lfd       f27, 0x90(r1)
      psq_l     f26,0x88(r1),0,0
      lfd       f26, 0x80(r1)
      psq_l     f25,0x78(r1),0,0
      lfd       f25, 0x70(r1)
      psq_l     f24,0x68(r1),0,0
      lfd       f24, 0x60(r1)
      lmw       r23, 0x3C(r1)
      lwz       r0, 0xE4(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TinyPikminMgr::update()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void TinyPikminMgr::draw()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TinyPikminMgr::appear()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void TinyPikminMgr::disappear()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80447D6C
 * Size:	000348
 */
void BootSection::BootSection(JKRHeap*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r5, 0x804A
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      subi      r30, r5, 0x50F8
      stw       r29, 0x34(r1)
      mr        r29, r3
      bl        -0x2E31A0
      lis       r3, 0x804F
      li        r4, -0x1
      subi      r0, r3, 0x2EC0
      lfs       f0, 0x2640(r2)
      stw       r0, 0x0(r29)
      li        r0, 0
      addi      r3, r29, 0x64
      stw       r4, 0x48(r29)
      stw       r4, 0x4C(r29)
      stfs      f0, 0x50(r29)
      stw       r0, 0x5C(r29)
      bl        -0x235A8
      li        r0, 0
      lfs       f0, 0x2640(r2)
      stw       r0, 0xD4(r29)
      li        r3, 0x1C
      stw       r0, 0xD8(r29)
      stb       r0, 0xDC(r29)
      stb       r0, 0xDD(r29)
      stfs      f0, 0xE4(r29)
      stw       r29, -0x63E8(r13)
      bl        -0x423F44
      mr.       r4, r3
      beq-      .loc_0x94
      mr        r4, r29
      bl        -0x2E2E20
      mr        r4, r3

    .loc_0x94:
      addi      r0, r30, 0xA8
      mr        r3, r29
      stw       r0, 0x14(r4)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x48(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x1C(r29)
      li        r3, 0
      li        r5, 0x2
      li        r6, 0
      bl        -0x3BE304
      mr        r4, r3
      mr        r3, r29
      li        r5, 0x1
      bl        -0x2E3068
      lwz       r3, -0x6514(r13)
      li        r4, 0x1
      bl        -0x2491C
      li        r3, 0x14
      bl        -0x423FAC
      cmplwi    r3, 0
      beq-      .loc_0x138
      lis       r4, 0x804F
      lis       r5, 0x804B
      subi      r8, r4, 0x2FFC
      lis       r4, 0x804F
      lwz       r7, 0x0(r8)
      addi      r5, r5, 0xF00
      lwz       r6, 0x4(r8)
      subi      r0, r4, 0x2E70
      lwz       r4, 0x8(r8)
      stw       r7, 0x8(r1)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)
      stw       r29, 0x4(r3)
      stw       r7, 0x8(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0xC(r1)
      stw       r4, 0x10(r1)
      stw       r4, 0x10(r3)

    .loc_0x138:
      stw       r3, 0xD0(r29)
      li        r0, 0
      li        r3, 0xB0
      lwz       r4, -0x7708(r13)
      stb       r0, 0x10C(r4)
      lwz       r4, -0x7708(r13)
      stb       r0, 0x130(r4)
      bl        -0x42401C
      mr.       r0, r3
      beq-      .loc_0x16C
      li        r4, 0
      bl        -0x2307C
      mr        r0, r3

    .loc_0x16C:
      stw       r0, 0xD4(r29)
      li        r3, 0xB0
      bl        -0x42403C
      cmplwi    r3, 0
      beq-      .loc_0x188
      li        r4, 0x1
      bl        -0x2309C

    .loc_0x188:
      lwz       r3, -0x6514(r13)
      lwz       r4, -0x77D4(r13)
      bl        -0x255DC
      lwz       r3, -0x6380(r13)
      li        r4, 0x1
      bl        0xDDA0
      li        r0, 0
      li        r3, 0xC
      stw       r0, -0x65F8(r13)
      bl        -0x424074
      mr.       r31, r3
      beq-      .loc_0x314
      lwz       r0, -0x63E4(r13)
      cmplwi    r0, 0
      beq-      .loc_0x1D8
      addi      r3, r30, 0xC
      addi      r5, r30, 0x1C
      li        r4, 0x2DB
      crclr     6, 0x6
      bl        -0x41D900

    .loc_0x1D8:
      stw       r31, -0x63E4(r13)
      bl        -0x37E9A8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x18(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x18(r1)
      lfs       f0, 0x26AC(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x218
      li        r30, 0xA
      b         .loc_0x21C

    .loc_0x218:
      li        r30, 0x64

    .loc_0x21C:
      mulli     r3, r30, 0x34
      stw       r30, -0x7970(r13)
      addi      r3, r3, 0x10
      bl        -0x423FE8
      lis       r4, 0x8044
      mr        r7, r30
      addi      r4, r4, 0x73BC
      li        r5, 0
      li        r6, 0x34
      bl        -0x3865BC
      stw       r3, 0x0(r31)
      bl        -0x37EA14
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x20(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x20(r1)
      lfs       f0, 0x2698(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x288
      li        r0, 0
      stw       r0, 0x4(r31)
      b         .loc_0x290

    .loc_0x288:
      li        r0, 0x1
      stw       r0, 0x4(r31)

    .loc_0x290:
      bl        -0x37EA5C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x20(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x20(r1)
      lfs       f0, 0x2698(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r0,r0,2,31,31
      stb       r0, 0x8(r31)
      bl        -0x37EA98
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfd       f3, 0x2660(r2)
      stw       r0, 0x18(r1)
      lfs       f1, 0x264C(r2)
      lfd       f2, 0x18(r1)
      lfs       f0, 0x2698(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x30C
      li        r0, 0x1
      stb       r0, 0x9(r31)
      b         .loc_0x314

    .loc_0x30C:
      li        r0, 0
      stb       r0, 0x9(r31)

    .loc_0x314:
      stw       r31, 0xE0(r29)
      lwz       r3, 0xE0(r29)
      bl        -0x7E4
      lfs       f0, 0x2698(r2)
      mr        r3, r29
      stfs      f0, 0x30(r29)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	804480B4
 * Size:	000084
 */
void BootSection::~BootSection()
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
      lis       r3, 0x804F
      subi      r0, r3, 0x2EC0
      stw       r0, 0x0(r30)
      lwz       r3, -0x6514(r13)
      bl        -0x25770
      addic.    r0, r30, 0x64
      beq-      .loc_0x4C
      addic.    r3, r30, 0xC0
      beq-      .loc_0x4C
      li        r4, 0
      bl        -0x42192C

    .loc_0x4C:
      mr        r3, r30
      li        r4, 0
      bl        -0x2E3458
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x424064

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
 * Address:	80448138
 * Size:	000004
 */
void BootSection::init()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8044813C
 * Size:	0002B8
 */
void BootSection::loadBootResource()
{
    /*
    .loc_0x0:
      stwu      r1, -0x140(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x144(r1)
      stmw      r25, 0x124(r1)
      mr        r28, r3
      subi      r31, r4, 0x50F8
      lwz       r3, 0x1C(r3)
      bl        -0x424BB8
      addi      r3, r31, 0xBC
      li        r4, 0x1
      li        r5, 0
      li        r6, 0x1
      bl        -0x42D040
      mr.       r30, r3
      bne-      .loc_0x54
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x401
      crclr     6, 0x6
      bl        -0x41DB4C

    .loc_0x54:
      addi      r3, r31, 0xDC
      bl        -0x4251C8
      mr.       r26, r3
      bne-      .loc_0x78
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x407
      crclr     6, 0x6
      bl        -0x41DB70

    .loc_0x78:
      li        r3, 0x40
      bl        -0x424314
      mr.       r29, r3
      beq-      .loc_0xA8
      li        r0, 0
      mr        r4, r26
      stw       r0, 0x28(r29)
      li        r5, 0
      bl        -0x415150
      lbz       r0, 0x3B(r29)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r29)

    .loc_0xA8:
      stw       r29, 0x5C(r28)
      addi      r3, r31, 0xFC
      bl        -0x425220
      mr.       r26, r3
      bne-      .loc_0xD0
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x40A
      crclr     6, 0x6
      bl        -0x41DBC8

    .loc_0xD0:
      li        r3, 0x40
      bl        -0x42436C
      mr.       r29, r3
      beq-      .loc_0x100
      li        r0, 0
      mr        r4, r26
      stw       r0, 0x28(r29)
      li        r5, 0
      bl        -0x4151A8
      lbz       r0, 0x3B(r29)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r29)

    .loc_0x100:
      stw       r29, 0x60(r28)
      addi      r3, r31, 0x118
      bl        -0x425278
      mr.       r26, r3
      bne-      .loc_0x128
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x40F
      crclr     6, 0x6
      bl        -0x41DC20

    .loc_0x128:
      li        r3, 0x40
      bl        -0x4243C4
      mr.       r29, r3
      beq-      .loc_0x158
      li        r0, 0
      mr        r4, r26
      stw       r0, 0x28(r29)
      li        r5, 0
      bl        -0x415200
      lbz       r0, 0x3B(r29)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r29)

    .loc_0x158:
      stw       r29, 0x54(r28)
      addi      r3, r31, 0x130
      bl        -0x4252D0
      mr.       r26, r3
      bne-      .loc_0x180
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x412
      crclr     6, 0x6
      bl        -0x41DC78

    .loc_0x180:
      li        r3, 0x40
      bl        -0x42441C
      mr.       r29, r3
      beq-      .loc_0x1B0
      li        r0, 0
      mr        r4, r26
      stw       r0, 0x28(r29)
      li        r5, 0
      bl        -0x415258
      lbz       r0, 0x3B(r29)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r29)

    .loc_0x1B0:
      stw       r29, 0x58(r28)
      lis       r3, 0x8051
      addi      r28, r3, 0x4478
      addi      r29, r1, 0x8
      lwz       r6, 0x94(r31)
      li        r27, 0
      lwz       r5, 0x98(r31)
      lwz       r4, 0x9C(r31)
      lwz       r3, 0xA0(r31)
      lwz       r0, 0xA4(r31)
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      stw       r4, 0x10(r1)
      stw       r3, 0x14(r1)
      stw       r0, 0x18(r1)

    .loc_0x1EC:
      lwz       r5, 0x0(r29)
      addi      r3, r1, 0x1C
      addi      r4, r2, 0x26C8
      crclr     6, 0x6
      bl        -0x380F00
      mr        r3, r30
      addi      r4, r1, 0x1C
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr.       r26, r3
      bne-      .loc_0x234
      addi      r3, r31, 0xC
      addi      r5, r1, 0x1C
      li        r4, 0x312
      crclr     6, 0x6
      bl        -0x41DD2C

    .loc_0x234:
      li        r3, 0x40
      bl        -0x4244D0
      mr.       r25, r3
      beq-      .loc_0x264
      li        r0, 0
      mr        r4, r26
      stw       r0, 0x28(r25)
      li        r5, 0
      bl        -0x41530C
      lbz       r0, 0x3B(r25)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r25)

    .loc_0x264:
      li        r3, 0x168
      bl        -0x424500
      mr.       r0, r3
      beq-      .loc_0x280
      mr        r4, r25
      bl        -0x40DEA4
      mr        r0, r3

    .loc_0x280:
      stw       r0, 0x0(r28)
      li        r4, 0x7
      lwz       r3, 0x0(r28)
      bl        -0x40F70C
      addi      r27, r27, 0x1
      addi      r28, r28, 0x4
      cmpwi     r27, 0x5
      addi      r29, r29, 0x4
      blt+      .loc_0x1EC
      lmw       r25, 0x124(r1)
      lwz       r0, 0x144(r1)
      mtlr      r0
      addi      r1, r1, 0x140
      blr
    */
}

/*
 * --INFO--
 * Address:	804483F4
 * Size:	000128
 */
void BootSection::load2DResource()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x50F8
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x1C(r3)
      bl        -0x424E74
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x150
      li        r5, 0
      bl        -0x250CC
      bl        -0x138DC4
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x150
      bl        -0x250D4
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x170
      li        r5, 0
      bl        -0x250EC
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x17C
      li        r5, 0
      bl        -0x250FC
      bl        -0x8F374
      lwz       r3, -0x65F8(r13)
      lis       r4, 0x10
      bl        -0x8F23C
      lwz       r3, -0x65F8(r13)
      addi      r4, r31, 0x18C
      li        r5, 0x7D0
      li        r6, 0x80
      li        r7, 0x80
      bl        -0x8F1C0
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x17C
      bl        -0x25128
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x1B4
      li        r5, 0
      bl        -0x25140
      li        r3, 0x158
      bl        -0x424600
      mr.       r0, r3
      beq-      .loc_0xC4
      bl        .loc_0x128
      mr        r0, r3

    .loc_0xC4:
      stw       r0, 0xD8(r30)
      addi      r4, r31, 0x1B4
      lwz       r0, 0xD4(r30)
      lwz       r3, 0xD8(r30)
      stw       r0, 0x4(r3)
      lwz       r3, -0x6514(r13)
      bl        -0x2516C
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x1C8
      li        r5, 0
      bl        -0x25184
      lwz       r3, 0xD8(r30)
      bl        -0x7AE10
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x1C8
      bl        -0x25190
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x170
      bl        -0x2519C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x128:
    */
}

/*
 * --INFO--
 * Address:	8044851C
 * Size:	000294
 */
void ebi::TScreenProgre::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804F
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x7828
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      li        r3, 0x1
      stw       r29, 0x14(r1)
      addi      r31, r30, 0x50
      mr        r29, r31
      stw       r0, 0x0(r30)
      li        r0, 0
      stb       r3, 0x8(r30)
      mr        r3, r31
      stw       r0, 0xC(r30)
      stw       r0, 0x10(r30)
      stw       r0, 0x14(r30)
      stw       r0, 0x18(r30)
      stw       r0, 0x1C(r30)
      stw       r0, 0x28(r30)
      stw       r0, 0x2C(r30)
      stw       r0, 0x30(r30)
      stw       r0, 0x38(r30)
      stw       r0, 0x3C(r30)
      bl        -0x371F4
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r6, 0x804F
      stw       r0, 0x0(r31)
      li        r0, 0
      lis       r3, 0x803D
      li        r7, 0x1
      stw       r0, 0x18(r31)
      addi      r0, r4, 0x7F2C
      subi      r4, r3, 0x114
      subi      r3, r6, 0x77D0
      stw       r0, 0x0(r29)
      lis       r5, 0x804F
      subi      r0, r5, 0x75AC
      li        r6, 0x10
      stw       r3, 0x0(r29)
      addi      r3, r31, 0x20
      li        r5, 0
      stb       r7, 0x1C(r29)
      li        r7, 0x2
      stw       r0, 0x0(r31)
      bl        -0x386DA4
      lfs       f1, 0x2640(r2)
      addi      r29, r30, 0x9C
      lfs       f0, 0x26E8(r2)
      li        r4, 0x1
      stfs      f1, 0x40(r31)
      li        r0, 0
      mr        r3, r29
      stfs      f0, 0x44(r31)
      stb       r4, 0x48(r31)
      stb       r0, 0x49(r31)
      stb       r0, 0x1C(r31)
      bl        -0x37280
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r6, 0x804F
      stw       r0, 0x0(r29)
      li        r0, 0
      lis       r3, 0x803D
      li        r7, 0x1
      stw       r0, 0x18(r29)
      addi      r0, r4, 0x7F2C
      subi      r4, r3, 0x114
      subi      r3, r6, 0x77D0
      stw       r0, 0x0(r29)
      lis       r5, 0x804F
      subi      r0, r5, 0x75AC
      li        r6, 0x10
      stw       r3, 0x0(r29)
      addi      r3, r29, 0x20
      li        r5, 0
      stb       r7, 0x1C(r29)
      li        r7, 0x2
      stw       r0, 0x0(r29)
      bl        -0x386E30
      lfs       f3, 0x2640(r2)
      lis       r10, 0x804C
      lis       r9, 0x804C
      lis       r8, 0x804A
      stfs      f3, 0x40(r29)
      lis       r3, 0x804E
      lfs       f0, 0x26E8(r2)
      addi      r7, r3, 0x7420
      lis       r4, 0x804E
      lis       r3, 0x804E
      stfs      f0, 0x44(r29)
      li        r0, 0x1
      addi      r6, r4, 0x73CC
      addi      r5, r3, 0x7648
      stb       r0, 0x48(r29)
      li        r11, 0
      addi      r10, r10, 0x14F0
      addi      r9, r9, 0x14D8
      stb       r11, 0x49(r29)
      subi      r8, r8, 0x1D84
      addi      r12, r7, 0x18
      addi      r31, r6, 0x18
      stb       r11, 0x1C(r29)
      addi      r4, r30, 0x104
      addi      r29, r5, 0x18
      lfs       f2, 0x2644(r2)
      stw       r10, 0xE8(r30)
      addi      r0, r30, 0x13C
      lfs       f1, 0x2674(r2)
      mr        r3, r30
      stw       r9, 0xE8(r30)
      stb       r11, 0xEC(r30)
      stb       r11, 0xED(r30)
      stw       r8, 0xF0(r30)
      stw       r7, 0xE8(r30)
      stw       r12, 0xF0(r30)
      sth       r11, 0xF4(r30)
      stw       r11, 0xF8(r30)
      stw       r6, 0xE8(r30)
      stw       r31, 0xF0(r30)
      stw       r4, 0xFC(r30)
      stw       r5, 0xE8(r30)
      stw       r29, 0xF0(r30)
      stfs      f2, 0x100(r30)
      lwz       r4, -0x6514(r13)
      lfs       f0, 0x54(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x10C(r30)
      stfs      f3, 0x110(r30)
      stw       r11, 0x118(r30)
      stw       r11, 0x11C(r30)
      stw       r10, 0x120(r30)
      stw       r9, 0x120(r30)
      stb       r11, 0x124(r30)
      stb       r11, 0x125(r30)
      stw       r8, 0x128(r30)
      stw       r7, 0x120(r30)
      stw       r12, 0x128(r30)
      sth       r11, 0x12C(r30)
      stw       r11, 0x130(r30)
      stw       r6, 0x120(r30)
      stw       r31, 0x128(r30)
      stw       r0, 0x134(r30)
      stw       r5, 0x120(r30)
      stw       r29, 0x128(r30)
      stfs      f2, 0x138(r30)
      lwz       r4, -0x6514(r13)
      lfs       f0, 0x54(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x144(r30)
      stfs      f3, 0x148(r30)
      stw       r11, 0x150(r30)
      stw       r11, 0x154(r30)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	804487B0
 * Size:	000044
 */
void BootSection::loadResident()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r3, -0x6514(r13)
      lwz       r31, -0x77D4(r13)
      lwz       r3, 0x38(r3)
      bl        -0x425228
      lwz       r3, -0x6380(r13)
      bl        0xD4DC
      mr        r3, r31
      bl        -0x425238
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
 * Size:	00008C
 */
void BootSection::drawScreenProgre(Graphics&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804487F4
 * Size:	00019C
 */
void BootSection::doDraw(Graphics&)
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
      lwz       r0, 0x48(r3)
      cmplwi    r0, 0xA
      bgt-      .loc_0x184
      lis       r5, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r5, r5, 0x2FF0
      lwzx      r0, r5, r0
      mtctr     r0
      bctr
      mr        r3, r30
      mr        r4, r31
      bl        0x648
      b         .loc_0x184
      bl        0x1AC
      b         .loc_0x184
      bl        .loc_0x19C
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xD8(r30)
      bl        -0x7A354
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65F8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x184
      li        r4, 0x1
      li        r5, 0
      bl        -0x8F2C0
      lwz       r3, -0x65F8(r13)
      li        r4, 0
      li        r5, 0
      bl        -0x8F2D0
      b         .loc_0x184
      bl        0x124
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xD8(r30)
      bl        -0x7A3B4
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65F8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x184
      li        r4, 0x1
      li        r5, 0
      bl        -0x8F320
      lwz       r3, -0x65F8(r13)
      li        r4, 0
      li        r5, 0
      bl        -0x8F330
      b         .loc_0x184
      bl        0xA4
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xD8(r30)
      bl        -0x7A414
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65F8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x184
      li        r4, 0x1
      li        r5, 0
      bl        -0x8F380
      lwz       r3, -0x65F8(r13)
      li        r4, 0
      li        r5, 0
      bl        -0x8F390
      b         .loc_0x184
      mr        r3, r30
      mr        r4, r31
      bl        0x45C

    .loc_0x184:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x19C:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BootSection::drawDebugInfo(Graphics&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80448990
 * Size:	000020
 */
void BootSection::drawProgressive(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x54
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	804489B0
 * Size:	000020
 */
void BootSection::drawSetProgressive(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x34
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	804489D0
 * Size:	000020
 */
void BootSection::drawSetInterlace(Graphics&)
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
 * Address:	804489F0
 * Size:	0003E0
 */
void BootSection::drawNintendoLogo(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x1E0(r1)
      mflr      r0
      stw       r0, 0x1E4(r1)
      stfd      f31, 0x1D0(r1)
      psq_st    f31,0x1D8(r1),0,0
      stfd      f30, 0x1C0(r1)
      psq_st    f30,0x1C8(r1),0,0
      stmw      r25, 0x1A4(r1)
      mr        r27, r4
      mr        r26, r3
      addi      r3, r27, 0xBC
      lwz       r12, 0xBC(r4)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r31, 0
      lwz       r30, 0xE0(r26)
      mr        r28, r31
      b         .loc_0x260

    .loc_0x4C:
      lwz       r0, 0x0(r30)
      add       r29, r0, r28
      lwz       r0, 0x0(r29)
      cmpwi     r0, 0
      beq-      .loc_0x258
      lfs       f2, 0x14(r29)
      lfs       f0, 0x2640(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0xAC
      lfs       f1, 0x2668(r2)
      lfs       f0, 0x2644(r2)
      fdivs     f1, f2, f1
      fabs      f1, f1
      frsp      f4, f1
      fcmpo     cr0, f4, f0
      ble-      .loc_0x90
      fmr       f4, f0

    .loc_0x90:
      lfs       f0, 0x2644(r2)
      lfs       f3, 0x26B0(r2)
      fsubs     f2, f0, f4
      lfs       f1, 0x26AC(r2)
      fmadds    f0, f3, f4, f0
      fmadds    f1, f3, f2, f1
      b         .loc_0xB4

    .loc_0xAC:
      lfs       f1, 0x2644(r2)
      fmr       f0, f1

    .loc_0xB4:
      lfs       f4, 0x26B4(r2)
      lfs       f3, 0x18(r29)
      lfs       f2, 0x2640(r2)
      fmuls     f6, f4, f3
      lfs       f5, 0x26B8(r2)
      fcmpo     cr0, f6, f2
      bge-      .loc_0xFC
      lfs       f2, 0x26BC(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f2, f6, f2
      fctiwz    f2, f2
      stfd      f2, 0x178(r1)
      lwz       r0, 0x17C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0
      fneg      f4, f2
      b         .loc_0x120

    .loc_0xFC:
      lfs       f2, 0x26C0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f2, f6, f2
      fctiwz    f2, f2
      stfd      f2, 0x180(r1)
      lwz       r0, 0x184(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f4, r3, r0

    .loc_0x120:
      lfs       f3, 0x2644(r2)
      lfs       f2, 0x2640(r2)
      fmadds    f3, f5, f4, f3
      lfs       f4, 0x26C4(r2)
      fcmpo     cr0, f6, f2
      fmuls     f1, f1, f3
      bge-      .loc_0x168
      lfs       f2, 0x26BC(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f2, f6, f2
      fctiwz    f2, f2
      stfd      f2, 0x188(r1)
      lwz       r0, 0x18C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0
      fneg      f3, f2
      b         .loc_0x18C

    .loc_0x168:
      lfs       f2, 0x26C0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f2, f6, f2
      fctiwz    f2, f2
      stfd      f2, 0x190(r1)
      lwz       r0, 0x194(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f3, r3, r0

    .loc_0x18C:
      lfs       f2, 0x2644(r2)
      lis       r3, 0x8051
      lwz       r0, 0x4(r29)
      addi      r3, r3, 0x4478
      fnmsubs   f6, f4, f3, f2
      lfs       f5, 0xC(r29)
      rlwinm    r0,r0,2,0,29
      lfs       f4, 0x14(r29)
      lwzx      r25, r3, r0
      lfs       f3, 0x8(r29)
      lfs       f2, 0x10(r29)
      fmuls     f0, f0, f6
      mr        r3, r25
      fadds     f31, f5, f4
      stfs      f1, 0xCC(r25)
      fadds     f30, f3, f2
      stfs      f0, 0xD0(r25)
      lwz       r12, 0x0(r25)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x28(r25)
      mr        r3, r25
      lfs       f2, 0x20(r25)
      li        r4, 0x7A
      lfs       f1, 0x2C(r25)
      lfs       f0, 0x24(r25)
      fsubs     f4, f3, f2
      lfs       f2, 0x2698(r2)
      fsubs     f0, f1, f0
      lfs       f3, 0x30(r29)
      fmuls     f1, f4, f2
      fmuls     f2, f0, f2
      bl        -0x410800
      lfs       f2, 0x28(r25)
      mr        r3, r25
      lfs       f0, 0x20(r25)
      li        r4, 0
      lwz       r12, 0x0(r25)
      li        r5, 0
      lfs       f1, 0x2C(r25)
      fsubs     f3, f2, f0
      lfs       f0, 0x24(r25)
      li        r6, 0
      lfs       f2, 0x2698(r2)
      fsubs     f0, f1, f0
      lwz       r12, 0xE4(r12)
      fnmsubs   f1, f3, f2, f30
      fsubs     f2, f31, f0
      mtctr     r12
      bctrl

    .loc_0x258:
      addi      r28, r28, 0x34
      addi      r31, r31, 0x1

    .loc_0x260:
      lwz       r0, -0x7970(r13)
      cmplw     r31, r0
      blt+      .loc_0x4C
      addi      r3, r27, 0xBC
      lwz       r12, 0xBC(r27)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x5C(r26)
      addi      r3, r1, 0x10
      bl        -0x40E768
      lwz       r3, -0x6514(r13)
      li        r0, -0x1
      stw       r0, 0xC(r1)
      lwz       r0, 0xD4(r3)
      cmpwi     r0, 0x5
      bne-      .loc_0x2C4
      li        r0, 0xFF
      li        r4, 0
      li        r3, 0x46
      stb       r4, 0xC(r1)
      stb       r3, 0xD(r1)
      stb       r0, 0xE(r1)
      stb       r0, 0xF(r1)
      b         .loc_0x2E0

    .loc_0x2C4:
      li        r3, 0
      li        r4, 0xDC
      li        r0, 0xFF
      stb       r4, 0xC(r1)
      stb       r3, 0xD(r1)
      stb       r3, 0xE(r1)
      stb       r0, 0xF(r1)

    .loc_0x2E0:
      lwz       r0, 0xC(r1)
      stw       r0, 0x8(r1)
      lbz       r5, 0x8(r1)
      lbz       r4, 0x9(r1)
      lbz       r3, 0xA(r1)
      lbz       r0, 0xB(r1)
      stb       r5, 0x158(r1)
      stb       r4, 0x159(r1)
      stb       r3, 0x15A(r1)
      stb       r0, 0x15B(r1)
      bl        -0x37F758
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x194(r1)
      lfd       f2, 0x2660(r2)
      stw       r0, 0x190(r1)
      lfs       f0, 0x264C(r2)
      lfd       f1, 0x190(r1)
      fsubs     f1, f1, f2
      fdivs     f30, f1, f0
      bl        -0x37F780
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x18C(r1)
      addi      r3, r1, 0x10
      lfs       f2, 0x2698(r2)
      li        r4, 0
      stw       r0, 0x188(r1)
      li        r5, 0
      lfd       f4, 0x2660(r2)
      fsubs     f1, f30, f2
      lfd       f0, 0x188(r1)
      li        r6, 0
      lfs       f3, 0x264C(r2)
      fsubs     f4, f0, f4
      lfs       f7, 0xE4(r26)
      lfs       f0, 0x26F0(r2)
      lfs       f5, 0x26EC(r2)
      fdivs     f6, f4, f3
      lfs       f3, 0x26F4(r2)
      lfs       f4, 0x26F8(r2)
      fsubs     f6, f6, f2
      fmadds    f2, f7, f1, f0
      fmadds    f1, f7, f6, f5
      bl        -0x40D1CC
      lfs       f1, 0xE4(r26)
      lfs       f0, 0x2640(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x3B0
      lfs       f0, 0x26FC(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0xE4(r26)

    .loc_0x3B0:
      addi      r3, r1, 0x10
      li        r4, -0x1
      bl        -0x40DEC8
      psq_l     f31,0x1D8(r1),0,0
      lfd       f31, 0x1D0(r1)
      psq_l     f30,0x1C8(r1),0,0
      lfd       f30, 0x1C0(r1)
      lmw       r25, 0x1A4(r1)
      lwz       r0, 0x1E4(r1)
      mtlr      r0
      addi      r1, r1, 0x1E0
      blr
    */
}

/*
 * --INFO--
 * Address:	80448DD0
 * Size:	0000B4
 */
void BootSection::drawDolbyLogo(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x180(r1)
      mflr      r0
      stw       r0, 0x184(r1)
      stw       r31, 0x17C(r1)
      mr        r31, r3
      addi      r3, r4, 0xBC
      lwz       r12, 0xBC(r4)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x60(r31)
      addi      r3, r1, 0x10
      bl        -0x40E8F0
      li        r0, 0xFF
      lfs       f1, 0x2700(r2)
      stb       r0, 0xC(r1)
      addi      r3, r1, 0x10
      lfs       f2, 0x2704(r2)
      li        r4, 0
      stb       r0, 0xD(r1)
      li        r5, 0
      lfs       f3, 0x2708(r2)
      li        r6, 0
      stb       r0, 0xE(r1)
      lfs       f4, 0x270C(r2)
      stb       r0, 0xF(r1)
      lwz       r0, 0xC(r1)
      stw       r0, 0x8(r1)
      lbz       r9, 0x8(r1)
      lbz       r8, 0x9(r1)
      lbz       r7, 0xA(r1)
      lbz       r0, 0xB(r1)
      stb       r9, 0x158(r1)
      stb       r8, 0x159(r1)
      stb       r7, 0x15A(r1)
      stb       r0, 0x15B(r1)
      bl        -0x40D2AC
      addi      r3, r1, 0x10
      li        r4, -0x1
      bl        -0x40DF8C
      lwz       r0, 0x184(r1)
      lwz       r31, 0x17C(r1)
      mtlr      r0
      addi      r1, r1, 0x180
      blr
    */
}

/*
 * --INFO--
 * Address:	80448E84
 * Size:	000188
 */
void BootSection::drawEpilepsy(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x300(r1)
      mflr      r0
      stw       r0, 0x304(r1)
      stw       r31, 0x2FC(r1)
      mr        r31, r3
      addi      r3, r4, 0xBC
      lwz       r12, 0xBC(r4)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x54(r31)
      addi      r3, r1, 0x178
      bl        -0x40E9A4
      lfs       f1, 0x2640(r2)
      addi      r3, r1, 0x178
      lfs       f3, 0x2710(r2)
      li        r4, 0
      fmr       f2, f1
      lfs       f4, 0x26A8(r2)
      li        r5, 0
      li        r6, 0
      bl        -0x40D324
      lfs       f1, 0x50(r31)
      lfs       f0, 0x2658(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x168
      fsubs     f1, f1, f0
      li        r0, 0xFF
      lfs       f2, 0x26B4(r2)
      lfs       f0, 0x2640(r2)
      fmuls     f1, f2, f1
      stb       r0, 0xC(r1)
      stb       r0, 0xD(r1)
      fcmpo     cr0, f1, f0
      stb       r0, 0xE(r1)
      stb       r0, 0xF(r1)
      bge-      .loc_0x98
      fneg      f1, f1

    .loc_0x98:
      lfs       f0, 0x26C0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f2, 0x2644(r2)
      fmuls     f1, f1, f0
      lfs       f3, 0x2714(r2)
      lfs       f0, 0x2640(r2)
      fctiwz    f1, f1
      stfd      f1, 0x2E0(r1)
      lwz       r0, 0x2E4(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f1, 0x4(r3)
      fsubs     f1, f2, f1
      fmuls     f1, f3, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xEC
      lfs       f0, 0x2698(r2)
      fadds     f0, f0, f1
      b         .loc_0xF4

    .loc_0xEC:
      lfs       f0, 0x2698(r2)
      fsubs     f0, f1, f0

    .loc_0xF4:
      fctiwz    f0, f0
      lwz       r4, 0x58(r31)
      addi      r3, r1, 0x10
      stfd      f0, 0x2E8(r1)
      lwz       r0, 0x2EC(r1)
      stb       r0, 0xF(r1)
      bl        -0x40EA80
      lwz       r0, 0xC(r1)
      addi      r3, r1, 0x10
      lfs       f1, 0x2640(r2)
      li        r4, 0
      stw       r0, 0x8(r1)
      li        r5, 0
      lfs       f2, 0x26A4(r2)
      li        r6, 0
      lbz       r9, 0x8(r1)
      lbz       r8, 0x9(r1)
      lbz       r7, 0xA(r1)
      lbz       r0, 0xB(r1)
      stb       r9, 0x158(r1)
      lfs       f3, 0x2710(r2)
      stb       r8, 0x159(r1)
      lfs       f4, 0x2718(r2)
      stb       r7, 0x15A(r1)
      stb       r0, 0x15B(r1)
      bl        -0x40D428
      addi      r3, r1, 0x10
      li        r4, -0x1
      bl        -0x40E108

    .loc_0x168:
      addi      r3, r1, 0x178
      li        r4, -0x1
      bl        -0x40E114
      lwz       r0, 0x304(r1)
      lwz       r31, 0x2FC(r1)
      mtlr      r0
      addi      r1, r1, 0x300
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void BootSection::changeRenderModeProgressive()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044900C
 * Size:	000694
 */
void BootSection::doUpdate()
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r31, r3
      lis       r3, 0x804A
      li        r29, 0
      mr        r27, r29
      subi      r30, r3, 0x50F8
      lwz       r28, 0xE0(r31)
      b         .loc_0x40

    .loc_0x2C:
      lwz       r0, 0x0(r28)
      add       r3, r0, r27
      bl        -0x1C54
      addi      r27, r27, 0x34
      addi      r29, r29, 0x1

    .loc_0x40:
      lwz       r0, -0x7970(r13)
      cmplw     r29, r0
      blt+      .loc_0x2C
      lwz       r0, 0x48(r31)
      cmplwi    r0, 0xA
      bgt-      .loc_0x630
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x2FC4
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      mr        r3, r31
      bl        .loc_0x694
      b         .loc_0x630
      mr        r3, r31
      bl        0x6B0
      b         .loc_0x630
      mr        r3, r31
      bl        0x7E0
      b         .loc_0x630
      mr        r3, r31
      bl        0xA5C
      b         .loc_0x630
      mr        r3, r31
      bl        0xBD0
      b         .loc_0x630
      lwz       r3, 0x24(r31)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0xD0
      bge-      .loc_0x630
      cmpwi     r0, 0
      bge-      .loc_0x1CC
      b         .loc_0x630

    .loc_0xD0:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x50(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x50(r31)
      lwz       r3, 0xD4(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,23,23
      bne-      .loc_0x104
      lfs       f1, 0x50(r31)
      lfs       f0, 0x2650(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x110

    .loc_0x104:
      lwz       r3, -0x6380(r13)
      li        r4, 0
      bl        0xCB90

    .loc_0x110:
      lfs       f1, 0x50(r31)
      lfs       f0, 0x2644(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x630
      mr        r3, r31
      bl        0xD70
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x630
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0xD8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x15C
      fadds     f0, f2, f1
      b         .loc_0x160

    .loc_0x15C:
      fsubs     f0, f1, f2

    .loc_0x160:
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      bl        -0x7B2F4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x630
      lwz       r4, -0x6514(r13)
      lwz       r3, 0x24(r31)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0x4(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x1A8
      fadds     f0, f2, f1
      b         .loc_0x1AC

    .loc_0x1A8:
      fsubs     f0, f1, f2

    .loc_0x1AC:
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      b         .loc_0x630

    .loc_0x1CC:
      lwz       r3, 0xD8(r31)
      bl        -0x7B304
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x630
      lfs       f0, 0x2640(r2)
      mr        r3, r31
      li        r4, 0x6
      stfs      f0, 0x50(r31)
      bl        0xCD8
      li        r3, 0x1
      bl        -0x377138
      bl        -0x3772E0
      bl        -0x377FD4
      bl        -0x377FD8
      lwz       r3, -0x6514(r13)
      li        r4, 0x1
      bl        -0x25FDC
      b         .loc_0x630
      lwz       r3, 0x24(r31)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x238
      bge-      .loc_0x630
      cmpwi     r0, 0
      bge-      .loc_0x334
      b         .loc_0x630

    .loc_0x238:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x50(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x50(r31)
      lwz       r3, 0xD4(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,23,23
      bne-      .loc_0x26C
      lfs       f1, 0x50(r31)
      lfs       f0, 0x2650(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x278

    .loc_0x26C:
      lwz       r3, -0x6380(r13)
      li        r4, 0
      bl        0xCA28

    .loc_0x278:
      lfs       f1, 0x50(r31)
      lfs       f0, 0x2644(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x630
      mr        r3, r31
      bl        0xC08
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x630
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0xD8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x2C4
      fadds     f0, f2, f1
      b         .loc_0x2C8

    .loc_0x2C4:
      fsubs     f0, f1, f2

    .loc_0x2C8:
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      bl        -0x7B45C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x630
      lwz       r4, -0x6514(r13)
      lwz       r3, 0x24(r31)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0x4(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x310
      fadds     f0, f2, f1
      b         .loc_0x314

    .loc_0x310:
      fsubs     f0, f1, f2

    .loc_0x314:
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      b         .loc_0x630

    .loc_0x334:
      lwz       r3, 0xD8(r31)
      bl        -0x7B46C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x630
      lfs       f0, 0x2640(r2)
      mr        r3, r31
      li        r4, 0x9
      stfs      f0, 0x50(r31)
      bl        0xB70
      lwz       r3, -0x6514(r13)
      li        r4, 0
      bl        -0x26130
      b         .loc_0x630
      lwz       r3, 0xD4(r31)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x38C
      bl        -0x376FF8
      cmplwi    r3, 0x1
      bne-      .loc_0x38C
      li        r0, 0x1
      stb       r0, 0xDD(r31)

    .loc_0x38C:
      lwz       r3, 0x24(r31)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x3E8
      bge-      .loc_0x630
      cmpwi     r0, 0
      bge-      .loc_0x3B0
      b         .loc_0x630

    .loc_0x3B0:
      lwz       r4, -0x6514(r13)
      lwz       r12, 0x0(r3)
      lfs       f1, 0x2698(r2)
      lfs       f0, 0x54(r4)
      lwz       r12, 0xC(r12)
      fdivs     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x50(r31)
      b         .loc_0x630

    .loc_0x3E8:
      lwz       r3, -0x6514(r13)
      li        r4, 0
      lfs       f1, 0x50(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x50(r31)
      lwz       r3, 0xD4(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,0,31
      beq-      .loc_0x438
      lfs       f1, 0x50(r31)
      lfs       f0, 0x2658(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x438
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1800
      li        r5, 0
      bl        -0x110E08
      li        r4, 0x1
      b         .loc_0x44C

    .loc_0x438:
      lfs       f1, 0x50(r31)
      lfs       f0, 0x271C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x44C
      li        r4, 0x1

    .loc_0x44C:
      rlwinm.   r0,r4,0,24,31
      beq-      .loc_0x630
      lwz       r4, -0x6514(r13)
      lwz       r3, 0x24(r31)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0x4(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x484
      fadds     f0, f2, f1
      b         .loc_0x488

    .loc_0x484:
      fsubs     f0, f1, f2

    .loc_0x488:
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x3
      bl        0xA18
      b         .loc_0x630
      lwz       r3, 0x24(r31)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x630
      mr        r3, r31
      li        r4, 0x4
      bl        0x9F4
      li        r4, 0
      lwz       r5, 0xE0(r31)
      lfs       f0, 0x2640(r2)
      mr        r7, r4
      li        r3, 0x1
      b         .loc_0x510

    .loc_0x4EC:
      lwz       r0, 0x0(r5)
      add       r6, r0, r7
      lwz       r0, 0x0(r6)
      cmpwi     r0, 0x1
      beq-      .loc_0x508
      stfs      f0, 0x20(r6)
      stw       r3, 0x0(r6)

    .loc_0x508:
      addi      r7, r7, 0x34
      addi      r4, r4, 0x1

    .loc_0x510:
      lwz       r0, -0x7970(r13)
      cmplw     r4, r0
      blt+      .loc_0x4EC
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x53C
      addi      r3, r30, 0x1EC
      addi      r5, r30, 0x1C
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x41EF04

    .loc_0x53C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x55C
      addi      r3, r30, 0x1EC
      addi      r5, r30, 0x1C
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x41EF24

    .loc_0x55C:
      lwz       r27, 0x4(r28)
      cmplwi    r27, 0
      bne-      .loc_0x57C
      addi      r3, r30, 0xC
      addi      r5, r30, 0x1C
      li        r4, 0x666
      crclr     6, 0x6
      bl        -0x41EF44

    .loc_0x57C:
      lis       r4, 0xC001
      mr        r3, r27
      addi      r4, r4, 0x101F
      bl        0x1E41C
      b         .loc_0x630
      lwz       r3, 0x24(r31)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x5EC
      bge-      .loc_0x630
      cmpwi     r0, 0
      bge-      .loc_0x5B4
      b         .loc_0x630

    .loc_0x5B4:
      lwz       r4, -0x6514(r13)
      lwz       r12, 0x0(r3)
      lfs       f1, 0x2698(r2)
      lfs       f0, 0x54(r4)
      lwz       r12, 0xC(r12)
      fdivs     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x50(r31)
      b         .loc_0x630

    .loc_0x5EC:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x50(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2644(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x50(r31)
      lfs       f1, 0x50(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x630
      mr        r3, r31
      li        r4, 0xA
      bl        0x8AC
      b         .loc_0x630
      li        r0, 0
      lfs       f0, 0x2698(r2)
      stb       r0, 0x34(r31)
      stfs      f0, 0x30(r31)

    .loc_0x630:
      lbz       r0, 0xDC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x674
      lwz       r3, 0xD8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x64C
      bl        -0x7B694

    .loc_0x64C:
      lwz       r3, -0x6514(r13)
      lwz       r3, 0x5C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65F8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x674
      bl        -0x900CC

    .loc_0x674:
      mr        r3, r31
      bl        -0x2E46DC
      lbz       r3, 0x34(r31)
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x694:
    */
}

/*
 * --INFO--
 * Address:	804496A0
 * Size:	00009C
 */
void BootSection::updateLoadResourceFirst()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, -0x6514(r13)
      lwz       r3, 0x5C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6514(r13)
      bl        -0x2609C
      cmpwi     r3, 0
      bne-      .loc_0x88
      lis       r3, 0x8051
      addi      r3, r3, 0x41FC
      lwz       r0, 0x238(r3)
      cmpwi     r0, 0
      beq-      .loc_0x64
      lwz       r3, -0x6514(r13)
      li        r0, 0
      lwz       r3, 0x60(r3)
      stb       r0, 0x3B(r3)
      b         .loc_0x7C

    .loc_0x64:
      lwz       r0, 0x1C8(r3)
      cmpwi     r0, 0
      bne-      .loc_0x7C
      lwz       r3, -0x6514(r13)
      lwz       r3, 0x5C(r3)
      bl        -0x677C

    .loc_0x7C:
      mr        r3, r31
      li        r4, 0x1
      bl        0x7AC

    .loc_0x88:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8044973C
 * Size:	00013C
 */
void BootSection::updateLoadMemoryCard()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804A
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r5, 0x50F8
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r4, -0x6514(r13)
      lwz       r3, 0x5C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x1EC
      addi      r5, r31, 0x1C
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x41F154

    .loc_0x5C:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x1EC
      addi      r5, r31, 0x1C
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x41F174

    .loc_0x7C:
      lwz       r30, 0x4(r30)
      cmplwi    r30, 0
      bne-      .loc_0x9C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x6D4
      crclr     6, 0x6
      bl        -0x41F194

    .loc_0x9C:
      mr        r3, r30
      bl        0x1E140
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x6514(r13)
      li        r31, 0
      lwz       r30, 0x0(r3)
      lwz       r3, 0x5C(r4)
      lwz       r0, 0xA8(r3)
      cmpwi     r0, 0
      bne-      .loc_0xE0
      bl        -0x8850
      cmplwi    r3, 0xB
      beq-      .loc_0xE0
      li        r31, 0x1

    .loc_0xE0:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x120
      cmplwi    r30, 0
      bne-      .loc_0x120
      lwz       r3, -0x6514(r13)
      lwz       r3, 0x5C(r3)
      bl        -0x8878
      lwz       r3, -0x6514(r13)
      lwz       r3, 0x60(r3)
      bl        -0x298C
      lwz       r3, -0x6514(r13)
      bl        -0x26A58
      mr        r3, r29
      bl        0x704
      lwz       r3, -0x6514(r13)
      bl        -0x264BC

    .loc_0x120:
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
 * Address:	80449878
 * Size:	000288
 */
void BootSection::updateNintendoLogo()
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r3
      addi      r3, r4, 0x41FC
      lwz       r0, 0x238(r3)
      lwz       r31, 0x48(r30)
      cmpwi     r0, 0
      bne-      .loc_0x84
      lwz       r0, -0x6518(r13)
      cmpwi     r0, 0x1
      beq-      .loc_0x84
      bl        -0x3584F0
      cmplwi    r3, 0x1
      beq-      .loc_0x58
      lwz       r3, 0xD4(r30)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x70

    .loc_0x58:
      bl        -0x377544
      cmplwi    r3, 0x1
      bne-      .loc_0x70
      li        r0, 0x1
      stb       r0, 0xDD(r30)
      b         .loc_0x84

    .loc_0x70:
      bl        -0x37755C
      cmplwi    r3, 0x1
      beq-      .loc_0x84
      li        r3, 0
      bl        -0x3584C4

    .loc_0x84:
      lbz       r0, 0xDD(r30)
      cmplwi    r0, 0
      beq-      .loc_0x114
      lwz       r0, 0x4C(r30)
      cmpwi     r0, 0x5
      beq-      .loc_0x114
      lbz       r0, 0xDC(r30)
      cmplwi    r0, 0
      bne-      .loc_0x114
      li        r0, 0x5
      li        r3, 0x14
      stw       r0, 0x4C(r30)
      bl        -0x425A88
      mr.       r5, r3
      beq-      .loc_0x108
      lis       r3, 0x804F
      lis       r4, 0x804B
      subi      r8, r3, 0x2F98
      lis       r3, 0x804F
      lwz       r7, 0x0(r8)
      addi      r4, r4, 0xF00
      lwz       r6, 0x4(r8)
      subi      r0, r3, 0x2E70
      lwz       r3, 0x8(r8)
      stw       r7, 0x8(r1)
      stw       r4, 0x0(r5)
      stw       r0, 0x0(r5)
      stw       r30, 0x4(r5)
      stw       r7, 0x8(r5)
      stw       r6, 0xC(r5)
      stw       r6, 0xC(r1)
      stw       r3, 0x10(r1)
      stw       r3, 0x10(r5)

    .loc_0x108:
      lwz       r3, -0x6514(r13)
      addi      r4, r30, 0x64
      bl        -0x26A50

    .loc_0x114:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x50(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2658(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x50(r30)
      lfs       f1, 0x50(r30)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x254
      mr        r3, r30
      bl        0x4EC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x254
      lbz       r0, 0xDC(r30)
      cmplwi    r0, 0
      bne-      .loc_0x15C
      li        r0, 0x1
      stb       r0, 0xDC(r30)

    .loc_0x15C:
      lwz       r4, 0x4C(r30)
      cmpwi     r4, 0x5
      beq-      .loc_0x1F8
      li        r0, 0x9
      stw       r0, 0x4C(r30)
      lwz       r3, 0x24(r30)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x1CC
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x1AC
      fadds     f0, f2, f1
      b         .loc_0x1B0

    .loc_0x1AC:
      fsubs     f0, f1, f2

    .loc_0x1B0:
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      stfd      f0, 0x18(r1)
      lwz       r4, 0x1C(r1)
      mtctr     r12
      bctrl

    .loc_0x1CC:
      lwz       r3, 0x24(r30)
      lwz       r3, 0x4(r3)
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x254
      lwz       r4, 0x4C(r30)
      mr        r3, r30
      bl        0x470
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x50(r30)
      b         .loc_0x254

    .loc_0x1F8:
      mr        r3, r30
      bl        0x45C
      lfs       f2, 0x2640(r2)
      li        r4, 0
      lfs       f1, 0x2698(r2)
      stfs      f2, 0x50(r30)
      lwz       r5, -0x6514(r13)
      lwz       r3, 0xD8(r30)
      lfs       f0, 0x54(r5)
      fdivs     f0, f1, f0
      fcmpo     cr0, f0, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0x234
      fadds     f0, f1, f0
      b         .loc_0x238

    .loc_0x234:
      fsubs     f0, f0, f1

    .loc_0x238:
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r5, 0x1C(r1)
      bl        -0x7C01C
      lwz       r3, 0xD8(r30)
      li        r0, 0x1
      stb       r0, 0x8(r3)

    .loc_0x254:
      lwz       r0, 0x48(r30)
      cmpw      r0, r31
      beq-      .loc_0x270
      lwz       r3, -0x6514(r13)
      addi      r4, r30, 0x64
      lwz       r5, 0xD0(r30)
      bl        -0x26BAC

    .loc_0x270:
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
 * Address:	80449B00
 * Size:	000180
 */
void BootSection::updateProgressive()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f1, 0x2668(r2)
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lfs       f2, 0x50(r3)
      fcmpo     cr0, f2, f1
      bge-      .loc_0xA0
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fadds     f0, f2, f0
      stfs      f0, 0x50(r31)
      lfs       f0, 0x50(r31)
      fcmpo     cr0, f0, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x4C
      lwz       r3, 0xD8(r31)
      bl        -0x7B558

    .loc_0x4C:
      lwz       r3, 0xD8(r31)
      lbz       r0, 0x9(r3)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x84
      fadds     f0, f2, f1
      b         .loc_0x88

    .loc_0x84:
      fsubs     f0, f1, f2

    .loc_0x88:
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      bl        -0x7BD10
      lfs       f0, 0x2668(r2)
      stfs      f0, 0x50(r31)

    .loc_0xA0:
      lwz       r3, 0xD8(r31)
      bl        -0x7BCCC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x16C
      lwz       r3, 0xD8(r31)
      lbz       r0, 0x8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x114
      mr        r3, r31
      li        r4, 0x8
      bl        0x308
      lwz       r3, -0x6514(r13)
      li        r4, 0x2
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0xD8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xFC
      fadds     f0, f2, f1
      b         .loc_0x100

    .loc_0xFC:
      fsubs     f0, f1, f2

    .loc_0x100:
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r5, 0xC(r1)
      bl        -0x7C16C
      b         .loc_0x164

    .loc_0x114:
      mr        r3, r31
      li        r4, 0x7
      bl        0x2B4
      lwz       r3, -0x6514(r13)
      li        r4, 0x1
      lfs       f2, 0x2698(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2640(r2)
      fdivs     f1, f2, f1
      lwz       r3, 0xD8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x150
      fadds     f0, f2, f1
      b         .loc_0x154

    .loc_0x150:
      fsubs     f0, f1, f2

    .loc_0x154:
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r5, 0xC(r1)
      bl        -0x7C1C0

    .loc_0x164:
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x50(r31)

    .loc_0x16C:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80449C80
 * Size:	000064
 */
void BootSection::updateWaitProgressive()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, 0x2644(r2)
      stw       r0, 0x14(r1)
      lfs       f0, 0x2704(r2)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lfs       f2, 0x50(r3)
      fadds     f1, f2, f1
      stfs      f1, 0x50(r3)
      lfs       f1, 0x50(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x50
      li        r3, 0
      bl        -0x377BF0
      bl        -0x377D98
      bl        -0x378A8C
      mr        r3, r31
      li        r4, 0x9
      bl        0x204

    .loc_0x50:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80449CE4
 * Size:	000120
 */
void BootSection::run()
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r4, 0x804F
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      stw       r30, 0x38(r1)
      subi      r30, r4, 0x3018
      lwz       r3, 0x1C(r3)
      bl        -0x426764
      li        r3, 0x14
      bl        -0x425E6C
      mr.       r5, r3
      beq-      .loc_0x78
      lwz       r8, 0x8C(r30)
      lis       r3, 0x804B
      lwz       r7, 0x90(r30)
      addi      r4, r3, 0xF00
      lwz       r6, 0x94(r30)
      lis       r3, 0x804F
      subi      r0, r3, 0x2E70
      stw       r8, 0x20(r1)
      stw       r4, 0x0(r5)
      stw       r0, 0x0(r5)
      stw       r31, 0x4(r5)
      stw       r8, 0x8(r5)
      stw       r7, 0xC(r5)
      stw       r7, 0x24(r1)
      stw       r6, 0x28(r1)
      stw       r6, 0x10(r5)

    .loc_0x78:
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x64
      bl        -0x26E2C
      lwz       r6, 0x98(r30)
      mr        r3, r31
      lwz       r5, 0x9C(r30)
      addi      r4, r1, 0x14
      lwz       r0, 0xA0(r30)
      stw       r6, 0x14(r1)
      stw       r5, 0x18(r1)
      stw       r0, 0x1C(r1)
      bl        .loc_0x120
      lwz       r3, -0x6514(r13)
      bl        -0x27034
      mr        r3, r31
      li        r4, 0
      bl        0x134
      mr        r3, r31
      bl        -0x262E0
      lwz       r3, -0x6380(r13)
      li        r4, 0
      bl        0xBEF8
      lwz       r6, 0xA4(r30)
      mr        r3, r31
      lwz       r5, 0xA8(r30)
      addi      r4, r1, 0x8
      lwz       r0, 0xAC(r30)
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      stw       r0, 0x10(r1)
      bl        .loc_0x120
      lwz       r3, -0x6514(r13)
      li        r4, 0x1
      bl        -0x26A78
      li        r0, 0
      stb       r0, 0x34(r31)
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x120:
    */
}

/*
 * --INFO--
 * Address:	80449E04
 * Size:	00009C
 */
void BootSection::runWait(BootSection, bool(const void*, void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      b         .loc_0x78

    .loc_0x28:
      mr        r3, r29
      bl        -0x25E64
      mr        r3, r29
      bl        -0x25E24
      mr        r3, r29
      lwz       r4, 0x2C(r29)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      bl        -0x25E20
      mr        r3, r29
      mr        r12, r30
      bl        -0x388340
      nop
      mr        r0, r3
      mr        r3, r29
      mr        r31, r0
      bl        -0x25E88

    .loc_0x78:
      rlwinm.   r0,r31,0,24,31
      bne+      .loc_0x28
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
 * Size:	000090
 */
void BootSection::waitLoadGameOption()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void BootSection::waitSystemDvdLoad()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80449EA0
 * Size:	000030
 */
void BootSection::waitLoadResource()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, -0x6514(r13)
      bl        -0x2687C
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80449ED0
 * Size:	000084
 */
void BootSection::setMode(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r0, 0x48(r3)
      cmpw      r0, r4
      beq-      .loc_0x70
      stw       r4, 0x48(r31)
      lwz       r0, 0x48(r31)
      cmpwi     r0, 0x4
      beq-      .loc_0x34
      b         .loc_0x70

    .loc_0x34:
      lwz       r3, -0x6514(r13)
      lwz       r4, 0x24(r31)
      lfs       f1, 0x2698(r2)
      lfs       f0, 0x54(r3)
      lwz       r3, 0x4(r4)
      fdivs     f0, f1, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x50(r31)

    .loc_0x70:
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
 * Size:	000008
 */
void BootSection::getModeEpilepsy()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80449F54
 * Size:	000088
 */
void BootSection::setModeEpilepsy()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r0, 0x48(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x74
      li        r0, 0x2
      stw       r0, 0x48(r31)
      lwz       r0, 0x48(r31)
      cmpwi     r0, 0x4
      beq-      .loc_0x38
      b         .loc_0x74

    .loc_0x38:
      lwz       r3, -0x6514(r13)
      lwz       r4, 0x24(r31)
      lfs       f1, 0x2698(r2)
      lfs       f0, 0x54(r3)
      lwz       r3, 0x4(r4)
      fdivs     f0, f1, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x2640(r2)
      stfs      f0, 0x50(r31)

    .loc_0x74:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80449FDC
 * Size:	000008
 */
void BootSection::forceReset()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80449FE4
 * Size:	000030
 */
void Delegate<BootSection>::invoke()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      addi      r12, r4, 0x8
      lwz       r3, 0x4(r3)
      bl        -0x3884D8
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8044A014
 * Size:	000028
 */
void __sinit_bootSection_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x63F0(r13)
      stfsu     f0, -0x3008(r3)
      stfs      f0, -0x63EC(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
