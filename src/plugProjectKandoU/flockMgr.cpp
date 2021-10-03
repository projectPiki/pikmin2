

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
 * Address:	8020EADC
 * Size:	0000E0
 */
void Game::BaseFlockMgr::update(void)
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
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6514(r13)
      li        r29, 0
      lwz       r30, 0x24(r3)
      b         .loc_0xA0

    .loc_0x40:
      mr        r3, r30
      mr        r4, r29
      bl        0x216ACC
      mr        r31, r3
      bl        0x216714
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x6C
      addi      r0, r29, 0x1C
      li        r3, 0
      stbx      r3, r28, r0
      b         .loc_0x9C

    .loc_0x6C:
      lwz       r3, 0x44(r31)
      addi      r4, r28, 0xC
      bl        0x20B640
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      addi      r0, r29, 0x1C
      li        r3, 0x1
      stbx      r3, r28, r0
      b         .loc_0x9C

    .loc_0x90:
      addi      r0, r29, 0x1C
      li        r3, 0
      stbx      r3, r28, r0

    .loc_0x9C:
      addi      r29, r29, 0x1

    .loc_0xA0:
      lwz       r0, 0x264(r30)
      cmpw      r29, r0
      blt+      .loc_0x40
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
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
 * Address:	8020EBBC
 * Size:	000154
 */
