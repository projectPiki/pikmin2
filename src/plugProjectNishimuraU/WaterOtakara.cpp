

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
 * Address:	802B8A38
 * Size:	0000A4
 */
void Game::WaterOtakara::Obj::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x3C
      addi      r0, r31, 0x2F8
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2F8(r31)
      stw       r0, 0x2FC(r31)
      stw       r0, 0x300(r31)

    .loc_0x3C:
      mr        r3, r31
      li        r4, 0
      bl        -0x2830
      lis       r3, 0x804D
      addi      r0, r31, 0x2F8
      subi      r5, r3, 0x698
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x324
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x300(r12)
      mtctr     r12
      bctrl
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
 * Address:	802B8ADC
 * Size:	0001A4
 */
void Game::WaterOtakara::Obj::changeMaterial(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      lwz       r3, 0x180(r3)
      lwz       r4, 0x174(r27)
      lwz       r12, 0x0(r3)
      lwz       r29, 0x8(r4)
      lwz       r12, 0xE0(r12)
      lwz       r30, 0x4(r29)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x174(r27)
      lis       r3, 0x8051
      lbz       r0, 0x0(r31)
      subi      r27, r3, 0xDD0
      lwz       r3, 0x8(r4)
      li        r28, 0
      lwz       r3, 0x4(r3)
      lwz       r4, 0x6C(r3)
      lwz       r3, 0x4(r4)
      stb       r0, 0x0(r3)
      lbz       r0, 0x1(r31)
      stb       r0, 0x1(r3)
      lhz       r0, 0x2(r31)
      sth       r0, 0x2(r3)
      lhz       r0, 0x4(r31)
      sth       r0, 0x4(r3)
      lbz       r0, 0x6(r31)
      stb       r0, 0x6(r3)
      lbz       r0, 0x7(r31)
      stb       r0, 0x7(r3)
      lbz       r0, 0x8(r31)
      stb       r0, 0x8(r3)
      lbz       r0, 0x9(r31)
      stb       r0, 0x9(r3)
      lhz       r0, 0xA(r31)
      sth       r0, 0xA(r3)
      lwz       r0, 0xC(r31)
      stw       r0, 0xC(r3)
      lbz       r0, 0x10(r31)
      stb       r0, 0x10(r3)
      lbz       r0, 0x11(r31)
      stb       r0, 0x11(r3)
      lbz       r0, 0x12(r31)
      stb       r0, 0x12(r3)
      lbz       r0, 0x13(r31)
      stb       r0, 0x13(r3)
      lbz       r0, 0x14(r31)
      stb       r0, 0x14(r3)
      lbz       r0, 0x15(r31)
      stb       r0, 0x15(r3)
      lbz       r0, 0x16(r31)
      stb       r0, 0x16(r3)
      lbz       r0, 0x17(r31)
      stb       r0, 0x17(r3)
      lbz       r0, 0x18(r31)
      stb       r0, 0x18(r3)
      lbz       r0, 0x19(r31)
      stb       r0, 0x19(r3)
      lha       r0, 0x1A(r31)
      sth       r0, 0x1A(r3)
      lwz       r0, 0x1C(r31)
      stw       r0, 0x1C(r3)
      lwz       r3, 0x4(r4)
      lwz       r0, 0x1C(r3)
      add       r0, r31, r0
      sub       r0, r0, r3
      stw       r0, 0x1C(r3)
      lwz       r3, 0x4(r4)
      lwz       r0, 0xC(r3)
      add       r0, r31, r0
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      b         .loc_0x180

    .loc_0x148:
      lwz       r4, 0xC0(r29)
      rlwinm    r3,r28,6,10,25
      rlwinm    r0,r28,2,14,29
      add       r4, r4, r3
      stw       r4, 0x3C(r27)
      lwz       r3, 0x60(r30)
      lwz       r4, 0x2C(r4)
      lwzx      r3, r3, r0
      lwz       r4, 0x34(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      addi      r28, r28, 0x1

    .loc_0x180:
      lhz       r0, 0x5C(r30)
      rlwinm    r3,r28,0,16,31
      cmplw     r3, r0
      blt+      .loc_0x148
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802B8C80
 * Size:	000060
 */
void Game::WaterOtakara::Obj::interactCreature((Game::Creature*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x804B
      mr        r8, r4
      stw       r0, 0x24(r1)
      lis       r5, 0x804B
      subi      r6, r6, 0x5D00
      addi      r4, r1, 0x8
      lwz       r7, 0xC0(r3)
      addi      r0, r5, 0x4830
      lfs       f0, 0x604(r7)
      stw       r6, 0x8(r1)
      stw       r3, 0xC(r1)
      mr        r3, r8
      stw       r0, 0x8(r1)
      stfs      f0, 0x10(r1)
      lwz       r12, 0x0(r8)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802B8CE0
 * Size:	000060
 */
void Game::WaterOtakara::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x2C
      bl        -0x294E58
      mr.       r31, r3
      beq-      .loc_0x44
      li        r4, 0
      li        r5, 0x132
      li        r6, 0x133
      bl        0xF7AE8
      lis       r3, 0x804D
      subi      r0, r3, 0x6B4
      stw       r0, 0x0(r31)

    .loc_0x44:
      stw       r31, 0x2F4(r30)
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
 * Address:	802B8D40
 * Size:	000048
 */
void Game::WaterOtakara::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      subi      r4, r2, 0x2050
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x174(r3)
      bl        0x186288
      bl        0x170B40
      mr        r0, r3
      lwz       r3, 0x2F4(r31)
      mr        r4, r0
      bl        0xF7B90
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802B8D88
 * Size:	000034
 */
void Game::WaterOtakara::Obj::startChargeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	802B8DBC
 * Size:	000030
 */
void Game::WaterOtakara::Obj::finishChargeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	802B8DEC
 * Size:	0000A4
 */
void Game::WaterOtakara::Obj::createDisChargeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0x44(r1)
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      subi      r11, r6, 0x5808
      stw       r0, 0x8(r1)
      addi      r10, r5, 0x6A3C
      lis       r4, 0x804D
      li        r9, 0x13E
      lfs       f0, 0x18C(r3)
      subi      r0, r4, 0x6C8
      li        r8, 0x13F
      li        r7, 0x140
      stfs      f0, 0xC(r1)
      li        r6, 0x141
      li        r5, 0
      addi      r4, r1, 0x8
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      addi      r3, r1, 0x18
      stw       r11, 0x18(r1)
      stw       r10, 0x18(r1)
      stfs      f0, 0x14(r1)
      sth       r9, 0x1C(r1)
      sth       r8, 0x1E(r1)
      sth       r7, 0x20(r1)
      sth       r6, 0x22(r1)
      stw       r5, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r5, 0x2C(r1)
      stw       r5, 0x30(r1)
      stw       r0, 0x18(r1)
      bl        0xF62E8
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802B8E90
 * Size:	000030
 */
void Game::WaterOtakara::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
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
 * Address:	802B8EC0
 * Size:	000030
 */
void Game::WaterOtakara::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	802B8EF0
 * Size:	000044
 */
void Game::WaterOtakara::Obj::startDisChargeSE(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x5165
      li        r5, 0
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
 * Address:	802B8F34
 * Size:	000008
 */
void Game::WaterOtakara::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x3C
      blr
    */
}
