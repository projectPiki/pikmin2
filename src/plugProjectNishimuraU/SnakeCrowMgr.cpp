

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
 * Address:	80292B9C
 * Size:	000050
 */
void Game::SnakeCrow::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x163F1C
      lis       r3, 0x804D
      lis       r4, 0x8049
      subi      r5, r3, 0x4B80
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      subi      r0, r4, 0x7BFC
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
 * Address:	80292BEC
 * Size:	000048
 */
void Game::SnakeCrow::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x8D0
      bl        -0x26ED60
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x163380
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
 * Address:	80292C34
 * Size:	000190
 */
void Game::SnakeCrow::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x7C10
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        -0x1894B8
      lis       r3, 0x804D
      lis       r5, 0x6670
      subi      r0, r3, 0x4AA0
      addi      r4, r30, 0x8CC
      stw       r0, 0xD8(r30)
      li        r7, 0
      addi      r0, r31, 0x2C
      addi      r3, r30, 0x804
      stw       r4, 0x7F8(r30)
      addi      r4, r30, 0x7F8
      addi      r5, r5, 0x3031
      addi      r6, r31, 0x3C
      stw       r7, 0x7FC(r30)
      stw       r0, 0x800(r30)
      bl        0x1809C8
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x28F8(r2)
      stw       r0, 0x804(r30)
      addi      r3, r30, 0x82C
      lfs       f1, -0x28F4(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x81C(r30)
      addi      r5, r5, 0x3131
      lfs       f0, -0x28F0(r2)
      addi      r6, r31, 0x48
      stfs      f1, 0x824(r30)
      stfs      f0, 0x828(r30)
      bl        0x18098C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x28EC(r2)
      stw       r0, 0x82C(r30)
      addi      r3, r30, 0x854
      lfs       f1, -0x28F4(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x844(r30)
      addi      r5, r5, 0x3132
      lfs       f0, -0x28E8(r2)
      addi      r6, r31, 0x58
      stfs      f1, 0x84C(r30)
      stfs      f0, 0x850(r30)
      bl        0x180950
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x28F0(r2)
      stw       r0, 0x854(r30)
      addi      r3, r30, 0x87C
      lfs       f1, -0x28F4(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x86C(r30)
      addi      r5, r5, 0x3231
      lfs       f0, -0x28E8(r2)
      addi      r6, r31, 0x68
      stfs      f1, 0x874(r30)
      stfs      f0, 0x878(r30)
      bl        0x180914
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x28E4(r2)
      stw       r0, 0x87C(r30)
      addi      r3, r30, 0x8A4
      lfs       f1, -0x28F4(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x894(r30)
      addi      r5, r5, 0x3331
      lfs       f0, -0x28E0(r2)
      addi      r6, r31, 0x74
      stfs      f1, 0x89C(r30)
      stfs      f0, 0x8A0(r30)
      bl        0x1808D8
      lis       r3, 0x804B
      lfs       f2, -0x28DC(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x28F4(r2)
      stw       r0, 0x8A4(r30)
      mr        r3, r30
      lfs       f0, -0x28D8(r2)
      stfs      f2, 0x8BC(r30)
      stfs      f1, 0x8C4(r30)
      stfs      f0, 0x8C8(r30)
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
 * Address:	80292DC4
 * Size:	000060
 */
void Game::SnakeCrow::Mgr::createObj((int))
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
      mulli     r3, r31, 0x338
      addi      r3, r3, 0x10
      bl        -0x26EE3C
      lis       r4, 0x8029
      lis       r5, 0x8029
      addi      r4, r4, 0x3094
      mr        r7, r31
      addi      r5, r5, 0x2E24
      li        r6, 0x338
      bl        -0x1D1414
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
 * Address:	80292E24
 * Size:	0000BC
 */
void Game::SnakeCrow::Obj::__dt(void)
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
      lis       r3, 0x804D
      addi      r0, r31, 0x328
      subi      r4, r3, 0x4948
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
      bl        0x17E6D8

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x26EE0C

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
 * Address:	80292EE0
 * Size:	000010
 */
void Game::SnakeCrow::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x338
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80292EF0
 * Size:	000068
 */
void Game::SnakeCrow::Mgr::loadModelData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x162DF8
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
 * Address:	80292F58
 * Size:	0000B0
 */
void Game::SnakeCrow::Mgr::__dt(void)
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
      lis       r3, 0x804D
      subi      r3, r3, 0x4B80
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
      bl        0x17E5B0

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x26EF34

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
 * Address:	80293008
 * Size:	000008
 */
void Game::SnakeCrow::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x22
      blr
    */
}

/*
 * --INFO--
 * Address:	80293010
 * Size:	00002C
 */
void Game::SnakeCrow::Mgr::doLoadBmd((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x2124
      mr        r3, r4
      stw       r0, 0x14(r1)
      addi      r4, r5, 0x30
      bl        -0x223794
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8029303C
 * Size:	000050
 */
void Game::SnakeCrow::Parms::read((Stream&))
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
      bl        0x18079C
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x180790
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x180784
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
 * Address:	8029308C
 * Size:	000008
 */
void @4 @Game::SnakeCrow::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x138
    */
}
