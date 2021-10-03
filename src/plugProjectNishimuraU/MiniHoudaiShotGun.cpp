

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
 * Address:	802EDCA0
 * Size:	00003C
 */
void Game::MiniHoudai::verticalRotationCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      mr        r4, r3
      stw       r0, 0x14(r1)
      bne-      .loc_0x28
      lwz       r3, -0x6888(r13)
      cmplwi    r3, 0
      beq-      .loc_0x28
      bl        0x18CC

    .loc_0x28:
      lwz       r0, 0x14(r1)
      li        r3, 0
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::__ct((Game::MiniHoudai::Obj*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::create(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void setPosition__Q34Game10MiniHoudai21MiniHoudaiShotGunNodeFR10Vector3<float>(
    void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void setVelocity__Q34Game10MiniHoudai21MiniHoudaiShotGunNodeFR10Vector3<float>(
    void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::startShotGun((bool))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802EDCDC
 * Size:	000D14
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x380(r1)
      mflr      r0
      stw       r0, 0x384(r1)
      stfd      f31, 0x370(r1)
      psq_st    f31,0x378(r1),0,0
      stfd      f30, 0x360(r1)
      psq_st    f30,0x368(r1),0,0
      stfd      f29, 0x350(r1)
      psq_st    f29,0x358(r1),0,0
      stfd      f28, 0x340(r1)
      psq_st    f28,0x348(r1),0,0
      stfd      f27, 0x330(r1)
      psq_st    f27,0x338(r1),0,0
      stfd      f26, 0x320(r1)
      psq_st    f26,0x328(r1),0,0
      stfd      f25, 0x310(r1)
      psq_st    f25,0x318(r1),0,0
      stfd      f24, 0x300(r1)
      psq_st    f24,0x308(r1),0,0
      stfd      f23, 0x2F0(r1)
      psq_st    f23,0x2F8(r1),0,0
      stfd      f22, 0x2E0(r1)
      psq_st    f22,0x2E8(r1),0,0
      stfd      f21, 0x2D0(r1)
      psq_st    f21,0x2D8(r1),0,0
      stfd      f20, 0x2C0(r1)
      psq_st    f20,0x2C8(r1),0,0
      stfd      f19, 0x2B0(r1)
      psq_st    f19,0x2B8(r1),0,0
      stfd      f18, 0x2A0(r1)
      psq_st    f18,0x2A8(r1),0,0
      stfd      f17, 0x290(r1)
      psq_st    f17,0x298(r1),0,0
      stfd      f16, 0x280(r1)
      psq_st    f16,0x288(r1),0,0
      stfd      f15, 0x270(r1)
      psq_st    f15,0x278(r1),0,0
      stfd      f14, 0x260(r1)
      psq_st    f14,0x268(r1),0,0
      stmw      r27, 0x24C(r1)
      mr        r28, r3
      lis       r4, 0x8050
      lfs       f0, 0x24(r28)
      addi      r3, r4, 0x71A0
      lfs       f2, 0x800(r3)
      addi      r8, r1, 0x64
      stfs      f0, 0x230(r1)
      li        r6, 0
      lfs       f0, 0x28(r28)
      addi      r7, r28, 0x30
      lfs       f3, -0x1340(r2)
      li        r0, -0x1
      stfs      f0, 0x240(r1)
      addi      r4, r1, 0x188
      lfs       f0, 0x2C(r28)
      li        r30, 0
      lfs       f4, -0x1338(r2)
      stfs      f0, 0x23C(r1)
      lfs       f0, 0x230(r1)
      lfs       f1, -0x1334(r2)
      stfs      f0, 0x64(r1)
      lfs       f0, 0x240(r1)
      stfs      f4, 0x70(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f0, 0x68(r1)
      lfs       f0, 0x23C(r1)
      stw       r8, 0x188(r1)
      lwz       r5, -0x6514(r13)
      stfs      f0, 0x6C(r1)
      stw       r7, 0x18C(r1)
      stfs      f3, 0x190(r1)
      stfs      f3, 0x194(r1)
      stw       r6, 0x198(r1)
      stw       r6, 0x1CC(r1)
      stb       r6, 0x1FC(r1)
      stb       r6, 0x1A1(r1)
      stb       r6, 0x1A0(r1)
      stw       r6, 0x1D0(r1)
      stw       r6, 0x19C(r1)
      stb       r6, 0x218(r1)
      stw       r6, 0x21C(r1)
      stfs      f2, 0x1B4(r1)
      stfs      f1, 0x1B8(r1)
      stw       r0, 0x220(r1)
      stw       r6, 0x1D4(r1)
      stb       r6, 0x1A2(r1)
      lwz       r0, 0x1C(r28)
      stw       r0, 0x19C(r1)
      lwz       r12, 0x4(r3)
      lfs       f1, 0x54(r5)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x64(r1)
      lfs       f0, -0x1330(r2)
      stfs      f1, 0x24(r28)
      lfs       f1, 0x68(r1)
      stfs      f1, 0x28(r28)
      lfs       f1, 0x6C(r1)
      stfs      f1, 0x2C(r28)
      lfs       f1, 0x34(r28)
      fsubs     f0, f1, f0
      stfs      f0, 0x34(r28)
      lwz       r0, 0x1CC(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1B4
      lwz       r0, 0x1D0(r1)
      cmplwi    r0, 0
      beq-      .loc_0x444

    .loc_0x1B4:
      lfs       f0, 0x24(r28)
      addi      r4, r1, 0x58
      lwz       r3, -0x6CF8(r13)
      stfs      f0, 0x58(r1)
      lfs       f0, 0x28(r28)
      stfs      f0, 0x5C(r1)
      lfs       f0, 0x2C(r28)
      stfs      f0, 0x60(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x5C(r1)
      frsp      f2, f1
      lfs       f0, -0x1330(r2)
      lfs       f1, 0x28(r28)
      fsubs     f1, f1, f2
      fcmpo     cr0, f1, f0
      bge-      .loc_0x20C
      lfs       f0, -0x1338(r2)
      fadds     f0, f0, f2
      stfs      f0, 0x28(r28)

    .loc_0x20C:
      lfs       f1, 0x24(r28)
      addi      r4, r1, 0x64
      lfs       f0, -0x1338(r2)
      stfs      f1, 0x4C(r1)
      lwz       r3, -0x6CF8(r13)
      lfs       f1, 0x28(r28)
      stfs      f1, 0x50(r1)
      fsubs     f0, f1, f0
      lfs       f1, 0x2C(r28)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x50(r1)
      bl        -0x18A5EC
      cmplwi    r3, 0
      beq-      .loc_0x334
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x0(r3)
      lis       r3, 0x804B
      subi      r0, r3, 0x5808
      li        r5, 0
      lis       r3, 0x804E
      stw       r0, 0x124(r1)
      addi      r0, r3, 0x6A3C
      lfs       f1, 0x4C(r1)
      lfs       f0, 0x54(r1)
      lis       r4, 0x804B
      lis       r3, 0x804D
      li        r9, 0x97
      subi      r10, r4, 0x5814
      li        r8, 0x98
      li        r7, 0x99
      li        r6, 0x9A
      stw       r0, 0x124(r1)
      addi      r0, r3, 0x1528
      addi      r3, r1, 0x124
      addi      r4, r1, 0x3C
      stfs      f2, 0x50(r1)
      stw       r10, 0x3C(r1)
      stfs      f1, 0x40(r1)
      stfs      f2, 0x44(r1)
      stfs      f0, 0x48(r1)
      sth       r9, 0x128(r1)
      sth       r8, 0x12A(r1)
      sth       r7, 0x12C(r1)
      sth       r6, 0x12E(r1)
      stw       r5, 0x130(r1)
      stw       r5, 0x134(r1)
      stw       r5, 0x138(r1)
      stw       r5, 0x13C(r1)
      stw       r0, 0x124(r1)
      bl        0xC11AC
      addi      r4, r28, 0x24
      li        r3, 0x380D
      bl        0x1800F0
      mr.       r29, r3
      beq-      .loc_0x3E8
      lwz       r12, 0x10(r3)
      li        r4, 0
      lfs       f1, -0x132C(r2)
      li        r5, 0
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      lfs       f1, -0x1328(r2)
      lwz       r12, 0x10(r29)
      li        r4, 0
      li        r5, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3E8

    .loc_0x334:
      lwz       r4, 0x4C(r1)
      lis       r3, 0x804B
      lwz       r7, 0x50(r1)
      subi      r0, r3, 0x5808
      lwz       r6, 0x54(r1)
      lis       r3, 0x804B
      stw       r4, 0x20(r1)
      lis       r4, 0x804E
      subi      r12, r3, 0x5814
      lfs       f0, -0x133C(r2)
      li        r5, 0
      stw       r7, 0x24(r1)
      lfs       f3, 0x20(r1)
      lis       r11, 0x804B
      stw       r6, 0x28(r1)
      lis       r3, 0x804E
      lfs       f2, 0x24(r1)
      li        r9, 0x235
      lfs       f1, 0x28(r1)
      li        r8, 0x236
      li        r7, 0x237
      li        r6, 0x238
      stw       r0, 0xF4(r1)
      addi      r10, r4, 0x6A3C
      subi      r11, r11, 0x5D24
      addi      r0, r3, 0x7040
      stw       r12, 0x110(r1)
      addi      r3, r1, 0xF4
      addi      r4, r1, 0x110
      stw       r10, 0xF4(r1)
      stfs      f3, 0x114(r1)
      stfs      f2, 0x118(r1)
      stfs      f1, 0x11C(r1)
      stw       r11, 0x110(r1)
      stfs      f0, 0x120(r1)
      sth       r9, 0xF8(r1)
      sth       r8, 0xFA(r1)
      sth       r7, 0xFC(r1)
      sth       r6, 0xFE(r1)
      stw       r5, 0x100(r1)
      stw       r5, 0x104(r1)
      stw       r5, 0x108(r1)
      stw       r5, 0x10C(r1)
      stw       r0, 0xF4(r1)
      bl        0xC4CC4

    .loc_0x3E8:
      lwz       r3, 0x20(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r4, r28, 0x24
      li        r3, 0x5800
      bl        0x17FFD4
      lbz       r0, 0x18(r28)
      cmplwi    r0, 0
      beq-      .loc_0x43C
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x4C
      li        r4, 0xF
      li        r6, 0x2
      bl        -0x9BEC4
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x4C
      li        r4, 0xE
      li        r6, 0x2
      bl        -0x9A994

    .loc_0x43C:
      li        r30, 0x1
      b         .loc_0x4F8

    .loc_0x444:
      lwz       r4, 0x1C(r28)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      lfs       f1, 0x24(r28)
      lfs       f0, -0x1340(r2)
      fsubs     f1, f2, f1
      lfs       f2, 0x18(r1)
      lfs       f3, 0x1C(r1)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x480
      b         .loc_0x484

    .loc_0x480:
      fneg      f1, f1

    .loc_0x484:
      lfs       f0, -0x1324(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x4E0
      lfs       f1, 0x28(r28)
      lfs       f0, -0x1340(r2)
      fsubs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x4A8
      b         .loc_0x4AC

    .loc_0x4A8:
      fneg      f1, f1

    .loc_0x4AC:
      lfs       f0, -0x1324(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x4E0
      lfs       f1, 0x2C(r28)
      lfs       f0, -0x1340(r2)
      fsubs     f1, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x4D0
      b         .loc_0x4D4

    .loc_0x4D0:
      fneg      f1, f1

    .loc_0x4D4:
      lfs       f0, -0x1324(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x4F8

    .loc_0x4E0:
      lwz       r3, 0x20(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      li        r30, 0x1

    .loc_0x4F8:
      lfs       f1, -0x1338(r2)
      lfs       f0, 0x240(r1)
      lfs       f30, 0x28(r28)
      fsubs     f0, f0, f1
      lfs       f31, 0x24(r28)
      fsubs     f30, f30, f1
      lfs       f29, 0x2C(r28)
      lfs       f1, -0x1340(r2)
      stfs      f0, 0x240(r1)
      lfs       f0, 0x230(r1)
      fsubs     f3, f0, f31
      lfs       f0, 0x240(r1)
      fsubs     f2, f0, f30
      lfs       f0, 0x23C(r1)
      fsubs     f0, f0, f29
      fmuls     f2, f2, f2
      fmuls     f4, f0, f0
      fmadds    f0, f3, f3, f2
      fadds     f3, f4, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x55C
      ble-      .loc_0x560
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x560

    .loc_0x55C:
      fmr       f3, f1

    .loc_0x560:
      lwz       r3, 0x1C(r28)
      lfs       f6, -0x1340(r2)
      lwz       r3, 0xC0(r3)
      fcmpo     cr0, f3, f6
      lfs       f0, 0x5DC(r3)
      lfs       f17, 0x5B4(r3)
      stfs      f0, 0x22C(r1)
      ble-      .loc_0xC54
      lfs       f0, 0x240(r1)
      lfs       f5, -0x1320(r2)
      fsubs     f27, f30, f0
      lfs       f0, 0x23C(r1)
      fsubs     f26, f29, f0
      lfs       f0, 0x230(r1)
      fmuls     f1, f27, f27
      fsubs     f28, f31, f0
      lfs       f0, 0x23C(r1)
      fmuls     f7, f26, f26
      fadds     f2, f0, f29
      lfs       f0, 0x240(r1)
      fmadds    f1, f28, f28, f1
      fadds     f4, f0, f30
      lfs       f0, 0x230(r1)
      fmuls     f2, f5, f2
      fadds     f7, f7, f1
      fmuls     f1, f5, f4
      fadds     f4, f3, f17
      fadds     f0, f0, f31
      fcmpo     cr0, f7, f6
      stfs      f4, 0x228(r1)
      lfs       f4, 0x22C(r1)
      fmuls     f0, f5, f0
      fmuls     f4, f4, f4
      stfs      f4, 0x224(r1)
      ble-      .loc_0x5FC
      ble-      .loc_0x600
      fsqrte    f4, f7
      fmuls     f7, f4, f7
      b         .loc_0x600

    .loc_0x5FC:
      fmr       f7, f6

    .loc_0x600:
      lfs       f4, -0x1340(r2)
      fcmpo     cr0, f7, f4
      ble-      .loc_0x620
      lfs       f4, -0x133C(r2)
      fdivs     f4, f4, f7
      fmuls     f28, f28, f4
      fmuls     f27, f27, f4
      fmuls     f26, f26, f4

    .loc_0x620:
      lfs       f5, -0x1340(r2)
      lfs       f6, -0x133C(r2)
      fmuls     f4, f5, f26
      fmuls     f7, f5, f27
      fmsubs    f22, f5, f28, f4
      fnmsubs   f21, f6, f28, f7
      fmsubs    f23, f6, f26, f7
      fmuls     f4, f22, f22
      fmuls     f6, f21, f21
      fmadds    f4, f23, f23, f4
      fadds     f6, f6, f4
      fcmpo     cr0, f6, f5
      ble-      .loc_0x664
      ble-      .loc_0x668
      fsqrte    f4, f6
      fmuls     f6, f4, f6
      b         .loc_0x668

    .loc_0x664:
      fmr       f6, f5

    .loc_0x668:
      lfs       f4, -0x1340(r2)
      fcmpo     cr0, f6, f4
      ble-      .loc_0x688
      lfs       f4, -0x133C(r2)
      fdivs     f4, f4, f6
      fmuls     f23, f23, f4
      fmuls     f22, f22, f4
      fmuls     f21, f21, f4

    .loc_0x688:
      fmuls     f4, f28, f21
      lfs       f5, -0x1340(r2)
      fmuls     f7, f26, f22
      fmuls     f6, f27, f23
      fmsubs    f25, f26, f23, f4
      fmsubs    f4, f27, f21, f7
      fmsubs    f24, f28, f22, f6
      fmuls     f6, f25, f25
      stfs      f4, 0x238(r1)
      frsp      f4, f4
      fmuls     f7, f24, f24
      fmadds    f4, f4, f4, f6
      fadds     f6, f7, f4
      fcmpo     cr0, f6, f5
      ble-      .loc_0x6D4
      ble-      .loc_0x6D8
      fsqrte    f4, f6
      fmuls     f6, f4, f6
      b         .loc_0x6D8

    .loc_0x6D4:
      fmr       f6, f5

    .loc_0x6D8:
      lfs       f4, -0x1340(r2)
      fcmpo     cr0, f6, f4
      ble-      .loc_0x700
      lfs       f4, -0x133C(r2)
      fdivs     f5, f4, f6
      lfs       f4, 0x238(r1)
      fmuls     f4, f4, f5
      fmuls     f25, f25, f5
      fmuls     f24, f24, f5
      stfs      f4, 0x238(r1)

    .loc_0x700:
      lfs       f4, 0x22C(r1)
      addi      r3, r1, 0xD4
      stfs      f0, 0x2C(r1)
      addi      r4, r1, 0x2C
      fadds     f3, f3, f4
      stfs      f1, 0x30(r1)
      stfs      f2, 0x34(r1)
      stfs      f3, 0x38(r1)
      bl        -0xC005C
      li        r0, 0x1
      addi      r3, r1, 0x140
      stb       r0, 0xF0(r1)
      addi      r4, r1, 0xD4
      bl        -0xC0030
      addi      r3, r1, 0x140
      bl        -0xBFFBC
      fneg      f0, f17
      lis       r3, 0x8051
      addi      r31, r3, 0x41E4
      stfs      f0, 0x234(r1)
      b         .loc_0xC44

    .loc_0x754:
      addi      r3, r1, 0x140
      bl        -0xBFEF0
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC3C
      mr        r4, r29
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r29)
      li        r27, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f15, 0xC(r1)
      lfs       f0, 0x240(r1)
      lfs       f18, 0x8(r1)
      fsubs     f4, f15, f0
      lfs       f0, 0x230(r1)
      lfs       f14, 0x10(r1)
      fsubs     f3, f18, f0
      lfs       f0, 0x23C(r1)
      lfs       f1, -0x1340(r2)
      fsubs     f5, f14, f0
      fmuls     f0, f22, f4
      fmadds    f0, f23, f3, f0
      fmadds    f16, f21, f5, f0
      fcmpo     cr0, f16, f1
      ble-      .loc_0x7D8
      fmr       f0, f16
      b         .loc_0x7DC

    .loc_0x7D8:
      fneg      f0, f16

    .loc_0x7DC:
      fcmpo     cr0, f0, f17
      bge-      .loc_0x9F8
      fmuls     f2, f25, f4
      lfs       f0, 0x238(r1)
      lfs       f1, -0x1340(r2)
      fmadds    f0, f0, f3, f2
      fmadds    f0, f24, f5, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x804
      b         .loc_0x808

    .loc_0x804:
      fneg      f0, f0

    .loc_0x808:
      fcmpo     cr0, f0, f17
      bge-      .loc_0x9F8
      fmuls     f0, f27, f4
      fmadds    f0, f28, f3, f0
      fmadds    f1, f26, f5, f0
      lfs       f0, 0x234(r1)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x9F8
      lfs       f0, 0x228(r1)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x9F8
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x888
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x968
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x968

    .loc_0x888:
      fmuls     f19, f16, f21
      lfs       f20, -0x1340(r2)
      fmuls     f16, f16, f23
      fmuls     f1, f19, f19
      fmadds    f0, f16, f16, f20
      fadds     f1, f1, f0
      fcmpo     cr0, f1, f20
      ble-      .loc_0x8B8
      ble-      .loc_0x8BC
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x8BC

    .loc_0x8B8:
      fmr       f1, f20

    .loc_0x8BC:
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x8DC
      lfs       f0, -0x133C(r2)
      fdivs     f0, f0, f1
      fmuls     f16, f16, f0
      fmuls     f20, f20, f0
      fmuls     f19, f19, f0

    .loc_0x8DC:
      mr        r3, r29
      lfs       f0, -0x131C(r2)
      lwz       r12, 0x0(r29)
      fmuls     f16, f16, f0
      lwz       r12, 0x18(r12)
      fmuls     f19, f19, f0
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x908
      lfs       f20, -0x1318(r2)

    .loc_0x908:
      lwz       r8, 0x1C(r28)
      lis       r5, 0x804B
      lis       r4, 0x804B
      lis       r3, 0x804B
      lwz       r7, 0xC0(r8)
      subi      r6, r5, 0x5D00
      addi      r5, r4, 0x4974
      addi      r0, r3, 0x492C
      lfs       f0, 0x604(r7)
      mr        r3, r29
      addi      r4, r1, 0xBC
      stw       r6, 0xBC(r1)
      stw       r5, 0xBC(r1)
      stw       r8, 0xC0(r1)
      stfs      f0, 0xC4(r1)
      stfs      f16, 0xC8(r1)
      stfs      f20, 0xCC(r1)
      stfs      f19, 0xD0(r1)
      stw       r0, 0xBC(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x9F4

    .loc_0x968:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9F4
      lwz       r5, 0x1C(r28)
      cmplw     r29, r5
      beq-      .loc_0x9F4
      lis       r3, 0x804B
      lis       r4, 0x804B
      subi      r0, r3, 0x5D00
      lfs       f3, -0x1318(r2)
      stw       r0, 0xA4(r1)
      lis       r3, 0x8051
      addi      r4, r4, 0x4974
      lfs       f2, 0x41E4(r3)
      lis       r3, 0x804B
      lfs       f1, 0x4(r31)
      stw       r4, 0xA4(r1)
      addi      r0, r3, 0x492C
      lfs       f0, 0x8(r31)
      mr        r3, r29
      stw       r5, 0xA8(r1)
      addi      r4, r1, 0xA4
      stfs      f3, 0xAC(r1)
      stfs      f2, 0xB0(r1)
      stfs      f1, 0xB4(r1)
      stfs      f0, 0xB8(r1)
      stw       r0, 0xA4(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x9F4:
      li        r27, 0

    .loc_0x9F8:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0xC3C
      rlwinm.   r0,r27,0,24,31
      beq-      .loc_0xC3C
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xA40
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB74

    .loc_0xA40:
      fsubs     f0, f30, f15
      fsubs     f2, f31, f18
      fsubs     f1, f29, f14
      fmuls     f0, f0, f0
      fmadds    f0, f2, f2, f0
      fmadds    f1, f1, f1, f0
      lfs       f0, 0x224(r1)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC3C
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA80
      ble-      .loc_0xA84
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xA84

    .loc_0xA80:
      fmr       f1, f0

    .loc_0xA84:
      lfs       f0, 0x22C(r1)
      fsubs     f16, f14, f29
      fsubs     f14, f18, f31
      lfs       f15, -0x1340(r2)
      fdivs     f4, f1, f0
      lfs       f1, -0x133C(r2)
      lfs       f0, -0x1314(r2)
      lfs       f3, -0x131C(r2)
      fsubs     f2, f1, f4
      fmuls     f1, f0, f4
      fmuls     f4, f16, f16
      fmadds    f0, f14, f14, f15
      fmadds    f18, f3, f2, f1
      fadds     f4, f4, f0
      fcmpo     cr0, f4, f15
      ble-      .loc_0xAD4
      ble-      .loc_0xAD8
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0xAD8

    .loc_0xAD4:
      fmr       f4, f15

    .loc_0xAD8:
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0xAF8
      lfs       f0, -0x133C(r2)
      fdivs     f0, f0, f4
      fmuls     f14, f14, f0
      fmuls     f15, f15, f0
      fmuls     f16, f16, f0

    .loc_0xAF8:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB18
      lfs       f15, -0x133C(r2)

    .loc_0xB18:
      lwz       r5, 0x1C(r28)
      lis       r3, 0x804B
      fmuls     f14, f14, f18
      subi      r0, r3, 0x5D00
      fmuls     f15, f15, f18
      lfs       f0, -0x1340(r2)
      fmuls     f16, f16, f18
      lis       r3, 0x804B
      stw       r0, 0x8C(r1)
      addi      r0, r3, 0x4974
      mr        r3, r29
      addi      r4, r1, 0x8C
      stw       r5, 0x90(r1)
      stw       r0, 0x8C(r1)
      stfs      f0, 0x94(r1)
      stfs      f14, 0x98(r1)
      stfs      f15, 0x9C(r1)
      stfs      f16, 0xA0(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC3C

    .loc_0xB74:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC3C
      lwz       r0, 0x1C(r28)
      cmplw     r29, r0
      beq-      .loc_0xC3C
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      fsubs     f0, f30, f15
      fsubs     f4, f31, f18
      fsubs     f3, f29, f14
      fmuls     f2, f0, f0
      fmuls     f0, f1, f1
      fmadds    f1, f4, f4, f2
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC3C
      lwz       r5, 0x1C(r28)
      lis       r3, 0x804B
      subi      r0, r3, 0x5D00
      lis       r4, 0x804B
      stw       r0, 0x74(r1)
      lis       r3, 0x8051
      addi      r4, r4, 0x4974
      lfs       f2, 0x41E4(r3)
      lfs       f3, -0x1318(r2)
      lis       r3, 0x804B
      lfs       f1, 0x4(r31)
      addi      r0, r3, 0x492C
      stw       r4, 0x74(r1)
      mr        r3, r29
      lfs       f0, 0x8(r31)
      addi      r4, r1, 0x74
      stw       r5, 0x78(r1)
      stfs      f3, 0x7C(r1)
      stfs      f2, 0x80(r1)
      stfs      f1, 0x84(r1)
      stfs      f0, 0x88(r1)
      stw       r0, 0x74(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0xC3C:
      addi      r3, r1, 0x140
      bl        -0xC041C

    .loc_0xC44:
      addi      r3, r1, 0x140
      bl        -0xC03F0
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x754

    .loc_0xC54:
      lbz       r0, 0x18(r28)
      cmplwi    r0, 0
      beq-      .loc_0xC6C
      addi      r4, r28, 0x24
      li        r3, 0x5125
      bl        0x17F770

    .loc_0xC6C:
      mr        r3, r30
      psq_l     f31,0x378(r1),0,0
      lfd       f31, 0x370(r1)
      psq_l     f30,0x368(r1),0,0
      lfd       f30, 0x360(r1)
      psq_l     f29,0x358(r1),0,0
      lfd       f29, 0x350(r1)
      psq_l     f28,0x348(r1),0,0
      lfd       f28, 0x340(r1)
      psq_l     f27,0x338(r1),0,0
      lfd       f27, 0x330(r1)
      psq_l     f26,0x328(r1),0,0
      lfd       f26, 0x320(r1)
      psq_l     f25,0x318(r1),0,0
      lfd       f25, 0x310(r1)
      psq_l     f24,0x308(r1),0,0
      lfd       f24, 0x300(r1)
      psq_l     f23,0x2F8(r1),0,0
      lfd       f23, 0x2F0(r1)
      psq_l     f22,0x2E8(r1),0,0
      lfd       f22, 0x2E0(r1)
      psq_l     f21,0x2D8(r1),0,0
      lfd       f21, 0x2D0(r1)
      psq_l     f20,0x2C8(r1),0,0
      lfd       f20, 0x2C0(r1)
      psq_l     f19,0x2B8(r1),0,0
      lfd       f19, 0x2B0(r1)
      psq_l     f18,0x2A8(r1),0,0
      lfd       f18, 0x2A0(r1)
      psq_l     f17,0x298(r1),0,0
      lfd       f17, 0x290(r1)
      psq_l     f16,0x288(r1),0,0
      lfd       f16, 0x280(r1)
      psq_l     f15,0x278(r1),0,0
      lfd       f15, 0x270(r1)
      psq_l     f14,0x268(r1),0,0
      lfd       f14, 0x260(r1)
      lmw       r27, 0x24C(r1)
      lwz       r0, 0x384(r1)
      mtlr      r0
      addi      r1, r1, 0x380
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::effectDrawOn(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::effectDrawOff(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::doDebugDraw((Graphics&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802EE9F0
 * Size:	0001E0
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::__ct((Game::MiniHoudai::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f0, -0x1340(r2)
      stw       r0, 0x34(r1)
      li        r0, 0
      stmw      r24, 0x10(r1)
      mr        r25, r3
      stw       r4, 0x0(r3)
      li        r3, 0x3C
      stb       r0, 0x4(r25)
      stb       r0, 0x5(r25)
      stb       r0, 0x6(r25)
      stfs      f0, 0x8(r25)
      stfs      f0, 0xC(r25)
      bl        -0x2CAB84
      mr.       r26, r3
      beq-      .loc_0x64
      lwz       r27, 0x0(r25)
      bl        0x122958
      lis       r3, 0x804D
      li        r0, 0
      addi      r3, r3, 0x4CB0
      stw       r3, 0x0(r26)
      stb       r0, 0x18(r26)
      stw       r27, 0x1C(r26)

    .loc_0x64:
      stw       r26, 0x2C(r25)
      li        r3, 0x3C
      bl        -0x2CABB8
      mr.       r26, r3
      beq-      .loc_0x98
      lwz       r27, 0x0(r25)
      bl        0x122924
      lis       r3, 0x804D
      li        r0, 0
      addi      r3, r3, 0x4CB0
      stw       r3, 0x0(r26)
      stb       r0, 0x18(r26)
      stw       r27, 0x1C(r26)

    .loc_0x98:
      lis       r6, 0x804E
      lis       r5, 0x804E
      lis       r4, 0x804D
      lis       r3, 0x8051
      addi      r6, r6, 0x698C
      addi      r5, r5, 0x6940
      addi      r4, r4, 0x4C64
      stw       r26, 0x30(r25)
      addi      r29, r6, 0x14
      addi      r28, r5, 0x14
      addi      r27, r4, 0x14
      addi      r31, r3, 0x41E4
      li        r26, 0

    .loc_0xCC:
      li        r3, 0x3C
      bl        -0x2CAC1C
      mr.       r30, r3
      beq-      .loc_0xFC
      lwz       r24, 0x0(r25)
      bl        0x1228C0
      lis       r3, 0x804D
      li        r0, 0
      addi      r3, r3, 0x4CB0
      stw       r3, 0x0(r30)
      stb       r0, 0x18(r30)
      stw       r24, 0x1C(r30)

    .loc_0xFC:
      li        r3, 0x14
      bl        -0x2CAC4C
      cmplwi    r3, 0
      beq-      .loc_0x174
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x6940
      li        r5, 0x239
      addi      r0, r4, 0x4C64
      stw       r29, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r28, 0x4(r3)
      stw       r8, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r27, 0x4(r3)

    .loc_0x174:
      stw       r3, 0x20(r30)
      mr        r4, r30
      lfs       f0, 0x0(r31)
      stfs      f0, 0x24(r30)
      lfs       f0, 0x4(r31)
      stfs      f0, 0x28(r30)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x2C(r30)
      lfs       f0, 0x0(r31)
      stfs      f0, 0x30(r30)
      lfs       f0, 0x4(r31)
      stfs      f0, 0x34(r30)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x38(r30)
      lwz       r3, 0x30(r25)
      bl        0x122868
      addi      r26, r26, 0x1
      cmpwi     r26, 0x6
      blt+      .loc_0xCC
      li        r0, 0
      mr        r3, r25
      stw       r0, -0x6888(r13)
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEBD0
 * Size:	00006C
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::setupShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1340(r2)
      subi      r4, r2, 0x1310
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stb       r0, 0x4(r3)
      stb       r0, 0x5(r3)
      stb       r0, 0x6(r3)
      stfs      f0, 0x8(r3)
      stfs      f0, 0xC(r3)
      lwz       r3, 0x0(r3)
      lwz       r3, 0x174(r3)
      bl        0x1503D8
      lis       r5, 0x802F
      lwz       r4, 0x18(r3)
      subi      r0, r5, 0x2360
      stw       r0, 0x4(r4)
      bl        0x13AC80
      stw       r3, 0x10(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC3C
 * Size:	00000C
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::resetCallBack(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, -0x6888(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC48
 * Size:	000008
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::setCallBack(void)
{
    /*
    .loc_0x0:
      stw       r3, -0x6888(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC50
 * Size:	000024
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::startRotation(void)
{
    /*
    .loc_0x0:
      li        r4, 0x1
      li        r0, 0
      stb       r4, 0x4(r3)
      lfs       f0, -0x1340(r2)
      stb       r0, 0x5(r3)
      stb       r0, 0x6(r3)
      stfs      f0, 0x8(r3)
      stfs      f0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC74
 * Size:	000014
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::finishRotation(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0x5(r3)
      stb       r0, 0x6(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC88
 * Size:	000008
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::isShotGunRotation(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC90
 * Size:	000008
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::isShotGunLockOn(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x5(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EEC98
 * Size:	000008
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::isFinishShotGun(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x6(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EECA0
 * Size:	00001C
 */
void setShotGunTarget__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFR10Vector3<
    float>(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x0(r4)
      stfs      f0, 0x14(r3)
      lfs       f0, 0x4(r4)
      stfs      f0, 0x18(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EECBC
 * Size:	0004C4
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::emitShotGun(void)
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
      stw       r31, 0x8C(r1)
      stw       r30, 0x88(r1)
      stw       r29, 0x84(r1)
      stw       r28, 0x80(r1)
      lis       r4, 0x8049
      mr        r28, r3
      subi      r5, r4, 0x3228
      addi      r31, r1, 0x8
      lwz       r4, 0x0(r5)
      li        r30, 0
      lwz       r3, 0x4(r5)
      lwz       r0, 0x8(r5)
      stw       r4, 0x8(r1)
      stw       r3, 0xC(r1)
      stw       r0, 0x10(r1)

    .loc_0x88:
      lwz       r3, 0x30(r28)
      lwz       r29, 0x10(r3)
      cmplwi    r29, 0
      beq-      .loc_0x3E8
      lwz       r3, 0x10(r28)
      lfs       f0, -0x1340(r2)
      lfs       f30, 0x10(r3)
      lfs       f29, 0x20(r3)
      fmuls     f1, f30, f30
      lfs       f31, 0x0(r3)
      fmuls     f2, f29, f29
      lfs       f28, 0xC(r3)
      lfs       f27, 0x1C(r3)
      fmadds    f1, f31, f31, f1
      lfs       f26, 0x2C(r3)
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xE0
      ble-      .loc_0xE4
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xE4

    .loc_0xE0:
      fmr       f1, f0

    .loc_0xE4:
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x104
      lfs       f0, -0x133C(r2)
      fdivs     f0, f0, f1
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0

    .loc_0x104:
      lfs       f1, -0x1308(r2)
      lfs       f25, 0x0(r31)
      fmuls     f2, f31, f1
      lfs       f0, -0x1304(r2)
      fmuls     f3, f30, f1
      fmuls     f1, f29, f1
      fadds     f28, f28, f2
      fadds     f27, f27, f3
      fadds     f26, f26, f1
      fmuls     f24, f0, f25
      bl        -0x225848
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x6C(r1)
      lfd       f2, -0x12F8(r2)
      stw       r0, 0x68(r1)
      lfs       f0, -0x1300(r2)
      lfd       f1, 0x68(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f24, f1
      fdivs     f0, f1, f0
      fsubs     f0, f0, f25
      fadds     f31, f31, f0
      bl        -0x22587C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x74(r1)
      lfd       f2, -0x12F8(r2)
      stw       r0, 0x70(r1)
      lfs       f0, -0x1300(r2)
      lfd       f1, 0x70(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f24, f1
      fdivs     f0, f1, f0
      fsubs     f0, f0, f25
      fadds     f30, f30, f0
      bl        -0x2258B0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x7C(r1)
      fmuls     f0, f30, f30
      lfd       f4, -0x12F8(r2)
      stw       r0, 0x78(r1)
      lfs       f2, -0x1300(r2)
      fmadds    f1, f31, f31, f0
      lfd       f3, 0x78(r1)
      lfs       f0, -0x1340(r2)
      fsubs     f3, f3, f4
      fmuls     f3, f24, f3
      fdivs     f2, f3, f2
      fsubs     f2, f2, f25
      fadds     f29, f29, f2
      fmuls     f2, f29, f29
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1F4
      ble-      .loc_0x1F8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x1F8

    .loc_0x1F4:
      fmr       f1, f0

    .loc_0x1F8:
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x218
      lfs       f0, -0x133C(r2)
      fdivs     f0, f0, f1
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0

    .loc_0x218:
      lfs       f0, 0x8(r28)
      cmpwi     r30, 0
      stfs      f28, 0x24(r29)
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      stfs      f27, 0x28(r29)
      fmuls     f29, f29, f0
      stfs      f26, 0x2C(r29)
      stfs      f31, 0x30(r29)
      stfs      f30, 0x34(r29)
      stfs      f29, 0x38(r29)
      bne-      .loc_0x310
      li        r0, 0x1
      lfs       f0, -0x1340(r2)
      stb       r0, 0x18(r29)
      lfs       f3, 0x34(r29)
      lfs       f4, 0x38(r29)
      fmuls     f1, f3, f3
      lfs       f2, 0x30(r29)
      fmuls     f5, f4, f4
      fmadds    f1, f2, f2, f1
      fadds     f1, f5, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x288
      ble-      .loc_0x28C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x28C

    .loc_0x288:
      fmr       f1, f0

    .loc_0x28C:
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2AC
      lfs       f0, -0x133C(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0x2AC:
      lis       r4, 0x804B
      lis       r3, 0x804D
      subi      r4, r4, 0x5814
      addi      r0, r29, 0x24
      stw       r4, 0x30(r1)
      addi      r3, r3, 0x153C
      addi      r4, r1, 0x30
      lfs       f0, 0x24(r29)
      stfs      f0, 0x34(r1)
      lfs       f0, 0x28(r29)
      stfs      f0, 0x38(r1)
      lfs       f0, 0x2C(r29)
      stfs      f0, 0x3C(r1)
      stw       r3, 0x30(r1)
      stfs      f2, 0x40(r1)
      stfs      f3, 0x44(r1)
      stfs      f4, 0x48(r1)
      lwz       r3, 0x20(r29)
      stw       r0, 0x10(r3)
      lwz       r3, 0x20(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3D4

    .loc_0x310:
      li        r0, 0
      lfs       f0, -0x1340(r2)
      stb       r0, 0x18(r29)
      lfs       f3, 0x34(r29)
      lfs       f4, 0x38(r29)
      fmuls     f1, f3, f3
      lfs       f2, 0x30(r29)
      fmuls     f5, f4, f4
      fmadds    f1, f2, f2, f1
      fadds     f1, f5, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x350
      ble-      .loc_0x354
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x354

    .loc_0x350:
      fmr       f1, f0

    .loc_0x354:
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x374
      lfs       f0, -0x133C(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0x374:
      lis       r4, 0x804B
      lis       r3, 0x804D
      subi      r4, r4, 0x5814
      addi      r0, r29, 0x24
      stw       r4, 0x14(r1)
      addi      r3, r3, 0x153C
      addi      r4, r1, 0x14
      lfs       f0, 0x24(r29)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x28(r29)
      stfs      f0, 0x1C(r1)
      lfs       f0, 0x2C(r29)
      stfs      f0, 0x20(r1)
      stw       r3, 0x14(r1)
      stfs      f2, 0x24(r1)
      stfs      f3, 0x28(r1)
      stfs      f4, 0x2C(r1)
      lwz       r3, 0x20(r29)
      stw       r0, 0x10(r3)
      lwz       r3, 0x20(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x3D4:
      mr        r3, r29
      bl        0x12253C
      lwz       r3, 0x2C(r28)
      mr        r4, r29
      bl        0x122368

    .loc_0x3E8:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x88
      lwz       r8, 0x10(r28)
      lis       r3, 0x804B
      subi      r0, r3, 0x5808
      li        r5, 0
      lis       r3, 0x804E
      stw       r0, 0x4C(r1)
      addi      r0, r3, 0x6A50
      lis       r3, 0x804E
      stw       r0, 0x4C(r1)
      addi      r0, r3, 0x69EC
      lis       r3, 0x804D
      li        r4, 0x23A
      stw       r0, 0x4C(r1)
      addi      r0, r3, 0x4858
      li        r7, 0x23B
      li        r6, 0x23C
      sth       r4, 0x50(r1)
      addi      r3, r1, 0x4C
      li        r4, 0
      sth       r7, 0x52(r1)
      sth       r6, 0x54(r1)
      stw       r5, 0x58(r1)
      stw       r5, 0x5C(r1)
      stw       r5, 0x60(r1)
      stw       r8, 0x64(r1)
      stw       r0, 0x4C(r1)
      bl        0xC0398
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
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      lwz       r29, 0x84(r1)
      lwz       r0, 0x114(r1)
      lwz       r28, 0x80(r1)
      mtlr      r0
      addi      r1, r1, 0x110
      blr
    */
}

/*
 * --INFO--
 * Address:	802EF180
 * Size:	000074
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x60
      lbz       r0, 0x6(r31)
      cmplwi    r0, 0
      beq-      .loc_0x4C
      bl        0x320
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x60
      li        r3, 0
      li        r0, 0x1
      stb       r3, 0x4(r31)
      stb       r0, 0x5(r31)
      b         .loc_0x60

    .loc_0x4C:
      bl        0x13C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x60
      li        r0, 0x1
      stb       r0, 0x5(r31)

    .loc_0x60:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EF1F4
 * Size:	000078
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::doUpdateCommon(void)
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
      lwz       r3, 0x2C(r3)
      lwz       r30, 0x10(r3)
      b         .loc_0x54

    .loc_0x28:
      lwz       r31, 0x4(r30)
      mr        r3, r30
      bl        -0x1548
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x50
      mr        r3, r30
      bl        0x12239C
      lwz       r3, 0x30(r29)
      mr        r4, r30
      bl        0x1221C8

    .loc_0x50:
      mr        r30, r31

    .loc_0x54:
      cmplwi    r30, 0
      bne+      .loc_0x28
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
 * Address:	802EF26C
 * Size:	00007C
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::forceFinishShotGun(void)
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
      lwz       r3, 0x2C(r3)
      lwz       r30, 0x10(r3)
      b         .loc_0x58

    .loc_0x28:
      lwz       r3, 0x20(r30)
      lwz       r31, 0x4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        0x122320
      lwz       r3, 0x30(r29)
      mr        r4, r30
      bl        0x12214C
      mr        r30, r31

    .loc_0x58:
      cmplwi    r30, 0
      bne+      .loc_0x28
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
 * Address:	802EF2E8
 * Size:	000020
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::getShotGunPosition(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x10(r4)
      lfs       f2, 0x2C(r4)
      lfs       f1, 0x1C(r4)
      lfs       f0, 0xC(r4)
      stfs      f0, 0x0(r3)
      stfs      f1, 0x4(r3)
      stfs      f2, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EF308
 * Size:	0001C4
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::searchShotGunRotation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1340(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x10(r3)
      lfs       f1, 0x1C(r31)
      lfs       f2, 0x2C(r3)
      lfs       f3, 0xC(r3)
      fsubs     f2, f2, f1
      lfs       f1, 0x14(r31)
      fsubs     f3, f3, f1
      fmuls     f1, f2, f2
      fmadds    f2, f3, f3, f1
      fcmpo     cr0, f2, f0
      ble-      .loc_0x54
      ble-      .loc_0x58
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x58

    .loc_0x54:
      fmr       f2, f0

    .loc_0x58:
      lfs       f1, -0x12F0(r2)
      lfs       f0, -0x133C(r2)
      fsubs     f2, f2, f1
      fcmpo     cr0, f2, f0
      bge-      .loc_0x70
      fmr       f2, f0

    .loc_0x70:
      lwz       r3, 0x0(r31)
      lfs       f0, -0x1320(r2)
      lwz       r3, 0xC0(r3)
      lfs       f5, -0x12EC(r2)
      lfs       f1, 0x44C(r3)
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      bge-      .loc_0xB4
      fdivs     f3, f2, f0
      lfs       f1, -0x133C(r2)
      lfs       f0, 0x5B4(r3)
      fsubs     f1, f1, f3
      fcmpo     cr0, f2, f0
      fmadds    f5, f5, f3, f1
      bge-      .loc_0xB4
      lfs       f0, -0x12E8(r2)
      fmuls     f2, f2, f0

    .loc_0xB4:
      lwz       r3, -0x6514(r13)
      lfs       f0, -0x12E4(r2)
      lfs       f4, 0x54(r3)
      lfs       f1, -0x1330(r2)
      fmuls     f3, f0, f2
      fdivs     f2, f5, f4
      lfs       f0, -0x1340(r2)
      fdivs     f2, f2, f1
      fdivs     f1, f2, f1
      fdivs     f1, f3, f1
      fdivs     f1, f1, f4
      fmuls     f3, f1, f1
      fmadds    f3, f2, f2, f3
      fcmpo     cr0, f3, f0
      ble-      .loc_0x100
      ble-      .loc_0x104
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x104

    .loc_0x100:
      fmr       f3, f0

    .loc_0x104:
      lis       r3, 0x8051
      stfs      f3, 0x8(r31)
      subi      r3, r3, 0x2E20
      bl        -0x2BA310
      fmr       f2, f1
      lfs       f0, -0x12E0(r2)
      lfs       f1, 0xC(r31)
      fsubs     f2, f0, f2
      bl        0x1227D0
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x13C
      fmr       f3, f1
      b         .loc_0x140

    .loc_0x13C:
      fneg      f3, f1

    .loc_0x140:
      lfs       f2, -0x12E8(r2)
      fcmpo     cr0, f3, f2
      ble-      .loc_0x160
      fdivs     f1, f1, f3
      lfs       f0, 0xC(r31)
      fnmsubs   f0, f2, f1, f0
      stfs      f0, 0xC(r31)
      b         .loc_0x16C

    .loc_0x160:
      lfs       f0, 0xC(r31)
      fsubs     f0, f0, f1
      stfs      f0, 0xC(r31)

    .loc_0x16C:
      lfs       f1, 0xC(r31)
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x188
      lfs       f0, -0x12DC(r2)
      fadds     f1, f0, f1
      b         .loc_0x19C

    .loc_0x188:
      lfs       f0, -0x12DC(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x19C
      fsubs     f1, f1, f0

    .loc_0x19C:
      lfs       f0, -0x12D8(r2)
      stfs      f1, 0xC(r31)
      fcmpo     cr0, f3, f0
      mfcr      r0
      lwz       r31, 0xC(r1)
      rlwinm    r3,r0,1,31,31
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EF4CC
 * Size:	0000C4
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::returnShotGunRotation(void)
{
    /*
    .loc_0x0:
      lfs       f3, -0x1340(r2)
      lfs       f4, 0xC(r3)
      fcmpo     cr0, f3, f4
      cror      2, 0x1, 0x2
      bne-      .loc_0x30
      fsubs     f2, f3, f4
      lfs       f1, -0x12DC(r2)
      fsubs     f0, f1, f2
      fcmpo     cr0, f0, f2
      bge-      .loc_0x48
      fsubs     f3, f3, f1
      b         .loc_0x48

    .loc_0x30:
      fsubs     f2, f4, f3
      lfs       f1, -0x12DC(r2)
      fsubs     f0, f1, f2
      fcmpo     cr0, f0, f2
      bge-      .loc_0x48
      fadds     f3, f3, f1

    .loc_0x48:
      fsubs     f1, f4, f3
      lfs       f0, -0x1340(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x5C
      b         .loc_0x60

    .loc_0x5C:
      fneg      f1, f1

    .loc_0x60:
      lfs       f0, -0x12D4(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x74
      fmr       f0, f3
      b         .loc_0x88

    .loc_0x74:
      fcmpo     cr0, f4, f3
      bge-      .loc_0x84
      fadds     f0, f4, f0
      b         .loc_0x88

    .loc_0x84:
      fsubs     f0, f4, f0

    .loc_0x88:
      stfs      f0, 0xC(r3)
      lfs       f0, -0x1340(r2)
      lfs       f1, 0xC(r3)
      fsubs     f1, f1, f3
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA4
      b         .loc_0xA8

    .loc_0xA4:
      fneg      f1, f1

    .loc_0xA8:
      lfs       f0, -0x12D8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xBC
      li        r3, 0x1
      blr

    .loc_0xBC:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	802EF590
 * Size:	000258
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::rotateVertical((J3DJoint*))
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
      mr        r31, r3
      lbz       r0, 0x4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x22C
      lwz       r5, 0x10(r31)
      lfs       f9, -0x1340(r2)
      lfs       f1, 0x10(r5)
      lfs       f2, 0x20(r5)
      fmuls     f5, f1, f1
      lfs       f0, 0x0(r5)
      fmuls     f8, f2, f2
      lfs       f3, 0x4(r5)
      lfs       f4, 0x14(r5)
      fmadds    f7, f0, f0, f5
      lfs       f5, 0x24(r5)
      lfs       f6, 0x8(r5)
      fadds     f31, f8, f7
      lfs       f7, 0x18(r5)
      lfs       f8, 0x28(r5)
      fcmpo     cr0, f31, f9
      ble-      .loc_0x8C
      ble-      .loc_0x90
      fsqrte    f9, f31
      fmuls     f31, f9, f31
      b         .loc_0x90

    .loc_0x8C:
      fmr       f31, f9

    .loc_0x90:
      lfs       f9, -0x1340(r2)
      fcmpo     cr0, f31, f9
      ble-      .loc_0xB4
      lfs       f9, -0x133C(r2)
      fdivs     f9, f9, f31
      fmuls     f0, f0, f9
      fmuls     f1, f1, f9
      fmuls     f2, f2, f9
      b         .loc_0xB8

    .loc_0xB4:
      fmr       f31, f9

    .loc_0xB8:
      fmuls     f10, f4, f4
      lfs       f9, -0x1340(r2)
      fmuls     f11, f5, f5
      fmadds    f10, f3, f3, f10
      fadds     f30, f11, f10
      fcmpo     cr0, f30, f9
      ble-      .loc_0xE4
      ble-      .loc_0xE8
      fsqrte    f9, f30
      fmuls     f30, f9, f30
      b         .loc_0xE8

    .loc_0xE4:
      fmr       f30, f9

    .loc_0xE8:
      lfs       f9, -0x1340(r2)
      fcmpo     cr0, f30, f9
      ble-      .loc_0x10C
      lfs       f9, -0x133C(r2)
      fdivs     f9, f9, f30
      fmuls     f3, f3, f9
      fmuls     f4, f4, f9
      fmuls     f5, f5, f9
      b         .loc_0x110

    .loc_0x10C:
      fmr       f30, f9

    .loc_0x110:
      fmuls     f10, f7, f7
      lfs       f9, -0x1340(r2)
      fmuls     f11, f8, f8
      fmadds    f10, f6, f6, f10
      fadds     f29, f11, f10
      fcmpo     cr0, f29, f9
      ble-      .loc_0x13C
      ble-      .loc_0x140
      fsqrte    f9, f29
      fmuls     f29, f9, f29
      b         .loc_0x140

    .loc_0x13C:
      fmr       f29, f9

    .loc_0x140:
      lfs       f9, -0x1340(r2)
      fcmpo     cr0, f29, f9
      ble-      .loc_0x164
      lfs       f9, -0x133C(r2)
      fdivs     f9, f9, f29
      fmuls     f6, f6, f9
      fmuls     f7, f7, f9
      fmuls     f8, f8, f9
      b         .loc_0x168

    .loc_0x164:
      fmr       f29, f9

    .loc_0x168:
      stfs      f0, 0x0(r5)
      addi      r3, r1, 0x8
      li        r4, 0x5A
      stfs      f1, 0x10(r5)
      stfs      f2, 0x20(r5)
      stfs      f3, 0x4(r5)
      stfs      f4, 0x14(r5)
      stfs      f5, 0x24(r5)
      stfs      f6, 0x8(r5)
      stfs      f7, 0x18(r5)
      stfs      f8, 0x28(r5)
      lfs       f1, 0xC(r31)
      bl        -0x205214
      lwz       r3, 0x10(r31)
      addi      r4, r1, 0x8
      mr        r5, r3
      bl        -0x205438
      lwz       r5, 0x10(r31)
      lis       r3, 0x8051
      subi      r4, r3, 0xC2C
      lfs       f0, 0x0(r5)
      lfs       f1, 0x10(r5)
      fmuls     f0, f0, f31
      lfs       f2, 0x20(r5)
      lfs       f3, 0x4(r5)
      fmuls     f1, f1, f31
      lfs       f4, 0x14(r5)
      fmuls     f2, f2, f31
      lfs       f5, 0x24(r5)
      fmuls     f3, f3, f30
      lfs       f6, 0x8(r5)
      fmuls     f4, f4, f30
      lfs       f7, 0x18(r5)
      fmuls     f5, f5, f30
      lfs       f8, 0x28(r5)
      fmuls     f6, f6, f29
      stfs      f0, 0x0(r5)
      fmuls     f7, f7, f29
      fmuls     f8, f8, f29
      stfs      f1, 0x10(r5)
      stfs      f2, 0x20(r5)
      stfs      f3, 0x4(r5)
      stfs      f4, 0x14(r5)
      stfs      f5, 0x24(r5)
      stfs      f6, 0x8(r5)
      stfs      f7, 0x18(r5)
      stfs      f8, 0x28(r5)
      lwz       r3, 0x10(r31)
      bl        -0x2054EC

    .loc_0x22C:
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lwz       r0, 0x74(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	802EF7E8
 * Size:	000088
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x2C(r3)
      lwz       r31, 0x10(r3)
      b         .loc_0x3C

    .loc_0x24:
      lwz       r3, 0x20(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x4(r31)

    .loc_0x3C:
      cmplwi    r31, 0
      bne+      .loc_0x24
      lwz       r3, 0x30(r30)
      lwz       r31, 0x10(r3)
      b         .loc_0x68

    .loc_0x50:
      lwz       r3, 0x20(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x4(r31)

    .loc_0x68:
      cmplwi    r31, 0
      bne+      .loc_0x50
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
 * Address:	802EF870
 * Size:	000088
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x2C(r3)
      lwz       r31, 0x10(r3)
      b         .loc_0x3C

    .loc_0x24:
      lwz       r3, 0x20(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x4(r31)

    .loc_0x3C:
      cmplwi    r31, 0
      bne+      .loc_0x24
      lwz       r3, 0x30(r30)
      lwz       r31, 0x10(r3)
      b         .loc_0x68

    .loc_0x50:
      lwz       r3, 0x20(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x4(r31)

    .loc_0x68:
      cmplwi    r31, 0
      bne+      .loc_0x50
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
 * Address:	........
 * Size:	000004
 */
void Game::MiniHoudai::MiniHoudaiShotGunMgr::doDebugDraw((Graphics&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802EF8F8
 * Size:	00009C
 */
void efx::TChibiShell::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804D
      addi      r3, r3, 0x4C64
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6940
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x25FCC8

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x2CB8C0

    .loc_0x80:
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
 * Address:	802EF994
 * Size:	000060
 */
void Game::MiniHoudai::MiniHoudaiShotGunNode::__dt(void)
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
      lis       r5, 0x804D
      li        r4, 0
      addi      r0, r5, 0x4CB0
      stw       r0, 0x0(r30)
      bl        0x121BC4
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x2CB920

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
 * Address:	802EF9F4
 * Size:	000028
 */
void __sinit_MiniHoudaiShotGun_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804D
      stw       r0, -0x6890(r13)
      stfsu     f0, 0x4C58(r3)
      stfs      f0, -0x688C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802EFA1C
 * Size:	000008
 */
void @4 @efx::TChibiShell::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x128
    */
}
