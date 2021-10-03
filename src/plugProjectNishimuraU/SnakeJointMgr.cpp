

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
 * Address:	802D1634
 * Size:	000038
 */
void Game::SnakeJointCallBack(J3DJoint*, int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x24
      lwz       r3, -0x68C0(r13)
      cmplwi    r3, 0
      beq-      .loc_0x24
      bl        0x1E0

    .loc_0x24:
      lwz       r0, 0x14(r1)
      li        r3, 0
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802D166C
 * Size:	00003C
 */
void Game::SnakeJointMgr::__ct((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f0, -0x1A88(r2)
      stw       r0, -0x68C0(r13)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0xC(r3)
      stw       r0, 0x10(r3)
      stw       r0, 0x14(r3)
      stw       r0, 0x18(r3)
      stw       r0, 0x1C(r3)
      stfs      f0, 0x20(r3)
      stfs      f0, 0x28(r3)
      stfs      f0, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::SnakeJointMgr::init(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802D16A8
 * Size:	0000B8
 */
void Game::SnakeJointMgr::setupCallBackJoint(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x44(r1)
      subi      r10, r4, 0x42E0
      lis       r4, 0x802D
      stmw      r26, 0x28(r1)
      mr        r27, r3
      addi      r28, r1, 0x8
      addi      r31, r4, 0x1634
      li        r26, 0
      lwz       r5, 0x0(r3)
      lwz       r9, 0x0(r10)
      lwz       r8, 0x4(r10)
      lwz       r7, 0x8(r10)
      lwz       r6, 0xC(r10)
      lwz       r3, 0x10(r10)
      lwz       r0, 0x14(r10)
      stw       r9, 0x8(r1)
      lwz       r29, 0x174(r5)
      stw       r8, 0xC(r1)
      stw       r7, 0x10(r1)
      stw       r6, 0x14(r1)
      stw       r3, 0x18(r1)
      stw       r0, 0x1C(r1)

    .loc_0x64:
      lwz       r4, 0x0(r28)
      mr        r3, r29
      bl        0x16D8D0
      mr.       r30, r3
      beq-      .loc_0x90
      bl        0x158180
      cmpwi     r26, 0x5
      stw       r3, 0x4(r27)
      bne-      .loc_0x90
      lwz       r3, 0x18(r30)
      stw       r31, 0x4(r3)

    .loc_0x90:
      addi      r26, r26, 0x1
      addi      r27, r27, 0x4
      cmpwi     r26, 0x6
      addi      r28, r28, 0x4
      blt+      .loc_0x64
      lmw       r26, 0x28(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802D1760
 * Size:	000020
 */
void Game::SnakeJointMgr::startModify((float, float))
{
    /*
    .loc_0x0:
      li        r0, 0x1
      lfs       f0, -0x1A88(r2)
      stw       r0, 0x1C(r3)
      stfs      f1, 0x20(r3)
      stfs      f2, 0x28(r3)
      stfs      f2, 0x24(r3)
      stfs      f0, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802D1780
 * Size:	00001C
 */
void Game::SnakeJointMgr::returnModify((float))
{
    /*
    .loc_0x0:
      li        r0, 0x2
      lfs       f0, -0x1A84(r2)
      stw       r0, 0x1C(r3)
      stfs      f1, 0x28(r3)
      stfs      f1, 0x24(r3)
      stfs      f0, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802D179C
 * Size:	00000C
 */
void Game::SnakeJointMgr::finishModify(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802D17A8
 * Size:	000080
 */
void Game::SnakeJointMgr::doAnimation(void)
{
    /*
    .loc_0x0:
      stw       r3, -0x68C0(r13)
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0
      beqlr-
      lwz       r4, -0x6514(r13)
      lfs       f3, -0x1A80(r2)
      lfs       f2, 0x54(r4)
      lfs       f1, 0x28(r3)
      lfs       f0, -0x1A88(r2)
      fnmsubs   f1, f3, f2, f1
      stfs      f1, 0x28(r3)
      lfs       f1, 0x28(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3C
      stfs      f0, 0x28(r3)

    .loc_0x3C:
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x64
      lfs       f1, 0x28(r3)
      lfs       f0, 0x24(r3)
      lfs       f2, -0x1A84(r2)
      fdivs     f0, f1, f0
      fsubs     f0, f2, f0
      stfs      f0, 0x2C(r3)
      blr

    .loc_0x64:
      cmpwi     r0, 0x2
      bnelr-
      lfs       f1, 0x28(r3)
      lfs       f0, 0x24(r3)
      fdivs     f0, f1, f0
      stfs      f0, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802D1828
 * Size:	00000C
 */
void Game::SnakeJointMgr::finishAnimation(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, -0x68C0(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	802D1834
 * Size:	0002AC
 */
void Game::SnakeJointMgr::makeMatrix(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      lwz       r0, 0x1C(r3)
      cmpwi     r0, 0
      beq-      .loc_0x294
      lis       r4, 0x8049
      addi      r8, r1, 0x8
      li        r0, 0x6
      mr        r5, r3
      subi      r7, r4, 0x4340
      mr        r6, r8
      li        r9, 0
      mtctr     r0

    .loc_0x40:
      lwz       r4, 0x4(r5)
      cmpwi     r9, 0x5
      lfs       f4, 0xC(r4)
      lfs       f5, 0x1C(r4)
      lfs       f6, 0x2C(r4)
      bge-      .loc_0xA8
      lwz       r4, 0x8(r5)
      lfs       f0, -0x1A88(r2)
      lfs       f1, 0x1C(r4)
      lfs       f2, 0xC(r4)
      fsubs     f3, f5, f1
      lfs       f1, 0x2C(r4)
      fsubs     f2, f4, f2
      fsubs     f1, f6, f1
      fmuls     f3, f3, f3
      fmuls     f7, f1, f1
      fmadds    f1, f2, f2, f3
      fadds     f1, f7, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA0
      ble-      .loc_0xA4
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xA4

    .loc_0xA0:
      fmr       f1, f0

    .loc_0xA4:
      stfs      f1, 0x0(r6)

    .loc_0xA8:
      lfs       f0, 0x0(r7)
      addi      r6, r6, 0x4
      lfs       f1, 0x20(r3)
      addi      r7, r7, 0x4
      lfs       f2, 0x2C(r3)
      addi      r9, r9, 0x1
      fmuls     f0, f1, f0
      lwzu      r4, 0x4(r5)
      stfs      f4, 0xC(r4)
      fmadds    f5, f2, f0, f5
      stfs      f5, 0x1C(r4)
      stfs      f6, 0x2C(r4)
      bdnz+     .loc_0x40
      lfs       f12, -0x1A88(r2)
      li        r0, 0x5
      mr        r5, r3
      fmr       f11, f12
      fmr       f10, f12
      mtctr     r0

    .loc_0xF4:
      lwz       r6, 0x4(r5)
      lwz       r4, 0x8(r5)
      lfs       f0, 0xC(r6)
      lfs       f3, 0xC(r4)
      lfs       f2, 0x1C(r4)
      lfs       f1, 0x1C(r6)
      fsubs     f0, f3, f0
      lfs       f7, 0x18(r6)
      fsubs     f1, f2, f1
      lfs       f8, 0x28(r6)
      lfs       f3, 0x2C(r4)
      fmuls     f4, f7, f0
      lfs       f2, 0x2C(r6)
      lfs       f5, 0x8(r6)
      fsubs     f2, f3, f2
      fmuls     f3, f8, f1
      fmuls     f13, f1, f1
      fmuls     f6, f5, f2
      fmsubs    f3, f7, f2, f3
      fmsubs    f5, f5, f1, f4
      fmsubs    f4, f8, f0, f6
      fmuls     f9, f1, f3
      fmuls     f7, f0, f5
      fmuls     f6, f2, f4
      fmuls     f31, f2, f2
      fmadds    f8, f0, f0, f13
      fmsubs    f6, f1, f5, f6
      fmsubs    f7, f2, f3, f7
      fadds     f13, f31, f8
      fmsubs    f8, f0, f4, f9
      fcmpo     cr0, f13, f12
      ble-      .loc_0x184
      ble-      .loc_0x188
      fsqrte    f9, f13
      fmuls     f13, f9, f13
      b         .loc_0x188

    .loc_0x184:
      fmr       f13, f12

    .loc_0x188:
      fcmpo     cr0, f13, f12
      ble-      .loc_0x1A8
      lfs       f9, -0x1A84(r2)
      fdivs     f9, f9, f13
      fmuls     f0, f0, f9
      fmuls     f1, f1, f9
      fmuls     f2, f2, f9
      b         .loc_0x1AC

    .loc_0x1A8:
      fmr       f13, f12

    .loc_0x1AC:
      fmuls     f9, f4, f4
      fmuls     f31, f5, f5
      fmadds    f9, f3, f3, f9
      fadds     f31, f31, f9
      fcmpo     cr0, f31, f11
      ble-      .loc_0x1D4
      ble-      .loc_0x1D8
      fsqrte    f9, f31
      fmuls     f31, f9, f31
      b         .loc_0x1D8

    .loc_0x1D4:
      fmr       f31, f11

    .loc_0x1D8:
      fcmpo     cr0, f31, f12
      ble-      .loc_0x1F4
      lfs       f9, -0x1A84(r2)
      fdivs     f9, f9, f31
      fmuls     f3, f3, f9
      fmuls     f4, f4, f9
      fmuls     f5, f5, f9

    .loc_0x1F4:
      fmuls     f9, f7, f7
      fmuls     f31, f8, f8
      fmadds    f9, f6, f6, f9
      fadds     f31, f31, f9
      fcmpo     cr0, f31, f10
      ble-      .loc_0x21C
      ble-      .loc_0x220
      fsqrte    f9, f31
      fmuls     f31, f9, f31
      b         .loc_0x220

    .loc_0x21C:
      fmr       f31, f10

    .loc_0x220:
      fcmpo     cr0, f31, f12
      ble-      .loc_0x23C
      lfs       f9, -0x1A84(r2)
      fdivs     f9, f9, f31
      fmuls     f6, f6, f9
      fmuls     f7, f7, f9
      fmuls     f8, f8, f9

    .loc_0x23C:
      lfs       f9, 0x0(r8)
      addi      r8, r8, 0x4
      fdivs     f9, f13, f9
      fmuls     f0, f0, f9
      fmuls     f1, f1, f9
      fmuls     f2, f2, f9
      stfs      f0, 0x0(r6)
      stfs      f1, 0x10(r6)
      stfs      f2, 0x20(r6)
      lwz       r4, 0x4(r5)
      stfs      f3, 0x4(r4)
      stfs      f4, 0x14(r4)
      stfs      f5, 0x24(r4)
      lwzu      r4, 0x4(r5)
      stfs      f6, 0x8(r4)
      stfs      f7, 0x18(r4)
      stfs      f8, 0x28(r4)
      bdnz+     .loc_0xF4
      lis       r4, 0x8051
      lwz       r3, 0x18(r3)
      subi      r4, r4, 0xC2C
      bl        -0x1E77F8

    .loc_0x294:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}
