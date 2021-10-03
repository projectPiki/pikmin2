

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
 * Address:	80258120
 * Size:	000050
 */
void Game::Frog::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1294A0
      lis       r3, 0x804C
      lis       r4, 0x8048
      addi      r5, r3, 0x236C
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x4D2C
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
 * Address:	80258170
 * Size:	000048
 */
void Game::Frog::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x8A8
      bl        -0x2342E4
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x128904
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
 * Address:	802581B8
 * Size:	000154
 */
void Game::Frog::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      addi      r30, r4, 0x4D20
      bl        -0x14EA3C
      lis       r3, 0x804C
      lis       r5, 0x6670
      addi      r0, r3, 0x2360
      addi      r4, r31, 0x8A4
      stw       r0, 0xD8(r31)
      li        r7, 0
      addi      r0, r30, 0x24
      addi      r3, r31, 0x804
      stw       r4, 0x7F8(r31)
      addi      r4, r31, 0x7F8
      addi      r5, r5, 0x3031
      addi      r6, r30, 0x30
      stw       r7, 0x7FC(r31)
      stw       r0, 0x800(r31)
      bl        0x1BB444
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x38C0(r2)
      stw       r0, 0x804(r31)
      addi      r3, r31, 0x82C
      lfs       f1, -0x38BC(r2)
      addi      r4, r31, 0x7F8
      stfs      f0, 0x81C(r31)
      addi      r5, r5, 0x3032
      lfs       f0, -0x38B8(r2)
      addi      r6, r30, 0x3C
      stfs      f1, 0x824(r31)
      stfs      f0, 0x828(r31)
      bl        0x1BB408
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x38B4(r2)
      stw       r0, 0x82C(r31)
      addi      r3, r31, 0x854
      lfs       f1, -0x38BC(r2)
      addi      r4, r31, 0x7F8
      stfs      f0, 0x844(r31)
      addi      r5, r5, 0x3033
      lfs       f0, -0x38B0(r2)
      addi      r6, r30, 0x4C
      stfs      f1, 0x84C(r31)
      stfs      f0, 0x850(r31)
      bl        0x1BB3CC
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x38AC(r2)
      stw       r0, 0x854(r31)
      addi      r3, r31, 0x87C
      lfs       f1, -0x38BC(r2)
      addi      r4, r31, 0x7F8
      stfs      f0, 0x86C(r31)
      addi      r5, r5, 0x3034
      lfs       f0, -0x38A8(r2)
      addi      r6, r30, 0x58
      stfs      f1, 0x874(r31)
      stfs      f0, 0x878(r31)
      bl        0x1BB390
      lis       r3, 0x804B
      lfs       f2, -0x38A4(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x38BC(r2)
      stw       r0, 0x87C(r31)
      mr        r3, r31
      lfs       f0, -0x38A0(r2)
      stfs      f2, 0x894(r31)
      stfs      f1, 0x89C(r31)
      stfs      f0, 0x8A0(r31)
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
 * Address:	8025830C
 * Size:	000060
 */
void Game::Frog::Mgr::createObj((int))
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
      mulli     r3, r31, 0x2F0
      addi      r3, r3, 0x10
      bl        -0x234384
      lis       r4, 0x8026
      lis       r5, 0x8026
      subi      r4, r4, 0x7AB8
      mr        r7, r31
      subi      r5, r5, 0x7C94
      li        r6, 0x2F0
      bl        -0x19695C
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
 * Address:	8025836C
 * Size:	0000BC
 */
void Game::Frog::Obj::__dt(void)
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
      addi      r0, r31, 0x2E0
      addi      r4, r3, 0x24D0
      stw       r4, 0x0(r31)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x304
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
      bl        0x1B9190

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x234354

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
 * Address:	80258428
 * Size:	000010
 */
void Game::Frog::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x2F0
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80258438
 * Size:	000050
 */
void Game::Frog::Parms::read((Stream&))
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
      bl        0x1BB3A0
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x1BB394
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x1BB388
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
 * Address:	80258488
 * Size:	0000B0
 */
void Game::Frog::Mgr::__dt(void)
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
      addi      r3, r3, 0x236C
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
      bl        0x1B9080

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x234464

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
 * Address:	80258538
 * Size:	000008
 */
void Game::Frog::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x11
      blr
    */
}

/*
 * --INFO--
 * Address:	80258540
 * Size:	000008
 */
void @4 @Game::Frog::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xBC
    */
}
