

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
 * Address:	8021AC20
 * Size:	0000F8
 */
void Game::SingleGame::CaveResultState::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      li        r5, 0
      stw       r0, 0x24(r1)
      addi      r0, r4, 0x1318
      lis       r4, 0x804B
      stw       r31, 0x1C(r1)
      mr        r31, r3
      addi      r4, r4, 0x12D0
      stw       r0, 0x0(r3)
      li        r0, 0x8
      lis       r3, 0x804C
      stw       r0, 0x4(r31)
      addi      r0, r3, 0x718
      addi      r3, r31, 0x20
      stw       r5, 0x8(r31)
      stw       r4, 0x0(r31)
      stw       r0, 0x0(r31)
      bl        0xCD9C
      addi      r3, r31, 0x80
      bl        0x209BA4
      li        r3, 0xB0
      bl        -0x1F6DD8
      mr.       r0, r3
      beq-      .loc_0x74
      li        r4, 0
      bl        0x20A1C8
      mr        r0, r3

    .loc_0x74:
      stw       r0, 0x1C(r31)
      li        r3, 0x14
      bl        -0x1F6DF8
      cmplwi    r3, 0
      beq-      .loc_0xD0
      lis       r4, 0x804C
      lis       r5, 0x804B
      addi      r8, r4, 0x70C
      lis       r4, 0x804C
      lwz       r7, 0x0(r8)
      addi      r5, r5, 0xF00
      lwz       r6, 0x4(r8)
      addi      r0, r4, 0x760
      lwz       r4, 0x8(r8)
      stw       r7, 0x8(r1)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)
      stw       r31, 0x4(r3)
      stw       r7, 0x8(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0xC(r1)
      stw       r4, 0x10(r1)
      stw       r4, 0x10(r3)

    .loc_0xD0:
      stw       r3, 0x7C(r31)
      li        r0, 0
      mr        r3, r31
      stw       r0, 0xF4(r31)
      stw       r0, 0xF0(r31)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AD18
 * Size:	000124
 */
void Game::SingleGame::CaveResultState::init((Game::SingleGameSection*,
                                              Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x8048
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      addi      r31, r7, 0x25B0
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r6, -0x6B70(r13)
      stw       r0, 0xEC(r6)
      lwz       r3, -0x6C18(r13)
      lwz       r4, -0x6E20(r13)
      bl        -0x64DA8
      lwz       r4, -0x6CF8(r13)
      cmplwi    r4, 0
      beq-      .loc_0x58
      lwz       r4, 0x0(r4)

    .loc_0x58:
      lwz       r3, -0x6C18(r13)
      bl        -0x64DC0
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x20
      li        r4, 0x1
      li        r6, 0x3
      bl        -0x65DF4
      lwz       r3, -0x6560(r13)
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6560(r13)
      lwz       r4, 0x1C(r28)
      bl        0x1E12CC
      cmplwi    r30, 0
      stw       r29, 0xEC(r28)
      bne-      .loc_0xB8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x44
      li        r4, 0x11C
      crclr     6, 0x6
      bl        -0x1F078C

    .loc_0xB8:
      lhz       r4, 0x0(r30)
      li        r0, 0
      mr        r3, r29
      sth       r4, 0x10(r28)
      stw       r0, 0x70(r28)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      lwz       r5, -0x6B70(r13)
      mr        r3, r28
      mr        r4, r29
      li        r6, 0x1
      lwz       r5, 0xB8(r5)
      bl        -0xC8880
      li        r0, 0
      sth       r0, 0x12(r28)
      stw       r0, 0x74(r28)
      bl        0x24C620
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
 * Size:	00007C
 */
void Game::SingleGame::CaveResultState::initNext((Game::SingleGameSection*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021AE3C
 * Size:	000240
 */
void Game::SingleGame::CaveResultState::loadResource(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      li        r6, 0
      stw       r0, 0x64(r1)
      li        r0, -0x1
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      lis       r3, 0x8048
      stw       r29, 0x54(r1)
      addi      r31, r3, 0x25B0
      li        r3, 0x40
      stw       r28, 0x50(r1)
      stw       r6, 0x10(r1)
      lwz       r5, -0x6AE0(r13)
      stw       r6, 0xC(r1)
      lwz       r4, -0x6AD8(r13)
      stw       r6, 0x8(r1)
      stb       r0, 0x14(r1)
      lwz       r6, 0xF0(r30)
      stw       r6, 0x10(r1)
      lwz       r0, 0x8(r5)
      stw       r0, 0x8(r1)
      lwz       r0, 0x8(r4)
      stw       r0, 0xC(r1)
      stw       r6, 0x74(r30)
      bl        -0x1F7000
      mr.       r0, r3
      beq-      .loc_0x7C
      bl        0xC568
      mr        r0, r3

    .loc_0x7C:
      stw       r0, 0x70(r30)
      addi      r4, r1, 0x8
      lwz       r3, 0x70(r30)
      bl        0xC604
      li        r3, 0x40
      bl        -0x1F7028
      mr.       r29, r3
      beq-      .loc_0xC0
      bl        0x20834C
      lhz       r28, 0x6(r3)
      bl        0x208344
      lhz       r4, 0x4(r3)
      mr        r3, r29
      mr        r5, r28
      li        r6, 0x4
      bl        -0x1E7FD8
      mr        r29, r3

    .loc_0xC0:
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x32(r29)
      stb       r0, 0x33(r29)
      lwz       r4, 0xEC(r30)
      stw       r29, 0x168(r4)
      bl        0x5D4
      addi      r3, r1, 0x18
      bl        0x11A594
      lwz       r0, -0x6780(r13)
      li        r4, 0x9
      li        r3, 0
      stb       r4, 0x1E(r1)
      cmplwi    r0, 0
      stb       r3, 0x1F(r1)
      bne-      .loc_0x114
      addi      r3, r31, 0x50
      addi      r5, r31, 0x44
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1F090C

    .loc_0x114:
      lwz       r3, -0x6780(r13)
      addi      r4, r1, 0x18
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x14C
      addi      r3, r31, 0x50
      addi      r5, r31, 0x44
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1F0944

    .loc_0x14C:
      lwz       r28, -0x6780(r13)
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x170
      addi      r3, r31, 0x5C
      addi      r5, r31, 0x44
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1F0968

    .loc_0x170:
      lwz       r3, 0x4(r28)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1A8
      addi      r3, r31, 0x50
      addi      r5, r31, 0x44
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1F09A0

    .loc_0x1A8:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x1C8
      addi      r3, r31, 0x50
      addi      r5, r31, 0x44
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x1F09C0

    .loc_0x1C8:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x1E8
      addi      r3, r31, 0x5C
      addi      r5, r31, 0x44
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x1F09E0

    .loc_0x1E8:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x20C
      addi      r3, r31, 0x5C
      addi      r5, r31, 0x68
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x1F0A04

    .loc_0x20C:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      lwz       r28, 0x50(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void Game::SingleGame::CaveResultState::open2D((Game::SingleGameSection*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021B07C
 * Size:	0002E8
 */
void Game::SingleGame::CaveResultState::exec((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stmw      r25, 0x64(r1)
      mr        r29, r3
      lis       r3, 0x8048
      mr        r30, r4
      addi      r31, r3, 0x25B0
      lhz       r0, 0x12(r29)
      cmpwi     r0, 0x2
      beq-      .loc_0x1D0
      bge-      .loc_0x40
      cmpwi     r0, 0
      beq-      .loc_0x50
      bge-      .loc_0xA0
      b         .loc_0x2C4

    .loc_0x40:
      cmpwi     r0, 0x4
      beq-      .loc_0x25C
      bge-      .loc_0x2C4
      b         .loc_0x200

    .loc_0x50:
      mr        r3, r30
      bl        -0xCB32C
      lwz       r0, -0x77D4(r13)
      stw       r0, 0xF4(r29)
      lwz       r26, 0xF4(r29)
      mr        r3, r26
      bl        -0x1F7930
      mr        r4, r26
      li        r5, 0x1
      bl        -0x1FB228
      stw       r3, 0xF0(r29)
      lwz       r3, 0xF0(r29)
      bl        -0x1F7B58
      li        r0, 0x1
      addi      r4, r29, 0x80
      sth       r0, 0x12(r29)
      lwz       r3, -0x6514(r13)
      lwz       r5, 0x7C(r29)
      bl        0x207E24
      b         .loc_0x2D4

    .loc_0xA0:
      lwz       r0, 0x98(r29)
      cmpwi     r0, 0x2
      bne-      .loc_0x2D4
      lfs       f0, -0x4318(r2)
      li        r0, 0x2
      stfs      f0, 0x18(r29)
      sth       r0, 0x12(r29)
      lwz       r0, 0xD4(r30)
      stw       r0, 0x18(r30)
      lwz       r3, 0xD4(r30)
      lfs       f1, 0x18(r29)
      bl        0x210C20
      lwz       r3, -0x6B70(r13)
      bl        -0x33CDC
      lwz       r5, -0x6B70(r13)
      li        r4, 0x2
      li        r0, 0
      mr        r3, r30
      stb       r4, 0x19(r5)
      stw       r0, 0x1C(r5)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      mr.       r28, r3
      bne-      .loc_0x11C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x44
      li        r4, 0x17D
      crclr     6, 0x6
      bl        -0x1F0B54

    .loc_0x11C:
      lwz       r3, -0x6B70(r13)
      addi      r5, r30, 0x230
      lwz       r4, 0x48(r28)
      bl        -0x3278C
      mr        r27, r3
      lwz       r3, -0x6B70(r13)
      lwz       r4, 0x48(r28)
      addi      r5, r30, 0x230
      bl        -0x326E8
      lbz       r0, 0xF8(r29)
      mr        r28, r3
      li        r30, 0
      cmplwi    r0, 0
      beq-      .loc_0x160
      cmpw      r27, r28
      blt-      .loc_0x160
      li        r30, 0x1

    .loc_0x160:
      lwz       r25, -0x6B70(r13)
      li        r3, 0x7
      lbz       r0, 0x2F(r25)
      rlwinm    r26,r0,0,31,31
      bl        0x15B78
      stw       r30, 0x8(r1)
      mr        r5, r3
      mr        r6, r27
      mr        r7, r28
      lwz       r8, 0xE8(r25)
      mr        r9, r26
      lwz       r10, 0xF0(r29)
      addi      r3, r1, 0x20
      addi      r4, r29, 0x20
      bl        0x1DD480
      bl        0x15754
      bl        0x14C18
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x20
      bl        0x1E30E8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2D4
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x8C
      li        r4, 0x198
      crclr     6, 0x6
      bl        -0x1F0C04
      b         .loc_0x2D4

    .loc_0x1D0:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x18(r29)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x4314(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x18(r29)
      lfs       f1, 0x18(r29)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2C4
      li        r0, 0x3
      sth       r0, 0x12(r29)
      b         .loc_0x2C4

    .loc_0x200:
      lwz       r3, -0x6560(r13)
      bl        0x1E3138
      cmpwi     r3, 0x1
      beq-      .loc_0x214
      b         .loc_0x2C4

    .loc_0x214:
      lhz       r5, 0x10(r29)
      li        r4, 0
      li        r0, 0x1
      mr        r3, r30
      stb       r4, 0x18(r1)
      stb       r0, 0x19(r1)
      stb       r4, 0x1A(r1)
      sth       r5, 0x1C(r1)
      bl        -0xC7348
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      addi      r6, r1, 0x18
      li        r5, 0x2
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2D4

    .loc_0x25C:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x18(r29)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x4314(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x18(r29)
      lfs       f1, 0x18(r29)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2C4
      lhz       r4, 0x10(r29)
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x10(r1)
      stb       r0, 0x11(r1)
      stb       r0, 0x12(r1)
      sth       r4, 0x14(r1)
      bl        -0xC73B0
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      addi      r6, r1, 0x10
      li        r5, 0x2
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2D4

    .loc_0x2C4:
      lwz       r3, -0x6560(r13)
      bl        0x1E0CE8
      lwz       r3, -0x65F8(r13)
      bl        0x19E264

    .loc_0x2D4:
      lmw       r25, 0x64(r1)
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	8021B364
 * Size:	0000C0
 */
void Game::SingleGame::CaveResultState::draw((Game::SingleGameSection*,
                                              Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      addi      r3, r31, 0xBC
      lwz       r12, 0xBC(r5)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lhz       r0, 0x12(r29)
      cmplwi    r0, 0x1
      ble-      .loc_0xA4
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65F8(r13)
      li        r4, 0x1
      li        r5, 0
      bl        0x19E20C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x118(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x190
      lwz       r12, 0x190(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65F8(r13)
      li        r4, 0
      li        r5, 0
      bl        0x19E1D0

    .loc_0xA4:
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
 * Address:	8021B424
 * Size:	0000C4
 */
void Game::SingleGame::CaveResultState::cleanup((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x40
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x2600
      li        r4, 0x1D3
      addi      r5, r5, 0x25F4
      crclr     6, 0x6
      bl        -0x1F0E20

    .loc_0x40:
      lwz       r31, -0x6780(r13)
      cmplwi    r31, 0
      bne-      .loc_0x68
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x2600
      li        r4, 0x1DC
      addi      r5, r5, 0x25F4
      crclr     6, 0x6
      bl        -0x1F0E48

    .loc_0x68:
      mr        r3, r31
      bl        0x126D50
      lwz       r3, -0x6B70(r13)
      lwz       r3, 0xB8(r3)
      bl        -0x35C5C
      li        r0, 0
      stw       r0, 0x14(r30)
      lwz       r3, 0xEC(r30)
      stw       r0, 0x168(r3)
      lwz       r3, 0xF0(r30)
      bl        -0x1F7D84
      lwz       r3, 0xF0(r30)
      bl        -0x1F7F08
      li        r0, 0
      stw       r0, 0xF0(r30)
      lwz       r3, 0xF4(r30)
      bl        -0x1F7F28
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
 * Address:	8021B4E8
 * Size:	00040C
 */
void Game::SingleGame::CaveResultState::createResultNodes(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      li        r0, 0
      stmw      r20, 0x10(r1)
      mr        r31, r3
      stb       r0, 0xF8(r3)
      lwz       r3, -0x6514(r13)
      lwz       r4, 0x74(r31)
      bl        0x207F3C
      lwz       r3, -0x6B70(r13)
      lwz       r3, 0xB8(r3)
      bl        -0x360A0
      lwz       r4, 0xEC(r31)
      mr        r30, r3
      lbz       r0, 0x274(r4)
      cmplwi    r0, 0
      beq-      .loc_0xB0
      lwz       r3, -0x6B70(r13)
      li        r23, 0
      lwz       r20, -0x6B00(r13)
      li        r22, 0
      lwz       r3, 0xB8(r3)
      addi      r21, r3, 0x14
      b         .loc_0xA4

    .loc_0x64:
      mr        r3, r21
      mr        r4, r23
      bl        -0x36154
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      mr        r3, r20
      mr        r4, r23
      bl        -0xAF7E4
      cmplwi    r3, 0
      beq-      .loc_0xA0
      mr        r3, r21
      mr        r4, r23
      bl        -0x36180
      stb       r22, 0x0(r3)

    .loc_0xA0:
      addi      r23, r23, 0x1

    .loc_0xA4:
      lhz       r0, 0x0(r21)
      cmpw      r23, r0
      blt+      .loc_0x64

    .loc_0xB0:
      lwz       r4, -0x6B70(r13)
      lwz       r3, 0xB4(r4)
      lwz       r4, 0xB8(r4)
      bl        -0x35EAC
      lwz       r3, -0x6B70(r13)
      lwz       r3, 0xB8(r3)
      bl        -0x35D70
      lwz       r29, -0x6AD8(r13)
      addi      r28, r30, 0xC
      li        r27, 0
      b         .loc_0x1D8

    .loc_0xDC:
      mr        r3, r28
      mr        r4, r27
      bl        -0x361CC
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      bne-      .loc_0x110
      lwz       r3, 0xEC(r31)
      mr        r4, r27
      addi      r3, r3, 0x26C
      bl        -0x361E8
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1D4

    .loc_0x110:
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0xF8(r31)
      mr        r4, r27
      bl        -0xAF880
      mr        r22, r3
      lhz       r3, 0x254(r3)
      subi      r3, r3, 0x1
      bl        0xCBEC
      bl        0xC488
      mr        r0, r3
      mr        r25, r4
      li        r3, 0x50
      mr        r26, r0
      bl        -0x1F778C
      mr.       r21, r3
      beq-      .loc_0x15C
      bl        0xC3CC
      mr        r21, r3

    .loc_0x15C:
      lwz       r3, 0xEC(r31)
      mr        r4, r27
      lwz       r20, 0x170(r22)
      addi      r3, r3, 0x26C
      bl        -0x36254
      lbz       r24, 0x0(r3)
      mr        r3, r28
      mr        r4, r27
      bl        -0x36264
      lbz       r0, 0x0(r3)
      mr        r3, r28
      mr        r4, r27
      mullw     r23, r20, r0
      bl        -0x36278
      lbz       r22, 0x0(r3)
      mr        r4, r27
      lwz       r3, 0x70(r31)
      bl        0xC25C
      stw       r24, 0x8(r1)
      mr        r7, r3
      mr        r3, r21
      mr        r6, r25
      mr        r5, r26
      mr        r8, r22
      mr        r9, r23
      mr        r10, r20
      bl        0xC3D4
      mr        r4, r21
      addi      r3, r31, 0x20
      bl        0xC4C0

    .loc_0x1D4:
      addi      r27, r27, 0x1

    .loc_0x1D8:
      lhz       r0, 0x0(r28)
      cmpw      r27, r0
      blt+      .loc_0xDC
      lwz       r29, -0x6AE0(r13)
      addi      r25, r30, 0x4
      li        r26, 0
      b         .loc_0x2F0

    .loc_0x1F4:
      mr        r3, r25
      mr        r4, r26
      bl        -0x362E4
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      bne-      .loc_0x228
      lwz       r3, 0xEC(r31)
      mr        r4, r26
      addi      r3, r3, 0x264
      bl        -0x36300
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2EC

    .loc_0x228:
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0xF8(r31)
      mr        r4, r26
      bl        -0xAF998
      mr        r22, r3
      lhz       r3, 0x254(r3)
      subi      r3, r3, 0x1
      bl        0xCAD4
      bl        0xC370
      mr        r0, r3
      mr        r28, r4
      li        r3, 0x50
      mr        r27, r0
      bl        -0x1F78A4
      mr.       r21, r3
      beq-      .loc_0x274
      bl        0xC2B4
      mr        r21, r3

    .loc_0x274:
      lwz       r3, 0xEC(r31)
      mr        r4, r26
      lwz       r20, 0x170(r22)
      addi      r3, r3, 0x264
      bl        -0x3636C
      lbz       r22, 0x0(r3)
      mr        r3, r25
      mr        r4, r26
      bl        -0x3637C
      lbz       r0, 0x0(r3)
      mr        r3, r25
      mr        r4, r26
      mullw     r23, r20, r0
      bl        -0x36390
      lbz       r24, 0x0(r3)
      mr        r4, r26
      lwz       r3, 0x70(r31)
      bl        0xC120
      stw       r22, 0x8(r1)
      mr        r7, r3
      mr        r3, r21
      mr        r6, r28
      mr        r5, r27
      mr        r8, r24
      mr        r9, r23
      mr        r10, r20
      bl        0xC2BC
      mr        r4, r21
      addi      r3, r31, 0x20
      bl        0xC3A8

    .loc_0x2EC:
      addi      r26, r26, 0x1

    .loc_0x2F0:
      lhz       r0, 0x0(r25)
      cmpw      r26, r0
      blt+      .loc_0x1F4
      lwz       r20, -0x6B00(r13)
      addi      r22, r30, 0x14
      li        r25, 0
      li        r26, 0
      li        r23, 0
      b         .loc_0x370

    .loc_0x314:
      mr        r3, r22
      mr        r4, r23
      bl        -0x36404
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x36C
      mr        r3, r20
      mr        r4, r23
      bl        -0xAFA94
      mr        r27, r3
      mr        r3, r22
      mr        r4, r23
      bl        -0x3642C
      lbz       r0, 0x0(r3)
      mr        r3, r22
      lwz       r21, 0x170(r27)
      mr        r4, r23
      add       r26, r26, r0
      bl        -0x36444
      lbz       r0, 0x0(r3)
      mullw     r0, r0, r21
      add       r25, r25, r0

    .loc_0x36C:
      addi      r23, r23, 0x1

    .loc_0x370:
      lhz       r0, 0x0(r22)
      cmpw      r23, r0
      blt+      .loc_0x314
      cmpwi     r26, 0
      ble-      .loc_0x3E8
      li        r3, 0x50
      bl        -0x1F79CC
      mr.       r21, r3
      beq-      .loc_0x39C
      bl        0xC18C
      mr        r21, r3

    .loc_0x39C:
      lwz       r4, 0xEC(r31)
      lwz       r3, 0x70(r31)
      lbz       r4, 0x274(r4)
      neg       r0, r4
      or        r0, r0, r4
      rlwinm    r22,r0,1,31,31
      bl        0xC06C
      stw       r22, 0x8(r1)
      mr        r7, r3
      mr        r3, r21
      mr        r8, r26
      mr        r9, r25
      li        r6, 0
      li        r5, 0
      li        r10, -0x1
      bl        0xC1C0
      mr        r4, r21
      addi      r3, r31, 0x20
      bl        0xC2AC

    .loc_0x3E8:
      lwz       r3, -0x6514(r13)
      bl        0x207BE4
      lwz       r3, 0xEC(r31)
      bl        -0xC58F0
      lmw       r20, 0x10(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8021B8F4
 * Size:	000030
 */
void Delegate<Game::SingleGame::CaveResultState>::invoke()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      addi      r12, r4, 0x8
      lwz       r3, 0x4(r3)
      bl        -0x159DE8
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8021B924
 * Size:	000028
 */
void __sinit_singleGS_CaveResult_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x6A78(r13)
      stfsu     f0, 0x700(r3)
      stfs      f0, -0x6A74(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
