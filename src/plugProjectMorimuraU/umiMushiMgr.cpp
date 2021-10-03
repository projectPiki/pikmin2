

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
 * Address:	8038273C
 * Size:	000050
 */
void Game::UmiMushi::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x253ABC
      lis       r3, 0x804E
      lis       r4, 0x8049
      addi      r5, r3, 0x4568
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x36E4
      stw       r5, 0x4(r31)
      stw       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8038278C
 * Size:	000048
 */
void Game::UmiMushi::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0xA38
      bl        -0x35E900
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x252F20
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x48:
    */
}

/*
 * --INFO--
 * Address:	803827D4
 * Size:	0000A4
 */
void Game::UmiMushi::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x27904C
      lis       r4, 0x804E
      addi      r3, r31, 0x7F8
      addi      r0, r4, 0x4648
      li        r4, 0x1
      stw       r0, 0xD8(r31)
      bl        .loc_0xA4
      li        r5, 0x1
      li        r4, 0
      stb       r5, 0xA10(r31)
      li        r0, -0x1
      lfs       f4, 0x9E0(r2)
      mr        r3, r31
      stb       r5, 0xA11(r31)
      lfs       f3, 0x9E4(r2)
      stb       r5, 0xA12(r31)
      lfs       f2, 0x9E8(r2)
      stb       r5, 0xA13(r31)
      lfs       f1, 0x9EC(r2)
      stb       r5, 0xA14(r31)
      lfs       f0, 0x9F0(r2)
      stb       r4, 0xA15(r31)
      stb       r5, 0xA16(r31)
      sth       r0, 0xA18(r31)
      stfs      f4, 0xA1C(r31)
      stfs      f3, 0xA20(r31)
      stfs      f2, 0xA24(r31)
      stfs      f4, 0xA28(r31)
      stfs      f1, 0xA2C(r31)
      stfs      f2, 0xA30(r31)
      stfs      f0, 0xA34(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0xA4:
    */
}

/*
 * --INFO--
 * Address:	80382878
 * Size:	000360
 */
