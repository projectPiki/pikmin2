

/*
 * --INFO--
 * Address:	80036AF0
 * Size:	0000C0
 */
void J2DPane::J2DPane()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x14(r1)
      addi      r0, r4, 0x698
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      addi      r31, r30, 0xDC
      stw       r0, 0x0(r3)
      mr        r3, r31
      bl        -0x1024C
      mr        r4, r30
      addi      r3, r31, 0xC
      bl        -0x10370
      li        r4, 0
      lis       r3, 0x5041
      stw       r4, 0xF8(r30)
      addi      r3, r3, 0x4E31
      li        r0, 0x1
      lfs       f0, -0x7BA0(r2)
      stw       r3, 0x8(r30)
      mr        r3, r30
      stb       r0, 0xB0(r30)
      stw       r4, 0x14(r30)
      stw       r4, 0x10(r30)
      stw       r4, 0x1C(r30)
      stw       r4, 0x18(r30)
      stfs      f0, 0x20(r30)
      stfs      f0, 0x24(r30)
      stfs      f0, 0x28(r30)
      stfs      f0, 0x2C(r30)
      bl        0xBC
      mr        r3, r30
      li        r4, 0
      bl        0x8AC
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
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
 * Address:	80036BB0
 * Size:	000040
 */
void J2DPane::calcMtx()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0xEC(r3)
      cmplwi    r0, 0
      beq-      .loc_0x30
      lwz       r12, 0x0(r3)
      lfs       f1, 0xD4(r3)
      lwz       r12, 0x44(r12)
      lfs       f2, 0xD8(r3)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80036BF0
 * Size:	00003C
 */
