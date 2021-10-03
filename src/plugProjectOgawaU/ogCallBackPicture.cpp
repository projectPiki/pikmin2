

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void og::Screen::CallBack_Picture::__ct((P2DScreen::Mgr*, unsigned long long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032CE18
 * Size:	000060
 */
void og::Screen::CallBack_Picture::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x4C
      lwz       r3, 0x34(r31)
      cmplwi    r3, 0
      beq-      .loc_0x30
      bl        -0x2795C

    .loc_0x30:
      lwz       r3, 0x1C(r31)
      bl        -0x2EC320
      lwz       r3, 0x1C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032CE78
 * Size:	0002BC
 */
void og::Screen::CallBack_Picture::draw((Graphics&, J2DGrafContext&))
{
    /*
    .loc_0x0:
      stwu      r1, -0xD0(r1)
      mflr      r0
      stw       r0, 0xD4(r1)
      stmw      r23, 0xAC(r1)
      mr        r29, r3
      mr        r25, r4
      mr        r24, r5
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2A8
      lwz       r3, 0x20(r29)
      lwz       r4, 0x24(r29)
      lwz       r12, 0x0(r3)
      lfs       f3, 0x28(r4)
      lfs       f1, 0x20(r4)
      lfs       f2, 0x2C(r4)
      lfs       f0, 0x24(r4)
      fsubs     f1, f3, f1
      lwz       r12, 0x18(r12)
      fsubs     f2, f2, f0
      mtctr     r12
      bctrl
      lfs       f1, 0x28(r29)
      addi      r3, r1, 0x78
      lwz       r4, 0x24(r29)
      fmr       f2, f1
      lfs       f3, -0x400(r2)
      addi      r23, r4, 0x80
      bl        -0x242714
      addi      r4, r1, 0x78
      mr        r3, r23
      mr        r5, r4
      bl        -0x242BF8
      lfs       f1, 0x2C(r29)
      addi      r3, r1, 0x48
      lfs       f2, 0x30(r29)
      lfs       f3, -0x400(r2)
      bl        -0x2427B8
      mr        r5, r23
      addi      r3, r1, 0x78
      addi      r4, r1, 0x48
      bl        -0x242C1C
      lwz       r4, 0x20(r29)
      mr        r3, r23
      addi      r4, r4, 0x50
      bl        -0x242C60
      lwz       r30, 0x24(r29)
      addi      r3, r1, 0x20
      lwz       r31, 0x20(r29)
      mr        r4, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x138(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x20(r1)
      mr        r3, r31
      addi      r4, r1, 0x24
      stw       r0, 0x24(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x12C(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x18
      lwz       r12, 0x0(r30)
      lwz       r12, 0x134(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x18(r1)
      mr        r3, r31
      addi      r4, r1, 0x1C
      stw       r0, 0x1C(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x128(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lbz       r4, 0xB2(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      li        r23, -0x1
      lbz       r0, 0x150(r30)
      stw       r23, 0x38(r1)
      mr        r4, r25
      lbz       r7, 0x151(r30)
      mr        r5, r24
      lbz       r6, 0x152(r30)
      lbz       r3, 0x153(r30)
      stb       r0, 0x38(r1)
      lbz       r0, 0x154(r30)
      stb       r7, 0x39(r1)
      lbz       r24, 0x155(r30)
      stw       r23, 0x3C(r1)
      lbz       r25, 0x156(r30)
      lbz       r8, 0x157(r30)
      stb       r6, 0x3A(r1)
      lbz       r26, 0x158(r30)
      stb       r3, 0x3B(r1)
      lbz       r27, 0x159(r30)
      lwz       r9, 0x38(r1)
      stw       r23, 0x40(r1)
      lbz       r28, 0x15A(r30)
      stw       r9, 0x8(r1)
      lbz       r7, 0x15B(r30)
      lbz       r12, 0x15C(r30)
      lbz       r11, 0x15D(r30)
      lbz       r10, 0x15E(r30)
      lbz       r6, 0x15F(r30)
      stw       r23, 0x44(r1)
      lbz       r3, 0x8(r1)
      stb       r0, 0x3C(r1)
      lbz       r0, 0x9(r1)
      stb       r3, 0x150(r31)
      lbz       r3, 0xA(r1)
      stb       r0, 0x151(r31)
      lbz       r0, 0xB(r1)
      stb       r3, 0x152(r31)
      stb       r24, 0x3D(r1)
      stb       r25, 0x3E(r1)
      stb       r8, 0x3F(r1)
      lwz       r8, 0x3C(r1)
      stb       r0, 0x153(r31)
      stw       r8, 0xC(r1)
      lbz       r3, 0xC(r1)
      stb       r26, 0x40(r1)
      lbz       r0, 0xD(r1)
      stb       r3, 0x154(r31)
      lbz       r3, 0xE(r1)
      stb       r0, 0x155(r31)
      lbz       r0, 0xF(r1)
      stb       r3, 0x156(r31)
      stb       r27, 0x41(r1)
      stb       r28, 0x42(r1)
      stb       r7, 0x43(r1)
      lwz       r7, 0x40(r1)
      stb       r0, 0x157(r31)
      stw       r7, 0x10(r1)
      lbz       r3, 0x10(r1)
      stb       r12, 0x44(r1)
      lbz       r0, 0x11(r1)
      stb       r3, 0x158(r31)
      lbz       r3, 0x12(r1)
      stb       r0, 0x159(r31)
      lbz       r0, 0x13(r1)
      stb       r3, 0x15A(r31)
      stb       r11, 0x45(r1)
      stb       r10, 0x46(r1)
      stb       r6, 0x47(r1)
      lwz       r6, 0x44(r1)
      stb       r0, 0x15B(r31)
      stw       r6, 0x14(r1)
      lbz       r3, 0x14(r1)
      lbz       r0, 0x15(r1)
      stb       r3, 0x15C(r31)
      lbz       r3, 0x16(r1)
      stb       r0, 0x15D(r31)
      lbz       r0, 0x17(r1)
      stb       r3, 0x15E(r31)
      stb       r0, 0x15F(r31)
      lwz       r3, 0x1C(r29)
      stw       r9, 0x28(r1)
      lwz       r12, 0x0(r3)
      stw       r8, 0x2C(r1)
      lwz       r12, 0x9C(r12)
      stw       r7, 0x30(r1)
      stw       r6, 0x34(r1)
      mtctr     r12
      bctrl

    .loc_0x2A8:
      lmw       r23, 0xAC(r1)
      lwz       r0, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void og::Screen::setCallBack_Picture((JKRArchive*, char*, unsigned long long,
                                      P2DScreen::Mgr*, unsigned long long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D134
 * Size:	00011C
 */
void og::Screen::setCallBack_3DStick((JKRArchive*, P2DScreen::Mgr*,
                                      unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r31, r3
      mr        r26, r4
      mr        r28, r5
      mr        r27, r6
      li        r3, 0x138
      bl        -0x3092B4
      mr.       r30, r3
      beq-      .loc_0x38
      bl        0x10795C
      mr        r30, r3

    .loc_0x38:
      lis       r4, 0x8049
      mr        r3, r30
      subi      r4, r4, 0x950
      mr        r6, r31
      lis       r5, 0x4
      bl        -0x2EDB5C
      li        r3, 0x38
      bl        -0x3092E4
      mr.       r29, r3
      beq-      .loc_0x88
      lis       r5, 0x6133
      mr        r4, r30
      addi      r6, r5, 0x646C
      li        r5, 0x6F74
      bl        -0x21E34
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x5EC8
      stw       r3, 0x0(r29)
      stw       r0, 0x34(r29)

    .loc_0x88:
      mr        r3, r26
      mr        r6, r27
      mr        r5, r28
      bl        -0x2A31C
      li        r0, 0
      mr        r6, r27
      stb       r0, 0xB0(r3)
      mr        r5, r28
      mr        r7, r29
      stw       r3, 0x24(r29)
      mr        r3, r26
      bl        0x10793C
      mr        r3, r29
      bl        -0x21DDC
      mr        r0, r3
      li        r3, 0x1C
      mr        r28, r0
      bl        -0x30935C
      mr.       r30, r3
      beq-      .loc_0xE4
      li        r4, 0x1
      bl        -0x27DB8
      mr        r30, r3

    .loc_0xE4:
      lis       r3, 0x8049
      lfs       f1, -0x3FC(r2)
      subi      r6, r3, 0x938
      mr        r4, r31
      mr        r3, r30
      mr        r5, r28
      bl        -0x27898
      stw       r30, 0x34(r29)
      mr        r3, r29
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8032D250
 * Size:	00011C
 */
void og::Screen::setCallBack_3DStickSmall((JKRArchive*, P2DScreen::Mgr*,
                                           unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r31, r3
      mr        r26, r4
      mr        r28, r5
      mr        r27, r6
      li        r3, 0x138
      bl        -0x3093D0
      mr.       r30, r3
      beq-      .loc_0x38
      bl        0x107840
      mr        r30, r3

    .loc_0x38:
      lis       r4, 0x8049
      mr        r3, r30
      subi      r4, r4, 0x920
      mr        r6, r31
      lis       r5, 0x4
      bl        -0x2EDC78
      li        r3, 0x38
      bl        -0x309400
      mr.       r29, r3
      beq-      .loc_0x88
      lis       r5, 0x6133
      mr        r4, r30
      addi      r6, r5, 0x6473
      li        r5, 0x6F74
      bl        -0x21F50
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x5EC8
      stw       r3, 0x0(r29)
      stw       r0, 0x34(r29)

    .loc_0x88:
      mr        r3, r26
      mr        r6, r27
      mr        r5, r28
      bl        -0x2A438
      li        r0, 0
      mr        r6, r27
      stb       r0, 0xB0(r3)
      mr        r5, r28
      mr        r7, r29
      stw       r3, 0x24(r29)
      mr        r3, r26
      bl        0x107820
      mr        r3, r29
      bl        -0x21EF8
      mr        r0, r3
      li        r3, 0x1C
      mr        r28, r0
      bl        -0x309478
      mr.       r30, r3
      beq-      .loc_0xE4
      li        r4, 0x1
      bl        -0x27ED4
      mr        r30, r3

    .loc_0xE4:
      lis       r3, 0x8049
      lfs       f1, -0x3FC(r2)
      subi      r6, r3, 0x908
      mr        r4, r31
      mr        r3, r30
      mr        r5, r28
      bl        -0x279B4
      stw       r30, 0x34(r29)
      mr        r3, r29
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void og::Screen::setCallBack_CStick((JKRArchive*, P2DScreen::Mgr*,
                                     unsigned long long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void og::Screen::setCallBack_CStickSmall((JKRArchive*, P2DScreen::Mgr*,
                                          unsigned long long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void og::Screen::startCB_StickAnimAll((og::Screen::CallBack_Picture*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void og::Screen::startCB_StickAnimUp((og::Screen::CallBack_Picture*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void og::Screen::startCB_StickAnimDown((og::Screen::CallBack_Picture*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D36C
 * Size:	000010
 */
void og::Screen::StickAnimMgr::__ct((og::Screen::CallBack_Picture*))
{
    /*
    .loc_0x0:
      stw       r4, 0x0(r3)
      li        r0, 0
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void og::Screen::StickAnimMgr::stickStop(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D37C
 * Size:	0000D4
 */
void og::Screen::StickAnimMgr::stickUp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0xBC
      lwz       r3, 0x0(r30)
      lwz       r31, 0x34(r3)
      mr        r3, r31
      bl        -0x27B9C
      lwz       r0, 0x4(r30)
      cmpwi     r0, 0x3
      beq-      .loc_0x68
      bge-      .loc_0x9C
      cmpwi     r0, 0x2
      bge-      .loc_0x50
      b         .loc_0x9C

    .loc_0x50:
      lfs       f1, -0x3F0(r2)
      mr        r3, r31
      lfs       f2, -0x3F8(r2)
      lfs       f3, -0x3F4(r2)
      bl        -0x27A7C
      b         .loc_0xB4

    .loc_0x68:
      lfs       f2, -0x3F8(r2)
      fcmpo     cr0, f1, f2
      bge-      .loc_0x88
      lfs       f1, -0x3F0(r2)
      mr        r3, r31
      lfs       f3, -0x3F4(r2)
      bl        -0x27A9C
      b         .loc_0xB4

    .loc_0x88:
      lfs       f1, -0x3F4(r2)
      mr        r3, r31
      fmr       f3, f1
      bl        -0x27AB0
      b         .loc_0xB4

    .loc_0x9C:
      lfs       f1, -0x3F8(r2)
      mr        r3, r31
      lfs       f2, -0x3F4(r2)
      bl        -0x27BF4
      mr        r3, r31
      bl        -0x27B74

    .loc_0xB4:
      li        r0, 0x1
      stw       r0, 0x4(r30)

    .loc_0xBC:
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
 * Address:	8032D450
 * Size:	0000E8
 */
void og::Screen::StickAnimMgr::stickDown(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xD0
      lwz       r3, 0x0(r30)
      lwz       r31, 0x34(r3)
      mr        r3, r31
      bl        -0x27C70
      lwz       r0, 0x4(r30)
      cmpwi     r0, 0x2
      beq-      .loc_0xB0
      bge-      .loc_0x50
      cmpwi     r0, 0x1
      bge-      .loc_0x5C
      b         .loc_0xB0

    .loc_0x50:
      cmpwi     r0, 0x4
      bge-      .loc_0xB0
      b         .loc_0x74

    .loc_0x5C:
      lfs       f1, -0x3F4(r2)
      mr        r3, r31
      lfs       f2, -0x400(r2)
      lfs       f3, -0x3F0(r2)
      bl        -0x27B5C
      b         .loc_0xC8

    .loc_0x74:
      lfs       f0, -0x3F8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x98
      lfs       f1, -0x3F0(r2)
      mr        r3, r31
      lfs       f2, -0x400(r2)
      fmr       f3, f1
      bl        -0x27B80
      b         .loc_0xC8

    .loc_0x98:
      lfs       f1, -0x3F4(r2)
      mr        r3, r31
      lfs       f2, -0x400(r2)
      lfs       f3, -0x3F0(r2)
      bl        -0x27B98
      b         .loc_0xC8

    .loc_0xB0:
      lfs       f1, -0x400(r2)
      mr        r3, r31
      lfs       f2, -0x3F0(r2)
      bl        -0x27CDC
      mr        r3, r31
      bl        -0x27C5C

    .loc_0xC8:
      li        r0, 0x2
      stw       r0, 0x4(r30)

    .loc_0xD0:
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
 * Address:	8032D538
 * Size:	0000BC
 */
void og::Screen::StickAnimMgr::stickUpDown(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0x3
      beq-      .loc_0xA4
      lwz       r3, 0x0(r30)
      lwz       r31, 0x34(r3)
      mr        r3, r31
      bl        -0x27D58
      lwz       r3, 0x0(r30)
      lwz       r3, 0x34(r3)
      bl        -0x27BFC
      lwz       r0, 0x4(r30)
      cmpwi     r0, 0x2
      beq-      .loc_0x74
      bge-      .loc_0x8C
      cmpwi     r0, 0x1
      bge-      .loc_0x5C
      b         .loc_0x8C

    .loc_0x5C:
      fmr       f3, f1
      lfs       f1, -0x3F4(r2)
      lfs       f2, -0x400(r2)
      mr        r3, r31
      bl        -0x27C44
      b         .loc_0x9C

    .loc_0x74:
      fmr       f3, f1
      lfs       f1, -0x3F0(r2)
      lfs       f2, -0x400(r2)
      mr        r3, r31
      bl        -0x27C5C
      b         .loc_0x9C

    .loc_0x8C:
      mr        r3, r31
      bl        -0x27E0C
      mr        r3, r31
      bl        -0x27D18

    .loc_0x9C:
      li        r0, 0x3
      stw       r0, 0x4(r30)

    .loc_0xA4:
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
 * Address:	8032D5F4
 * Size:	000090
 */
void og::Screen::CallBack_Picture::__dt(void)
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
      subi      r0, r4, 0x5EC8
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804E
      subi      r0, r4, 0x7E58
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
      bl        0xE3F34

    .loc_0x64:
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        -0x3095B0

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
