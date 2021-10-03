

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
 * Address:	802628F0
 * Size:	00009C
 */
void Game::Rock::Generator::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8048
      lis       r4, 0x804F
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x4AD8
      lis       r4, 0x3F3F
      li        r6, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r5, r5, 0x57A4
      addi      r4, r4, 0x3F3F
      stw       r0, 0x0(r3)
      lis       r3, 0x804B
      subi      r0, r3, 0x2450
      mr        r7, r31
      stw       r6, 0x10(r31)
      addi      r3, r7, 0x18
      stw       r6, 0xC(r31)
      stw       r6, 0x8(r31)
      stw       r6, 0x4(r31)
      stw       r5, 0x14(r31)
      stw       r0, 0x0(r31)
      bl        0x1B095C
      lis       r3, 0x804C
      lfs       f2, -0x35E0(r2)
      addi      r0, r3, 0x40FC
      lfs       f1, -0x35DC(r2)
      stw       r0, 0x0(r31)
      mr        r3, r31
      lfs       f0, -0x35D8(r2)
      stfs      f2, 0x24(r31)
      stfs      f1, 0x28(r31)
      stfs      f0, 0x2C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8026298C
 * Size:	00000C
 */
void Game::Rock::Generator::getLatestVersion(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x3030
      addi      r3, r3, 0x3030
      blr
    */
}

/*
 * --INFO--
 * Address:	80262998
 * Size:	000074
 */
void Game::Rock::Generator::doRead((Stream&))
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
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r30, 0x18
      bl        0x1B0A68
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x50
      mr        r3, r30
      mr        r4, r31
      bl        0xD0
      b         .loc_0x5C

    .loc_0x50:
      mr        r3, r30
      mr        r4, r31
      bl        0x118

    .loc_0x5C:
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
 * Address:	80262A0C
 * Size:	0000A4
 */
