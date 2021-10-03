

/*
 * --INFO--
 * Address:	80307820
 * Size:	000080
 */
void og::Screen::CallBack_CatchPiki::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r0, r30
      mr        r31, r0
      bl        0x109B50
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r3, 0x804E
      stw       r0, 0x0(r31)
      li        r5, 0
      addi      r4, r4, 0x7F2C
      subi      r0, r3, 0x7FF8
      stw       r5, 0x18(r31)
      addi      r3, r30, 0x28
      stw       r4, 0x0(r31)
      stw       r0, 0x0(r30)
      bl        0x21590
      li        r0, 0
      mr        r3, r30
      stw       r0, 0x1C(r30)
      stw       r0, 0x20(r30)
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
 * Address:	803078A0
 * Size:	00003C
 */
void og::Screen::ScaleMgr::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x24
      extsh.    r0, r4
      ble-      .loc_0x24
      bl        -0x2E380C

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803078DC
 * Size:	0000C0
 */
void og::Screen::CallBack_CatchPiki::init((J2DScreen*, unsigned long long,
                                           unsigned long*, JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r25, r3
      mr        r3, r4
      mr        r26, r7
      mr        r27, r8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x20(r25)
      lis       r4, 0x804D
      lis       r3, 0x8051
      li        r28, 0
      stw       r26, 0x1C(r25)
      addi      r30, r4, 0x7AC0
      addi      r29, r3, 0x3BB0
      lis       r31, 0x5449
      lwz       r0, 0x0(r26)
      stw       r0, 0x24(r25)

    .loc_0x58:
      mr        r3, r27
      addi      r4, r31, 0x4D47
      lwz       r12, 0x0(r27)
      lwz       r5, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      addi      r28, r28, 0x1
      stw       r3, 0x0(r29)
      cmpwi     r28, 0x13
      addi      r30, r30, 0x4
      addi      r29, r29, 0x4
      blt+      .loc_0x58
      lwz       r4, 0x0(r26)
      mr        r3, r25
      bl        0x11C
      mr        r3, r25
      lwz       r12, 0x0(r25)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8030799C
 * Size:	0000F0
 */
void og::Screen::CallBack_CatchPiki::update(void)
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
      mr        r30, r3
      lwz       r4, 0x1C(r3)
      cmplwi    r4, 0
      beq-      .loc_0xD0
      lwz       r0, 0x20(r30)
      cmplwi    r0, 0
      beq-      .loc_0xD0
      lwz       r31, 0x0(r4)
      lwz       r0, 0x24(r30)
      cmplw     r31, r0
      beq-      .loc_0x74
      cmplwi    r31, 0x13
      bge-      .loc_0x74
      mr        r4, r31
      bl        .loc_0xF0
      lfs       f1, -0xD38(r2)
      addi      r3, r30, 0x28
      lfs       f2, -0xD34(r2)
      lfs       f3, -0xD30(r2)
      lfs       f4, -0xD2C(r2)
      bl        0x214D0
      stw       r31, 0x24(r30)

    .loc_0x74:
      addi      r3, r30, 0x28
      bl        0x21570
      lwz       r3, 0x20(r30)
      fmr       f31, f1
      lfs       f2, -0xD28(r2)
      li        r4, 0x7A
      lfs       f4, 0x28(r3)
      lfs       f3, 0x20(r3)
      lfs       f1, 0x2C(r3)
      lfs       f0, 0x24(r3)
      fsubs     f4, f4, f3
      lfs       f3, -0xD2C(r2)
      fsubs     f0, f1, f0
      fmuls     f1, f4, f2
      fmuls     f2, f0, f2
      bl        -0x2CF64C
      lwz       r3, 0x20(r30)
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0xD0:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xF0:
    */
}

/*
 * --INFO--
 * Address:	80307A8C
 * Size:	00004C
 */
void og::Screen::CallBack_CatchPiki::setPikiIcon((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0x13
      stw       r0, 0x14(r1)
      bge-      .loc_0x3C
      lwz       r3, 0x20(r3)
      lis       r6, 0x8051
      rlwinm    r0,r4,2,0,29
      li        r5, 0
      lwz       r12, 0x0(r3)
      addi      r4, r6, 0x3BB0
      lwzx      r4, r4, r0
      lwz       r12, 0x110(r12)
      mtctr     r12
      bctrl

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80307AD8
 * Size:	000080
 */
void og::Screen::CallBack_CatchPiki::__dt(void)
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
      subi      r0, r4, 0x7FF8
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
      bl        0x109A60

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x2E3A84

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
