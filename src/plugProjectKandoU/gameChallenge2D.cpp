

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
 * Address:	802350A0
 * Size:	000064
 */
void Game::Challenge2D_TitleInfo::__ct((int))
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
      mulli     r3, r31, 0x24
      addi      r3, r3, 0x10
      bl        -0x211118
      lis       r4, 0x8023
      mr        r7, r31
      addi      r4, r4, 0x5104
      li        r5, 0
      li        r6, 0x24
      bl        -0x1736EC
      stw       r3, 0x0(r30)
      mr        r3, r30
      stw       r31, 0x4(r30)
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
 * Address:	80235104
 * Size:	000030
 */
void Game::Challenge2D_TitleInfo::Info::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0x20(r3)
      stw       r0, 0x0(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0xC(r3)
      stw       r0, 0x10(r3)
      stw       r0, 0x18(r3)
      stw       r0, 0x14(r3)
      stw       r0, 0x1C(r3)
      stb       r0, 0x20(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80235134
 * Size:	00007C
 */
void Game::Challenge2D_TitleInfo::operator()((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0
      blt-      .loc_0x34
      lwz       r0, 0x4(r30)
      cmpw      r31, r0
      bge-      .loc_0x34
      li        r3, 0x1

    .loc_0x34:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x58
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x3AB0
      li        r4, 0x1F
      addi      r5, r5, 0x3AC4
      crclr     6, 0x6
      bl        -0x20AB48

    .loc_0x58:
      mulli     r0, r31, 0x24
      lwz       r3, 0x0(r30)
      add       r3, r3, r0
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
 * Address:	802351B0
 * Size:	000064
 */
void Game::Vs2D_TitleInfo::__ct((int))
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
      rlwinm    r3,r4,2,0,29
      addi      r3, r3, 0x10
      bl        -0x211228
      lis       r4, 0x8023
      mr        r7, r31
      addi      r4, r4, 0x5214
      li        r5, 0
      li        r6, 0x4
      bl        -0x1737FC
      stw       r3, 0x0(r30)
      mr        r3, r30
      stw       r31, 0x4(r30)
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
 * Address:	80235214
 * Size:	00000C
 */
void Game::Vs2D_TitleInfo::Info::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80235220
 * Size:	0000A8
 */
void Game::Vs2D_TitleInfo::operator()((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      blt-      .loc_0x2C
      lwz       r0, 0x4(r30)
      cmpw      r31, r0
      blt-      .loc_0x44

    .loc_0x2C:
      lis       r3, 0x8048
      li        r4, 0x34
      addi      r3, r3, 0x3AB0
      subi      r5, r2, 0x3FA8
      crclr     6, 0x6
      bl        -0x20AC20

    .loc_0x44:
      cmpwi     r31, 0
      li        r3, 0
      blt-      .loc_0x60
      lwz       r0, 0x4(r30)
      cmpw      r31, r0
      bge-      .loc_0x60
      li        r3, 0x1

    .loc_0x60:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x84
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x3AB0
      li        r4, 0x36
      addi      r5, r5, 0x3AC4
      crclr     6, 0x6
      bl        -0x20AC60

    .loc_0x84:
      lwz       r3, 0x0(r30)
      rlwinm    r0,r31,2,0,29
      add       r3, r3, r0
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
 * Address:	802352C8
 * Size:	000028
 */
void Game::Challenge2D_ResultInfo::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0x0(r3)
      stb       r0, 0x0(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0xC(r3)
      stw       r0, 0x10(r3)
      stw       r0, 0x14(r3)
      stw       r0, 0x1C(r3)
      stw       r0, 0x18(r3)
      blr
    */
}
