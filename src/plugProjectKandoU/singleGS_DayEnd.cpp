

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
 * Address:	8023A250
 * Size:	0004A0
 */
void Game::SingleGame::DayEndState::init((Game::SingleGameSection*,
                                          Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      lwz       r6, -0x6C18(r13)
      mr        r29, r3
      mr        r31, r4
      mr        r30, r5
      lbz       r0, 0x3C(r6)
      rlwinm    r0,r0,0,27,25
      stb       r0, 0x3C(r6)
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x10
      stb       r0, 0x3C(r3)
      lwz       r3, -0x64AC(r13)
      bl        0x1F2610
      lwz       r3, -0x64AC(r13)
      bl        0x1F2CE0
      cmplwi    r30, 0
      bne-      .loc_0x80
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x3D8C
      li        r4, 0x43
      addi      r5, r5, 0x3DA0
      crclr     6, 0x6
      bl        -0x20FC8C

    .loc_0x80:
      lhz       r0, 0x0(r30)
      li        r4, 0x1
      lfs       f0, -0x3E28(r2)
      subi      r5, r2, 0x3E24
      sth       r0, 0x10(r29)
      li        r6, 0x3
      stfs      f0, 0x14(r29)
      lwz       r3, -0x6C18(r13)
      bl        -0x8535C
      li        r0, 0
      addi      r3, r29, 0x18
      sth       r0, 0x12(r29)
      bl        -0x49074
      lwz       r0, 0xFC(r31)
      cmplwi    r0, 0
      beq-      .loc_0xC4
      bl        0x22D128

    .loc_0xC4:
      lwz       r3, -0x6CD0(r13)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      addi      r3, r3, 0x30

    .loc_0xD4:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x548
      stw       r0, 0x24(r1)
      cmplwi    r0, 0
      stw       r4, 0x18(r1)
      stw       r0, 0x1C(r1)
      stw       r3, 0x20(r1)
      bne-      .loc_0x110
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x198

    .loc_0x110:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x17C

    .loc_0x128:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x198
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)

    .loc_0x17C:
      lwz       r12, 0x18(r1)
      addi      r3, r1, 0x18
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x128

    .loc_0x198:
      lfs       f31, -0x3E1C(r2)
      b         .loc_0x2B0

    .loc_0x1A0:
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0xC1358
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      stfs      f31, 0x244(r3)
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      bl        -0xC2C18
      lwz       r0, 0x24(r1)
      cmplwi    r0, 0
      bne-      .loc_0x220
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x2B0

    .loc_0x220:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x294

    .loc_0x240:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2B0
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)

    .loc_0x294:
      lwz       r12, 0x18(r1)
      addi      r3, r1, 0x18
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x240

    .loc_0x2B0:
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x1C(r1)
      cmplw     r4, r3
      bne+      .loc_0x1A0
      lwz       r4, 0x22C(r31)
      mr        r3, r31
      bl        -0xECD98
      addi      r3, r1, 0x8
      bl        -0xCDBC8
      addi      r3, r1, 0x8
      bl        -0xCDBB8
      b         .loc_0x334

    .loc_0x2F0:
      addi      r3, r1, 0x8
      bl        -0xCDB78
      lwz       r12, 0x0(r3)
      mr        r31, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x32C
      lwz       r0, 0xB8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x32C
      mr        r3, r31
      li        r4, 0
      bl        -0xFF488

    .loc_0x32C:
      addi      r3, r1, 0x8
      bl        -0xCDB4C

    .loc_0x334:
      addi      r3, r1, 0x8
      bl        -0xCDA94
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2F0
      lwz       r3, -0x6B00(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6AF0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6AD8(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6AE0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6D20(r13)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r31, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x408
      lwz       r3, 0x270(r31)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x2D0(r31)
      lwz       r0, 0x0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x0(r31)
      bl        0x17DA08
      mr        r3, r31
      bl        0x17DA84

    .loc_0x408:
      lwz       r3, -0x6D20(r13)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r31, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x47C
      lwz       r3, 0x270(r31)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x2D0(r31)
      lwz       r0, 0x0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x0(r31)
      bl        0x17D994
      mr        r3, r31
      bl        0x17DA10

    .loc_0x47C:
      psq_l     f31,0x48(r1),0,0
      lwz       r0, 0x54(r1)
      lfd       f31, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8023A6F0
 * Size:	00040C
 */
void Game::SingleGame::DayEndState::exec((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xC0(r1)
      mflr      r0
      stw       r0, 0xC4(r1)
      stmw      r26, 0xA8(r1)
      mr        r29, r3
      lis       r3, 0x8048
      mr        r30, r4
      addi      r31, r3, 0x3D70
      lhz       r0, 0x12(r29)
      cmpwi     r0, 0x1
      beq-      .loc_0x344
      bge-      .loc_0x3E8
      cmpwi     r0, 0
      bge-      .loc_0x3C
      b         .loc_0x3E8

    .loc_0x3C:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x14(r29)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x3E28(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x14(r29)
      lfs       f1, 0x14(r29)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x3E8
      addi      r3, r29, 0x18
      bl        -0x494CC
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x8C
      lwz       r3, -0x6D0C(r13)
      addi      r4, r29, 0x18
      bl        -0xDA82C

    .loc_0x8C:
      lhz       r0, 0x10(r29)
      cmpwi     r0, 0x1
      beq-      .loc_0x244
      bge-      .loc_0xA8
      cmpwi     r0, 0
      bge-      .loc_0xB4
      b         .loc_0x3E8

    .loc_0xA8:
      cmpwi     r0, 0x3
      bge-      .loc_0x3E8
      b         .loc_0x2C4

    .loc_0xB4:
      lwz       r4, 0x22C(r30)
      addi      r3, r31, 0x3C
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lwz       r4, 0x14(r4)
      li        r28, 0
      lfs       f0, -0x3E28(r2)
      li        r26, 0
      stw       r3, 0x70(r1)
      lwz       r3, -0x6B70(r13)
      stw       r4, 0x74(r1)
      stw       r5, 0x7C(r1)
      stfs      f0, 0x88(r1)
      stfs      f0, 0x8C(r1)
      stfs      f0, 0x90(r1)
      stfs      f0, 0x94(r1)
      stw       r0, 0x98(r1)
      stw       r0, 0x80(r1)
      stw       r0, 0x78(r1)
      stw       r0, 0x9C(r1)
      stw       r0, 0x84(r1)
      stw       r0, 0xA0(r1)
      lwz       r3, 0xB4(r3)
      addi      r27, r3, 0xC
      b         .loc_0x130

    .loc_0x118:
      mr        r3, r27
      mr        r4, r26
      bl        -0x55410
      lbz       r0, 0x0(r3)
      addi      r26, r26, 0x1
      add       r28, r28, r0

    .loc_0x130:
      lhz       r0, 0x0(r27)
      cmpw      r26, r0
      blt+      .loc_0x118
      lwz       r3, -0x6B70(r13)
      li        r27, 0
      lwz       r3, 0xB4(r3)
      addi      r26, r3, 0x4
      b         .loc_0x168

    .loc_0x150:
      mr        r3, r26
      mr        r4, r27
      bl        -0x55448
      lbz       r0, 0x0(r3)
      addi      r27, r27, 0x1
      add       r28, r28, r0

    .loc_0x168:
      lhz       r0, 0x0(r26)
      cmpw      r27, r0
      blt+      .loc_0x150
      cmpwi     r28, 0
      bne-      .loc_0x18C
      lis       r3, 0xC001
      addi      r0, r3, 0x1004
      stw       r0, 0x9C(r1)
      b         .loc_0x1B0

    .loc_0x18C:
      cmpwi     r28, 0xE
      bgt-      .loc_0x1A4
      lis       r3, 0xC001
      addi      r0, r3, 0x1002
      stw       r0, 0x9C(r1)
      b         .loc_0x1B0

    .loc_0x1A4:
      lis       r3, 0xC001
      addi      r0, r3, 0x1003
      stw       r0, 0x9C(r1)

    .loc_0x1B0:
      lwz       r3, -0x6D20(r13)
      li        r4, 0
      bl        -0xDF5DC
      cmplwi    r3, 0
      bne-      .loc_0x1D8
      addi      r3, r31, 0x1C
      addi      r5, r31, 0x48
      li        r4, 0xDE
      crclr     6, 0x6
      bl        -0x210284

    .loc_0x1D8:
      lwz       r3, -0x6D20(r13)
      bl        -0xDFCAC
      cmplwi    r3, 0
      li        r4, 0
      beq-      .loc_0x20C
      lhz       r4, 0x2DC(r3)
      cmpwi     r4, 0x1
      bne-      .loc_0x20C
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x20C
      addi      r4, r4, 0x1

    .loc_0x20C:
      stw       r4, 0x78(r1)
      addi      r4, r1, 0x70
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0xCC(r30)
      stw       r0, 0x80(r1)
      bl        0x1F20C0
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x3C
      li        r4, 0x1
      li        r6, 0x3
      bl        -0x85990
      li        r0, 0x1
      sth       r0, 0x12(r29)
      b         .loc_0x3E8

    .loc_0x244:
      lwz       r4, 0x22C(r30)
      addi      r3, r31, 0x5C
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x3C
      lfs       f0, -0x3E28(r2)
      stw       r3, 0x3C(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x40(r1)
      stw       r5, 0x48(r1)
      stfs      f0, 0x54(r1)
      stfs      f0, 0x58(r1)
      stfs      f0, 0x5C(r1)
      stfs      f0, 0x60(r1)
      stw       r0, 0x64(r1)
      stw       r0, 0x4C(r1)
      stw       r0, 0x44(r1)
      stw       r0, 0x68(r1)
      stw       r0, 0x50(r1)
      stw       r0, 0x6C(r1)
      lwz       r0, 0xCC(r30)
      stw       r0, 0x4C(r1)
      bl        0x1F2040
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x74
      li        r4, 0
      li        r6, 0x3
      bl        -0x85A10
      li        r0, 0x1
      sth       r0, 0x12(r29)
      b         .loc_0x3E8

    .loc_0x2C4:
      lwz       r4, 0x22C(r30)
      addi      r3, r31, 0x80
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x8
      lfs       f0, -0x3E28(r2)
      stw       r3, 0x8(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0xC(r1)
      stw       r5, 0x14(r1)
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
      lwz       r0, 0xCC(r30)
      stw       r0, 0x18(r1)
      bl        0x1F1FC0
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x98
      li        r4, 0
      li        r6, 0x3
      bl        -0x85A90
      li        r0, 0x1
      sth       r0, 0x12(r29)
      b         .loc_0x3E8

    .loc_0x344:
      lwz       r3, -0x64AC(r13)
      cmplwi    r3, 0
      beq-      .loc_0x3E8
      lwz       r0, 0x1F0(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x3E8
      lwz       r3, -0x6D0C(r13)
      li        r4, 0
      bl        -0xDADA0
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0xA4
      li        r4, 0x1
      li        r6, 0x3
      bl        -0x85AD4
      mr        r3, r30
      bl        -0xED384
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      bl        -0x1139A0
      lwz       r3, -0x6C18(r13)
      lwz       r4, -0x6E20(r13)
      bl        -0x84AD4
      lwz       r4, -0x6CF8(r13)
      cmplwi    r4, 0
      beq-      .loc_0x3AC
      lwz       r4, 0x0(r4)

    .loc_0x3AC:
      lwz       r3, -0x6C18(r13)
      bl        -0x84AEC
      lwz       r7, -0x6C18(r13)
      mr        r3, r29
      mr        r4, r30
      li        r5, 0x7
      lbz       r0, 0x3C(r7)
      li        r6, 0
      ori       r0, r0, 0x4
      stb       r0, 0x3C(r7)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3F8

    .loc_0x3E8:
      mr        r3, r30
      bl        -0xEF260
      mr        r3, r30
      bl        -0xE55F8

    .loc_0x3F8:
      lmw       r26, 0xA8(r1)
      lwz       r0, 0xC4(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	8023AAFC
 * Size:	0005B8
 */
void Game::SingleGame::DayEndState::onMovieStart((Game::SingleGameSection*,
                                                  Game::MovieConfig*,
                                                  unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x210(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x214(r1)
      stmw      r25, 0x1F4(r1)
      mr        r25, r5
      addi      r31, r4, 0x3D70
      lwz       r3, -0x6560(r13)
      bl        0x1C2D30
      lwz       r3, -0x6560(r13)
      bl        0x1C2DE0
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      bl        -0x113A14
      mr        r3, r25
      addi      r4, r31, 0x3C
      bl        0x1F6D90
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x580
      lwz       r3, -0x6560(r13)
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x1
      beq-      .loc_0x84
      addi      r3, r31, 0x1C
      addi      r5, r31, 0x30
      li        r4, 0x14F
      crclr     6, 0x6
      bl        -0x21053C

    .loc_0x84:
      lfs       f2, -0x3E18(r2)
      lfs       f1, -0x3E28(r2)
      lfs       f0, -0x3E14(r2)
      stfs      f2, 0x48(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f1, 0x4C(r1)
      stfs      f0, 0x50(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x5A4
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r4, r1, 0x48
      addi      r5, r1, 0x10
      bl        -0x14FFF8
      li        r29, 0
      lfs       f2, 0x10(r1)
      lfs       f1, 0x14(r1)
      lis       r3, 0x804B
      lfs       f0, 0x18(r1)
      subi      r0, r3, 0x4364
      lwz       r3, -0x6D0C(r13)
      cmplwi    r29, 0
      stfs      f2, 0x48(r1)
      li        r30, 0
      stfs      f1, 0x4C(r1)
      stfs      f0, 0x50(r1)
      stw       r0, 0x38(r1)
      stw       r29, 0x44(r1)
      stw       r29, 0x3C(r1)
      stw       r3, 0x40(r1)
      bne-      .loc_0x134
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2BC

    .loc_0x134:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x1A0

    .loc_0x14C:
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
      bne-      .loc_0x2BC
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x1A0:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x14C
      b         .loc_0x2BC

    .loc_0x1C0:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r27, r3
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x200
      addi      r3, r1, 0x54
      addi      r30, r30, 0x1
      stwx      r27, r3, r29
      addi      r29, r29, 0x4

    .loc_0x200:
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x22C
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2BC

    .loc_0x22C:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x2A0

    .loc_0x24C:
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
      bne-      .loc_0x2BC
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x2A0:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x24C

    .loc_0x2BC:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x1C0
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r26, r1, 0x54
      li        r25, 0
      subi      r29, r4, 0x5D30
      addi      r27, r3, 0x1160
      li        r28, 0x1
      b         .loc_0x31C

    .loc_0x2FC:
      stw       r29, 0x8(r1)
      addi      r4, r1, 0x8
      lwz       r3, 0x0(r26)
      stw       r28, 0xC(r1)
      stw       r27, 0x8(r1)
      bl        -0xFFD1C
      addi      r26, r26, 0x4
      addi      r25, r25, 0x1

    .loc_0x31C:
      cmpw      r25, r30
      blt+      .loc_0x2FC
      lwz       r3, -0x6D0C(r13)
      addi      r4, r1, 0x48
      lfs       f1, -0x3E10(r2)
      li        r5, 0
      bl        -0xDB4C8
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0x34(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0x28(r1)
      stw       r0, 0x2C(r1)
      stw       r3, 0x30(r1)
      bne-      .loc_0x378
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C(r1)
      b         .loc_0x400

    .loc_0x378:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C(r1)
      b         .loc_0x3E4

    .loc_0x390:
      lwz       r3, 0x30(r1)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x400
      lwz       r3, 0x30(r1)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C(r1)

    .loc_0x3E4:
      lwz       r12, 0x28(r1)
      addi      r3, r1, 0x28
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x390

    .loc_0x400:
      lis       r5, 0x804B
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r28, r5, 0x530
      addi      r30, r4, 0x524
      addi      r29, r3, 0xD44
      b         .loc_0x55C

    .loc_0x41C:
      lwz       r3, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r26, r3
      lwz       r3, -0x6D20(r13)
      li        r4, 0
      bl        -0xDFC6C
      mr.       r27, r3
      bne-      .loc_0x45C
      addi      r3, r31, 0x1C
      addi      r5, r31, 0xB4
      li        r4, 0x178
      crclr     6, 0x6
      bl        -0x210914

    .loc_0x45C:
      stw       r28, 0x1C(r1)
      li        r3, 0
      li        r0, 0x1
      addi      r5, r1, 0x1C
      stw       r30, 0x1C(r1)
      li        r4, 0
      stw       r27, 0x20(r1)
      stw       r29, 0x1C(r1)
      stb       r3, 0x24(r1)
      stb       r3, 0x25(r1)
      stw       r27, 0x2C4(r26)
      stb       r0, 0x24(r1)
      lwz       r3, 0x294(r26)
      bl        -0xA3FF8
      mr        r3, r26
      li        r4, 0
      bl        -0xFF548
      lwz       r0, 0x34(r1)
      cmplwi    r0, 0
      bne-      .loc_0x4CC
      lwz       r3, 0x30(r1)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C(r1)
      b         .loc_0x55C

    .loc_0x4CC:
      lwz       r3, 0x30(r1)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C(r1)
      b         .loc_0x540

    .loc_0x4EC:
      lwz       r3, 0x30(r1)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x55C
      lwz       r3, 0x30(r1)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C(r1)

    .loc_0x540:
      lwz       r12, 0x28(r1)
      addi      r3, r1, 0x28
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x4EC

    .loc_0x55C:
      lwz       r3, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x2C(r1)
      cmplw     r4, r3
      bne+      .loc_0x41C
      b         .loc_0x5A4

    .loc_0x580:
      mr        r3, r25
      addi      r4, r31, 0xC4
      bl        0x1F6848
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x5A4
      lwz       r3, -0x6D38(r13)
      bl        -0xE2D9C
      lwz       r3, -0x6E20(r13)
      bl        -0x12D2C8

    .loc_0x5A4:
      lmw       r25, 0x1F4(r1)
      lwz       r0, 0x214(r1)
      mtlr      r0
      addi      r1, r1, 0x210
      blr
    */
}

/*
 * --INFO--
 * Address:	8023B0B4
 * Size:	0000F4
 */
void Game::SingleGame::DayEndState::onMovieDone((Game::SingleGameSection*,
                                                 Game::MovieConfig*,
                                                 unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lis       r3, 0x8048
      stw       r0, 0x54(r1)
      addi      r0, r3, 0x3DAC
      stw       r31, 0x4C(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x48(r1)
      mr        r30, r4
      mr        r4, r0
      bl        0x1F67EC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x44
      lwz       r3, -0x6D0C(r13)
      li        r4, 0
      bl        -0xDB440

    .loc_0x44:
      lis       r4, 0x8048
      mr        r3, r31
      addi      r4, r4, 0x3E34
      bl        0x1F67C8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x78
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,27,25
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6D0C(r13)
      bl        -0xDABCC
      b         .loc_0xDC

    .loc_0x78:
      lwz       r4, 0x22C(r30)
      lis       r3, 0x8048
      lwz       r5, 0xC8(r30)
      addi      r3, r3, 0x3E34
      lwz       r6, 0x14(r4)
      li        r0, 0
      lfs       f0, -0x3E28(r2)
      addi      r4, r1, 0x8
      stw       r3, 0x8(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0xC(r1)
      stw       r5, 0x14(r1)
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
      lwz       r0, 0xCC(r30)
      stw       r0, 0x18(r1)
      bl        0x1F1844

    .loc_0xDC:
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
 * Address:	8023B1A8
 * Size:	0002C0
 */
void Game::SingleGame::DayEndState::onMovieCommand((Game::SingleGameSection*,
                                                    int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      cmpwi     r5, 0x1
      stw       r0, 0x84(r1)
      stmw      r27, 0x6C(r1)
      mr        r27, r3
      beq-      .loc_0x20
      b         .loc_0x2AC

    .loc_0x20:
      lfs       f0, -0x3E28(r2)
      lwz       r3, -0x6CF8(r13)
      stfs      f0, 0x3C(r1)
      stfs      f0, 0x40(r1)
      stfs      f0, 0x44(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xA0
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r4, r1, 0x3C
      addi      r5, r1, 0x8
      bl        -0x150638
      lfs       f2, 0x8(r1)
      addi      r4, r1, 0x3C
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x3C(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f1, 0x40(r1)
      stfs      f0, 0x44(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x40(r1)

    .loc_0xA0:
      lfs       f3, 0x3C(r1)
      addi      r4, r1, 0x2C
      lfs       f2, 0x40(r1)
      lfs       f1, 0x44(r1)
      lfs       f0, -0x3E0C(r2)
      stfs      f3, 0x2C(r1)
      lwz       r3, -0x6E20(r13)
      stfs      f2, 0x30(r1)
      stfs      f1, 0x34(r1)
      stfs      f0, 0x38(r1)
      bl        -0x12CDB4
      li        r31, 0

    .loc_0xD0:
      li        r30, 0

    .loc_0xD4:
      li        r29, 0
      b         .loc_0x278

    .loc_0xDC:
      lwz       r3, -0x6D0C(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      mr.       r28, r3
      beq-      .loc_0x274
      lis       r5, 0x804B
      lis       r4, 0x804B
      subi      r0, r5, 0x5D0C
      li        r5, 0x1F
      stw       r0, 0x20(r1)
      addi      r6, r4, 0x10F4
      li        r0, 0
      addi      r4, r1, 0x20
      stw       r6, 0x20(r1)
      stw       r5, 0x24(r1)
      stw       r0, 0x28(r1)
      bl        -0x100304
      bl        -0x171D30
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x4C(r1)
      lfd       f3, -0x3DF0(r2)
      stw       r0, 0x48(r1)
      lfs       f2, -0x3E08(r2)
      lfd       f0, 0x48(r1)
      lfs       f1, -0x3E04(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3E28(r2)
      fdivs     f2, f3, f2
      fmuls     f4, f1, f2
      fmr       f1, f4
      fcmpo     cr0, f4, f0
      bge-      .loc_0x16C
      fneg      f1, f4

    .loc_0x16C:
      lfs       f2, -0x3DFC(r2)
      lis       r3, 0x8050
      lfs       f0, -0x3E28(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      lfs       f3, -0x3E00(r2)
      fcmpo     cr0, f4, f0
      fctiwz    f0, f1
      stfd      f0, 0x50(r1)
      lwz       r0, 0x54(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f5, f3, f0
      bge-      .loc_0x1CC
      lfs       f0, -0x3DF8(r2)
      fmuls     f0, f4, f0
      fctiwz    f0, f0
      stfd      f0, 0x58(r1)
      lwz       r0, 0x5C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x1E4

    .loc_0x1CC:
      fmuls     f0, f4, f2
      fctiwz    f0, f0
      stfd      f0, 0x60(r1)
      lwz       r0, 0x64(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x1E4:
      fmuls     f4, f3, f0
      lfs       f3, -0x3E28(r2)
      lfs       f2, 0x44(r1)
      lfs       f1, 0x40(r1)
      lfs       f0, 0x3C(r1)
      fadds     f2, f5, f2
      lwz       r3, -0x6CF8(r13)
      fadds     f1, f3, f1
      stfs      f3, 0x18(r1)
      fadds     f0, f4, f0
      cmplwi    r3, 0
      stfs      f4, 0x14(r1)
      stfs      f5, 0x1C(r1)
      stfs      f0, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f2, 0x1C(r1)
      beq-      .loc_0x240
      lwz       r12, 0x4(r3)
      addi      r4, r1, 0x14
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x18(r1)

    .loc_0x240:
      mr        r3, r28
      addi      r4, r1, 0x14
      li        r5, 0
      bl        -0x10024C
      mr        r3, r28
      mr        r4, r31
      bl        -0xF0E40
      mr        r3, r28
      mr        r4, r30
      bl        -0xF0C9C
      mr        r3, r28
      li        r4, 0
      bl        -0xFF9C8

    .loc_0x274:
      addi      r29, r29, 0x1

    .loc_0x278:
      mr        r4, r31
      mr        r5, r30
      addi      r3, r27, 0x18
      bl        -0x4A010
      lwz       r0, 0x0(r3)
      cmpw      r29, r0
      blt+      .loc_0xDC
      addi      r30, r30, 0x1
      cmpwi     r30, 0x2
      ble+      .loc_0xD4
      addi      r31, r31, 0x1
      cmpwi     r31, 0x4
      ble+      .loc_0xD0

    .loc_0x2AC:
      lmw       r27, 0x6C(r1)
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	8023B468
 * Size:	000028
 */
void Game::SingleGame::DayEndState::draw((Game::SingleGameSection*, Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      mr        r4, r5
      stw       r0, 0x14(r1)
      bl        -0xEF854
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8023B490
 * Size:	00007C
 */
void Game::SingleGame::DayEndState::cleanup((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, -0x6B70(r13)
      bl        -0x51624
      li        r3, -0x1
      bl        -0x6A648
      lis       r3, 0x8051
      lwzu      r12, 0x25EC(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x8051
      lwzu      r12, 0x260C(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x8048
      lwz       r3, -0x6C18(r13)
      addi      r5, r4, 0x3E48
      li        r6, 0x3
      li        r4, 0
      bl        -0x86554
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,28,26
      stb       r0, 0x3C(r3)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8023B50C
 * Size:	000028
 */
void __sinit_singleGS_DayEnd_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x69C0(r13)
      stfsu     f0, 0x1630(r3)
      stfs      f0, -0x69BC(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
