

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
 * Address:	802FBD1C
 * Size:	000050
 */
void Game::DangoMushi::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1CD09C
      lis       r3, 0x804D
      lis       r4, 0x8049
      addi      r5, r3, 0x5FF8
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      subi      r0, r4, 0x2B7C
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
 * Address:	802FBD6C
 * Size:	000048
 */
void Game::DangoMushi::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x8A8
      bl        -0x2D7EE0
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x1CC500
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x48:
    */
}

/*
 * --INFO--
 * Address:	802FBDB4
 * Size:	000154
 */
void Game::DangoMushi::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      subi      r30, r4, 0x2BB8
      bl        -0x1F2638
      lis       r3, 0x804D
      lis       r5, 0x6670
      addi      r0, r3, 0x60D8
      addi      r4, r31, 0x8A4
      stw       r0, 0xD8(r31)
      li        r7, 0
      addi      r0, r30, 0x54
      addi      r3, r31, 0x804
      stw       r4, 0x7F8(r31)
      addi      r4, r31, 0x7F8
      addi      r5, r5, 0x3031
      addi      r6, r30, 0x64
      stw       r7, 0x7FC(r31)
      stw       r0, 0x800(r31)
      bl        0x117848
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0xFE8(r2)
      stw       r0, 0x804(r31)
      addi      r3, r31, 0x82C
      lfs       f1, -0xFE4(r2)
      addi      r4, r31, 0x7F8
      stfs      f0, 0x81C(r31)
      addi      r5, r5, 0x3032
      lfs       f0, -0xFE0(r2)
      addi      r6, r30, 0x78
      stfs      f1, 0x824(r31)
      stfs      f0, 0x828(r31)
      bl        0x11780C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0xFDC(r2)
      stw       r0, 0x82C(r31)
      addi      r3, r31, 0x854
      lfs       f1, -0xFE4(r2)
      addi      r4, r31, 0x7F8
      stfs      f0, 0x844(r31)
      addi      r5, r5, 0x3033
      lfs       f0, -0xFD8(r2)
      addi      r6, r30, 0x90
      stfs      f1, 0x84C(r31)
      stfs      f0, 0x850(r31)
      bl        0x1177D0
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0xFD4(r2)
      stw       r0, 0x854(r31)
      addi      r3, r31, 0x87C
      lfs       f1, -0xFE4(r2)
      addi      r4, r31, 0x7F8
      stfs      f0, 0x86C(r31)
      addi      r5, r5, 0x3130
      lfs       f0, -0xFD0(r2)
      addi      r6, r30, 0xA8
      stfs      f1, 0x874(r31)
      stfs      f0, 0x878(r31)
      bl        0x117794
      lis       r3, 0x804B
      lfs       f2, -0xFCC(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0xFE4(r2)
      stw       r0, 0x87C(r31)
      mr        r3, r31
      lfs       f0, -0xFC8(r2)
      stfs      f2, 0x894(r31)
      stfs      f1, 0x89C(r31)
      stfs      f0, 0x8A0(r31)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802FBF08
 * Size:	000060
 */
void Game::DangoMushi::Mgr::createObj((int))
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
      mulli     r3, r31, 0x310
      addi      r3, r3, 0x10
      bl        -0x2D7F80
      lis       r4, 0x8030
      lis       r5, 0x8030
      subi      r4, r4, 0x3C44
      mr        r7, r31
      subi      r5, r5, 0x4098
      li        r6, 0x310
      bl        -0x23A558
      stw       r3, 0x48(r30)
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
 * Address:	802FBF68
 * Size:	0000BC
 */
void Game::DangoMushi::Obj::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      beq-      .loc_0xA0
      lis       r3, 0x804D
      addi      r0, r31, 0x300
      addi      r4, r3, 0x61EC
      stw       r4, 0x0(r31)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x2FC
      stw       r3, 0x178(r31)
      lwz       r3, 0x17C(r31)
      stw       r4, 0x0(r3)
      lwz       r3, 0x17C(r31)
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      beq-      .loc_0x90
      lis       r3, 0x804B
      addi      r0, r31, 0x2BC
      subi      r4, r3, 0x5CDC
      addi      r3, r31, 0x290
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x1B0
      addi      r6, r4, 0x2F8
      li        r4, -0x1
      stw       r5, 0x178(r31)
      lwz       r5, 0x17C(r31)
      stw       r6, 0x0(r5)
      lwz       r5, 0x17C(r31)
      sub       r0, r0, r5
      stw       r0, 0xC(r5)
      bl        0x115594

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x2D7F50

    .loc_0xA0:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802FC024
 * Size:	000010
 */
void Game::DangoMushi::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x310
      lwz       r3, 0x48(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	802FC034
 * Size:	000068
 */
void Game::DangoMushi::Mgr::loadModelData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1CBF3C
      li        r5, 0
      b         .loc_0x40

    .loc_0x20:
      lwz       r3, 0x80(r4)
      rlwinm    r0,r5,2,14,29
      addi      r5, r5, 0x1
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      rlwinm    r0,r0,0,20,15
      ori       r0, r0, 0x2000
      stw       r0, 0xC(r3)

    .loc_0x40:
      lwz       r4, 0x1C(r31)
      rlwinm    r0,r5,0,16,31
      lhz       r3, 0x7C(r4)
      cmplw     r0, r3
      blt+      .loc_0x20
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802FC09C
 * Size:	0000B4
 */
void Game::DangoMushi::Mgr::loadTexData(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r3
      lwz       r3, 0x1C(r3)
      bl        0x1421E0
      lwz       r4, -0x7AF0(r13)
      addi      r3, r1, 0x8
      li        r31, 0
      bl        0x15050C
      lwz       r3, -0x63D8(r13)
      addi      r4, r1, 0x8
      bl        0x1506C8
      cmplwi    r3, 0
      beq-      .loc_0x4C
      lwz       r31, 0x30(r3)

    .loc_0x4C:
      cmplwi    r31, 0
      bne-      .loc_0x70
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2844
      li        r4, 0x6B
      subi      r5, r5, 0x2830
      crclr     6, 0x6
      bl        -0x2D1AC8

    .loc_0x70:
      li        r3, 0x14
      bl        -0x2D826C
      mr.       r0, r3
      beq-      .loc_0x88
      bl        0x138124
      mr        r0, r3

    .loc_0x88:
      stw       r0, 0x44(r30)
      mr        r4, r31
      lwz       r3, 0x44(r30)
      lwz       r5, 0x1C(r30)
      bl        0x137EEC
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802FC150
 * Size:	000130
 */
void Game::DangoMushi::Mgr::createModel(void)
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
      bl        -0x2D82CC
      mr.       r31, r3
      beq-      .loc_0x40
      lwz       r4, 0x1C(r29)
      lis       r5, 0x8
      lbz       r6, 0x24(r29)
      bl        0x142050
      mr        r31, r3

    .loc_0x40:
      cmplwi    r31, 0
      bne-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x2844
      li        r4, 0x84
      subi      r5, r5, 0x2830
      crclr     6, 0x6
      bl        -0x2D1B70

    .loc_0x64:
      li        r30, 0
      b         .loc_0xA8

    .loc_0x6C:
      lwz       r3, 0x64(r4)
      mr        r4, r30
      bl        -0x2CD3A8
      subi      r4, r2, 0xFC4
      bl        -0x231B0C
      cmpwi     r3, 0
      bne-      .loc_0xA4
      lwz       r4, 0x8(r31)
      rlwinm    r3,r30,6,10,25
      addi      r0, r3, 0x2C
      lwz       r3, 0xC0(r4)
      lis       r4, 0x100
      lwzx      r3, r3, r0
      bl        -0x29BF18

    .loc_0xA4:
      addi      r30, r30, 0x1

    .loc_0xA8:
      lwz       r4, 0x1C(r29)
      rlwinm    r0,r30,0,16,31
      lhz       r3, 0x5C(r4)
      cmplw     r0, r3
      blt+      .loc_0x6C
      addi      r3, r1, 0x8
      bl        -0x211F70
      lis       r4, 0x8051
      addi      r3, r1, 0x8
      subi      r4, r4, 0xDD0
      bl        -0x211F54
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
      bl        -0x295930
      mr        r3, r30
      bl        -0x295A68
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
 * Address:	802FC280
 * Size:	0000B0
 */
void Game::DangoMushi::Mgr::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0x5FF8
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
      bl        0x115288

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x2D825C

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
 * Address:	802FC330
 * Size:	000008
 */
void Game::DangoMushi::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x5E
      blr
    */
}

/*
 * --INFO--
 * Address:	802FC338
 * Size:	00002C
 */
void Game::DangoMushi::Mgr::doLoadBmd((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x124
      mr        r3, r4
      stw       r0, 0x14(r1)
      addi      r4, r5, 0x30
      bl        -0x28CABC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802FC364
 * Size:	000050
 */
void Game::DangoMushi::Parms::read((Stream&))
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
      bl        0x117474
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0x117468
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0x11745C
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
 * Address:	802FC3B4
 * Size:	000008
 */
void @4 @Game::DangoMushi::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x138
    */
}
