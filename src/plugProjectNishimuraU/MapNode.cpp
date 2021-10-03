

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
 * Address:	80242D58
 * Size:	000018
 */
void Game::Cave::AdjustInfo::__ct(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242D70
 * Size:	0002AC
 */
void Game::Cave::MapNode::__ct((Game::Cave::UnitInfo*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r16, 0x10(r1)
      mr        r30, r3
      mr        r16, r4
      bl        0x1CE608
      lis       r4, 0x804C
      li        r3, 0
      addi      r4, r4, 0x1A68
      li        r0, -0x1
      stw       r4, 0x0(r30)
      cmplwi    r16, 0
      stw       r3, 0x18(r30)
      stw       r3, 0x1C(r30)
      stw       r3, 0x20(r30)
      stw       r3, 0x24(r30)
      stw       r3, 0x28(r30)
      stw       r0, 0x2C(r30)
      stw       r0, 0x30(r30)
      stw       r0, 0x34(r30)
      stw       r0, 0x38(r30)
      stw       r0, 0x3C(r30)
      beq-      .loc_0x294
      stw       r16, 0x18(r30)
      li        r3, 0x38
      bl        -0x21EF34
      mr.       r0, r3
      beq-      .loc_0x7C
      bl        0x1310
      mr        r0, r3

    .loc_0x7C:
      stw       r0, 0x1C(r30)
      li        r3, 0x24
      bl        -0x21EF50
      mr.       r0, r3
      beq-      .loc_0x98
      bl        0xCEC8
      mr        r0, r3

    .loc_0x98:
      stw       r0, 0x20(r30)
      li        r3, 0x34
      bl        -0x21EF6C
      mr.       r0, r3
      beq-      .loc_0xB4
      bl        0xB354
      mr        r0, r3

    .loc_0xB4:
      stw       r0, 0x24(r30)
      mr        r3, r30
      bl        0x1234
      mr        r31, r3
      mr        r16, r31
      mulli     r3, r16, 0xC
      addi      r3, r3, 0x10
      bl        -0x21EE94
      lis       r4, 0x8024
      mr        r7, r16
      addi      r4, r4, 0x2D58
      li        r5, 0
      li        r6, 0xC
      bl        -0x181468
      cmpwi     r31, 0
      stw       r3, 0x28(r30)
      li        r5, 0
      ble-      .loc_0x294
      cmpwi     r31, 0x8
      subi      r3, r31, 0x8
      ble-      .loc_0x250
      addi      r0, r3, 0x7
      li        r4, 0
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r3, 0
      ble-      .loc_0x250

    .loc_0x120:
      lwz       r6, 0x28(r30)
      li        r3, 0
      addi      r8, r4, 0x4
      li        r0, -0x1
      stwx      r3, r6, r4
      addi      r7, r4, 0x8
      addi      r6, r4, 0xC
      addi      r17, r4, 0x10
      lwz       r9, 0x28(r30)
      addi      r18, r4, 0x14
      addi      r19, r4, 0x18
      addi      r20, r4, 0x1C
      stwx      r0, r9, r8
      addi      r21, r4, 0x20
      addi      r22, r4, 0x24
      addi      r23, r4, 0x28
      lwz       r8, 0x28(r30)
      addi      r24, r4, 0x2C
      addi      r25, r4, 0x30
      addi      r26, r4, 0x34
      stwx      r0, r8, r7
      addi      r27, r4, 0x38
      addi      r28, r4, 0x3C
      addi      r29, r4, 0x40
      lwz       r7, 0x28(r30)
      addi      r12, r4, 0x44
      addi      r11, r4, 0x48
      addi      r10, r4, 0x4C
      stwx      r3, r7, r6
      addi      r9, r4, 0x50
      addi      r8, r4, 0x54
      addi      r7, r4, 0x58
      lwz       r16, 0x28(r30)
      addi      r6, r4, 0x5C
      addi      r4, r4, 0x60
      addi      r5, r5, 0x8
      stwx      r0, r16, r17
      lwz       r17, 0x28(r30)
      stwx      r0, r17, r18
      lwz       r18, 0x28(r30)
      stwx      r3, r18, r19
      lwz       r19, 0x28(r30)
      stwx      r0, r19, r20
      lwz       r20, 0x28(r30)
      stwx      r0, r20, r21
      lwz       r21, 0x28(r30)
      stwx      r3, r21, r22
      lwz       r22, 0x28(r30)
      stwx      r0, r22, r23
      lwz       r23, 0x28(r30)
      stwx      r0, r23, r24
      lwz       r24, 0x28(r30)
      stwx      r3, r24, r25
      lwz       r25, 0x28(r30)
      stwx      r0, r25, r26
      lwz       r26, 0x28(r30)
      stwx      r0, r26, r27
      lwz       r27, 0x28(r30)
      stwx      r3, r27, r28
      lwz       r28, 0x28(r30)
      stwx      r0, r28, r29
      lwz       r29, 0x28(r30)
      stwx      r0, r29, r12
      lwz       r12, 0x28(r30)
      stwx      r3, r12, r11
      lwz       r11, 0x28(r30)
      stwx      r0, r11, r10
      lwz       r10, 0x28(r30)
      stwx      r0, r10, r9
      lwz       r9, 0x28(r30)
      stwx      r3, r9, r8
      lwz       r3, 0x28(r30)
      stwx      r0, r3, r7
      lwz       r3, 0x28(r30)
      stwx      r0, r3, r6
      bdnz+     .loc_0x120

    .loc_0x250:
      sub       r0, r31, r5
      li        r7, 0
      mulli     r8, r5, 0xC
      li        r6, -0x1
      mtctr     r0
      cmpw      r5, r31
      bge-      .loc_0x294

    .loc_0x26C:
      lwz       r4, 0x28(r30)
      addi      r3, r8, 0x4
      addi      r0, r8, 0x8
      stwx      r7, r4, r8
      addi      r8, r8, 0xC
      lwz       r4, 0x28(r30)
      stwx      r6, r4, r3
      lwz       r3, 0x28(r30)
      stwx      r6, r3, r0
      bdnz+     .loc_0x26C

    .loc_0x294:
      mr        r3, r30
      lmw       r16, 0x10(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8024301C
 * Size:	00000C
 */
void Game::Cave::MapNode::setOffset((int, int))
{
    /*
    .loc_0x0:
      stw       r4, 0x2C(r3)
      stw       r5, 0x30(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80243028
 * Size:	000024
 */
void Game::Cave::MapNode::getDoorDirect((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x450
      lwz       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8024304C
 * Size:	000100
 */
void Game::Cave::MapNode::getDoorOffset((int, int&, int&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r6
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r5
      stw       r28, 0x10(r1)
      mr        r28, r3
      bl        0x410
      mr        r30, r3
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xA0
      bge-      .loc_0x50
      cmpwi     r0, 0
      beq-      .loc_0x5C
      bge-      .loc_0x78
      b         .loc_0xE0

    .loc_0x50:
      cmpwi     r0, 0x4
      bge-      .loc_0xE0
      b         .loc_0xC8

    .loc_0x5C:
      lwz       r3, 0x2C(r28)
      lwz       r0, 0x1C(r30)
      add       r0, r3, r0
      stw       r0, 0x0(r29)
      lwz       r0, 0x30(r28)
      stw       r0, 0x0(r31)
      b         .loc_0xE0

    .loc_0x78:
      lwz       r3, 0x18(r28)
      bl        -0x544
      lwz       r0, 0x2C(r28)
      add       r0, r0, r3
      stw       r0, 0x0(r29)
      lwz       r3, 0x30(r28)
      lwz       r0, 0x1C(r30)
      add       r0, r3, r0
      stw       r0, 0x0(r31)
      b         .loc_0xE0

    .loc_0xA0:
      lwz       r3, 0x2C(r28)
      lwz       r0, 0x1C(r30)
      add       r0, r3, r0
      stw       r0, 0x0(r29)
      lwz       r3, 0x18(r28)
      bl        -0x574
      lwz       r0, 0x30(r28)
      add       r0, r0, r3
      stw       r0, 0x0(r31)
      b         .loc_0xE0

    .loc_0xC8:
      lwz       r0, 0x2C(r28)
      stw       r0, 0x0(r29)
      lwz       r3, 0x30(r28)
      lwz       r0, 0x1C(r30)
      add       r0, r3, r0
      stw       r0, 0x0(r31)

    .loc_0xE0:
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
 * Address:	8024314C
 * Size:	0000FC
 */
void Game::Cave::MapNode::isDoorSet((Game::Cave::DoorNode*, int, int, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r4
      mr        r31, r3
      mr        r28, r5
      mr        r29, r6
      mr        r4, r7
      bl        0x314
      mr        r30, r3
      mr        r4, r27
      bl        0x8860
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE4
      stw       r28, 0x2C(r31)
      stw       r29, 0x30(r31)
      lwz       r0, 0x18(r30)
      cmpwi     r0, 0
      bne-      .loc_0x64
      lwz       r3, 0x1C(r30)
      lwz       r0, 0x2C(r31)
      sub       r0, r0, r3
      stw       r0, 0x2C(r31)
      b         .loc_0xDC

    .loc_0x64:
      cmpwi     r0, 0x2
      bne-      .loc_0x94
      lwz       r3, 0x1C(r30)
      lwz       r0, 0x2C(r31)
      sub       r0, r0, r3
      stw       r0, 0x2C(r31)
      lwz       r3, 0x18(r31)
      bl        -0x640
      lwz       r0, 0x30(r31)
      sub       r0, r0, r3
      stw       r0, 0x30(r31)
      b         .loc_0xDC

    .loc_0x94:
      cmpwi     r0, 0x3
      bne-      .loc_0xB0
      lwz       r3, 0x1C(r30)
      lwz       r0, 0x30(r31)
      sub       r0, r0, r3
      stw       r0, 0x30(r31)
      b         .loc_0xDC

    .loc_0xB0:
      cmpwi     r0, 0x1
      bne-      .loc_0xDC
      lwz       r3, 0x18(r31)
      bl        -0x684
      lwz       r0, 0x2C(r31)
      sub       r0, r0, r3
      stw       r0, 0x2C(r31)
      lwz       r3, 0x1C(r30)
      lwz       r0, 0x30(r31)
      sub       r0, r0, r3
      stw       r0, 0x30(r31)

    .loc_0xDC:
      li        r3, 0x1
      b         .loc_0xE8

    .loc_0xE4:
      li        r3, 0

    .loc_0xE8:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80243248
 * Size:	000034
 */
void Game::Cave::MapNode::setDoorClose((int, Game::Cave::MapNode*, int))
{
    /*
    .loc_0x0:
      mulli     r8, r4, 0xC
      lwz       r7, 0x28(r3)
      stwx      r5, r7, r8
      mulli     r9, r6, 0xC
      lwz       r0, 0x28(r3)
      add       r7, r0, r8
      stw       r6, 0x4(r7)
      lwz       r6, 0x28(r5)
      stwx      r3, r6, r9
      lwz       r0, 0x28(r5)
      add       r3, r0, r9
      stw       r4, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8024327C
 * Size:	00009C
 */
void Game::Cave::MapNode::detachDoorClose(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0xDD0
      li        r7, 0
      mtctr     r3
      cmpwi     r3, 0
      ble-      .loc_0x88
      mr        r6, r7
      mr        r4, r7
      li        r5, -0x1

    .loc_0x34:
      lwz       r0, 0x28(r31)
      add       r3, r0, r7
      lwz       r8, 0x0(r3)
      cmplwi    r8, 0
      beq-      .loc_0x6C
      lwz       r0, 0x4(r3)
      lwz       r3, 0x28(r8)
      mulli     r8, r0, 0xC
      stwx      r6, r3, r8
      addi      r0, r8, 0x4
      lwz       r3, 0x28(r31)
      lwzx      r3, r3, r7
      lwz       r3, 0x28(r3)
      stwx      r5, r3, r0

    .loc_0x6C:
      lwz       r3, 0x28(r31)
      addi      r0, r7, 0x4
      stwx      r4, r3, r7
      addi      r7, r7, 0xC
      lwz       r3, 0x28(r31)
      stwx      r5, r3, r0
      bdnz+     .loc_0x34

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
 * Address:	80243318
 * Size:	00001C
 */
void Game::Cave::MapNode::isDoorClose((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0xC
      lwz       r3, 0x28(r3)
      lwzx      r3, r3, r0
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80243334
 * Size:	000100
 */
void Game::Cave::MapNode::resetDoorScore(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      bl        0xD14
      cmpwi     r3, 0
      li        r30, 0
      ble-      .loc_0xE8
      cmpwi     r3, 0x8
      subi      r4, r3, 0x8
      ble-      .loc_0xBC
      addi      r0, r4, 0x7
      li        r12, 0
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r4, 0
      ble-      .loc_0xBC

    .loc_0x4C:
      lwz       r4, 0x28(r31)
      addi      r0, r12, 0x8
      li        r11, -0x1
      addi      r9, r12, 0x14
      stwx      r11, r4, r0
      addi      r8, r12, 0x20
      addi      r7, r12, 0x2C
      addi      r6, r12, 0x38
      lwz       r10, 0x28(r31)
      addi      r5, r12, 0x44
      addi      r4, r12, 0x50
      addi      r0, r12, 0x5C
      stwx      r11, r10, r9
      addi      r12, r12, 0x60
      addi      r30, r30, 0x8
      lwz       r9, 0x28(r31)
      stwx      r11, r9, r8
      lwz       r8, 0x28(r31)
      stwx      r11, r8, r7
      lwz       r7, 0x28(r31)
      stwx      r11, r7, r6
      lwz       r6, 0x28(r31)
      stwx      r11, r6, r5
      lwz       r5, 0x28(r31)
      stwx      r11, r5, r4
      lwz       r4, 0x28(r31)
      stwx      r11, r4, r0
      bdnz+     .loc_0x4C

    .loc_0xBC:
      sub       r0, r3, r30
      li        r4, -0x1
      mulli     r5, r30, 0xC
      mtctr     r0
      cmpw      r30, r3
      bge-      .loc_0xE8

    .loc_0xD4:
      lwz       r3, 0x28(r31)
      addi      r0, r5, 0x8
      addi      r5, r5, 0xC
      stwx      r4, r3, r0
      bdnz+     .loc_0xD4

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
 * Address:	80243434
 * Size:	000034
 */
void Game::Cave::MapNode::setDoorScore((int, int))
{
    /*
    .loc_0x0:
      mulli     r6, r4, 0xC
      lwz       r0, 0x28(r3)
      add       r4, r0, r6
      stw       r5, 0x8(r4)
      lwz       r4, 0x28(r3)
      add       r3, r4, r6
      lwzx      r4, r4, r6
      lwz       r0, 0x4(r3)
      lwz       r3, 0x28(r4)
      mulli     r0, r0, 0xC
      add       r3, r3, r0
      stw       r5, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80243468
 * Size:	00001C
 */
void Game::Cave::MapNode::isDoorScoreSetDone((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0xC
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      lwz       r0, 0x8(r3)
      rlwinm    r0,r0,1,31,31
      xori      r3, r0, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80243484
 * Size:	000024
 */
void Game::Cave::MapNode::getDoorNode((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      bl        -0x8F8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802434A8
 * Size:	000014
 */
void Game::Cave::MapNode::getAdjustNode((int))
{
    /*
    .loc_0x0:
      lwz       r3, 0x18(r3)
      mulli     r0, r4, 0x1C
      lwz       r3, 0x4(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	802434BC
 * Size:	000164
 */
void Game::Cave::MapNode::isGateSetDoor((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r28, r4
      lwz       r3, 0x20(r3)
      lwz       r30, 0x10(r3)
      b         .loc_0x58

    .loc_0x30:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      cmpw      r28, r3
      bne-      .loc_0x54
      li        r3, 0x1
      b         .loc_0x144

    .loc_0x54:
      lwz       r30, 0x4(r30)

    .loc_0x58:
      cmplwi    r30, 0
      bne+      .loc_0x30
      mulli     r30, r28, 0xC
      lwz       r3, 0x28(r31)
      lwzx      r3, r3, r30
      lwz       r3, 0x20(r3)
      lwz       r29, 0x10(r3)
      b         .loc_0xAC

    .loc_0x78:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x28(r31)
      addi      r0, r4, 0x4
      lwzx      r0, r30, r0
      cmpw      r0, r3
      bne-      .loc_0xA8
      li        r3, 0x1
      b         .loc_0x144

    .loc_0xA8:
      lwz       r29, 0x4(r29)

    .loc_0xAC:
      cmplwi    r29, 0
      bne+      .loc_0x78
      lwz       r3, 0x1C(r31)
      lwz       r29, 0x10(r3)
      b         .loc_0xE8

    .loc_0xC0:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      cmpw      r28, r3
      bne-      .loc_0xE4
      li        r3, 0x1
      b         .loc_0x144

    .loc_0xE4:
      lwz       r29, 0x4(r29)

    .loc_0xE8:
      cmplwi    r29, 0
      bne+      .loc_0xC0
      lwz       r3, 0x28(r31)
      lwzx      r3, r3, r30
      lwz       r3, 0x1C(r3)
      lwz       r29, 0x10(r3)
      b         .loc_0x138

    .loc_0x104:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x28(r31)
      addi      r0, r4, 0x4
      lwzx      r0, r30, r0
      cmpw      r0, r3
      bne-      .loc_0x134
      li        r3, 0x1
      b         .loc_0x144

    .loc_0x134:
      lwz       r29, 0x4(r29)

    .loc_0x138:
      cmplwi    r29, 0
      bne+      .loc_0x104
      li        r3, 0

    .loc_0x144:
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
 * Address:	80243620
 * Size:	000198
 */
void Game::Cave::MapNode::getGateScore((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r28, r3
      mr        r29, r4
      li        r30, 0
      lwz       r3, 0x20(r3)
      lwz       r31, 0x10(r3)
      b         .loc_0x74

    .loc_0x28:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      cmpw      r29, r3
      bne-      .loc_0x70
      lwz       r3, 0x18(r31)
      li        r0, 0x3E8
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x68
      lfs       f0, 0x1C(r3)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)

    .loc_0x68:
      mr        r30, r0
      b         .loc_0x7C

    .loc_0x70:
      lwz       r31, 0x4(r31)

    .loc_0x74:
      cmplwi    r31, 0
      bne+      .loc_0x28

    .loc_0x7C:
      mulli     r31, r29, 0xC
      lwz       r3, 0x28(r28)
      lwzx      r3, r3, r31
      lwz       r3, 0x20(r3)
      lwz       r27, 0x10(r3)
      b         .loc_0xEC

    .loc_0x94:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x28(r28)
      addi      r0, r4, 0x4
      lwzx      r0, r31, r0
      cmpw      r0, r3
      bne-      .loc_0xE8
      lwz       r3, 0x18(r27)
      li        r0, 0x3E8
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0xE0
      lfs       f0, 0x1C(r3)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)

    .loc_0xE0:
      add       r30, r30, r0
      b         .loc_0xF4

    .loc_0xE8:
      lwz       r27, 0x4(r27)

    .loc_0xEC:
      cmplwi    r27, 0
      bne+      .loc_0x94

    .loc_0xF4:
      lwz       r3, 0x1C(r28)
      lwz       r27, 0x10(r3)
      b         .loc_0x128

    .loc_0x100:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      cmpw      r29, r3
      bne-      .loc_0x124
      addi      r30, r30, 0x5
      b         .loc_0x130

    .loc_0x124:
      lwz       r27, 0x4(r27)

    .loc_0x128:
      cmplwi    r27, 0
      bne+      .loc_0x100

    .loc_0x130:
      lwz       r3, 0x28(r28)
      lwzx      r3, r3, r31
      lwz       r3, 0x1C(r3)
      lwz       r27, 0x10(r3)
      b         .loc_0x178

    .loc_0x144:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x28(r28)
      addi      r0, r4, 0x4
      lwzx      r0, r31, r0
      cmpw      r0, r3
      bne-      .loc_0x174
      addi      r30, r30, 0x5
      b         .loc_0x180

    .loc_0x174:
      lwz       r27, 0x4(r27)

    .loc_0x178:
      cmplwi    r27, 0
      bne+      .loc_0x144

    .loc_0x180:
      mr        r3, r30
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802437B8
 * Size:	0000AC
 */
void Game::Cave::MapNode::setEnemyScore(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r0, 0x34(r3)
      lwz       r3, 0x1C(r3)
      lwz       r31, 0x10(r3)
      b         .loc_0x88

    .loc_0x30:
      lwz       r4, 0x1C(r31)
      mr        r3, r31
      li        r30, 0
      cmplwi    r4, 0
      beq-      .loc_0x64
      lwz       r0, 0x18(r4)
      cmpwi     r0, 0
      bne-      .loc_0x58
      li        r30, 0x2
      b         .loc_0x64

    .loc_0x58:
      cmpwi     r0, 0x1
      bne-      .loc_0x64
      li        r30, 0xA

    .loc_0x64:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      mullw     r3, r30, r3
      lwz       r0, 0x34(r29)
      add       r0, r0, r3
      stw       r0, 0x34(r29)
      lwz       r31, 0x4(r31)

    .loc_0x88:
      cmplwi    r31, 0
      bne+      .loc_0x30
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
 * Address:	80243864
 * Size:	000008
 */
void Game::Cave::MapNode::setNodeScore((int))
{
    /*
    .loc_0x0:
      stw       r4, 0x38(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8024386C
 * Size:	00000C
 */
void Game::Cave::MapNode::copyNodeScoreToVersusScore(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x38(r3)
      stw       r0, 0x3C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80243878
 * Size:	000014
 */
void Game::Cave::MapNode::subNodeScoreToVersusScore(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x38(r3)
      lwz       r0, 0x3C(r3)
      sub       r0, r0, r4
      stw       r0, 0x3C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8024388C
 * Size:	000110
 */
void Game::Cave::MapNode::draw((float, float, float))
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
      stfd      f28, 0x30(r1)
      psq_st    f28,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lis       r4, 0x4330
      lwz       r3, 0x2C(r3)
      fmr       f28, f3
      lwz       r0, 0x30(r31)
      xoris     r3, r3, 0x8000
      stw       r4, 0x8(r1)
      xoris     r0, r0, 0x8000
      lfd       f4, -0x3C80(r2)
      stw       r3, 0xC(r1)
      lwz       r3, 0x18(r31)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f3, f0, f4
      stw       r4, 0x10(r1)
      lfd       f0, 0x10(r1)
      fmadds    f31, f3, f28, f1
      fsubs     f0, f0, f4
      fmadds    f30, f0, f28, f2
      bl        -0xD84
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfd       f1, -0x3C80(r2)
      stw       r0, 0x18(r1)
      lwz       r3, 0x18(r31)
      lfd       f0, 0x18(r1)
      fsubs     f0, f0, f1
      fmadds    f29, f28, f0, f31
      bl        -0xDA4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      fmr       f1, f31
      lfd       f4, -0x3C80(r2)
      fmr       f2, f30
      stw       r0, 0x20(r1)
      fmr       f3, f29
      lwz       r3, 0x18(r31)
      lfd       f0, 0x20(r1)
      fsubs     f0, f0, f4
      fmadds    f4, f28, f0, f30
      bl        -0xD98
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      psq_l     f28,0x38(r1),0,0
      lfd       f28, 0x30(r1)
      lwz       r0, 0x74(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8024399C
 * Size:	000008
 */
void Game::Cave::MapNode::getNodeOffsetX(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802439A4
 * Size:	000008
 */
void Game::Cave::MapNode::getNodeOffsetY(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x30(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802439AC
 * Size:	000008
 */
void Game::Cave::MapNode::getEnemyScore(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x34(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802439B4
 * Size:	000008
 */
void Game::Cave::MapNode::getNodeScore(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x38(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802439BC
 * Size:	000008
 */
void Game::Cave::MapNode::getVersusScore(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x3C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802439C4
 * Size:	000024
 */
void Game::Cave::MapNode::getUnitName(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      bl        -0xE68
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802439E8
 * Size:	0000D0
 */
void Game::Cave::MapNode::getNodeCentreOffset((float&, float&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r5
      stw       r30, 0x38(r1)
      mr        r30, r4
      stw       r29, 0x34(r1)
      mr        r29, r3
      lwz       r3, 0x18(r3)
      bl        -0xE8C
      lwz       r0, 0x2C(r29)
      lis       r4, 0x4330
      xoris     r3, r3, 0x8000
      stw       r4, 0x8(r1)
      xoris     r0, r0, 0x8000
      lfd       f3, -0x3C80(r2)
      stw       r3, 0xC(r1)
      lfs       f1, -0x3C78(r2)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f2, f0, f3
      stw       r4, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f3
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x0(r30)
      lwz       r3, 0x18(r29)
      bl        -0xECC
      lwz       r0, 0x30(r29)
      lis       r4, 0x4330
      xoris     r3, r3, 0x8000
      stw       r4, 0x18(r1)
      xoris     r0, r0, 0x8000
      lfd       f3, -0x3C80(r2)
      stw       r3, 0x1C(r1)
      lfs       f1, -0x3C78(r2)
      lfd       f0, 0x18(r1)
      stw       r0, 0x24(r1)
      fsubs     f2, f0, f3
      stw       r4, 0x20(r1)
      lfd       f0, 0x20(r1)
      fsubs     f0, f0, f3
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x0(r31)
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
 * Address:	80243AB8
 * Size:	000024
 */
void Game::Cave::MapNode::getDirection(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      bl        -0xF34
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80243ADC
 * Size:	0001C4
 */
void Game::Cave::MapNode::getBaseGenGlobalPosition((Game::Cave::BaseGen*))
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
      mr        r30, r4
      mr        r29, r3
      lfs       f31, -0x3C74(r2)
      mr        r31, r5
      lwz       r3, 0x18(r4)
      bl        -0xF9C
      lwz       r0, 0x2C(r30)
      xoris     r3, r3, 0x8000
      lis       r4, 0x4330
      stw       r3, 0xC(r1)
      xoris     r0, r0, 0x8000
      lfd       f3, -0x3C80(r2)
      stw       r4, 0x8(r1)
      lfs       f1, -0x3C78(r2)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f2, f0, f3
      lwz       r3, 0x18(r30)
      stw       r4, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f3
      fmadds    f30, f2, f1, f0
      bl        -0xFD8
      lwz       r0, 0x30(r30)
      xoris     r3, r3, 0x8000
      lis       r4, 0x4330
      lfs       f0, -0x3C70(r2)
      xoris     r0, r0, 0x8000
      stw       r3, 0x1C(r1)
      lfd       f4, -0x3C80(r2)
      fmuls     f30, f30, f0
      stw       r4, 0x18(r1)
      lfs       f2, -0x3C78(r2)
      lfd       f1, 0x18(r1)
      stw       r0, 0x24(r1)
      fsubs     f3, f1, f4
      lwz       r3, 0x18(r30)
      stw       r4, 0x20(r1)
      lfd       f1, 0x20(r1)
      fsubs     f1, f1, f4
      fmadds    f29, f3, f2, f1
      fmuls     f29, f29, f0
      bl        -0xFF4
      cmplwi    r3, 0
      beq-      .loc_0x184
      lwz       r3, 0x10(r3)
      b         .loc_0x17C

    .loc_0xEC:
      cmplw     r3, r31
      bne-      .loc_0x178
      lfs       f31, 0x20(r31)
      lwz       r3, 0x18(r30)
      bl        -0x1044
      cmpwi     r3, 0x2
      beq-      .loc_0x150
      bge-      .loc_0x11C
      cmpwi     r3, 0
      beq-      .loc_0x128
      bge-      .loc_0x13C
      b         .loc_0x184

    .loc_0x11C:
      cmpwi     r3, 0x4
      bge-      .loc_0x184
      b         .loc_0x164

    .loc_0x128:
      lfs       f1, 0x1C(r31)
      lfs       f0, 0x24(r31)
      fadds     f30, f30, f1
      fadds     f29, f29, f0
      b         .loc_0x184

    .loc_0x13C:
      lfs       f1, 0x24(r31)
      lfs       f0, 0x1C(r31)
      fsubs     f30, f30, f1
      fadds     f29, f29, f0
      b         .loc_0x184

    .loc_0x150:
      lfs       f1, 0x1C(r31)
      lfs       f0, 0x24(r31)
      fsubs     f30, f30, f1
      fsubs     f29, f29, f0
      b         .loc_0x184

    .loc_0x164:
      lfs       f1, 0x24(r31)
      lfs       f0, 0x1C(r31)
      fadds     f30, f30, f1
      fsubs     f29, f29, f0
      b         .loc_0x184

    .loc_0x178:
      lwz       r3, 0x4(r3)

    .loc_0x17C:
      cmplwi    r3, 0
      bne+      .loc_0xEC

    .loc_0x184:
      stfs      f30, 0x0(r29)
      stfs      f31, 0x4(r29)
      stfs      f29, 0x8(r29)
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
 * Address:	80243CA0
 * Size:	00025C
 */
void Game::Cave::MapNode::getDoorGlobalPosition((int))
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
      stmw      r26, 0x18(r1)
      lfs       f31, -0x3C74(r2)
      mr        r26, r4
      mr        r31, r3
      mr        r30, r5
      fmr       f30, f31
      lwz       r3, 0x18(r4)
      mr        r4, r30
      bl        -0x1140
      lwz       r29, 0x18(r3)
      mr        r4, r30
      lwz       r3, 0x18(r26)
      bl        -0x1150
      mr        r30, r3
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xB4
      bge-      .loc_0x74
      cmpwi     r0, 0
      beq-      .loc_0x80
      bge-      .loc_0x94
      b         .loc_0xE4

    .loc_0x74:
      cmpwi     r0, 0x4
      bge-      .loc_0xE4
      b         .loc_0xD4

    .loc_0x80:
      lwz       r3, 0x2C(r26)
      lwz       r0, 0x1C(r30)
      lwz       r27, 0x30(r26)
      add       r28, r3, r0
      b         .loc_0xE4

    .loc_0x94:
      lwz       r3, 0x18(r26)
      bl        -0x11B4
      lwz       r5, 0x2C(r26)
      lwz       r4, 0x30(r26)
      lwz       r0, 0x1C(r30)
      add       r28, r5, r3
      add       r27, r4, r0
      b         .loc_0xE4

    .loc_0xB4:
      lwz       r4, 0x2C(r26)
      lwz       r0, 0x1C(r30)
      lwz       r3, 0x18(r26)
      add       r28, r4, r0
      bl        -0x11D8
      lwz       r0, 0x30(r26)
      add       r27, r0, r3
      b         .loc_0xE4

    .loc_0xD4:
      lwz       r3, 0x30(r26)
      lwz       r0, 0x1C(r30)
      lwz       r28, 0x2C(r26)
      add       r27, r3, r0

    .loc_0xE4:
      cmpwi     r29, 0x2
      beq-      .loc_0x19C
      bge-      .loc_0x100
      cmpwi     r29, 0
      beq-      .loc_0x10C
      bge-      .loc_0x154
      b         .loc_0x228

    .loc_0x100:
      cmpwi     r29, 0x4
      bge-      .loc_0x228
      b         .loc_0x1E4

    .loc_0x10C:
      lis       r3, 0x4330
      xoris     r0, r28, 0x8000
      stw       r0, 0xC(r1)
      xoris     r0, r27, 0x8000
      lfd       f2, -0x3C80(r2)
      stw       r3, 0x8(r1)
      lfs       f3, -0x3C78(r2)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f1, f0, f2
      lfs       f4, -0x3C70(r2)
      stw       r3, 0x10(r1)
      lfd       f0, 0x10(r1)
      fadds     f1, f3, f1
      fsubs     f0, f0, f2
      fmuls     f31, f4, f1
      fmuls     f30, f4, f0
      b         .loc_0x228

    .loc_0x154:
      lis       r3, 0x4330
      xoris     r0, r27, 0x8000
      stw       r0, 0xC(r1)
      xoris     r0, r28, 0x8000
      lfd       f3, -0x3C80(r2)
      stw       r3, 0x8(r1)
      lfs       f1, -0x3C78(r2)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f0, f0, f3
      lfs       f4, -0x3C70(r2)
      stw       r3, 0x10(r1)
      lfd       f2, 0x10(r1)
      fadds     f0, f1, f0
      fsubs     f1, f2, f3
      fmuls     f30, f4, f0
      fmuls     f31, f4, f1
      b         .loc_0x228

    .loc_0x19C:
      lis       r3, 0x4330
      xoris     r0, r28, 0x8000
      stw       r0, 0x14(r1)
      xoris     r0, r27, 0x8000
      lfd       f2, -0x3C80(r2)
      stw       r3, 0x10(r1)
      lfs       f3, -0x3C78(r2)
      lfd       f0, 0x10(r1)
      stw       r0, 0xC(r1)
      fsubs     f1, f0, f2
      lfs       f4, -0x3C70(r2)
      stw       r3, 0x8(r1)
      lfd       f0, 0x8(r1)
      fadds     f1, f3, f1
      fsubs     f0, f0, f2
      fmuls     f31, f4, f1
      fmuls     f30, f4, f0
      b         .loc_0x228

    .loc_0x1E4:
      lis       r3, 0x4330
      xoris     r0, r27, 0x8000
      stw       r0, 0xC(r1)
      xoris     r0, r28, 0x8000
      lfd       f3, -0x3C80(r2)
      stw       r3, 0x8(r1)
      lfs       f1, -0x3C78(r2)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f0, f0, f3
      lfs       f4, -0x3C70(r2)
      stw       r3, 0x10(r1)
      lfd       f2, 0x10(r1)
      fadds     f0, f1, f0
      fsubs     f1, f2, f3
      fmuls     f30, f4, f0
      fmuls     f31, f4, f1

    .loc_0x228:
      stfs      f31, 0x0(r31)
      lfs       f0, -0x3C74(r2)
      stfs      f0, 0x4(r31)
      stfs      f30, 0x8(r31)
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      lmw       r26, 0x18(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80243EFC
 * Size:	0000EC
 */
void Game::Cave::MapNode::getBaseGenGlobalDirection((Game::Cave::BaseGen*))
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
      mr        r30, r3
      mr        r31, r4
      lwz       r3, 0x18(r3)
      bl        -0x1390
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3C80(r2)
      stw       r0, 0x8(r1)
      lfs       f1, -0x3C6C(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, -0x3C74(r2)
      fsubs     f2, f2, f3
      fmuls     f1, f1, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0x68
      lfs       f0, -0x3C68(r2)
      fadds     f1, f0, f1
      b         .loc_0x7C

    .loc_0x68:
      lfs       f0, -0x3C68(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x7C
      fsubs     f1, f1, f0

    .loc_0x7C:
      fmr       f31, f1
      lwz       r3, 0x18(r30)
      bl        -0x13C0
      cmplwi    r3, 0
      beq-      .loc_0xC8
      lwz       r3, 0x10(r3)
      b         .loc_0xC0

    .loc_0x98:
      cmplw     r3, r31
      bne-      .loc_0xBC
      lfs       f2, -0x3C64(r2)
      lfs       f1, 0x28(r3)
      lfs       f0, -0x3C60(r2)
      fmuls     f1, f2, f1
      fdivs     f0, f1, f0
      fadds     f31, f31, f0
      b         .loc_0xC8

    .loc_0xBC:
      lwz       r3, 0x4(r3)

    .loc_0xC0:
      cmplwi    r3, 0
      bne+      .loc_0x98

    .loc_0xC8:
      fmr       f1, f31
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80243FE8
 * Size:	000078
 */
void Game::Cave::MapNode::getDoorGlobalDirection((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      bl        -0x145C
      lwz       r3, 0x18(r3)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, -0x3C80(r2)
      stw       r0, 0xC(r1)
      lfs       f3, -0x3C6C(r2)
      lfd       f1, 0x8(r1)
      lfs       f0, -0x3C74(r2)
      fsubs     f1, f1, f2
      fmuls     f1, f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x54
      lfs       f0, -0x3C68(r2)
      fadds     f1, f0, f1
      b         .loc_0x68

    .loc_0x54:
      lfs       f0, -0x3C68(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x68
      fsubs     f1, f1, f0

    .loc_0x68:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80244060
 * Size:	000034
 */
void Game::Cave::MapNode::getNumDoors(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      lwz       r3, 0x0(r3)
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

/*
 * --INFO--
 * Address:	80244094
 * Size:	000060
 */
void Game::Cave::MapNode::__dt(void)
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
      addi      r0, r5, 0x1A68
      stw       r0, 0x0(r30)
      bl        0x1CD4C4
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x220020

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
