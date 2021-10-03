

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
 * Address:	801972DC
 * Size:	00003C
 */
void PikiAI::ActGotoPos::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x8D8
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x4CB0
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80197318
 * Size:	000078
 */
void PikiAI::ActGotoPos::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1E
      li        r6, 0
      stw       r0, 0x14(r1)
      li        r7, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1E
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x4(r31)
      stfs      f0, 0x10(r30)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x14(r30)
      lfs       f0, 0xC(r31)
      stfs      f0, 0x18(r30)
      lfs       f0, 0x10(r31)
      stfs      f0, 0xC(r30)
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
 * Address:	80197390
 * Size:	00011C
 */
void PikiAI::ActGotoPos::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x14(r31)
      lfs       f2, 0xC(r1)
      lfs       f1, 0x10(r31)
      lfs       f0, 0x8(r1)
      fsubs     f4, f3, f2
      lfs       f3, 0x18(r31)
      fsubs     f2, f1, f0
      lfs       f0, 0x10(r1)
      fmuls     f5, f4, f4
      lfs       f1, -0x5400(r2)
      fsubs     f3, f3, f0
      stfs      f4, 0x18(r1)
      fmuls     f0, f2, f2
      stfs      f2, 0x14(r1)
      fmuls     f4, f3, f3
      stfs      f3, 0x1C(r1)
      fadds     f0, f0, f5
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x98
      fmadds    f0, f2, f2, f5
      fadds     f4, f4, f0
      fcmpo     cr0, f4, f1
      ble-      .loc_0x9C
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0x9C

    .loc_0x98:
      fmr       f4, f1

    .loc_0x9C:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0xD8
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x14(r1)
      fdivs     f3, f0, f4
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      b         .loc_0xDC

    .loc_0xD8:
      fmr       f4, f0

    .loc_0xDC:
      lfs       f0, 0xC(r31)
      fcmpo     cr0, f4, f0
      cror      2, 0, 0x2
      bne-      .loc_0xF4
      li        r3, 0
      b         .loc_0x108

    .loc_0xF4:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x14
      lfs       f1, -0x53FC(r2)
      bl        -0x4E478
      li        r3, 0x1

    .loc_0x108:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801974AC
 * Size:	000004
 */
void PikiAI::ActGotoPos::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801974B0
 * Size:	00003C
 */
void PikiAI::ActApproachPos::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0xAAC
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x4C74
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801974EC
 * Size:	000104
 */
void PikiAI::ActApproachPos::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr.       r29, r4
      lis       r4, 0x8048
      stw       r28, 0x10(r1)
      mr        r28, r3
      subi      r31, r4, 0xF90
      beq-      .loc_0x64
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r31, 0x1C
      bl        -0xCCE7C
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x64
      li        r30, 0x1

    .loc_0x64:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x80
      addi      r3, r31, 0x34
      addi      r5, r31, 0x48
      li        r4, 0x1A8
      crclr     6, 0x6
      bl        -0x16CF28

    .loc_0x80:
      lwz       r3, 0x4(r28)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x4(r29)
      lfs       f0, -0x5400(r2)
      stfs      f1, 0x10(r28)
      lfs       f1, 0x8(r29)
      stfs      f1, 0x14(r28)
      lfs       f1, 0xC(r29)
      stfs      f1, 0x18(r28)
      lfs       f1, 0x10(r29)
      stfs      f1, 0xC(r28)
      lbz       r0, 0x18(r29)
      stb       r0, 0x24(r28)
      lbz       r0, 0x19(r29)
      stb       r0, 0x25(r28)
      lfs       f1, 0x14(r29)
      stfs      f1, 0x1C(r28)
      stfs      f0, 0x20(r28)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801975F0
 * Size:	000328
 */
