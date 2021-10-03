

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
 * Address:	801A2720
 * Size:	0000D0
 */
void PikiAI::ActEnter::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r5
      beq-      .loc_0x38
      addi      r0, r31, 0x60
      lis       r3, 0x804B
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x60(r31)

    .loc_0x38:
      mr        r3, r31
      mr        r4, r30
      bl        -0xBD48
      lis       r3, 0x804B
      addi      r0, r31, 0x60
      addi      r4, r3, 0x4FBC
      li        r3, 0x1C
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x40
      lwz       r4, 0xC(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0xC(r31)
      sub       r0, r0, r4
      stw       r0, 0x4(r4)
      bl        -0x17E8EC
      mr.       r0, r3
      beq-      .loc_0x88
      mr        r4, r30
      bl        -0xB4C4
      mr        r0, r3

    .loc_0x88:
      stw       r0, 0x14(r31)
      li        r3, 0x24
      bl        -0x17E90C
      mr.       r0, r3
      beq-      .loc_0xA8
      mr        r4, r30
      bl        -0x6044
      mr        r0, r3

    .loc_0xA8:
      stw       r0, 0x18(r31)
      subi      r0, r2, 0x5250
      mr        r3, r31
      stw       r0, 0x8(r31)
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
 * Address:	801A27F0
 * Size:	000338
 */
void PikiAI::ActEnter::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xC0(r1)
      mflr      r0
      stw       r0, 0xC4(r1)
      stfd      f31, 0xB0(r1)
      psq_st    f31,0xB8(r1),0,0
      stfd      f30, 0xA0(r1)
      psq_st    f30,0xA8(r1),0,0
      stfd      f29, 0x90(r1)
      psq_st    f29,0x98(r1),0,0
      stfd      f28, 0x80(r1)
      psq_st    f28,0x88(r1),0,0
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      stw       r29, 0x74(r1)
      li        r0, 0
      mr        r30, r3
      stw       r0, 0x1C(r3)
      mr        r31, r4
      stw       r0, 0x20(r3)
      lwz       r3, 0x4(r4)
      lhz       r3, 0x128(r3)
      cmplwi    r3, 0x402
      beq-      .loc_0x64
      cmplwi    r3, 0x403
      bne-      .loc_0x68

    .loc_0x64:
      li        r0, 0x1

    .loc_0x68:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x8C
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xC40
      li        r4, 0x77
      subi      r5, r5, 0xC34
      crclr     6, 0x6
      bl        -0x178238

    .loc_0x8C:
      lwz       r3, 0x4(r30)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r30)
      lfs       f0, -0x5248(r2)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      lwz       r0, 0x4(r31)
      stw       r0, 0x24(r30)
      lwz       r4, 0x24(r30)
      lhz       r0, 0x22E(r4)
      cmplwi    r0, 0x4
      bne-      .loc_0x23C
      addi      r3, r1, 0x8
      bl        -0x2898C
      lfs       f31, 0x8(r1)
      lfs       f30, 0xC(r1)
      lfs       f29, 0x10(r1)
      bl        -0xD9340
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x44(r1)
      lfd       f3, -0x5220(r2)
      stw       r0, 0x40(r1)
      lfs       f1, -0x5244(r2)
      lfd       f2, 0x40(r1)
      lfs       f0, -0x5240(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f28, f0, f1
      bl        -0xD9370
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x4C(r1)
      lfd       f3, -0x5220(r2)
      stw       r0, 0x48(r1)
      lfs       f2, -0x5244(r2)
      lfd       f0, 0x48(r1)
      lfs       f1, -0x523C(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x5248(r2)
      fdivs     f2, f3, f2
      fmuls     f3, f1, f2
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x164
      fneg      f1, f3

    .loc_0x164:
      lfs       f2, -0x5238(r2)
      lis       r3, 0x8050
      lfs       f0, -0x5248(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x50(r1)
      lwz       r0, 0x54(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f1, f28, f0
      bge-      .loc_0x1C0
      lfs       f0, -0x5234(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x58(r1)
      lwz       r0, 0x5C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x1D8

    .loc_0x1C0:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x60(r1)
      lwz       r0, 0x64(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x1D8:
      fmuls     f3, f28, f0
      lfs       f0, -0x5248(r2)
      lis       r3, 0x804B
      fadds     f1, f29, f1
      addi      r0, r3, 0x530
      fadds     f2, f30, f0
      fadds     f3, f31, f3
      lfs       f0, -0x5230(r2)
      lis       r3, 0x804B
      stw       r0, 0x28(r1)
      addi      r0, r3, 0x4FB0
      addi      r4, r1, 0x28
      stw       r0, 0x28(r1)
      stfs      f3, 0x2C(r1)
      stfs      f2, 0x30(r1)
      stfs      f1, 0x34(r1)
      stfs      f0, 0x38(r1)
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0x2
      sth       r0, 0x10(r30)
      b         .loc_0x2FC

    .loc_0x23C:
      bl        -0xD948C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x64(r1)
      lfd       f3, -0x5220(r2)
      stw       r0, 0x60(r1)
      lfs       f1, -0x5244(r2)
      lfd       f2, 0x60(r1)
      lfs       f0, -0x522C(r2)
      fsubs     f2, f2, f3
      lwz       r3, 0x4(r31)
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x58(r1)
      lwz       r29, 0x5C(r1)
      mr        r4, r29
      bl        -0x29EB8
      stw       r3, 0x1C(r30)
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f0, -0x5228(r2)
      lwz       r6, 0x1C(r30)
      addi      r5, r4, 0x530
      addi      r0, r3, 0x4FB0
      mr        r4, r29
      stw       r6, 0x20(r30)
      lwz       r3, 0x1C(r30)
      stw       r5, 0x14(r1)
      stw       r0, 0x14(r1)
      lfs       f1, 0x4C(r3)
      stfs      f1, 0x18(r1)
      lfs       f1, 0x50(r3)
      stfs      f1, 0x1C(r1)
      lfs       f1, 0x54(r3)
      stfs      f1, 0x20(r1)
      stfs      f0, 0x24(r1)
      lwz       r3, 0x4(r31)
      bl        -0x29FAC
      stw       r3, 0x1C(r30)
      addi      r4, r1, 0x14
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      sth       r0, 0x10(r30)

    .loc_0x2FC:
      psq_l     f31,0xB8(r1),0,0
      lfd       f31, 0xB0(r1)
      psq_l     f30,0xA8(r1),0,0
      lfd       f30, 0xA0(r1)
      psq_l     f29,0x98(r1),0,0
      lfd       f29, 0x90(r1)
      psq_l     f28,0x88(r1),0,0
      lfd       f28, 0x80(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      lwz       r0, 0xC4(r1)
      lwz       r29, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A2B28
 * Size:	000240
 */
void PikiAI::ActEnter::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r3
      lhz       r0, 0x10(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x1C8
      bge-      .loc_0x40
      cmpwi     r0, 0
      beq-      .loc_0x50
      bge-      .loc_0x13C
      b         .loc_0x21C

    .loc_0x40:
      cmpwi     r0, 0x4
      beq-      .loc_0x1F8
      bge-      .loc_0x21C
      b         .loc_0x218

    .loc_0x50:
      lwz       r4, 0x20(r30)
      cmplwi    r4, 0
      beq-      .loc_0x78
      lwz       r3, 0x14(r30)
      lfs       f0, 0x4C(r4)
      stfs      f0, 0x10(r3)
      lfs       f0, 0x50(r4)
      stfs      f0, 0x14(r3)
      lfs       f0, 0x54(r4)
      stfs      f0, 0x18(r3)

    .loc_0x78:
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x21C
      lwz       r4, 0x1C(r30)
      lis       r3, 0x804B
      addi      r0, r3, 0x530
      lfs       f0, -0x5218(r2)
      lis       r3, 0x804B
      stw       r0, 0x20(r1)
      addi      r3, r3, 0x4FA4
      li        r0, 0x1
      stw       r3, 0x20(r1)
      addi      r3, r1, 0x14
      stw       r4, 0x24(r1)
      stfs      f0, 0x28(r1)
      stb       r0, 0x2C(r1)
      lwz       r4, 0x4(r30)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r30)
      lwz       r4, 0x24(r30)
      lwz       r5, 0x1C(r30)
      bl        -0x3D1C
      lwz       r4, 0x4(r30)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x18(r30)
      addi      r4, r1, 0x20
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      li        r5, 0x2815
      sth       r0, 0x10(r30)
      li        r6, 0x1
      lwz       r3, 0x4(r30)
      lwz       r4, 0x24(r30)
      bl        -0x5A308
      b         .loc_0x21C

    .loc_0x13C:
      lwz       r3, 0x18(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x4(r30)
      mr        r31, r3
      lfs       f0, -0x5214(r2)
      lfs       f31, 0x108(r4)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x190
      fdivs     f31, f31, f0
      mr        r3, r4
      bl        -0x58700
      fmuls     f0, f31, f1
      stfs      f0, 0x5C(r30)
      lfs       f0, 0x5C(r30)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x168(r3)
      stfs      f0, 0x16C(r3)
      stfs      f0, 0x170(r3)

    .loc_0x190:
      cmpwi     r31, 0
      bne-      .loc_0x21C
      lwz       r3, 0x4(r30)
      bl        -0x38A0
      lwz       r3, 0x4(r30)
      li        r5, 0x281D
      lwz       r4, 0x24(r30)
      li        r6, 0x1
      bl        -0x5A384
      lwz       r3, 0x24(r30)
      lwz       r4, 0x4(r30)
      bl        -0x2971C
      li        r3, 0
      b         .loc_0x220

    .loc_0x1C8:
      lwz       r3, 0x14(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x21C
      li        r0, 0x3
      mr        r3, r30
      sth       r0, 0x10(r30)
      bl        0xBC
      b         .loc_0x21C

    .loc_0x1F8:
      bl        0x330
      cmpwi     r3, 0
      bne-      .loc_0x21C
      lwz       r3, 0x24(r30)
      lwz       r4, 0x4(r30)
      bl        -0x2976C
      li        r3, 0
      b         .loc_0x220

    .loc_0x218:
      bl        0x10C

    .loc_0x21C:
      li        r3, 0x1

    .loc_0x220:
      psq_l     f31,0x48(r1),0,0
      lwz       r0, 0x54(r1)
      lfd       f31, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	801A2D68
 * Size:	000068
 */
void PikiAI::ActEnter::cleanup(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x4(r3)
      bl        -0x395C
      lwz       r3, 0x4(r31)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r31)
      bl        -0x58808
      stfs      f1, 0x5C(r31)
      lfs       f0, 0x5C(r31)
      lwz       r3, 0x4(r31)
      stfs      f0, 0x168(r3)
      stfs      f0, 0x16C(r3)
      stfs      f0, 0x170(r3)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A2DD0
 * Size:	000004
 */
void PikiAI::ActEnter::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A2DD4
 * Size:	000078
 */
void PikiAI::ActEnter::initStay(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f0, -0x5210(r2)
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      stfs      f0, 0x40(r31)
      lwz       r4, 0x24(r31)
      bl        -0x28F78
      lfs       f2, 0x8(r1)
      addi      r4, r1, 0x14
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r3, 0x4(r31)
      bl        -0x65248
      lwz       r3, 0x4(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801A2E4C
 * Size:	000064
 */
void PikiAI::ActEnter::execStay(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x5248(r2)
      stw       r0, 0x14(r1)
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x40(r3)
      lfs       f0, 0x54(r4)
      fsubs     f0, f2, f0
      stfs      f0, 0x40(r3)
      lwz       r4, 0x4(r3)
      stfs      f1, 0x1E4(r4)
      stfs      f1, 0x1E8(r4)
      stfs      f1, 0x1EC(r4)
      lfs       f0, 0x40(r3)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x50
      li        r0, 0x4
      sth       r0, 0x10(r3)
      bl        .loc_0x64

    .loc_0x50:
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x64:
    */
}

/*
 * --INFO--
 * Address:	801A2EB0
 * Size:	0001A0
 */
void PikiAI::ActEnter::initSuck(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r3, r1, 0x14
      lwz       r4, 0x24(r31)
      bl        -0x2904C
      lfs       f1, 0x14(r1)
      addi      r3, r1, 0x8
      lfs       f0, -0x522C(r2)
      stfs      f1, 0x28(r31)
      lfs       f1, 0x18(r1)
      stfs      f1, 0x2C(r31)
      lfs       f1, 0x1C(r1)
      stfs      f1, 0x30(r31)
      lfs       f1, 0x2C(r31)
      fsubs     f0, f1, f0
      stfs      f0, 0x2C(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x28(r31)
      lfs       f1, 0x8(r1)
      lfs       f0, 0xC(r1)
      lfs       f3, 0x2C(r31)
      fsubs     f1, f2, f1
      lfs       f5, 0x30(r31)
      lfs       f4, 0x10(r1)
      fsubs     f3, f3, f0
      lfs       f2, -0x5248(r2)
      stfs      f1, 0x34(r31)
      fsubs     f1, f5, f4
      stfs      f3, 0x38(r31)
      stfs      f1, 0x3C(r31)
      stfs      f2, 0x38(r31)
      lfs       f4, 0x34(r31)
      lfs       f3, 0x38(r31)
      lfs       f5, 0x3C(r31)
      fmuls     f1, f4, f4
      fmuls     f3, f3, f3
      fmuls     f5, f5, f5
      fadds     f1, f1, f3
      fadds     f1, f5, f1
      fcmpo     cr0, f1, f2
      ble-      .loc_0xDC
      fmadds    f1, f4, f4, f3
      fadds     f3, f5, f1
      fcmpo     cr0, f3, f2
      ble-      .loc_0xE0
      fsqrte    f1, f3
      fmuls     f3, f1, f3
      b         .loc_0xE0

    .loc_0xDC:
      fmr       f3, f2

    .loc_0xE0:
      lfs       f1, -0x5248(r2)
      fcmpo     cr0, f3, f1
      ble-      .loc_0x11C
      lfs       f2, -0x520C(r2)
      lfs       f1, 0x34(r31)
      fdivs     f2, f2, f3
      fmuls     f1, f1, f2
      stfs      f1, 0x34(r31)
      lfs       f1, 0x38(r31)
      fmuls     f1, f1, f2
      stfs      f1, 0x38(r31)
      lfs       f1, 0x3C(r31)
      fmuls     f1, f1, f2
      stfs      f1, 0x3C(r31)
      b         .loc_0x120

    .loc_0x11C:
      fmr       f3, f1

    .loc_0x120:
      stfs      f3, 0x48(r31)
      li        r0, 0
      lfs       f1, -0x520C(r2)
      li        r4, 0x281F
      lfs       f2, 0x2C(r31)
      li        r5, 0x1
      fsubs     f2, f2, f0
      fabs      f2, f2
      frsp      f2, f2
      stfs      f2, 0x44(r31)
      stfs      f0, 0x2C(r31)
      lfs       f0, 0x48(r31)
      fneg      f0, f0
      stfs      f0, 0x40(r31)
      stb       r0, 0x4C(r31)
      stfs      f1, 0x5C(r31)
      lwz       r3, 0x4(r31)
      bl        -0x5A748
      lwz       r3, 0x4(r31)
      li        r4, 0x23
      li        r5, 0x23
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3050
 * Size:	00018C
 */
void PikiAI::ActEnter::execSuck(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lbz       r0, 0x4C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x38
      lwz       r3, 0x4(r31)
      addi      r4, r31, 0x50
      li        r5, 0
      bl        -0x67ED4
      li        r3, 0
      b         .loc_0x178

    .loc_0x38:
      lfs       f9, 0x44(r31)
      addi      r4, r1, 0x8
      lfs       f0, 0x48(r31)
      li        r5, 0
      fneg      f1, f9
      lfs       f8, 0x40(r31)
      fmuls     f0, f0, f0
      lfs       f2, 0x38(r31)
      lfs       f4, 0x3C(r31)
      fmuls     f6, f8, f8
      fdivs     f7, f1, f0
      lfs       f0, 0x34(r31)
      lfs       f3, 0x2C(r31)
      lfs       f5, 0x30(r31)
      lfs       f1, 0x28(r31)
      fmuls     f2, f2, f8
      fmuls     f4, f4, f8
      fmuls     f0, f0, f8
      fadds     f2, f3, f2
      fmadds    f6, f7, f6, f9
      fadds     f3, f5, f4
      fadds     f1, f1, f0
      stfs      f2, 0xC(r1)
      fadds     f0, f2, f6
      stfs      f3, 0x10(r1)
      stfs      f1, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r3, 0x4(r31)
      bl        -0x67F50
      lfs       f0, 0x5C(r31)
      lwz       r3, 0x4(r31)
      lfs       f3, -0x5208(r2)
      stfs      f0, 0x168(r3)
      lfs       f2, -0x5248(r2)
      stfs      f0, 0x16C(r3)
      stfs      f0, 0x170(r3)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x40(r31)
      lfs       f1, 0x54(r3)
      fmadds    f0, f3, f1, f0
      stfs      f0, 0x40(r31)
      lfs       f0, 0x40(r31)
      fcmpo     cr0, f0, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0x124
      li        r0, 0x1
      li        r4, 0x281D
      stb       r0, 0x4C(r31)
      li        r5, 0x1
      lfs       f0, 0x8(r1)
      stfs      f0, 0x50(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x54(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x58(r31)
      lwz       r3, 0x4(r31)
      bl        -0x5A89C
      li        r3, 0
      b         .loc_0x178

    .loc_0x124:
      fneg      f1, f0
      lfs       f0, 0x48(r31)
      fdivs     f1, f1, f0
      fcmpo     cr0, f1, f2
      bge-      .loc_0x13C
      fmr       f1, f2

    .loc_0x13C:
      lfs       f0, -0x5248(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x15C
      ble-      .loc_0x158
      fsqrte    f0, f1
      fmuls     f0, f0, f1
      b         .loc_0x15C

    .loc_0x158:
      fmr       f0, f1

    .loc_0x15C:
      stfs      f0, 0x5C(r31)
      lfs       f0, -0x5204(r2)
      lfs       f1, 0x5C(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x174
      stfs      f0, 0x5C(r31)

    .loc_0x174:
      li        r3, 0x1

    .loc_0x178:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801A31DC
 * Size:	000070
 */
void PikiAI::ActExit::__ct((Game::Piki*))
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
      bl        -0xC7E0
      lis       r4, 0x804B
      li        r3, 0x24
      addi      r0, r4, 0x4F68
      stw       r0, 0x0(r30)
      bl        -0x17F368
      mr.       r0, r3
      beq-      .loc_0x48
      mr        r4, r31
      bl        -0x6AA0
      mr        r0, r3

    .loc_0x48:
      stw       r0, 0xC(r30)
      subi      r0, r2, 0x5200
      mr        r3, r30
      stw       r0, 0x8(r30)
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
 * Address:	801A324C
 * Size:	000204
 */
void PikiAI::ActExit::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      lwz       r3, 0x4(r4)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x402
      beq-      .loc_0x48
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xC40
      li        r4, 0x205
      subi      r5, r5, 0xC34
      crclr     6, 0x6
      bl        -0x178C50

    .loc_0x48:
      lwz       r3, 0x4(r30)
      li        r4, 0x1E
      li        r5, 0x1E
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r30)
      lfs       f0, -0x5248(r2)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      bl        -0xD9D2C
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0x1C(r1)
      lwz       r0, 0x4(r31)
      stw       r3, 0x18(r1)
      lfd       f2, -0x5220(r2)
      lfd       f0, 0x18(r1)
      lfs       f1, -0x5244(r2)
      fsubs     f2, f0, f2
      stw       r0, 0x14(r30)
      lfs       f0, -0x522C(r2)
      lwz       r3, 0x4(r31)
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r4, 0x24(r1)
      bl        -0x2A7FC
      stw       r3, 0x10(r30)
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f0, -0x51F8(r2)
      lwz       r6, 0x10(r30)
      addi      r4, r4, 0x530
      li        r0, 0
      addi      r3, r3, 0x4FA4
      stw       r4, 0x8(r1)
      addi      r4, r6, 0x4C
      li        r5, 0
      stw       r3, 0x8(r1)
      stw       r6, 0xC(r1)
      stfs      f0, 0x10(r1)
      stb       r0, 0x14(r1)
      lwz       r3, 0x4(r30)
      bl        -0x681B0
      lwz       r3, 0x4(r30)
      lwz       r4, 0x14(r30)
      lwz       r5, 0x10(r30)
      bl        -0x4474
      lwz       r3, 0xC(r30)
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r30)
      li        r5, 0x281E
      lwz       r4, 0x4(r31)
      li        r6, 0x1
      bl        -0x5AA40
      lis       r3, 0x8051
      lwz       r4, 0x4(r30)
      lfsu      f1, 0x41E4(r3)
      lfs       f0, -0x5248(r2)
      stfs      f1, 0x168(r4)
      lfs       f1, 0x4(r3)
      stfs      f1, 0x16C(r4)
      lfs       f1, 0x8(r3)
      stfs      f1, 0x170(r4)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x138(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x13C(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x140(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x148(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x14C(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x150(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x158(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x15C(r3)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x160(r3)
      lwz       r3, 0x4(r30)
      lwz       r4, 0x174(r3)
      addi      r3, r3, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0xB914C
      lwz       r3, 0x4(r30)
      lwz       r3, 0x174(r3)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801A3450
 * Size:	0000A8
 */
void PikiAI::ActExit::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0xC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x4(r30)
      mr        r31, r3
      lfs       f0, -0x5214(r2)
      lfs       f31, 0x108(r4)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x74
      fdivs     f31, f31, f0
      mr        r3, r4
      bl        -0x58F0C
      fmuls     f0, f31, f1
      stfs      f0, 0x18(r30)
      lfs       f0, 0x18(r30)
      lwz       r3, 0x4(r30)
      stfs      f0, 0x168(r3)
      stfs      f0, 0x16C(r3)
      stfs      f0, 0x170(r3)

    .loc_0x74:
      cmpwi     r31, 0
      bne-      .loc_0x84
      li        r3, 0
      b         .loc_0x88

    .loc_0x84:
      li        r3, 0x1

    .loc_0x88:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801A34F8
 * Size:	0000C8
 */
void PikiAI::ActExit::cleanup(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0x4(r3)
      lfs       f31, 0x108(r3)
      bl        -0x58F84
      stfs      f1, 0x18(r31)
      lfs       f0, 0x18(r31)
      lwz       r3, 0x4(r31)
      stfs      f0, 0x168(r3)
      stfs      f0, 0x16C(r3)
      stfs      f0, 0x170(r3)
      lwz       r3, 0x4(r31)
      bl        -0x4118
      lwz       r3, 0x4(r31)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      bl        -0xD9FB8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f1, -0x5220(r2)
      stw       r0, 0x8(r1)
      lfs       f3, -0x5244(r2)
      lfd       f0, 0x8(r1)
      lfs       f2, -0x51F0(r2)
      fsubs     f4, f0, f1
      lfs       f1, -0x51F4(r2)
      lwz       r3, 0x4(r31)
      lfs       f0, -0x5248(r2)
      fdivs     f3, f4, f3
      stfs      f0, 0x200(r3)
      fmadds    f1, f2, f3, f1
      fmuls     f1, f1, f31
      stfs      f1, 0x204(r3)
      stfs      f0, 0x208(r3)
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801A35C0
 * Size:	00000C
 */
void PikiAI::ClimbActionArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0xC28
      blr
    */
}

/*
 * --INFO--
 * Address:	801A35CC
 * Size:	00000C
 */
void PikiAI::GotoPosActionArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0xC18
      blr
    */
}

/*
 * --INFO--
 * Address:	801A35D8
 * Size:	000014
 */
void @96 @4 @PikiAI::ActEnter::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x60
      b         -0x818
    */
}
