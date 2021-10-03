

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
 * Address:	802BBCD4
 * Size:	000050
 */
void Game::Imomushi::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x18D054
      lis       r3, 0x804D
      lis       r4, 0x8049
      addi      r5, r3, 0x814
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      subi      r0, r4, 0x56F0
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
 * Address:	802BBD24
 * Size:	000048
 */
void Game::Imomushi::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x8D0
      bl        -0x297E98
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x18C4B8
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
 * Address:	802BBD6C
 * Size:	000190
 */
void Game::Imomushi::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x5700
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        -0x1B25F0
      lis       r3, 0x804D
      lis       r5, 0x6670
      addi      r0, r3, 0x808
      addi      r4, r30, 0x8CC
      stw       r0, 0xD8(r30)
      li        r7, 0
      addi      r0, r31, 0x24
      addi      r3, r30, 0x804
      stw       r4, 0x7F8(r30)
      addi      r4, r30, 0x7F8
      addi      r5, r5, 0x3031
      addi      r6, r31, 0x34
      stw       r7, 0x7FC(r30)
      stw       r0, 0x800(r30)
      bl        0x157890
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x1FC0(r2)
      stw       r0, 0x804(r30)
      addi      r3, r30, 0x82C
      lfs       f1, -0x1FBC(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x81C(r30)
      addi      r5, r5, 0x3032
      lfs       f0, -0x1FB8(r2)
      addi      r6, r31, 0x40
      stfs      f1, 0x824(r30)
      stfs      f0, 0x828(r30)
      bl        0x157854
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x1FB4(r2)
      stw       r0, 0x82C(r30)
      addi      r3, r30, 0x854
      lfs       f1, -0x1FBC(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x844(r30)
      addi      r5, r5, 0x3131
      lfs       f0, -0x1FB8(r2)
      addi      r6, r31, 0x4C
      stfs      f1, 0x84C(r30)
      stfs      f0, 0x850(r30)
      bl        0x157818
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x1FB8(r2)
      stw       r0, 0x854(r30)
      addi      r3, r30, 0x87C
      lfs       f1, -0x1FBC(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x86C(r30)
      addi      r5, r5, 0x3930
      lfs       f0, -0x1FB0(r2)
      addi      r6, r31, 0x58
      stfs      f1, 0x874(r30)
      stfs      f0, 0x878(r30)
      bl        0x1577DC
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x1FAC(r2)
      stw       r0, 0x87C(r30)
      addi      r3, r30, 0x8A4
      lfs       f1, -0x1FBC(r2)
      addi      r4, r30, 0x7F8
      stfs      f0, 0x894(r30)
      addi      r5, r5, 0x3931
      lfs       f0, -0x1FB8(r2)
      addi      r6, r31, 0x68
      stfs      f1, 0x89C(r30)
      stfs      f0, 0x8A0(r30)
      bl        0x1577A0
      lis       r3, 0x804B
      lfs       f2, -0x1FA8(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x1FBC(r2)
      stw       r0, 0x8A4(r30)
      mr        r3, r30
      lfs       f0, -0x1FA4(r2)
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
 * Address:	802BBEFC
 * Size:	000060
 */
void Game::Imomushi::Mgr::createObj((int))
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
      mulli     r3, r31, 0x320
      addi      r3, r3, 0x10
      bl        -0x297F74
      lis       r4, 0x802C
      lis       r5, 0x802C
      subi      r4, r4, 0x3EC8
      mr        r7, r31
      subi      r5, r5, 0x40A4
      li        r6, 0x320
      bl        -0x1FA54C
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
 * Address:	802BBF5C
 * Size:	0000BC
 */
void Game::Imomushi::Obj::__dt(void)
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
      addi      r0, r31, 0x310
      addi      r4, r3, 0x904
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
      bl        0x1555A0

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x297F44

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
 * Address:	802BC018
 * Size:	000010
 */
void Game::Imomushi::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x320
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	802BC028
 * Size:	000050
 */
void Game::Imomushi::Parms::read((Stream&))
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
      bl        0x1577B0
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x1577A4
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x157798
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
 * Address:	802BC078
 * Size:	0000B0
 */
void Game::Imomushi::Mgr::__dt(void)
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
      addi      r3, r3, 0x814
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
      bl        0x155490

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x298054

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
 * Address:	802BC128
 * Size:	000008
 */
void Game::Imomushi::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x41
      blr
    */
}

/*
 * --INFO--
 * Address:	802BC130
 * Size:	000008
 */
void @4 @Game::Imomushi::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xBC
    */
}
