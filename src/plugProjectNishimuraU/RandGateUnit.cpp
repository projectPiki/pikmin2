

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
 * Address:	8024FE70
 * Size:	000074
 */
void Game::Cave::RandGateUnit::__ct((Game::Cave::MapUnitGenerator*))
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
      stw       r4, 0x0(r3)
      stw       r0, 0xC(r3)
      lwz       r3, 0x0(r3)
      lwz       r31, 0x8(r3)
      cmplwi    r31, 0
      beq-      .loc_0x50
      mr        r3, r31
      bl        -0x78FEC
      stw       r3, 0x10(r30)
      mr        r3, r31
      bl        -0x78F30
      stw       r3, 0x14(r30)
      b         .loc_0x58

    .loc_0x50:
      stw       r0, 0x10(r30)
      stw       r0, 0x14(r30)

    .loc_0x58:
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
 * Address:	8024FEE4
 * Size:	00000C
 */
void Game::Cave::RandGateUnit::setManageClassPtr((Game::Cave::RandMapScore*,
                                                  Game::Cave::RandItemUnit*))
{
    /*
    .loc_0x0:
      stw       r4, 0x4(r3)
      stw       r5, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8024FEF0
 * Size:	0000D8
 */
void Game::Cave::RandGateUnit::setGateDoor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      lwz       r3, 0xC(r3)
      lwz       r0, 0x10(r27)
      cmpw      r3, r0
      bge-      .loc_0xC4
      li        r30, 0

    .loc_0x28:
      mr        r3, r27
      bl        .loc_0xD8
      mr        r0, r3
      mr        r3, r27
      mr        r29, r0
      addi      r4, r1, 0x8
      bl        0x16C
      cmplwi    r29, 0
      mr        r31, r3
      beq-      .loc_0xC4
      cmplwi    r31, 0
      beq-      .loc_0xC4
      lwz       r4, 0x8(r1)
      bl        -0xCF24
      mr        r0, r3
      li        r3, 0x24
      mr        r28, r0
      bl        -0x22C0B8
      mr.       r4, r3
      beq-      .loc_0x8C
      lwz       r5, 0x8(r1)
      mr        r4, r29
      mr        r6, r28
      bl        -0x250
      mr        r4, r3

    .loc_0x8C:
      lwz       r3, 0x20(r31)
      bl        0x1C1488
      lwz       r3, 0xC(r27)
      addi      r0, r3, 0x1
      stw       r0, 0xC(r27)
      lwz       r3, 0xC(r27)
      lwz       r0, 0x10(r27)
      cmpw      r3, r0
      blt-      .loc_0xB8
      b         .loc_0xC4
      b         .loc_0xC4

    .loc_0xB8:
      addi      r30, r30, 0x1
      cmpwi     r30, 0x64
      blt+      .loc_0x28

    .loc_0xC4:
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0xD8:
    */
}

/*
 * --INFO--
 * Address:	8024FFC8
 * Size:	0000D4
 */
