

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
 * Address:	802B81C8
 * Size:	0000A4
 */
void Game::FireOtakara::Obj::__ct(void)
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
      bl        -0x1FC0
      lis       r3, 0x804D
      addi      r0, r31, 0x2F8
      subi      r5, r3, 0xB08
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
 * Address:	802B826C
 * Size:	0001A4
 */
void Game::FireOtakara::Obj::changeMaterial(void)
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
 * Address:	802B8410
 * Size:	000060
 */
void Game::FireOtakara::Obj::interactCreature((Game::Creature*))
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
      addi      r0, r5, 0x4878
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
 * Address:	802B8470
 * Size:	000060
 */
void Game::FireOtakara::Obj::createEffect(void)
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
      bl        -0x2945E8
      mr.       r31, r3
      beq-      .loc_0x44
      li        r4, 0
      li        r5, 0x12E
      li        r6, 0x12F
      bl        0xF8358
      lis       r3, 0x804D
      subi      r0, r3, 0xB24
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
 * Address:	802B84D0
 * Size:	000048
 */
void Game::FireOtakara::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      subi      r4, r2, 0x2058
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x174(r3)
      bl        0x186AF8
      bl        0x1713B0
      mr        r0, r3
      lwz       r3, 0x2F4(r31)
      mr        r4, r0
      bl        0xF8400
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802B8518
 * Size:	000034
 */
void Game::FireOtakara::Obj::startChargeEffect(void)
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
 * Address:	802B854C
 * Size:	000030
 */
void Game::FireOtakara::Obj::finishChargeEffect(void)
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
 * Address:	802B857C
 * Size:	0000B0
 */
void Game::FireOtakara::Obj::createDisChargeEffect(void)
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
      subi      r12, r6, 0x5808
      stw       r0, 0x8(r1)
      addi      r11, r5, 0x6A28
      lis       r4, 0x804D
      li        r10, 0x137
      lfs       f0, 0x18C(r3)
      subi      r0, r4, 0xB38
      li        r9, 0x138
      li        r8, 0x139
      stfs      f0, 0xC(r1)
      li        r7, 0x13A
      li        r6, 0x13B
      li        r5, 0
      lfs       f0, 0x190(r3)
      addi      r4, r1, 0x8
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      addi      r3, r1, 0x18
      stw       r12, 0x18(r1)
      stw       r11, 0x18(r1)
      stfs      f0, 0x14(r1)
      sth       r10, 0x1C(r1)
      sth       r9, 0x1E(r1)
      sth       r8, 0x20(r1)
      sth       r7, 0x22(r1)
      sth       r6, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r5, 0x2C(r1)
      stw       r5, 0x30(r1)
      stw       r5, 0x34(r1)
      stw       r5, 0x38(r1)
      stw       r0, 0x18(r1)
      bl        0xF6BF4
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802B862C
 * Size:	000030
 */
void Game::FireOtakara::Obj::effectDrawOn(void)
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
 * Address:	802B865C
 * Size:	000030
 */
void Game::FireOtakara::Obj::effectDrawOff(void)
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
 * Address:	802B868C
 * Size:	000044
 */
void Game::FireOtakara::Obj::startDisChargeSE(void)
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
      li        r4, 0x50F3
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
 * Address:	802B86D0
 * Size:	000004
 */
void efx::TSimple5::forceKill(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802B86D4
 * Size:	000004
 */
void efx::TSimple5::fade(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802B86D8
 * Size:	000008
 */
void Game::FireOtakara::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x3B
      blr
    */
}
