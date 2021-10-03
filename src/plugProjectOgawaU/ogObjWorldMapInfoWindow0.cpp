

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
 * Address:	8032B340
 * Size:	000084
 */
void og::newScreen::ObjWorldMapInfoWindow0::__ct((char const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x14(r1)
      subi      r0, r5, 0xA38
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r4, r0
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        -0x21D8
      lis       r3, 0x804E
      li        r0, 0
      subi      r4, r3, 0x62B0
      mr        r3, r30
      stw       r4, 0x0(r30)
      addi      r4, r4, 0x10
      stw       r4, 0x18(r30)
      stw       r0, 0xCC(r30)
      stw       r31, 0x14(r30)
      stw       r0, 0xB0(r30)
      stw       r0, 0xB4(r30)
      stw       r0, 0xB8(r30)
      stw       r0, 0xBC(r30)
      stw       r0, 0xD0(r30)
      lwz       r0, 0xD0(r30)
      stw       r0, 0xAC(r30)
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
 * Address:	8032B3C4
 * Size:	0003C4
 */
void og::newScreen::ObjWorldMapInfoWindow0::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      subi      r31, r5, 0xA58
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r29, r4
      stw       r28, 0x30(r1)
      mr        r28, r3
      bl        0x128BB8
      lis       r4, 0x4F
      lis       r6, 0x5769
      lis       r5, 0x574D
      mr        r30, r3
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x6E30
      addi      r5, r5, 0x6170
      bl        -0x1C0F4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x60
      stw       r30, 0xCC(r28)
      b         .loc_0x164

    .loc_0x60:
      lis       r4, 0x4D52
      lis       r6, 0x4C45
      lis       r5, 0x5653
      mr        r3, r30
      addi      r4, r4, 0x4D52
      addi      r6, r6, 0x4354
      addi      r5, r5, 0x5345
      bl        -0x1C124
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x94
      lwz       r0, 0x10(r30)
      stw       r0, 0xCC(r28)
      b         .loc_0x164

    .loc_0x94:
      lis       r4, 0x4D52
      lis       r6, 0x4C45
      lis       r5, 0x4348
      mr        r3, r30
      addi      r4, r4, 0x4D52
      addi      r6, r6, 0x4354
      addi      r5, r5, 0x5345
      bl        -0x1C158
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC8
      lwz       r0, 0x20(r30)
      stw       r0, 0xCC(r28)
      b         .loc_0x164

    .loc_0xC8:
      lis       r4, 0x4D52
      lis       r6, 0x4E45
      mr        r3, r30
      li        r5, 0x4445
      addi      r4, r4, 0x4D52
      addi      r6, r6, 0x4D59
      bl        -0x1C188
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x118
      lwz       r0, 0x18(r30)
      stw       r0, 0xCC(r28)
      lwz       r0, 0xCC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x164
      addi      r3, r31, 0
      addi      r5, r31, 0x34
      li        r4, 0x7D
      crclr     6, 0x6
      bl        -0x300E94
      b         .loc_0x164

    .loc_0x118:
      lis       r4, 0x4D52
      lis       r6, 0x4954
      mr        r3, r30
      li        r5, 0x44
      addi      r4, r4, 0x4D52
      addi      r6, r6, 0x454D
      bl        -0x1C1D8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x164
      lwz       r0, 0x18(r30)
      stw       r0, 0xCC(r28)
      lwz       r0, 0xCC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x164
      addi      r3, r31, 0
      addi      r5, r31, 0x34
      li        r4, 0x81
      crclr     6, 0x6
      bl        -0x300EE4

    .loc_0x164:
      lwz       r0, 0xCC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x1DC
      li        r3, 0x28
      bl        -0x307694
      cmplwi    r3, 0
      beq-      .loc_0x1D8
      lis       r4, 0x804B
      lis       r7, 0x804E
      addi      r0, r4, 0x1148
      lis       r6, 0x305F
      stw       r0, 0x0(r3)
      li        r8, 0
      lis       r5, 0x34
      lis       r4, 0x315F
      stw       r8, 0x4(r3)
      subi      r0, r7, 0x61F8
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3731
      stw       r0, 0x0(r3)
      addi      r4, r4, 0x3030
      li        r0, 0xB4
      stw       r8, 0x8(r3)
      stw       r6, 0x14(r3)
      stw       r5, 0x10(r3)
      stw       r4, 0x1C(r3)
      stw       r5, 0x18(r3)
      stb       r0, 0x20(r3)
      stb       r8, 0x21(r3)

    .loc_0x1D8:
      stw       r3, 0xCC(r28)

    .loc_0x1DC:
      li        r3, 0x148
      bl        -0x307700
      mr.       r0, r3
      beq-      .loc_0x1F4
      bl        0x1097FC
      mr        r0, r3

    .loc_0x1F4:
      stw       r0, 0xB0(r28)
      mr        r6, r29
      addi      r4, r31, 0x40
      lis       r5, 0x110
      lwz       r3, 0xB0(r28)
      bl        -0x2EBFA8
      lis       r5, 0x6E75
      lis       r4, 0x4E
      lwz       r3, 0xB0(r28)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x6D65
      bl        -0x28738
      li        r0, 0
      lis       r5, 0x6E75
      stb       r0, 0xB0(r3)
      lis       r4, 0x4E
      addi      r6, r5, 0x3032
      lwz       r3, 0xB0(r28)
      addi      r5, r4, 0x6D65
      bl        -0x28758
      li        r0, 0
      stb       r0, 0xB0(r3)
      lwz       r3, 0xB0(r28)
      bl        -0x11D4
      li        r3, 0x78
      bl        -0x307778
      mr.       r0, r3
      beq-      .loc_0x26C
      bl        -0x21800
      mr        r0, r3

    .loc_0x26C:
      lis       r10, 0x795F
      stw       r0, 0xB4(r28)
      addi      r0, r10, 0x6972
      lis       r4, 0x6D30
      lis       r3, 0x506D
      stw       r0, 0xC(r1)
      addi      r9, r3, 0x3031
      addi      r6, r4, 0x3179
      stw       r9, 0x8(r1)
      addi      r7, r4, 0x316E
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
      lwz       r3, 0xB4(r28)
      lwz       r4, 0xB0(r28)
      bl        -0x214A0
      lwz       r3, 0xB0(r28)
      lis       r4, 0x6D30
      lwz       r7, 0xCC(r28)
      addi      r6, r4, 0x3179
      lwz       r12, 0x0(r3)
      li        r5, 0x54
      lwz       r30, 0x10(r7)
      lwz       r12, 0x3C(r12)
      lwz       r31, 0x14(r7)
      mtctr     r12
      bctrl
      stw       r31, 0x1C(r3)
      lis       r4, 0x6D30
      addi      r6, r4, 0x316E
      li        r5, 0x54
      stw       r30, 0x18(r3)
      lwz       r3, 0xB0(r28)
      lwz       r4, 0xCC(r28)
      lwz       r12, 0x0(r3)
      lwz       r30, 0x18(r4)
      lwz       r12, 0x3C(r12)
      lwz       r31, 0x1C(r4)
      mtctr     r12
      bctrl
      stw       r31, 0x1C(r3)
      stw       r30, 0x18(r3)
      lwz       r3, 0xB0(r28)
      bl        -0x21914
      lis       r6, 0x6D30
      lwz       r4, 0xB0(r28)
      mr        r3, r29
      li        r5, 0x54
      addi      r6, r6, 0x3179
      bl        -0x22E40
      stw       r3, 0xB8(r28)
      lis       r6, 0x6D30
      mr        r3, r29
      li        r5, 0x54
      lwz       r4, 0xB0(r28)
      addi      r6, r6, 0x316E
      bl        -0x22E5C
      stw       r3, 0xBC(r28)
      lfs       f1, -0x458(r2)
      lwz       r3, 0xB8(r28)
      bl        -0x22304
      lwz       r3, 0xBC(r28)
      lfs       f1, -0x454(r2)
      bl        -0x22310
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r28, 0x30(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8032B788
 * Size:	00008C
 */
void og::newScreen::ObjWorldMapInfoWindow0::doStart(
    (Screen::StartSceneArg const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0xCC(r3)
      lbz       r0, 0x21(r3)
      stw       r0, 0xD0(r31)
      lwz       r0, 0xD0(r31)
      lwz       r3, 0xB4(r31)
      rlwinm    r4,r0,0,16,31
      bl        -0x20BBC
      lwz       r0, 0xD0(r31)
      mr        r3, r31
      stw       r0, 0xAC(r31)
      lwz       r4, 0xAC(r31)
      bl        -0x21C0
      lwz       r3, -0x6858(r13)
      bl        -0x1EA54
      lis       r5, 0x6B6F
      lis       r4, 0x6675
      lwz       r3, 0xB0(r31)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x7269
      bl        -0x1138
      bl        -0x18D4
      mr        r3, r31
      li        r4, 0
      bl        -0x14E38
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
 * Address:	8032B814
 * Size:	000090
 */
void og::newScreen::ObjWorldMapInfoWindow0::doUpdateFadein(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x6514(r13)
      lis       r3, 0x8051
      lfs       f1, 0x44(r30)
      addi      r3, r3, 0x3CF4
      lfs       f0, 0x54(r4)
      li        r31, 0
      fadds     f0, f1, f0
      stfs      f0, 0x44(r30)
      lfs       f1, 0x44(r30)
      lfs       f2, 0x8(r3)
      fcmpo     cr0, f1, f2
      ble-      .loc_0x5C
      li        r31, 0x1

    .loc_0x5C:
      bl        -0x291D4
      lfs       f2, -0x44C(r2)
      mr        r3, r31
      lfs       f0, -0x450(r2)
      fsubs     f1, f2, f1
      fmuls     f0, f0, f1
      stfs      f0, 0x40(r30)
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
 * Address:	8032B8A4
 * Size:	000020
 */
void og::newScreen::ObjWorldMapInfoWindow0::commonUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x2234
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032B8C4
 * Size:	000038
 */
void og::newScreen::ObjWorldMapInfoWindow0::out_cancel(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      lwz       r4, 0xCC(r3)
      stw       r0, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x84(r12)
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
 * Address:	8032B8FC
 * Size:	000038
 */
void og::newScreen::ObjWorldMapInfoWindow0::out_menu_0(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      lwz       r4, 0xCC(r3)
      stw       r0, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x84(r12)
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
 * Address:	8032B934
 * Size:	000038
 */
void og::newScreen::ObjWorldMapInfoWindow0::out_menu_1(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0x1
      lwz       r4, 0xCC(r3)
      stw       r0, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x84(r12)
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
 * Address:	8032B96C
 * Size:	00000C
 */
void og::newScreen::ObjWorldMapInfoWindow0::out_L(void)
{
    /*
    .loc_0x0:
      li        r0, 0x2
      stw       r0, 0x38(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8032B978
 * Size:	000088
 */
void og::newScreen::ObjWorldMapInfoWindow0::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      mr        r3, r31
      bl        -0x156A8
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x74
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      bl        0x12689C

    .loc_0x74:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BA00
 * Size:	00000C
 */
void og::newScreen::ObjWorldMapInfoWindow0::getResult(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xCC(r3)
      lwz       r3, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BA0C
 * Size:	000068
 */
void og::newScreen::ObjWorldMapInfoWindow0::__dt(void)
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
      beq-      .loc_0x4C
      lis       r5, 0x804E
      li        r4, 0
      subi      r5, r5, 0x62B0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x10
      stw       r0, 0x18(r30)
      bl        -0x2834
      extsh.    r0, r31
      ble-      .loc_0x4C
      mr        r3, r30
      bl        -0x3079A0

    .loc_0x4C:
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
 * Address:	8032BA74
 * Size:	000008
 */
void og::Screen::DispMemberWorldMapInfoWin0::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x28
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BA7C
 * Size:	00000C
 */
void og::Screen::DispMemberWorldMapInfoWin0::getOwnerID(void)
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
 * Address:	8032BA88
 * Size:	000014
 */
void og::Screen::DispMemberWorldMapInfoWin0::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5769
      lis       r3, 0x574D
      addi      r4, r4, 0x6E30
      addi      r3, r3, 0x6170
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BA9C
 * Size:	000008
 */
void @24 @og::newScreen::ObjWorldMapInfoWindow0::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x94
    */
}
