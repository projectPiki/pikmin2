

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
 * Address:	80233484
 * Size:	000048
 */
void Game::IconTexture::Loader::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2164CC
      lis       r3, 0x804C
      li        r0, 0
      addi      r4, r3, 0x1434
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x1C(r31)
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
 * Address:	802334CC
 * Size:	00008C
 */
void Game::IconTexture::Loader::__dt(void)
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
      beq-      .loc_0x70
      lis       r3, 0x804C
      addi      r0, r3, 0x1434
      stw       r0, 0x0(r30)
      lwz       r0, 0x1C(r30)
      cmplwi    r0, 0
      beq-      .loc_0x40
      li        r0, 0
      stw       r0, 0x1C(r30)

    .loc_0x40:
      lwz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0x54
      li        r0, 0
      stw       r0, 0x18(r30)

    .loc_0x54:
      mr        r3, r30
      li        r4, 0
      bl        -0x2164F4
      extsh.    r0, r31
      ble-      .loc_0x70
      mr        r3, r30
      bl        -0x20F484

    .loc_0x70:
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
 * Address:	80233558
 * Size:	000084
 */
void Game::IconTexture::Loader::loadResource((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      stw       r30, 0x38(r1)
      mr        r30, r3
      addi      r3, r1, 0x8
      bl        0x219060
      lwz       r3, -0x63D8(r13)
      addi      r4, r1, 0x8
      bl        0x219190
      stw       r3, 0x18(r30)
      lwz       r3, 0x18(r30)
      cmplwi    r3, 0
      beq-      .loc_0x4C
      lwz       r0, 0x34(r3)
      stw       r0, 0x1C(r30)
      b         .loc_0x6C

    .loc_0x4C:
      lis       r3, 0x8048
      lis       r4, 0x8048
      addi      r5, r4, 0x3A04
      mr        r6, r31
      addi      r3, r3, 0x39F0
      li        r4, 0x2D
      crclr     6, 0x6
      bl        -0x208F80

    .loc_0x6C:
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802335DC
 * Size:	000030
 */
void Game::IconTexture::Loader::getResTIMG((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8023360C
 * Size:	000048
 */
void Game::IconTexture::Mgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x216654
      lis       r3, 0x804C
      li        r0, 0
      addi      r4, r3, 0x1428
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x18(r31)
      stw       r0, 0x1C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80233654
 * Size:	00008C
 */
void Game::IconTexture::Mgr::__dt(void)
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
      beq-      .loc_0x70
      lis       r3, 0x804C
      addi      r0, r3, 0x1428
      stw       r0, 0x0(r30)
      lwz       r3, 0x18(r30)
      cmplwi    r3, 0
      beq-      .loc_0x4C
      lis       r4, 0x8003
      addi      r4, r4, 0x3010
      bl        -0x171F4C
      li        r0, 0
      stw       r0, 0x18(r30)

    .loc_0x4C:
      li        r0, 0
      mr        r3, r30
      stw       r0, 0x1C(r30)
      li        r4, 0
      bl        -0x21667C
      extsh.    r0, r31
      ble-      .loc_0x70
      mr        r3, r30
      bl        -0x20F60C

    .loc_0x70:
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
 * Address:	802336E0
 * Size:	000084
 */
void Game::IconTexture::Mgr::create((int))
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
      bgt-      .loc_0x3C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x39F0
      li        r4, 0x4E
      addi      r5, r5, 0x3A1C
      crclr     6, 0x6
      bl        -0x2090D8

    .loc_0x3C:
      rlwinm    r3,r31,6,0,25
      addi      r3, r3, 0x10
      bl        -0x20F778
      lis       r4, 0x8001
      lis       r5, 0x8003
      addi      r4, r4, 0x77D0
      mr        r7, r31
      addi      r5, r5, 0x3010
      li        r6, 0x40
      bl        -0x171D50
      stw       r3, 0x18(r30)
      stw       r31, 0x1C(r30)
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
 * Address:	80233764
 * Size:	00008C
 */
void Game::IconTexture::Mgr::setTexture((int, ResTIMG*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr.       r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      blt-      .loc_0x34
      lwz       r0, 0x1C(r29)
      cmpw      r30, r0
      blt-      .loc_0x58

    .loc_0x34:
      lis       r3, 0x8048
      lis       r4, 0x8048
      addi      r5, r4, 0x3A28
      lwz       r7, 0x1C(r29)
      addi      r3, r3, 0x39F0
      mr        r6, r30
      li        r4, 0x56
      crclr     6, 0x6
      bl        -0x209178

    .loc_0x58:
      lwz       r3, 0x18(r29)
      rlwinm    r0,r30,6,0,25
      mr        r4, r31
      li        r5, 0
      add       r3, r3, r0
      bl        -0x20074C
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
 * Address:	802337F0
 * Size:	00002C
 */
void Game::IconTexture::Mgr::getTexture((int))
{
    /*
    .loc_0x0:
      cmpwi     r4, 0
      blt-      .loc_0x14
      lwz       r0, 0x1C(r3)
      cmpw      r4, r0
      blt-      .loc_0x1C

    .loc_0x14:
      li        r3, 0
      blr

    .loc_0x1C:
      lwz       r3, 0x18(r3)
      rlwinm    r0,r4,6,0,25
      add       r3, r3, r0
      blr
    */
}
