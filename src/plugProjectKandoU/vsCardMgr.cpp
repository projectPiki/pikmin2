

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
 * Size:	000040
 */
void Game::VsGame::CardSelector::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Game::VsGame::CardSelector::getTotalWeight(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void Game::VsGame::CardSelector::selectCard(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023550C
 * Size:	000148
 */
void Game::VsGame::CardMgr::__ct((Game::VsGameSection*, Game::VsGame::TekiMgr*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x8023
      li        r7, 0x2
      stw       r0, 0x24(r1)
      addi      r0, r6, 0x5654
      li        r6, 0x70
      stw       r31, 0x1C(r1)
      mr        r31, r5
      li        r5, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      mr        r4, r0
      stw       r29, 0x14(r1)
      mr        r29, r3
      addi      r3, r29, 0x18
      bl        -0x173D10
      stw       r30, 0x10C(r29)
      li        r4, 0
      li        r0, 0x1
      lfs       f0, -0x3F70(r2)
      stw       r31, 0x110(r29)
      mr        r3, r29
      stw       r4, 0x0(r29)
      stw       r4, 0x4(r29)
      stw       r4, 0x74(r29)
      stw       r0, 0xE4(r29)
      stw       r29, 0x78(r29)
      stw       r29, 0xE8(r29)
      stfs      f0, 0x104(r29)
      bl        0x23E4
      li        r0, 0xFF
      li        r3, 0x58
      stb       r0, 0xC(r1)
      stb       r0, 0xD(r1)
      stb       r0, 0xE(r1)
      stb       r0, 0xF(r1)
      bl        -0x2116FC
      mr.       r0, r3
      beq-      .loc_0xC0
      lwz       r0, 0xC(r1)
      addi      r7, r1, 0x8
      subi      r4, r2, 0x3F6C
      li        r5, 0x1
      stw       r0, 0x8(r1)
      li        r6, 0x2
      bl        0x1F5EA8
      mr        r0, r3

    .loc_0xC0:
      stw       r0, 0x108(r29)
      li        r0, 0xFF
      lfs       f2, -0x3F88(r2)
      mr        r3, r29
      lwz       r4, 0x108(r29)
      lfs       f1, -0x3F64(r2)
      stfs      f2, 0x28(r4)
      lfs       f0, -0x3F60(r2)
      stfs      f2, 0x2C(r4)
      lfs       f3, -0x3F5C(r2)
      stfs      f1, 0x30(r4)
      lfs       f2, -0x3F58(r2)
      lwz       r4, 0x108(r29)
      lfs       f1, -0x3F70(r2)
      stfs      f0, 0x1C(r4)
      lfs       f0, -0x3F54(r2)
      stfs      f3, 0x20(r4)
      stfs      f2, 0x24(r4)
      lwz       r4, 0x108(r29)
      stfs      f1, 0x44(r4)
      lwz       r4, 0x108(r29)
      stb       r0, 0x34(r4)
      stb       r0, 0x35(r4)
      stb       r0, 0x36(r4)
      stb       r0, 0x37(r4)
      lwz       r4, 0x108(r29)
      stfs      f0, 0x40(r4)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80235654
 * Size:	000058
 */
void Game::VsGame::CardMgr::SlotMachine::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x60(r3)
      bl        0x1358
      li        r0, 0
      lis       r3, 0x1
      stw       r0, 0x1C(r31)
      subi      r0, r3, 0x1
      lfs       f0, -0x3F88(r2)
      mr        r3, r31
      stw       r0, 0x64(r31)
      stfs      f0, 0x68(r31)
      stfs      f0, 0x6C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void Game::VsGame::CardMgr::clear(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802356AC
 * Size:	0002B8
 */
void Game::VsGame::CardMgr::loadResource(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8048
      li        r5, 0
      stw       r0, 0x34(r1)
      li        r6, 0x1
      stmw      r24, 0x10(r1)
      addi      r31, r4, 0x3AD0
      mr        r29, r3
      li        r4, 0x1
      addi      r3, r31, 0x160
      bl        -0x21A5A8
      mr.       r30, r3
      bne-      .loc_0x4C
      addi      r3, r31, 0x17C
      addi      r5, r31, 0x18C
      li        r4, 0x102
      crclr     6, 0x6
      bl        -0x20B0B4

    .loc_0x4C:
      li        r0, 0xC
      stw       r0, 0x0(r29)
      lwz       r0, 0x0(r29)
      rlwinm    r3,r0,2,0,29
      bl        -0x21175C
      lis       r4, 0x804C
      stw       r3, 0x4(r29)
      addi      r27, r4, 0x147C
      li        r25, 0
      li        r26, 0
      b         .loc_0xF8

    .loc_0x78:
      mr        r3, r30
      lwz       r4, 0x0(r27)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr.       r24, r3
      beq-      .loc_0xD4
      li        r3, 0x40
      bl        -0x2118A4
      mr.       r28, r3
      beq-      .loc_0xC8
      li        r0, 0
      mr        r4, r24
      stw       r0, 0x28(r28)
      li        r5, 0
      bl        -0x2026E0
      lbz       r0, 0x3B(r28)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r28)

    .loc_0xC8:
      lwz       r3, 0x4(r29)
      stwx      r28, r3, r26
      b         .loc_0xEC

    .loc_0xD4:
      lwz       r6, 0x0(r27)
      addi      r3, r31, 0x17C
      addi      r5, r31, 0x1A8
      li        r4, 0x10D
      crclr     6, 0x6
      bl        -0x20B154

    .loc_0xEC:
      addi      r27, r27, 0x4
      addi      r26, r26, 0x4
      addi      r25, r25, 0x1

    .loc_0xF8:
      lwz       r0, 0x0(r29)
      cmpw      r25, r0
      blt+      .loc_0x78
      mr        r3, r30
      addi      r4, r31, 0x1B8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr.       r24, r3
      bne-      .loc_0x138
      addi      r3, r31, 0x17C
      addi      r5, r31, 0x1B8
      li        r4, 0x112
      crclr     6, 0x6
      bl        -0x20B1A0

    .loc_0x138:
      li        r3, 0x40
      bl        -0x211944
      mr.       r28, r3
      beq-      .loc_0x168
      li        r0, 0
      mr        r4, r24
      stw       r0, 0x28(r28)
      li        r5, 0
      bl        -0x202780
      lbz       r0, 0x3B(r28)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r28)

    .loc_0x168:
      stw       r28, 0x8(r29)
      mr        r3, r30
      addi      r4, r31, 0x1C4
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr.       r24, r3
      bne-      .loc_0x1A0
      addi      r3, r31, 0x17C
      addi      r5, r31, 0x1C4
      li        r4, 0x117
      crclr     6, 0x6
      bl        -0x20B208

    .loc_0x1A0:
      li        r3, 0x40
      bl        -0x2119AC
      mr.       r28, r3
      beq-      .loc_0x1D0
      li        r0, 0
      mr        r4, r24
      stw       r0, 0x28(r28)
      li        r5, 0
      bl        -0x2027E8
      lbz       r0, 0x3B(r28)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r28)

    .loc_0x1D0:
      stw       r28, 0xC(r29)
      mr        r3, r30
      addi      r4, r31, 0x1D0
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr.       r24, r3
      bne-      .loc_0x208
      addi      r3, r31, 0x17C
      addi      r5, r31, 0x1D0
      li        r4, 0x11C
      crclr     6, 0x6
      bl        -0x20B270

    .loc_0x208:
      li        r3, 0x40
      bl        -0x211A14
      mr.       r28, r3
      beq-      .loc_0x238
      li        r0, 0
      mr        r4, r24
      stw       r0, 0x28(r28)
      li        r5, 0
      bl        -0x202850
      lbz       r0, 0x3B(r28)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r28)

    .loc_0x238:
      stw       r28, 0x10(r29)
      mr        r3, r30
      subi      r4, r2, 0x3F50
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr.       r24, r3
      bne-      .loc_0x270
      addi      r3, r31, 0x17C
      li        r4, 0x121
      subi      r5, r2, 0x3F50
      crclr     6, 0x6
      bl        -0x20B2D8

    .loc_0x270:
      li        r3, 0x40
      bl        -0x211A7C
      mr.       r30, r3
      beq-      .loc_0x2A0
      li        r0, 0
      mr        r4, r24
      stw       r0, 0x28(r30)
      li        r5, 0
      bl        -0x2028B8
      lbz       r0, 0x3B(r30)
      rlwinm    r0,r0,0,30,30
      stb       r0, 0x3B(r30)

    .loc_0x2A0:
      stw       r30, 0x14(r29)
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80235964
 * Size:	000048
 */
void Game::VsGame::CardMgr::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6C18(r13)
      bl        -0x809B4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x34
      addi      r3, r31, 0x18
      bl        0x16D4
      addi      r3, r31, 0x88
      bl        0x16CC

    .loc_0x34:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Game::VsGame::CardMgr::getSlotOrigin((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Game::VsGame::CardMgr::getLampPos((int, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802359AC
 * Size:	0000A4
 */
void Game::VsGame::CardMgr::draw((Graphics&))
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
      lwz       r5, -0x64AC(r13)
      lwz       r0, 0x1F0(r5)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x8C
      lfs       f3, -0x3F48(r2)
      lfs       f1, -0x3F88(r2)
      lfs       f2, -0x3F44(r2)
      lfs       f0, -0x3F40(r2)
      stfs      f3, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f3, 0x8(r1)
      stfs      f0, 0xC(r1)
      stfs      f1, 0x10(r1)
      lwz       r0, 0x38(r30)
      cmpwi     r0, 0
      beq-      .loc_0x6C
      addi      r5, r1, 0x14
      addi      r6, r30, 0x18
      bl        0x22A8

    .loc_0x6C:
      lwz       r0, 0xA8(r30)
      cmpwi     r0, 0
      beq-      .loc_0x8C
      mr        r3, r30
      mr        r4, r31
      addi      r5, r1, 0x8
      addi      r6, r30, 0x88
      bl        0x2288

    .loc_0x8C:
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
 * Address:	........
 * Size:	000078
 */
void Game::VsGame::CardMgr::getPlayerCard((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80235A50
 * Size:	000030
 */
void Game::VsGame::CardMgr::stopSlot((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mulli     r4, r4, 0x70
      stw       r0, 0x14(r1)
      mr        r0, r3
      addi      r3, r4, 0x18
      add       r3, r0, r3
      bl        0x15A4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80235A80
 * Size:	000D8C
 */
void Game::VsGame::CardMgr::usePlayerCard((int, Game::VsGame::TekiMgr*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x160(r1)
      mflr      r0
      stw       r0, 0x164(r1)
      stfd      f31, 0x150(r1)
      psq_st    f31,0x158(r1),0,0
      stfd      f30, 0x140(r1)
      psq_st    f30,0x148(r1),0,0
      stfd      f29, 0x130(r1)
      psq_st    f29,0x138(r1),0,0
      stmw      r23, 0x10C(r1)
      mr        r24, r4
      mr        r30, r3
      mulli     r29, r24, 0x70
      lwz       r23, 0x110(r3)
      li        r28, 0x1
      add       r31, r30, r29
      lbz       r0, 0x30(r31)
      lwz       r5, 0x70(r31)
      cmplwi    r0, 0
      beq-      .loc_0x58
      li        r3, 0
      b         .loc_0xD60

    .loc_0x58:
      cmpwi     r5, 0x6
      beq-      .loc_0x4FC
      bge-      .loc_0x90
      cmpwi     r5, 0x2
      beq-      .loc_0x278
      bge-      .loc_0x80
      cmpwi     r5, 0
      beq-      .loc_0xD4
      bge-      .loc_0x104
      b         .loc_0xCE0

    .loc_0x80:
      cmpwi     r5, 0x4
      beq-      .loc_0x134
      bge-      .loc_0x15C
      b         .loc_0x184

    .loc_0x90:
      cmpwi     r5, 0xB
      beq-      .loc_0xB74
      bge-      .loc_0xA8
      cmpwi     r5, 0x9
      bge-      .loc_0x9A8
      b         .loc_0x820

    .loc_0xA8:
      lis       r3, 0x1
      subi      r0, r3, 0x1
      cmpw      r5, r0
      beq-      .loc_0xBC
      b         .loc_0xCE0

    .loc_0xBC:
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1807
      li        r5, 0
      bl        0x102AE8
      li        r28, 0
      b         .loc_0xCE0

    .loc_0xD4:
      lwz       r3, -0x6CD0(r13)
      subfic    r4, r24, 0x1
      bl        -0xBA0C0
      mr.       r23, r3
      beq-      .loc_0xCE0
      li        r24, 0

    .loc_0xEC:
      mr        r3, r23
      bl        -0xBD9E4
      addi      r24, r24, 0x1
      cmpwi     r24, 0x5
      blt+      .loc_0xEC
      b         .loc_0xCE0

    .loc_0x104:
      lwz       r3, -0x6CD0(r13)
      subfic    r4, r24, 0x1
      bl        -0xBA0F0
      mr.       r23, r3
      beq-      .loc_0xCE0
      li        r24, 0

    .loc_0x11C:
      mr        r3, r23
      bl        -0xBDA14
      addi      r24, r24, 0x1
      cmpwi     r24, 0xA
      blt+      .loc_0x11C
      b         .loc_0xCE0

    .loc_0x134:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xCE0
      li        r4, 0x1
      bl        -0xF4CC8
      b         .loc_0xCE0

    .loc_0x15C:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xCE0
      li        r4, 0
      bl        -0xF4CF0
      b         .loc_0xCE0

    .loc_0x184:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x260
      lwz       r4, 0x10C(r30)
      rlwinm    r0,r24,2,0,29
      lfs       f0, -0x3F88(r2)
      add       r4, r4, r0
      lfs       f1, 0x1F0(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x260
      lwz       r23, 0x2D0(r3)
      lwz       r3, 0x0(r23)
      rlwinm.   r0,r3,0,0,0
      bne-      .loc_0x1F4
      stw       r3, 0x4(r23)
      li        r0, 0
      stb       r0, 0x0(r23)
      stb       r0, 0x1(r23)
      stb       r0, 0x2(r23)
      stb       r0, 0x3(r23)
      lwz       r0, 0x0(r23)
      oris      r0, r0, 0x8000
      stw       r0, 0x0(r23)

    .loc_0x1F4:
      addi      r3, r23, 0x33C
      lwz       r12, 0x33C(r23)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r23, 0x36C
      lwz       r12, 0x36C(r23)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r23, 0x39C
      lwz       r12, 0x39C(r23)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      bl        0x1823A0
      mr        r3, r23
      bl        0x18241C
      mr        r3, r23
      bl        0x1824B0
      mr        r3, r23
      bl        0x18254C
      mr        r3, r23
      bl        0x1825D4
      mr        r3, r23
      bl        0x182930

    .loc_0x260:
      lwz       r3, 0x10C(r30)
      rlwinm    r0,r24,2,0,29
      lfs       f0, -0x3F2C(r2)
      add       r3, r3, r0
      stfs      f0, 0x1F0(r3)
      b         .loc_0xCE0

    .loc_0x278:
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0xC0(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0xB4(r1)
      stw       r0, 0xB8(r1)
      stw       r3, 0xBC(r1)
      bne-      .loc_0x2B8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB8(r1)
      b         .loc_0x340

    .loc_0x2B8:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB8(r1)
      b         .loc_0x324

    .loc_0x2D0:
      lwz       r3, 0xBC(r1)
      lwz       r4, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC0(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x340
      lwz       r3, 0xBC(r1)
      lwz       r4, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB8(r1)

    .loc_0x324:
      lwz       r12, 0xB4(r1)
      addi      r3, r1, 0xB4
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2D0

    .loc_0x340:
      subfic    r26, r24, 0x1
      b         .loc_0x4D8

    .loc_0x348:
      lwz       r3, 0xBC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x2B8(r3)
      mr        r27, r3
      cmpw      r26, r0
      bne-      .loc_0x41C
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x41C
      lbz       r0, 0x2B9(r27)
      cmpwi     r0, 0x2
      beq-      .loc_0x41C
      mr        r3, r27
      li        r4, 0x2
      bl        -0xEB6A8
      lis       r3, 0x804B
      lfs       f0, 0x25C(r27)
      lfs       f1, 0x260(r27)
      subi      r0, r3, 0x5808
      lfs       f2, 0x264(r27)
      lis       r3, 0x804E
      addi      r5, r3, 0x6A64
      li        r6, 0
      stw       r0, 0xA4(r1)
      lis       r4, 0x804C
      lis       r3, 0x804B
      li        r8, 0x15F
      subi      r0, r3, 0x5814
      li        r7, 0x160
      stw       r5, 0xA4(r1)
      addi      r5, r4, 0x1520
      addi      r3, r1, 0xA4
      addi      r4, r1, 0x94
      sth       r8, 0xA8(r1)
      sth       r7, 0xAA(r1)
      stw       r6, 0xAC(r1)
      stw       r6, 0xB0(r1)
      stw       r5, 0xA4(r1)
      stw       r0, 0x94(r1)
      stfs      f0, 0x98(r1)
      stfs      f1, 0x9C(r1)
      stfs      f2, 0xA0(r1)
      bl        0x17918C
      mr        r3, r27
      li        r4, 0x2845
      li        r5, 0x1
      bl        -0xED5CC

    .loc_0x41C:
      lwz       r0, 0xC0(r1)
      cmplwi    r0, 0
      bne-      .loc_0x448
      lwz       r3, 0xBC(r1)
      lwz       r4, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB8(r1)
      b         .loc_0x4D8

    .loc_0x448:
      lwz       r3, 0xBC(r1)
      lwz       r4, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB8(r1)
      b         .loc_0x4BC

    .loc_0x468:
      lwz       r3, 0xBC(r1)
      lwz       r4, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC0(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4D8
      lwz       r3, 0xBC(r1)
      lwz       r4, 0xB8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xB8(r1)

    .loc_0x4BC:
      lwz       r12, 0xB4(r1)
      addi      r3, r1, 0xB4
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x468

    .loc_0x4D8:
      lwz       r3, 0xBC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xB8(r1)
      cmplw     r4, r3
      bne+      .loc_0x348
      b         .loc_0xCE0

    .loc_0x4FC:
      subfic    r23, r24, 0x1
      lwz       r3, -0x6CD0(r13)
      mr        r4, r23
      bl        -0xBA4EC
      mr        r0, r3
      addi      r3, r1, 0x84
      mr        r26, r0
      li        r27, 0
      bl        -0xC9634
      addi      r3, r1, 0x84
      bl        -0xC9624
      b         .loc_0x560

    .loc_0x52C:
      addi      r3, r1, 0x84
      bl        -0xC95E4
      lwz       r12, 0x0(r3)
      mr        r24, r3
      lwz       r12, 0x1E8(r12)
      mtctr     r12
      bctrl
      cmpw      r23, r3
      bne-      .loc_0x558
      mr        r27, r24
      b         .loc_0x570

    .loc_0x558:
      addi      r3, r1, 0x84
      bl        -0xC95A8

    .loc_0x560:
      addi      r3, r1, 0x84
      bl        -0xC94F0
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x52C

    .loc_0x570:
      cmplwi    r27, 0
      beq-      .loc_0xCE0
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xCE0
      mr        r4, r27
      addi      r3, r1, 0xC4
      bl        -0x963C0
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0xC4
      cmplwi    r0, 0
      stw       r4, 0x74(r1)
      stw       r0, 0x80(r1)
      stw       r0, 0x78(r1)
      stw       r3, 0x7C(r1)
      bne-      .loc_0x5E0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r1)
      b         .loc_0x740

    .loc_0x5E0:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r1)
      b         .loc_0x64C

    .loc_0x5F8:
      lwz       r3, 0x7C(r1)
      lwz       r4, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x80(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x740
      lwz       r3, 0x7C(r1)
      lwz       r4, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r1)

    .loc_0x64C:
      lwz       r12, 0x74(r1)
      addi      r3, r1, 0x74
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x5F8
      b         .loc_0x740

    .loc_0x66C:
      lwz       r3, 0x7C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      bl        -0x96CDC
      lwz       r0, 0x80(r1)
      cmplwi    r0, 0
      bne-      .loc_0x6B0
      lwz       r3, 0x7C(r1)
      lwz       r4, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r1)
      b         .loc_0x740

    .loc_0x6B0:
      lwz       r3, 0x7C(r1)
      lwz       r4, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r1)
      b         .loc_0x724

    .loc_0x6D0:
      lwz       r3, 0x7C(r1)
      lwz       r4, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x80(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x740
      lwz       r3, 0x7C(r1)
      lwz       r4, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x78(r1)

    .loc_0x724:
      lwz       r12, 0x74(r1)
      addi      r3, r1, 0x74
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x6D0

    .loc_0x740:
      lwz       r3, 0x7C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x78(r1)
      cmplw     r4, r3
      bne+      .loc_0x66C
      addi      r3, r1, 0xC4
      li        r4, -0x1
      bl        -0x96484
      mr        r4, r26
      addi      r3, r1, 0x38
      bl        -0xBE1F0
      mr        r4, r27
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r27)
      lfs       f29, 0x38(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x3C(r1)
      lfs       f31, 0x40(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x34(r1)
      lfs       f1, 0x2C(r1)
      fsubs     f2, f0, f31
      lfs       f0, -0x3F88(r2)
      fsubs     f1, f1, f29
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x7D0
      ble-      .loc_0x7D4
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x7D4

    .loc_0x7D0:
      fmr       f1, f0

    .loc_0x7D4:
      lfs       f0, -0x3F28(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xCE0
      mr        r3, r27
      bl        -0xCF890
      lfs       f0, -0x3F24(r2)
      mr        r4, r27
      stfs      f29, 0x68(r1)
      addi      r6, r1, 0x68
      fmadds    f30, f0, f1, f30
      li        r5, 0x8
      stfs      f31, 0x70(r1)
      stfs      f30, 0x6C(r1)
      lwz       r3, 0x3C8(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0xCE0

    .loc_0x820:
      lwz       r3, -0x6CD0(r13)
      subi      r26, r5, 0x7
      bl        -0xBA80C
      mr.       r24, r3
      beq-      .loc_0x990
      mr        r4, r24
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r24)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      mr        r3, r24
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      stfs      f2, 0x5C(r1)
      stfs      f1, 0x60(r1)
      stfs      f0, 0x64(r1)
      lwz       r12, 0x0(r24)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x16CD58
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xE4(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0xE0(r1)
      lfs       f2, -0x3F80(r2)
      lfd       f0, 0xE0(r1)
      lfs       f1, -0x3F1C(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3F20(r2)
      fdivs     f2, f3, f2
      fmadds    f31, f1, f2, f0
      bl        -0x16CD8C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xEC(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0xE8(r1)
      lfs       f2, -0x3F80(r2)
      lfd       f0, 0xE8(r1)
      lfs       f1, -0x3F18(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3F88(r2)
      fdivs     f2, f3, f2
      fmuls     f3, f1, f2
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x8F0
      fneg      f1, f3

    .loc_0x8F0:
      lfs       f2, -0x3F14(r2)
      lis       r3, 0x8050
      lfs       f0, -0x3F88(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      lfs       f4, 0x5C(r1)
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0xF0(r1)
      lwz       r0, 0xF4(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f5, f31, f0
      bge-      .loc_0x950
      lfs       f0, -0x3F10(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xF8(r1)
      lwz       r0, 0xFC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x968

    .loc_0x950:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x100(r1)
      lwz       r0, 0x104(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x968:
      fmuls     f3, f31, f0
      lfs       f0, 0x64(r1)
      lfs       f2, 0x60(r1)
      lfs       f1, -0x3F88(r2)
      fadds     f0, f0, f5
      fadds     f3, f4, f3
      fadds     f1, f2, f1
      stfs      f0, 0x64(r1)
      stfs      f3, 0x5C(r1)
      stfs      f1, 0x60(r1)

    .loc_0x990:
      mr        r3, r23
      mr        r4, r26
      addi      r5, r1, 0x5C
      li        r6, 0x1
      bl        -0xFEC
      b         .loc_0xCE0

    .loc_0x9A8:
      lfs       f31, -0x3F0C(r2)
      lfs       f30, -0x3F88(r2)
      bne-      .loc_0x9BC
      li        r26, 0x8
      b         .loc_0x9C8

    .loc_0x9BC:
      fmr       f31, f30
      lfs       f30, -0x3F08(r2)
      li        r26, 0x1

    .loc_0x9C8:
      lwz       r3, -0x6D20(r13)
      subi      r27, r5, 0x7
      subfic    r4, r24, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      li        r24, 0
      mr        r25, r3
      b         .loc_0xB68

    .loc_0x9F0:
      cmplwi    r25, 0
      beq-      .loc_0xB50
      mr        r4, r25
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r25)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      mr        r3, r25
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      stfs      f2, 0x50(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x58(r1)
      lwz       r12, 0x0(r25)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x16CF1C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x104(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0x100(r1)
      lfs       f1, -0x3F80(r2)
      lfd       f2, 0x100(r1)
      lfs       f0, -0x3F04(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fmuls     f29, f31, f0
      bl        -0x16CF50
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xFC(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0xF8(r1)
      lfs       f2, -0x3F80(r2)
      lfd       f0, 0xF8(r1)
      lfs       f1, -0x3F18(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3F88(r2)
      fdivs     f2, f3, f2
      fmuls     f5, f1, f2
      fmr       f1, f5
      fcmpo     cr0, f5, f0
      bge-      .loc_0xAB4
      fneg      f1, f5

    .loc_0xAB4:
      lfs       f2, -0x3F14(r2)
      lis       r3, 0x8050
      lfs       f0, -0x3F88(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      lfs       f3, 0x50(r1)
      fcmpo     cr0, f5, f0
      fctiwz    f0, f1
      stfd      f0, 0xF0(r1)
      lwz       r0, 0xF4(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f4, f29, f0
      bge-      .loc_0xB14
      lfs       f0, -0x3F10(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0xE8(r1)
      lwz       r0, 0xEC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xB2C

    .loc_0xB14:
      fmuls     f0, f5, f2
      fctiwz    f0, f0
      stfd      f0, 0xE0(r1)
      lwz       r0, 0xE4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xB2C:
      fmuls     f2, f29, f0
      lfs       f1, 0x54(r1)
      lfs       f0, 0x58(r1)
      fadds     f1, f1, f30
      fadds     f2, f3, f2
      fadds     f0, f0, f4
      stfs      f1, 0x54(r1)
      stfs      f2, 0x50(r1)
      stfs      f0, 0x58(r1)

    .loc_0xB50:
      mr        r3, r23
      mr        r4, r27
      addi      r5, r1, 0x50
      li        r6, 0x1
      bl        -0x11AC
      addi      r24, r24, 0x1

    .loc_0xB68:
      cmpw      r24, r26
      blt+      .loc_0x9F0
      b         .loc_0xCE0

    .loc_0xB74:
      cntlzw    r0, r24
      lwz       r3, -0x6CD0(r13)
      rlwinm    r0,r0,27,31,31
      neg       r5, r0
      addi      r0, r5, 0x5
      mr        r24, r0
      bl        -0xBAB70
      mr.       r25, r3
      beq-      .loc_0xCCC
      mr        r4, r25
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r25)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r25
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)
      lwz       r12, 0x0(r25)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f29, f1
      bl        -0x16D0C0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x104(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0x100(r1)
      lfs       f2, -0x3F80(r2)
      lfd       f0, 0x100(r1)
      lfs       f1, -0x3F1C(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3F20(r2)
      fdivs     f2, f3, f2
      fmadds    f30, f1, f2, f0
      bl        -0x16D0F4
      lfs       f0, -0x3F88(r2)
      fmr       f1, f29
      fcmpo     cr0, f29, f0
      bge-      .loc_0xC2C
      fneg      f1, f29

    .loc_0xC2C:
      lfs       f2, -0x3F14(r2)
      lis       r3, 0x8050
      lfs       f0, -0x3F88(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      lfs       f4, 0x44(r1)
      fcmpo     cr0, f29, f0
      fctiwz    f0, f1
      stfd      f0, 0xF8(r1)
      lwz       r0, 0xFC(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f5, f30, f0
      bge-      .loc_0xC8C
      lfs       f0, -0x3F10(r2)
      fmuls     f0, f29, f0
      fctiwz    f0, f0
      stfd      f0, 0xF0(r1)
      lwz       r0, 0xF4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xCA4

    .loc_0xC8C:
      fmuls     f0, f29, f2
      fctiwz    f0, f0
      stfd      f0, 0xE8(r1)
      lwz       r0, 0xEC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xCA4:
      fmuls     f3, f30, f0
      lfs       f0, 0x4C(r1)
      lfs       f2, 0x48(r1)
      lfs       f1, -0x3F88(r2)
      fadds     f0, f0, f5
      fadds     f3, f4, f3
      fadds     f1, f2, f1
      stfs      f0, 0x4C(r1)
      stfs      f3, 0x44(r1)
      stfs      f1, 0x48(r1)

    .loc_0xCCC:
      mr        r3, r23
      mr        r4, r24
      addi      r5, r1, 0x44
      li        r6, 0x1
      bl        -0x1328

    .loc_0xCE0:
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0xD5C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x183C
      li        r5, 0
      bl        0x101EBC
      add       r6, r30, r29
      lwz       r3, 0x34(r6)
      cmpwi     r3, 0
      ble-      .loc_0xD28
      subi      r0, r3, 0x1
      addi      r3, r29, 0x18
      stw       r0, 0x34(r6)
      add       r3, r30, r3
      bl        0x288
      li        r0, 0
      stb       r0, 0x30(r31)
      b         .loc_0xD5C

    .loc_0xD28:
      lfs       f0, -0x3F88(r2)
      lis       r4, 0x1
      addi      r3, r29, 0x18
      li        r5, 0x2
      stfs      f0, 0x28(r6)
      subi      r0, r4, 0x1
      add       r3, r30, r3
      stfs      f0, 0x2C(r6)
      stw       r5, 0x48(r6)
      stw       r0, 0x70(r31)
      bl        0x2364
      li        r0, 0x1
      stb       r0, 0x30(r31)

    .loc_0xD5C:
      mr        r3, r28

    .loc_0xD60:
      psq_l     f31,0x158(r1),0,0
      lfd       f31, 0x150(r1)
      psq_l     f30,0x148(r1),0,0
      lfd       f30, 0x140(r1)
      psq_l     f29,0x138(r1),0,0
      lfd       f29, 0x130(r1)
      lmw       r23, 0x10C(r1)
      lwz       r0, 0x164(r1)
      mtlr      r0
      addi      r1, r1, 0x160
      blr
    */
}

/*
 * --INFO--
 * Address:	8023680C
 * Size:	0001BC
 */
void Game::VsGame::CardMgr::gotPlayerCard((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stmw      r26, 0x58(r1)
      mulli     r26, r4, 0x70
      mr        r27, r3
      add       r31, r27, r26
      lwz       r0, 0x38(r31)
      cmpwi     r0, 0
      bne-      .loc_0x40
      addi      r3, r26, 0x18
      add       r3, r27, r3
      bl        0x1E4
      li        r0, 0
      stb       r0, 0x30(r31)
      b         .loc_0x1A8

    .loc_0x40:
      lwz       r0, 0x34(r31)
      cmpwi     r0, 0x4
      bge-      .loc_0x1A8
      cmpwi     r4, 0
      bne-      .loc_0x60
      lfs       f3, -0x3F48(r2)
      lfs       f4, -0x3F44(r2)
      b         .loc_0x68

    .loc_0x60:
      lfs       f3, -0x3F48(r2)
      lfs       f4, -0x3F40(r2)

    .loc_0x68:
      xoris     r3, r0, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x54(r1)
      li        r26, 0xFF
      li        r8, 0
      li        r29, 0x46
      stw       r0, 0x50(r1)
      lis       r3, 0x804C
      lfd       f1, -0x3F78(r2)
      addi      r0, r3, 0x14F0
      lfd       f0, 0x50(r1)
      lis       r5, 0x804C
      lfs       f2, -0x3F38(r2)
      li        r27, 0x96
      fsubs     f1, f0, f1
      lfs       f0, -0x3F30(r2)
      fsubs     f5, f3, f2
      lfs       f3, -0x3F3C(r2)
      lfs       f2, -0x3F34(r2)
      li        r28, 0x64
      fmuls     f1, f1, f0
      lis       r3, 0x804C
      fsubs     f3, f4, f3
      lis       r4, 0x804E
      addi      r11, r3, 0x1514
      lfs       f0, -0x3F00(r2)
      fmadds    f5, f2, f1, f5
      stfs      f3, 0x1C(r1)
      lis       r10, 0x804C
      lis       r3, 0x804E
      lwz       r12, 0x1C(r1)
      addi      r9, r5, 0x14D8
      stfs      f5, 0x18(r1)
      addi      r7, r4, 0x7470
      li        r6, 0x22
      li        r5, 0x23
      stw       r0, 0x20(r1)
      addi      r10, r10, 0x1508
      lwz       r30, 0x18(r1)
      addi      r0, r3, 0x75E0
      stw       r12, 0x14(r1)
      addi      r3, r1, 0x20
      addi      r4, r1, 0x34
      stw       r30, 0x10(r1)
      lfs       f1, 0x14(r1)
      stw       r9, 0x20(r1)
      lfs       f2, 0x10(r1)
      stw       r11, 0x3C(r1)
      stw       r7, 0x20(r1)
      stb       r26, 0xC(r1)
      stb       r27, 0xD(r1)
      stb       r28, 0xE(r1)
      stb       r26, 0xF(r1)
      lwz       r9, 0xC(r1)
      stb       r26, 0x8(r1)
      stb       r29, 0x9(r1)
      stb       r29, 0xA(r1)
      stb       r26, 0xB(r1)
      lwz       r7, 0x8(r1)
      stfs      f2, 0x34(r1)
      stfs      f1, 0x38(r1)
      stw       r10, 0x3C(r1)
      stfs      f0, 0x40(r1)
      stw       r9, 0x44(r1)
      stw       r7, 0x48(r1)
      stb       r8, 0x24(r1)
      stb       r8, 0x25(r1)
      sth       r6, 0x28(r1)
      sth       r5, 0x2A(r1)
      stw       r8, 0x2C(r1)
      stw       r8, 0x30(r1)
      stw       r0, 0x20(r1)
      bl        0x1839A8
      lwz       r3, -0x67A8(r13)
      li        r4, 0x188A
      li        r5, 0
      bl        0x101C8C
      lwz       r3, 0x34(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x34(r31)

    .loc_0x1A8:
      lmw       r26, 0x58(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::VsGame::CardMgr::clearPlayerCard(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802369C8
 * Size:	000058
 */
void Game::VsGame::CardMgr::SlotMachine::clear(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x3F88(r2)
      lis       r4, 0x1
      li        r5, 0
      lfs       f0, -0x3F1C(r2)
      stfs      f1, 0x54(r3)
      subi      r4, r4, 0x1
      li        r0, 0x3
      stw       r5, 0x20(r3)
      stfs      f1, 0x14(r3)
      stfs      f1, 0x0(r3)
      stfs      f1, 0x10(r3)
      stw       r5, 0x8(r3)
      stw       r5, 0x4(r3)
      stfs      f1, 0xC(r3)
      stw       r4, 0x4C(r3)
      stw       r4, 0x58(r3)
      stfs      f0, 0x34(r3)
      stw       r0, 0x30(r3)
      stw       r5, 0x38(r3)
      stw       r5, 0x1C(r3)
      stb       r5, 0x51(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80236A20
 * Size:	0005F0
 */
void Game::VsGame::CardMgr::SlotMachine::start(void)
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
      stw       r31, 0x8C(r1)
      stw       r30, 0x88(r1)
      stw       r29, 0x84(r1)
      mr        r30, r3
      li        r0, 0
      stb       r0, 0x51(r3)
      li        r6, 0x64
      li        r5, 0x1E
      addi      r31, r1, 0x10
      lwz       r4, 0x60(r3)
      li        r3, 0x1
      lwz       r0, 0x5C(r30)
      lwz       r4, 0x10C(r4)
      stw       r6, 0x28(r1)
      rlwinm    r7,r0,2,0,29
      subfic    r0, r0, 0x1
      addi      r8, r4, 0x370
      add       r4, r4, r7
      stw       r6, 0x10(r1)
      rlwinm    r0,r0,2,0,29
      lfs       f31, 0x378(r4)
      stw       r6, 0x14(r1)
      lfsx      f30, r8, r7
      stw       r6, 0x18(r1)
      lfsx      f29, r8, r0
      stw       r6, 0x1C(r1)
      stw       r6, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r6, 0x2C(r1)
      stw       r6, 0x30(r1)
      stw       r6, 0x34(r1)
      stw       r6, 0x38(r1)
      stw       r6, 0x3C(r1)
      stw       r5, 0x28(r1)
      bl        -0x65C6C
      stw       r3, 0x8(r1)
      li        r3, 0
      bl        -0x65C78
      lwz       r0, 0x5C(r30)
      addi      r4, r1, 0x8
      stw       r3, 0xC(r1)
      rlwinm    r0,r0,2,0,29
      lwzx      r0, r4, r0
      cmpwi     r0, 0x4
      bge-      .loc_0xE8
      li        r3, 0xC8
      li        r0, 0x96
      stw       r3, 0x10(r1)
      stw       r0, 0x14(r1)

    .loc_0xE8:
      lwz       r3, 0x60(r30)
      li        r5, 0
      lwz       r4, 0x5C(r30)
      lwz       r3, 0x10C(r3)
      bl        -0x72240
      lwz       r4, 0x60(r30)
      li        r5, 0
      lwz       r0, 0x5C(r30)
      lwz       r29, 0x0(r3)
      lwz       r3, 0x10C(r4)
      subfic    r4, r0, 0x1
      bl        -0x7225C
      lwz       r3, 0x0(r3)
      addi      r0, r3, 0x2
      cmpw      r29, r0
      ble-      .loc_0x13C
      lwz       r3, 0x24(r1)
      rlwinm    r0,r3,1,31,31
      add       r0, r0, r3
      srawi     r0, r0, 0x1
      stw       r0, 0x24(r1)

    .loc_0x13C:
      lwz       r3, 0x60(r30)
      li        r5, 0x1
      lwz       r4, 0x5C(r30)
      lwz       r3, 0x10C(r3)
      bl        -0x72294
      lwz       r4, 0x60(r30)
      li        r5, 0x1
      lwz       r0, 0x5C(r30)
      lwz       r29, 0x0(r3)
      lwz       r3, 0x10C(r4)
      subfic    r4, r0, 0x1
      bl        -0x722B0
      lwz       r3, 0x0(r3)
      addi      r0, r3, 0x2
      cmpw      r29, r0
      ble-      .loc_0x190
      lwz       r3, 0x20(r1)
      rlwinm    r0,r3,1,31,31
      add       r0, r0, r3
      srawi     r0, r0, 0x1
      stw       r0, 0x20(r1)

    .loc_0x190:
      lwz       r3, 0x64(r30)
      addis     r0, r3, 0
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x1B0
      rlwinm    r0,r3,2,0,29
      addi      r3, r1, 0x10
      li        r4, 0xA
      stwx      r4, r3, r0

    .loc_0x1B0:
      lwz       r3, 0x60(r30)
      lwz       r0, 0x5C(r30)
      lwz       r3, 0x10C(r3)
      rlwinm    r0,r0,2,0,29
      lfs       f0, -0x3EFC(r2)
      add       r3, r3, r0
      lfs       f1, 0x1F0(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1DC
      li        r0, 0
      stw       r0, 0x1C(r1)

    .loc_0x1DC:
      lwz       r4, 0x10(r1)
      lwz       r0, 0x14(r1)
      lwz       r3, 0x18(r1)
      add       r5, r4, r0
      lwz       r0, 0x1C(r1)
      add       r5, r5, r3
      lwz       r3, 0x20(r1)
      add       r5, r5, r0
      lwz       r0, 0x24(r1)
      add       r5, r5, r3
      lwz       r4, 0x28(r1)
      add       r5, r5, r0
      lwz       r0, 0x2C(r1)
      add       r5, r5, r4
      lfs       f1, -0x3EF8(r2)
      lwz       r3, 0x30(r1)
      add       r5, r5, r0
      lwz       r0, 0x34(r1)
      fcmpo     cr0, f31, f1
      add       r5, r5, r3
      lwz       r3, 0x38(r1)
      add       r5, r5, r0
      lwz       r0, 0x3C(r1)
      add       r5, r5, r3
      lfs       f2, -0x3F88(r2)
      add       r5, r5, r0
      blt-      .loc_0x274
      lfs       f0, -0x3F00(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x25C
      fmr       f2, f1
      b         .loc_0x274

    .loc_0x25C:
      lfs       f0, -0x3EF4(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x270
      lfs       f2, -0x3F24(r2)
      b         .loc_0x274

    .loc_0x270:
      lfs       f2, -0x3EF0(r2)

    .loc_0x274:
      fsubs     f1, f30, f29
      lfs       f0, -0x3EEC(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x290
      lfs       f0, -0x3EF4(r2)
      fmuls     f2, f2, f0

    .loc_0x290:
      lfs       f0, -0x3F88(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x2CC
      xoris     r3, r5, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x74(r1)
      lfd       f1, -0x3F78(r2)
      stw       r0, 0x70(r1)
      lfd       f0, 0x70(r1)
      fsubs     f0, f0, f1
      fmuls     f0, f0, f2
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      stw       r0, 0x28(r1)

    .loc_0x2CC:
      lwz       r5, 0x10(r1)
      li        r0, 0x4
      lwz       r3, 0x14(r1)
      mr        r8, r31
      lwz       r4, 0x18(r1)
      li        r6, 0
      add       r7, r5, r3
      lwz       r3, 0x1C(r1)
      add       r7, r7, r4
      lwz       r4, 0x20(r1)
      add       r7, r7, r3
      lwz       r3, 0x24(r1)
      add       r7, r7, r4
      lwz       r5, 0x28(r1)
      add       r7, r7, r3
      lwz       r3, 0x2C(r1)
      add       r7, r7, r5
      lwz       r4, 0x30(r1)
      add       r7, r7, r3
      lwz       r3, 0x34(r1)
      add       r7, r7, r4
      lwz       r4, 0x38(r1)
      add       r7, r7, r3
      lwz       r3, 0x3C(r1)
      add       r7, r7, r4
      lfs       f4, -0x3F88(r2)
      add       r7, r7, r3
      lfd       f3, -0x3F78(r2)
      xoris     r3, r7, 0x8000
      lfs       f0, -0x3F84(r2)
      lis       r4, 0x4330
      mtctr     r0

    .loc_0x34C:
      lwz       r5, 0x0(r8)
      stw       r4, 0x78(r1)
      xoris     r0, r5, 0x8000
      cmpwi     r5, 0
      stw       r0, 0x7C(r1)
      lfd       f1, 0x78(r1)
      stw       r3, 0x74(r1)
      fsubs     f2, f1, f3
      stw       r4, 0x70(r1)
      lfd       f1, 0x70(r1)
      fsubs     f1, f1, f3
      fdivs     f1, f2, f1
      fadds     f4, f4, f1
      bne-      .loc_0x38C
      stfs      f0, 0x30(r8)
      b         .loc_0x390

    .loc_0x38C:
      stfs      f4, 0x30(r8)

    .loc_0x390:
      lwz       r5, 0x4(r8)
      stw       r4, 0x78(r1)
      xoris     r0, r5, 0x8000
      cmpwi     r5, 0
      stw       r0, 0x7C(r1)
      lfd       f1, 0x78(r1)
      stw       r3, 0x74(r1)
      fsubs     f2, f1, f3
      stw       r4, 0x70(r1)
      lfd       f1, 0x70(r1)
      fsubs     f1, f1, f3
      fdivs     f1, f2, f1
      fadds     f4, f4, f1
      bne-      .loc_0x3D0
      stfs      f0, 0x34(r8)
      b         .loc_0x3D4

    .loc_0x3D0:
      stfs      f4, 0x34(r8)

    .loc_0x3D4:
      lwz       r5, 0x8(r8)
      stw       r4, 0x78(r1)
      xoris     r0, r5, 0x8000
      cmpwi     r5, 0
      stw       r0, 0x7C(r1)
      lfd       f1, 0x78(r1)
      stw       r3, 0x74(r1)
      fsubs     f2, f1, f3
      stw       r4, 0x70(r1)
      lfd       f1, 0x70(r1)
      fsubs     f1, f1, f3
      fdivs     f1, f2, f1
      fadds     f4, f4, f1
      bne-      .loc_0x414
      stfs      f0, 0x38(r8)
      b         .loc_0x418

    .loc_0x414:
      stfs      f4, 0x38(r8)

    .loc_0x418:
      addi      r8, r8, 0xC
      addi      r6, r6, 0x2
      bdnz+     .loc_0x34C
      bl        -0x16D8A4
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0x7C(r1)
      li        r0, 0x2
      lfd       f2, -0x3F78(r2)
      stw       r3, 0x78(r1)
      li        r3, 0
      lfs       f0, -0x3F80(r2)
      lfd       f1, 0x78(r1)
      fsubs     f1, f1, f2
      fdivs     f1, f1, f0
      mtctr     r0

    .loc_0x458:
      lfs       f0, 0x30(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x468
      b         .loc_0x514

    .loc_0x468:
      lfs       f0, 0x34(r31)
      addi      r3, r3, 0x1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x47C
      b         .loc_0x514

    .loc_0x47C:
      lfs       f0, 0x38(r31)
      addi      r3, r3, 0x1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x490
      b         .loc_0x514

    .loc_0x490:
      lfs       f0, 0x3C(r31)
      addi      r3, r3, 0x1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4A4
      b         .loc_0x514

    .loc_0x4A4:
      lfs       f0, 0x40(r31)
      addi      r3, r3, 0x1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4B8
      b         .loc_0x514

    .loc_0x4B8:
      lfs       f0, 0x44(r31)
      addi      r3, r3, 0x1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4CC
      b         .loc_0x514

    .loc_0x4CC:
      addi      r31, r31, 0x18
      addi      r3, r3, 0x1
      bdnz+     .loc_0x458
      bl        -0x16D958
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x7C(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0x78(r1)
      lfs       f1, -0x3F80(r2)
      lfd       f2, 0x78(r1)
      lfs       f0, -0x3F7C(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r3, 0x74(r1)

    .loc_0x514:
      stw       r3, 0x24(r30)
      lwz       r0, 0x24(r30)
      stw       r0, 0x64(r30)
      bl        -0x16D9A0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x7C(r1)
      lis       r3, 0x1
      lfd       f2, -0x3F78(r2)
      subi      r3, r3, 0x1
      stw       r0, 0x78(r1)
      li        r0, 0
      lfs       f0, -0x3F80(r2)
      li        r4, 0x183A
      lfd       f1, 0x78(r1)
      li        r5, 0
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      stfs      f0, 0x28(r30)
      stw       r3, 0x58(r30)
      stw       r0, 0x30(r30)
      lwz       r3, -0x67A8(r13)
      bl        0x1016A4
      lwz       r0, 0x20(r30)
      cmpwi     r0, 0x3
      bge-      .loc_0x58C
      cmpwi     r0, 0
      beq-      .loc_0x598
      bge-      .loc_0x5BC
      b         .loc_0x5B4

    .loc_0x58C:
      cmpwi     r0, 0xA
      beq-      .loc_0x598
      b         .loc_0x5B4

    .loc_0x598:
      lfs       f1, -0x3EE8(r2)
      li        r0, 0x1
      lfs       f0, -0x3EE4(r2)
      stfs      f1, 0x10(r30)
      stw       r0, 0x20(r30)
      stfs      f0, 0x14(r30)
      b         .loc_0x5BC

    .loc_0x5B4:
      li        r0, 0x2
      stw       r0, 0x20(r30)

    .loc_0x5BC:
      psq_l     f31,0xB8(r1),0,0
      lfd       f31, 0xB0(r1)
      psq_l     f30,0xA8(r1),0,0
      lfd       f30, 0xA0(r1)
      psq_l     f29,0x98(r1),0,0
      lfd       f29, 0x90(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      lwz       r0, 0xC4(r1)
      lwz       r29, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	80237010
 * Size:	000050
 */
void Game::VsGame::CardMgr::SlotMachine::startStop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x3F88(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lfs       f1, 0x54(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x34
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1800
      li        r5, 0
      bl        0x1015F0

    .loc_0x34:
      lfs       f0, -0x3F88(r2)
      stfs      f0, 0x54(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void Game::VsGame::CardMgr::SlotMachine::equalTo((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::VsGame::CardMgr::SlotMachine::goodPlace(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80237060
 * Size:	0007B8
 */
void Game::VsGame::CardMgr::SlotMachine::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r31, r3
      bl        .loc_0x7B8
      lwz       r0, 0x20(r31)
      lwz       r3, -0x6514(r13)
      cmplwi    r0, 0xA
      lfs       f31, 0x54(r3)
      bgt-      .loc_0x6B4
      lis       r3, 0x804C
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x14AC
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      lfs       f1, -0x3EE4(r2)
      lfs       f0, -0x3F88(r2)
      stfs      f1, 0x14(r31)
      lfs       f1, 0x10(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x6B4
      li        r0, 0x2
      lfs       f0, -0x3F0C(r2)
      stw       r0, 0x20(r31)
      stfs      f0, 0x54(r31)
      b         .loc_0x6B4
      lwz       r0, 0x1C(r31)
      cmpwi     r0, 0x1
      blt-      .loc_0x94
      lfs       f0, -0x3EDC(r2)
      stfs      f0, 0x14(r31)
      b         .loc_0x9C

    .loc_0x94:
      lfs       f0, -0x3EE4(r2)
      stfs      f0, 0x14(r31)

    .loc_0x9C:
      lis       r3, 0x8051
      addi      r3, r3, 0x41FC
      lwz       r0, 0x1B8(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0xC0
      lfs       f1, 0x14(r31)
      lfs       f0, -0x3ED8(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0x14(r31)

    .loc_0xC0:
      lfs       f1, 0x10(r31)
      lfs       f0, -0x3EDC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x6B4
      stfs      f0, 0x10(r31)
      li        r0, 0x3
      stw       r0, 0x20(r31)
      lwz       r0, 0x1B8(r3)
      cmpwi     r0, 0
      bne-      .loc_0x138
      bl        -0x16DBA8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3F80(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3F00(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3EF4(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x54(r31)
      lwz       r0, 0x1C(r31)
      cmpwi     r0, 0x1
      blt-      .loc_0x6B4
      lfs       f0, -0x3F88(r2)
      stfs      f0, 0x54(r31)
      b         .loc_0x6B4

    .loc_0x138:
      lfs       f1, 0x54(r31)
      lfs       f0, -0x3F88(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6B4
      bl        -0x16DC08
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3F78(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3F80(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3F00(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3ED4(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x54(r31)
      b         .loc_0x6B4
      lfs       f0, -0x3EDC(r2)
      lfs       f1, -0x3F88(r2)
      stfs      f0, 0x10(r31)
      stfs      f1, 0x14(r31)
      lfs       f0, 0x54(r31)
      fsubs     f0, f0, f31
      stfs      f0, 0x54(r31)
      lfs       f0, 0x54(r31)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x6B4
      lwz       r4, 0x24(r31)
      lis       r3, 0x2AAB
      subi      r0, r3, 0x5555
      lwz       r5, 0x4(r31)
      addi      r4, r4, 0xD
      mulhw     r0, r0, r4
      srawi     r0, r0, 0x1
      rlwinm    r3,r0,1,31,31
      add       r0, r0, r3
      mulli     r0, r0, 0xC
      sub       r0, r4, r0
      cmpw      r5, r0
      bne-      .loc_0x6B4
      li        r0, 0x4
      lfs       f0, -0x3F18(r2)
      stw       r0, 0x20(r31)
      stfs      f0, 0x14(r31)
      b         .loc_0x6B4
      lfs       f0, -0x3F18(r2)
      stfs      f0, 0x14(r31)
      lwz       r0, 0x1C(r31)
      cmpwi     r0, 0x1
      blt-      .loc_0x234
      lfs       f1, 0x10(r31)
      lfs       f0, -0x3ED0(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6B4
      lfs       f0, -0x3F88(r2)
      li        r0, 0x5
      stfs      f0, 0x14(r31)
      stw       r0, 0x20(r31)
      stfs      f0, 0x2C(r31)
      b         .loc_0x6B4

    .loc_0x234:
      lfs       f1, 0x10(r31)
      lfs       f0, -0x3ED0(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6B4
      lfs       f0, -0x3F88(r2)
      li        r0, 0x5
      stfs      f0, 0x14(r31)
      stw       r0, 0x20(r31)
      stfs      f0, 0x2C(r31)
      b         .loc_0x6B4
      lfs       f1, 0x2C(r31)
      lfs       f0, -0x3ED8(r2)
      fadds     f1, f1, f31
      stfs      f1, 0x2C(r31)
      lfs       f1, 0x2C(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x330
      lwz       r3, 0x4(r31)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, -0x3F78(r2)
      stw       r0, 0xC(r1)
      lfs       f3, 0xC(r31)
      lfd       f1, 0x8(r1)
      lfs       f0, -0x3EE0(r2)
      fsubs     f1, f1, f2
      fsubs     f1, f3, f1
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x330
      lfs       f1, -0x3F88(r2)
      lis       r3, 0x2AAB
      subi      r4, r3, 0x5555
      li        r0, 0xA
      stfs      f1, 0x6C(r31)
      mr        r3, r31
      lfs       f0, -0x3EF0(r2)
      stfs      f1, 0x68(r31)
      lwz       r5, 0x4(r31)
      addi      r6, r5, 0xB
      mulhw     r4, r4, r6
      srawi     r4, r4, 0x1
      rlwinm    r5,r4,1,31,31
      add       r4, r4, r5
      mulli     r4, r4, 0xC
      sub       r4, r6, r4
      stw       r4, 0x24(r31)
      stfs      f1, 0x2C(r31)
      stfs      f1, 0x14(r31)
      stfs      f1, 0x10(r31)
      stw       r0, 0x20(r31)
      lwz       r0, 0x24(r31)
      stw       r0, 0x4C(r31)
      stfs      f0, 0x54(r31)
      bl        0x1794
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1800
      li        r5, 0
      bl        0x1012A8
      b         .loc_0x6B4

    .loc_0x330:
      lwz       r4, 0x24(r31)
      lis       r0, 0x4330
      lis       r3, 0x2AAB
      stw       r0, 0x8(r1)
      addi      r4, r4, 0xD
      lfd       f3, -0x3F78(r2)
      subi      r3, r3, 0x5555
      stw       r0, 0x10(r1)
      mulhw     r0, r3, r4
      lfs       f2, 0xC(r31)
      srawi     r0, r0, 0x1
      rlwinm    r3,r0,1,31,31
      add       r0, r0, r3
      mulli     r0, r0, 0xC
      sub       r3, r4, r0
      addi      r0, r3, 0xC
      xoris     r3, r3, 0x8000
      xoris     r0, r0, 0x8000
      stw       r3, 0xC(r1)
      stw       r0, 0x14(r1)
      lfd       f1, 0x8(r1)
      lfd       f0, 0x10(r1)
      fsubs     f1, f1, f3
      fsubs     f0, f0, f3
      fsubs     f1, f1, f2
      fsubs     f0, f0, f2
      fabs      f1, f1
      fabs      f0, f0
      frsp      f1, f1
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      bge-      .loc_0x3B4
      fmr       f1, f0

    .loc_0x3B4:
      lfs       f0, -0x3EE0(r2)
      li        r0, 0
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3D8
      lfs       f0, -0x3F88(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x3D8
      li        r0, 0x1

    .loc_0x3D8:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x6B4
      lfs       f1, -0x3F88(r2)
      li        r0, 0xA
      lfs       f0, -0x3EF0(r2)
      mr        r3, r31
      stfs      f1, 0x6C(r31)
      stfs      f1, 0x68(r31)
      stfs      f1, 0x10(r31)
      stfs      f1, 0x14(r31)
      stw       r0, 0x20(r31)
      lwz       r0, 0x24(r31)
      stw       r0, 0x4C(r31)
      stfs      f0, 0x54(r31)
      bl        0x169C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1800
      li        r5, 0
      bl        0x1011B0
      b         .loc_0x6B4
      lfs       f1, 0x54(r31)
      lfs       f0, -0x3F88(r2)
      fsubs     f1, f1, f31
      stfs      f1, 0x54(r31)
      lfs       f1, 0x54(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6B4
      stfs      f0, 0x10(r31)
      li        r0, 0x9
      lfs       f0, -0x3EE4(r2)
      stfs      f0, 0x14(r31)
      stw       r0, 0x20(r31)
      b         .loc_0x6B4
      lwz       r4, 0x24(r31)
      lis       r0, 0x4330
      lis       r3, 0x2AAB
      stw       r0, 0x10(r1)
      addi      r4, r4, 0xD
      lfd       f3, -0x3F78(r2)
      subi      r3, r3, 0x5555
      stw       r0, 0x8(r1)
      mulhw     r0, r3, r4
      lfs       f2, 0xC(r31)
      srawi     r0, r0, 0x1
      rlwinm    r3,r0,1,31,31
      add       r0, r0, r3
      mulli     r0, r0, 0xC
      sub       r3, r4, r0
      addi      r0, r3, 0xC
      xoris     r3, r3, 0x8000
      xoris     r0, r0, 0x8000
      stw       r3, 0x14(r1)
      stw       r0, 0xC(r1)
      lfd       f1, 0x10(r1)
      lfd       f0, 0x8(r1)
      fsubs     f1, f1, f3
      fsubs     f0, f0, f3
      fsubs     f1, f1, f2
      fsubs     f0, f0, f2
      fabs      f1, f1
      fabs      f0, f0
      frsp      f1, f1
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      bge-      .loc_0x4E4
      fmr       f1, f0

    .loc_0x4E4:
      lfs       f0, -0x3EE0(r2)
      li        r0, 0
      fcmpo     cr0, f1, f0
      bge-      .loc_0x508
      lfs       f0, -0x3F88(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x508
      li        r0, 0x1

    .loc_0x508:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x6B4
      lfs       f0, -0x3F88(r2)
      li        r0, 0xA
      li        r4, 0x1800
      li        r5, 0
      stfs      f0, 0x10(r31)
      stfs      f0, 0x14(r31)
      stw       r0, 0x20(r31)
      lwz       r3, -0x67A8(r13)
      bl        0x1010A0
      b         .loc_0x6B4
      lfs       f1, 0x54(r31)
      lfs       f0, -0x3F88(r2)
      fsubs     f1, f1, f31
      stfs      f1, 0x54(r31)
      lfs       f1, 0x54(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6B4
      stfs      f0, 0x10(r31)
      li        r0, 0x7
      lfs       f0, -0x3F18(r2)
      stfs      f0, 0x14(r31)
      stw       r0, 0x20(r31)
      b         .loc_0x6B4
      lwz       r4, 0x24(r31)
      lis       r0, 0x4330
      lis       r3, 0x2AAB
      stw       r0, 0x10(r1)
      addi      r4, r4, 0xD
      lfd       f3, -0x3F78(r2)
      subi      r3, r3, 0x5555
      stw       r0, 0x8(r1)
      mulhw     r0, r3, r4
      lfs       f2, 0xC(r31)
      srawi     r0, r0, 0x1
      rlwinm    r3,r0,1,31,31
      add       r0, r0, r3
      mulli     r0, r0, 0xC
      sub       r3, r4, r0
      addi      r0, r3, 0xC
      xoris     r3, r3, 0x8000
      xoris     r0, r0, 0x8000
      stw       r3, 0x14(r1)
      stw       r0, 0xC(r1)
      lfd       f1, 0x10(r1)
      lfd       f0, 0x8(r1)
      fsubs     f1, f1, f3
      fsubs     f0, f0, f3
      fsubs     f1, f1, f2
      fsubs     f0, f0, f2
      fabs      f1, f1
      fabs      f0, f0
      frsp      f1, f1
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      bge-      .loc_0x5F4
      fmr       f1, f0

    .loc_0x5F4:
      lfs       f0, -0x3EE0(r2)
      li        r0, 0
      fcmpo     cr0, f1, f0
      bge-      .loc_0x618
      lfs       f0, -0x3F88(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x618
      li        r0, 0x1

    .loc_0x618:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x6B4
      lfs       f1, -0x3F88(r2)
      li        r0, 0xA
      lfs       f0, -0x3ECC(r2)
      li        r4, 0x1800
      stfs      f1, 0x10(r31)
      li        r5, 0
      stfs      f1, 0x14(r31)
      stw       r0, 0x20(r31)
      stfs      f0, 0x54(r31)
      lwz       r3, -0x67A8(r13)
      bl        0x100F88
      b         .loc_0x6B4
      li        r0, 0x1
      lis       r3, 0x8051
      stb       r0, 0x51(r31)
      addi      r3, r3, 0x41FC
      lfs       f2, -0x3F88(r2)
      lwz       r0, 0x24(r31)
      stw       r0, 0x58(r31)
      stfs      f2, 0x10(r31)
      stfs      f2, 0x14(r31)
      lwz       r0, 0x1B8(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x6B4
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x54(r31)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x54(r31)
      lfs       f0, 0x54(r31)
      fcmpo     cr0, f0, f2
      cror      2, 0, 0x2
      bne-      .loc_0x6B4
      lwz       r3, 0x60(r31)
      li        r5, 0
      lwz       r4, 0x5C(r31)
      bl        -0x1C90

    .loc_0x6B4:
      lfs       f2, 0x10(r31)
      lfs       f1, 0x0(r31)
      lfs       f0, -0x3F18(r2)
      fmadds    f1, f2, f31, f1
      stfs      f1, 0x0(r31)
      lfs       f1, 0x0(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6DC
      fsubs     f0, f1, f0
      stfs      f0, 0x0(r31)

    .loc_0x6DC:
      lfs       f1, 0x0(r31)
      lfs       f0, -0x3F88(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x6F8
      lfs       f0, -0x3F18(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x0(r31)

    .loc_0x6F8:
      lfs       f2, 0x14(r31)
      lfs       f1, 0x10(r31)
      lfs       f0, -0x3EC8(r2)
      fmadds    f1, f2, f31, f1
      stfs      f1, 0x10(r31)
      lwz       r30, 0x4(r31)
      stw       r30, 0x8(r31)
      lfs       f1, 0x0(r31)
      fadds     f1, f1, f0
      bl        0x1DA454
      lfs       f0, -0x3EC8(r2)
      fdivs     f0, f1, f0
      stfs      f0, 0xC(r31)
      lfs       f0, 0xC(r31)
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      stw       r0, 0x4(r31)
      lwz       r0, 0x20(r31)
      cmpwi     r0, 0xA
      beq-      .loc_0x798
      cmpwi     r0, 0
      beq-      .loc_0x798
      lwz       r3, 0x60(r31)
      lfs       f1, 0x10(r31)
      lfs       f0, 0x104(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x77C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x103B
      li        r5, 0
      bl        0x100E5C
      b         .loc_0x798

    .loc_0x77C:
      lwz       r0, 0x4(r31)
      cmpw      r30, r0
      beq-      .loc_0x798
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1802
      li        r5, 0
      bl        0x100E3C

    .loc_0x798:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x7B8:
    */
}

/*
 * --INFO--
 * Address:	80237818
 * Size:	000150
 */
void Game::VsGame::CardMgr::SlotMachine::updateAppear(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x30(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x88
      bge-      .loc_0x34
      cmpwi     r0, 0
      beq-      .loc_0x40
      bge-      .loc_0x7C
      b         .loc_0x13C

    .loc_0x34:
      cmpwi     r0, 0x4
      bge-      .loc_0x13C
      b         .loc_0xE8

    .loc_0x40:
      lwz       r3, -0x6514(r13)
      lfs       f3, -0x3EC4(r2)
      lfs       f2, 0x54(r3)
      lfs       f1, 0x34(r31)
      lfs       f0, -0x3F88(r2)
      fnmsubs   f1, f3, f2, f1
      stfs      f1, 0x34(r31)
      lfs       f1, 0x34(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x13C
      stfs      f0, 0x34(r31)
      li        r0, 0x1
      stw       r0, 0x30(r31)
      b         .loc_0x13C

    .loc_0x7C:
      lfs       f0, -0x3F88(r2)
      stfs      f0, 0x34(r31)
      b         .loc_0x13C

    .loc_0x88:
      lwz       r4, -0x6514(r13)
      lfs       f3, -0x3EC4(r2)
      lfs       f2, 0x54(r4)
      lfs       f1, 0x34(r31)
      lfs       f0, -0x3F04(r2)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x34(r31)
      lfs       f1, 0x34(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x13C
      stfs      f0, 0x34(r31)
      lwz       r4, 0x1C(r31)
      cmpwi     r4, 0
      ble-      .loc_0xDC
      subi      r0, r4, 0x1
      stw       r0, 0x1C(r31)
      bl        -0xEC4
      li        r0, 0
      stb       r0, 0x18(r31)
      b         .loc_0x13C

    .loc_0xDC:
      li        r0, 0x3
      stw       r0, 0x30(r31)
      b         .loc_0x13C

    .loc_0xE8:
      lfs       f1, -0x3F88(r2)
      lis       r3, 0x1
      li        r4, 0
      lfs       f0, -0x3F1C(r2)
      stfs      f1, 0x54(r31)
      subi      r3, r3, 0x1
      li        r0, 0x3
      stw       r4, 0x20(r31)
      stfs      f1, 0x14(r31)
      stfs      f1, 0x0(r31)
      stfs      f1, 0x10(r31)
      stw       r4, 0x8(r31)
      stw       r4, 0x4(r31)
      stfs      f1, 0xC(r31)
      stw       r3, 0x4C(r31)
      stw       r3, 0x58(r31)
      stfs      f0, 0x34(r31)
      stw       r0, 0x30(r31)
      stw       r4, 0x38(r31)
      stw       r4, 0x1C(r31)
      stb       r4, 0x51(r31)

    .loc_0x13C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Game::VsGame::CardMgr::getTexture((Game::VsGame::eCardType))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80237968
 * Size:	000354
 */
void Game::VsGame::CardMgr::initDraw(void)
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
      mr        r31, r3
      li        r0, 0x300
      stw       r0, 0xF8(r3)
      lwz       r30, 0xF8(r3)
      mulli     r3, r30, 0xC
      addi      r3, r3, 0x10
      bl        -0x2139F0
      lis       r4, 0x8012
      mr        r7, r30
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x175FC4
      stw       r3, 0xFC(r31)
      lwz       r30, 0xF8(r31)
      mulli     r3, r30, 0xC
      addi      r3, r3, 0x10
      bl        -0x213A1C
      lis       r4, 0x8012
      mr        r7, r30
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x175FF0
      lfs       f2, -0x3F24(r2)
      lfs       f1, -0x3EC8(r2)
      lfs       f0, -0x3F88(r2)
      fmuls     f1, f2, f1
      stw       r3, 0x100(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC4
      lfs       f0, -0x3F10(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0xE8

    .loc_0xC4:
      lfs       f0, -0x3F14(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0xE8:
      lfs       f6, -0x3EC0(r2)
      lis       r3, 0x8050
      addi      r0, r3, 0x71A0
      li        r6, 0x180
      fdivs     f8, f6, f0
      lfs       f5, -0x3F18(r2)
      lfd       f4, -0x3F78(r2)
      li        r5, 0
      lfs       f3, -0x3F7C(r2)
      li        r4, 0
      fneg      f7, f6
      lfs       f2, -0x3EBC(r2)
      lfs       f1, -0x3F88(r2)
      li        r7, 0xC
      lfs       f0, -0x3F14(r2)
      lis       r3, 0x4330
      mtctr     r6

    .loc_0x12C:
      xoris     r6, r5, 0x8000
      stw       r3, 0x10(r1)
      stw       r6, 0x14(r1)
      lfd       f9, 0x10(r1)
      fsubs     f9, f9, f4
      fmuls     f9, f5, f9
      fdivs     f9, f9, f3
      fmuls     f9, f9, f2
      fmr       f10, f9
      fcmpo     cr0, f9, f1
      bge-      .loc_0x15C
      fneg      f10, f9

    .loc_0x15C:
      fmuls     f10, f10, f0
      fcmpo     cr0, f9, f1
      fctiwz    f10, f10
      stfd      f10, 0x8(r1)
      lwz       r6, 0xC(r1)
      rlwinm    r6,r6,3,18,28
      add       r6, r0, r6
      lfs       f10, 0x4(r6)
      fmuls     f31, f8, f10
      bge-      .loc_0x1B0
      lfs       f10, -0x3F10(r2)
      lis       r6, 0x8050
      addi      r6, r6, 0x71A0
      fmuls     f10, f9, f10
      fctiwz    f10, f10
      stfd      f10, 0x18(r1)
      lwz       r8, 0x1C(r1)
      rlwinm    r8,r8,3,18,28
      lfsx      f10, r6, r8
      fneg      f10, f10
      b         .loc_0x1D0

    .loc_0x1B0:
      fmuls     f10, f9, f0
      lis       r6, 0x8050
      addi      r6, r6, 0x71A0
      fctiwz    f10, f10
      stfd      f10, 0x20(r1)
      lwz       r8, 0x24(r1)
      rlwinm    r8,r8,3,18,28
      lfsx      f10, r6, r8

    .loc_0x1D0:
      lwz       r6, 0xFC(r31)
      fmuls     f13, f8, f10
      fmr       f10, f9
      add       r6, r6, r4
      fcmpo     cr0, f9, f1
      stfs      f7, 0x0(r6)
      stfs      f13, 0x4(r6)
      stfs      f31, 0x8(r6)
      bge-      .loc_0x1F8
      fneg      f10, f9

    .loc_0x1F8:
      fmuls     f10, f10, f0
      fcmpo     cr0, f9, f1
      fctiwz    f10, f10
      stfd      f10, 0x28(r1)
      lwz       r6, 0x2C(r1)
      rlwinm    r6,r6,3,18,28
      add       r6, r0, r6
      lfs       f11, 0x4(r6)
      bge-      .loc_0x248
      lfs       f10, -0x3F10(r2)
      lis       r6, 0x8050
      addi      r6, r6, 0x71A0
      fmuls     f10, f9, f10
      fctiwz    f10, f10
      stfd      f10, 0x30(r1)
      lwz       r8, 0x34(r1)
      rlwinm    r8,r8,3,18,28
      lfsx      f10, r6, r8
      fneg      f10, f10
      b         .loc_0x268

    .loc_0x248:
      fmuls     f10, f9, f0
      lis       r6, 0x8050
      addi      r6, r6, 0x71A0
      fctiwz    f10, f10
      stfd      f10, 0x38(r1)
      lwz       r8, 0x3C(r1)
      rlwinm    r8,r8,3,18,28
      lfsx      f10, r6, r8

    .loc_0x268:
      lwz       r6, 0x100(r31)
      fmr       f12, f9
      fcmpo     cr0, f9, f1
      add       r6, r6, r4
      stfs      f1, 0x0(r6)
      stfs      f10, 0x4(r6)
      stfs      f11, 0x8(r6)
      lwz       r6, 0xFC(r31)
      add       r6, r6, r7
      stfs      f6, 0x0(r6)
      stfs      f13, 0x4(r6)
      stfs      f31, 0x8(r6)
      bge-      .loc_0x2A0
      fneg      f12, f9

    .loc_0x2A0:
      fmuls     f10, f12, f0
      fcmpo     cr0, f9, f1
      fctiwz    f10, f10
      stfd      f10, 0x40(r1)
      lwz       r6, 0x44(r1)
      rlwinm    r6,r6,3,18,28
      add       r6, r0, r6
      lfs       f11, 0x4(r6)
      bge-      .loc_0x2F0
      lfs       f10, -0x3F10(r2)
      lis       r6, 0x8050
      addi      r6, r6, 0x71A0
      fmuls     f9, f9, f10
      fctiwz    f9, f9
      stfd      f9, 0x48(r1)
      lwz       r8, 0x4C(r1)
      rlwinm    r8,r8,3,18,28
      lfsx      f9, r6, r8
      fneg      f9, f9
      b         .loc_0x310

    .loc_0x2F0:
      fmuls     f9, f9, f0
      lis       r6, 0x8050
      addi      r6, r6, 0x71A0
      fctiwz    f9, f9
      stfd      f9, 0x50(r1)
      lwz       r8, 0x54(r1)
      rlwinm    r8,r8,3,18,28
      lfsx      f9, r6, r8

    .loc_0x310:
      lwz       r6, 0x100(r31)
      addi      r4, r4, 0x18
      addi      r5, r5, 0x1
      add       r6, r6, r7
      addi      r7, r7, 0x18
      stfs      f1, 0x0(r6)
      stfs      f9, 0x4(r6)
      stfs      f11, 0x8(r6)
      bdnz+     .loc_0x12C
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
 * Address:	........
 * Size:	000020
 */
void Game::VsGame::CardMgr::vert((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void Game::VsGame::CardMgr::norm((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80237CBC
 * Size:	000E4C
 */
void drawSlot__Q34Game6VsGame7CardMgrFR8GraphicsR10Vector3<float>
RQ44Game6VsGame7CardMgr11SlotMachine(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x230(r1)
      mflr      r0
      stw       r0, 0x234(r1)
      stfd      f31, 0x220(r1)
      psq_st    f31,0x228(r1),0,0
      stfd      f30, 0x210(r1)
      psq_st    f30,0x218(r1),0,0
      stfd      f29, 0x200(r1)
      psq_st    f29,0x208(r1),0,0
      stfd      f28, 0x1F0(r1)
      psq_st    f28,0x1F8(r1),0,0
      stfd      f27, 0x1E0(r1)
      psq_st    f27,0x1E8(r1),0,0
      stfd      f26, 0x1D0(r1)
      psq_st    f26,0x1D8(r1),0,0
      stfd      f25, 0x1C0(r1)
      psq_st    f25,0x1C8(r1),0,0
      stfd      f24, 0x1B0(r1)
      psq_st    f24,0x1B8(r1),0,0
      stfd      f23, 0x1A0(r1)
      psq_st    f23,0x1A8(r1),0,0
      stfd      f22, 0x190(r1)
      psq_st    f22,0x198(r1),0,0
      stfd      f21, 0x180(r1)
      psq_st    f21,0x188(r1),0,0
      stfd      f20, 0x170(r1)
      psq_st    f20,0x178(r1),0,0
      stfd      f19, 0x160(r1)
      psq_st    f19,0x168(r1),0,0
      stfd      f18, 0x150(r1)
      psq_st    f18,0x158(r1),0,0
      stfd      f17, 0x140(r1)
      psq_st    f17,0x148(r1),0,0
      stfd      f16, 0x130(r1)
      psq_st    f16,0x138(r1),0,0
      stfd      f15, 0x120(r1)
      psq_st    f15,0x128(r1),0,0
      stmw      r21, 0xF4(r1)
      mr        r22, r5
      mr        r24, r4
      lfs       f1, 0x0(r5)
      mr        r21, r3
      mr        r23, r6
      mr        r3, r24
      stfs      f1, 0x44(r1)
      li        r4, 0
      lfs       f0, 0x4(r5)
      stfs      f0, 0x48(r1)
      lfs       f0, 0x8(r5)
      stfs      f0, 0x4C(r1)
      lfs       f0, 0x34(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x44(r1)
      lfs       f15, 0x0(r6)
      bl        0x1EDA88
      li        r5, 0xFA
      li        r0, 0xFF
      stb       r5, 0x84(r24)
      li        r3, 0x28
      li        r4, 0
      stb       r5, 0x85(r24)
      stb       r5, 0x86(r24)
      stb       r0, 0x87(r24)
      bl        -0x1522D8
      addi      r3, r24, 0xBC
      lwz       r12, 0xBC(r24)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f1, -0x3EA8(r2)
      addi      r26, r24, 0x13C
      lfs       f0, -0x3F88(r2)
      addi      r3, r1, 0x80
      fadds     f1, f15, f1
      addi      r4, r1, 0x44
      stfs      f0, 0x3C(r1)
      addi      r5, r1, 0x38
      stfs      f1, 0x38(r1)
      stfs      f0, 0x40(r1)
      bl        0x1F0A90
      mr        r3, r26
      addi      r4, r1, 0x80
      addi      r5, r1, 0xB0
      bl        -0x14DB08
      addi      r3, r1, 0xB0
      li        r4, 0
      bl        -0x14E89C
      addi      r3, r1, 0xB0
      li        r4, 0
      bl        -0x14E858
      li        r3, 0x1
      bl        -0x14F270
      li        r3, 0
      li        r4, 0xF
      li        r5, 0x8
      li        r6, 0xA
      li        r7, 0xF
      bl        -0x14F938
      li        r3, 0
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        -0x14F8CC
      li        r3, 0
      li        r4, 0x7
      li        r5, 0x4
      li        r6, 0x5
      li        r7, 0x7
      bl        -0x14F928
      li        r3, 0
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        -0x14F898
      li        r3, 0
      li        r4, 0
      li        r5, 0
      li        r6, 0x4
      bl        -0x14F488
      li        r3, 0x1
      bl        -0x151048
      li        r3, 0
      li        r4, 0x1
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0x2
      li        r9, 0x1
      bl        -0x15102C
      li        r3, 0x2
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      li        r9, 0x2
      bl        -0x15104C
      lwz       r0, -0x3EB8(r2)
      addi      r4, r1, 0x18
      li        r3, 0x4
      stw       r0, 0x18(r1)
      bl        -0x15127C
      lwz       r0, -0x3EB4(r2)
      addi      r4, r1, 0x14
      li        r3, 0x4
      stw       r0, 0x14(r1)
      bl        -0x1511A0
      lwz       r3, 0x108(r21)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x108(r21)
      mr        r4, r26
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      bl        -0x153874
      li        r3, 0x9
      li        r4, 0x1
      bl        -0x153CCC
      li        r3, 0xA
      li        r4, 0x1
      bl        -0x153CD8
      li        r3, 0xD
      li        r4, 0x1
      bl        -0x153CE4
      li        r3, 0
      li        r4, 0x9
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x153878
      li        r3, 0
      li        r4, 0xA
      li        r5, 0
      li        r6, 0x4
      li        r7, 0
      bl        -0x153890
      li        r3, 0
      li        r4, 0xD
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x1538A8
      li        r3, 0x1
      li        r4, 0x4
      li        r5, 0x5
      li        r6, 0xF
      bl        -0x14EEEC
      li        r3, 0x1
      bl        -0x14EEA0
      li        r3, 0
      li        r4, 0x1
      li        r5, 0
      bl        -0x14EE58
      li        r3, 0x1
      li        r4, 0x1
      li        r5, 0x1
      bl        -0x14EE68
      li        r3, 0
      bl        -0x14E9DC
      li        r3, 0x1
      bl        -0x153060
      li        r3, 0
      li        r4, 0x1
      li        r5, 0xC
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        -0x1532FC
      li        r3, 0x2
      bl        -0x152478
      li        r28, 0
      lfd       f27, -0x3F78(r2)
      lfs       f28, -0x3EBC(r2)
      mr        r27, r28
      lfs       f30, -0x3F88(r2)
      li        r25, 0
      lfs       f29, -0x3F0C(r2)
      lis       r30, 0x4330
      lis       r31, 0xCC01

    .loc_0x38C:
      lwz       r3, 0x4(r21)
      li        r4, 0
      lwzx      r3, r3, r28
      bl        -0x204A24
      li        r24, 0
      mr        r29, r27

    .loc_0x3A4:
      addi      r0, r24, 0x1
      stw       r30, 0xE0(r1)
      xoris     r0, r0, 0x8000
      li        r3, 0x98
      stw       r0, 0xE4(r1)
      li        r4, 0
      li        r5, 0x4
      lfd       f0, 0xE0(r1)
      fsubs     f0, f0, f27
      fmuls     f31, f0, f28
      bl        -0x152700
      lwz       r3, 0xF8(r21)
      addi      r6, r29, 0x1
      lwz       r4, 0xFC(r21)
      addi      r5, r29, 0x2
      divw      r0, r29, r3
      mullw     r0, r0, r3
      sub       r0, r29, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f2, 0x8(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0x100(r21)
      divw      r0, r29, r3
      mullw     r0, r0, r3
      sub       r0, r29, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f2, 0x8(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      stfs      f30, -0x8000(r31)
      stfs      f31, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0xFC(r21)
      divw      r0, r6, r3
      mullw     r0, r0, r3
      sub       r0, r6, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f2, 0x8(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0x100(r21)
      divw      r0, r6, r3
      mullw     r0, r0, r3
      sub       r0, r6, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f2, 0x8(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      stfs      f29, -0x8000(r31)
      stfs      f31, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0xFC(r21)
      divw      r0, r5, r3
      mullw     r0, r0, r3
      sub       r0, r5, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f2, 0x8(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0x100(r21)
      divw      r0, r5, r3
      mullw     r0, r0, r3
      sub       r0, r5, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f3, 0x8(r3)
      addi      r5, r29, 0x3
      lfs       f2, 0x4(r3)
      addi      r24, r24, 0x1
      lfs       f0, 0x0(r3)
      fadds     f1, f31, f28
      cmpwi     r24, 0x20
      addi      r29, r29, 0x2
      stfs      f0, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      stfs      f3, -0x8000(r31)
      stfs      f30, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0xFC(r21)
      divw      r0, r5, r3
      mullw     r0, r0, r3
      sub       r0, r5, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f3, 0x8(r3)
      lfs       f2, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      stfs      f3, -0x8000(r31)
      lwz       r3, 0xF8(r21)
      lwz       r4, 0x100(r21)
      divw      r0, r5, r3
      mullw     r0, r0, r3
      sub       r0, r5, r0
      mulli     r0, r0, 0xC
      add       r3, r4, r0
      lfs       f3, 0x8(r3)
      lfs       f2, 0x4(r3)
      lfs       f0, 0x0(r3)
      stfs      f0, -0x8000(r31)
      stfs      f2, -0x8000(r31)
      stfs      f3, -0x8000(r31)
      stfs      f29, -0x8000(r31)
      stfs      f1, -0x8000(r31)
      blt+      .loc_0x3A4
      addi      r25, r25, 0x1
      addi      r27, r27, 0x40
      cmpwi     r25, 0xC
      addi      r28, r28, 0x4
      blt+      .loc_0x38C
      lwz       r0, 0x38(r23)
      cmpwi     r0, 0x1
      bne-      .loc_0x5DC
      mr        r3, r23
      bl        0x8C4
      b         .loc_0x5EC

    .loc_0x5DC:
      cmpwi     r0, 0x2
      bne-      .loc_0x5EC
      mr        r3, r23
      bl        0xAA0

    .loc_0x5EC:
      lwz       r0, 0x38(r23)
      cmpwi     r0, 0
      beq-      .loc_0xC18
      lbz       r0, 0x51(r23)
      cmplwi    r0, 0
      beq-      .loc_0xC18
      lis       r3, 0x8051
      lfs       f2, 0x44(r1)
      addi      r31, r3, 0x41FC
      lfs       f1, 0x48(r1)
      lwz       r0, 0x1B8(r31)
      lfs       f0, 0x4C(r1)
      cmpwi     r0, 0
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      beq-      .loc_0x658
      lfs       f2, 0x0(r22)
      lfs       f1, -0x3F24(r2)
      stfs      f2, 0x2C(r1)
      lfs       f0, 0x4(r22)
      stfs      f0, 0x30(r1)
      lfs       f0, 0x8(r22)
      stfs      f0, 0x34(r1)
      lfs       f0, 0x34(r23)
      fmadds    f0, f1, f0, f2
      stfs      f0, 0x2C(r1)

    .loc_0x658:
      lwz       r0, -0x3EB0(r2)
      addi      r4, r1, 0x10
      li        r3, 0x4
      stw       r0, 0x10(r1)
      bl        -0x1515B0
      li        r3, 0
      li        r4, 0x1
      li        r5, 0
      bl        -0x14F1B0
      lfs       f1, 0x40(r23)
      addi      r3, r1, 0x50
      lfs       f0, -0x3F88(r2)
      addi      r4, r1, 0x2C
      stfs      f1, 0x28(r1)
      addi      r5, r1, 0x20
      stfs      f0, 0x20(r1)
      stfs      f0, 0x24(r1)
      bl        0x1F0530
      mr        r3, r26
      addi      r4, r1, 0x50
      addi      r5, r1, 0xB0
      bl        -0x14E068
      addi      r3, r1, 0xB0
      li        r4, 0
      bl        -0x14EDFC
      addi      r3, r1, 0xB0
      li        r4, 0
      bl        -0x14EDB8
      lwz       r6, 0x4C(r23)
      li        r0, 0
      cmpwi     r6, 0
      blt-      .loc_0x6E4
      cmpwi     r6, 0xC
      bge-      .loc_0x6E4
      li        r0, 0x1

    .loc_0x6E4:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x704
      lis       r3, 0x8048
      li        r4, 0x71A
      addi      r3, r3, 0x3C4C
      subi      r5, r2, 0x3EA4
      crclr     6, 0x6
      bl        -0x20DD7C

    .loc_0x704:
      lwz       r0, 0x4C(r23)
      li        r4, 0
      lwz       r3, 0x4(r21)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        -0x204DA4
      li        r3, 0
      li        r4, 0
      bl        -0x14FF64
      li        r3, 0x2
      bl        -0x14F830
      li        r3, 0
      li        r4, 0
      li        r5, 0
      li        r6, 0x4
      bl        -0x14F9E0
      li        r3, 0x1
      li        r4, 0x1
      li        r5, 0x1
      li        r6, 0x4
      bl        -0x14F9F4
      lwz       r3, 0x14(r21)
      li        r4, 0x1
      bl        -0x204DEC
      li        r3, 0x2
      bl        -0x153488
      li        r3, 0
      li        r4, 0x1
      li        r5, 0x4
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        -0x153724
      li        r3, 0x1
      li        r4, 0x1
      li        r5, 0x5
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        -0x153740
      bl        -0x153D90
      li        r3, 0x9
      li        r4, 0x1
      bl        -0x1541E8
      li        r3, 0xA
      li        r4, 0x1
      bl        -0x1541F4
      li        r3, 0xD
      li        r4, 0x1
      bl        -0x154200
      li        r3, 0xE
      li        r4, 0x1
      bl        -0x15420C
      li        r3, 0
      li        r4, 0x9
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x153DA0
      li        r3, 0
      li        r4, 0xA
      li        r5, 0
      li        r6, 0x4
      li        r7, 0
      bl        -0x153DB8
      li        r3, 0
      li        r4, 0xD
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x153DD0
      li        r3, 0
      li        r4, 0xE
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x153DE8
      li        r3, 0x1
      li        r4, 0xF
      li        r5, 0x8
      li        r6, 0x2
      li        r7, 0
      bl        -0x150000
      li        r3, 0x1
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        -0x14FF94
      li        r3, 0x1
      li        r4, 0x7
      li        r5, 0x7
      li        r6, 0x7
      li        r7, 0
      bl        -0x14FFF0
      li        r3, 0x1
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        -0x14FF60
      lfs       f2, -0x3F18(r2)
      lfs       f1, 0x6C(r23)
      lfs       f0, -0x3F88(r2)
      fmuls     f2, f2, f1
      fcmpo     cr0, f2, f0
      bge-      .loc_0x8BC
      fneg      f2, f2

    .loc_0x8BC:
      lfs       f0, -0x3F14(r2)
      lis       r3, 0x8050
      addi      r5, r3, 0x71A0
      lfs       f1, -0x3F0C(r2)
      fmuls     f0, f2, f0
      lfd       f2, -0x3EA0(r2)
      addi      r4, r1, 0xC
      li        r3, 0x1
      fctiwz    f0, f0
      stfd      f0, 0xE0(r1)
      lwz       r0, 0xE4(r1)
      rlwinm    r0,r0,3,18,28
      add       r5, r5, r0
      lfs       f0, 0x4(r5)
      fsubs     f0, f1, f0
      fmul      f0, f2, f0
      frsp      f0, f0
      fctiwz    f0, f0
      stfd      f0, 0xE8(r1)
      lwz       r0, 0xEC(r1)
      stb       r0, 0x1F(r1)
      stb       r0, 0x1D(r1)
      stb       r0, 0x1E(r1)
      stb       r0, 0x1C(r1)
      lwz       r0, 0x1C(r1)
      stw       r0, 0xC(r1)
      bl        -0x14FF80
      lfs       f1, 0x68(r23)
      lfs       f0, -0x3F0C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x940
      fsubs     f0, f1, f0
      stfs      f0, 0x68(r23)

    .loc_0x940:
      lfs       f1, 0x6C(r23)
      lfs       f0, -0x3F0C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x958
      fsubs     f0, f1, f0
      stfs      f0, 0x6C(r23)

    .loc_0x958:
      lwz       r5, -0x6514(r13)
      li        r3, 0x98
      lfs       f1, 0x68(r23)
      li        r4, 0
      lfs       f0, 0x54(r5)
      li        r5, 0x4
      lfs       f2, -0x3F24(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x68(r23)
      lwz       r6, -0x6514(r13)
      lfs       f0, 0x6C(r23)
      lfs       f1, 0x54(r6)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x6C(r23)
      lfs       f16, 0x44(r23)
      fneg      f15, f16
      bl        -0x152CCC
      lis       r4, 0xCC01
      lfs       f2, -0x3F88(r2)
      stfs      f15, -0x8000(r4)
      li        r3, 0x1
      lfs       f1, -0x3F0C(r2)
      stfs      f15, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      lfs       f0, 0x68(r23)
      stfs      f0, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f16, -0x8000(r4)
      stfs      f15, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      lfs       f0, 0x68(r23)
      fadds     f0, f1, f0
      stfs      f0, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f15, -0x8000(r4)
      stfs      f16, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      lfs       f0, 0x68(r23)
      stfs      f0, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f16, -0x8000(r4)
      stfs      f16, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f2, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      lfs       f0, 0x68(r23)
      fadds     f0, f1, f0
      stfs      f0, -0x8000(r4)
      stfs      f1, -0x8000(r4)
      bl        -0x14FB68
      li        r3, 0x1
      bl        -0x15378C
      bl        -0x15405C
      li        r3, 0x9
      li        r4, 0x1
      bl        -0x1544B4
      li        r3, 0xA
      li        r4, 0x1
      bl        -0x1544C0
      li        r3, 0xD
      li        r4, 0x1
      bl        -0x1544CC
      li        r3, 0
      li        r4, 0x9
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x154060
      li        r3, 0
      li        r4, 0xA
      li        r5, 0
      li        r6, 0x4
      li        r7, 0
      bl        -0x154078
      li        r3, 0
      li        r4, 0xD
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        -0x154090
      lwz       r0, 0x1B8(r31)
      cmpwi     r0, 0
      bne-      .loc_0xC18
      lwz       r0, 0x38(r23)
      cmpwi     r0, 0
      beq-      .loc_0xC18
      lbz       r0, 0x51(r23)
      cmplwi    r0, 0
      beq-      .loc_0xC18
      lwz       r3, 0x8(r21)
      li        r4, 0
      bl        -0x205198
      lfs       f1, -0x3F34(r2)
      li        r3, 0x98
      lfs       f0, 0x48(r23)
      li        r4, 0
      lfs       f29, -0x3F88(r2)
      li        r5, 0x4
      fmuls     f6, f1, f0
      lfs       f1, -0x3E98(r2)
      lfs       f2, -0x3E90(r2)
      fmr       f31, f29
      fmr       f0, f29
      lfs       f3, -0x3E94(r2)
      fmuls     f5, f1, f6
      lfs       f1, -0x3E8C(r2)
      fmr       f25, f29
      fmr       f23, f29
      fneg      f4, f5
      fadds     f26, f5, f3
      fneg      f5, f6
      fadds     f3, f4, f3
      fmr       f24, f26
      fadds     f27, f5, f2
      fadds     f28, f3, f1
      fadds     f29, f29, f29
      fadds     f30, f6, f2
      fadds     f31, f31, f0
      fadds     f26, f26, f1
      fadds     f25, f25, f0
      fadds     f24, f24, f1
      fadds     f23, f23, f0
      bl        -0x152EBC
      lis       r3, 0xCC01
      lfs       f1, -0x3F88(r2)
      stfs      f27, -0x8000(r3)
      lfs       f0, -0x3F0C(r2)
      stfs      f28, -0x8000(r3)
      stfs      f29, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f30, -0x8000(r3)
      stfs      f28, -0x8000(r3)
      stfs      f31, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f27, -0x8000(r3)
      stfs      f26, -0x8000(r3)
      stfs      f25, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f30, -0x8000(r3)
      stfs      f24, -0x8000(r3)
      stfs      f23, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f1, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stfs      f0, -0x8000(r3)

    .loc_0xC18:
      lwz       r0, -0x3EAC(r2)
      addi      r4, r1, 0x8
      li        r3, 0x4
      stw       r0, 0x8(r1)
      bl        -0x151B70
      li        r3, 0
      li        r4, 0x1
      li        r5, 0
      bl        -0x14F770
      mr        r3, r26
      li        r4, 0
      bl        -0x14F388
      mr        r3, r26
      li        r4, 0
      bl        -0x14F344
      lwz       r0, 0x5C(r23)
      cmpwi     r0, 0
      bne-      .loc_0xC70
      lfs       f2, -0x3F48(r2)
      lfs       f3, -0x3F44(r2)
      lfs       f23, -0x3F88(r2)
      b         .loc_0xC7C

    .loc_0xC70:
      lfs       f2, -0x3F48(r2)
      lfs       f3, -0x3F40(r2)
      lfs       f23, -0x3F88(r2)

    .loc_0xC7C:
      lfs       f0, -0x3F38(r2)
      li        r24, 0
      lfs       f1, -0x3F3C(r2)
      lis       r22, 0xCC01
      fsubs     f24, f2, f0
      lfs       f0, -0x3F30(r2)
      lfs       f29, -0x3F88(r2)
      fsubs     f25, f3, f1
      fneg      f15, f0
      lfs       f30, -0x3F0C(r2)
      fadds     f24, f24, f29
      lfs       f31, -0x3E88(r2)
      fadds     f27, f15, f25

    .loc_0xCB0:
      lwz       r0, 0x1C(r23)
      lwz       r3, 0x10(r21)
      cmpw      r24, r0
      bge-      .loc_0xCC4
      lwz       r3, 0xC(r21)

    .loc_0xCC4:
      li        r4, 0
      bl        -0x205354
      lfs       f28, -0x3F88(r2)
      fadds     f26, f15, f24
      lfs       f22, -0x3F30(r2)
      li        r3, 0x98
      fmr       f21, f28
      li        r4, 0
      fmr       f20, f22
      fmr       f19, f28
      li        r5, 0x4
      fmr       f16, f28
      fmr       f18, f22
      fmr       f17, f22
      fadds     f28, f28, f23
      fadds     f22, f22, f24
      fadds     f21, f21, f23
      fadds     f20, f20, f25
      fadds     f19, f19, f23
      fadds     f18, f18, f24
      fadds     f17, f17, f25
      fadds     f16, f16, f23
      bl        -0x153050
      stfs      f26, -0x8000(r22)
      addi      r24, r24, 0x1
      cmpwi     r24, 0x4
      fadds     f24, f24, f31
      stfs      f27, -0x8000(r22)
      stfs      f28, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f22, -0x8000(r22)
      stfs      f27, -0x8000(r22)
      stfs      f21, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f26, -0x8000(r22)
      stfs      f20, -0x8000(r22)
      stfs      f19, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f18, -0x8000(r22)
      stfs      f17, -0x8000(r22)
      stfs      f16, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f29, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      stfs      f30, -0x8000(r22)
      blt+      .loc_0xCB0
      psq_l     f31,0x228(r1),0,0
      lfd       f31, 0x220(r1)
      psq_l     f30,0x218(r1),0,0
      lfd       f30, 0x210(r1)
      psq_l     f29,0x208(r1),0,0
      lfd       f29, 0x200(r1)
      psq_l     f28,0x1F8(r1),0,0
      lfd       f28, 0x1F0(r1)
      psq_l     f27,0x1E8(r1),0,0
      lfd       f27, 0x1E0(r1)
      psq_l     f26,0x1D8(r1),0,0
      lfd       f26, 0x1D0(r1)
      psq_l     f25,0x1C8(r1),0,0
      lfd       f25, 0x1C0(r1)
      psq_l     f24,0x1B8(r1),0,0
      lfd       f24, 0x1B0(r1)
      psq_l     f23,0x1A8(r1),0,0
      lfd       f23, 0x1A0(r1)
      psq_l     f22,0x198(r1),0,0
      lfd       f22, 0x190(r1)
      psq_l     f21,0x188(r1),0,0
      lfd       f21, 0x180(r1)
      psq_l     f20,0x178(r1),0,0
      lfd       f20, 0x170(r1)
      psq_l     f19,0x168(r1),0,0
      lfd       f19, 0x160(r1)
      psq_l     f18,0x158(r1),0,0
      lfd       f18, 0x150(r1)
      psq_l     f17,0x148(r1),0,0
      lfd       f17, 0x140(r1)
      psq_l     f16,0x138(r1),0,0
      lfd       f16, 0x130(r1)
      psq_l     f15,0x128(r1),0,0
      lfd       f15, 0x120(r1)
      lmw       r21, 0xF4(r1)
      lwz       r0, 0x234(r1)
      mtlr      r0
      addi      r1, r1, 0x230
      blr
    */
}

/*
 * --INFO--
 * Address:	80238B08
 * Size:	000004
 */
void LightObj::update()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80238B0C
 * Size:	000028
 */
void Game::VsGame::CardMgr::SlotMachine::startZoomIn(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x3EC0(r2)
      li        r4, 0x1
      lfs       f0, -0x3F88(r2)
      li        r0, 0
      stfs      f1, 0x44(r3)
      stfs      f0, 0x40(r3)
      stw       r4, 0x38(r3)
      stfs      f0, 0x3C(r3)
      stb       r0, 0x50(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80238B34
 * Size:	000020
 */
void Game::VsGame::CardMgr::SlotMachine::startZoomUse(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x3F88(r2)
      li        r0, 0x2
      lfs       f0, -0x3F28(r2)
      stfs      f1, 0x40(r3)
      stw       r0, 0x38(r3)
      stfs      f1, 0x3C(r3)
      stfs      f0, 0x48(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80238B54
 * Size:	0001F0
 */
void Game::VsGame::CardMgr::SlotMachine::updateZoomIn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      lbz       r0, 0x50(r3)
      cmplwi    r0, 0
      bne-      .loc_0x64
      lwz       r4, -0x6514(r13)
      lfs       f2, -0x3EEC(r2)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x3C(r3)
      lfs       f4, -0x3E84(r2)
      fmadds    f3, f2, f1, f0
      lfs       f1, -0x3EC0(r2)
      lfs       f2, -0x3F88(r2)
      lfs       f0, -0x3F0C(r2)
      stfs      f3, 0x3C(r3)
      lfs       f3, 0x3C(r3)
      fmadds    f1, f4, f3, f1
      stfs      f1, 0x44(r3)
      stfs      f2, 0x48(r3)
      lfs       f1, 0x3C(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x188
      stfs      f2, 0x3C(r3)
      li        r0, 0x1
      stb       r0, 0x50(r3)
      b         .loc_0x188

    .loc_0x64:
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x3C(r3)
      lfs       f1, 0x54(r4)
      lfs       f0, -0x3F0C(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x3C(r3)
      lfs       f1, 0x3C(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x90
      fsubs     f0, f1, f0
      stfs      f0, 0x3C(r3)

    .loc_0x90:
      lfs       f2, -0x3F18(r2)
      lfs       f1, 0x3C(r3)
      lfs       f0, -0x3F88(r2)
      fmuls     f1, f2, f1
      lfs       f2, -0x3EFC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xD8
      lfs       f0, -0x3F10(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0xFC

    .loc_0xD8:
      lfs       f0, -0x3F14(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0xFC:
      lfs       f0, -0x3F28(r2)
      lfs       f3, -0x3F18(r2)
      fmadds    f1, f2, f1, f0
      lfs       f4, -0x3F34(r2)
      lfs       f0, -0x3F88(r2)
      lfs       f2, -0x3EFC(r2)
      stfs      f1, 0x44(r3)
      lfs       f1, 0x3C(r3)
      fmuls     f1, f3, f1
      fmuls     f1, f4, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x158
      lfs       f0, -0x3F10(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0x17C

    .loc_0x158:
      lfs       f0, -0x3F14(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0x17C:
      lfs       f0, -0x3F28(r2)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x48(r3)

    .loc_0x188:
      lfs       f2, -0x3F18(r2)
      lfs       f1, 0x3C(r3)
      lfs       f0, -0x3F88(r2)
      fmuls     f2, f2, f1
      fcmpo     cr0, f2, f0
      bge-      .loc_0x1A4
      fneg      f2, f2

    .loc_0x1A4:
      lfs       f0, -0x3F14(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      lfs       f1, -0x3E84(r2)
      fmuls     f0, f2, f0
      lfs       f2, -0x3E7C(r2)
      lfs       f3, -0x3E80(r2)
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r4, r0
      lfs       f0, 0x4(r4)
      fmuls     f0, f1, f0
      fmuls     f0, f2, f0
      fmuls     f0, f3, f0
      stfs      f0, 0x40(r3)
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80238D44
 * Size:	000128
 */
void Game::VsGame::CardMgr::SlotMachine::updateZoomUse(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lfs       f3, -0x3ED8(r2)
      lwz       r4, -0x6514(r13)
      lfs       f1, 0x3C(r3)
      lfs       f2, 0x54(r4)
      lfs       f0, -0x3F0C(r2)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x3C(r3)
      lfs       f1, 0x3C(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x34
      fsubs     f0, f1, f0
      stfs      f0, 0x3C(r3)

    .loc_0x34:
      lfs       f2, -0x3F18(r2)
      lfs       f1, 0x3C(r3)
      lfs       f0, -0x3F88(r2)
      fmuls     f2, f2, f1
      lfs       f1, -0x3EFC(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x7C
      lfs       f0, -0x3F10(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xA0

    .loc_0x7C:
      lfs       f0, -0x3F14(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xA0:
      lfs       f3, -0x3F28(r2)
      lfs       f2, -0x3F18(r2)
      fmadds    f1, f1, f0, f3
      lfs       f0, -0x3F88(r2)
      stfs      f1, 0x44(r3)
      lfs       f1, 0x3C(r3)
      fnmsubs   f1, f3, f1, f3
      stfs      f1, 0x48(r3)
      lfs       f1, 0x3C(r3)
      fmuls     f2, f2, f1
      fcmpo     cr0, f2, f0
      bge-      .loc_0xD4
      fneg      f2, f2

    .loc_0xD4:
      lfs       f0, -0x3F14(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      lfs       f1, -0x3F24(r2)
      fmuls     f0, f2, f0
      lfs       f2, -0x3E78(r2)
      lfs       f3, -0x3E7C(r2)
      lfs       f4, -0x3E80(r2)
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r4, r0
      lfs       f0, 0x4(r4)
      fmadds    f0, f1, f0, f1
      fmuls     f0, f2, f0
      fmuls     f0, f3, f0
      fmuls     f0, f4, f0
      stfs      f0, 0x40(r3)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80238E6C
 * Size:	000008
 */
void efx2d::TBase::setGroup((unsigned char))
{
    /*
    .loc_0x0:
      stb       r4, 0x5(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80238E74
 * Size:	00000C
 */
void efx2d::ArgScaleColorColor::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      addi      r3, r3, 0x3CBC
      blr
    */
}

/*
 * --INFO--
 * Address:	80238E80
 * Size:	000008
 */
void efx2d::Arg::getName(void)
{
    /*
    .loc_0x0:
      subi      r3, r2, 0x3E74
      blr
    */
}

/*
 * --INFO--
 * Address:	80238E88
 * Size:	000028
 */
void __sinit_vsCardMgr_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x69D8(r13)
      stfsu     f0, 0x1470(r3)
      stfs      f0, -0x69D4(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