void J2DPane::makeMatrix(float, float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lfs       f3, 0x20(r3)
      lfs       f0, 0x24(r3)
      lwz       r12, 0x48(r12)
      fneg      f3, f3
      fneg      f4, f0
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
 * Size:	000074
 */
void JSUTree<J2DPane>::~JSUTree()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<J2DPane>::~JSULink()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<J2DPane>::~JSUList()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80036C2C
 * Size:	000088
 */
void J2DPane::initiate()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x1
      lfs       f1, -0x7BA0(r2)
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x1
      li        r6, 0
      li        r5, 0x7A
      sth       r0, 0x4(r3)
      li        r4, 0xFF
      lfs       f0, -0x7B9C(r2)
      li        r0, 0x1
      stfs      f1, 0xB8(r3)
      stfs      f1, 0xBC(r3)
      stfs      f1, 0xC0(r3)
      stfs      f1, 0xC4(r3)
      stfs      f1, 0xC8(r3)
      stb       r6, 0xB7(r3)
      stb       r5, 0xB6(r3)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      stb       r6, 0xB1(r3)
      stb       r4, 0xB2(r3)
      stb       r0, 0xB4(r3)
      stb       r4, 0xB3(r3)
      stb       r6, 0xB5(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
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
 * Address:	80036CB4
 * Size:	000088
 */
void J2DPane::J2DPane(J2DPane*, bool, unsigned long long,
                      const JGeometry::TBox2<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804A
      stw       r0, 0x34(r1)
      addi      r0, r6, 0x698
      stmw      r25, 0x14(r1)
      mr        r25, r3
      addi      r26, r25, 0xDC
      mr        r27, r4
      mr        r28, r5
      mr        r30, r7
      mr        r29, r8
      mr        r31, r9
      stw       r0, 0x0(r3)
      mr        r3, r26
      bl        -0x10420
      mr        r4, r25
      addi      r3, r26, 0xC
      bl        -0x10544
      li        r0, 0
      mr        r3, r25
      stw       r0, 0xF8(r25)
      mr        r4, r27
      mr        r5, r28
      mr        r8, r29
      mr        r7, r30
      mr        r9, r31
      bl        .loc_0x88
      mr        r3, r25
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x88:
    */
}

/*
 * --INFO--
 * Address:	80036D3C
 * Size:	000120
 */
void J2DPane::initialize(J2DPane*, bool, unsigned long long,
                         const JGeometry::TBox2<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r6, 0x5041
      lfs       f3, 0x0(r9)
      stw       r0, 0x14(r1)
      li        r0, 0
      lfs       f2, 0x4(r9)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      lfs       f1, 0x8(r9)
      stw       r30, 0x8(r1)
      mr        r30, r3
      addi      r3, r6, 0x4E31
      lfs       f0, 0xC(r9)
      stw       r3, 0x8(r30)
      stb       r5, 0xB0(r30)
      stw       r8, 0x14(r30)
      stw       r7, 0x10(r30)
      stw       r0, 0x1C(r30)
      stw       r0, 0x18(r30)
      stfs      f3, 0x20(r30)
      stfs      f2, 0x24(r30)
      stfs      f1, 0x28(r30)
      stfs      f0, 0x2C(r30)
      beq-      .loc_0x78
      addic.    r4, r30, 0xDC
      beq-      .loc_0x70
      addi      r4, r4, 0xC

    .loc_0x70:
      addi      r3, r31, 0xDC
      bl        -0x104CC

    .loc_0x78:
      lis       r3, 0x1
      lfs       f1, -0x7BA0(r2)
      subi      r0, r3, 0x1
      li        r6, 0
      sth       r0, 0x4(r30)
      li        r5, 0x7A
      lfs       f0, -0x7B9C(r2)
      li        r4, 0xFF
      stfs      f1, 0xB8(r30)
      li        r0, 0x1
      mr        r3, r30
      stfs      f1, 0xBC(r30)
      stfs      f1, 0xC0(r30)
      stfs      f1, 0xC4(r30)
      stfs      f1, 0xC8(r30)
      stb       r6, 0xB7(r30)
      stb       r5, 0xB6(r30)
      stfs      f0, 0xCC(r30)
      stfs      f0, 0xD0(r30)
      stb       r6, 0xB1(r30)
      stb       r4, 0xB2(r30)
      stb       r0, 0xB4(r30)
      stb       r4, 0xB3(r30)
      stb       r6, 0xB5(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r31
      bl        0x5FC
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
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
 * Address:	80036E5C
 * Size:	000078
 */
void J2DPane::J2DPane(unsigned long long, const JGeometry::TBox2<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      addi      r0, r4, 0x698
      stmw      r27, 0xC(r1)
      mr        r27, r3
      addi      r28, r27, 0xDC
      mr        r30, r5
      mr        r29, r6
      mr        r31, r7
      stw       r0, 0x0(r3)
      mr        r3, r28
      bl        -0x105C0
      mr        r4, r27
      addi      r3, r28, 0xC
      bl        -0x106E4
      li        r0, 0
      mr        r3, r27
      stw       r0, 0xF8(r27)
      mr        r6, r29
      mr        r5, r30
      mr        r7, r31
      bl        .loc_0x78
      mr        r3, r27
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x78:
    */
}

/*
 * --INFO--
 * Address:	80036ED4
 * Size:	0000F4
 */
void J2DPane::initialize(unsigned long long, const JGeometry::TBox2<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r8, 0x5041
      li        r10, 0x1
      stw       r0, 0x14(r1)
      addi      r0, r8, 0x4E31
      lis       r4, 0x1
      li        r9, 0
      stw       r31, 0xC(r1)
      subi      r8, r4, 0x1
      lfs       f5, 0x0(r7)
      li        r4, 0x7A
      stw       r0, 0x8(r3)
      li        r0, 0xFF
      lfs       f4, 0x4(r7)
      mr        r31, r3
      stb       r10, 0xB0(r3)
      lfs       f3, 0x8(r7)
      stw       r6, 0x14(r3)
      lfs       f2, 0xC(r7)
      stw       r5, 0x10(r3)
      lfs       f1, -0x7BA0(r2)
      stw       r9, 0x1C(r3)
      lfs       f0, -0x7B9C(r2)
      stw       r9, 0x18(r3)
      stfs      f5, 0x20(r3)
      stfs      f4, 0x24(r3)
      stfs      f3, 0x28(r3)
      stfs      f2, 0x2C(r3)
      sth       r8, 0x4(r3)
      stfs      f1, 0xB8(r3)
      stfs      f1, 0xBC(r3)
      stfs      f1, 0xC0(r3)
      stfs      f1, 0xC4(r3)
      stfs      f1, 0xC8(r3)
      stb       r9, 0xB7(r3)
      stb       r4, 0xB6(r3)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      stb       r9, 0xB1(r3)
      stb       r0, 0xB2(r3)
      stb       r10, 0xB4(r3)
      stb       r0, 0xB3(r3)
      stb       r9, 0xB5(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0
      bl        0x48C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
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
 * Address:	80036FC8
 * Size:	000120
 */
void J2DPane::J2DPane(J2DPane*, JSURandomInputStream*, unsigned char)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r7, 0x804A
      stw       r0, 0x34(r1)
      addi      r0, r7, 0x698
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      addi      r28, r27, 0xDC
      mr        r29, r4
      mr        r30, r5
      mr        r31, r6
      stw       r0, 0x0(r3)
      mr        r3, r28
      bl        -0x1072C
      mr        r4, r27
      addi      r3, r28, 0xC
      bl        -0x10850
      li        r3, 0
      rlwinm.   r0,r31,0,24,31
      stw       r3, 0xF8(r27)
      bne-      .loc_0xB0
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r3, r30
      addi      r4, r1, 0x10
      li        r5, 0x8
      bl        -0x10C6C
      lwz       r0, 0x10(r1)
      mr        r3, r27
      mr        r4, r29
      mr        r5, r30
      stw       r0, 0x8(r27)
      lwz       r0, 0x14(r1)
      add       r31, r31, r0
      bl        .loc_0x120
      mr        r3, r30
      mr        r4, r31
      li        r5, 0
      bl        -0x10968
      b         .loc_0x108

    .loc_0xB0:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r3, r30
      addi      r4, r1, 0x8
      li        r5, 0x8
      bl        -0x10A50
      lwz       r0, 0x8(r1)
      mr        r3, r27
      mr        r4, r29
      mr        r5, r30
      stw       r0, 0x8(r27)
      lwz       r0, 0xC(r1)
      add       r31, r31, r0
      bl        0x2040
      mr        r3, r30
      mr        r4, r31
      li        r5, 0
      bl        -0x109C4

    .loc_0x108:
      mr        r3, r27
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x120:
    */
}

/*
 * --INFO--
 * Address:	800370E8
 * Size:	000340
 */
void J2DPane::makePaneStream(J2DPane*, JSURandomInputStream*)
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
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r31, r5
      mr        r29, r3
      mr        r30, r4
      addi      r4, r1, 0xB
      mr        r3, r31
      li        r5, 0x1
      bl        -0x10D5C
      mr        r3, r31
      addi      r4, r29, 0xB0
      li        r5, 0x1
      bl        -0x10D6C
      mr        r3, r31
      li        r4, 0x2
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      addi      r4, r1, 0x18
      li        r5, 0x4
      bl        -0x10D94
      lwz       r5, 0x18(r1)
      li        r0, 0
      mr        r3, r31
      addi      r4, r1, 0x14
      stw       r5, 0x14(r29)
      li        r5, 0x2
      stw       r0, 0x10(r29)
      bl        -0x10DB4
      lha       r4, 0x14(r1)
      lis       r0, 0x4330
      stw       r0, 0x20(r1)
      mr        r3, r31
      xoris     r0, r4, 0x8000
      lfd       f1, -0x7B98(r2)
      stw       r0, 0x24(r1)
      addi      r4, r1, 0x12
      li        r5, 0x2
      lfd       f0, 0x20(r1)
      fsubs     f31, f0, f1
      bl        -0x10DE4
      lha       r4, 0x12(r1)
      lis       r0, 0x4330
      stw       r0, 0x28(r1)
      mr        r3, r31
      xoris     r0, r4, 0x8000
      lfd       f1, -0x7B98(r2)
      stw       r0, 0x2C(r1)
      addi      r4, r1, 0x10
      li        r5, 0x2
      lfd       f0, 0x28(r1)
      fsubs     f30, f0, f1
      bl        -0x10E14
      lha       r4, 0x10(r1)
      lis       r0, 0x4330
      stw       r0, 0x30(r1)
      mr        r3, r31
      xoris     r0, r4, 0x8000
      lfd       f1, -0x7B98(r2)
      stw       r0, 0x34(r1)
      addi      r4, r1, 0xE
      li        r5, 0x2
      lfd       f0, 0x30(r1)
      fsubs     f0, f0, f1
      fadds     f29, f31, f0
      bl        -0x10E48
      lha       r3, 0xE(r1)
      lis       r0, 0x4330
      stw       r0, 0x38(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, -0x7B98(r2)
      stw       r0, 0x3C(r1)
      lfs       f0, -0x7BA0(r2)
      lfd       f1, 0x38(r1)
      stfs      f31, 0x20(r29)
      fsubs     f1, f1, f2
      stfs      f30, 0x24(r29)
      fadds     f1, f30, f1
      stfs      f29, 0x28(r29)
      stfs      f1, 0x2C(r29)
      lbz       r3, 0xB(r1)
      subi      r0, r3, 0x6
      stb       r0, 0xB(r1)
      stfs      f0, 0xB8(r29)
      stfs      f0, 0xBC(r29)
      stfs      f0, 0xC0(r29)
      lbz       r0, 0xB(r1)
      cmplwi    r0, 0
      beq-      .loc_0x1D0
      mr        r3, r31
      addi      r4, r1, 0xC
      li        r5, 0x2
      bl        -0x10EB4
      lhz       r3, 0xC(r1)
      lis       r0, 0x4330
      stw       r0, 0x38(r1)
      lfd       f1, -0x7B90(r2)
      stw       r3, 0x3C(r1)
      lfd       f0, 0x38(r1)
      fsubs     f0, f0, f1
      stfs      f0, 0xC0(r29)
      lbz       r3, 0xB(r1)
      subi      r0, r3, 0x1
      stb       r0, 0xB(r1)

    .loc_0x1D0:
      lbz       r0, 0xB(r1)
      cmplwi    r0, 0
      beq-      .loc_0x204
      mr        r3, r31
      addi      r4, r1, 0xA
      li        r5, 0x1
      bl        -0x10EFC
      lbz       r0, 0xA(r1)
      stb       r0, 0xB7(r29)
      lbz       r3, 0xB(r1)
      subi      r0, r3, 0x1
      stb       r0, 0xB(r1)
      b         .loc_0x20C

    .loc_0x204:
      li        r0, 0
      stb       r0, 0xB7(r29)

    .loc_0x20C:
      li        r3, 0x7A
      li        r0, 0xFF
      stb       r3, 0xB6(r29)
      stb       r0, 0xB2(r29)
      lbz       r0, 0xB(r1)
      cmplwi    r0, 0
      beq-      .loc_0x24C
      mr        r3, r31
      addi      r4, r1, 0x9
      li        r5, 0x1
      bl        -0x10F48
      lbz       r0, 0x9(r1)
      stb       r0, 0xB2(r29)
      lbz       r3, 0xB(r1)
      subi      r0, r3, 0x1
      stb       r0, 0xB(r1)

    .loc_0x24C:
      li        r0, 0x1
      stb       r0, 0xB4(r29)
      lbz       r0, 0xB(r1)
      cmplwi    r0, 0
      beq-      .loc_0x290
      mr        r3, r31
      addi      r4, r1, 0x8
      li        r5, 0x1
      bl        -0x10F80
      lbz       r3, 0x8(r1)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r0,r0,1,31,31
      stb       r0, 0xB4(r29)
      lbz       r3, 0xB(r1)
      subi      r0, r3, 0x1
      stb       r0, 0xB(r1)

    .loc_0x290:
      mr        r3, r31
      li        r4, 0x4
      bl        -0x10E1C
      cmplwi    r30, 0
      beq-      .loc_0x2B8
      addic.    r4, r29, 0xDC
      beq-      .loc_0x2B0
      addi      r4, r4, 0xC

    .loc_0x2B0:
      addi      r3, r30, 0xDC
      bl        -0x10AB8

    .loc_0x2B8:
      li        r5, 0
      lis       r3, 0x1
      stb       r5, 0xB1(r29)
      li        r4, 0xFF
      subi      r0, r3, 0x1
      lfs       f0, -0x7B9C(r2)
      stb       r4, 0xB3(r29)
      mr        r3, r29
      mr        r4, r30
      stb       r5, 0xB5(r29)
      sth       r0, 0x4(r29)
      stfs      f0, 0xCC(r29)
      stfs      f0, 0xD0(r29)
      stw       r5, 0x1C(r29)
      stw       r5, 0x18(r29)
      bl        .loc_0x340
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r0, 0x84(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr

    .loc_0x340:
    */
}

/*
 * --INFO--
 * Address:	80037428
 * Size:	0001BC
 */
void J2DPane::changeUseTrans(J2DPane*)
{
    /*
    .loc_0x0:
      lis       r5, 0x5555
      lbz       r6, 0xB7(r3)
      addi      r0, r5, 0x5556
      lfs       f3, -0x7BA0(r2)
      mulhw     r5, r0, r6
      fmr       f4, f3
      rlwinm    r0,r5,1,31,31
      add       r0, r5, r0
      mulli     r0, r0, 0x3
      sub       r0, r6, r0
      cmpwi     r0, 0x1
      bne-      .loc_0x48
      lfs       f2, 0x28(r3)
      lfs       f1, 0x20(r3)
      lfs       f0, -0x7B88(r2)
      fsubs     f1, f2, f1
      fmuls     f3, f1, f0
      b         .loc_0x5C

    .loc_0x48:
      cmpwi     r0, 0x2
      bne-      .loc_0x5C
      lfs       f1, 0x28(r3)
      lfs       f0, 0x20(r3)
      fsubs     f3, f1, f0

    .loc_0x5C:
      lis       r5, 0x5555
      addi      r0, r5, 0x5556
      mulhw     r5, r0, r6
      rlwinm    r0,r5,1,31,31
      add       r0, r5, r0
      cmpwi     r0, 0x1
      bne-      .loc_0x90
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x24(r3)
      lfs       f0, -0x7B88(r2)
      fsubs     f1, f2, f1
      fmuls     f4, f1, f0
      b         .loc_0xA4

    .loc_0x90:
      cmpwi     r0, 0x2
      bne-      .loc_0xA4
      lfs       f1, 0x2C(r3)
      lfs       f0, 0x24(r3)
      fsubs     f4, f1, f0

    .loc_0xA4:
      lfs       f0, 0x20(r3)
      cmplwi    r4, 0
      fadds     f0, f0, f3
      stfs      f0, 0xD4(r3)
      lfs       f0, 0x24(r3)
      fadds     f0, f0, f4
      stfs      f0, 0xD8(r3)
      stfs      f3, 0xC4(r3)
      stfs      f4, 0xC8(r3)
      lfs       f0, 0xD4(r3)
      lfs       f1, 0xD8(r3)
      fneg      f2, f0
      lfs       f0, 0x20(r3)
      fneg      f1, f1
      fadds     f0, f0, f2
      stfs      f0, 0x20(r3)
      lfs       f0, 0x24(r3)
      fadds     f0, f0, f1
      stfs      f0, 0x24(r3)
      lfs       f0, 0x28(r3)
      fadds     f0, f0, f2
      stfs      f0, 0x28(r3)
      lfs       f0, 0x2C(r3)
      fadds     f0, f0, f1
      stfs      f0, 0x2C(r3)
      beqlr-
      lis       r5, 0x5555
      lbz       r6, 0xB7(r4)
      addi      r0, r5, 0x5556
      lfs       f3, 0x28(r4)
      mulhw     r5, r0, r6
      lfs       f2, 0x20(r4)
      lfs       f1, 0x2C(r4)
      lfs       f0, 0x24(r4)
      fsubs     f2, f3, f2
      fsubs     f3, f1, f0
      rlwinm    r0,r5,1,31,31
      add       r0, r5, r0
      mulli     r0, r0, 0x3
      sub       r0, r6, r0
      cmpwi     r0, 0x1
      bne-      .loc_0x160
      lfs       f1, -0x7B88(r2)
      lfs       f0, 0xD4(r3)
      fnmsubs   f0, f2, f1, f0
      stfs      f0, 0xD4(r3)
      b         .loc_0x174

    .loc_0x160:
      cmpwi     r0, 0x2
      bne-      .loc_0x174
      lfs       f0, 0xD4(r3)
      fsubs     f0, f0, f2
      stfs      f0, 0xD4(r3)

    .loc_0x174:
      lis       r4, 0x5555
      addi      r0, r4, 0x5556
      mulhw     r4, r0, r6
      rlwinm    r0,r4,1,31,31
      add       r0, r4, r0
      cmpwi     r0, 0x1
      bne-      .loc_0x1A4
      lfs       f1, -0x7B88(r2)
      lfs       f0, 0xD8(r3)
      fnmsubs   f0, f3, f1, f0
      stfs      f0, 0xD8(r3)
      blr

    .loc_0x1A4:
      cmpwi     r0, 0x2
      bnelr-
      lfs       f0, 0xD8(r3)
      fsubs     f0, f0, f3
      stfs      f0, 0xD8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800375E4
 * Size:	0000E0
 */
void J2DPane::~J2DPane()
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
      mr.       r29, r3
      beq-      .loc_0xC0
      lis       r3, 0x804A
      addi      r0, r3, 0x698
      stw       r0, 0x0(r29)
      lwz       r31, 0xDC(r29)
      cmplwi    r31, 0
      beq-      .loc_0x78
      subi      r31, r31, 0xC
      b         .loc_0x78

    .loc_0x44:
      lwz       r4, 0x18(r31)
      cmplwi    r4, 0
      beq-      .loc_0x54
      subi      r4, r4, 0xC

    .loc_0x54:
      lwz       r3, 0xC(r31)
      mr        r31, r4
      cmplwi    r3, 0
      beq-      .loc_0x78
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x78:
      cmplwi    r31, 0
      bne+      .loc_0x44
      addic.    r0, r29, 0xDC
      beq-      .loc_0xB0
      addic.    r0, r29, 0xE8
      beq-      .loc_0x9C
      addi      r3, r29, 0xE8
      li        r4, 0
      bl        -0x10EAC

    .loc_0x9C:
      addic.    r0, r29, 0xDC
      beq-      .loc_0xB0
      addi      r3, r29, 0xDC
      li        r4, 0
      bl        -0x10E28

    .loc_0xB0:
      extsh.    r0, r30
      ble-      .loc_0xC0
      mr        r3, r29
      bl        -0x135EC

    .loc_0xC0:
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
 * Address:	800376C4
 * Size:	0000B8
 */
void J2DPane::appendChild(J2DPane*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr.       r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      bne-      .loc_0x30
      li        r3, 0
      b         .loc_0x98

    .loc_0x30:
      mr        r3, r29
      bl        0x19E8
      addic.    r4, r29, 0xDC
      mr        r31, r3
      beq-      .loc_0x48
      addi      r4, r4, 0xC

    .loc_0x48:
      addi      r3, r28, 0xDC
      bl        -0x10E2C
      rlwinm.   r0,r3,0,24,31
      mr        r30, r3
      beq-      .loc_0x94
      cmplwi    r31, 0
      bne-      .loc_0x94
      mr        r3, r29
      lfs       f1, 0x20(r28)
      lwz       r12, 0x0(r29)
      lfs       f2, 0x24(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x94:
      mr        r3, r30

    .loc_0x98:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8003777C
 * Size:	0000B8
 */
void J2DPane::prependChild(J2DPane*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr.       r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      bne-      .loc_0x30
      li        r3, 0
      b         .loc_0x98

    .loc_0x30:
      mr        r3, r29
      bl        0x1930
      addic.    r4, r29, 0xDC
      mr        r31, r3
      beq-      .loc_0x48
      addi      r4, r4, 0xC

    .loc_0x48:
      addi      r3, r28, 0xDC
      bl        -0x10E2C
      rlwinm.   r0,r3,0,24,31
      mr        r30, r3
      beq-      .loc_0x94
      cmplwi    r31, 0
      bne-      .loc_0x94
      mr        r3, r29
      lfs       f1, 0x20(r28)
      lwz       r12, 0x0(r29)
      lfs       f2, 0x24(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x94:
      mr        r3, r30

    .loc_0x98:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void J2DPane::insertChild(J2DPane*, J2DPane*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80037834
 * Size:	0000A4
 */
void J2DPane::removeChild(J2DPane*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr.       r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x2C
      li        r3, 0
      b         .loc_0x88

    .loc_0x2C:
      addic.    r4, r30, 0xDC
      beq-      .loc_0x38
      addi      r4, r4, 0xC

    .loc_0x38:
      addi      r3, r29, 0xDC
      bl        -0x10C4C
      rlwinm.   r0,r3,0,24,31
      mr        r31, r3
      beq-      .loc_0x84
      mr        r3, r30
      lfs       f1, 0x20(r29)
      lwz       r12, 0x0(r30)
      lfs       f0, 0x24(r29)
      fneg      f1, f1
      lwz       r12, 0x14(r12)
      fneg      f2, f0
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x84:
      mr        r3, r31

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
 * Address:	800378D8
 * Size:	000658
 */
void J2DPane::draw(float, float, const J2DGrafContext*, bool, bool)
{
    /*
    .loc_0x0:
      stwu      r1, -0x180(r1)
      mflr      r0
      stw       r0, 0x184(r1)
      stfd      f31, 0x170(r1)
      psq_st    f31,0x178(r1),0,0
      stfd      f30, 0x160(r1)
      psq_st    f30,0x168(r1),0,0
      stmw      r14, 0x118(r1)
      rlwinm.   r0,r6,0,24,31
      fmr       f30, f1
      fmr       f31, f2
      mr        r28, r3
      mr        r29, r4
      mr        r30, r5
      li        r31, 0
      beq-      .loc_0x50
      lbz       r0, 0xB0(r28)
      cmplwi    r0, 0
      beq-      .loc_0x50
      li        r31, 0x1

    .loc_0x50:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x1
      beq-      .loc_0x70
      li        r30, 0

    .loc_0x70:
      lwz       r3, 0xEC(r28)
      li        r14, 0
      cmplwi    r3, 0
      beq-      .loc_0x84
      lwz       r14, 0xC(r3)

    .loc_0x84:
      lfs       f1, 0x28(r28)
      li        r0, 0
      lfs       f0, 0x20(r28)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xB4
      lfs       f1, 0x2C(r28)
      lfs       f0, 0x24(r28)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xB4
      li        r0, 0x1

    .loc_0xB4:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x634
      lwz       r4, 0x20(r28)
      rlwinm.   r0,r31,0,24,31
      lwz       r3, 0x24(r28)
      stw       r4, 0x30(r28)
      stw       r3, 0x34(r28)
      lwz       r3, 0x28(r28)
      lwz       r0, 0x2C(r28)
      stw       r3, 0x38(r28)
      stw       r0, 0x3C(r28)
      lfs       f1, 0xD4(r28)
      lfs       f0, 0x30(r28)
      lfs       f2, 0xD8(r28)
      fadds     f0, f0, f1
      stfs      f0, 0x30(r28)
      lfs       f0, 0x34(r28)
      fadds     f0, f0, f2
      stfs      f0, 0x34(r28)
      lfs       f0, 0x38(r28)
      fadds     f0, f0, f1
      stfs      f0, 0x38(r28)
      lfs       f0, 0x3C(r28)
      fadds     f0, f0, f2
      stfs      f0, 0x3C(r28)
      beq-      .loc_0x150
      lwz       r4, 0x20(r28)
      mr        r3, r28
      lwz       r0, 0x24(r28)
      stw       r4, 0x40(r28)
      stw       r0, 0x44(r28)
      lwz       r4, 0x28(r28)
      lwz       r0, 0x2C(r28)
      stw       r4, 0x48(r28)
      stw       r0, 0x4C(r28)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl

    .loc_0x150:
      cmplwi    r14, 0
      beq-      .loc_0x284
      lfs       f2, 0x30(r14)
      addi      r3, r14, 0x80
      lfs       f1, 0x20(r14)
      addi      r4, r28, 0x50
      lfs       f0, 0x30(r28)
      addi      r5, r28, 0x80
      fsubs     f3, f2, f1
      lfs       f2, 0x34(r14)
      lfs       f1, 0x24(r14)
      fadds     f0, f0, f3
      fsubs     f1, f2, f1
      stfs      f0, 0x30(r28)
      lfs       f0, 0x34(r28)
      fadds     f0, f0, f1
      stfs      f0, 0x34(r28)
      lfs       f0, 0x38(r28)
      fadds     f0, f0, f3
      stfs      f0, 0x38(r28)
      lfs       f0, 0x3C(r28)
      fadds     f0, f0, f1
      stfs      f0, 0x3C(r28)
      bl        0xB287C
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x30C
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x240
      lwz       r3, 0x30(r28)
      lwz       r0, 0x34(r28)
      stw       r3, 0x40(r28)
      stw       r0, 0x44(r28)
      lwz       r3, 0x38(r28)
      lwz       r0, 0x3C(r28)
      stw       r3, 0x48(r28)
      stw       r0, 0x4C(r28)
      lfs       f0, 0x40(r28)
      lfs       f1, 0x40(r14)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x1F8
      stfs      f1, 0x40(r28)

    .loc_0x1F8:
      lfs       f0, 0x44(r28)
      lfs       f1, 0x44(r14)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x210
      stfs      f1, 0x44(r28)

    .loc_0x210:
      lfs       f0, 0x48(r28)
      lfs       f1, 0x48(r14)
      fcmpo     cr0, f0, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x228
      stfs      f1, 0x48(r28)

    .loc_0x228:
      lfs       f0, 0x4C(r28)
      lfs       f1, 0x4C(r14)
      fcmpo     cr0, f0, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x240
      stfs      f1, 0x4C(r28)

    .loc_0x240:
      lbz       r0, 0xB2(r28)
      stb       r0, 0xB3(r28)
      lbz       r0, 0xB4(r28)
      cmplwi    r0, 0
      beq-      .loc_0x30C
      lbz       r4, 0xB2(r28)
      lis       r3, 0x8081
      lbz       r0, 0xB3(r14)
      subi      r3, r3, 0x7F7F
      mullw     r0, r4, r0
      mulhw     r3, r3, r0
      add       r0, r3, r0
      srawi     r0, r0, 0x7
      rlwinm    r3,r0,1,31,31
      add       r0, r0, r3
      stb       r0, 0xB3(r28)
      b         .loc_0x30C

    .loc_0x284:
      lfs       f0, 0x30(r28)
      mr        r3, r28
      fadds     f0, f0, f30
      stfs      f0, 0x30(r28)
      lfs       f0, 0x34(r28)
      fadds     f0, f0, f31
      stfs      f0, 0x34(r28)
      lfs       f0, 0x38(r28)
      fadds     f0, f0, f30
      stfs      f0, 0x38(r28)
      lfs       f0, 0x3C(r28)
      fadds     f0, f0, f31
      stfs      f0, 0x3C(r28)
      lwz       r12, 0x0(r28)
      lfs       f1, 0xD4(r28)
      lfs       f0, 0xD8(r28)
      lwz       r12, 0x44(r12)
      fadds     f1, f1, f30
      fadds     f2, f0, f31
      mtctr     r12
      bctrl
      addi      r3, r28, 0x50
      addi      r4, r28, 0x80
      bl        0xB2714
      lwz       r3, 0x30(r28)
      lwz       r0, 0x34(r28)
      stw       r3, 0x40(r28)
      stw       r0, 0x44(r28)
      lwz       r3, 0x38(r28)
      lwz       r0, 0x3C(r28)
      stw       r3, 0x48(r28)
      stw       r0, 0x4C(r28)
      lbz       r0, 0xB2(r28)
      stb       r0, 0xB3(r28)

    .loc_0x30C:
      lfs       f0, -0x7BA0(r2)
      rlwinm.   r0,r31,0,24,31
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      stfs      f0, 0x10(r1)
      stfs      f0, 0x14(r1)
      beq-      .loc_0x340
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x340
      mr        r3, r29
      addi      r4, r1, 0x8
      addi      r5, r28, 0x40
      bl        -0x2490

    .loc_0x340:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x5EC
      lfs       f1, 0x48(r28)
      li        r0, 0
      lfs       f0, 0x40(r28)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x378
      lfs       f1, 0x4C(r28)
      lfs       f0, 0x44(r28)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x378
      li        r0, 0x1

    .loc_0x378:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x388
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x5EC

    .loc_0x388:
      lwz       r15, 0x88(r29)
      lis       r3, 0x804A
      addi      r16, r3, 0x650
      lwz       r0, 0x80(r29)
      stw       r15, 0x110(r1)
      lwz       r15, 0x8C(r29)
      stw       r0, 0x98(r1)
      lwz       r0, 0x110(r1)
      stw       r15, 0xD4(r1)
      lwz       r15, 0x90(r29)
      stw       r0, 0xA0(r1)
      lwz       r0, 0xD4(r1)
      stw       r15, 0xD8(r1)
      lwz       r15, 0x94(r29)
      stw       r0, 0xA4(r1)
      lwz       r0, 0xD8(r1)
      stw       r15, 0xDC(r1)
      lwz       r15, 0x98(r29)
      stw       r0, 0xA8(r1)
      lwz       r0, 0xDC(r1)
      stw       r15, 0xE0(r1)
      lwz       r15, 0x9C(r29)
      stw       r0, 0xAC(r1)
      lwz       r0, 0xE0(r1)
      stw       r15, 0xE4(r1)
      lwz       r15, 0xA0(r29)
      stw       r0, 0xB0(r1)
      lwz       r0, 0xE4(r1)
      stw       r15, 0xE8(r1)
      lwz       r15, 0xA4(r29)
      stw       r0, 0xB4(r1)
      lwz       r0, 0xE8(r1)
      stw       r15, 0xEC(r1)
      lwz       r15, 0xA8(r29)
      stw       r0, 0xB8(r1)
      lwz       r0, 0xEC(r1)
      stw       r15, 0xF0(r1)
      lwz       r15, 0xAC(r29)
      stw       r0, 0xBC(r1)
      lwz       r0, 0xF0(r1)
      stw       r15, 0xF4(r1)
      lhz       r15, 0xB0(r29)
      stw       r0, 0xC0(r1)
      lwz       r0, 0xF4(r1)
      stw       r15, 0xF8(r1)
      lbz       r15, 0xB2(r29)
      stw       r0, 0xC4(r1)
      lwz       r0, 0xF8(r1)
      stw       r15, 0xFC(r1)
      lhz       r15, 0xB3(r29)
      sth       r0, 0xC8(r1)
      lwz       r0, 0xFC(r1)
      stw       r15, 0x100(r1)
      lbz       r15, 0xB5(r29)
      stb       r0, 0xCA(r1)
      lwz       r0, 0x100(r1)
      stw       r15, 0x104(r1)
      lhz       r15, 0xB6(r29)
      sth       r0, 0xCB(r1)
      lwz       r0, 0x104(r1)
      stw       r15, 0x108(r1)
      lbz       r15, 0xB8(r29)
      stb       r0, 0xCD(r1)
      lwz       r0, 0x108(r1)
      lfs       f9, 0x4(r29)
      lfs       f8, 0x8(r29)
      lfs       f7, 0xC(r29)
      lfs       f6, 0x10(r29)
      lfs       f5, 0x14(r29)
      lfs       f4, 0x18(r29)
      lfs       f3, 0x1C(r29)
      lfs       f2, 0x20(r29)
      lwz       r17, 0x24(r29)
      lwz       r18, 0x28(r29)
      lwz       r19, 0x2C(r29)
      lwz       r20, 0x30(r29)
      lbz       r21, 0x34(r29)
      lfs       f1, 0x38(r29)
      lfs       f0, 0x3C(r29)
      lwz       r22, 0x40(r29)
      lwz       r23, 0x44(r29)
      lwz       r24, 0x48(r29)
      lwz       r25, 0x4C(r29)
      lwz       r26, 0x50(r29)
      lwz       r27, 0x54(r29)
      lwz       r12, 0x58(r29)
      lwz       r11, 0x5C(r29)
      lwz       r10, 0x60(r29)
      lwz       r9, 0x64(r29)
      lwz       r8, 0x68(r29)
      lwz       r7, 0x6C(r29)
      lwz       r6, 0x70(r29)
      lwz       r5, 0x74(r29)
      lwz       r4, 0x78(r29)
      lwz       r3, 0x7C(r29)
      lwz       r14, 0x84(r29)
      sth       r0, 0xCE(r1)
      mr        r0, r15
      stw       r15, 0x10C(r1)
      stw       r16, 0x18(r1)
      stfs      f9, 0x1C(r1)
      stfs      f8, 0x20(r1)
      stfs      f7, 0x24(r1)
      stfs      f6, 0x28(r1)
      stfs      f5, 0x2C(r1)
      stfs      f4, 0x30(r1)
      stfs      f3, 0x34(r1)
      stfs      f2, 0x38(r1)
      stw       r17, 0x3C(r1)
      stw       r18, 0x40(r1)
      stw       r19, 0x44(r1)
      stw       r20, 0x48(r1)
      stb       r21, 0x4C(r1)
      stfs      f1, 0x50(r1)
      stfs      f0, 0x54(r1)
      stw       r22, 0x58(r1)
      stw       r23, 0x5C(r1)
      stw       r24, 0x60(r1)
      stw       r25, 0x64(r1)
      stw       r26, 0x68(r1)
      stw       r27, 0x6C(r1)
      stw       r12, 0x70(r1)
      stw       r11, 0x74(r1)
      stw       r10, 0x78(r1)
      stw       r9, 0x7C(r1)
      stw       r8, 0x80(r1)
      stw       r7, 0x84(r1)
      stw       r6, 0x88(r1)
      stw       r5, 0x8C(r1)
      stw       r4, 0x90(r1)
      stw       r3, 0x94(r1)
      stw       r14, 0x9C(r1)
      stb       r0, 0xD0(r1)
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x5B8
      addi      r3, r1, 0x18
      addi      r4, r1, 0x8
      bl        -0x1850
      addi      r3, r1, 0x18
      bl        -0x1B00

    .loc_0x5B8:
      lbz       r3, 0xB1(r28)
      bl        0xADD14
      lwz       r12, 0x0(r28)
      fmr       f1, f30
      fmr       f2, f31
      mr        r3, r28
      lwz       r12, 0x38(r12)
      addi      r4, r1, 0x98
      mtctr     r12
      bctrl
      lis       r3, 0x804A
      addi      r0, r3, 0x650
      stw       r0, 0x18(r1)

    .loc_0x5EC:
      lwz       r14, 0xDC(r28)
      cmplwi    r14, 0
      beq-      .loc_0x62C
      subi      r14, r14, 0xC
      b         .loc_0x62C

    .loc_0x600:
      lfs       f1, -0x7BA0(r2)
      mr        r4, r29
      lwz       r3, 0xC(r14)
      mr        r5, r30
      fmr       f2, f1
      mr        r6, r31
      bl        .loc_0x0
      lwz       r14, 0x18(r14)
      cmplwi    r14, 0
      beq-      .loc_0x62C
      subi      r14, r14, 0xC

    .loc_0x62C:
      cmplwi    r14, 0
      bne+      .loc_0x600

    .loc_0x634:
      psq_l     f31,0x178(r1),0,0
      lfd       f31, 0x170(r1)
      psq_l     f30,0x168(r1),0,0
      lfd       f30, 0x160(r1)
      lmw       r14, 0x118(r1)
      lwz       r0, 0x184(r1)
      mtlr      r0
      addi      r1, r1, 0x180
      blr
    */
}

/*
 * --INFO--
 * Address:	80037F30
 * Size:	000004
 */
void J2DPane::drawSelf(float, float, float (*)[3][4])
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80037F34
 * Size:	000004
 */
void J2DPane::rewriteAlpha()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80037F38
 * Size:	000248
 */
void J2DPane::place(const JGeometry::TBox2<float>&)
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
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lfs       f1, -0x7BA0(r2)
      lfs       f0, 0x20(r3)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x5C
      lfs       f2, 0x0(r4)
      lfs       f0, 0x8(r4)
      stfs      f1, 0x8(r1)
      fsubs     f0, f0, f2
      stfs      f2, 0xD4(r30)
      stfs      f0, 0x10(r1)
      b         .loc_0xB4

    .loc_0x5C:
      lfs       f0, 0x28(r30)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x88
      lfs       f2, 0x8(r4)
      lfs       f0, 0x0(r4)
      stfs      f1, 0x10(r1)
      fsubs     f0, f2, f0
      stfs      f2, 0xD4(r30)
      fneg      f0, f0
      stfs      f0, 0x8(r1)
      b         .loc_0xB4

    .loc_0x88:
      lfs       f0, 0x8(r4)
      lfs       f3, 0x0(r4)
      lfs       f1, -0x7B88(r2)
      fsubs     f2, f0, f3
      fadds     f0, f3, f0
      fmuls     f2, f2, f1
      fmuls     f0, f0, f1
      fneg      f1, f2
      stfs      f2, 0x10(r1)
      stfs      f0, 0xD4(r30)
      stfs      f1, 0x8(r1)

    .loc_0xB4:
      lfs       f1, -0x7BA0(r2)
      lfs       f0, 0x24(r30)
      fcmpu     cr0, f1, f0
      bne-      .loc_0xE0
      lfs       f2, 0x4(r4)
      lfs       f0, 0xC(r4)
      stfs      f1, 0xC(r1)
      fsubs     f0, f0, f2
      stfs      f2, 0xD8(r30)
      stfs      f0, 0x14(r1)
      b         .loc_0x138

    .loc_0xE0:
      lfs       f0, 0x2C(r30)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x10C
      lfs       f2, 0xC(r4)
      lfs       f0, 0x4(r4)
      stfs      f1, 0x14(r1)
      fsubs     f0, f2, f0
      stfs      f2, 0xD8(r30)
      fneg      f0, f0
      stfs      f0, 0xC(r1)
      b         .loc_0x138

    .loc_0x10C:
      lfs       f0, 0xC(r4)
      lfs       f3, 0x4(r4)
      lfs       f1, -0x7B88(r2)
      fsubs     f2, f0, f3
      fadds     f0, f3, f0
      fmuls     f2, f2, f1
      fmuls     f0, f0, f1
      fneg      f1, f2
      stfs      f2, 0x14(r1)
      stfs      f0, 0xD8(r30)
      stfs      f1, 0xC(r1)

    .loc_0x138:
      lfs       f3, 0x8(r1)
      mr        r3, r30
      lfs       f2, 0x20(r30)
      lfs       f1, 0xC(r1)
      lfs       f0, 0x24(r30)
      fsubs     f30, f3, f2
      fsubs     f29, f1, f0
      bl        0xFE4
      lfs       f31, -0x7BA0(r2)
      mr        r31, r3
      b         .loc_0x1AC

    .loc_0x164:
      lfs       f0, 0xD4(r31)
      fcmpu     cr0, f31, f30
      fadds     f0, f0, f30
      stfs      f0, 0xD4(r31)
      lfs       f0, 0xD8(r31)
      fadds     f0, f0, f29
      stfs      f0, 0xD8(r31)
      bne-      .loc_0x18C
      fcmpu     cr0, f31, f29
      beq-      .loc_0x1A0

    .loc_0x18C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x1A0:
      mr        r3, r31
      bl        0xFCC
      mr        r31, r3

    .loc_0x1AC:
      cmplwi    r31, 0
      bne+      .loc_0x164
      lwz       r4, 0x8(r1)
      mr        r3, r30
      lwz       r0, 0xC(r1)
      stw       r4, 0x20(r30)
      lwz       r4, 0x10(r1)
      stw       r0, 0x24(r30)
      lwz       r0, 0x14(r1)
      stw       r4, 0x28(r30)
      stw       r0, 0x2C(r30)
      bl        0xFD0
      cmplwi    r3, 0
      beq-      .loc_0x204
      lfs       f1, 0xD4(r30)
      lfs       f0, 0x20(r3)
      fadds     f0, f1, f0
      stfs      f0, 0xD4(r30)
      lfs       f1, 0xD8(r30)
      lfs       f0, 0x24(r3)
      fadds     f0, f1, f0
      stfs      f0, 0xD8(r30)

    .loc_0x204:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x54(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80038180
 * Size:	000054
 */
void J2DPane::move(float, float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      addi      r4, r1, 0x8
      lfs       f5, 0x28(r3)
      lfs       f4, 0x20(r3)
      lfs       f3, 0x2C(r3)
      lfs       f0, 0x24(r3)
      fsubs     f4, f5, f4
      fsubs     f0, f3, f0
      stfs      f1, 0x8(r1)
      fadds     f1, f1, f4
      stfs      f2, 0xC(r1)
      fadds     f0, f2, f0
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      bl        -0x288
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	800381D4
 * Size:	000044
 */
void J2DPane::add(float, float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lfs       f0, 0xD4(r3)
      fadds     f0, f0, f1
      stfs      f0, 0xD4(r3)
      lfs       f0, 0xD8(r3)
      fadds     f0, f0, f2
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
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
 * Address:	80038218
 * Size:	000108
 */
void J2DPane::resize(float, float)
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
      lfs       f3, 0x20(r3)
      fmr       f31, f2
      stfs      f3, 0x8(r1)
      lfs       f2, 0x24(r3)
      stfs      f2, 0xC(r1)
      lfs       f1, 0x28(r3)
      stfs      f1, 0x10(r1)
      lfs       f0, 0x2C(r3)
      stfs      f0, 0x14(r1)
      lfs       f5, 0xD8(r3)
      lfs       f4, 0xD4(r3)
      fadds     f2, f2, f5
      fadds     f3, f3, f4
      fadds     f1, f1, f4
      fadds     f0, f0, f5
      stfs      f2, 0xC(r1)
      stfs      f3, 0x8(r1)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      bl        0xE54
      cmplwi    r3, 0
      beq-      .loc_0xC0
      lfs       f0, 0x24(r3)
      lfs       f1, 0x20(r3)
      fneg      f5, f0
      lfs       f2, 0xC(r1)
      lfs       f0, 0x14(r1)
      fneg      f4, f1
      lfs       f3, 0x8(r1)
      lfs       f1, 0x10(r1)
      fadds     f3, f3, f4
      fadds     f2, f2, f5
      fadds     f1, f1, f4
      fadds     f0, f0, f5
      stfs      f3, 0x8(r1)
      stfs      f2, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)

    .loc_0xC0:
      lfs       f1, 0x8(r1)
      mr        r3, r31
      lfs       f0, 0xC(r1)
      addi      r4, r1, 0x8
      fadds     f1, f1, f30
      fadds     f0, f0, f31
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      bl        -0x3C0
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
 * Address:	80038320
 * Size:	0000E0
 */
void J2DPane::getBounds()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8051
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r5, 0xDE0
      lwz       r4, 0x20(r3)
      lwz       r0, 0x24(r3)
      stw       r4, 0x0(r31)
      stw       r0, 0x4(r31)
      lfs       f3, 0x0(r31)
      lwz       r4, 0x28(r3)
      lwz       r0, 0x2C(r3)
      lfs       f2, 0x4(r31)
      stw       r4, 0x8(r31)
      stw       r0, 0xC(r31)
      lfs       f1, 0x8(r31)
      lfs       f4, 0xD4(r3)
      lfs       f5, 0xD8(r3)
      lfs       f0, 0xC(r31)
      fadds     f3, f3, f4
      fadds     f2, f2, f5
      fadds     f1, f1, f4
      fadds     f0, f0, f5
      stfs      f3, 0x0(r31)
      stfs      f2, 0x4(r31)
      stfs      f1, 0x8(r31)
      stfs      f0, 0xC(r31)
      bl        0xD50
      cmplwi    r3, 0
      beq-      .loc_0xC4
      lfs       f0, 0x24(r3)
      lis       r4, 0x8051
      lfs       f1, 0x20(r3)
      subi      r3, r4, 0xDE0
      fneg      f5, f0
      lfs       f2, 0x4(r31)
      lfs       f0, 0xC(r31)
      fneg      f4, f1
      lfs       f3, 0x0(r3)
      lfs       f1, 0x8(r31)
      fadds     f3, f3, f4
      fadds     f2, f2, f5
      fadds     f1, f1, f4
      fadds     f0, f0, f5
      stfs      f3, 0x0(r3)
      stfs      f2, 0x4(r31)
      stfs      f1, 0x8(r31)
      stfs      f0, 0xC(r31)

    .loc_0xC4:
      lwz       r0, 0x14(r1)
      lis       r3, 0x8051
      subi      r3, r3, 0xDE0
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80038400
 * Size:	000030
 */
void J2DPane::rotate(float, float, J2DRotateAxis, float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stfs      f1, 0xC4(r3)
      fmr       f1, f3
      stfs      f2, 0xC8(r3)
      stb       r4, 0xB6(r3)
      bl        .loc_0x30
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x30:
    */
}

/*
 * --INFO--
 * Address:	80038430
 * Size:	000058
 */
void J2DPane::rotate(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, 0xB6(r3)
      extsb     r0, r0
      cmpwi     r0, 0x78
      bne-      .loc_0x24
      stfs      f1, 0xB8(r3)
      b         .loc_0x38

    .loc_0x24:
      cmpwi     r0, 0x79
      bne-      .loc_0x34
      stfs      f1, 0xBC(r3)
      b         .loc_0x38

    .loc_0x34:
      stfs      f1, 0xC0(r3)

    .loc_0x38:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
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
 * Size:	000030
 */
void J2DPane::getRotate() const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80038488
 * Size:	00007C
 */
void J2DPane::clip(const JGeometry::TBox2<float>&)
{
    /*
    .loc_0x0:
      lfs       f2, 0x0(r4)
      lfs       f1, 0x30(r3)
      lfs       f4, 0x8(r4)
      fadds     f2, f2, f1
      lfs       f0, 0x40(r3)
      lfs       f3, 0x4(r4)
      fadds     f4, f4, f1
      lfs       f1, 0x34(r3)
      lfs       f5, 0xC(r4)
      fcmpo     cr0, f0, f2
      fadds     f3, f3, f1
      fadds     f5, f5, f1
      cror      2, 0, 0x2
      bne-      .loc_0x3C
      stfs      f2, 0x40(r3)

    .loc_0x3C:
      lfs       f0, 0x44(r3)
      fcmpo     cr0, f0, f3
      cror      2, 0, 0x2
      bne-      .loc_0x50
      stfs      f3, 0x44(r3)

    .loc_0x50:
      lfs       f0, 0x48(r3)
      fcmpo     cr0, f0, f4
      cror      2, 0x1, 0x2
      bne-      .loc_0x64
      stfs      f4, 0x48(r3)

    .loc_0x64:
      lfs       f0, 0x4C(r3)
      fcmpo     cr0, f0, f5
      cror      2, 0x1, 0x2
      bnelr-
      stfs      f5, 0x4C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80038504
 * Size:	0000B0
 */
void J2DPane::search(unsigned long long)
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
      mr        r29, r6
      lwz       r0, 0x10(r3)
      lwz       r4, 0x14(r3)
      xor       r0, r30, r0
      xor       r4, r29, r4
      or.       r0, r4, r0
      bne-      .loc_0x3C
      b         .loc_0x94

    .loc_0x3C:
      lwz       r31, 0xDC(r3)
      cmplwi    r31, 0
      beq-      .loc_0x88
      subi      r31, r31, 0xC
      b         .loc_0x88

    .loc_0x50:
      lwz       r3, 0xC(r31)
      mr        r6, r29
      mr        r5, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x78
      b         .loc_0x94

    .loc_0x78:
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x88
      subi      r31, r31, 0xC

    .loc_0x88:
      cmplwi    r31, 0
      bne+      .loc_0x50
      li        r3, 0

    .loc_0x94:
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
 * Address:	800385B4
 * Size:	000310
 */
void J2DPane::gather(J2DPane**, unsigned long long, unsigned long long, int,
                     int&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r19, 0x1C(r1)
      mr        r27, r6
      mr        r28, r5
      mr        r26, r4
      mr        r30, r7
      mr        r29, r8
      mr        r25, r9
      mr        r31, r10
      lwz       r11, 0x14(r3)
      lwz       r0, 0x10(r3)
      subc      r5, r11, r27
      subfe     r4, r28, r0
      subfe     r4, r3, r3
      neg.      r4, r4
      bne-      .loc_0x7C
      subc      r4, r29, r11
      subfe     r0, r0, r30
      subfe     r0, r3, r3
      neg.      r0, r0
      bne-      .loc_0x7C
      lwz       r0, 0x0(r31)
      cmpw      r0, r25
      bge-      .loc_0x70
      rlwinm    r0,r0,2,0,29
      stwx      r3, r26, r0

    .loc_0x70:
      lwz       r4, 0x0(r31)
      addi      r0, r4, 0x1
      stw       r0, 0x0(r31)

    .loc_0x7C:
      lwz       r19, 0xDC(r3)
      cmplwi    r19, 0
      beq-      .loc_0x2F4
      subi      r19, r19, 0xC
      b         .loc_0x2F4

    .loc_0x90:
      lwz       r4, 0xC(r19)
      lwz       r5, 0x14(r4)
      lwz       r3, 0x10(r4)
      subc      r0, r5, r27
      subfe     r0, r28, r3
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0xE4
      subc      r0, r29, r5
      subfe     r0, r3, r30
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0xE4
      lwz       r0, 0x0(r31)
      cmpw      r0, r25
      bge-      .loc_0xD8
      rlwinm    r0,r0,2,0,29
      stwx      r4, r26, r0

    .loc_0xD8:
      lwz       r3, 0x0(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x0(r31)

    .loc_0xE4:
      lwz       r23, 0xDC(r4)
      cmplwi    r23, 0
      beq-      .loc_0x2DC
      subi      r23, r23, 0xC
      b         .loc_0x2DC

    .loc_0xF8:
      lwz       r4, 0xC(r23)
      lwz       r5, 0x14(r4)
      lwz       r3, 0x10(r4)
      subc      r0, r5, r27
      subfe     r0, r28, r3
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0x14C
      subc      r0, r29, r5
      subfe     r0, r3, r30
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0x14C
      lwz       r0, 0x0(r31)
      cmpw      r0, r25
      bge-      .loc_0x140
      rlwinm    r0,r0,2,0,29
      stwx      r4, r26, r0

    .loc_0x140:
      lwz       r3, 0x0(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x0(r31)

    .loc_0x14C:
      addi      r3, r4, 0xDC
      bl        -0x14AE4
      cmplwi    r3, 0
      beq-      .loc_0x160
      subi      r3, r3, 0xC

    .loc_0x160:
      mr        r20, r3
      b         .loc_0x2C4

    .loc_0x168:
      mr        r3, r20
      bl        0x21C
      lwz       r4, 0x14(r3)
      mr        r21, r3
      lwz       r3, 0x10(r3)
      subc      r0, r4, r27
      subfe     r0, r28, r3
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0x1C4
      subc      r0, r29, r4
      subfe     r0, r3, r30
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0x1C4
      lwz       r0, 0x0(r31)
      cmpw      r0, r25
      bge-      .loc_0x1B8
      rlwinm    r0,r0,2,0,29
      stwx      r21, r26, r0

    .loc_0x1B8:
      lwz       r3, 0x0(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x0(r31)

    .loc_0x1C4:
      addi      r3, r21, 0xDC
      bl        0x1AC
      stw       r3, 0xC(r1)
      b         .loc_0x2A0

    .loc_0x1D4:
      addi      r3, r1, 0xC
      bl        0x190
      lwz       r4, 0x14(r3)
      mr        r22, r3
      lwz       r3, 0x10(r3)
      subc      r0, r4, r27
      subfe     r0, r28, r3
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0x230
      subc      r0, r29, r4
      subfe     r0, r3, r30
      subfe     r0, r24, r24
      neg.      r0, r0
      bne-      .loc_0x230
      lwz       r0, 0x0(r31)
      cmpw      r0, r25
      bge-      .loc_0x224
      rlwinm    r0,r0,2,0,29
      stwx      r22, r26, r0

    .loc_0x224:
      lwz       r3, 0x0(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x0(r31)

    .loc_0x230:
      addi      r3, r22, 0xDC
      bl        0x140
      mr        r4, r3
      addi      r3, r1, 0x8
      bl        0x120
      b         .loc_0x278

    .loc_0x248:
      addi      r3, r1, 0x8
      bl        0x11C
      mr        r4, r26
      mr        r6, r27
      mr        r5, r28
      mr        r8, r29
      mr        r7, r30
      mr        r9, r25
      mr        r10, r31
      bl        .loc_0x0
      addi      r3, r1, 0x8
      bl        0xD0

    .loc_0x278:
      addi      r3, r22, 0xDC
      bl        0xC0
      mr        r4, r3
      addi      r3, r1, 0x8
      bl        0x9C
      rlwinm.   r0,r3,0,24,31
      bne+      .loc_0x248
      lwz       r3, 0xC(r1)
      bl        .loc_0x310
      stw       r3, 0xC(r1)

    .loc_0x2A0:
      addi      r3, r21, 0xDC
      bl        0x98
      lwz       r0, 0xC(r1)
      cmplw     r0, r3
      bne+      .loc_0x1D4
      lwz       r20, 0x18(r20)
      cmplwi    r20, 0
      beq-      .loc_0x2C4
      subi      r20, r20, 0xC

    .loc_0x2C4:
      cmplwi    r20, 0
      bne+      .loc_0x168
      lwz       r23, 0x18(r23)
      cmplwi    r23, 0
      beq-      .loc_0x2DC
      subi      r23, r23, 0xC

    .loc_0x2DC:
      cmplwi    r23, 0
      bne+      .loc_0xF8
      lwz       r19, 0x18(r19)
      cmplwi    r19, 0
      beq-      .loc_0x2F4
      subi      r19, r19, 0xC

    .loc_0x2F4:
      cmplwi    r19, 0
      bne+      .loc_0x90
      lmw       r19, 0x1C(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

    .loc_0x310:
    */
}

/*
 * --INFO--
 * Address:	800388C4
 * Size:	000014
 */
void JSUTree<J2DPane>::getNextChild() const
{
    /*
    .loc_0x0:
      lwz       r3, 0x18(r3)
      cmplwi    r3, 0
      beqlr-
      subi      r3, r3, 0xC
      blr
    */
}

/*
 * --INFO--
 * Address:	800388D8
 * Size:	000018
 */
void JSUTreeIterator<J2DPane>::operator!=(const JSUTree<J2DPane>*) const
{
    /*
    .loc_0x0:
      lwz       r0, 0x0(r3)
      sub       r3, r4, r0
      sub       r0, r0, r4
      or        r0, r3, r0
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	800388F0
 * Size:	000008
 */
void JSUTree<J2DPane>::getEndChild() const
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	800388F8
 * Size:	00001C
 */
void JSUTreeIterator<J2DPane>::operator++()
{
    /*
    .loc_0x0:
      lwz       r4, 0x0(r3)
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x14
      subi      r4, r4, 0xC

    .loc_0x14:
      stw       r4, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80038914
 * Size:	000008
 */
void JSUTreeIterator<J2DPane>::JSUTreeIterator(JSUTree<J2DPane>*)
{
    /*
    .loc_0x0:
      stw       r4, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8003891C
 * Size:	00000C
 */
void JSUTreeIterator<J2DPane>::operator->() const
{
    /*
    .loc_0x0:
      lwz       r3, 0x0(r3)
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80038928
 * Size:	000014
 */
void JSUTree<J2DPane>::getFirstChild() const
{
    /*
    .loc_0x0:
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beqlr-
      subi      r3, r3, 0xC
      blr
    */
}

/*
 * --INFO--
 * Address:	8003893C
 * Size:	000008
 */
void JSUTree<J2DPane>::getObject() const
{
    /*
    .loc_0x0:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80038944
 * Size:	0000B0
 */
void J2DPane::searchUserInfo(unsigned long long)
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
      mr        r29, r6
      lwz       r0, 0x18(r3)
      lwz       r4, 0x1C(r3)
      xor       r0, r30, r0
      xor       r4, r29, r4
      or.       r0, r4, r0
      bne-      .loc_0x3C
      b         .loc_0x94

    .loc_0x3C:
      lwz       r31, 0xDC(r3)
      cmplwi    r31, 0
      beq-      .loc_0x88
      subi      r31, r31, 0xC
      b         .loc_0x88

    .loc_0x50:
      lwz       r3, 0xC(r31)
      mr        r6, r29
      mr        r5, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x78
      b         .loc_0x94

    .loc_0x78:
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x88
      subi      r31, r31, 0xC

    .loc_0x88:
      cmplwi    r31, 0
      bne+      .loc_0x50
      li        r3, 0

    .loc_0x94:
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
 * Size:	000310
 */
void J2DPane::gatherUserInfo(J2DPane**, unsigned long long, unsigned long long,
                             int, int&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800389F4
 * Size:	000088
 */
void J2DPane::isUsed(const ResTIMG*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0xDC(r3)
      cmplwi    r31, 0
      beq-      .loc_0x64
      subi      r31, r31, 0xC
      b         .loc_0x64

    .loc_0x2C:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x54
      li        r3, 0x1
      b         .loc_0x70

    .loc_0x54:
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x64
      subi      r31, r31, 0xC

    .loc_0x64:
      cmplwi    r31, 0
      bne+      .loc_0x2C
      li        r3, 0

    .loc_0x70:
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
 * Address:	80038A7C
 * Size:	000088
 */
void J2DPane::isUsed(const ResFONT*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0xDC(r3)
      cmplwi    r31, 0
      beq-      .loc_0x64
      subi      r31, r31, 0xC
      b         .loc_0x64

    .loc_0x2C:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x54
      li        r3, 0x1
      b         .loc_0x70

    .loc_0x54:
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x64
      subi      r31, r31, 0xC

    .loc_0x64:
      cmplwi    r31, 0
      bne+      .loc_0x2C
      li        r3, 0

    .loc_0x70:
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
 * Address:	80038B04
 * Size:	000140
 */
void J2DPane::makeMatrix(float, float, float, float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x170(r1)
      mflr      r0
      stw       r0, 0x174(r1)
      stfd      f31, 0x160(r1)
      psq_st    f31,0x168(r1),0,0
      stfd      f30, 0x150(r1)
      psq_st    f30,0x158(r1),0,0
      stfd      f29, 0x140(r1)
      psq_st    f29,0x148(r1),0,0
      stfd      f28, 0x130(r1)
      psq_st    f28,0x138(r1),0,0
      stw       r31, 0x12C(r1)
      mr        r31, r3
      fmr       f28, f1
      lfs       f1, 0xC4(r3)
      fmr       f29, f2
      lfs       f0, 0xC8(r3)
      addi      r3, r1, 0x38
      fsubs     f31, f1, f3
      fsubs     f30, f0, f4
      lfs       f3, -0x7BA0(r2)
      fneg      f1, f31
      fneg      f2, f30
      bl        0xB1BF4
      lfs       f1, -0x7B84(r2)
      addi      r3, r1, 0xF8
      lfs       f0, 0xB8(r31)
      li        r4, 0x78
      fmuls     f1, f1, f0
      bl        0xB199C
      lfs       f1, -0x7B84(r2)
      addi      r3, r1, 0xC8
      lfs       f0, 0xBC(r31)
      li        r4, 0x79
      fmuls     f1, f1, f0
      bl        0xB1984
      lfs       f0, 0xC0(r31)
      addi      r3, r1, 0x98
      lfs       f1, -0x7B84(r2)
      li        r4, 0x7A
      fneg      f0, f0
      fmuls     f1, f1, f0
      bl        0xB1968
      addi      r3, r1, 0x98
      addi      r4, r1, 0xF8
      addi      r5, r1, 0x8
      bl        0xB1744
      addi      r3, r1, 0xC8
      addi      r4, r1, 0x8
      addi      r5, r1, 0x68
      bl        0xB1734
      lfs       f1, 0xCC(r31)
      addi      r3, r1, 0x38
      lfs       f2, 0xD0(r31)
      addi      r4, r31, 0x50
      lfs       f3, -0x7B9C(r2)
      bl        0xB1C18
      addi      r3, r1, 0x68
      addi      r4, r31, 0x50
      addi      r5, r1, 0x8
      bl        0xB170C
      fadds     f1, f28, f31
      lfs       f3, -0x7BA0(r2)
      fadds     f2, f29, f30
      addi      r3, r1, 0x8
      addi      r4, r31, 0x50
      bl        0xB1B7C
      psq_l     f31,0x168(r1),0,0
      lfd       f31, 0x160(r1)
      psq_l     f30,0x158(r1),0,0
      lfd       f30, 0x150(r1)
      psq_l     f29,0x148(r1),0,0
      lfd       f29, 0x140(r1)
      psq_l     f28,0x138(r1),0,0
      lfd       f28, 0x130(r1)
      lwz       r0, 0x174(r1)
      lwz       r31, 0x12C(r1)
      mtlr      r0
      addi      r1, r1, 0x170
      blr
    */
}

/*
 * --INFO--
 * Address:	80038C44
 * Size:	000078
 */
void J2DPane::setCullBack(_GXCullMode)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      stb       r30, 0xB1(r3)
      lwz       r31, 0xDC(r3)
      cmplwi    r31, 0
      beq-      .loc_0x58
      subi      r31, r31, 0xC
      b         .loc_0x58

    .loc_0x30:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x58
      subi      r31, r31, 0xC

    .loc_0x58:
      cmplwi    r31, 0
      bne+      .loc_0x30
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
 * Address:	80038CBC
 * Size:	0000F0
 */
void J2DPane::setBasePosition(J2DBasePosition)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x5555
      lfs       f0, -0x7BA0(r2)
      stw       r0, 0x14(r1)
      addi      r0, r5, 0x5556
      mulhw     r5, r0, r4
      stb       r4, 0xB7(r3)
      li        r0, 0x7A
      stb       r0, 0xB6(r3)
      rlwinm    r0,r5,1,31,31
      stfs      f0, 0xC4(r3)
      add       r0, r5, r0
      mulli     r0, r0, 0x3
      sub       r0, r4, r0
      cmpwi     r0, 0x1
      bne-      .loc_0x60
      lfs       f2, 0x28(r3)
      lfs       f1, 0x20(r3)
      lfs       f0, -0x7B88(r2)
      fsubs     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0xC4(r3)
      b         .loc_0x78

    .loc_0x60:
      cmpwi     r0, 0x2
      bne-      .loc_0x78
      lfs       f1, 0x28(r3)
      lfs       f0, 0x20(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0xC4(r3)

    .loc_0x78:
      lis       r5, 0x5555
      lfs       f0, -0x7BA0(r2)
      addi      r0, r5, 0x5556
      mulhw     r4, r0, r4
      stfs      f0, 0xC8(r3)
      rlwinm    r0,r4,1,31,31
      add       r0, r4, r0
      cmpwi     r0, 0x1
      bne-      .loc_0xB8
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x24(r3)
      lfs       f0, -0x7B88(r2)
      fsubs     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0xC8(r3)
      b         .loc_0xD0

    .loc_0xB8:
      cmpwi     r0, 0x2
      bne-      .loc_0xD0
      lfs       f1, 0x2C(r3)
      lfs       f0, 0x24(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0xC8(r3)

    .loc_0xD0:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
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
 * Address:	80038DAC
 * Size:	0001E4
 */
void J2DPane::setInfluencedAlpha(bool, bool)
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
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      stw       r28, 0x20(r1)
      rlwinm.   r0,r5,0,24,31
      mr        r30, r3
      mr        r31, r4
      beq-      .loc_0x1B0
      lbz       r4, 0xB4(r30)
      rlwinm    r0,r31,0,24,31
      cmplw     r4, r0
      beq-      .loc_0x1B0
      bl        0x2E8
      lfd       f30, -0x7B90(r2)
      li        r28, 0xFF
      lfs       f31, -0x7B80(r2)
      lis       r29, 0x4330
      b         .loc_0xC0

    .loc_0x64:
      lbz       r5, 0xB2(r3)
      cmplwi    r5, 0
      bne-      .loc_0x78
      li        r28, 0
      b         .loc_0xC8

    .loc_0x78:
      rlwinm    r4,r28,0,24,31
      lbz       r0, 0xB4(r3)
      stw       r4, 0xC(r1)
      cmplwi    r0, 0
      stw       r29, 0x8(r1)
      lfd       f0, 0x8(r1)
      stw       r5, 0x14(r1)
      fsubs     f1, f0, f30
      stw       r29, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f30
      fmuls     f0, f1, f0
      fdivs     f0, f0, f31
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r28, 0x1C(r1)
      beq-      .loc_0xC8
      bl        0x278

    .loc_0xC0:
      cmplwi    r3, 0
      bne+      .loc_0x64

    .loc_0xC8:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x160
      rlwinm.   r5,r28,0,24,31
      bne-      .loc_0xF4
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1B0

    .loc_0xF4:
      lbz       r4, 0xB2(r30)
      lis       r0, 0x4330
      stw       r0, 0x18(r1)
      mr        r3, r30
      lfd       f2, -0x7B90(r2)
      stw       r4, 0x1C(r1)
      lfs       f3, -0x7B80(r2)
      lfd       f0, 0x18(r1)
      stw       r5, 0x14(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f2
      fdivs     f0, f1, f0
      fmuls     f0, f3, f0
      fcmpo     cr0, f0, f3
      ble-      .loc_0x140
      li        r4, 0xFF
      b         .loc_0x14C

    .loc_0x140:
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)

    .loc_0x14C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1B0

    .loc_0x160:
      lbz       r4, 0xB2(r30)
      rlwinm    r5,r28,0,24,31
      lis       r0, 0x4330
      mr        r3, r30
      mullw     r4, r5, r4
      lwz       r12, 0x0(r30)
      stw       r0, 0x18(r1)
      lfd       f2, -0x7B98(r2)
      lfs       f0, -0x7B80(r2)
      lwz       r12, 0x24(r12)
      xoris     r0, r4, 0x8000
      stw       r0, 0x1C(r1)
      lfd       f1, 0x18(r1)
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl

    .loc_0x1B0:
      stb       r31, 0xB4(r30)
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r0, 0x54(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80038F90
 * Size:	000008
 */
void J2DPane::setAlpha(unsigned char)
{
    /*
    .loc_0x0:
      stb       r4, 0xB2(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80038F98
 * Size:	0000D8
 */
void J2DPane::getGlbVtx(unsigned char) const
{
    /*
    .loc_0x0:
      rlwinm    r6,r5,0,24,31
      stwu      r1, -0x20(r1)
      cmplwi    r6, 0x4
      blt-      .loc_0x3C
      lfs       f0, -0x7BA0(r2)
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r0, 0x8(r1)
      stfs      f0, 0x10(r1)
      lwz       r4, 0xC(r1)
      stw       r0, 0x0(r3)
      lwz       r0, 0x10(r1)
      stw       r4, 0x4(r3)
      stw       r0, 0x8(r3)
      b         .loc_0xD0

    .loc_0x3C:
      rlwinm.   r0,r5,0,31,31
      beq-      .loc_0x4C
      lfs       f6, 0x28(r4)
      b         .loc_0x50

    .loc_0x4C:
      lfs       f6, 0x20(r4)

    .loc_0x50:
      rlwinm.   r0,r6,0,30,30
      beq-      .loc_0x60
      lfs       f7, 0x2C(r4)
      b         .loc_0x64

    .loc_0x60:
      lfs       f7, 0x24(r4)

    .loc_0x64:
      lfs       f0, 0x84(r4)
      lfs       f1, 0x94(r4)
      fmuls     f4, f7, f0
      lfs       f5, 0x80(r4)
      lfs       f0, 0xA4(r4)
      fmuls     f2, f7, f1
      lfs       f3, 0x90(r4)
      fmadds    f4, f6, f5, f4
      lfs       f5, 0x8C(r4)
      fmuls     f0, f7, f0
      lfs       f1, 0xA0(r4)
      fmadds    f2, f6, f3, f2
      fadds     f4, f5, f4
      lfs       f3, 0x9C(r4)
      fmadds    f0, f6, f1, f0
      lfs       f1, 0xAC(r4)
      fadds     f2, f3, f2
      stfs      f4, 0x8(r1)
      fadds     f0, f1, f0
      lwz       r0, 0x8(r1)
      stfs      f2, 0xC(r1)
      stfs      f0, 0x10(r1)
      lwz       r4, 0xC(r1)
      stw       r0, 0x0(r3)
      lwz       r0, 0x10(r1)
      stw       r4, 0x4(r3)
      stw       r0, 0x8(r3)

    .loc_0xD0:
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80039070
 * Size:	000038
 */
void J2DPane::getFirstChildPane()
{
    /*
    .loc_0x0:
      lwz       r3, 0xDC(r3)
      cmplwi    r3, 0
      mr        r0, r3
      beq-      .loc_0x14
      subi      r0, r3, 0xC

    .loc_0x14:
      cmplwi    r0, 0
      bne-      .loc_0x24
      li        r3, 0
      blr

    .loc_0x24:
      cmplwi    r3, 0
      beq-      .loc_0x30
      subi      r3, r3, 0xC

    .loc_0x30:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800390A8
 * Size:	000038
 */
void J2DPane::getNextChildPane()
{
    /*
    .loc_0x0:
      lwz       r3, 0xF4(r3)
      cmplwi    r3, 0
      mr        r0, r3
      beq-      .loc_0x14
      subi      r0, r3, 0xC

    .loc_0x14:
      cmplwi    r0, 0
      bne-      .loc_0x24
      li        r3, 0
      blr

    .loc_0x24:
      cmplwi    r3, 0
      beq-      .loc_0x30
      subi      r3, r3, 0xC

    .loc_0x30:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800390E0
 * Size:	00001C
 */
void J2DPane::getParentPane()
{
    /*
    .loc_0x0:
      lwz       r3, 0xEC(r3)
      cmplwi    r3, 0
      bne-      .loc_0x14
      li        r3, 0
      blr

    .loc_0x14:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800390FC
 * Size:	00020C
 */
void J2DPane::makePaneExStream(J2DPane*, JSURandomInputStream*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r4
      stw       r30, 0x58(r1)
      mr        r30, r3
      stw       r29, 0x54(r1)
      mr        r29, r5
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      addi      r4, r1, 0x8
      li        r5, 0x48
      bl        -0x12D6C
      lhz       r0, 0x12(r1)
      lis       r3, 0x5555
      li        r4, 0x7A
      sth       r0, 0x4(r30)
      addi      r0, r3, 0x5556
      lbz       r5, 0x14(r1)
      neg       r3, r5
      or        r3, r3, r5
      rlwinm    r3,r3,1,31,31
      stb       r3, 0xB0(r30)
      lwz       r3, 0x18(r1)
      lwz       r5, 0x1C(r1)
      stw       r5, 0x14(r30)
      stw       r3, 0x10(r30)
      lwz       r3, 0x20(r1)
      lwz       r5, 0x24(r1)
      stw       r5, 0x1C(r30)
      stw       r3, 0x18(r30)
      lfs       f0, 0x30(r1)
      stfs      f0, 0xCC(r30)
      lfs       f0, 0x34(r1)
      stfs      f0, 0xD0(r30)
      lfs       f0, 0x38(r1)
      stfs      f0, 0xB8(r30)
      lfs       f0, 0x3C(r1)
      stfs      f0, 0xBC(r30)
      lfs       f0, 0x40(r1)
      stfs      f0, 0xC0(r30)
      lfs       f0, 0x44(r1)
      stfs      f0, 0xD4(r30)
      lfs       f0, 0x48(r1)
      stfs      f0, 0xD8(r30)
      stb       r4, 0xB6(r30)
      lbz       r4, 0x15(r1)
      mulhw     r3, r0, r4
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub.      r0, r4, r0
      bne-      .loc_0xF4
      lfs       f0, -0x7BA0(r2)
      stfs      f0, 0xC4(r30)
      b         .loc_0x118

    .loc_0xF4:
      cmpwi     r0, 0x1
      bne-      .loc_0x110
      lfs       f1, 0x28(r1)
      lfs       f0, -0x7B88(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0xC4(r30)
      b         .loc_0x118

    .loc_0x110:
      lfs       f0, 0x28(r1)
      stfs      f0, 0xC4(r30)

    .loc_0x118:
      lis       r3, 0x5555
      lbz       r0, 0x15(r1)
      addi      r3, r3, 0x5556
      mulhw     r3, r3, r0
      rlwinm    r0,r3,1,31,31
      add.      r0, r3, r0
      bne-      .loc_0x140
      lfs       f0, -0x7BA0(r2)
      stfs      f0, 0xC8(r30)
      b         .loc_0x164

    .loc_0x140:
      cmpwi     r0, 0x1
      bne-      .loc_0x15C
      lfs       f1, 0x2C(r1)
      lfs       f0, -0x7B88(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0xC8(r30)
      b         .loc_0x164

    .loc_0x15C:
      lfs       f0, 0x2C(r1)
      stfs      f0, 0xC8(r30)

    .loc_0x164:
      lfs       f5, 0xC4(r30)
      li        r3, 0xFF
      lfs       f4, 0xC8(r30)
      cmplwi    r31, 0
      fneg      f1, f5
      lfs       f3, 0x2C(r1)
      lfs       f2, 0x28(r1)
      fneg      f0, f4
      fsubs     f3, f3, f4
      li        r0, 0
      stfs      f1, 0x20(r30)
      fsubs     f1, f2, f5
      stfs      f0, 0x24(r30)
      stfs      f1, 0x28(r30)
      stfs      f3, 0x2C(r30)
      lbz       r4, 0x15(r1)
      stb       r4, 0xB7(r30)
      stb       r3, 0xB2(r30)
      stb       r0, 0xB4(r30)
      beq-      .loc_0x1C8
      addic.    r4, r30, 0xDC
      beq-      .loc_0x1C0
      addi      r4, r4, 0xC

    .loc_0x1C0:
      addi      r3, r31, 0xDC
      bl        -0x129DC

    .loc_0x1C8:
      li        r4, 0
      li        r0, 0xFF
      stb       r4, 0xB1(r30)
      mr        r3, r30
      stb       r0, 0xB3(r30)
      stb       r4, 0xB5(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80039308
 * Size:	0000B8
 */
void J2DPane::J2DCast_F32_to_S16(float, unsigned char)
{
    /*
    .loc_0x0:
      rlwinm    r0,r3,0,24,31
      stwu      r1, -0x20(r1)
      cmplwi    r0, 0xF
      blt-      .loc_0x18
      li        r3, 0
      b         .loc_0xB0

    .loc_0x18:
      lfs       f0, -0x7BA0(r2)
      fmr       f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2C
      fneg      f3, f1

    .loc_0x2C:
      rlwinm    r0,r3,0,24,31
      li        r3, 0x1
      slw       r0, r3, r0
      lis       r4, 0x4330
      xoris     r0, r0, 0x8000
      lis       r3, 0x1
      stw       r0, 0xC(r1)
      subi      r0, r3, 0x8000
      lfd       f2, -0x7B98(r2)
      stw       r4, 0x8(r1)
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r3, 0x14(r1)
      cmpw      r3, r0
      blt-      .loc_0x90
      lfs       f0, -0x7BA0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x88
      li        r3, -0x8000
      b         .loc_0xB0

    .loc_0x88:
      li        r3, 0x7FFF
      b         .loc_0xB0

    .loc_0x90:
      lfs       f0, -0x7BA0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xAC
      not       r3, r3
      addi      r0, r3, 0x1
      extsh     r3, r0
      b         .loc_0xB0

    .loc_0xAC:
      extsh     r3, r3

    .loc_0xB0:
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	800393C0
 * Size:	00014C
 */
void J2DPane::getPointer(JSURandomInputStream*, unsigned long, JKRArchive*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x120(r1)
      mflr      r0
      stw       r0, 0x124(r1)
      li        r0, 0
      stw       r31, 0x11C(r1)
      stw       r30, 0x118(r1)
      mr.       r30, r6
      stw       r29, 0x114(r1)
      mr        r29, r5
      stw       r28, 0x110(r1)
      mr        r28, r4
      stb       r0, 0x8(r1)
      bne-      .loc_0xA4
      lwz       r0, -0x76B0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x50
      addi      r3, r1, 0x8
      li        r6, 0
      bl        -0x6F90
      b         .loc_0x12C

    .loc_0x50:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r4, r28
      mr        r5, r29
      addi      r3, r1, 0x8
      li        r6, 0
      bl        -0x6FC0
      cmplwi    r3, 0
      bne-      .loc_0x12C
      mr        r3, r28
      mr        r4, r31
      li        r5, 0
      bl        -0x12D48
      lwz       r3, -0x76B0(r13)
      mr        r4, r28
      bl        0x10464
      b         .loc_0x12C

    .loc_0xA4:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r4, r28
      mr        r5, r29
      mr        r6, r30
      addi      r3, r1, 0x8
      bl        -0x7014
      cmplwi    r3, 0
      bne-      .loc_0xFC
      mr        r3, r28
      mr        r4, r31
      li        r5, 0
      bl        -0x12D9C
      mr        r4, r28
      mr        r5, r29
      addi      r3, r1, 0x8
      li        r6, 0
      bl        -0x7040

    .loc_0xFC:
      cmplwi    r3, 0
      bne-      .loc_0x12C
      lwz       r0, -0x76B0(r13)
      cmplwi    r0, 0
      beq-      .loc_0x12C
      mr        r3, r28
      mr        r4, r31
      li        r5, 0
      bl        -0x12DD4
      lwz       r3, -0x76B0(r13)
      mr        r4, r28
      bl        0x103D8

    .loc_0x12C:
      lwz       r0, 0x124(r1)
      lwz       r31, 0x11C(r1)
      lwz       r30, 0x118(r1)
      lwz       r29, 0x114(r1)
      lwz       r28, 0x110(r1)
      mtlr      r0
      addi      r1, r1, 0x120
      blr
    */
}

/*
 * --INFO--
 * Address:	8003950C
 * Size:	0000D0
 */
void J2DPane::setAnimation(J2DAnmBase*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0xC0
      lwz       r0, 0xC(r4)
      cmplwi    r0, 0x7
      bgt-      .loc_0xC0
      lis       r5, 0x804A
      rlwinm    r0,r0,2,0,29
      addi      r5, r5, 0x678
      lwzx      r0, r5, r0
      mtctr     r0
      bctr
      lwz       r12, 0x0(r3)
      lwz       r12, 0x60(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x74(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl

    .loc_0xC0:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800395DC
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmTevRegKey*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	800395E0
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmVisibilityFull*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	800395E4
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmTexPattern*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	800395E8
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmTextureSRTKey*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	800395EC
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmVtxColor*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	800395F0
 * Size:	000004
 */
void J2DPane::setAnimation(J2DAnmColor*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	800395F4
 * Size:	000008
 */
void J2DPane::setAnimation(J2DAnmTransform*)
{
    /*
    .loc_0x0:
      stw       r4, 0xF8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800395FC
 * Size:	000038
 */
void J2DPane::animationTransform()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0xF8(r3)
      cmplwi    r4, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
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
 * Address:	80039634
 * Size:	00007C
 */
void J2DPane::clearAnmTransform()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0x60(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xDC(r31)
      cmplwi    r31, 0
      beq-      .loc_0x60
      subi      r31, r31, 0xC
      b         .loc_0x60

    .loc_0x3C:
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x60
      subi      r31, r31, 0xC

    .loc_0x60:
      cmplwi    r31, 0
      bne+      .loc_0x3C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800396B0
 * Size:	0000A0
 */
void J2DPane::animationTransform(const J2DAnmTransform*)
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
      lwz       r0, 0xF8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x30
      mr        r30, r0

    .loc_0x30:
      lwz       r31, 0xDC(r29)
      cmplwi    r31, 0
      beq-      .loc_0x6C
      subi      r31, r31, 0xC
      b         .loc_0x6C

    .loc_0x44:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x6C
      subi      r31, r31, 0xC

    .loc_0x6C:
      cmplwi    r31, 0
      bne+      .loc_0x44
      mr        r3, r29
      mr        r4, r30
      bl        0x22C
      lwz       r0, 0x24(r1)
      mr        r3, r30
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
 * Address:	80039750
 * Size:	000088
 */
void J2DPane::setVisibileAnimation(J2DAnmVisibilityFull*)
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
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xDC(r31)
      cmplwi    r31, 0
      beq-      .loc_0x68
      subi      r31, r31, 0xC
      b         .loc_0x68

    .loc_0x40:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x68
      subi      r31, r31, 0xC

    .loc_0x68:
      cmplwi    r31, 0
      bne+      .loc_0x40
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
 * Address:	800397D8
 * Size:	00002C
 */
void J2DPane::setAnimationVF(J2DAnmVisibilityFull*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x74(r12)
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
 * Address:	80039804
 * Size:	000088
 */
void J2DPane::setVtxColorAnimation(J2DAnmVtxColor*)
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
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xDC(r31)
      cmplwi    r31, 0
      beq-      .loc_0x68
      subi      r31, r31, 0xC
      b         .loc_0x68

    .loc_0x40:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x68
      subi      r31, r31, 0xC

    .loc_0x68:
      cmplwi    r31, 0
      bne+      .loc_0x40
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
 * Address:	8003988C
 * Size:	00002C
 */
void J2DPane::setAnimationVC(J2DAnmVtxColor*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
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
 * Address:	800398B8
 * Size:	0000A0
 */
void J2DPane::animationPane(const J2DAnmTransform*)
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
      lwz       r0, 0xF8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x30
      mr        r30, r0

    .loc_0x30:
      lwz       r31, 0xDC(r29)
      cmplwi    r31, 0
      beq-      .loc_0x6C
      subi      r31, r31, 0xC
      b         .loc_0x6C

    .loc_0x44:
      lwz       r3, 0xC(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x18(r31)
      cmplwi    r31, 0
      beq-      .loc_0x6C
      subi      r31, r31, 0xC

    .loc_0x6C:
      cmplwi    r31, 0
      bne+      .loc_0x44
      mr        r3, r29
      mr        r4, r30
      bl        .loc_0xA0
      lwz       r0, 0x24(r1)
      mr        r3, r30
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xA0:
    */
}

/*
 * --INFO--
 * Address:	80039958
 * Size:	000108
 */
void J2DPane::updateTransform(const J2DAnmTransform*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lhz       r0, 0x4(r3)
      cmplwi    r0, 0xFFFF
      beq-      .loc_0xF4
      cmplwi    r4, 0
      beq-      .loc_0xF4
      mr        r3, r4
      mr        r4, r0
      lwz       r12, 0x0(r3)
      addi      r5, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      lis       r0, 0x4330
      stw       r0, 0x28(r1)
      mr        r3, r31
      lfd       f2, -0x7B90(r2)
      stfs      f0, 0xCC(r31)
      lfs       f3, -0x7B7C(r2)
      lfs       f0, 0x10(r1)
      lfs       f1, -0x7B78(r2)
      stfs      f0, 0xD0(r31)
      lha       r4, 0x14(r1)
      stw       r0, 0x30(r1)
      rlwinm    r4,r4,0,16,31
      stw       r4, 0x2C(r1)
      lfd       f0, 0x28(r1)
      stw       r0, 0x38(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f3, f0
      fdivs     f0, f0, f1
      stfs      f0, 0xB8(r31)
      lha       r0, 0x18(r1)
      rlwinm    r0,r0,0,16,31
      stw       r0, 0x34(r1)
      lfd       f0, 0x30(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f3, f0
      fdivs     f0, f0, f1
      stfs      f0, 0xBC(r31)
      lha       r0, 0x16(r1)
      rlwinm    r0,r0,0,16,31
      stw       r0, 0x3C(r1)
      lfd       f0, 0x38(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f3, f0
      fdivs     f0, f0, f1
      stfs      f0, 0xC0(r31)
      lfs       f0, 0x1C(r1)
      stfs      f0, 0xD4(r31)
      lfs       f0, 0x24(r1)
      stfs      f0, 0xD8(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0xF4:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80039A60
 * Size:	000004
 */
void J2DAnmTransform::getTransform(unsigned short, J3DTransformInfo*) const
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80039A64
 * Size:	000008
 */
void J2DPane::getTypeID() const
{
    /*
    .loc_0x0:
      li        r3, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80039A6C
 * Size:	00003C
 */
void J2DPane::setCullBack(bool)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm.   r0,r4,0,24,31
      li        r4, 0
      beq-      .loc_0x1C
      li        r4, 0x2

    .loc_0x1C:
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
 * Address:	80039AA8
 * Size:	000010
 */
void J2DPane::setConnectParent(bool)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0xB5(r3)
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80039AB8
 * Size:	000004
 */
void J2DPane::update()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80039ABC
 * Size:	000004
 */
void J2DPane::drawSelf(float, float)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80039AC0
 * Size:	00001C
 */
void __sinit_J2DPane_cpp(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x7BA0(r2)
      lis       r3, 0x8051
      stfsu     f0, -0xDE0(r3)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      stfs      f0, 0xC(r3)
      blr
    */
}