void Game::Cave::RandGateUnit::getGateUnit(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      li        r29, 0
      lwz       r4, 0x0(r3)
      lwz       r31, 0x14(r3)
      lwz       r30, 0x20(r4)
      bl        -0x186A50
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0xC(r1)
      xoris     r0, r31, 0x8000
      lfd       f2, -0x3AE0(r2)
      stw       r4, 0x8(r1)
      lfs       f0, -0x3AE8(r2)
      lfd       f1, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f1, f1, f2
      lwz       r6, 0x10(r30)
      stw       r4, 0x10(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r4, 0x1C(r1)
      b         .loc_0xAC

    .loc_0x7C:
      lwz       r3, 0x18(r6)
      lwz       r5, 0x0(r3)
      cmplwi    r5, 0
      beq-      .loc_0x98
      lwz       r0, 0x20(r5)
      add       r29, r29, r0
      b         .loc_0x9C

    .loc_0x98:
      addi      r29, r29, 0x1

    .loc_0x9C:
      cmpw      r29, r4
      ble-      .loc_0xA8
      b         .loc_0xB8

    .loc_0xA8:
      lwz       r6, 0x4(r6)

    .loc_0xAC:
      cmplwi    r6, 0
      bne+      .loc_0x7C
      li        r3, 0

    .loc_0xB8:
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
 * Address:	8025009C
 * Size:	0000BC
 */
void Game::Cave::RandGateUnit::getRoomNodePtr((int&))
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
      bl        .loc_0xBC
      cmplwi    r3, 0
      beq-      .loc_0x2C
      b         .loc_0xA4

    .loc_0x2C:
      mr        r3, r30
      mr        r4, r31
      bl        0x1E8
      cmplwi    r3, 0
      beq-      .loc_0x44
      b         .loc_0xA4

    .loc_0x44:
      bl        -0x186B40
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3AE0(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3AD8(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3AE8(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3AD4(r2)
      fmuls     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x98
      mr        r3, r30
      mr        r4, r31
      bl        0x278
      cmplwi    r3, 0
      beq-      .loc_0x98
      b         .loc_0xA4

    .loc_0x98:
      mr        r3, r30
      mr        r4, r31
      bl        0x478

    .loc_0xA4:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xBC:
    */
}

/*
 * --INFO--
 * Address:	80250158
 * Size:	000160
 */
void Game::Cave::RandGateUnit::getItemSetCapDoor((int&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x1050(r1)
      mflr      r0
      stw       r0, 0x1054(r1)
      stmw      r23, 0x102C(r1)
      mr        r23, r3
      mr        r31, r4
      addi      r28, r1, 0x808
      addi      r27, r1, 0x8
      li        r26, 0
      lwz       r3, 0x0(r3)
      lwz       r3, 0x28(r3)
      lwz       r25, 0x10(r3)
      b         .loc_0xD0

    .loc_0x34:
      lwz       r3, 0x18(r25)
      bl        -0xD618
      cmpwi     r3, 0
      bne-      .loc_0xCC
      mr        r3, r25
      bl        -0xC7DC
      subi      r4, r2, 0x3AD0
      li        r5, 0x4
      bl        -0x185B2C
      cmpwi     r3, 0
      bne-      .loc_0xCC
      lwz       r3, 0x8(r23)
      mr        r4, r25
      li        r5, 0
      bl        -0x1CC8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xCC
      mr        r30, r28
      mr        r29, r27
      li        r24, 0
      b         .loc_0xBC

    .loc_0x88:
      mr        r3, r25
      mr        r4, r24
      bl        -0xCD2C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xB8
      stw       r25, 0x0(r30)
      addi      r26, r26, 0x1
      addi      r30, r30, 0x4
      addi      r28, r28, 0x4
      stw       r24, 0x0(r29)
      addi      r29, r29, 0x4
      addi      r27, r27, 0x4

    .loc_0xB8:
      addi      r24, r24, 0x1

    .loc_0xBC:
      mr        r3, r25
      bl        -0xC1B8
      cmpw      r24, r3
      blt+      .loc_0x88

    .loc_0xCC:
      lwz       r25, 0x4(r25)

    .loc_0xD0:
      cmplwi    r25, 0
      bne+      .loc_0x34
      cmpwi     r26, 0
      beq-      .loc_0x148
      bl        -0x186C98
      lis       r5, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x100C(r1)
      xoris     r0, r26, 0x8000
      lfd       f2, -0x3AE0(r2)
      addi      r4, r1, 0x8
      stw       r5, 0x1008(r1)
      addi      r3, r1, 0x808
      lfs       f0, -0x3AE8(r2)
      lfd       f1, 0x1008(r1)
      stw       r0, 0x1014(r1)
      fsubs     f1, f1, f2
      stw       r5, 0x1010(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x1010(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x1018(r1)
      lwz       r0, 0x101C(r1)
      rlwinm    r5,r0,2,0,29
      lwzx      r0, r4, r5
      lwzx      r3, r3, r5
      stw       r0, 0x0(r31)
      b         .loc_0x14C

    .loc_0x148:
      li        r3, 0

    .loc_0x14C:
      lmw       r23, 0x102C(r1)
      lwz       r0, 0x1054(r1)
      mtlr      r0
      addi      r1, r1, 0x1050
      blr
    */
}

/*
 * --INFO--
 * Address:	802502B8
 * Size:	0000E4
 */
void Game::Cave::RandGateUnit::getRoomMinScoreDoor((int&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r27, r4
      lwz       r3, 0x0(r3)
      lwz       r3, 0x28(r3)
      lwz       r30, 0x10(r3)
      b         .loc_0xC4

    .loc_0x28:
      lwz       r3, 0x18(r30)
      bl        -0xD76C
      cmpwi     r3, 0x1
      bne-      .loc_0xC0
      lwz       r3, 0x4(r26)
      li        r4, 0
      bl        -0x3750
      cmplw     r30, r3
      beq-      .loc_0xC0
      lis       r3, 0x2
      li        r28, 0
      subi      r29, r3, 0xC00
      li        r31, 0
      b         .loc_0x84

    .loc_0x60:
      lwz       r3, 0x28(r30)
      addi      r0, r31, 0x8
      lwzx      r0, r3, r0
      cmpw      r0, r29
      bge-      .loc_0x7C
      mr        r29, r0
      stw       r28, 0x0(r27)

    .loc_0x7C:
      addi      r31, r31, 0xC
      addi      r28, r28, 0x1

    .loc_0x84:
      mr        r3, r30
      bl        -0xC2E0
      cmpw      r28, r3
      blt+      .loc_0x60
      lis       r3, 0x2
      subi      r0, r3, 0xC00
      cmpw      r29, r0
      bge-      .loc_0xC0
      lwz       r4, 0x0(r27)
      mr        r3, r30
      bl        -0xCEA8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC0
      mr        r3, r30
      b         .loc_0xD0

    .loc_0xC0:
      lwz       r30, 0x4(r30)

    .loc_0xC4:
      cmplwi    r30, 0
      bne+      .loc_0x28
      li        r3, 0

    .loc_0xD0:
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8025039C
 * Size:	000218
 */
void Game::Cave::RandGateUnit::getRoomLowScoreDoor((int&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x1860(r1)
      mflr      r0
      stw       r0, 0x1864(r1)
      stmw      r18, 0x1828(r1)
      mr        r18, r4
      li        r23, 0
      li        r22, 0
      li        r21, 0
      lwz       r3, 0x0(r3)
      lwz       r19, 0x28(r3)
      lwz       r24, 0x10(r19)
      b         .loc_0x9C

    .loc_0x30:
      lwz       r3, 0x18(r24)
      bl        -0xD858
      cmpwi     r3, 0x1
      bne-      .loc_0x98
      li        r25, 0
      li        r20, 0
      b         .loc_0x88

    .loc_0x4C:
      lwz       r3, 0x28(r24)
      addi      r0, r20, 0x8
      lwzx      r0, r3, r0
      cmpw      r0, r21
      ble-      .loc_0x80
      mr        r3, r24
      mr        r4, r25
      bl        -0xCF48
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x80
      lwz       r3, 0x28(r24)
      addi      r0, r20, 0x8
      lwzx      r21, r3, r0

    .loc_0x80:
      addi      r20, r20, 0xC
      addi      r25, r25, 0x1

    .loc_0x88:
      mr        r3, r24
      bl        -0xC3C8
      cmpw      r25, r3
      blt+      .loc_0x4C

    .loc_0x98:
      lwz       r24, 0x4(r24)

    .loc_0x9C:
      cmplwi    r24, 0
      bne+      .loc_0x30
      addi      r24, r1, 0x8
      lwz       r20, 0x10(r19)
      mr        r25, r24
      addi      r27, r1, 0x1008
      addi      r26, r1, 0x808
      b         .loc_0x158

    .loc_0xBC:
      lwz       r3, 0x18(r20)
      bl        -0xD8E4
      cmpwi     r3, 0x1
      bne-      .loc_0x154
      mr        r31, r27
      mr        r30, r26
      mr        r28, r25
      li        r19, 0
      li        r29, 0
      b         .loc_0x144

    .loc_0xE4:
      mr        r3, r20
      mr        r4, r19
      bl        -0xCFCC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x13C
      lwz       r4, 0x28(r20)
      addi      r3, r29, 0x8
      stw       r20, 0x0(r31)
      addi      r0, r21, 0x1
      lwzx      r3, r4, r3
      addi      r31, r31, 0x4
      stw       r19, 0x0(r30)
      addi      r30, r30, 0x4
      sub       r0, r0, r3
      addi      r27, r27, 0x4
      stw       r0, 0x0(r28)
      addi      r26, r26, 0x4
      addi      r25, r25, 0x4
      addi      r23, r23, 0x1
      lwz       r0, 0x0(r28)
      addi      r28, r28, 0x4
      add       r22, r22, r0

    .loc_0x13C:
      addi      r29, r29, 0xC
      addi      r19, r19, 0x1

    .loc_0x144:
      mr        r3, r20
      bl        -0xC484
      cmpw      r19, r3
      blt+      .loc_0xE4

    .loc_0x154:
      lwz       r20, 0x4(r20)

    .loc_0x158:
      cmplwi    r20, 0
      bne+      .loc_0xBC
      cmpwi     r22, 0
      beq-      .loc_0x200
      bl        -0x186F64
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x180C(r1)
      xoris     r0, r22, 0x8000
      lfd       f2, -0x3AE0(r2)
      li        r5, 0
      stw       r4, 0x1808(r1)
      li        r6, 0
      lfs       f0, -0x3AE8(r2)
      lfd       f1, 0x1808(r1)
      stw       r0, 0x1814(r1)
      fsubs     f1, f1, f2
      stw       r4, 0x1810(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x1810(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x1818(r1)
      lwz       r3, 0x181C(r1)
      mtctr     r23
      cmpwi     r23, 0
      ble-      .loc_0x200

    .loc_0x1C8:
      lwz       r0, 0x0(r24)
      add       r5, r5, r0
      cmpw      r5, r3
      ble-      .loc_0x1F4
      rlwinm    r4,r6,2,0,29
      addi      r3, r1, 0x808
      lwzx      r0, r3, r4
      addi      r3, r1, 0x1008
      lwzx      r3, r3, r4
      stw       r0, 0x0(r18)
      b         .loc_0x204

    .loc_0x1F4:
      addi      r24, r24, 0x4
      addi      r6, r6, 0x1
      bdnz+     .loc_0x1C8

    .loc_0x200:
      li        r3, 0

    .loc_0x204:
      lmw       r18, 0x1828(r1)
      lwz       r0, 0x1864(r1)
      mtlr      r0
      addi      r1, r1, 0x1860
      blr
    */
}

/*
 * --INFO--
 * Address:	802505B4
 * Size:	000270
 */
void Game::Cave::RandGateUnit::getRandomScoreDoor((int&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x3050(r1)
      mflr      r0
      stw       r0, 0x3054(r1)
      stmw      r21, 0x3024(r1)
      mr        r28, r4
      li        r31, 0
      li        r27, 0
      li        r30, 0
      lwz       r3, 0x0(r3)
      lwz       r3, 0x28(r3)
      lwz       r29, 0x10(r3)
      b         .loc_0x1AC

    .loc_0x30:
      lwz       r3, 0x18(r29)
      bl        -0xDA70
      mr        r26, r3
      mr        r3, r29
      bl        -0xC594
      cmpwi     r26, 0x1
      mr        r25, r3
      bne-      .loc_0xBC
      addi      r26, r1, 0x2008
      addi      r24, r1, 0x1008
      addi      r23, r1, 0x8
      li        r22, 0
      add       r26, r26, r27
      add       r24, r24, r27
      add       r23, r23, r27
      b         .loc_0xB0

    .loc_0x70:
      mr        r3, r29
      mr        r4, r22
      bl        -0xD170
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAC
      stw       r25, 0x0(r23)
      addi      r31, r31, 0x1
      addi      r27, r27, 0x4
      lwz       r0, 0x0(r23)
      addi      r23, r23, 0x4
      stw       r29, 0x0(r26)
      addi      r26, r26, 0x4
      add       r30, r30, r0
      stw       r22, 0x0(r24)
      addi      r24, r24, 0x4

    .loc_0xAC:
      addi      r22, r22, 0x1

    .loc_0xB0:
      cmpw      r22, r25
      blt+      .loc_0x70
      b         .loc_0x1A8

    .loc_0xBC:
      cmpwi     r26, 0x2
      bne-      .loc_0x138
      li        r0, 0xA
      addi      r23, r1, 0x2008
      divw      r26, r0, r25
      addi      r24, r1, 0x1008
      addi      r22, r1, 0x8
      add       r23, r23, r27
      add       r24, r24, r27
      add       r22, r22, r27
      li        r21, 0
      b         .loc_0x12C

    .loc_0xEC:
      mr        r3, r29
      mr        r4, r21
      bl        -0xD1EC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x128
      stw       r26, 0x0(r22)
      addi      r31, r31, 0x1
      addi      r27, r27, 0x4
      lwz       r0, 0x0(r22)
      addi      r22, r22, 0x4
      stw       r29, 0x0(r23)
      addi      r23, r23, 0x4
      add       r30, r30, r0
      stw       r21, 0x0(r24)
      addi      r24, r24, 0x4

    .loc_0x128:
      addi      r21, r21, 0x1

    .loc_0x12C:
      cmpw      r21, r25
      blt+      .loc_0xEC
      b         .loc_0x1A8

    .loc_0x138:
      cmpwi     r26, 0
      bne-      .loc_0x1A8
      addi      r22, r1, 0x2008
      addi      r23, r1, 0x1008
      addi      r24, r1, 0x8
      li        r21, 0
      add       r22, r22, r27
      add       r23, r23, r27
      add       r24, r24, r27
      b         .loc_0x1A0

    .loc_0x160:
      mr        r3, r29
      mr        r4, r21
      bl        -0xD260
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x19C
      stw       r25, 0x0(r24)
      addi      r31, r31, 0x1
      addi      r27, r27, 0x4
      lwz       r0, 0x0(r24)
      addi      r24, r24, 0x4
      stw       r29, 0x0(r22)
      addi      r22, r22, 0x4
      add       r30, r30, r0
      stw       r21, 0x0(r23)
      addi      r23, r23, 0x4

    .loc_0x19C:
      addi      r21, r21, 0x1

    .loc_0x1A0:
      cmpw      r21, r25
      blt+      .loc_0x160

    .loc_0x1A8:
      lwz       r29, 0x4(r29)

    .loc_0x1AC:
      cmplwi    r29, 0
      bne+      .loc_0x30
      cmpwi     r30, 0
      beq-      .loc_0x258
      bl        -0x1871D0
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x300C(r1)
      xoris     r0, r30, 0x8000
      lfd       f2, -0x3AE0(r2)
      addi      r5, r1, 0x8
      stw       r4, 0x3008(r1)
      li        r6, 0
      lfs       f0, -0x3AE8(r2)
      li        r7, 0
      lfd       f1, 0x3008(r1)
      stw       r0, 0x3014(r1)
      fsubs     f1, f1, f2
      stw       r4, 0x3010(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x3010(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x3018(r1)
      lwz       r3, 0x301C(r1)
      mtctr     r31
      cmpwi     r31, 0
      ble-      .loc_0x258

    .loc_0x220:
      lwz       r0, 0x0(r5)
      add       r6, r6, r0
      cmpw      r6, r3
      ble-      .loc_0x24C
      rlwinm    r4,r7,2,0,29
      addi      r3, r1, 0x1008
      lwzx      r0, r3, r4
      addi      r3, r1, 0x2008
      lwzx      r3, r3, r4
      stw       r0, 0x0(r28)
      b         .loc_0x25C

    .loc_0x24C:
      addi      r5, r5, 0x4
      addi      r7, r7, 0x1
      bdnz+     .loc_0x220

    .loc_0x258:
      li        r3, 0

    .loc_0x25C:
      lmw       r21, 0x3024(r1)
      lwz       r0, 0x3054(r1)
      mtlr      r0
      addi      r1, r1, 0x3050
      blr
    */
}
