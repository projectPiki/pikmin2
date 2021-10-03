

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
 * Address:	802427A8
 * Size:	0000A4
 */
void Game::Cave::MapUnits::__ct((JUTTexture*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0
      stw       r4, 0x8(r31)
      stw       r3, 0xC(r31)
      stw       r3, 0x10(r31)
      stw       r0, 0x14(r31)
      stw       r0, 0x18(r31)
      stw       r0, 0x1C(r31)
      stw       r0, 0x20(r31)
      lwz       r3, 0x8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x68
      lwz       r3, 0x20(r3)
      lhz       r0, 0x2(r3)
      rlwinm    r0,r0,29,3,31
      stw       r0, 0x1C(r31)
      lwz       r3, 0x8(r31)
      lwz       r3, 0x20(r3)
      lhz       r0, 0x4(r3)
      rlwinm    r0,r0,29,3,31
      stw       r0, 0x20(r31)

    .loc_0x68:
      li        r3, 0x20
      bl        -0x21E970
      mr.       r0, r3
      beq-      .loc_0x80
      bl        0x9108
      mr        r0, r3

    .loc_0x80:
      stw       r0, 0x0(r31)
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x4(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8024284C
 * Size:	000060
 */
void Game::Cave::MapUnits::setDoorNum((int))
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
      mulli     r3, r31, 0x1C
      addi      r3, r3, 0x10
      bl        -0x21E8C4
      lis       r4, 0x8025
      lis       r5, 0x8024
      subi      r4, r4, 0x4778
      mr        r7, r31
      addi      r5, r5, 0x28AC
      li        r6, 0x1C
      bl        -0x180E9C
      stw       r3, 0x4(r30)
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
 * Address:	802428AC
 * Size:	000060
 */
void Game::Cave::AdjustNode::__dt(void)
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
      addi      r0, r5, 0x1A58
      stw       r0, 0x0(r30)
      bl        0x1CECAC
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x21E838

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
 * Address:	8024290C
 * Size:	000008
 */
void Game::Cave::MapUnits::setUnitName((char*))
{
    /*
    .loc_0x0:
      stw       r4, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242914
 * Size:	000008
 */
void Game::Cave::MapUnits::setUnitIndex((int))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8024291C
 * Size:	000008
 */
void Game::Cave::MapUnits::setUnitKind((int))
{
    /*
    .loc_0x0:
      stw       r4, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242924
 * Size:	00000C
 */
void Game::Cave::MapUnits::setUnitSize((int, int))
{
    /*
    .loc_0x0:
      stw       r4, 0x1C(r3)
      stw       r5, 0x20(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242930
 * Size:	000008
 */
void Game::Cave::MapUnits::setBaseGenPtr((Game::Cave::BaseGen*))
{
    /*
    .loc_0x0:
      stw       r4, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::setUnitTexture((JUTTexture*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getUnitName(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getUnitIndex(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getUnitKind(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getUnitSizeX(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getUnitSizeY(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getBaseGen(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::Cave::MapUnits::getUnitTexture(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80242938
 * Size:	000064
 */
void Game::Cave::UnitInfo::__ct((Game::Cave::MapUnits*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x8(r3)
      li        r3, 0x20
      stw       r0, 0xC(r31)
      stw       r0, 0x10(r31)
      stw       r0, 0x14(r31)
      bl        -0x21EAC0
      mr.       r0, r3
      beq-      .loc_0x40
      bl        0x8FB8
      mr        r0, r3

    .loc_0x40:
      stw       r0, 0x0(r31)
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x4(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8024299C
 * Size:	00000C
 */
void Game::Cave::UnitInfo::setUnitTexture((JUTTexture*))
{
    /*
    .loc_0x0:
      lwz       r3, 0x8(r3)
      stw       r4, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802429A8
 * Size:	000008
 */
void Game::Cave::UnitInfo::setUnitRotation((int))
{
    /*
    .loc_0x0:
      stw       r4, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802429B0
 * Size:	0001BC
 */
void Game::Cave::UnitInfo::create(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      lwz       r3, 0x8(r3)
      lwz       r3, 0x0(r3)
      lwz       r30, 0x10(r3)
      b         .loc_0x5C

    .loc_0x28:
      li        r3, 0x20
      bl        -0x21EB38
      mr.       r4, r3
      beq-      .loc_0x40
      bl        0x8F40
      mr        r4, r3

    .loc_0x40:
      lwz       r0, 0x18(r30)
      stw       r0, 0x18(r4)
      lwz       r0, 0x1C(r30)
      stw       r0, 0x1C(r4)
      lwz       r3, 0x0(r31)
      bl        0x1CEA04
      lwz       r30, 0x4(r30)

    .loc_0x5C:
      cmplwi    r30, 0
      bne+      .loc_0x28
      lwz       r3, 0x8(r31)
      lwz       r0, 0x4(r3)
      stw       r0, 0x4(r31)
      lwz       r0, 0xC(r31)
      cmpwi     r0, 0
      beq-      .loc_0x84
      cmpwi     r0, 0x2
      bne-      .loc_0xA0

    .loc_0x84:
      lwz       r3, 0x8(r31)
      lwz       r0, 0x1C(r3)
      stw       r0, 0x10(r31)
      lwz       r3, 0x8(r31)
      lwz       r0, 0x20(r3)
      stw       r0, 0x14(r31)
      b         .loc_0xB8

    .loc_0xA0:
      lwz       r3, 0x8(r31)
      lwz       r0, 0x20(r3)
      stw       r0, 0x10(r31)
      lwz       r3, 0x8(r31)
      lwz       r0, 0x1C(r3)
      stw       r0, 0x14(r31)

    .loc_0xB8:
      lwz       r4, 0x8(r31)
      lwz       r3, 0x0(r31)
      lwz       r5, 0x1C(r4)
      lwz       r4, 0x20(r4)
      lwz       r6, 0x10(r3)
      subi      r5, r5, 0x1
      subi      r4, r4, 0x1
      b         .loc_0x19C

    .loc_0xD8:
      lwz       r7, 0x18(r6)
      lwz       r0, 0xC(r31)
      cmpwi     r7, 0
      add       r3, r7, r0
      rlwinm    r0,r3,30,0,1
      rlwinm    r3,r3,1,31,31
      sub       r0, r0, r3
      rlwinm    r0,r0,2,0,31
      add       r0, r0, r3
      stw       r0, 0x18(r6)
      bne-      .loc_0x124
      cmpwi     r0, 0x2
      beq-      .loc_0x114
      cmpwi     r0, 0x3
      bne-      .loc_0x198

    .loc_0x114:
      lwz       r0, 0x1C(r6)
      sub       r0, r5, r0
      stw       r0, 0x1C(r6)
      b         .loc_0x198

    .loc_0x124:
      cmpwi     r7, 0x1
      bne-      .loc_0x14C
      cmpwi     r0, 0x2
      beq-      .loc_0x13C
      cmpwi     r0, 0x3
      bne-      .loc_0x198

    .loc_0x13C:
      lwz       r0, 0x1C(r6)
      sub       r0, r4, r0
      stw       r0, 0x1C(r6)
      b         .loc_0x198

    .loc_0x14C:
      cmpwi     r7, 0x2
      bne-      .loc_0x174
      cmpwi     r0, 0
      beq-      .loc_0x164
      cmpwi     r0, 0x1
      bne-      .loc_0x198

    .loc_0x164:
      lwz       r0, 0x1C(r6)
      sub       r0, r5, r0
      stw       r0, 0x1C(r6)
      b         .loc_0x198

    .loc_0x174:
      cmpwi     r7, 0x3
      bne-      .loc_0x198
      cmpwi     r0, 0
      beq-      .loc_0x18C
      cmpwi     r0, 0x1
      bne-      .loc_0x198

    .loc_0x18C:
      lwz       r0, 0x1C(r6)
      sub       r0, r4, r0
      stw       r0, 0x1C(r6)

    .loc_0x198:
      lwz       r6, 0x4(r6)

    .loc_0x19C:
      cmplwi    r6, 0
      bne+      .loc_0xD8
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
 * Address:	80242B6C
 * Size:	00000C
 */
void Game::Cave::UnitInfo::getUnitName(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x8(r3)
      lwz       r3, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::Cave::UnitInfo::getUnitIndex(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80242B78
 * Size:	00000C
 */
void Game::Cave::UnitInfo::getUnitKind(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x8(r3)
      lwz       r3, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242B84
 * Size:	000008
 */
void Game::Cave::UnitInfo::getUnitSizeX(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242B8C
 * Size:	000008
 */
void Game::Cave::UnitInfo::getUnitSizeY(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242B94
 * Size:	000008
 */
void Game::Cave::UnitInfo::getUnitRotation(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242B9C
 * Size:	000024
 */
void Game::Cave::UnitInfo::getDoorNode((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x0(r3)
      bl        0x1CEAF0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80242BC0
 * Size:	00000C
 */
void Game::Cave::UnitInfo::getBaseGen(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x8(r3)
      lwz       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80242BCC
 * Size:	00018C
 */
void Game::Cave::UnitInfo::draw((float, float, float, float))
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
      stmw      r24, 0x10(r1)
      lwz       r4, 0x8(r3)
      fmr       f28, f1
      fmr       f29, f2
      lwz       r4, 0x8(r4)
      fmr       f30, f3
      fmr       f31, f4
      cmplwi    r4, 0
      beq-      .loc_0x158
      lwz       r0, 0xC(r3)
      li        r31, 0
      li        r30, 0x10
      li        r29, 0x10
      cmpwi     r0, 0x2
      li        r28, 0
      li        r27, 0
      li        r26, 0
      li        r25, 0x10
      li        r24, 0x10
      beq-      .loc_0xB0
      bge-      .loc_0x90
      cmpwi     r0, 0
      beq-      .loc_0xE4
      bge-      .loc_0x9C
      b         .loc_0xE4

    .loc_0x90:
      cmpwi     r0, 0x4
      bge-      .loc_0xE4
      b         .loc_0xD4

    .loc_0x9C:
      li        r30, 0
      li        r28, 0x10
      li        r27, 0x10
      li        r25, 0
      b         .loc_0xE4

    .loc_0xB0:
      li        r31, 0x10
      li        r30, 0
      li        r29, 0
      li        r28, 0x10
      li        r27, 0x10
      li        r26, 0x10
      li        r25, 0
      li        r24, 0
      b         .loc_0xE4

    .loc_0xD4:
      li        r31, 0x10
      li        r29, 0
      li        r26, 0x10
      li        r24, 0

    .loc_0xE4:
      mr        r3, r4
      li        r4, 0
      bl        -0x20F688
      li        r3, 0x80
      li        r4, 0
      li        r5, 0x4
      bl        -0x15D340
      lis       r3, 0xCC01
      lfs       f0, -0x3C88(r2)
      stfs      f28, -0x8000(r3)
      stfs      f29, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stb       r31, -0x8000(r3)
      stb       r27, -0x8000(r3)
      stfs      f30, -0x8000(r3)
      stfs      f29, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stb       r30, -0x8000(r3)
      stb       r26, -0x8000(r3)
      stfs      f30, -0x8000(r3)
      stfs      f31, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stb       r29, -0x8000(r3)
      stb       r25, -0x8000(r3)
      stfs      f28, -0x8000(r3)
      stfs      f31, -0x8000(r3)
      stfs      f0, -0x8000(r3)
      stb       r28, -0x8000(r3)
      stb       r24, -0x8000(r3)

    .loc_0x158:
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      psq_l     f28,0x38(r1),0,0
      lfd       f28, 0x30(r1)
      lmw       r24, 0x10(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}
