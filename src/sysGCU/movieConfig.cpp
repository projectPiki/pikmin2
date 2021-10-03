

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
 * Address:	........
 * Size:	000110
 */
void Game::MovieConfig::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80431830
 * Size:	000070
 */
void Game::MovieConfig::TParms::__dt(void)
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
      lis       r4, 0x804F
      subi      r0, r4, 0x3C7C
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0x5B10
      stw       r0, 0x0(r30)
      bl        -0x202E8

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x40D7CC

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
 * Address:	804318A0
 * Size:	000004
 */
void Game::MovieConfig::dump(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	804318A4
 * Size:	00001C
 */
void Game::MovieConfig::isSkippable(void)
{
    /*
    .loc_0x0:
      lhz       r3, 0xBC(r3)
      rlwinm.   r0,r3,0,30,30
      beq-      .loc_0x14
      li        r3, 0
      blr

    .loc_0x14:
      rlwinm    r3,r3,0,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	804318C0
 * Size:	00000C
 */
void Game::MovieConfig::isNeverSkippable(void)
{
    /*
    .loc_0x0:
      lhz       r0, 0xBC(r3)
      rlwinm    r3,r0,31,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	804318CC
 * Size:	000054
 */
void Game::MovieConfig::is((char*))
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
      bl        -0x366FDC
      mr        r5, r3
      mr        r4, r31
      addi      r3, r30, 0x45
      bl        -0x36727C
      cntlzw    r0, r3
      lwz       r31, 0xC(r1)
      rlwinm    r3,r0,27,5,31
      lwz       r0, 0x14(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80431920
 * Size:	0002D4
 */
void Game::MovieConfig::read((Stream&))
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
      stw       r29, 0x24(r1)
      bl        -0x1E6D4
      mr        r4, r31
      addi      r3, r1, 0x8
      bl        -0x1E460
      lis       r3, 0x7630
      lwz       r4, 0x10(r1)
      addi      r0, r3, 0x2E32
      cmplw     r4, r0
      blt-      .loc_0x14C
      mr        r4, r31
      addi      r3, r30, 0x68
      bl        -0x1589C
      li        r0, 0x4
      li        r4, 0
      mtctr     r0

    .loc_0x60:
      lwz       r5, 0x90(r30)
      add       r3, r30, r4
      addi      r12, r4, 0x1
      addi      r11, r4, 0x2
      lbzx      r0, r5, r4
      addi      r10, r4, 0x3
      addi      r9, r4, 0x4
      addi      r8, r4, 0x5
      stb       r0, 0x25(r3)
      addi      r7, r4, 0x6
      addi      r6, r4, 0x7
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r4
      addi      r4, r4, 0x8
      stb       r0, 0x45(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r12
      stb       r0, 0x26(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r12
      stb       r0, 0x46(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r11
      stb       r0, 0x27(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r11
      stb       r0, 0x47(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r10
      stb       r0, 0x28(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r10
      stb       r0, 0x48(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r9
      stb       r0, 0x29(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r9
      stb       r0, 0x49(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r8
      stb       r0, 0x2A(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r8
      stb       r0, 0x4A(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r7
      stb       r0, 0x2B(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r7
      stb       r0, 0x4B(r3)
      lwz       r5, 0x90(r30)
      lbzx      r0, r5, r6
      stb       r0, 0x2C(r3)
      lwz       r5, 0xA0(r30)
      lbzx      r0, r5, r6
      stb       r0, 0x4C(r3)
      bdnz+     .loc_0x60
      b         .loc_0x18C

    .loc_0x14C:
      li        r29, 0

    .loc_0x150:
      mr        r3, r31
      bl        -0x1D5D8
      addi      r0, r29, 0x25
      addi      r29, r29, 0x1
      cmpwi     r29, 0x20
      stbx      r3, r30, r0
      blt+      .loc_0x150
      li        r29, 0

    .loc_0x170:
      mr        r3, r31
      bl        -0x1D5F8
      addi      r0, r29, 0x45
      addi      r29, r29, 0x1
      cmpwi     r29, 0x20
      stbx      r3, r30, r0
      blt+      .loc_0x170

    .loc_0x18C:
      mr        r3, r31
      bl        -0x1D614
      stb       r3, 0x24(r30)
      mr        r4, r31
      addi      r3, r30, 0xA4
      bl        -0x20130
      mr        r3, r31
      bl        -0x1CD1C
      stfs      f1, 0xB0(r30)
      mr        r3, r31
      bl        -0x1D370
      sth       r3, 0xBC(r30)
      lis       r4, 0x7630
      addi      r0, r4, 0x2E30
      lwz       r3, 0x10(r1)
      cmplw     r3, r0
      ble-      .loc_0x250
      li        r3, 0
      addi      r0, r4, 0x2E34
      stb       r3, 0xBE(r30)
      stb       r3, 0xBF(r30)
      lwz       r3, 0x10(r1)
      cmplw     r3, r0
      bge-      .loc_0x22C
      mr        r3, r31
      bl        -0x1D3AC
      mr        r3, r31
      bl        -0x1D3B4
      li        r4, 0
      lis       r3, 0x7630
      stb       r4, 0xBE(r30)
      addi      r0, r3, 0x2E33
      stb       r4, 0xBF(r30)
      lwz       r3, 0x10(r1)
      cmplw     r3, r0
      blt-      .loc_0x250
      mr        r3, r31
      bl        -0x1D3DC
      sth       r3, 0xC0(r30)
      b         .loc_0x250

    .loc_0x22C:
      mr        r3, r31
      bl        -0x1D3EC
      lhz       r0, 0xBE(r30)
      rlwinm    r4,r3,0,16,31
      mr        r3, r31
      or        r0, r0, r4
      sth       r0, 0xBE(r30)
      bl        -0x1D404
      sth       r3, 0xC0(r30)

    .loc_0x250:
      lis       r3, 0x7630
      lwz       r4, 0x10(r1)
      addi      r0, r3, 0x2E35
      cmplw     r4, r0
      blt-      .loc_0x270
      mr        r3, r31
      bl        -0x1D0F8
      stw       r3, 0xC4(r30)

    .loc_0x270:
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x1CAC8
      stw       r3, 0xB8(r30)
      addi      r4, r2, 0x23A4
      lwz       r3, 0xB8(r30)
      bl        -0x3674EC
      cmpwi     r3, 0
      bne-      .loc_0x2A4
      li        r0, -0x1
      stw       r0, 0xB4(r30)
      b         .loc_0x2B8

    .loc_0x2A4:
      lwz       r3, -0x6C38(r13)
      lwz       r4, 0xB8(r30)
      bl        -0x283C90
      lwz       r0, 0x48(r3)
      stw       r0, 0xB4(r30)

    .loc_0x2B8:
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
 * Address:	80431BF4
 * Size:	000038
 */
void Game::MovieList::construct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0xE0
      stw       r0, 0x14(r1)
      bl        -0x40DD60
      mr.       r0, r3
      beq-      .loc_0x24
      bl        .loc_0x38
      mr        r0, r3

    .loc_0x24:
      stw       r0, -0x6468(r13)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x38:
    */
}

/*
 * --INFO--
 * Address:	80431C2C
 * Size:	0001BC
 */
void Game::MovieList::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x440(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x444(r1)
      stw       r31, 0x43C(r1)
      subi      r31, r4, 0x5C50
      stw       r30, 0x438(r1)
      mr        r30, r3
      stw       r29, 0x434(r1)
      stw       r28, 0x430(r1)
      bl        -0x208C4
      lis       r3, 0x804F
      addi      r29, r30, 0x18
      subi      r0, r3, 0x3C8C
      stw       r0, 0x0(r30)
      mr        r3, r29
      bl        -0x208DC
      lis       r4, 0x804F
      addi      r3, r29, 0x18
      subi      r0, r4, 0x3C6C
      stw       r0, 0x0(r29)
      bl        -0x1EA10
      addi      r28, r29, 0x68
      addi      r4, r31, 0x18
      mr        r3, r28
      bl        -0x15C48
      lis       r3, 0x804F
      mr        r4, r28
      subi      r0, r3, 0x3C7C
      addi      r3, r28, 0x1C
      stw       r0, 0x0(r28)
      addi      r5, r31, 0x28
      bl        -0x15D18
      mr        r4, r28
      addi      r3, r28, 0x2C
      addi      r5, r2, 0x2398
      bl        -0x15D28
      li        r9, 0
      lis       r4, 0x7630
      stb       r9, 0xBE(r29)
      li        r0, 0x2
      lfs       f0, 0x23A0(r2)
      li        r8, 0x1
      stb       r9, 0xBF(r29)
      li        r7, 0x3
      addi      r6, r29, 0x25
      li        r5, -0x1
      stb       r0, 0x24(r29)
      addi      r0, r2, 0x23A4
      addi      r3, r29, 0x18
      addi      r4, r4, 0x2E35
      stb       r9, 0x25(r29)
      stb       r9, 0x45(r29)
      stfs      f0, 0xA4(r29)
      stfs      f0, 0xA8(r29)
      stfs      f0, 0xAC(r29)
      stfs      f0, 0xB0(r29)
      stb       r9, 0xBE(r29)
      stb       r9, 0xBF(r29)
      sth       r8, 0xBC(r29)
      stb       r9, 0xBE(r29)
      stb       r9, 0xBF(r29)
      sth       r7, 0xC0(r29)
      stw       r6, 0x14(r29)
      stw       r5, 0xB4(r29)
      stw       r0, 0xB8(r29)
      bl        -0x1EA5C
      li        r11, 0
      addi      r0, r31, 0x34
      stw       r11, 0xC4(r29)
      addi      r3, r31, 0x40
      li        r4, 0
      li        r5, 0
      stw       r0, 0x14(r30)
      li        r6, 0
      li        r7, 0
      li        r8, 0x2
      stw       r11, 0x28(r30)
      li        r9, 0
      li        r10, 0
      stw       r11, 0x24(r30)
      stw       r11, 0x20(r30)
      stw       r11, 0x1C(r30)
      stw       r11, 0x8(r1)
      bl        -0x412BF4
      mr.       r29, r3
      beq-      .loc_0x198
      mr        r4, r29
      addi      r3, r1, 0x10
      li        r5, -0x1
      bl        -0x1C49C
      li        r0, 0x1
      cmpwi     r0, 0x1
      stw       r0, 0x1C(r1)
      bne-      .loc_0x184
      li        r0, 0
      stw       r0, 0x424(r1)

    .loc_0x184:
      mr        r3, r30
      addi      r4, r1, 0x10
      bl        0x178
      mr        r3, r29
      bl        -0x40DCE8

    .loc_0x198:
      lwz       r0, 0x444(r1)
      mr        r3, r30
      lwz       r31, 0x43C(r1)
      lwz       r30, 0x438(r1)
      lwz       r29, 0x434(r1)
      lwz       r28, 0x430(r1)
      mtlr      r0
      addi      r1, r1, 0x440
      blr
    */
}

/*
 * --INFO--
 * Address:	80431DE8
 * Size:	000098
 */
void Game::MovieConfig::__dt(void)
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
      beq-      .loc_0x7C
      lis       r3, 0x804F
      addic.    r0, r30, 0x68
      subi      r0, r3, 0x3C6C
      stw       r0, 0x0(r30)
      beq-      .loc_0x60
      lis       r3, 0x804F
      addic.    r0, r30, 0x68
      subi      r0, r3, 0x3C7C
      stw       r0, 0x68(r30)
      beq-      .loc_0x60
      lis       r4, 0x804B
      addi      r3, r30, 0x68
      addi      r0, r4, 0x5B10
      li        r4, 0
      stw       r0, 0x68(r30)
      bl        -0x208BC

    .loc_0x60:
      mr        r3, r30
      li        r4, 0
      bl        -0x208C8
      extsh.    r0, r31
      ble-      .loc_0x7C
      mr        r3, r30
      bl        -0x40DDAC

    .loc_0x7C:
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
 * Address:	80431E80
 * Size:	0000B0
 */
void Game::MovieList::findConfig((char*, char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r4
      mr        r29, r3
      mr        r28, r5
      mr        r3, r27
      bl        -0x367590
      cmplwi    r28, 0
      mr        r30, r3
      li        r3, 0
      beq-      .loc_0x3C
      mr        r3, r28
      bl        -0x3675A8

    .loc_0x3C:
      lwz       r29, 0x28(r29)
      mr        r31, r30
      mr        r30, r3
      b         .loc_0x90

    .loc_0x4C:
      mr        r3, r27
      mr        r5, r31
      addi      r4, r29, 0x45
      bl        -0x367858
      cmpwi     r3, 0
      bne-      .loc_0x8C
      cmplwi    r28, 0
      beq-      .loc_0x84
      lwz       r4, 0xB8(r29)
      mr        r3, r28
      mr        r5, r30
      bl        -0x367878
      cmpwi     r3, 0
      bne-      .loc_0x8C

    .loc_0x84:
      mr        r3, r29
      b         .loc_0x9C

    .loc_0x8C:
      lwz       r29, 0x4(r29)

    .loc_0x90:
      cmplwi    r29, 0
      bne+      .loc_0x4C
      li        r3, 0

    .loc_0x9C:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void Game::MovieList::getConfig((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80431F30
 * Size:	000164
 */
void Game::MovieList::read((Stream&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r28, r4
      mr        r27, r3
      mr        r3, r28
      bl        -0x1D4BC
      li        r0, 0
      mr        r31, r3
      stw       r0, 0x28(r27)
      li        r29, 0
      stw       r0, 0x24(r27)
      stw       r0, 0x20(r27)
      stw       r0, 0x1C(r27)
      b         .loc_0x148

    .loc_0x40:
      li        r3, 0xC8
      bl        -0x40E0D0
      mr.       r30, r3
      beq-      .loc_0x12C
      bl        -0x20BF0
      lis       r4, 0x804F
      addi      r3, r30, 0x18
      subi      r0, r4, 0x3C6C
      stw       r0, 0x0(r30)
      bl        -0x1ED24
      lis       r3, 0x804A
      addi      r26, r30, 0x68
      subi      r4, r3, 0x5C38
      mr        r3, r26
      bl        -0x15F60
      lis       r4, 0x804F
      lis       r3, 0x804A
      subi      r0, r4, 0x3C7C
      stw       r0, 0x0(r26)
      subi      r5, r3, 0x5C28
      mr        r4, r26
      addi      r3, r26, 0x1C
      bl        -0x16034
      mr        r4, r26
      addi      r3, r26, 0x2C
      addi      r5, r2, 0x2398
      bl        -0x16044
      li        r9, 0
      lis       r4, 0x7630
      stb       r9, 0xBE(r30)
      li        r0, 0x2
      lfs       f0, 0x23A0(r2)
      li        r8, 0x1
      stb       r9, 0xBF(r30)
      li        r7, 0x3
      addi      r6, r30, 0x25
      li        r5, -0x1
      stb       r0, 0x24(r30)
      addi      r0, r2, 0x23A4
      addi      r3, r30, 0x18
      addi      r4, r4, 0x2E35
      stb       r9, 0x25(r30)
      stb       r9, 0x45(r30)
      stfs      f0, 0xA4(r30)
      stfs      f0, 0xA8(r30)
      stfs      f0, 0xAC(r30)
      stfs      f0, 0xB0(r30)
      stb       r9, 0xBE(r30)
      stb       r9, 0xBF(r30)
      sth       r8, 0xBC(r30)
      stb       r9, 0xBE(r30)
      stb       r9, 0xBF(r30)
      sth       r7, 0xC0(r30)
      stw       r6, 0x14(r30)
      stw       r5, 0xB4(r30)
      stw       r0, 0xB8(r30)
      bl        -0x1ED78
      li        r0, 0
      stw       r0, 0xC4(r30)

    .loc_0x12C:
      mr        r3, r30
      mr        r4, r28
      bl        -0x744
      mr        r4, r30
      addi      r3, r27, 0x18
      bl        -0x20C68
      addi      r29, r29, 0x1

    .loc_0x148:
      cmpw      r29, r31
      blt+      .loc_0x40
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80432094
 * Size:	0000B4
 */
void Game::MovieList::__dt(void)
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
      beq-      .loc_0x98
      lis       r3, 0x804F
      addic.    r0, r30, 0x18
      subi      r0, r3, 0x3C8C
      stw       r0, 0x0(r30)
      beq-      .loc_0x7C
      lis       r4, 0x804F
      addic.    r3, r30, 0x80
      subi      r0, r4, 0x3C6C
      stw       r0, 0x18(r30)
      beq-      .loc_0x70
      lis       r4, 0x804F
      cmplwi    r3, 0
      subi      r0, r4, 0x3C7C
      stw       r0, 0x80(r30)
      beq-      .loc_0x70
      lis       r4, 0x804B
      addi      r0, r4, 0x5B10
      stw       r0, 0x80(r30)
      li        r4, 0
      bl        -0x20B78

    .loc_0x70:
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x20B84

    .loc_0x7C:
      mr        r3, r30
      li        r4, 0
      bl        -0x20B90
      extsh.    r0, r31
      ble-      .loc_0x98
      mr        r3, r30
      bl        -0x40E074

    .loc_0x98:
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
 * Address:	80432148
 * Size:	000028
 */
void __sinit_movieConfig_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x6470(r13)
      stfsu     f0, -0x3C98(r3)
      stfs      f0, -0x646C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
