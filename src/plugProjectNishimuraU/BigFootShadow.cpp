

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
 * Address:	802C7810
 * Size:	00020C
 */
void Game::BigFoot::BigFootShadowMgr::__ct((Game::BigFoot::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r4
      mr        r28, r3
      stw       r27, 0x4(r3)
      li        r3, 0x20
      bl        -0x2A398C
      mr.       r0, r3
      beq-      .loc_0x38
      mr        r4, r27
      bl        -0x865C4
      mr        r0, r3

    .loc_0x38:
      stw       r0, 0x48(r28)
      li        r3, 0x24
      bl        -0x2A39AC
      mr.       r27, r3
      beq-      .loc_0x60
      li        r4, 0x2
      bl        -0x86584
      lis       r3, 0x804D
      subi      r0, r3, 0x2128
      stw       r0, 0x0(r27)

    .loc_0x60:
      stw       r27, 0x4C(r28)
      lwz       r3, 0x48(r28)
      lwz       r4, 0x4C(r28)
      bl        0x149B8C
      mr        r31, r28
      mr        r30, r28
      li        r29, 0

    .loc_0x7C:
      li        r3, 0x28
      bl        -0x2A39EC
      mr.       r27, r3
      beq-      .loc_0xA8
      li        r4, 0x2
      bl        -0x865C4
      lis       r3, 0x804D
      li        r0, 0
      subi      r3, r3, 0x2138
      stw       r3, 0x0(r27)
      stw       r0, 0x24(r27)

    .loc_0xA8:
      stw       r27, 0x50(r31)
      li        r3, 0x28
      bl        -0x2A3A1C
      mr.       r27, r3
      beq-      .loc_0xD8
      li        r4, 0x2
      bl        -0x865F4
      lis       r3, 0x804D
      li        r0, 0
      subi      r3, r3, 0x2148
      stw       r3, 0x0(r27)
      stw       r0, 0x24(r27)

    .loc_0xD8:
      stw       r27, 0x60(r31)
      li        r3, 0x28
      bl        -0x2A3A4C
      mr.       r27, r3
      beq-      .loc_0x108
      li        r4, 0x2
      bl        -0x86624
      lis       r3, 0x804D
      li        r0, 0
      subi      r3, r3, 0x2148
      stw       r3, 0x0(r27)
      stw       r0, 0x24(r27)

    .loc_0x108:
      stw       r27, 0x70(r31)
      li        r3, 0x24
      bl        -0x2A3A7C
      mr.       r27, r3
      beq-      .loc_0x130
      li        r4, 0x2
      bl        -0x86654
      lis       r3, 0x804D
      subi      r0, r3, 0x2128
      stw       r0, 0x0(r27)

    .loc_0x130:
      stw       r27, 0x80(r31)
      li        r3, 0x24
      bl        -0x2A3AA4
      mr.       r27, r3
      beq-      .loc_0x158
      li        r4, 0x2
      bl        -0x8667C
      lis       r3, 0x804D
      subi      r0, r3, 0x2128
      stw       r0, 0x0(r27)

    .loc_0x158:
      stw       r27, 0x90(r31)
      li        r3, 0x24
      bl        -0x2A3ACC
      mr.       r27, r3
      beq-      .loc_0x180
      li        r4, 0x2
      bl        -0x866A4
      lis       r3, 0x804D
      subi      r0, r3, 0x2128
      stw       r0, 0x0(r27)

    .loc_0x180:
      stw       r27, 0xA0(r31)
      lwz       r3, 0x48(r28)
      lwz       r4, 0x50(r31)
      bl        0x149A6C
      lwz       r3, 0x48(r28)
      lwz       r4, 0x60(r31)
      bl        0x149A60
      lwz       r3, 0x48(r28)
      lwz       r4, 0x70(r31)
      bl        0x149A54
      lwz       r3, 0x48(r28)
      lwz       r4, 0x80(r31)
      bl        0x149A48
      lwz       r3, 0x48(r28)
      lwz       r4, 0x90(r31)
      bl        0x149A3C
      lwz       r3, 0x48(r28)
      lwz       r4, 0xA0(r31)
      bl        0x149A30
      li        r0, 0
      addi      r29, r29, 0x1
      stw       r0, 0x8(r30)
      cmpwi     r29, 0x4
      addi      r31, r31, 0x4
      stw       r0, 0xC(r30)
      stw       r0, 0x10(r30)
      stw       r0, 0x14(r30)
      addi      r30, r30, 0x10
      blt+      .loc_0x7C
      mr        r3, r28
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802C7A1C
 * Size:	00014C
 */
void Game::BigFoot::BigFootShadowMgr::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r4, 0x49C0
      subi      r4, r2, 0x1C78
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r3, 0x4(r3)
      lwz       r30, 0x174(r3)
      mr        r3, r30
      bl        0x177594
      bl        0x161E4C
      stw       r3, 0x0(r29)
      mr        r3, r30
      addi      r4, r31, 0x14
      bl        0x177580
      lwz       r5, 0x50(r29)
      addi      r4, r31, 0x20
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x17756C
      lwz       r5, 0x60(r29)
      addi      r4, r31, 0x2C
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x177558
      lwz       r5, 0x70(r29)
      addi      r4, r31, 0x38
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x177544
      lwz       r5, 0x54(r29)
      addi      r4, r31, 0x44
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x177530
      lwz       r5, 0x64(r29)
      addi      r4, r31, 0x50
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x17751C
      lwz       r5, 0x74(r29)
      addi      r4, r31, 0x5C
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x177508
      lwz       r5, 0x58(r29)
      addi      r4, r31, 0x68
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x1774F4
      lwz       r5, 0x68(r29)
      addi      r4, r31, 0x74
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x1774E0
      lwz       r5, 0x78(r29)
      addi      r4, r31, 0x80
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x1774CC
      lwz       r5, 0x5C(r29)
      addi      r4, r31, 0x8C
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x1774B8
      lwz       r5, 0x6C(r29)
      addi      r4, r31, 0x98
      stw       r3, 0x24(r5)
      mr        r3, r30
      bl        0x1774A4
      lwz       r4, 0x7C(r29)
      stw       r3, 0x24(r4)
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
 * Address:	802C7B68
 * Size:	000018
 */
void setJointPosPtr__Q34Game7BigFoot16BigFootShadowMgrFiiP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      rlwinm    r4,r4,4,0,27
      rlwinm    r0,r5,2,0,29
      add       r3, r3, r4
      add       r3, r3, r0
      stw       r6, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C7B80
 * Size:	000370
 */
void Game::BigFoot::BigFootShadowMgr::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x110(r1)
      mflr      r0
      stw       r0, 0x114(r1)
      stfd      f31, 0x100(r1)
      psq_st    f31,0x108(r1),0,0
      stfd      f30, 0xF0(r1)
      psq_st    f30,0xF8(r1),0,0
      stfd      f29, 0xE0(r1)
      psq_st    f29,0xE8(r1),0,0
      stfd      f28, 0xD0(r1)
      psq_st    f28,0xD8(r1),0,0
      stfd      f27, 0xC0(r1)
      psq_st    f27,0xC8(r1),0,0
      stfd      f26, 0xB0(r1)
      psq_st    f26,0xB8(r1),0,0
      stfd      f25, 0xA0(r1)
      psq_st    f25,0xA8(r1),0,0
      stfd      f24, 0x90(r1)
      psq_st    f24,0x98(r1),0,0
      stmw      r26, 0x78(r1)
      mr        r26, r3
      addi      r3, r1, 0x8
      lwz       r4, 0x4(r26)
      bl        0x1678
      lfs       f3, -0x1C70(r2)
      lfs       f2, -0x1C6C(r2)
      fmuls     f8, f3, f3
      lfs       f6, 0x8(r1)
      fmuls     f7, f2, f2
      lfs       f5, 0xC(r1)
      lfs       f4, 0x10(r1)
      lfs       f1, -0x1C68(r2)
      fadds     f0, f8, f7
      stfs      f6, 0x50(r1)
      stfs      f5, 0x54(r1)
      fadds     f0, f8, f0
      stfs      f4, 0x58(r1)
      fcmpo     cr0, f0, f1
      stfs      f3, 0x5C(r1)
      stfs      f2, 0x60(r1)
      stfs      f3, 0x64(r1)
      ble-      .loc_0xC4
      fmadds    f0, f3, f3, f7
      fadds     f3, f8, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0xC8
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0xC8

    .loc_0xC4:
      fmr       f3, f1

    .loc_0xC8:
      lfs       f0, -0x1C68(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x100
      lfs       f0, -0x1C64(r2)
      lfs       f2, 0x5C(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x60(r1)
      lfs       f0, 0x64(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x5C(r1)
      stfs      f1, 0x60(r1)
      stfs      f0, 0x64(r1)

    .loc_0x100:
      lwz       r3, 0x0(r26)
      addi      r4, r1, 0x50
      lfs       f0, -0x1C60(r2)
      addi      r5, r1, 0x14
      lfs       f2, 0x1C(r3)
      lfs       f5, 0x2C(r3)
      lfs       f4, 0xC(r3)
      fadds     f3, f2, f0
      lfs       f1, -0x1C54(r2)
      stfs      f2, 0x18(r1)
      lfs       f2, -0x1C68(r2)
      stfs      f4, 0x14(r1)
      lfs       f0, -0x1C50(r2)
      stfs      f5, 0x1C(r1)
      lfs       f4, -0x1C5C(r2)
      stfs      f3, 0x18(r1)
      lfs       f3, -0x1C58(r2)
      lwz       r3, 0x4(r26)
      lfs       f5, 0x2D4(r3)
      fmuls     f1, f1, f5
      stfs      f2, 0x68(r1)
      fmuls     f25, f4, f5
      stfs      f2, 0x6C(r1)
      fmuls     f24, f3, f5
      stfs      f1, 0x70(r1)
      stfs      f0, 0x74(r1)
      lwz       r3, 0x4C(r26)
      bl        0x2A9F0
      lfs       f26, -0x1C4C(r2)
      mr        r31, r26
      lfs       f27, -0x1C50(r2)
      mr        r30, r26
      lfs       f28, -0x1C48(r2)
      addi      r29, r1, 0x2C
      lfs       f29, -0x1C68(r2)
      addi      r28, r1, 0x38
      lfs       f30, -0x1C44(r2)
      addi      r27, r1, 0x44
      lfs       f31, -0x1C40(r2)
      li        r26, 0

    .loc_0x1A0:
      stfs      f26, 0x68(r1)
      mr        r6, r29
      addi      r4, r1, 0x50
      addi      r5, r1, 0x20
      stfs      f27, 0x6C(r1)
      stfs      f25, 0x70(r1)
      stfs      f28, 0x74(r1)
      lwz       r3, 0x50(r31)
      bl        0x2A300
      stfs      f29, 0x68(r1)
      mr        r5, r29
      mr        r6, r28
      addi      r4, r1, 0x50
      stfs      f29, 0x6C(r1)
      stfs      f25, 0x70(r1)
      stfs      f28, 0x74(r1)
      lwz       r3, 0x60(r31)
      bl        0x2A554
      stfs      f30, 0x68(r1)
      mr        r5, r28
      mr        r6, r27
      addi      r4, r1, 0x50
      stfs      f30, 0x6C(r1)
      stfs      f25, 0x70(r1)
      stfs      f28, 0x74(r1)
      lwz       r3, 0x70(r31)
      bl        0x2A530
      stfs      f29, 0x68(r1)
      mr        r5, r29
      addi      r4, r1, 0x50
      stfs      f29, 0x6C(r1)
      stfs      f25, 0x70(r1)
      stfs      f30, 0x74(r1)
      lwz       r3, 0x80(r31)
      bl        0x2A934
      stfs      f31, 0x74(r1)
      mr        r5, r28
      addi      r4, r1, 0x50
      lwz       r3, 0x90(r31)
      bl        0x2A920
      stfs      f24, 0x70(r1)
      mr        r5, r27
      addi      r4, r1, 0x50
      stfs      f30, 0x74(r1)
      lwz       r3, 0xA0(r31)
      bl        0x2A908
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x284
      lfs       f0, 0x20(r1)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x24(r1)
      lwz       r3, 0x8(r30)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x28(r1)
      lwz       r3, 0x8(r30)
      stfs      f0, 0x8(r3)

    .loc_0x284:
      lwz       r3, 0xC(r30)
      cmplwi    r3, 0
      beq-      .loc_0x2B0
      lfs       f0, 0x2C(r1)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x30(r1)
      lwz       r3, 0xC(r30)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x34(r1)
      lwz       r3, 0xC(r30)
      stfs      f0, 0x8(r3)

    .loc_0x2B0:
      lwz       r3, 0x10(r30)
      cmplwi    r3, 0
      beq-      .loc_0x2DC
      lfs       f0, 0x38(r1)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x3C(r1)
      lwz       r3, 0x10(r30)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x40(r1)
      lwz       r3, 0x10(r30)
      stfs      f0, 0x8(r3)

    .loc_0x2DC:
      lwz       r3, 0x14(r30)
      cmplwi    r3, 0
      beq-      .loc_0x308
      lfs       f0, 0x44(r1)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x48(r1)
      lwz       r3, 0x14(r30)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x4C(r1)
      lwz       r3, 0x14(r30)
      stfs      f0, 0x8(r3)

    .loc_0x308:
      addi      r26, r26, 0x1
      addi      r30, r30, 0x10
      cmpwi     r26, 0x4
      addi      r31, r31, 0x4
      blt+      .loc_0x1A0
      psq_l     f31,0x108(r1),0,0
      lfd       f31, 0x100(r1)
      psq_l     f30,0xF8(r1),0,0
      lfd       f30, 0xF0(r1)
      psq_l     f29,0xE8(r1),0,0
      lfd       f29, 0xE0(r1)
      psq_l     f28,0xD8(r1),0,0
      lfd       f28, 0xD0(r1)
      psq_l     f27,0xC8(r1),0,0
      lfd       f27, 0xC0(r1)
      psq_l     f26,0xB8(r1),0,0
      lfd       f26, 0xB0(r1)
      psq_l     f25,0xA8(r1),0,0
      lfd       f25, 0xA0(r1)
      psq_l     f24,0x98(r1),0,0
      lfd       f24, 0x90(r1)
      lmw       r26, 0x78(r1)
      lwz       r0, 0x114(r1)
      mtlr      r0
      addi      r1, r1, 0x110
      blr
    */
}
