

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
 * Address:	801565C8
 * Size:	0000C4
 */
void mapSearch__Q24Game11CellPyramidFRQ23Sys6SphereP32IDelegate1<
    Game::CellObject*>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      addi      r6, r1, 0xC
      stmw      r27, 0x2C(r1)
      mr        r27, r5
      mr        r28, r3
      addi      r5, r1, 0x8
      bl        0x1DA8
      lwz       r3, 0x44(r28)
      lis       r0, 0x400
      addi      r3, r3, 0x1
      stw       r3, 0x44(r28)
      lwz       r3, 0x44(r28)
      cmplw     r3, r0
      blt-      .loc_0x48
      li        r0, 0
      stw       r0, 0x44(r28)

    .loc_0x48:
      lwz       r0, 0x8(r1)
      lwz       r3, 0x30(r28)
      mulli     r0, r0, 0x38
      lwz       r31, 0x44(r28)
      lwz       r29, 0xC(r1)
      add       r30, r3, r0
      b         .loc_0xA4

    .loc_0x64:
      lwz       r28, 0x10(r1)
      b         .loc_0x94

    .loc_0x6C:
      mr        r3, r30
      mr        r4, r29
      mr        r5, r28
      bl        0x16BC
      cmplwi    r3, 0
      beq-      .loc_0x90
      mr        r4, r27
      mr        r5, r31
      bl        0x128

    .loc_0x90:
      addi      r28, r28, 0x1

    .loc_0x94:
      lwz       r0, 0x18(r1)
      cmpw      r28, r0
      ble+      .loc_0x6C
      addi      r29, r29, 0x1

    .loc_0xA4:
      lwz       r0, 0x14(r1)
      cmpw      r29, r0
      ble+      .loc_0x64
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8015668C
 * Size:	0000B4
 */
