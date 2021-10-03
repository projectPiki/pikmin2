

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
 * Address:	80324F2C
 * Size:	000080
 */
void og::newScreen::ObjFinalMsg::__ct((char const*))
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
      bl        0x12EBA0
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x6698
      lfs       f0, -0x5E8(r2)
      stw       r3, 0x0(r30)
      addi      r4, r3, 0x10
      mr        r3, r30
      stw       r4, 0x18(r30)
      stw       r0, 0x38(r30)
      stw       r31, 0x14(r30)
      stw       r0, 0x3C(r30)
      stw       r0, 0x40(r30)
      stw       r0, 0x44(r30)
      stw       r0, 0x48(r30)
      stw       r0, 0x4C(r30)
      stw       r0, 0x50(r30)
      stfs      f0, 0x58(r30)
      stfs      f0, 0x54(r30)
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
 * Address:	80324FAC
 * Size:	0000AC
 */
void og::newScreen::ObjFinalMsg::__dt(void)
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
      beq-      .loc_0x90
      lis       r4, 0x804E
      subi      r4, r4, 0x6698
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x80
      lis       r4, 0x804F
      subi      r4, r4, 0x28A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x80
      lis       r4, 0x804E
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0xEC5C0
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x307FE8
      mr        r3, r30
      li        r4, 0
      bl        0xEC560

    .loc_0x80:
      extsh.    r0, r31
      ble-      .loc_0x90
      mr        r3, r30
      bl        -0x300F84

    .loc_0x90:
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
 * Address:	80325058
 * Size:	0002CC
 */
