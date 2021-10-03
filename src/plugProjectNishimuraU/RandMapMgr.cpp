

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
 * Address:	80244528
 * Size:	000088
 */
void Game::Cave::RandMapMgr::__ct((bool))
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
      bl        0x1CCE4C
      lis       r4, 0x804C
      lis       r3, 0x8048
      addi      r0, r4, 0x1AE8
      li        r4, 0
      stw       r0, 0x0(r30)
      addi      r0, r3, 0x4070
      mr        r3, r30
      stw       r4, 0x18(r30)
      stw       r4, 0x1C(r30)
      stw       r4, 0x20(r30)
      stw       r4, 0x24(r30)
      stw       r4, 0x28(r30)
      stw       r4, 0x2C(r30)
      stw       r4, 0x30(r30)
      stw       r4, 0x34(r30)
      stw       r4, 0x38(r30)
      stb       r4, 0x3C(r30)
      stw       r4, 0x40(r30)
      stb       r31, 0x44(r30)
      stw       r0, 0x14(r30)
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
 * Address:	802445B0
 * Size:	0001A4
 */
void Game::Cave::RandMapMgr::loadResource((Game::MapUnitInterface*, int,
                                           Game::Cave::FloorInfo*, bool,
                                           Game::Cave::EditMapUnit*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r31, r3
      mr        r26, r4
      mr        r27, r5
      mr        r28, r6
      mr        r29, r7
      mr        r30, r8
      li        r3, 0x34
      bl        -0x220738
      mr.       r0, r3
      beq-      .loc_0x54
      mr        r4, r26
      mr        r5, r27
      mr        r6, r28
      mr        r7, r29
      mr        r8, r30
      bl        0x74B0
      mr        r0, r3

    .loc_0x54:
      stw       r0, 0x18(r31)
      li        r3, 0x2C
      bl        -0x220768
      mr.       r0, r3
      beq-      .loc_0x74
      lwz       r4, 0x18(r31)
      bl        0x1964
      mr        r0, r3

    .loc_0x74:
      stw       r0, 0x1C(r31)
      li        r3, 0x40
      bl        -0x220788
      mr.       r0, r3
      beq-      .loc_0x98
      lwz       r4, 0x18(r31)
      lbz       r5, 0x44(r31)
      bl        0x42D4
      mr        r0, r3

    .loc_0x98:
      stw       r0, 0x20(r31)
      li        r3, 0x18
      bl        -0x2207AC
      mr.       r0, r3
      beq-      .loc_0xB8
      lwz       r4, 0x18(r31)
      bl        0xBC808
      mr        r0, r3

    .loc_0xB8:
      stw       r0, 0x24(r31)
      li        r3, 0xC
      bl        -0x2207CC
      mr.       r0, r3
      beq-      .loc_0xD8
      lwz       r4, 0x18(r31)
      bl        0x5A88C
      mr        r0, r3

    .loc_0xD8:
      stw       r0, 0x28(r31)
      li        r3, 0x18
      bl        -0x2207EC
      mr.       r0, r3
      beq-      .loc_0xF8
      lwz       r4, 0x18(r31)
      bl        0xB7D0
      mr        r0, r3

    .loc_0xF8:
      stw       r0, 0x2C(r31)
      li        r3, 0x18
      bl        -0x22080C
      mr.       r0, r3
      beq-      .loc_0x118
      lwz       r4, 0x18(r31)
      bl        0x9CCC
      mr        r0, r3

    .loc_0x118:
      stw       r0, 0x30(r31)
      li        r3, 0x14
      bl        -0x22082C
      mr.       r0, r3
      beq-      .loc_0x138
      lwz       r4, 0x18(r31)
      bl        0x8198
      mr        r0, r3

    .loc_0x138:
      stw       r0, 0x34(r31)
      li        r3, 0x4
      bl        -0x22084C
      mr.       r0, r3
      beq-      .loc_0x158
      lwz       r4, 0x18(r31)
      bl        0xD18
      mr        r0, r3

    .loc_0x158:
      stw       r0, 0x38(r31)
      lwz       r3, 0x20(r31)
      lwz       r4, 0x34(r31)
      bl        0x42A8
      lwz       r3, 0x24(r31)
      lwz       r4, 0x30(r31)
      bl        0xBC774
      lwz       r3, 0x2C(r31)
      lwz       r4, 0x34(r31)
      lwz       r5, 0x30(r31)
      bl        0xB7B4
      lwz       r3, 0x30(r31)
      lwz       r4, 0x34(r31)
      bl        0x9CB4
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80244754
 * Size:	000104
 */
void Game::Cave::RandMapMgr::create(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0x1C(r3)
      bl        0x19B0
      lwz       r3, 0x34(r31)
      bl        0x8218
      lwz       r3, 0x34(r31)
      bl        0x81A4
      lwz       r3, 0x34(r31)
      bl        0x8240
      lwz       r3, 0x20(r31)
      bl        0x4238
      lwz       r3, 0x34(r31)
      bl        0x818C
      lwz       r3, 0x28(r31)
      bl        0x5A7CC
      lwz       r3, 0x30(r31)
      bl        0x9C54
      lwz       r3, 0x24(r31)
      bl        0xBC6F0
      lwz       r3, 0x34(r31)
      bl        0x816C
      lwz       r3, 0x2C(r31)
      bl        0xB734
      lwz       r3, 0x1C(r31)
      addi      r4, r1, 0xC
      addi      r5, r1, 0x8
      bl        0x1A78
      lwz       r5, 0xC(r1)
      lis       r3, 0x8048
      lwz       r0, 0x8(r1)
      addi      r4, r3, 0x407C
      rlwinm    r5,r5,3,0,28
      lwz       r3, -0x6514(r13)
      rlwinm    r0,r0,3,0,28
      stw       r5, 0xC(r1)
      li        r5, 0
      stw       r0, 0x8(r1)
      bl        0x1DEB64
      li        r3, 0x40
      bl        -0x22095C
      mr.       r0, r3
      beq-      .loc_0xCC
      lwz       r4, 0xC(r1)
      li        r6, 0
      lwz       r5, 0x8(r1)
      bl        -0x2118FC
      mr        r0, r3

    .loc_0xCC:
      stw       r0, 0x40(r31)
      lis       r3, 0x8048
      addi      r4, r3, 0x407C
      li        r0, 0x2
      lwz       r3, 0x40(r31)
      lwz       r3, 0x20(r3)
      stb       r0, 0x1(r3)
      lwz       r3, -0x6514(r13)
      bl        0x1DEB24
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80244858
 * Size:	000034
 */
void Game::Cave::RandMapMgr::getNumRooms(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      lwz       r3, 0x28(r3)
      lwz       r12, 0x0(r3)
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
 * Address:	8024488C
 * Size:	00003C
 */
void Game::Cave::RandMapMgr::getUseUnitName((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      lwz       r3, 0x28(r3)
      bl        0x1CCDFC
      cmplwi    r3, 0
      beq-      .loc_0x28
      bl        -0xEE8
      b         .loc_0x2C

    .loc_0x28:
      li        r3, 0

    .loc_0x2C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802448C8
 * Size:	000084
 */
void Game::Cave::RandMapMgr::getRoomData((int, float&, float&, int&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r7
      stw       r29, 0x14(r1)
      mr        r29, r6
      stw       r28, 0x10(r1)
      mr        r28, r5
      lwz       r3, 0x18(r3)
      lwz       r3, 0x28(r3)
      bl        0x1CCDA4
      mr.       r31, r3
      beq-      .loc_0x60
      mr        r4, r28
      mr        r5, r29
      bl        -0xF24
      mr        r3, r31
      bl        -0xE5C
      stw       r3, 0x0(r30)
      mr        r3, r31
      bl        -0xF5C
      b         .loc_0x64

    .loc_0x60:
      li        r3, 0

    .loc_0x64:
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
 * Address:	8024494C
 * Size:	0000E4
 */
void Game::Cave::RandMapMgr::makeRoomLink((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r31, r3
      lwz       r3, 0x18(r3)
      lwz       r3, 0x28(r3)
      bl        0x1CCD34
      mr.       r26, r3
      beq-      .loc_0xCC
      li        r3, 0x20
      bl        -0x220AD4
      mr.       r29, r3
      beq-      .loc_0x48
      bl        0x1CCA0C
      lis       r3, 0x804C
      addi      r0, r3, 0x1AD8
      stw       r0, 0x0(r29)

    .loc_0x48:
      mr        r3, r26
      bl        -0x938
      mr        r30, r3
      li        r25, 0
      li        r27, 0
      b         .loc_0xBC

    .loc_0x60:
      li        r3, 0x20
      bl        -0x220B0C
      mr.       r28, r3
      beq-      .loc_0x80
      bl        0x1CC9D4
      lis       r3, 0x804C
      addi      r0, r3, 0x1AD8
      stw       r0, 0x0(r28)

    .loc_0x80:
      sth       r25, 0x18(r28)
      addi      r0, r27, 0x4
      lwz       r3, 0x28(r26)
      lwzx      r0, r3, r0
      sth       r0, 0x1A(r28)
      lwz       r4, 0x28(r26)
      lwz       r3, 0x1C(r31)
      lwzx      r4, r4, r27
      bl        0x1824
      sth       r3, 0x1C(r28)
      mr        r3, r29
      mr        r4, r28
      bl        0x1CCA0C
      addi      r27, r27, 0xC
      addi      r25, r25, 0x1

    .loc_0xBC:
      cmpw      r25, r30
      blt+      .loc_0x60
      mr        r3, r29
      b         .loc_0xD0

    .loc_0xCC:
      li        r3, 0

    .loc_0xD0:
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80244A30
 * Size:	000084
 */
void Game::Cave::RandMapMgr::makeObjectLayoutInfo((int))
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
      lwz       r3, 0x18(r3)
      lwz       r3, 0x28(r3)
      bl        0x1CCC48
      mr.       r30, r3
      beq-      .loc_0x64
      li        r3, 0x8
      bl        -0x220BC0
      mr.       r31, r3
      beq-      .loc_0x4C
      mr        r4, r30
      bl        0xBDB0
      mr        r31, r3

    .loc_0x4C:
      lwz       r3, 0x34(r29)
      mr        r4, r30
      mr        r5, r31
      bl        0x7F94
      mr        r3, r31
      b         .loc_0x68

    .loc_0x64:
      li        r3, 0

    .loc_0x68:
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
 * Address:	80244AB4
 * Size:	000088
 */
void getStartPosition__Q34Game4Cave10RandMapMgrFR10Vector3<float> i(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r4, 0x18(r3)
      lbz       r0, 0x2(r4)
      cmplwi    r0, 0
      beq-      .loc_0x54
      cmpwi     r5, 0
      bne-      .loc_0x40
      lwz       r3, 0x34(r3)
      mr        r5, r31
      li        r4, 0x3
      bl        0x80DC
      b         .loc_0x64

    .loc_0x40:
      lwz       r3, 0x34(r3)
      mr        r5, r31
      li        r4, 0x4
      bl        0x80C8
      b         .loc_0x64

    .loc_0x54:
      lwz       r3, 0x34(r3)
      mr        r5, r31
      li        r4, 0
      bl        0x80B4

    .loc_0x64:
      lfs       f1, 0x4(r31)
      lfs       f0, -0x3C38(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x4(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80244B3C
 * Size:	0000A0
 */
void getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<float> ff(void)
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
      fmr       f30, f1
      mr        r30, r3
      fmr       f31, f2
      mr        r31, r4
      bl        -0x17B5D0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      fsubs     f1, f31, f30
      lfd       f3, -0x3C30(r2)
      mr        r4, r31
      stw       r0, 0x8(r1)
      li        r5, -0x1
      lfs       f0, -0x3C34(r2)
      lfd       f2, 0x8(r1)
      lwz       r3, 0x30(r30)
      fsubs     f2, f2, f3
      fmuls     f1, f1, f2
      fdivs     f0, f1, f0
      fadds     f1, f30, f0
      bl        0x9C20
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x44(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80244BDC
 * Size:	000188
 */
void getItemDropPosition__Q34Game4Cave10RandMapMgrFP10Vector3<float> iff(void)
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
      stmw      r26, 0x98(r1)
      fadds     f1, f1, f2
      lfs       f3, -0x3C28(r2)
      lfs       f0, -0x3C24(r2)
      mr        r30, r3
      mr        r26, r4
      mr        r31, r5
      fmuls     f30, f3, f1
      fsubs     f31, f2, f30
      fcmpo     cr0, f31, f0
      ble-      .loc_0x4C
      b         .loc_0x50

    .loc_0x4C:
      fneg      f31, f31

    .loc_0x50:
      bl        -0x17B68C
      xoris     r0, r3, 0x8000
      lis       r4, 0x4330
      stw       r0, 0x8C(r1)
      rlwinm    r3,r31,1,31,31
      rlwinm    r0,r31,0,31,31
      lfd       f3, -0x3C30(r2)
      stw       r4, 0x88(r1)
      xor       r0, r0, r3
      sub       r3, r0, r3
      lfs       f1, -0x3C34(r2)
      lfd       f2, 0x88(r1)
      subi      r27, r3, 0x1
      lfs       f0, -0x3C20(r2)
      addi      r4, r1, 0x48
      fsubs     f2, f2, f3
      lwz       r3, 0x30(r30)
      addi      r5, r1, 0x8
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x90(r1)
      lwz       r29, 0x94(r1)
      bl        0x9B3C
      mr        r28, r26
      li        r26, 0
      b         .loc_0x15C

    .loc_0xBC:
      fmr       f1, f30
      cmpw      r26, r27
      beq-      .loc_0x144
      rlwinm    r3,r26,1,31,31
      rlwinm    r0,r26,0,31,31
      xor       r0, r0, r3
      sub       r0, r0, r3
      cmpw      r0, r29
      bne-      .loc_0x114
      bl        -0x17B71C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x94(r1)
      lfd       f2, -0x3C30(r2)
      stw       r0, 0x90(r1)
      lfs       f0, -0x3C34(r2)
      lfd       f1, 0x90(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f31, f1
      fdivs     f0, f1, f0
      fadds     f1, f30, f0
      b         .loc_0x144

    .loc_0x114:
      bl        -0x17B750
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x94(r1)
      lfd       f2, -0x3C30(r2)
      stw       r0, 0x90(r1)
      lfs       f0, -0x3C34(r2)
      lfd       f1, 0x90(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f31, f1
      fdivs     f0, f1, f0
      fsubs     f1, f30, f0

    .loc_0x144:
      lwz       r3, 0x30(r30)
      mr        r4, r28
      mr        r5, r26
      bl        0x9AA4
      addi      r28, r28, 0xC
      addi      r26, r26, 0x1

    .loc_0x15C:
      cmpw      r26, r31
      blt+      .loc_0xBC
      psq_l     f31,0xC8(r1),0,0
      lfd       f31, 0xC0(r1)
      psq_l     f30,0xB8(r1),0,0
      lfd       f30, 0xB0(r1)
      lmw       r26, 0x98(r1)
      lwz       r0, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	80244D64
 * Size:	000048
 */
void Game::Cave::RandMapMgr::setUnitTexture((int, JUTTexture*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      lwz       r3, 0x18(r3)
      lwz       r3, 0x28(r3)
      bl        0x1CC91C
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r3, 0x18(r3)
      mr        r4, r31
      bl        -0x23F8

    .loc_0x34:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80244DAC
 * Size:	00000C
 */
void Game::Cave::RandMapMgr::setCaptureOn(void)
{
    /*
    .loc_0x0:
      li        r0, 0x1
      stb       r0, 0x3C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80244DB8
 * Size:	0000DC
 */
void Game::Cave::RandMapMgr::captureRadarMap((Graphics&))
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
      lbz       r0, 0x3C(r3)
      cmplwi    r0, 0
      beq-      .loc_0xC4
      bl        0x378
      mr        r3, r31
      bl        0x1E29C0
      li        r0, 0xFF
      addi      r4, r1, 0xC
      stb       r0, 0x8(r1)
      li        r3, 0x4
      stb       r0, 0x9(r1)
      stb       r0, 0xA(r1)
      stb       r0, 0xB(r1)
      lwz       r0, 0x8(r1)
      stw       r0, 0xC(r1)
      bl        -0x15E09C
      li        r3, 0x4
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0
      li        r9, 0x2
      bl        -0x15DF90
      lfs       f1, -0x3C24(r2)
      mr        r4, r31
      lwz       r3, 0x38(r30)
      fmr       f2, f1
      lfs       f3, -0x3C1C(r2)
      bl        0x7A4
      lwz       r3, 0x40(r30)
      li        r4, 0
      li        r5, 0
      li        r6, 0x20
      li        r7, 0
      li        r8, 0
      bl        -0x2117E4
      mr        r3, r30
      mr        r4, r31
      bl        0x2E8
      li        r0, 0
      stb       r0, 0x3C(r30)

    .loc_0xC4:
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
 * Address:	80244E94
 * Size:	00001C
 */
void Game::Cave::RandMapMgr::isLastFloor(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x18(r3)
      cmplwi    r3, 0
      beq-      .loc_0x14
      lbz       r3, 0x0(r3)
      blr

    .loc_0x14:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80244EB0
 * Size:	000008
 */
void Game::Cave::RandMapMgr::isVersusHiba(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x44(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80244EB8
 * Size:	000008
 */
void Game::Cave::RandMapMgr::getRadarMapTexture(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x40(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80244EC0
 * Size:	000024
 */
void radarMapPartsOpen__Q34Game4Cave10RandMapMgrFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x38(r3)
      bl        0x550
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80244EE4
 * Size:	000020
 */
void getPositionOnTex__Q34Game4Cave10RandMapMgrFR10Vector3<float> RfRf(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x3C18(r2)
      lfs       f0, 0x0(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x0(r5)
      lfs       f0, 0x8(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x0(r6)
      blr
    */
}

/*
 * --INFO--
 * Address:	80244F04
 * Size:	000254
 */
void getBaseGenData__Q34Game4Cave10RandMapMgrFP10Vector3<float> Pf(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x18A0(r1)
      mflr      r0
      stw       r0, 0x18A4(r1)
      li        r0, 0x1898
      stfd      f31, 0x1890(r1)
      vpkuhum   v31, v1, v0
      li        r0, 0x1888
      stfd      f30, 0x1880(r1)
      vpkuhum   v30, v1, v0
      stmw      r15, 0x183C(r1)
      lwz       r6, 0x18(r3)
      addi      r18, r1, 0x1028
      lfs       f31, -0x3C24(r2)
      mr        r29, r4
      lwz       r3, 0x28(r6)
      mr        r30, r5
      lwz       r0, 0x2C(r6)
      mr        r19, r18
      stw       r3, 0x8(r1)
      addi      r22, r1, 0x8
      addi      r21, r1, 0x828
      addi      r20, r1, 0x28
      stw       r0, 0xC(r1)
      li        r17, 0
      li        r16, 0

    .loc_0x64:
      lwz       r3, 0x0(r22)
      mr        r25, r21
      mr        r24, r20
      mr        r23, r19
      lwz       r15, 0x10(r3)
      b         .loc_0x164

    .loc_0x7C:
      lwz       r3, 0x18(r15)
      bl        -0x23C4
      cmplwi    r3, 0
      beq-      .loc_0x160
      lwz       r31, 0x10(r3)
      mr        r28, r25
      mr        r27, r24
      mr        r26, r23
      b         .loc_0x158

    .loc_0xA0:
      lwz       r0, 0x18(r31)
      cmpwi     r0, 0
      beq-      .loc_0xB4
      cmpwi     r0, 0x1
      bne-      .loc_0x154

    .loc_0xB4:
      mr        r4, r15
      mr        r5, r31
      addi      r3, r1, 0x1C
      bl        -0x14E8
      lfs       f1, 0x4(r29)
      lfs       f0, 0x20(r1)
      lfs       f3, 0x0(r29)
      fsubs     f4, f1, f0
      lfs       f2, 0x1C(r1)
      lfs       f1, 0x8(r29)
      lfs       f0, 0x24(r1)
      fsubs     f3, f3, f2
      fmuls     f4, f4, f4
      fsubs     f2, f1, f0
      lfs       f0, -0x3C24(r2)
      stw       r15, 0x0(r28)
      fmadds    f1, f3, f3, f4
      fmuls     f2, f2, f2
      stw       r31, 0x0(r27)
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x11C
      ble-      .loc_0x120
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x120

    .loc_0x11C:
      fmr       f1, f0

    .loc_0x120:
      stfs      f1, 0x0(r26)
      addi      r21, r21, 0x4
      addi      r20, r20, 0x4
      addi      r19, r19, 0x4
      lfs       f0, 0x0(r26)
      addi      r17, r17, 0x1
      addi      r28, r28, 0x4
      addi      r27, r27, 0x4
      fadds     f31, f31, f0
      addi      r25, r25, 0x4
      addi      r26, r26, 0x4
      addi      r24, r24, 0x4
      addi      r23, r23, 0x4

    .loc_0x154:
      lwz       r31, 0x4(r31)

    .loc_0x158:
      cmplwi    r31, 0
      bne+      .loc_0xA0

    .loc_0x160:
      lwz       r15, 0x4(r15)

    .loc_0x164:
      cmplwi    r15, 0
      bne+      .loc_0x7C
      addi      r16, r16, 0x1
      addi      r22, r22, 0x4
      cmpwi     r16, 0x2
      blt+      .loc_0x64
      cmpwi     r17, 0
      beq-      .loc_0x228
      lfs       f30, -0x3C24(r2)
      bl        -0x17BAEC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x182C(r1)
      li        r3, 0
      lfd       f2, -0x3C30(r2)
      stw       r0, 0x1828(r1)
      lfs       f0, -0x3C34(r2)
      lfd       f1, 0x1828(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f31, f1
      fdivs     f1, f1, f0
      mtctr     r17
      cmpwi     r17, 0
      ble-      .loc_0x228

    .loc_0x1C4:
      lfs       f0, 0x0(r18)
      fadds     f30, f30, f0
      fcmpo     cr0, f30, f1
      ble-      .loc_0x21C
      rlwinm    r15,r3,2,0,29
      addi      r17, r1, 0x828
      addi      r16, r1, 0x28
      lwzx      r4, r17, r15
      lwzx      r5, r16, r15
      addi      r3, r1, 0x10
      bl        -0x1614
      lfs       f0, 0x10(r1)
      lwzx      r3, r17, r15
      stfs      f0, 0x0(r29)
      lwzx      r4, r16, r15
      lfs       f0, 0x14(r1)
      stfs      f0, 0x4(r29)
      lfs       f0, 0x18(r1)
      stfs      f0, 0x8(r29)
      bl        -0x1218
      stfs      f1, 0x0(r30)
      b         .loc_0x228

    .loc_0x21C:
      addi      r18, r18, 0x4
      addi      r3, r3, 0x1
      bdnz+     .loc_0x1C4

    .loc_0x228:
      li        r0, 0x1898
      vmrghb    v31, v1, v0
      lfd       f31, 0x1890(r1)
      li        r0, 0x1888
      vmrghb    v30, v1, v0
      lfd       f30, 0x1880(r1)
      lmw       r15, 0x183C(r1)
      lwz       r0, 0x18A4(r1)
      mtlr      r0
      addi      r1, r1, 0x18A0
      blr
    */
}

/*
 * --INFO--
 * Address:	80245158
 * Size:	000200
 */
void Game::Cave::RandMapMgr::drawFrameBuffer((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      addi      r3, r4, 0xBC
      lwz       r12, 0xBC(r4)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      bl        -0x15C058
      li        r3, 0x1
      bl        -0x15C034
      li        r3, 0x1
      li        r4, 0
      bl        -0x15BEAC
      li        r3, 0x2
      bl        -0x15F5F8
      li        r3, 0
      li        r4, 0
      li        r5, 0
      bl        -0x15C02C
      li        r3, 0x1
      li        r4, 0x4
      li        r5, 0x5
      li        r6, 0
      bl        -0x15C0EC
      li        r3, 0x1
      bl        -0x15E368
      li        r5, 0
      li        r0, 0xFF
      stb       r5, 0x8(r1)
      addi      r4, r1, 0xC
      li        r3, 0x4
      stb       r5, 0x9(r1)
      stb       r5, 0xA(r1)
      stb       r0, 0xB(r1)
      lwz       r0, 0x8(r1)
      stw       r0, 0xC(r1)
      bl        -0x15E484
      li        r3, 0x4
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0
      li        r9, 0x2
      bl        -0x15E378
      li        r3, 0x1
      bl        -0x15C668
      li        r3, 0
      li        r4, 0
      li        r5, 0xFF
      li        r6, 0x4
      bl        -0x15C818
      li        r3, 0
      li        r4, 0x4
      bl        -0x15CDC4
      bl        -0x160B74
      bl        -0x16053C
      li        r3, 0x9
      li        r4, 0x1
      bl        -0x160FD0
      li        r3, 0
      li        r4, 0x9
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x160B64
      li        r3, 0x80
      li        r4, 0
      li        r5, 0x4
      bl        -0x15F8F4
      lfs       f3, -0x3C24(r2)
      lis       r0, 0x4330
      lis       r6, 0xCC01
      stw       r0, 0x10(r1)
      lfd       f2, -0x3C30(r2)
      li        r3, 0
      stfs      f3, -0x8000(r6)
      li        r4, 0
      stfs      f3, -0x8000(r6)
      stfs      f3, -0x8000(r6)
      lwz       r5, 0x40(r31)
      stw       r0, 0x18(r1)
      lwz       r5, 0x20(r5)
      stw       r0, 0x20(r1)
      lhz       r5, 0x2(r5)
      stw       r0, 0x28(r1)
      xoris     r0, r5, 0x8000
      stw       r0, 0x14(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f2
      stfs      f0, -0x8000(r6)
      stfs      f3, -0x8000(r6)
      stfs      f3, -0x8000(r6)
      lwz       r5, 0x40(r31)
      lwz       r5, 0x20(r5)
      lhz       r0, 0x2(r5)
      lhz       r5, 0x4(r5)
      xoris     r0, r0, 0x8000
      stw       r0, 0x1C(r1)
      xoris     r0, r5, 0x8000
      stw       r0, 0x24(r1)
      lfd       f1, 0x18(r1)
      lfd       f0, 0x20(r1)
      fsubs     f1, f1, f2
      fsubs     f0, f0, f2
      stfs      f1, -0x8000(r6)
      stfs      f0, -0x8000(r6)
      stfs      f3, -0x8000(r6)
      lwz       r5, 0x40(r31)
      lwz       r5, 0x20(r5)
      lhz       r0, 0x4(r5)
      xoris     r0, r0, 0x8000
      stfs      f3, -0x8000(r6)
      stw       r0, 0x2C(r1)
      lfd       f0, 0x28(r1)
      fsubs     f0, f0, f2
      stfs      f0, -0x8000(r6)
      stfs      f3, -0x8000(r6)
      bl        -0x15C054
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80245358
 * Size:	000060
 */
void Game::RoomLink::__dt(void)
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
      lis       r5, 0x804C
      li        r4, 0
      addi      r0, r5, 0x1AD8
      stw       r0, 0x0(r30)
      bl        0x1CC200
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x2212E4

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
 * Address:	802453B8
 * Size:	000060
 */
void Game::Cave::RandMapMgr::__dt(void)
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
      lis       r5, 0x804C
      li        r4, 0
      addi      r0, r5, 0x1AE8
      stw       r0, 0x0(r30)
      bl        0x1CC1A0
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x221344

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
