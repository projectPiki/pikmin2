

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
 * Address:	80219F48
 * Size:	000150
 */
void Game::SingleGame::MainResultState::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x804B
      li        r5, 0
      stw       r0, 0x34(r1)
      addi      r0, r4, 0x1318
      lis       r4, 0x804B
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r4, r4, 0x12D0
      stw       r0, 0x0(r3)
      li        r0, 0x7
      lis       r3, 0x804C
      stw       r0, 0x4(r31)
      addi      r0, r3, 0x69C
      addi      r3, r31, 0x24
      stw       r5, 0x8(r31)
      stw       r4, 0x0(r31)
      stw       r0, 0x0(r31)
      bl        0xD484
      addi      r3, r31, 0x68
      bl        0xDA6C
      addi      r3, r31, 0xCC
      bl        0x20A874
      li        r3, 0xB0
      bl        -0x1F6108
      mr.       r0, r3
      beq-      .loc_0x7C
      li        r4, 0
      bl        0x20AE98
      mr        r0, r3

    .loc_0x7C:
      stw       r0, 0x18(r31)
      li        r3, 0x14
      bl        -0x1F6128
      cmplwi    r3, 0
      beq-      .loc_0xD8
      lis       r4, 0x804C
      lis       r5, 0x804B
      addi      r8, r4, 0x654
      lis       r4, 0x804C
      lwz       r7, 0x0(r8)
      addi      r5, r5, 0xF00
      lwz       r6, 0x4(r8)
      addi      r0, r4, 0x6F4
      lwz       r4, 0x8(r8)
      stw       r7, 0x14(r1)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)
      stw       r31, 0x4(r3)
      stw       r7, 0x8(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0x18(r1)
      stw       r4, 0x1C(r1)
      stw       r4, 0x10(r3)

    .loc_0xD8:
      stw       r3, 0xC8(r31)
      li        r3, 0x14
      bl        -0x1F6184
      cmplwi    r3, 0
      beq-      .loc_0x134
      lis       r4, 0x804C
      lis       r5, 0x804B
      addi      r8, r4, 0x660
      lis       r4, 0x804C
      lwz       r7, 0x0(r8)
      addi      r5, r5, 0xF00
      lwz       r6, 0x4(r8)
      addi      r0, r4, 0x6F4
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

    .loc_0x134:
      stw       r3, 0x13C(r31)
      mr        r3, r31
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8021A098
 * Size:	000060
 */
void Game::Result::TNode::__dt(void)
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
      addi      r0, r5, 0x6E4
      stw       r0, 0x0(r30)
      bl        0xDB60
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x1F6024

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
 * Address:	8021A0F8
 * Size:	000104
 */
void Game::SingleGame::MainResultState::init((Game::SingleGameSection*,
                                              Game::StateArg*))
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
      lwz       r5, -0x6C18(r13)
      lbz       r0, 0x3C(r5)
      ori       r0, r0, 0x4
      stb       r0, 0x3C(r5)
      stw       r31, 0x138(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      lwz       r5, -0x6B70(r13)
      mr        r3, r30
      mr        r4, r31
      li        r6, 0
      lwz       r31, 0xE8(r5)
      lwz       r5, 0xB4(r5)
      bl        -0xC7BCC
      lwz       r3, -0x6B70(r13)
      addi      r4, r30, 0xCC
      stw       r31, 0xE8(r3)
      lwz       r3, -0x6514(r13)
      lwz       r5, 0xC8(r30)
      bl        0x208DCC
      li        r0, 0
      sth       r0, 0x10(r30)
      stw       r0, 0xC0(r30)
      lwz       r3, -0x6B70(r13)
      stb       r0, 0x20(r3)
      lwz       r3, -0x6D20(r13)
      bl        -0xBEF98
      lwz       r3, -0x6E20(r13)
      bl        -0x10C5A0
      lwz       r0, -0x6E28(r13)
      stw       r3, -0x6A80(r13)
      cmplwi    r0, 0
      beq-      .loc_0xB4
      mr        r3, r0
      bl        -0xF5B24

    .loc_0xB4:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x98(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6BC8(r13)
      bl        -0x34F80
      lwz       r4, -0x6CE0(r13)
      cmplwi    r4, 0
      beq-      .loc_0xE0
      addi      r4, r4, 0x1C

    .loc_0xE0:
      lwz       r3, -0x6C18(r13)
      bl        -0x641E4
      stw       r3, 0xC4(r30)
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
 * Address:	8021A1FC
 * Size:	000024
 */
void Game::SingleGame::MainResultState::beforeSave(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, -0x6B70(r13)
      bl        -0x30288
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8021A220
 * Size:	000088
 */
void Game::SingleGame::MainResultState::loadResource(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x24(r1)
      li        r0, -0x1
      addi      r4, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r3
      addi      r3, r31, 0x24
      stw       r5, 0x10(r1)
      lwz       r7, -0x6A80(r13)
      stw       r5, 0xC(r1)
      lwz       r6, -0x6AE0(r13)
      stw       r5, 0x8(r1)
      lwz       r5, -0x6AD8(r13)
      stb       r0, 0x14(r1)
      stw       r7, 0x10(r1)
      lwz       r0, 0x8(r6)
      stw       r0, 0x8(r1)
      lwz       r0, 0x8(r5)
      stw       r0, 0xC(r1)
      stw       r7, 0xC0(r31)
      bl        0xD250
      mr        r3, r31
      bl        0x440
      lwz       r3, -0x65E8(r13)
      bl        0x1A150C
      lwz       r3, -0x6980(r13)
      bl        0x27980
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void Game::SingleGame::MainResultState::open2D((Game::SingleGameSection*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021A2A8
 * Size:	0003E8
 */
void Game::SingleGame::MainResultState::exec((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xC0(r1)
      mflr      r0
      stw       r0, 0xC4(r1)
      stmw      r27, 0xAC(r1)
      mr        r30, r3
      mr        r31, r4
      lhz       r0, 0x10(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x108
      bge-      .loc_0x38
      cmpwi     r0, 0
      beq-      .loc_0x48
      bge-      .loc_0xD8
      b         .loc_0x310

    .loc_0x38:
      cmpwi     r0, 0x4
      beq-      .loc_0x2A8
      bge-      .loc_0x310
      b         .loc_0x240

    .loc_0x48:
      lwz       r0, 0xE4(r30)
      cmpwi     r0, 0x2
      bne-      .loc_0xCC
      li        r0, 0x2
      lis       r3, 0x8048
      sth       r0, 0x10(r30)
      addi      r5, r3, 0x2598
      lfs       f0, -0x4328(r2)
      li        r0, 0
      lwz       r6, 0xC8(r31)
      addi      r4, r1, 0x8
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r6, 0x14(r1)
      stfs      f0, 0x20(r1)
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x2C(r1)
      stw       r0, 0x30(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x34(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x38(r1)
      bl        0x21267C
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x4324
      li        r6, 0x3
      bl        -0x653D4
      li        r0, 0
      stw       r0, 0x20(r30)

    .loc_0xCC:
      mr        r3, r31
      bl        -0xB53D0
      b         .loc_0x3D4

    .loc_0xD8:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x14(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x4328(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x14(r30)
      lfs       f1, 0x14(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x310
      li        r0, 0x3
      sth       r0, 0x10(r30)
      b         .loc_0x310

    .loc_0x108:
      lwz       r3, 0x20(r30)
      addi      r0, r3, 0x1
      cmpwi     r0, 0xC7
      stw       r0, 0x20(r30)
      bge-      .loc_0x12C
      lwz       r3, 0x18(r30)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0x310

    .loc_0x12C:
      li        r0, 0x3
      sth       r0, 0x10(r30)
      lwz       r3, -0x6B70(r13)
      bl        -0x32F6C
      lwz       r3, 0x13C(r30)
      li        r0, 0x1
      lwz       r4, -0x6B70(r13)
      stb       r0, 0x19(r4)
      stw       r3, 0x1C(r4)
      lwz       r4, -0x6B70(r13)
      lwz       r6, 0xE8(r4)
      cmpwi     r6, 0xBB8
      bge-      .loc_0x168
      li        r29, 0x31
      b         .loc_0x1C0

    .loc_0x168:
      cmpwi     r6, 0x1388
      bge-      .loc_0x178
      li        r29, 0x32
      b         .loc_0x1C0

    .loc_0x178:
      cmpwi     r6, 0x1F40
      bge-      .loc_0x188
      li        r29, 0x33
      b         .loc_0x1C0

    .loc_0x188:
      cmpwi     r6, 0x2710
      bge-      .loc_0x198
      li        r29, 0x34
      b         .loc_0x1C0

    .loc_0x198:
      lbz       r3, 0x2F(r4)
      rlwinm.   r0,r3,0,30,30
      beq-      .loc_0x1AC
      li        r29, 0x37
      b         .loc_0x1C0

    .loc_0x1AC:
      rlwinm.   r0,r3,0,29,29
      beq-      .loc_0x1BC
      li        r29, 0x36
      b         .loc_0x1C0

    .loc_0x1BC:
      li        r29, 0x35

    .loc_0x1C0:
      lbz       r0, 0x2F(r4)
      lis       r3, 0x804B
      lwz       r5, 0xBC(r4)
      addi      r10, r3, 0x1148
      lwz       r28, 0xB8(r30)
      lis       r4, 0x804C
      li        r9, 0
      lis       r3, 0x804C
      rlwinm    r7,r0,0,31,31
      addi      r8, r4, 0x684
      stw       r10, 0x3C(r1)
      addi      r0, r3, 0x66C
      lwz       r27, -0x6A80(r13)
      addi      r3, r1, 0x4C
      stw       r10, 0x44(r1)
      addi      r4, r30, 0x68
      stw       r9, 0x40(r1)
      stw       r8, 0x3C(r1)
      stw       r9, 0x48(r1)
      stw       r0, 0x44(r1)
      bl        0x1E8394
      mr        r4, r28
      addi      r3, r1, 0x70
      bl        0x1E86A8
      mr        r4, r27
      mr        r5, r29
      addi      r3, r1, 0x80
      bl        0x1E86C8
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x3C
      bl        0x1E3F64
      b         .loc_0x310

    .loc_0x240:
      lwz       r3, -0x6560(r13)
      bl        0x1E4004
      cmpwi     r3, 0x2
      beq-      .loc_0x274
      bge-      .loc_0x310
      cmpwi     r3, 0x1
      bge-      .loc_0x260
      b         .loc_0x310

    .loc_0x260:
      lwz       r3, -0x64AC(r13)
      li        r4, 0x1
      li        r5, 0
      bl        0x213E74
      b         .loc_0x310

    .loc_0x274:
      lwz       r3, -0x64AC(r13)
      bl        0x213A24
      mr        r3, r31
      bl        -0xCA784
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3D4

    .loc_0x2A8:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x14(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x4328(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x14(r30)
      lfs       f1, 0x14(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3D4
      mr        r3, r31
      bl        -0xCA7D4
      lwz       r3, 0x8C(r30)
      b         .loc_0x2E0

    .loc_0x2DC:
      lwz       r3, 0x18(r3)

    .loc_0x2E0:
      cmplwi    r3, 0
      bne+      .loc_0x2DC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3D4
      b         .loc_0x3D4

    .loc_0x310:
      lwz       r3, -0x6CD0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6CD0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6CD0(r13)
      lwz       r4, -0x6514(r13)
      lwz       r12, 0x0(r3)
      lfs       f1, 0x54(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6514(r13)
      lwz       r3, 0x24(r3)
      lwz       r27, 0x25C(r3)
      bl        0x224A44
      mr        r3, r31
      mr        r4, r27
      li        r5, 0
      bl        -0xCB150
      lwz       r3, -0x64AC(r13)
      li        r5, 0
      lwz       r4, 0x10C(r31)
      bl        0x213040
      lwz       r3, -0x65F8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x394
      bl        0x19EF78

    .loc_0x394:
      lwz       r3, -0x65E8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x3B0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x3B0:
      lwz       r3, -0x6560(r13)
      bl        0x1E19D0
      lwz       r3, 0x128(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0xB56D0

    .loc_0x3D4:
      lmw       r27, 0xAC(r1)
      lwz       r0, 0xC4(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	8021A690
 * Size:	000030
 */
void Game::SingleGame::MainResultState::onMovieDone((
    Game::SingleGameSection*, Game::MovieConfig*, unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x4328(r2)
      stw       r0, 0x14(r1)
      li        r0, 0x4
      sth       r0, 0x10(r3)
      stfs      f0, 0x14(r3)
      bl        0x24CD8C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8021A6C0
 * Size:	00035C
 */
void Game::SingleGame::MainResultState::createResultNodes(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r20, 0x10(r1)
      mr        r31, r3
      lwz       r30, -0x77D4(r13)
      lwz       r3, 0xC0(r3)
      bl        -0x1F7138
      lwz       r3, -0x6B70(r13)
      li        r26, 0
      lwz       r29, -0x6AD8(r13)
      lwz       r28, 0xB4(r3)
      addi      r27, r28, 0xC
      b         .loc_0x118

    .loc_0x38:
      mr        r3, r27
      mr        r4, r26
      bl        -0x35300
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x114
      mr        r3, r29
      mr        r4, r26
      bl        -0xAE990
      mr        r24, r3
      lhz       r3, 0x254(r3)
      subi      r3, r3, 0x1
      bl        0xDADC
      bl        0xD378
      mr        r0, r3
      mr        r20, r4
      li        r3, 0x50
      mr        r21, r0
      bl        -0x1F689C
      mr.       r23, r3
      beq-      .loc_0x94
      bl        0xD2BC
      mr        r23, r3

    .loc_0x94:
      lwz       r22, 0x170(r24)
      mr        r3, r27
      mr        r4, r26
      bl        -0x35360
      lbz       r0, 0x0(r3)
      mr        r3, r27
      mr        r4, r26
      mullw     r25, r22, r0
      bl        -0x35374
      lbz       r24, 0x0(r3)
      mr        r4, r26
      addi      r3, r31, 0x24
      bl        0xD160
      mr        r7, r3
      mr        r3, r23
      mr        r6, r20
      mr        r5, r21
      mr        r8, r24
      mr        r9, r25
      mr        r10, r22
      bl        0xD2C0
      mr        r4, r23
      addi      r3, r31, 0x68
      bl        0xD3C8
      mr        r3, r27
      mr        r4, r26
      bl        -0x353BC
      lwz       r4, -0x6B70(r13)
      lbz       r3, 0x0(r3)
      lwz       r0, 0xBC(r4)
      add       r0, r0, r3
      stw       r0, 0xBC(r4)

    .loc_0x114:
      addi      r26, r26, 0x1

    .loc_0x118:
      lhz       r0, 0x0(r27)
      cmpw      r26, r0
      blt+      .loc_0x38
      lwz       r29, -0x6AE0(r13)
      addi      r26, r28, 0x4
      li        r27, 0
      b         .loc_0x214

    .loc_0x134:
      mr        r3, r26
      mr        r4, r27
      bl        -0x353FC
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x210
      mr        r3, r29
      mr        r4, r27
      bl        -0xAEA8C
      mr        r24, r3
      lhz       r3, 0x254(r3)
      subi      r3, r3, 0x1
      bl        0xD9E0
      bl        0xD27C
      mr        r0, r3
      mr        r21, r4
      li        r3, 0x50
      mr        r20, r0
      bl        -0x1F6998
      mr.       r23, r3
      beq-      .loc_0x190
      bl        0xD1C0
      mr        r23, r3

    .loc_0x190:
      lwz       r22, 0x170(r24)
      mr        r3, r26
      mr        r4, r27
      bl        -0x3545C
      lbz       r0, 0x0(r3)
      mr        r3, r26
      mr        r4, r27
      mullw     r24, r22, r0
      bl        -0x35470
      lbz       r25, 0x0(r3)
      mr        r4, r27
      addi      r3, r31, 0x24
      bl        0xD040
      mr        r7, r3
      mr        r3, r23
      mr        r6, r21
      mr        r5, r20
      mr        r8, r25
      mr        r9, r24
      mr        r10, r22
      bl        0xD1C4
      mr        r4, r23
      addi      r3, r31, 0x68
      bl        0xD2CC
      mr        r3, r26
      mr        r4, r27
      bl        -0x354B8
      lwz       r4, -0x6B70(r13)
      lbz       r3, 0x0(r3)
      lwz       r0, 0xBC(r4)
      add       r0, r0, r3
      stw       r0, 0xBC(r4)

    .loc_0x210:
      addi      r27, r27, 0x1

    .loc_0x214:
      lhz       r0, 0x0(r26)
      cmpw      r27, r0
      blt+      .loc_0x134
      lwz       r22, -0x6B00(r13)
      addi      r20, r28, 0x14
      li        r26, 0
      li        r27, 0
      li        r21, 0
      b         .loc_0x294

    .loc_0x238:
      mr        r3, r20
      mr        r4, r21
      bl        -0x35500
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x290
      mr        r3, r22
      mr        r4, r21
      bl        -0xAEB90
      mr        r28, r3
      mr        r3, r20
      mr        r4, r21
      bl        -0x35528
      lbz       r0, 0x0(r3)
      mr        r3, r20
      lwz       r23, 0x170(r28)
      mr        r4, r21
      add       r27, r27, r0
      bl        -0x35540
      lbz       r0, 0x0(r3)
      mullw     r0, r0, r23
      add       r26, r26, r0

    .loc_0x290:
      addi      r21, r21, 0x1

    .loc_0x294:
      lhz       r0, 0x0(r20)
      cmpw      r21, r0
      blt+      .loc_0x238
      cmpwi     r27, 0
      ble-      .loc_0x304
      lwz       r4, -0x6B70(r13)
      li        r3, 0x50
      lwz       r0, 0xBC(r4)
      add       r0, r0, r27
      stw       r0, 0xBC(r4)
      bl        -0x1F6AD8
      mr.       r23, r3
      beq-      .loc_0x2D0
      bl        0xD080
      mr        r23, r3

    .loc_0x2D0:
      addi      r3, r31, 0x24
      bl        0xCF74
      mr        r7, r3
      mr        r3, r23
      mr        r8, r27
      mr        r9, r26
      li        r6, 0
      li        r5, 0
      li        r10, -0x1
      bl        0xD0B0
      mr        r4, r23
      addi      r3, r31, 0x68
      bl        0xD1B8

    .loc_0x304:
      lwz       r3, -0x6B70(r13)
      lwz       r3, 0xB4(r3)
      bl        -0x3518C
      li        r3, 0x74
      bl        -0x1F6B30
      mr.       r0, r3
      beq-      .loc_0x328
      bl        0x1E7EF8
      mr        r0, r3

    .loc_0x328:
      stw       r0, 0xB8(r31)
      li        r0, 0
      stb       r0, 0x1C(r31)
      lwz       r3, -0x6560(r13)
      lwz       r4, 0x18(r31)
      bl        0x1E167C
      mr        r3, r30
      bl        -0x1F7460
      lmw       r20, 0x10(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AA1C
 * Size:	000094
 */
void Game::SingleGame::MainResultState::draw((Game::SingleGameSection*,
                                              Graphics&))
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
      lhz       r0, 0x10(r3)
      cmplwi    r0, 0x2
      beq-      .loc_0x38
      cmplwi    r0, 0x3
      beq-      .loc_0x38
      cmplwi    r0, 0x4
      bne-      .loc_0x7C

    .loc_0x38:
      lwz       r3, -0x6960(r13)
      bl        0x37674
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x10C(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x64AC(r13)
      mr        r4, r31
      bl        0x213B70
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x110(r12)
      mtctr     r12
      bctrl

    .loc_0x7C:
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
 * Address:	8021AAB0
 * Size:	00007C
 */
void Game::SingleGame::MainResultState::cleanup((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, -0x6560(r13)
      lwz       r3, 0x18(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6B70(r13)
      lwz       r3, 0xB4(r3)
      bl        -0x352A4
      lwz       r4, 0xC4(r31)
      cmplwi    r4, 0
      beq-      .loc_0x4C
      lwz       r3, -0x6C18(r13)
      bl        -0x64B24

    .loc_0x4C:
      lwz       r3, 0x138(r31)
      li        r0, 0
      stw       r0, 0x168(r3)
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,30,28
      stb       r0, 0x3C(r3)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB2C
 * Size:	000008
 */
void kh::Screen::DispDayEndResultTitl::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x8
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB34
 * Size:	000008
 */
void kh::Screen::DispDayEndResultTitl::getOwnerID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4B48
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB3C
 * Size:	000014
 */
void kh::Screen::DispDayEndResultTitl::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5449
      lis       r3, 0x4445
      addi      r4, r4, 0x544C
      addi      r3, r3, 0x525F
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB50
 * Size:	000008
 */
void kh::Screen::DispDayEndResult::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x68
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB58
 * Size:	000008
 */
void kh::Screen::DispDayEndResult::getOwnerID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4B48
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB60
 * Size:	000014
 */
void kh::Screen::DispDayEndResult::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5253
      lis       r3, 0x44
      addi      r4, r4, 0x4C54
      addi      r3, r3, 0x455F
      blr
    */
}

/*
 * --INFO--
 * Address:	8021AB74
 * Size:	000054
 */
void kh::Screen::DispDayEndResult::doSetSubMemberAll(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r4, r31, 0x8
      bl        0xF4850
      mr        r3, r31
      addi      r4, r31, 0x10
      bl        0xF4844
      mr        r3, r31
      addi      r4, r31, 0x34
      bl        0xF4838
      mr        r3, r31
      addi      r4, r31, 0x44
      bl        0xF482C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8021ABC8
 * Size:	000030
 */
void Delegate<Game::SingleGame::MainResultState>::invoke()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      addi      r12, r4, 0x8
      lwz       r3, 0x4(r3)
      bl        -0x1590BC
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8021ABF8
 * Size:	000028
 */
void __sinit_singleGS_MainResult_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x6A88(r13)
      stfsu     f0, 0x648(r3)
      stfs      f0, -0x6A84(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
