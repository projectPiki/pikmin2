

/*
 * --INFO--
 * Address:	8030DA00
 * Size:	00000C
 */
void og::newScreen::initGround(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, -0x6850(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DA0C
 * Size:	000054
 */
void og::newScreen::Ground::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x143D70
      lis       r3, 0x804E
      li        r0, 0
      subi      r4, r3, 0x7D78
      mr        r3, r31
      stw       r4, 0x0(r31)
      stb       r0, 0x220(r31)
      stb       r0, 0x221(r31)
      stb       r0, 0x222(r31)
      stb       r0, 0x223(r31)
      stb       r0, 0x224(r31)
      lwz       r31, 0xC(r1)
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
void og::newScreen::Ground::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030DA60
 * Size:	000004
 */
void og::newScreen::Ground::doUserCallBackFunc((Resource::MgrCommand*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DA64
 * Size:	0000C0
 */
void og::newScreen::Ground::doCreateObj((JKRArchive*))
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
      li        r3, 0x70
      bl        -0x2E9BE0
      mr.       r4, r3
      beq-      .loc_0x3C
      lis       r4, 0x8049
      subi      r4, r4, 0x1F70
      bl        0x420
      mr        r4, r3

    .loc_0x3C:
      mr        r3, r30
      mr        r5, r31
      bl        0x1442CC
      li        r3, 0x118
      bl        -0x2E9C0C
      mr.       r4, r3
      beq-      .loc_0x60
      bl        0x38974
      mr        r4, r3

    .loc_0x60:
      mr        r3, r30
      mr        r5, r31
      bl        0x1442A8
      li        r3, 0xD4
      bl        -0x2E9C30
      mr.       r4, r3
      beq-      .loc_0x84
      bl        0x365A8
      mr        r4, r3

    .loc_0x84:
      mr        r3, r30
      mr        r5, r31
      bl        0x144284
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      bl        0x14477C
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
 * Address:	8030DB24
 * Size:	00004C
 */
void og::newScreen::Ground::doStart((Screen::StartSceneArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      subi      r4, r5, 0x1F70
      bl        0x143D84
      lwz       r12, 0x0(r3)
      mr        r4, r31
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DB70
 * Size:	000310
 */
void og::newScreen::Ground::doUpdateActive(void)
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
      stmw      r27, 0x1C(r1)
      lwz       r0, -0x6C18(r13)
      lis       r4, 0x8049
      mr        r30, r3
      cmplwi    r0, 0
      subi      r29, r4, 0x1F70
      beq-      .loc_0x2DC
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x68
      addi      r3, r29, 0x10
      addi      r5, r29, 0x1C
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x2E3594

    .loc_0x68:
      lwz       r31, -0x6780(r13)
      cmplwi    r31, 0
      bne-      .loc_0x88
      addi      r3, r29, 0x10
      addi      r5, r29, 0x1C
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x2E35B4

    .loc_0x88:
      lwz       r0, 0x4(r31)
      cmplwi    r0, 0
      bne-      .loc_0xA8
      addi      r3, r29, 0x28
      addi      r5, r29, 0x1C
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x2E35D4

    .loc_0xA8:
      lwz       r3, 0x4(r31)
      lwz       r31, 0x4(r3)
      cmplwi    r31, 0
      bne-      .loc_0xCC
      addi      r3, r29, 0x28
      addi      r5, r29, 0x34
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x2E35F8

    .loc_0xCC:
      lwz       r3, -0x6C18(r13)
      lwz       r28, 0x40(r3)
      mr        r3, r28
      bl        -0x1E6984
      lfs       f29, 0x3C(r28)
      fmr       f31, f1
      lfs       f1, 0x1F4(r28)
      lfs       f0, 0x64(r28)
      fsubs     f1, f1, f29
      lwz       r27, 0x21C(r30)
      fsubs     f30, f0, f29
      stfs      f31, 0x70(r27)
      fdivs     f28, f1, f30
      fcmpo     cr0, f31, f28
      stfs      f28, 0x74(r27)
      cror      2, 0x1, 0x2
      bne-      .loc_0x148
      lbz       r0, 0x220(r30)
      cmplwi    r0, 0
      bne-      .loc_0x150
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0x220(r30)
      addi      r4, r29, 0x58
      bl        0x143C28
      lwz       r12, 0x0(r3)
      li        r4, 0
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x150

    .loc_0x148:
      li        r0, 0
      stb       r0, 0x220(r30)

    .loc_0x150:
      fcmpo     cr0, f31, f28
      cror      2, 0x1, 0x2
      bne-      .loc_0x1A4
      lfs       f1, -0xC88(r2)
      fsubs     f2, f31, f28
      lfs       f0, -0xC84(r2)
      fsubs     f1, f1, f28
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x1A4
      lbz       r0, 0x224(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1A4
      li        r0, 0x1
      lfs       f1, -0xC80(r2)
      stb       r0, 0x224(r30)
      mr        r3, r31
      li        r4, 0
      li        r5, 0x1
      bl        0x15BE04

    .loc_0x1A4:
      lfs       f0, 0x1CC(r28)
      fsubs     f0, f0, f29
      fdivs     f28, f0, f30
      stfs      f28, 0x84(r27)
      fcmpo     cr0, f31, f28
      stfs      f31, 0x80(r27)
      cror      2, 0x1, 0x2
      bne-      .loc_0x21C
      lbz       r0, 0x221(r30)
      cmplwi    r0, 0
      bne-      .loc_0x224
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0x221(r30)
      addi      r4, r29, 0x64
      bl        0x143B74
      lwz       r12, 0x0(r3)
      li        r4, 0
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lbz       r0, -0x6850(r13)
      cmplwi    r0, 0
      bne-      .loc_0x224
      li        r0, 0x1
      mr        r3, r31
      stb       r0, -0x6850(r13)
      li        r4, 0x1
      bl        0x15BF3C
      b         .loc_0x224

    .loc_0x21C:
      li        r0, 0
      stb       r0, 0x221(r30)

    .loc_0x224:
      mr        r3, r28
      bl        -0x1E69B8
      lwz       r3, -0x6514(r13)
      lis       r0, 0x4330
      lwz       r4, 0x2948(r2)
      fcmpo     cr0, f31, f28
      lfs       f0, 0x54(r3)
      lwz       r27, 0x294C(r2)
      fdivs     f3, f0, f1
      stw       r4, 0xC(r1)
      lfd       f2, -0xC78(r2)
      stw       r0, 0x8(r1)
      lfd       f0, 0x8(r1)
      stw       r27, 0x14(r1)
      stw       r0, 0x10(r1)
      fsubs     f1, f0, f2
      lfd       f0, 0x10(r1)
      fnmsubs   f1, f3, f1, f28
      fsubs     f0, f0, f2
      fmadds    f29, f3, f0, f28
      bge-      .loc_0x2A4
      fcmpo     cr0, f31, f1
      ble-      .loc_0x2A4
      lbz       r0, 0x222(r30)
      cmplwi    r0, 0
      bne-      .loc_0x2A4
      li        r0, 0x1
      lfs       f1, -0xC80(r2)
      stb       r0, 0x222(r30)
      mr        r3, r31
      li        r5, 0
      bl        0x15BD04

    .loc_0x2A4:
      fcmpo     cr0, f31, f28
      ble-      .loc_0x2DC
      fcmpo     cr0, f31, f29
      ble-      .loc_0x2DC
      lbz       r0, 0x223(r30)
      cmplwi    r0, 0
      bne-      .loc_0x2DC
      li        r0, 0x1
      lfs       f1, -0xC88(r2)
      stb       r0, 0x223(r30)
      mr        r3, r31
      mr        r4, r27
      li        r5, 0
      bl        0x15BCCC

    .loc_0x2DC:
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      psq_l     f28,0x38(r1),0,0
      lfd       f28, 0x30(r1)
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DE80
 * Size:	00000C
 */
void og::newScreen::Ground::getResName( const
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      subi      r3, r3, 0x1F00
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DE8C
 * Size:	000008
 */
void og::newScreen::Ground::getSceneType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2710
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DE94
 * Size:	00000C
 */
void og::newScreen::Ground::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DEA0
 * Size:	000010
 */
void og::newScreen::Ground::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4F55
      li        r3, 0x4752
      addi      r4, r4, 0x4E44
      blr
    */
}

/*
 * --INFO--
 * Address:	8030DEB0
 * Size:	000008
 */
void og::newScreen::Ground::isDrawInDemo( const
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}
