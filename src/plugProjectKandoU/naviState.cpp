

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
 * Address:	8017D44C
 * Size:	000004
 */
void Game::NaviState::draw2d((J2DGrafContext&, int&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::NaviState::getBackupStateID(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void Game::NaviState::playBiku((Game::Navi*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Game::NaviState::playChangeVoice((Game::Navi*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void Game::NaviState::playPikon((Game::Navi*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::NaviFSM::clearBackupState(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017D450
 * Size:	000084
 */
void Game::NaviFSM::transit((Game::Navi*, int, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r6
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      bl        0xBE0C
      cmpwi     r3, 0
      beq-      .loc_0x40
      cmpwi     r3, 0x1
      bne-      .loc_0x50

    .loc_0x40:
      lwz       r0, 0x1C(r28)
      cmpw      r0, r3
      beq-      .loc_0x50
      stw       r3, 0x1C(r28)

    .loc_0x50:
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      mr        r6, r31
      bl        -0x35F30
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
 * Address:	8017D4D4
 * Size:	000820
 */
void Game::NaviFSM::init((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1B
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x1C(r3)
      bl        0xBCD0
      li        r3, 0x30
      bl        -0x159658
      mr.       r4, r3
      beq-      .loc_0x64
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r6, 0
      addi      r5, r5, 0x3784
      addi      r0, r3, 0x3620
      stw       r6, 0x4(r4)
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x64:
      mr        r3, r31
      bl        0xBD68
      li        r3, 0x20
      bl        -0x1596A0
      mr.       r4, r3
      beq-      .loc_0xB0
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x1
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3588
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0xB0:
      mr        r3, r31
      bl        0xBD1C
      li        r3, 0x2C
      bl        -0x1596EC
      mr.       r4, r3
      beq-      .loc_0xD0
      bl        0x384C
      mr        r4, r3

    .loc_0xD0:
      mr        r3, r31
      bl        0xBCFC
      li        r3, 0x18
      bl        -0x15970C
      mr.       r4, r3
      beq-      .loc_0x11C
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x3
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x35D4
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x11C:
      mr        r3, r31
      bl        0xBCB0
      li        r3, 0x18
      bl        -0x159758
      mr.       r4, r3
      beq-      .loc_0x170
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x4
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x2FD4
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)
      stb       r6, 0x10(r4)
      stb       r6, 0x11(r4)

    .loc_0x170:
      mr        r3, r31
      bl        0xBC5C
      li        r3, 0x28
      bl        -0x1597AC
      mr.       r4, r3
      beq-      .loc_0x1E8
      addi      r7, r4, 0x20
      lis       r3, 0x804B
      stw       r7, 0x10(r4)
      subi      r0, r3, 0x5994
      lis       r3, 0x804B
      lis       r5, 0x804B
      stw       r0, 0x20(r4)
      addi      r6, r3, 0x374C
      lis       r3, 0x804B
      li        r0, 0x5
      stw       r6, 0x0(r4)
      addi      r3, r3, 0x2F04
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x50
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r3, 0x0(r4)
      lwz       r3, 0x10(r4)
      stw       r0, 0x0(r3)
      lwz       r3, 0x10(r4)
      sub       r0, r7, r3
      stw       r0, 0x4(r3)

    .loc_0x1E8:
      mr        r3, r31
      bl        0xBBE4
      li        r3, 0x44
      bl        -0x159824
      mr.       r4, r3
      beq-      .loc_0x20C
      li        r4, 0x1
      bl        0x8488
      mr        r4, r3

    .loc_0x20C:
      mr        r3, r31
      bl        0xBBC0
      li        r3, 0x18
      bl        -0x159848
      mr.       r4, r3
      beq-      .loc_0x258
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x7
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x33C0
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x258:
      mr        r3, r31
      bl        0xBB74
      li        r3, 0x1C
      bl        -0x159894
      mr.       r4, r3
      beq-      .loc_0x2A4
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x8
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3458
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x2A4:
      mr        r3, r31
      bl        0xBB28
      li        r3, 0x60
      bl        -0x1598E0
      mr.       r4, r3
      beq-      .loc_0x2F4
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x9
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x340C
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)
      stb       r6, 0x48(r4)

    .loc_0x2F4:
      mr        r3, r31
      bl        0xBAD8
      li        r3, 0x24
      bl        -0x159930
      mr.       r4, r3
      beq-      .loc_0x340
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0xA
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3194
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x340:
      mr        r3, r31
      bl        0xBA8C
      li        r3, 0x1C
      bl        -0x15997C
      mr.       r4, r3
      beq-      .loc_0x38C
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0xB
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x30D0
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x38C:
      mr        r3, r31
      bl        0xBA40
      li        r3, 0x28
      bl        -0x1599C8
      mr.       r4, r3
      beq-      .loc_0x3D8
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0xC
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x32C4
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x3D8:
      mr        r3, r31
      bl        0xB9F4
      li        r3, 0x10
      bl        -0x159A14
      mr.       r4, r3
      beq-      .loc_0x424
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0xD
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3084
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x424:
      mr        r3, r31
      bl        0xB9A8
      li        r3, 0x24
      bl        -0x159A60
      mr.       r4, r3
      beq-      .loc_0x470
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0xE
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x2DBC
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x470:
      mr        r3, r31
      bl        0xB95C
      li        r3, 0x18
      bl        -0x159AAC
      mr.       r4, r3
      beq-      .loc_0x4BC
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0xF
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x331C
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x4BC:
      mr        r3, r31
      bl        0xB910
      li        r3, 0x24
      bl        -0x159AF8
      mr.       r4, r3
      beq-      .loc_0x508
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x10
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3278
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x508:
      mr        r3, r31
      bl        0xB8C4
      li        r3, 0x18
      bl        -0x159B44
      mr.       r4, r3
      beq-      .loc_0x554
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x11
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x322C
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x554:
      mr        r3, r31
      bl        0xB878
      li        r3, 0x10
      bl        -0x159B90
      mr.       r4, r3
      beq-      .loc_0x5A0
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x12
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x31E0
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x5A0:
      mr        r3, r31
      bl        0xB82C
      li        r3, 0x10
      bl        -0x159BDC
      mr.       r4, r3
      beq-      .loc_0x5EC
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x13
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3038
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x5EC:
      mr        r3, r31
      bl        0xB7E0
      li        r3, 0x24
      bl        -0x159C28
      mr.       r4, r3
      beq-      .loc_0x638
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x14
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x36A8
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x638:
      mr        r3, r31
      bl        0xB794
      li        r3, 0x34
      bl        -0x159C74
      mr.       r4, r3
      beq-      .loc_0x684
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x15
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x2E6C
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x684:
      mr        r3, r31
      bl        0xB748
      li        r3, 0x18
      bl        -0x159CC0
      mr.       r4, r3
      beq-      .loc_0x6D0
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x16
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x2E20
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x6D0:
      mr        r3, r31
      bl        0xB6FC
      li        r3, 0x18
      bl        -0x159D0C
      mr.       r4, r3
      beq-      .loc_0x71C
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x17
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x2EB8
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x71C:
      mr        r3, r31
      bl        0xB6B0
      li        r3, 0x48
      bl        -0x159D58
      mr.       r4, r3
      beq-      .loc_0x76C
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x18
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x36F4
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)
      stw       r6, 0x10(r4)

    .loc_0x76C:
      mr        r3, r31
      bl        0xB660
      li        r3, 0x28
      bl        -0x159DA8
      mr.       r4, r3
      beq-      .loc_0x7B8
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x19
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x3368
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x7B8:
      mr        r3, r31
      bl        0xB614
      li        r3, 0x30
      bl        -0x159DF4
      mr.       r4, r3
      beq-      .loc_0x804
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x1A
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x34A4
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x804:
      mr        r3, r31
      bl        0xB5C8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8017DCF4
 * Size:	0000D8
 */
void Game::NaviCarryBombState::init((Game::Navi*, Game::StateArg*))
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
      lwz       r0, 0x0(r5)
      stw       r0, 0x10(r3)
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xB8

    .loc_0x4C:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x5C
      addi      r6, r6, 0x178

    .loc_0x5C:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x29
      li        r5, 0x29
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x40E20
      lwz       r3, 0x26C(r31)
      li        r4, 0x8A9
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r31
      bl        0x60
      lwz       r3, 0x10(r30)
      addi      r4, r30, 0x14
      bl        0x21D00

    .loc_0xB8:
      li        r0, 0
      stb       r0, 0x44(r30)
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
 * Address:	8017DDCC
 * Size:	000030
 */
void transit__Q24Game22FSMState<Game::Navi>
FPQ24Game4NaviiPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
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
 * Address:	8017DDFC
 * Size:	000148
 */
void Game::NaviCarryBombState::updateMatrix((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      stw       r30, 0x48(r1)
      mr        r30, r3
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r31
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      lfs       f0, -0x5780(r2)
      stfs      f1, 0x18(r1)
      fcmpo     cr0, f2, f0
      stfs      f0, 0x14(r1)
      stfs      f0, 0x1C(r1)
      bge-      .loc_0x7C
      fneg      f2, f2

    .loc_0x7C:
      lfs       f3, -0x5778(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5780(r2)
      addi      r4, r3, 0x71A0
      fmuls     f2, f2, f3
      lfs       f5, -0x577C(r2)
      fcmpo     cr0, f1, f0
      lfs       f4, 0x20(r1)
      fctiwz    f0, f2
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f6, f5, f0
      bge-      .loc_0xE0
      lfs       f0, -0x5774(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xF8

    .loc_0xE0:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xF8:
      fmuls     f3, f5, f0
      lfs       f0, 0x28(r1)
      lfs       f2, 0x24(r1)
      addi      r3, r30, 0x14
      lfs       f1, -0x5770(r2)
      fadds     f0, f0, f6
      fadds     f3, f4, f3
      addi      r4, r1, 0x20
      fadds     f1, f2, f1
      stfs      f0, 0x28(r1)
      addi      r5, r1, 0x14
      stfs      f3, 0x20(r1)
      stfs      f1, 0x24(r1)
      bl        0x2AA960
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8017DF44
 * Size:	00024C
 */
void Game::NaviCarryBombState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stw       r31, 0x8C(r1)
      mr        r31, r4
      stw       r30, 0x88(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x3A460
      mr        r4, r31
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      mr        r3, r31
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      stfs      f2, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5780(r2)
      fmr       f2, f1
      stfs      f1, 0x18(r1)
      fcmpo     cr0, f1, f0
      stfs      f0, 0x14(r1)
      stfs      f0, 0x1C(r1)
      bge-      .loc_0x88
      fneg      f2, f1

    .loc_0x88:
      lfs       f3, -0x5778(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5780(r2)
      addi      r4, r3, 0x71A0
      fmuls     f2, f2, f3
      lfs       f5, -0x577C(r2)
      fcmpo     cr0, f1, f0
      lfs       f4, 0x8(r1)
      fctiwz    f0, f2
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f6, f5, f0
      bge-      .loc_0xEC
      lfs       f0, -0x5774(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x104

    .loc_0xEC:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x104:
      fmuls     f3, f5, f0
      lfs       f0, 0x10(r1)
      lfs       f2, 0xC(r1)
      addi      r3, r30, 0x14
      lfs       f1, -0x5770(r2)
      fadds     f0, f0, f6
      fadds     f3, f4, f3
      addi      r4, r1, 0x8
      fadds     f1, f2, f1
      stfs      f0, 0x10(r1)
      addi      r5, r1, 0x14
      stfs      f3, 0x8(r1)
      stfs      f1, 0xC(r1)
      bl        0x2AA80C
      lwz       r0, 0x10(r30)
      cmplwi    r0, 0
      beq-      .loc_0x18C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5780(r2)
      lis       r3, 0x8051
      addi      r4, r3, 0x41E4
      stfs      f1, 0x30(r1)
      addi      r3, r1, 0x38
      addi      r5, r1, 0x2C
      stfs      f0, 0x2C(r1)
      stfs      f0, 0x34(r1)
      bl        0x2AA7C8
      lwz       r3, 0x10(r30)
      addi      r4, r1, 0x38
      bl        0x21A30

    .loc_0x18C:
      lbz       r0, 0x44(r30)
      cmplwi    r0, 0
      bne-      .loc_0x234
      lwz       r3, 0x10(r30)
      lwz       r0, 0xB8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1B0
      cmplwi    r3, 0
      bne-      .loc_0x1D4

    .loc_0x1B0:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x234

    .loc_0x1D4:
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0x200
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x200
      mr        r3, r31
      bl        -0x41074
      li        r0, 0x1
      stb       r0, 0x44(r30)
      b         .loc_0x234

    .loc_0x200:
      cmplwi    r3, 0
      beq-      .loc_0x234
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x234
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x234:
      lwz       r0, 0x94(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	8017E190
 * Size:	00017C
 */
void Game::NaviCarryBombState::onKeyEvent((Game::Navi*,
                                           SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      lwz       r0, 0x1C(r5)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      cmpwi     r0, 0x3E8
      stw       r30, 0x38(r1)
      mr        r30, r3
      beq-      .loc_0x14C
      bge-      .loc_0x164
      cmpwi     r0, 0x1
      beq-      .loc_0x38
      b         .loc_0x164

    .loc_0x38:
      lbz       r0, 0x44(r30)
      cmplwi    r0, 0
      beq-      .loc_0x164
      lwz       r0, 0x10(r30)
      cmplwi    r0, 0
      beq-      .loc_0x164
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x78
      fneg      f2, f2

    .loc_0x78:
      lfs       f3, -0x5778(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5780(r2)
      addi      r4, r3, 0x71A0
      fmuls     f2, f2, f3
      lfs       f4, -0x576C(r2)
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f2, f4, f0
      bge-      .loc_0xD8
      lfs       f0, -0x5774(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xF0

    .loc_0xD8:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xF0:
      fmuls     f1, f4, f0
      lfs       f0, -0x5768(r2)
      stfs      f2, 0x10(r1)
      li        r4, 0x806
      li        r5, 0
      stfs      f1, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x10(r30)
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x10(r30)
      bl        0x218D0
      li        r0, 0
      stw       r0, 0x10(r30)
      b         .loc_0x164

    .loc_0x14C:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x164:
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
 * Address:	8017E30C
 * Size:	00002C
 */
void Game::NaviCarryBombState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x10(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1C
      bl        0x21878

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8017E338
 * Size:	000058
 */
void Game::NaviStuckState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x5764(r2)
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r0, 0x20(r3)
      stfs      f0, 0x1C(r3)
      lwz       r5, 0x278(r4)
      cmplwi    r5, 0
      beq-      .loc_0x40
      lfs       f2, 0x4C(r5)
      lfs       f1, 0x48(r5)
      lfs       f0, -0x5780(r2)
      stfs      f1, 0x10(r3)
      stfs      f0, 0x14(r3)
      stfs      f2, 0x18(r3)

    .loc_0x40:
      mr        r3, r4
      bl        -0x38EF0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8017E390
 * Size:	0004BC
 */
void Game::NaviStuckState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      stw       r0, 0xB4(r1)
      stfd      f31, 0xA0(r1)
      psq_st    f31,0xA8(r1),0,0
      stfd      f30, 0x90(r1)
      psq_st    f30,0x98(r1),0,0
      stfd      f29, 0x80(r1)
      psq_st    f29,0x88(r1),0,0
      stfd      f28, 0x70(r1)
      psq_st    f28,0x78(r1),0,0
      stw       r31, 0x6C(r1)
      stw       r30, 0x68(r1)
      stw       r29, 0x64(r1)
      mr        r31, r4
      mr        r30, r3
      lwz       r0, 0x278(r4)
      cmplwi    r0, 0
      beq-      .loc_0x58
      lbz       r0, 0x259(r31)
      cmplwi    r0, 0
      bne-      .loc_0x7C

    .loc_0x58:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x480

    .loc_0x7C:
      mr        r3, r31
      bl        -0x3A90C
      lwz       r3, 0x278(r31)
      lfs       f1, -0x5780(r2)
      lfs       f31, 0x4C(r3)
      lfs       f30, 0x48(r3)
      fmuls     f2, f31, f31
      fmadds    f0, f30, f30, f1
      fadds     f2, f2, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xB8
      ble-      .loc_0xBC
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xBC

    .loc_0xB8:
      fmr       f2, f1

    .loc_0xBC:
      lfs       f0, -0x5760(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x440
      lfs       f1, -0x5780(r2)
      lfs       f0, 0x14(r30)
      lfs       f2, 0x10(r30)
      fmuls     f1, f1, f0
      lfs       f3, 0x18(r30)
      lfs       f0, -0x575C(r2)
      fmadds    f1, f30, f2, f1
      fmadds    f1, f31, f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x440
      lwz       r3, 0x20(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x20(r30)
      lwz       r0, 0x20(r30)
      cmpwi     r0, 0x9
      ble-      .loc_0x428
      mr        r4, r31
      addi      r3, r1, 0x2C
      bl        0x217BC
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x2C
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x154
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x3F4

    .loc_0x154:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x16C:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x3F4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1C0:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x16C
      b         .loc_0x3F4

    .loc_0x1E0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr.       r29, r3
      beq-      .loc_0x338
      bl        -0xB4FEC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x4C(r1)
      lfd       f3, -0x5730(r2)
      stw       r0, 0x48(r1)
      lfs       f1, -0x5758(r2)
      lfd       f2, 0x48(r1)
      lfs       f0, -0x5754(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x338
      bl        -0xB5020
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x4C(r1)
      lfd       f3, -0x5730(r2)
      stw       r0, 0x48(r1)
      lfs       f2, -0x5758(r2)
      lfd       f0, 0x48(r1)
      lfs       f1, -0x574C(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x5750(r2)
      lfs       f28, -0x5748(r2)
      fdivs     f2, f3, f2
      fmadds    f29, f1, f2, f0
      bl        -0xB5058
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x54(r1)
      lfd       f3, -0x5730(r2)
      stw       r0, 0x50(r1)
      lfs       f1, -0x5758(r2)
      lfd       f2, 0x50(r1)
      lfs       f0, -0x5744(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2F4
      fmr       f1, f30
      lis       r3, 0x8051
      fmr       f2, f31
      subi      r3, r3, 0x2E20
      bl        -0x149534
      fmr       f28, f1
      bl        -0xB50A4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x54(r1)
      lfd       f3, -0x5730(r2)
      stw       r0, 0x50(r1)
      lfs       f2, -0x5758(r2)
      lfd       f1, 0x50(r1)
      lfs       f0, -0x575C(r2)
      fsubs     f3, f1, f3
      lfs       f1, -0x5740(r2)
      fdivs     f2, f3, f2
      fsubs     f0, f2, f0
      fmadds    f1, f1, f0, f28
      bl        0x293554
      fmr       f28, f1

    .loc_0x2F4:
      lis       r3, 0x804B
      lfs       f0, -0x573C(r2)
      subi      r0, r3, 0x5D00
      lis       r3, 0x804B
      stw       r0, 0x18(r1)
      addi      r0, r3, 0x4E04
      mr        r3, r29
      addi      r4, r1, 0x18
      stw       r31, 0x1C(r1)
      stw       r0, 0x18(r1)
      stfs      f29, 0x20(r1)
      stfs      f0, 0x24(r1)
      stfs      f28, 0x28(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x338:
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x364
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x3F4

    .loc_0x364:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x3D8

    .loc_0x384:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x3F4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x3D8:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x384

    .loc_0x3F4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0x1E0
      li        r0, 0
      addi      r3, r1, 0x2C
      stw       r0, 0x20(r30)
      li        r4, -0x1
      bl        0x215B0

    .loc_0x428:
      stfs      f30, 0x10(r30)
      lfs       f1, -0x5780(r2)
      lfs       f0, -0x5738(r2)
      stfs      f1, 0x14(r30)
      stfs      f31, 0x18(r30)
      stfs      f0, 0x1C(r30)

    .loc_0x440:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x1C(r30)
      lfs       f0, 0x54(r3)
      lfs       f1, -0x5780(r2)
      fsubs     f0, f2, f0
      stfs      f0, 0x1C(r30)
      lfs       f0, 0x1C(r30)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x480
      stfs      f30, 0x10(r30)
      li        r0, 0
      lfs       f0, -0x575C(r2)
      stfs      f1, 0x14(r30)
      stfs      f31, 0x18(r30)
      stw       r0, 0x20(r30)
      stfs      f0, 0x1C(r30)

    .loc_0x480:
      psq_l     f31,0xA8(r1),0,0
      lfd       f31, 0xA0(r1)
      psq_l     f30,0x98(r1),0,0
      lfd       f30, 0x90(r1)
      psq_l     f29,0x88(r1),0,0
      lfd       f29, 0x80(r1)
      psq_l     f28,0x78(r1),0,0
      lfd       f28, 0x70(r1)
      lwz       r31, 0x6C(r1)
      lwz       r30, 0x68(r1)
      lwz       r0, 0xB4(r1)
      lwz       r29, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	8017E84C
 * Size:	000004
 */
void Game::NaviStuckState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8017E850
 * Size:	0000DC
 */
void Game::NaviWalkState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x78
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x78
      mr        r3, r31
      li        r4, 0x1E
      lwz       r12, 0x0(r31)
      li        r5, 0x1E
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x78:
      li        r0, 0
      lfs       f0, -0x5728(r2)
      stb       r0, 0x10(r30)
      mr        r4, r31
      addi      r3, r1, 0x8
      stfs      f0, 0x14(r30)
      stw       r0, 0x18(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      li        r0, 0
      stfs      f0, 0x1C(r30)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x20(r30)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x24(r30)
      stb       r0, 0x2C(r30)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8017E92C
 * Size:	000634
 */
void Game::NaviWalkState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      mr        r30, r4
      stw       r29, 0x24(r1)
      lbz       r3, 0x2C(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      subi      r0, r3, 0x1
      stb       r0, 0x2C(r31)

    .loc_0x34:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x618
      mr        r3, r30
      bl        -0x3AE7C
      mr        r3, r30
      bl        -0x3821C
      lwz       r0, 0x278(r30)
      cmplwi    r0, 0
      bne-      .loc_0xB4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xB4
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0
      bne-      .loc_0xA4
      li        r0, 0x1
      lfs       f0, -0x5724(r2)
      stb       r0, 0x10(r31)
      stfs      f0, 0x14(r31)

    .loc_0xA4:
      mr        r3, r31
      mr        r4, r30
      bl        0x72C
      b         .loc_0x16C

    .loc_0xB4:
      lwz       r0, 0x278(r30)
      cmplwi    r0, 0
      beq-      .loc_0x114
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x114
      lfs       f1, 0x308(r30)
      lfs       f0, -0x5720(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x114
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0
      bne-      .loc_0x104
      mr        r3, r31
      mr        r4, r30
      bl        0xCE8

    .loc_0x104:
      mr        r3, r31
      mr        r4, r30
      bl        0x6CC
      b         .loc_0x16C

    .loc_0x114:
      lwz       r0, 0x278(r30)
      cmplwi    r0, 0
      beq-      .loc_0x16C
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0
      beq-      .loc_0x16C
      lfs       f1, 0x308(r30)
      lfs       f0, -0x5720(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x16C
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x10(r31)
      li        r4, 0x1F
      li        r5, 0x1F
      li        r6, 0
      lwz       r12, 0x0(r30)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x16C:
      lwz       r0, 0x278(r30)
      cmplwi    r0, 0
      beq-      .loc_0x194
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1AC

    .loc_0x194:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x1AC:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x618
      lbz       r0, 0x259(r30)
      cmplwi    r0, 0
      beq-      .loc_0x1EC
      mr        r3, r31
      mr        r4, r30
      lwz       r12, 0x0(r31)
      li        r5, 0x14
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x1EC:
      mr        r3, r30
      bl        -0x3B3E4
      cmplwi    r3, 0
      beq-      .loc_0x240
      lwz       r4, 0x278(r30)
      lwz       r0, 0x1C(r4)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x240
      lhz       r0, 0x22E(r3)
      cmplwi    r0, 0x3
      beq-      .loc_0x240
      stw       r3, 0x10(r1)
      mr        r3, r31
      mr        r4, r30
      addi      r6, r1, 0x10
      lwz       r12, 0x0(r31)
      li        r5, 0xA
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x240:
      lwz       r3, 0x278(r30)
      lwz       r3, 0x1C(r3)
      rlwinm.   r0,r3,0,22,22
      beq-      .loc_0x274
      mr        r3, r31
      mr        r4, r30
      lwz       r12, 0x0(r31)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x274:
      rlwinm.   r0,r3,0,23,23
      beq-      .loc_0x2C4
      mr        r3, r30
      bl        -0x3E568
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x618
      mr        r3, r30
      bl        -0x3A06C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x618
      mr        r3, r31
      mr        r4, r30
      lwz       r12, 0x0(r31)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618
      b         .loc_0x618

    .loc_0x2C4:
      rlwinm.   r0,r3,0,28,28
      beq-      .loc_0x2F8
      li        r0, 0x1
      mr        r3, r31
      stw       r0, 0xC(r1)
      mr        r4, r30
      addi      r6, r1, 0xC
      li        r5, 0x7
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x2F8:
      rlwinm.   r0,r3,0,29,29
      beq-      .loc_0x32C
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x8(r1)
      mr        r4, r30
      addi      r6, r1, 0x8
      li        r5, 0x7
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x32C:
      rlwinm.   r0,r3,0,21,21
      beq-      .loc_0x358
      mr        r3, r30
      bl        -0x397D8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x350
      li        r0, 0x14
      stb       r0, 0x2B(r31)
      b         .loc_0x358

    .loc_0x350:
      li        r0, 0x1
      stb       r0, 0x2B(r31)

    .loc_0x358:
      lwz       r3, 0x278(r30)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,21,21
      beq-      .loc_0x3DC
      lbz       r3, 0x2B(r31)
      cmplwi    r3, 0
      beq-      .loc_0x3E4
      addi      r0, r3, 0x1
      stb       r0, 0x2B(r31)
      lbz       r0, 0x2B(r31)
      cmplwi    r0, 0x23
      ble-      .loc_0x3E4
      li        r0, 0
      li        r4, 0x9
      stb       r0, 0x2B(r31)
      lwz       r3, -0x6B70(r13)
      addi      r3, r3, 0x48
      bl        0x67308
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x3B8
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0
      beq-      .loc_0x3E4

    .loc_0x3B8:
      mr        r3, r31
      mr        r4, r30
      lwz       r12, 0x0(r31)
      li        r5, 0x17
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x3DC:
      li        r0, 0
      stb       r0, 0x2B(r31)

    .loc_0x3E4:
      lwz       r3, -0x6C18(r13)
      bl        0x362AC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x618
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x618
      lwz       r4, -0x6C18(r13)
      li        r3, 0
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x1
      beq-      .loc_0x420
      cmpwi     r0, 0x3
      bne-      .loc_0x424

    .loc_0x420:
      li        r3, 0x1

    .loc_0x424:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x618
      lwz       r3, 0x278(r30)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,20,20
      beq-      .loc_0x618
      lwz       r3, -0x6B70(r13)
      li        r4, 0x25
      bl        0x68670
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x618
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r30)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      bl        -0x3D958
      mr        r29, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x618
      cmpwi     r29, 0x8
      beq-      .loc_0x618
      cmpwi     r29, 0x9
      beq-      .loc_0x618
      cmpwi     r29, 0x2
      beq-      .loc_0x618
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      bl        -0x3157C
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x4D8
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188D
      li        r5, 0
      bl        0x1B9834
      b         .loc_0x50C

    .loc_0x4D8:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x4FC
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188F
      li        r5, 0
      bl        0x1B9810
      b         .loc_0x50C

    .loc_0x4FC:
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188E
      li        r5, 0
      bl        0x1B97FC

    .loc_0x50C:
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x538
      lwz       r3, 0x26C(r31)
      li        r4, 0x8A6
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x584

    .loc_0x538:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x568
      lwz       r3, 0x26C(r31)
      li        r4, 0x8A8
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x584

    .loc_0x568:
      lwz       r3, 0x26C(r31)
      li        r4, 0x8A7
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x584:
      mr        r3, r31
      bl        -0x3DA70
      cmpwi     r3, 0x1
      bne-      .loc_0x5D4
      lis       r3, 0x804B
      li        r0, 0
      subi      r4, r3, 0x5D00
      lis       r3, 0x804B
      stw       r4, 0x14(r1)
      addi      r5, r3, 0x49BC
      mr        r3, r30
      addi      r4, r1, 0x14
      stw       r31, 0x18(r1)
      stw       r5, 0x14(r1)
      stb       r0, 0x1C(r1)
      stb       r0, 0x1D(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x5D4:
      mr        r3, r31
      bl        -0x3DAC0
      lwz       r3, 0x274(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x618
      lwz       r3, 0x270(r31)
      mr        r4, r31
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x618:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8017EF60
 * Size:	000008
 */
void Game::NaviState::needYChangeMotion(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8017EF68
 * Size:	000004
 */
void Game::NaviWalkState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8017EF6C
 * Size:	000198
 */
void Game::NaviWalkState::collisionCallback((Game::Navi*, Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r6, -0x64AC(r13)
      lwz       r31, 0x0(r5)
      lwz       r0, 0x18(r6)
      cmpwi     r0, 0
      bne-      .loc_0x8C
      lhz       r0, 0x128(r31)
      cmplwi    r0, 0x406
      bne-      .loc_0x8C
      lbz       r0, 0x1E0(r31)
      cmplwi    r0, 0
      beq-      .loc_0x8C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x228(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8C
      stw       r31, 0xC(r1)
      mr        r4, r30
      addi      r6, r1, 0xC
      li        r5, 0xB
      lwz       r3, 0x270(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x8C:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x17C
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x17C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x17C
      lwz       r0, 0xB8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x17C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x17C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x24
      bne-      .loc_0x17C
      lwz       r3, 0x278(r30)
      cmplwi    r3, 0
      beq-      .loc_0x17C
      lfs       f0, 0x48(r3)
      lfs       f1, 0x4C(r3)
      fneg      f2, f0
      lfs       f0, -0x575C(r2)
      fmuls     f1, f1, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x17C
      lbz       r3, 0x2C(r29)
      cmplwi    r3, 0x64
      bge-      .loc_0x14C
      addi      r0, r3, 0x3
      stb       r0, 0x2C(r29)

    .loc_0x14C:
      lbz       r0, 0x2C(r29)
      cmplwi    r0, 0x3C
      ble-      .loc_0x17C
      stw       r31, 0x8(r1)
      mr        r3, r29
      mr        r4, r30
      addi      r6, r1, 0x8
      lwz       r12, 0x0(r29)
      li        r5, 0x18
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x17C:
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
 * Address:	8017F104
 * Size:	000094
 */
void Game::NaviWalkState::execAI((Game::Navi*))
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
      lbz       r0, 0x10(r3)
      cmpwi     r0, 0x3
      beq-      .loc_0x70
      bge-      .loc_0x3C
      cmpwi     r0, 0x1
      beq-      .loc_0x48
      bge-      .loc_0x5C
      b         .loc_0x7C

    .loc_0x3C:
      cmpwi     r0, 0x5
      bge-      .loc_0x7C
      b         .loc_0x78

    .loc_0x48:
      bl        0x404
      mr        r3, r30
      mr        r4, r31
      bl        .loc_0x94
      b         .loc_0x7C

    .loc_0x5C:
      bl        0x820
      mr        r3, r30
      mr        r4, r31
      bl        .loc_0x94
      b         .loc_0x7C

    .loc_0x70:
      bl        0xB58
      b         .loc_0x7C

    .loc_0x78:
      bl        0x884

    .loc_0x7C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x94:
    */
}

/*
 * --INFO--
 * Address:	8017F198
 * Size:	00023C
 */
void Game::NaviWalkState::checkAI((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stw       r31, 0x9C(r1)
      stw       r30, 0x98(r1)
      stw       r29, 0x94(r1)
      mr        r29, r4
      stw       r28, 0x90(r1)
      mr        r28, r3
      lwz       r0, 0x278(r4)
      cmplwi    r0, 0
      beq-      .loc_0x38
      li        r3, 0
      b         .loc_0x21C

    .loc_0x38:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x8(r1)
      addi      r3, r1, 0x24
      lfs       f2, 0xC(r1)
      addi      r4, r1, 0x14
      lfs       f1, 0x10(r1)
      li        r31, 0
      lfs       f0, -0x574C(r2)
      stfs      f3, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      bl        0xAF190
      addi      r3, r1, 0x44
      addi      r4, r1, 0x24
      bl        0xAF1C4
      addi      r3, r1, 0x44
      bl        0xAF238
      b         .loc_0x13C

    .loc_0x94:
      addi      r3, r1, 0x44
      bl        0xAF314
      lwz       r12, 0x0(r3)
      mr        r30, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x104
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x104
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x104
      lbz       r0, 0x1F0(r30)
      cmplwi    r0, 0
      beq-      .loc_0x104
      mr        r31, r30
      b         .loc_0x14C

    .loc_0x104:
      cmplwi    r31, 0
      bne-      .loc_0x134
      cmplw     r30, r29
      beq-      .loc_0x134
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      mr        r31, r30

    .loc_0x134:
      addi      r3, r1, 0x44
      bl        0xAF230

    .loc_0x13C:
      addi      r3, r1, 0x44
      bl        0xAF25C
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x94

    .loc_0x14C:
      cmplwi    r31, 0
      beq-      .loc_0x1E8
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E8
      stw       r31, 0x18(r28)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x1
      subi      r4, r4, 0x1
      bl        -0x5C0B0
      lbz       r0, 0x30(r3)
      extsb     r0, r0
      cmpwi     r0, 0x1
      beq-      .loc_0x1C4
      bge-      .loc_0x1D4
      cmpwi     r0, 0
      bge-      .loc_0x1B4
      b         .loc_0x1D4

    .loc_0x1B4:
      mr        r3, r28
      mr        r4, r29
      bl        0x1B4
      b         .loc_0x1E0

    .loc_0x1C4:
      mr        r3, r28
      mr        r4, r29
      bl        0x8DC
      b         .loc_0x1E0

    .loc_0x1D4:
      mr        r3, r28
      mr        r4, r29
      bl        0x8CC

    .loc_0x1E0:
      li        r3, 0x1
      b         .loc_0x21C

    .loc_0x1E8:
      cmplwi    r31, 0
      beq-      .loc_0x218
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x218
      stw       r31, 0x18(r28)
      li        r3, 0x1
      b         .loc_0x21C

    .loc_0x218:
      li        r3, 0

    .loc_0x21C:
      lwz       r0, 0xA4(r1)
      lwz       r31, 0x9C(r1)
      lwz       r30, 0x98(r1)
      lwz       r29, 0x94(r1)
      lwz       r28, 0x90(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr
    */
}

/*
 * --INFO--
 * Address:	8017F3D4
 * Size:	000100
 */
void Game::NaviWalkState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      stw       r30, 0x8(r1)
      mr        r30, r4
      lbz       r6, 0x10(r3)
      cmplwi    r6, 0
      beq-      .loc_0x40
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x40
      cmplwi    r6, 0x2
      bne-      .loc_0x40
      bl        0xF8

    .loc_0x40:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lbz       r0, 0x4A(r3)
      cmplwi    r0, 0
      bne-      .loc_0xE8

    .loc_0x58:
      lha       r0, 0x20(r31)
      cmpwi     r0, 0x32
      bne-      .loc_0xE8
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0xC8
      bne-      .loc_0xE8
      lhz       r0, 0x2DC(r30)
      cmplwi    r0, 0
      bne-      .loc_0x9C
      lwz       r3, 0x26C(r30)
      li        r4, 0x877
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE8

    .loc_0x9C:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xCC
      lwz       r3, 0x26C(r30)
      li        r4, 0x879
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE8

    .loc_0xCC:
      lwz       r3, 0x26C(r30)
      li        r4, 0x878
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0xE8:
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
 * Address:	8017F4D4
 * Size:	000034
 */
void wallCallback__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0x3
      bnelr-
      lbz       r0, 0x29(r3)
      cmplwi    r0, 0
      bnelr-
      lbz       r4, 0x28(r3)
      li        r0, 0xA
      cntlzw    r4, r4
      rlwinm    r4,r4,27,5,31
      stb       r4, 0x28(r3)
      stb       r0, 0x29(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8017F508
 * Size:	000048
 */
void Game::NaviWalkState::initAI_wait((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1
      li        r6, 0
      stw       r0, 0x14(r1)
      li        r0, 0x1
      li        r7, 0
      stb       r0, 0x10(r3)
      mr        r3, r4
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
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
 * Address:	8017F550
 * Size:	0001C4
 */
void Game::NaviWalkState::execAI_wait((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      lis       r5, 0x8051
      mr        r30, r3
      addi      r5, r5, 0x41E4
      mr        r31, r4
      bl        0x9FC
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x14(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5780(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x14(r30)
      lfs       f1, 0x14(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xA4
      mr        r3, r30
      mr        r4, r31
      bl        .loc_0x1C4
      bl        -0xB601C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, -0x5730(r2)
      stw       r0, 0x20(r1)
      lfs       f1, -0x5758(r2)
      lfd       f2, 0x20(r1)
      lfs       f0, -0x5724(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fadds     f0, f0, f1
      stfs      f0, 0x14(r30)
      b         .loc_0x19C

    .loc_0xA4:
      lwz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0x19C
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r30)
      addi      r3, r1, 0x8
      lfs       f31, 0x14(r1)
      lwz       r12, 0x0(r4)
      lfs       f30, 0x1C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x10(r1)
      lfs       f4, 0x8(r1)
      fsubs     f1, f30, f2
      lfs       f0, -0x571C(r2)
      fsubs     f3, f31, f4
      fmuls     f1, f1, f1
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x118
      li        r0, 0
      stw       r0, 0x18(r30)
      b         .loc_0x19C

    .loc_0x118:
      fsubs     f2, f2, f30
      lfs       f3, -0x5780(r2)
      fsubs     f1, f4, f31
      fmuls     f4, f2, f2
      fmadds    f0, f1, f1, f3
      fadds     f4, f4, f0
      fcmpo     cr0, f4, f3
      ble-      .loc_0x148
      ble-      .loc_0x14C
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0x14C

    .loc_0x148:
      fmr       f4, f3

    .loc_0x14C:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0x168
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f4
      fmuls     f1, f1, f0
      fmuls     f2, f2, f0

    .loc_0x168:
      lis       r3, 0x8051
      subi      r3, r3, 0x2E20
      bl        -0x14A5B8
      bl        0x29250C
      lfs       f2, 0x1FC(r31)
      bl        0x292530
      lfs       f2, -0x5738(r2)
      lfs       f0, 0x1FC(r31)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x1FC(r31)
      lfs       f1, 0x1FC(r31)
      bl        0x2924EC
      stfs      f1, 0x1FC(r31)

    .loc_0x19C:
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r0, 0x54(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

    .loc_0x1C4:
    */
}

/*
 * --INFO--
 * Address:	8017F714
 * Size:	00026C
 */
void Game::NaviWalkState::initAI_animation((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x74(r1)
      li        r0, 0x2
      stmw      r23, 0x4C(r1)
      mr        r29, r3
      lis       r3, 0x8048
      mr        r30, r4
      subi      r10, r3, 0x1500
      lis       r3, 0x804B
      addi      r31, r3, 0x2D40
      stb       r0, 0x10(r29)
      lwzu      r23, -0x1520(r5)
      lwz       r9, 0x0(r10)
      lwz       r24, 0x4(r5)
      lwz       r25, 0x8(r5)
      lwz       r26, 0xC(r5)
      lwz       r27, 0x10(r5)
      lwz       r28, 0x14(r5)
      lwz       r12, 0x18(r5)
      lwz       r11, 0x1C(r5)
      lwz       r8, 0x4(r10)
      lwz       r7, 0x8(r10)
      lwz       r6, 0xC(r10)
      lwz       r5, 0x10(r10)
      lwz       r4, 0x14(r10)
      lwz       r3, 0x18(r10)
      lwz       r0, 0x1C(r10)
      stw       r23, 0x28(r1)
      stw       r24, 0x2C(r1)
      stw       r25, 0x30(r1)
      stw       r26, 0x34(r1)
      stw       r27, 0x38(r1)
      stw       r28, 0x3C(r1)
      stw       r12, 0x40(r1)
      stw       r11, 0x44(r1)
      stw       r9, 0x8(r1)
      stw       r8, 0xC(r1)
      stw       r7, 0x10(r1)
      stw       r6, 0x14(r1)
      stw       r5, 0x18(r1)
      stw       r4, 0x1C(r1)
      stw       r3, 0x20(r1)
      stw       r0, 0x24(r1)
      lwz       r0, 0x278(r30)
      cmplwi    r0, 0
      beq-      .loc_0xD0
      addi      r3, r1, 0x8
      li        r4, 0x4
      bl        0x780EC
      b         .loc_0xDC

    .loc_0xD0:
      addi      r3, r1, 0x28
      li        r4, 0x4
      bl        0x780DC

    .loc_0xDC:
      cmplwi    r30, 0
      stb       r3, 0x2A(r29)
      mr        r23, r3
      mr        r6, r30
      beq-      .loc_0xF4
      addi      r6, r30, 0x178

    .loc_0xF4:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      mr        r4, r23
      mr        r5, r23
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x12C
      lbz       r0, 0x4A(r3)
      cmplwi    r0, 0
      bne-      .loc_0x258

    .loc_0x12C:
      lhz       r4, 0x2DC(r30)
      cmpwi     r4, 0x1
      bne-      .loc_0x158
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0
      bne-      .loc_0x158
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x158
      addi      r4, r4, 0x1

    .loc_0x158:
      cmpwi     r23, 0xD
      beq-      .loc_0x234
      bge-      .loc_0x17C
      cmpwi     r23, 0xB
      beq-      .loc_0x194
      bge-      .loc_0x258
      cmpwi     r23, 0
      beq-      .loc_0x1BC
      b         .loc_0x258

    .loc_0x17C:
      cmpwi     r23, 0x36
      beq-      .loc_0x20C
      bge-      .loc_0x258
      cmpwi     r23, 0x32
      beq-      .loc_0x1E4
      b         .loc_0x258

    .loc_0x194:
      lwz       r3, 0x26C(r30)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x34
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x1BC:
      lwz       r3, 0x26C(r30)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x40
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x1E4:
      lwz       r3, 0x26C(r30)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x4C
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x20C:
      lwz       r3, 0x26C(r30)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x58
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x234:
      lwz       r3, 0x26C(r30)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x1C
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x258:
      lmw       r23, 0x4C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8017F980
 * Size:	000080
 */
void Game::NaviWalkState::execAI_animation((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8051
      stw       r0, 0x14(r1)
      addi      r5, r5, 0x41E4
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        0x5DC
      lbz       r4, 0x2A(r30)
      mr        r3, r31
      bl        -0x42A84
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x68
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x10(r30)
      li        r4, 0x1
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x0(r31)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x68:
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
 * Address:	........
 * Size:	00000C
 */
void Game::NaviWalkState::initAI_attack((Game::Navi*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017FA00
 * Size:	000240
 */
void Game::NaviWalkState::execAI_attack((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      mr        r31, r4
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x78
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x10(r30)
      li        r4, 0x1
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x0(r31)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x18(r30)
      b         .loc_0x220

    .loc_0x78:
      lwz       r4, 0x18(r30)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      mr        r4, r31
      lfs       f1, 0x18(r1)
      addi      r3, r1, 0x8
      lfs       f0, 0x1C(r1)
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x40(r1)
      stfs      f0, 0x44(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x40(r1)
      lfs       f0, 0xC(r1)
      lfs       f1, 0x3C(r1)
      fsubs     f4, f2, f0
      lfs       f0, 0x8(r1)
      lfs       f3, 0x44(r1)
      fsubs     f2, f1, f0
      lfs       f0, 0x10(r1)
      fmuls     f5, f4, f4
      fsubs     f3, f3, f0
      lfs       f1, -0x5780(r2)
      fmuls     f0, f2, f2
      stfs      f2, 0x30(r1)
      fmuls     f6, f3, f3
      fadds     f0, f0, f5
      stfs      f4, 0x34(r1)
      stfs      f3, 0x38(r1)
      fadds     f0, f6, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x12C
      fmadds    f0, f2, f2, f5
      fadds     f31, f6, f0
      fcmpo     cr0, f31, f1
      ble-      .loc_0x130
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x130

    .loc_0x12C:
      fmr       f31, f1

    .loc_0x130:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x16C
      lfs       f0, -0x5718(r2)
      lfs       f2, 0x30(r1)
      fdivs     f3, f0, f31
      lfs       f1, 0x34(r1)
      lfs       f0, 0x38(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x30(r1)
      stfs      f1, 0x34(r1)
      stfs      f0, 0x38(r1)
      b         .loc_0x170

    .loc_0x16C:
      fmr       f31, f0

    .loc_0x170:
      lwz       r3, 0x18(r30)
      addi      r4, r1, 0x20
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x2C(r1)
      mr        r3, r31
      fsubs     f31, f31, f0
      bl        -0x3C090
      lwz       r5, -0x6D20(r13)
      mr        r3, r30
      lfs       f2, 0x38(r1)
      mr        r4, r31
      lwz       r6, 0xC8(r5)
      addi      r5, r1, 0x30
      lfs       f1, 0x34(r1)
      lfs       f4, 0x3B8(r6)
      lfs       f0, 0x30(r1)
      fmuls     f3, f2, f4
      lfs       f2, -0x575C(r2)
      fmuls     f1, f1, f4
      fmuls     f0, f0, f4
      fmuls     f3, f3, f2
      fmuls     f1, f1, f2
      fmuls     f0, f0, f2
      stfs      f3, 0x38(r1)
      stfs      f0, 0x30(r1)
      stfs      f1, 0x34(r1)
      bl        0x39C
      lfs       f0, -0x5714(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x220
      mr        r3, r31
      addi      r4, r1, 0x3C
      bl        -0x42028
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x220:
      psq_l     f31,0x58(r1),0,0
      lwz       r0, 0x64(r1)
      lfd       f31, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8017FC40
 * Size:	00008C
 */
void Game::NaviWalkState::initAI_escape((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x5780(r2)
      stw       r0, 0x24(r1)
      li        r0, 0x3
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stb       r0, 0x10(r3)
      stfs      f0, 0x14(r3)
      bl        -0xB66C4
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0xC(r1)
      li        r0, 0
      lfd       f3, -0x5730(r2)
      stw       r3, 0x8(r1)
      lfs       f1, -0x5758(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, -0x5724(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      neg       r3, r4
      or        r3, r3, r4
      rlwinm    r3,r3,1,31,31
      stb       r3, 0x28(r31)
      stb       r0, 0x29(r31)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8017FCCC
 * Size:	0002B4
 */
void Game::NaviWalkState::execAI_escape((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      mr        r31, r4
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x90
      lfs       f0, -0x573C(r2)
      li        r0, 0x1
      mr        r3, r31
      li        r4, 0x1
      stfs      f0, 0x14(r30)
      li        r5, 0x1
      li        r6, 0
      li        r7, 0
      stb       r0, 0x10(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x18(r30)
      b         .loc_0x284

    .loc_0x90:
      lbz       r3, 0x29(r30)
      cmplwi    r3, 0
      beq-      .loc_0xA4
      subi      r0, r3, 0x1
      stb       r0, 0x29(r30)

    .loc_0xA4:
      lwz       r4, 0x18(r30)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18(r1)
      lfs       f29, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      lfs       f0, 0xC(r1)
      fsubs     f3, f1, f31
      lfs       f4, 0x10(r1)
      fsubs     f2, f0, f30
      lfs       f1, -0x5780(r2)
      fsubs     f4, f4, f29
      fmuls     f0, f3, f3
      fmuls     f5, f2, f2
      stfs      f3, 0x30(r1)
      fmuls     f6, f4, f4
      stfs      f2, 0x34(r1)
      fadds     f0, f0, f5
      stfs      f4, 0x38(r1)
      fadds     f0, f6, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x140
      fmadds    f0, f3, f3, f5
      fadds     f31, f6, f0
      fcmpo     cr0, f31, f1
      ble-      .loc_0x144
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x144

    .loc_0x140:
      fmr       f31, f1

    .loc_0x144:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x180
      lfs       f0, -0x5718(r2)
      lfs       f2, 0x30(r1)
      fdivs     f3, f0, f31
      lfs       f1, 0x34(r1)
      lfs       f0, 0x38(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x30(r1)
      stfs      f1, 0x34(r1)
      stfs      f0, 0x38(r1)
      b         .loc_0x184

    .loc_0x180:
      fmr       f31, f0

    .loc_0x184:
      lwz       r3, 0x18(r30)
      addi      r4, r1, 0x20
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x18(r30)
      lfs       f0, 0x2C(r1)
      lwz       r12, 0x0(r3)
      fsubs     f29, f31, f0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5710(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x1FC
      lfs       f0, -0x573C(r2)
      li        r0, 0x1
      mr        r3, r31
      li        r4, 0x1
      stfs      f0, 0x14(r30)
      li        r5, 0x1
      li        r6, 0
      li        r7, 0
      stb       r0, 0x10(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      b         .loc_0x284

    .loc_0x1FC:
      lfs       f0, -0x570C(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x23C
      lfs       f0, 0x30(r1)
      lfs       f2, 0x38(r1)
      fneg      f0, f0
      stfs      f2, 0x30(r1)
      stfs      f0, 0x38(r1)
      lbz       r0, 0x28(r30)
      cmplwi    r0, 0
      bne-      .loc_0x23C
      frsp      f1, f0
      fneg      f0, f2
      fneg      f1, f1
      stfs      f0, 0x30(r1)
      stfs      f1, 0x38(r1)

    .loc_0x23C:
      mr        r3, r31
      bl        -0x3C408
      lwz       r5, -0x6D20(r13)
      mr        r3, r30
      lfs       f2, 0x38(r1)
      mr        r4, r31
      lwz       r6, 0xC8(r5)
      addi      r5, r1, 0x30
      lfs       f1, 0x34(r1)
      lfs       f3, 0x3B8(r6)
      lfs       f0, 0x30(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x38(r1)
      stfs      f0, 0x30(r1)
      stfs      f1, 0x34(r1)
      bl        .loc_0x2B4

    .loc_0x284:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x84(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr

    .loc_0x2B4:
    */
}

/*
 * --INFO--
 * Address:	8017FF80
 * Size:	000034
 */
void blendVelocity__Q24Game13NaviWalkStateFPQ24Game4NaviR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x1E4(r4)
      lfs       f0, 0x0(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x1E4(r4)
      lfs       f1, 0x1E8(r4)
      lfs       f0, 0x4(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x1E8(r4)
      lfs       f1, 0x1EC(r4)
      lfs       f0, 0x8(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x1EC(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8017FFB4
 * Size:	0000A8
 */
void Game::NaviChangeState::init((Game::Navi*, Game::StateArg*))
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
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x68
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x48
      addi      r6, r31, 0x178

    .loc_0x48:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x20
      li        r5, 0x20
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl

    .loc_0x68:
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r31)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x10(r30)
      li        r0, 0
      stb       r0, 0x14(r30)
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
 * Address:	8018005C
 * Size:	000058
 */
void Game::NaviChangeState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      mr        r5, r4
      cmplwi    r0, 0x3E8
      bne-      .loc_0x48
      li        r0, 0x1
      li        r4, 0x1E
      stb       r0, 0x14(r3)
      mr        r3, r5
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x48:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801800B4
 * Size:	0000AC
 */
void Game::NaviChangeState::exec((Game::Navi*))
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
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x58
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x58:
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0x1
      bne-      .loc_0x94
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x94:
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
 * Address:	80180160
 * Size:	000004
 */
void Game::NaviChangeState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80180164
 * Size:	00016C
 */
void Game::NaviFollowState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0xE4
      lbz       r0, 0x0(r5)
      cmplwi    r0, 0
      beq-      .loc_0xE4
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x40
      addi      r6, r6, 0x178

    .loc_0x40:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x20
      li        r5, 0x20
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x14(r30)
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x94
      lwz       r3, 0x26C(r31)
      li        r4, 0x895
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0x94:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xC4
      lwz       r3, 0x26C(r31)
      li        r4, 0x89C
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0xC4:
      lwz       r3, 0x26C(r31)
      li        r4, 0x896
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0xE4:
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x14(r30)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r31)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x110:
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r31)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x10(r30)
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x1C(r30)
      stw       r0, 0x18(r30)
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
 * Address:	801802D0
 * Size:	000174
 */
void Game::NaviFollowState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      cmplwi    r0, 0x3E8
      stw       r30, 0x8(r1)
      mr        r30, r4
      bne-      .loc_0xB4
      lbz       r0, 0x14(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0xB4
      bge-      .loc_0x44
      cmpwi     r0, 0
      bge-      .loc_0x50
      b         .loc_0xB4

    .loc_0x44:
      cmpwi     r0, 0x3
      bge-      .loc_0xB4
      b         .loc_0x80

    .loc_0x50:
      li        r0, 0x1
      li        r4, 0x1E
      stb       r0, 0x14(r3)
      mr        r3, r30
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r30)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      b         .loc_0xB4

    .loc_0x80:
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0x1C(r3)
      li        r4, 0x1F
      li        r5, 0x1F
      li        r6, 0
      stb       r0, 0x14(r3)
      mr        r3, r30
      li        r7, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0xB4:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0xCC
      lbz       r0, 0x4A(r3)
      cmplwi    r0, 0
      bne-      .loc_0x15C

    .loc_0xCC:
      lha       r0, 0x20(r31)
      cmpwi     r0, 0x32
      bne-      .loc_0x15C
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0xC8
      bne-      .loc_0x15C
      lhz       r0, 0x2DC(r30)
      cmplwi    r0, 0
      bne-      .loc_0x110
      lwz       r3, 0x26C(r30)
      li        r4, 0x877
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x15C

    .loc_0x110:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x140
      lwz       r3, 0x26C(r30)
      li        r4, 0x879
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x15C

    .loc_0x140:
      lwz       r3, 0x26C(r30)
      li        r4, 0x878
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x15C:
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
 * Address:	........
 * Size:	00007C
 */
void Game::NaviFollowState::messageAttack((Game::Creature*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80180444
 * Size:	0009A0
 */
void Game::NaviFollowState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x110(r1)
      mflr      r0
      stw       r0, 0x114(r1)
      stfd      f31, 0x100(r1)
      psq_st    f31,0x108(r1),0,0
      stfd      f30, 0xF0(r1)
      psq_st    f30,0xF8(r1),0,0
      stfd      f29, 0xE0(r1)
      psq_st    f29,0xE8(r1),0,0
      stfd      f28, 0xD0(r1)
      psq_st    f28,0xD8(r1),0,0
      stfd      f27, 0xC0(r1)
      psq_st    f27,0xC8(r1),0,0
      stfd      f26, 0xB0(r1)
      psq_st    f26,0xB8(r1),0,0
      stfd      f25, 0xA0(r1)
      psq_st    f25,0xA8(r1),0,0
      stmw      r27, 0x8C(r1)
      lwz       r6, -0x64AC(r13)
      lis       r5, 0x804B
      mr        r28, r3
      mr        r29, r4
      cmplwi    r6, 0
      addi      r31, r5, 0x2D40
      beq-      .loc_0x70
      lwz       r0, 0x18(r6)
      cmpwi     r0, 0
      bne-      .loc_0x954

    .loc_0x70:
      lwz       r0, 0x278(r29)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x954

    .loc_0xA0:
      lbz       r0, 0x14(r28)
      cmplwi    r0, 0
      bne-      .loc_0x100
      mr        r3, r29
      li        r4, 0x20
      bl        -0x435CC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xEC
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0x14(r28)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r29)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0xEC:
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x1E4(r29)
      stfs      f0, 0x1E8(r29)
      stfs      f0, 0x1EC(r29)
      b         .loc_0x954

    .loc_0x100:
      lwz       r3, 0x10(r28)
      bl        0x1F02C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x954

    .loc_0x134:
      lbz       r0, 0x14(r28)
      cmplwi    r0, 0x3
      bne-      .loc_0x364
      lwz       r3, 0x18(r28)
      cmplwi    r3, 0
      beq-      .loc_0x19C
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x19C
      lwz       r3, 0x18(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xCC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x19C
      lwz       r3, 0x18(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xD0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1D4

    .loc_0x19C:
      li        r3, 0x1
      li        r0, 0
      stb       r3, 0x14(r28)
      mr        r3, r29
      li        r4, 0x1E
      li        r5, 0x1E
      stw       r0, 0x18(r28)
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x0(r29)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      b         .loc_0x954

    .loc_0x1D4:
      lwz       r3, 0x18(r28)
      addi      r4, r1, 0x34
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x28
      lwz       r12, 0x0(r29)
      lfs       f25, 0x34(r1)
      lwz       r12, 0x8(r12)
      lfs       f26, 0x38(r1)
      lfs       f27, 0x3C(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x2C(r1)
      lfs       f2, 0x28(r1)
      fsubs     f26, f26, f0
      lfs       f1, 0x30(r1)
      fsubs     f25, f25, f2
      lfs       f0, -0x5780(r2)
      fsubs     f27, f27, f1
      fmuls     f1, f26, f26
      fmuls     f2, f27, f27
      fmadds    f1, f25, f25, f1
      fadds     f2, f2, f1
      fcmpo     cr0, f2, f0
      ble-      .loc_0x254
      ble-      .loc_0x258
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x258

    .loc_0x254:
      fmr       f2, f0

    .loc_0x258:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x27C
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f2
      fmuls     f25, f25, f0
      fmuls     f26, f26, f0
      fmuls     f27, f27, f0
      b         .loc_0x280

    .loc_0x27C:
      fmr       f2, f0

    .loc_0x280:
      lfs       f1, 0x40(r1)
      lfs       f0, -0x5708(r2)
      fsubs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2DC
      mr        r3, r29
      addi      r4, r1, 0x34
      bl        -0x42B0C
      li        r5, 0
      li        r0, 0x1
      stb       r5, 0x8(r1)
      mr        r3, r28
      mr        r4, r29
      addi      r6, r1, 0x8
      stw       r5, 0xC(r1)
      li        r5, 0x2
      stb       r0, 0x8(r1)
      stw       r0, 0xC(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x954

    .loc_0x2DC:
      lbz       r3, 0x1E(r28)
      addi      r3, r3, 0x1
      rlwinm    r0,r3,0,24,31
      stb       r3, 0x1E(r28)
      cmplwi    r0, 0x3C
      blt-      .loc_0x32C
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0x14(r28)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r29)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x18(r28)
      b         .loc_0x954

    .loc_0x32C:
      mr        r3, r29
      bl        -0x3CC70
      lwz       r3, -0x6D20(r13)
      lfs       f1, -0x575C(r2)
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x3B8(r3)
      fmuls     f0, f1, f0
      fmuls     f2, f25, f0
      fmuls     f1, f26, f0
      fmuls     f0, f27, f0
      stfs      f2, 0x1E4(r29)
      stfs      f1, 0x1E8(r29)
      stfs      f0, 0x1EC(r29)
      b         .loc_0x954

    .loc_0x364:
      lwz       r3, 0x10(r28)
      lfs       f1, -0x5780(r2)
      lfs       f3, 0x200(r3)
      lfs       f2, 0x204(r3)
      fmuls     f0, f3, f3
      lfs       f4, 0x208(r3)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x3B0
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x3B4
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x3B4

    .loc_0x3B0:
      fmr       f2, f1

    .loc_0x3B4:
      lfs       f0, -0x5704(r2)
      li        r30, 0
      fcmpo     cr0, f2, f0
      ble-      .loc_0x3C8
      li        r30, 0x1

    .loc_0x3C8:
      cmplwi    r0, 0x2
      bne-      .loc_0x468
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x414
      cmplwi    r29, 0
      mr        r6, r29
      beq-      .loc_0x3E8
      addi      r6, r29, 0x178

    .loc_0x3E8:
      lwz       r12, 0x0(r29)
      mr        r3, r29
      li        r4, 0x20
      li        r5, 0x20
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x14(r28)
      b         .loc_0x954

    .loc_0x414:
      lfs       f0, -0x5780(r2)
      mr        r3, r29
      stfs      f0, 0x1E4(r29)
      stfs      f0, 0x1E8(r29)
      stfs      f0, 0x1EC(r29)
      lbz       r4, 0x1D(r28)
      bl        -0x43944
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x954
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0x14(r28)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r29)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      b         .loc_0x954

    .loc_0x468:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x47C
      li        r0, 0
      stb       r0, 0x1C(r28)
      b         .loc_0x638

    .loc_0x47C:
      lbz       r3, 0x1C(r28)
      cmplwi    r3, 0x5A
      bge-      .loc_0x494
      addi      r0, r3, 0x1
      stb       r0, 0x1C(r28)
      b         .loc_0x638

    .loc_0x494:
      lis       r4, 0x8048
      addi      r3, r1, 0x44
      subi      r12, r4, 0x14E0
      li        r4, 0x4
      lwz       r11, 0x0(r12)
      lwz       r10, 0x4(r12)
      lwz       r9, 0x8(r12)
      lwz       r8, 0xC(r12)
      lwz       r7, 0x10(r12)
      lwz       r6, 0x14(r12)
      lwz       r5, 0x18(r12)
      lwz       r0, 0x1C(r12)
      stw       r11, 0x44(r1)
      stw       r10, 0x48(r1)
      stw       r9, 0x4C(r1)
      stw       r8, 0x50(r1)
      stw       r7, 0x54(r1)
      stw       r6, 0x58(r1)
      stw       r5, 0x5C(r1)
      stw       r0, 0x60(r1)
      bl        0x76FA0
      mr        r27, r3
      cmplwi    r29, 0
      stb       r27, 0x1D(r28)
      mr        r6, r29
      beq-      .loc_0x500
      addi      r6, r29, 0x178

    .loc_0x500:
      lwz       r12, 0x0(r29)
      mr        r3, r29
      mr        r4, r27
      mr        r5, r27
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0x2
      stb       r0, 0x14(r28)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x638
      lbz       r0, 0x4A(r3)
      cmplwi    r0, 0
      bne-      .loc_0x638
      lhz       r4, 0x2DC(r29)
      cmpwi     r4, 0x1
      bne-      .loc_0x56C
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0
      bne-      .loc_0x56C
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x56C
      addi      r4, r4, 0x1

    .loc_0x56C:
      cmpwi     r27, 0x32
      beq-      .loc_0x5EC
      bge-      .loc_0x590
      cmpwi     r27, 0x3
      beq-      .loc_0x59C
      bge-      .loc_0x638
      cmpwi     r27, 0
      beq-      .loc_0x5C4
      b         .loc_0x638

    .loc_0x590:
      cmpwi     r27, 0x36
      beq-      .loc_0x614
      b         .loc_0x638

    .loc_0x59C:
      lwz       r3, 0x26C(r29)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x28
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x638

    .loc_0x5C4:
      lwz       r3, 0x26C(r29)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x40
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x638

    .loc_0x5EC:
      lwz       r3, 0x26C(r29)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x4C
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x638

    .loc_0x614:
      lwz       r3, 0x26C(r29)
      rlwinm    r0,r4,2,0,29
      addi      r4, r31, 0x58
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwzx      r4, r4, r0
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x638:
      lwz       r4, 0x10(r28)
      addi      r3, r1, 0x1C
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x10(r28)
      lfs       f31, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lfs       f30, 0x20(r1)
      lwz       r12, 0x64(r12)
      lfs       f29, 0x24(r1)
      mtctr     r12
      bctrl
      fmr       f25, f1
      lwz       r3, 0x10(r28)
      bl        -0x3F678
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x740
      cmpwi     r3, 0x5
      beq-      .loc_0x694
      cmpwi     r3, 0x6
      bne-      .loc_0x740

    .loc_0x694:
      lfs       f1, -0x5700(r2)
      lfs       f0, -0x5780(r2)
      fadds     f5, f1, f25
      fmr       f1, f5
      fcmpo     cr0, f5, f0
      bge-      .loc_0x6B0
      fneg      f1, f5

    .loc_0x6B0:
      lfs       f2, -0x5778(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5780(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      lfs       f3, -0x56FC(r2)
      fcmpo     cr0, f5, f0
      fctiwz    f0, f1
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f4, f3, f0
      bge-      .loc_0x710
      lfs       f0, -0x5774(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x728

    .loc_0x710:
      fmuls     f0, f5, f2
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x728:
      fmuls     f1, f3, f0
      lfs       f0, -0x5780(r2)
      fadds     f29, f29, f4
      fadds     f30, f30, f0
      fadds     f31, f31, f1
      b         .loc_0x7F4

    .loc_0x740:
      cmpwi     r3, 0x2
      bne-      .loc_0x7F4
      lwz       r3, 0x10(r28)
      fmr       f1, f25
      lfs       f0, -0x5780(r2)
      lwz       r3, 0x254(r3)
      fcmpo     cr0, f25, f0
      lfs       f0, 0xB0(r3)
      fneg      f4, f0
      bge-      .loc_0x76C
      fneg      f1, f25

    .loc_0x76C:
      lfs       f2, -0x5778(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5780(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f25, f0
      fctiwz    f0, f1
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f3, f4, f0
      bge-      .loc_0x7C8
      lfs       f0, -0x5774(r2)
      fmuls     f0, f25, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x7E0

    .loc_0x7C8:
      fmuls     f0, f25, f2
      fctiwz    f0, f0
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x7E0:
      fmuls     f1, f4, f0
      lfs       f0, -0x5780(r2)
      fadds     f29, f29, f3
      fadds     f30, f30, f0
      fadds     f31, f31, f1

    .loc_0x7F4:
      mr        r4, r29
      lwz       r5, 0x10(r28)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x10
      lfs       f28, 0x1E4(r5)
      lwz       r12, 0x8(r12)
      lfs       f27, 0x1E8(r5)
      lfs       f26, 0x1EC(r5)
      mtctr     r12
      bctrl
      lfs       f0, 0x14(r1)
      lfs       f2, 0x18(r1)
      fsubs     f30, f30, f0
      lfs       f1, 0x10(r1)
      fsubs     f25, f29, f2
      lfs       f0, -0x5780(r2)
      fsubs     f29, f31, f1
      fmuls     f1, f30, f30
      fmuls     f2, f25, f25
      fmadds    f1, f29, f29, f1
      fadds     f31, f2, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x860
      ble-      .loc_0x864
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x864

    .loc_0x860:
      fmr       f31, f0

    .loc_0x864:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x888
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f31
      fmuls     f29, f29, f0
      fmuls     f30, f30, f0
      fmuls     f25, f25, f0
      b         .loc_0x88C

    .loc_0x888:
      fmr       f31, f0

    .loc_0x88C:
      mr        r3, r29
      bl        -0x3F830
      li        r4, 0x7
      bl        0x652F4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8B4
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f1, 0xBB0(r3)
      b         .loc_0x8C0

    .loc_0x8B4:
      lwz       r3, -0x6D20(r13)
      lwz       r3, 0xC8(r3)
      lfs       f1, 0x3B8(r3)

    .loc_0x8C0:
      lfs       f0, -0x56FC(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x8D0
      lfs       f1, -0x5780(r2)

    .loc_0x8D0:
      lfs       f0, -0x56F8(r2)
      fmuls     f29, f29, f1
      fmuls     f30, f30, f1
      fcmpo     cr0, f31, f0
      fmuls     f25, f25, f1
      bge-      .loc_0x910
      lfs       f0, -0x575C(r2)
      fmuls     f5, f29, f0
      fmuls     f4, f28, f0
      fmuls     f3, f30, f0
      fmuls     f2, f27, f0
      fmuls     f1, f25, f0
      fmuls     f0, f26, f0
      fadds     f29, f5, f4
      fadds     f30, f3, f2
      fadds     f25, f1, f0

    .loc_0x910:
      lfs       f0, -0x56F4(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x940
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x954

    .loc_0x940:
      mr        r3, r29
      bl        -0x3D284
      stfs      f29, 0x1E4(r29)
      stfs      f30, 0x1E8(r29)
      stfs      f25, 0x1EC(r29)

    .loc_0x954:
      psq_l     f31,0x108(r1),0,0
      lfd       f31, 0x100(r1)
      psq_l     f30,0xF8(r1),0,0
      lfd       f30, 0xF0(r1)
      psq_l     f29,0xE8(r1),0,0
      lfd       f29, 0xE0(r1)
      psq_l     f28,0xD8(r1),0,0
      lfd       f28, 0xD0(r1)
      psq_l     f27,0xC8(r1),0,0
      lfd       f27, 0xC0(r1)
      psq_l     f26,0xB8(r1),0,0
      lfd       f26, 0xB0(r1)
      psq_l     f25,0xA8(r1),0,0
      lfd       f25, 0xA0(r1)
      lmw       r27, 0x8C(r1)
      lwz       r0, 0x114(r1)
      mtlr      r0
      addi      r1, r1, 0x110
      blr
    */
}

/*
 * --INFO--
 * Address:	80180DE4
 * Size:	000004
 */
void Game::NaviFollowState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80180DE8
 * Size:	000040
 */
void Game::NaviPunchState::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804B
      addi      r0, r4, 0x374C
      lis       r4, 0x804B
      stw       r0, 0x0(r3)
      li        r0, 0x2
      li        r6, 0
      addi      r5, r5, 0x3784
      stw       r0, 0x4(r3)
      addi      r0, r4, 0x353C
      stw       r6, 0x8(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)
      stb       r6, 0x24(r3)
      stw       r6, 0x28(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80180E28
 * Size:	0000D4
 */
void Game::NaviPunchState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x38
      lbz       r0, 0x0(r5)
      stb       r0, 0x24(r30)
      lwz       r0, 0x4(r5)
      stw       r0, 0x28(r30)
      b         .loc_0x44

    .loc_0x38:
      li        r0, 0
      stb       r0, 0x24(r30)
      stw       r0, 0x28(r30)

    .loc_0x44:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x54
      addi      r6, r31, 0x178

    .loc_0x54:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x40
      li        r5, 0x40
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lwz       r3, 0x26C(r31)
      li        r4, 0x800
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x43F68
      li        r0, 0
      stb       r0, 0x10(r30)
      stw       r31, 0x18(r30)
      stw       r0, 0x14(r30)
      stb       r0, 0x1C(r30)
      stb       r0, 0x1E(r30)
      stb       r0, 0x1D(r30)
      stb       r0, 0x20(r30)
      stb       r0, 0x1F(r30)
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
 * Address:	........
 * Size:	000108
 */
void Game::NaviPunchState::renzokuInit((Game::Navi*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80180EFC
 * Size:	000300
 */
void Game::NaviPunchState::hitCallback((CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r30, r3
      lwz       r3, -0x6B70(r13)
      mr        r29, r4
      li        r4, 0x23
      bl        0x664A4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2CC
      cmplwi    r29, 0
      beq-      .loc_0x2CC
      lwz       r6, 0x18(r30)
      li        r31, 0
      lfs       f1, -0x56F0(r2)
      lwz       r3, 0x1B8(r6)
      cmplwi    r3, 0
      beq-      .loc_0x74
      lha       r0, 0x20(r3)
      b         .loc_0x78

    .loc_0x74:
      li        r0, -0x1

    .loc_0x78:
      cmpwi     r0, 0x42
      bne-      .loc_0x8C
      lfs       f0, -0x56EC(r2)
      li        r31, 0x1
      fmuls     f1, f1, f0

    .loc_0x8C:
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r5, r4, 0x5D00
      stw       r6, 0x28(r1)
      addi      r0, r3, 0x4DE0
      addi      r4, r1, 0x24
      stw       r5, 0x24(r1)
      stw       r0, 0x24(r1)
      stfs      f1, 0x2C(r1)
      stw       r29, 0x30(r1)
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2CC
      lwz       r5, 0x18(r30)
      lis       r3, 0x7268
      lfs       f31, 0x4C(r29)
      addi      r4, r3, 0x6E64
      lfs       f30, 0x50(r29)
      lfs       f29, 0x54(r29)
      lwz       r3, 0x114(r5)
      bl        -0x4B1A4
      lfs       f4, 0x50(r3)
      lfs       f5, 0x54(r3)
      fsubs     f7, f30, f4
      lfs       f3, 0x4C(r3)
      fsubs     f8, f29, f5
      lfs       f0, -0x5780(r2)
      fsubs     f6, f31, f3
      fmuls     f1, f7, f7
      fmuls     f2, f8, f8
      fmadds    f1, f6, f6, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x134
      ble-      .loc_0x138
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x138

    .loc_0x134:
      fmr       f1, f0

    .loc_0x138:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x158
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f6, f6, f0
      fmuls     f7, f7, f0
      fmuls     f8, f8, f0

    .loc_0x158:
      lfs       f0, -0x570C(r2)
      lis       r3, 0x804B
      subi      r0, r3, 0x5808
      lis       r4, 0x804E
      fmuls     f6, f6, f0
      lis       r5, 0x804B
      fmuls     f7, f7, f0
      lis       r3, 0x804B
      fmuls     f8, f8, f0
      stw       r0, 0x8(r1)
      fadds     f6, f6, f3
      addi      r0, r4, 0x6A78
      fadds     f7, f7, f4
      subi      r4, r5, 0x5814
      fadds     f8, f8, f5
      li        r6, 0x26D
      li        r5, 0
      stw       r0, 0x8(r1)
      addi      r0, r3, 0x3508
      addi      r3, r1, 0x8
      stw       r4, 0x14(r1)
      addi      r4, r1, 0x14
      stfs      f6, 0x18(r1)
      stfs      f7, 0x1C(r1)
      stfs      f8, 0x20(r1)
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        0x22DEC0
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x1F8
      lwz       r3, 0x18(r30)
      li        r4, 0x2828
      li        r5, 0
      lwz       r3, 0x26C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x218

    .loc_0x1F8:
      lwz       r3, 0x18(r30)
      li        r4, 0x801
      li        r5, 0
      lwz       r3, 0x26C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x218:
      li        r0, 0x1
      stb       r0, 0x1F(r30)
      lbz       r0, 0x24(r30)
      cmplwi    r0, 0
      bne-      .loc_0x2CC
      lwz       r3, -0x6D20(r13)
      lwz       r4, 0x18(r30)
      lwz       r12, 0x0(r3)
      lhz       r0, 0x2DC(r4)
      lwz       r12, 0x24(r12)
      subfic    r4, r0, 0x1
      mtctr     r12
      bctrl
      mr.       r31, r3
      beq-      .loc_0x2CC
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2CC
      mr        r3, r31
      bl        -0x3FD28
      cmpwi     r3, 0x1
      bne-      .loc_0x2CC
      lwz       r31, 0x274(r31)
      lwz       r30, 0x14(r30)
      lbz       r0, 0x14(r31)
      cmplwi    r0, 0x1
      beq-      .loc_0x298
      cmplwi    r0, 0x2
      bne-      .loc_0x2CC

    .loc_0x298:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2CC
      stw       r30, 0x18(r31)
      li        r3, 0x3
      li        r0, 0
      stb       r3, 0x14(r31)
      stb       r0, 0x1E(r31)
      stb       r0, 0x1C(r31)

    .loc_0x2CC:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r0, 0x84(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	801811FC
 * Size:	0003A4
 */
void Game::NaviPunchState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0xF0(r1)
      mflr      r0
      stw       r0, 0xF4(r1)
      stfd      f31, 0xE0(r1)
      psq_st    f31,0xE8(r1),0,0
      stfd      f30, 0xD0(r1)
      psq_st    f30,0xD8(r1),0,0
      stfd      f29, 0xC0(r1)
      psq_st    f29,0xC8(r1),0,0
      stfd      f28, 0xB0(r1)
      psq_st    f28,0xB8(r1),0,0
      stw       r31, 0xAC(r1)
      stw       r30, 0xA8(r1)
      stw       r29, 0xA4(r1)
      mr        r29, r5
      mr        r30, r3
      lwz       r0, 0x1C(r5)
      mr        r31, r4
      cmpwi     r0, 0x3E8
      beq-      .loc_0x210
      bge-      .loc_0x368
      cmpwi     r0, 0x2
      beq-      .loc_0x60
      b         .loc_0x368

    .loc_0x60:
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x10(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lha       r0, 0x20(r29)
      fmr       f30, f1
      lfs       f29, -0x570C(r2)
      cmpwi     r0, 0x42
      lfs       f28, -0x5704(r2)
      bne-      .loc_0x9C
      lfs       f29, -0x56E8(r2)
      lfs       f28, -0x5710(r2)

    .loc_0x9C:
      fmr       f1, f30
      bl        -0xB1FE8
      frsp      f31, f1
      fmr       f1, f30
      bl        -0xB1A8C
      mr        r4, r31
      frsp      f30, f1
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fmuls     f4, f29, f30
      lfs       f3, 0x8(r1)
      lfs       f2, 0xC(r1)
      fmuls     f1, f29, f31
      lfs       f0, 0x10(r1)
      addi      r3, r1, 0x38
      fadds     f3, f4, f3
      stfs      f28, 0x20(r1)
      fadds     f2, f28, f2
      addi      r4, r1, 0x14
      fadds     f0, f1, f0
      stfs      f3, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        0xAD0A0
      addi      r3, r1, 0x58
      addi      r4, r1, 0x38
      bl        0xAD0D4
      addi      r3, r1, 0x58
      bl        0xAD148
      b         .loc_0x1FC

    .loc_0x120:
      addi      r3, r1, 0x58
      bl        0xAD770
      addi      r3, r1, 0x58
      bl        0xAD21C
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1F4
      lwz       r0, 0x114(r29)
      cmplwi    r0, 0
      beq-      .loc_0x1F4
      cmplw     r29, r31
      beq-      .loc_0x1F4
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1F4
      stw       r29, 0x14(r30)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A8(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1AC(r12)
      mtctr     r12
      bctrl
      lis       r6, 0x804B
      lis       r3, 0x804B
      addi      r5, r3, 0x2DA4
      lis       r4, 0x804B
      addi      r0, r6, 0x34FC
      lwz       r6, 0x0(r5)
      lwz       r3, 0x4(r5)
      addi      r7, r4, 0x34F0
      stw       r0, 0x24(r1)
      addi      r4, r1, 0x14
      lwz       r0, 0x8(r5)
      addi      r5, r1, 0x24
      stw       r7, 0x24(r1)
      stw       r30, 0x28(r1)
      stw       r6, 0x2C(r1)
      stw       r3, 0x30(r1)
      stw       r0, 0x34(r1)
      lwz       r3, 0x114(r29)
      bl        -0x4C81C

    .loc_0x1F4:
      addi      r3, r1, 0x58
      bl        0xAD10C

    .loc_0x1FC:
      addi      r3, r1, 0x58
      bl        0xAD138
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x120
      b         .loc_0x368

    .loc_0x210:
      lbz       r0, 0x1D(r30)
      cmplwi    r0, 0
      beq-      .loc_0x33C
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      addi      r3, r3, 0x48
      bl        0x64BAC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x30C
      lbz       r3, 0x1E(r30)
      addi      r3, r3, 0x1
      rlwinm    r0,r3,0,24,31
      stb       r3, 0x1E(r30)
      cmplwi    r0, 0x1
      bgt-      .loc_0x29C
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x25C
      addi      r6, r31, 0x178

    .loc_0x25C:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x41
      li        r5, 0x41
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lwz       r3, 0x26C(r31)
      li        r4, 0x800
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2E8

    .loc_0x29C:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x2AC
      addi      r6, r31, 0x178

    .loc_0x2AC:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x42
      li        r5, 0x42
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lwz       r3, 0x26C(r31)
      li        r4, 0x800
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x2E8:
      mr        r3, r31
      bl        -0x44594
      li        r0, 0
      stb       r0, 0x10(r30)
      stw       r0, 0x14(r30)
      stb       r0, 0x1C(r30)
      stb       r0, 0x1D(r30)
      stb       r0, 0x1F(r30)
      b         .loc_0x368

    .loc_0x30C:
      li        r0, 0x4
      li        r4, 0x1F
      stb       r0, 0x20(r30)
      li        r5, 0x1F
      li        r6, 0
      li        r7, 0
      lwz       r3, 0x18(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      b         .loc_0x368

    .loc_0x33C:
      li        r0, 0x4
      li        r4, 0x1F
      stb       r0, 0x20(r30)
      li        r5, 0x1F
      li        r6, 0
      li        r7, 0
      lwz       r3, 0x18(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x368:
      psq_l     f31,0xE8(r1),0,0
      lfd       f31, 0xE0(r1)
      psq_l     f30,0xD8(r1),0,0
      lfd       f30, 0xD0(r1)
      psq_l     f29,0xC8(r1),0,0
      lfd       f29, 0xC0(r1)
      psq_l     f28,0xB8(r1),0,0
      lfd       f28, 0xB0(r1)
      lwz       r31, 0xAC(r1)
      lwz       r30, 0xA8(r1)
      lwz       r0, 0xF4(r1)
      lwz       r29, 0xA4(r1)
      mtlr      r0
      addi      r1, r1, 0xF0
      blr
    */
}

/*
 * --INFO--
 * Address:	801815A0
 * Size:	00017C
 */
void Game::NaviPunchState::exec((Game::Navi*))
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
      lbz       r5, 0x20(r3)
      cmplwi    r5, 0
      beq-      .loc_0xB4
      subi      r5, r5, 0x1
      rlwinm.   r0,r5,0,24,31
      stb       r5, 0x20(r30)
      bne-      .loc_0x54
      lwz       r12, 0x0(r3)
      li        r6, 0
      lwz       r5, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x164

    .loc_0x54:
      mr        r3, r31
      li        r4, 0x40
      bl        -0x446D0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x164
      mr        r3, r31
      li        r4, 0x41
      bl        -0x446E4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x164
      mr        r3, r31
      li        r4, 0x42
      bl        -0x446F8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x164
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x164

    .loc_0xB4:
      lbz       r0, 0x24(r30)
      cmplwi    r0, 0
      bne-      .loc_0xF8
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0xF8
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0xF8
      lbz       r0, 0x1D(r30)
      cmplwi    r0, 0
      bne-      .loc_0xF8
      lbz       r0, 0x1E(r30)
      cmplwi    r0, 0x2
      bge-      .loc_0xF8
      li        r0, 0x1
      stb       r0, 0x1D(r30)

    .loc_0xF8:
      mr        r3, r31
      bl        -0x3DB98
      mr        r3, r31
      bl        -0x3AF38
      mr        r3, r31
      li        r4, 0x40
      bl        -0x44784
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x164
      mr        r3, r31
      li        r4, 0x41
      bl        -0x44798
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x164
      mr        r3, r31
      li        r4, 0x42
      bl        -0x447AC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x164
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x164:
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
 * Address:	8018171C
 * Size:	000004
 */
void Game::NaviPunchState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80181720
 * Size:	0000A0
 */
void Game::NaviPathMoveState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r0, 0x14(r3)
      beq-      .loc_0x5C
      lfs       f0, 0x0(r5)
      stfs      f0, 0x18(r29)
      lfs       f0, 0x4(r5)
      stfs      f0, 0x1C(r29)
      lfs       f0, 0x8(r5)
      stfs      f0, 0x20(r29)
      bl        0x170
      cmpwi     r3, 0x1
      bne-      .loc_0x5C
      li        r31, 0x1

    .loc_0x5C:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x84
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x84:
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
 * Address:	801817C0
 * Size:	0000D8
 */
void Game::NaviPathMoveState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lhz       r0, 0x10(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x60
      bge-      .loc_0x40
      cmpwi     r0, 0
      bge-      .loc_0x4C
      b         .loc_0x94

    .loc_0x40:
      cmpwi     r0, 0x3
      bge-      .loc_0x94
      b         .loc_0x84

    .loc_0x4C:
      bl        0x28C
      cmpwi     r3, 0x2
      bne-      .loc_0x94
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x60:
      bl        0x308
      cmpwi     r3, 0x2
      bne-      .loc_0x74
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x74:
      cmpwi     r3, 0x1
      bne-      .loc_0x94
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x84:
      bl        0x440
      cmpwi     r3, 0x2
      bne-      .loc_0x94
      li        r31, 0x1

    .loc_0x94:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0xBC
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
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
 * Address:	80181898
 * Size:	000044
 */
void Game::NaviPathMoveState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, 0x14(r3)
      cmplwi    r4, 0
      beq-      .loc_0x30
      lwz       r3, -0x6C80(r13)
      bl        0x221A4
      li        r0, 0
      stw       r0, 0x14(r31)

    .loc_0x30:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801818DC
 * Size:	0001BC
 */
void Game::NaviPathMoveState::initPathfinding((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r3
      addi      r3, r1, 0x10
      stw       r30, 0x58(r1)
      mr        r30, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x10(r1)
      li        r4, 0
      lfs       f1, 0x14(r1)
      li        r0, -0x1
      lfs       f0, 0x18(r1)
      mr        r3, r30
      stw       r4, 0x50(r1)
      stw       r4, 0x4C(r1)
      stb       r4, 0x40(r1)
      sth       r0, 0x48(r1)
      stw       r4, 0x44(r1)
      stfs      f2, 0x34(r1)
      stfs      f1, 0x38(r1)
      stfs      f0, 0x3C(r1)
      lha       r0, 0x18C(r30)
      sth       r0, 0x48(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      li        r0, 0x1
      stb       r0, 0x40(r1)

    .loc_0x90:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x34
      lwz       r3, 0x8(r3)
      bl        -0xE60C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC8
      lwz       r3, 0x4C(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0xC0
      mr        r30, r3
      b         .loc_0x108

    .loc_0xC0:
      lwz       r30, 0x50(r1)
      b         .loc_0x108

    .loc_0xC8:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x34
      lwz       r3, 0x8(r3)
      bl        -0xE644
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x100
      lwz       r3, 0x4C(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xF8
      lwz       r30, 0x50(r1)
      b         .loc_0x108

    .loc_0xF8:
      mr        r30, r3
      b         .loc_0x108

    .loc_0x100:
      li        r3, 0x2
      b         .loc_0x1A4

    .loc_0x108:
      lwz       r4, 0x14(r31)
      cmplwi    r4, 0
      beq-      .loc_0x124
      lwz       r3, -0x6C80(r13)
      bl        0x2206C
      li        r0, 0
      stw       r0, 0x14(r31)

    .loc_0x124:
      lfs       f1, 0x18(r31)
      li        r0, 0
      lfs       f0, -0x5714(r2)
      addi      r4, r1, 0x1C
      stfs      f1, 0x1C(r1)
      lwz       r3, -0x6CF8(r13)
      lfs       f1, 0x1C(r31)
      stfs      f1, 0x20(r1)
      lfs       f1, 0x20(r31)
      stfs      f1, 0x24(r1)
      stw       r0, 0x28(r1)
      stb       r0, 0x2C(r1)
      stfs      f0, 0x30(r1)
      lwz       r3, 0x8(r3)
      bl        -0xEA74
      cmplwi    r3, 0
      bne-      .loc_0x170
      li        r3, 0x2
      b         .loc_0x1A4

    .loc_0x170:
      lha       r6, 0x36(r3)
      li        r0, 0x1
      lha       r5, 0x36(r30)
      addi      r4, r1, 0x8
      lwz       r3, -0x6C80(r13)
      sth       r5, 0x8(r1)
      sth       r6, 0xA(r1)
      stb       r0, 0xC(r1)
      bl        0x21DE8
      stw       r3, 0x14(r31)
      li        r0, 0
      li        r3, 0x1
      sth       r0, 0x10(r31)

    .loc_0x1A4:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80181A98
 * Size:	000090
 */
void Game::NaviPathMoveState::execPathfinding((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, 0x14(r3)
      cmplwi    r4, 0
      bne-      .loc_0x28
      li        r3, 0x2
      b         .loc_0x7C

    .loc_0x28:
      lwz       r3, -0x6C80(r13)
      bl        0x2200C
      cmpwi     r3, 0x1
      beq-      .loc_0x70
      bge-      .loc_0x78
      cmpwi     r3, 0
      bge-      .loc_0x48
      b         .loc_0x78

    .loc_0x48:
      lwz       r3, -0x6C80(r13)
      addi      r5, r31, 0x24
      lwz       r4, 0x14(r31)
      bl        0x21EB4
      stw       r3, 0x2C(r31)
      li        r0, 0x1
      lwz       r3, 0x24(r31)
      stw       r3, 0x28(r31)
      sth       r0, 0x10(r31)
      b         .loc_0x78

    .loc_0x70:
      li        r3, 0x2
      b         .loc_0x7C

    .loc_0x78:
      li        r3, 0

    .loc_0x7C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80181B28
 * Size:	00015C
 */
void Game::NaviPathMoveState::execMove((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      lwz       r6, -0x6CF8(r13)
      mr        r30, r3
      lwz       r5, 0x24(r3)
      mr        r31, r4
      lwz       r3, 0x8(r6)
      lha       r4, 0x20(r5)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f29, 0x4C(r3)
      lwz       r12, 0x0(r31)
      lfs       f30, 0x54(r3)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      lfs       f0, 0x8(r1)
      fsubs     f30, f30, f1
      lfs       f31, -0x5780(r2)
      fsubs     f29, f29, f0
      fmuls     f1, f30, f30
      fmadds    f0, f29, f29, f31
      fadds     f1, f1, f0
      fcmpo     cr0, f1, f31
      ble-      .loc_0xAC
      ble-      .loc_0xB0
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xB0

    .loc_0xAC:
      fmr       f1, f31

    .loc_0xB0:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xD4
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f29, f29, f0
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      b         .loc_0xD8

    .loc_0xD4:
      fmr       f1, f0

    .loc_0xD8:
      lfs       f0, -0x570C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x104
      lwz       r3, 0x24(r30)
      lwz       r0, 0xC(r3)
      stw       r0, 0x24(r30)
      lwz       r0, 0x24(r30)
      cmplwi    r0, 0
      bne-      .loc_0x104
      li        r3, 0x1
      b         .loc_0x12C

    .loc_0x104:
      mr        r3, r31
      bl        -0x3E12C
      lfs       f0, -0x56E4(r2)
      li        r3, 0
      fmuls     f2, f29, f0
      fmuls     f1, f31, f0
      fmuls     f0, f30, f0
      stfs      f2, 0x1E4(r31)
      stfs      f1, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0x12C:
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x54(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80181C84
 * Size:	000008
 */
void Game::NaviPathMoveState::execMoveGoal((Game::Navi*))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::NaviPathMoveState::getWayPont((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80181C8C
 * Size:	0000E4
 */
void Game::NaviNukuState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x30
      lbz       r0, 0x0(r5)
      stb       r0, 0x18(r30)
      b         .loc_0x38

    .loc_0x30:
      li        r0, 0
      stb       r0, 0x18(r30)

    .loc_0x38:
      lbz       r0, 0x26A(r31)
      cmplwi    r0, 0
      beq-      .loc_0x50
      li        r0, 0x2B
      sth       r0, 0x16(r30)
      b         .loc_0x58

    .loc_0x50:
      li        r0, 0x2A
      sth       r0, 0x16(r30)

    .loc_0x58:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x68
      addi      r6, r31, 0x178

    .loc_0x68:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lha       r4, 0x16(r30)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mr        r5, r4
      mtctr     r12
      bctrl
      lwz       r3, 0xC0(r31)
      li        r4, 0x803
      li        r5, 0
      lwz       r0, 0x688(r3)
      sth       r0, 0x10(r30)
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lfs       f0, -0x5780(r2)
      stb       r0, 0x12(r30)
      stb       r0, 0x14(r30)
      stb       r0, 0x13(r30)
      stb       r0, 0x15(r30)
      stfs      f0, 0x118(r31)
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
 * Address:	80181D70
 * Size:	00018C
 */
void Game::NaviNukuState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r5, -0x64AC(r13)
      cmplwi    r5, 0
      beq-      .loc_0x80
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      beq-      .loc_0x80
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0x64
      li        r0, 0
      addi      r6, r1, 0xC
      stb       r0, 0xC(r1)
      li        r5, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x174

    .loc_0x64:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x174

    .loc_0x80:
      lfs       f0, -0x5780(r2)
      mr        r3, r31
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      lha       r4, 0x16(r30)
      bl        -0x44EE8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x114
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0xE8
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x8(r1)
      mr        r4, r31
      addi      r6, r1, 0x8
      li        r5, 0x1
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x108

    .loc_0xE8:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x108:
      li        r0, 0
      stb       r0, 0x26A(r31)
      b         .loc_0x174

    .loc_0x114:
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      bne-      .loc_0x174
      lbz       r0, 0x13(r30)
      cmplwi    r0, 0
      bne-      .loc_0x144
      lwz       r3, 0x278(r31)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x144
      li        r0, 0x1
      stb       r0, 0x13(r30)

    .loc_0x144:
      lbz       r0, 0x13(r30)
      cmplwi    r0, 0
      beq-      .loc_0x174
      lwz       r3, 0x278(r31)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,23,23
      bne-      .loc_0x174
      li        r0, 0x1
      stb       r0, 0x14(r30)
      lbz       r3, 0x26A(r31)
      addi      r0, r3, 0x1
      stb       r0, 0x26A(r31)

    .loc_0x174:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80181EFC
 * Size:	00002C
 */
void Game::NaviNukuState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x5718(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      stfs      f0, 0x118(r4)
      bl        -0x3D3B4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80181F28
 * Size:	000178
 */
void Game::NaviNukuState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      lwz       r0, 0x1C(r5)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      cmpwi     r0, 0x3E8
      stw       r30, 0x18(r1)
      mr        r30, r3
      beq-      .loc_0x80
      bge-      .loc_0x160
      cmpwi     r0, 0x2
      beq-      .loc_0x38
      b         .loc_0x160

    .loc_0x38:
      li        r0, 0x1
      stb       r0, 0x15(r30)
      lhz       r3, 0x10(r30)
      subi      r0, r3, 0x1
      sth       r0, 0x10(r30)
      lhz       r0, 0x10(r30)
      cmplwi    r0, 0
      bne-      .loc_0x160
      lwz       r3, 0x26C(r31)
      li        r4, 0x2821
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x12(r30)
      b         .loc_0x160

    .loc_0x80:
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0
      beq-      .loc_0x110
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      bne-      .loc_0xA8
      mr        r3, r31
      bl        -0x41980
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x160

    .loc_0xA8:
      li        r3, 0
      stb       r3, 0x14(r30)
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0xE4
      stb       r3, 0xC(r1)
      mr        r3, r30
      mr        r4, r31
      addi      r6, r1, 0xC
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x104

    .loc_0xE4:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x104:
      li        r0, 0
      stb       r0, 0x26A(r31)
      b         .loc_0x160

    .loc_0x110:
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0x140
      li        r0, 0
      addi      r6, r1, 0x8
      stb       r0, 0x8(r1)
      li        r5, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0x140:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x158:
      li        r0, 0
      stb       r0, 0x26A(r31)

    .loc_0x160:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801820A0
 * Size:	000240
 */
void Game::NaviNukuAdjustState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stfd      f30, 0x50(r1)
      psq_st    f30,0x58(r1),0,0
      stfd      f29, 0x40(r1)
      psq_st    f29,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r29, r3
      lwz       r3, -0x6B70(r13)
      mr        r30, r4
      mr        r31, r5
      li        r4, 0
      bl        0x652C0
      cmplwi    r31, 0
      bne-      .loc_0x6C
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xAD1
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x157AC8

    .loc_0x6C:
      lfs       f0, 0x0(r31)
      li        r0, 0
      mr        r4, r30
      addi      r3, r1, 0x14
      stfs      f0, 0x30(r29)
      lfs       f0, 0x4(r31)
      stfs      f0, 0x34(r29)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x38(r29)
      lfs       f0, 0xC(r31)
      stfs      f0, 0x3C(r29)
      lwz       r5, 0x10(r31)
      stw       r5, 0x40(r29)
      lwz       r5, 0x14(r31)
      stw       r5, 0x44(r29)
      lbz       r5, 0x18(r31)
      stb       r5, 0x48(r29)
      stb       r0, 0x20(r29)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x14(r31)
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x20(r1)
      lis       r3, 0x8051
      lfs       f2, 0x14(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0x28(r1)
      lfs       f0, 0x1C(r1)
      fsubs     f30, f3, f2
      lfs       f2, 0x24(r1)
      fsubs     f31, f1, f0
      lfs       f0, 0x18(r1)
      fmr       f1, f30
      fsubs     f29, f2, f0
      fmr       f2, f31
      bl        -0x14D0A8
      fmuls     f2, f29, f29
      lfs       f0, -0x5780(r2)
      fmuls     f3, f31, f31
      stfs      f1, 0x10(r29)
      fmadds    f1, f30, f30, f2
      fadds     f1, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x144
      ble-      .loc_0x148
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x148

    .loc_0x144:
      fmr       f1, f0

    .loc_0x148:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x168
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0
      fmuls     f31, f31, f0

    .loc_0x168:
      lwz       r4, 0x14(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, -0x56E0(r2)
      mr        r3, r30
      lfs       f1, 0x8(r1)
      li        r4, 0x1E
      fmuls     f0, f30, f4
      lfs       f3, 0xC(r1)
      fmuls     f2, f29, f4
      lfs       f5, 0x10(r1)
      fmuls     f4, f31, f4
      li        r5, 0x1E
      fsubs     f0, f1, f0
      li        r6, 0
      fsubs     f1, f3, f2
      li        r7, 0
      fsubs     f2, f5, f4
      stfs      f0, 0x14(r29)
      stfs      f1, 0x18(r29)
      stfs      f2, 0x1C(r29)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        -0x45328
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lfs       f0, -0x5780(r2)
      stb       r0, 0x4C(r29)
      stfs      f0, 0x118(r30)
      stb       r0, 0x5C(r29)
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r0, 0x74(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	801822E0
 * Size:	000010
 */
void wallCallback__Q24Game19NaviNukuAdjustStateFPQ24Game4NaviR10Vector3<float>(
    void)
{
    /*
    .loc_0x0:
      lbz       r4, 0x5C(r3)
      addi      r0, r4, 0x1
      stb       r0, 0x5C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801822F0
 * Size:	000064
 */
void Game::NaviNukuAdjustState::ignoreAtari((Game::Creature*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x44
      lhz       r0, 0x128(r30)
      cmplwi    r0, 0x402
      bne-      .loc_0x48

    .loc_0x44:
      li        r31, 0x1

    .loc_0x48:
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
 * Address:	80182354
 * Size:	0000C4
 */
void Game::NaviNukuAdjustState::collisionCallback((Game::Navi*,
                                                   Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r31, 0x0(r5)
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAC
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAC
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x74
      b         .loc_0xAC

    .loc_0x74:
      li        r0, 0x1
      mr        r4, r31
      stb       r0, 0x4C(r30)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      stfs      f0, 0x50(r30)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x54(r30)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x58(r30)

    .loc_0xAC:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80182418
 * Size:	000784
 */
void Game::NaviNukuAdjustState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xF0(r1)
      mflr      r0
      stw       r0, 0xF4(r1)
      stfd      f31, 0xE0(r1)
      psq_st    f31,0xE8(r1),0,0
      stfd      f30, 0xD0(r1)
      psq_st    f30,0xD8(r1),0,0
      stfd      f29, 0xC0(r1)
      psq_st    f29,0xC8(r1),0,0
      stfd      f28, 0xB0(r1)
      psq_st    f28,0xB8(r1),0,0
      stfd      f27, 0xA0(r1)
      psq_st    f27,0xA8(r1),0,0
      stfd      f26, 0x90(r1)
      psq_st    f26,0x98(r1),0,0
      stfd      f25, 0x80(r1)
      psq_st    f25,0x88(r1),0,0
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      stw       r29, 0x74(r1)
      lwz       r5, -0x64AC(r13)
      mr        r30, r3
      mr        r31, r4
      cmplwi    r5, 0
      beq-      .loc_0xB4
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      beq-      .loc_0xB4
      lbz       r0, 0x48(r30)
      cmplwi    r0, 0
      beq-      .loc_0x98
      lwz       r12, 0x0(r3)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x98:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0xB4:
      lwz       r3, 0x44(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x124
      lbz       r0, 0x48(r30)
      cmplwi    r0, 0
      beq-      .loc_0x100
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x100:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x124:
      lbz       r0, 0x48(r30)
      cmplwi    r0, 0
      bne-      .loc_0x13C
      mr        r3, r31
      li        r4, 0
      bl        -0x3C768

    .loc_0x13C:
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0x180
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x180
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x26A(r31)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x180:
      mr        r4, r31
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x50(r1)
      mr        r4, r31
      addi      r3, r1, 0x38
      stfs      f0, 0x24(r30)
      lfs       f0, 0x54(r1)
      stfs      f0, 0x28(r30)
      lfs       f0, 0x58(r1)
      stfs      f0, 0x2C(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x44(r30)
      addi      r3, r1, 0x44
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x48(r1)
      lfs       f0, 0x3C(r1)
      lfs       f3, 0x44(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x38(r1)
      lfs       f1, 0x4C(r1)
      lfs       f0, 0x40(r1)
      fsubs     f2, f3, f2
      fmuls     f4, f4, f4
      fsubs     f3, f1, f0
      lfs       f0, -0x5780(r2)
      fmadds    f1, f2, f2, f4
      fmuls     f2, f3, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x14(r30)
      lfs       f2, 0x2C(r1)
      lfs       f1, 0x1C(r30)
      lfs       f0, 0x34(r1)
      fsubs     f28, f3, f2
      lfs       f2, 0x18(r30)
      fsubs     f26, f1, f0
      lfs       f1, 0x30(r1)
      fmuls     f4, f28, f28
      lfs       f0, -0x5780(r2)
      fsubs     f27, f2, f1
      fmuls     f3, f26, f26
      fadds     f1, f4, f3
      fcmpo     cr0, f1, f0
      ble-      .loc_0x288
      fmadds    f31, f28, f28, f3
      fcmpo     cr0, f31, f0
      ble-      .loc_0x28C
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x28C

    .loc_0x288:
      fmr       f31, f0

    .loc_0x28C:
      fmuls     f5, f27, f27
      lfs       f1, -0x5780(r2)
      fabs      f2, f27
      fadds     f0, f4, f5
      frsp      f29, f2
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x2C8
      fmadds    f0, f28, f28, f5
      fadds     f30, f3, f0
      fcmpo     cr0, f30, f1
      ble-      .loc_0x2CC
      fsqrte    f0, f30
      fmuls     f30, f0, f30
      b         .loc_0x2CC

    .loc_0x2C8:
      fmr       f30, f1

    .loc_0x2CC:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f30, f0
      ble-      .loc_0x2F0
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f30
      fmuls     f28, f28, f0
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0
      b         .loc_0x2F4

    .loc_0x2F0:
      fmr       f30, f0

    .loc_0x2F4:
      lfs       f25, 0x10(r30)
      lfs       f2, 0x1FC(r31)
      fmr       f1, f25
      bl        0x28F4E4
      fabs      f2, f1
      lfs       f0, -0x56DC(r2)
      frsp      f2, f2
      fcmpo     cr0, f2, f0
      bge-      .loc_0x494
      lfs       f0, -0x5724(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x494
      lfs       f0, -0x5714(r2)
      fcmpo     cr0, f29, f0
      bge-      .loc_0x494
      stfs      f25, 0x1FC(r31)
      li        r0, 0x1
      stw       r0, -0x6D08(r13)
      lwz       r3, -0x6D0C(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr.       r29, r3
      stw       r0, -0x6D08(r13)
      bne-      .loc_0x3B4
      lbz       r0, 0x48(r30)
      cmplwi    r0, 0
      beq-      .loc_0x390
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x390:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x3B4:
      li        r4, 0
      bl        -0x47808
      lwz       r4, 0x44(r30)
      mr        r3, r29
      lhz       r4, 0x1F4(r4)
      bl        -0x38220
      lwz       r4, 0x44(r30)
      mr        r3, r29
      lhz       r4, 0x1F6(r4)
      bl        -0x38080
      lwz       r4, 0x44(r30)
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      mr        r3, r29
      lfs       f1, 0x24(r1)
      addi      r4, r1, 0x5C
      lfs       f0, 0x28(r1)
      li        r5, 0
      stfs      f2, 0x5C(r1)
      stfs      f1, 0x60(r1)
      stfs      f0, 0x64(r1)
      bl        -0x47688
      lwz       r3, 0x44(r30)
      li        r4, 0
      bl        -0x4774C
      li        r0, 0
      mr        r4, r29
      stw       r0, 0x44(r30)
      addi      r6, r1, 0xC
      li        r5, 0xC
      lbz       r3, 0x26A(r31)
      neg       r0, r3
      stw       r31, 0x10(r1)
      or        r0, r0, r3
      rlwinm    r0,r0,1,31,31
      stb       r0, 0xC(r1)
      lwz       r3, 0x28C(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x48(r30)
      mr        r3, r30
      mr        r4, r31
      addi      r6, r1, 0x8
      stb       r0, 0x8(r1)
      li        r5, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x500

    .loc_0x494:
      lfs       f0, -0x5738(r2)
      lfs       f2, 0x1FC(r31)
      fmuls     f0, f0, f1
      fadds     f1, f2, f0
      bl        0x28F314
      stfs      f1, 0x1FC(r31)
      lfs       f4, -0x574C(r2)
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x54(r3)
      fmuls     f0, f4, f1
      fcmpo     cr0, f0, f30
      ble-      .loc_0x4CC
      lfs       f0, -0x575C(r2)
      fdivs     f4, f0, f1

    .loc_0x4CC:
      fmuls     f3, f28, f4
      lfs       f0, -0x5780(r2)
      fmuls     f2, f27, f4
      fmuls     f1, f26, f4
      stfs      f3, 0x200(r31)
      stfs      f2, 0x204(r31)
      stfs      f1, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      stfs      f3, 0x1E4(r31)
      stfs      f2, 0x1E8(r31)
      stfs      f1, 0x1EC(r31)

    .loc_0x500:
      lbz       r0, 0x5C(r30)
      cmplwi    r0, 0xA
      ble-      .loc_0x560
      lbz       r0, 0x48(r30)
      cmplwi    r0, 0
      beq-      .loc_0x53C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x53C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x730

    .loc_0x560:
      lbz       r3, 0x4C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x730
      lfs       f29, 0x200(r31)
      subi      r0, r3, 0x1
      lfs       f30, 0x204(r31)
      mr        r4, r31
      lfs       f31, 0x208(r31)
      addi      r3, r1, 0x14
      stb       r0, 0x4C(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x54(r30)
      lfs       f0, 0x18(r1)
      lfs       f2, 0x50(r30)
      fsubs     f4, f1, f0
      lfs       f1, 0x14(r1)
      lfs       f3, 0x58(r30)
      lfs       f0, 0x1C(r1)
      fsubs     f5, f2, f1
      fmuls     f1, f4, f4
      fsubs     f3, f3, f0
      lfs       f0, -0x5780(r2)
      fmadds    f1, f5, f5, f1
      fmuls     f2, f3, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x5E8
      ble-      .loc_0x5EC
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x5EC

    .loc_0x5E8:
      fmr       f1, f0

    .loc_0x5EC:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x60C
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f5, f5, f0
      fmuls     f3, f3, f0
      b         .loc_0x610

    .loc_0x60C:
      fmr       f1, f0

    .loc_0x610:
      lfs       f2, -0x5780(r2)
      fcmpo     cr0, f1, f2
      ble-      .loc_0x730
      fmuls     f0, f30, f30
      fmuls     f1, f5, f31
      fmuls     f4, f31, f31
      fmadds    f0, f29, f29, f0
      fmsubs    f1, f3, f29, f1
      fneg      f3, f3
      fadds     f7, f4, f0
      fcmpo     cr0, f7, f2
      ble-      .loc_0x650
      ble-      .loc_0x654
      fsqrte    f0, f7
      fmuls     f7, f0, f7
      b         .loc_0x654

    .loc_0x650:
      fmr       f7, f2

    .loc_0x654:
      lfs       f0, -0x5780(r2)
      fmuls     f3, f3, f7
      fmuls     f8, f5, f7
      fcmpo     cr0, f1, f0
      fmuls     f1, f0, f7
      blt-      .loc_0x67C
      lfs       f0, -0x56D8(r2)
      fmuls     f3, f3, f0
      fmuls     f1, f1, f0
      fmuls     f8, f8, f0

    .loc_0x67C:
      lfs       f6, -0x56D4(r2)
      lfs       f4, -0x56D0(r2)
      fmuls     f2, f30, f6
      lfs       f0, -0x5780(r2)
      fmuls     f1, f1, f4
      fmuls     f5, f29, f6
      fmuls     f3, f3, f4
      fadds     f9, f2, f1
      fmuls     f2, f31, f6
      fmuls     f1, f8, f4
      fadds     f4, f5, f3
      fmuls     f3, f9, f9
      fadds     f5, f2, f1
      fmadds    f1, f4, f4, f3
      fmuls     f2, f5, f5
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6D4
      ble-      .loc_0x6D8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x6D8

    .loc_0x6D4:
      fmr       f1, f0

    .loc_0x6D8:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6FC
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f4, f4, f0
      fmuls     f9, f9, f0
      fmuls     f5, f5, f0
      b         .loc_0x700

    .loc_0x6FC:
      fmr       f1, f0

    .loc_0x700:
      lfs       f0, -0x5780(r2)
      fcmpu     cr0, f0, f1
      beq-      .loc_0x730
      fmuls     f0, f4, f7
      fmuls     f1, f9, f7
      fmuls     f2, f5, f7
      stfs      f0, 0x200(r31)
      stfs      f1, 0x204(r31)
      stfs      f2, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f1, 0x1E8(r31)
      stfs      f2, 0x1EC(r31)

    .loc_0x730:
      psq_l     f31,0xE8(r1),0,0
      lfd       f31, 0xE0(r1)
      psq_l     f30,0xD8(r1),0,0
      lfd       f30, 0xD0(r1)
      psq_l     f29,0xC8(r1),0,0
      lfd       f29, 0xC0(r1)
      psq_l     f28,0xB8(r1),0,0
      lfd       f28, 0xB0(r1)
      psq_l     f27,0xA8(r1),0,0
      lfd       f27, 0xA0(r1)
      psq_l     f26,0x98(r1),0,0
      lfd       f26, 0x90(r1)
      psq_l     f25,0x88(r1),0,0
      lfd       f25, 0x80(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      lwz       r0, 0xF4(r1)
      lwz       r29, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0xF0
      blr
    */
}

/*
 * --INFO--
 * Address:	80182B9C
 * Size:	000050
 */
void Game::NaviNukuAdjustState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1
      stb       r0, 0x5C(r3)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5718(r2)
      stfs      f0, 0x118(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80182BEC
 * Size:	0005EC
 */
void Game::NaviDopeState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      stw       r0, 0xE4(r1)
      stfd      f31, 0xD0(r1)
      psq_st    f31,0xD8(r1),0,0
      stfd      f30, 0xC0(r1)
      psq_st    f30,0xC8(r1),0,0
      stfd      f29, 0xB0(r1)
      psq_st    f29,0xB8(r1),0,0
      stfd      f28, 0xA0(r1)
      psq_st    f28,0xA8(r1),0,0
      stfd      f27, 0x90(r1)
      psq_st    f27,0x98(r1),0,0
      stfd      f26, 0x80(r1)
      psq_st    f26,0x88(r1),0,0
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      stw       r29, 0x74(r1)
      stw       r28, 0x70(r1)
      mr.       r28, r5
      mr        r29, r3
      mr        r30, r4
      bne-      .loc_0x78
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xBBE
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x158620

    .loc_0x78:
      lwz       r0, 0x0(r28)
      mr        r4, r30
      addi      r3, r1, 0x14
      stw       r0, 0x10(r29)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x14(r1)
      li        r4, 0
      lfs       f30, 0x18(r1)
      lis       r3, 0x804B
      lfs       f29, 0x1C(r1)
      cmplwi    r4, 0
      lfs       f26, -0x5780(r2)
      subi      r0, r3, 0x437C
      stb       r4, 0x14(r29)
      li        r31, 0
      fmr       f27, f26
      lwz       r3, 0x254(r30)
      fmr       f28, f26
      stw       r0, 0x38(r1)
      stw       r4, 0x44(r1)
      stw       r4, 0x3C(r1)
      stw       r3, 0x40(r1)
      bne-      .loc_0xF8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2A4

    .loc_0xF8:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x164

    .loc_0x110:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2A4
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x164:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x110
      b         .loc_0x2A4

    .loc_0x184:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r28, r3
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E8
      mr        r4, r28
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r31, r31, 0x1
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      fadds     f26, f26, f2
      fadds     f27, f27, f1
      fadds     f28, f28, f0

    .loc_0x1E8:
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x214
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2A4

    .loc_0x214:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x288

    .loc_0x234:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2A4
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x288:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x234

    .loc_0x2A4:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x184
      lwz       r4, 0x10(r29)
      cmpwi     r4, 0x1
      beq-      .loc_0x2D8
      cmpwi     r31, 0
      ble-      .loc_0x59C

    .loc_0x2D8:
      mr        r3, r30
      bl        -0x4209C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x59C
      lwz       r0, 0x10(r29)
      cmpwi     r0, 0x1
      bne-      .loc_0x328
      cmplwi    r30, 0
      mr        r6, r30
      beq-      .loc_0x304
      addi      r6, r30, 0x178

    .loc_0x304:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      li        r4, 0x13
      li        r5, 0x13
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      b         .loc_0x358

    .loc_0x328:
      cmplwi    r30, 0
      mr        r6, r30
      beq-      .loc_0x338
      addi      r6, r30, 0x178

    .loc_0x338:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      li        r4, 0x13
      li        r5, 0x13
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl

    .loc_0x358:
      mr        r3, r30
      bl        -0x45FF4
      stfs      f31, 0x2C(r1)
      stfs      f30, 0x30(r1)
      stfs      f29, 0x34(r1)
      lwz       r0, 0x10(r29)
      cmpwi     r0, 0x1
      bne-      .loc_0x410
      lwz       r3, 0x28C(r30)
      lfs       f0, -0x5780(r2)
      lfs       f1, 0x10(r3)
      lfs       f2, 0xC(r3)
      fsubs     f27, f1, f30
      lfs       f1, 0x14(r3)
      fsubs     f28, f2, f31
      fsubs     f26, f1, f29
      fmuls     f1, f27, f27
      fmuls     f2, f26, f26
      fmadds    f1, f28, f28, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x3C0
      ble-      .loc_0x3C4
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x3C4

    .loc_0x3C0:
      fmr       f1, f0

    .loc_0x3C4:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x3E4
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f28, f28, f0
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0

    .loc_0x3E4:
      lfs       f0, -0x56CC(r2)
      fmuls     f2, f28, f0
      fmuls     f1, f27, f0
      fmuls     f0, f26, f0
      fadds     f2, f31, f2
      fadds     f1, f30, f1
      fadds     f0, f29, f0
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      b         .loc_0x4B4

    .loc_0x410:
      cmpwi     r31, 0
      ble-      .loc_0x4A8
      xoris     r3, r31, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x6C(r1)
      lfd       f2, -0x5730(r2)
      stw       r0, 0x68(r1)
      lfs       f3, -0x5718(r2)
      lfd       f1, 0x68(r1)
      lfs       f0, -0x5780(r2)
      fsubs     f1, f1, f2
      fdivs     f2, f3, f1
      fmuls     f3, f27, f2
      fmuls     f1, f28, f2
      fmuls     f2, f26, f2
      fsubs     f27, f3, f30
      fsubs     f26, f1, f29
      fsubs     f28, f2, f31
      fmuls     f1, f27, f27
      fmuls     f2, f26, f26
      fmadds    f1, f28, f28, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x480
      ble-      .loc_0x484
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x484

    .loc_0x480:
      fmr       f1, f0

    .loc_0x484:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x4B4
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f28, f28, f0
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0
      b         .loc_0x4B4

    .loc_0x4A8:
      lfs       f28, -0x5780(r2)
      lfs       f27, -0x5718(r2)
      fmr       f26, f28

    .loc_0x4B4:
      lwz       r0, 0x10(r29)
      li        r28, 0x1
      cmpwi     r0, 0x1
      beq-      .loc_0x4E8
      lwz       r3, 0x26C(r30)
      li        r28, 0
      li        r4, 0x861
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x504

    .loc_0x4E8:
      lwz       r3, 0x26C(r30)
      li        r4, 0x860
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x504:
      lis       r3, 0x804B
      lis       r4, 0x804B
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x20(r1)
      subi      r5, r4, 0x5814
      addi      r0, r3, 0x6A78
      lis       r4, 0x804B
      lis       r3, 0x804E
      stw       r5, 0x48(r1)
      addi      r7, r4, 0x33B4
      li        r6, 0x44
      li        r5, 0
      stw       r0, 0x20(r1)
      addi      r0, r3, 0x7304
      addi      r3, r1, 0x20
      stfs      f31, 0x4C(r1)
      addi      r4, r1, 0x48
      stfs      f30, 0x50(r1)
      stfs      f29, 0x54(r1)
      stw       r7, 0x48(r1)
      stfs      f28, 0x58(r1)
      stfs      f27, 0x5C(r1)
      stfs      f26, 0x60(r1)
      sth       r28, 0x64(r1)
      sth       r6, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r0, 0x20(r1)
      bl        0x233640
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0x14(r29)
      addi      r5, r1, 0x2C
      lwz       r4, 0x10(r29)
      bl        -0x421C4
      lwz       r4, 0x10(r29)
      mr        r3, r30
      bl        -0x422C4

    .loc_0x59C:
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      psq_l     f29,0xB8(r1),0,0
      lfd       f29, 0xB0(r1)
      psq_l     f28,0xA8(r1),0,0
      lfd       f28, 0xA0(r1)
      psq_l     f27,0x98(r1),0,0
      lfd       f27, 0x90(r1)
      psq_l     f26,0x88(r1),0,0
      lfd       f26, 0x80(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      lwz       r29, 0x74(r1)
      lwz       r0, 0xE4(r1)
      lwz       r28, 0x70(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	801831D8
 * Size:	0000A0
 */
void Game::NaviDopeState::exec((Game::Navi*))
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
      mr        r3, r31
      bl        -0x3F6F4
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0
      bne-      .loc_0x54
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x88

    .loc_0x54:
      mr        r3, r31
      li        r4, 0x13
      bl        -0x46308
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x88
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x88:
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
 * Address:	80183278
 * Size:	000004
 */
void Game::NaviDopeState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8018327C
 * Size:	00004C
 */
void Game::NaviDopeState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, 0x14(r3)
      cmplwi    r0, 0
      beq-      .loc_0x3C
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x3C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801832C8
 * Size:	0000E0
 */
void Game::NaviClimbState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r6, 0x1538
      stw       r30, 0x18(r1)
      mr        r30, r5
      addi      r5, r31, 0xA0
      stw       r29, 0x14(r1)
      mr        r29, r4
      li        r4, 0xC25
      stw       r28, 0x10(r1)
      mr        r28, r3
      addi      r3, r31, 0x84
      crclr     6, 0x6
      bl        -0x158CC8
      cmplwi    r30, 0
      bne-      .loc_0x60
      addi      r3, r31, 0x84
      addi      r5, r31, 0x94
      li        r4, 0xC28
      crclr     6, 0x6
      bl        -0x158CE4

    .loc_0x60:
      cmplwi    r29, 0
      mr        r6, r29
      beq-      .loc_0x70
      addi      r6, r29, 0x178

    .loc_0x70:
      lwz       r12, 0x0(r29)
      mr        r3, r29
      li        r4, 0x14
      li        r5, 0x14
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      mr        r3, r29
      bl        -0x46408
      lwz       r0, 0x0(r30)
      mr        r3, r28
      mr        r4, r29
      stw       r0, 0x20(r28)
      lwz       r5, 0x20(r28)
      lwz       r5, 0x114(r5)
      lwz       r5, 0x0(r5)
      lwz       r0, 0x10(r5)
      stw       r0, 0x24(r28)
      bl        .loc_0xE0
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xE0:
    */
}

/*
 * --INFO--
 * Address:	801833A8
 * Size:	0000BC
 */
void Game::NaviClimbState::prepare((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      mr        r3, r31
      bl        0x1C05C
      lwz       r4, 0x20(r30)
      mr        r3, r31
      lwz       r5, 0x24(r30)
      bl        0x1BB1C
      lwz       r3, 0x24(r30)
      addi      r4, r1, 0x8
      bl        -0x4B16C
      addi      r3, r1, 0x8
      addi      r4, r30, 0x10
      bl        0x2926B4
      lfs       f1, 0xC(r1)
      lfs       f0, 0x18(r1)
      lfs       f3, 0x8(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x14(r1)
      lfs       f1, 0x10(r1)
      lfs       f0, 0x1C(r1)
      fsubs     f3, f3, f2
      fmuls     f4, f4, f4
      fsubs     f2, f1, f0
      lfs       f0, -0x5780(r2)
      fmadds    f1, f3, f3, f4
      fmuls     f2, f2, f2
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x9C
      ble-      .loc_0xA0
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xA0

    .loc_0x9C:
      fmr       f1, f0

    .loc_0xA0:
      stfs      f1, 0x1C(r30)
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80183464
 * Size:	0002BC
 */
void Game::NaviClimbState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      mr        r31, r4
      lfs       f2, -0x574C(r2)
      mr        r3, r31
      lfs       f0, 0x10(r30)
      lwz       r4, 0x278(r4)
      lfs       f1, 0x14(r30)
      fmuls     f0, f0, f2
      lfs       f4, 0x4C(r4)
      fmuls     f1, f1, f2
      lfs       f3, 0x18(r30)
      fmuls     f0, f0, f4
      fmuls     f2, f3, f2
      fmuls     f1, f1, f4
      stfs      f0, 0x200(r31)
      fmuls     f0, f2, f4
      stfs      f1, 0x204(r31)
      stfs      f0, 0x208(r31)
      lwz       r12, 0x0(r31)
      lwz       r4, -0x6514(r13)
      lwz       r12, 0x1D0(r12)
      lfs       f1, 0x54(r4)
      mtctr     r12
      bctrl
      lwz       r3, 0x278(r31)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xAC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xAC:
      mr        r3, r31
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f31, 0x108(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f2, -0x56C8(r2)
      lfs       f1, 0x1C(r30)
      lfs       f0, -0x5718(r2)
      fdivs     f1, f2, f1
      fadds     f0, f0, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1BC
      lwz       r3, 0x24(r30)
      lwz       r3, 0x10(r3)
      cmplwi    r3, 0
      beq-      .loc_0x198
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0x1
      beq-      .loc_0x108
      cmplwi    r0, 0x2
      bne-      .loc_0x198

    .loc_0x108:
      stw       r3, 0x24(r30)
      mr        r3, r31
      bl        0x1BEB0
      lwz       r4, 0x20(r30)
      mr        r3, r31
      lwz       r5, 0x24(r30)
      bl        0x1B970
      lwz       r3, 0x24(r30)
      addi      r4, r1, 0x38
      bl        -0x4B318
      addi      r3, r1, 0x38
      addi      r4, r30, 0x10
      bl        0x292508
      lfs       f1, 0x3C(r1)
      lfs       f0, 0x48(r1)
      lfs       f3, 0x38(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x44(r1)
      lfs       f1, 0x40(r1)
      lfs       f0, 0x4C(r1)
      fsubs     f3, f3, f2
      fmuls     f4, f4, f4
      fsubs     f2, f1, f0
      lfs       f0, -0x5780(r2)
      fmadds    f1, f3, f3, f4
      fmuls     f2, f2, f2
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x18C
      ble-      .loc_0x190
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x190

    .loc_0x18C:
      fmr       f1, f0

    .loc_0x190:
      stfs      f1, 0x1C(r30)
      b         .loc_0x29C

    .loc_0x198:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x29C

    .loc_0x1BC:
      fneg      f0, f1
      fcmpo     cr0, f31, f0
      bge-      .loc_0x29C
      lwz       r3, 0x24(r30)
      lwz       r3, 0xC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x27C
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0x1
      beq-      .loc_0x1EC
      cmplwi    r0, 0x2
      bne-      .loc_0x27C

    .loc_0x1EC:
      stw       r3, 0x24(r30)
      mr        r3, r31
      bl        0x1BDCC
      lwz       r4, 0x20(r30)
      mr        r3, r31
      lwz       r5, 0x24(r30)
      bl        0x1B88C
      lwz       r3, 0x24(r30)
      addi      r4, r1, 0x18
      bl        -0x4B3FC
      addi      r3, r1, 0x18
      addi      r4, r30, 0x10
      bl        0x292424
      lfs       f1, 0x1C(r1)
      lfs       f0, 0x28(r1)
      lfs       f3, 0x18(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x24(r1)
      lfs       f1, 0x20(r1)
      lfs       f0, 0x2C(r1)
      fsubs     f3, f3, f2
      fmuls     f4, f4, f4
      fsubs     f2, f1, f0
      lfs       f0, -0x5780(r2)
      fmadds    f1, f3, f3, f4
      fmuls     f2, f2, f2
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x270
      ble-      .loc_0x274
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x274

    .loc_0x270:
      fmr       f1, f0

    .loc_0x274:
      stfs      f1, 0x1C(r30)
      b         .loc_0x29C

    .loc_0x27C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x29C:
      psq_l     f31,0x68(r1),0,0
      lwz       r0, 0x74(r1)
      lfd       f31, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80183720
 * Size:	000024
 */
void Game::NaviClimbState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x1BCF4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80183744
 * Size:	0000B8
 */
void Game::NaviFallMeckState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x30
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x10(r30)
      b         .loc_0x38

    .loc_0x30:
      lfs       f0, 0x0(r5)
      stfs      f0, 0x10(r30)

    .loc_0x38:
      mr        r3, r31
      li        r4, 0x9
      lwz       r12, 0x0(r31)
      li        r5, 0x9
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x1BC80
      li        r0, 0
      lfs       f0, -0x5780(r2)
      stw       r0, 0x14(r30)
      lfs       f1, 0x10(r30)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x90
      lfs       f0, -0x56C4(r2)
      stfs      f0, 0x204(r31)
      lfs       f0, 0x204(r31)
      stfs      f0, 0x1E8(r31)
      b         .loc_0xA0

    .loc_0x90:
      lfs       f0, -0x56C0(r2)
      stfs      f0, 0x204(r31)
      lfs       f0, 0x204(r31)
      stfs      f0, 0x1E8(r31)

    .loc_0xA0:
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
 * Address:	801837FC
 * Size:	00009C
 */
void Game::NaviFallMeckState::exec((Game::Navi*))
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
      lwz       r0, 0x14(r3)
      cmpwi     r0, 0
      beq-      .loc_0x44
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)

    .loc_0x44:
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0
      bne-      .loc_0x84
      mr        r3, r31
      li        r4, 0x9
      bl        -0x46928
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x84
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x84:
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
 * Address:	80183898
 * Size:	000004
 */
void Game::NaviFallMeckState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8018389C
 * Size:	00009C
 */
void Game::NaviFallMeckState::onKeyEvent((Game::Navi*,
                                          SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      stw       r31, 0xC(r1)
      mr        r31, r3
      cmplwi    r0, 0x3E8
      bne-      .loc_0x88
      lwz       r0, 0x14(r31)
      cmpwi     r0, 0x1
      bne-      .loc_0x68
      cmplwi    r4, 0
      mr        r6, r4
      beq-      .loc_0x3C
      addi      r6, r6, 0x178

    .loc_0x3C:
      lwz       r12, 0x0(r4)
      mr        r3, r4
      li        r4, 0xE
      li        r5, 0xE
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0x2
      stw       r0, 0x14(r31)
      b         .loc_0x88

    .loc_0x68:
      cmpwi     r0, 0x2
      bne-      .loc_0x88
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x88:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80183938
 * Size:	000268
 */
void Game::NaviFallMeckState::bounceCallback((Game::Navi*, Sys::Triangle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stw       r31, 0x9C(r1)
      mr        r31, r4
      stw       r30, 0x98(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x130
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x7C(r1)
      addi      r0, r3, 0x6A50
      lis       r3, 0x804F
      li        r4, 0x54
      stw       r0, 0x7C(r1)
      subi      r0, r3, 0x7A04
      li        r7, 0x55
      li        r6, 0x56
      sth       r4, 0x80(r1)
      mr        r4, r31
      addi      r3, r1, 0x20
      sth       r7, 0x82(r1)
      sth       r6, 0x84(r1)
      stw       r5, 0x88(r1)
      stw       r5, 0x8C(r1)
      stw       r5, 0x90(r1)
      stw       r0, 0x7C(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x190(r31)
      lfs       f2, 0x20(r1)
      lwz       r12, 0x0(r3)
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      lwz       r12, 0x14(r12)
      stfs      f2, 0x5C(r1)
      stfs      f1, 0x60(r1)
      stfs      f0, 0x64(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      lis       r3, 0x804B
      lwz       r4, 0x5C(r1)
      subi      r5, r3, 0x5814
      stfs      f0, 0x60(r1)
      lis       r3, 0x804B
      lwz       r6, 0x64(r1)
      subi      r0, r3, 0x5D24
      lwz       r7, 0x60(r1)
      addi      r3, r1, 0x7C
      stw       r4, 0x14(r1)
      addi      r4, r1, 0x68
      lfs       f0, -0x575C(r2)
      stw       r7, 0x18(r1)
      lfs       f3, 0x14(r1)
      stw       r6, 0x1C(r1)
      lfs       f2, 0x18(r1)
      stw       r5, 0x68(r1)
      lfs       f1, 0x1C(r1)
      stfs      f3, 0x6C(r1)
      stfs      f2, 0x70(r1)
      stfs      f1, 0x74(r1)
      stw       r0, 0x68(r1)
      stfs      f0, 0x78(r1)
      bl        0x244D6C
      b         .loc_0x1BC

    .loc_0x130:
      lis       r3, 0x804B
      lfs       f1, -0x5718(r2)
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x4C(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804F
      li        r6, 0x53
      stw       r0, 0x4C(r1)
      subi      r0, r3, 0x79F0
      li        r5, 0
      lfs       f0, -0x575C(r2)
      stfs      f1, 0x58(r1)
      mr        r4, r31
      addi      r3, r1, 0x8
      sth       r6, 0x50(r1)
      stw       r5, 0x54(r1)
      stw       r0, 0x4C(r1)
      stfs      f0, 0x58(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      lis       r3, 0x804B
      lfs       f1, 0xC(r1)
      subi      r0, r3, 0x5814
      lfs       f0, 0x10(r1)
      addi      r3, r1, 0x4C
      stw       r0, 0x3C(r1)
      addi      r4, r1, 0x3C
      stfs      f2, 0x40(r1)
      stfs      f1, 0x44(r1)
      stfs      f0, 0x48(r1)
      bl        0x244C74

    .loc_0x1BC:
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0
      bne-      .loc_0x250
      lfs       f2, 0x10(r30)
      lfs       f1, -0x5780(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x220
      lfs       f0, -0x5718(r2)
      li        r0, 0
      stw       r0, 0x2C(r1)
      mr        r3, r31
      li        r4, 0x1
      stfs      f2, 0x30(r1)
      stfs      f0, 0x34(r1)
      stb       r0, 0x38(r1)
      bl        -0x3F520
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      addi      r6, r1, 0x2C
      li        r5, 0x10
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x250

    .loc_0x220:
      lwz       r3, -0x6958(r13)
      li        r4, 0x2
      lhz       r5, 0x2DC(r31)
      bl        0xCFDC0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x250:
      lwz       r0, 0xA4(r1)
      lwz       r31, 0x9C(r1)
      lwz       r30, 0x98(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr
    */
}

/*
 * --INFO--
 * Address:	80183BA0
 * Size:	00012C
 */
void Game::NaviFlickState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x44
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xCD4
      subi      r5, r5, 0x148C
      crclr     6, 0x6
      bl        -0x15959C
      b         .loc_0x6C

    .loc_0x44:
      lfs       f0, 0x10(r5)
      stfs      f0, 0x24(r30)
      lfs       f0, 0x4(r5)
      stfs      f0, 0x18(r30)
      lfs       f0, 0x8(r5)
      stfs      f0, 0x1C(r30)
      lfs       f0, 0xC(r5)
      stfs      f0, 0x20(r30)
      lwz       r0, 0x0(r5)
      stw       r0, 0x14(r30)

    .loc_0x6C:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x7C
      addi      r6, r31, 0x178

    .loc_0x7C:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x16
      li        r5, 0x16
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r3, 0x8051
      stw       r0, 0x10(r30)
      subi      r3, r3, 0x2E20
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x204(r31)
      lfs       f1, 0x18(r30)
      lfs       f2, 0x20(r30)
      bl        -0x14EB54
      lfs       f0, -0x56BC(r2)
      fadds     f1, f0, f1
      bl        0x28DF68
      stfs      f1, 0x1FC(r31)
      li        r4, 0x80F
      li        r5, 0
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2D0(r31)
      lwz       r4, 0x14(r3)
      bl        0x2349A4
      bl        0x2D51E8
      cmplwi    r3, 0
      beq-      .loc_0x114
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x114:
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
 * Address:	80183CCC
 * Size:	000118
 */
void Game::NaviFlickState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      lwz       r0, 0x10(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0xA0
      bge-      .loc_0x100
      cmpwi     r0, 0
      bge-      .loc_0x38
      b         .loc_0x100

    .loc_0x38:
      lfs       f0, 0x18(r30)
      mr        r3, r31
      li        r4, 0x16
      stfs      f0, 0x200(r31)
      lfs       f0, 0x20(r30)
      stfs      f0, 0x208(r31)
      bl        -0x46DF0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x100
      lfs       f1, 0x24(r30)
      li        r0, 0
      lwz       r5, 0x14(r30)
      mr        r3, r30
      lfs       f0, -0x5718(r2)
      mr        r4, r31
      stw       r5, 0x18(r1)
      addi      r6, r1, 0x18
      li        r5, 0x10
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      stb       r0, 0x24(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x100

    .loc_0xA0:
      lfs       f0, 0x200(r31)
      lfs       f1, -0x56B8(r2)
      fmuls     f0, f0, f1
      stfs      f0, 0x200(r31)
      lfs       f0, 0x208(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x208(r31)
      lwz       r0, 0x248(r31)
      cmplwi    r0, 0
      beq-      .loc_0x100
      lfs       f1, 0x24(r30)
      li        r0, 0
      lwz       r7, 0x14(r30)
      addi      r6, r1, 0x8
      lfs       f0, -0x5718(r2)
      li        r5, 0x10
      stw       r7, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)
      stb       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x100:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80183DE4
 * Size:	000004
 */
void Game::NaviFlickState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80183DE8
 * Size:	000064
 */
void Game::NaviFlickState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      mr        r5, r4
      cmplwi    r0, 0x3E8
      bne-      .loc_0x54
      lwz       r0, 0x10(r3)
      cmpwi     r0, 0
      bne-      .loc_0x54
      li        r0, 0x1
      li        r4, 0x17
      stw       r0, 0x10(r3)
      mr        r3, r5
      li        r5, 0x17
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl

    .loc_0x54:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80183E4C
 * Size:	000070
 */
void Game::NaviFlickState::bounceCallback((Game::Navi*, Sys::Triangle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x5718(r2)
      li        r5, 0x10
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r6, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r4
      lfs       f1, 0x24(r3)
      stw       r0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)
      stb       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80183EBC
 * Size:	0000C0
 */
void Game::NaviKokeDamageState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x40
      lfs       f0, -0x5780(r2)
      li        r0, 0
      stfs      f0, 0x10(r30)
      stfs      f0, 0x14(r30)
      stw       r0, 0x1C(r30)
      stb       r0, 0x20(r30)
      b         .loc_0x60

    .loc_0x40:
      lfs       f0, 0x4(r5)
      stfs      f0, 0x10(r30)
      lfs       f0, 0x8(r5)
      stfs      f0, 0x14(r30)
      lwz       r0, 0x0(r5)
      stw       r0, 0x1C(r30)
      lbz       r0, 0xC(r5)
      stb       r0, 0x20(r30)

    .loc_0x60:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x70
      addi      r6, r31, 0x178

    .loc_0x70:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x17
      li        r5, 0x17
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lwz       r3, -0x6958(r13)
      li        r4, 0x1
      lhz       r5, 0x2DC(r31)
      bl        0xCF9CC
      li        r0, 0
      stw       r0, 0x18(r30)
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
 * Address:	80183F7C
 * Size:	000208
 */
void Game::NaviKokeDamageState::exec((Game::Navi*))
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
      lwz       r5, -0x64AC(r13)
      cmplwi    r5, 0
      beq-      .loc_0x50
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      beq-      .loc_0x50
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1F0

    .loc_0x50:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x8C
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,26,26
      bne-      .loc_0x8C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1F0

    .loc_0x8C:
      lfs       f2, -0x5780(r2)
      stfs      f2, 0x1E4(r31)
      stfs      f2, 0x1E8(r31)
      stfs      f2, 0x1EC(r31)
      stfs      f2, 0x200(r31)
      stfs      f2, 0x204(r31)
      stfs      f2, 0x208(r31)
      lwz       r0, 0x18(r30)
      cmpwi     r0, 0x1
      bne-      .loc_0x110
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x14(r30)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x14(r30)
      lfs       f0, 0x14(r30)
      fcmpo     cr0, f0, f2
      cror      2, 0, 0x2
      bne-      .loc_0x110
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0xE8
      addi      r6, r31, 0x178

    .loc_0xE8:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0xE
      li        r5, 0xE
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0x2
      stw       r0, 0x18(r30)

    .loc_0x110:
      lwz       r0, 0x18(r30)
      cmpwi     r0, 0
      bne-      .loc_0x180
      mr        r3, r31
      li        r4, 0x17
      bl        -0x47174
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x180
      lwz       r3, 0x8(r30)
      lwz       r5, 0x1C(r3)
      cmpwi     r5, -0x1
      bne-      .loc_0x164
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x180

    .loc_0x164:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      mr        r4, r31
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x180:
      lwz       r0, 0x18(r30)
      cmpwi     r0, 0x2
      bne-      .loc_0x1F0
      mr        r3, r31
      li        r4, 0xE
      bl        -0x471E4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1F0
      lwz       r3, 0x8(r30)
      lwz       r5, 0x1C(r3)
      cmpwi     r5, -0x1
      bne-      .loc_0x1D4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1F0

    .loc_0x1D4:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      mr        r4, r31
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1F0:
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
 * Address:	80184184
 * Size:	000004
 */
void Game::NaviKokeDamageState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80184188
 * Size:	00009C
 */
void Game::NaviKokeDamageState::onKeyEvent((Game::Navi*,
                                            SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      mr        r5, r3
      cmplwi    r0, 0x3E8
      bne-      .loc_0x8C
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      bne-      .loc_0x44
      li        r0, 0x1
      mr        r3, r4
      stw       r0, 0x18(r5)
      lfs       f1, 0x10(r5)
      lbz       r4, 0x20(r5)
      bl        -0x3FBB4
      b         .loc_0x8C

    .loc_0x44:
      cmpwi     r0, 0x2
      bne-      .loc_0x8C
      lwz       r5, 0x8(r5)
      lwz       r5, 0x1C(r5)
      cmpwi     r5, -0x1
      bne-      .loc_0x78
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x8C

    .loc_0x78:
      lwz       r12, 0x0(r3)
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x8C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80184224
 * Size:	00006C
 */
void Game::NaviSaraiState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x9
      li        r6, 0
      stw       r0, 0x14(r1)
      li        r7, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x9
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x10(r30)
      sth       r0, 0x14(r30)
      bl        -0x3EDE8
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
 * Address:	80184290
 * Size:	000380
 */
void Game::NaviSaraiState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      stw       r28, 0x20(r1)
      lwz       r0, 0x10(r3)
      mr        r30, r3
      mr        r31, r4
      rlwinm.   r0,r0,0,4,4
      beq-      .loc_0x54
      lhz       r3, 0x14(r30)
      cmplwi    r3, 0
      beq-      .loc_0x54
      subi      r0, r3, 0x1
      sth       r0, 0x14(r30)

    .loc_0x54:
      lwz       r0, 0x10(r30)
      mr        r3, r31
      rlwinm    r0,r0,1,0,30
      stw       r0, 0x10(r30)
      bl        0x1B280
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x9C
      mr        r3, r31
      bl        0x1B120
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xCC

    .loc_0x9C:
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0xCC
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,4,7
      beq-      .loc_0xCC
      lwz       r0, 0x10(r30)
      ori       r0, r0, 0x1
      stw       r0, 0x10(r30)
      lhz       r3, 0x14(r30)
      addi      r0, r3, 0x1
      sth       r0, 0x14(r30)

    .loc_0xCC:
      lwz       r3, -0x6C18(r13)
      bl        0x30C60
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x28C
      lwz       r4, -0x6C18(r13)
      li        r3, 0
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x1
      beq-      .loc_0xF8
      cmpwi     r0, 0x3
      bne-      .loc_0xFC

    .loc_0xF8:
      li        r3, 0x1

    .loc_0xFC:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x28C
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0x28C
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,20,20
      beq-      .loc_0x28C
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r31)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r28, r3
      bl        -0x42F88
      mr        r29, r3
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x28C
      cmpwi     r29, 0x8
      beq-      .loc_0x28C
      cmpwi     r29, 0x9
      beq-      .loc_0x28C
      cmpwi     r29, 0x2
      beq-      .loc_0x28C
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      bl        -0x36BAC
      lhz       r0, 0x2DC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x1A4
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188D
      li        r5, 0
      bl        0x1B4204
      b         .loc_0x1D8

    .loc_0x1A4:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x1C8
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188F
      li        r5, 0
      bl        0x1B41E0
      b         .loc_0x1D8

    .loc_0x1C8:
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188E
      li        r5, 0
      bl        0x1B41CC

    .loc_0x1D8:
      lhz       r0, 0x2DC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x204
      lwz       r3, 0x26C(r28)
      li        r4, 0x8A6
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x250

    .loc_0x204:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x234
      lwz       r3, 0x26C(r28)
      li        r4, 0x8A8
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x250

    .loc_0x234:
      lwz       r3, 0x26C(r28)
      li        r4, 0x8A7
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x250:
      lwz       r3, 0x274(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x28C
      lwz       r3, 0x270(r28)
      mr        r4, r28
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x28C:
      lhz       r3, 0x14(r30)
      lfs       f31, -0x56FC(r2)
      cmplwi    r3, 0x6
      blt-      .loc_0x34C
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x56B0(r2)
      stw       r0, 0x8(r1)
      lfs       f1, -0x56B4(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, -0x56F8(r2)
      fsubs     f2, f2, f3
      fdivs     f30, f2, f1
      fmadds    f31, f0, f30, f0
      bl        -0xBAFB4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      fmuls     f0, f30, f30
      lfd       f3, -0x5730(r2)
      stw       r0, 0x10(r1)
      lfs       f1, -0x5758(r2)
      lfd       f2, 0x10(r1)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x34C
      bl        -0xBAFE8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lfd       f3, -0x5730(r2)
      stw       r0, 0x10(r1)
      lfs       f1, -0x5758(r2)
      lfd       f2, 0x10(r1)
      lfs       f0, -0x5744(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x34C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x12
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x34C:
      stfs      f31, 0x234(r31)
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r0, 0x54(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80184610
 * Size:	00000C
 */
void Game::NaviSaraiState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      lfs       f0, -0x56FC(r2)
      stfs      f0, 0x234(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8018461C
 * Size:	00006C
 */
void Game::NaviSaraiExitState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        0x1ADF0
      mr        r3, r31
      li        r4, 0x9
      lwz       r12, 0x0(r31)
      li        r5, 0x9
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80184688
 * Size:	00004C
 */
void Game::NaviSaraiExitState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x248(r4)
      cmplwi    r0, 0
      bne-      .loc_0x24
      lwz       r0, 0xC8(r4)
      cmplwi    r0, 0
      beq-      .loc_0x3C

    .loc_0x24:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801846D4
 * Size:	000034
 */
void Game::NaviSaraiExitState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0x1
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
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
 * Address:	80184708
 * Size:	000034
 */
void Game::NaviSaraiExitState::bounceCallback((Game::Navi*, Sys::Triangle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
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
 * Address:	8018473C
 * Size:	0005FC
 */
void Game::NaviContainerState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x100(r1)
      mflr      r0
      stw       r0, 0x104(r1)
      stmw      r23, 0xDC(r1)
      mr.       r23, r5
      lis       r5, 0x8048
      mr        r28, r3
      mr        r29, r4
      subi      r31, r5, 0x1538
      bne-      .loc_0x3C
      addi      r3, r31, 0x84
      addi      r5, r31, 0x94
      li        r4, 0xE12
      crclr     6, 0x6
      bl        -0x15A134

    .loc_0x3C:
      lwz       r0, 0x0(r23)
      stw       r0, 0x10(r28)
      lwz       r3, -0x6560(r13)
      lwz       r4, 0x278(r29)
      bl        0x2778F0
      lwz       r3, 0x10(r28)
      li        r0, 0
      lhz       r30, 0x22E(r3)
      stb       r0, 0x20(r28)
      lwz       r3, 0x10(r28)
      lhz       r3, 0x22E(r3)
      cmplwi    r3, 0x4
      bne-      .loc_0x41C
      li        r7, -0x1
      li        r30, 0x64
      lis       r3, 0x804B
      stw       r7, 0x60(r1)
      addi      r23, r3, 0x1148
      li        r6, 0x4
      stw       r6, 0x60(r1)
      lis       r24, 0x804B
      li        r12, 0x3E8
      li        r11, 0x14
      li        r10, 0x32
      li        r9, 0x3C
      li        r8, 0xC8
      lis       r5, 0x804B
      lis       r4, 0x804B
      lwz       r3, -0x6B70(r13)
      li        r26, 0x1
      stw       r23, 0x40(r1)
      addi      r24, r24, 0x3164
      addi      r25, r5, 0x314C
      stw       r23, 0x48(r1)
      addi      r27, r4, 0x3134
      li        r5, 0x3
      addi      r3, r3, 0xA8
      stw       r23, 0x58(r1)
      li        r4, 0x4
      stw       r23, 0x90(r1)
      stw       r7, 0x98(r1)
      stw       r0, 0x44(r1)
      stw       r24, 0x40(r1)
      stw       r0, 0x4C(r1)
      stw       r25, 0x48(r1)
      stw       r26, 0x50(r1)
      stb       r0, 0x54(r1)
      stw       r0, 0x5C(r1)
      stw       r27, 0x58(r1)
      stw       r30, 0x64(r1)
      stw       r12, 0x68(r1)
      stw       r0, 0x6C(r1)
      stw       r11, 0x70(r1)
      stw       r10, 0x74(r1)
      stw       r9, 0x78(r1)
      stw       r8, 0x7C(r1)
      stw       r0, 0x80(r1)
      stb       r0, 0x84(r1)
      stw       r0, 0x88(r1)
      sth       r0, 0x8C(r1)
      stw       r0, 0x94(r1)
      stw       r27, 0x90(r1)
      stw       r30, 0x9C(r1)
      stw       r12, 0xA0(r1)
      stw       r0, 0xA4(r1)
      stw       r11, 0xA8(r1)
      stw       r10, 0xAC(r1)
      stw       r9, 0xB0(r1)
      stw       r8, 0xB4(r1)
      stw       r0, 0xB8(r1)
      stb       r0, 0xBC(r1)
      stw       r0, 0xC0(r1)
      sth       r0, 0xC4(r1)
      stb       r0, 0xC8(r1)
      stb       r0, 0xC9(r1)
      stw       r5, 0x98(r1)
      stb       r0, 0xCA(r1)
      stw       r6, 0x60(r1)
      bl        0x6CD00
      lwz       r4, 0x10(r28)
      lwz       r0, 0x1E4(r4)
      sub.      r0, r3, r0
      bge-      .loc_0x18C
      li        r0, 0

    .loc_0x18C:
      lis       r3, 0x2
      stw       r0, 0x64(r1)
      subi      r3, r3, 0xC00
      li        r0, 0
      stw       r3, 0x68(r1)
      lhz       r23, 0x2DC(r29)
      cmpwi     r23, 0
      blt-      .loc_0x1B8
      cmpwi     r23, 0x7
      bge-      .loc_0x1B8
      li        r0, 0x1

    .loc_0x1B8:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1D4
      addi      r3, r31, 0xCC
      addi      r5, r31, 0x94
      li        r4, 0x77
      crclr     6, 0x6
      bl        -0x15A2CC

    .loc_0x1D4:
      lis       r3, 0x8051
      rlwinm    r5,r23,5,0,26
      addi      r0, r3, 0x22EC
      li        r4, 0x4
      add       r3, r0, r5
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r4, 0x64
      stw       r3, 0x6C(r1)
      li        r0, 0
      stw       r4, 0x70(r1)
      lhz       r23, 0x2DC(r29)
      cmpwi     r23, 0
      blt-      .loc_0x220
      cmpwi     r23, 0x7
      bge-      .loc_0x220
      li        r0, 0x1

    .loc_0x220:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x23C
      addi      r3, r31, 0xCC
      addi      r5, r31, 0x94
      li        r4, 0x73
      crclr     6, 0x6
      bl        -0x15A334

    .loc_0x23C:
      lis       r3, 0x8051
      rlwinm    r4,r23,5,0,26
      addi      r0, r3, 0x22EC
      add       r3, r0, r4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)
      li        r3, -0x1
      bl        0x4C4C0
      mr        r30, r3
      li        r3, -0x1
      bl        0x4C540
      sub       r0, r30, r3
      li        r3, -0x1
      stw       r0, 0x78(r1)
      bl        0x4C530
      subfic    r4, r3, 0x64
      lwz       r3, -0x6B70(r13)
      li        r0, 0x3
      stw       r4, 0x7C(r1)
      addi      r3, r3, 0xA8
      li        r4, 0x3
      stw       r0, 0x98(r1)
      bl        0x6CBD4
      lwz       r4, 0x10(r28)
      lwz       r0, 0x1E8(r4)
      sub.      r0, r3, r0
      bge-      .loc_0x2B8
      li        r0, 0

    .loc_0x2B8:
      lis       r3, 0x2
      stw       r0, 0x9C(r1)
      subi      r3, r3, 0xC00
      li        r0, 0
      stw       r3, 0xA0(r1)
      lhz       r23, 0x2DC(r29)
      cmpwi     r23, 0
      blt-      .loc_0x2E4
      cmpwi     r23, 0x7
      bge-      .loc_0x2E4
      li        r0, 0x1

    .loc_0x2E4:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x300
      addi      r3, r31, 0xCC
      addi      r5, r31, 0x94
      li        r4, 0x77
      crclr     6, 0x6
      bl        -0x15A3F8

    .loc_0x300:
      lis       r3, 0x8051
      rlwinm    r5,r23,5,0,26
      addi      r0, r3, 0x22EC
      li        r4, 0x3
      add       r3, r0, r5
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r4, 0x64
      stw       r3, 0xA4(r1)
      li        r0, 0
      stw       r4, 0xA8(r1)
      lhz       r23, 0x2DC(r29)
      cmpwi     r23, 0
      blt-      .loc_0x34C
      cmpwi     r23, 0x7
      bge-      .loc_0x34C
      li        r0, 0x1

    .loc_0x34C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x368
      addi      r3, r31, 0xCC
      addi      r5, r31, 0x94
      li        r4, 0x73
      crclr     6, 0x6
      bl        -0x15A460

    .loc_0x368:
      lis       r3, 0x8051
      rlwinm    r4,r23,5,0,26
      addi      r0, r3, 0x22EC
      add       r3, r0, r4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xAC(r1)
      li        r3, -0x1
      bl        0x4C394
      mr        r29, r3
      li        r3, -0x1
      bl        0x4C414
      sub       r0, r29, r3
      li        r3, -0x1
      stw       r0, 0xB0(r1)
      bl        0x4C404
      subfic    r0, r3, 0x64
      lwz       r3, -0x6B70(r13)
      stw       r0, 0xB4(r1)
      li        r4, 0x4
      bl        0x62524
      stb       r3, 0xC8(r1)
      li        r4, 0x3
      lwz       r3, -0x6B70(r13)
      bl        0x62514
      stb       r3, 0xC9(r1)
      lwz       r4, -0x6B70(r13)
      lbz       r0, 0xC8(r1)
      lbz       r4, 0x2F(r4)
      cmplwi    r0, 0
      rlwinm    r0,r4,0,31,31
      stb       r0, 0xCA(r1)
      bne-      .loc_0x408
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x408
      li        r0, 0
      stb       r0, 0x20(r28)
      b         .loc_0x5A8

    .loc_0x408:
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x40
      bl        0x27A574
      stb       r3, 0x20(r28)
      b         .loc_0x5A8

    .loc_0x41C:
      lis       r4, 0x804B
      li        r3, -0x1
      addi      r11, r4, 0x1148
      stw       r3, 0x10(r1)
      lis       r4, 0x804B
      lwz       r3, -0x6B70(r13)
      li        r10, 0x64
      li        r9, 0x3E8
      li        r8, 0x14
      li        r7, 0x32
      li        r6, 0x3C
      li        r5, 0xC8
      stw       r11, 0x8(r1)
      addi      r11, r4, 0x3134
      mr        r4, r30
      addi      r3, r3, 0xA8
      stw       r0, 0xC(r1)
      stw       r11, 0x8(r1)
      stw       r10, 0x14(r1)
      stw       r9, 0x18(r1)
      stw       r0, 0x1C(r1)
      stw       r8, 0x20(r1)
      stw       r7, 0x24(r1)
      stw       r6, 0x28(r1)
      stw       r5, 0x2C(r1)
      stw       r0, 0x30(r1)
      stb       r0, 0x34(r1)
      stw       r0, 0x38(r1)
      sth       r0, 0x3C(r1)
      stw       r30, 0x10(r1)
      bl        0x6C9E0
      lis       r4, 0x2
      stw       r3, 0x14(r1)
      subi      r3, r4, 0xC00
      li        r0, 0
      stw       r3, 0x18(r1)
      lhz       r23, 0x2DC(r29)
      cmpwi     r23, 0
      blt-      .loc_0x4C4
      cmpwi     r23, 0x7
      bge-      .loc_0x4C4
      li        r0, 0x1

    .loc_0x4C4:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x4E0
      addi      r3, r31, 0xCC
      addi      r5, r31, 0x94
      li        r4, 0x77
      crclr     6, 0x6
      bl        -0x15A5D8

    .loc_0x4E0:
      lis       r3, 0x8051
      rlwinm    r5,r23,5,0,26
      addi      r0, r3, 0x22EC
      mr        r4, r30
      add       r3, r0, r5
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r4, 0x64
      stw       r3, 0x1C(r1)
      li        r0, 0
      stw       r4, 0x20(r1)
      lhz       r23, 0x2DC(r29)
      cmpwi     r23, 0
      blt-      .loc_0x52C
      cmpwi     r23, 0x7
      bge-      .loc_0x52C
      li        r0, 0x1

    .loc_0x52C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x548
      addi      r3, r31, 0xCC
      addi      r5, r31, 0x94
      li        r4, 0x73
      crclr     6, 0x6
      bl        -0x15A640

    .loc_0x548:
      lis       r3, 0x8051
      rlwinm    r4,r23,5,0,26
      addi      r0, r3, 0x22EC
      add       r3, r0, r4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      li        r3, -0x1
      bl        0x4C1B4
      mr        r29, r3
      li        r3, -0x1
      bl        0x4C234
      sub       r0, r29, r3
      li        r3, -0x1
      stw       r0, 0x28(r1)
      bl        0x4C224
      subfic    r0, r3, 0x64
      lwz       r3, -0x6560(r13)
      stw       r0, 0x2C(r1)
      addi      r4, r1, 0x8
      bl        0x27A11C
      stb       r3, 0x20(r28)

    .loc_0x5A8:
      lbz       r0, 0x20(r28)
      cmplwi    r0, 0
      beq-      .loc_0x5D4
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0xD8
      li        r4, 0x1
      bl        0x30290
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0xD8
      li        r4, 0x1
      bl        0x30278

    .loc_0x5D4:
      li        r0, 0x1
      stb       r0, 0x18(r28)
      lwz       r3, 0x10(r28)
      lhz       r0, 0x22E(r3)
      stw       r0, 0x1C(r28)
      lmw       r23, 0xDC(r1)
      lwz       r0, 0x104(r1)
      mtlr      r0
      addi      r1, r1, 0x100
      blr
    */
}

/*
 * --INFO--
 * Address:	80184D38
 * Size:	000270
 */
void Game::NaviContainerState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      lbz       r0, 0x20(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x44:
      lwz       r3, 0x10(r30)
      lhz       r0, 0x22E(r3)
      cmplwi    r0, 0x4
      bne-      .loc_0x184
      lwz       r3, -0x6560(r13)
      bl        0x27A574
      cmpwi     r3, 0x2
      beq-      .loc_0x98
      bge-      .loc_0x164
      cmpwi     r3, 0x1
      bge-      .loc_0x74
      b         .loc_0x164

    .loc_0x74:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x98:
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0xC
      addi      r5, r1, 0x8
      bl        0x27A658
      lwz       r0, 0xC(r1)
      li        r5, 0
      li        r3, 0x1
      cmpwi     r0, 0
      beq-      .loc_0xC8
      mr        r5, r0
      li        r3, 0x1
      b         .loc_0xDC

    .loc_0xC8:
      lwz       r0, 0x8(r1)
      cmpwi     r0, 0
      beq-      .loc_0xDC
      mr        r5, r0
      li        r3, 0

    .loc_0xDC:
      cmpwi     r5, 0
      bge-      .loc_0x114
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF8
      li        r0, 0x4
      stw       r0, 0x1C(r30)
      b         .loc_0x100

    .loc_0xF8:
      li        r0, 0x3
      stw       r0, 0x1C(r30)

    .loc_0x100:
      lwz       r3, 0x10(r30)
      neg       r4, r5
      lwz       r5, 0x1C(r30)
      bl        -0xB638
      b         .loc_0x140

    .loc_0x114:
      ble-      .loc_0x140
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x12C
      li        r0, 0x4
      stw       r0, 0x1C(r30)
      b         .loc_0x134

    .loc_0x12C:
      li        r0, 0x3
      stw       r0, 0x1C(r30)

    .loc_0x134:
      mr        r3, r30
      mr        r4, r31
      bl        .loc_0x270

    .loc_0x140:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x164:
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      b         .loc_0x258

    .loc_0x184:
      lwz       r3, -0x6560(r13)
      bl        0x27A090
      cmpwi     r3, 0x2
      beq-      .loc_0x1C8
      bge-      .loc_0x23C
      cmpwi     r3, 0x1
      bge-      .loc_0x1A4
      b         .loc_0x23C

    .loc_0x1A4:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x1C8:
      lwz       r3, -0x6560(r13)
      bl        0x27A114
      mr.       r0, r3
      bge-      .loc_0x204
      lwz       r3, 0x10(r30)
      lhz       r5, 0x22E(r3)
      cmplwi    r5, 0x4
      bne-      .loc_0x1F8
      lwz       r5, 0x1C(r30)
      neg       r4, r0
      bl        -0xB71C
      b         .loc_0x218

    .loc_0x1F8:
      neg       r4, r0
      bl        -0xB728
      b         .loc_0x218

    .loc_0x204:
      ble-      .loc_0x218
      mr        r3, r30
      mr        r4, r31
      mr        r5, r0
      bl        .loc_0x270

    .loc_0x218:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x23C:
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0x258:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x270:
    */
}

/*
 * --INFO--
 * Address:	80184FA8
 * Size:	0002A0
 */
void Game::NaviContainerState::enterPikis((Game::Navi*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x1D0(r1)
      mflr      r0
      stw       r0, 0x1D4(r1)
      stmw      r26, 0x1B8(r1)
      li        r28, 0
      cmplwi    r28, 0
      mr        r29, r3
      mr        r30, r5
      li        r31, 0
      lwz       r6, 0x254(r4)
      lis       r4, 0x804B
      subi      r0, r4, 0x437C
      stw       r0, 0x10(r1)
      stw       r28, 0x1C(r1)
      stw       r28, 0x14(r1)
      stw       r6, 0x18(r1)
      bne-      .loc_0x60
      mr        r3, r6
      lwz       r12, 0x0(r6)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0x21C

    .loc_0x60:
      mr        r3, r6
      lwz       r12, 0x0(r6)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0xD0

    .loc_0x7C:
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x21C
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)

    .loc_0xD0:
      lwz       r12, 0x10(r1)
      addi      r3, r1, 0x10
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x7C
      b         .loc_0x21C

    .loc_0xF0:
      lwz       r3, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x10(r29)
      li        r5, 0
      lhz       r4, 0x22E(r4)
      cmplwi    r4, 0x4
      bne-      .loc_0x130
      lwz       r4, 0x1C(r29)
      lbz       r0, 0x2B8(r3)
      cmpw      r4, r0
      bne-      .loc_0x140
      li        r5, 0x1
      b         .loc_0x140

    .loc_0x130:
      lbz       r0, 0x2B8(r3)
      cmpw      r0, r4
      bne-      .loc_0x140
      li        r5, 0x1

    .loc_0x140:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x160
      addi      r31, r31, 0x1
      addi      r4, r1, 0x20
      cmpw      r31, r30
      stwx      r3, r4, r28
      addi      r28, r28, 0x4
      bge-      .loc_0x23C

    .loc_0x160:
      lwz       r0, 0x1C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x18C
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0x21C

    .loc_0x18C:
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)
      b         .loc_0x200

    .loc_0x1AC:
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x21C
      lwz       r3, 0x18(r1)
      lwz       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x14(r1)

    .loc_0x200:
      lwz       r12, 0x10(r1)
      addi      r3, r1, 0x10
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1AC

    .loc_0x21C:
      lwz       r3, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x14(r1)
      cmplw     r4, r3
      bne+      .loc_0xF0

    .loc_0x23C:
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r27, r1, 0x20
      li        r26, 0
      addi      r30, r4, 0x530
      addi      r28, r3, 0x524
      b         .loc_0x284

    .loc_0x258:
      lwz       r0, 0x10(r29)
      addi      r5, r1, 0x8
      lwz       r3, 0x0(r27)
      li        r4, 0x2
      stw       r30, 0x8(r1)
      stw       r28, 0x8(r1)
      stw       r0, 0xC(r1)
      lwz       r3, 0x294(r3)
      bl        0x11D74
      addi      r27, r27, 0x4
      addi      r26, r26, 0x1

    .loc_0x284:
      cmpw      r26, r31
      blt+      .loc_0x258
      lmw       r26, 0x1B8(r1)
      lwz       r0, 0x1D4(r1)
      mtlr      r0
      addi      r1, r1, 0x1D0
      blr
    */
}

/*
 * --INFO--
 * Address:	80185248
 * Size:	000044
 */
void Game::NaviContainerState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x14(r1)
      subi      r5, r4, 0x1460
      li        r4, 0
      lwz       r3, -0x6C18(r13)
      bl        0x2FD28
      lis       r4, 0x8048
      lwz       r3, -0x6C18(r13)
      subi      r5, r4, 0x1460
      li        r4, 0
      bl        0x2FD0C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8018528C
 * Size:	000140
 */
void Game::NaviAbsorbState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr.       r31, r5
      stw       r30, 0x28(r1)
      mr        r30, r4
      stw       r29, 0x24(r1)
      mr        r29, r3
      bne-      .loc_0x44
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xF4B
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x15AC8C

    .loc_0x44:
      lwz       r0, 0x0(r31)
      stw       r0, 0x14(r29)
      lwz       r0, 0x14(r29)
      cmplwi    r0, 0
      bne-      .loc_0x74
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xF4D
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x15ACBC

    .loc_0x74:
      cmplwi    r30, 0
      mr        r6, r30
      beq-      .loc_0x84
      addi      r6, r30, 0x178

    .loc_0x84:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      li        r4, 0x37
      li        r5, 0x37
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lwz       r3, 0x26C(r30)
      li        r4, 0x80C
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      addi      r3, r1, 0x8
      stb       r0, 0x10(r29)
      stb       r0, 0x18(r29)
      lwz       r4, 0x14(r29)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r30
      lfs       f1, 0xC(r1)
      addi      r4, r1, 0x14
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x477BC
      lwz       r3, -0x6960(r13)
      lhz       r4, 0x2DC(r30)
      bl        0xCD0D0
      lwz       r3, -0x6960(r13)
      li        r5, 0
      lhz       r4, 0x2DC(r30)
      bl        0xCD1A0
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801853CC
 * Size:	0000F0
 */
void Game::NaviAbsorbState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x5780(r2)
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      stfs      f0, 0x208(r4)
      stfs      f0, 0x200(r4)
      stfs      f0, 0x1E4(r4)
      stfs      f0, 0x1E8(r4)
      stfs      f0, 0x1EC(r4)
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0x1
      bne-      .loc_0xA4
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA4
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      bne-      .loc_0xA4
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r5, r4, 0x5D00
      stw       r31, 0xC(r1)
      addi      r0, r3, 0x7430
      addi      r4, r1, 0x8
      stw       r5, 0x8(r1)
      stw       r0, 0x8(r1)
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x18(r30)

    .loc_0xA4:
      mr        r3, r31
      li        r4, 0x37
      bl        -0x4854C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xD8:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801854BC
 * Size:	000174
 */
void Game::NaviAbsorbState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      lwz       r0, 0x1C(r5)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      cmpwi     r0, 0x1
      stw       r30, 0x18(r1)
      mr        r30, r3
      stw       r29, 0x14(r1)
      beq-      .loc_0x54
      bge-      .loc_0x3C
      cmpwi     r0, 0
      bge-      .loc_0x48
      b         .loc_0x158

    .loc_0x3C:
      cmpwi     r0, 0x3E8
      beq-      .loc_0xC4
      b         .loc_0x158

    .loc_0x48:
      li        r0, 0x1
      stb       r0, 0x10(r30)
      b         .loc_0x158

    .loc_0x54:
      lwz       r3, 0x14(r30)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x406
      beq-      .loc_0x80
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xF74
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x15AEF8

    .loc_0x80:
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0
      mr        r3, r29
      bl        0x4E83C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x158

    .loc_0xB0:
      li        r0, 0x2
      mr        r3, r31
      stb       r0, 0x10(r30)
      bl        -0x484B8
      b         .loc_0x158

    .loc_0xC4:
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      beq-      .loc_0x140
      lwz       r3, 0x14(r30)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x406
      beq-      .loc_0xFC
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xF80
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x15AF74

    .loc_0xFC:
      lwz       r4, 0x14(r30)
      mr        r3, r31
      lbz       r5, 0x1E0(r4)
      subfic    r4, r5, 0x1
      subi      r0, r5, 0x1
      or        r0, r4, r0
      rlwinm    r4,r0,1,31,31
      bl        -0x446C8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0x140:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x158:
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
 * Address:	80185630
 * Size:	000040
 */
void Game::NaviAbsorbState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r3, -0x6960(r13)
      lhz       r4, 0x2DC(r4)
      bl        0xCCE90
      lwz       r3, -0x6960(r13)
      lhz       r4, 0x2DC(r31)
      bl        0xCCF84
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80185670
 * Size:	000084
 */
void Game::NaviDamagedState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      bne-      .loc_0x38
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x14B4
      li        r4, 0xFA2
      subi      r5, r5, 0x14A4
      crclr     6, 0x6
      bl        -0x15B064

    .loc_0x38:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x48
      addi      r6, r31, 0x178

    .loc_0x48:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x4
      li        r5, 0x4
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x48788
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801856F4
 * Size:	000098
 */
void Game::NaviDamagedState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x4
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x487EC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x80
      lwz       r3, 0x8(r30)
      lwz       r5, 0x1C(r3)
      cmpwi     r5, -0x1
      bne-      .loc_0x64
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x80

    .loc_0x64:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      mr        r4, r31
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x80:
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
 * Address:	8018578C
 * Size:	000028
 */
void Game::NaviDamagedState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0x3C
      stw       r0, 0x14(r1)
      bl        -0x413A0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801857B4
 * Size:	000068
 */
void Game::NaviDamagedState::onKeyEvent((Game::Navi*,
                                         SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x58
      lwz       r5, 0x8(r3)
      lwz       r5, 0x1C(r5)
      cmpwi     r5, -0x1
      bne-      .loc_0x44
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x58

    .loc_0x44:
      lwz       r12, 0x0(r3)
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x58:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8018581C
 * Size:	00005C
 */
void Game::NaviDeadState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r3, -0x6C18(r13)
      lhz       r4, 0x2DC(r4)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xD0(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80185878
 * Size:	000020
 */
void Game::NaviDeadState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x1E4(r4)
      stfs      f0, 0x1E8(r4)
      stfs      f0, 0x1EC(r4)
      stfs      f0, 0x200(r4)
      stfs      f0, 0x204(r4)
      stfs      f0, 0x208(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	80185898
 * Size:	000004
 */
void Game::NaviDeadState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8018589C
 * Size:	000040
 */
void Game::NaviDeadState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x30
      mr        r3, r4
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002FC
 */
void Game::NaviGatherInitArg::findTargetPikmin((Game::Navi*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801858DC
 * Size:	0000F8
 */
void Game::NaviGatherState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      mr        r30, r4
      beq-      .loc_0x38
      lbz       r0, 0x0(r5)
      stb       r0, 0x10(r31)
      lbz       r0, 0x1(r5)
      stb       r0, 0x11(r31)
      b         .loc_0x40

    .loc_0x38:
      li        r0, 0
      stb       r0, 0x10(r31)

    .loc_0x40:
      mr        r3, r30
      li        r4, 0xA
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        -0x489F0
      lwz       r3, 0x28C(r30)
      bl        -0x205D8
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0
      bne-      .loc_0x90
      lwz       r3, -0x6958(r13)
      li        r4, 0x3
      lhz       r5, 0x2DC(r30)
      bl        0xCDFBC

    .loc_0x90:
      lwz       r31, 0x2D0(r30)
      addi      r4, r1, 0x8
      lwz       r5, 0x28C(r30)
      lwz       r6, 0xC(r31)
      mr        r3, r31
      lfs       f1, 0x24(r5)
      lwz       r5, 0x0(r6)
      lwz       r0, 0x4(r6)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      lwz       r0, 0x8(r6)
      stw       r0, 0x10(r1)
      bl        0x2328A8
      lwz       r4, 0x10(r31)
      mr        r3, r31
      bl        0x2327F8
      lwz       r4, 0x10(r31)
      mr        r3, r31
      lwz       r5, 0xC(r31)
      bl        0x232BA0
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801859D4
 * Size:	00012C
 */
void Game::NaviGatherState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0
      beq-      .loc_0x84
      lfs       f0, -0x5780(r2)
      addi      r4, r1, 0x8
      li        r5, 0x1
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      stfs      f0, 0x10(r1)
      lwz       r3, 0x28C(r31)
      bl        -0x20300
      mr        r3, r31
      bl        -0x41888
      lwz       r3, 0x28C(r31)
      bl        -0x20608
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x114
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x114

    .loc_0x84:
      lwz       r0, 0x278(r31)
      cmplwi    r0, 0
      beq-      .loc_0x114
      lwz       r3, 0x26C(r31)
      bl        0x2DD35C
      mr        r3, r31
      bl        -0x41F6C
      mr        r3, r31
      bl        -0x418E0
      lwz       r3, 0x278(r31)
      lwz       r0, 0x20(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xE4
      lwz       r3, 0x28C(r31)
      bl        -0x206A4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x114

    .loc_0xE4:
      lwz       r3, 0x28C(r31)
      bl        -0x2069C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x114
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x114:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80185B00
 * Size:	000060
 */
void Game::NaviGatherState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x30
      lwz       r3, -0x6958(r13)
      li        r4, 0x3
      lhz       r5, 0x2DC(r31)
      bl        0xCDEB0

    .loc_0x30:
      lwz       r31, 0x2D0(r31)
      mr        r3, r31
      bl        0x232770
      mr        r3, r31
      bl        0x2326D8
      mr        r3, r31
      bl        0x232AC4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80185B60
 * Size:	0000F4
 */
void Game::NaviThrowWaitState::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      extsh.    r0, r4
      stw       r31, 0x1C(r1)
      mr        r31, r3
      beq-      .loc_0x30
      addi      r0, r31, 0x3C
      lis       r3, 0x804B
      stw       r0, 0x10(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x3C(r31)

    .loc_0x30:
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x374C
      lis       r3, 0x804B
      stw       r0, 0x0(r31)
      li        r0, 0x6
      addi      r4, r3, 0x2F60
      li        r3, 0
      stw       r0, 0x4(r31)
      addi      r6, r5, 0x3784
      addi      r5, r4, 0x50
      addi      r0, r31, 0x3C
      stw       r3, 0x8(r31)
      li        r3, 0x14
      stw       r6, 0x0(r31)
      stw       r4, 0x0(r31)
      lwz       r4, 0x10(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x10(r31)
      sub       r0, r0, r4
      stw       r0, 0x4(r4)
      bl        -0x161D40
      cmplwi    r3, 0
      beq-      .loc_0xD8
      lis       r4, 0x804B
      lis       r5, 0x804B
      addi      r8, r4, 0x2DB0
      lis       r4, 0x804B
      lwz       r7, 0x0(r8)
      addi      r5, r5, 0xF00
      lwz       r6, 0x4(r8)
      addi      r0, r4, 0x2FBC
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

    .loc_0xD8:
      stw       r3, 0x30(r31)
      mr        r3, r31
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80185C54
 * Size:	000004
 */
void Game::NaviThrowWaitState::draw2d((J2DGrafContext&, int&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80185C58
 * Size:	00002C
 */
void Game::NaviThrowWaitState::resume((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	80185C84
 * Size:	000034
 */
void Game::NaviThrowWaitState::restart((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
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
 * Address:	80185CB8
 * Size:	000558
 */
void Game::NaviThrowWaitState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      stw       r0, 0xB4(r1)
      stfd      f31, 0xA0(r1)
      psq_st    f31,0xA8(r1),0,0
      stfd      f30, 0x90(r1)
      psq_st    f30,0x98(r1),0,0
      stfd      f29, 0x80(r1)
      psq_st    f29,0x88(r1),0,0
      stfd      f28, 0x70(r1)
      psq_st    f28,0x78(r1),0,0
      stfd      f27, 0x60(r1)
      psq_st    f27,0x68(r1),0,0
      stmw      r27, 0x4C(r1)
      mr        r28, r3
      li        r0, -0x1
      stw       r0, 0x38(r3)
      mr        r29, r4
      li        r4, 0
      lis       r3, 0x804B
      stw       r29, 0x34(r28)
      cmplwi    r4, 0
      lfs       f0, -0x5780(r2)
      subi      r0, r3, 0x437C
      lfs       f29, -0x56A8(r2)
      li        r30, 0
      stfs      f0, 0x2B0(r29)
      stw       r4, 0x14(r28)
      stw       r4, 0x18(r28)
      lwz       r3, 0x254(r29)
      stw       r0, 0x20(r1)
      stw       r4, 0x2C(r1)
      stw       r4, 0x24(r1)
      stw       r3, 0x28(r1)
      bne-      .loc_0xA4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x12C

    .loc_0xA4:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x110

    .loc_0xBC:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x12C
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x110:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xBC

    .loc_0x12C:
      lis       r3, 0x8050
      lfs       f30, -0x5780(r2)
      lfs       f31, -0x5778(r2)
      addi      r31, r3, 0x71A0
      lfs       f28, -0x570C(r2)
      b         .loc_0x384

    .loc_0x144:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r29)
      mr        r27, r3
      mr        r4, r29
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r27
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f6, 0x1FC(r29)
      lfs       f1, 0x1C(r1)
      lfs       f0, 0x10(r1)
      fmr       f5, f6
      lfs       f3, 0x18(r1)
      fcmpo     cr0, f6, f30
      lfs       f2, 0xC(r1)
      fsubs     f4, f1, f0
      lfs       f1, 0x14(r1)
      lfs       f0, 0x8(r1)
      fsubs     f2, f3, f2
      fsubs     f7, f1, f0
      bge-      .loc_0x1C4
      fneg      f5, f6

    .loc_0x1C4:
      fmuls     f0, f5, f31
      fcmpo     cr0, f6, f30
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r31, r0
      lfs       f3, 0x4(r3)
      bge-      .loc_0x214
      lfs       f0, -0x5774(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f6, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f5, f0
      b         .loc_0x234

    .loc_0x214:
      fmuls     f0, f6, f31
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f5, r3, r0

    .loc_0x234:
      fmuls     f0, f2, f2
      fmuls     f1, f4, f4
      fmadds    f0, f7, f7, f0
      fadds     f6, f1, f0
      fcmpo     cr0, f6, f30
      ble-      .loc_0x25C
      ble-      .loc_0x260
      fsqrte    f0, f6
      fmuls     f6, f0, f6
      b         .loc_0x260

    .loc_0x25C:
      fmr       f6, f30

    .loc_0x260:
      fabs      f0, f2
      fmr       f27, f6
      frsp      f0, f0
      fcmpo     cr0, f0, f28
      bgt-      .loc_0x2C8
      lfs       f1, -0x5780(r2)
      lfs       f0, -0x56A4(r2)
      fmuls     f1, f2, f1
      fmadds    f1, f7, f5, f1
      fmadds    f1, f4, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x298
      lfs       f0, -0x5714(r2)
      fadds     f27, f6, f0

    .loc_0x298:
      fcmpo     cr0, f27, f29
      bge-      .loc_0x2C8
      mr        r3, r27
      bl        -0x3D028
      cmpwi     r3, 0
      bne-      .loc_0x2C8
      mr        r3, r27
      bl        -0x3CB48
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2C8
      mr        r30, r27
      fmr       f29, f27

    .loc_0x2C8:
      lwz       r0, 0x2C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x2F4
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x384

    .loc_0x2F4:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x368

    .loc_0x314:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x384
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x368:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x314

    .loc_0x384:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x24(r1)
      cmplw     r4, r3
      bne+      .loc_0x144
      lwz       r3, 0xC0(r29)
      lfs       f0, 0x660(r3)
      fcmpo     cr0, f29, f0
      cror      2, 0, 0x2
      bne-      .loc_0x3C0
      stw       r30, 0x14(r28)
      b         .loc_0x3C4

    .loc_0x3C0:
      stw       r30, 0x18(r28)

    .loc_0x3C4:
      lwz       r0, 0x14(r28)
      cmplwi    r0, 0
      beq-      .loc_0x414
      lfs       f0, -0x56FC(r2)
      cmplwi    r28, 0
      mr        r6, r28
      stfs      f0, 0x234(r29)
      beq-      .loc_0x3E8
      lwz       r6, 0x10(r28)

    .loc_0x3E8:
      lwz       r12, 0x0(r29)
      mr        r3, r29
      li        r4, 0x22
      li        r5, 0x22
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      mr        r3, r29
      bl        -0x49170
      b         .loc_0x43C

    .loc_0x414:
      lwz       r4, 0x18(r28)
      cmplwi    r4, 0
      beq-      .loc_0x43C
      lwz       r3, 0x28C(r4)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x43C:
      li        r0, 0
      stb       r0, 0x20(r28)
      stw       r0, 0x1C(r28)
      lwz       r0, 0x14(r28)
      cmplwi    r0, 0
      beq-      .loc_0x490
      lwz       r5, 0x34(r28)
      li        r4, 0x2
      lwz       r3, -0x6958(r13)
      lhz       r5, 0x2DC(r5)
      bl        0xCD808
      lwz       r4, 0x14(r28)
      li        r5, 0x4
      li        r6, 0
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x20(r28)

    .loc_0x490:
      lwz       r4, 0x1C(r28)
      lis       r0, 0x4330
      lwz       r5, 0xC0(r29)
      mr        r3, r29
      xoris     r4, r4, 0x8000
      stw       r0, 0x40(r1)
      lfd       f5, -0x5730(r2)
      stw       r4, 0x44(r1)
      lfs       f4, -0x5728(r2)
      lfd       f1, 0x40(r1)
      lfs       f0, 0x520(r5)
      fsubs     f3, f1, f5
      lfs       f2, 0x548(r5)
      stw       r0, 0x38(r1)
      fsubs     f1, f0, f2
      lfs       f0, -0x5744(r2)
      fdivs     f3, f3, f4
      fmadds    f1, f3, f1, f2
      stfs      f1, 0x2B4(r29)
      lwz       r0, 0x1C(r28)
      lwz       r4, 0xC0(r29)
      xoris     r0, r0, 0x8000
      stw       r0, 0x3C(r1)
      lfs       f1, 0x570(r4)
      lfd       f3, 0x38(r1)
      lfs       f2, 0x598(r4)
      fsubs     f3, f3, f5
      fsubs     f1, f1, f2
      fdivs     f3, f3, f4
      fmadds    f1, f3, f1, f2
      stfs      f1, 0x2B8(r29)
      stfs      f4, 0x28(r28)
      stfs      f0, 0x2C(r28)
      lwz       r4, 0x30(r28)
      bl        -0x490EC
      psq_l     f31,0xA8(r1),0,0
      lfd       f31, 0xA0(r1)
      psq_l     f30,0x98(r1),0,0
      lfd       f30, 0x90(r1)
      psq_l     f29,0x88(r1),0,0
      lfd       f29, 0x80(r1)
      psq_l     f28,0x78(r1),0,0
      lfd       f28, 0x70(r1)
      psq_l     f27,0x68(r1),0,0
      lfd       f27, 0x60(r1)
      lmw       r27, 0x4C(r1)
      lwz       r0, 0xB4(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80186210
 * Size:	00003C
 */
void Game::NaviThrowWaitState::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      lwz       r0, 0x1C(r4)
      cmpwi     r0, 0x2
      beq-      .loc_0x30
      bge-      .loc_0x30
      cmpwi     r0, 0x1
      bge-      .loc_0x1C
      b         .loc_0x30

    .loc_0x1C:
      lwz       r4, 0x1C(r3)
      cmpwi     r4, 0x3
      bge-      .loc_0x30
      addi      r0, r4, 0x1
      stw       r0, 0x1C(r3)

    .loc_0x30:
      li        r0, 0
      stw       r0, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8018624C
 * Size:	000024
 */
void Game::NaviThrowWaitState::doAnimCallback(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0x34(r3)
      bl        .loc_0x24
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x24:
    */
}

/*
 * --INFO--
 * Address:	80186270
 * Size:	000084
 */
void Game::NaviThrowWaitState::lockHangPiki((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r0, 0x14(r3)
      cmplwi    r0, 0
      beq-      .loc_0x70
      lbz       r0, 0x20(r31)
      cmplwi    r0, 0
      beq-      .loc_0x70
      lwz       r3, 0x114(r4)
      lis       r4, 0x7268
      addi      r4, r4, 0x6E64
      bl        -0x50464
      lfs       f1, 0x4C(r3)
      addi      r4, r1, 0x8
      lfs       f0, -0x56E0(r2)
      li        r5, 0
      stfs      f1, 0x8(r1)
      lfs       f1, 0x50(r3)
      stfs      f1, 0xC(r1)
      fsubs     f0, f1, f0
      lfs       f1, 0x54(r3)
      stfs      f1, 0x10(r1)
      stfs      f0, 0xC(r1)
      lwz       r3, 0x14(r31)
      bl        -0x4B134

    .loc_0x70:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801862F4
 * Size:	000AE0
 */
void Game::NaviThrowWaitState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xF0(r1)
      mflr      r0
      stw       r0, 0xF4(r1)
      stfd      f31, 0xE0(r1)
      psq_st    f31,0xE8(r1),0,0
      stfd      f30, 0xD0(r1)
      psq_st    f30,0xD8(r1),0,0
      stfd      f29, 0xC0(r1)
      psq_st    f29,0xC8(r1),0,0
      stmw      r23, 0x9C(r1)
      lwz       r5, -0x64AC(r13)
      mr        r28, r3
      mr        r29, r4
      cmplwi    r5, 0
      beq-      .loc_0x64
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      beq-      .loc_0x64
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xAB4

    .loc_0x64:
      lwz       r0, 0x278(r29)
      cmplwi    r0, 0
      beq-      .loc_0xAB4
      mr        r3, r29
      bl        -0x42864
      lwz       r0, 0x14(r28)
      cmplwi    r0, 0
      bne-      .loc_0x250
      lwz       r0, 0x18(r28)
      cmplwi    r0, 0
      beq-      .loc_0x22C
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x28(r28)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5780(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x28(r28)
      lfs       f1, 0x28(r28)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xD8
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xAB4

    .loc_0xD8:
      lwz       r3, 0x278(r29)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x10C
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xAB4

    .loc_0x10C:
      lis       r4, 0x7268
      lwz       r3, 0x114(r29)
      addi      r4, r4, 0x6E64
      bl        -0x505C8
      lwz       r4, 0x18(r28)
      lfs       f31, 0x4C(r3)
      lwz       r12, 0x0(r4)
      lfs       f30, 0x50(r3)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x54(r3)
      addi      r3, r1, 0x30
      mtctr     r12
      bctrl
      lfs       f0, 0x34(r1)
      lfs       f2, 0x30(r1)
      fsubs     f4, f30, f0
      lfs       f1, 0x38(r1)
      fsubs     f3, f31, f2
      lfs       f0, -0x5780(r2)
      fsubs     f2, f29, f1
      fmuls     f1, f4, f4
      fmuls     f2, f2, f2
      fmadds    f1, f3, f3, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x184
      ble-      .loc_0x188
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x188

    .loc_0x184:
      fmr       f1, f0

    .loc_0x188:
      lfs       f0, -0x56A0(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xAB4
      lfs       f0, -0x56FC(r2)
      cmplwi    r28, 0
      mr        r6, r28
      stfs      f0, 0x234(r29)
      beq-      .loc_0x1B0
      lwz       r6, 0x10(r28)

    .loc_0x1B0:
      lwz       r12, 0x0(r29)
      mr        r3, r29
      li        r4, 0x22
      li        r5, 0x22
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      mr        r3, r29
      bl        -0x49574
      lwz       r3, 0x18(r28)
      li        r0, 0
      li        r4, 0x2
      stw       r3, 0x14(r28)
      stw       r0, 0x18(r28)
      lwz       r5, 0x34(r28)
      lwz       r3, -0x6958(r13)
      lhz       r5, 0x2DC(r5)
      bl        0xCD438
      lwz       r4, 0x14(r28)
      li        r5, 0x4
      li        r6, 0
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x20(r28)
      b         .loc_0x250
      b         .loc_0xAB4

    .loc_0x22C:
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xAB4

    .loc_0x250:
      lwz       r3, 0x14(r28)
      lis       r0, 0x4330
      stw       r0, 0x88(r1)
      lfd       f4, -0x5730(r2)
      stw       r3, 0x2A8(r29)
      lfs       f3, -0x5728(r2)
      lwz       r3, 0x1C(r28)
      lwz       r4, 0xC0(r29)
      xoris     r3, r3, 0x8000
      stw       r0, 0x90(r1)
      lfs       f0, 0x520(r4)
      stw       r3, 0x8C(r1)
      lfs       f1, 0x548(r4)
      lfd       f2, 0x88(r1)
      fsubs     f0, f0, f1
      fsubs     f2, f2, f4
      fdivs     f2, f2, f3
      fmadds    f0, f2, f0, f1
      stfs      f0, 0x2B4(r29)
      lwz       r0, 0x1C(r28)
      lwz       r3, 0xC0(r29)
      xoris     r0, r0, 0x8000
      stw       r0, 0x94(r1)
      lfs       f0, 0x570(r3)
      lfd       f2, 0x90(r1)
      lfs       f1, 0x598(r3)
      fsubs     f2, f2, f4
      fsubs     f0, f0, f1
      fdivs     f2, f2, f3
      fmadds    f0, f2, f0, f1
      stfs      f0, 0x2B8(r29)
      lwz       r3, 0x14(r28)
      cmplwi    r3, 0
      beq-      .loc_0x31C
      lbz       r0, 0x20(r28)
      cmplwi    r0, 0
      beq-      .loc_0x31C
      bl        -0x3D6A4
      cmpwi     r3, 0x4
      beq-      .loc_0x31C
      cmpwi     r3, 0x3
      beq-      .loc_0x31C
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xAB4

    .loc_0x31C:
      lwz       r3, 0x278(r29)
      lwz       r3, 0x1C(r3)
      rlwinm.   r0,r3,0,30,30
      beq-      .loc_0x528
      li        r0, -0x1
      lis       r3, 0x9249
      stw       r0, 0x38(r28)
      addi      r9, r3, 0x2493
      addi      r26, r1, 0x6C
      li        r31, 0
      lwz       r3, 0x14(r28)
      li        r30, 0
      lbz       r27, 0x2B8(r3)
      addi      r10, r27, 0x1
      addi      r7, r27, 0x2
      mulhw     r6, r9, r10
      addi      r5, r27, 0x3
      addi      r3, r27, 0x4
      addi      r0, r27, 0x5
      addi      r12, r27, 0x6
      mulhw     r4, r9, r7
      add       r6, r6, r10
      srawi     r8, r6, 0x2
      mulhw     r6, r9, r5
      rlwinm    r11,r8,1,31,31
      add       r4, r4, r7
      add       r8, r8, r11
      srawi     r11, r4, 0x2
      mulhw     r4, r9, r3
      add       r6, r6, r5
      rlwinm    r24,r11,1,31,31
      srawi     r23, r6, 0x2
      add       r6, r11, r24
      mulhw     r11, r9, r0
      add       r4, r4, r3
      rlwinm    r25,r23,1,31,31
      srawi     r24, r4, 0x2
      add       r4, r23, r25
      mulhw     r9, r9, r12
      rlwinm    r25,r24,1,31,31
      add       r11, r11, r0
      add       r25, r24, r25
      srawi     r23, r11, 0x2
      mulli     r6, r6, 0x7
      add       r9, r9, r12
      rlwinm    r24,r23,1,31,31
      mulli     r4, r4, 0x7
      srawi     r9, r9, 0x2
      sub       r6, r7, r6
      stw       r6, 0x70(r1)
      rlwinm    r11,r9,1,31,31
      mulli     r6, r25, 0x7
      sub       r4, r5, r4
      add       r23, r23, r24
      stw       r4, 0x74(r1)
      mulli     r4, r23, 0x7
      add       r9, r9, r11
      sub       r3, r3, r6
      stw       r3, 0x78(r1)
      mulli     r8, r8, 0x7
      sub       r0, r0, r4
      stw       r0, 0x7C(r1)
      mulli     r3, r9, 0x7
      sub       r8, r10, r8
      stw       r8, 0x6C(r1)
      sub       r0, r12, r3
      stw       r0, 0x80(r1)

    .loc_0x428:
      lwz       r5, 0x0(r26)
      mr        r3, r28
      mr        r4, r29
      bl        .loc_0xAE0
      cmplwi    r3, 0
      beq-      .loc_0x448
      mr        r31, r3
      b         .loc_0x458

    .loc_0x448:
      addi      r30, r30, 0x1
      addi      r26, r26, 0x4
      cmpwi     r30, 0x6
      blt+      .loc_0x428

    .loc_0x458:
      cmplwi    r31, 0
      beq-      .loc_0x8B0
      lwz       r23, 0x14(r28)
      lwz       r3, 0x2C4(r23)
      cmplwi    r3, 0
      beq-      .loc_0x4B4
      cmpwi     r27, 0x5
      bne-      .loc_0x498
      lwz       r3, 0x26C(r3)
      li        r4, 0x286B
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4B4

    .loc_0x498:
      lwz       r3, 0x26C(r3)
      li        r4, 0x2802
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x4B4:
      lwz       r3, 0x28C(r23)
      mr        r4, r23
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r31, 0x14(r28)
      mr        r4, r31
      li        r5, 0x4
      li        r6, 0
      lwz       r3, 0x28C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      mr        r4, r29
      bl        0x8DC
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1822
      li        r5, 0
      bl        0x1B1E2C
      lwz       r3, -0x6958(r13)
      li        r4, 0x2
      lhz       r5, 0x2DC(r29)
      bl        0xCD110
      b         .loc_0xAB4

    .loc_0x528:
      rlwinm.   r0,r3,0,31,31
      beq-      .loc_0x72C
      li        r0, -0x1
      lis       r3, 0x9249
      stw       r0, 0x38(r28)
      addi      r9, r3, 0x2493
      addi      r26, r1, 0x54
      li        r30, 0
      lwz       r3, 0x14(r28)
      li        r31, 0
      lbz       r27, 0x2B8(r3)
      addi      r10, r27, 0x6
      addi      r7, r27, 0x5
      mulhw     r6, r9, r10
      addi      r5, r27, 0x4
      addi      r3, r27, 0x3
      addi      r0, r27, 0x2
      addi      r12, r27, 0x1
      mulhw     r4, r9, r7
      add       r6, r6, r10
      srawi     r8, r6, 0x2
      mulhw     r6, r9, r5
      rlwinm    r11,r8,1,31,31
      add       r4, r4, r7
      add       r8, r8, r11
      srawi     r11, r4, 0x2
      mulhw     r4, r9, r3
      add       r6, r6, r5
      rlwinm    r24,r11,1,31,31
      srawi     r23, r6, 0x2
      add       r6, r11, r24
      mulhw     r11, r9, r0
      add       r4, r4, r3
      rlwinm    r25,r23,1,31,31
      srawi     r24, r4, 0x2
      add       r4, r23, r25
      mulhw     r9, r9, r12
      rlwinm    r23,r24,1,31,31
      add       r11, r11, r0
      add       r23, r24, r23
      srawi     r25, r11, 0x2
      mulli     r6, r6, 0x7
      add       r9, r9, r12
      rlwinm    r24,r25,1,31,31
      mulli     r4, r4, 0x7
      srawi     r9, r9, 0x2
      sub       r6, r7, r6
      stw       r6, 0x58(r1)
      rlwinm    r11,r9,1,31,31
      mulli     r6, r23, 0x7
      sub       r4, r5, r4
      add       r25, r25, r24
      stw       r4, 0x5C(r1)
      mulli     r4, r25, 0x7
      add       r9, r9, r11
      sub       r3, r3, r6
      stw       r3, 0x60(r1)
      mulli     r8, r8, 0x7
      sub       r0, r0, r4
      stw       r0, 0x64(r1)
      mulli     r3, r9, 0x7
      sub       r8, r10, r8
      stw       r8, 0x54(r1)
      sub       r0, r12, r3
      stw       r0, 0x68(r1)

    .loc_0x62C:
      lwz       r5, 0x0(r26)
      mr        r3, r28
      mr        r4, r29
      bl        .loc_0xAE0
      cmplwi    r3, 0
      beq-      .loc_0x64C
      mr        r30, r3
      b         .loc_0x65C

    .loc_0x64C:
      addi      r31, r31, 0x1
      addi      r26, r26, 0x4
      cmpwi     r31, 0x6
      blt+      .loc_0x62C

    .loc_0x65C:
      cmplwi    r30, 0
      beq-      .loc_0x8B0
      lwz       r23, 0x14(r28)
      lwz       r3, 0x2C4(r23)
      cmplwi    r3, 0
      beq-      .loc_0x6B8
      cmpwi     r27, 0x5
      bne-      .loc_0x69C
      lwz       r3, 0x26C(r3)
      li        r4, 0x286B
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6B8

    .loc_0x69C:
      lwz       r3, 0x26C(r3)
      li        r4, 0x2802
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x6B8:
      lwz       r3, 0x28C(r23)
      mr        r4, r23
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r30, 0x14(r28)
      mr        r4, r30
      li        r5, 0x4
      li        r6, 0
      lwz       r3, 0x28C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      mr        r4, r29
      bl        0x6D8
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1822
      li        r5, 0
      bl        0x1B1C28
      lwz       r3, -0x6958(r13)
      li        r4, 0x2
      lhz       r5, 0x2DC(r29)
      bl        0xCCF0C
      b         .loc_0xAB4

    .loc_0x72C:
      rlwinm.   r0,r3,0,28,28
      bne-      .loc_0x73C
      rlwinm.   r0,r3,0,29,29
      beq-      .loc_0x8B0

    .loc_0x73C:
      lwz       r4, 0x14(r28)
      rlwinm    r31,r3,30,31,31
      li        r26, 0
      lbz       r30, 0x2B8(r4)
      lbz       r27, 0x2B9(r4)

    .loc_0x750:
      cmplwi    r31, 0
      beq-      .loc_0x784
      lwz       r4, 0x38(r28)
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      addi      r4, r4, 0x2
      mulhw     r3, r0, r4
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r0, r4, r0
      stw       r0, 0x38(r28)
      b         .loc_0x7AC

    .loc_0x784:
      lwz       r4, 0x38(r28)
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      addi      r4, r4, 0x1
      mulhw     r3, r0, r4
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r0, r4, r0
      stw       r0, 0x38(r28)

    .loc_0x7AC:
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      bl        .loc_0xAE0
      mr.       r23, r3
      beq-      .loc_0x7D0
      lbz       r0, 0x2B9(r23)
      cmpw      r27, r0
      bne-      .loc_0x7E0

    .loc_0x7D0:
      addi      r26, r26, 0x1
      li        r23, 0
      cmpwi     r26, 0x2
      blt+      .loc_0x750

    .loc_0x7E0:
      cmplwi    r23, 0
      beq-      .loc_0x8B0
      lwz       r24, 0x14(r28)
      lwz       r3, 0x2C4(r24)
      cmplwi    r3, 0
      beq-      .loc_0x83C
      cmpwi     r30, 0x5
      bne-      .loc_0x820
      lwz       r3, 0x26C(r3)
      li        r4, 0x286B
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x83C

    .loc_0x820:
      lwz       r3, 0x26C(r3)
      li        r4, 0x2802
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x83C:
      lwz       r3, 0x28C(r24)
      mr        r4, r24
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r23, 0x14(r28)
      mr        r4, r23
      li        r5, 0x4
      li        r6, 0
      lwz       r3, 0x28C(r23)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      mr        r4, r29
      bl        0x554
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1822
      li        r5, 0
      bl        0x1B1AA4
      lwz       r3, -0x6958(r13)
      li        r4, 0x2
      lhz       r5, 0x2DC(r29)
      bl        0xCCD88
      b         .loc_0xAB4

    .loc_0x8B0:
      lwz       r3, 0x278(r29)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,23,23
      bne-      .loc_0x930
      mr        r3, r28
      mr        r4, r29
      bl        0x514
      lwz       r4, 0x1C(r28)
      lis       r0, 0x4330
      lwz       r7, 0xC0(r29)
      mr        r3, r28
      xoris     r5, r4, 0x8000
      stw       r0, 0x90(r1)
      lfd       f3, -0x5730(r2)
      mr        r4, r29
      stw       r5, 0x94(r1)
      addi      r6, r1, 0x8
      lfs       f1, -0x5728(r2)
      li        r5, 0x5
      lfd       f2, 0x90(r1)
      lfs       f0, 0x4F8(r7)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0x2B0(r29)
      lwz       r0, 0x14(r28)
      stw       r0, 0x8(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xAB4

    .loc_0x930:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x2B0(r29)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x2B0(r29)
      lwz       r3, 0xC0(r29)
      lfs       f1, 0x2B0(r29)
      lfs       f0, 0x4F8(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x95C
      stfs      f0, 0x2B0(r29)

    .loc_0x95C:
      lfs       f2, 0x2C(r28)
      lfs       f1, -0x5780(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x99C
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x2C(r28)
      lfs       f0, 0x2C(r28)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0xAB4
      mr        r3, r28
      mr        r4, r29
      bl        0x448
      b         .loc_0xAB4

    .loc_0x99C:
      lwz       r3, 0x254(r29)
      lwz       r0, 0xBC(r3)
      cmpwi     r0, 0
      ble-      .loc_0xAB4
      mr        r4, r29
      lwz       r5, 0xC0(r3)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x24
      lfs       f29, 0xC(r5)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x10(r5)
      lfs       f31, 0x14(r5)
      mtctr     r12
      bctrl
      lfs       f0, 0x28(r1)
      lfs       f2, 0x24(r1)
      fsubs     f4, f30, f0
      lfs       f1, 0x2C(r1)
      fsubs     f3, f29, f2
      lfs       f0, -0x5780(r2)
      fsubs     f2, f31, f1
      fmuls     f1, f4, f4
      fmuls     f2, f2, f2
      fmadds    f1, f3, f3, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA18
      ble-      .loc_0xA1C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xA1C

    .loc_0xA18:
      fmr       f1, f0

    .loc_0xA1C:
      lfs       f0, -0x56FC(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xAB4
      mr        r4, r29
      addi      r3, r1, 0x18
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x18(r1)
      mr        r4, r29
      lfs       f1, 0x1C(r1)
      addi      r3, r1, 0xC
      lfs       f0, 0x20(r1)
      stfs      f2, 0x48(r1)
      stfs      f1, 0x4C(r1)
      stfs      f0, 0x50(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      addi      r4, r1, 0x48
      lfs       f2, 0x10(r1)
      addi      r5, r1, 0x3C
      lfs       f0, 0x14(r1)
      stfs      f1, 0x3C(r1)
      lfs       f1, -0x56BC(r2)
      stfs      f2, 0x40(r1)
      lfs       f2, -0x5718(r2)
      stfs      f0, 0x44(r1)
      lfs       f0, 0x1FC(r29)
      lwz       r3, 0x254(r29)
      fadds     f1, f1, f0
      bl        0xE554
      mr        r3, r28
      mr        r4, r29
      bl        0x32C

    .loc_0xAB4:
      psq_l     f31,0xE8(r1),0,0
      lfd       f31, 0xE0(r1)
      psq_l     f30,0xD8(r1),0,0
      lfd       f30, 0xD0(r1)
      psq_l     f29,0xC8(r1),0,0
      lfd       f29, 0xC0(r1)
      lmw       r23, 0x9C(r1)
      lwz       r0, 0xF4(r1)
      mtlr      r0
      addi      r1, r1, 0xF0
      blr

    .loc_0xAE0:
    */
}

/*
 * --INFO--
 * Address:	80186DD4
 * Size:	0002FC
 */
void Game::NaviThrowWaitState::findNearestColorPiki((Game::Navi*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stfd      f30, 0x50(r1)
      psq_st    f30,0x58(r1),0,0
      stmw      r27, 0x3C(r1)
      mr        r29, r4
      lis       r4, 0x804B
      lwz       r6, 0x254(r29)
      li        r0, 0
      subi      r4, r4, 0x437C
      lfs       f30, -0x569C(r2)
      cmplwi    r0, 0
      stw       r4, 0x20(r1)
      mr        r28, r3
      mr        r30, r5
      stw       r0, 0x2C(r1)
      li        r31, 0
      stw       r0, 0x24(r1)
      stw       r6, 0x28(r1)
      bne-      .loc_0x78
      mr        r3, r6
      lwz       r12, 0x0(r6)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x2B4

    .loc_0x78:
      mr        r3, r6
      lwz       r12, 0x0(r6)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0xE8

    .loc_0x94:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2B4
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0xE8:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x94
      b         .loc_0x2B4

    .loc_0x108:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x2B8(r3)
      mr        r27, r3
      cmpw      r30, r0
      bne-      .loc_0x1F8
      lwz       r3, 0x38(r28)
      cmpwi     r3, -0x1
      beq-      .loc_0x144
      lbz       r0, 0x2B9(r27)
      cmpw      r3, r0
      bne-      .loc_0x1F8

    .loc_0x144:
      mr        r4, r29
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r27
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x18(r1)
      lfs       f0, 0xC(r1)
      lfs       f3, 0x1C(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x10(r1)
      lfs       f1, 0x14(r1)
      lfs       f0, 0x8(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x5780(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f31, f2, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1C4
      ble-      .loc_0x1C8
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x1C8

    .loc_0x1C4:
      fmr       f31, f0

    .loc_0x1C8:
      fcmpo     cr0, f31, f30
      bge-      .loc_0x1F8
      mr        r3, r27
      bl        -0x3E074
      cmpwi     r3, 0
      bne-      .loc_0x1F8
      mr        r3, r27
      bl        -0x3DB94
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1F8
      mr        r31, r27
      fmr       f30, f31

    .loc_0x1F8:
      lwz       r0, 0x2C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x224
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x2B4

    .loc_0x224:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x298

    .loc_0x244:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2B4
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x298:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x244

    .loc_0x2B4:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x24(r1)
      cmplw     r4, r3
      bne+      .loc_0x108
      mr        r3, r31
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lmw       r27, 0x3C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	801870D0
 * Size:	000270
 */
void Game::NaviThrowWaitState::sortPikis((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      mr        r5, r3
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      lwz       r3, 0x254(r4)
      lwz       r4, 0x14(r5)
      lwz       r5, 0x38(r5)
      bl        0xE8C0
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      addi      r4, r1, 0x24
      lfs       f2, 0xC(r1)
      addi      r5, r31, 0x200
      lfs       f0, 0x10(r1)
      stfs      f1, 0x24(r1)
      lfs       f1, -0x56BC(r2)
      stfs      f2, 0x28(r1)
      lfs       f2, -0x5718(r2)
      stfs      f0, 0x2C(r1)
      lfs       f0, 0x1FC(r31)
      lwz       r3, 0x254(r31)
      fadds     f1, f1, f0
      bl        0xE1A8
      lwz       r3, 0x254(r31)
      li        r0, 0
      lis       r4, 0x804B
      subi      r4, r4, 0x437C
      cmplwi    r0, 0
      stw       r4, 0x14(r1)
      stw       r0, 0x20(r1)
      stw       r0, 0x18(r1)
      stw       r3, 0x1C(r1)
      bne-      .loc_0xB8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x23C

    .loc_0xB8:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x124

    .loc_0xD0:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x23C
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x124:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xD0
      b         .loc_0x23C

    .loc_0x144:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r31, r0
      bl        -0x3F3E8
      cmpwi     r3, 0
      bne-      .loc_0x180
      mr        r3, r31
      bl        -0x3F42C
      cmplwi    r3, 0
      beq-      .loc_0x180
      bl        0x15C24

    .loc_0x180:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1AC
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x23C

    .loc_0x1AC:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x220

    .loc_0x1CC:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x23C
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x220:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1CC

    .loc_0x23C:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x144
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80187340
 * Size:	000068
 */
void Game::NaviThrowWaitState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x286B
      lwz       r3, 0x26C(r31)
      lwzu      r12, 0x30(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x26C(r31)
      li        r4, 0x2802
      lwzu      r12, 0x30(r3)
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x4A2A4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801873A8
 * Size:	0000C8
 */
void Game::NaviThrowState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x56FC(r2)
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr.       r29, r3
      stfs      f0, 0x234(r4)
      mr        r6, r29
      beq-      .loc_0x38
      lwz       r6, 0x10(r29)

    .loc_0x38:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      li        r4, 0x21
      li        r5, 0x21
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        -0x4A4B0
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x14(r29)
      li        r4, 0x21
      stb       r0, 0x15(r29)
      stw       r30, 0x1C(r29)
      lwz       r0, 0x0(r31)
      stw       r0, 0x18(r29)
      bl        -0x4A4FC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAC
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xAC:
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
 * Address:	80187470
 * Size:	0000D4
 */
void Game::NaviThrowState::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      lwz       r0, 0x1C(r4)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      cmpwi     r0, 0x3E8
      beq-      .loc_0xA4
      bge-      .loc_0xC0
      cmpwi     r0, 0x2
      beq-      .loc_0x30
      b         .loc_0xC0

    .loc_0x30:
      lwz       r3, 0x18(r31)
      bl        -0x3E080
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r0, 0x1
      stb       r0, 0x14(r31)
      b         .loc_0xC0

    .loc_0x4C:
      lwz       r3, 0x1C(r31)
      addi      r5, r1, 0x8
      lwz       r4, 0x28C(r3)
      lfs       f1, 0x10(r4)
      lfs       f2, 0x14(r4)
      lfs       f0, 0xC(r4)
      stfs      f0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f2, 0x10(r1)
      lwz       r4, 0x18(r31)
      bl        -0x40A90
      lwz       r4, 0x18(r31)
      li        r5, 0x6
      li        r6, 0
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x14(r31)
      b         .loc_0xC0

    .loc_0xA4:
      lwz       r12, 0x0(r3)
      li        r5, 0
      lwz       r4, 0x1C(r31)
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xC0:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80187544
 * Size:	0000F0
 */
void Game::NaviThrowState::exec((Game::Navi*))
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
      lwz       r0, 0x278(r4)
      cmplwi    r0, 0
      beq-      .loc_0xD8
      mr        r3, r31
      bl        -0x43A6C
      lwz       r3, 0x278(r31)
      lwz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x48
      li        r0, 0x1
      stb       r0, 0x15(r30)

    .loc_0x48:
      mr        r3, r31
      bl        -0x40E24
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0
      beq-      .loc_0x9C
      lwz       r3, 0x278(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x9C
      mr        r3, r31
      bl        -0x42A64
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x9C:
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0
      beq-      .loc_0xD8
      lwz       r3, 0x278(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xD8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xD8:
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
 * Address:	80187634
 * Size:	000004
 */
void Game::NaviThrowState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80187638
 * Size:	0001C0
 */
void Game::NaviPelletState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stfd      f30, 0x50(r1)
      psq_st    f30,0x58(r1),0,0
      stfd      f29, 0x40(r1)
      psq_st    f29,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr.       r31, r4
      li        r0, 0
      stb       r0, 0x10(r3)
      mr        r30, r3
      mr        r6, r31
      beq-      .loc_0x48
      addi      r6, r6, 0x178

    .loc_0x48:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0x17
      li        r5, 0x17
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x94
      lwz       r3, 0x26C(r31)
      li        r4, 0x897
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0x94:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xC4
      lwz       r3, 0x26C(r31)
      li        r4, 0x89D
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0xC4:
      lwz       r3, 0x26C(r31)
      li        r4, 0x898
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0xE0:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f30, 0xC(r1)
      addi      r3, r1, 0x14
      lfs       f0, -0x573C(r2)
      lfs       f31, 0x8(r1)
      fadds     f30, f30, f0
      lfs       f29, 0x10(r1)
      bl        -0x21BFC
      addi      r0, r31, 0x138
      subi      r3, r2, 0x5698
      stw       r3, 0x14(r1)
      stfs      f31, 0x18(r1)
      stfs      f30, 0x1C(r1)
      stfs      f29, 0x20(r1)
      stw       r31, 0x28(r1)
      stw       r0, 0x24(r1)
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x154
      lfs       f0, -0x5690(r2)
      stfs      f0, 0x2C(r1)
      stfs      f0, 0x30(r1)
      stfs      f0, 0x34(r1)
      b         .loc_0x164

    .loc_0x154:
      lfs       f0, -0x568C(r2)
      stfs      f0, 0x2C(r1)
      stfs      f0, 0x30(r1)
      stfs      f0, 0x34(r1)

    .loc_0x164:
      lwz       r3, 0x250(r31)
      addi      r4, r1, 0x14
      bl        -0x21C24
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x14(r30)
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r0, 0x74(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	801877F8
 * Size:	0003F8
 */
void Game::NaviPelletState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      stw       r29, 0x24(r1)
      stw       r28, 0x20(r1)
      lwz       r5, 0x250(r4)
      lwz       r0, 0x4(r5)
      cmplwi    r0, 0
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3D8

    .loc_0x50:
      lwz       r0, 0x278(r31)
      cmplwi    r0, 0
      beq-      .loc_0x3D8
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x3D8
      lwz       r3, -0x6C18(r13)
      bl        0x2D758
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x240
      lwz       r4, -0x6C18(r13)
      li        r3, 0
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x1
      beq-      .loc_0x98
      cmpwi     r0, 0x3
      bne-      .loc_0x9C

    .loc_0x98:
      li        r3, 0x1

    .loc_0x9C:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x240
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0x240
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,20,20
      beq-      .loc_0x240
      lwz       r3, -0x6B70(r13)
      li        r4, 0x25
      bl        0x5FB24
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x240
      lwz       r3, -0x6D20(r13)
      lhz       r0, 0x2DC(r31)
      lwz       r12, 0x0(r3)
      subfic    r4, r0, 0x1
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r28, r3
      bl        -0x464A4
      mr        r29, r3
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x240
      cmpwi     r29, 0x8
      beq-      .loc_0x240
      cmpwi     r29, 0x9
      beq-      .loc_0x240
      cmpwi     r29, 0x2
      beq-      .loc_0x240
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      bl        -0x3A0C8
      lhz       r0, 0x2DC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x158
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188D
      li        r5, 0
      bl        0x1B0CE8
      b         .loc_0x18C

    .loc_0x158:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x17C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188F
      li        r5, 0
      bl        0x1B0CC4
      b         .loc_0x18C

    .loc_0x17C:
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188E
      li        r5, 0
      bl        0x1B0CB0

    .loc_0x18C:
      lhz       r0, 0x2DC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x1B8
      lwz       r3, 0x26C(r28)
      li        r4, 0x8A6
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x204

    .loc_0x1B8:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x1E8
      lwz       r3, 0x26C(r28)
      li        r4, 0x8A8
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x204

    .loc_0x1E8:
      lwz       r3, 0x26C(r28)
      li        r4, 0x8A7
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x204:
      lwz       r3, 0x274(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x240
      lwz       r3, 0x270(r28)
      mr        r4, r28
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x240:
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x254
      cmpwi     r0, 0
      bne-      .loc_0x33C

    .loc_0x254:
      lwz       r3, 0x278(r31)
      cmplwi    r3, 0
      beq-      .loc_0x33C
      lwz       r0, 0x1C(r3)
      andi.     r0, r0, 0x70F
      beq-      .loc_0x33C
      lbz       r0, 0x10(r30)
      cmplwi    r0, 0
      beq-      .loc_0x28C
      lfs       f0, -0x56F8(r2)
      mr        r3, r31
      stfs      f0, 0x234(r31)
      bl        -0x4A9BC
      b         .loc_0x334

    .loc_0x28C:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x29C
      addi      r6, r31, 0x178

    .loc_0x29C:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      li        r4, 0xE
      li        r5, 0xE
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      lhz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x2E8
      lwz       r3, 0x26C(r31)
      li        r4, 0x899
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x334

    .loc_0x2E8:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x318
      lwz       r3, 0x26C(r31)
      li        r4, 0x89E
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x334

    .loc_0x318:
      lwz       r3, 0x26C(r31)
      li        r4, 0x89A
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x334:
      li        r0, 0x2
      stw       r0, 0x14(r30)

    .loc_0x33C:
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0x3
      bne-      .loc_0x380
      lwz       r3, 0x250(r31)
      lwz       r3, 0x4(r3)
      cmplwi    r3, 0
      beq-      .loc_0x360
      li        r4, 0
      bl        -0x4CA64

    .loc_0x360:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x380:
      lwz       r3, 0x250(r31)
      lwz       r4, 0x4(r3)
      cmplwi    r4, 0
      bne-      .loc_0x3B4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3D8

    .loc_0x3B4:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)

    .loc_0x3D8:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80187BF0
 * Size:	00012C
 */
void Game::NaviPelletState::onKeyEvent((Game::Navi*, SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      stw       r30, 0x8(r1)
      mr        r30, r3
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0
      beq-      .loc_0xCC
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0x1
      bne-      .loc_0xA4
      lbz       r0, 0x1C4(r4)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x8C
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x70
      lwz       r3, 0x26C(r4)
      li        r4, 0x89E
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x8C

    .loc_0x70:
      lwz       r3, 0x26C(r4)
      li        r4, 0x89A
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x8C:
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0
      beq-      .loc_0x9C
      b         .loc_0xA4

    .loc_0x9C:
      li        r0, 0x1
      stw       r0, 0x14(r30)

    .loc_0xA4:
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x114
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0x2
      beq-      .loc_0xC0
      b         .loc_0x114

    .loc_0xC0:
      li        r0, 0x3
      stw       r0, 0x14(r30)
      b         .loc_0x114

    .loc_0xCC:
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x114
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x114
      bge-      .loc_0xF4
      cmpwi     r0, 0
      bge-      .loc_0x100
      b         .loc_0x114

    .loc_0xF4:
      cmpwi     r0, 0x3
      bge-      .loc_0x114
      b         .loc_0x10C

    .loc_0x100:
      li        r0, 0x1
      stw       r0, 0x14(r30)
      b         .loc_0x114

    .loc_0x10C:
      li        r0, 0x3
      stw       r0, 0x14(r30)

    .loc_0x114:
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
 * Address:	80187D1C
 * Size:	000080
 */
void Game::NaviPelletState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r3, 0x250(r4)
      lwz       r3, 0x4(r3)
      cmplwi    r3, 0
      beq-      .loc_0x2C
      li        r4, 0
      bl        -0x4CC54

    .loc_0x2C:
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x11C(r31)
      stfs      f0, 0x120(r31)
      stfs      f0, 0x124(r31)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80187D9C
 * Size:	000048
 */
void Game::NaviDemo_UfoState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1E
      li        r6, 0
      stw       r0, 0x14(r1)
      li        r0, 0
      li        r7, 0
      sth       r0, 0x10(r3)
      mr        r3, r4
      li        r4, 0x1E
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
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
 * Address:	80187DE4
 * Size:	0000B0
 */
void Game::NaviDemo_UfoState::exec((Game::Navi*))
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
      lhz       r0, 0x10(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x68
      bge-      .loc_0x38
      cmpwi     r0, 0
      bge-      .loc_0x44
      b         .loc_0x98

    .loc_0x38:
      cmpwi     r0, 0x3
      bge-      .loc_0x98
      b         .loc_0x80

    .loc_0x44:
      bl        0x70
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x98
      li        r0, 0x1
      mr        r3, r30
      sth       r0, 0x10(r30)
      mr        r4, r31
      bl        0x1D0
      b         .loc_0x98

    .loc_0x68:
      bl        0x2E0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x98
      li        r0, 0x2
      sth       r0, 0x10(r30)
      b         .loc_0x98

    .loc_0x80:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x98:
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
 * Address:	80187E94
 * Size:	000004
 */
void Game::NaviDemo_UfoState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80187E98
 * Size:	00017C
 */
void Game::NaviDemo_UfoState::execGoto((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stfd      f29, 0x30(r1)
      psq_st    f29,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      lwz       r5, -0x6CD0(r13)
      mr        r31, r4
      addi      r3, r1, 0x14
      lwz       r4, 0xB0(r5)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x198(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18(r1)
      lfs       f29, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      lfs       f0, 0x8(r1)
      fsubs     f6, f29, f1
      lfs       f1, 0xC(r1)
      fsubs     f4, f31, f0
      lfs       f0, -0x5688(r2)
      fsubs     f5, f30, f1
      fmuls     f3, f6, f6
      fmuls     f2, f4, f4
      fadds     f1, f2, f3
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC0
      lfs       f0, -0x5780(r2)
      li        r3, 0x1
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      b         .loc_0x150

    .loc_0xC0:
      fmuls     f7, f5, f5
      lfs       f1, -0x5780(r2)
      fadds     f0, f2, f7
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xF4
      fmadds    f0, f4, f4, f7
      fadds     f2, f3, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xF8
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xF8

    .loc_0xF4:
      fmr       f2, f1

    .loc_0xF8:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x118
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f2
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0
      fmuls     f6, f6, f0

    .loc_0x118:
      lwz       r4, -0x6D20(r13)
      li        r3, 0
      lfs       f3, -0x575C(r2)
      lwz       r4, 0xC8(r4)
      lfs       f0, 0x3B8(r4)
      fmuls     f2, f4, f0
      fmuls     f1, f5, f0
      fmuls     f0, f6, f0
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x1E4(r31)
      stfs      f1, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0x150:
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r0, 0x64(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80188014
 * Size:	000118
 */
void Game::NaviDemo_UfoState::initSuck((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r4
      stw       r29, 0x34(r1)
      mr        r29, r3
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r5, -0x6CD0(r13)
      lwz       r12, 0x8(r12)
      lwz       r31, 0xB0(r5)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r31)
      lwz       r12, 0x194(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x24(r1)
      lfs       f0, 0x18(r1)
      lfs       f3, 0x28(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x1C(r1)
      lfs       f1, 0x20(r1)
      lfs       f0, 0x14(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x5780(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA4
      ble-      .loc_0xA8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xA8

    .loc_0xA4:
      fmr       f1, f0

    .loc_0xA8:
      stfs      f1, 0x18(r29)
      mr        r4, r30
      lfs       f2, -0x5780(r2)
      addi      r3, r1, 0x8
      lfs       f0, -0x5718(r2)
      stfs      f2, 0x14(r29)
      stfs      f2, 0x204(r30)
      stfs      f0, 0x1C(r29)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      lfs       f0, -0x5780(r2)
      stfs      f1, 0x24(r29)
      lfs       f1, 0xC(r1)
      stfs      f1, 0x28(r29)
      lfs       f1, 0x10(r1)
      stfs      f1, 0x2C(r29)
      stfs      f0, 0x20(r29)
      stfs      f0, 0x30(r29)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8018812C
 * Size:	000120
 */
void Game::NaviDemo_UfoState::execSuck((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      addi      r3, r1, 0x8
      lwz       r5, -0x6CD0(r13)
      lwz       r4, 0xB0(r5)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x194(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      mr        r3, r31
      lfs       f5, 0x2C(r30)
      addi      r4, r1, 0x14
      lfs       f0, 0xC(r1)
      li        r5, 0
      lfs       f6, 0x28(r30)
      fsubs     f2, f1, f5
      lfs       f4, 0x20(r30)
      fsubs     f3, f0, f6
      lfs       f1, 0x8(r1)
      lfs       f7, 0x24(r30)
      fmuls     f0, f2, f4
      fsubs     f2, f1, f7
      fmuls     f1, f3, f4
      fadds     f0, f5, f0
      fmuls     f2, f2, f4
      fadds     f1, f6, f1
      stfs      f0, 0x1C(r1)
      fadds     f0, f7, f2
      stfs      f1, 0x18(r1)
      stfs      f0, 0x14(r1)
      bl        -0x4D014
      lfs       f2, -0x5684(r2)
      lfs       f1, 0x20(r30)
      lfs       f4, -0x5718(r2)
      lfs       f0, 0x1C(r30)
      fnmsubs   f1, f2, f1, f4
      lfs       f2, -0x5680(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0x168(r31)
      stfs      f0, 0x16C(r31)
      stfs      f0, 0x170(r31)
      lwz       r3, -0x6514(r13)
      lfs       f3, 0x30(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x18(r30)
      fmuls     f1, f3, f1
      lfs       f3, 0x20(r30)
      fdivs     f0, f1, f0
      fadds     f0, f3, f0
      stfs      f0, 0x20(r30)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x30(r30)
      lfs       f1, 0x54(r3)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x30(r30)
      lfs       f0, 0x20(r30)
      fcmpo     cr0, f0, f4
      cror      2, 0x1, 0x2
      mfcr      r0
      lwz       r31, 0x2C(r1)
      rlwinm    r3,r0,3,31,31
      lwz       r0, 0x34(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8018824C
 * Size:	00058C
 */
void Game::NaviDemo_HoleInState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xC0(r1)
      mflr      r0
      stw       r0, 0xC4(r1)
      stfd      f31, 0xB0(r1)
      psq_st    f31,0xB8(r1),0,0
      stfd      f30, 0xA0(r1)
      psq_st    f30,0xA8(r1),0,0
      stfd      f29, 0x90(r1)
      psq_st    f29,0x98(r1),0,0
      stfd      f28, 0x80(r1)
      psq_st    f28,0x88(r1),0,0
      stfd      f27, 0x70(r1)
      psq_st    f27,0x78(r1),0,0
      stw       r31, 0x6C(r1)
      stw       r30, 0x68(r1)
      stw       r29, 0x64(r1)
      mr        r30, r3
      li        r0, 0
      mr        r31, r4
      sth       r0, 0x10(r3)
      mr        r3, r31
      li        r4, 0x1E
      lwz       r12, 0x0(r31)
      li        r5, 0x1E
      li        r6, 0
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r4, r31
      stw       r0, 0x14(r30)
      addi      r3, r1, 0x2C
      lfs       f31, -0x567C(r2)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6B60(r13)
      lfs       f29, 0x2C(r1)
      cmplwi    r3, 0
      lfs       f28, 0x30(r1)
      lfs       f27, 0x34(r1)
      beq-      .loc_0xB4
      addi      r3, r3, 0x30

    .loc_0xB4:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x560
      stw       r0, 0x54(r1)
      cmplwi    r0, 0
      stw       r4, 0x48(r1)
      stw       r0, 0x4C(r1)
      stw       r3, 0x50(r1)
      bne-      .loc_0xF0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r1)
      b         .loc_0x178

    .loc_0xF0:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r1)
      b         .loc_0x15C

    .loc_0x108:
      lwz       r3, 0x50(r1)
      lwz       r4, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x178
      lwz       r3, 0x50(r1)
      lwz       r4, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r1)

    .loc_0x15C:
      lwz       r12, 0x48(r1)
      addi      r3, r1, 0x48
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x108

    .loc_0x178:
      lfs       f30, -0x5780(r2)
      b         .loc_0x2C4

    .loc_0x180:
      lwz       r3, 0x50(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      addi      r3, r1, 0x20
      mr        r29, r0
      lwz       r12, 0x0(r29)
      mr        r4, r29
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x24(r1)
      lfs       f1, 0x20(r1)
      fsubs     f2, f0, f28
      lfs       f0, 0x28(r1)
      fsubs     f1, f1, f29
      fsubs     f0, f0, f27
      fmuls     f2, f2, f2
      fmuls     f3, f0, f0
      fmadds    f0, f1, f1, f2
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f30
      ble-      .loc_0x1F4
      ble-      .loc_0x1F8
      fsqrte    f1, f0
      fmuls     f0, f1, f0
      b         .loc_0x1F8

    .loc_0x1F4:
      fmr       f0, f30

    .loc_0x1F8:
      fcmpo     cr0, f0, f31
      bge-      .loc_0x208
      fmr       f31, f0
      stw       r29, 0x14(r30)

    .loc_0x208:
      lwz       r0, 0x54(r1)
      cmplwi    r0, 0
      bne-      .loc_0x234
      lwz       r3, 0x50(r1)
      lwz       r4, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r1)
      b         .loc_0x2C4

    .loc_0x234:
      lwz       r3, 0x50(r1)
      lwz       r4, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r1)
      b         .loc_0x2A8

    .loc_0x254:
      lwz       r3, 0x50(r1)
      lwz       r4, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2C4
      lwz       r3, 0x50(r1)
      lwz       r4, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r1)

    .loc_0x2A8:
      lwz       r12, 0x48(r1)
      addi      r3, r1, 0x48
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x254

    .loc_0x2C4:
      lwz       r3, 0x50(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x4C(r1)
      cmplw     r4, r3
      bne+      .loc_0x180
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6BB8(r13)
      lfs       f27, 0x14(r1)
      cmplwi    r3, 0
      lfs       f28, 0x18(r1)
      lfs       f29, 0x1C(r1)
      beq-      .loc_0x318
      addi      r3, r3, 0x30

    .loc_0x318:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x560
      stw       r0, 0x44(r1)
      cmplwi    r0, 0
      stw       r4, 0x38(r1)
      stw       r0, 0x3C(r1)
      stw       r3, 0x40(r1)
      bne-      .loc_0x354
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x3DC

    .loc_0x354:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x3C0

    .loc_0x36C:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x3DC
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x3C0:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x36C

    .loc_0x3DC:
      lfs       f30, -0x5780(r2)
      b         .loc_0x528

    .loc_0x3E4:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      addi      r3, r1, 0x8
      mr        r29, r0
      lwz       r12, 0x0(r29)
      mr        r4, r29
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      lfs       f1, 0x8(r1)
      fsubs     f2, f0, f28
      lfs       f0, 0x10(r1)
      fsubs     f1, f1, f27
      fsubs     f0, f0, f29
      fmuls     f2, f2, f2
      fmuls     f3, f0, f0
      fmadds    f0, f1, f1, f2
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f30
      ble-      .loc_0x458
      ble-      .loc_0x45C
      fsqrte    f1, f0
      fmuls     f0, f1, f0
      b         .loc_0x45C

    .loc_0x458:
      fmr       f0, f30

    .loc_0x45C:
      fcmpo     cr0, f0, f31
      bge-      .loc_0x46C
      fmr       f31, f0
      stw       r29, 0x14(r30)

    .loc_0x46C:
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x498
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x528

    .loc_0x498:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x50C

    .loc_0x4B8:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x528
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x50C:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x4B8

    .loc_0x528:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x3E4
      psq_l     f31,0xB8(r1),0,0
      lfd       f31, 0xB0(r1)
      psq_l     f30,0xA8(r1),0,0
      lfd       f30, 0xA0(r1)
      psq_l     f29,0x98(r1),0,0
      lfd       f29, 0x90(r1)
      psq_l     f28,0x88(r1),0,0
      lfd       f28, 0x80(r1)
      psq_l     f27,0x78(r1),0,0
      lfd       f27, 0x70(r1)
      lwz       r31, 0x6C(r1)
      lwz       r30, 0x68(r1)
      lwz       r0, 0xC4(r1)
      lwz       r29, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	801887D8
 * Size:	0000A8
 */
void Game::NaviDemo_HoleInState::exec((Game::Navi*))
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
      lhz       r0, 0x10(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x68
      bge-      .loc_0x38
      cmpwi     r0, 0
      bge-      .loc_0x44
      b         .loc_0x90

    .loc_0x38:
      cmpwi     r0, 0x3
      bge-      .loc_0x90
      b         .loc_0x8C

    .loc_0x44:
      bl        0x74
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      li        r0, 0x1
      mr        r3, r30
      sth       r0, 0x10(r30)
      mr        r4, r31
      bl        0x1D0
      b         .loc_0x90

    .loc_0x68:
      bl        0x228
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      li        r0, 0x2
      mr        r3, r30
      sth       r0, 0x10(r30)
      mr        r4, r31
      bl        0x378
      b         .loc_0x90

    .loc_0x8C:
      bl        0x374

    .loc_0x90:
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
 * Address:	80188880
 * Size:	00000C
 */
void Game::NaviDemo_HoleInState::onKeyEvent((Game::Navi*,
                                             SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r0, 0x1
      stb       r0, 0x12(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8018888C
 * Size:	000004
 */
void Game::NaviDemo_HoleInState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80188890
 * Size:	000178
 */
void Game::NaviDemo_HoleInState::execGoto((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stfd      f29, 0x30(r1)
      psq_st    f29,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      mr        r31, r4
      lwz       r4, 0x14(r3)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18(r1)
      lfs       f29, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x10(r1)
      lfs       f0, 0x8(r1)
      fsubs     f6, f29, f1
      lfs       f1, 0xC(r1)
      fsubs     f4, f31, f0
      lfs       f0, -0x5678(r2)
      fsubs     f5, f30, f1
      fmuls     f3, f6, f6
      fmuls     f2, f4, f4
      fadds     f1, f2, f3
      fcmpo     cr0, f1, f0
      bge-      .loc_0xBC
      lfs       f0, -0x5780(r2)
      li        r3, 0x1
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)
      b         .loc_0x14C

    .loc_0xBC:
      fmuls     f7, f5, f5
      lfs       f1, -0x5780(r2)
      fadds     f0, f2, f7
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xF0
      fmadds    f0, f4, f4, f7
      fadds     f2, f3, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xF4
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xF4

    .loc_0xF0:
      fmr       f2, f1

    .loc_0xF4:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x114
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f2
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0
      fmuls     f6, f6, f0

    .loc_0x114:
      lwz       r4, -0x6D20(r13)
      li        r3, 0
      lfs       f3, -0x575C(r2)
      lwz       r4, 0xC8(r4)
      lfs       f0, 0x3B8(r4)
      fmuls     f2, f4, f0
      fmuls     f1, f5, f0
      fmuls     f0, f6, f0
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x1E4(r31)
      stfs      f1, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0x14C:
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r0, 0x64(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80188A08
 * Size:	000060
 */
void Game::NaviDemo_HoleInState::initHesitate((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      mr        r6, r4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x24
      addi      r6, r6, 0x178

    .loc_0x24:
      lwz       r12, 0x0(r4)
      mr        r3, r4
      li        r4, 0x35
      li        r5, 0x35
      lwz       r12, 0x208(r12)
      li        r7, 0
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x12(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80188A68
 * Size:	00016C
 */
void Game::NaviDemo_HoleInState::execHesitate((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stfd      f29, 0x30(r1)
      psq_st    f29,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      lbz       r0, 0x12(r3)
      mr        r31, r4
      cmplwi    r0, 0
      beq-      .loc_0x120
      lwz       r4, 0x14(r3)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18(r1)
      lfs       f29, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      lfs       f2, 0x10(r1)
      fsubs     f3, f30, f0
      lfs       f1, 0x8(r1)
      fsubs     f4, f29, f2
      lfs       f0, -0x5780(r2)
      fsubs     f2, f31, f1
      fmuls     f1, f3, f3
      fmuls     f3, f4, f4
      fmadds    f1, f2, f2, f1
      fadds     f1, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB8
      ble-      .loc_0xBC
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xBC

    .loc_0xB8:
      fmr       f1, f0

    .loc_0xBC:
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xD8
      lfs       f0, -0x5718(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f4, f4, f0

    .loc_0xD8:
      lfs       f1, -0x5724(r2)
      mr        r3, r31
      lfs       f0, -0x5674(r2)
      li        r4, 0
      fmuls     f2, f2, f1
      fmuls     f4, f4, f1
      stfs      f2, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f4, 0x208(r31)
      stfs      f2, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f4, 0x1EC(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1F0(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      b         .loc_0x140

    .loc_0x120:
      lfs       f0, -0x5780(r2)
      li        r3, 0
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0x140:
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r0, 0x64(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80188BD4
 * Size:	000004
 */
void Game::NaviDemo_HoleInState::initFall((Game::Navi*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80188BD8
 * Size:	000008
 */
void Game::NaviDemo_HoleInState::execFall((Game::Navi*))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80188BE0
 * Size:	000144
 */
void Game::NaviPressedState::init((Game::Navi*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lfs       f2, -0x568C(r2)
      stw       r0, 0x44(r1)
      lfs       f1, -0x5670(r2)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      stw       r30, 0x38(r1)
      mr        r30, r3
      mr        r3, r31
      lfs       f0, 0x168(r4)
      li        r4, 0
      stfs      f0, 0x14(r30)
      lfs       f0, -0x5724(r2)
      lfs       f3, 0x16C(r31)
      stfs      f3, 0x18(r30)
      lfs       f3, 0x170(r31)
      stfs      f3, 0x1C(r30)
      stfs      f2, 0x168(r31)
      stfs      f1, 0x16C(r31)
      stfs      f2, 0x170(r31)
      stfs      f0, 0x10(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1E0(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x1FC(r31)
      mr        r4, r31
      lfs       f1, -0x566C(r2)
      addi      r3, r1, 0x8
      lfs       f0, -0x5780(r2)
      stfs      f1, 0x20(r1)
      stfs      f2, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x20(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0xC(r1)
      addi      r3, r31, 0x138
      lfs       f0, -0x5724(r2)
      addi      r4, r31, 0x168
      lfs       f3, 0x8(r1)
      addi      r5, r1, 0x20
      lfs       f1, 0x10(r1)
      fadds     f0, f2, f0
      stfs      f2, 0x18(r1)
      addi      r6, r1, 0x14
      stfs      f3, 0x14(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x18(r1)
      bl        0x29F628
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      li        r4, 0x80F
      stw       r0, 0x20(r30)
      li        r5, 0
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      bl        0x2D0190
      cmplwi    r3, 0
      beq-      .loc_0x12C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x12C:
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
 * Address:	80188D24
 * Size:	000270
 */
void Game::NaviPressedState::exec((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      stw       r30, 0x48(r1)
      mr        r30, r3
      lwz       r5, -0x64AC(r13)
      lwz       r0, 0x1F0(r5)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x48
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x48:
      lfs       f2, 0x1FC(r31)
      addi      r3, r1, 0x8
      lfs       f1, -0x566C(r2)
      lfs       f0, -0x5780(r2)
      stfs      f1, 0x20(r1)
      stfs      f2, 0x24(r1)
      stfs      f0, 0x28(r1)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      lfs       f5, -0x5780(r2)
      stfs      f2, 0x14(r1)
      lwz       r3, -0x6514(r13)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f5, 0x20(r1)
      lfs       f1, 0x10(r30)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x10(r30)
      lwz       r0, 0x20(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x110
      bge-      .loc_0x23C
      cmpwi     r0, 0
      bge-      .loc_0xC4
      b         .loc_0x23C

    .loc_0xC4:
      lfs       f1, 0x18(r1)
      addi      r3, r31, 0x138
      lfs       f0, -0x5724(r2)
      addi      r4, r31, 0x168
      addi      r5, r1, 0x20
      addi      r6, r1, 0x14
      fadds     f0, f1, f0
      stfs      f0, 0x18(r1)
      bl        0x29F4D0
      lfs       f1, 0x10(r30)
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x23C
      li        r0, 0x1
      lfs       f0, -0x5668(r2)
      stw       r0, 0x20(r30)
      stfs      f0, 0x10(r30)
      b         .loc_0x23C

    .loc_0x110:
      lfs       f6, 0x10(r30)
      lfs       f1, -0x5668(r2)
      lfs       f0, -0x5664(r2)
      fdivs     f2, f6, f1
      lfs       f4, -0x5718(r2)
      lfs       f3, -0x56C8(r2)
      lfs       f1, -0x575C(r2)
      fsubs     f7, f4, f2
      fmuls     f2, f0, f6
      fsubs     f0, f4, f7
      fmuls     f2, f3, f2
      fmuls     f1, f1, f0
      fcmpo     cr0, f2, f5
      bge-      .loc_0x174
      lfs       f0, -0x5774(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x198

    .loc_0x174:
      lfs       f0, -0x5778(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x198:
      fmuls     f1, f1, f0
      lfs       f0, -0x5780(r2)
      fadds     f7, f7, f1
      fcmpo     cr0, f7, f0
      bge-      .loc_0x1B0
      fmr       f7, f0

    .loc_0x1B0:
      lfs       f0, -0x5718(r2)
      addi      r3, r31, 0x138
      lfs       f3, -0x568C(r2)
      addi      r4, r31, 0x168
      fsubs     f5, f0, f7
      lfs       f1, -0x5670(r2)
      lfs       f4, 0x14(r30)
      addi      r5, r1, 0x20
      lfs       f2, 0x18(r30)
      addi      r6, r1, 0x14
      fmuls     f3, f3, f5
      lfs       f0, -0x5724(r2)
      fmuls     f1, f1, f5
      fmadds    f3, f7, f4, f3
      fmadds    f1, f7, f2, f1
      stfs      f3, 0x168(r31)
      stfs      f1, 0x16C(r31)
      stfs      f3, 0x170(r31)
      lfs       f1, 0x18(r1)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r1)
      bl        0x29F3B0
      lfs       f1, 0x10(r30)
      lfs       f0, -0x5780(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x23C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x23C:
      lfs       f0, -0x5780(r2)
      stfs      f0, 0x200(r31)
      stfs      f0, 0x204(r31)
      stfs      f0, 0x208(r31)
      stfs      f0, 0x1E4(r31)
      stfs      f0, 0x1E8(r31)
      stfs      f0, 0x1EC(r31)

    .loc_0x258:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80188F94
 * Size:	00007C
 */
void Game::NaviPressedState::cleanup((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1E0(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x14(r30)
      stfs      f0, 0x168(r31)
      lfs       f0, 0x18(r30)
      stfs      f0, 0x16C(r31)
      lfs       f0, 0x1C(r30)
      stfs      f0, 0x170(r31)
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
 * Address:	80189010
 * Size:	000008
 */
void Game::NaviPressedState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189018
 * Size:	000008
 */
void Game::NaviPressedState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189020
 * Size:	000008
 */
void Game::NaviPressedState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189028
 * Size:	000008
 */
void Game::NaviState::callable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189030
 * Size:	000008
 */
void Game::NaviState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189038
 * Size:	000008
 */
void Game::NaviPelletState::callable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189040
 * Size:	000008
 */
void Game::NaviDeadState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189048
 * Size:	000008
 */
void Game::NaviDeadState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189050
 * Size:	000008
 */
void Game::NaviDeadState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189058
 * Size:	000008
 */
void Game::NaviDamagedState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189060
 * Size:	000008
 */
void Game::NaviDamagedState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189068
 * Size:	000008
 */
void Game::NaviAbsorbState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189070
 * Size:	000008
 */
void Game::NaviAbsorbState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189078
 * Size:	000008
 */
void Game::NaviAbsorbState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189080
 * Size:	000008
 */
void og::Screen::DispMemberContena::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x38
      blr
    */
}

/*
 * --INFO--
 * Address:	80189088
 * Size:	00000C
 */
void og::Screen::DispMemberContena::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	80189094
 * Size:	000014
 */
void og::Screen::DispMemberContena::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5445
      lis       r3, 0x43
      addi      r4, r4, 0x4E41
      addi      r3, r3, 0x4F4E
      blr
    */
}

/*
 * --INFO--
 * Address:	801890A8
 * Size:	000008
 */
void og::Screen::DispMemberUfoMenu::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801890B0
 * Size:	00000C
 */
void og::Screen::DispMemberUfoMenu::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	801890BC
 * Size:	000014
 */
void og::Screen::DispMemberUfoMenu::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4D45
      lis       r3, 0x55
      addi      r4, r4, 0x4E55
      addi      r3, r3, 0x464F
      blr
    */
}

/*
 * --INFO--
 * Address:	801890D0
 * Size:	000008
 */
void og::Screen::DispMemberUfoGroup::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x8C
      blr
    */
}

/*
 * --INFO--
 * Address:	801890D8
 * Size:	00000C
 */
void og::Screen::DispMemberUfoGroup::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	801890E4
 * Size:	000014
 */
void og::Screen::DispMemberUfoGroup::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5F47
      lis       r3, 0x55
      addi      r4, r4, 0x5250
      addi      r3, r3, 0x464F
      blr
    */
}

/*
 * --INFO--
 * Address:	801890F8
 * Size:	000048
 */
void og::Screen::DispMemberUfoGroup::doSetSubMemberAll(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r4, r31, 0x8
      bl        0x1862CC
      mr        r3, r31
      addi      r4, r31, 0x18
      bl        0x1862C0
      mr        r3, r31
      addi      r4, r31, 0x50
      bl        0x1862B4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80189140
 * Size:	000008
 */
void Game::NaviContainerState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189148
 * Size:	000008
 */
void Game::NaviSaraiExitState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189150
 * Size:	000008
 */
void Game::NaviSaraiState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189158
 * Size:	000008
 */
void Game::NaviKokeDamageState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189160
 * Size:	000008
 */
void Game::NaviKokeDamageState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189168
 * Size:	000008
 */
void Game::NaviFlickState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189170
 * Size:	000008
 */
void Game::NaviFlickState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189178
 * Size:	000008
 */
void Game::NaviFallMeckState::pressable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80189180
 * Size:	00000C
 */
void efx::ArgDopingSmoke::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0x1428
      blr
    */
}

/*
 * --INFO--
 * Address:	8018918C
 * Size:	000008
 */
void Game::NaviDopeState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80189194
 * Size:	000008
 */
void Game::NaviNukuState::invincible(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8018919C
 * Size:	000008
 */
void Game::NaviFollowState::needYChangeMotion(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801891A4
 * Size:	000008
 */
void Game::NaviWalkState::callable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801891AC
 * Size:	000008
 */
void Game::NaviWalkState::needYChangeMotion(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801891B4
 * Size:	000008
 */
void Game::NaviStuckState::vsUsableY(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801891BC
 * Size:	000004
 */
void resume__Q24Game22FSMState<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801891C0
 * Size:	000004
 */
void restart__Q24Game22FSMState<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801891C4
 * Size:	000064
 */
void create__Q24Game26StateMachine<Game::Navi> Fi(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0xC(r3)
      stw       r0, 0x8(r3)
      lwz       r0, 0xC(r3)
      rlwinm    r3,r0,2,0,29
      bl        -0x165240
      stw       r3, 0x4(r31)
      lwz       r0, 0xC(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x165250
      stw       r3, 0x10(r31)
      lwz       r0, 0xC(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x165260
      stw       r3, 0x14(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80189228
 * Size:	000030
 */
void Delegate1<Game::NaviPunchState, CollPart*>::invoke(CollPart*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r3
      stw       r0, 0x14(r1)
      addi      r12, r5, 0x8
      lwz       r3, 0x4(r3)
      bl        -0xC771C
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80189258
 * Size:	000030
 */
void Delegate<Game::NaviThrowWaitState>::invoke()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      addi      r12, r4, 0x8
      lwz       r3, 0x4(r3)
      bl        -0xC774C
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80189288
 * Size:	00001C
 */
void getCurrID__Q24Game26StateMachine<Game::Navi> FPQ24Game4Navi(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x274(r4)
      cmplwi    r3, 0
      beq-      .loc_0x14
      lwz       r3, 0x4(r3)
      blr

    .loc_0x14:
      li        r3, -0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801892A4
 * Size:	000084
 */
void registerState__Q24Game26StateMachine<Game::Navi>
FPQ24Game22FSMState<Game::Navi>(void)
{
    /*
    .loc_0x0:
      lwz       r6, 0x8(r3)
      lwz       r0, 0xC(r3)
      cmpw      r6, r0
      bgelr-
      lwz       r5, 0x4(r3)
      rlwinm    r0,r6,2,0,29
      stwx      r4, r5, r0
      lwz       r5, 0x4(r4)
      cmpwi     r5, 0
      blt-      .loc_0x34
      lwz       r0, 0xC(r3)
      cmpw      r5, r0
      blt-      .loc_0x3C

    .loc_0x34:
      li        r0, 0
      b         .loc_0x40

    .loc_0x3C:
      li        r0, 0x1

    .loc_0x40:
      rlwinm.   r0,r0,0,24,31
      beqlr-
      stw       r3, 0x8(r4)
      lwz       r0, 0x8(r3)
      lwz       r6, 0x4(r4)
      lwz       r5, 0x10(r3)
      rlwinm    r0,r0,2,0,29
      stwx      r6, r5, r0
      lwz       r0, 0x4(r4)
      lwz       r5, 0x8(r3)
      lwz       r4, 0x14(r3)
      rlwinm    r0,r0,2,0,29
      stwx      r5, r4, r0
      lwz       r4, 0x8(r3)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80189328
 * Size:	000028
 */
void __sinit_naviState_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804B
      stw       r0, -0x6CC8(r13)
      stfsu     f0, 0x2D40(r3)
      stfs      f0, -0x6CC4(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80189350
 * Size:	000014
 */
void @60 @4 @Game::NaviThrowWaitState::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3C
      b         -0x3150
    */
}

/*
 * --INFO--
 * Address:	80189364
 * Size:	000014
 */
void @32 @4 @Game::NaviThrowState::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x20
      b         -0x1F04
    */
}