void Game::CellObject::exitCell(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0x1
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5C
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5C
      li        r30, 0

    .loc_0x5C:
      mr        r29, r28
      li        r28, 0
      li        r31, 0

    .loc_0x68:
      lwz       r3, 0x5C(r29)
      cmplwi    r3, 0
      beq-      .loc_0x84
      mr        r5, r30
      addi      r4, r29, 0x54
      bl        0x11B0
      stw       r31, 0x5C(r29)

    .loc_0x84:
      addi      r28, r28, 0x1
      addi      r29, r29, 0x14
      cmpwi     r28, 0x4
      blt+      .loc_0x68
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
 * Address:	80156740
 * Size:	00003C
 */
void Game::Cell::__ct(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0xC(r3)
      stw       r4, 0x8(r3)
      stw       r4, 0x4(r3)
      stw       r4, 0x0(r3)
      stw       r4, 0x1C(r3)
      stw       r4, 0x10(r3)
      sth       r4, 0x14(r3)
      sth       r4, 0x16(r3)
      sth       r4, 0x18(r3)
      stw       r4, 0x24(r3)
      stw       r4, 0x20(r3)
      sth       r0, 0x28(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Game::Cell::clear(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015677C
 * Size:	0000C4
 */
void mapSearch__Q24Game4CellFP32IDelegate1<Game::CellObject*> Ul(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      lwz       r31, 0x1C(r3)
      b         .loc_0x54

    .loc_0x24:
      lwz       r3, 0xC(r31)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r29
      beq-      .loc_0x50
      stw       r29, 0xA4(r3)
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r4, 0xC(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      lwz       r31, 0x0(r31)

    .loc_0x54:
      cmplwi    r31, 0
      bne+      .loc_0x24
      lwz       r31, 0x10(r27)
      b         .loc_0x78

    .loc_0x64:
      mr        r3, r31
      mr        r4, r28
      mr        r5, r29
      bl        .loc_0xC4
      lwz       r31, 0x10(r31)

    .loc_0x78:
      cmplwi    r31, 0
      bne+      .loc_0x64
      li        r30, 0
      mr        r31, r27

    .loc_0x88:
      lwz       r3, 0x0(r31)
      cmplwi    r3, 0
      beq-      .loc_0xA0
      mr        r4, r28
      mr        r5, r29
      bl        0x260

    .loc_0xA0:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x4
      blt+      .loc_0x88
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xC4:
    */
}

/*
 * --INFO--
 * Address:	80156840
 * Size:	000238
 */
void mapSearchUp__Q24Game4CellFP32IDelegate1<Game::CellObject*> Ul(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r24, 0x10(r1)
      mr        r25, r3
      mr        r29, r4
      mr        r30, r5
      lwz       r24, 0x1C(r3)
      b         .loc_0x54

    .loc_0x24:
      lwz       r3, 0xC(r24)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x50
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r24)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      lwz       r24, 0x0(r24)

    .loc_0x54:
      cmplwi    r24, 0
      bne+      .loc_0x24
      lwz       r31, 0x10(r25)
      b         .loc_0x21C

    .loc_0x64:
      lwz       r28, 0x1C(r31)
      b         .loc_0x9C

    .loc_0x6C:
      lwz       r3, 0xC(r28)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x98
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x98:
      lwz       r28, 0x0(r28)

    .loc_0x9C:
      cmplwi    r28, 0
      bne+      .loc_0x6C
      lwz       r28, 0x10(r31)
      b         .loc_0x210

    .loc_0xAC:
      lwz       r27, 0x1C(r28)
      b         .loc_0xE4

    .loc_0xB4:
      lwz       r3, 0xC(r27)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0xE0
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0xE0:
      lwz       r27, 0x0(r27)

    .loc_0xE4:
      cmplwi    r27, 0
      bne+      .loc_0xB4
      lwz       r27, 0x10(r28)
      b         .loc_0x204

    .loc_0xF4:
      lwz       r26, 0x1C(r27)
      b         .loc_0x12C

    .loc_0xFC:
      lwz       r3, 0xC(r26)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x128
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r26)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x128:
      lwz       r26, 0x0(r26)

    .loc_0x12C:
      cmplwi    r26, 0
      bne+      .loc_0xFC
      lwz       r26, 0x10(r27)
      b         .loc_0x1F8

    .loc_0x13C:
      lwz       r25, 0x1C(r26)
      b         .loc_0x174

    .loc_0x144:
      lwz       r3, 0xC(r25)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x170
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r25)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x170:
      lwz       r25, 0x0(r25)

    .loc_0x174:
      cmplwi    r25, 0
      bne+      .loc_0x144
      lwz       r25, 0x10(r26)
      b         .loc_0x1EC

    .loc_0x184:
      lwz       r24, 0x1C(r25)
      b         .loc_0x1BC

    .loc_0x18C:
      lwz       r3, 0xC(r24)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x1B8
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r24)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x1B8:
      lwz       r24, 0x0(r24)

    .loc_0x1BC:
      cmplwi    r24, 0
      bne+      .loc_0x18C
      lwz       r24, 0x10(r25)
      b         .loc_0x1E0

    .loc_0x1CC:
      mr        r3, r24
      mr        r4, r29
      mr        r5, r30
      bl        .loc_0x0
      lwz       r24, 0x10(r24)

    .loc_0x1E0:
      cmplwi    r24, 0
      bne+      .loc_0x1CC
      lwz       r25, 0x10(r25)

    .loc_0x1EC:
      cmplwi    r25, 0
      bne+      .loc_0x184
      lwz       r26, 0x10(r26)

    .loc_0x1F8:
      cmplwi    r26, 0
      bne+      .loc_0x13C
      lwz       r27, 0x10(r27)

    .loc_0x204:
      cmplwi    r27, 0
      bne+      .loc_0xF4
      lwz       r28, 0x10(r28)

    .loc_0x210:
      cmplwi    r28, 0
      bne+      .loc_0xAC
      lwz       r31, 0x10(r31)

    .loc_0x21C:
      cmplwi    r31, 0
      bne+      .loc_0x64
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80156A78
 * Size:	000280
 */
void mapSearchDown__Q24Game4CellFP32IDelegate1<Game::CellObject*> Ul(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r18, 0x8(r1)
      mr        r19, r3
      mr        r29, r4
      mr        r30, r5
      lwz       r18, 0x1C(r3)
      b         .loc_0x54

    .loc_0x24:
      lwz       r3, 0xC(r18)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x50
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r18)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      lwz       r18, 0x0(r18)

    .loc_0x54:
      cmplwi    r18, 0
      bne+      .loc_0x24
      li        r31, 0
      mr        r18, r19

    .loc_0x64:
      lwz       r23, 0x0(r18)
      cmplwi    r23, 0
      beq-      .loc_0x25C
      lwz       r19, 0x1C(r23)
      b         .loc_0xA8

    .loc_0x78:
      lwz       r3, 0xC(r19)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0xA4
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r19)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0xA4:
      lwz       r19, 0x0(r19)

    .loc_0xA8:
      cmplwi    r19, 0
      bne+      .loc_0x78
      li        r28, 0

    .loc_0xB4:
      lwz       r22, 0x0(r23)
      cmplwi    r22, 0
      beq-      .loc_0x24C
      lwz       r19, 0x1C(r22)
      b         .loc_0xF8

    .loc_0xC8:
      lwz       r3, 0xC(r19)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0xF4
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r19)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0xF4:
      lwz       r19, 0x0(r19)

    .loc_0xF8:
      cmplwi    r19, 0
      bne+      .loc_0xC8
      li        r27, 0

    .loc_0x104:
      lwz       r21, 0x0(r22)
      cmplwi    r21, 0
      beq-      .loc_0x23C
      lwz       r19, 0x1C(r21)
      b         .loc_0x148

    .loc_0x118:
      lwz       r3, 0xC(r19)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x144
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r19)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x144:
      lwz       r19, 0x0(r19)

    .loc_0x148:
      cmplwi    r19, 0
      bne+      .loc_0x118
      li        r26, 0

    .loc_0x154:
      lwz       r20, 0x0(r21)
      cmplwi    r20, 0
      beq-      .loc_0x22C
      lwz       r19, 0x1C(r20)
      b         .loc_0x198

    .loc_0x168:
      lwz       r3, 0xC(r19)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x194
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r19)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x194:
      lwz       r19, 0x0(r19)

    .loc_0x198:
      cmplwi    r19, 0
      bne+      .loc_0x168
      li        r25, 0

    .loc_0x1A4:
      lwz       r19, 0x0(r20)
      cmplwi    r19, 0
      beq-      .loc_0x21C
      lwz       r24, 0x1C(r19)
      b         .loc_0x1E8

    .loc_0x1B8:
      lwz       r3, 0xC(r24)
      lwz       r0, 0xA4(r3)
      cmplw     r0, r30
      beq-      .loc_0x1E4
      stw       r30, 0xA4(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0xC(r24)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x1E4:
      lwz       r24, 0x0(r24)

    .loc_0x1E8:
      cmplwi    r24, 0
      bne+      .loc_0x1B8
      li        r24, 0

    .loc_0x1F4:
      lwz       r3, 0x0(r19)
      cmplwi    r3, 0
      beq-      .loc_0x20C
      mr        r4, r29
      mr        r5, r30
      bl        .loc_0x0

    .loc_0x20C:
      addi      r24, r24, 0x1
      addi      r19, r19, 0x4
      cmpwi     r24, 0x4
      blt+      .loc_0x1F4

    .loc_0x21C:
      addi      r25, r25, 0x1
      addi      r20, r20, 0x4
      cmpwi     r25, 0x4
      blt+      .loc_0x1A4

    .loc_0x22C:
      addi      r26, r26, 0x1
      addi      r21, r21, 0x4
      cmpwi     r26, 0x4
      blt+      .loc_0x154

    .loc_0x23C:
      addi      r27, r27, 0x1
      addi      r22, r22, 0x4
      cmpwi     r27, 0x4
      blt+      .loc_0x104

    .loc_0x24C:
      addi      r28, r28, 0x1
      addi      r23, r23, 0x4
      cmpwi     r28, 0x4
      blt+      .loc_0xB4

    .loc_0x25C:
      addi      r31, r31, 0x1
      addi      r18, r18, 0x4
      cmpwi     r31, 0x4
      blt+      .loc_0x64
      lmw       r18, 0x8(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80156CF8
 * Size:	00004C
 */
void Game::Cell::resolveCollision(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, -0x69F8(r13)
      lbz       r0, 0x3C(r4)
      cmplwi    r0, 0
      beq-      .loc_0x24
      bl        0x234C
      b         .loc_0x3C

    .loc_0x24:
      lbz       r0, 0x58(r4)
      cmplwi    r0, 0
      beq-      .loc_0x38
      bl        0x2238
      b         .loc_0x3C

    .loc_0x38:
      bl        0x2138

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80156D44
 * Size:	000004
 */
void Game::CellPyramid::initFrame(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::CellPyramid::getCheckCount(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Game::Cell::dump(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Game::Cell::hasLeg((Game::CellLeg*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void Game::CellObject::calcCollisionDistance((Game::CellObject*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80156D48
 * Size:	0000D0
 */
void Game::CellObject::updateCollisionBuffer((Game::CellObject*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      addi      r4, r1, 0x8
      stw       r30, 0x28(r1)
      mr        r30, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      addi      r4, r1, 0x18
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      lfs       f0, 0x1C(r1)
      lfs       f3, 0x10(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x20(r1)
      lfs       f1, 0x8(r1)
      lfs       f0, 0x18(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x5D38(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f2, f2, f1
      fcmpo     cr0, f2, f0
      ble-      .loc_0x98
      ble-      .loc_0x9C
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x9C

    .loc_0x98:
      fmr       f2, f0

    .loc_0x9C:
      lfs       f1, 0x14(r1)
      mr        r4, r31
      lfs       f0, 0x24(r1)
      addi      r3, r30, 0xA8
      fadds     f0, f1, f0
      fsubs     f1, f2, f0
      bl        0xB4
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
 * Size:	000080
 */
void Game::CellObject::resolveUsingBuffer(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80156E18
 * Size:	000018
 */
void Game::CollisionBuffer::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0xC(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void Game::CollisionBuffer::isAvailable(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Game::CollisionBuffer::init((Game::CellObject*, Game::CollNode*, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80156E30
 * Size:	00006C
 */
void Game::CollisionBuffer::alloc((Game::CellObject*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      stw       r4, 0xC(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0x4(r3)
      lwz       r31, 0x0(r3)
      rlwinm    r3,r31,3,0,28
      addi      r3, r3, 0x10
      bl        -0x132EB8
      lis       r4, 0x8015
      mr        r7, r31
      addi      r4, r4, 0x6E9C
      li        r5, 0
      li        r6, 0x8
      bl        -0x9548C
      stw       r3, 0x8(r30)
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
 * Address:	80156E9C
 * Size:	000014
 */
void Game::CollNode::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f0, -0x5D38(r2)
      stw       r0, 0x0(r3)
      stfs      f0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void Game::CollisionBuffer::clear(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80156EB0
 * Size:	0000B8
 */
void Game::CollisionBuffer::insert((Game::CellObject*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      stw       r31, 0x14(r1)
      mr        r31, r4
      stw       r30, 0x10(r1)
      mr        r30, r3
      lwz       r3, 0xC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x9C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x78
      fmr       f1, f31
      mr        r3, r30
      mr        r4, r31
      bl        .loc_0xB8
      b         .loc_0x9C

    .loc_0x78:
      fmr       f1, f31
      mr        r3, r30
      mr        r4, r31
      bl        0x15C
      b         .loc_0x9C

    .loc_0x8C:
      fmr       f1, f31
      mr        r3, r30
      mr        r4, r31
      bl        0x270

    .loc_0x9C:
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      lwz       r31, 0x14(r1)
      lwz       r30, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xB8:
    */
}

/*
 * --INFO--
 * Address:	80156F68
 * Size:	000128
 */
void Game::CollisionBuffer::pikiInsertPiki((Game::CellObject*, float))
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
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      fmr       f31, f1
      mr        r30, r3
      mr        r31, r4
      bl        0x318
      cmpwi     r3, -0x1
      bne-      .loc_0x100
      lwz       r3, 0x4(r30)
      subi      r28, r3, 0x1
      rlwinm    r29,r28,3,0,28
      b         .loc_0xB4

    .loc_0x4C:
      lwz       r0, 0x8(r30)
      add       r3, r0, r29
      lfs       f0, 0x4(r3)
      fcmpo     cr0, f0, f31
      ble-      .loc_0xBC
      lwz       r3, 0x0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xBC
      lwz       r0, 0x0(r30)
      addi      r3, r28, 0x1
      cmpw      r3, r0
      bge-      .loc_0xAC
      lwz       r0, 0x8(r30)
      add       r3, r0, r29
      lwz       r0, 0x0(r3)
      stw       r0, 0x8(r3)
      lwz       r0, 0x8(r30)
      add       r3, r0, r29
      lfs       f0, 0x4(r3)
      stfs      f0, 0xC(r3)

    .loc_0xAC:
      subi      r29, r29, 0x8
      subi      r28, r28, 0x1

    .loc_0xB4:
      cmpwi     r28, 0
      bge+      .loc_0x4C

    .loc_0xBC:
      lwz       r0, 0x0(r30)
      addi      r3, r28, 0x1
      cmpw      r3, r0
      bge-      .loc_0x100
      lwz       r0, 0x8(r30)
      rlwinm    r4,r28,3,0,28
      add       r3, r0, r4
      stw       r31, 0x8(r3)
      lwz       r0, 0x8(r30)
      add       r3, r0, r4
      stfs      f31, 0xC(r3)
      lwz       r3, 0x4(r30)
      lwz       r0, 0x0(r30)
      cmpw      r3, r0
      bge-      .loc_0x100
      addi      r0, r3, 0x1
      stw       r0, 0x4(r30)

    .loc_0x100:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80157090
 * Size:	000128
 */
void Game::CollisionBuffer::pikiInsertOther((Game::CellObject*, float))
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
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      fmr       f31, f1
      mr        r30, r3
      mr        r31, r4
      bl        0x1F0
      cmpwi     r3, -0x1
      bne-      .loc_0x100
      lwz       r3, 0x4(r30)
      subi      r28, r3, 0x1
      rlwinm    r29,r28,3,0,28
      b         .loc_0xB4

    .loc_0x4C:
      lwz       r0, 0x8(r30)
      add       r3, r0, r29
      lfs       f0, 0x4(r3)
      fcmpo     cr0, f0, f31
      bgt-      .loc_0x7C
      lwz       r3, 0x0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xBC

    .loc_0x7C:
      lwz       r0, 0x0(r30)
      addi      r3, r28, 0x1
      cmpw      r3, r0
      bge-      .loc_0xAC
      lwz       r0, 0x8(r30)
      add       r3, r0, r29
      lwz       r0, 0x0(r3)
      stw       r0, 0x8(r3)
      lwz       r0, 0x8(r30)
      add       r3, r0, r29
      lfs       f0, 0x4(r3)
      stfs      f0, 0xC(r3)

    .loc_0xAC:
      subi      r29, r29, 0x8
      subi      r28, r28, 0x1

    .loc_0xB4:
      cmpwi     r28, 0
      bge+      .loc_0x4C

    .loc_0xBC:
      lwz       r0, 0x0(r30)
      addi      r3, r28, 0x1
      cmpw      r3, r0
      bge-      .loc_0x100
      lwz       r0, 0x8(r30)
      rlwinm    r4,r28,3,0,28
      add       r3, r0, r4
      stw       r31, 0x8(r3)
      lwz       r0, 0x8(r30)
      add       r3, r0, r4
      stfs      f31, 0xC(r3)
      lwz       r3, 0x4(r30)
      lwz       r0, 0x0(r30)
      cmpw      r3, r0
      bge-      .loc_0x100
      addi      r0, r3, 0x1
      stw       r0, 0x4(r30)

    .loc_0x100:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801571B8
 * Size:	0000F8
 */
void Game::CollisionBuffer::insertSort((Game::CellObject*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      fmr       f31, f1
      mr        r31, r3
      mr        r30, r4
      bl        .loc_0xF8
      cmpwi     r3, -0x1
      bne-      .loc_0xD8
      lwz       r3, 0x4(r31)
      subic.    r6, r3, 0x1
      addi      r0, r6, 0x1
      rlwinm    r4,r6,3,0,28
      mtctr     r0
      blt-      .loc_0x94

    .loc_0x4C:
      lwz       r0, 0x8(r31)
      add       r5, r0, r4
      lfs       f0, 0x4(r5)
      fcmpo     cr0, f0, f31
      ble-      .loc_0x94
      lwz       r0, 0x0(r31)
      addi      r3, r6, 0x1
      cmpw      r3, r0
      bge-      .loc_0x88
      lwz       r0, 0x0(r5)
      stw       r0, 0x8(r5)
      lwz       r0, 0x8(r31)
      add       r3, r0, r4
      lfs       f0, 0x4(r3)
      stfs      f0, 0xC(r3)

    .loc_0x88:
      subi      r4, r4, 0x8
      subi      r6, r6, 0x1
      bdnz+     .loc_0x4C

    .loc_0x94:
      lwz       r0, 0x0(r31)
      addi      r3, r6, 0x1
      cmpw      r3, r0
      bge-      .loc_0xD8
      lwz       r0, 0x8(r31)
      rlwinm    r4,r6,3,0,28
      add       r3, r0, r4
      stw       r30, 0x8(r3)
      lwz       r0, 0x8(r31)
      add       r3, r0, r4
      stfs      f31, 0xC(r3)
      lwz       r3, 0x4(r31)
      lwz       r0, 0x0(r31)
      cmpw      r3, r0
      bge-      .loc_0xD8
      addi      r0, r3, 0x1
      stw       r0, 0x4(r31)

    .loc_0xD8:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xF8:
    */
}

/*
 * --INFO--
 * Address:	801572B0
 * Size:	000044
 */
void Game::CollisionBuffer::findIndex((Game::CellObject*))
{
    /*
    .loc_0x0:
      lwz       r0, 0x4(r3)
      li        r7, 0
      li        r6, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x3C

    .loc_0x18:
      lwz       r5, 0x8(r3)
      lwzx      r0, r5, r6
      cmplw     r0, r4
      bne-      .loc_0x30
      mr        r3, r7
      blr

    .loc_0x30:
      addi      r6, r6, 0x8
      addi      r7, r7, 0x1
      bdnz+     .loc_0x18

    .loc_0x3C:
      li        r3, -0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Game::CellLayer::resolveCollision(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801572F4
 * Size:	000244
 */
void Game::CellPyramid::resolveCollision(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      lis       r0, 0x400
      stmw      r26, 0x18(r1)
      mr        r31, r3
      lwz       r3, 0x44(r3)
      addi      r3, r3, 0x1
      stw       r3, 0x44(r31)
      lwz       r3, 0x44(r31)
      cmplw     r3, r0
      blt-      .loc_0x38
      li        r0, 0
      stw       r0, 0x44(r31)

    .loc_0x38:
      lbz       r0, -0x7BE8(r13)
      cmpwi     r0, 0x2
      beq-      .loc_0x180
      bge-      .loc_0x58
      cmpwi     r0, 0
      beq-      .loc_0x90
      bge-      .loc_0x128
      b         .loc_0x230

    .loc_0x58:
      cmpwi     r0, 0x4
      bge-      .loc_0x230
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r4, r4, 0x1494
      addi      r0, r1, 0x8
      stw       r4, 0x8(r1)
      addi      r5, r3, 0x1488
      mr        r3, r31
      addi      r4, r1, 0xC
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      bl        0xE5498
      b         .loc_0x230

    .loc_0x90:
      li        r26, 0
      li        r27, 0
      b         .loc_0x118

    .loc_0x9C:
      lwz       r0, 0x30(r31)
      li        r30, 0
      mr        r28, r30
      add       r29, r0, r27
      b         .loc_0xFC

    .loc_0xB0:
      lwz       r0, 0x8(r29)
      add       r3, r0, r28
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0xF4
      lwz       r4, -0x69F8(r13)
      lbz       r0, 0x3C(r4)
      cmplwi    r0, 0
      beq-      .loc_0xDC
      bl        0x1C98
      b         .loc_0xF4

    .loc_0xDC:
      lbz       r0, 0x58(r4)
      cmplwi    r0, 0
      beq-      .loc_0xF0
      bl        0x1B84
      b         .loc_0xF4

    .loc_0xF0:
      bl        0x1A84

    .loc_0xF4:
      addi      r28, r28, 0x2C
      addi      r30, r30, 0x1

    .loc_0xFC:
      lhz       r3, 0x0(r29)
      lhz       r0, 0x2(r29)
      mullw     r0, r3, r0
      cmpw      r30, r0
      blt+      .loc_0xB0
      addi      r27, r27, 0x38
      addi      r26, r26, 0x1

    .loc_0x118:
      lwz       r0, 0x2C(r31)
      cmpw      r26, r0
      blt+      .loc_0x9C
      b         .loc_0x230

    .loc_0x128:
      lwz       r3, 0x2C(r31)
      li        r28, 0
      lwz       r4, 0x30(r31)
      li        r27, 0
      subi      r0, r3, 0x1
      mulli     r0, r0, 0x38
      add       r26, r4, r0
      b         .loc_0x168

    .loc_0x148:
      lwz       r0, 0x8(r26)
      add       r3, r0, r27
      lhz       r0, 0x18(r3)
      cmplwi    r0, 0
      beq-      .loc_0x160
      bl        .loc_0x244

    .loc_0x160:
      addi      r27, r27, 0x2C
      addi      r28, r28, 0x1

    .loc_0x168:
      lhz       r3, 0x0(r26)
      lhz       r0, 0x2(r26)
      mullw     r0, r3, r0
      cmpw      r28, r0
      blt+      .loc_0x148
      b         .loc_0x230

    .loc_0x180:
      lbz       r0, -0x6D2B(r13)
      cmplwi    r0, 0
      beq-      .loc_0x1E0
      li        r26, 0
      li        r27, 0
      b         .loc_0x1D0

    .loc_0x198:
      lwz       r3, 0x30(r31)
      addi      r0, r27, 0x2C
      lwzx      r28, r3, r0
      b         .loc_0x1C0

    .loc_0x1A8:
      lhz       r0, 0x18(r28)
      cmplwi    r0, 0
      beq-      .loc_0x1BC
      mr        r3, r28
      bl        0x1BB4

    .loc_0x1BC:
      lwz       r28, 0x20(r28)

    .loc_0x1C0:
      cmplwi    r28, 0
      bne+      .loc_0x1A8
      addi      r27, r27, 0x38
      addi      r26, r26, 0x1

    .loc_0x1D0:
      lwz       r0, 0x2C(r31)
      cmpw      r26, r0
      blt+      .loc_0x198
      b         .loc_0x230

    .loc_0x1E0:
      li        r26, 0
      li        r27, 0
      b         .loc_0x224

    .loc_0x1EC:
      lwz       r3, 0x30(r31)
      addi      r0, r27, 0x2C
      lwzx      r28, r3, r0
      b         .loc_0x214

    .loc_0x1FC:
      lhz       r0, 0x18(r28)
      cmplwi    r0, 0
      beq-      .loc_0x210
      mr        r3, r28
      bl        0x1A60

    .loc_0x210:
      lwz       r28, 0x20(r28)

    .loc_0x214:
      cmplwi    r28, 0
      bne+      .loc_0x1FC
      addi      r27, r27, 0x38
      addi      r26, r26, 0x1

    .loc_0x224:
      lwz       r0, 0x2C(r31)
      cmpw      r26, r0
      blt+      .loc_0x1EC

    .loc_0x230:
      lmw       r26, 0x18(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x244:
    */
}

/*
 * --INFO--
 * Address:	80157538
 * Size:	000294
 */
void Game::Cell::rec_resolveColl(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r14, 0x8(r1)
      mr        r14, r3
      li        r15, 0
      mr        r21, r14

    .loc_0x1C:
      lwz       r20, 0x0(r21)
      cmplwi    r20, 0
      beq-      .loc_0x234
      lhz       r0, 0x18(r20)
      cmplwi    r0, 0x1
      ble-      .loc_0x234
      li        r31, 0
      mr        r22, r20

    .loc_0x3C:
      lwz       r19, 0x0(r22)
      cmplwi    r19, 0
      beq-      .loc_0x1E8
      lhz       r0, 0x18(r19)
      cmplwi    r0, 0x1
      ble-      .loc_0x1E8
      li        r30, 0
      mr        r23, r19

    .loc_0x5C:
      lwz       r18, 0x0(r23)
      cmplwi    r18, 0
      beq-      .loc_0x19C
      lhz       r0, 0x18(r18)
      cmplwi    r0, 0x1
      ble-      .loc_0x19C
      li        r29, 0
      mr        r24, r18

    .loc_0x7C:
      lwz       r17, 0x0(r24)
      cmplwi    r17, 0
      beq-      .loc_0x150
      lhz       r0, 0x18(r17)
      cmplwi    r0, 0x1
      ble-      .loc_0x150
      li        r28, 0
      mr        r25, r17

    .loc_0x9C:
      lwz       r16, 0x0(r25)
      cmplwi    r16, 0
      beq-      .loc_0xF0
      lhz       r0, 0x18(r16)
      cmplwi    r0, 0x1
      ble-      .loc_0xF0
      li        r27, 0
      mr        r26, r16

    .loc_0xBC:
      lwz       r3, 0x0(r26)
      cmplwi    r3, 0
      beq-      .loc_0xD8
      lhz       r0, 0x18(r3)
      cmplwi    r0, 0x1
      ble-      .loc_0xD8
      bl        .loc_0x0

    .loc_0xD8:
      addi      r27, r27, 0x1
      addi      r26, r26, 0x4
      cmpwi     r27, 0x4
      blt+      .loc_0xBC
      mr        r3, r16
      bl        -0x92C

    .loc_0xF0:
      addi      r28, r28, 0x1
      addi      r25, r25, 0x4
      cmpwi     r28, 0x4
      blt+      .loc_0x9C
      bl        0x19C
      addi      r3, r3, 0x24
      bl        .loc_0x294
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x124
      mr        r3, r17
      bl        0x1A0C
      b         .loc_0x150

    .loc_0x124:
      bl        0x178
      addi      r3, r3, 0x40
      bl        .loc_0x294
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x148
      mr        r3, r17
      bl        0x18E8
      b         .loc_0x150

    .loc_0x148:
      mr        r3, r17
      bl        0x17E4

    .loc_0x150:
      addi      r29, r29, 0x1
      addi      r24, r24, 0x4
      cmpwi     r29, 0x4
      blt+      .loc_0x7C
      lwz       r3, -0x69F8(r13)
      lbz       r0, 0x3C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x17C
      mr        r3, r18
      bl        0x19B4
      b         .loc_0x19C

    .loc_0x17C:
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      beq-      .loc_0x194
      mr        r3, r18
      bl        0x189C
      b         .loc_0x19C

    .loc_0x194:
      mr        r3, r18
      bl        0x1798

    .loc_0x19C:
      addi      r30, r30, 0x1
      addi      r23, r23, 0x4
      cmpwi     r30, 0x4
      blt+      .loc_0x5C
      lwz       r3, -0x69F8(r13)
      lbz       r0, 0x3C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1C8
      mr        r3, r19
      bl        0x1968
      b         .loc_0x1E8

    .loc_0x1C8:
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1E0
      mr        r3, r19
      bl        0x1850
      b         .loc_0x1E8

    .loc_0x1E0:
      mr        r3, r19
      bl        0x174C

    .loc_0x1E8:
      addi      r31, r31, 0x1
      addi      r22, r22, 0x4
      cmpwi     r31, 0x4
      blt+      .loc_0x3C
      lwz       r3, -0x69F8(r13)
      lbz       r0, 0x3C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x214
      mr        r3, r20
      bl        0x191C
      b         .loc_0x234

    .loc_0x214:
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      beq-      .loc_0x22C
      mr        r3, r20
      bl        0x1804
      b         .loc_0x234

    .loc_0x22C:
      mr        r3, r20
      bl        0x1700

    .loc_0x234:
      addi      r15, r15, 0x1
      addi      r21, r21, 0x4
      cmpwi     r15, 0x4
      blt+      .loc_0x1C
      lwz       r3, -0x69F8(r13)
      lbz       r0, 0x3C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x260
      mr        r3, r14
      bl        0x18D0
      b         .loc_0x280

    .loc_0x260:
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      beq-      .loc_0x278
      mr        r3, r14
      bl        0x17B8
      b         .loc_0x280

    .loc_0x278:
      mr        r3, r14
      bl        0x16B4

    .loc_0x280:
      lmw       r14, 0x8(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

    .loc_0x294:
    */
}

/*
 * --INFO--
 * Address:	801577CC
 * Size:	000008
 */
void Parm<bool>::operator()()
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	801577D4
 * Size:	000008
 */
void CellMgrParms::getInstance()
{
    /*
    .loc_0x0:
      lwz       r3, -0x69F8(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Game::Cell::clearAllCollBuffer(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void Game::CellLayer::clearAllCollBuffer(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801577DC
 * Size:	0000DC
 */
void Game::CellPyramid::clearAllCollBuffer(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      li        r12, 0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      li        r30, 0
      b         .loc_0xC0

    .loc_0x18:
      lwz       r0, 0x30(r3)
      li        r6, 0
      mr        r11, r6
      add       r7, r0, r12
      b         .loc_0xA4

    .loc_0x2C:
      lwz       r0, 0x8(r7)
      add       r4, r0, r11
      lwz       r8, 0x1C(r4)
      cmplwi    r8, 0
      beq-      .loc_0x9C
      lfs       f0, -0x5D34(r2)
      li        r5, 0
      b         .loc_0x94

    .loc_0x4C:
      lwz       r31, 0xC(r8)
      cmplwi    r31, 0
      beq-      .loc_0x90
      li        r9, 0
      stw       r5, 0xAC(r31)
      mr        r10, r9
      b         .loc_0x84

    .loc_0x68:
      lwz       r4, 0xB0(r31)
      addi      r0, r10, 0x4
      addi      r9, r9, 0x1
      stwx      r5, r4, r10
      addi      r10, r10, 0x8
      lwz       r4, 0xB0(r31)
      stfsx     f0, r4, r0

    .loc_0x84:
      lwz       r0, 0xA8(r31)
      cmpw      r9, r0
      blt+      .loc_0x68

    .loc_0x90:
      lwz       r8, 0x0(r8)

    .loc_0x94:
      cmplwi    r8, 0
      bne+      .loc_0x4C

    .loc_0x9C:
      addi      r11, r11, 0x2C
      addi      r6, r6, 0x1

    .loc_0xA4:
      lhz       r4, 0x0(r7)
      lhz       r0, 0x2(r7)
      mullw     r0, r4, r0
      cmpw      r6, r0
      blt+      .loc_0x2C
      addi      r12, r12, 0x38
      addi      r30, r30, 0x1

    .loc_0xC0:
      lwz       r0, 0x2C(r3)
      cmpw      r30, r0
      blt+      .loc_0x18
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void Game::Cell::appendList(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void Game::Cell::remove(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801578B8
 * Size:	000158
 */
void Game::Cell::exit((Game::CellLeg*, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x1C(r3)
      cmplw     r0, r4
      bne-      .loc_0x3C
      lwz       r0, 0x0(r4)
      stw       r0, 0x1C(r31)
      lwz       r3, 0x1C(r31)
      cmplwi    r3, 0
      beq-      .loc_0x3C
      li        r0, 0
      stw       r0, 0x4(r3)

    .loc_0x3C:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x78
      lhz       r3, 0x14(r31)
      cmplwi    r3, 0
      beq-      .loc_0x78
      subi      r0, r3, 0x1
      sth       r0, 0x14(r31)
      lwz       r5, 0x10(r31)
      b         .loc_0x70

    .loc_0x60:
      lhz       r3, 0x16(r5)
      subi      r0, r3, 0x1
      sth       r0, 0x16(r5)
      lwz       r5, 0x10(r5)

    .loc_0x70:
      cmplwi    r5, 0
      bne+      .loc_0x60

    .loc_0x78:
      lhz       r3, 0x18(r31)
      subi      r0, r3, 0x1
      sth       r0, 0x18(r31)
      lwz       r5, 0x10(r31)
      b         .loc_0x9C

    .loc_0x8C:
      lhz       r3, 0x18(r5)
      subi      r0, r3, 0x1
      sth       r0, 0x18(r5)
      lwz       r5, 0x10(r5)

    .loc_0x9C:
      cmplwi    r5, 0
      bne+      .loc_0x8C
      lwz       r3, 0x4(r4)
      cmplwi    r3, 0
      beq-      .loc_0xB8
      lwz       r0, 0x0(r4)
      stw       r0, 0x0(r3)

    .loc_0xB8:
      lwz       r3, 0x0(r4)
      cmplwi    r3, 0
      beq-      .loc_0xCC
      lwz       r0, 0x4(r4)
      stw       r0, 0x4(r3)

    .loc_0xCC:
      li        r0, 0
      stw       r0, 0x4(r4)
      stw       r0, 0x0(r4)
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x144
      lwz       r0, -0x6D28(r13)
      cmplwi    r0, 0
      beq-      .loc_0x144
      bne-      .loc_0x110
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x3014
      li        r4, 0x312
      subi      r5, r5, 0x3004
      crclr     6, 0x6
      bl        -0x12D384

    .loc_0x110:
      lwz       r3, 0x24(r31)
      cmplwi    r3, 0
      beq-      .loc_0x138
      lwz       r0, 0x20(r31)
      stw       r0, 0x20(r3)
      lwz       r3, 0x20(r31)
      cmplwi    r3, 0
      beq-      .loc_0x138
      lwz       r0, 0x24(r31)
      stw       r0, 0x24(r3)

    .loc_0x138:
      li        r0, 0
      stw       r0, 0x24(r31)
      stw       r0, 0x20(r31)

    .loc_0x144:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80157A10
 * Size:	0002EC
 */
void Game::Cell::entry((Game::CellLeg*, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr.       r28, r4
      lis       r4, 0x8048
      mr        r27, r3
      mr        r29, r5
      subi      r31, r4, 0x3020
      bne-      .loc_0x3C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x344
      crclr     6, 0x6
      bl        -0x12D408

    .loc_0x3C:
      lwz       r30, 0x8(r28)
      cmplwi    r30, 0
      beq-      .loc_0x170
      lwz       r0, 0x1C(r30)
      cmplw     r0, r28
      bne-      .loc_0x70
      lwz       r0, 0x0(r28)
      stw       r0, 0x1C(r30)
      lwz       r3, 0x1C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x70
      li        r0, 0
      stw       r0, 0x4(r3)

    .loc_0x70:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0xAC
      lhz       r3, 0x14(r30)
      cmplwi    r3, 0
      beq-      .loc_0xAC
      subi      r0, r3, 0x1
      sth       r0, 0x14(r30)
      lwz       r4, 0x10(r30)
      b         .loc_0xA4

    .loc_0x94:
      lhz       r3, 0x16(r4)
      subi      r0, r3, 0x1
      sth       r0, 0x16(r4)
      lwz       r4, 0x10(r4)

    .loc_0xA4:
      cmplwi    r4, 0
      bne+      .loc_0x94

    .loc_0xAC:
      lhz       r3, 0x18(r30)
      subi      r0, r3, 0x1
      sth       r0, 0x18(r30)
      lwz       r4, 0x10(r30)
      b         .loc_0xD0

    .loc_0xC0:
      lhz       r3, 0x18(r4)
      subi      r0, r3, 0x1
      sth       r0, 0x18(r4)
      lwz       r4, 0x10(r4)

    .loc_0xD0:
      cmplwi    r4, 0
      bne+      .loc_0xC0
      lwz       r3, 0x4(r28)
      cmplwi    r3, 0
      beq-      .loc_0xEC
      lwz       r0, 0x0(r28)
      stw       r0, 0x0(r3)

    .loc_0xEC:
      lwz       r3, 0x0(r28)
      cmplwi    r3, 0
      beq-      .loc_0x100
      lwz       r0, 0x4(r28)
      stw       r0, 0x4(r3)

    .loc_0x100:
      li        r0, 0
      stw       r0, 0x4(r28)
      stw       r0, 0x0(r28)
      lwz       r0, 0x1C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x170
      lwz       r0, -0x6D28(r13)
      cmplwi    r0, 0
      beq-      .loc_0x170
      bne-      .loc_0x13C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x312
      crclr     6, 0x6
      bl        -0x12D508

    .loc_0x13C:
      lwz       r3, 0x24(r30)
      cmplwi    r3, 0
      beq-      .loc_0x164
      lwz       r0, 0x20(r30)
      stw       r0, 0x20(r3)
      lwz       r3, 0x20(r30)
      cmplwi    r3, 0
      beq-      .loc_0x164
      lwz       r0, 0x24(r30)
      stw       r0, 0x24(r3)

    .loc_0x164:
      li        r0, 0
      stw       r0, 0x24(r30)
      stw       r0, 0x20(r30)

    .loc_0x170:
      lwz       r4, 0x1C(r27)
      cmplwi    r4, 0
      beq-      .loc_0x1A4
      cmplw     r4, r28
      beq-      .loc_0x1BC
      lwz       r3, 0x0(r4)
      stw       r28, 0x0(r4)
      cmplwi    r3, 0
      stw       r3, 0x0(r28)
      stw       r4, 0x4(r28)
      beq-      .loc_0x1BC
      stw       r28, 0x4(r3)
      b         .loc_0x1BC

    .loc_0x1A4:
      stw       r28, 0x1C(r27)
      li        r0, 0
      lwz       r3, 0x1C(r27)
      stw       r0, 0x0(r3)
      lwz       r3, 0x1C(r27)
      stw       r0, 0x4(r3)

    .loc_0x1BC:
      stw       r27, 0x8(r28)
      lwz       r3, 0x1C(r27)
      b         .loc_0x1DC

    .loc_0x1C8:
      cmplw     r3, r28
      bne-      .loc_0x1D8
      li        r0, 0x1
      b         .loc_0x1E8

    .loc_0x1D8:
      lwz       r3, 0x0(r3)

    .loc_0x1DC:
      cmplwi    r3, 0
      bne+      .loc_0x1C8
      li        r0, 0

    .loc_0x1E8:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x204
      addi      r3, r31, 0xC
      addi      r5, r31, 0x28
      li        r4, 0x357
      crclr     6, 0x6
      bl        -0x12D5D0

    .loc_0x204:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x238
      lhz       r3, 0x14(r27)
      addi      r0, r3, 0x1
      sth       r0, 0x14(r27)
      lwz       r4, 0x10(r27)
      b         .loc_0x230

    .loc_0x220:
      lhz       r3, 0x16(r4)
      addi      r0, r3, 0x1
      sth       r0, 0x16(r4)
      lwz       r4, 0x10(r4)

    .loc_0x230:
      cmplwi    r4, 0
      bne+      .loc_0x220

    .loc_0x238:
      lhz       r3, 0x18(r27)
      addi      r0, r3, 0x1
      sth       r0, 0x18(r27)
      lwz       r4, 0x10(r27)
      b         .loc_0x25C

    .loc_0x24C:
      lhz       r3, 0x18(r4)
      addi      r0, r3, 0x1
      sth       r0, 0x18(r4)
      lwz       r4, 0x10(r4)

    .loc_0x25C:
      cmplwi    r4, 0
      bne+      .loc_0x24C
      lwz       r0, 0x24(r27)
      cmplwi    r0, 0
      bne-      .loc_0x2D8
      lwz       r0, -0x6D28(r13)
      cmplwi    r0, 0
      beq-      .loc_0x2D8
      bne-      .loc_0x294
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x2FB
      crclr     6, 0x6
      bl        -0x12D660

    .loc_0x294:
      lha       r0, 0x28(r27)
      lwz       r4, -0x6D28(r13)
      mulli     r3, r0, 0x38
      lwz       r0, 0x30(r4)
      addi      r4, r3, 0xC
      add       r4, r0, r4
      lwz       r0, 0x20(r4)
      cmplwi    r0, 0
      beq-      .loc_0x2D0
      stw       r0, 0x20(r27)
      lwz       r3, 0x20(r27)
      stw       r27, 0x24(r3)
      stw       r4, 0x24(r27)
      stw       r27, 0x20(r4)
      b         .loc_0x2D8

    .loc_0x2D0:
      stw       r27, 0x20(r4)
      stw       r4, 0x24(r27)

    .loc_0x2D8:
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
 * Size:	000058
 */
void Game::CellLayer::clear(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void Game::CellLayer::createBottom((int, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80157CFC
 * Size:	000048
 */
void Game::CellLayer::operator()((int, int))
{
    /*
    .loc_0x0:
      cmpwi     r4, 0
      blt-      .loc_0x28
      cmpwi     r5, 0
      blt-      .loc_0x28
      lhz       r6, 0x0(r3)
      cmpw      r4, r6
      bge-      .loc_0x28
      lhz       r0, 0x2(r3)
      cmpw      r5, r0
      blt-      .loc_0x30

    .loc_0x28:
      li        r3, 0
      blr

    .loc_0x30:
      mullw     r0, r5, r6
      lwz       r3, 0x8(r3)
      add       r0, r4, r0
      mulli     r0, r0, 0x2C
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80157D44
 * Size:	000578
 */
void Game::CellLayer::pileup((Game::CellLayer&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lfd       f2, -0x5D28(r2)
      stw       r0, 0x44(r1)
      lis       r0, 0x4330
      lfs       f0, -0x5D30(r2)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      stw       r30, 0x38(r1)
      mr        r30, r3
      stw       r29, 0x34(r1)
      lhz       r4, 0x4(r4)
      stw       r0, 0x8(r1)
      rlwinm    r0,r4,1,16,30
      sth       r0, 0x4(r3)
      lhz       r3, 0x6(r31)
      addi      r0, r3, 0x1
      sth       r0, 0x6(r30)
      lhz       r0, 0x0(r31)
      stw       r0, 0xC(r1)
      lfd       f1, 0x8(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f1, f0
      bl        -0x88C58
      frsp      f0, f1
      lis       r0, 0x4330
      stw       r0, 0x18(r1)
      lfd       f2, -0x5D28(r2)
      fctiwz    f1, f0
      lfs       f0, -0x5D30(r2)
      stfd      f1, 0x10(r1)
      lwz       r0, 0x14(r1)
      sth       r0, 0x0(r30)
      lhz       r0, 0x2(r31)
      stw       r0, 0x1C(r1)
      lfd       f1, 0x18(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f1, f0
      bl        -0x88C94
      frsp      f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      sth       r0, 0x2(r30)
      lhz       r3, 0x0(r30)
      lhz       r0, 0x2(r30)
      mullw     r29, r3, r0
      mulli     r3, r29, 0x2C
      addi      r3, r3, 0x10
      bl        -0x133E5C
      lis       r4, 0x8015
      mr        r7, r29
      addi      r4, r4, 0x6740
      li        r5, 0
      li        r6, 0x2C
      bl        -0x96430
      stw       r3, 0x8(r30)
      li        r5, 0
      li        r6, 0
      stw       r5, 0x2C(r30)
      stw       r5, 0x30(r30)
      b         .loc_0x110

    .loc_0xF8:
      lhz       r4, 0x6(r30)
      addi      r0, r5, 0x28
      lwz       r3, 0x8(r30)
      addi      r5, r5, 0x2C
      addi      r6, r6, 0x1
      sthx      r4, r3, r0

    .loc_0x110:
      lhz       r3, 0x0(r30)
      lhz       r0, 0x2(r30)
      mullw     r0, r3, r0
      cmpw      r6, r0
      blt+      .loc_0xF8
      li        r6, 0
      li        r5, 0
      b         .loc_0x550

    .loc_0x130:
      li        r7, 0
      li        r4, 0
      b         .loc_0x53C

    .loc_0x13C:
      cmpwi     r6, 0
      blt-      .loc_0x160
      cmpwi     r7, 0
      blt-      .loc_0x160
      lhz       r3, 0x0(r30)
      cmpw      r6, r3
      bge-      .loc_0x160
      cmpw      r7, r0
      blt-      .loc_0x168

    .loc_0x160:
      li        r3, 0
      b         .loc_0x17C

    .loc_0x168:
      mullw     r0, r7, r3
      lwz       r3, 0x8(r30)
      add       r0, r6, r0
      mulli     r0, r0, 0x2C
      add       r3, r3, r0

    .loc_0x17C:
      cmpwi     r5, 0
      blt-      .loc_0x1A4
      cmpwi     r4, 0
      blt-      .loc_0x1A4
      lhz       r8, 0x0(r31)
      cmpw      r5, r8
      bge-      .loc_0x1A4
      lhz       r0, 0x2(r31)
      cmpw      r4, r0
      blt-      .loc_0x1AC

    .loc_0x1A4:
      li        r8, 0
      b         .loc_0x1C0

    .loc_0x1AC:
      mullw     r0, r4, r8
      lwz       r8, 0x8(r31)
      add       r0, r5, r0
      mulli     r0, r0, 0x2C
      add       r8, r8, r0

    .loc_0x1C0:
      addic.    r0, r5, 0x1
      stw       r8, 0x0(r3)
      blt-      .loc_0x1F0
      cmpwi     r4, 0
      blt-      .loc_0x1F0
      lhz       r8, 0x0(r31)
      addi      r0, r5, 0x1
      cmpw      r0, r8
      bge-      .loc_0x1F0
      lhz       r0, 0x2(r31)
      cmpw      r4, r0
      blt-      .loc_0x1F8

    .loc_0x1F0:
      li        r0, 0
      b         .loc_0x210

    .loc_0x1F8:
      mullw     r0, r4, r8
      lwz       r9, 0x8(r31)
      add       r8, r5, r0
      addi      r0, r8, 0x1
      mulli     r0, r0, 0x2C
      add       r0, r9, r0

    .loc_0x210:
      cmpwi     r5, 0
      stw       r0, 0x4(r3)
      blt-      .loc_0x240
      addic.    r0, r4, 0x1
      blt-      .loc_0x240
      lhz       r9, 0x0(r31)
      cmpw      r5, r9
      bge-      .loc_0x240
      lhz       r0, 0x2(r31)
      addi      r8, r4, 0x1
      cmpw      r8, r0
      blt-      .loc_0x248

    .loc_0x240:
      li        r8, 0
      b         .loc_0x25C

    .loc_0x248:
      mullw     r0, r8, r9
      lwz       r8, 0x8(r31)
      add       r0, r5, r0
      mulli     r0, r0, 0x2C
      add       r8, r8, r0

    .loc_0x25C:
      addic.    r0, r5, 0x1
      stw       r8, 0x8(r3)
      blt-      .loc_0x290
      addic.    r0, r4, 0x1
      blt-      .loc_0x290
      lhz       r9, 0x0(r31)
      addi      r0, r5, 0x1
      cmpw      r0, r9
      bge-      .loc_0x290
      lhz       r0, 0x2(r31)
      addi      r8, r4, 0x1
      cmpw      r8, r0
      blt-      .loc_0x298

    .loc_0x290:
      li        r0, 0
      b         .loc_0x2B0

    .loc_0x298:
      mullw     r0, r8, r9
      lwz       r9, 0x8(r31)
      add       r8, r5, r0
      addi      r0, r8, 0x1
      mulli     r0, r0, 0x2C
      add       r0, r9, r0

    .loc_0x2B0:
      cmpwi     r5, 0
      stw       r0, 0xC(r3)
      blt-      .loc_0x2DC
      cmpwi     r4, 0
      blt-      .loc_0x2DC
      lhz       r8, 0x0(r31)
      cmpw      r5, r8
      bge-      .loc_0x2DC
      lhz       r0, 0x2(r31)
      cmpw      r4, r0
      blt-      .loc_0x2E4

    .loc_0x2DC:
      li        r0, 0
      b         .loc_0x2F8

    .loc_0x2E4:
      mullw     r0, r4, r8
      lwz       r8, 0x8(r31)
      add       r0, r5, r0
      mulli     r0, r0, 0x2C
      add       r0, r8, r0

    .loc_0x2F8:
      cmplwi    r0, 0
      beq-      .loc_0x348
      cmpwi     r5, 0
      blt-      .loc_0x328
      cmpwi     r4, 0
      blt-      .loc_0x328
      lhz       r8, 0x0(r31)
      cmpw      r5, r8
      bge-      .loc_0x328
      lhz       r0, 0x2(r31)
      cmpw      r4, r0
      blt-      .loc_0x330

    .loc_0x328:
      li        r8, 0
      b         .loc_0x344

    .loc_0x330:
      mullw     r0, r4, r8
      lwz       r8, 0x8(r31)
      add       r0, r5, r0
      mulli     r0, r0, 0x2C
      add       r8, r8, r0

    .loc_0x344:
      stw       r3, 0x10(r8)

    .loc_0x348:
      addic.    r0, r5, 0x1
      blt-      .loc_0x374
      cmpwi     r4, 0
      blt-      .loc_0x374
      lhz       r8, 0x0(r31)
      addi      r0, r5, 0x1
      cmpw      r0, r8
      bge-      .loc_0x374
      lhz       r0, 0x2(r31)
      cmpw      r4, r0
      blt-      .loc_0x37C

    .loc_0x374:
      li        r0, 0
      b         .loc_0x394

    .loc_0x37C:
      mullw     r0, r4, r8
      lwz       r9, 0x8(r31)
      add       r8, r5, r0
      addi      r0, r8, 0x1
      mulli     r0, r0, 0x2C
      add       r0, r9, r0

    .loc_0x394:
      cmplwi    r0, 0
      beq-      .loc_0x3EC
      addic.    r0, r5, 0x1
      blt-      .loc_0x3C8
      cmpwi     r4, 0
      blt-      .loc_0x3C8
      lhz       r8, 0x0(r31)
      addi      r0, r5, 0x1
      cmpw      r0, r8
      bge-      .loc_0x3C8
      lhz       r0, 0x2(r31)
      cmpw      r4, r0
      blt-      .loc_0x3D0

    .loc_0x3C8:
      li        r8, 0
      b         .loc_0x3E8

    .loc_0x3D0:
      mullw     r0, r4, r8
      lwz       r9, 0x8(r31)
      add       r8, r5, r0
      addi      r0, r8, 0x1
      mulli     r0, r0, 0x2C
      add       r8, r9, r0

    .loc_0x3E8:
      stw       r3, 0x10(r8)

    .loc_0x3EC:
      cmpwi     r5, 0
      blt-      .loc_0x418
      addic.    r0, r4, 0x1
      blt-      .loc_0x418
      lhz       r9, 0x0(r31)
      cmpw      r5, r9
      bge-      .loc_0x418
      lhz       r0, 0x2(r31)
      addi      r8, r4, 0x1
      cmpw      r8, r0
      blt-      .loc_0x420

    .loc_0x418:
      li        r0, 0
      b         .loc_0x434

    .loc_0x420:
      mullw     r0, r8, r9
      lwz       r8, 0x8(r31)
      add       r0, r5, r0
      mulli     r0, r0, 0x2C
      add       r0, r8, r0

    .loc_0x434:
      cmplwi    r0, 0
      beq-      .loc_0x488
      cmpwi     r5, 0
      blt-      .loc_0x468
      addic.    r0, r4, 0x1
      blt-      .loc_0x468
      lhz       r9, 0x0(r31)
      cmpw      r5, r9
      bge-      .loc_0x468
      lhz       r0, 0x2(r31)
      addi      r8, r4, 0x1
      cmpw      r8, r0
      blt-      .loc_0x470

    .loc_0x468:
      li        r8, 0
      b         .loc_0x484

    .loc_0x470:
      mullw     r0, r8, r9
      lwz       r8, 0x8(r31)
      add       r0, r5, r0
      mulli     r0, r0, 0x2C
      add       r8, r8, r0

    .loc_0x484:
      stw       r3, 0x10(r8)

    .loc_0x488:
      addic.    r0, r5, 0x1
      blt-      .loc_0x4B8
      addic.    r0, r4, 0x1
      blt-      .loc_0x4B8
      lhz       r9, 0x0(r31)
      addi      r0, r5, 0x1
      cmpw      r0, r9
      bge-      .loc_0x4B8
      lhz       r0, 0x2(r31)
      addi      r8, r4, 0x1
      cmpw      r8, r0
      blt-      .loc_0x4C0

    .loc_0x4B8:
      li        r0, 0
      b         .loc_0x4D8

    .loc_0x4C0:
      mullw     r0, r8, r9
      lwz       r9, 0x8(r31)
      add       r8, r5, r0
      addi      r0, r8, 0x1
      mulli     r0, r0, 0x2C
      add       r0, r9, r0

    .loc_0x4D8:
      cmplwi    r0, 0
      beq-      .loc_0x534
      addic.    r0, r5, 0x1
      blt-      .loc_0x510
      addic.    r0, r4, 0x1
      blt-      .loc_0x510
      lhz       r9, 0x0(r31)
      addi      r0, r5, 0x1
      cmpw      r0, r9
      bge-      .loc_0x510
      lhz       r0, 0x2(r31)
      addi      r8, r4, 0x1
      cmpw      r8, r0
      blt-      .loc_0x518

    .loc_0x510:
      li        r8, 0
      b         .loc_0x530

    .loc_0x518:
      mullw     r0, r8, r9
      lwz       r9, 0x8(r31)
      add       r8, r5, r0
      addi      r0, r8, 0x1
      mulli     r0, r0, 0x2C
      add       r8, r9, r0

    .loc_0x530:
      stw       r3, 0x10(r8)

    .loc_0x534:
      addi      r4, r4, 0x2
      addi      r7, r7, 0x1

    .loc_0x53C:
      lhz       r0, 0x2(r30)
      cmpw      r7, r0
      blt+      .loc_0x13C
      addi      r5, r5, 0x2
      addi      r6, r6, 0x1

    .loc_0x550:
      lhz       r0, 0x0(r30)
      cmpw      r6, r0
      blt+      .loc_0x130
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void drawCell__Q24Game9CellLayerFR8GraphicsR10Vector3<float> iif(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801582BC
 * Size:	00003C
 */
void Game::CellPyramid::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0xE4518
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2C(r31)
      stw       r0, 0x28(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801582F8
 * Size:	000098
 */
void Game::CellPyramid::clear(void)
{
    /*
    .loc_0x0:
      li        r11, 0
      li        r10, 0
      b         .loc_0x70

    .loc_0xC:
      lwz       r0, 0x30(r3)
      li        r6, 0
      mr        r7, r6
      add       r8, r0, r10
      mr        r9, r6
      stw       r6, 0x2C(r8)
      stw       r6, 0x30(r8)
      b         .loc_0x54

    .loc_0x2C:
      lwz       r4, 0x8(r8)
      addi      r0, r9, 0x28
      addi      r7, r7, 0x1
      add       r4, r4, r9
      addi      r9, r9, 0x2C
      stw       r6, 0x1C(r4)
      sth       r6, 0x18(r4)
      lhz       r5, 0x6(r8)
      lwz       r4, 0x8(r8)
      sthx      r5, r4, r0

    .loc_0x54:
      lhz       r4, 0x0(r8)
      lhz       r0, 0x2(r8)
      mullw     r0, r4, r0
      cmpw      r7, r0
      blt+      .loc_0x2C
      addi      r10, r10, 0x38
      addi      r11, r11, 0x1

    .loc_0x70:
      lwz       r0, 0x2C(r3)
      cmpw      r11, r0
      blt+      .loc_0xC
      li        r0, 0
      stw       r0, 0x44(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0x1C(r3)
      stw       r0, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80158390
 * Size:	000190
 */
void calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<int>(void)
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
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      stw       r28, 0x40(r1)
      mr        r29, r4
      mr        r28, r3
      lfs       f2, -0x5D18(r2)
      mr        r30, r5
      lfs       f1, 0xC(r4)
      mr        r31, r6
      lfs       f0, 0x38(r3)
      fmuls     f2, f2, f1
      lfd       f1, -0x5D10(r2)
      fmuls     f30, f2, f0
      bl        -0x889F8
      frsp      f31, f1
      fmr       f1, f30
      bl        -0x88A04
      frsp      f1, f1
      lfs       f0, -0x5D38(r2)
      fdivs     f1, f1, f31
      fcmpo     cr0, f1, f0
      bge-      .loc_0x7C
      fmr       f1, f0

    .loc_0x7C:
      bl        -0x892C4
      frsp      f0, f1
      lwz       r3, 0x2C(r28)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r5, 0xC(r1)
      cmpw      r5, r3
      blt-      .loc_0xA0
      subi      r5, r3, 0x1

    .loc_0xA0:
      mulli     r3, r5, 0x38
      lis       r0, 0x4330
      lwz       r4, 0x30(r28)
      stw       r0, 0x10(r1)
      addi      r0, r3, 0x4
      lfd       f2, -0x5D28(r2)
      lhzx      r0, r4, r0
      lfs       f1, 0x34(r28)
      stw       r0, 0x14(r1)
      lfs       f3, -0x5D08(r2)
      lfd       f0, 0x10(r1)
      lfs       f5, 0xC(r29)
      fsubs     f2, f0, f2
      lfs       f4, 0x0(r29)
      lfs       f6, 0x8(r29)
      fsubs     f0, f4, f5
      lfs       f8, 0x40(r28)
      fmuls     f1, f2, f1
      fadds     f2, f4, f5
      lfs       f7, 0x3C(r28)
      fsubs     f4, f6, f5
      fdivs     f9, f3, f1
      fsubs     f1, f0, f8
      fsubs     f3, f4, f7
      fadds     f0, f6, f5
      fmuls     f1, f1, f9
      fsubs     f4, f2, f8
      fmuls     f2, f3, f9
      fctiwz    f3, f1
      fsubs     f0, f0, f7
      fmuls     f1, f4, f9
      fctiwz    f2, f2
      stfd      f3, 0x18(r1)
      fmuls     f0, f0, f9
      fctiwz    f1, f1
      lwz       r0, 0x1C(r1)
      stfd      f2, 0x20(r1)
      fctiwz    f0, f0
      stfd      f1, 0x28(r1)
      lwz       r3, 0x24(r1)
      stw       r0, 0x0(r31)
      lwz       r0, 0x2C(r1)
      stw       r3, 0x4(r31)
      stfd      f0, 0x30(r1)
      stw       r0, 0x8(r31)
      lwz       r0, 0x34(r1)
      stw       r0, 0xC(r31)
      stw       r5, 0x0(r30)
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      lwz       r0, 0x74(r1)
      lwz       r28, 0x40(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80158520
 * Size:	000034
 */
void Game::CellPyramid::entry((Game::CellObject*, Sys::Sphere&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      addi      r6, r1, 0x8
      addi      r7, r1, 0xC
      stw       r3, -0x6D28(r13)
      bl        .loc_0x34
      li        r0, 0
      stw       r0, -0x6D28(r13)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x34:
    */
}

/*
 * --INFO--
 * Address:	80158554
 * Size:	0004B8
 */
void entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6SphereRiR7Rect<
    int>(void)
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
      stmw      r22, 0x38(r1)
      mr        r25, r3
      lis       r3, 0x8048
      stw       r25, -0x6D28(r13)
      mr        r26, r5
      lfs       f2, -0x5D18(r2)
      mr        r24, r4
      lfs       f1, 0xC(r5)
      mr        r22, r6
      lfs       f0, 0x38(r25)
      mr        r23, r7
      fmuls     f2, f2, f1
      lfd       f1, -0x5D10(r2)
      subi      r31, r3, 0x3020
      fmuls     f31, f2, f0
      bl        -0x88BC0
      frsp      f30, f1
      fmr       f1, f31
      bl        -0x88BCC
      frsp      f1, f1
      lfs       f0, -0x5D38(r2)
      fdivs     f1, f1, f30
      fcmpo     cr0, f1, f0
      bge-      .loc_0x80
      fmr       f1, f0

    .loc_0x80:
      bl        -0x8948C
      frsp      f0, f1
      lwz       r3, 0x2C(r25)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r5, 0xC(r1)
      cmpw      r5, r3
      blt-      .loc_0xA4
      subi      r5, r3, 0x1

    .loc_0xA4:
      mulli     r3, r5, 0x38
      lis       r0, 0x4330
      lwz       r4, 0x30(r25)
      stw       r0, 0x10(r1)
      addi      r0, r3, 0x4
      lfd       f2, -0x5D28(r2)
      lhzx      r0, r4, r0
      lfs       f1, 0x34(r25)
      stw       r0, 0x14(r1)
      lfs       f3, -0x5D08(r2)
      lfd       f0, 0x10(r1)
      lfs       f6, 0xC(r26)
      fsubs     f2, f0, f2
      lfs       f4, 0x0(r26)
      lfs       f7, 0x8(r26)
      fsubs     f0, f4, f6
      lfs       f9, 0x40(r25)
      fmuls     f1, f2, f1
      fadds     f2, f4, f6
      lfs       f8, 0x3C(r25)
      fsubs     f4, f7, f6
      fdivs     f5, f3, f1
      fsubs     f1, f0, f9
      fsubs     f3, f4, f8
      fadds     f0, f7, f6
      fmuls     f1, f1, f5
      fsubs     f4, f2, f9
      fmuls     f2, f3, f5
      fctiwz    f3, f1
      fsubs     f0, f0, f8
      fmuls     f1, f4, f5
      fctiwz    f2, f2
      stfd      f3, 0x18(r1)
      fmuls     f0, f0, f5
      fctiwz    f1, f1
      lwz       r0, 0x1C(r1)
      stfd      f2, 0x20(r1)
      fctiwz    f0, f0
      stfd      f1, 0x28(r1)
      lwz       r3, 0x24(r1)
      stw       r0, 0x0(r23)
      lwz       r0, 0x2C(r1)
      stw       r3, 0x4(r23)
      stfd      f0, 0x30(r1)
      stw       r0, 0x8(r23)
      lwz       r0, 0x34(r1)
      stw       r0, 0xC(r23)
      stw       r5, 0x0(r22)
      lwz       r6, 0x0(r22)
      cmpwi     r6, 0
      blt-      .loc_0x17C
      lwz       r0, 0x2C(r25)
      cmpw      r6, r0
      blt-      .loc_0x198

    .loc_0x17C:
      lwz       r7, 0x2C(r25)
      addi      r3, r31, 0xC
      addi      r5, r31, 0x3C
      li        r4, 0x4B6
      crclr     6, 0x6
      bl        -0x12E0A4
      b         .loc_0x494

    .loc_0x198:
      mr        r3, r24
      lwz       r4, 0x30(r25)
      lwz       r12, 0x0(r24)
      mulli     r0, r6, 0x38
      li        r25, 0
      lwz       r12, 0x18(r12)
      add       r27, r4, r0
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1E0
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E4

    .loc_0x1E0:
      li        r25, 0x1

    .loc_0x1E4:
      rlwinm    r3,r25,0,24,31
      mr        r29, r24
      neg       r0, r3
      li        r26, 0
      or        r0, r0, r3
      rlwinm    r30,r0,1,31,31

    .loc_0x1FC:
      lwz       r28, 0x5C(r29)
      cmplwi    r28, 0
      beq-      .loc_0x33C
      lwz       r3, 0x1C(r28)
      addi      r0, r29, 0x54
      cmplw     r3, r0
      bne-      .loc_0x234
      lwz       r0, 0x54(r29)
      stw       r0, 0x1C(r28)
      lwz       r3, 0x1C(r28)
      cmplwi    r3, 0
      beq-      .loc_0x234
      li        r0, 0
      stw       r0, 0x4(r3)

    .loc_0x234:
      cmplwi    r30, 0
      beq-      .loc_0x270
      lhz       r3, 0x14(r28)
      cmplwi    r3, 0
      beq-      .loc_0x270
      subi      r0, r3, 0x1
      sth       r0, 0x14(r28)
      lwz       r4, 0x10(r28)
      b         .loc_0x268

    .loc_0x258:
      lhz       r3, 0x16(r4)
      subi      r0, r3, 0x1
      sth       r0, 0x16(r4)
      lwz       r4, 0x10(r4)

    .loc_0x268:
      cmplwi    r4, 0
      bne+      .loc_0x258

    .loc_0x270:
      lhz       r3, 0x18(r28)
      subi      r0, r3, 0x1
      sth       r0, 0x18(r28)
      lwz       r4, 0x10(r28)
      b         .loc_0x294

    .loc_0x284:
      lhz       r3, 0x18(r4)
      subi      r0, r3, 0x1
      sth       r0, 0x18(r4)
      lwz       r4, 0x10(r4)

    .loc_0x294:
      cmplwi    r4, 0
      bne+      .loc_0x284
      lwz       r3, 0x58(r29)
      cmplwi    r3, 0
      beq-      .loc_0x2B0
      lwz       r0, 0x54(r29)
      stw       r0, 0x0(r3)

    .loc_0x2B0:
      lwz       r3, 0x54(r29)
      cmplwi    r3, 0
      beq-      .loc_0x2C4
      lwz       r0, 0x58(r29)
      stw       r0, 0x4(r3)

    .loc_0x2C4:
      li        r0, 0
      stw       r0, 0x58(r29)
      stw       r0, 0x54(r29)
      lwz       r0, 0x1C(r28)
      cmplwi    r0, 0
      bne-      .loc_0x334
      lwz       r0, -0x6D28(r13)
      cmplwi    r0, 0
      beq-      .loc_0x334
      bne-      .loc_0x300
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x312
      crclr     6, 0x6
      bl        -0x12E210

    .loc_0x300:
      lwz       r3, 0x24(r28)
      cmplwi    r3, 0
      beq-      .loc_0x328
      lwz       r0, 0x20(r28)
      stw       r0, 0x20(r3)
      lwz       r3, 0x20(r28)
      cmplwi    r3, 0
      beq-      .loc_0x328
      lwz       r0, 0x24(r28)
      stw       r0, 0x24(r3)

    .loc_0x328:
      li        r0, 0
      stw       r0, 0x24(r28)
      stw       r0, 0x20(r28)

    .loc_0x334:
      li        r0, 0
      stw       r0, 0x5C(r29)

    .loc_0x33C:
      addi      r26, r26, 0x1
      addi      r29, r29, 0x14
      cmpwi     r26, 0x4
      blt+      .loc_0x1FC
      lwz       r5, 0x0(r23)
      li        r26, 0
      lwz       r4, 0x8(r23)
      lwz       r3, 0x4(r23)
      lwz       r0, 0xC(r23)
      sub       r4, r4, r5
      sub       r0, r0, r3
      mullw     r0, r4, r0
      cmpwi     r0, 0xA
      ble-      .loc_0x38C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x6C
      li        r4, 0x57D
      crclr     6, 0x6
      bl        -0x12E298
      b         .loc_0x494

    .loc_0x38C:
      mr        r25, r5
      mr        r28, r24
      b         .loc_0x480

    .loc_0x398:
      lwz       r24, 0x4(r23)
      mr        r29, r28
      b         .loc_0x470

    .loc_0x3A4:
      cmpwi     r25, 0
      blt-      .loc_0x3CC
      cmpwi     r24, 0
      blt-      .loc_0x3CC
      lhz       r3, 0x0(r27)
      cmpw      r25, r3
      bge-      .loc_0x3CC
      lhz       r0, 0x2(r27)
      cmpw      r24, r0
      blt-      .loc_0x3D4

    .loc_0x3CC:
      li        r22, 0
      b         .loc_0x3E8

    .loc_0x3D4:
      mullw     r0, r24, r3
      lwz       r3, 0x8(r27)
      add       r0, r25, r0
      mulli     r0, r0, 0x2C
      add       r22, r3, r0

    .loc_0x3E8:
      cmplwi    r22, 0
      beq-      .loc_0x460
      cmpwi     r26, 0x4
      blt-      .loc_0x404
      li        r0, 0
      stw       r0, -0x6D28(r13)
      b         .loc_0x494

    .loc_0x404:
      mr        r3, r22
      mr        r5, r30
      addi      r4, r29, 0x54
      bl        -0xF54
      lwz       r3, 0x1C(r22)
      addi      r0, r29, 0x54
      b         .loc_0x434

    .loc_0x420:
      cmplw     r3, r0
      bne-      .loc_0x430
      li        r0, 0x1
      b         .loc_0x440

    .loc_0x430:
      lwz       r3, 0x0(r3)

    .loc_0x434:
      cmplwi    r3, 0
      bne+      .loc_0x420
      li        r0, 0

    .loc_0x440:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x460
      addi      r3, r31, 0xC
      addi      r5, r31, 0x88
      li        r4, 0x59F
      crclr     6, 0x6
      bl        -0x12E36C
      b         .loc_0x494

    .loc_0x460:
      addi      r29, r29, 0x14
      addi      r28, r28, 0x14
      addi      r26, r26, 0x1
      addi      r24, r24, 0x1

    .loc_0x470:
      lwz       r0, 0xC(r23)
      cmpw      r24, r0
      ble+      .loc_0x3A4
      addi      r25, r25, 0x1

    .loc_0x480:
      lwz       r0, 0x8(r23)
      cmpw      r25, r0
      ble+      .loc_0x398
      li        r0, 0
      stw       r0, -0x6D28(r13)

    .loc_0x494:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      lmw       r22, 0x38(r1)
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	80158A0C
 * Size:	0002EC
 */
void Game::CellPyramid::create((BoundBox2d&, float))
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
      stmw      r27, 0x2C(r1)
      fmr       f31, f1
      mr        r31, r3
      lwz       r3, -0x77D4(r13)
      mr        r27, r4
      bl        -0x135290
      lfs       f0, -0x5D08(r2)
      stw       r3, 0x28(r31)
      fdivs     f0, f0, f31
      lfs       f2, 0x0(r27)
      lfs       f1, 0x4(r27)
      stfs      f1, 0x3C(r31)
      stfs      f2, 0x40(r31)
      lfs       f4, 0x8(r27)
      lfs       f3, 0x0(r27)
      lfs       f2, 0xC(r27)
      lfs       f1, 0x4(r27)
      fsubs     f3, f4, f3
      stfs      f31, 0x34(r31)
      fsubs     f1, f2, f1
      fabs      f2, f3
      stfs      f0, 0x38(r31)
      fabs      f1, f1
      frsp      f30, f2
      lfs       f0, 0x38(r31)
      frsp      f29, f1
      fmuls     f1, f30, f0
      bl        -0x89954
      frsp      f2, f1
      lfs       f0, 0x38(r31)
      fmuls     f1, f29, f0
      fctiwz    f0, f2
      stfd      f0, 0x8(r1)
      lwz       r28, 0xC(r1)
      bl        -0x89970
      frsp      f0, f1
      cmpwi     r28, 0xC8
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r27, 0x14(r1)
      bgt-      .loc_0xD0
      cmpwi     r27, 0xC8
      ble-      .loc_0x120

    .loc_0xD0:
      lfs       f1, -0x5D04(r2)
      lfs       f0, -0x5D08(r2)
      fmuls     f31, f31, f1
      fdivs     f0, f0, f31
      stfs      f31, 0x34(r31)
      stfs      f0, 0x38(r31)
      lfs       f0, 0x38(r31)
      fmuls     f1, f30, f0
      bl        -0x899B4
      frsp      f2, f1
      lfs       f0, 0x38(r31)
      fmuls     f1, f29, f0
      fctiwz    f0, f2
      stfd      f0, 0x10(r1)
      lwz       r28, 0x14(r1)
      bl        -0x899D0
      frsp      f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r27, 0xC(r1)

    .loc_0x120:
      cmpw      r28, r27
      mr        r30, r27
      ble-      .loc_0x130
      mr        r30, r28

    .loc_0x130:
      lfd       f1, -0x5D10(r2)
      bl        -0x89154
      xoris     r3, r30, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      frsp      f29, f1
      lfd       f1, -0x5D00(r2)
      stw       r0, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f1, f0, f1
      bl        -0x89178
      frsp      f0, f1
      fdivs     f1, f0, f29
      bl        -0x89A28
      frsp      f0, f1
      lis       r0, 0x4330
      stw       r0, 0x18(r1)
      lfd       f2, -0x5D00(r2)
      fctiwz    f0, f0
      lfd       f1, -0x5D10(r2)
      stfd      f0, 0x8(r1)
      lwz       r29, 0xC(r1)
      xoris     r0, r29, 0x8000
      stw       r0, 0x1C(r1)
      lfd       f0, 0x18(r1)
      fsub      f2, f0, f2
      bl        -0x89198
      addi      r0, r29, 0x1
      stw       r0, 0x2C(r31)
      lwz       r30, 0x2C(r31)
      mulli     r3, r30, 0x38
      addi      r3, r3, 0x10
      bl        -0x134C10
      lis       r4, 0x8016
      mr        r7, r30
      subi      r4, r4, 0x7308
      li        r5, 0
      li        r6, 0x38
      bl        -0x971E4
      stw       r3, 0x30(r31)
      li        r3, 0x1
      li        r0, 0
      lwz       r29, 0x30(r31)
      sth       r28, 0x0(r29)
      sth       r27, 0x2(r29)
      sth       r3, 0x4(r29)
      sth       r0, 0x6(r29)
      lhz       r3, 0x0(r29)
      lhz       r0, 0x2(r29)
      mullw     r30, r3, r0
      mulli     r3, r30, 0x2C
      addi      r3, r3, 0x10
      bl        -0x134C60
      lis       r4, 0x8015
      mr        r7, r30
      addi      r4, r4, 0x6740
      li        r5, 0
      li        r6, 0x2C
      bl        -0x97234
      stw       r3, 0x8(r29)
      li        r5, 0
      mr        r6, r5
      stw       r5, 0x2C(r29)
      mr        r7, r5
      stw       r5, 0x30(r29)
      b         .loc_0x260

    .loc_0x238:
      lwz       r3, 0x8(r29)
      addi      r0, r7, 0x28
      addi      r6, r6, 0x1
      add       r3, r3, r7
      addi      r7, r7, 0x2C
      stw       r5, 0x1C(r3)
      sth       r5, 0x18(r3)
      lhz       r4, 0x6(r29)
      lwz       r3, 0x8(r29)
      sthx      r4, r3, r0

    .loc_0x260:
      lhz       r3, 0x0(r29)
      lhz       r0, 0x2(r29)
      mullw     r0, r3, r0
      cmpw      r6, r0
      blt+      .loc_0x238
      li        r27, 0x1
      li        r29, 0x38
      b         .loc_0x2A0

    .loc_0x280:
      subi      r0, r27, 0x1
      lwz       r4, 0x30(r31)
      mulli     r0, r0, 0x38
      add       r3, r4, r29
      add       r4, r4, r0
      bl        -0xF5C
      addi      r29, r29, 0x38
      addi      r27, r27, 0x1

    .loc_0x2A0:
      lwz       r0, 0x2C(r31)
      cmpw      r27, r0
      blt+      .loc_0x280
      lwz       r3, -0x77D4(r13)
      bl        -0x135508
      lwz       r0, 0x28(r31)
      sub       r0, r0, r3
      stw       r0, 0x28(r31)
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80158CF8
 * Size:	00003C
 */
void Game::CellLayer::__ct(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0x18(r3)
      stw       r4, 0x14(r3)
      stw       r4, 0x10(r3)
      stw       r4, 0xC(r3)
      stw       r4, 0x28(r3)
      stw       r4, 0x1C(r3)
      sth       r4, 0x20(r3)
      sth       r4, 0x22(r3)
      sth       r4, 0x24(r3)
      stw       r4, 0x30(r3)
      stw       r4, 0x2C(r3)
      sth       r0, 0x34(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::CellPyramid::drawCell((Graphics&, Sys::Sphere&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void assertExtent__Q24Game9CellLayerFR7Rect<int>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void checkPoint__Q24Game9CellLayerFR10Vector2<int>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80158D34
 * Size:	000134
 */
void getPikiCount__Q24Game11CellPyramidFiR7Rect<int>(void)
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
      lbz       r0, -0x6D2C(r13)
      cmplwi    r0, 0
      beq-      .loc_0x38
      li        r3, 0x1
      b         .loc_0x118

    .loc_0x38:
      cmpwi     r30, 0
      blt-      .loc_0x4C
      lwz       r0, 0x2C(r29)
      cmpw      r30, r0
      blt-      .loc_0x70

    .loc_0x4C:
      lis       r3, 0x8048
      lis       r4, 0x8048
      subi      r5, r4, 0x2FE4
      lwz       r7, 0x2C(r29)
      subi      r3, r3, 0x3014
      mr        r6, r30
      li        r4, 0x61D
      crclr     6, 0x6
      bl        -0x12E760

    .loc_0x70:
      mulli     r0, r30, 0x38
      lwz       r4, 0x30(r29)
      lwz       r7, 0x0(r31)
      li        r3, 0
      lwz       r5, 0x8(r31)
      add       r6, r4, r0
      b         .loc_0x110

    .loc_0x8C:
      lwz       r4, 0xC(r31)
      lwz       r8, 0x4(r31)
      addi      r0, r4, 0x1
      sub       r0, r0, r8
      mtctr     r0
      cmpw      r8, r4
      bgt-      .loc_0x10C

    .loc_0xA8:
      cmpwi     r7, 0
      blt-      .loc_0xD0
      cmpwi     r8, 0
      blt-      .loc_0xD0
      lhz       r4, 0x0(r6)
      cmpw      r7, r4
      bge-      .loc_0xD0
      lhz       r0, 0x2(r6)
      cmpw      r8, r0
      blt-      .loc_0xD8

    .loc_0xD0:
      li        r4, 0
      b         .loc_0xEC

    .loc_0xD8:
      mullw     r0, r8, r4
      lwz       r4, 0x8(r6)
      add       r0, r7, r0
      mulli     r0, r0, 0x2C
      add       r4, r4, r0

    .loc_0xEC:
      cmplwi    r4, 0
      beq-      .loc_0x104
      lhz       r0, 0x16(r4)
      lhz       r4, 0x14(r4)
      add       r3, r0, r3
      add       r3, r4, r3

    .loc_0x104:
      addi      r8, r8, 0x1
      bdnz+     .loc_0xA8

    .loc_0x10C:
      addi      r7, r7, 0x1

    .loc_0x110:
      cmpw      r7, r5
      ble+      .loc_0x8C

    .loc_0x118:
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
 * Address:	........
 * Size:	000004
 */
void drawCell__Q24Game11CellPyramidFR8GraphicsiR7Rect<int> f(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::CellPyramid::drawCell((Graphics&, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::CellPyramid::drawCell((Graphics&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Game::CellPyramid::dumpCount((int&, int&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80158E68
 * Size:	0000F8
 */
void Game::Cell::resolveCollision_2(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r31, 0x1C(r3)
      b         .loc_0xD0

    .loc_0x28:
      lwz       r30, 0x0(r31)
      b         .loc_0x68

    .loc_0x30:
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x64
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x64:
      lwz       r30, 0x0(r30)

    .loc_0x68:
      cmplwi    r30, 0
      bne+      .loc_0x30
      lwz       r30, 0x10(r28)
      b         .loc_0xC4

    .loc_0x78:
      lwz       r29, 0x1C(r30)
      b         .loc_0xB8

    .loc_0x80:
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB4
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xB4:
      lwz       r29, 0x0(r29)

    .loc_0xB8:
      cmplwi    r29, 0
      bne+      .loc_0x80
      lwz       r30, 0x10(r30)

    .loc_0xC4:
      cmplwi    r30, 0
      bne+      .loc_0x78
      lwz       r31, 0x0(r31)

    .loc_0xD0:
      cmplwi    r31, 0
      bne+      .loc_0x28
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
 * Address:	80158F60
 * Size:	000100
 */
void Game::Cell::resolveCollision_1(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r31, 0x1C(r3)
      b         .loc_0xD8

    .loc_0x28:
      lwz       r30, 0x0(r31)
      b         .loc_0x6C

    .loc_0x30:
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r30)
      cmplw     r3, r4
      beq-      .loc_0x68
      lwz       r0, 0xA4(r4)
      cmplw     r0, r3
      beq-      .loc_0x68
      stw       r3, 0xA4(r4)
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x68:
      lwz       r30, 0x0(r30)

    .loc_0x6C:
      cmplwi    r30, 0
      bne+      .loc_0x30
      lwz       r30, 0x10(r28)
      b         .loc_0xCC

    .loc_0x7C:
      lwz       r29, 0x1C(r30)
      b         .loc_0xC0

    .loc_0x84:
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r29)
      cmplw     r3, r4
      beq-      .loc_0xBC
      lwz       r0, 0xA4(r4)
      cmplw     r0, r3
      beq-      .loc_0xBC
      stw       r3, 0xA4(r4)
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
      lwz       r29, 0x0(r29)

    .loc_0xC0:
      cmplwi    r29, 0
      bne+      .loc_0x84
      lwz       r30, 0x10(r30)

    .loc_0xCC:
      cmplwi    r30, 0
      bne+      .loc_0x7C
      lwz       r31, 0x0(r31)

    .loc_0xD8:
      cmplwi    r31, 0
      bne+      .loc_0x28
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
 * Address:	80159060
 * Size:	0001E0
 */
void Game::Cell::resolveCollision_3(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r30, r3
      lwz       r31, 0x1C(r3)
      b         .loc_0x1C4

    .loc_0x1C:
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x9C
      lwz       r27, 0xC(r31)
      lwz       r3, -0x6D38(r13)
      lwz       r4, 0xA4(r27)
      lwz       r0, 0x44(r3)
      cmplw     r4, r0
      beq-      .loc_0x1C0
      li        r29, 0
      mr        r28, r29
      b         .loc_0x80

    .loc_0x5C:
      mr        r3, r27
      lwz       r4, 0xB0(r27)
      lwz       r12, 0x0(r27)
      lwzx      r4, r4, r28
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r28, r28, 0x8
      addi      r29, r29, 0x1

    .loc_0x80:
      lwz       r0, 0xAC(r27)
      cmpw      r29, r0
      blt+      .loc_0x5C
      lwz       r3, -0x6D38(r13)
      lwz       r0, 0x44(r3)
      stw       r0, 0xA4(r27)
      b         .loc_0x1C0

    .loc_0x9C:
      lwz       r27, 0x0(r31)
      b         .loc_0x11C

    .loc_0xA4:
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r27)
      cmplw     r3, r4
      beq-      .loc_0x118
      lwz       r5, -0x69F8(r13)
      lbz       r0, 0x58(r5)
      cmplwi    r0, 0
      beq-      .loc_0xFC
      lwz       r0, 0xA4(r3)
      cmplw     r4, r0
      beq-      .loc_0x118
      stw       r4, 0xA4(r3)
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r27)
      bl        -0x240C
      b         .loc_0x118

    .loc_0xFC:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r27)
      bl        -0x242C

    .loc_0x118:
      lwz       r27, 0x0(r27)

    .loc_0x11C:
      cmplwi    r27, 0
      bne+      .loc_0xA4
      lwz       r27, 0x10(r30)
      b         .loc_0x1B8

    .loc_0x12C:
      lwz       r28, 0x1C(r27)
      b         .loc_0x1AC

    .loc_0x134:
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r28)
      cmplw     r3, r4
      beq-      .loc_0x1A8
      lwz       r5, -0x69F8(r13)
      lbz       r0, 0x58(r5)
      cmplwi    r0, 0
      beq-      .loc_0x18C
      lwz       r0, 0xA4(r3)
      cmplw     r0, r4
      beq-      .loc_0x1A8
      stw       r4, 0xA4(r3)
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r28)
      bl        -0x249C
      b         .loc_0x1A8

    .loc_0x18C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lwz       r4, 0xC(r28)
      bl        -0x24BC

    .loc_0x1A8:
      lwz       r28, 0x0(r28)

    .loc_0x1AC:
      cmplwi    r28, 0
      bne+      .loc_0x134
      lwz       r27, 0x10(r27)

    .loc_0x1B8:
      cmplwi    r27, 0
      bne+      .loc_0x12C

    .loc_0x1C0:
      lwz       r31, 0x0(r31)

    .loc_0x1C4:
      cmplwi    r31, 0
      bne+      .loc_0x1C
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80159240
 * Size:	00004C
 */
void SweepCallback::invoke(SweepPrune::Object*, SweepPrune::Object*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0x18
      subi      r4, r4, 0x4

    .loc_0x18:
      cmplwi    r5, 0
      beq-      .loc_0x24
      subi      r5, r5, 0x4

    .loc_0x24:
      mr        r3, r4
      mr        r4, r5
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
