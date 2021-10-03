

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
 * Address:	803A2154
 * Size:	00004C
 */
void Morimura::TIndexGroup::__ct(void)
{
    /*
    .loc_0x0:
      lfs       f5, 0xF98(r2)
      li        r0, 0
      lfs       f4, 0xF9C(r2)
      stfs      f5, 0x14(r3)
      lfs       f3, 0xFA0(r2)
      stfs      f5, 0x18(r3)
      lfs       f2, 0xFA4(r2)
      stfs      f5, 0x1C(r3)
      lfs       f1, 0xFA8(r2)
      stw       r0, 0x20(r3)
      lfs       f0, 0xFAC(r2)
      stb       r0, 0x24(r3)
      stfs      f5, 0x28(r3)
      stfs      f4, 0x0(r3)
      stfs      f3, 0x4(r3)
      stfs      f2, 0x8(r3)
      stfs      f1, 0xC(r3)
      stfs      f0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A21A0
 * Size:	00006C
 */
void Morimura::TIndexGroup::upIndex(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x50
      lfs       f1, 0x28(r3)
      lfs       f0, 0xF98(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x3C
      lfs       f0, 0x10(r3)
      stfs      f0, 0x1C(r3)

    .loc_0x3C:
      lfs       f0, 0xFB0(r2)
      li        r0, 0x2
      li        r31, 0x1
      stfs      f0, 0x28(r3)
      stw       r0, 0x20(r3)

    .loc_0x50:
      bl        0x88
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
 * Address:	803A220C
 * Size:	00006C
 */
void Morimura::TIndexGroup::downIndex(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x50
      lfs       f1, 0x28(r3)
      lfs       f0, 0xF98(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x3C
      lfs       f0, 0x10(r3)
      stfs      f0, 0x1C(r3)

    .loc_0x3C:
      lfs       f0, 0xFB4(r2)
      li        r0, 0x1
      li        r31, 0x1
      stfs      f0, 0x28(r3)
      stw       r0, 0x20(r3)

    .loc_0x50:
      bl        .loc_0x6C
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x6C:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Morimura::TIndexGroup::speedUpdate((bool))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Morimura::TIndexGroup::offsetUpdate((float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803A2278
 * Size:	000030
 */
void Morimura::TIndexGroup::rollSpUp(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x1C(r3)
      li        r0, 0x1
      lfs       f0, 0x8(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x1C(r3)
      stb       r0, 0x24(r3)
      lfs       f0, 0x1C(r3)
      lfs       f1, 0x0(r3)
      fcmpo     cr0, f0, f1
      blelr-
      stfs      f1, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A22A8
 * Size:	00009C
 */
void Morimura::TIndexPane::update(void)
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
      mr        r29, r3
      lwz       r0, 0x20(r3)
      cmplwi    r0, 0
      beq-      .loc_0x78
      lfs       f1, 0xF98(r2)
      lfs       f0, 0x18(r29)
      lfs       f31, 0xFB0(r2)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x48
      lfs       f31, 0xFAC(r2)

    .loc_0x48:
      li        r30, 0
      li        r31, 0
      b         .loc_0x6C

    .loc_0x54:
      lwz       r3, 0x20(r29)
      fmr       f1, f31
      lwzx      r3, r3, r31
      bl        0x540
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x6C:
      lwz       r0, 0x10(r29)
      cmpw      r30, r0
      blt+      .loc_0x54

    .loc_0x78:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803A2344
 * Size:	000094
 */
void Morimura::TIndexPane::createIconInfo((int, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      stw       r29, 0x10(r3)
      rlwinm    r3,r4,2,0,29
      stw       r5, 0x14(r28)
      bl        -0x37E3C8
      stw       r3, 0x20(r28)
      li        r30, 0
      li        r31, 0
      b         .loc_0x6C

    .loc_0x44:
      li        r3, 0x1C
      bl        -0x37E4E8
      mr.       r0, r3
      beq-      .loc_0x5C
      bl        0x378
      mr        r0, r3

    .loc_0x5C:
      lwz       r3, 0x20(r28)
      addi      r30, r30, 0x1
      stwx      r0, r3, r31
      addi      r31, r31, 0x4

    .loc_0x6C:
      cmpw      r30, r29
      blt+      .loc_0x44
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
 * Address:	803A23D8
 * Size:	0001E4
 */
void Morimura::TIndexPane::setIndex((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r29, r4
      mr        r28, r3
      stw       r29, 0x0(r3)
      lwz       r0, 0x20(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1D0
      lwz       r0, 0x24(r28)
      cmplwi    r0, 0
      beq-      .loc_0x1D0
      li        r30, 0
      li        r31, 0
      b         .loc_0x114

    .loc_0x40:
      lwz       r0, 0xC(r28)
      mr        r4, r30
      cmpwi     r0, 0
      beq-      .loc_0x54
      li        r4, 0

    .loc_0x54:
      cmpwi     r0, 0x1
      beq-      .loc_0x6C
      lwz       r0, 0x14(r28)
      add       r3, r29, r30
      cmpw      r3, r0
      ble-      .loc_0xA0

    .loc_0x6C:
      lwz       r3, 0x20(r28)
      li        r4, -0x1
      li        r5, 0
      lwzx      r3, r3, r31
      bl        0x58C
      cmpwi     r30, 0x1
      bne-      .loc_0x10C
      lwz       r3, 0x20(r28)
      lwz       r4, 0x0(r28)
      lwzx      r3, r3, r31
      addi      r0, r4, 0x1
      stw       r0, 0x18(r3)
      b         .loc_0x10C

    .loc_0xA0:
      lwz       r3, 0x24(r28)
      add       r27, r29, r4
      mr        r4, r27
      li        r26, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF8
      lwz       r3, 0x24(r28)
      mr        r4, r27
      bl        -0x2DB38
      mr.       r26, r3
      bne-      .loc_0xF8
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5210
      li        r4, 0xC1
      addi      r5, r5, 0x5220
      crclr     6, 0x6
      bl        -0x377E8C

    .loc_0xF8:
      lwz       r3, 0x20(r28)
      mr        r4, r27
      mr        r5, r26
      lwzx      r3, r3, r31
      bl        0x500

    .loc_0x10C:
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x114:
      lwz       r0, 0x10(r28)
      cmpw      r30, r0
      blt+      .loc_0x40
      lwz       r0, 0xC(r28)
      cmpwi     r0, 0x2
      beq-      .loc_0x18C
      bge-      .loc_0x140
      cmpwi     r0, 0
      beq-      .loc_0x14C
      bge-      .loc_0x1C0
      b         .loc_0x1C8

    .loc_0x140:
      cmpwi     r0, 0x4
      bge-      .loc_0x1C8
      b         .loc_0x158

    .loc_0x14C:
      lfs       f0, 0xF98(r2)
      stfs      f0, 0x18(r28)
      b         .loc_0x1C8

    .loc_0x158:
      lwz       r3, 0x20(r28)
      li        r4, -0x1
      li        r5, 0
      lwz       r3, 0x0(r3)
      bl        0x4A0
      lwz       r3, 0x20(r28)
      li        r4, -0x1
      li        r5, 0
      lwz       r3, 0x8(r3)
      bl        0x48C
      lfs       f0, 0xFBC(r2)
      stfs      f0, 0x18(r28)
      b         .loc_0x1C8

    .loc_0x18C:
      lwz       r3, 0x20(r28)
      li        r4, -0x1
      li        r5, 0
      lwz       r3, 0x0(r3)
      bl        0x46C
      lwz       r3, 0x20(r28)
      li        r4, -0x1
      li        r5, 0
      lwz       r3, 0x8(r3)
      bl        0x458
      lfs       f0, 0xFC0(r2)
      stfs      f0, 0x18(r28)
      b         .loc_0x1C8

    .loc_0x1C0:
      lfs       f0, 0xFC4(r2)
      stfs      f0, 0x18(r28)

    .loc_0x1C8:
      mr        r3, r28
      bl        0x78

    .loc_0x1D0:
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803A25BC
 * Size:	000058
 */
void Morimura::TIndexPane::getIndex(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x20(r3)
      cmplwi    r4, 0
      beq-      .loc_0x50
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0
      bne-      .loc_0x38
      lwz       r0, -0x6638(r13)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r4, r0
      lwz       r3, 0x18(r3)
      subic.    r3, r3, 0x1
      bgelr-
      li        r3, -0x1
      blr

    .loc_0x38:
      lwz       r3, 0x4(r4)
      lwz       r3, 0x18(r3)
      subic.    r3, r3, 0x1
      bgelr-
      li        r3, -0x1
      blr

    .loc_0x50:
      lwz       r3, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A2614
 * Size:	000008
 */
void Morimura::TIndexPane::getListIndex(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A261C
 * Size:	0000F4
 */
void Morimura::TIndexPane::doIconOffsetY(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r4, 0x20(r3)
      cmplwi    r4, 0
      beq-      .loc_0xDC
      lwz       r3, 0x0(r4)
      lwz       r4, 0x4(r4)
      lwz       r3, 0x10(r3)
      lfs       f2, 0x18(r30)
      lfs       f1, 0xD8(r3)
      lwz       r31, 0x10(r4)
      fadds     f1, f2, f1
      mr        r3, r31
      stfs      f1, 0xD8(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0xFB0(r2)
      mr        r3, r31
      stfs      f0, 0xCC(r31)
      stfs      f0, 0xD0(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xF98(r2)
      lfs       f0, 0x18(r30)
      fcmpu     cr0, f1, f0
      beq-      .loc_0xA8
      lfs       f0, 0xFAC(r2)
      mr        r3, r31
      stfs      f0, 0xCC(r31)
      stfs      f0, 0xD0(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0xA8:
      lwz       r3, 0x20(r30)
      lwz       r3, 0x4(r3)
      lwz       r3, 0x4(r3)
      cmplwi    r3, 0
      beq-      .loc_0xDC
      lfs       f2, 0x18(r30)
      lfs       f1, 0xFC8(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0xDC:
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
 * Address:	803A2710
 * Size:	000068
 */
void Morimura::TIconInfo::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x0(r3)
      li        r3, 0x1C
      stw       r0, 0x4(r31)
      stw       r0, 0x8(r31)
      stw       r0, 0xC(r31)
      stw       r0, 0x10(r31)
      stw       r0, 0x14(r31)
      stw       r0, 0x18(r31)
      bl        -0x37E8A4
      mr.       r0, r3
      beq-      .loc_0x4C
      bl        -0x79950
      mr        r0, r3

    .loc_0x4C:
      stw       r0, 0x14(r31)
      mr        r3, r31
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A2778
 * Size:	0000D0
 */
void Morimura::TIconInfo::init((Morimura::TScaleUpCounter*, J2DPane*, J2DPane*))
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
      mr        r29, r3
      stw       r4, 0x8(r3)
      lwz       r0, 0x8(r3)
      cmplwi    r0, 0
      bne-      .loc_0x50
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5210
      li        r4, 0x146
      addi      r5, r5, 0x5220
      crclr     6, 0x6
      bl        -0x378184

    .loc_0x50:
      lwz       r3, 0x8(r29)
      li        r0, 0x1
      stb       r0, 0xA9(r3)
      stw       r30, 0xC(r29)
      lwz       r0, 0xC(r29)
      cmplwi    r0, 0
      bne-      .loc_0x88
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5210
      li        r4, 0x14A
      addi      r5, r5, 0x5220
      crclr     6, 0x6
      bl        -0x3781BC

    .loc_0x88:
      stw       r31, 0x10(r29)
      lwz       r0, 0x10(r29)
      cmplwi    r0, 0
      bne-      .loc_0xB4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5210
      li        r4, 0x14D
      addi      r5, r5, 0x5220
      crclr     6, 0x6
      bl        -0x3781E8

    .loc_0xB4:
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
 * Address:	803A2848
 * Size:	000198
 */
void Morimura::TIconInfo::update((float))
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
      fmr       f31, f1
      lwz       r3, 0x14(r3)
      cmplwi    r3, 0
      beq-      .loc_0x17C
      bl        -0x798F0
      lbz       r0, -0x79B0(r13)
      cmplwi    r0, 0
      beq-      .loc_0x15C
      lfs       f0, 0xFAC(r2)
      fcmpu     cr0, f0, f31
      bne-      .loc_0xD8
      lfs       f2, 0xFCC(r2)
      fmuls     f0, f31, f1
      lwz       r3, 0x10(r31)
      fmuls     f1, f2, f1
      stfs      f1, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lfs       f1, 0xFD0(r2)
      lfs       f0, 0xFB0(r2)
      stfs      f1, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x8(r31)
      bl        -0x97120
      lfs       f31, 0xD8(r3)
      lwz       r3, 0x8(r31)
      bl        -0x9712C
      lfs       f0, 0xFD4(r2)
      stfs      f0, 0xD4(r3)
      stfs      f31, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x8(r31)
      lfs       f1, 0xFD0(r2)
      lfs       f2, 0xFB0(r2)
      bl        -0xCFC
      b         .loc_0x17C

    .loc_0xD8:
      fmuls     f0, f31, f1
      lwz       r3, 0x10(r31)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lfs       f0, 0xFB0(r2)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x8(r31)
      bl        -0x971A4
      lfs       f31, 0xD8(r3)
      lwz       r3, 0x8(r31)
      bl        -0x971B0
      lfs       f0, 0xFD8(r2)
      stfs      f0, 0xD4(r3)
      stfs      f31, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xFB0(r2)
      lwz       r3, 0x8(r31)
      fmr       f2, f1
      bl        -0xD80
      b         .loc_0x17C

    .loc_0x15C:
      fmuls     f0, f31, f1
      lwz       r3, 0x10(r31)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x17C:
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
 * Address:	803A29E0
 * Size:	0001B4
 */
void Morimura::TIconInfo::setInfo((int, ResTIMG const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      stw       r30, 0x8(r1)
      mr        r30, r3
      blt-      .loc_0x15C
      addi      r0, r4, 0x1
      stw       r0, 0x18(r30)
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      beq-      .loc_0xCC
      lis       r3, 0x804E
      li        r0, 0x5
      addi      r3, r3, 0x3934
      li        r5, 0
      mtctr     r0

    .loc_0x4C:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bge-      .loc_0x60
      stw       r5, 0x0(r30)
      b         .loc_0xCC

    .loc_0x60:
      lwzu      r0, 0x4(r3)
      addi      r5, r5, 0x1
      cmpw      r4, r0
      bge-      .loc_0x78
      stw       r5, 0x0(r30)
      b         .loc_0xCC

    .loc_0x78:
      lwzu      r0, 0x4(r3)
      addi      r5, r5, 0x1
      cmpw      r4, r0
      bge-      .loc_0x90
      stw       r5, 0x0(r30)
      b         .loc_0xCC

    .loc_0x90:
      lwzu      r0, 0x4(r3)
      addi      r5, r5, 0x1
      cmpw      r4, r0
      bge-      .loc_0xA8
      stw       r5, 0x0(r30)
      b         .loc_0xCC

    .loc_0xA8:
      lwzu      r0, 0x4(r3)
      addi      r5, r5, 0x1
      cmpw      r4, r0
      bge-      .loc_0xC0
      stw       r5, 0x0(r30)
      b         .loc_0xCC

    .loc_0xC0:
      addi      r3, r3, 0x4
      addi      r5, r5, 0x1
      bdnz+     .loc_0x4C

    .loc_0xCC:
      lwz       r3, 0x10(r30)
      cmplwi    r3, 0
      beq-      .loc_0xE0
      li        r0, 0x1
      stb       r0, 0xB0(r3)

    .loc_0xE0:
      cmplwi    r31, 0
      beq-      .loc_0x130
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x104
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x104:
      lwz       r3, 0xC(r30)
      mr        r4, r31
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x110(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r30)
      li        r0, 0x1
      stb       r0, 0xB0(r3)
      b         .loc_0x19C

    .loc_0x130:
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x14C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl

    .loc_0x14C:
      lwz       r3, 0xC(r30)
      li        r0, 0
      stb       r0, 0xB0(r3)
      b         .loc_0x19C

    .loc_0x15C:
      li        r0, 0
      stw       r0, 0x18(r30)
      lwz       r3, 0x10(r30)
      cmplwi    r3, 0
      beq-      .loc_0x174
      stb       r0, 0xB0(r3)

    .loc_0x174:
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x190
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x190:
      lwz       r3, 0xC(r30)
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0x19C:
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
 * Address:	803A2B94
 * Size:	000040
 */
void Morimura::TIconInfo::startScaleUp((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x14(r3)
      cmplwi    r3, 0
      beq-      .loc_0x30
      lfs       f0, 0xFDC(r2)
      lfs       f2, 0xFE0(r2)
      fmuls     f1, f0, f1
      lfs       f3, 0xFE4(r2)
      lfs       f4, 0xF98(r2)
      bl        -0x79CE8

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A2BD4
 * Size:	0000E4
 */
void Morimura::TListScreen::create((char const*, unsigned long))
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
      bl        -0x37ED58
      mr.       r0, r3
      beq-      .loc_0x3C
      bl        0x921A4
      mr        r0, r3

    .loc_0x3C:
      stw       r0, 0x8(r29)
      mr        r4, r30
      mr        r5, r31
      lwz       r3, 0x8(r29)
      lwz       r6, 0xC(r29)
      bl        -0x363600
      lwz       r3, 0x8(r29)
      bl        -0x98E2C
      li        r3, 0x2C
      bl        -0x37ED90
      mr.       r31, r3
      beq-      .loc_0xB0
      bl        0x6E750
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r3, 0x804E
      stw       r0, 0x0(r31)
      li        r5, 0
      addi      r4, r4, 0x7F2C
      addi      r0, r3, 0x58A4
      stw       r5, 0x18(r31)
      lfs       f0, 0xF98(r2)
      stw       r4, 0x0(r31)
      stw       r0, 0x0(r31)
      stfs      f0, 0x1C(r31)
      stfs      f0, 0x20(r31)
      stfs      f0, 0x24(r31)
      stfs      f0, 0x28(r31)

    .loc_0xB0:
      lwz       r0, 0x10(r29)
      rlwinm    r3,r0,2,0,29
      bl        -0x37ECE0
      stw       r3, 0x4(r29)
      lwz       r3, 0x8(r29)
      bl        -0x9F984
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
 * Address:	803A2CB8
 * Size:	000090
 */
void Morimura::TScrollList::__ct((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x59B04
      lis       r3, 0x804E
      li        r4, 0
      addi      r3, r3, 0x58C0
      li        r0, 0x1
      stw       r3, 0x0(r31)
      addi      r5, r3, 0x10
      lfs       f0, 0xF98(r2)
      mr        r3, r31
      stw       r5, 0x18(r31)
      stw       r4, 0x7C(r31)
      stw       r4, 0x80(r31)
      stw       r4, 0x84(r31)
      stw       r4, 0x88(r31)
      stb       r4, 0x8C(r31)
      sth       r4, 0x8E(r31)
      stw       r4, 0x90(r31)
      stw       r4, 0x94(r31)
      stw       r4, 0x98(r31)
      stw       r0, 0x9C(r31)
      stfs      f0, 0xA0(r31)
      stfs      f0, 0xA4(r31)
      stfs      f0, 0xA8(r31)
      stfs      f0, 0xAC(r31)
      stb       r4, 0xB0(r31)
      stw       r4, -0x6638(r13)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A2D48
 * Size:	000428
 */
void Morimura::TScrollList::updateIndex((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      li        r6, 0
      li        r5, 0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, -0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x78

    .loc_0x34:
      lwz       r3, 0x88(r28)
      lwzx      r4, r3, r5
      lwz       r3, 0x4(r4)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r4)
      lwz       r3, 0x88(r28)
      lfs       f0, 0xAC(r28)
      lwzx      r3, r3, r5
      lfs       f1, 0x1C(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x70
      lfs       f0, 0xA8(r28)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x70
      mr        r31, r6

    .loc_0x70:
      addi      r5, r5, 0x4
      addi      r6, r6, 0x1

    .loc_0x78:
      lha       r3, 0x8E(r28)
      cmpw      r6, r3
      blt+      .loc_0x34
      lbz       r0, 0x8C(r28)
      cmplwi    r0, 0
      beq-      .loc_0x114
      cmpwi     r31, 0
      bge-      .loc_0xEC
      lfs       f1, 0xFC0(r2)
      li        r5, 0
      li        r4, 0
      mtctr     r3
      cmpwi     r3, 0
      ble-      .loc_0xEC

    .loc_0xB0:
      lwz       r3, 0x88(r28)
      lfs       f0, 0xAC(r28)
      lwzx      r3, r3, r4
      fadds     f0, f1, f0
      lfs       f2, 0x1C(r3)
      fcmpo     cr0, f2, f0
      bge-      .loc_0xE0
      lfs       f0, 0xA8(r28)
      fsubs     f0, f0, f1
      fcmpo     cr0, f2, f0
      ble-      .loc_0xE0
      mr        r31, r5

    .loc_0xE0:
      addi      r4, r4, 0x4
      addi      r5, r5, 0x1
      bdnz+     .loc_0xB0

    .loc_0xEC:
      cmpwi     r31, 0
      bge-      .loc_0x110
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5210
      li        r4, 0x205
      addi      r5, r5, 0x5220
      crclr     6, 0x6
      bl        -0x378814

    .loc_0x110:
      stw       r31, 0x94(r28)

    .loc_0x114:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      rlwinm    r31,r29,0,24,31

    .loc_0x12C:
      lbz       r0, 0x8C(r28)
      li        r30, 0
      cmplwi    r0, 0
      bne-      .loc_0x140
      li        r30, 0x1

    .loc_0x140:
      cmplwi    r31, 0
      beq-      .loc_0x29C
      lwz       r0, 0x98(r28)
      lwz       r5, 0x88(r28)
      rlwinm    r0,r0,2,0,29
      lwz       r3, 0x84(r28)
      lwzx      r4, r5, r0
      lwz       r0, 0x90(r28)
      lwz       r4, 0x4(r4)
      rlwinm    r0,r0,2,0,29
      lfs       f0, 0x18(r3)
      lfs       f1, 0xD8(r4)
      lwzx      r3, r5, r0
      fadds     f0, f1, f0
      stfs      f0, 0x1C(r3)
      lwz       r0, 0x90(r28)
      lwz       r3, 0x88(r28)
      rlwinm    r0,r0,2,0,29
      lfs       f0, 0xA4(r28)
      lwzx      r4, r3, r0
      lfs       f1, 0x1C(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x1A4
      li        r30, 0x1

    .loc_0x1A4:
      lfs       f1, 0x1C(r4)
      lfs       f0, 0xF98(r2)
      lwz       r3, 0x4(r4)
      fadds     f0, f1, f0
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x98(r28)
      mr        r3, r28
      lwz       r6, 0x88(r28)
      mr        r5, r29
      rlwinm    r0,r0,2,0,29
      addi      r4, r1, 0xC
      lwzx      r6, r6, r0
      lwz       r0, 0x0(r6)
      stw       r0, 0xC(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      mr        r6, r29
      lwz       r12, 0x0(r28)
      lwz       r4, 0x90(r28)
      lwz       r12, 0x94(r12)
      lwz       r5, 0xC(r1)
      mtctr     r12
      bctrl
      mr        r3, r28
      lwz       r4, 0x90(r28)
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x90(r28)
      stw       r0, 0x98(r28)
      lwz       r3, 0x90(r28)
      addi      r0, r3, 0x1
      stw       r0, 0x90(r28)
      lwz       r3, 0x90(r28)
      lha       r0, 0x8E(r28)
      cmpw      r3, r0
      blt-      .loc_0x260
      li        r0, 0
      stw       r0, 0x90(r28)

    .loc_0x260:
      lbz       r0, 0x8C(r28)
      cmplwi    r0, 0
      bne-      .loc_0x290
      lwz       r3, 0x94(r28)
      addi      r0, r3, 0x1
      stw       r0, 0x94(r28)
      lwz       r3, 0x94(r28)
      lha       r0, 0x8E(r28)
      cmpw      r3, r0
      blt-      .loc_0x290
      li        r0, 0
      stw       r0, 0x94(r28)

    .loc_0x290:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x408
      b         .loc_0x12C

    .loc_0x29C:
      lwz       r0, 0x90(r28)
      lwz       r5, 0x88(r28)
      rlwinm    r0,r0,2,0,29
      lwz       r3, 0x84(r28)
      lwzx      r4, r5, r0
      lwz       r0, 0x98(r28)
      lwz       r4, 0x4(r4)
      rlwinm    r0,r0,2,0,29
      lfs       f0, 0x18(r3)
      lfs       f1, 0xD8(r4)
      lwzx      r3, r5, r0
      fsubs     f0, f1, f0
      lfd       f2, 0xFE8(r2)
      stfs      f0, 0x1C(r3)
      lwz       r0, 0x90(r28)
      lwz       r5, 0x88(r28)
      rlwinm    r0,r0,2,0,29
      lwz       r3, 0x84(r28)
      lwzx      r4, r5, r0
      lfs       f1, 0x18(r3)
      lfs       f3, 0x1C(r4)
      lfs       f0, 0xA0(r28)
      fnmsub    f1, f2, f1, f3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x308
      li        r30, 0x1

    .loc_0x308:
      lwz       r0, 0x98(r28)
      lfs       f0, 0xF98(r2)
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r5, r0
      lfs       f1, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fadds     f0, f1, f0
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x90(r28)
      mr        r3, r28
      lwz       r6, 0x88(r28)
      mr        r5, r29
      rlwinm    r0,r0,2,0,29
      addi      r4, r1, 0x8
      lwzx      r6, r6, r0
      lwz       r0, 0x0(r6)
      stw       r0, 0x8(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      mr        r6, r29
      lwz       r12, 0x0(r28)
      lwz       r4, 0x98(r28)
      lwz       r12, 0x94(r12)
      lwz       r5, 0x8(r1)
      mtctr     r12
      bctrl
      mr        r3, r28
      lwz       r4, 0x98(r28)
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x98(r28)
      stw       r0, 0x90(r28)
      lwz       r3, 0x98(r28)
      subi      r0, r3, 0x1
      stw       r0, 0x98(r28)
      lwz       r0, 0x98(r28)
      cmpwi     r0, 0
      bge-      .loc_0x3D0
      lha       r3, 0x8E(r28)
      subi      r0, r3, 0x1
      stw       r0, 0x98(r28)

    .loc_0x3D0:
      lbz       r0, 0x8C(r28)
      cmplwi    r0, 0
      bne-      .loc_0x400
      lwz       r3, 0x94(r28)
      subi      r0, r3, 0x1
      stw       r0, 0x94(r28)
      lwz       r0, 0x94(r28)
      cmpwi     r0, 0
      bge-      .loc_0x400
      lha       r3, 0x8E(r28)
      subi      r0, r3, 0x1
      stw       r0, 0x94(r28)

    .loc_0x400:
      rlwinm.   r0,r30,0,24,31
      beq+      .loc_0x12C

    .loc_0x408:
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
 * Address:	803A3170
 * Size:	0000DC
 */
void Morimura::TScrollList::getUpdateIndex((int&, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm.   r0,r5,0,24,31
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x74
      lwz       r4, 0x0(r31)
      lwz       r0, 0x9C(r30)
      add       r0, r4, r0
      stw       r0, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r31)
      cmpw      r0, r3
      blt-      .loc_0x58
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x58:
      lwz       r0, 0x90(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x0(r31)
      lwzx      r3, r3, r0
      bl        -0xE04
      b         .loc_0xC4

    .loc_0x74:
      lwz       r4, 0x9C(r30)
      lwz       r0, 0x0(r31)
      sub       r0, r0, r4
      stw       r0, 0x0(r31)
      lwz       r0, 0x0(r31)
      cmpwi     r0, 0
      bge-      .loc_0xAC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x9C(r30)
      sub       r0, r3, r0
      stw       r0, 0x0(r31)

    .loc_0xAC:
      lwz       r0, 0x98(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x0(r31)
      lwzx      r3, r3, r0
      bl        -0xE58

    .loc_0xC4:
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
 * Address:	803A324C
 * Size:	000390
 */
void Morimura::TScrollList::updateList(void)
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
      lwz       r3, 0x84(r3)
      lwz       r0, 0x20(r3)
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x44
      lfs       f0, 0x10(r3)
      stfs      f0, 0x1C(r3)

    .loc_0x44:
      lwz       r3, 0x84(r31)
      lfs       f2, 0x1C(r3)
      lfs       f0, 0x10(r3)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xA0
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      bne-      .loc_0xA0
      lfs       f0, 0x14(r3)
      lfs       f1, 0xFB8(r2)
      fabs      f3, f0
      lfs       f0, 0x18(r3)
      fmuls     f0, f1, f0
      frsp      f1, f3
      fcmpo     cr0, f1, f0
      bge-      .loc_0x94
      lfs       f0, 0xC(r3)
      fmuls     f0, f2, f0
      stfs      f0, 0x1C(r3)
      b         .loc_0xA0

    .loc_0x94:
      lfs       f0, 0x4(r3)
      fmuls     f0, f2, f0
      stfs      f0, 0x1C(r3)

    .loc_0xA0:
      lwz       r4, 0x94(r31)
      lwz       r5, 0x88(r31)
      rlwinm    r0,r4,2,0,29
      lfs       f1, 0xFB0(r2)
      lwzx      r7, r5, r0
      lwz       r0, 0xC(r7)
      cmpwi     r0, 0
      beq-      .loc_0xC8
      lfs       f0, 0xFF0(r2)
      fadds     f1, f1, f0

    .loc_0xC8:
      lwz       r3, 0x84(r31)
      lwz       r6, 0x20(r3)
      subfic    r0, r6, 0x1
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x154
      lha       r8, 0x8E(r31)
      addi      r9, r4, 0x1
      cmpw      r9, r8
      blt-      .loc_0xF4
      li        r9, 0

    .loc_0xF4:
      rlwinm    r0,r9,2,0,29
      lwzx      r6, r5, r0
      lwz       r0, 0xC(r6)
      cmpwi     r0, 0
      beq-      .loc_0x1C8
      lfs       f0, 0xFF0(r2)
      lwz       r4, 0x0(r7)
      lwz       r0, 0x0(r6)
      fadds     f1, f1, f0
      cmpw      r4, r0
      bne-      .loc_0x1C8
      addi      r9, r9, 0x1
      fsubs     f1, f1, f0
      cmpw      r9, r8
      blt-      .loc_0x134
      li        r9, 0

    .loc_0x134:
      rlwinm    r0,r9,2,0,29
      lwzx      r4, r5, r0
      lwz       r0, 0xC(r4)
      cmpwi     r0, 0
      beq-      .loc_0x1C8
      lfs       f0, 0xFF0(r2)
      fadds     f1, f1, f0
      b         .loc_0x1C8

    .loc_0x154:
      cmpwi     r6, 0
      beq-      .loc_0x1C8
      subic.    r8, r4, 0x1
      bge-      .loc_0x16C
      lha       r4, 0x8E(r31)
      subi      r8, r4, 0x1

    .loc_0x16C:
      rlwinm    r0,r8,2,0,29
      lwzx      r6, r5, r0
      lwz       r0, 0xC(r6)
      cmpwi     r0, 0
      beq-      .loc_0x1C8
      lfs       f0, 0xFF0(r2)
      lwz       r4, 0x0(r7)
      lwz       r0, 0x0(r6)
      fadds     f1, f1, f0
      cmpw      r4, r0
      bne-      .loc_0x1C8
      fsubs     f1, f1, f0
      subic.    r8, r8, 0x1
      bge-      .loc_0x1AC
      lha       r4, 0x8E(r31)
      subi      r8, r4, 0x1

    .loc_0x1AC:
      rlwinm    r0,r8,2,0,29
      lwzx      r4, r5, r0
      lwz       r0, 0xC(r4)
      cmpwi     r0, 0
      beq-      .loc_0x1C8
      lfs       f0, 0xFF0(r2)
      fadds     f1, f1, f0

    .loc_0x1C8:
      lfs       f0, 0xF98(r2)
      stfs      f0, 0x2C(r3)
      lfs       f0, 0x18(r3)
      lwz       r0, 0x20(r3)
      fmuls     f1, f0, f1
      cmpwi     r0, 0
      beq-      .loc_0x248
      cmpwi     r0, 0x2
      bne-      .loc_0x1F4
      lfs       f2, 0x1C(r3)
      b         .loc_0x1FC

    .loc_0x1F4:
      lfs       f0, 0x1C(r3)
      fneg      f2, f0

    .loc_0x1FC:
      lfs       f0, 0x14(r3)
      fadds     f0, f0, f2
      stfs      f0, 0x14(r3)
      lfs       f0, 0x14(r3)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x228
      fsubs     f0, f0, f1
      li        r30, 0x1
      stfs      f0, 0x2C(r3)
      stfs      f1, 0x14(r3)
      b         .loc_0x24C

    .loc_0x228:
      fneg      f2, f1
      fcmpo     cr0, f0, f2
      bge-      .loc_0x248
      fadds     f0, f0, f1
      li        r30, 0x1
      stfs      f0, 0x2C(r3)
      stfs      f2, 0x14(r3)
      b         .loc_0x24C

    .loc_0x248:
      li        r30, 0

    .loc_0x24C:
      lwz       r3, 0x84(r31)
      li        r28, 0
      li        r29, 0
      lfs       f31, 0x14(r3)
      b         .loc_0x2A8

    .loc_0x260:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r29
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fadds     f0, f0, f31
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      mr        r4, r28
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA0(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x4
      addi      r28, r28, 0x1

    .loc_0x2A8:
      lha       r0, 0x8E(r31)
      cmpw      r28, r0
      blt+      .loc_0x260
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x2E4
      lwz       r3, 0x84(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2D4
      lfs       f31, 0x2C(r3)
      b         .loc_0x2D8

    .loc_0x2D4:
      lfs       f31, 0xF98(r2)

    .loc_0x2D8:
      mr        r3, r31
      bl        .loc_0x390
      b         .loc_0x308

    .loc_0x2E4:
      lwz       r3, 0x84(r31)
      lwz       r0, 0x20(r3)
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x308
      lfs       f1, 0x14(r3)
      lfs       f0, 0xFF4(r2)
      fmuls     f0, f0, f1
      fadds     f31, f1, f0

    .loc_0x308:
      lwz       r3, 0x84(r31)
      li        r28, 0
      li        r29, 0
      stfs      f31, 0x14(r3)
      b         .loc_0x34C

    .loc_0x31C:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r29
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fadds     f0, f0, f31
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x4
      addi      r28, r28, 0x1

    .loc_0x34C:
      lha       r0, 0x8E(r31)
      cmpw      r28, r0
      blt+      .loc_0x31C
      lwz       r4, 0x84(r31)
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x24(r4)
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

    .loc_0x390:
    */
}

/*
 * --INFO--
 * Address:	803A35DC
 * Size:	000060
 */
void Morimura::TScrollList::changeIndex(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, 0x84(r3)
      lwz       r12, 0x0(r3)
      lwz       r0, 0x20(r4)
      lwz       r12, 0xA4(r12)
      subfic    r0, r0, 0x1
      cntlzw    r0, r0
      rlwinm    r4,r0,27,5,31
      mtctr     r12
      bctrl
      lwz       r3, 0x84(r31)
      li        r0, 0
      lfs       f0, 0xF98(r2)
      stfs      f0, 0x14(r3)
      stw       r0, 0x20(r3)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A363C
 * Size:	000008
 */
void @24 @Morimura::TScrollList::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x32834
    */
}
