

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
 * Address:	8024BAAC
 * Size:	000200
 */
void Game::Cave::MapUnitGenerator::__ct((Game::MapUnitInterface*, int,
                                         Game::Cave::FloorInfo*, bool,
                                         Game::Cave::EditMapUnit*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r31, r3
      mr        r28, r4
      mr        r27, r5
      mr        r30, r6
      mr        r29, r7
      mr        r26, r8
      li        r3, 0x40
      bl        -0x227C34
      mr.       r0, r3
      beq-      .loc_0x44
      li        r4, 0
      bl        -0x8D78
      mr        r0, r3

    .loc_0x44:
      stw       r0, 0xC(r31)
      li        r3, 0xD0
      bl        -0x227B4C
      lis       r4, 0x8025
      lis       r5, 0x8024
      subi      r4, r4, 0x4354
      li        r6, 0x40
      addi      r5, r5, 0x4094
      li        r7, 0x3
      bl        -0x18A124
      stw       r3, 0x10(r31)
      li        r3, 0x38
      bl        -0x227C7C
      mr.       r0, r3
      beq-      .loc_0x88
      bl        -0x7A38
      mr        r0, r3

    .loc_0x88:
      stw       r0, 0x14(r31)
      li        r3, 0x38
      bl        -0x227C98
      mr.       r0, r3
      beq-      .loc_0xA4
      bl        -0x7A54
      mr        r0, r3

    .loc_0xA4:
      stw       r0, 0x18(r31)
      li        r3, 0x38
      bl        -0x227CB4
      mr.       r0, r3
      beq-      .loc_0xC0
      bl        -0x7A70
      mr        r0, r3

    .loc_0xC0:
      stw       r0, 0x1C(r31)
      li        r3, 0x24
      bl        -0x227CD0
      mr.       r0, r3
      beq-      .loc_0xDC
      bl        0x4148
      mr        r0, r3

    .loc_0xDC:
      stw       r0, 0x20(r31)
      li        r3, 0x34
      bl        -0x227CEC
      mr.       r0, r3
      beq-      .loc_0xF8
      bl        0x25D4
      mr        r0, r3

    .loc_0xF8:
      stw       r0, 0x24(r31)
      li        r3, 0x40
      bl        -0x227D08
      mr.       r0, r3
      beq-      .loc_0x118
      li        r4, 0
      bl        -0x8E4C
      mr        r0, r3

    .loc_0x118:
      stw       r0, 0x28(r31)
      li        r3, 0x40
      bl        -0x227D28
      mr.       r0, r3
      beq-      .loc_0x138
      li        r4, 0
      bl        -0x8E6C
      mr        r0, r3

    .loc_0x138:
      stw       r0, 0x2C(r31)
      stw       r30, 0x8(r31)
      stb       r29, 0x0(r31)
      lwz       r3, 0x8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x160
      li        r4, -0x1
      bl        -0x74B80
      stb       r3, 0x1(r31)
      b         .loc_0x168

    .loc_0x160:
      li        r0, 0
      stb       r0, 0x1(r31)

    .loc_0x168:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x18C
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x18C
      li        r0, 0x1
      stb       r0, 0x2(r31)
      b         .loc_0x194

    .loc_0x18C:
      li        r0, 0
      stb       r0, 0x2(r31)

    .loc_0x194:
      mr        r3, r31
      mr        r4, r26
      bl        0x88
      mr        r3, r31
      mr        r4, r28
      mr        r5, r27
      bl        0x124
      mr        r3, r31
      bl        0x3E0
      mr        r3, r31
      bl        0x4A4
      mr        r3, r31
      bl        0x5E8
      mr        r3, r31
      bl        0x694
      mr        r3, r31
      bl        0x7A8
      mr        r3, r31
      bl        0x854
      mr        r3, r31
      bl        0x900
      mr        r3, r31
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8024BCAC
 * Size:	000024
 */
void Game::Cave::MapNode::__defctor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      bl        -0x8F4C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8024BCD0
 * Size:	0000AC
 */
void Game::Cave::MapUnitGenerator::createEditMapInfo((Game::Cave::EditMapUnit*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      stw       r0, 0x30(r3)
      lbz       r0, 0x2(r3)
      cmplwi    r0, 0
      beq-      .loc_0x94
      cmplwi    r31, 0
      beq-      .loc_0x94
      lwz       r0, 0x1C(r31)
      cmpwi     r0, -0x1
      bge-      .loc_0x88
      bl        -0x182774
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3B80(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3B88(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3B84(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x0(r31)
      fmuls     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x94
      stw       r31, 0x30(r30)
      b         .loc_0x94

    .loc_0x88:
      cmpwi     r0, 0
      blt-      .loc_0x94
      stw       r31, 0x30(r30)

    .loc_0x94:
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
 * Address:	8024BD7C
 * Size:	00024C
 */
void Game::Cave::MapUnitGenerator::createMemList((Game::MapUnitInterface*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stmw      r19, 0x2C(r1)
      mr        r31, r3
      mr        r22, r5
      li        r23, 0
      mr        r30, r4
      b         .loc_0x228

    .loc_0x2C:
      mr        r3, r31
      mr        r4, r30
      bl        .loc_0x24C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x220
      li        r3, 0x24
      bl        -0x227F1C
      mr.       r29, r3
      beq-      .loc_0x5C
      li        r4, 0
      bl        -0x9628
      mr        r29, r3

    .loc_0x5C:
      lwz       r4, 0x14(r30)
      mr        r3, r29
      bl        -0x94D4
      mr        r3, r29
      mr        r4, r23
      bl        -0x94D8
      lha       r4, 0x6C(r30)
      mr        r3, r29
      bl        -0x94DC
      mr        r3, r30
      addi      r4, r1, 0xC
      addi      r5, r1, 0x8
      bl        -0x9597C
      lwz       r4, 0xC(r1)
      mr        r3, r29
      lwz       r5, 0x8(r1)
      bl        -0x94F4
      lwz       r28, 0x114(r30)
      mr        r3, r29
      mr        r4, r28
      bl        -0x95DC
      lwz       r4, 0x168(r30)
      mr        r3, r29
      bl        -0x9504
      lfs       f31, -0x3B78(r2)
      li        r25, 0
      li        r26, 0
      b         .loc_0x1B4

    .loc_0xCC:
      mr        r3, r30
      mr        r4, r25
      bl        -0x959E8
      mr        r0, r3
      addi      r3, r1, 0x10
      mr        r24, r0
      bl        -0x548
      lwz       r0, 0x48(r24)
      li        r3, 0x20
      stw       r0, 0x14(r1)
      lwz       r0, 0x44(r24)
      stw       r0, 0x10(r1)
      lwz       r27, 0x1C(r24)
      bl        -0x227FD8
      mr.       r4, r3
      beq-      .loc_0x118
      addi      r4, r1, 0x10
      bl        -0x514
      mr        r4, r3

    .loc_0x118:
      lwz       r3, 0x0(r29)
      bl        0x1C5570
      li        r21, 0
      b         .loc_0x1A4

    .loc_0x128:
      mr        r3, r24
      mr        r4, r21
      bl        -0x95A04
      mr        r20, r3
      li        r3, 0xC
      bl        -0x228014
      mr.       r19, r3
      beq-      .loc_0x150
      bl        -0x650
      mr        r19, r3

    .loc_0x150:
      lwz       r0, 0x1C(r20)
      li        r3, 0x1C
      stw       r0, 0x0(r19)
      lfs       f0, 0x18(r20)
      fdivs     f0, f0, f31
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      stw       r0, 0x4(r19)
      lbz       r0, 0x20(r20)
      stw       r0, 0x8(r19)
      bl        -0x228054
      mr.       r4, r3
      beq-      .loc_0x194
      mr        r4, r19
      bl        -0x63C
      mr        r4, r3

    .loc_0x194:
      lwz       r0, 0x4(r29)
      add       r3, r0, r26
      bl        0x1C54F0
      addi      r21, r21, 0x1

    .loc_0x1A4:
      cmpw      r21, r27
      blt+      .loc_0x128
      addi      r26, r26, 0x1C
      addi      r25, r25, 0x1

    .loc_0x1B4:
      cmpw      r25, r28
      blt+      .loc_0xCC
      li        r20, 0

    .loc_0x1C0:
      li        r3, 0x18
      bl        -0x22809C
      mr.       r19, r3
      beq-      .loc_0x1DC
      mr        r4, r29
      bl        -0x9618
      mr        r19, r3

    .loc_0x1DC:
      mr        r3, r19
      mr        r4, r20
      bl        -0x95B8
      mr        r3, r19
      bl        -0x95B8
      li        r3, 0x40
      bl        -0x2280CC
      mr.       r4, r3
      beq-      .loc_0x20C
      mr        r4, r19
      bl        -0x9210
      mr        r4, r3

    .loc_0x20C:
      lwz       r3, 0xC(r31)
      bl        0x1C547C
      addi      r20, r20, 0x1
      cmpwi     r20, 0x4
      blt+      .loc_0x1C0

    .loc_0x220:
      addi      r30, r30, 0x16C
      addi      r23, r23, 0x1

    .loc_0x228:
      cmpw      r23, r22
      blt+      .loc_0x2C
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      lmw       r19, 0x2C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr

    .loc_0x24C:
    */
}

/*
 * --INFO--
 * Address:	8024BFC8
 * Size:	000078
 */
void Game::Cave::MapUnitGenerator::isCreateList((Game::MapUnitInterface*))
{
    /*
    .loc_0x0:
      lbz       r0, 0x2(r3)
      cmplwi    r0, 0
      bne-      .loc_0x14
      li        r3, 0x1
      blr

    .loc_0x14:
      lwz       r0, 0x30(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      li        r3, 0x1
      blr

    .loc_0x28:
      lha       r0, 0x6C(r4)
      cmpwi     r0, 0x1
      beq-      .loc_0x3C
      li        r3, 0x1
      blr

    .loc_0x3C:
      lwz       r3, 0x168(r4)
      cmplwi    r3, 0
      beq-      .loc_0x70
      lwz       r3, 0x10(r3)
      b         .loc_0x68

    .loc_0x50:
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0x7
      bne-      .loc_0x64
      li        r3, 0x1
      blr

    .loc_0x64:
      lwz       r3, 0x4(r3)

    .loc_0x68:
      cmplwi    r3, 0
      bne+      .loc_0x50

    .loc_0x70:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C040
 * Size:	0000CC
 */
void Game::Cave::MapUnitGenerator::memMapListSorting(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r25, r3
      lwz       r3, 0xC(r3)
      lwz       r31, 0x10(r3)
      b         .loc_0xB0

    .loc_0x20:
      lwz       r29, 0x4(r31)
      mr        r28, r31
      lwz       r3, 0x18(r31)
      bl        -0x94E0
      mr        r30, r3
      lwz       r3, 0x18(r31)
      bl        -0x94F4
      mullw     r27, r3, r30
      mr        r3, r31
      bl        -0x8024
      mr        r30, r3
      mr        r26, r29
      b         .loc_0xA4

    .loc_0x54:
      lwz       r3, 0x18(r26)
      bl        -0x950C
      mr        r31, r3
      lwz       r3, 0x18(r26)
      bl        -0x9520
      mullw     r31, r3, r31
      mr        r3, r26
      bl        -0x8050
      cmpw      r27, r31
      bgt-      .loc_0x88
      bne-      .loc_0xA0
      cmpw      r30, r3
      ble-      .loc_0xA0

    .loc_0x88:
      mr        r3, r28
      bl        0x1C5504
      lwz       r3, 0xC(r25)
      mr        r4, r28
      bl        0x1C5330
      b         .loc_0xAC

    .loc_0xA0:
      lwz       r26, 0x4(r26)

    .loc_0xA4:
      cmplwi    r26, 0
      bne+      .loc_0x54

    .loc_0xAC:
      mr        r31, r29

    .loc_0xB0:
      cmplwi    r31, 0
      bne+      .loc_0x20
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C10C
 * Size:	00014C
 */
void Game::Cave::MapUnitGenerator::createMapPartsList(void)
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
      stmw      r23, 0x2C(r1)
      lfd       f30, -0x3B80(r2)
      mr        r31, r3
      lfs       f31, -0x3B84(r2)
      li        r26, 0
      li        r27, 0
      lis       r29, 0x4330

    .loc_0x38:
      lwz       r3, 0xC(r31)
      lwz       r0, 0x10(r31)
      lwz       r28, 0x10(r3)
      add       r25, r0, r27
      b         .loc_0x84

    .loc_0x4C:
      lwz       r3, 0x18(r28)
      bl        -0x95E4
      cmpw      r26, r3
      bne-      .loc_0x80
      li        r3, 0x40
      bl        -0x2282C8
      mr.       r4, r3
      beq-      .loc_0x78
      lwz       r4, 0x18(r28)
      bl        -0x940C
      mr        r4, r3

    .loc_0x78:
      mr        r3, r25
      bl        0x1C5280

    .loc_0x80:
      lwz       r28, 0x4(r28)

    .loc_0x84:
      cmplwi    r28, 0
      bne+      .loc_0x4C
      mr        r3, r25
      lwz       r12, 0x0(r25)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r28, r3
      li        r24, 0
      xoris     r30, r28, 0x8000
      b         .loc_0x110

    .loc_0xB0:
      bl        -0x182C1C
      xoris     r0, r3, 0x8000
      stw       r29, 0x8(r1)
      mr        r3, r25
      stw       r0, 0xC(r1)
      lfd       f0, 0x8(r1)
      stw       r30, 0x14(r1)
      fsubs     f0, f0, f30
      stw       r29, 0x10(r1)
      fdivs     f1, f0, f31
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f30
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r4, 0x1C(r1)
      bl        0x1C54A0
      mr.       r23, r3
      beq-      .loc_0x10C
      bl        0x1C53C8
      mr        r3, r25
      mr        r4, r23
      bl        0x1C51F4

    .loc_0x10C:
      addi      r24, r24, 0x1

    .loc_0x110:
      cmpw      r24, r28
      blt+      .loc_0xB0
      addi      r26, r26, 0x1
      addi      r27, r27, 0x40
      cmpwi     r26, 0x3
      blt+      .loc_0x38
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lmw       r23, 0x2C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C258
 * Size:	0000B4
 */
void Game::Cave::MapUnitGenerator::createEnemyList(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      li        r29, 0
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x84

    .loc_0x28:
      li        r3, 0x4
      bl        -0x2283E0
      mr.       r31, r3
      beq-      .loc_0x40
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x40:
      li        r3, 0x38
      bl        -0x2283F8
      mr.       r30, r3
      beq-      .loc_0x64
      mr        r4, r31
      mr        r6, r29
      li        r5, 0
      bl        -0x80EC
      mr        r30, r3

    .loc_0x64:
      lwz       r3, 0x8(r28)
      mr        r4, r29
      bl        -0x755AC
      stw       r3, 0x0(r31)
      mr        r4, r30
      lwz       r3, 0x14(r28)
      bl        0x1C5134
      addi      r29, r29, 0x1

    .loc_0x84:
      lwz       r3, 0x8(r28)
      bl        -0x755F4
      cmpw      r29, r3
      blt+      .loc_0x28
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
 * Address:	8024C30C
 * Size:	0000EC
 */
void Game::Cave::MapUnitGenerator::createCapEnemyList(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      li        r29, 0
      b         .loc_0xC8

    .loc_0x1C:
      lwz       r3, 0x8(r27)
      mr        r4, r29
      bl        -0x75354
      cmplwi    r3, 0
      beq-      .loc_0xC4
      lbz       r0, 0x18(r3)
      cmplwi    r0, 0
      bne-      .loc_0xC4
      bl        -0x75E60
      mr.       r28, r3
      beq-      .loc_0xC4
      li        r3, 0x4
      bl        -0x2284B4
      mr.       r31, r3
      beq-      .loc_0x60
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x60:
      li        r3, 0x38
      bl        -0x2284CC
      mr.       r30, r3
      beq-      .loc_0x84
      mr        r4, r31
      mr        r6, r29
      li        r5, 0
      bl        -0x81C0
      mr        r30, r3

    .loc_0x84:
      stw       r28, 0x0(r31)
      lbz       r0, 0x24(r28)
      cmplwi    r0, 0
      beq-      .loc_0xA8
      mr        r3, r27
      mr        r4, r28
      bl        .loc_0xEC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8

    .loc_0xA8:
      lwz       r3, 0x18(r27)
      mr        r4, r30
      bl        0x1C504C
      b         .loc_0xC4

    .loc_0xB8:
      lwz       r3, 0x1C(r27)
      mr        r4, r30
      bl        0x1C503C

    .loc_0xC4:
      addi      r29, r29, 0x1

    .loc_0xC8:
      lwz       r3, 0x8(r27)
      bl        -0x75428
      cmpw      r29, r3
      blt+      .loc_0x1C
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xEC:
    */
}

/*
 * --INFO--
 * Address:	8024C3F8
 * Size:	000030
 */
void Game::Cave::MapUnitGenerator::isPomGroup((Game::Cave::TekiInfo*))
{
    /*
    .loc_0x0:
      lwz       r3, 0x18(r4)
      cmpwi     r3, 0x52
      beq-      .loc_0x20
      subi      r0, r3, 0x3
      cmplwi    r0, 0x4
      ble-      .loc_0x20
      cmpwi     r3, 0x8
      bne-      .loc_0x28

    .loc_0x20:
      li        r3, 0x1
      blr

    .loc_0x28:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C428
 * Size:	0000B4
 */
void Game::Cave::MapUnitGenerator::createGateList(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      li        r29, 0
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x84

    .loc_0x28:
      li        r3, 0x4
      bl        -0x2285B0
      mr.       r31, r3
      beq-      .loc_0x40
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x40:
      li        r3, 0x24
      bl        -0x2285C8
      mr.       r30, r3
      beq-      .loc_0x64
      mr        r4, r31
      mr        r5, r29
      li        r6, 0
      bl        0x38A0
      mr        r30, r3

    .loc_0x64:
      lwz       r3, 0x8(r28)
      mr        r4, r29
      bl        -0x755A4
      stw       r3, 0x0(r31)
      mr        r4, r30
      lwz       r3, 0x20(r28)
      bl        0x1C4F64
      addi      r29, r29, 0x1

    .loc_0x84:
      lwz       r3, 0x8(r28)
      bl        -0x755EC
      cmpw      r29, r3
      blt+      .loc_0x28
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
 * Address:	8024C4DC
 * Size:	0000B4
 */
void Game::Cave::MapUnitGenerator::createItemList(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      li        r29, 0
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x84

    .loc_0x28:
      li        r3, 0x4
      bl        -0x228664
      mr.       r31, r3
      beq-      .loc_0x40
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x40:
      li        r3, 0x34
      bl        -0x22867C
      mr.       r30, r3
      beq-      .loc_0x64
      mr        r4, r31
      mr        r6, r29
      li        r5, 0
      bl        0x1CA4
      mr        r30, r3

    .loc_0x64:
      lwz       r3, 0x8(r28)
      mr        r4, r29
      bl        -0x75744
      stw       r3, 0x0(r31)
      mr        r4, r30
      lwz       r3, 0x24(r28)
      bl        0x1C4EB0
      addi      r29, r29, 0x1

    .loc_0x84:
      lwz       r3, 0x8(r28)
      bl        -0x7578C
      cmpw      r29, r3
      blt+      .loc_0x28
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
 * Address:	8024C590
 * Size:	00002C
 */
void Game::Cave::MapUnitGenerator::createCaveLevel(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x4(r3)
      lwz       r4, -0x6C18(r13)
      cmplwi    r4, 0
      beqlr-
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0
      bnelr-
      li        r0, 0x4
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C5BC
 * Size:	000028
 */
void __sinit_MapUnitGenerator_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x6970(r13)
      stfsu     f0, 0x1B08(r3)
      stfs      f0, -0x696C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