void PikiAI::ActApproachPos::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stfd      f29, 0x30(r1)
      psq_st    f29,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x18(r31)
      lfs       f2, 0x10(r1)
      lfs       f1, 0x10(r31)
      lfs       f0, 0x8(r1)
      fsubs     f4, f3, f2
      lfs       f3, 0x14(r31)
      fsubs     f2, f1, f0
      lfs       f1, 0xC(r1)
      fmuls     f5, f4, f4
      lfs       f0, -0x5400(r2)
      fsubs     f1, f3, f1
      stfs      f4, 0x1C(r1)
      fmuls     f3, f2, f2
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      fadds     f1, f3, f5
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA4
      fmadds    f30, f2, f2, f5
      fcmpo     cr0, f30, f0
      ble-      .loc_0xA8
      fsqrte    f0, f30
      fmuls     f30, f0, f30
      b         .loc_0xA8

    .loc_0xA4:
      fmr       f30, f0

    .loc_0xA8:
      lfs       f29, 0x18(r1)
      lfs       f1, -0x5400(r2)
      fmuls     f4, f29, f29
      fadds     f0, f3, f4
      fadds     f0, f5, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xE0
      fmadds    f0, f2, f2, f4
      fadds     f3, f5, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0xE4
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0xE4

    .loc_0xE0:
      fmr       f3, f1

    .loc_0xE4:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x11C
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x14(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)

    .loc_0x11C:
      lis       r3, 0x8051
      lfs       f1, 0x14(r1)
      lfs       f2, 0x1C(r1)
      subi      r3, r3, 0x2E20
      bl        -0x162614
      lwz       r3, 0x4(r31)
      fmr       f31, f1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x27A4BC
      lfs       f2, 0x1C(r31)
      fmr       f31, f1
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x198
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x20(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x20(r31)
      lfs       f1, 0x20(r31)
      lfs       f0, 0x1C(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x198
      li        r3, 0
      b         .loc_0x2FC

    .loc_0x198:
      lbz       r0, 0x25(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1C0
      fabs      f1, f29
      lfs       f0, -0x53F8(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1C0
      li        r3, 0x2
      b         .loc_0x2FC

    .loc_0x1C0:
      lfs       f1, 0xC(r31)
      fcmpo     cr0, f30, f1
      bge-      .loc_0x1FC
      lwz       r3, 0x4(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      fmr       f2, f30
      lwz       r3, 0x4(r31)
      lfs       f1, -0x53F4(r2)
      addi      r4, r1, 0x14
      bl        -0x4E60C
      b         .loc_0x2F8

    .loc_0x1FC:
      lfs       f0, -0x53F0(r2)
      fadds     f0, f0, f1
      fcmpo     cr0, f30, f0
      ble-      .loc_0x278
      lwz       r3, 0x4(r31)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x24(r31)
      cmplwi    r0, 0
      beq-      .loc_0x264
      lfs       f1, -0x53EC(r2)
      lfs       f0, -0x53FC(r2)
      fmuls     f1, f1, f30
      fcmpo     cr0, f1, f0
      ble-      .loc_0x248
      fmr       f1, f0

    .loc_0x248:
      lfs       f0, -0x53E8(r2)
      addi      r4, r1, 0x14
      lwz       r3, 0x4(r31)
      fmuls     f1, f1, f0
      fadds     f1, f0, f1
      bl        -0x4E834
      b         .loc_0x2F8

    .loc_0x264:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x14
      lfs       f1, -0x53E8(r2)
      bl        -0x4E848
      b         .loc_0x2F8

    .loc_0x278:
      lwz       r3, 0x4(r31)
      lis       r4, 0x8051
      addi      r4, r4, 0x41E4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      fabs      f1, f31
      lfs       f0, -0x53E4(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2DC
      lbz       r0, 0x25(r31)
      cmplwi    r0, 0
      beq-      .loc_0x2D4
      lfs       f1, 0x18(r1)
      lfs       f0, -0x53E0(r2)
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2D4
      li        r3, 0x1
      b         .loc_0x2FC

    .loc_0x2D4:
      li        r3, 0
      b         .loc_0x2FC

    .loc_0x2DC:
      lwz       r3, 0x4(r31)
      lfs       f1, -0x53DC(r2)
      lfs       f0, 0x1FC(r3)
      fmadds    f1, f1, f31, f0
      bl        0x27A2F4
      lwz       r3, 0x4(r31)
      stfs      f1, 0x1FC(r3)

    .loc_0x2F8:
      li        r3, 0x1

    .loc_0x2FC:
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r0, 0x64(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80197918
 * Size:	000034
 */
void PikiAI::ActApproachPos::cleanup(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1
      stw       r0, 0x14(r1)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019794C
 * Size:	00003C
 */
void PikiAI::ActGotoSlot::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0xF48
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x4C38
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80197988
 * Size:	00018C
 */
void PikiAI::ActGotoSlot::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      li        r30, 0
      stw       r29, 0x24(r1)
      mr.       r29, r4
      lis       r4, 0x8048
      stw       r28, 0x20(r1)
      mr        r28, r3
      subi      r31, r4, 0xF90
      beq-      .loc_0x64
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r31, 0x60
      bl        -0xCD318
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x64
      li        r30, 0x1

    .loc_0x64:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x80
      addi      r3, r31, 0x34
      addi      r5, r31, 0x48
      li        r4, 0x211
      crclr     6, 0x6
      bl        -0x16D3C4

    .loc_0x80:
      lwz       r3, 0x4(r28)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r29)
      stw       r0, 0xC(r28)
      lbz       r0, 0x8(r29)
      cmplwi    r0, 0x1
      bne-      .loc_0x108
      lwz       r4, 0x4(r28)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r4, r1, 0x14
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r3, 0xC(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x170(r12)
      mtctr     r12
      bctrl
      sth       r3, 0x10(r28)
      b         .loc_0x120

    .loc_0x108:
      lwz       r3, 0xC(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x174(r12)
      mtctr     r12
      bctrl
      sth       r3, 0x10(r28)

    .loc_0x120:
      lwz       r3, 0xC(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x15C
      lwz       r3, 0xC(r28)
      bl        -0x2D194
      cmpwi     r3, 0
      bne-      .loc_0x15C
      li        r3, 0
      li        r0, 0x1
      sth       r3, 0x10(r28)
      stb       r0, 0x1D(r28)

    .loc_0x15C:
      mr        r3, r28
      bl        0x44
      li        r0, 0
      stb       r0, 0x1C(r28)
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80197B14
 * Size:	000018
 */
void wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lbz       r4, 0x1C(r3)
      cmplwi    r4, 0x64
      bgelr-
      addi      r0, r4, 0x1
      stb       r0, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80197B2C
 * Size:	000014
 */
void PikiAI::ActGotoSlot::resetTimers(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      stw       r0, 0x14(r3)
      stfs      f0, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80197B40
 * Size:	000A94
 */
void PikiAI::ActGotoSlot::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x130(r1)
      mflr      r0
      stw       r0, 0x134(r1)
      stfd      f31, 0x120(r1)
      psq_st    f31,0x128(r1),0,0
      stfd      f30, 0x110(r1)
      psq_st    f30,0x118(r1),0,0
      stfd      f29, 0x100(r1)
      psq_st    f29,0x108(r1),0,0
      stfd      f28, 0xF0(r1)
      psq_st    f28,0xF8(r1),0,0
      stfd      f27, 0xE0(r1)
      psq_st    f27,0xE8(r1),0,0
      stfd      f26, 0xD0(r1)
      psq_st    f26,0xD8(r1),0,0
      stfd      f25, 0xC0(r1)
      psq_st    f25,0xC8(r1),0,0
      stw       r31, 0xBC(r1)
      stw       r30, 0xB8(r1)
      stw       r29, 0xB4(r1)
      mr        r31, r3
      lha       r0, 0x10(r3)
      cmpwi     r0, -0x1
      bne-      .loc_0x68
      li        r3, 0x2
      b         .loc_0xA40

    .loc_0x68:
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x8C
      li        r3, 0x2
      b         .loc_0xA40

    .loc_0x8C:
      lbz       r0, 0x1D(r31)
      cmplwi    r0, 0
      beq-      .loc_0x5D8
      lwz       r30, 0xC(r31)
      li        r29, 0
      mr        r3, r30
      bl        -0x2D2B0
      cmpwi     r3, 0
      beq-      .loc_0xB4
      li        r29, 0x1

    .loc_0xB4:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x13C
      li        r0, 0
      addi      r3, r1, 0x44
      stb       r0, 0x1D(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x44(r1)
      addi      r4, r1, 0xA4
      lfs       f1, 0x48(r1)
      lfs       f0, 0x4C(r1)
      stfs      f2, 0xA4(r1)
      stfs      f1, 0xA8(r1)
      stfs      f0, 0xAC(r1)
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x170(r12)
      mtctr     r12
      bctrl
      sth       r3, 0x10(r31)
      lha       r0, 0x10(r31)
      cmpwi     r0, -0x1
      bne-      .loc_0x124
      li        r3, 0x2
      b         .loc_0xA40

    .loc_0x124:
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      stw       r0, 0x14(r31)
      li        r3, 0x1
      stfs      f0, 0x18(r31)
      b         .loc_0xA40

    .loc_0x13C:
      lwz       r3, 0xC(r31)
      addi      r5, r1, 0x98
      lha       r4, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x180(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f30, 0x38(r1)
      mr        r3, r30
      lfs       f29, 0x3C(r1)
      lfs       f28, 0x40(r1)
      bl        -0x312F8
      lwz       r4, 0x4(r31)
      fmr       f31, f1
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      lfs       f27, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lfs       f26, 0x30(r1)
      lwz       r12, 0x80(r12)
      lfs       f25, 0x34(r1)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1D8
      lwz       r3, 0xC(r31)
      bl        -0x31338
      lfs       f0, -0x53E8(r2)
      fnmsubs   f29, f0, f1, f29

    .loc_0x1D8:
      fsubs     f4, f30, f27
      lfs       f1, -0x5400(r2)
      fsubs     f2, f28, f25
      fsubs     f3, f29, f26
      fmuls     f0, f4, f4
      stfs      f4, 0x8C(r1)
      fmuls     f5, f1, f1
      stfs      f3, 0x90(r1)
      fmuls     f3, f2, f2
      fadds     f0, f0, f5
      stfs      f2, 0x94(r1)
      stfs      f1, 0x90(r1)
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x230
      fmadds    f0, f4, f4, f5
      fadds     f3, f3, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x234
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x234

    .loc_0x230:
      fmr       f3, f1

    .loc_0x234:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x26C
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x8C(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x90(r1)
      lfs       f0, 0x94(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x8C(r1)
      stfs      f1, 0x90(r1)
      stfs      f0, 0x94(r1)

    .loc_0x26C:
      lfs       f0, 0x94(r1)
      lfs       f3, 0x8C(r1)
      fmuls     f1, f0, f31
      lfs       f2, 0x90(r1)
      fmuls     f3, f3, f31
      lfs       f0, -0x5400(r2)
      fmuls     f2, f2, f31
      fsubs     f4, f28, f1
      fsubs     f1, f30, f3
      fsubs     f2, f29, f2
      fsubs     f3, f4, f25
      fsubs     f1, f1, f27
      fsubs     f2, f2, f26
      fmuls     f3, f3, f3
      fmadds    f25, f1, f1, f3
      fcmpo     cr0, f25, f0
      ble-      .loc_0x2C0
      ble-      .loc_0x2C4
      fsqrte    f0, f25
      fmuls     f25, f0, f25
      b         .loc_0x2C4

    .loc_0x2C0:
      fmr       f25, f0

    .loc_0x2C4:
      lfs       f0, -0x53F0(r2)
      fcmpo     cr0, f25, f0
      ble-      .loc_0x318
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x8C
      lfs       f1, -0x53FC(r2)
      bl        -0x4EE04
      lfs       f0, -0x53D4(r2)
      fcmpo     cr0, f25, f0
      bge-      .loc_0x5D0
      lwz       r3, 0x14(r31)
      addi      r0, r3, 0x1
      cmpwi     r0, 0x3C
      stw       r0, 0x14(r31)
      blt-      .loc_0x5D0
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      stw       r0, 0x14(r31)
      li        r3, 0x2
      stfs      f0, 0x18(r31)
      b         .loc_0xA40

    .loc_0x318:
      fabs      f1, f2
      lfs       f0, -0x53F8(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x594
      mr        r3, r30
      addi      r5, r1, 0x80
      lwz       r12, 0x0(r30)
      li        r4, 0
      lwz       r12, 0x180(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x84(r1)
      lfs       f0, 0x80(r1)
      fsubs     f4, f1, f29
      lfs       f3, 0x88(r1)
      fsubs     f2, f0, f30
      lfs       f1, -0x5400(r2)
      fsubs     f3, f3, f28
      fmuls     f5, f4, f4
      fmuls     f0, f2, f2
      stfs      f2, 0x80(r1)
      fmuls     f6, f3, f3
      stfs      f4, 0x84(r1)
      fadds     f0, f0, f5
      stfs      f3, 0x88(r1)
      fadds     f0, f6, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x3A8
      fmadds    f0, f2, f2, f5
      fadds     f3, f6, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x3AC
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x3AC

    .loc_0x3A8:
      fmr       f3, f1

    .loc_0x3AC:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x3E4
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x80(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x84(r1)
      lfs       f0, 0x88(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x80(r1)
      stfs      f1, 0x84(r1)
      stfs      f0, 0x88(r1)

    .loc_0x3E4:
      lfs       f6, -0x53D0(r2)
      lfs       f0, 0x90(r1)
      lfs       f1, 0x8C(r1)
      fmuls     f4, f0, f6
      lfs       f0, 0x84(r1)
      fmuls     f5, f1, f6
      lfs       f2, 0x94(r1)
      lfs       f7, 0x80(r1)
      fmuls     f1, f0, f4
      fmuls     f3, f2, f6
      lfs       f8, 0x88(r1)
      lfs       f0, -0x53FC(r2)
      fmadds    f1, f7, f5, f1
      stfs      f5, 0x8C(r1)
      fmuls     f2, f7, f3
      stfs      f4, 0x90(r1)
      fmadds    f1, f8, f3, f1
      fmsubs    f2, f8, f5, f2
      stfs      f3, 0x94(r1)
      fcmpo     cr0, f1, f0
      fmr       f3, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x448
      fmr       f3, f0
      b         .loc_0x458

    .loc_0x448:
      fcmpo     cr0, f1, f6
      cror      2, 0, 0x2
      bne-      .loc_0x458
      fmr       f3, f6

    .loc_0x458:
      lfs       f1, -0x5400(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x4EC
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f3, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x478
      b         .loc_0x578

    .loc_0x478:
      lfs       f0, -0x53D0(r2)
      fcmpo     cr0, f3, f0
      cror      2, 0, 0x2
      bne-      .loc_0x490
      lfs       f1, -0x53CC(r2)
      b         .loc_0x578

    .loc_0x490:
      fcmpo     cr0, f3, f1
      bge-      .loc_0x4C4
      fneg      f0, f3
      lfs       f1, -0x53C8(r2)
      fmuls     f1, f1, f0
      bl        -0xD6498
      lis       r4, 0x8051
      rlwinm    r0,r3,2,0,29
      subi      r3, r4, 0x1E00
      lfs       f0, -0x53C4(r2)
      lfsx      f1, r3, r0
      fadds     f1, f1, f0
      b         .loc_0x578

    .loc_0x4C4:
      lfs       f0, -0x53C8(r2)
      fmuls     f1, f0, f3
      bl        -0xD64C0
      lis       r4, 0x8051
      rlwinm    r0,r3,2,0,29
      subi      r3, r4, 0x1E00
      lfs       f0, -0x53C4(r2)
      lfsx      f1, r3, r0
      fsubs     f1, f0, f1
      b         .loc_0x578

    .loc_0x4EC:
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f3, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x500
      b         .loc_0x570

    .loc_0x500:
      lfs       f0, -0x53D0(r2)
      fcmpo     cr0, f3, f0
      cror      2, 0, 0x2
      bne-      .loc_0x518
      lfs       f1, -0x53CC(r2)
      b         .loc_0x570

    .loc_0x518:
      fcmpo     cr0, f3, f1
      bge-      .loc_0x54C
      fneg      f0, f3
      lfs       f1, -0x53C8(r2)
      fmuls     f1, f1, f0
      bl        -0xD6520
      lis       r4, 0x8051
      rlwinm    r0,r3,2,0,29
      subi      r3, r4, 0x1E00
      lfs       f0, -0x53C4(r2)
      lfsx      f1, r3, r0
      fadds     f1, f1, f0
      b         .loc_0x570

    .loc_0x54C:
      lfs       f0, -0x53C8(r2)
      fmuls     f1, f0, f3
      bl        -0xD6548
      lis       r4, 0x8051
      rlwinm    r0,r3,2,0,29
      subi      r3, r4, 0x1E00
      lfs       f0, -0x53C4(r2)
      lfsx      f1, r3, r0
      fsubs     f1, f0, f1

    .loc_0x570:
      fneg      f1, f1
      bl        0x279B1C

    .loc_0x578:
      stfs      f1, 0x3E0(r30)
      lwz       r3, 0x4(r31)
      lwz       r4, 0xC(r31)
      lha       r5, 0x10(r31)
      bl        0x7150
      li        r3, 0
      b         .loc_0xA40

    .loc_0x594:
      lwz       r3, 0x14(r31)
      addi      r0, r3, 0x1
      cmpwi     r0, 0x3C
      stw       r0, 0x14(r31)
      blt-      .loc_0x5C0
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      stw       r0, 0x14(r31)
      li        r3, 0x2
      stfs      f0, 0x18(r31)
      b         .loc_0xA40

    .loc_0x5C0:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x8C
      lfs       f1, -0x53DC(r2)
      bl        -0x4F0F4

    .loc_0x5D0:
      li        r3, 0x1
      b         .loc_0xA40

    .loc_0x5D8:
      lwz       r3, 0xC(r31)
      addi      r5, r1, 0x74
      lha       r4, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x180(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f5, 0x20(r1)
      lfs       f3, 0x28(r1)
      lfs       f1, 0x7C(r1)
      lfs       f0, 0x74(r1)
      fsubs     f7, f1, f3
      lfs       f4, 0x24(r1)
      fsubs     f2, f0, f5
      lfs       f1, 0x78(r1)
      lfs       f0, -0x5400(r2)
      fsubs     f6, f1, f4
      fmuls     f9, f2, f2
      stfs      f5, 0x68(r1)
      fmuls     f8, f7, f7
      fabs      f5, f6
      stfs      f4, 0x6C(r1)
      fadds     f1, f9, f8
      stfs      f3, 0x70(r1)
      frsp      f4, f5
      stfs      f2, 0x5C(r1)
      fcmpo     cr0, f1, f0
      stfs      f6, 0x60(r1)
      stfs      f7, 0x64(r1)
      ble-      .loc_0x680
      fmadds    f31, f2, f2, f8
      fcmpo     cr0, f31, f0
      ble-      .loc_0x684
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x684

    .loc_0x680:
      fmr       f31, f0

    .loc_0x684:
      lfs       f0, 0x60(r1)
      lfs       f1, -0x5400(r2)
      fmuls     f3, f0, f0
      fadds     f0, f9, f3
      fadds     f0, f8, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x6BC
      fmadds    f0, f2, f2, f3
      fadds     f3, f8, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x6C0
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x6C0

    .loc_0x6BC:
      fmr       f3, f1

    .loc_0x6C0:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x6F8
      lfs       f0, -0x53FC(r2)
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

    .loc_0x6F8:
      lfs       f0, -0x53C0(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x798
      lwz       r3, 0x14(r31)
      addi      r0, r3, 0x1
      cmpwi     r0, 0x3C
      stw       r0, 0x14(r31)
      blt-      .loc_0x798
      lwz       r3, 0xC(r31)
      addi      r4, r1, 0x68
      lha       r29, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x170(r12)
      mtctr     r12
      bctrl
      sth       r3, 0x10(r31)
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x75C
      lwz       r3, 0xC(r31)
      bl        -0x32468

    .loc_0x75C:
      lha       r0, 0x10(r31)
      cmpw      r29, r0
      bne-      .loc_0x770
      li        r3, 0x2
      b         .loc_0xA40

    .loc_0x770:
      cmpwi     r0, -0x1
      bne-      .loc_0x780
      li        r3, 0x2
      b         .loc_0xA40

    .loc_0x780:
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      stw       r0, 0x14(r31)
      li        r3, 0x1
      stfs      f0, 0x18(r31)
      b         .loc_0xA40

    .loc_0x798:
      lfs       f0, -0x53F0(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x7BC
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x5C
      lfs       f1, -0x53FC(r2)
      bl        -0x4F2D8
      li        r3, 0x1
      b         .loc_0xA40

    .loc_0x7BC:
      bge-      .loc_0x868
      lfs       f0, -0x53F8(r2)
      fcmpo     cr0, f4, f0
      bge-      .loc_0x868
      lwz       r3, 0xC(r31)
      lha       r4, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x168(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x820
      lwz       r3, 0xC(r31)
      addi      r4, r1, 0x68
      lwz       r12, 0x0(r3)
      lwz       r12, 0x170(r12)
      mtctr     r12
      bctrl
      sth       r3, 0x10(r31)
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      li        r3, 0x1
      stw       r0, 0x14(r31)
      stfs      f0, 0x18(r31)
      b         .loc_0xA40

    .loc_0x820:
      lwz       r3, 0x4(r31)
      lwz       r4, 0xC(r31)
      lha       r5, 0x10(r31)
      bl        0x6EAC
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      li        r3, 0
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      stfs      f2, 0x68(r1)
      stfs      f1, 0x6C(r1)
      stfs      f0, 0x70(r1)
      b         .loc_0xA40

    .loc_0x868:
      lwz       r4, 0xC(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x10(r1)
      lfs       f0, 0x70(r1)
      lfs       f1, 0x8(r1)
      fsubs     f4, f2, f0
      lfs       f0, 0x68(r1)
      lfs       f2, 0xC(r1)
      fsubs     f3, f1, f0
      lfs       f1, 0x6C(r1)
      fmuls     f5, f4, f4
      fsubs     f2, f2, f1
      lfs       f0, -0x5400(r2)
      fmuls     f6, f3, f3
      fadds     f1, f6, f5
      fcmpo     cr0, f1, f0
      ble-      .loc_0x8D4
      fmadds    f1, f3, f3, f5
      fcmpo     cr0, f1, f0
      ble-      .loc_0x8D8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x8D8

    .loc_0x8D4:
      fmr       f1, f0

    .loc_0x8D8:
      fcmpo     cr0, f1, f31
      bge-      .loc_0xA2C
      fmuls     f2, f2, f2
      lfs       f1, -0x5400(r2)
      fadds     f0, f6, f2
      fadds     f0, f5, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x914
      fmadds    f0, f3, f3, f2
      fadds     f2, f5, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x918
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x918

    .loc_0x914:
      fmr       f2, f1

    .loc_0x918:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x934
      lfs       f0, -0x53FC(r2)
      fdivs     f0, f0, f2
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0x934:
      fneg      f0, f4
      lfs       f1, -0x5400(r2)
      frsp      f4, f3
      stfs      f3, 0x58(r1)
      fmuls     f3, f1, f1
      frsp      f2, f0
      fmuls     f4, f4, f4
      stfs      f0, 0x50(r1)
      fmuls     f0, f2, f2
      stfs      f1, 0x54(r1)
      fadds     f0, f0, f3
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x988
      fmadds    f0, f2, f2, f3
      fadds     f3, f4, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x98C
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x98C

    .loc_0x988:
      fmr       f3, f1

    .loc_0x98C:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x9C4
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x50(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x54(r1)
      lfs       f0, 0x58(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x50(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x58(r1)

    .loc_0x9C4:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x50
      lfs       f1, -0x53DC(r2)
      bl        -0x4F4F8
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x18(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5400(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x18(r31)
      lfs       f1, 0x18(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xA24
      lwz       r3, 0xC(r31)
      addi      r4, r1, 0x68
      lwz       r12, 0x0(r3)
      lwz       r12, 0x170(r12)
      mtctr     r12
      bctrl
      sth       r3, 0x10(r31)
      li        r0, 0
      lfs       f0, -0x53D8(r2)
      stw       r0, 0x14(r31)
      stfs      f0, 0x18(r31)

    .loc_0xA24:
      li        r3, 0x1
      b         .loc_0xA40

    .loc_0xA2C:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x5C
      lfs       f1, -0x53DC(r2)
      bl        -0x4F560
      li        r3, 0x1

    .loc_0xA40:
      psq_l     f31,0x128(r1),0,0
      lfd       f31, 0x120(r1)
      psq_l     f30,0x118(r1),0,0
      lfd       f30, 0x110(r1)
      psq_l     f29,0x108(r1),0,0
      lfd       f29, 0x100(r1)
      psq_l     f28,0xF8(r1),0,0
      lfd       f28, 0xF0(r1)
      psq_l     f27,0xE8(r1),0,0
      lfd       f27, 0xE0(r1)
      psq_l     f26,0xD8(r1),0,0
      lfd       f26, 0xD0(r1)
      psq_l     f25,0xC8(r1),0,0
      lfd       f25, 0xC0(r1)
      lwz       r31, 0xBC(r1)
      lwz       r30, 0xB8(r1)
      lwz       r0, 0x134(r1)
      lwz       r29, 0xB4(r1)
      mtlr      r0
      addi      r1, r1, 0x130
      blr
    */
}

/*
 * --INFO--
 * Address:	801985D4
 * Size:	000004
 */
void PikiAI::ActGotoSlot::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801985D8
 * Size:	00007C
 */
void PikiAI::ActPathMove::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1BD4
      lis       r3, 0x804B
      lis       r4, 0x8012
      addi      r0, r3, 0x4BFC
      li        r5, 0
      stw       r0, 0x0(r31)
      addi      r3, r31, 0x74
      subi      r4, r4, 0xCB8
      li        r6, 0xC
      li        r7, 0x4
      bl        -0xD6DD8
      li        r3, 0xA
      bl        -0x174778
      cmplwi    r3, 0
      beq-      .loc_0x58
      li        r0, 0
      sth       r0, 0x8(r3)

    .loc_0x58:
      stw       r3, 0xC(r31)
      li        r0, -0x1
      mr        r3, r31
      sth       r0, 0x1C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80198654
 * Size:	0001BC
 */
void PikiAI::ActPathMove::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lis       r3, 0x8048
      stw       r30, 0x28(r1)
      subi      r30, r3, 0xF90
      stw       r29, 0x24(r1)
      li        r29, 0
      stw       r28, 0x20(r1)
      mr.       r28, r4
      stb       r29, 0x3D(r31)
      beq-      .loc_0x68
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r30, 0x6C
      bl        -0xCDFE8
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x68
      li        r29, 0x1

    .loc_0x68:
      rlwinm.   r0,r29,0,24,31
      bne-      .loc_0x84
      addi      r3, r30, 0x34
      addi      r5, r30, 0x48
      li        r4, 0x316
      crclr     6, 0x6
      bl        -0x16E094

    .loc_0x84:
      li        r0, 0
      stw       r0, 0x34(r31)
      lwz       r0, 0x4(r28)
      stw       r0, 0x30(r31)
      lwz       r3, 0x18(r28)
      neg       r0, r3
      andc      r0, r0, r3
      rlwinm    r0,r0,1,31,31
      stb       r0, 0x3C(r31)
      lbz       r0, 0x3C(r31)
      cmplwi    r0, 0
      beq-      .loc_0xD8
      lwz       r3, 0x18(r28)
      lis       r0, 0x4330
      stw       r0, 0x18(r1)
      xoris     r0, r3, 0x8000
      lfd       f1, -0x53B8(r2)
      stw       r0, 0x1C(r1)
      lfd       f0, 0x18(r1)
      fsubs     f0, f0, f1
      stfs      f0, 0x38(r31)

    .loc_0xD8:
      li        r0, 0
      lfs       f0, -0x5400(r2)
      stw       r0, 0x20(r31)
      mr        r3, r31
      li        r4, 0x1
      stfs      f0, 0xB0(r31)
      stfs      f0, 0xB4(r31)
      stfs      f0, 0xB8(r31)
      bl        .loc_0x1BC
      li        r0, 0x1
      addi      r3, r1, 0x8
      stb       r0, 0x6C(r31)
      lwz       r4, 0x30(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      stfs      f0, 0x10(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x14(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x18(r31)
      lwz       r3, 0x30(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x19C
      lwz       r3, 0x30(r31)
      lis       r4, 0x8051
      addi      r4, r4, 0x41E4
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5400(r2)
      mr        r3, r29
      stfs      f0, 0x1C8(r29)
      stfs      f0, 0x1CC(r29)
      stfs      f0, 0x1D0(r29)
      bl        -0x2E330
      extsh     r0, r3
      cmpwi     r0, -0x1
      bne-      .loc_0x19C
      lwz       r3, 0x334(r29)
      bl        0x9C73C

    .loc_0x19C:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x1BC:
    */
}

/*
 * --INFO--
 * Address:	80198810
 * Size:	0003AC
 */
void PikiAI::ActPathMove::initPathfinding((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      rlwinm.   r0,r4,0,24,31
      lis       r4, 0x8048
      stw       r31, 0x7C(r1)
      subi      r31, r4, 0xF90
      stw       r30, 0x78(r1)
      mr        r30, r3
      stw       r29, 0x74(r1)
      beq-      .loc_0x38
      lwz       r3, 0xC(r30)
      li        r0, 0
      sth       r0, 0x8(r3)

    .loc_0x38:
      lwz       r3, 0x30(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA0
      lwz       r3, 0x30(r30)
      lis       r4, 0x8051
      addi      r4, r4, 0x41E4
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5400(r2)
      mr        r3, r29
      stfs      f0, 0x1C8(r29)
      stfs      f0, 0x1CC(r29)
      stfs      f0, 0x1D0(r29)
      bl        -0x2E3F0
      extsh     r0, r3
      cmpwi     r0, -0x1
      bne-      .loc_0xA0
      lwz       r3, 0x334(r29)
      bl        0x9C67C

    .loc_0xA0:
      lwz       r4, 0x30(r30)
      addi      r3, r1, 0x1C
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x1C(r1)
      li        r4, 0
      lfs       f2, 0x20(r1)
      li        r0, -0x1
      lfs       f1, 0x24(r1)
      stw       r4, 0x60(r1)
      lwz       r3, -0x6C18(r13)
      stw       r4, 0x5C(r1)
      stb       r4, 0x50(r1)
      sth       r0, 0x58(r1)
      stw       r4, 0x54(r1)
      stfs      f3, 0x44(r1)
      stfs      f2, 0x48(r1)
      stfs      f1, 0x4C(r1)
      lbz       r0, 0x48(r3)
      lwz       r3, 0x4(r30)
      cmplwi    r0, 0
      stfs      f3, 0x38(r1)
      lha       r3, 0x18C(r3)
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x40(r1)
      beq-      .loc_0x154
      lfs       f0, -0x53FC(r2)
      stfs      f3, 0x28(r1)
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      lwz       r3, 0x30(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      lfs       f0, -0x53FC(r2)
      stfs      f0, 0x34(r1)

    .loc_0x148:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x28
      bl        0x216D4

    .loc_0x154:
      sth       r3, 0x58(r1)
      lwz       r0, 0xC(r30)
      stw       r0, 0x54(r1)
      lwz       r3, 0x30(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x184
      li        r0, 0x1
      stb       r0, 0x50(r1)

    .loc_0x184:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x44
      li        r29, 0
      lwz       r3, 0x8(r3)
      bl        -0x25638
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1C0
      lwz       r3, 0x5C(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x1B8
      mr        r29, r3
      b         .loc_0x214

    .loc_0x1B8:
      lwz       r29, 0x60(r1)
      b         .loc_0x214

    .loc_0x1C0:
      li        r0, 0
      lwz       r3, -0x6CF8(r13)
      stw       r0, 0x54(r1)
      addi      r4, r1, 0x44
      lwz       r3, 0x8(r3)
      bl        -0x25678
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x200
      lwz       r3, 0x5C(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x1F8
      lwz       r29, 0x60(r1)
      b         .loc_0x214

    .loc_0x1F8:
      mr        r29, r3
      b         .loc_0x214

    .loc_0x200:
      addi      r3, r31, 0x34
      addi      r5, r31, 0x78
      li        r4, 0x39D
      crclr     6, 0x6
      bl        -0x16E3E0

    .loc_0x214:
      cmplwi    r29, 0
      bne-      .loc_0x230
      addi      r3, r31, 0x34
      addi      r5, r31, 0x84
      li        r4, 0x3A1
      crclr     6, 0x6
      bl        -0x16E3FC

    .loc_0x230:
      lha       r0, 0x36(r29)
      mr        r3, r30
      sth       r0, 0x1C(r30)
      lha       r0, 0x36(r29)
      sth       r0, 0x54(r30)
      bl        .loc_0x3AC
      mr.       r29, r3
      bne-      .loc_0x264
      addi      r3, r31, 0x34
      addi      r5, r31, 0x90
      li        r4, 0x3A9
      crclr     6, 0x6
      bl        -0x16E430

    .loc_0x264:
      cmplwi    r29, 0
      beq-      .loc_0x294
      lwz       r3, 0x30(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x294
      lwz       r3, 0x30(r30)
      lhz       r4, 0x22E(r29)
      bl        -0x30BD8

    .loc_0x294:
      lwz       r0, 0x34(r30)
      cmplw     r29, r0
      beq-      .loc_0x390
      lwz       r5, 0x23C(r29)
      mr        r4, r29
      addi      r3, r1, 0x10
      lha       r0, 0x36(r5)
      sth       r0, 0x56(r30)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x198(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x10(r1)
      stfs      f0, 0x24(r30)
      lfs       f0, 0x14(r1)
      stfs      f0, 0x28(r30)
      lfs       f0, 0x18(r1)
      stfs      f0, 0x2C(r30)
      stw       r29, 0x34(r30)
      lwz       r4, 0x20(r30)
      cmplwi    r4, 0
      beq-      .loc_0x2F4
      lwz       r3, -0x6C80(r13)
      bl        0xAF60

    .loc_0x2F4:
      li        r0, 0
      mr        r3, r30
      sth       r0, 0x1E(r30)
      li        r29, 0x1
      bl        0xB78
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x318
      ori       r0, r29, 0x2
      rlwinm    r29,r0,0,24,31

    .loc_0x318:
      lwz       r3, -0x6C18(r13)
      ori       r0, r29, 0x4
      rlwinm    r29,r0,0,24,31
      cmplwi    r3, 0
      beq-      .loc_0x35C
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x35C
      lwz       r3, 0x34(r30)
      lhz       r0, 0x22E(r3)
      cmplwi    r0, 0
      bne-      .loc_0x354
      ori       r0, r29, 0x60
      rlwinm    r29,r0,0,24,31
      b         .loc_0x35C

    .loc_0x354:
      ori       r0, r29, 0x50
      rlwinm    r29,r0,0,24,31

    .loc_0x35C:
      lha       r5, 0x56(r30)
      addi      r4, r1, 0x8
      lha       r0, 0x54(r30)
      lwz       r3, -0x6C80(r13)
      sth       r0, 0x8(r1)
      sth       r5, 0xA(r1)
      stb       r29, 0xC(r1)
      bl        0xACCC
      stw       r3, 0x20(r30)
      li        r0, 0
      stw       r0, 0x50(r30)
      stw       r0, 0x40(r30)
      stw       r0, 0x48(r30)

    .loc_0x390:
      lwz       r0, 0x84(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      lwz       r29, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr

    .loc_0x3AC:
    */
}

/*
 * --INFO--
 * Address:	80198BBC
 * Size:	00005C
 */
void PikiAI::ActPathMove::decideGoal(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x30(r3)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x401
      beq-      .loc_0x40
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x3E6
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x16E5B8

    .loc_0x40:
      lwz       r3, 0x30(r31)
      bl        -0x2E4D8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80198C18
 * Size:	00011C
 */
void PikiAI::ActPathMove::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lbz       r0, 0x6C(r3)
      cmplwi    r0, 0
      bne-      .loc_0xB4
      lwz       r31, 0x30(r30)
      mr        r3, r31
      bl        -0x2E2D4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      li        r4, 0
      lfd       f1, -0x53B8(r2)
      stw       r0, 0x8(r1)
      lwz       r3, 0x334(r31)
      lfd       f0, 0x8(r1)
      fsubs     f1, f0, f1
      bl        0x9C368
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xAC
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x148(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x20(r30)
      cmplwi    r4, 0
      beq-      .loc_0x90
      lwz       r3, -0x6C80(r13)
      bl        0xADC4
      li        r0, 0
      stw       r0, 0x20(r30)

    .loc_0x90:
      li        r3, 0x1
      li        r0, 0
      stb       r3, 0x6C(r30)
      mr        r3, r30
      li        r4, 0x1
      stw       r0, 0x34(r30)
      bl        -0x4B0

    .loc_0xAC:
      li        r3, 0x1
      b         .loc_0x104

    .loc_0xB4:
      lhz       r0, 0x1E(r30)
      cmpwi     r0, 0x2
      beq-      .loc_0xF0
      bge-      .loc_0xD4
      cmpwi     r0, 0
      beq-      .loc_0xE0
      bge-      .loc_0xE8
      b         .loc_0x100

    .loc_0xD4:
      cmpwi     r0, 0x4
      bge-      .loc_0x100
      b         .loc_0xF8

    .loc_0xE0:
      bl        .loc_0x11C
      b         .loc_0x104

    .loc_0xE8:
      bl        0xAD0
      b         .loc_0x104

    .loc_0xF0:
      bl        0x2DC
      b         .loc_0x104

    .loc_0xF8:
      bl        0xF78
      b         .loc_0x104

    .loc_0x100:
      li        r3, 0x1

    .loc_0x104:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x11C:
    */
}

/*
 * --INFO--
 * Address:	80198D34
 * Size:	0002B0
 */
void PikiAI::ActPathMove::execPathfinding(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x130(r1)
      mflr      r0
      stw       r0, 0x134(r1)
      stw       r31, 0x12C(r1)
      stw       r30, 0x128(r1)
      mr        r30, r3
      lis       r3, 0x8048
      stw       r29, 0x124(r1)
      subi      r31, r3, 0xF90
      lwz       r29, 0x30(r30)
      cmplwi    r29, 0
      beq-      .loc_0x68
      mr        r3, r29
      bl        -0x2E3F8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x114(r1)
      lis       r3, 0x8051
      addi      r5, r3, 0x41E4
      lfd       f1, -0x53B8(r2)
      stw       r0, 0x110(r1)
      li        r4, 0
      lwz       r3, 0x334(r29)
      lfd       f0, 0x110(r1)
      fsubs     f1, f0, f1
      bl        0x9C1B8

    .loc_0x68:
      lwz       r3, 0x20(r30)
      cmplwi    r3, 0
      bne-      .loc_0x7C
      li        r3, 0x2
      b         .loc_0x294

    .loc_0x7C:
      addis     r0, r3, 0x1
      cmplwi    r0, 0xFFFF
      bne-      .loc_0x90
      li        r3, 0x2
      b         .loc_0x294

    .loc_0x90:
      lwz       r3, 0x40(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x40(r30)
      lwz       r3, 0x30(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x120
      lwz       r29, 0x30(r30)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x120
      lwz       r3, 0x30(r30)
      lis       r4, 0x8051
      addi      r4, r4, 0x41E4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x5400(r2)
      mr        r3, r29
      stfs      f0, 0x1C8(r29)
      stfs      f0, 0x1CC(r29)
      stfs      f0, 0x1D0(r29)
      bl        -0x2E994
      extsh     r0, r3
      cmpwi     r0, -0x1
      bne-      .loc_0x120
      lwz       r3, 0x334(r29)
      bl        0x9C0D8

    .loc_0x120:
      lwz       r3, -0x6C80(r13)
      lwz       r4, 0x20(r30)
      bl        0xAC74
      cmpwi     r3, 0x2
      beq-      .loc_0x290
      bge-      .loc_0x148
      cmpwi     r3, 0
      beq-      .loc_0x154
      bge-      .loc_0x1D4
      b         .loc_0x290

    .loc_0x148:
      cmpwi     r3, 0x4
      bge-      .loc_0x290
      b         .loc_0x278

    .loc_0x154:
      lwz       r3, -0x6C80(r13)
      addi      r5, r30, 0x44
      lwz       r4, 0x20(r30)
      bl        0xAB0C
      stw       r3, 0x4C(r30)
      li        r0, 0x1
      mr        r3, r30
      lwz       r4, 0x44(r30)
      stw       r4, 0x48(r30)
      sth       r0, 0x1E(r30)
      bl        0x19FC
      lwz       r3, 0x44(r30)
      li        r7, -0x1
      mr        r4, r3
      b         .loc_0x198

    .loc_0x190:
      lha       r7, 0x20(r4)
      lwz       r4, 0xC(r4)

    .loc_0x198:
      cmplwi    r4, 0
      bne+      .loc_0x190
      lwz       r4, 0xC(r3)
      cmplwi    r4, 0
      beq-      .loc_0x1B4
      lha       r6, 0x20(r4)
      b         .loc_0x1B8

    .loc_0x1B4:
      subi      r6, r2, 0x53B0

    .loc_0x1B8:
      lha       r5, 0x20(r3)
      addi      r3, r1, 0x10
      addi      r4, r31, 0xA0
      crclr     6, 0x6
      bl        -0xD1AC4
      li        r3, 0x1
      b         .loc_0x294

    .loc_0x1D4:
      lwz       r4, 0x20(r30)
      cmplwi    r4, 0
      beq-      .loc_0x1E8
      lwz       r3, -0x6C80(r13)
      bl        0xAB48

    .loc_0x1E8:
      lwz       r3, 0x50(r30)
      li        r0, 0
      li        r6, 0x6
      addi      r3, r3, 0x1
      stw       r3, 0x50(r30)
      sth       r0, 0x1E(r30)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x220
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x220
      ori       r0, r6, 0x40
      rlwinm    r6,r0,0,24,31

    .loc_0x220:
      lwz       r0, 0x50(r30)
      cmpwi     r0, 0x2
      blt-      .loc_0x244
      cmpwi     r0, 0x3
      ori       r0, r6, 0x40
      rlwinm    r6,r0,0,24,31
      blt-      .loc_0x244
      li        r0, 0x3
      stw       r0, 0x50(r30)

    .loc_0x244:
      lha       r5, 0x56(r30)
      addi      r4, r1, 0x8
      lha       r0, 0x54(r30)
      lwz       r3, -0x6C80(r13)
      sth       r0, 0x8(r1)
      sth       r5, 0xA(r1)
      stb       r6, 0xC(r1)
      bl        0xA8C0
      stw       r3, 0x20(r30)
      li        r0, 0
      li        r3, 0x1
      stw       r0, 0x40(r30)
      b         .loc_0x294

    .loc_0x278:
      lwz       r6, 0x20(r30)
      addi      r3, r31, 0x34
      addi      r5, r31, 0xB0
      li        r4, 0x4B1
      crclr     6, 0x6
      bl        -0x16E980

    .loc_0x290:
      li        r3, 0x1

    .loc_0x294:
      lwz       r0, 0x134(r1)
      lwz       r31, 0x12C(r1)
      lwz       r30, 0x128(r1)
      lwz       r29, 0x124(r1)
      mtlr      r0
      addi      r1, r1, 0x130
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001AC
 */
void PikiAI::ActPathMove::getCarrySpeed(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80198FE4
 * Size:	0006A8
 */
void PikiAI::ActPathMove::execMoveGoal(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xD0(r1)
      mflr      r0
      stw       r0, 0xD4(r1)
      stfd      f31, 0xC0(r1)
      psq_st    f31,0xC8(r1),0,0
      stfd      f30, 0xB0(r1)
      psq_st    f30,0xB8(r1),0,0
      stfd      f29, 0xA0(r1)
      psq_st    f29,0xA8(r1),0,0
      stmw      r27, 0x8C(r1)
      mr        r31, r3
      lis       r3, 0x8048
      lwz       r4, 0x30(r31)
      subi      r28, r3, 0xF90
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x28(r31)
      lfs       f2, 0xC(r1)
      lfs       f1, 0x24(r31)
      lfs       f0, 0x8(r1)
      fsubs     f4, f3, f2
      lfs       f3, 0x2C(r31)
      fsubs     f2, f1, f0
      lfs       f0, 0x10(r1)
      fmuls     f5, f4, f4
      lfs       f1, -0x5400(r2)
      fsubs     f0, f3, f0
      stfs      f4, 0x38(r1)
      fmuls     f3, f2, f2
      stfs      f2, 0x34(r1)
      fmuls     f4, f0, f0
      stfs      f0, 0x3C(r1)
      fadds     f0, f3, f5
      fadds     f6, f3, f4
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xBC
      fmadds    f0, f2, f2, f5
      fadds     f4, f4, f0
      fcmpo     cr0, f4, f1
      ble-      .loc_0xC0
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0xC0

    .loc_0xBC:
      fmr       f4, f1

    .loc_0xC0:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0xFC
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x34(r1)
      fdivs     f3, f0, f4
      lfs       f1, 0x38(r1)
      lfs       f0, 0x3C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x34(r1)
      stfs      f1, 0x38(r1)
      stfs      f0, 0x3C(r1)
      b         .loc_0x100

    .loc_0xFC:
      fmr       f4, f0

    .loc_0x100:
      lfs       f0, -0x5400(r2)
      fcmpu     cr0, f0, f4
      bne-      .loc_0x118
      stfs      f0, 0x34(r1)
      stfs      f0, 0x38(r1)
      stfs      f0, 0x3C(r1)

    .loc_0x118:
      lfs       f0, -0x53C0(r2)
      fcmpo     cr0, f6, f0
      bge-      .loc_0x510
      lwz       r4, 0x30(r31)
      addi      r3, r1, 0x5C
      bl        0x6B4C
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x5C
      cmplwi    r0, 0
      stw       r4, 0x24(r1)
      stw       r0, 0x30(r1)
      stw       r0, 0x28(r1)
      stw       r3, 0x2C(r1)
      bne-      .loc_0x170
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x28(r1)
      b         .loc_0x2D4

    .loc_0x170:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x28(r1)
      b         .loc_0x1DC

    .loc_0x188:
      lwz       r3, 0x2C(r1)
      lwz       r4, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2D4
      lwz       r3, 0x2C(r1)
      lwz       r4, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x28(r1)

    .loc_0x1DC:
      lwz       r12, 0x24(r1)
      addi      r3, r1, 0x24
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x188
      b         .loc_0x2D4

    .loc_0x1FC:
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0x5D7A8
      lwz       r0, 0x30(r1)
      cmplwi    r0, 0
      bne-      .loc_0x244
      lwz       r3, 0x2C(r1)
      lwz       r4, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x28(r1)
      b         .loc_0x2D4

    .loc_0x244:
      lwz       r3, 0x2C(r1)
      lwz       r4, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x28(r1)
      b         .loc_0x2B8

    .loc_0x264:
      lwz       r3, 0x2C(r1)
      lwz       r4, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2D4
      lwz       r3, 0x2C(r1)
      lwz       r4, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x28(r1)

    .loc_0x2B8:
      lwz       r12, 0x24(r1)
      addi      r3, r1, 0x24
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x264

    .loc_0x2D4:
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x28(r1)
      cmplw     r4, r3
      bne+      .loc_0x1FC
      addi      r3, r1, 0x5C
      li        r4, -0x1
      bl        0x6A84
      lwz       r3, 0x4(r31)
      bl        -0x5C228
      lwz       r3, 0x4(r31)
      bl        0x6134
      lwz       r4, 0x30(r31)
      addi      r3, r1, 0x40
      bl        0x6960
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x40
      cmplwi    r0, 0
      stw       r4, 0x14(r1)
      stw       r0, 0x20(r1)
      stw       r0, 0x18(r1)
      stw       r3, 0x1C(r1)
      bne-      .loc_0x35C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x4DC

    .loc_0x35C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x3C8

    .loc_0x374:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4DC
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x3C8:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x374
      b         .loc_0x4DC

    .loc_0x3E8:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r27, r3
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x420
      mr        r3, r27
      bl        0x6024

    .loc_0x420:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x44C
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x4DC

    .loc_0x44C:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x4C0

    .loc_0x46C:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4DC
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x4C0:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x46C

    .loc_0x4DC:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x3E8
      addi      r3, r1, 0x40
      li        r4, -0x1
      bl        0x687C
      li        r3, 0
      b         .loc_0x67C

    .loc_0x510:
      lwz       r3, 0x30(r31)
      lwz       r4, 0x4(r31)
      lhz       r0, 0x128(r3)
      lwz       r3, 0xC0(r4)
      cmplwi    r0, 0x401
      lfs       f30, 0x1100(r3)
      lfs       f31, 0x1128(r3)
      beq-      .loc_0x544
      addi      r3, r28, 0x34
      addi      r5, r28, 0x48
      li        r4, 0x4BF
      crclr     6, 0x6
      bl        -0x16EEE4

    .loc_0x544:
      lwz       r27, 0x30(r31)
      lwz       r3, 0x358(r27)
      cmplwi    r3, 0
      beq-      .loc_0x580
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x580
      lwz       r3, 0x4(r31)
      lwz       r3, 0xC0(r3)
      lfs       f4, 0x2C8(r3)
      b         .loc_0x644

    .loc_0x580:
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x5AC
      lbz       r0, 0x32C(r27)
      cmplwi    r0, 0x3
      bne-      .loc_0x5AC
      lwz       r3, 0x4(r31)
      lwz       r3, 0xC0(r3)
      lfs       f4, 0x2C8(r3)
      b         .loc_0x644

    .loc_0x5AC:
      lwz       r4, 0x4(r31)
      mr        r3, r27
      lwz       r4, 0xC0(r4)
      lfs       f0, 0x2C8(r4)
      fmuls     f30, f0, f30
      fmuls     f31, f0, f31
      bl        -0x32018
      mr        r29, r3
      mr        r3, r27
      bl        -0x32004
      mr.       r30, r3
      lfs       f29, 0x418(r27)
      bne-      .loc_0x5FC
      lwz       r6, 0x35C(r27)
      addi      r3, r28, 0x34
      addi      r5, r28, 0xC0
      li        r4, 0x4E0
      lwz       r6, 0x40(r6)
      crclr     6, 0x6
      bl        -0x16EF9C

    .loc_0x5FC:
      lis       r3, 0x4330
      xoris     r0, r29, 0x8000
      stw       r0, 0x7C(r1)
      xoris     r0, r30, 0x8000
      lfs       f1, -0x53FC(r2)
      fsubs     f0, f30, f31
      stw       r3, 0x78(r1)
      lfd       f3, -0x53B8(r2)
      fadds     f4, f1, f29
      lfd       f1, 0x78(r1)
      stw       r0, 0x84(r1)
      fsubs     f2, f1, f3
      stw       r3, 0x80(r1)
      lfd       f1, 0x80(r1)
      fsubs     f2, f4, f2
      fsubs     f1, f1, f3
      fdivs     f1, f2, f1
      fmadds    f4, f1, f0, f31

    .loc_0x644:
      lfs       f3, -0x5400(r2)
      mr        r3, r31
      lfs       f2, 0x34(r1)
      addi      r4, r1, 0x34
      lfs       f0, 0x3C(r1)
      fmuls     f1, f3, f4
      fmuls     f2, f2, f4
      stfs      f3, 0x38(r1)
      fmuls     f0, f0, f4
      stfs      f1, 0x38(r1)
      stfs      f2, 0x34(r1)
      stfs      f0, 0x3C(r1)
      bl        0xD0
      li        r3, 0x1

    .loc_0x67C:
      psq_l     f31,0xC8(r1),0,0
      lfd       f31, 0xC0(r1)
      psq_l     f30,0xB8(r1),0,0
      lfd       f30, 0xB0(r1)
      psq_l     f29,0xA8(r1),0,0
      lfd       f29, 0xA0(r1)
      lmw       r27, 0x8C(r1)
      lwz       r0, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	8019968C
 * Size:	00009C
 */
void PikiAI::ActPathMove::isAllBlue(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x30(r3)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x401
      beq-      .loc_0x44
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x52D
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x16F08C

    .loc_0x44:
      lwz       r30, 0x30(r30)
      li        r4, 0x5
      mr        r3, r30
      bl        -0x2ED00
      mr        r31, r3
      mr        r3, r30
      li        r4, 0
      bl        -0x2ED10
      add       r31, r3, r31
      mr        r3, r30
      bl        -0x2EDC4
      cmpw      r3, r31
      bne-      .loc_0x80
      li        r3, 0x1
      b         .loc_0x84

    .loc_0x80:
      li        r3, 0

    .loc_0x84:
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
 * Address:	80199728
 * Size:	0000A8
 */
void carry__Q26PikiAI11ActPathMoveFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r31, 0x30(r3)
      mr        r3, r31
      bl        -0x2EDE0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      mr        r5, r30
      lfd       f1, -0x53B8(r2)
      li        r4, 0
      stw       r0, 0x8(r1)
      lwz       r3, 0x334(r31)
      lfd       f0, 0x8(r1)
      fsubs     f1, f0, f1
      bl        0x9B7D4
      lbz       r0, 0x6C(r29)
      cmplwi    r0, 0
      beq-      .loc_0x8C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x8C
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x6C(r29)
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0x14C(r12)
      mtctr     r12
      bctrl

    .loc_0x8C:
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
 * Address:	801997D0
 * Size:	000428
 */
void PikiAI::ActPathMove::execMove(void)
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
      stmw      r27, 0x2C(r1)
      mr        r31, r3
      lis       r4, 0x8048
      lwz       r3, 0x30(r3)
      subi      r28, r4, 0xF90
      lwz       r4, 0x4(r31)
      lhz       r0, 0x128(r3)
      lwz       r3, 0xC0(r4)
      cmplwi    r0, 0x401
      lfs       f30, 0x1100(r3)
      lfs       f31, 0x1128(r3)
      beq-      .loc_0x68
      addi      r3, r28, 0x34
      addi      r5, r28, 0x48
      li        r4, 0x4BF
      crclr     6, 0x6
      bl        -0x16F1F4

    .loc_0x68:
      lwz       r27, 0x30(r31)
      lwz       r3, 0x358(r27)
      cmplwi    r3, 0
      beq-      .loc_0xA4
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA4
      lwz       r3, 0x4(r31)
      lwz       r3, 0xC0(r3)
      lfs       f31, 0x2C8(r3)
      b         .loc_0x168

    .loc_0xA4:
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0xD0
      lbz       r0, 0x32C(r27)
      cmplwi    r0, 0x3
      bne-      .loc_0xD0
      lwz       r3, 0x4(r31)
      lwz       r3, 0xC0(r3)
      lfs       f31, 0x2C8(r3)
      b         .loc_0x168

    .loc_0xD0:
      lwz       r4, 0x4(r31)
      mr        r3, r27
      lwz       r4, 0xC0(r4)
      lfs       f0, 0x2C8(r4)
      fmuls     f30, f0, f30
      fmuls     f31, f0, f31
      bl        -0x32328
      mr        r29, r3
      mr        r3, r27
      bl        -0x32314
      mr.       r30, r3
      lfs       f29, 0x418(r27)
      bne-      .loc_0x120
      lwz       r6, 0x35C(r27)
      addi      r3, r28, 0x34
      addi      r5, r28, 0xC0
      li        r4, 0x4E0
      lwz       r6, 0x40(r6)
      crclr     6, 0x6
      bl        -0x16F2AC

    .loc_0x120:
      lis       r3, 0x4330
      xoris     r0, r29, 0x8000
      stw       r0, 0x1C(r1)
      xoris     r0, r30, 0x8000
      lfs       f1, -0x53FC(r2)
      fsubs     f0, f30, f31
      stw       r3, 0x18(r1)
      lfd       f3, -0x53B8(r2)
      fadds     f4, f1, f29
      lfd       f1, 0x18(r1)
      stw       r0, 0x24(r1)
      fsubs     f2, f1, f3
      stw       r3, 0x20(r1)
      lfd       f1, 0x20(r1)
      fsubs     f2, f4, f2
      fsubs     f1, f1, f3
      fdivs     f1, f2, f1
      fmadds    f31, f1, f0, f31

    .loc_0x168:
      mr        r3, r31
      bl        0x1728
      lfs       f1, -0x5400(r2)
      stfs      f1, 0xB4(r31)
      lfs       f3, 0xB0(r31)
      lfs       f2, 0xB4(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0xB8(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x1BC
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x1C0
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x1C0

    .loc_0x1BC:
      fmr       f2, f1

    .loc_0x1C0:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x1F8
      lfs       f1, -0x53FC(r2)
      lfs       f0, 0xB0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB8(r31)

    .loc_0x1F8:
      lfs       f0, 0xB0(r31)
      fmuls     f0, f0, f31
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f31
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f31
      stfs      f0, 0xB8(r31)
      lwz       r27, 0x30(r31)
      mr        r3, r27
      bl        -0x2F084
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      addi      r5, r31, 0xB0
      lfd       f1, -0x53B8(r2)
      li        r4, 0
      stw       r0, 0x20(r1)
      lwz       r3, 0x334(r27)
      lfd       f0, 0x20(r1)
      fsubs     f1, f0, f1
      bl        0x9B530
      lbz       r0, 0x6C(r31)
      cmplwi    r0, 0
      beq-      .loc_0x288
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x288
      li        r0, 0
      mr        r3, r27
      stb       r0, 0x6C(r31)
      li        r4, 0
      lwz       r12, 0x0(r27)
      lwz       r12, 0x14C(r12)
      mtctr     r12
      bctrl

    .loc_0x288:
      lwz       r3, 0x30(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3F8
      lwz       r27, 0x30(r31)
      addi      r3, r1, 0x8
      mr        r4, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0xC(r1)
      lfs       f0, 0x14(r31)
      lfs       f5, 0x8(r1)
      fsubs     f2, f3, f0
      lfs       f1, 0x10(r31)
      lfs       f4, 0x10(r1)
      lfs       f0, 0x18(r31)
      fsubs     f1, f5, f1
      fmuls     f6, f2, f2
      fsubs     f2, f4, f0
      lfs       f0, -0x5400(r2)
      fmadds    f1, f1, f1, f6
      fmuls     f2, f2, f2
      fadds     f30, f2, f1
      fcmpo     cr0, f30, f0
      ble-      .loc_0x310
      ble-      .loc_0x314
      fsqrte    f0, f30
      fmuls     f30, f0, f30
      b         .loc_0x314

    .loc_0x310:
      fmr       f30, f0

    .loc_0x314:
      stfs      f5, 0x10(r31)
      mr        r3, r27
      stfs      f3, 0x14(r31)
      stfs      f4, 0x18(r31)
      bl        -0x33FB0
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x63
      ble-      .loc_0x3F8
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f30, f0
      bge-      .loc_0x3F8
      li        r0, 0
      stb       r0, 0x3BC(r27)
      stw       r0, 0x34(r31)
      lwz       r4, 0x20(r31)
      cmplwi    r4, 0
      beq-      .loc_0x368
      lwz       r3, -0x6C80(r13)
      bl        0x9F34
      li        r0, 0
      stw       r0, 0x20(r31)

    .loc_0x368:
      lwz       r3, 0xC(r31)
      li        r0, 0
      sth       r0, 0x8(r3)
      lha       r6, 0x1C(r31)
      lwz       r5, 0xC(r31)
      cmpwi     r6, -0x1
      beq-      .loc_0x3A8
      lha       r4, 0x8(r5)
      cmpwi     r4, 0x4
      bge-      .loc_0x3A8
      addi      r3, r4, 0x1
      rlwinm    r0,r4,1,0,30
      sth       r3, 0x8(r5)
      li        r3, 0x1
      sthx      r6, r5, r0
      b         .loc_0x3AC

    .loc_0x3A8:
      li        r3, 0

    .loc_0x3AC:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x3EC
      lwz       r3, 0xC(r31)
      li        r0, 0
      sth       r0, 0x8(r3)
      lha       r6, 0x1C(r31)
      lwz       r5, 0xC(r31)
      cmpwi     r6, -0x1
      beq-      .loc_0x3EC
      lha       r4, 0x8(r5)
      cmpwi     r4, 0x4
      bge-      .loc_0x3EC
      addi      r3, r4, 0x1
      rlwinm    r0,r4,1,0,30
      sth       r3, 0x8(r5)
      sthx      r6, r5, r0

    .loc_0x3EC:
      mr        r3, r31
      li        r4, 0
      bl        -0x13B4

    .loc_0x3F8:
      li        r3, 0x1
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80199BF8
 * Size:	000090
 */
void PikiAI::ActPathMove::cleanup(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x30(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x5C
      lwz       r31, 0x30(r30)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x5C
      lwz       r3, 0x334(r31)
      bl        0x9B2D8

    .loc_0x5C:
      lwz       r4, 0x20(r30)
      cmplwi    r4, 0
      beq-      .loc_0x70
      lwz       r3, -0x6C80(r13)
      bl        0x9DFC

    .loc_0x70:
      li        r0, 0
      stw       r0, 0x20(r30)
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
 * Address:	80199C88
 * Size:	0004E8
 */
void PikiAI::ActPathMove::execMoveGuru(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stmw      r27, 0x3C(r1)
      lwz       r4, 0x64(r3)
      lis       r5, 0x8048
      mr        r30, r3
      lbz       r0, 0x34(r4)
      subi      r31, r5, 0xF90
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x54
      li        r0, 0x1
      li        r3, 0x1
      sth       r0, 0x1E(r30)
      b         .loc_0x4BC

    .loc_0x54:
      lwz       r4, 0x70(r30)
      cmpwi     r4, 0
      blt-      .loc_0x118
      bl        .loc_0x4E8
      lwz       r4, 0x64(r30)
      lfs       f7, 0x50(r3)
      lfs       f0, 0x50(r4)
      lfs       f1, 0x54(r4)
      fsubs     f4, f0, f7
      lfs       f6, 0x54(r3)
      lfs       f0, 0x4C(r4)
      lfs       f8, 0x4C(r3)
      fsubs     f5, f1, f6
      fmuls     f1, f4, f4
      fsubs     f3, f0, f8
      lfs       f0, -0x5400(r2)
      fmuls     f2, f5, f5
      fmadds    f1, f3, f3, f1
      fadds     f2, f2, f1
      fcmpo     cr0, f2, f0
      ble-      .loc_0xB8
      ble-      .loc_0xBC
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xBC

    .loc_0xB8:
      fmr       f2, f0

    .loc_0xBC:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xE0
      lfs       f0, -0x53FC(r2)
      fdivs     f0, f0, f2
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0
      b         .loc_0xE4

    .loc_0xE0:
      fmr       f2, f0

    .loc_0xE4:
      lfs       f1, -0x53AC(r2)
      lfs       f0, -0x5400(r2)
      fsubs     f9, f2, f1
      fcmpo     cr0, f9, f0
      bge-      .loc_0xFC
      fmr       f9, f0

    .loc_0xFC:
      fmuls     f2, f3, f9
      fmuls     f1, f4, f9
      fmuls     f0, f5, f9
      fadds     f4, f8, f2
      fadds     f5, f7, f1
      fadds     f6, f6, f0
      b         .loc_0x124

    .loc_0x118:
      lfs       f4, 0x58(r30)
      lfs       f5, 0x5C(r30)
      lfs       f6, 0x60(r30)

    .loc_0x124:
      lwz       r3, -0x6514(r13)
      lfs       f3, -0x53CC(r2)
      lfs       f2, 0x54(r3)
      lfs       f1, 0x68(r30)
      lfs       f0, -0x53A8(r2)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x68(r30)
      lfs       f1, 0x68(r30)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x154
      fsubs     f0, f1, f0
      stfs      f0, 0x68(r30)

    .loc_0x154:
      lfs       f3, 0x68(r30)
      lfs       f0, -0x5400(r2)
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x16C
      fneg      f1, f3

    .loc_0x16C:
      lfs       f2, -0x53A4(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5400(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f1, 0x4(r3)
      bge-      .loc_0x1C4
      lfs       f0, -0x53A0(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f2, f0
      b         .loc_0x1DC

    .loc_0x1C4:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r4, r0

    .loc_0x1DC:
      lfs       f0, -0x53E0(r2)
      addi      r3, r1, 0x8
      lfs       f3, -0x5400(r2)
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f0, f1, f0
      fadds     f2, f2, f4
      fadds     f3, f3, f5
      fadds     f0, f0, f6
      stfs      f2, 0x14(r1)
      stfs      f3, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r4, 0x30(r30)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      lfs       f0, 0x8(r1)
      lfs       f1, -0x5400(r2)
      fsubs     f2, f2, f0
      lfs       f3, 0x1C(r1)
      lfs       f0, 0x10(r1)
      fmuls     f6, f1, f1
      lfs       f4, 0x18(r1)
      fsubs     f5, f3, f0
      fmuls     f0, f2, f2
      lfs       f3, 0xC(r1)
      stfs      f2, 0x14(r1)
      fmuls     f7, f5, f5
      fadds     f0, f0, f6
      stfs      f5, 0x1C(r1)
      fsubs     f3, f4, f3
      fadds     f0, f7, f0
      stfs      f3, 0x18(r1)
      fcmpo     cr0, f0, f1
      stfs      f1, 0x18(r1)
      ble-      .loc_0x290
      fmadds    f0, f2, f2, f6
      fadds     f4, f7, f0
      fcmpo     cr0, f4, f1
      ble-      .loc_0x294
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0x294

    .loc_0x290:
      fmr       f4, f1

    .loc_0x294:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0x2D0
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x14(r1)
      fdivs     f3, f0, f4
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      b         .loc_0x2D4

    .loc_0x2D0:
      fmr       f4, f0

    .loc_0x2D4:
      lfs       f0, -0x5400(r2)
      fcmpu     cr0, f0, f4
      bne-      .loc_0x2EC
      stfs      f0, 0x14(r1)
      stfs      f0, 0x18(r1)
      stfs      f0, 0x1C(r1)

    .loc_0x2EC:
      lwz       r3, 0x30(r30)
      lwz       r4, 0x4(r30)
      lhz       r0, 0x128(r3)
      lwz       r3, 0xC0(r4)
      cmplwi    r0, 0x401
      lfs       f30, 0x1100(r3)
      lfs       f31, 0x1128(r3)
      beq-      .loc_0x320
      addi      r3, r31, 0x34
      addi      r5, r31, 0x48
      li        r4, 0x4BF
      crclr     6, 0x6
      bl        -0x16F964

    .loc_0x320:
      lwz       r27, 0x30(r30)
      lwz       r3, 0x358(r27)
      cmplwi    r3, 0
      beq-      .loc_0x35C
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x35C
      lwz       r3, 0x4(r30)
      lwz       r3, 0xC0(r3)
      lfs       f1, 0x2C8(r3)
      b         .loc_0x420

    .loc_0x35C:
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x388
      lbz       r0, 0x32C(r27)
      cmplwi    r0, 0x3
      bne-      .loc_0x388
      lwz       r3, 0x4(r30)
      lwz       r3, 0xC0(r3)
      lfs       f1, 0x2C8(r3)
      b         .loc_0x420

    .loc_0x388:
      lwz       r4, 0x4(r30)
      mr        r3, r27
      lwz       r4, 0xC0(r4)
      lfs       f0, 0x2C8(r4)
      fmuls     f30, f0, f30
      fmuls     f31, f0, f31
      bl        -0x32A98
      mr        r28, r3
      mr        r3, r27
      bl        -0x32A84
      mr.       r29, r3
      lfs       f29, 0x418(r27)
      bne-      .loc_0x3D8
      lwz       r6, 0x35C(r27)
      addi      r3, r31, 0x34
      addi      r5, r31, 0xC0
      li        r4, 0x4E0
      lwz       r6, 0x40(r6)
      crclr     6, 0x6
      bl        -0x16FA1C

    .loc_0x3D8:
      lis       r3, 0x4330
      xoris     r0, r28, 0x8000
      stw       r0, 0x34(r1)
      xoris     r0, r29, 0x8000
      lfs       f1, -0x53FC(r2)
      fsubs     f0, f30, f31
      stw       r3, 0x30(r1)
      lfd       f3, -0x53B8(r2)
      fadds     f4, f1, f29
      lfd       f1, 0x30(r1)
      stw       r0, 0x2C(r1)
      fsubs     f2, f1, f3
      stw       r3, 0x28(r1)
      lfd       f1, 0x28(r1)
      fsubs     f2, f4, f2
      fsubs     f1, f1, f3
      fdivs     f1, f2, f1
      fmadds    f1, f1, f0, f31

    .loc_0x420:
      lfs       f0, -0x53E8(r2)
      lfs       f2, 0x14(r1)
      fmuls     f3, f1, f0
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r27, 0x30(r30)
      mr        r3, r27
      bl        -0x2F76C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      addi      r5, r1, 0x14
      lfd       f1, -0x53B8(r2)
      li        r4, 0
      stw       r0, 0x30(r1)
      lwz       r3, 0x334(r27)
      lfd       f0, 0x30(r1)
      fsubs     f1, f0, f1
      bl        0x9AE48
      lbz       r0, 0x6C(r30)
      cmplwi    r0, 0
      beq-      .loc_0x4B8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4B8
      li        r0, 0
      mr        r3, r27
      stb       r0, 0x6C(r30)
      li        r4, 0
      lwz       r12, 0x0(r27)
      lwz       r12, 0x14C(r12)
      mtctr     r12
      bctrl

    .loc_0x4B8:
      li        r3, 0x1

    .loc_0x4BC:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lmw       r27, 0x3C(r1)
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr

    .loc_0x4E8:
    */
}

/*
 * --INFO--
 * Address:	8019A170
 * Size:	0000B8
 */
void PikiAI::ActPathMove::getWayPoint((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r5, 0x48(r3)
      ble-      .loc_0x7C
      cmpwi     r4, 0x8
      subi      r3, r4, 0x8
      ble-      .loc_0x64
      addi      r0, r3, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r3, 0
      ble-      .loc_0x64

    .loc_0x3C:
      lwz       r3, 0xC(r5)
      addi      r6, r6, 0x8
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r5, 0xC(r3)
      bdnz+     .loc_0x3C

    .loc_0x64:
      sub       r0, r4, r6
      mtctr     r0
      cmpw      r6, r4
      bge-      .loc_0x7C

    .loc_0x74:
      lwz       r5, 0xC(r5)
      bdnz+     .loc_0x74

    .loc_0x7C:
      cmplwi    r5, 0
      beq-      .loc_0xA4
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r5)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xA8

    .loc_0xA4:
      li        r3, 0

    .loc_0xA8:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019A228
 * Size:	00018C
 */
void PikiAI::ActPathMove::crGetPoint((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      bge-      .loc_0x40
      lfs       f0, 0xA4(r30)
      stfs      f0, 0x0(r31)
      lfs       f0, 0xA8(r30)
      stfs      f0, 0x4(r31)
      lfs       f0, 0xAC(r30)
      stfs      f0, 0x8(r31)
      b         .loc_0x174

    .loc_0x40:
      lwz       r0, 0x4C(r30)
      cmpw      r5, r0
      blt-      .loc_0x68
      lfs       f0, 0x24(r30)
      stfs      f0, 0x0(r31)
      lfs       f0, 0x28(r30)
      stfs      f0, 0x4(r31)
      lfs       f0, 0x2C(r30)
      stfs      f0, 0x8(r31)
      b         .loc_0x174

    .loc_0x68:
      cmpwi     r5, 0
      lwz       r6, 0x48(r30)
      li        r3, 0
      ble-      .loc_0xD8
      cmpwi     r5, 0x8
      subi      r4, r5, 0x8
      ble-      .loc_0xC0
      addi      r0, r4, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r4, 0
      ble-      .loc_0xC0

    .loc_0x98:
      lwz       r4, 0xC(r6)
      addi      r3, r3, 0x8
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r6, 0xC(r4)
      bdnz+     .loc_0x98

    .loc_0xC0:
      sub       r0, r5, r3
      mtctr     r0
      cmpw      r3, r5
      bge-      .loc_0xD8

    .loc_0xD0:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0xD0

    .loc_0xD8:
      cmplwi    r6, 0
      beq-      .loc_0x100
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x104

    .loc_0x100:
      li        r3, 0

    .loc_0x104:
      cmplwi    r3, 0
      bne-      .loc_0x12C
      lis       r3, 0x8051
      lfsu      f0, 0x41E4(r3)
      stfs      f0, 0x0(r31)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x4(r31)
      lfs       f0, 0x8(r3)
      stfs      f0, 0x8(r31)
      b         .loc_0x174

    .loc_0x12C:
      lfs       f5, 0x50(r3)
      lfs       f0, 0x28(r30)
      lfs       f4, 0x4C(r3)
      fsubs     f3, f5, f0
      lfs       f0, 0x24(r30)
      lfs       f6, 0x54(r3)
      lfs       f1, 0x2C(r30)
      fsubs     f2, f4, f0
      fmuls     f7, f3, f3
      fsubs     f3, f6, f1
      lfs       f0, -0x5400(r2)
      fmadds    f1, f2, f2, f7
      fmuls     f2, f3, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      stfs      f4, 0x0(r31)
      stfs      f5, 0x4(r31)
      stfs      f6, 0x8(r31)

    .loc_0x174:
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
 * Address:	8019A3B4
 * Size:	0003C4
 */
void PikiAI::ActPathMove::contextCheck((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x100(r1)
      mflr      r0
      stw       r0, 0x104(r1)
      stfd      f31, 0xF0(r1)
      psq_st    f31,0xF8(r1),0,0
      stfd      f30, 0xE0(r1)
      psq_st    f30,0xE8(r1),0,0
      stfd      f29, 0xD0(r1)
      psq_st    f29,0xD8(r1),0,0
      stfd      f28, 0xC0(r1)
      psq_st    f28,0xC8(r1),0,0
      stfd      f27, 0xB0(r1)
      psq_st    f27,0xB8(r1),0,0
      stfd      f26, 0xA0(r1)
      psq_st    f26,0xA8(r1),0,0
      stw       r31, 0x9C(r1)
      stw       r30, 0x98(r1)
      lwz       r5, -0x6C18(r13)
      mr        r30, r3
      mr        r31, r4
      lwz       r0, 0x44(r5)
      cmpwi     r0, 0x1
      bne-      .loc_0x188
      addic.    r6, r31, 0x1
      blt-      .loc_0x188
      lwz       r0, 0x4C(r30)
      cmpw      r6, r0
      bge-      .loc_0x188
      cmpwi     r6, 0
      lwz       r5, 0x48(r30)
      li        r3, 0
      ble-      .loc_0xE0
      cmpwi     r6, 0x8
      subi      r4, r6, 0x8
      ble-      .loc_0xC8
      addi      r0, r4, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r4, 0
      ble-      .loc_0xC8

    .loc_0xA0:
      lwz       r4, 0xC(r5)
      addi      r3, r3, 0x8
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r5, 0xC(r4)
      bdnz+     .loc_0xA0

    .loc_0xC8:
      sub       r0, r6, r3
      mtctr     r0
      cmpw      r3, r6
      bge-      .loc_0xE0

    .loc_0xD8:
      lwz       r5, 0xC(r5)
      bdnz+     .loc_0xD8

    .loc_0xE0:
      cmplwi    r5, 0
      beq-      .loc_0x108
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r5)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x10C

    .loc_0x108:
      li        r3, 0

    .loc_0x10C:
      lwz       r4, 0x34(r30)
      lhz       r0, 0x22E(r4)
      cmplwi    r0, 0
      bne-      .loc_0x154
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0x148
      lbz       r3, 0x3D(r30)
      addi      r0, r3, 0x1
      stb       r0, 0x3D(r30)
      lbz       r0, 0x3D(r30)
      cmplwi    r0, 0x2
      bge-      .loc_0x188
      li        r3, 0
      b         .loc_0x37C

    .loc_0x148:
      li        r0, 0
      stb       r0, 0x3D(r30)
      b         .loc_0x188

    .loc_0x154:
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,27,27
      beq-      .loc_0x180
      lbz       r3, 0x3D(r30)
      addi      r0, r3, 0x1
      stb       r0, 0x3D(r30)
      lbz       r0, 0x3D(r30)
      cmplwi    r0, 0x2
      bge-      .loc_0x188
      li        r3, 0
      b         .loc_0x37C

    .loc_0x180:
      li        r0, 0
      stb       r0, 0x3D(r30)

    .loc_0x188:
      lwz       r4, 0x30(r30)
      addi      r3, r1, 0x30
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x30(r1)
      lfs       f1, 0x34(r1)
      lfs       f0, 0x38(r1)
      stfs      f2, 0x68(r1)
      stfs      f1, 0x6C(r1)
      stfs      f0, 0x70(r1)
      lwz       r3, 0x30(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1E4
      lwz       r3, 0x30(r30)
      bl        -0x33BD0
      stfs      f1, 0x74(r1)
      b         .loc_0x1FC

    .loc_0x1E4:
      lwz       r3, 0x30(r30)
      addi      r4, r1, 0x68
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x1FC:
      cmpwi     r31, 0
      bge-      .loc_0x280
      mr        r4, r30
      mr        r5, r31
      addi      r3, r1, 0x24
      bl        -0x39C
      lfs       f30, 0x24(r1)
      mr        r3, r30
      lfs       f31, 0x2C(r1)
      mr        r4, r31
      bl        .loc_0x3C4
      lfs       f0, 0x70(r1)
      lfs       f1, 0x68(r1)
      fsubs     f2, f31, f0
      lfs       f0, -0x5400(r2)
      fsubs     f1, f30, f1
      fmuls     f2, f2, f2
      fadds     f1, f1, f1
      fadds     f1, f1, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x260
      ble-      .loc_0x264
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x264

    .loc_0x260:
      fmr       f1, f0

    .loc_0x264:
      lfs       f0, -0x539C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x278
      li        r3, 0
      b         .loc_0x37C

    .loc_0x278:
      li        r3, 0x1
      b         .loc_0x37C

    .loc_0x280:
      mr        r4, r30
      mr        r5, r31
      addi      r3, r1, 0x18
      bl        -0x418
      lfs       f29, 0x18(r1)
      mr        r4, r30
      lfs       f28, 0x20(r1)
      addi      r3, r1, 0xC
      addi      r5, r31, 0x1
      bl        -0x430
      lfs       f27, 0xC(r1)
      mr        r3, r30
      lfs       f26, 0x14(r1)
      mr        r4, r31
      bl        .loc_0x3C4
      fmr       f30, f1
      mr        r3, r30
      addi      r4, r31, 0x1
      bl        .loc_0x3C4
      fmr       f31, f1
      lfs       f0, -0x5400(r2)
      stfs      f29, 0x78(r1)
      addi      r3, r1, 0x78
      addi      r4, r1, 0x68
      addi      r5, r1, 0x5C
      stfs      f0, 0x6C(r1)
      addi      r6, r1, 0x8
      stfs      f0, 0x7C(r1)
      stfs      f28, 0x80(r1)
      stfs      f27, 0x84(r1)
      stfs      f0, 0x88(r1)
      stfs      f26, 0x8C(r1)
      stfs      f30, 0x90(r1)
      stfs      f31, 0x94(r1)
      bl        0x27B49C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x31C
      li        r3, 0x1
      b         .loc_0x37C

    .loc_0x31C:
      lfs       f0, -0x5400(r2)
      addi      r3, r1, 0x4C
      stfs      f29, 0x4C(r1)
      addi      r4, r1, 0x68
      stfs      f0, 0x50(r1)
      stfs      f28, 0x54(r1)
      stfs      f30, 0x58(r1)
      bl        0x27B828
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x34C
      li        r3, 0x1
      b         .loc_0x37C

    .loc_0x34C:
      lfs       f0, -0x5400(r2)
      addi      r3, r1, 0x3C
      stfs      f27, 0x3C(r1)
      addi      r4, r1, 0x68
      stfs      f0, 0x40(r1)
      stfs      f26, 0x44(r1)
      stfs      f31, 0x48(r1)
      bl        0x27B7F8
      rlwinm    r3,r3,0,24,31
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31

    .loc_0x37C:
      psq_l     f31,0xF8(r1),0,0
      lfd       f31, 0xF0(r1)
      psq_l     f30,0xE8(r1),0,0
      lfd       f30, 0xE0(r1)
      psq_l     f29,0xD8(r1),0,0
      lfd       f29, 0xD0(r1)
      psq_l     f28,0xC8(r1),0,0
      lfd       f28, 0xC0(r1)
      psq_l     f27,0xB8(r1),0,0
      lfd       f27, 0xB0(r1)
      psq_l     f26,0xA8(r1),0,0
      lfd       f26, 0xA0(r1)
      lwz       r31, 0x9C(r1)
      lwz       r0, 0x104(r1)
      lwz       r30, 0x98(r1)
      mtlr      r0
      addi      r1, r1, 0x100
      blr

    .loc_0x3C4:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void PikiAI::ActPathMove::crPointOpen((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8019A778
 * Size:	000134
 */
void PikiAI::ActPathMove::crGetRadius((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x24(r1)
      bge-      .loc_0x60
      lwz       r3, 0x30(r3)
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x14(r1)
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x58
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x742
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x17018C

    .loc_0x58:
      lfs       f1, 0x14(r1)
      b         .loc_0x124

    .loc_0x60:
      lwz       r0, 0x4C(r3)
      cmpw      r4, r0
      blt-      .loc_0x74
      lfs       f1, -0x5398(r2)
      b         .loc_0x124

    .loc_0x74:
      cmpwi     r4, 0
      lwz       r6, 0x48(r3)
      li        r3, 0
      ble-      .loc_0xE4
      cmpwi     r4, 0x8
      subi      r5, r4, 0x8
      ble-      .loc_0xCC
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0xCC

    .loc_0xA4:
      lwz       r5, 0xC(r6)
      addi      r3, r3, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0xA4

    .loc_0xCC:
      sub       r0, r4, r3
      mtctr     r0
      cmpw      r3, r4
      bge-      .loc_0xE4

    .loc_0xDC:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0xDC

    .loc_0xE4:
      cmplwi    r6, 0
      beq-      .loc_0x10C
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0x10C:
      li        r3, 0

    .loc_0x110:
      cmplwi    r3, 0
      bne-      .loc_0x120
      lfs       f1, -0x5398(r2)
      b         .loc_0x124

    .loc_0x120:
      lfs       f1, 0x58(r3)

    .loc_0x124:
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8019A8AC
 * Size:	000738
 */
void PikiAI::ActPathMove::crInit(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x180(r1)
      mflr      r0
      stw       r0, 0x184(r1)
      stfd      f31, 0x170(r1)
      psq_st    f31,0x178(r1),0,0
      stfd      f30, 0x160(r1)
      psq_st    f30,0x168(r1),0,0
      stfd      f29, 0x150(r1)
      psq_st    f29,0x158(r1),0,0
      stfd      f28, 0x140(r1)
      psq_st    f28,0x148(r1),0,0
      stfd      f27, 0x130(r1)
      psq_st    f27,0x138(r1),0,0
      stfd      f26, 0x120(r1)
      psq_st    f26,0x128(r1),0,0
      stfd      f25, 0x110(r1)
      psq_st    f25,0x118(r1),0,0
      stfd      f24, 0x100(r1)
      psq_st    f24,0x108(r1),0,0
      stfd      f23, 0xF0(r1)
      psq_st    f23,0xF8(r1),0,0
      stfd      f22, 0xE0(r1)
      psq_st    f22,0xE8(r1),0,0
      stw       r31, 0xDC(r1)
      stw       r30, 0xD8(r1)
      stw       r29, 0xD4(r1)
      mr        r30, r3
      li        r0, -0x1
      stw       r0, 0x70(r3)
      addi      r3, r1, 0x80
      lwz       r4, 0x30(r30)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x80(r1)
      mr        r4, r30
      addi      r3, r1, 0x74
      stfs      f0, 0xA4(r30)
      lfs       f0, 0x84(r1)
      stfs      f0, 0xA8(r30)
      lfs       f0, 0x88(r1)
      stfs      f0, 0xAC(r30)
      lwz       r5, 0x70(r30)
      addi      r5, r5, 0x1
      bl        -0x738
      lwz       r5, 0x70(r30)
      mr        r4, r30
      lfs       f23, 0x74(r1)
      addi      r3, r1, 0x68
      lfs       f24, 0x78(r1)
      addi      r5, r5, 0x2
      lfs       f25, 0x7C(r1)
      bl        -0x758
      lfs       f28, 0x68(r1)
      li        r31, 0
      lfs       f26, 0x6C(r1)
      fcmpu     cr0, f23, f28
      lfs       f27, 0x70(r1)
      bne-      .loc_0x104
      fcmpu     cr0, f24, f26
      bne-      .loc_0x104
      fcmpu     cr0, f25, f27
      bne-      .loc_0x104
      li        r31, 0x1

    .loc_0x104:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x364
      lwz       r3, 0x70(r30)
      addic.    r3, r3, 0x2
      bge-      .loc_0x164
      lwz       r3, 0x30(r30)
      addi      r4, r1, 0x1C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x28(r1)
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x15C
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x742
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x1703C4

    .loc_0x15C:
      lfs       f22, 0x28(r1)
      b         .loc_0x228

    .loc_0x164:
      lwz       r0, 0x4C(r30)
      cmpw      r3, r0
      blt-      .loc_0x178
      lfs       f22, -0x5398(r2)
      b         .loc_0x228

    .loc_0x178:
      cmpwi     r3, 0
      lwz       r6, 0x48(r30)
      li        r4, 0
      ble-      .loc_0x1E8
      cmpwi     r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x1D0
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0x1D0

    .loc_0x1A8:
      lwz       r5, 0xC(r6)
      addi      r4, r4, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0x1A8

    .loc_0x1D0:
      sub       r0, r3, r4
      mtctr     r0
      cmpw      r4, r3
      bge-      .loc_0x1E8

    .loc_0x1E0:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x1E0

    .loc_0x1E8:
      cmplwi    r6, 0
      beq-      .loc_0x210
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x214

    .loc_0x210:
      li        r3, 0

    .loc_0x214:
      cmplwi    r3, 0
      bne-      .loc_0x224
      lfs       f22, -0x5398(r2)
      b         .loc_0x228

    .loc_0x224:
      lfs       f22, 0x58(r3)

    .loc_0x228:
      lwz       r3, 0x70(r30)
      addic.    r3, r3, 0x1
      bge-      .loc_0x280
      lwz       r3, 0x30(r30)
      addi      r4, r1, 0xC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x18(r1)
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x278
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x742
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x1704E0

    .loc_0x278:
      lfs       f0, 0x18(r1)
      b         .loc_0x344

    .loc_0x280:
      lwz       r0, 0x4C(r30)
      cmpw      r3, r0
      blt-      .loc_0x294
      lfs       f0, -0x5398(r2)
      b         .loc_0x344

    .loc_0x294:
      cmpwi     r3, 0
      lwz       r6, 0x48(r30)
      li        r4, 0
      ble-      .loc_0x304
      cmpwi     r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x2EC
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0x2EC

    .loc_0x2C4:
      lwz       r5, 0xC(r6)
      addi      r4, r4, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0x2C4

    .loc_0x2EC:
      sub       r0, r3, r4
      mtctr     r0
      cmpw      r4, r3
      bge-      .loc_0x304

    .loc_0x2FC:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x2FC

    .loc_0x304:
      cmplwi    r6, 0
      beq-      .loc_0x32C
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x330

    .loc_0x32C:
      li        r3, 0

    .loc_0x330:
      cmplwi    r3, 0
      bne-      .loc_0x340
      lfs       f0, -0x5398(r2)
      b         .loc_0x344

    .loc_0x340:
      lfs       f0, 0x58(r3)

    .loc_0x344:
      stfs      f23, 0xA8(r1)
      stfs      f24, 0xAC(r1)
      stfs      f25, 0xB0(r1)
      stfs      f28, 0xB4(r1)
      stfs      f26, 0xB8(r1)
      stfs      f27, 0xBC(r1)
      stfs      f0, 0xC0(r1)
      stfs      f22, 0xC4(r1)

    .loc_0x364:
      lfs       f1, 0xA4(r30)
      rlwinm.   r0,r31,0,24,31
      lfs       f0, -0x5400(r2)
      stfs      f1, 0x8C(r1)
      lfs       f1, 0xA8(r30)
      stfs      f1, 0x90(r1)
      lfs       f1, 0xAC(r30)
      stfs      f1, 0x94(r1)
      stfs      f0, 0x98(r1)
      bne-      .loc_0x534
      addi      r3, r1, 0xA8
      addi      r4, r1, 0x8C
      addi      r5, r1, 0x9C
      addi      r6, r1, 0x8
      bl        0x27AF10
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x534
      lwz       r3, 0x70(r30)
      addic.    r3, r3, 0x2
      blt-      .loc_0x3C0
      lwz       r0, 0x4C(r30)
      cmpw      r3, r0
      blt-      .loc_0x3C8

    .loc_0x3C0:
      li        r0, 0x1
      b         .loc_0x480

    .loc_0x3C8:
      cmpwi     r3, 0
      lwz       r6, 0x48(r30)
      li        r4, 0
      ble-      .loc_0x438
      cmpwi     r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x420
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0x420

    .loc_0x3F8:
      lwz       r5, 0xC(r6)
      addi      r4, r4, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0x3F8

    .loc_0x420:
      sub       r0, r3, r4
      mtctr     r0
      cmpw      r4, r3
      bge-      .loc_0x438

    .loc_0x430:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x430

    .loc_0x438:
      cmplwi    r6, 0
      beq-      .loc_0x460
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x464

    .loc_0x460:
      li        r3, 0

    .loc_0x464:
      cmplwi    r3, 0
      bne-      .loc_0x474
      li        r0, 0x1
      b         .loc_0x480

    .loc_0x474:
      lbz       r0, 0x34(r3)
      rlwinm    r0,r0,0,31,31
      xori      r0, r0, 0x1

    .loc_0x480:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x534
      li        r0, 0
      mr        r4, r30
      stw       r0, 0x70(r30)
      addi      r3, r1, 0x5C
      li        r5, -0x1
      bl        -0xB20
      lfs       f0, 0x5C(r1)
      mr        r4, r30
      addi      r3, r1, 0x50
      li        r5, -0x1
      stfs      f0, 0x74(r30)
      lfs       f0, 0x60(r1)
      stfs      f0, 0x78(r30)
      lfs       f0, 0x64(r1)
      stfs      f0, 0x7C(r30)
      bl        -0xB48
      lfs       f0, 0x50(r1)
      mr        r4, r30
      addi      r3, r1, 0x44
      li        r5, 0x1
      stfs      f0, 0x80(r30)
      lfs       f0, 0x54(r1)
      stfs      f0, 0x84(r30)
      lfs       f0, 0x58(r1)
      stfs      f0, 0x88(r30)
      bl        -0xB70
      lfs       f0, 0x44(r1)
      mr        r4, r30
      addi      r3, r1, 0x38
      li        r5, 0x2
      stfs      f0, 0x8C(r30)
      lfs       f0, 0x48(r1)
      stfs      f0, 0x90(r30)
      lfs       f0, 0x4C(r1)
      stfs      f0, 0x94(r30)
      bl        -0xB98
      lfs       f0, 0x38(r1)
      stfs      f0, 0x98(r30)
      lfs       f0, 0x3C(r1)
      stfs      f0, 0x9C(r30)
      lfs       f0, 0x40(r1)
      stfs      f0, 0xA0(r30)
      b         .loc_0x6CC

    .loc_0x534:
      lwz       r3, -0x6CF8(r13)
      li        r29, 0
      lwz       r4, 0x44(r30)
      lwz       r3, 0x8(r3)
      lha       r4, 0x20(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x44(r30)
      mr        r31, r3
      lwz       r4, 0xC(r4)
      cmplwi    r4, 0
      beq-      .loc_0x58C
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r4)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r29, r3

    .loc_0x58C:
      cmplwi    r31, 0
      beq-      .loc_0x6C4
      cmplwi    r29, 0
      beq-      .loc_0x6C4
      lfs       f23, 0x50(r31)
      lfs       f29, 0x50(r29)
      lfs       f24, 0x4C(r31)
      fsubs     f26, f29, f23
      lfs       f30, 0x4C(r29)
      lfs       f22, 0x54(r31)
      lfs       f28, 0x54(r29)
      fsubs     f27, f30, f24
      fmuls     f1, f26, f26
      fsubs     f25, f28, f22
      lfs       f0, -0x5400(r2)
      fmadds    f1, f27, f27, f1
      fmuls     f2, f25, f25
      fadds     f31, f2, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x5EC
      ble-      .loc_0x5F0
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x5F0

    .loc_0x5EC:
      fmr       f31, f0

    .loc_0x5F0:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x614
      lfs       f0, -0x53FC(r2)
      fdivs     f0, f0, f31
      fmuls     f27, f27, f0
      fmuls     f26, f26, f0
      fmuls     f25, f25, f0
      b         .loc_0x618

    .loc_0x614:
      fmr       f31, f0

    .loc_0x618:
      lwz       r4, 0x30(r30)
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x34(r1)
      lfs       f2, 0x30(r1)
      lfs       f0, 0x2C(r1)
      fsubs     f4, f1, f22
      lfs       f1, -0x5400(r2)
      fsubs     f3, f2, f23
      fsubs     f2, f0, f24
      fcmpu     cr0, f1, f31
      bne-      .loc_0x658
      b         .loc_0x6AC

    .loc_0x658:
      fmuls     f0, f26, f3
      fmadds    f0, f27, f2, f0
      fmadds    f0, f25, f4, f0
      fdivs     f2, f0, f31
      fcmpo     cr0, f2, f1
      bge-      .loc_0x674
      b         .loc_0x6AC

    .loc_0x674:
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x690
      fmr       f24, f30
      fmr       f23, f29
      fmr       f22, f28
      b         .loc_0x6AC

    .loc_0x690:
      fmuls     f0, f2, f31
      fmuls     f2, f25, f0
      fmuls     f1, f27, f0
      fmuls     f0, f26, f0
      fadds     f22, f2, f22
      fadds     f24, f1, f24
      fadds     f23, f0, f23

    .loc_0x6AC:
      mr        r3, r30
      bl        .loc_0x738
      stfs      f24, 0x8C(r30)
      stfs      f23, 0x90(r30)
      stfs      f22, 0x94(r30)
      b         .loc_0x6CC

    .loc_0x6C4:
      mr        r3, r30
      bl        .loc_0x738

    .loc_0x6CC:
      psq_l     f31,0x178(r1),0,0
      lfd       f31, 0x170(r1)
      psq_l     f30,0x168(r1),0,0
      lfd       f30, 0x160(r1)
      psq_l     f29,0x158(r1),0,0
      lfd       f29, 0x150(r1)
      psq_l     f28,0x148(r1),0,0
      lfd       f28, 0x140(r1)
      psq_l     f27,0x138(r1),0,0
      lfd       f27, 0x130(r1)
      psq_l     f26,0x128(r1),0,0
      lfd       f26, 0x120(r1)
      psq_l     f25,0x118(r1),0,0
      lfd       f25, 0x110(r1)
      psq_l     f24,0x108(r1),0,0
      lfd       f24, 0x100(r1)
      psq_l     f23,0xF8(r1),0,0
      lfd       f23, 0xF0(r1)
      psq_l     f22,0xE8(r1),0,0
      lfd       f22, 0xE0(r1)
      lwz       r31, 0xDC(r1)
      lwz       r30, 0xD8(r1)
      lwz       r0, 0x184(r1)
      lwz       r29, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0x180
      blr

    .loc_0x738:
    */
}

/*
 * --INFO--
 * Address:	8019AFE4
 * Size:	000080
 */
void PikiAI::ActPathMove::crMakeRefs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      li        r30, 0
      stw       r29, 0x24(r1)
      mr        r29, r3
      mr        r31, r29

    .loc_0x24:
      lwz       r0, 0x70(r29)
      subi      r5, r30, 0x1
      mr        r4, r29
      addi      r3, r1, 0x8
      add       r5, r0, r5
      bl        -0xDF4
      lfs       f0, 0x8(r1)
      addi      r30, r30, 0x1
      cmpwi     r30, 0x4
      stfs      f0, 0x74(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x78(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x7C(r31)
      addi      r31, r31, 0xC
      blt+      .loc_0x24
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
 * Address:	8019B064
 * Size:	000C54
 */
void PikiAI::ActPathMove::crMove(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x130(r1)
      mflr      r0
      stw       r0, 0x134(r1)
      stfd      f31, 0x120(r1)
      psq_st    f31,0x128(r1),0,0
      stfd      f30, 0x110(r1)
      psq_st    f30,0x118(r1),0,0
      stfd      f29, 0x100(r1)
      psq_st    f29,0x108(r1),0,0
      stfd      f28, 0xF0(r1)
      psq_st    f28,0xF8(r1),0,0
      stfd      f27, 0xE0(r1)
      psq_st    f27,0xE8(r1),0,0
      stfd      f26, 0xD0(r1)
      psq_st    f26,0xD8(r1),0,0
      stfd      f25, 0xC0(r1)
      psq_st    f25,0xC8(r1),0,0
      stfd      f24, 0xB0(r1)
      psq_st    f24,0xB8(r1),0,0
      stfd      f23, 0xA0(r1)
      psq_st    f23,0xA8(r1),0,0
      stfd      f22, 0x90(r1)
      psq_st    f22,0x98(r1),0,0
      stw       r31, 0x8C(r1)
      mr        r31, r3
      addi      r3, r1, 0x7C
      lwz       r5, 0x70(r31)
      mr        r4, r31
      bl        -0xEAC
      lwz       r0, 0x70(r31)
      lfs       f28, 0x7C(r1)
      cmpwi     r0, -0x1
      lfs       f27, 0x80(r1)
      lfs       f26, 0x84(r1)
      lfs       f31, 0x8C(r31)
      lfs       f29, 0x90(r31)
      lfs       f22, 0x94(r31)
      bne-      .loc_0x104
      lwz       r0, 0x4C(r31)
      cmpwi     r0, 0x1
      bgt-      .loc_0xAC
      li        r0, 0x1
      b         .loc_0xFC

    .loc_0xAC:
      lwz       r3, 0x48(r31)
      lwz       r4, 0xC(r3)
      cmplwi    r4, 0
      beq-      .loc_0xDC
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r4)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0xDC:
      li        r3, 0

    .loc_0xE0:
      cmplwi    r3, 0
      bne-      .loc_0xF0
      li        r0, 0x1
      b         .loc_0xFC

    .loc_0xF0:
      lbz       r0, 0x34(r3)
      rlwinm    r0,r0,0,31,31
      xori      r0, r0, 0x1

    .loc_0xFC:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1EC

    .loc_0x104:
      lwz       r3, 0x70(r31)
      cmpwi     r3, -0x1
      beq-      .loc_0x314
      addic.    r3, r3, 0x1
      blt-      .loc_0x124
      lwz       r0, 0x4C(r31)
      cmpw      r3, r0
      blt-      .loc_0x12C

    .loc_0x124:
      li        r0, 0x1
      b         .loc_0x1E4

    .loc_0x12C:
      cmpwi     r3, 0
      lwz       r6, 0x48(r31)
      li        r4, 0
      ble-      .loc_0x19C
      cmpwi     r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x184
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0x184

    .loc_0x15C:
      lwz       r5, 0xC(r6)
      addi      r4, r4, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0x15C

    .loc_0x184:
      sub       r0, r3, r4
      mtctr     r0
      cmpw      r4, r3
      bge-      .loc_0x19C

    .loc_0x194:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x194

    .loc_0x19C:
      cmplwi    r6, 0
      beq-      .loc_0x1C4
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1C8

    .loc_0x1C4:
      li        r3, 0

    .loc_0x1C8:
      cmplwi    r3, 0
      bne-      .loc_0x1D8
      li        r0, 0x1
      b         .loc_0x1E4

    .loc_0x1D8:
      lbz       r0, 0x34(r3)
      rlwinm    r0,r0,0,31,31
      xori      r0, r0, 0x1

    .loc_0x1E4:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x314

    .loc_0x1EC:
      lwz       r3, 0x70(r31)
      cmpwi     r3, -0x1
      bne-      .loc_0x234
      lwz       r3, 0x48(r31)
      lwz       r4, 0xC(r3)
      cmplwi    r4, 0
      beq-      .loc_0x228
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r4)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x22C

    .loc_0x228:
      li        r3, 0

    .loc_0x22C:
      stw       r3, 0x64(r31)
      b         .loc_0x2D4

    .loc_0x234:
      addic.    r5, r3, 0x1
      lwz       r6, 0x48(r31)
      li        r3, 0
      ble-      .loc_0x2A4
      cmpwi     r5, 0x8
      subi      r4, r5, 0x8
      ble-      .loc_0x28C
      addi      r0, r4, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r4, 0
      ble-      .loc_0x28C

    .loc_0x264:
      lwz       r4, 0xC(r6)
      addi      r3, r3, 0x8
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r4, 0xC(r4)
      lwz       r6, 0xC(r4)
      bdnz+     .loc_0x264

    .loc_0x28C:
      sub       r0, r5, r3
      mtctr     r0
      cmpw      r3, r5
      bge-      .loc_0x2A4

    .loc_0x29C:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x29C

    .loc_0x2A4:
      cmplwi    r6, 0
      beq-      .loc_0x2CC
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2D0

    .loc_0x2CC:
      li        r3, 0

    .loc_0x2D0:
      stw       r3, 0x64(r31)

    .loc_0x2D4:
      li        r0, 0x3
      addi      r3, r1, 0x70
      sth       r0, 0x1E(r31)
      lwz       r4, 0x30(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x70(r1)
      lfs       f0, -0x5400(r2)
      stfs      f1, 0x58(r31)
      lfs       f1, 0x74(r1)
      stfs      f1, 0x5C(r31)
      lfs       f1, 0x78(r1)
      stfs      f1, 0x60(r31)
      stfs      f0, 0x68(r31)

    .loc_0x314:
      lwz       r4, 0x30(r31)
      addi      r3, r1, 0x64
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f23, 0x64(r1)
      fmr       f1, f31
      lfs       f24, 0x6C(r1)
      fmr       f2, f22
      fmr       f3, f23
      lfs       f25, 0x68(r1)
      fmr       f4, f24
      bl        0x276470
      lfs       f0, -0x53F0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4EC
      lwz       r3, 0x4C(r31)
      lwz       r4, 0x70(r31)
      subi      r0, r3, 0x2
      cmpw      r4, r0
      blt-      .loc_0x428
      li        r0, 0x2
      lfs       f1, -0x53FC(r2)
      sth       r0, 0x1E(r31)
      addi      r3, r1, 0x58
      addi      r4, r31, 0x74
      bl        0x276474
      lfs       f0, 0x58(r1)
      lfs       f1, -0x5400(r2)
      stfs      f0, 0xB0(r31)
      lfs       f0, 0x5C(r1)
      stfs      f0, 0xB4(r31)
      lfs       f0, 0x60(r1)
      stfs      f0, 0xB8(r31)
      lfs       f3, 0xB0(r31)
      lfs       f2, 0xB4(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0xB8(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x3E4
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x3E8
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x3E8

    .loc_0x3E4:
      fmr       f2, f1

    .loc_0x3E8:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x420
      lfs       f1, -0x53FC(r2)
      lfs       f0, 0xB0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB8(r31)

    .loc_0x420:
      li        r3, 0x1
      b         .loc_0xBF0

    .loc_0x428:
      addi      r0, r4, 0x1
      mr        r3, r31
      stw       r0, 0x70(r31)
      bl        -0x4B4
      lfs       f1, -0x5400(r2)
      addi      r3, r1, 0x4C
      addi      r4, r31, 0x74
      bl        0x2763B0
      lfs       f0, 0x4C(r1)
      lfs       f1, -0x5400(r2)
      stfs      f0, 0xB0(r31)
      lfs       f0, 0x50(r1)
      stfs      f0, 0xB4(r31)
      lfs       f0, 0x54(r1)
      stfs      f0, 0xB8(r31)
      lfs       f3, 0xB0(r31)
      lfs       f2, 0xB4(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0xB8(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x4A8
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x4AC
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x4AC

    .loc_0x4A8:
      fmr       f2, f1

    .loc_0x4AC:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x4E4
      lfs       f1, -0x53FC(r2)
      lfs       f0, 0xB0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB8(r31)

    .loc_0x4E4:
      li        r3, 0x1
      b         .loc_0xBF0

    .loc_0x4EC:
      lwz       r4, 0x70(r31)
      mr        r3, r31
      bl        -0x11A4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x548
      lfs       f0, -0x5400(r2)
      stfs      f0, 0xB0(r31)
      stfs      f0, 0xB4(r31)
      stfs      f0, 0xB8(r31)
      lwz       r4, 0x20(r31)
      cmplwi    r4, 0
      beq-      .loc_0x52C
      lwz       r3, -0x6C80(r13)
      bl        0x84DC
      li        r0, 0
      stw       r0, 0x20(r31)

    .loc_0x52C:
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x34(r31)
      li        r4, 0x1
      bl        -0x2D90
      li        r3, 0
      b         .loc_0xBF0

    .loc_0x548:
      fsubs     f30, f29, f27
      lfs       f0, -0x5400(r2)
      fsubs     f29, f22, f26
      fsubs     f31, f31, f28
      fmuls     f1, f30, f30
      fmuls     f2, f29, f29
      fmadds    f1, f31, f31, f1
      fadds     f3, f2, f1
      fcmpo     cr0, f3, f0
      ble-      .loc_0x580
      ble-      .loc_0x584
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x584

    .loc_0x580:
      fmr       f3, f0

    .loc_0x584:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x5A8
      lfs       f0, -0x53FC(r2)
      fdivs     f0, f0, f3
      fmuls     f31, f31, f0
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0
      b         .loc_0x5AC

    .loc_0x5A8:
      fmr       f3, f0

    .loc_0x5AC:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x5D8
      fsubs     f0, f25, f27
      fsubs     f1, f23, f28
      fsubs     f2, f24, f26
      fmuls     f0, f30, f0
      fmadds    f0, f31, f1, f0
      fmadds    f0, f29, f2, f0
      fdivs     f27, f0, f3
      b         .loc_0x5DC

    .loc_0x5D8:
      lfs       f27, -0x53FC(r2)

    .loc_0x5DC:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f27, f0
      bge-      .loc_0x5EC
      fmr       f27, f0

    .loc_0x5EC:
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f27, f0
      ble-      .loc_0x5FC
      fmr       f27, f0

    .loc_0x5FC:
      fmuls     f0, f27, f3
      lfs       f25, -0x5400(r2)
      fmuls     f1, f29, f0
      fmuls     f0, f31, f0
      fadds     f1, f1, f26
      fadds     f0, f0, f28
      fsubs     f24, f1, f24
      fsubs     f23, f0, f23
      fmuls     f1, f24, f24
      fmadds    f0, f23, f23, f25
      fadds     f28, f1, f0
      fcmpo     cr0, f28, f25
      ble-      .loc_0x640
      ble-      .loc_0x644
      fsqrte    f0, f28
      fmuls     f28, f0, f28
      b         .loc_0x644

    .loc_0x640:
      fmr       f28, f25

    .loc_0x644:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f28, f0
      ble-      .loc_0x668
      lfs       f0, -0x53FC(r2)
      fdivs     f0, f0, f28
      fmuls     f23, f23, f0
      fmuls     f25, f25, f0
      fmuls     f24, f24, f0
      b         .loc_0x66C

    .loc_0x668:
      fmr       f28, f0

    .loc_0x66C:
      lwz       r3, 0x70(r31)
      cmpwi     r3, 0
      bge-      .loc_0x6C4
      lwz       r3, 0x30(r31)
      addi      r4, r1, 0x18
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x24(r1)
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x6BC
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x742
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x1710DC

    .loc_0x6BC:
      lfs       f26, 0x24(r1)
      b         .loc_0x788

    .loc_0x6C4:
      lwz       r0, 0x4C(r31)
      cmpw      r3, r0
      blt-      .loc_0x6D8
      lfs       f26, -0x5398(r2)
      b         .loc_0x788

    .loc_0x6D8:
      cmpwi     r3, 0
      lwz       r6, 0x48(r31)
      li        r4, 0
      ble-      .loc_0x748
      cmpwi     r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x730
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0x730

    .loc_0x708:
      lwz       r5, 0xC(r6)
      addi      r4, r4, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0x708

    .loc_0x730:
      sub       r0, r3, r4
      mtctr     r0
      cmpw      r4, r3
      bge-      .loc_0x748

    .loc_0x740:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x740

    .loc_0x748:
      cmplwi    r6, 0
      beq-      .loc_0x770
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x774

    .loc_0x770:
      li        r3, 0

    .loc_0x774:
      cmplwi    r3, 0
      bne-      .loc_0x784
      lfs       f26, -0x5398(r2)
      b         .loc_0x788

    .loc_0x784:
      lfs       f26, 0x58(r3)

    .loc_0x788:
      lwz       r3, 0x70(r31)
      addic.    r3, r3, 0x1
      bge-      .loc_0x7E0
      lwz       r3, 0x30(r31)
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x14(r1)
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x7D8
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0x742
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x1711F8

    .loc_0x7D8:
      lfs       f0, 0x14(r1)
      b         .loc_0x8A4

    .loc_0x7E0:
      lwz       r0, 0x4C(r31)
      cmpw      r3, r0
      blt-      .loc_0x7F4
      lfs       f0, -0x5398(r2)
      b         .loc_0x8A4

    .loc_0x7F4:
      cmpwi     r3, 0
      lwz       r6, 0x48(r31)
      li        r4, 0
      ble-      .loc_0x864
      cmpwi     r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x84C
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r5, 0
      ble-      .loc_0x84C

    .loc_0x824:
      lwz       r5, 0xC(r6)
      addi      r4, r4, 0x8
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r5, 0xC(r5)
      lwz       r6, 0xC(r5)
      bdnz+     .loc_0x824

    .loc_0x84C:
      sub       r0, r3, r4
      mtctr     r0
      cmpw      r4, r3
      bge-      .loc_0x864

    .loc_0x85C:
      lwz       r6, 0xC(r6)
      bdnz+     .loc_0x85C

    .loc_0x864:
      cmplwi    r6, 0
      beq-      .loc_0x88C
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x20(r6)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x890

    .loc_0x88C:
      li        r3, 0

    .loc_0x890:
      cmplwi    r3, 0
      bne-      .loc_0x8A0
      lfs       f0, -0x5398(r2)
      b         .loc_0x8A4

    .loc_0x8A0:
      lfs       f0, 0x58(r3)

    .loc_0x8A4:
      lfs       f3, -0x53FC(r2)
      fmuls     f1, f27, f0
      lfs       f0, -0x5400(r2)
      fsubs     f2, f3, f27
      fmadds    f2, f2, f26, f1
      fcmpu     cr0, f0, f2
      bne-      .loc_0x8C4
      fmr       f2, f3

    .loc_0x8C4:
      fabs      f1, f28
      lfs       f0, -0x5394(r2)
      frsp      f1, f1
      fdivs     f26, f1, f2
      fcmpo     cr0, f26, f0
      bge-      .loc_0x8E0
      lfs       f26, -0x5400(r2)

    .loc_0x8E0:
      lfs       f0, -0x5390(r2)
      fcmpo     cr0, f26, f0
      ble-      .loc_0x908
      fabs      f1, f28
      lfs       f0, -0x538C(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x908
      li        r3, 0x1
      b         .loc_0xBF0

    .loc_0x908:
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f26, f0
      ble-      .loc_0x91C
      fmr       f26, f0
      b         .loc_0x92C

    .loc_0x91C:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f26, f0
      bge-      .loc_0x92C
      fmr       f26, f0

    .loc_0x92C:
      lfs       f0, -0x53FC(r2)
      fcmpo     cr0, f27, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xAD0
      lwz       r3, 0x4C(r31)
      lwz       r4, 0x70(r31)
      subi      r0, r3, 0x2
      cmpw      r4, r0
      blt-      .loc_0xA0C
      li        r0, 0x2
      fmr       f1, f27
      sth       r0, 0x1E(r31)
      addi      r3, r1, 0x40
      addi      r4, r31, 0x74
      bl        0x275E90
      lfs       f0, 0x40(r1)
      lfs       f1, -0x5400(r2)
      stfs      f0, 0xB0(r31)
      lfs       f0, 0x44(r1)
      stfs      f0, 0xB4(r31)
      lfs       f0, 0x48(r1)
      stfs      f0, 0xB8(r31)
      lfs       f3, 0xB0(r31)
      lfs       f2, 0xB4(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0xB8(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x9C8
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x9CC
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x9CC

    .loc_0x9C8:
      fmr       f2, f1

    .loc_0x9CC:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xA04
      lfs       f1, -0x53FC(r2)
      lfs       f0, 0xB0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB8(r31)

    .loc_0xA04:
      li        r3, 0x1
      b         .loc_0xBF0

    .loc_0xA0C:
      addi      r0, r4, 0x1
      mr        r3, r31
      stw       r0, 0x70(r31)
      bl        -0xA98
      lfs       f1, -0x5400(r2)
      addi      r3, r1, 0x34
      addi      r4, r31, 0x74
      bl        0x275DCC
      lfs       f0, 0x34(r1)
      lfs       f1, -0x5400(r2)
      stfs      f0, 0xB0(r31)
      lfs       f0, 0x38(r1)
      stfs      f0, 0xB4(r31)
      lfs       f0, 0x3C(r1)
      stfs      f0, 0xB8(r31)
      lfs       f3, 0xB0(r31)
      lfs       f2, 0xB4(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0xB8(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xA8C
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xA90
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xA90

    .loc_0xA8C:
      fmr       f2, f1

    .loc_0xA90:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xAC8
      lfs       f1, -0x53FC(r2)
      lfs       f0, 0xB0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB8(r31)

    .loc_0xAC8:
      li        r3, 0x1
      b         .loc_0xBF0

    .loc_0xAD0:
      fmr       f1, f27
      addi      r3, r1, 0x28
      addi      r4, r31, 0x74
      bl        0x275D18
      lfs       f0, 0x28(r1)
      lfs       f1, -0x5400(r2)
      stfs      f0, 0xB0(r31)
      lfs       f0, 0x2C(r1)
      stfs      f0, 0xB4(r31)
      lfs       f0, 0x30(r1)
      stfs      f0, 0xB8(r31)
      lfs       f3, 0xB0(r31)
      lfs       f2, 0xB4(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0xB8(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xB40
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xB44
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xB44

    .loc_0xB40:
      fmr       f2, f1

    .loc_0xB44:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xB7C
      lfs       f1, -0x53FC(r2)
      lfs       f0, 0xB0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0xB0(r31)
      lfs       f0, 0xB4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB4(r31)
      lfs       f0, 0xB8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0xB8(r31)

    .loc_0xB7C:
      lfs       f0, -0x53FC(r2)
      fmuls     f2, f23, f26
      lfs       f3, 0xB0(r31)
      fmuls     f4, f25, f26
      fsubs     f7, f0, f26
      lfs       f5, 0xB4(r31)
      lfs       f6, 0xB8(r31)
      fmuls     f1, f24, f26
      lfs       f0, -0x5400(r2)
      fmuls     f3, f3, f7
      fmuls     f5, f5, f7
      fmuls     f6, f6, f7
      fadds     f2, f3, f2
      fadds     f3, f5, f4
      fadds     f1, f6, f1
      stfs      f2, 0xB0(r31)
      stfs      f3, 0xB4(r31)
      stfs      f1, 0xB8(r31)
      lfs       f1, 0xB8(r31)
      lfs       f2, 0xB0(r31)
      fmuls     f1, f1, f29
      fmadds    f1, f2, f31, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xBEC
      stfs      f31, 0xB0(r31)
      stfs      f30, 0xB4(r31)
      stfs      f29, 0xB8(r31)

    .loc_0xBEC:
      li        r3, 0x1

    .loc_0xBF0:
      psq_l     f31,0x128(r1),0,0
      lfd       f31, 0x120(r1)
      psq_l     f30,0x118(r1),0,0
      lfd       f30, 0x110(r1)
      psq_l     f29,0x108(r1),0,0
      lfd       f29, 0x100(r1)
      psq_l     f28,0xF8(r1),0,0
      lfd       f28, 0xF0(r1)
      psq_l     f27,0xE8(r1),0,0
      lfd       f27, 0xE0(r1)
      psq_l     f26,0xD8(r1),0,0
      lfd       f26, 0xD0(r1)
      psq_l     f25,0xC8(r1),0,0
      lfd       f25, 0xC0(r1)
      psq_l     f24,0xB8(r1),0,0
      lfd       f24, 0xB0(r1)
      psq_l     f23,0xA8(r1),0,0
      lfd       f23, 0xA0(r1)
      psq_l     f22,0x98(r1),0,0
      lfd       f22, 0x90(r1)
      lwz       r0, 0x134(r1)
      lwz       r31, 0x8C(r1)
      mtlr      r0
      addi      r1, r1, 0x130
      blr
    */
}

/*
 * --INFO--
 * Address:	8019BCB8
 * Size:	00007C
 */
void PikiAI::ActStickAttack::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x30
      addi      r0, r31, 0x24
      lis       r3, 0x804B
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x24(r31)

    .loc_0x30:
      mr        r3, r31
      mr        r4, r5
      bl        -0x52D8
      lis       r3, 0x804B
      addi      r0, r31, 0x24
      addi      r4, r3, 0x4BB0
      mr        r3, r31
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x40
      lwz       r4, 0xC(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0xC(r31)
      sub       r0, r0, r4
      stw       r0, 0x4(r4)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019BD34
 * Size:	0001F0
 */
void PikiAI::ActStickAttack::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      li        r29, 0
      stw       r28, 0x10(r1)
      mr.       r28, r4
      lis       r4, 0x8048
      subi      r30, r4, 0xF90
      beq-      .loc_0x64
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r30, 0xD0
      bl        -0xD16C4
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x64
      li        r29, 0x1

    .loc_0x64:
      rlwinm.   r0,r29,0,24,31
      bne-      .loc_0x80
      addi      r3, r30, 0x34
      addi      r5, r30, 0x48
      li        r4, 0x91B
      crclr     6, 0x6
      bl        -0x171770

    .loc_0x80:
      lwz       r3, 0x8(r28)
      li        r0, 0x1B
      stw       r3, 0x10(r31)
      lfs       f0, 0x4(r28)
      stfs      f0, 0x14(r31)
      lbz       r3, 0x10(r28)
      stb       r3, 0x1D(r31)
      stw       r0, 0x20(r31)
      lwz       r3, 0x4(r31)
      bl        0x379C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xEC
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0xC0
      lwz       r6, 0xC(r31)

    .loc_0xC0:
      lwz       r3, 0x4(r31)
      li        r4, 0x1B
      li        r5, 0x1B
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x19(r31)
      b         .loc_0x16C

    .loc_0xEC:
      lwz       r4, 0xC(r28)
      cmpwi     r4, -0x1
      bne-      .loc_0x134
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x108
      lwz       r6, 0xC(r31)

    .loc_0x108:
      lwz       r3, 0x4(r31)
      li        r4, 0x1B
      li        r5, 0x1B
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x19(r31)
      b         .loc_0x16C

    .loc_0x134:
      cmplwi    r31, 0
      stw       r4, 0x20(r31)
      mr        r6, r31
      beq-      .loc_0x148
      lwz       r6, 0xC(r31)

    .loc_0x148:
      lwz       r3, 0x4(r31)
      mr        r5, r4
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x19(r31)

    .loc_0x16C:
      li        r0, 0
      lfs       f0, -0x5400(r2)
      stb       r0, 0x18(r31)
      stb       r0, 0x1A(r31)
      stb       r0, 0x1B(r31)
      stb       r0, 0x1C(r31)
      lwz       r3, 0x4(r31)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      lwz       r3, 0x4(r31)
      bl        -0x51EEC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1BC
      lwz       r3, 0x4(r31)
      li        r5, 0x2852
      lwz       r4, 0x10(r31)
      li        r6, 0x1
      bl        -0x53594
      b         .loc_0x1D0

    .loc_0x1BC:
      lwz       r3, 0x4(r31)
      li        r5, 0x2806
      lwz       r4, 0x10(r31)
      li        r6, 0x1
      bl        -0x535AC

    .loc_0x1D0:
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
 * Address:	8019BF24
 * Size:	000164
 */
void PikiAI::ActStickAttack::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0x10(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x40
      lwz       r3, 0x4(r31)
      bl        0x34CC
      li        r3, 0
      b         .loc_0x150

    .loc_0x40:
      lbz       r0, 0x1A(r31)
      cmplwi    r0, 0
      beq-      .loc_0x54
      li        r3, 0x2
      b         .loc_0x150

    .loc_0x54:
      lwz       r3, 0x4(r31)
      lwz       r4, 0x20(r31)
      bl        -0x5F054
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x70
      li        r3, 0x2
      b         .loc_0x150

    .loc_0x70:
      lbz       r0, 0x19(r31)
      cmplwi    r0, 0
      beq-      .loc_0x94
      lwz       r3, 0x4(r31)
      bl        0x35D0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x94
      li        r3, 0x2
      b         .loc_0x150

    .loc_0x94:
      lbz       r0, 0x18(r31)
      cmplwi    r0, 0
      beq-      .loc_0x14C
      lbz       r0, 0x1B(r31)
      cmplwi    r0, 0
      bne-      .loc_0x14C
      lwz       r3, 0x4(r31)
      lis       r5, 0x804B
      lis       r4, 0x804B
      lfs       f0, 0x14(r31)
      lwz       r6, 0xF8(r3)
      subi      r5, r5, 0x5D00
      addi      r0, r4, 0x4DE0
      stw       r5, 0x8(r1)
      stw       r3, 0xC(r1)
      stw       r0, 0x8(r1)
      stfs      f0, 0x10(r1)
      stw       r6, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xFC
      lfs       f0, -0x5400(r2)
      stfs      f0, 0x10(r1)

    .loc_0xFC:
      li        r0, 0x1
      addi      r4, r1, 0x8
      stb       r0, 0x1B(r31)
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x130
      li        r0, 0x1
      stb       r0, 0x1C(r31)
      b         .loc_0x14C

    .loc_0x130:
      li        r0, 0
      li        r5, 0x2807
      stb       r0, 0x1C(r31)
      li        r6, 0x1
      lwz       r3, 0x4(r31)
      lwz       r4, 0x10(r31)
      bl        -0x53718

    .loc_0x14C:
      li        r3, 0x1

    .loc_0x150:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C088
 * Size:	000650
 */
void PikiAI::ActStickAttack::createEfx(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      stw       r0, 0xB4(r1)
      stfd      f31, 0xA0(r1)
      psq_st    f31,0xA8(r1),0,0
      stw       r31, 0x9C(r1)
      stw       r30, 0x98(r1)
      mr        r31, r3
      lbz       r0, 0x1C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x54
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x7C
      lfs       f1, 0x260(r4)
      lfs       f2, 0x264(r4)
      lfs       f0, 0x25C(r4)
      stfs      f0, 0x7C(r1)
      stfs      f1, 0x80(r1)
      stfs      f2, 0x84(r1)
      bl        0x21B8B4
      b         .loc_0x630

    .loc_0x54:
      lbz       r4, 0x1D(r31)
      cmplwi    r4, 0x7
      bgt-      .loc_0x630
      lis       r3, 0x804B
      rlwinm    r0,r4,2,0,29
      addi      r3, r3, 0x4AB4
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      cmplwi    r4, 0x7
      beq-      .loc_0x1A4
      lwz       r3, 0x4(r31)
      bl        -0x5212C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x11C
      lis       r3, 0x804B
      lis       r4, 0x804E
      subi      r0, r3, 0x5808
      lis       r3, 0x804B
      stw       r0, 0x70(r1)
      addi      r4, r4, 0x6A78
      li        r0, 0x149
      li        r7, 0
      stw       r4, 0x70(r1)
      addi      r6, r3, 0x4B9C
      lis       r3, 0x8051
      lis       r4, 0x804B
      sth       r0, 0x74(r1)
      addi      r5, r3, 0x41E4
      lfs       f2, 0x0(r5)
      subi      r0, r4, 0x5814
      stw       r7, 0x78(r1)
      addi      r3, r1, 0x70
      lfs       f1, 0x4(r5)
      addi      r4, r1, 0x60
      stw       r6, 0x70(r1)
      lfs       f0, 0x8(r5)
      lwz       r5, 0x4(r31)
      lfs       f3, 0x25C(r5)
      lfs       f4, 0x260(r5)
      lfs       f5, 0x264(r5)
      stfs      f2, 0x64(r1)
      stfs      f1, 0x68(r1)
      stfs      f0, 0x6C(r1)
      stw       r0, 0x60(r1)
      stfs      f3, 0x64(r1)
      stfs      f4, 0x68(r1)
      stfs      f5, 0x6C(r1)
      bl        0x212DE8
      b         .loc_0x1A4

    .loc_0x11C:
      lis       r3, 0x804B
      lis       r4, 0x804E
      subi      r0, r3, 0x5808
      lis       r3, 0x804B
      stw       r0, 0x54(r1)
      addi      r4, r4, 0x6A78
      li        r0, 0x148
      li        r7, 0
      stw       r4, 0x54(r1)
      addi      r6, r3, 0x4B88
      lis       r3, 0x8051
      lis       r4, 0x804B
      sth       r0, 0x58(r1)
      addi      r5, r3, 0x41E4
      lfs       f2, 0x0(r5)
      subi      r0, r4, 0x5814
      stw       r7, 0x5C(r1)
      addi      r3, r1, 0x54
      lfs       f1, 0x4(r5)
      addi      r4, r1, 0x44
      stw       r6, 0x54(r1)
      lfs       f0, 0x8(r5)
      lwz       r5, 0x4(r31)
      lfs       f3, 0x25C(r5)
      lfs       f4, 0x260(r5)
      lfs       f5, 0x264(r5)
      stfs      f2, 0x48(r1)
      stfs      f1, 0x4C(r1)
      stfs      f0, 0x50(r1)
      stw       r0, 0x44(r1)
      stfs      f3, 0x48(r1)
      stfs      f4, 0x4C(r1)
      stfs      f5, 0x50(r1)
      bl        0x212D5C

    .loc_0x1A4:
      lwz       r3, 0x4(r31)
      li        r5, 0x2808
      lwz       r4, 0x10(r31)
      li        r6, 0x1
      bl        -0x538E8
      b         .loc_0x630
      lwz       r3, 0x4(r31)
      lbz       r0, -0x7B95(r13)
      lfs       f1, 0x260(r3)
      lfs       f2, 0x264(r3)
      cmplwi    r0, 0
      lfs       f0, 0x25C(r3)
      stfs      f0, 0x38(r1)
      stfs      f1, 0x3C(r1)
      stfs      f2, 0x40(r1)
      beq-      .loc_0x2A4
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x2A4
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      lis       r0, 0x4330
      lwz       r3, 0x0(r3)
      stw       r0, 0x88(r1)
      subfic    r0, r3, 0x64
      lfd       f2, -0x53B8(r2)
      xoris     r0, r0, 0x8000
      lfs       f0, -0x53C0(r2)
      stw       r0, 0x8C(r1)
      lfd       f1, 0x88(r1)
      fsubs     f1, f1, f2
      fdivs     f31, f1, f0
      bl        -0xD2D2C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x94(r1)
      lfd       f2, -0x53B8(r2)
      stw       r0, 0x90(r1)
      lfs       f0, -0x5388(r2)
      lfd       f1, 0x90(r1)
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      fcmpo     cr0, f0, f31
      cror      2, 0, 0x2
      bne-      .loc_0x630
      addi      r3, r1, 0x38
      bl        0x21B7EC
      lwz       r3, 0x4(r30)
      li        r5, 0x2827
      li        r6, 0x2
      addi      r0, r3, 0x1
      stw       r0, 0x4(r30)
      lwz       r3, 0x4(r31)
      lwz       r4, 0x10(r31)
      bl        -0x53960
      b         .loc_0x630

    .loc_0x2A4:
      addi      r3, r1, 0x38
      bl        0x21B7C0
      b         .loc_0x630
      lwz       r3, 0x4(r31)
      lbz       r0, -0x7B95(r13)
      lfs       f1, 0x260(r3)
      lfs       f2, 0x264(r3)
      cmplwi    r0, 0
      lfs       f0, 0x25C(r3)
      stfs      f0, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f2, 0x34(r1)
      beq-      .loc_0x398
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x398
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      lis       r0, 0x4330
      lwz       r3, 0x0(r3)
      stw       r0, 0x90(r1)
      subfic    r0, r3, 0x64
      lfd       f2, -0x53B8(r2)
      xoris     r0, r0, 0x8000
      lfs       f0, -0x53C0(r2)
      stw       r0, 0x94(r1)
      lfd       f1, 0x90(r1)
      fsubs     f1, f1, f2
      fdivs     f31, f1, f0
      bl        -0xD2E20
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x8C(r1)
      lfd       f2, -0x53B8(r2)
      stw       r0, 0x88(r1)
      lfs       f0, -0x5388(r2)
      lfd       f1, 0x88(r1)
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      fcmpo     cr0, f0, f31
      cror      2, 0, 0x2
      bne-      .loc_0x630
      addi      r3, r1, 0x2C
      bl        0x21B66C
      lwz       r3, 0x4(r31)
      li        r5, 0x2824
      lwz       r4, 0x10(r31)
      li        r6, 0x2
      bl        -0x53A48
      lwz       r3, 0x4(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x4(r30)
      b         .loc_0x630

    .loc_0x398:
      addi      r3, r1, 0x2C
      bl        0x21B640
      b         .loc_0x630
      lwz       r3, 0x4(r31)
      lbz       r0, -0x7B95(r13)
      lfs       f1, 0x260(r3)
      lfs       f2, 0x264(r3)
      cmplwi    r0, 0
      lfs       f0, 0x25C(r3)
      stfs      f0, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f2, 0x28(r1)
      beq-      .loc_0x48C
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x48C
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      lis       r0, 0x4330
      lwz       r3, 0x0(r3)
      stw       r0, 0x90(r1)
      subfic    r0, r3, 0x64
      lfd       f2, -0x53B8(r2)
      xoris     r0, r0, 0x8000
      lfs       f0, -0x53C0(r2)
      stw       r0, 0x94(r1)
      lfd       f1, 0x90(r1)
      fsubs     f1, f1, f2
      fdivs     f31, f1, f0
      bl        -0xD2F14
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x8C(r1)
      lfd       f2, -0x53B8(r2)
      stw       r0, 0x88(r1)
      lfs       f0, -0x5388(r2)
      lfd       f1, 0x88(r1)
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      fcmpo     cr0, f0, f31
      cror      2, 0, 0x2
      bne-      .loc_0x630
      addi      r3, r1, 0x20
      bl        0x21B234
      lwz       r3, 0x4(r31)
      li        r5, 0x2825
      lwz       r4, 0x10(r31)
      li        r6, 0x2
      bl        -0x53B3C
      lwz       r3, 0x4(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x4(r30)
      b         .loc_0x630

    .loc_0x48C:
      addi      r3, r1, 0x20
      bl        0x21B208
      b         .loc_0x630
      lwz       r3, 0x4(r31)
      lbz       r0, -0x7B95(r13)
      lfs       f1, 0x260(r3)
      lfs       f2, 0x264(r3)
      cmplwi    r0, 0
      lfs       f0, 0x25C(r3)
      stfs      f0, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f2, 0x1C(r1)
      beq-      .loc_0x580
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x580
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x150(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      lis       r0, 0x4330
      lwz       r3, 0x0(r3)
      stw       r0, 0x90(r1)
      subfic    r0, r3, 0x64
      lfd       f2, -0x53B8(r2)
      xoris     r0, r0, 0x8000
      lfs       f0, -0x53C0(r2)
      stw       r0, 0x94(r1)
      lfd       f1, 0x90(r1)
      fsubs     f1, f1, f2
      fdivs     f31, f1, f0
      bl        -0xD3008
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x8C(r1)
      lfd       f2, -0x53B8(r2)
      stw       r0, 0x88(r1)
      lfs       f0, -0x5388(r2)
      lfd       f1, 0x88(r1)
      fsubs     f1, f1, f2
      fdivs     f0, f1, f0
      fcmpo     cr0, f0, f31
      cror      2, 0, 0x2
      bne-      .loc_0x630
      addi      r3, r1, 0x14
      bl        0x21B754
      lwz       r3, 0x4(r31)
      li        r5, 0x284D
      lwz       r4, 0x10(r31)
      li        r6, 0x2
      bl        -0x53C30
      lwz       r3, 0x4(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x4(r30)
      b         .loc_0x630

    .loc_0x580:
      addi      r3, r1, 0x14
      bl        0x21B728
      b         .loc_0x630
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x8
      lfs       f1, 0x260(r4)
      lfs       f2, 0x264(r4)
      lfs       f0, 0x25C(r4)
      stfs      f0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f2, 0x10(r1)
      bl        0x21B624
      lwz       r4, 0x10(r31)
      lhz       r0, 0x128(r4)
      cmplwi    r0, 0x410
      bne-      .loc_0x5D4
      lwz       r3, 0x4(r31)
      li        r5, 0x2826
      li        r6, 0x2
      bl        -0x53C90
      b         .loc_0x630

    .loc_0x5D4:
      cmplwi    r0, 0x412
      bne-      .loc_0x5F0
      lwz       r3, 0x4(r31)
      li        r5, 0x3802
      li        r6, 0x1
      bl        -0x53D1C
      b         .loc_0x630

    .loc_0x5F0:
      cmplwi    r0, 0x40C
      bne-      .loc_0x630
      lwz       r3, 0x4(r31)
      li        r5, 0x2823
      li        r6, 0x2
      bl        -0x53CC8
      b         .loc_0x630
      lwz       r3, 0x4(r31)
      lwz       r3, 0x258(r3)
      lwz       r3, 0xC(r3)
      bl        0x21B638
      lwz       r3, 0x4(r31)
      li        r5, 0x284F
      lwz       r4, 0x10(r31)
      li        r6, 0x1
      bl        -0x53CF0

    .loc_0x630:
      psq_l     f31,0xA8(r1),0,0
      lwz       r0, 0xB4(r1)
      lfd       f31, 0xA0(r1)
      lwz       r31, 0x9C(r1)
      lwz       r30, 0x98(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C6D8
 * Size:	000080
 */
void PikiAI::ActStickAttack::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x1C(r4)
      cmpwi     r0, 0x64
      beq-      .loc_0x6C
      bge-      .loc_0x38
      cmpwi     r0, 0x2
      beq-      .loc_0x44
      bge-      .loc_0x2C
      b         .loc_0x70

    .loc_0x2C:
      cmpwi     r0, 0x4
      bge-      .loc_0x70
      b         .loc_0x50

    .loc_0x38:
      cmpwi     r0, 0x3E8
      beq-      .loc_0x60
      b         .loc_0x70

    .loc_0x44:
      li        r0, 0x1
      stb       r0, 0x18(r3)
      b         .loc_0x70

    .loc_0x50:
      li        r0, 0
      stb       r0, 0x18(r3)
      stb       r0, 0x1B(r3)
      b         .loc_0x70

    .loc_0x60:
      li        r0, 0x1
      stb       r0, 0x1A(r3)
      b         .loc_0x70

    .loc_0x6C:
      bl        -0x6BC

    .loc_0x70:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C758
 * Size:	000024
 */
void PikiAI::ActStickAttack::cleanup(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x4(r3)
      bl        0x2CBC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C77C
 * Size:	00003C
 */
void PikiAI::ActClimb::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x5D78
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x4B4C
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C7B8
 * Size:	000100
 */
void PikiAI::ActClimb::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r5, 0x14
      li        r6, 0
      stw       r0, 0x34(r1)
      li        r7, 0
      stw       r31, 0x2C(r1)
      mr        r31, r4
      li        r4, 0x14
      stw       r30, 0x28(r1)
      mr        r30, r3
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      stw       r0, 0xC(r30)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x10(r30)
      lbz       r0, 0xC(r31)
      stb       r0, 0x20(r30)
      lwz       r3, 0xC(r30)
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0x1
      beq-      .loc_0x84
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xF5C
      li        r4, 0xA31
      subi      r5, r5, 0xF48
      crclr     6, 0x6
      bl        -0x1721F8

    .loc_0x84:
      lwz       r3, 0xC(r30)
      addi      r4, r1, 0x8
      bl        -0x645CC
      addi      r3, r1, 0x8
      addi      r4, r30, 0x14
      bl        0x279254
      lfs       f0, 0x14(r30)
      fneg      f0, f0
      stfs      f0, 0x14(r30)
      lfs       f0, 0x18(r30)
      fneg      f0, f0
      stfs      f0, 0x18(r30)
      lfs       f0, 0x1C(r30)
      fneg      f0, f0
      stfs      f0, 0x1C(r30)
      lfs       f3, 0x10(r30)
      lfs       f0, 0x14(r30)
      lfs       f1, 0x18(r30)
      lfs       f2, 0x1C(r30)
      fmuls     f0, f0, f3
      fmuls     f1, f1, f3
      fmuls     f2, f2, f3
      stfs      f0, 0x14(r30)
      stfs      f1, 0x18(r30)
      stfs      f2, 0x1C(r30)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C8B8
 * Size:	0000E4
 */
void PikiAI::ActClimb::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x4(r3)
      lfs       f0, 0x14(r31)
      stfs      f0, 0x200(r3)
      lfs       f0, 0x18(r31)
      stfs      f0, 0x204(r3)
      lfs       f0, 0x1C(r31)
      stfs      f0, 0x208(r3)
      lbz       r0, 0x20(r31)
      cmplwi    r0, 0
      bne-      .loc_0x68
      lwz       r3, 0x4(r31)
      lfs       f1, -0x53D0(r2)
      lfs       f0, 0x200(r3)
      fmuls     f0, f0, f1
      stfs      f0, 0x200(r3)
      lfs       f0, 0x204(r3)
      fmuls     f0, f0, f1
      stfs      f0, 0x204(r3)
      lfs       f0, 0x208(r3)
      fmuls     f0, f0, f1
      stfs      f0, 0x208(r3)

    .loc_0x68:
      lwz       r3, 0x4(r31)
      lwz       r4, -0x6514(r13)
      lwz       r12, 0x0(r3)
      lfs       f1, 0x54(r4)
      lwz       r12, 0x1D0(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x20(r31)
      cmplwi    r0, 0
      beq-      .loc_0xAC
      lwz       r3, 0x4(r31)
      lfs       f0, -0x5400(r2)
      lfs       f1, 0x108(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xCC
      li        r3, 0
      b         .loc_0xD0

    .loc_0xAC:
      lwz       r3, 0x4(r31)
      lfs       f0, -0x53FC(r2)
      lfs       f1, 0x108(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xCC
      li        r3, 0
      b         .loc_0xD0

    .loc_0xCC:
      li        r3, 0x1

    .loc_0xD0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C99C
 * Size:	000004
 */
void PikiAI::ActClimb::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C9A0
 * Size:	00003C
 */
void PikiAI::ActGather::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x5F9C
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x4B10
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019C9DC
 * Size:	0000E0
 */
void PikiAI::ActGather::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      lis       r4, 0x8048
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r30
      subi      r31, r4, 0xF90
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r31, 0xE8
      bl        -0xD2360
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x68
      addi      r3, r31, 0x34
      addi      r5, r31, 0x48
      li        r4, 0xA6D
      crclr     6, 0x6
      bl        -0x172400

    .loc_0x68:
      lfs       f0, 0x4(r30)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      stfs      f0, 0xC(r29)
      li        r7, 0
      lfs       f0, 0x8(r30)
      stfs      f0, 0x10(r29)
      lfs       f0, 0xC(r30)
      stfs      f0, 0x14(r29)
      lfs       f0, 0x10(r30)
      stfs      f0, 0x18(r29)
      lwz       r3, 0x4(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lfs       f1, -0x5384(r2)
      lfs       f0, -0x5380(r2)
      stfs      f1, 0x1C(r29)
      lfs       f1, 0x18(r29)
      fmuls     f0, f1, f0
      stfs      f0, 0x18(r29)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CABC
 * Size:	000154
 */
void PikiAI::ActGather::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x10(r31)
      lfs       f2, 0xC(r1)
      lfs       f1, 0xC(r31)
      lfs       f0, 0x8(r1)
      fsubs     f4, f3, f2
      lfs       f3, 0x14(r31)
      fsubs     f2, f1, f0
      lfs       f0, 0x10(r1)
      fmuls     f5, f4, f4
      lfs       f1, -0x5400(r2)
      fsubs     f3, f3, f0
      stfs      f4, 0x18(r1)
      fmuls     f0, f2, f2
      stfs      f2, 0x14(r1)
      fmuls     f4, f3, f3
      stfs      f3, 0x1C(r1)
      fadds     f0, f0, f5
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x98
      fmadds    f0, f2, f2, f5
      fadds     f4, f4, f0
      fcmpo     cr0, f4, f1
      ble-      .loc_0x9C
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0x9C

    .loc_0x98:
      fmr       f4, f1

    .loc_0x9C:
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0xD8
      lfs       f0, -0x53FC(r2)
      lfs       f2, 0x14(r1)
      fdivs     f3, f0, f4
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      b         .loc_0xDC

    .loc_0xD8:
      fmr       f4, f0

    .loc_0xDC:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x1C(r31)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x1C(r31)
      lfs       f0, 0x18(r31)
      fcmpo     cr0, f4, f0
      blt-      .loc_0x110
      lfs       f1, 0x1C(r31)
      lfs       f0, -0x5400(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x12C

    .loc_0x110:
      lwz       r4, 0x4(r31)
      li        r3, 0
      lfs       f0, -0x5400(r2)
      stfs      f0, 0x1E4(r4)
      stfs      f0, 0x1E8(r4)
      stfs      f0, 0x1EC(r4)
      b         .loc_0x140

    .loc_0x12C:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x14
      lfs       f1, -0x5380(r2)
      bl        -0x53BDC
      li        r3, 0x1

    .loc_0x140:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CC10
 * Size:	000004
 */
void PikiAI::ActGather::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CC14
 * Size:	00003C
 */
void PikiAI::ActFollowVectorField::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x6210
      lis       r4, 0x804B
      mr        r3, r31
      addi      r0, r4, 0x4AD4
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CC50
 * Size:	000060
 */
void PikiAI::ActFollowVectorField::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1E
      li        r6, 0
      stw       r0, 0x14(r1)
      li        r7, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1E
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      stw       r0, 0xC(r30)
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
 * Address:	8019CCB0
 * Size:	000080
 */
void PikiAI::ActFollowVectorField::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      addi      r4, r1, 0x14
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r31)
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x204(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x58
      li        r3, 0x2
      b         .loc_0x6C

    .loc_0x58:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x8
      lfs       f1, -0x53FC(r2)
      bl        -0x53CFC
      li        r3, 0x1

    .loc_0x6C:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CD30
 * Size:	000004
 */
void PikiAI::ActFollowVectorField::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CD34
 * Size:	000028
 */
void __sinit_aiPrimitives_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804B
      stw       r0, -0x6CA0(r13)
      stfsu     f0, 0x4AA8(r3)
      stfs      f0, -0x6C9C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8019CD5C
 * Size:	000014
 */
void @36 @4 @PikiAI::ActStickAttack::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x24
      b         -0x694
    */
}
