

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
 * Address:	8026CC80
 * Size:	000064
 */
void Game::GasHiba::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x13E000
      lis       r3, 0x804C
      lis       r4, 0x804C
      addi      r5, r3, 0x53D4
      lis       r3, 0x8048
      stw       r5, 0x0(r31)
      addi      r6, r5, 0x38
      addi      r5, r4, 0x58EC
      addi      r0, r3, 0x61C8
      stw       r6, 0x4(r31)
      addi      r4, r5, 0x38
      mr        r3, r31
      stw       r5, 0x0(r31)
      stw       r4, 0x4(r31)
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
 * Address:	8026CCE4
 * Size:	000048
 */
void Game::GasHiba::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x8F8
      bl        -0x248E58
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x13D478
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
 * Address:	8026CD2C
 * Size:	0001CC
 */
void Game::GasHiba::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      addi      r31, r4, 0x61B8
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        -0x1635B0
      lis       r3, 0x804C
      lis       r5, 0x6670
      addi      r0, r3, 0x58E0
      addi      r4, r30, 0x8F4
      stw       r0, 0xD8(r30)
      li        r7, 0
      addi      r0, r31, 0x24
      addi      r3, r30, 0x804
      stw       r4, 0x7F8(r30)
      addi      r4, r30, 0x7F8
      addi      r5, r5, 0x3032
      addi      r6, r31, 0x34
      stw       r7, 0x7FC(r30)
      stw       r0, 0x800(r30)
      bl        0x1A68D0
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x3308(r2)
      stw       r0, 0x804(r30)
      addi      r3, r30, 0x82C
      lfs       f1, -0x3304(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x81C(r30)
      addi      r5, r5, 0x3031
      lfs       f0, -0x3300(r2)
      addi      r6, r31, 0x44
      stfs      f1, 0x824(r30)
      stfs      f0, 0x828(r30)
      bl        0x1A6894
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x3308(r2)
      stw       r0, 0x82C(r30)
      addi      r3, r30, 0x854
      lfs       f1, -0x3304(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x844(r30)
      addi      r5, r5, 0x3033
      lfs       f0, -0x3300(r2)
      addi      r6, r31, 0x54
      stfs      f1, 0x84C(r30)
      stfs      f0, 0x850(r30)
      bl        0x1A6858
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x32FC(r2)
      stw       r0, 0x854(r30)
      addi      r3, r30, 0x87C
      lfs       f1, -0x3304(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x86C(r30)
      addi      r5, r5, 0x3034
      lfs       f0, -0x3300(r2)
      addi      r6, r31, 0x64
      stfs      f1, 0x874(r30)
      stfs      f0, 0x878(r30)
      bl        0x1A681C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x32F8(r2)
      stw       r0, 0x87C(r30)
      addi      r3, r30, 0x8A4
      lfs       f1, -0x3304(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x894(r30)
      addi      r5, r5, 0x3930
      lfs       f0, -0x3300(r2)
      addi      r6, r31, 0x70
      stfs      f1, 0x89C(r30)
      stfs      f0, 0x8A0(r30)
      bl        0x1A67E0
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x32F4(r2)
      stw       r0, 0x8A4(r30)
      addi      r3, r30, 0x8CC
      lfs       f1, -0x3304(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x8BC(r30)
      addi      r5, r5, 0x3931
      lfs       f0, -0x32FC(r2)
      addi      r6, r31, 0x7C
      stfs      f1, 0x8C4(r30)
      stfs      f0, 0x8C8(r30)
      bl        0x1A67A4
      lis       r3, 0x804B
      lfs       f2, -0x32F0(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x3304(r2)
      stw       r0, 0x8CC(r30)
      mr        r3, r30
      lfs       f0, -0x32FC(r2)
      stfs      f2, 0x8E4(r30)
      stfs      f1, 0x8EC(r30)
      stfs      f0, 0x8F0(r30)
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
 * Address:	8026CEF8
 * Size:	000060
 */
void Game::GasHiba::Mgr::createObj((int))
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
      mulli     r3, r31, 0x2E4
      addi      r3, r3, 0x10
      bl        -0x248F70
      lis       r4, 0x8027
      lis       r5, 0x8027
      subi      r4, r4, 0x2EB4
      mr        r7, r31
      subi      r5, r5, 0x30A8
      li        r6, 0x2E4
      bl        -0x1AB548
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
 * Address:	8026CF58
 * Size:	0000BC
 */
void Game::GasHiba::Obj::__dt(void)
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
      addi      r0, r31, 0x2D4
      addi      r4, r3, 0x59DC
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
      bl        0x1A45A4

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x248F40

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
 * Address:	8026D014
 * Size:	000010
 */
void Game::GasHiba::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x2E4
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	8026D024
 * Size:	000050
 */
void Game::GasHiba::Parms::read((Stream&))
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
      bl        0x1A67B4
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x1A67A8
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x1A679C
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
 * Address:	8026D074
 * Size:	0000C8
 */
void Game::GasHiba::Mgr::__dt(void)
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
      beq-      .loc_0xAC
      lis       r3, 0x804C
      addi      r3, r3, 0x58EC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x9C
      lis       r3, 0x804C
      addi      r3, r3, 0x53D4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x9C
      lis       r3, 0x804B
      subi      r3, r3, 0x760
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x9C
      lis       r3, 0x804B
      addic.    r0, r30, 0x4
      subi      r3, r3, 0x5304
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x9C
      lis       r4, 0x804B
      addi      r3, r30, 0x4
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4(r30)
      bl        0x1A447C

    .loc_0x9C:
      extsh.    r0, r31
      ble-      .loc_0xAC
      mr        r3, r30
      bl        -0x249068

    .loc_0xAC:
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
 * Address:	8026D13C
 * Size:	000008
 */
void Game::GasHiba::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x15
      blr
    */
}

/*
 * --INFO--
 * Address:	8026D144
 * Size:	000008
 */
void @4 @Game::GasHiba::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xD4
    */
}
