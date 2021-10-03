

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
 * Address:	803006EC
 * Size:	0000A4
 */
void Game::FixKabuto::Obj::__ct(void)
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
      addi      r0, r31, 0x2EC
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2EC(r31)
      stw       r0, 0x2F0(r31)
      stw       r0, 0x2F4(r31)

    .loc_0x3C:
      mr        r3, r31
      li        r4, 0
      bl        -0x1C5B8
      lis       r3, 0x804D
      addi      r0, r31, 0x2EC
      addi      r5, r3, 0x6F38
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x31C
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2FC(r12)
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
 * Address:	80300790
 * Size:	000064
 */
void Game::FixKabuto::Obj::onKill((Game::CreatureKillArg*))
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
      lwz       r12, 0x0(r3)
      lwz       r12, 0x308(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x310(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r31
      bl        -0x1FE8F0
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
 * Address:	803007F4
 * Size:	0001A4
 */
void Game::FixKabuto::Obj::changeMaterial(void)
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
 * Address:	80300998
 * Size:	000140
 */
void Game::FixKabuto::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x14
      bl        -0x2DCB0C
      cmplwi    r3, 0
      beq-      .loc_0x9C
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r8, r4, 0x6940
      lis       r4, 0x804D
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x6EEC
      li        r10, 0
      li        r9, 0x2B2
      stw       r0, 0x4(r3)
      addi      r7, r8, 0x14
      addi      r6, r31, 0x18C
      li        r5, 0x287
      stw       r10, 0x8(r3)
      addi      r0, r4, 0x14
      sth       r9, 0xC(r3)
      stb       r10, 0xE(r3)
      stw       r8, 0x0(r3)
      stw       r7, 0x4(r3)
      stw       r6, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x9C:
      stw       r3, 0x2E4(r31)
      li        r3, 0x14
      bl        -0x2DCB98
      cmplwi    r3, 0
      beq-      .loc_0x128
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r8, r4, 0x6940
      lis       r4, 0x804D
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x6EA0
      li        r10, 0
      li        r9, 0x2B2
      stw       r0, 0x4(r3)
      addi      r7, r8, 0x14
      addi      r6, r31, 0x18C
      li        r5, 0x288
      stw       r10, 0x8(r3)
      addi      r0, r4, 0x14
      sth       r9, 0xC(r3)
      stb       r10, 0xE(r3)
      stw       r8, 0x0(r3)
      stw       r7, 0x4(r3)
      stw       r6, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x128:
      stw       r3, 0x2E8(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80300AD8
 * Size:	000018
 */
void Game::FixKabuto::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x2E4(r3)
      addi      r0, r3, 0x18C
      stw       r0, 0x10(r4)
      lwz       r3, 0x2E8(r3)
      stw       r0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80300AF0
 * Size:	000058
 */
void Game::FixKabuto::Obj::startRotateEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x5814
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      lwz       r3, 0x2E4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	80300B48
 * Size:	000030
 */
void Game::FixKabuto::Obj::finishRotateEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2E4(r3)
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
 * Address:	80300B78
 * Size:	000058
 */
void Game::FixKabuto::Obj::startWaitEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x5814
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      lwz       r3, 0x2E8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	80300BD0
 * Size:	000030
 */
void Game::FixKabuto::Obj::finishWaitEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2E8(r3)
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
 * Address:	80300C00
 * Size:	000050
 */
void Game::FixKabuto::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2E4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2E8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
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
 * Address:	80300C50
 * Size:	000050
 */
void Game::FixKabuto::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2E4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2E8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
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
 * Address:	80300CA0
 * Size:	00009C
 */
void efx::TKkabutoWait::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804D
      addi      r3, r3, 0x6EA0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6940
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x271070

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x2DCC68

    .loc_0x80:
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
 * Address:	80300D3C
 * Size:	00009C
 */
void efx::TKkabutoRot::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804D
      addi      r3, r3, 0x6EEC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6940
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x27110C

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x2DCD04

    .loc_0x80:
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
 * Address:	80300DD8
 * Size:	000008
 */
void Game::FixKabuto::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80300DE0
 * Size:	000014
 */
void @748 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2EC
      b         -0x1FA4D4
    */
}

/*
 * --INFO--
 * Address:	80300DF4
 * Size:	000014
 */
void @748 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2EC
      b         -0x1FA75C
    */
}

/*
 * --INFO--
 * Address:	80300E08
 * Size:	000014
 */
void @748 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2EC
      b         -0x1FA750
    */
}

/*
 * --INFO--
 * Address:	80300E1C
 * Size:	000014
 */
void @748 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2EC
      b         -0x1FA3B4
    */
}

/*
 * --INFO--
 * Address:	80300E30
 * Size:	000014
 */
void @748 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2EC
      b         -0x1FA3F4
    */
}

/*
 * --INFO--
 * Address:	80300E44
 * Size:	000014
 */
void @748 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2EC
      b         -0x1FA7B4
    */
}

/*
 * --INFO--
 * Address:	80300E58
 * Size:	000008
 */
void @4 @efx::TKkabutoRot::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x120
    */
}

/*
 * --INFO--
 * Address:	80300E60
 * Size:	000008
 */
void @4 @efx::TKkabutoWait::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x1C4
    */
}
