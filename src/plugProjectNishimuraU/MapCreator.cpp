

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
 * Address:	8024C5E4
 * Size:	0000F0
 */
void Game::RoomMapMgr::nishimuraCreateRandomMap((Game::MapUnitInterface*, int,
                                                 Game::Cave::FloorInfo*, bool,
                                                 Game::Cave::EditMapUnit*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r31, r3
      mr        r25, r4
      mr        r26, r5
      mr        r27, r6
      mr        r28, r7
      mr        r29, r8
      li        r30, 0
      lwz       r9, -0x6C18(r13)
      cmplwi    r9, 0
      beq-      .loc_0x5C
      lwz       r0, 0x44(r9)
      cmpwi     r0, 0x1
      bne-      .loc_0x5C
      lis       r3, 0x8051
      addi      r3, r3, 0x41FC
      lwz       r0, 0x1A8(r3)
      cmpwi     r0, 0
      beq-      .loc_0x5C
      li        r30, 0x1

    .loc_0x5C:
      li        r3, 0x48
      bl        -0x2287A0
      mr.       r0, r3
      beq-      .loc_0x78
      mr        r4, r30
      bl        -0x812C
      mr        r0, r3

    .loc_0x78:
      stw       r0, -0x6978(r13)
      mr        r3, r0
      mr        r4, r25
      mr        r5, r26
      mr        r6, r27
      mr        r7, r28
      mr        r8, r29
      bl        -0x80C8
      lwz       r3, -0x6978(r13)
      bl        -0x7F2C
      lwz       r3, -0x6978(r13)
      bl        -0x7E30
      mr        r30, r3
      li        r29, 0
      b         .loc_0xD4

    .loc_0xB4:
      lwz       r3, -0x6978(r13)
      mr        r4, r29
      bl        -0x7E14
      mr        r0, r3
      mr        r3, r31
      mr        r4, r0
      bl        -0x93630
      addi      r29, r29, 0x1

    .loc_0xD4:
      cmpw      r29, r30
      blt+      .loc_0xB4
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C6D4
 * Size:	00011C
 */
void Game::RoomMapMgr::nishimuraPlaceRooms(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stmw      r27, 0x2C(r1)
      mr        r27, r3
      lwz       r3, -0x6978(r13)
      bl        -0x7E9C
      mr        r0, r3
      mr        r3, r27
      mr        r31, r0
      mr        r4, r31
      bl        -0x931BC
      li        r30, 0
      b         .loc_0xA8

    .loc_0x40:
      lwz       r3, -0x6978(r13)
      mr        r4, r30
      addi      r5, r1, 0x10
      addi      r6, r1, 0xC
      addi      r7, r1, 0x8
      bl        -0x7E60
      mr        r0, r3
      lwz       r3, -0x6978(r13)
      mr        r29, r0
      mr        r4, r30
      bl        -0x7DF0
      mr        r0, r3
      lwz       r3, -0x6978(r13)
      mr        r28, r0
      mr        r4, r30
      bl        -0x7D20
      lfs       f1, 0x10(r1)
      mr        r8, r3
      lfs       f2, 0xC(r1)
      mr        r3, r27
      lwz       r5, 0x8(r1)
      mr        r4, r29
      mr        r6, r30
      mr        r7, r28
      bl        -0x93034
      addi      r30, r30, 0x1

    .loc_0xA8:
      cmpw      r30, r31
      blt+      .loc_0x40
      lfs       f31, -0x3B70(r2)
      mr        r31, r27
      li        r28, 0

    .loc_0xBC:
      stfs      f31, 0x14(r1)
      mr        r5, r28
      lwz       r3, -0x6978(r13)
      addi      r4, r1, 0x14
      stfs      f31, 0x18(r1)
      stfs      f31, 0x1C(r1)
      bl        -0x7CF4
      lfs       f0, 0x14(r1)
      addi      r28, r28, 0x1
      cmpwi     r28, 0x2
      stfs      f0, 0xFC(r31)
      lfs       f0, 0x18(r1)
      stfs      f0, 0x100(r31)
      lfs       f0, 0x1C(r1)
      stfs      f0, 0x104(r31)
      addi      r31, r31, 0xC
      blt+      .loc_0xBC
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8024C7F0
 * Size:	000088
 */
void Game::RoomMapMgr::nishimuraSetTexture(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r3, -0x6978(r13)
      bl        -0x7FB8
      mr        r31, r3
      li        r30, 0
      b         .loc_0x64

    .loc_0x30:
      lwz       r3, -0x6978(r13)
      mr        r4, r30
      bl        -0x7F9C
      mr        r0, r3
      mr        r3, r29
      mr        r4, r0
      bl        -0x934FC
      mr        r0, r3
      lwz       r3, -0x6978(r13)
      mr        r5, r0
      mr        r4, r30
      bl        -0x7AE8
      addi      r30, r30, 0x1

    .loc_0x64:
      cmpw      r30, r31
      blt+      .loc_0x30
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}