void og::newScreen::ObjFinalMsg::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      stw       r30, 0x38(r1)
      mr        r30, r3
      stw       r29, 0x34(r1)
      bl        0x12EF30
      lis       r4, 0x4F
      lis       r6, 0x4C4D
      lis       r5, 0x4649
      mr        r29, r3
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x5347
      addi      r5, r5, 0x4E41
      bl        -0x15D7C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x54
      stw       r29, 0x38(r30)
      b         .loc_0x8C

    .loc_0x54:
      li        r3, 0xC
      bl        -0x30120C
      cmplwi    r3, 0
      beq-      .loc_0x88
      lis       r5, 0x804B
      lis       r4, 0x804C
      addi      r0, r5, 0x1148
      li        r5, 0
      stw       r0, 0x0(r3)
      addi      r0, r4, 0x13B4
      stw       r5, 0x4(r3)
      stw       r0, 0x0(r3)
      stw       r5, 0x8(r3)

    .loc_0x88:
      stw       r3, 0x38(r30)

    .loc_0x8C:
      li        r3, 0x148
      bl        -0x301244
      mr.       r0, r3
      beq-      .loc_0xA4
      bl        0x10FCB8
      mr        r0, r3

    .loc_0xA4:
      stw       r0, 0x40(r30)
      lis       r3, 0x8049
      subi      r4, r3, 0xCD8
      mr        r6, r31
      lwz       r3, 0x40(r30)
      lis       r5, 0x110
      bl        -0x2E5AF0
      lis       r5, 0x6E75
      lis       r4, 0x4E
      lwz       r3, 0x40(r30)
      addi      r6, r5, 0x3031
      addi      r5, r4, 0x6D65
      bl        -0x22280
      li        r0, 0
      lis       r5, 0x6E75
      stb       r0, 0xB0(r3)
      lis       r4, 0x4E
      addi      r6, r5, 0x3032
      lwz       r3, 0x40(r30)
      addi      r5, r4, 0x6D65
      bl        -0x222A0
      li        r0, 0
      stb       r0, 0xB0(r3)
      lwz       r3, 0x40(r30)
      bl        0x52E4
      li        r3, 0x78
      bl        -0x3012C0
      mr.       r0, r3
      beq-      .loc_0x120
      bl        -0x1B348
      mr        r0, r3

    .loc_0x120:
      lis       r10, 0x795F
      stw       r0, 0x44(r30)
      addi      r0, r10, 0x6972
      lis       r4, 0x6D30
      lis       r3, 0x506D
      stw       r0, 0xC(r1)
      addi      r9, r3, 0x3030
      addi      r6, r4, 0x3079
      stw       r9, 0x8(r1)
      addi      r7, r4, 0x306E
      lis       r3, 0x6E5F
      li        r5, 0x4E
      stw       r7, 0x14(r1)
      li        r11, 0x54
      addi      r4, r3, 0x696C
      addi      r0, r3, 0x6972
      stw       r5, 0x10(r1)
      mr        r8, r6
      addi      r10, r10, 0x696C
      li        r5, 0x4E
      stw       r7, 0x1C(r1)
      li        r7, 0x54
      stw       r11, 0x18(r1)
      stw       r4, 0x24(r1)
      stw       r9, 0x20(r1)
      stw       r0, 0x2C(r1)
      stw       r9, 0x28(r1)
      lwz       r3, 0x44(r30)
      lwz       r4, 0x40(r30)
      bl        -0x1ADCC
      li        r0, 0
      lis       r3, 0x6D30
      stw       r0, 0x3C(r30)
      addi      r6, r3, 0x3071
      li        r5, 0x54
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x305F
      lis       r5, 0x38
      addi      r0, r4, 0x3030
      lis       r4, 0x6D30
      stw       r0, 0x1C(r3)
      addi      r0, r5, 0x3438
      addi      r6, r4, 0x3079
      li        r5, 0x54
      stw       r0, 0x18(r3)
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x315F
      lis       r5, 0x38
      addi      r0, r4, 0x3030
      lis       r4, 0x6D30
      stw       r0, 0x1C(r3)
      addi      r0, r5, 0x3438
      addi      r6, r4, 0x306E
      li        r5, 0x54
      stw       r0, 0x18(r3)
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lis       r5, 0x325F
      lis       r4, 0x38
      addi      r0, r5, 0x3030
      stw       r0, 0x1C(r3)
      addi      r0, r4, 0x3438
      stw       r0, 0x18(r3)
      lwz       r3, 0x40(r30)
      bl        -0x1B4A4
      lis       r6, 0x6D30
      lwz       r4, 0x40(r30)
      mr        r3, r31
      li        r5, 0x54
      addi      r6, r6, 0x3071
      bl        -0x1C894
      stw       r3, 0x48(r30)
      lis       r6, 0x6D30
      mr        r3, r31
      li        r5, 0x54
      lwz       r4, 0x40(r30)
      addi      r6, r6, 0x3079
      bl        -0x1C9EC
      stw       r3, 0x4C(r30)
      lis       r6, 0x6D30
      mr        r3, r31
      li        r5, 0x54
      lwz       r4, 0x40(r30)
      addi      r6, r6, 0x306E
      bl        -0x1CA08
      stw       r3, 0x50(r30)
      mr        r3, r30
      lwz       r4, 0x3C(r30)
      bl        .loc_0x2CC
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x2CC:
    */
}

/*
 * --INFO--
 * Address:	80325324
 * Size:	000070
 */
