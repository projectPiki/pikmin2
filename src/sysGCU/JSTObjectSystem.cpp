

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Game::P2JST::_Print((char*, ...))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80430954
 * Size:	0000A0
 */
void Game::P2JST::ObjectSystem::__ct((char const*, Game::MoviePlayer*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x804A
      li        r8, 0
      stw       r0, 0x24(r1)
      addi      r0, r6, 0x3680
      lis       r6, 0x804F
      addi      r9, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r3
      mr        r7, r31
      lis       r3, 0x804A
      stw       r0, 0x0(r31)
      addi      r0, r3, 0x3598
      li        r7, -0x1
      lis       r3, 0x804F
      stw       r0, 0x0(r31)
      subi      r0, r6, 0x3F10
      subi      r6, r3, 0x3D2C
      addi      r3, r31, 0x20
      stw       r0, 0x4(r31)
      addi      r0, r6, 0x50
      stw       r5, 0x8(r31)
      stw       r4, 0xC(r31)
      mr        r4, r9
      stw       r8, 0x10(r31)
      stw       r7, 0x14(r31)
      stw       r8, 0x18(r31)
      stw       r8, 0x1C(r31)
      stw       r6, 0x0(r31)
      stw       r0, 0x4(r31)
      lbz       r0, -0x6488(r13)
      stb       r0, 0x8(r1)
      bl        -0x409554
      lwz       r0, 0x24(r1)
      mr        r3, r31
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget33TList_pointer<JStage::TObject*> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804309F4
 * Size:	000084
 */
void Game::P2JST::ObjectSystem::__dt(void)
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
      beq-      .loc_0x68
      lis       r4, 0x804F
      subi      r4, r4, 0x3D2C
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x50
      stw       r0, 0x4(r30)
      bl        .loc_0x84
      addic.    r0, r30, 0x20
      beq-      .loc_0x4C
      addi      r3, r30, 0x20
      li        r4, 0
      bl        -0x409598

    .loc_0x4C:
      mr        r3, r30
      li        r4, 0
      bl        -0x3982DC
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x40C9A4

    .loc_0x68:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x84:
    */
}

/*
 * --INFO--
 * Address:	80430A78
 * Size:	0000A8
 */
void Game::P2JST::ObjectSystem::destroyObjectAll(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      li        r31, 0
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      stw       r28, 0x20(r1)
      mr        r28, r3
      addi      r29, r28, 0x28
      stw       r29, 0x10(r1)
      stw       r29, 0xC(r1)
      stw       r29, 0x1C(r1)
      b         .loc_0x7C

    .loc_0x38:
      lwz       r30, 0x4(r29)
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x5C
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      stw       r31, 0x8(r30)
      addi      r3, r1, 0x14
      addi      r4, r28, 0x20
      addi      r5, r1, 0x18
      lwz       r0, 0x4(r29)
      stw       r0, 0x8(r1)
      stw       r0, 0x18(r1)
      bl        -0x4094F4

    .loc_0x7C:
      lwz       r0, 0x24(r28)
      cmplwi    r0, 0
      bne+      .loc_0x38
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
 * Address:	80430B20
 * Size:	0000F4
 */
void Game::P2JST::ObjectSystem::reset(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      addi      r31, r3, 0x28
      stw       r30, 0x28(r1)
      lwz       r0, 0x28(r3)
      stw       r31, 0xC(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x24(r1)
      stw       r31, 0x8(r1)
      stw       r31, 0x20(r1)
      stw       r31, 0x1C(r1)
      b         .loc_0xCC

    .loc_0x3C:
      lwz       r3, 0x24(r1)
      lwz       r30, 0x8(r3)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x3
      beq-      .loc_0x7C
      bge-      .loc_0x70
      cmpwi     r3, 0x2
      bge-      .loc_0x94
      b         .loc_0xAC

    .loc_0x70:
      cmpwi     r3, 0x7
      bge-      .loc_0xAC
      b         .loc_0xC0

    .loc_0x7C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC0(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0

    .loc_0x94:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0

    .loc_0xAC:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xC0:
      lwz       r3, 0x24(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x24(r1)

    .loc_0xCC:
      lwz       r0, 0x24(r1)
      cmplw     r0, r31
      stw       r0, 0x18(r1)
      bne+      .loc_0x3C
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
 * Address:	80430C14
 * Size:	0000AC
 */
void Game::P2JST::ObjectSystem::entry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      addi      r31, r3, 0x28
      stw       r30, 0x28(r1)
      lwz       r0, 0x28(r3)
      stw       r31, 0xC(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x24(r1)
      stw       r31, 0x8(r1)
      stw       r31, 0x20(r1)
      stw       r31, 0x1C(r1)
      b         .loc_0x84

    .loc_0x3C:
      lwz       r3, 0x24(r1)
      lwz       r30, 0x8(r3)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x2
      beq-      .loc_0x64
      b         .loc_0x78

    .loc_0x64:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB0(r12)
      mtctr     r12
      bctrl

    .loc_0x78:
      lwz       r3, 0x24(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x24(r1)

    .loc_0x84:
      lwz       r0, 0x24(r1)
      cmplw     r0, r31
      stw       r0, 0x18(r1)
      bne+      .loc_0x3C
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
 * Address:	80430CC0
 * Size:	0000D4
 */
void Game::P2JST::ObjectSystem::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      addi      r31, r3, 0x28
      stw       r30, 0x28(r1)
      lwz       r0, 0x28(r3)
      stw       r31, 0xC(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x24(r1)
      stw       r31, 0x8(r1)
      stw       r31, 0x20(r1)
      stw       r31, 0x1C(r1)
      b         .loc_0xAC

    .loc_0x3C:
      lwz       r3, 0x24(r1)
      lwz       r30, 0x8(r3)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x3
      beq-      .loc_0x8C
      bge-      .loc_0xA0
      cmpwi     r3, 0x2
      bge-      .loc_0x74
      b         .loc_0xA0
      b         .loc_0xA0

    .loc_0x74:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA0

    .loc_0x8C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC4(r12)
      mtctr     r12
      bctrl

    .loc_0xA0:
      lwz       r3, 0x24(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x24(r1)

    .loc_0xAC:
      lwz       r0, 0x24(r1)
      cmplw     r0, r31
      stw       r0, 0x18(r1)
      bne+      .loc_0x3C
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
 * Address:	80430D94
 * Size:	0000D4
 */
void Game::P2JST::ObjectSystem::start(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      addi      r31, r3, 0x28
      stw       r30, 0x28(r1)
      lwz       r0, 0x28(r3)
      stw       r31, 0xC(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x24(r1)
      stw       r31, 0x8(r1)
      stw       r31, 0x20(r1)
      stw       r31, 0x1C(r1)
      b         .loc_0xAC

    .loc_0x3C:
      lwz       r3, 0x24(r1)
      lwz       r30, 0x8(r3)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x3
      beq-      .loc_0x8C
      bge-      .loc_0xA0
      cmpwi     r3, 0x2
      bge-      .loc_0x74
      b         .loc_0xA0
      b         .loc_0xA0

    .loc_0x74:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA0

    .loc_0x8C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl

    .loc_0xA0:
      lwz       r3, 0x24(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x24(r1)

    .loc_0xAC:
      lwz       r0, 0x24(r1)
      cmplw     r0, r31
      stw       r0, 0x18(r1)
      bne+      .loc_0x3C
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
 * Address:	80430E68
 * Size:	0000D4
 */
void Game::P2JST::ObjectSystem::stop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      addi      r31, r3, 0x28
      stw       r30, 0x28(r1)
      lwz       r0, 0x28(r3)
      stw       r31, 0xC(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x24(r1)
      stw       r31, 0x8(r1)
      stw       r31, 0x20(r1)
      stw       r31, 0x1C(r1)
      b         .loc_0xAC

    .loc_0x3C:
      lwz       r3, 0x24(r1)
      lwz       r30, 0x8(r3)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x3
      beq-      .loc_0x8C
      bge-      .loc_0xA0
      cmpwi     r3, 0x2
      bge-      .loc_0x74
      b         .loc_0xA0
      b         .loc_0xA0

    .loc_0x74:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA0

    .loc_0x8C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xCC(r12)
      mtctr     r12
      bctrl

    .loc_0xA0:
      lwz       r3, 0x24(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x24(r1)

    .loc_0xAC:
      lwz       r0, 0x24(r1)
      cmplw     r0, r31
      stw       r0, 0x18(r1)
      bne+      .loc_0x3C
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
 * Address:	80430F3C
 * Size:	0000FC
 */
void Game::P2JST::ObjectSystem::findObject(const(char const*, JStage::TEObject))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r4
      stw       r30, 0x58(r1)
      addi      r30, r3, 0x28
      lwz       r0, 0x28(r3)
      stw       r5, 0x48(r1)
      stw       r4, 0x4C(r1)
      stw       r5, 0x50(r1)
      stw       r4, 0x54(r1)
      stw       r30, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r30, 0x34(r1)
      stw       r30, 0x38(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x3C(r1)
      stw       r0, 0x40(r1)
      stw       r30, 0xC(r1)
      b         .loc_0x64

    .loc_0x58:
      lwz       r3, 0x40(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x40(r1)

    .loc_0x64:
      lwz       r0, 0x40(r1)
      cmplw     r0, r30
      stw       r0, 0x8(r1)
      beq-      .loc_0xB4
      lwz       r3, 0x40(r1)
      lwz       r3, 0x8(r3)
      cmplwi    r3, 0
      bne-      .loc_0x8C
      li        r0, 0
      b         .loc_0xAC

    .loc_0x8C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      bl        -0x36691C
      cntlzw    r0, r3
      rlwinm    r0,r0,27,5,31

    .loc_0xAC:
      rlwinm.   r0,r0,0,24,31
      beq+      .loc_0x58

    .loc_0xB4:
      lwz       r3, 0x40(r1)
      stw       r30, 0x24(r1)
      cmplw     r3, r30
      stw       r3, 0x44(r1)
      stw       r30, 0x20(r1)
      stw       r30, 0x30(r1)
      stw       r30, 0x2C(r1)
      stw       r3, 0x28(r1)
      beq-      .loc_0xE0
      lwz       r3, 0x8(r3)
      b         .loc_0xE4

    .loc_0xE0:
      li        r3, 0

    .loc_0xE4:
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
 * Address:	80431038
 * Size:	000310
 */
void Game::P2JST::ObjectSystem::JSGFindObject(const(JStage::TObject**,
                                                    char const*,
                                                    JStage::TEObject))
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      stw       r0, 0xB4(r1)
      stmw      r26, 0x98(r1)
      mr        r27, r5
      mr        r28, r6
      mr        r30, r3
      addi      r31, r30, 0x28
      mr        r26, r27
      stw       r28, 0x8C(r1)
      mr        r29, r4
      stw       r27, 0x90(r1)
      stw       r28, 0x84(r1)
      lwz       r0, 0x28(r3)
      stw       r26, 0x88(r1)
      stw       r31, 0x1C(r1)
      stw       r31, 0x18(r1)
      stw       r31, 0x70(r1)
      stw       r31, 0x6C(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x68(r1)
      stw       r0, 0x64(r1)
      stw       r31, 0xC(r1)
      b         .loc_0x70

    .loc_0x64:
      lwz       r3, 0x64(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x64(r1)

    .loc_0x70:
      lwz       r0, 0x64(r1)
      cmplw     r0, r31
      stw       r0, 0x8(r1)
      beq-      .loc_0xC0
      lwz       r3, 0x64(r1)
      lwz       r3, 0x8(r3)
      cmplwi    r3, 0
      bne-      .loc_0x98
      li        r0, 0
      b         .loc_0xB8

    .loc_0x98:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r4, r26
      bl        -0x366A24
      cntlzw    r0, r3
      rlwinm    r0,r0,27,5,31

    .loc_0xB8:
      rlwinm.   r0,r0,0,24,31
      beq+      .loc_0x64

    .loc_0xC0:
      lwz       r3, 0x64(r1)
      stw       r31, 0x2C(r1)
      cmplw     r3, r31
      stw       r3, 0x60(r1)
      stw       r31, 0x28(r1)
      stw       r31, 0x74(r1)
      stw       r31, 0x4C(r1)
      stw       r3, 0x48(r1)
      beq-      .loc_0xEC
      lwz       r0, 0x8(r3)
      b         .loc_0xF0

    .loc_0xEC:
      li        r0, 0

    .loc_0xF0:
      cmplwi    r0, 0
      stw       r0, 0x80(r1)
      beq-      .loc_0x108
      stw       r0, 0x0(r29)
      li        r3, 0
      b         .loc_0x2FC

    .loc_0x108:
      cmpwi     r28, 0x3
      beq-      .loc_0x20C
      bge-      .loc_0x124
      cmpwi     r28, 0x1
      beq-      .loc_0x2A8
      bge-      .loc_0x130
      b         .loc_0x234

    .loc_0x124:
      cmpwi     r28, 0x7
      bge-      .loc_0x234
      b         .loc_0x2A8

    .loc_0x130:
      lbz       r0, 0x0(r27)
      extsb     r0, r0
      cmpwi     r0, 0x40
      bne-      .loc_0x16C
      li        r3, 0xC8
      bl        -0x40D2D8
      mr.       r0, r3
      beq-      .loc_0x164
      lwz       r5, 0x8(r30)
      mr        r4, r27
      li        r6, 0
      bl        0x23340
      mr        r0, r3

    .loc_0x164:
      stw       r0, 0x80(r1)
      b         .loc_0x2A8

    .loc_0x16C:
      cmpwi     r0, 0x2B
      bne-      .loc_0x19C
      li        r3, 0xBC
      bl        -0x40D30C
      mr.       r0, r3
      beq-      .loc_0x194
      lwz       r5, 0x8(r30)
      mr        r4, r27
      bl        0x623C
      mr        r0, r3

    .loc_0x194:
      stw       r0, 0x80(r1)
      b         .loc_0x2A8

    .loc_0x19C:
      cmpwi     r0, 0x2A
      bne-      .loc_0x1E4
      mr        r3, r30
      mr        r4, r27
      bl        0x1D4
      mr.       r26, r3
      beq-      .loc_0x2A8
      li        r3, 0xBC
      bl        -0x40D350
      mr.       r0, r3
      beq-      .loc_0x1DC
      lwz       r5, 0x8(r30)
      mr        r4, r27
      mr        r6, r26
      bl        -0x1464
      mr        r0, r3

    .loc_0x1DC:
      stw       r0, 0x80(r1)
      b         .loc_0x2A8

    .loc_0x1E4:
      li        r3, 0x70
      bl        -0x40D37C
      mr.       r0, r3
      beq-      .loc_0x204
      lwz       r5, 0x8(r30)
      mr        r4, r27
      bl        -0x28D4
      mr        r0, r3

    .loc_0x204:
      stw       r0, 0x80(r1)
      b         .loc_0x2A8

    .loc_0x20C:
      li        r3, 0xC8
      bl        -0x40D3A4
      mr.       r0, r3
      beq-      .loc_0x22C
      lwz       r5, 0x8(r30)
      mr        r4, r27
      bl        -0x1B78
      mr        r0, r3

    .loc_0x22C:
      stw       r0, 0x80(r1)
      b         .loc_0x2A8

    .loc_0x234:
      lwz       r0, 0x28(r30)
      stw       r31, 0x3C(r1)
      stw       r0, 0x44(r1)
      stw       r0, 0x40(r1)
      stw       r0, 0x7C(r1)
      stw       r31, 0x38(r1)
      stw       r31, 0x78(r1)
      stw       r31, 0x5C(r1)
      b         .loc_0x27C

    .loc_0x258:
      lwz       r3, 0x7C(r1)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x7C(r1)
      lwz       r0, 0x0(r3)
      stw       r0, 0x7C(r1)

    .loc_0x27C:
      lwz       r0, 0x7C(r1)
      cmplw     r0, r31
      stw       r0, 0x58(r1)
      bne+      .loc_0x258
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x5D00
      li        r4, 0x1C1
      subi      r5, r5, 0x5CEC
      crclr     6, 0x6
      bl        -0x406C9C

    .loc_0x2A8:
      lwz       r0, 0x80(r1)
      cmplwi    r0, 0
      beq-      .loc_0x2DC
      stw       r31, 0x24(r1)
      addi      r3, r1, 0x30
      addi      r4, r30, 0x20
      addi      r5, r1, 0x34
      stw       r31, 0x20(r1)
      addi      r6, r1, 0x80
      stw       r31, 0x54(r1)
      stw       r31, 0x50(r1)
      stw       r31, 0x34(r1)
      bl        -0x409DAC

    .loc_0x2DC:
      lwz       r0, 0x80(r1)
      stw       r0, 0x0(r29)
      lwz       r0, 0x80(r1)
      cmplwi    r0, 0
      bne-      .loc_0x2F8
      li        r3, 0x2
      b         .loc_0x2FC

    .loc_0x2F8:
      li        r3, 0

    .loc_0x2FC:
      lmw       r26, 0x98(r1)
      lwz       r0, 0xB4(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80431348
 * Size:	000008
 */
void Game::P2JST::ObjectSystem::JSGGetName( const
{
    /*
    .loc_0x0:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80431350
 * Size:	000008
 */
void Game::P2JST::ObjectSystem::JSGSetFlag( (unsigned long))
{
    /*
    .loc_0x0:
      stw       r4, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80431358
 * Size:	000008
 */
void Game::P2JST::ObjectSystem::JSGGetFlag( const
{
    /*
    .loc_0x0:
      lwz       r3, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80431360
 * Size:	000010
 */
void Game::P2JST::ObjectSystem::JSGSetData( (unsigned long, void const *, unsigned long))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r5, 0x18(r3)
      stw       r6, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80431370
 * Size:	000028
 */
void __sinit_JSTObjectSystem_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x6484(r13)
      stfsu     f0, -0x3D38(r3)
      stfs      f0, -0x6480(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80431398
 * Size:	000008
 */
void @4@Game::P2JST::ObjectSystem::stop(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x534
    */
}

/*
 * --INFO--
 * Address:	804313A0
 * Size:	000008
 */
void @4@Game::P2JST::ObjectSystem::start(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x610
    */
}

/*
 * --INFO--
 * Address:	804313A8
 * Size:	000008
 */
void @4@Game::P2JST::ObjectSystem::update(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x6EC
    */
}

/*
 * --INFO--
 * Address:	804313B0
 * Size:	000008
 */
void @4@Game::P2JST::ObjectSystem::reset(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x894
    */
}
