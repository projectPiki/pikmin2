

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
 * Address:	802352F0
 * Size:	000044
 */
void Game::VsGame::TekiMgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x1DC08C
      lis       r3, 0x804C
      li        r0, 0
      addi      r4, r3, 0x1460
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x24(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80235334
 * Size:	000060
 */
void Game::VsGame::TekiNode::__dt(void)
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
      beq-      .loc_0x44
      lis       r5, 0x804C
      li        r4, 0
      addi      r0, r5, 0x1460
      stw       r0, 0x0(r30)
      bl        0x1DC224
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x2112C0

    .loc_0x44:
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
 * Address:	80235394
 * Size:	0000A0
 */
void Game::VsGame::TekiMgr::entry((Game::EnemyTypeID::EEnemyTypeID, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      li        r3, 0x24
      bl        -0x21151C
      mr.       r31, r3
      beq-      .loc_0x48
      bl        0x1DBFC4
      lis       r3, 0x804C
      addi      r0, r3, 0x1460
      stw       r0, 0x0(r31)

    .loc_0x48:
      stw       r29, 0x18(r31)
      mr        r3, r28
      mr        r4, r31
      stw       r30, 0x1C(r31)
      lwz       r5, 0x24(r28)
      addi      r0, r5, 0x1
      stw       r0, 0x24(r28)
      stw       r5, 0x20(r31)
      bl        0x1DC00C
      lwz       r3, -0x6E20(r13)
      mr        r4, r29
      rlwinm    r5,r30,0,24,31
      li        r6, 0
      bl        -0x127BBC
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
 * Address:	........
 * Size:	000020
 */
void Game::VsGame::TekiMgr::getNode((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Game::VsGame::TekiMgr::birthable((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80235434
 * Size:	0000D8
 */
void birth__Q34Game6VsGame7TekiMgrFiR10Vector3<float> b(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r6
      stw       r29, 0x54(r1)
      mr        r29, r5
      bl        0x1DC248
      mr.       r31, r3
      beq-      .loc_0xB8
      addi      r3, r1, 0x8
      bl        -0x106840
      bl        -0x16BEC8
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0x44(r1)
      rlwinm.   r0,r30,0,24,31
      lfd       f3, -0x3F90(r2)
      stw       r3, 0x40(r1)
      lfs       f1, -0x3FA0(r2)
      lfd       f2, 0x40(r1)
      lfs       f0, -0x3F9C(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      stfs      f0, 0x14(r1)
      lfs       f0, 0x0(r29)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r29)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r29)
      stfs      f0, 0x10(r1)
      beq-      .loc_0x90
      lfs       f0, -0x3F98(r2)
      stfs      f0, 0x34(r1)

    .loc_0x90:
      lwz       r3, -0x6E20(r13)
      addi      r5, r1, 0x8
      lwz       r4, 0x18(r31)
      bl        -0x128010
      mr.       r31, r3
      beq-      .loc_0xB0
      li        r4, 0
      bl        -0xFA518

    .loc_0xB0:
      mr        r3, r31
      b         .loc_0xBC

    .loc_0xB8:
      li        r3, 0

    .loc_0xBC:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void Game::VsGame::TekiMgr::getID((int))
{
    // UNUSED FUNCTION
}