void Game::Rock::Generator::doWrite((Stream&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      addi      r31, r5, 0x5798
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r30
      lwz       r4, 0x414(r4)
      bl        0x1B19F8
      lfs       f1, 0x24(r29)
      mr        r3, r30
      bl        0x1B2E00
      mr        r3, r30
      addi      r4, r31, 0x20
      crclr     6, 0x6
      bl        0x1B1784
      lfs       f1, 0x28(r29)
      mr        r3, r30
      bl        0x1B2DE4
      mr        r3, r30
      addi      r4, r31, 0x30
      crclr     6, 0x6
      bl        0x1B1768
      lfs       f1, 0x2C(r29)
      mr        r3, r30
      bl        0x1B2DC8
      mr        r3, r30
      addi      r4, r31, 0x40
      crclr     6, 0x6
      bl        0x1B174C
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
 * Address:	80262AB0
 * Size:	000058
 */
void Game::Rock::Generator::doReadLatestVersion((Stream&))
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
      mr        r3, r31
      bl        0x1B22DC
      stfs      f1, 0x24(r30)
      mr        r3, r31
      bl        0x1B22D0
      stfs      f1, 0x28(r30)
      mr        r3, r31
      bl        0x1B22C4
      stfs      f1, 0x2C(r30)
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
 * Address:	80262B08
 * Size:	000004
 */
void Game::Rock::Generator::doReadOldVersion((Stream&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80262B0C
 * Size:	000050
 */
void Game::Rock::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x133E8C
      lis       r3, 0x804C
      lis       r4, 0x8048
      addi      r5, r3, 0x401C
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x57E8
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
 * Address:	80262B5C
 * Size:	000048
 */
void Game::Rock::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x830
      bl        -0x23ECD0
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x1332F0
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
 * Address:	80262BA4
 * Size:	000098
 */
void Game::Rock::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x15941C
      lis       r3, 0x804C
      lis       r5, 0x6670
      addi      r0, r3, 0x4010
      lis       r4, 0x8048
      stw       r0, 0xD8(r31)
      addi      r0, r31, 0x82C
      lis       r3, 0x8048
      addi      r5, r5, 0x3031
      stw       r0, 0x7F8(r31)
      addi      r6, r3, 0x5808
      li        r3, 0
      addi      r0, r4, 0x57F8
      stw       r3, 0x7FC(r31)
      addi      r3, r31, 0x804
      addi      r4, r31, 0x7F8
      stw       r0, 0x800(r31)
      bl        0x1B0A5C
      lis       r3, 0x804B
      lfs       f2, -0x35D4(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x35D0(r2)
      stw       r0, 0x804(r31)
      mr        r3, r31
      lfs       f0, -0x35CC(r2)
      stfs      f2, 0x81C(r31)
      stfs      f1, 0x824(r31)
      stfs      f0, 0x828(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80262C3C
 * Size:	000160
 */
void Game::Rock::Mgr::createObj((int))
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
      mulli     r3, r30, 0x2F8
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      addi      r3, r3, 0x10
      bl        -0x23ECBC
      lis       r4, 0x8026
      lis       r5, 0x8026
      addi      r4, r4, 0x2FF0
      mr        r7, r30
      addi      r5, r5, 0x2D9C
      li        r6, 0x2F8
      bl        -0x1A1294
      stw       r3, 0x44(r31)
      addi      r30, r1, 0x8
      li        r28, 0
      li        r29, 0
      lwz       r3, -0x35C8(r2)
      lwz       r0, -0x35C4(r2)
      stw       r3, 0x8(r1)
      stw       r0, 0xC(r1)

    .loc_0x6C:
      lwz       r3, -0x6E20(r13)
      li        r5, 0
      lwz       r4, 0x0(r30)
      bl        -0x155234
      rlwinm.   r0,r3,0,24,31
      mr        r6, r29
      mr        r3, r0
      ble-      .loc_0x130
      rlwinm.   r0,r0,29,3,31
      mtctr     r0
      beq-      .loc_0x110

    .loc_0x98:
      lwz       r5, 0x0(r30)
      addi      r0, r6, 0x2E4
      lwz       r4, 0x44(r31)
      addi      r29, r29, 0x17C0
      stwx      r5, r4, r0
      addi      r0, r6, 0x5DC
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x8D4
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0xBCC
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0xEC4
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x11BC
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x14B4
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      addi      r0, r6, 0x17AC
      addi      r6, r6, 0x17C0
      lwz       r4, 0x44(r31)
      stwx      r5, r4, r0
      bdnz+     .loc_0x98
      andi.     r3, r3, 0x7
      beq-      .loc_0x130

    .loc_0x110:
      mtctr     r3

    .loc_0x114:
      lwz       r5, 0x0(r30)
      addi      r0, r6, 0x2E4
      lwz       r4, 0x44(r31)
      addi      r6, r6, 0x2F8
      addi      r29, r29, 0x2F8
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
 * Address:	80262D9C
 * Size:	0000BC
 */
void Game::Rock::Obj::__dt(void)
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
      lis       r3, 0x804C
      addi      r0, r31, 0x2E8
      addi      r4, r3, 0x4234
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
      bl        0x1AE760

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x23ED84

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
 * Address:	80262E58
 * Size:	000010
 */
void Game::Rock::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x2F8
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80262E68
 * Size:	000050
 */
void Game::Rock::Parms::read((Stream&))
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
      bl        0x1B0970
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x1B0964
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x1B0958
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
 * Address:	80262EB8
 * Size:	0000B0
 */
void Game::Rock::Mgr::__dt(void)
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
      lis       r3, 0x804C
      addi      r3, r3, 0x401C
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
      bl        0x1AE650

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x23EE94

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
 * Address:	80262F68
 * Size:	000008
 */
void Game::Rock::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x13
      blr
    */
}

/*
 * --INFO--
 * Address:	80262F70
 * Size:	000070
 */
void Game::Rock::Generator::__dt(void)
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
      beq-      .loc_0x54
      lis       r4, 0x804C
      addi      r0, r4, 0x40FC
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x2450
      stw       r0, 0x0(r30)
      bl        0x1AE5D8

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x23EF0C

    .loc_0x54:
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
 * Address:	80262FE0
 * Size:	000008
 */
void Game::Rock::Generator::getInitialParam(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x24
      blr
    */
}

/*
 * --INFO--
 * Address:	80262FE8
 * Size:	000008
 */
void @4 @Game::Rock::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x134
    */
}
