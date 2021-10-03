

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
 * Address:	8034B6B0
 * Size:	000050
 */
void Game::Egg::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x21CA30
      lis       r3, 0x804E
      lis       r4, 0x8049
      subi      r5, r3, 0x4078
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x808
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
 * Address:	8034B700
 * Size:	000048
 */
void Game::Egg::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x8D4
      bl        -0x327874
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x21BE94
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
 * Address:	8034B748
 * Size:	00018C
 */
void Game::Egg::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      addi      r31, r4, 0x808
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        -0x241FCC
      lis       r3, 0x804E
      lis       r5, 0x6670
      subi      r0, r3, 0x3F98
      addi      r4, r30, 0x8CC
      stw       r0, 0xD8(r30)
      li        r7, 0
      addi      r0, r31, 0x14
      addi      r3, r30, 0x804
      stw       r4, 0x7F8(r30)
      addi      r4, r30, 0x7F8
      addi      r5, r5, 0x3031
      addi      r6, r31, 0x24
      stw       r7, 0x7FC(r30)
      stw       r0, 0x800(r30)
      bl        0xC7EB4
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x20(r2)
      stw       r0, 0x804(r30)
      addi      r3, r30, 0x82C
      lfs       f0, 0x24(r2)
      addi      r4, r30, 0x7F8
      stfs      f1, 0x81C(r30)
      addi      r5, r5, 0x3032
      addi      r6, r31, 0x30
      stfs      f0, 0x824(r30)
      stfs      f1, 0x828(r30)
      bl        0xC7E7C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x20(r2)
      stw       r0, 0x82C(r30)
      addi      r3, r30, 0x854
      lfs       f0, 0x24(r2)
      addi      r4, r30, 0x7F8
      stfs      f1, 0x844(r30)
      addi      r5, r5, 0x3033
      addi      r6, r31, 0x3C
      stfs      f0, 0x84C(r30)
      stfs      f1, 0x850(r30)
      bl        0xC7E44
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x20(r2)
      stw       r0, 0x854(r30)
      addi      r3, r30, 0x87C
      lfs       f0, 0x24(r2)
      addi      r4, r30, 0x7F8
      stfs      f1, 0x86C(r30)
      addi      r5, r5, 0x3034
      addi      r6, r31, 0x50
      stfs      f0, 0x874(r30)
      stfs      f1, 0x878(r30)
      bl        0xC7E0C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x20(r2)
      stw       r0, 0x87C(r30)
      addi      r3, r30, 0x8A4
      lfs       f0, 0x24(r2)
      addi      r4, r30, 0x7F8
      stfs      f1, 0x894(r30)
      addi      r5, r5, 0x3035
      addi      r6, r31, 0x64
      stfs      f0, 0x89C(r30)
      stfs      f1, 0x8A0(r30)
      bl        0xC7DD4
      lis       r3, 0x804B
      lfs       f1, 0x20(r2)
      subi      r0, r3, 0x5344
      lfs       f0, 0x24(r2)
      stw       r0, 0x8A4(r30)
      li        r4, 0
      li        r0, 0x1
      mr        r3, r30
      stfs      f1, 0x8BC(r30)
      stfs      f0, 0x8C4(r30)
      stfs      f1, 0x8C8(r30)
      stb       r4, 0x8D0(r30)
      stb       r0, 0x8D1(r30)
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
 * Address:	8034B8D4
 * Size:	000020
 */
void Game::Egg::Mgr::birth((Game::EnemyBirthArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x21C518
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8034B8F4
 * Size:	0000B0
 */
void Game::Egg::Mgr::__dt(void)
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
      subi      r3, r3, 0x4078
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
      bl        0xC5C14

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x3278D0

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
 * Address:	8034B9A4
 * Size:	000008
 */
void Game::Egg::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x25
      blr
    */
}

/*
 * --INFO--
 * Address:	8034B9AC
 * Size:	000060
 */
void Game::Egg::Mgr::createObj((int))
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
      mulli     r3, r31, 0x2D4
      addi      r3, r3, 0x10
      bl        -0x327A24
      lis       r4, 0x8035
      lis       r5, 0x8035
      subi      r4, r4, 0x4340
      mr        r7, r31
      subi      r5, r5, 0x45F4
      li        r6, 0x2D4
      bl        -0x289FFC
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
 * Address:	8034BA0C
 * Size:	0000BC
 */
void Game::Egg::Obj::__dt(void)
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
      addi      r0, r31, 0x2C4
      subi      r4, r3, 0x3F88
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
      bl        0xC5AF0

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x3279F4

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
 * Address:	8034BAC8
 * Size:	000010
 */
void Game::Egg::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x2D4
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	8034BAD8
 * Size:	000050
 */
void Game::Egg::Parms::read((Stream&))
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
      bl        0xC7D00
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0xC7CF4
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0xC7CE8
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
 * Address:	8034BB28
 * Size:	000008
 */
void @4 @Game::Egg::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x238
    */
}
