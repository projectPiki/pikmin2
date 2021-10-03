

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ABE60
 * Size:	000050
 */
void Game::Tyre::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x27D1E0
      lis       r3, 0x804E
      lis       r4, 0x8049
      addi      r5, r3, 0x62D8
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x57D0
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
 * Address:	803ABEB0
 * Size:	000048
 */
void Game::Tyre::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x84C
      bl        -0x388024
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x27C644
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
 * Address:	803ABEF8
 * Size:	0000DC
 */
void Game::Tyre::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2A2770
      lis       r3, 0x804E
      lis       r5, 0x6670
      addi      r0, r3, 0x63B8
      lis       r4, 0x8049
      stw       r0, 0xD8(r31)
      addi      r0, r31, 0x82C
      lis       r3, 0x8049
      addi      r5, r5, 0x3031
      stw       r0, 0x7F8(r31)
      addi      r6, r3, 0x57F4
      li        r3, 0
      addi      r0, r4, 0x57E4
      stw       r3, 0x7FC(r31)
      addi      r3, r31, 0x804
      addi      r4, r31, 0x7F8
      stw       r0, 0x800(r31)
      bl        0x67708
      lis       r3, 0x804B
      lfs       f5, 0x1238(r2)
      subi      r0, r3, 0x5344
      lfs       f4, 0x123C(r2)
      stw       r0, 0x804(r31)
      li        r5, 0
      lfs       f0, 0x1240(r2)
      li        r4, 0x1
      stfs      f5, 0x81C(r31)
      li        r0, 0xA
      lfs       f3, 0x1244(r2)
      mr        r3, r31
      stfs      f4, 0x824(r31)
      lfs       f2, 0x1248(r2)
      stfs      f0, 0x828(r31)
      lfs       f1, 0x124C(r2)
      stb       r5, 0x830(r31)
      lfs       f0, 0x1250(r2)
      stb       r5, 0x831(r31)
      stb       r4, 0x832(r31)
      stb       r0, 0x833(r31)
      stfs      f4, 0x834(r31)
      stfs      f3, 0x838(r31)
      stfs      f2, 0x83C(r31)
      stfs      f1, 0x840(r31)
      stfs      f5, 0x844(r31)
      stfs      f0, 0x848(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803ABFD4
 * Size:	000020
 */
void Game::Tyre::Mgr::birth((Game::EnemyBirthArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x27CC18
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803ABFF4
 * Size:	000094
 */
void Game::Tyre::Mgr::loadModelData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      bl        -0x27BEFC
      lis       r4, 0x8049
      lis       r3, 0x8049
      addi      r30, r4, 0x5804
      li        r28, 0
      addi      r31, r3, 0x5810
      b         .loc_0x6C

    .loc_0x30:
      lwz       r3, 0x80(r4)
      rlwinm    r0,r28,2,14,29
      lwzx      r29, r3, r0
      cmplwi    r29, 0
      bne-      .loc_0x58
      mr        r3, r30
      mr        r5, r31
      li        r4, 0x38
      crclr     6, 0x6
      bl        -0x381A08

    .loc_0x58:
      lwz       r0, 0xC(r29)
      addi      r28, r28, 0x1
      rlwinm    r0,r0,0,20,15
      ori       r0, r0, 0x2000
      stw       r0, 0xC(r29)

    .loc_0x6C:
      lwz       r4, 0x1C(r27)
      rlwinm    r0,r28,0,16,31
      lhz       r3, 0x7C(r4)
      cmplw     r0, r3
      blt+      .loc_0x30
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AC088
 * Size:	00002C
 */
void Game::Tyre::Mgr::doLoadBmd((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x2124
      mr        r3, r4
      stw       r0, 0x14(r1)
      addi      r4, r5, 0x30
      bl        -0x33C80C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AC0B4
 * Size:	0000B0
 */
void Game::Tyre::Mgr::__dt(void)
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
      addi      r3, r3, 0x62D8
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
      bl        0x65454

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x388090

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
 * Address:	803AC164
 * Size:	000008
 */
void Game::Tyre::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x62
      blr
    */
}

/*
 * --INFO--
 * Address:	803AC16C
 * Size:	000060
 */
void Game::Tyre::Mgr::createObj((int))
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
      mulli     r3, r31, 0x354
      addi      r3, r3, 0x10
      bl        -0x3881E4
      lis       r4, 0x803B
      lis       r5, 0x803B
      subi      r4, r4, 0x3AD4
      mr        r7, r31
      subi      r5, r5, 0x3E34
      li        r6, 0x354
      bl        -0x2EA7BC
      stw       r3, 0x44(r30)
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
 * Address:	803AC1CC
 * Size:	0000BC
 */
void Game::Tyre::Obj::__dt(void)
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
      addi      r0, r31, 0x344
      addi      r4, r3, 0x6448
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
      bl        0x65330

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x3881B4

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
 * Address:	803AC288
 * Size:	000010
 */
void Game::Tyre::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x354
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	803AC298
 * Size:	000050
 */
void Game::Tyre::Parms::read((Stream&))
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
      bl        0x67540
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x67534
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x67528
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
 * Address:	803AC2E8
 * Size:	000008
 */
void @4 @Game::Tyre::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x238
    */
}
