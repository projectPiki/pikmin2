

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
 * Address:	803A102C
 * Size:	0000B8
 */
void Morimura::TCallbackScissor::draw((Graphics&, J2DGrafContext&))
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
      stw       r29, 0x14(r1)
      mr        r29, r3
      addi      r3, r4, 0x190
      lwz       r12, 0x190(r4)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x20(r29)
      lfs       f0, 0x28(r29)
      lfs       f30, 0x1C(r29)
      fsubs     f1, f0, f31
      bl        -0x2DF530
      lfs       f0, 0x24(r29)
      mr        r29, r3
      fsubs     f1, f0, f30
      bl        -0x2DF540
      fmr       f1, f31
      mr        r30, r3
      bl        -0x2DF54C
      fmr       f1, f30
      mr        r31, r3
      bl        -0x2DF558
      mr        r4, r31
      mr        r5, r30
      mr        r6, r29
      bl        -0x2B78DC
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x44(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803A10E4
 * Size:	0000C0
 */
void Morimura::TOffsetMsgSet::__ct((unsigned long long*, unsigned long long,
                                    int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      mr        r31, r7
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r0, 0x0(r3)
      stw       r6, 0xC(r3)
      rlwinm    r3,r7,3,0,28
      stw       r5, 0x8(r29)
      stw       r31, 0x10(r29)
      bl        -0x37D174
      stw       r3, 0x0(r29)
      rlwinm    r3,r31,2,0,29
      bl        -0x37D180
      stw       r3, 0x4(r29)
      mr        r8, r30
      li        r10, 0
      li        r9, 0
      b         .loc_0x94

    .loc_0x60:
      lwz       r0, 0x0(r29)
      addi      r10, r10, 0x1
      lwz       r7, 0x4(r8)
      lwz       r6, 0x0(r8)
      add       r3, r0, r9
      lwz       r5, 0xC(r29)
      addi      r8, r8, 0x8
      lwz       r4, 0x8(r29)
      addi      r9, r9, 0x8
      subc      r0, r7, r5
      stw       r0, 0x4(r3)
      subfe     r0, r4, r6
      stw       r0, 0x0(r3)

    .loc_0x94:
      lwz       r0, 0x10(r29)
      cmpw      r10, r0
      blt+      .loc_0x60
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
 * Address:	803A11A4
 * Size:	000068
 */
void Morimura::TOffsetMsgSet::__ct((unsigned long long*, unsigned long long,
                                    int, unsigned long long*, int*))
{
    /*
    .loc_0x0:
      li        r10, 0
      li        r11, 0
      stw       r10, 0x0(r3)
      stw       r6, 0xC(r3)
      stw       r5, 0x8(r3)
      stw       r7, 0x10(r3)
      stw       r8, 0x0(r3)
      stw       r9, 0x4(r3)
      b         .loc_0x58

    .loc_0x24:
      lwz       r0, 0x0(r3)
      addi      r11, r11, 0x1
      lwz       r9, 0x4(r4)
      lwz       r8, 0x0(r4)
      add       r5, r0, r10
      lwz       r7, 0xC(r3)
      addi      r4, r4, 0x8
      lwz       r6, 0x8(r3)
      addi      r10, r10, 0x8
      subc      r0, r9, r7
      stw       r0, 0x4(r5)
      subfe     r0, r6, r8
      stw       r0, 0x0(r5)

    .loc_0x58:
      lwz       r0, 0x10(r3)
      cmpw      r11, r0
      blt+      .loc_0x24
      blr
    */
}

/*
 * --INFO--
 * Address:	803A120C
 * Size:	00019C
 */
void Morimura::TOffsetMsgSet::getMsgID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x44(r1)
      mr        r0, r5
      stfd      f31, 0x38(r1)
      stmw      r27, 0x24(r1)
      mr        r28, r4
      mr        r31, r3
      li        r4, 0
      b         .loc_0x3C

    .loc_0x2C:
      lwz       r3, 0x4(r31)
      addi      r4, r4, 0x1
      stwx      r0, r3, r5
      addi      r5, r5, 0x4

    .loc_0x3C:
      lwz       r6, 0x10(r31)
      cmpw      r4, r6
      blt+      .loc_0x2C
      lis       r3, 0x6666
      addi      r0, r28, 0x1
      addi      r4, r3, 0x6667
      li        r29, 0x1
      b         .loc_0x70

    .loc_0x5C:
      mulhw     r0, r4, r0
      addi      r29, r29, 0x1
      srawi     r0, r0, 0x2
      rlwinm    r3,r0,1,31,31
      add       r0, r0, r3

    .loc_0x70:
      cmpwi     r0, 0xA
      bge+      .loc_0x5C
      cmpw      r29, r6
      ble-      .loc_0x98
      lis       r3, 0x8049
      li        r4, 0x5B
      addi      r3, r3, 0x51F8
      li        r5, 0
      crclr     6, 0x6
      bl        -0x376C60

    .loc_0x98:
      lfd       f31, 0xF68(r2)
      mr        r27, r29
      addi      r28, r28, 0x1
      rlwinm    r29,r29,2,0,29
      lis       r30, 0x4330
      b         .loc_0xFC

    .loc_0xB0:
      subi      r0, r27, 0x1
      stw       r30, 0x8(r1)
      xoris     r0, r0, 0x8000
      lfd       f1, 0xF60(r2)
      stw       r0, 0xC(r1)
      lfd       f0, 0x8(r1)
      fsub      f2, f0, f31
      bl        -0x2D18CC
      fctiwz    f0, f1
      subi      r0, r29, 0x4
      lwz       r3, 0x4(r31)
      subi      r29, r29, 0x4
      subi      r27, r27, 0x1
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      divw      r5, r28, r4
      mullw     r4, r5, r4
      stwx      r5, r3, r0
      sub       r28, r28, r4

    .loc_0xFC:
      cmpwi     r27, 0x1
      bgt+      .loc_0xB0
      lwz       r3, 0x4(r31)
      li        r10, 0
      mr        r11, r10
      stw       r28, 0x0(r3)
      lwz       r0, 0x10(r31)
      lwz       r3, 0x8(r31)
      lwz       r4, 0xC(r31)
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x184

    .loc_0x12C:
      lwz       r5, 0x4(r31)
      lwzx      r6, r5, r10
      cmpwi     r6, 0
      beq-      .loc_0x178
      lwz       r0, 0x0(r31)
      srawi     r8, r6, 0x1F
      add       r9, r0, r11
      lwz       r0, 0x0(r9)
      lwz       r9, 0x4(r9)
      mullw     r5, r0, r6
      mulhwu    r0, r9, r6
      mullw     r7, r9, r6
      add       r6, r0, r5
      mullw     r5, r9, r8
      addc      r0, r4, r7
      mr        r4, r0
      add       r0, r6, r5
      adde      r0, r3, r0
      mr        r3, r0

    .loc_0x178:
      addi      r10, r10, 0x4
      addi      r11, r11, 0x8
      bdnz+     .loc_0x12C

    .loc_0x184:
      lfd       f31, 0x38(r1)
      lmw       r27, 0x24(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803A13A8
 * Size:	000028
 */
void Morimura::TScreenBase::__ct((JKRArchive*, int))
{
    /*
    .loc_0x0:
      lis       r6, 0x804E
      li        r0, 0
      addi      r6, r6, 0x5890
      stw       r6, 0x0(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      stw       r4, 0xC(r3)
      stw       r5, 0x10(r3)
      stw       r0, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A13D0
 * Size:	000090
 */
void Morimura::TScreenBase::create((char const*, unsigned long))
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
      li        r3, 0x148
      bl        -0x37D554
      mr.       r0, r3
      beq-      .loc_0x3C
      bl        0x939A8
      mr        r0, r3

    .loc_0x3C:
      stw       r0, 0x8(r29)
      mr        r4, r30
      mr        r5, r31
      lwz       r3, 0x8(r29)
      lwz       r6, 0xC(r29)
      bl        -0x361DFC
      lwz       r3, 0x8(r29)
      bl        -0x97628
      lwz       r0, 0x10(r29)
      rlwinm    r3,r0,2,0,29
      bl        -0x37D488
      stw       r3, 0x4(r29)
      lwz       r3, 0x8(r29)
      bl        -0x9E12C
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
 * Address:	803A1460
 * Size:	0000B0
 */
void Morimura::TScreenBase::addAnim((char*))
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
      li        r3, 0x44
      bl        -0x37D5E0
      mr.       r31, r3
      beq-      .loc_0x40
      bl        -0x9C608
      lis       r3, 0x804E
      addi      r0, r3, 0x5880
      stw       r0, 0x0(r31)

    .loc_0x40:
      lwz       r0, 0x14(r29)
      mr        r6, r30
      lwz       r3, 0x4(r29)
      rlwinm    r0,r0,2,0,29
      stwx      r31, r3, r0
      lwz       r0, 0x14(r29)
      lwz       r3, 0x4(r29)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0xC(r29)
      lwzx      r3, r3, r0
      lwz       r5, 0x8(r29)
      bl        -0x9C5A8
      lwz       r0, 0x14(r29)
      lwz       r3, 0x4(r29)
      rlwinm    r0,r0,2,0,29
      lfs       f0, 0xF70(r2)
      lwzx      r3, r3, r0
      stfs      f0, 0x20(r3)
      lwz       r3, 0x14(r29)
      addi      r0, r3, 0x1
      stw       r0, 0x14(r29)
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
 * Address:	........
 * Size:	000048
 */
void og::Screen::AnimScreen::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803A1510
 * Size:	000088
 */
void Morimura::TScreenBase::update(void)
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
      lwz       r3, 0x8(r3)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      li        r30, 0
      li        r31, 0
      b         .loc_0x58

    .loc_0x44:
      lwz       r3, 0x4(r29)
      lwzx      r3, r3, r31
      bl        -0x9C74C
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x58:
      lwz       r0, 0x10(r29)
      cmpw      r30, r0
      blt+      .loc_0x44
      lwz       r3, 0x8(r29)
      bl        -0x360A4C

    .loc_0x6C:
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
 * Address:	803A1598
 * Size:	000038
 */
void Morimura::TScreenBase::draw((Graphics&, J2DPerspGraph*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
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
 * Address:	803A15D0
 * Size:	000124
 */
void Morimura::TIndPane::__ct((char const*, float, float))
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
      stw       r29, 0x14(r1)
      lis       r5, 0x804F
      mr        r29, r3
      subi      r0, r5, 0x4AD8
      lis       r3, 0x804E
      stw       r0, 0x0(r29)
      li        r7, 0
      addi      r6, r2, 0xF74
      addi      r5, r3, 0x586C
      stw       r7, 0x10(r29)
      fmr       f30, f1
      lfs       f0, 0xF7C(r2)
      fmr       f31, f2
      stw       r7, 0xC(r29)
      li        r0, 0x1
      mr        r30, r4
      stw       r7, 0x8(r29)
      li        r3, 0x40
      stw       r7, 0x4(r29)
      stw       r6, 0x14(r29)
      stw       r5, 0x0(r29)
      stw       r7, 0x18(r29)
      stw       r7, 0x1C(r29)
      stw       r7, 0x20(r29)
      stfs      f0, 0x34(r29)
      stfs      f0, 0x38(r29)
      sth       r7, 0x3C(r29)
      stfs      f0, 0x40(r29)
      stb       r0, 0x44(r29)
      bl        -0x37D7C4
      mr.       r31, r3
      beq-      .loc_0xD0
      mr        r3, r30
      bl        -0x360B9C
      li        r0, 0
      mr        r4, r3
      stw       r0, 0x28(r31)
      mr        r3, r31
      li        r5, 0
      bl        -0x36E60C
      lbz       r0, 0x3B(r31)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r31)

    .loc_0xD0:
      stw       r31, 0x18(r29)
      mr        r3, r29
      lfs       f1, 0xF80(r2)
      lfs       f0, 0xF7C(r2)
      stfs      f1, 0x38(r29)
      stfs      f1, 0x34(r29)
      stfs      f0, 0x24(r29)
      stfs      f0, 0x28(r29)
      stfs      f30, 0x2C(r29)
      stfs      f31, 0x30(r29)
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x44(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803A16F4
 * Size:	0000A4
 */
void Morimura::TIndPane::createIndTexture((char const*))
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
      li        r3, 0x40
      bl        -0x37D874
      mr.       r31, r3
      beq-      .loc_0x5C
      mr        r3, r30
      bl        -0x360C4C
      li        r0, 0
      mr        r4, r3
      stw       r0, 0x28(r31)
      mr        r3, r31
      li        r5, 0
      bl        -0x36E6BC
      lbz       r0, 0x3B(r31)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r31)

    .loc_0x5C:
      stw       r31, 0x1C(r29)
      lwz       r0, 0x1C(r29)
      cmplwi    r0, 0
      bne-      .loc_0x88
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x51F8
      li        r4, 0xE8
      addi      r5, r5, 0x5204
      crclr     6, 0x6
      bl        -0x377138

    .loc_0x88:
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
 * Address:	803A1798
 * Size:	000074
 */
void Morimura::TIndPane::createCaptureTexture((_GXTexFmt))
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
      li        r3, 0x40
      bl        -0x37D914
      mr.       r0, r3
      beq-      .loc_0x58
      lfs       f1, 0x2C(r30)
      mr        r6, r31
      lfs       f0, 0x30(r30)
      fctiwz    f1, f1
      fctiwz    f0, f0
      stfd      f1, 0x8(r1)
      stfd      f0, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r5, 0x14(r1)
      bl        -0x36E8CC
      mr        r0, r3

    .loc_0x58:
      stw       r0, 0x20(r30)
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
 * Address:	803A180C
 * Size:	000308
 */
void Morimura::TIndPane::draw(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x160(r1)
      mflr      r0
      lfs       f1, 0xF7C(r2)
      stw       r0, 0x164(r1)
      fmr       f2, f1
      lfs       f3, 0xF84(r2)
      stw       r31, 0x15C(r1)
      mr        r31, r3
      lfs       f4, 0xF88(r2)
      addi      r3, r1, 0x80
      lfs       f5, 0xF8C(r2)
      lfs       f6, 0xF90(r2)
      bl        -0x36C264
      addi      r3, r1, 0x80
      bl        -0x36C188
      lwz       r0, 0x18(r31)
      cmplwi    r0, 0
      bne-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x51F8
      li        r4, 0x105
      addi      r5, r5, 0x5204
      crclr     6, 0x6
      bl        -0x37722C

    .loc_0x64:
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x8C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x51F8
      li        r4, 0x106
      addi      r5, r5, 0x5204
      crclr     6, 0x6
      bl        -0x377254

    .loc_0x8C:
      lwz       r3, 0x18(r31)
      li        r4, 0
      bl        -0x36E270
      lwz       r3, 0x1C(r31)
      li        r4, 0x1
      bl        -0x36E27C
      li        r3, 0x1
      bl        -0x2B8CFC
      li        r3, 0x1
      bl        -0x2B9568
      li        r3, 0
      bl        -0x2BAA60
      li        r3, 0x1
      bl        -0x2BC930
      li        r3, 0
      li        r4, 0x1
      li        r5, 0x4
      li        r6, 0x1E
      li        r7, 0
      li        r8, 0x7D
      bl        -0x2BCBCC
      li        r3, 0
      li        r4, 0
      li        r5, 0x1
      bl        -0x2B9690
      li        r3, 0
      li        r4, 0
      li        r5, 0
      bl        -0x2B97E4
      lbz       r0, 0x44(r31)
      cmplwi    r0, 0
      beq-      .loc_0x134
      lfs       f0, 0x34(r31)
      lfs       f1, 0xF7C(r2)
      stfs      f0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f1, 0x14(r1)
      lfs       f0, 0x38(r31)
      stfs      f0, 0x18(r1)
      stfs      f1, 0x1C(r1)
      b         .loc_0x18C

    .loc_0x134:
      lfs       f1, 0xF94(r2)
      addi      r3, r1, 0x50
      lfs       f0, 0x40(r31)
      li        r4, 0x7A
      fmuls     f1, f1, f0
      bl        -0x2B7440
      lfs       f5, 0xF70(r2)
      lfs       f1, 0x50(r1)
      lfs       f0, 0x54(r1)
      lfs       f2, 0xF7C(r2)
      fmuls     f4, f5, f1
      lfs       f1, 0x60(r1)
      fmuls     f3, f5, f0
      lfs       f0, 0x64(r1)
      fmuls     f1, f5, f1
      stfs      f4, 0x8(r1)
      fmuls     f0, f5, f0
      stfs      f3, 0xC(r1)
      stfs      f2, 0x10(r1)
      stfs      f1, 0x14(r1)
      stfs      f0, 0x18(r1)
      stfs      f2, 0x1C(r1)

    .loc_0x18C:
      lha       r0, 0x3C(r31)
      addi      r4, r1, 0x8
      li        r3, 0x1
      extsb     r5, r0
      bl        -0x2B99FC
      li        r3, 0
      li        r4, 0
      li        r5, 0x1
      li        r6, 0
      li        r7, 0x1
      bl        -0x2B9600
      li        r3, 0
      li        r4, 0
      li        r5, 0
      li        r6, 0xFF
      bl        -0x2B8FB8
      li        r3, 0
      li        r4, 0x3
      bl        -0x2B9564
      bl        -0x2BD314
      li        r3, 0x9
      li        r4, 0x1
      bl        -0x2BD76C
      li        r3, 0xD
      li        r4, 0x1
      bl        -0x2BD778
      li        r3, 0
      li        r4, 0x9
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x2BD30C
      li        r3, 0
      li        r4, 0xD
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x2BD324
      addi      r3, r1, 0x20
      bl        -0x2B7794
      addi      r3, r1, 0x20
      li        r4, 0
      bl        -0x2B84C8
      addi      r3, r1, 0x20
      li        r4, 0x1E
      li        r5, 0x1
      bl        -0x2B8404
      li        r3, 0
      bl        -0x2B8440
      li        r3, 0x80
      li        r4, 0
      li        r5, 0x4
      bl        -0x2BC0E0
      lfs       f3, 0x28(r31)
      lis       r4, 0x804A
      lfs       f0, 0x24(r31)
      lis       r5, 0xCC01
      lis       r3, 0x804A
      lfs       f2, 0xF7C(r2)
      stfs      f0, -0x8000(r5)
      addi      r4, r4, 0x600
      lfs       f1, 0xF90(r2)
      addi      r0, r3, 0x650
      stfs      f3, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      lfs       f3, 0x28(r31)
      lfs       f0, 0x2C(r31)
      stfs      f0, -0x8000(r5)
      stfs      f3, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      stfs      f1, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      lfs       f3, 0x30(r31)
      lfs       f0, 0x2C(r31)
      stfs      f0, -0x8000(r5)
      stfs      f3, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      stfs      f1, -0x8000(r5)
      stfs      f1, -0x8000(r5)
      lfs       f3, 0x30(r31)
      lfs       f0, 0x24(r31)
      stfs      f0, -0x8000(r5)
      stfs      f3, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      stfs      f2, -0x8000(r5)
      stfs      f1, -0x8000(r5)
      stw       r4, 0x80(r1)
      stw       r0, 0x80(r1)
      lwz       r31, 0x15C(r1)
      lwz       r0, 0x164(r1)
      mtlr      r0
      addi      r1, r1, 0x160
      blr
    */
}

/*
 * --INFO--
 * Address:	803A1B14
 * Size:	0000A8
 */
void Morimura::TScaleUpCounter::setValue((bool, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0xA9(r3)
      cmplwi    r0, 0
      beq-      .loc_0x30
      li        r4, 0
      li        r5, 0
      bl        -0x95AB8
      b         .loc_0x94

    .loc_0x30:
      rlwinm.   r0,r4,0,24,31
      bne-      .loc_0x4C
      rlwinm.   r0,r5,0,24,31
      bne-      .loc_0x4C
      lbz       r0, 0xA8(r31)
      cmplwi    r0, 0
      beq-      .loc_0x90

    .loc_0x4C:
      li        r0, 0
      stb       r0, 0xA8(r31)
      lbz       r0, 0xAA(r31)
      cmplwi    r0, 0
      beq-      .loc_0x7C
      mr        r3, r31
      li        r4, 0x1
      li        r5, 0
      bl        -0x95AFC
      li        r0, 0
      stb       r0, 0xAA(r31)
      b         .loc_0x94

    .loc_0x7C:
      mr        r3, r31
      li        r4, 0
      li        r5, 0x1
      bl        -0x95B18
      b         .loc_0x94

    .loc_0x90:
      bl        -0x95B20

    .loc_0x94:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A1BBC
 * Size:	000060
 */
void Morimura::TScaleUpCounter::forceScaleUp((bool))
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
      lbz       r0, 0x86(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      li        r4, 0x1
      bl        -0x96410
      li        r0, 0x1
      stb       r0, 0xA8(r30)
      b         .loc_0x44

    .loc_0x3C:
      li        r4, 0
      bl        -0x96424

    .loc_0x44:
      stb       r31, 0xAA(r30)
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
 * Address:	803A1C1C
 * Size:	000040
 */
void Morimura::TScaleUpCounter::setScale((float, float))
{
    /*
    .loc_0x0:
      lfs       f0, 0xAC(r3)
      li        r6, 0
      li        r5, 0
      fmuls     f0, f0, f1
      stfs      f0, 0x34(r3)
      b         .loc_0x30

    .loc_0x18:
      lwz       r4, 0x7C(r3)
      addi      r6, r6, 0x1
      lwzx      r4, r4, r5
      addi      r5, r5, 0x4
      stfs      f1, 0xC(r4)
      stfs      f2, 0x10(r4)

    .loc_0x30:
      lhz       r0, 0x2C(r3)
      cmpw      r6, r0
      blt+      .loc_0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	803A1C5C
 * Size:	0001A4
 */
void Morimura::setScaleUpCounter(P2DScreen::Mgr*, unsigned long long,
                                 unsigned long*, unsigned short, JKRArchive*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r16, 0x10(r1)
      mr        r26, r6
      mr        r27, r5
      mr        r25, r3
      mr        r28, r7
      mr        r29, r8
      mr        r30, r9
      mr        r4, r26
      mr        r3, r27
      li        r5, 0x1
      li        r6, 0x1
      bl        -0x9F374
      mr        r22, r4
      mr        r23, r3
      mr        r4, r26
      mr        r3, r27
      li        r5, 0x1
      li        r6, 0x2
      bl        -0x9F390
      mr        r20, r4
      mr        r21, r3
      li        r31, 0x1
      li        r24, 0x3
      mr        r18, r20
      mr        r19, r21
      b         .loc_0xD8

    .loc_0x74:
      mr        r4, r26
      mr        r3, r27
      mr        r6, r24
      li        r5, 0x1
      bl        -0x9F3C0
      lwz       r12, 0x0(r25)
      mr        r0, r3
      mr        r17, r4
      mr        r3, r25
      lwz       r12, 0x3C(r12)
      mr        r16, r0
      mr        r6, r17
      mr        r5, r16
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      bne-      .loc_0xC4
      subi      r0, r24, 0x1
      rlwinm    r31,r0,0,16,31
      b         .loc_0xE4

    .loc_0xC4:
      li        r0, 0
      mr        r18, r17
      stb       r0, 0xB0(r3)
      mr        r19, r16
      addi      r24, r24, 0x1

    .loc_0xD8:
      rlwinm    r0,r24,0,16,31
      cmplwi    r0, 0xA
      ble+      .loc_0x74

    .loc_0xE4:
      li        r3, 0xB0
      bl        -0x37DEA0
      mr.       r24, r3
      beq-      .loc_0x130
      lis       r4, 0x804D
      mr        r5, r29
      addi      r4, r4, 0x7E18
      mr        r6, r31
      mr        r7, r30
      bl        -0x96840
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0xF7C(r2)
      stw       r3, 0x0(r24)
      stb       r0, 0xA8(r24)
      stb       r0, 0xA9(r24)
      stb       r0, 0xAA(r24)
      stfs      f0, 0xAC(r24)

    .loc_0x130:
      stw       r28, 0x8(r1)
      li        r0, 0x1
      mr        r3, r24
      mr        r4, r25
      stw       r0, 0xC(r1)
      mr        r6, r22
      mr        r5, r23
      mr        r8, r20
      lwz       r12, 0x0(r24)
      mr        r7, r21
      mr        r10, r18
      mr        r9, r19
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r24
      li        r4, 0x1
      bl        -0x965F8
      mr        r3, r25
      mr        r6, r26
      mr        r5, r27
      mr        r7, r24
      bl        0x92D40
      mr        r3, r24
      lmw       r16, 0x10(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	803A1E00
 * Size:	00012C
 */
void Morimura::setScaleUpCounter2(P2DScreen::Mgr*, unsigned long long,
                                  unsigned long long, unsigned long*,
                                  unsigned short, JKRArchive*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r23, 0x1C(r1)
      mr        r26, r3
      mr        r28, r5
      mr        r27, r6
      mr        r30, r7
      mr        r29, r8
      mr        r31, r9
      mr        r23, r10
      lwz       r24, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r6, r29
      stb       r0, 0xB0(r3)
      mr        r3, r26
      mr        r5, r30
      lwz       r12, 0x0(r26)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0xB0(r3)
      li        r3, 0xB0
      bl        -0x37DFCC
      mr.       r25, r3
      beq-      .loc_0xB8
      lis       r4, 0x804D
      mr        r5, r23
      addi      r4, r4, 0x7E18
      mr        r7, r24
      li        r6, 0x2
      bl        -0x9696C
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0xF7C(r2)
      stw       r3, 0x0(r25)
      stb       r0, 0xA8(r25)
      stb       r0, 0xA9(r25)
      stb       r0, 0xAA(r25)
      stfs      f0, 0xAC(r25)

    .loc_0xB8:
      stw       r31, 0x8(r1)
      li        r0, 0x1
      mr        r3, r25
      mr        r4, r26
      stw       r0, 0xC(r1)
      mr        r6, r27
      mr        r5, r28
      mr        r8, r29
      lwz       r12, 0x0(r25)
      mr        r7, r30
      mr        r10, r29
      mr        r9, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r25
      li        r4, 0x1
      bl        -0x96724
      mr        r3, r26
      mr        r6, r27
      mr        r5, r28
      mr        r7, r25
      bl        0x92C14
      mr        r3, r25
      lmw       r23, 0x1C(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803A1F2C
 * Size:	0000B8
 */
void Morimura::TScissorPane::drawSelf((float, float, float (*)[3][4]))
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
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r29, r3
      addi      r3, r1, 0x8
      bl        -0x2B7CBC
      addi      r3, r1, 0x8
      li        r4, 0
      bl        -0x2B89F0
      lfs       f31, 0x1AC(r29)
      lfs       f0, 0x1B4(r29)
      lfs       f30, 0x1A8(r29)
      fsubs     f1, f0, f31
      bl        -0x2E0430
      lfs       f0, 0x1B0(r29)
      mr        r29, r3
      fsubs     f1, f0, f30
      bl        -0x2E0440
      fmr       f1, f31
      mr        r30, r3
      bl        -0x2E044C
      fmr       f1, f30
      mr        r31, r3
      bl        -0x2E0458
      mr        r4, r31
      mr        r5, r30
      mr        r6, r29
      bl        -0x2B87DC
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r0, 0x74(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	803A1FE4
 * Size:	000060
 */
void Morimura::TScissorPane::__dt(void)
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
      lis       r5, 0x804E
      li        r4, 0
      addi      r0, r5, 0x56F0
      stw       r0, 0x0(r30)
      bl        -0x34CDC8
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x37DF70

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
 * Address:	803A2044
 * Size:	000090
 */
void Morimura::TScaleUpCounter::__dt(void)
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
      addi      r0, r4, 0x583C
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804E
      subi      r0, r4, 0x7E38
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
      bl        0x6F4E4

    .loc_0x64:
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        -0x37E000

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

/*
 * --INFO--
 * Address:	803A20D4
 * Size:	000080
 */
void Morimura::TCallbackScissor::__dt(void)
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
      addi      r0, r4, 0x58A4
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
      bl        0x6F464

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x37E080

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
