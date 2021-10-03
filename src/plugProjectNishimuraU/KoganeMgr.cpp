

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
 * Address:	8025D898
 * Size:	000050
 */
void Game::Kogane::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x12EC18
      lis       r3, 0x804C
      lis       r4, 0x8048
      addi      r5, r3, 0x2FC0
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x5390
      stw       r5, 0x4(r31)
      stw       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8025D8E8
 * Size:	0000E8
 */
void Game::Kogane::Mgr::loadModelData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x34(r1)
      addi      r5, r4, 0x53A4
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      addi      r30, r1, 0x8
      stw       r29, 0x24(r1)
      li        r29, 0
      lwz       r4, 0x0(r5)
      lwz       r3, 0x4(r5)
      lwz       r0, 0x8(r5)
      stw       r4, 0x8(r1)
      stw       r3, 0xC(r1)
      stw       r0, 0x10(r1)

    .loc_0x44:
      lwz       r3, -0x6E20(r13)
      lwz       r4, 0x0(r30)
      bl        -0x14FC90
      cmplwi    r3, 0
      beq-      .loc_0x78
      lwz       r12, 0x0(r3)
      lwz       r12, 0x74(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x78
      stw       r3, 0x1C(r31)
      b         .loc_0xCC

    .loc_0x78:
      addi      r29, r29, 0x1
      addi      r30, r30, 0x4
      cmpwi     r29, 0x3
      blt+      .loc_0x44
      mr        r3, r31
      bl        -0x12D868
      li        r5, 0
      b         .loc_0xB8

    .loc_0x98:
      lwz       r3, 0x80(r4)
      rlwinm    r0,r5,2,14,29
      addi      r5, r5, 0x1
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      rlwinm    r0,r0,0,20,15
      ori       r0, r0, 0x2000
      stw       r0, 0xC(r3)

    .loc_0xB8:
      lwz       r4, 0x1C(r31)
      rlwinm    r0,r5,0,16,31
      lhz       r3, 0x7C(r4)
      cmplw     r0, r3
      blt+      .loc_0x98

    .loc_0xCC:
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
 * Address:	8025D9D0
 * Size:	0000A0
 */
void Game::Kogane::Mgr::loadAnimData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x34(r1)
      addi      r5, r4, 0x53B0
      stw       r31, 0x2C(r1)
      addi      r31, r1, 0x8
      stw       r30, 0x28(r1)
      li        r30, 0
      stw       r29, 0x24(r1)
      mr        r29, r3
      lwz       r4, 0x0(r5)
      lwz       r3, 0x4(r5)
      lwz       r0, 0x8(r5)
      stw       r4, 0x8(r1)
      stw       r3, 0xC(r1)
      stw       r0, 0x10(r1)

    .loc_0x44:
      lwz       r3, -0x6E20(r13)
      lwz       r4, 0x0(r31)
      bl        -0x14FD78
      cmplwi    r3, 0
      beq-      .loc_0x6C
      lwz       r0, 0x20(r3)
      cmplwi    r0, 0
      beq-      .loc_0x6C
      stw       r0, 0x20(r29)
      b         .loc_0x84

    .loc_0x6C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x44
      mr        r3, r29
      bl        -0x12D884

    .loc_0x84:
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
 * Address:	8025DA70
 * Size:	000130
 */
void Game::Kogane::Mgr::createModel(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r29, r3
      li        r3, 0x14
      bl        -0x239BEC
      mr.       r31, r3
      beq-      .loc_0x40
      lwz       r4, 0x1C(r29)
      lis       r5, 0x8
      lbz       r6, 0x24(r29)
      bl        0x1E0730
      mr        r31, r3

    .loc_0x40:
      cmplwi    r31, 0
      bne-      .loc_0x64
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x53BC
      li        r4, 0x94
      addi      r5, r5, 0x53CC
      crclr     6, 0x6
      bl        -0x233490

    .loc_0x64:
      li        r30, 0
      b         .loc_0xA8

    .loc_0x6C:
      lwz       r3, 0x64(r4)
      mr        r4, r30
      bl        -0x22ECC8
      subi      r4, r2, 0x3740
      bl        -0x19342C
      cmpwi     r3, 0
      bne-      .loc_0xA4
      lwz       r4, 0x8(r31)
      rlwinm    r3,r30,6,10,25
      addi      r0, r3, 0x2C
      lwz       r3, 0xC0(r4)
      lis       r4, 0x502
      lwzx      r3, r3, r0
      bl        -0x1FD838

    .loc_0xA4:
      addi      r30, r30, 0x1

    .loc_0xA8:
      lwz       r4, 0x1C(r29)
      rlwinm    r0,r30,0,16,31
      lhz       r3, 0x5C(r4)
      cmplw     r0, r3
      blt+      .loc_0x6C
      addi      r3, r1, 0x8
      bl        -0x173890
      lis       r4, 0x8051
      addi      r3, r1, 0x8
      subi      r4, r4, 0xDD0
      bl        -0x173874
      lwz       r30, 0x8(r31)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        -0x1F7250
      mr        r3, r30
      bl        -0x1F7388
      lwz       r0, 0x54(r1)
      mr        r3, r31
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8025DBA0
 * Size:	0000B0
 */
void Game::Kogane::Mgr::__dt(void)
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
      beq-      .loc_0x94
      lis       r3, 0x804C
      addi      r3, r3, 0x2FC0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r3, 0x804B
      subi      r3, r3, 0x760
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r3, 0x804B
      addic.    r0, r30, 0x4
      subi      r3, r3, 0x5304
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r4, 0x804B
      addi      r3, r30, 0x4
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4(r30)
      bl        0x1B3968

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x239B7C

    .loc_0x94:
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
 * Address:	8025DC50
 * Size:	000008
 */
void Game::Kogane::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x9
      blr
    */
}

/*
 * --INFO--
 * Address:	8025DC58
 * Size:	00002C
 */
void Game::Kogane::Mgr::doLoadBmd((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x24
      mr        r3, r4
      stw       r0, 0x14(r1)
      addi      r4, r5, 0x30
      bl        -0x1EE3DC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8025DC84
 * Size:	000008
 */
void @4 @Game::Kogane::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xE8
    */
}
