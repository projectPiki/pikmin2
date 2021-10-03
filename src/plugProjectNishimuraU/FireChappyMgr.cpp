

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
 * Address:	8028F138
 * Size:	000050
 */
void Game::FireChappy::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1604B8
      lis       r3, 0x804D
      lis       r4, 0x8049
      subi      r5, r3, 0x52E8
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      subi      r0, r4, 0x7C68
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
 * Address:	8028F188
 * Size:	000048
 */
void Game::FireChappy::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x884
      bl        -0x26B2FC
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        -0x175874
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x15F91C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8028F1D0
 * Size:	000060
 */
void Game::FireChappy::Mgr::createObj((int))
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
      mulli     r3, r31, 0x310
      addi      r3, r3, 0x10
      bl        -0x26B248
      lis       r4, 0x8029
      lis       r5, 0x8029
      subi      r4, r4, 0x9D4
      mr        r7, r31
      subi      r5, r5, 0xDD0
      li        r6, 0x310
      bl        -0x1CD820
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
 * Address:	8028F230
 * Size:	0000F0
 */
void Game::FireChappy::Obj::__dt(void)
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
      beq-      .loc_0xD4
      lis       r3, 0x804D
      addi      r0, r30, 0x300
      subi      r4, r3, 0x50BC
      stw       r4, 0x0(r30)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x334
      stw       r3, 0x178(r30)
      lwz       r3, 0x17C(r30)
      stw       r4, 0x0(r3)
      lwz       r3, 0x17C(r30)
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      beq-      .loc_0xC4
      lis       r3, 0x804B
      addi      r0, r30, 0x2E4
      subi      r4, r3, 0x20B4
      stw       r4, 0x0(r30)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x334
      stw       r3, 0x178(r30)
      lwz       r3, 0x17C(r30)
      stw       r4, 0x0(r3)
      lwz       r3, 0x17C(r30)
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      beq-      .loc_0xC4
      lis       r3, 0x804B
      addi      r0, r30, 0x2BC
      subi      r4, r3, 0x5CDC
      addi      r3, r30, 0x290
      stw       r4, 0x0(r30)
      addi      r5, r4, 0x1B0
      addi      r6, r4, 0x2F8
      li        r4, -0x1
      stw       r5, 0x178(r30)
      lwz       r5, 0x17C(r30)
      stw       r6, 0x0(r5)
      lwz       r5, 0x17C(r30)
      sub       r0, r0, r5
      stw       r0, 0xC(r5)
      bl        0x182298

    .loc_0xC4:
      extsh.    r0, r31
      ble-      .loc_0xD4
      mr        r3, r30
      bl        -0x26B24C

    .loc_0xD4:
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
 * Address:	8028F320
 * Size:	000010
 */
void Game::FireChappy::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x310
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	8028F330
 * Size:	000068
 */
void Game::FireChappy::Mgr::loadModelData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x15F238
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
 * Address:	8028F398
 * Size:	00012C
 */
void Game::FireChappy::Mgr::loadTexData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x74(r1)
      stw       r31, 0x6C(r1)
      stw       r30, 0x68(r1)
      mr        r30, r3
      lwz       r3, 0x1C(r3)
      bl        0x1AEEE4
      lwz       r4, -0x7B48(r13)
      addi      r3, r1, 0x38
      li        r31, 0
      bl        0x1BD210
      lwz       r3, -0x63D8(r13)
      addi      r4, r1, 0x38
      bl        0x1BD3CC
      cmplwi    r3, 0
      beq-      .loc_0x4C
      lwz       r31, 0x30(r3)

    .loc_0x4C:
      cmplwi    r31, 0
      bne-      .loc_0x70
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7C4C
      li        r4, 0x6E
      subi      r5, r5, 0x7C38
      crclr     6, 0x6
      bl        -0x264DC4

    .loc_0x70:
      li        r3, 0x10
      bl        -0x26B568
      mr.       r0, r3
      beq-      .loc_0x88
      bl        0x1A4D1C
      mr        r0, r3

    .loc_0x88:
      stw       r0, 0x48(r30)
      mr        r4, r31
      lwz       r3, 0x48(r30)
      lwz       r5, 0x1C(r30)
      bl        0x1A4BF0
      lwz       r4, -0x7B44(r13)
      addi      r3, r1, 0x8
      li        r31, 0
      bl        0x1BD198
      lwz       r3, -0x63D8(r13)
      addi      r4, r1, 0x8
      bl        0x1BD354
      cmplwi    r3, 0
      beq-      .loc_0xC4
      lwz       r31, 0x30(r3)

    .loc_0xC4:
      cmplwi    r31, 0
      bne-      .loc_0xE8
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7C4C
      li        r4, 0x76
      subi      r5, r5, 0x7C38
      crclr     6, 0x6
      bl        -0x264E3C

    .loc_0xE8:
      li        r3, 0x14
      bl        -0x26B5E0
      mr.       r0, r3
      beq-      .loc_0x100
      bl        0x1A4DB0
      mr        r0, r3

    .loc_0x100:
      stw       r0, 0x4C(r30)
      mr        r4, r31
      lwz       r3, 0x4C(r30)
      lwz       r5, 0x1C(r30)
      bl        0x1A4B78
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      lwz       r30, 0x68(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8028F4C4
 * Size:	00007C
 */
void Game::FireChappy::Mgr::createModel(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x14
      bl        -0x26B63C
      mr.       r31, r3
      beq-      .loc_0x3C
      lwz       r4, 0x1C(r30)
      lis       r5, 0x4
      lbz       r6, 0x24(r30)
      bl        0x1AECE0
      mr        r31, r3

    .loc_0x3C:
      cmplwi    r31, 0
      bne-      .loc_0x60
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7C4C
      li        r4, 0x90
      subi      r5, r5, 0x7C38
      crclr     6, 0x6
      bl        -0x264EE0

    .loc_0x60:
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
 * Address:	8028F540
 * Size:	0000B0
 */
void Game::FireChappy::Mgr::__dt(void)
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
      subi      r3, r3, 0x52E8
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
      bl        0x181FC8

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x26B51C

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
 * Address:	8028F5F0
 * Size:	000008
 */
void Game::FireChappy::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x21
      blr
    */
}

/*
 * --INFO--
 * Address:	8028F5F8
 * Size:	00002C
 */
void Game::FireChappy::Mgr::doLoadBmd((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x124
      mr        r3, r4
      stw       r0, 0x14(r1)
      addi      r4, r5, 0x30
      bl        -0x21FD7C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8028F624
 * Size:	000008
 */
void @4 @Game::FireChappy::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xE8
    */
}