void og::newScreen::ObjFinalMsg::blink_Menu((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      cmpwi     r4, 0
      mr        r31, r3
      bne-      .loc_0x30
      lfs       f1, -0x5E4(r2)
      lfs       f31, -0x5E8(r2)
      b         .loc_0x38

    .loc_0x30:
      lfs       f1, -0x5E8(r2)
      lfs       f31, -0x5E4(r2)

    .loc_0x38:
      lwz       r3, 0x4C(r31)
      lfs       f2, -0x5E8(r2)
      bl        -0x1BE8C
      fmr       f1, f31
      lwz       r3, 0x50(r31)
      lfs       f2, -0x5E8(r2)
      bl        -0x1BE9C
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
 * Address:	........
 * Size:	000054
 */
void og::newScreen::ObjFinalMsg::commonUpdate(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80325394
 * Size:	000068
 */
void og::newScreen::ObjFinalMsg::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, 0x243C(r2)
      stw       r0, 0x14(r1)
      lfs       f1, -0x5E8(r2)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lfs       f0, 0x2440(r2)
      lfs       f3, 0x54(r3)
      lwz       r3, 0x40(r3)
      fadds     f0, f1, f0
      fadds     f2, f3, f2
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x40(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        .loc_0x68
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x68:
    */
}

/*
 * --INFO--
 * Address:	803253FC
 * Size:	0001C0
 */
void og::newScreen::ObjFinalMsg::menu(void)
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
      mr        r30, r3
      li        r31, 0
      bl        0x12EC1C
      mr        r29, r3
      lwz       r3, 0x44(r30)
      bl        -0x1A824
      lis       r3, 0x800
      lwz       r4, 0x1C(r29)
      addi      r0, r3, 0x8
      and.      r0, r4, r0
      beq-      .loc_0xB0
      lwz       r3, 0x3C(r30)
      cmpwi     r3, 0
      ble-      .loc_0x198
      subi      r0, r3, 0x1
      stw       r0, 0x3C(r30)
      lwz       r0, 0x3C(r30)
      lwz       r3, 0x44(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0x1A908
      lwz       r0, 0x3C(r30)
      cmpwi     r0, 0
      bne-      .loc_0x88
      lfs       f1, -0x5E4(r2)
      lfs       f31, -0x5E8(r2)
      b         .loc_0x90

    .loc_0x88:
      lfs       f1, -0x5E8(r2)
      lfs       f31, -0x5E4(r2)

    .loc_0x90:
      lwz       r3, 0x4C(r30)
      lfs       f2, -0x5E8(r2)
      bl        -0x1BFBC
      fmr       f1, f31
      lwz       r3, 0x50(r30)
      lfs       f2, -0x5E8(r2)
      bl        -0x1BFCC
      b         .loc_0x198

    .loc_0xB0:
      lis       r3, 0x400
      addi      r0, r3, 0x4
      and.      r0, r4, r0
      beq-      .loc_0x124
      lwz       r3, 0x3C(r30)
      cmpwi     r3, 0x1
      bge-      .loc_0x198
      addi      r0, r3, 0x1
      stw       r0, 0x3C(r30)
      lwz       r0, 0x3C(r30)
      lwz       r3, 0x44(r30)
      rlwinm    r4,r0,0,16,31
      bl        -0x1A97C
      lwz       r0, 0x3C(r30)
      cmpwi     r0, 0
      bne-      .loc_0xFC
      lfs       f1, -0x5E4(r2)
      lfs       f31, -0x5E8(r2)
      b         .loc_0x104

    .loc_0xFC:
      lfs       f1, -0x5E8(r2)
      lfs       f31, -0x5E4(r2)

    .loc_0x104:
      lwz       r3, 0x4C(r30)
      lfs       f2, -0x5E8(r2)
      bl        -0x1C030
      fmr       f1, f31
      lwz       r3, 0x50(r30)
      lfs       f2, -0x5E8(r2)
      bl        -0x1C040
      b         .loc_0x198

    .loc_0x124:
      rlwinm.   r0,r4,0,23,23
      beq-      .loc_0x178
      lwz       r0, 0x3C(r30)
      cmpwi     r0, 0
      bne-      .loc_0x154
      lwz       r3, 0x38(r30)
      li        r0, 0x1
      li        r31, 0x1
      stw       r0, 0x8(r3)
      lwz       r3, -0x6858(r13)
      bl        -0x18A24
      b         .loc_0x198

    .loc_0x154:
      cmpwi     r0, 0x1
      bne-      .loc_0x198
      lwz       r3, 0x38(r30)
      li        r0, 0x2
      li        r31, 0x1
      stw       r0, 0x8(r3)
      lwz       r3, -0x6858(r13)
      bl        -0x18A48
      b         .loc_0x198

    .loc_0x178:
      rlwinm.   r0,r4,0,22,22
      beq-      .loc_0x198
      lwz       r3, 0x38(r30)
      li        r0, 0x2
      li        r31, 0x1
      stw       r0, 0x8(r3)
      lwz       r3, -0x6858(r13)
      bl        -0x189BC

    .loc_0x198:
      mr        r3, r31
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
 * Address:	803255BC
 * Size:	000060
 */
void og::newScreen::ObjFinalMsg::doDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x40(r3)
      cmplwi    r3, 0
      beq-      .loc_0x48
      lwz       r12, 0x0(r3)
      addi      r31, r4, 0x190
      mr        r5, r31
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x44(r30)
      mr        r4, r31
      bl        -0x1A474

    .loc_0x48:
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
 * Address:	8032561C
 * Size:	000060
 */
void og::newScreen::ObjFinalMsg::doStart((Screen::StartSceneArg const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x6B6F
      lis       r4, 0x6675
      stw       r0, 0x14(r1)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x7269
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x40(r3)
      bl        0x506C
      bl        0x48D0
      lfs       f1, -0x5E0(r2)
      lfs       f0, -0x5E8(r2)
      stfs      f1, 0x54(r31)
      stfs      f0, 0x58(r31)
      lwz       r3, -0x6858(r13)
      bl        -0x18834
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
 * Address:	8032567C
 * Size:	000008
 */
void og::newScreen::ObjFinalMsg::doEnd((Screen::EndSceneArg const*))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80325684
 * Size:	0000B8
 */
void og::newScreen::ObjFinalMsg::doUpdateFadein(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, 0x243C(r2)
      stw       r0, 0x14(r1)
      lfs       f1, -0x5E8(r2)
      stw       r31, 0xC(r1)
      li        r31, 0
      lfs       f0, 0x2440(r2)
      stw       r30, 0x8(r1)
      mr        r30, r3
      fadds     f0, f1, f0
      lfs       f3, 0x54(r3)
      lwz       r3, 0x40(r3)
      fadds     f2, f3, f2
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x6514(r13)
      lis       r3, 0x8051
      lfs       f1, 0x58(r30)
      addi      r3, r3, 0x3CF4
      lfs       f0, 0x54(r4)
      fadds     f0, f1, f0
      stfs      f0, 0x58(r30)
      lfs       f1, 0x58(r30)
      lfs       f2, 0x8(r3)
      fcmpo     cr0, f1, f2
      ble-      .loc_0x84
      li        r31, 0x1

    .loc_0x84:
      bl        -0x2306C
      lfs       f2, -0x5DC(r2)
      mr        r3, r31
      lfs       f0, -0x5E0(r2)
      fsubs     f1, f2, f1
      fmuls     f0, f0, f1
      stfs      f0, 0x54(r30)
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
 * Address:	8032573C
 * Size:	00003C
 */
void og::newScreen::ObjFinalMsg::doUpdateFadeinFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x5E8(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x44(r3)
      bl        -0x1B658
      mr        r3, r31
      bl        0x134
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80325778
 * Size:	000038
 */
void og::newScreen::ObjFinalMsg::doUpdateFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x44(r3)
      bl        -0x1B5FC
      lfs       f0, -0x5E8(r2)
      stfs      f0, 0x58(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803257B0
 * Size:	0000B0
 */
void og::newScreen::ObjFinalMsg::doUpdateFadeout(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, 0x243C(r2)
      stw       r0, 0x14(r1)
      lfs       f1, -0x5E8(r2)
      stw       r31, 0xC(r1)
      li        r31, 0
      lfs       f0, 0x2440(r2)
      stw       r30, 0x8(r1)
      mr        r30, r3
      fadds     f0, f1, f0
      lfs       f3, 0x54(r3)
      lwz       r3, 0x40(r3)
      fadds     f2, f3, f2
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x6514(r13)
      lis       r3, 0x8051
      lfs       f1, 0x58(r30)
      addi      r3, r3, 0x3CF4
      lfs       f0, 0x54(r4)
      fadds     f0, f1, f0
      stfs      f0, 0x58(r30)
      lfs       f1, 0x58(r30)
      lfs       f2, 0x8(r3)
      fcmpo     cr0, f1, f2
      ble-      .loc_0x84
      li        r31, 0x1

    .loc_0x84:
      bl        -0x23198
      lfs       f0, -0x5D8(r2)
      mr        r3, r31
      fmuls     f0, f0, f1
      stfs      f0, 0x54(r30)
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
 * Address:	80325860
 * Size:	000034
 */
void og::newScreen::ObjFinalMsg::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        0x12C710
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80325894
 * Size:	00004C
 */
void og::newScreen::ObjFinalMsg::wait(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x5E8(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x48(r3)
      bl        -0x1C45C
      lwz       r3, 0x4C(r31)
      lfs       f1, -0x5D4(r2)
      bl        -0x1C468
      lwz       r3, 0x50(r31)
      lfs       f1, -0x5D0(r2)
      bl        -0x1C474
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803258E0
 * Size:	000008
 */
void @24 @og::newScreen::ObjFinalMsg::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x938
    */
}