void getNearestFlock__Q24Game12BaseFlockMgrFR10Vector3<float>(void)
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
      lfs       f31, -0x4478(r2)
      mr        r28, r3
      mr        r29, r4
      li        r31, -0x1
      li        r30, 0
      b         .loc_0x10C

    .loc_0x3C:
      mr        r3, r28
      mr        r4, r30
      lwz       r12, 0x0(r28)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x108
      mr        r3, r28
      mr        r4, r30
      lwz       r12, 0x0(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0xC(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x108
      mr        r3, r28
      mr        r4, r30
      lwz       r12, 0x0(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x4(r3)
      lfs       f0, 0x4(r29)
      lfs       f3, 0x8(r3)
      fsubs     f4, f1, f0
      lfs       f2, 0x8(r29)
      lfs       f1, 0x0(r3)
      lfs       f0, 0x0(r29)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x4474(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xF4
      ble-      .loc_0xF8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xF8

    .loc_0xF4:
      fmr       f1, f0

    .loc_0xF8:
      fcmpo     cr0, f1, f31
      bge-      .loc_0x108
      fmr       f31, f1
      mr        r31, r30

    .loc_0x108:
      addi      r30, r30, 0x1

    .loc_0x10C:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpw      r30, r3
      blt+      .loc_0x3C
      mr        r3, r31
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
 * Address:	........
 * Size:	000140
 */
void Game::BaseFlockMgr::getRandomFlock(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020ED10
 * Size:	00011C
 */
void Game::BaseFlockMgr::attackFlock((int, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      stw       r31, 0x14(r1)
      li        r31, 0
      stw       r30, 0x10(r1)
      mr.       r30, r4
      stw       r29, 0xC(r1)
      mr        r29, r3
      blt-      .loc_0x4C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpw      r30, r3
      bge-      .loc_0x4C
      li        r31, 0x1

    .loc_0x4C:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x70
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1FA0
      li        r4, 0x5D
      addi      r5, r5, 0x1FB0
      crclr     6, 0x6
      bl        -0x1E473C

    .loc_0x70:
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r29
      lwz       r12, 0x0(r29)
      mr        r31, r0
      mr        r4, r30
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF8
      mr        r3, r31
      fmr       f1, f31
      lwz       r12, 0xC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF0
      mr        r3, r29
      mr        r4, r31
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      b         .loc_0xFC

    .loc_0xF0:
      li        r3, 0
      b         .loc_0xFC

    .loc_0xF8:
      li        r3, 0x2

    .loc_0xFC:
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      lwz       r31, 0x14(r1)
      lwz       r30, 0x10(r1)
      lwz       r29, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8020EE2C
 * Size:	000294
 */
void Game::BaseFlockMgr::resolveCollision((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stfd      f30, 0x20(r1)
      psq_st    f30,0x28(r1),0,0
      stmw      r27, 0xC(r1)
      fmr       f30, f1
      lfs       f0, -0x4470(r2)
      mr        r27, r3
      li        r30, 0
      fmuls     f31, f0, f30

    .loc_0x34:
      li        r29, 0
      b         .loc_0x1D8

    .loc_0x3C:
      mr        r3, r27
      mr        r4, r29
      lwz       r12, 0x0(r27)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1D4
      li        r28, 0
      b         .loc_0x1B8

    .loc_0x64:
      mr        r3, r27
      mr        r4, r28
      lwz       r12, 0x0(r27)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1B4
      cmpw      r29, r28
      beq-      .loc_0x1B4
      mr        r3, r27
      mr        r4, r29
      lwz       r12, 0x0(r27)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r3, r27
      lwz       r12, 0x0(r27)
      mr        r4, r28
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f7, 0x8(r31)
      lfs       f0, 0x8(r3)
      lfs       f9, 0x0(r31)
      fsubs     f5, f7, f0
      lfs       f1, 0x0(r3)
      lfs       f0, -0x4474(r2)
      fsubs     f3, f9, f1
      lfs       f8, 0x4(r31)
      fmuls     f2, f5, f5
      fmuls     f6, f3, f3
      fadds     f1, f6, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x10C
      fmadds    f1, f3, f3, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x110
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x110

    .loc_0x10C:
      fmr       f1, f0

    .loc_0x110:
      fcmpo     cr0, f1, f30
      bge-      .loc_0x1B4
      lfs       f4, -0x4474(r2)
      fadds     f0, f6, f4
      fadds     f0, f2, f0
      fcmpo     cr0, f0, f4
      ble-      .loc_0x148
      fmadds    f0, f3, f3, f4
      fadds     f1, f2, f0
      fcmpo     cr0, f1, f4
      ble-      .loc_0x14C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x14C

    .loc_0x148:
      fmr       f1, f4

    .loc_0x14C:
      lfs       f0, -0x4474(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x16C
      lfs       f0, -0x446C(r2)
      fdivs     f0, f0, f1
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0

    .loc_0x16C:
      fmuls     f3, f3, f31
      fmuls     f4, f4, f31
      fmuls     f5, f5, f31
      fsubs     f2, f9, f3
      fsubs     f1, f8, f4
      fsubs     f0, f7, f5
      stfs      f2, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f0, 0x8(r31)
      lfs       f0, 0x0(r3)
      lfs       f1, 0x4(r3)
      fadds     f0, f0, f3
      lfs       f2, 0x8(r3)
      fadds     f1, f1, f4
      fadds     f2, f2, f5
      stfs      f0, 0x0(r3)
      stfs      f1, 0x4(r3)
      stfs      f2, 0x8(r3)

    .loc_0x1B4:
      addi      r28, r28, 0x1

    .loc_0x1B8:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpw      r28, r3
      blt+      .loc_0x64

    .loc_0x1D4:
      addi      r29, r29, 0x1

    .loc_0x1D8:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpw      r29, r3
      blt+      .loc_0x3C
      addi      r30, r30, 0x1
      cmpwi     r30, 0x4
      blt+      .loc_0x34
      li        r28, 0
      b         .loc_0x254

    .loc_0x208:
      mr        r3, r27
      mr        r4, r28
      lwz       r12, 0x0(r27)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x250
      mr        r3, r27
      mr        r4, r28
      lwz       r12, 0x0(r27)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0xC(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x250:
      addi      r28, r28, 0x1

    .loc_0x254:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpw      r28, r3
      blt+      .loc_0x208
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8020F0C0
 * Size:	000198
 */
void Game::BaseFlockMgr::doSimpleDraw((Viewport*, J3DModelData**, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stmw      r23, 0x3C(r1)
      mr        r29, r3
      mr        r30, r4
      mr        r31, r6
      lhz       r0, 0x18(r4)
      add       r3, r29, r0
      lbz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x184
      lis       r3, 0x8051
      mr        r27, r5
      subi      r28, r3, 0xDD0
      li        r26, 0
      b         .loc_0x17C

    .loc_0x44:
      lwz       r5, 0x0(r27)
      li        r0, 0
      lwz       r4, 0x28(r5)
      lwz       r3, 0xA0(r5)
      lwz       r4, 0x0(r4)
      lwz       r25, 0x58(r4)
      stw       r3, 0x10C(r28)
      lwz       r3, 0xA4(r5)
      stw       r3, 0x110(r28)
      lwz       r3, 0xAC(r5)
      stw       r3, 0x114(r28)
      stw       r0, -0x7690(r13)
      b         .loc_0x16C

    .loc_0x78:
      mr        r3, r25
      lwz       r12, 0x0(r25)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x8(r25)
      bl        -0x1AE310
      li        r24, 0
      b         .loc_0x14C

    .loc_0x9C:
      mr        r3, r29
      mr        r4, r24
      lwz       r12, 0x0(r29)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r29
      lwz       r12, 0x0(r29)
      mr        r23, r0
      mr        r4, r24
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      mr        r3, r23
      lwz       r12, 0xC(r23)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      lbz       r0, 0x40(r23)
      cmpw      r0, r26
      bne-      .loc_0x148
      mr        r3, r30
      li        r4, 0x1
      bl        0x215F90
      addi      r4, r23, 0x10
      addi      r5, r1, 0x8
      bl        -0x124ED8
      addi      r3, r1, 0x8
      li        r4, 0
      bl        -0x125C6C
      addi      r3, r1, 0x8
      li        r4, 0
      bl        -0x125C28
      lwz       r3, 0x8(r25)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x148:
      addi      r24, r24, 0x1

    .loc_0x14C:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpw      r24, r3
      blt+      .loc_0x9C
      lwz       r25, 0x4(r25)

    .loc_0x16C:
      cmplwi    r25, 0
      bne+      .loc_0x78
      addi      r27, r27, 0x4
      addi      r26, r26, 0x1

    .loc_0x17C:
      cmpw      r26, r31
      blt+      .loc_0x44

    .loc_0x184:
      lmw       r23, 0x3C(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8020F258
 * Size:	000028
 */
void __sinit_flockMgr_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x6AB0(r13)
      stfsu     f0, -0x4A0(r3)
      stfs      f0, -0x6AAC(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
