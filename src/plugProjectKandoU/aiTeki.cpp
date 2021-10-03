

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021295C
 * Size:	000090
 */
void PikiAI::ActTeki::__ct((Game::Piki*))
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
      addi      r0, r31, 0x48
      lis       r3, 0x804B
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x48(r31)

    .loc_0x30:
      mr        r3, r31
      mr        r4, r5
      bl        -0x7BF7C
      lis       r3, 0x804C
      addi      r5, r31, 0x48
      addi      r3, r3, 0x488
      subi      r4, r2, 0x43F8
      stw       r3, 0x0(r31)
      addi      r7, r3, 0x40
      li        r0, 0
      mr        r3, r31
      lwz       r6, 0xC(r31)
      stw       r7, 0x0(r6)
      lwz       r6, 0xC(r31)
      sub       r5, r5, r6
      stw       r5, 0x4(r6)
      stw       r4, 0x8(r31)
      stw       r0, 0x10(r31)
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
 * Address:	802129EC
 * Size:	00010C
 */
void PikiAI::ActTeki::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x2138
      li        r4, 0x5B
      addi      r5, r5, 0x2144
      crclr     6, 0x6
      bl        -0x1E83E4

    .loc_0x3C:
      lwz       r0, 0x4(r31)
      li        r4, 0
      lfs       f0, -0x43F0(r2)
      li        r3, 0x1
      stw       r0, 0x10(r30)
      li        r0, -0x1
      stfs      f0, 0x2C(r30)
      stfs      f0, 0x30(r30)
      stfs      f0, 0x34(r30)
      stfs      f0, 0x38(r30)
      stfs      f0, 0x3C(r30)
      stfs      f0, 0x40(r30)
      stfs      f0, 0x44(r30)
      stw       r4, 0x18(r30)
      stfs      f0, 0x20(r30)
      stw       r3, 0x28(r30)
      stw       r0, 0x1C(r30)
      stfs      f0, 0x24(r30)
      stb       r4, 0x14(r30)
      lwz       r3, 0x10(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC8
      lwz       r3, 0x10(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x43
      bne-      .loc_0xC8
      li        r0, 0x1
      stb       r0, 0x14(r30)

    .loc_0xC8:
      li        r0, 0
      li        r4, 0x1E
      stb       r0, 0x15(r30)
      li        r5, 0x1E
      li        r6, 0
      li        r7, 0
      lwz       r3, 0x4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
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
 * Address:	80212AF8
 * Size:	000178
 */
void PikiAI::ActTeki::exec(void)
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
      bne-      .loc_0xA0
      lbz       r0, 0x14(r31)
      cmplwi    r0, 0
      beq-      .loc_0x60
      li        r0, 0
      stb       r0, 0x14(r31)
      lbz       r0, -0x7B93(r13)
      cmplwi    r0, 0
      bne-      .loc_0x60
      lis       r3, 0x8051
      lwz       r4, 0x4(r31)
      addi      r3, r3, 0x25EC
      bl        -0x41AC0

    .loc_0x60:
      lwz       r3, 0x4(r31)
      bl        -0xC9C28
      cmpwi     r3, 0x15
      beq-      .loc_0x98
      li        r0, 0x3
      addi      r6, r1, 0x8
      sth       r0, 0x8(r1)
      li        r5, 0x15
      lwz       r4, 0x4(r31)
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x98:
      li        r3, 0x1
      b         .loc_0x164

    .loc_0xA0:
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xCC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xCC
      li        r0, 0x1
      li        r3, 0
      stb       r0, 0x15(r31)
      b         .loc_0x164

    .loc_0xCC:
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x120
      lwz       r3, 0x10(r31)
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x120
      lwz       r12, 0x0(r3)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x29
      bne-      .loc_0x120
      li        r0, 0x1
      li        r3, 0
      stb       r0, 0x15(r31)
      b         .loc_0x164

    .loc_0x120:
      lwz       r5, 0x4(r31)
      lis       r3, 0x804B
      subi      r0, r3, 0x5D00
      lis       r3, 0x804D
      stw       r0, 0xC(r1)
      subi      r0, r3, 0x39FC
      addi      r4, r1, 0xC
      stw       r5, 0x10(r1)
      stw       r0, 0xC(r1)
      lwz       r3, 0x10(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x380
      li        r3, 0x1

    .loc_0x164:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80212C70
 * Size:	000050
 */
void PikiAI::ActTeki::emotion_success(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, 0x15(r3)
      cmplwi    r0, 0
      beq-      .loc_0x40
      li        r0, 0x2
      addi      r6, r1, 0x8
      sth       r0, 0x8(r1)
      li        r5, 0x13
      lwz       r4, 0x4(r3)
      lwz       r3, 0x28C(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x40:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80212CC0
 * Size:	000314
 */
void PikiAI::ActTeki::makeTarget(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      stw       r0, 0xE4(r1)
      stfd      f31, 0xD0(r1)
      psq_st    f31,0xD8(r1),0,0
      stfd      f30, 0xC0(r1)
      psq_st    f30,0xC8(r1),0,0
      stfd      f29, 0xB0(r1)
      psq_st    f29,0xB8(r1),0,0
      stfd      f28, 0xA0(r1)
      psq_st    f28,0xA8(r1),0,0
      stfd      f27, 0x90(r1)
      psq_st    f27,0x98(r1),0,0
      stfd      f26, 0x80(r1)
      psq_st    f26,0x88(r1),0,0
      stfd      f25, 0x70(r1)
      psq_st    f25,0x78(r1),0,0
      stfd      f24, 0x60(r1)
      psq_st    f24,0x68(r1),0,0
      stfd      f23, 0x50(r1)
      psq_st    f23,0x58(r1),0,0
      stfd      f22, 0x40(r1)
      psq_st    f22,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r29, r3
      addi      r3, r1, 0x14
      lwz       r4, 0x4(r29)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x10(r29)
      addi      r3, r1, 0x8
      lfs       f30, 0x14(r1)
      lwz       r12, 0x0(r4)
      lfs       f29, 0x18(r1)
      lwz       r12, 0x8(r12)
      lfs       f28, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f27, 0xC(r1)
      lfs       f25, 0x8(r1)
      fsubs     f2, f27, f29
      lfs       f26, 0x10(r1)
      fsubs     f1, f25, f30
      lfs       f0, -0x43F0(r2)
      fsubs     f3, f26, f28
      fmuls     f2, f2, f2
      fmuls     f3, f3, f3
      fmadds    f1, f1, f1, f2
      fadds     f31, f3, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0xEC
      ble-      .loc_0xF0
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0xF0

    .loc_0xEC:
      fmr       f31, f0

    .loc_0xF0:
      lfs       f0, -0x43F0(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x100
      b         .loc_0x104

    .loc_0x100:
      fmr       f31, f0

    .loc_0x104:
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x154(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      beq-      .loc_0x2A8
      lwz       r3, 0x18(r29)
      lfs       f24, -0x43EC(r2)
      cmplwi    r3, 0
      beq-      .loc_0x17C
      lfs       f0, 0x4(r3)
      lfs       f2, 0x8(r3)
      fsubs     f3, f27, f0
      lfs       f1, 0x0(r3)
      fsubs     f2, f26, f2
      lfs       f0, -0x43F0(r2)
      fsubs     f1, f25, f1
      fmuls     f3, f3, f3
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x174
      ble-      .loc_0x178
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x178

    .loc_0x174:
      fmr       f1, f0

    .loc_0x178:
      fmr       f24, f1

    .loc_0x17C:
      mr        r3, r31
      li        r4, 0
      bl        -0x5E4D8
      lfs       f22, -0x43F0(r2)
      stw       r3, 0x18(r29)
      fmr       f23, f22
      lwz       r3, 0x8(r31)
      subi      r30, r3, 0x1
      b         .loc_0x240

    .loc_0x1A0:
      mr        r3, r31
      mr        r4, r30
      bl        -0x5E4FC
      lfs       f4, 0x4(r3)
      lfs       f3, 0x8(r3)
      fsubs     f1, f4, f29
      lfs       f5, 0x0(r3)
      fsubs     f2, f3, f28
      fsubs     f0, f5, f30
      fmuls     f1, f1, f1
      fmuls     f6, f2, f2
      fsubs     f3, f26, f3
      fmadds    f0, f0, f0, f1
      fsubs     f2, f27, f4
      fsubs     f1, f25, f5
      fadds     f0, f6, f0
      fcmpo     cr0, f0, f22
      fmuls     f0, f2, f2
      fmuls     f2, f3, f3
      fmadds    f0, f1, f1, f0
      fadds     f1, f2, f0
      fcmpo     cr0, f1, f22
      ble-      .loc_0x20C
      ble-      .loc_0x210
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x210

    .loc_0x20C:
      fmr       f1, f22

    .loc_0x210:
      fcmpo     cr0, f1, f23
      ble-      .loc_0x21C
      b         .loc_0x220

    .loc_0x21C:
      fmr       f1, f23

    .loc_0x220:
      fcmpo     cr0, f24, f1
      ble-      .loc_0x23C
      lfs       f0, -0x43E8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x23C
      stw       r3, 0x18(r29)
      b         .loc_0x248

    .loc_0x23C:
      subi      r30, r30, 0x1

    .loc_0x240:
      cmpwi     r30, 0
      bge+      .loc_0x1A0

    .loc_0x248:
      lwz       r0, 0x18(r29)
      cmplwi    r0, 0
      beq-      .loc_0x2A8
      lfs       f0, -0x43E8(r2)
      li        r0, 0
      stw       r0, 0x28(r29)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x274
      lfs       f0, -0x43E4(r2)
      stfs      f0, 0x24(r29)
      b         .loc_0x2A8

    .loc_0x274:
      bl        -0x149994
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, -0x43D8(r2)
      stw       r0, 0x20(r1)
      lfs       f1, -0x43E0(r2)
      lfd       f2, 0x20(r1)
      lfs       f0, -0x43DC(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmadds    f0, f0, f1, f0
      stfs      f0, 0x24(r29)

    .loc_0x2A8:
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      psq_l     f29,0xB8(r1),0,0
      lfd       f29, 0xB0(r1)
      psq_l     f28,0xA8(r1),0,0
      lfd       f28, 0xA0(r1)
      psq_l     f27,0x98(r1),0,0
      lfd       f27, 0x90(r1)
      psq_l     f26,0x88(r1),0,0
      lfd       f26, 0x80(r1)
      psq_l     f25,0x78(r1),0,0
      lfd       f25, 0x70(r1)
      psq_l     f24,0x68(r1),0,0
      lfd       f24, 0x60(r1)
      psq_l     f23,0x58(r1),0,0
      lfd       f23, 0x50(r1)
      psq_l     f22,0x48(r1),0,0
      lfd       f22, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r0, 0xE4(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	80212FD4
 * Size:	000344
 */
void PikiAI::ActTeki::test_0(void)
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
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lwz       r0, 0x28(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x48
      bge-      .loc_0x318
      cmpwi     r0, 0
      bge-      .loc_0x11C
      b         .loc_0x318

    .loc_0x48:
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x10(r31)
      addi      r3, r1, 0x20
      lfs       f31, 0x2C(r1)
      lwz       r12, 0x0(r4)
      lfs       f30, 0x30(r1)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x34(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x24(r1)
      lfs       f2, 0x20(r1)
      fsubs     f3, f0, f30
      lfs       f1, 0x28(r1)
      fsubs     f2, f2, f31
      lfs       f0, -0x43F0(r2)
      fsubs     f1, f1, f29
      fmuls     f3, f3, f3
      fmuls     f4, f1, f1
      fmadds    f1, f2, f2, f3
      fadds     f3, f4, f1
      fcmpo     cr0, f3, f0
      ble-      .loc_0xC8
      ble-      .loc_0xCC
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0xCC

    .loc_0xC8:
      fmr       f3, f0

    .loc_0xCC:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x20(r31)
      lfs       f0, 0x54(r3)
      lfs       f1, -0x43F0(r2)
      fsubs     f0, f2, f0
      stfs      f0, 0x20(r31)
      lwz       r3, 0x4(r31)
      stfs      f1, 0x1E4(r3)
      stfs      f1, 0x1E8(r3)
      stfs      f1, 0x1EC(r3)
      lfs       f0, 0x20(r31)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      beq-      .loc_0x110
      lfs       f0, -0x43E8(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x318

    .loc_0x110:
      mr        r3, r31
      bl        -0x428
      b         .loc_0x318

    .loc_0x11C:
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x18(r31)
      lfs       f2, 0x18(r1)
      lfs       f3, 0x4(r3)
      lfs       f1, 0x0(r3)
      lfs       f0, 0x14(r1)
      fsubs     f4, f3, f2
      lfs       f3, 0x8(r3)
      fsubs     f2, f1, f0
      lfs       f0, 0x1C(r1)
      fmuls     f5, f4, f4
      lfs       f1, -0x43F0(r2)
      fsubs     f3, f3, f0
      stfs      f4, 0x3C(r1)
      fmuls     f0, f2, f2
      stfs      f2, 0x38(r1)
      fmuls     f4, f3, f3
      stfs      f3, 0x40(r1)
      fadds     f0, f0, f5
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x1A4
      fmadds    f0, f2, f2, f5
      fadds     f31, f4, f0
      fcmpo     cr0, f31, f1
      ble-      .loc_0x1A8
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x1A8

    .loc_0x1A4:
      fmr       f31, f1

    .loc_0x1A8:
      lfs       f0, -0x43F0(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1E4
      lfs       f0, -0x43E4(r2)
      lfs       f2, 0x38(r1)
      fdivs     f3, f0, f31
      lfs       f1, 0x3C(r1)
      lfs       f0, 0x40(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x38(r1)
      stfs      f1, 0x3C(r1)
      stfs      f0, 0x40(r1)
      b         .loc_0x1E8

    .loc_0x1E4:
      fmr       f31, f0

    .loc_0x1E8:
      lfs       f0, -0x43E8(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x200
      mr        r3, r31
      bl        -0x50C
      b         .loc_0x234

    .loc_0x200:
      lfs       f0, -0x43D0(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x234
      lwz       r4, 0x4(r31)
      li        r0, 0x1
      lfs       f0, -0x43F0(r2)
      mr        r3, r31
      stfs      f0, 0x1E4(r4)
      stfs      f0, 0x1E8(r4)
      stfs      f0, 0x1EC(r4)
      stw       r0, 0x28(r31)
      bl        0x170
      b         .loc_0x318

    .loc_0x234:
      lfs       f0, -0x43D0(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0x308
      lwz       r4, 0x10(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f7, 0xC(r1)
      lfs       f3, 0x10(r1)
      fmuls     f1, f7, f7
      lfs       f8, 0x8(r1)
      fmuls     f2, f3, f3
      lfs       f0, -0x43F0(r2)
      fmadds    f1, f8, f8, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x290
      ble-      .loc_0x294
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x294

    .loc_0x290:
      fmr       f1, f0

    .loc_0x294:
      lfs       f0, -0x43F0(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2B4
      lfs       f0, -0x43E4(r2)
      fdivs     f0, f0, f1
      fmuls     f8, f8, f0
      fmuls     f7, f7, f0
      fmuls     f3, f3, f0

    .loc_0x2B4:
      lfs       f6, -0x43DC(r2)
      addi      r4, r1, 0x38
      lfs       f2, 0x40(r1)
      lfs       f1, 0x3C(r1)
      fmuls     f4, f3, f6
      lfs       f0, 0x38(r1)
      fmuls     f5, f2, f6
      fmuls     f3, f1, f6
      fmuls     f2, f7, f6
      fadds     f4, f5, f4
      fmuls     f1, f0, f6
      fmuls     f0, f8, f6
      fadds     f2, f3, f2
      stfs      f4, 0x40(r1)
      fadds     f0, f1, f0
      stfs      f2, 0x3C(r1)
      stfs      f0, 0x38(r1)
      lwz       r3, 0x4(r31)
      lfs       f1, 0x24(r31)
      bl        -0xCA2BC
      b         .loc_0x318

    .loc_0x308:
      lwz       r3, 0x4(r31)
      addi      r4, r1, 0x38
      lfs       f1, 0x24(r31)
      bl        -0xCA2D0

    .loc_0x318:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r0, 0x84(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	80213318
 * Size:	000058
 */
void PikiAI::ActTeki::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r7, r3
      stw       r0, 0x14(r1)
      lwz       r0, 0x18(r3)
      cmplwi    r0, 0
      beq-      .loc_0x48
      li        r6, 0xFF
      li        r5, 0x64
      stb       r6, 0x84(r4)
      li        r0, 0xA
      lfs       f1, -0x43CC(r2)
      mr        r3, r4
      stb       r5, 0x85(r4)
      stb       r0, 0x86(r4)
      stb       r6, 0x87(r4)
      lwz       r4, 0x18(r7)
      bl        0x212750

    .loc_0x48:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80213370
 * Size:	000130
 */
void PikiAI::ActTeki::setTimer(void)
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
      addi      r3, r1, 0x14
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x10(r31)
      addi      r3, r1, 0x8
      lfs       f31, 0x14(r1)
      lwz       r12, 0x0(r4)
      lfs       f30, 0x18(r1)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      lfs       f2, 0x8(r1)
      fsubs     f3, f0, f30
      lfs       f1, 0x10(r1)
      fsubs     f2, f2, f31
      lfs       f0, -0x43F0(r2)
      fsubs     f1, f1, f29
      fmuls     f3, f3, f3
      fmuls     f4, f1, f1
      fmadds    f1, f2, f2, f3
      fadds     f1, f4, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xAC
      ble-      .loc_0xB0
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xB0

    .loc_0xAC:
      fmr       f1, f0

    .loc_0xB0:
      lfs       f0, -0x43E8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC4
      lfs       f29, -0x43C8(r2)
      b         .loc_0xC8

    .loc_0xC4:
      lfs       f29, -0x43C4(r2)

    .loc_0xC8:
      bl        -0x149E98
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, -0x43D8(r2)
      stw       r0, 0x20(r1)
      lfs       f2, -0x43E0(r2)
      lfd       f0, 0x20(r1)
      lfs       f1, -0x43DC(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x43E4(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      fmuls     f0, f29, f0
      stfs      f0, 0x20(r31)
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
 * Address:	........
 * Size:	0002E4
 */
void PikiAI::ActTeki::test_1(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
void PikiAI::ActTeki::test_2(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802134A0
 * Size:	000004
 */
void PikiAI::ActTeki::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802134A4
 * Size:	0000E8
 */
void PikiAI::ActTeki::collisionCallback((Game::Piki*, Game::CollEvent&))
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
      lwz       r4, 0x0(r5)
      mr        r31, r3
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x4(r31)
      addi      r3, r1, 0x8
      lfs       f31, 0x14(r1)
      lwz       r12, 0x0(r4)
      lfs       f30, 0x18(r1)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      lfs       f2, 0x8(r1)
      fsubs     f0, f0, f30
      lfs       f1, 0x30(r31)
      lfs       f4, 0x10(r1)
      fsubs     f2, f2, f31
      lfs       f3, 0x2C(r31)
      fmuls     f1, f1, f0
      fsubs     f4, f4, f29
      lfs       f5, 0x34(r31)
      lfs       f0, -0x43F0(r2)
      fmadds    f1, f3, f2, f1
      fmadds    f1, f5, f4, f1
      fcmpo     cr0, f1, f0
      stfs      f1, 0x44(r31)
      ble-      .loc_0xB4
      lfs       f0, -0x43C4(r2)
      stfs      f0, 0x44(r31)
      b         .loc_0xBC

    .loc_0xB4:
      lfs       f0, -0x43C0(r2)
      stfs      f0, 0x44(r31)

    .loc_0xBC:
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
 * Address:	8021358C
 * Size:	000004
 */
void PikiAI::ActTeki::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80213590
 * Size:	000008
 */
void PikiAI::ActTeki::getNextAIType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80213598
 * Size:	000014
 */
void @72 @4 @PikiAI::ActTeki::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x48
      b         -0x1C
    */
}
