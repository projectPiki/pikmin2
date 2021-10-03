

/*
 * --INFO--
 * Address:	801275B0
 * Size:	000098
 */
void Game::Pelplant::Generator::__ct(void)
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
      subi      r5, r5, 0x41D8
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
      bl        0x2EBC9C
      lis       r3, 0x804B
      li        r4, 0
      subi      r3, r3, 0x23D0
      li        r0, 0x1
      stw       r3, 0x0(r31)
      mr        r3, r31
      stb       r4, 0x24(r31)
      stb       r0, 0x25(r31)
      stb       r4, 0x26(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80127648
 * Size:	00008C
 */
void Game::Pelplant::Generator::doRead((Stream&))
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
      bl        0x2EBDB8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x68
      mr        r3, r31
      bl        0x2ECE10
      stb       r3, 0x24(r30)
      mr        r3, r31
      bl        0x2ECE04
      stb       r3, 0x25(r30)
      mr        r3, r31
      bl        0x2ECDF8
      stb       r3, 0x26(r30)
      b         .loc_0x74

    .loc_0x68:
      mr        r3, r30
      mr        r4, r31
      bl        0x28

    .loc_0x74:
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
 * Address:	801276D4
 * Size:	00000C
 */
void Game::Pelplant::Generator::getLatestVersion(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x3030
      addi      r3, r3, 0x3031
      blr
    */
}

/*
 * --INFO--
 * Address:	801276E0
 * Size:	000064
 */
void Game::Pelplant::Generator::doReadOldVersion((Stream&))
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
      lis       r3, 0x3030
      lwz       r5, 0x20(r30)
      addi      r0, r3, 0x3030
      cmpw      r5, r0
      beq-      .loc_0x34
      b         .loc_0x4C

    .loc_0x34:
      mr        r3, r31
      bl        0x2ECD84
      stb       r3, 0x24(r30)
      mr        r3, r31
      bl        0x2ECD78
      stb       r3, 0x26(r30)

    .loc_0x4C:
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
 * Address:	80127744
 * Size:	0000C8
 */
void Game::Pelplant::Generator::doWrite((Stream&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r5, 0x41D8
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r30
      lwz       r4, 0x414(r4)
      bl        0x2ECCC0
      lbz       r4, 0x24(r29)
      mr        r3, r30
      bl        0x2EDEF0
      mr        r3, r30
      addi      r4, r31, 0xC
      addi      r5, r31, 0x18
      crclr     6, 0x6
      bl        0x2ECA48
      lwz       r4, 0x414(r30)
      mr        r3, r30
      bl        0x2ECC94
      lbz       r4, 0x25(r29)
      mr        r3, r30
      bl        0x2EDEC4
      mr        r3, r30
      addi      r4, r31, 0xC
      addi      r5, r31, 0x24
      crclr     6, 0x6
      bl        0x2ECA1C
      lwz       r4, 0x414(r30)
      mr        r3, r30
      bl        0x2ECC68
      lbz       r4, 0x26(r29)
      mr        r3, r30
      bl        0x2EDE98
      mr        r3, r30
      addi      r4, r31, 0xC
      subi      r5, r2, 0x63D8
      crclr     6, 0x6
      bl        0x2EC9F0
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
 * Address:	8012780C
 * Size:	000070
 */
void Game::Pelplant::Generator::__dt(void)
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
      lis       r4, 0x804B
      subi      r0, r4, 0x23D0
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x2450
      stw       r0, 0x0(r30)
      bl        0x2E9D3C

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x1037A8

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
 * Address:	8012787C
 * Size:	000008
 */
void Game::Pelplant::Generator::getInitialParam(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x24
      blr
    */
}