void Game::UmiMushi::Parms::ProperParms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      lis       r4, 0x8049
      stw       r31, 0xC(r1)
      addi      r31, r4, 0x36D8
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x30
      addi      r0, r30, 0x214
      stw       r0, 0x0(r30)

    .loc_0x30:
      li        r0, 0
      lis       r5, 0x6670
      stw       r0, 0x4(r30)
      addi      r0, r31, 0x20
      mr        r4, r30
      addi      r3, r30, 0xC
      stw       r0, 0x8(r30)
      addi      r5, r5, 0x3031
      addi      r6, r31, 0x30
      bl        0x90D8C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x9E8(r2)
      stw       r0, 0xC(r30)
      mr        r4, r30
      lfs       f0, 0x9F4(r2)
      addi      r3, r30, 0x34
      stfs      f1, 0x24(r30)
      addi      r5, r5, 0x3032
      addi      r6, r31, 0x40
      stfs      f0, 0x2C(r30)
      stfs      f1, 0x30(r30)
      bl        0x90D54
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x9F8(r2)
      stw       r0, 0x34(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x5C
      stfs      f0, 0x4C(r30)
      addi      r5, r5, 0x3033
      lfs       f0, 0x9FC(r2)
      addi      r6, r31, 0x50
      stfs      f1, 0x54(r30)
      stfs      f0, 0x58(r30)
      bl        0x90D18
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x9E0(r2)
      stw       r0, 0x5C(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x84
      stfs      f0, 0x74(r30)
      addi      r5, r5, 0x3034
      lfs       f0, 0x9FC(r2)
      addi      r6, r31, 0x60
      stfs      f1, 0x7C(r30)
      stfs      f0, 0x80(r30)
      bl        0x90CDC
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x9E0(r2)
      stw       r0, 0x84(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0xAC
      stfs      f0, 0x9C(r30)
      addi      r5, r5, 0x3036
      lfs       f0, 0xA00(r2)
      addi      r6, r31, 0x70
      stfs      f1, 0xA4(r30)
      stfs      f0, 0xA8(r30)
      bl        0x90CA0
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0xA04(r2)
      stw       r0, 0xAC(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0xD4
      stfs      f0, 0xC4(r30)
      addi      r5, r5, 0x3037
      lfs       f0, 0x9E8(r2)
      addi      r6, r31, 0x84
      stfs      f1, 0xCC(r30)
      stfs      f0, 0xD0(r30)
      bl        0x90C64
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0xA08(r2)
      stw       r0, 0xD4(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0xFC
      stfs      f0, 0xEC(r30)
      addi      r5, r5, 0x3039
      lfs       f0, 0xA0C(r2)
      addi      r6, r31, 0x98
      stfs      f1, 0xF4(r30)
      stfs      f0, 0xF8(r30)
      bl        0x90C28
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x9F4(r2)
      stw       r0, 0xFC(r30)
      mr        r4, r30
      lfs       f0, 0x9E8(r2)
      addi      r3, r30, 0x124
      stfs      f1, 0x114(r30)
      addi      r5, r5, 0x3130
      addi      r6, r31, 0xB4
      stfs      f1, 0x11C(r30)
      stfs      f0, 0x120(r30)
      bl        0x90BF0
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0xA10(r2)
      stw       r0, 0x124(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x14C
      stfs      f0, 0x13C(r30)
      addi      r5, r5, 0x3131
      lfs       f0, 0xA14(r2)
      addi      r6, r31, 0xC4
      stfs      f1, 0x144(r30)
      stfs      f0, 0x148(r30)
      bl        0x90BB4
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0xA18(r2)
      stw       r0, 0x14C(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x174
      stfs      f0, 0x164(r30)
      addi      r5, r5, 0x3132
      lfs       f0, 0xA1C(r2)
      addi      r6, r31, 0xD0
      stfs      f1, 0x16C(r30)
      stfs      f0, 0x170(r30)
      bl        0x90B78
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0xA1C(r2)
      stw       r0, 0x174(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x19C
      stfs      f0, 0x18C(r30)
      addi      r5, r5, 0x3133
      lfs       f0, 0xA20(r2)
      addi      r6, r31, 0xE0
      stfs      f1, 0x194(r30)
      stfs      f0, 0x198(r30)
      bl        0x90B3C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0xA10(r2)
      stw       r0, 0x19C(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x1C4
      stfs      f0, 0x1B4(r30)
      addi      r5, r5, 0x3134
      lfs       f0, 0xA14(r2)
      addi      r6, r31, 0xF0
      stfs      f1, 0x1BC(r30)
      stfs      f0, 0x1C0(r30)
      bl        0x90B00
      lis       r3, 0x804B
      lis       r5, 0x6970
      subi      r0, r3, 0x5344
      lfs       f0, 0xA10(r2)
      stw       r0, 0x1C4(r30)
      mr        r4, r30
      lfs       f1, 0x9F4(r2)
      addi      r3, r30, 0x1EC
      stfs      f0, 0x1DC(r30)
      addi      r5, r5, 0x3031
      lfs       f0, 0xA14(r2)
      addi      r6, r31, 0x100
      stfs      f1, 0x1E4(r30)
      stfs      f0, 0x1E8(r30)
      bl        0x90AC4
      lis       r3, 0x804B
      li        r5, 0x64
      subi      r0, r3, 0x5370
      li        r4, 0
      stw       r0, 0x1EC(r30)
      li        r0, 0x12C
      mr        r3, r30
      stw       r5, 0x204(r30)
      stw       r4, 0x20C(r30)
      stw       r0, 0x210(r30)
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
 * Address:	80382BD8
 * Size:	000020
 */
void Game::UmiMushi::Mgr::birth((Game::EnemyBirthArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x25381C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80382BF8
 * Size:	000068
 */
void Game::UmiMushi::Mgr::loadModelData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x252B00
      li        r5, 0
      b         .loc_0x40

    .loc_0x20:
      lwz       r3, 0x80(r4)
      rlwinm    r0,r5,2,14,29
      addi      r5, r5, 0x1
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      rlwinm    r0,r0,0,20,15
      ori       r0, r0, 0x2000
      stw       r0, 0xC(r3)

    .loc_0x40:
      lwz       r4, 0x1C(r31)
      rlwinm    r0,r5,0,16,31
      lhz       r3, 0x7C(r4)
      cmplw     r0, r3
      blt+      .loc_0x20
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80382C60
 * Size:	0000BC
 */
void Game::UmiMushi::Mgr::loadTexData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      addi      r31, r4, 0x36D8
      li        r4, 0
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r29, r3
      lwz       r3, 0x1C(r3)
      bl        0xBB610
      addi      r3, r1, 0x8
      addi      r4, r31, 0x3C8
      li        r30, 0
      bl        0xC993C
      lwz       r3, -0x63D8(r13)
      addi      r4, r1, 0x8
      bl        0xC9AF8
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r30, 0x30(r3)

    .loc_0x58:
      cmplwi    r30, 0
      bne-      .loc_0x74
      addi      r3, r31, 0x3F0
      addi      r5, r31, 0x400
      li        r4, 0x5B
      crclr     6, 0x6
      bl        -0x358690

    .loc_0x74:
      li        r3, 0x10
      bl        -0x35EE34
      mr.       r0, r3
      beq-      .loc_0x8C
      bl        0xB1450
      mr        r0, r3

    .loc_0x8C:
      stw       r0, 0x44(r29)
      mr        r4, r30
      lwz       r3, 0x44(r29)
      lwz       r5, 0x1C(r29)
      bl        0xB1324
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80382D1C
 * Size:	00007C
 */
void Game::UmiMushi::Mgr::createModel(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x14
      bl        -0x35EE94
      mr.       r31, r3
      beq-      .loc_0x3C
      lwz       r4, 0x1C(r30)
      lis       r5, 0x2
      lbz       r6, 0x24(r30)
      bl        0xBB488
      mr        r31, r3

    .loc_0x3C:
      cmplwi    r31, 0
      bne-      .loc_0x60
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x3AC8
      li        r4, 0x6F
      addi      r5, r5, 0x3AD8
      crclr     6, 0x6
      bl        -0x358738

    .loc_0x60:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80382D98
 * Size:	000160
 */
void Game::UmiMushi::Mgr::createObj((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      mr        r30, r4
      mulli     r3, r30, 0x3B4
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      addi      r3, r3, 0x10
      bl        -0x35EE18
      lis       r4, 0x8038
      lis       r5, 0x8038
      addi      r4, r4, 0x381C
      mr        r7, r30
      addi      r5, r5, 0x2EF8
      li        r6, 0x3B4
      bl        -0x2C13F0
      stw       r3, 0x48(r31)
      addi      r30, r1, 0x8
      li        r28, 0
      li        r29, 0
      lwz       r3, 0xA24(r2)
      lwz       r0, 0xA28(r2)
      stw       r3, 0x8(r1)
      stw       r0, 0xC(r1)

    .loc_0x6C:
      lwz       r3, -0x6E20(r13)
      li        r5, 0
      lwz       r4, 0x0(r30)
      bl        -0x275390
      rlwinm.   r0,r3,0,24,31
      mr        r6, r29
      mr        r3, r0
      ble-      .loc_0x130
      rlwinm.   r0,r0,29,3,31
      mtctr     r0
      beq-      .loc_0x110

    .loc_0x98:
      lwz       r5, 0x0(r30)
      addi      r0, r6, 0x39C
      lwz       r4, 0x48(r31)
      addi      r29, r29, 0x1DA0
      stwx      r5, r4, r0
      addi      r0, r6, 0x750
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0xB04
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0xEB8
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x126C
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x1620
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x19D4
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x1D88
      addi      r6, r6, 0x1DA0
      lwz       r4, 0x48(r31)
      stwx      r5, r4, r0
      bdnz+     .loc_0x98
      andi.     r3, r3, 0x7
      beq-      .loc_0x130

    .loc_0x110:
      mtctr     r3

    .loc_0x114:
      lwz       r5, 0x0(r30)
      addi      r0, r6, 0x39C
      lwz       r4, 0x48(r31)
      addi      r6, r6, 0x3B4
      addi      r29, r29, 0x3B4
      stwx      r5, r4, r0
      bdnz+     .loc_0x114

    .loc_0x130:
      addi      r28, r28, 0x1
      addi      r30, r30, 0x4
      cmpwi     r28, 0x2
      blt+      .loc_0x6C
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
 * Address:	80382EF8
 * Size:	0000BC
 */
void Game::UmiMushi::Obj::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      beq-      .loc_0xA0
      lis       r3, 0x804E
      addi      r0, r31, 0x3A4
      addi      r4, r3, 0x477C
      stw       r4, 0x0(r31)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x2FC
      stw       r3, 0x178(r31)
      lwz       r3, 0x17C(r31)
      stw       r4, 0x0(r3)
      lwz       r3, 0x17C(r31)
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      beq-      .loc_0x90
      lis       r3, 0x804B
      addi      r0, r31, 0x2BC
      subi      r4, r3, 0x5CDC
      addi      r3, r31, 0x290
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x1B0
      addi      r6, r4, 0x2F8
      li        r4, -0x1
      stw       r5, 0x178(r31)
      lwz       r5, 0x17C(r31)
      stw       r6, 0x0(r5)
      lwz       r5, 0x17C(r31)
      sub       r0, r0, r5
      stw       r0, 0xC(r5)
      bl        0x8E604

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x35EEE0

    .loc_0xA0:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80382FB4
 * Size:	0000B0
 */
void Game::UmiMushi::Mgr::__dt(void)
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
      beq-      .loc_0x94
      lis       r3, 0x804E
      addi      r3, r3, 0x4568
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r3, 0x804B
      subi      r3, r3, 0x760
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r3, 0x804B
      addic.    r0, r30, 0x4
      subi      r3, r3, 0x5304
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r4, 0x804B
      addi      r3, r30, 0x4
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4(r30)
      bl        0x8E554

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x35EF90

    .loc_0x94:
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
 * Address:	80383064
 * Size:	00002C
 */
void Game::UmiMushi::Mgr::doLoadBmd((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x124
      mr        r3, r4
      stw       r0, 0x14(r1)
      addi      r4, r5, 0x30
      bl        -0x3137E8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80383090
 * Size:	000008
 */
void Game::UmiMushi::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x64
      blr
    */
}

/*
 * --INFO--
 * Address:	80383098
 * Size:	000010
 */
void Game::UmiMushi::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x3B4
      lwz       r3, 0x48(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	803830A8
 * Size:	000050
 */
void Game::UmiMushi::Parms::read((Stream&))
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
      bl        0x90730
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x90724
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x90718
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
 * Address:	803830F8
 * Size:	000008
 */
void @4 @Game::UmiMushi::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x148
    */
}
