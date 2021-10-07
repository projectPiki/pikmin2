

/*
 * --INFO--
 * Address:	80094028
 * Size:	000048
 */
void JPAParticleCallBack::~JPAParticleCallBack()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x30
      lis       r5, 0x804A
      extsh.    r0, r4
      addi      r0, r5, 0x3358
      stw       r0, 0x0(r31)
      ble-      .loc_0x30
      bl        -0x6FFA0

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80094070
 * Size:	0008C4
 */
void JPABaseParticle::init_p(JPAEmitterWorkData*)
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
      stmw      r26, 0x88(r1)
      mr        r27, r4
      mr        r26, r3
      lwz       r5, 0x4(r4)
      lis       r3, 0x19
      lis       r6, 0x4330
      lwz       r30, 0x0(r4)
      lwz       r31, 0x20(r5)
      li        r4, -0x1
      lwz       r29, 0x1C(r5)
      addi      r7, r3, 0x660D
      lwz       r28, 0x2C(r5)
      li        r0, 0
      lfs       f2, -0x7730(r2)
      addi      r3, r27, 0xD8
      sth       r4, 0x80(r26)
      addi      r4, r27, 0x10
      lfd       f5, -0x7718(r2)
      addi      r5, r26, 0xC
      lwz       r8, 0xC4(r30)
      stw       r6, 0x70(r1)
      mullw     r6, r8, r7
      lfs       f0, -0x772C(r2)
      addis     r6, r6, 0x3C6F
      subi      r6, r6, 0xCA1
      stw       r6, 0xC4(r30)
      rlwinm    r6,r6,23,9,31
      oris      r6, r6, 0x3F80
      stw       r6, 0x38(r1)
      lha       r6, 0x52(r30)
      lfs       f1, 0x38(r1)
      xoris     r7, r6, 0x8000
      lwz       r6, 0x0(r28)
      stw       r7, 0x74(r1)
      fsubs     f1, f1, f2
      lfs       f3, 0x54(r6)
      lfd       f4, 0x70(r1)
      fnmsubs   f1, f3, f1, f2
      fsubs     f2, f4, f5
      fmuls     f1, f2, f1
      fctiwz    f1, f1
      stfd      f1, 0x78(r1)
      lwz       r6, 0x7C(r1)
      sth       r6, 0x82(r26)
      stfs      f0, 0x84(r26)
      stw       r0, 0x7C(r26)
      bl        0x56AC8
      lwz       r3, 0xE8(r30)
      lwz       r3, 0x2C(r3)
      lwz       r3, 0x0(r3)
      lwz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,28,28
      beq-      .loc_0x11C
      lwz       r0, 0x7C(r26)
      ori       r0, r0, 0x20
      stw       r0, 0x7C(r26)

    .loc_0x11C:
      lfs       f0, 0x138(r27)
      lfs       f31, -0x772C(r2)
      stfs      f0, 0x18(r26)
      lfs       f0, 0x13C(r27)
      stfs      f0, 0x1C(r26)
      lfs       f0, 0x140(r27)
      stfs      f0, 0x20(r26)
      lfs       f2, 0xC(r26)
      lfs       f1, 0x12C(r27)
      lfs       f0, 0x18(r26)
      lfs       f3, 0x10(r26)
      fmadds    f0, f2, f1, f0
      lfs       f2, 0x130(r27)
      lfs       f1, 0x1C(r26)
      lfs       f5, 0x14(r26)
      lfs       f4, 0x134(r27)
      fmadds    f2, f3, f2, f1
      lfs       f1, 0x20(r26)
      stfs      f0, 0x0(r26)
      fmadds    f0, f5, f4, f1
      stfs      f2, 0x4(r26)
      stfs      f0, 0x8(r26)
      lfs       f5, 0x34(r30)
      fcmpu     cr0, f5, f31
      beq-      .loc_0x218
      lfs       f1, 0x1C(r27)
      lis       r3, 0x8051
      lfs       f0, 0x20(r27)
      fmuls     f3, f1, f1
      lfs       f4, 0x24(r27)
      fmuls     f2, f0, f0
      lfs       f1, -0x7728(r2)
      lfs       f0, 0x48DC(r3)
      fmuls     f4, f4, f4
      fadds     f2, f3, f2
      fmuls     f0, f1, f0
      fadds     f4, f4, f2
      fcmpo     cr0, f4, f0
      cror      2, 0, 0x2
      bne-      .loc_0x1C8
      fmr       f30, f31
      fmr       f29, f31
      b         .loc_0x220

    .loc_0x1C8:
      fcmpo     cr0, f4, f31
      cror      2, 0, 0x2
      bne-      .loc_0x1D8
      b         .loc_0x1F8

    .loc_0x1D8:
      fsqrte    f3, f4
      lfs       f2, -0x7724(r2)
      lfs       f0, -0x7720(r2)
      frsp      f3, f3
      fmuls     f1, f3, f3
      fmuls     f2, f2, f3
      fnmsubs   f0, f4, f1, f0
      fmuls     f4, f2, f0

    .loc_0x1F8:
      fmuls     f3, f4, f5
      lfs       f2, 0x1C(r27)
      lfs       f1, 0x20(r27)
      lfs       f0, 0x24(r27)
      fmuls     f29, f2, f3
      fmuls     f30, f1, f3
      fmuls     f31, f0, f3
      b         .loc_0x220

    .loc_0x218:
      fmr       f30, f31
      fmr       f29, f31

    .loc_0x220:
      lfs       f5, 0x38(r30)
      lfs       f28, -0x772C(r2)
      fcmpu     cr0, f5, f28
      beq-      .loc_0x2C8
      lfs       f1, 0x28(r27)
      lis       r3, 0x8051
      lfs       f0, 0x2C(r27)
      fmuls     f3, f1, f1
      lfs       f4, 0x30(r27)
      fmuls     f2, f0, f0
      lfs       f1, -0x7728(r2)
      lfs       f0, 0x48DC(r3)
      fmuls     f4, f4, f4
      fadds     f2, f3, f2
      fmuls     f0, f1, f0
      fadds     f4, f4, f2
      fcmpo     cr0, f4, f0
      cror      2, 0, 0x2
      bne-      .loc_0x278
      fmr       f27, f28
      fmr       f26, f28
      b         .loc_0x2D0

    .loc_0x278:
      fcmpo     cr0, f4, f28
      cror      2, 0, 0x2
      bne-      .loc_0x288
      b         .loc_0x2A8

    .loc_0x288:
      fsqrte    f3, f4
      lfs       f2, -0x7724(r2)
      lfs       f0, -0x7720(r2)
      frsp      f3, f3
      fmuls     f1, f3, f3
      fmuls     f2, f2, f3
      fnmsubs   f0, f4, f1, f0
      fmuls     f4, f2, f0

    .loc_0x2A8:
      fmuls     f3, f4, f5
      lfs       f2, 0x28(r27)
      lfs       f1, 0x2C(r27)
      lfs       f0, 0x30(r27)
      fmuls     f26, f2, f3
      fmuls     f27, f1, f3
      fmuls     f28, f0, f3
      b         .loc_0x2D0

    .loc_0x2C8:
      fmr       f27, f28
      fmr       f26, f28

    .loc_0x2D0:
      lfs       f0, 0x3C(r30)
      lfs       f2, -0x772C(r2)
      fcmpu     cr0, f0, f2
      beq-      .loc_0x38C
      lis       r3, 0x19
      lwz       r0, 0xC4(r30)
      addi      r6, r3, 0x660D
      lfs       f3, -0x7730(r2)
      mullw     r3, r0, r6
      lfs       f1, -0x771C(r2)
      addi      r5, r1, 0x3C
      addis     r3, r3, 0x3C6F
      subi      r0, r3, 0xCA1
      stw       r0, 0xC4(r30)
      rlwinm    r0,r0,16,16,31
      extsh     r4, r0
      lwz       r0, 0xC4(r30)
      mullw     r3, r0, r6
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x2C(r1)
      lfs       f2, 0x40(r30)
      lfs       f0, 0x2C(r1)
      fsubs     f0, f0, f3
      fadds     f0, f0, f0
      fsubs     f0, f0, f3
      fmuls     f0, f1, f0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r3, 0x7C(r1)
      bl        -0x7E4
      addi      r4, r1, 0x3C
      addi      r3, r27, 0x48
      mr        r5, r4
      bl        0x55F28
      lfs       f3, 0x3C(r30)
      lfs       f0, 0x44(r1)
      lfs       f1, 0x54(r1)
      lfs       f2, 0x64(r1)
      fmuls     f0, f3, f0
      fmuls     f1, f3, f1
      fmuls     f2, f3, f2
      b         .loc_0x394

    .loc_0x38C:
      fmr       f1, f2
      fmr       f0, f2

    .loc_0x394:
      lfs       f4, 0x44(r30)
      lfs       f3, -0x772C(r2)
      fcmpu     cr0, f4, f3
      beq-      .loc_0x454
      lis       r3, 0x19
      lwz       r0, 0xC4(r30)
      addi      r4, r3, 0x660D
      lfs       f7, -0x7730(r2)
      mullw     r3, r0, r4
      lfs       f6, -0x7724(r2)
      addis     r3, r3, 0x3C6F
      subi      r0, r3, 0xCA1
      stw       r0, 0xC4(r30)
      rlwinm    r0,r0,23,9,31
      oris      r3, r0, 0x3F80
      lwz       r0, 0xC4(r30)
      stw       r3, 0x10(r1)
      mullw     r3, r0, r4
      lfs       f4, 0x44(r30)
      lfs       f3, 0x10(r1)
      fsubs     f3, f3, f7
      addis     r3, r3, 0x3C6F
      subi      r0, r3, 0xCA1
      fsubs     f3, f3, f6
      stw       r0, 0xC4(r30)
      rlwinm    r0,r0,23,9,31
      oris      r3, r0, 0x3F80
      lwz       r0, 0xC4(r30)
      fmuls     f3, f4, f3
      stw       r3, 0xC(r1)
      mullw     r3, r0, r4
      lfs       f5, 0x44(r30)
      lfs       f4, 0xC(r1)
      fsubs     f4, f4, f7
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      fsubs     f4, f4, f6
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x8(r1)
      fmuls     f9, f5, f4
      lfs       f5, 0x44(r30)
      lfs       f4, 0x8(r1)
      fsubs     f4, f4, f7
      fsubs     f4, f4, f6
      fmuls     f8, f5, f4
      b         .loc_0x45C

    .loc_0x454:
      fmr       f9, f3
      fmr       f8, f3

    .loc_0x45C:
      lis       r3, 0x19
      lwz       r4, 0xC4(r30)
      addi      r0, r3, 0x660D
      fadds     f6, f29, f26
      mullw     r3, r4, r0
      fadds     f5, f30, f27
      fadds     f4, f31, f28
      lfs       f7, -0x7730(r2)
      fadds     f6, f0, f6
      fadds     f1, f1, f5
      addis     r3, r3, 0x3C6F
      fadds     f0, f2, f4
      subi      r3, r3, 0xCA1
      fadds     f2, f8, f6
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x28(r1)
      fadds     f0, f3, f0
      lwz       r3, 0x0(r28)
      fadds     f1, f9, f1
      lfs       f4, 0x28(r1)
      lfs       f3, 0x48(r3)
      fsubs     f4, f4, f7
      fadds     f4, f4, f4
      fsubs     f4, f4, f7
      fmadds    f3, f4, f3, f7
      fmuls     f2, f3, f2
      fmuls     f1, f3, f1
      fmuls     f0, f3, f0
      stfs      f2, 0x30(r26)
      stfs      f1, 0x34(r26)
      stfs      f0, 0x38(r26)
      lwz       r3, 0xE8(r30)
      lwz       r3, 0x2C(r3)
      lwz       r3, 0x0(r3)
      lwz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,29,29
      beq-      .loc_0x528
      lfs       f1, 0x30(r26)
      lfs       f0, 0x0(r30)
      fmuls     f0, f1, f0
      stfs      f0, 0x30(r26)
      lfs       f1, 0x34(r26)
      lfs       f0, 0x4(r30)
      fmuls     f0, f1, f0
      stfs      f0, 0x34(r26)
      lfs       f1, 0x38(r26)
      lfs       f0, 0x8(r30)
      fmuls     f0, f1, f0
      stfs      f0, 0x38(r26)

    .loc_0x528:
      addi      r4, r26, 0x30
      addi      r3, r27, 0xA8
      mr        r5, r4
      bl        0x56688
      lfs       f0, -0x772C(r2)
      lis       r4, 0x19
      lis       r3, 0x4330
      lfs       f3, -0x7730(r2)
      stfs      f0, 0x44(r26)
      addi      r0, r4, 0x660D
      li        r4, 0
      lfd       f1, -0x7710(r2)
      stfs      f0, 0x40(r26)
      cmplwi    r31, 0
      stfs      f0, 0x3C(r26)
      lwz       r5, 0xC4(r30)
      stw       r3, 0x78(r1)
      mullw     r3, r5, r0
      addis     r3, r3, 0x3C6F
      subi      r5, r3, 0xCA1
      rlwinm    r3,r5,23,9,31
      stw       r5, 0xC4(r30)
      oris      r3, r3, 0x3F80
      stw       r3, 0x34(r1)
      lwz       r3, 0x0(r28)
      lfs       f0, 0x34(r1)
      lfs       f2, 0x64(r3)
      fsubs     f0, f0, f3
      fnmsubs   f0, f2, f0, f3
      stfs      f0, 0x70(r26)
      stfs      f3, 0x74(r26)
      stw       r4, 0x78(r26)
      lfs       f4, 0xCC(r27)
      lfs       f2, 0xBC(r27)
      lfs       f0, 0xAC(r27)
      stfs      f0, 0x54(r26)
      stfs      f2, 0x58(r26)
      stfs      f4, 0x5C(r26)
      lbz       r3, 0x108(r30)
      stb       r3, 0x8C(r26)
      lbz       r3, 0x109(r30)
      stb       r3, 0x8D(r26)
      lbz       r3, 0x10A(r30)
      stb       r3, 0x8E(r26)
      lbz       r3, 0x10B(r30)
      stb       r3, 0x8F(r26)
      lbz       r3, 0x10C(r30)
      stb       r3, 0x90(r26)
      lbz       r3, 0x10D(r30)
      stb       r3, 0x91(r26)
      lbz       r3, 0x10E(r30)
      stb       r3, 0x92(r26)
      lbz       r3, 0x10F(r30)
      stb       r3, 0x93(r26)
      lwz       r3, 0xC4(r30)
      lwz       r4, 0x0(r29)
      mullw     r3, r3, r0
      lbz       r4, 0x2E(r4)
      stw       r4, 0x7C(r1)
      addis     r3, r3, 0x3C6F
      lfd       f0, 0x78(r1)
      subi      r4, r3, 0xCA1
      rlwinm    r3,r4,23,9,31
      fsubs     f0, f0, f1
      oris      r3, r3, 0x3F80
      stw       r4, 0xC4(r30)
      stw       r3, 0x30(r1)
      lfs       f1, 0x30(r1)
      fsubs     f1, f1, f3
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r3, 0x74(r1)
      stb       r3, 0x95(r26)
      beq-      .loc_0x6B8
      lwz       r3, 0x0(r31)
      lwz       r3, 0x8(r3)
      rlwinm.   r3,r3,0,31,31
      beq-      .loc_0x6B8
      lwz       r3, 0xC4(r30)
      mullw     r3, r3, r0
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x24(r1)
      lwz       r3, 0x0(r31)
      lfs       f1, 0x24(r1)
      lfs       f0, 0x24(r3)
      fsubs     f1, f1, f3
      lfs       f2, 0xFC(r30)
      fadds     f1, f1, f1
      fsubs     f1, f1, f3
      fmadds    f0, f1, f0, f3
      fmuls     f0, f2, f0
      stfs      f0, 0x68(r26)
      stfs      f0, 0x64(r26)
      stfs      f0, 0x60(r26)
      b         .loc_0x6C8

    .loc_0x6B8:
      lfs       f0, 0xFC(r30)
      stfs      f0, 0x68(r26)
      stfs      f0, 0x64(r26)
      stfs      f0, 0x60(r26)

    .loc_0x6C8:
      li        r0, 0xFF
      cmplwi    r31, 0
      stb       r0, 0x96(r26)
      beq-      .loc_0x738
      lwz       r3, 0x0(r31)
      lwz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,14,14
      beq-      .loc_0x738
      lis       r3, 0x19
      lwz       r4, 0xC4(r30)
      addi      r0, r3, 0x660D
      lfs       f2, -0x7730(r2)
      mullw     r3, r4, r0
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x20(r1)
      lwz       r3, 0x0(r31)
      lfs       f1, 0x20(r1)
      lfs       f0, 0x44(r3)
      fsubs     f1, f1, f2
      fadds     f1, f1, f1
      fsubs     f1, f1, f2
      fmadds    f0, f1, f0, f2
      stfs      f0, 0x6C(r26)
      b         .loc_0x740

    .loc_0x738:
      lfs       f0, -0x7730(r2)
      stfs      f0, 0x6C(r26)

    .loc_0x740:
      cmplwi    r31, 0
      beq-      .loc_0x874
      lwz       r3, 0x0(r31)
      lwz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,7,7
      beq-      .loc_0x864
      lis       r3, 0x19
      lwz       r0, 0xC4(r30)
      addi      r4, r3, 0x660D
      lfs       f3, -0x7730(r2)
      mullw     r3, r0, r4
      lfs       f1, -0x7724(r2)
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x1C(r1)
      lwz       r3, 0x0(r31)
      lfs       f0, 0x1C(r1)
      lfs       f4, 0x50(r3)
      fsubs     f2, f0, f3
      lfs       f0, 0x4C(r3)
      fsubs     f1, f2, f1
      fmadds    f0, f4, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      sth       r0, 0x88(r26)
      lwz       r0, 0xC4(r30)
      mullw     r3, r0, r4
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x18(r1)
      lwz       r3, 0x0(r31)
      lfs       f0, 0x18(r1)
      lfs       f1, 0x58(r3)
      fsubs     f0, f0, f3
      lfs       f2, 0x54(r3)
      fadds     f0, f0, f0
      fsubs     f0, f0, f3
      fmadds    f0, f1, f0, f3
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      sth       r0, 0x8A(r26)
      lwz       r0, 0xC4(r30)
      mullw     r3, r0, r4
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, 0xC4(r30)
      oris      r0, r0, 0x3F80
      stw       r0, 0x14(r1)
      lwz       r3, 0x0(r31)
      lfs       f1, 0x14(r1)
      lfs       f0, 0x5C(r3)
      fsubs     f1, f1, f3
      fadds     f1, f1, f1
      fsubs     f1, f1, f3
      fcmpo     cr0, f1, f0
      bge-      .loc_0x850
      lha       r0, 0x8A(r26)
      b         .loc_0x85C

    .loc_0x850:
      lha       r0, 0x8A(r26)
      neg       r0, r0
      extsh     r0, r0

    .loc_0x85C:
      sth       r0, 0x8A(r26)
      b         .loc_0x880

    .loc_0x864:
      li        r0, 0
      sth       r0, 0x88(r26)
      sth       r0, 0x8A(r26)
      b         .loc_0x880

    .loc_0x874:
      li        r0, 0
      sth       r0, 0x88(r26)
      sth       r0, 0x8A(r26)

    .loc_0x880:
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
      lmw       r26, 0x88(r1)
      lwz       r0, 0x104(r1)
      mtlr      r0
      addi      r1, r1, 0x100
      blr
    */
}

/*
 * --INFO--
 * Address:	80094934
 * Size:	0006A8
 */
void JPABaseParticle::init_c(JPAEmitterWorkData*, JPABaseParticle*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      li        r7, -0x1
      lfs       f7, -0x772C(r2)
      li        r0, 0x4
      lwz       r6, 0x4(r4)
      lwz       r4, 0x0(r4)
      lwz       r6, 0x24(r6)
      sth       r7, 0x80(r3)
      lwz       r7, 0x0(r6)
      lha       r7, 0x40(r7)
      sth       r7, 0x82(r3)
      stfs      f7, 0x84(r3)
      stw       r0, 0x7C(r3)
      lfs       f0, 0xC(r5)
      stfs      f0, 0xC(r3)
      lfs       f0, 0x10(r5)
      stfs      f0, 0x10(r3)
      lfs       f0, 0x14(r5)
      stfs      f0, 0x14(r3)
      lwz       r7, 0x0(r6)
      lfs       f8, 0xC(r7)
      fcmpu     cr0, f7, f8
      beq-      .loc_0x1A4
      lis       r7, 0x19
      lwz       r0, 0xC4(r4)
      addi      r9, r7, 0x660D
      lfs       f6, -0x7730(r2)
      mullw     r8, r0, r9
      lfs       f5, -0x7724(r2)
      lis       r7, 0x8051
      lfs       f2, -0x7728(r2)
      addis     r8, r8, 0x3C6F
      subi      r0, r8, 0xCA1
      stw       r0, 0xC4(r4)
      rlwinm    r0,r0,23,9,31
      oris      r8, r0, 0x3F80
      lwz       r0, 0xC4(r4)
      stw       r8, 0x1C(r1)
      mullw     r8, r0, r9
      lfs       f0, 0x1C(r1)
      fsubs     f0, f0, f6
      addis     r8, r8, 0x3C6F
      subi      r0, r8, 0xCA1
      fsubs     f0, f0, f5
      stw       r0, 0xC4(r4)
      rlwinm    r0,r0,23,9,31
      oris      r8, r0, 0x3F80
      lwz       r0, 0xC4(r4)
      stw       r8, 0x18(r1)
      mullw     r8, r0, r9
      lfs       f1, 0x18(r1)
      fsubs     f1, f1, f6
      addis     r8, r8, 0x3C6F
      subi      r0, r8, 0xCA1
      fsubs     f10, f1, f5
      stw       r0, 0xC4(r4)
      rlwinm    r0,r0,23,9,31
      oris      r8, r0, 0x3F80
      lwz       r0, 0xC4(r4)
      fmuls     f1, f10, f10
      stw       r8, 0x14(r1)
      mullw     r8, r0, r9
      lfs       f3, 0x14(r1)
      fsubs     f3, f3, f6
      addis     r8, r8, 0x3C6F
      subi      r8, r8, 0xCA1
      fsubs     f9, f3, f5
      rlwinm    r0,r8,23,9,31
      stw       r8, 0xC4(r4)
      oris      r0, r0, 0x3F80
      fmadds    f3, f9, f9, f1
      stw       r0, 0x24(r1)
      lfs       f1, 0x48DC(r7)
      lfs       f4, 0x24(r1)
      fmuls     f1, f2, f1
      fmadds    f11, f0, f0, f3
      fsubs     f2, f4, f6
      fcmpo     cr0, f11, f1
      fmuls     f4, f8, f2
      cror      2, 0, 0x2
      beq-      .loc_0x180
      fcmpo     cr0, f11, f7
      cror      2, 0, 0x2
      bne-      .loc_0x154
      b         .loc_0x170

    .loc_0x154:
      fsqrte    f3, f11
      lfs       f1, -0x7720(r2)
      frsp      f3, f3
      fmuls     f2, f3, f3
      fmuls     f3, f5, f3
      fnmsubs   f1, f11, f2, f1
      fmuls     f11, f3, f1

    .loc_0x170:
      fmuls     f1, f11, f4
      fmuls     f9, f9, f1
      fmuls     f10, f10, f1
      fmuls     f0, f0, f1

    .loc_0x180:
      lfs       f1, 0xC(r3)
      fadds     f1, f1, f9
      stfs      f1, 0xC(r3)
      lfs       f1, 0x10(r3)
      fadds     f1, f1, f10
      stfs      f1, 0x10(r3)
      lfs       f1, 0x14(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x14(r3)

    .loc_0x1A4:
      lwz       r7, 0xE8(r4)
      lwz       r7, 0x2C(r7)
      lwz       r7, 0x0(r7)
      lwz       r0, 0x8(r7)
      rlwinm.   r0,r0,0,27,27
      beq-      .loc_0x1C8
      lwz       r0, 0x7C(r3)
      ori       r0, r0, 0x20
      stw       r0, 0x7C(r3)

    .loc_0x1C8:
      lfs       f0, 0x18(r5)
      lis       r8, 0x19
      addi      r10, r8, 0x660D
      lfs       f5, -0x7730(r2)
      stfs      f0, 0x18(r3)
      lis       r7, 0x8051
      lfs       f2, -0x7728(r2)
      lfs       f0, 0x1C(r5)
      stfs      f0, 0x1C(r3)
      lfs       f0, 0x20(r5)
      stfs      f0, 0x20(r3)
      lwz       r0, 0xC4(r4)
      mullw     r8, r0, r10
      addis     r8, r8, 0x3C6F
      subi      r0, r8, 0xCA1
      stw       r0, 0xC4(r4)
      rlwinm    r0,r0,23,9,31
      oris      r9, r0, 0x3F80
      lwz       r0, 0xC4(r4)
      lwz       r11, 0x0(r6)
      mullw     r8, r0, r10
      stw       r9, 0x20(r1)
      lfs       f4, 0x10(r11)
      lfs       f0, 0x20(r1)
      lfs       f3, 0x14(r11)
      fsubs     f0, f0, f5
      addis     r8, r8, 0x3C6F
      subi      r0, r8, 0xCA1
      fadds     f0, f0, f0
      stw       r0, 0xC4(r4)
      rlwinm    r0,r0,23,9,31
      oris      r8, r0, 0x3F80
      lwz       r0, 0xC4(r4)
      fsubs     f1, f0, f5
      stw       r8, 0x10(r1)
      mullw     r8, r0, r10
      fmadds    f1, f3, f1, f5
      lfs       f0, 0x10(r1)
      fsubs     f0, f0, f5
      fmuls     f8, f4, f1
      addis     r8, r8, 0x3C6F
      subi      r0, r8, 0xCA1
      fadds     f0, f0, f0
      stw       r0, 0xC4(r4)
      rlwinm    r0,r0,23,9,31
      oris      r8, r0, 0x3F80
      lwz       r0, 0xC4(r4)
      fsubs     f0, f0, f5
      stw       r8, 0xC(r1)
      mullw     r8, r0, r10
      lfs       f1, 0xC(r1)
      fsubs     f1, f1, f5
      addis     r8, r8, 0x3C6F
      subi      r8, r8, 0xCA1
      fadds     f1, f1, f1
      rlwinm    r0,r8,23,9,31
      stw       r8, 0xC4(r4)
      oris      r0, r0, 0x3F80
      stw       r0, 0x8(r1)
      fsubs     f6, f1, f5
      lfs       f1, 0x48DC(r7)
      lfs       f4, 0x8(r1)
      fmuls     f1, f2, f1
      fsubs     f4, f4, f5
      fmuls     f3, f6, f6
      fadds     f2, f4, f4
      fsubs     f5, f2, f5
      fmadds    f2, f5, f5, f3
      fmadds    f7, f0, f0, f2
      fcmpo     cr0, f7, f1
      cror      2, 0, 0x2
      beq-      .loc_0x32C
      lfs       f1, -0x772C(r2)
      fcmpo     cr0, f7, f1
      cror      2, 0, 0x2
      bne-      .loc_0x2FC
      b         .loc_0x31C

    .loc_0x2FC:
      fsqrte    f4, f7
      lfs       f3, -0x7724(r2)
      lfs       f1, -0x7720(r2)
      frsp      f4, f4
      fmuls     f2, f4, f4
      fmuls     f3, f3, f4
      fnmsubs   f1, f7, f2, f1
      fmuls     f7, f3, f1

    .loc_0x31C:
      fmuls     f1, f7, f8
      fmuls     f5, f5, f1
      fmuls     f6, f6, f1
      fmuls     f0, f0, f1

    .loc_0x32C:
      lwz       r4, 0x0(r6)
      lfs       f1, 0x30(r5)
      lfs       f2, 0x18(r4)
      fmadds    f1, f1, f2, f5
      stfs      f1, 0x30(r3)
      lfs       f1, 0x34(r5)
      fmadds    f1, f1, f2, f6
      stfs      f1, 0x34(r3)
      lfs       f1, 0x38(r5)
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x38(r3)
      lwz       r4, 0x0(r6)
      lfs       f0, 0x48(r5)
      lfs       f1, 0x18(r4)
      fmuls     f0, f0, f1
      stfs      f0, 0x3C(r3)
      lfs       f0, 0x4C(r5)
      fmuls     f0, f0, f1
      stfs      f0, 0x40(r3)
      lfs       f0, 0x50(r5)
      fmuls     f0, f0, f1
      stfs      f0, 0x44(r3)
      lfs       f0, 0x70(r5)
      stfs      f0, 0x70(r3)
      lwz       r4, 0x0(r6)
      lwz       r0, 0x8(r4)
      rlwinm.   r0,r0,0,10,10
      beq-      .loc_0x3A8
      lfs       f0, 0x74(r5)
      stfs      f0, 0x74(r3)
      b         .loc_0x3BC

    .loc_0x3A8:
      lwz       r0, 0x7C(r3)
      lfs       f0, -0x7730(r2)
      ori       r0, r0, 0x40
      stw       r0, 0x7C(r3)
      stfs      f0, 0x74(r3)

    .loc_0x3BC:
      lwz       r0, 0x78(r5)
      stw       r0, 0x78(r3)
      lfs       f0, 0x3C(r3)
      stfs      f0, 0x48(r3)
      lfs       f0, 0x40(r3)
      stfs      f0, 0x4C(r3)
      lfs       f0, 0x44(r3)
      stfs      f0, 0x50(r3)
      lfs       f3, 0x70(r3)
      lfs       f2, 0x74(r3)
      lfs       f1, 0x30(r3)
      fmuls     f4, f3, f2
      lfs       f0, 0x48(r3)
      lfs       f2, 0x34(r3)
      fadds     f0, f1, f0
      lfs       f1, 0x4C(r3)
      lfs       f3, 0x38(r3)
      fadds     f1, f2, f1
      lfs       f2, 0x50(r3)
      fmuls     f0, f4, f0
      fadds     f2, f3, f2
      fmuls     f1, f4, f1
      stfs      f0, 0x24(r3)
      fmuls     f0, f4, f2
      stfs      f1, 0x28(r3)
      stfs      f0, 0x2C(r3)
      lfs       f0, 0x54(r5)
      stfs      f0, 0x54(r3)
      lfs       f0, 0x58(r5)
      stfs      f0, 0x58(r3)
      lfs       f0, 0x5C(r5)
      stfs      f0, 0x5C(r3)
      lwz       r4, 0x0(r6)
      lwz       r0, 0x8(r4)
      rlwinm.   r0,r0,0,15,15
      beq-      .loc_0x47C
      lfs       f1, 0x60(r5)
      lfs       f0, 0x28(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x68(r3)
      stfs      f0, 0x60(r3)
      lwz       r4, 0x0(r6)
      lfs       f1, 0x64(r5)
      lfs       f0, 0x28(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x6C(r3)
      stfs      f0, 0x64(r3)
      b         .loc_0x490

    .loc_0x47C:
      lfs       f0, -0x7730(r2)
      stfs      f0, 0x6C(r3)
      stfs      f0, 0x64(r3)
      stfs      f0, 0x68(r3)
      stfs      f0, 0x60(r3)

    .loc_0x490:
      lwz       r7, 0x0(r6)
      lwz       r0, 0x8(r7)
      rlwinm.   r0,r0,0,13,13
      beq-      .loc_0x5C8
      lbz       r4, 0x8C(r5)
      lis       r0, 0x4330
      stw       r0, 0x28(r1)
      lfd       f2, -0x7710(r2)
      stw       r4, 0x2C(r1)
      lfs       f0, 0x30(r7)
      lfd       f1, 0x28(r1)
      stw       r0, 0x38(r1)
      fsubs     f1, f1, f2
      stw       r0, 0x48(r1)
      fmuls     f0, f1, f0
      stw       r0, 0x58(r1)
      stw       r0, 0x68(r1)
      fctiwz    f0, f0
      stw       r0, 0x78(r1)
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      stb       r0, 0x8C(r3)
      lbz       r0, 0x8D(r5)
      lwz       r4, 0x0(r6)
      stw       r0, 0x3C(r1)
      lfs       f0, 0x30(r4)
      lfd       f1, 0x38(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      stb       r0, 0x8D(r3)
      lbz       r0, 0x8E(r5)
      lwz       r4, 0x0(r6)
      stw       r0, 0x4C(r1)
      lfs       f0, 0x30(r4)
      lfd       f1, 0x48(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x50(r1)
      lwz       r0, 0x54(r1)
      stb       r0, 0x8E(r3)
      lbz       r0, 0x90(r5)
      lwz       r4, 0x0(r6)
      stw       r0, 0x5C(r1)
      lfs       f0, 0x30(r4)
      lfd       f1, 0x58(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x60(r1)
      lwz       r0, 0x64(r1)
      stb       r0, 0x90(r3)
      lbz       r0, 0x91(r5)
      lwz       r4, 0x0(r6)
      stw       r0, 0x6C(r1)
      lfs       f0, 0x30(r4)
      lfd       f1, 0x68(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      stb       r0, 0x91(r3)
      lbz       r0, 0x92(r5)
      lwz       r4, 0x0(r6)
      stw       r0, 0x7C(r1)
      lfs       f0, 0x30(r4)
      lfd       f1, 0x78(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x80(r1)
      lwz       r0, 0x84(r1)
      stb       r0, 0x92(r3)
      b         .loc_0x60C

    .loc_0x5C8:
      lbz       r0, 0x34(r7)
      stb       r0, 0x8C(r3)
      lbz       r0, 0x35(r7)
      stb       r0, 0x8D(r3)
      lbz       r0, 0x36(r7)
      stb       r0, 0x8E(r3)
      lbz       r0, 0x37(r7)
      stb       r0, 0x8F(r3)
      lwz       r4, 0x0(r6)
      lbz       r0, 0x38(r4)
      stb       r0, 0x90(r3)
      lbz       r0, 0x39(r4)
      stb       r0, 0x91(r3)
      lbz       r0, 0x3A(r4)
      stb       r0, 0x92(r3)
      lbz       r0, 0x3B(r4)
      stb       r0, 0x93(r3)

    .loc_0x60C:
      li        r0, 0xFF
      stb       r0, 0x96(r3)
      lwz       r8, 0x0(r6)
      lwz       r0, 0x8(r8)
      rlwinm.   r0,r0,0,14,14
      beq-      .loc_0x66C
      lbz       r4, 0x96(r5)
      lis       r0, 0x4330
      lbz       r7, 0x8F(r5)
      addi      r4, r4, 0x1
      stw       r0, 0x80(r1)
      mullw     r0, r7, r4
      lfd       f2, -0x7710(r2)
      lfs       f0, 0x2C(r8)
      rlwinm    r0,r0,24,24,31
      stw       r0, 0x84(r1)
      lfd       f1, 0x80(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r0, 0x7C(r1)
      stb       r0, 0x8F(r3)
      b         .loc_0x674

    .loc_0x66C:
      lbz       r0, 0x37(r8)
      stb       r0, 0x8F(r3)

    .loc_0x674:
      lhz       r0, 0x88(r5)
      sth       r0, 0x88(r3)
      lwz       r4, 0x0(r6)
      lwz       r0, 0x8(r4)
      rlwinm.   r0,r0,0,7,7
      beq-      .loc_0x698
      lha       r0, 0x46(r4)
      sth       r0, 0x8A(r3)
      b         .loc_0x6A0

    .loc_0x698:
      li        r0, 0
      sth       r0, 0x8A(r3)

    .loc_0x6A0:
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	80094FDC
 * Size:	0002A8
 */
void JPABaseParticle::calc_p(JPAEmitterWorkData*)
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
      stw       r29, 0x24(r1)
      lha       r3, 0x80(r3)
      addi      r0, r3, 0x1
      sth       r0, 0x80(r30)
      extsh     r3, r0
      lha       r0, 0x82(r30)
      cmpw      r3, r0
      blt-      .loc_0x44
      li        r3, 0x1
      b         .loc_0x28C

    .loc_0x44:
      lha       r4, 0x80(r30)
      lis       r3, 0x4330
      xoris     r0, r0, 0x8000
      stw       r3, 0x8(r1)
      xoris     r4, r4, 0x8000
      lfd       f2, -0x7718(r2)
      stw       r4, 0xC(r1)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f1, f0, f2
      stw       r3, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f2
      fdivs     f0, f1, f0
      stfs      f0, 0x84(r30)
      lwz       r0, 0x7C(r30)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0xA4
      lfs       f0, 0x138(r31)
      stfs      f0, 0x18(r30)
      lfs       f0, 0x13C(r31)
      stfs      f0, 0x1C(r30)
      lfs       f0, 0x140(r31)
      stfs      f0, 0x20(r30)

    .loc_0xA4:
      lfs       f0, -0x772C(r2)
      stfs      f0, 0x50(r30)
      stfs      f0, 0x4C(r30)
      stfs      f0, 0x48(r30)
      lwz       r0, 0x7C(r30)
      rlwinm.   r0,r0,0,25,25
      bne-      .loc_0xD0
      lwz       r3, 0x4(r31)
      mr        r4, r31
      mr        r5, r30
      bl        0x2C28

    .loc_0xD0:
      lfs       f1, 0x48(r30)
      lfs       f0, 0x3C(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x48(r30)
      lfs       f1, 0x4C(r30)
      lfs       f0, 0x40(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x4C(r30)
      lfs       f1, 0x50(r30)
      lfs       f0, 0x44(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x50(r30)
      lwz       r3, 0x0(r31)
      lfs       f0, 0x30(r30)
      lfs       f1, 0x48(r3)
      fmuls     f0, f0, f1
      stfs      f0, 0x30(r30)
      lfs       f0, 0x34(r30)
      fmuls     f0, f0, f1
      stfs      f0, 0x34(r30)
      lfs       f0, 0x38(r30)
      fmuls     f0, f0, f1
      stfs      f0, 0x38(r30)
      lfs       f3, 0x70(r30)
      lfs       f2, 0x74(r30)
      lfs       f1, 0x30(r30)
      lfs       f0, 0x48(r30)
      fmuls     f4, f3, f2
      lfs       f2, 0x34(r30)
      fadds     f0, f1, f0
      lfs       f1, 0x4C(r30)
      lfs       f3, 0x38(r30)
      fadds     f1, f2, f1
      lfs       f2, 0x50(r30)
      fmuls     f0, f4, f0
      fadds     f2, f3, f2
      fmuls     f1, f4, f1
      stfs      f0, 0x24(r30)
      fmuls     f0, f4, f2
      stfs      f1, 0x28(r30)
      stfs      f0, 0x2C(r30)
      lwz       r4, 0x0(r31)
      lwz       r3, 0xF0(r4)
      cmplwi    r3, 0
      beq-      .loc_0x198
      lwz       r12, 0x0(r3)
      mr        r5, r30
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x198:
      lwz       r0, 0x7C(r30)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x1AC
      li        r3, 0x1
      b         .loc_0x28C

    .loc_0x1AC:
      lwz       r3, 0x4(r31)
      mr        r4, r31
      mr        r5, r30
      bl        0x2A54
      lhz       r3, 0x88(r30)
      lha       r0, 0x8A(r30)
      add       r0, r3, r0
      sth       r0, 0x88(r30)
      lwz       r3, 0x4(r31)
      lwz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x21C
      mr        r3, r30
      mr        r4, r31
      bl        0x340
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x21C
      lwz       r3, 0x4(r31)
      lwz       r3, 0x24(r3)
      lwz       r3, 0x0(r3)
      lha       r29, 0x42(r3)
      b         .loc_0x214

    .loc_0x204:
      lwz       r3, 0x0(r31)
      mr        r4, r30
      bl        -0x508C
      subi      r29, r29, 0x1

    .loc_0x214:
      cmpwi     r29, 0
      bgt+      .loc_0x204

    .loc_0x21C:
      lfs       f1, 0xC(r30)
      li        r3, 0
      lfs       f0, 0x24(r30)
      fadds     f0, f1, f0
      stfs      f0, 0xC(r30)
      lfs       f1, 0x10(r30)
      lfs       f0, 0x28(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x10(r30)
      lfs       f1, 0x14(r30)
      lfs       f0, 0x2C(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x14(r30)
      lfs       f2, 0xC(r30)
      lfs       f1, 0x12C(r31)
      lfs       f0, 0x18(r30)
      lfs       f3, 0x10(r30)
      fmadds    f0, f2, f1, f0
      lfs       f2, 0x130(r31)
      lfs       f1, 0x1C(r30)
      lfs       f5, 0x14(r30)
      lfs       f4, 0x134(r31)
      fmadds    f2, f3, f2, f1
      lfs       f1, 0x20(r30)
      stfs      f0, 0x0(r30)
      fmadds    f0, f5, f4, f1
      stfs      f2, 0x4(r30)
      stfs      f0, 0x8(r30)

    .loc_0x28C:
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
 * Address:	80095284
 * Size:	000004
 */
void JPAParticleCallBack::execute(JPABaseEmitter*, JPABaseParticle*)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80095288
 * Size:	000278
 */
void JPABaseParticle::calc_c(JPAEmitterWorkData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      lha       r3, 0x80(r3)
      addi      r0, r3, 0x1
      sth       r0, 0x80(r30)
      extsh     r3, r0
      lha       r0, 0x82(r30)
      cmpw      r3, r0
      blt-      .loc_0x40
      li        r3, 0x1
      b         .loc_0x260

    .loc_0x40:
      lha       r4, 0x80(r30)
      lis       r3, 0x4330
      xoris     r0, r0, 0x8000
      stw       r3, 0x8(r1)
      xoris     r4, r4, 0x8000
      lfd       f2, -0x7718(r2)
      stw       r4, 0xC(r1)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f1, f0, f2
      stw       r3, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f2
      fdivs     f0, f1, f0
      stfs      f0, 0x84(r30)
      lha       r0, 0x80(r30)
      cmpwi     r0, 0
      beq-      .loc_0x198
      lwz       r0, 0x7C(r30)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0xAC
      lfs       f0, 0x138(r31)
      stfs      f0, 0x18(r30)
      lfs       f0, 0x13C(r31)
      stfs      f0, 0x1C(r30)
      lfs       f0, 0x140(r31)
      stfs      f0, 0x20(r30)

    .loc_0xAC:
      lwz       r3, 0x4(r31)
      lfs       f2, 0x34(r30)
      lwz       r3, 0x24(r3)
      lfs       f0, -0x772C(r2)
      lwz       r3, 0x0(r3)
      lfs       f1, 0x1C(r3)
      fsubs     f1, f2, f1
      stfs      f1, 0x34(r30)
      stfs      f0, 0x50(r30)
      stfs      f0, 0x4C(r30)
      stfs      f0, 0x48(r30)
      lwz       r0, 0x7C(r30)
      rlwinm.   r0,r0,0,25,25
      bne-      .loc_0xF4
      lwz       r3, 0x4(r31)
      mr        r4, r31
      mr        r5, r30
      bl        0x2958

    .loc_0xF4:
      lfs       f1, 0x48(r30)
      lfs       f0, 0x3C(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x48(r30)
      lfs       f1, 0x4C(r30)
      lfs       f0, 0x40(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x4C(r30)
      lfs       f1, 0x50(r30)
      lfs       f0, 0x44(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x50(r30)
      lwz       r3, 0x0(r31)
      lfs       f0, 0x30(r30)
      lfs       f1, 0x48(r3)
      fmuls     f0, f0, f1
      stfs      f0, 0x30(r30)
      lfs       f0, 0x34(r30)
      fmuls     f0, f0, f1
      stfs      f0, 0x34(r30)
      lfs       f0, 0x38(r30)
      fmuls     f0, f0, f1
      stfs      f0, 0x38(r30)
      lfs       f3, 0x70(r30)
      lfs       f2, 0x74(r30)
      lfs       f1, 0x30(r30)
      lfs       f0, 0x48(r30)
      fmuls     f4, f3, f2
      lfs       f2, 0x34(r30)
      fadds     f0, f1, f0
      lfs       f1, 0x4C(r30)
      lfs       f3, 0x38(r30)
      fadds     f1, f2, f1
      lfs       f2, 0x50(r30)
      fmuls     f0, f4, f0
      fadds     f2, f3, f2
      fmuls     f1, f4, f1
      stfs      f0, 0x24(r30)
      fmuls     f0, f4, f2
      stfs      f1, 0x28(r30)
      stfs      f0, 0x2C(r30)

    .loc_0x198:
      lwz       r4, 0x0(r31)
      lwz       r3, 0xF0(r4)
      cmplwi    r3, 0
      beq-      .loc_0x1BC
      lwz       r12, 0x0(r3)
      mr        r5, r30
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x1BC:
      lwz       r0, 0x7C(r30)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x1D0
      li        r3, 0x1
      b         .loc_0x260

    .loc_0x1D0:
      lwz       r3, 0x4(r31)
      mr        r4, r31
      mr        r5, r30
      bl        0x27F8
      lhz       r4, 0x88(r30)
      li        r3, 0
      lha       r0, 0x8A(r30)
      add       r0, r4, r0
      sth       r0, 0x88(r30)
      lfs       f1, 0xC(r30)
      lfs       f0, 0x24(r30)
      fadds     f0, f1, f0
      stfs      f0, 0xC(r30)
      lfs       f1, 0x10(r30)
      lfs       f0, 0x28(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x10(r30)
      lfs       f1, 0x14(r30)
      lfs       f0, 0x2C(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x14(r30)
      lfs       f2, 0xC(r30)
      lfs       f1, 0x12C(r31)
      lfs       f0, 0x18(r30)
      lfs       f3, 0x10(r30)
      fmadds    f0, f2, f1, f0
      lfs       f2, 0x130(r31)
      lfs       f1, 0x1C(r30)
      lfs       f5, 0x14(r30)
      fmadds    f2, f3, f2, f1
      lfs       f4, 0x134(r31)
      lfs       f1, 0x20(r30)
      stfs      f0, 0x0(r30)
      fmadds    f0, f5, f4, f1
      stfs      f2, 0x4(r30)
      stfs      f0, 0x8(r30)

    .loc_0x260:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80095500
 * Size:	000080
 */
void JPABaseParticle::canCreateChild(JPAEmitterWorkData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lis       r0, 0x4330
      lfd       f2, -0x7718(r2)
      li        r6, 0
      lha       r5, 0x82(r3)
      lwz       r4, 0x4(r4)
      subi      r5, r5, 0x1
      stw       r0, 0x8(r1)
      xoris     r0, r5, 0x8000
      lwz       r4, 0x24(r4)
      stw       r0, 0xC(r1)
      lwz       r4, 0x0(r4)
      lfd       f1, 0x8(r1)
      lfs       f0, 0x3C(r4)
      fsubs     f1, f1, f2
      lha       r0, 0x80(r3)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r3, 0x14(r1)
      sub.      r5, r0, r3
      blt-      .loc_0x74
      lbz       r3, 0x44(r4)
      addi      r3, r3, 0x1
      divw      r0, r5, r3
      mullw     r0, r0, r3
      sub.      r0, r5, r0
      bne-      .loc_0x74
      li        r6, 0x1

    .loc_0x74:
      mr        r3, r6
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80095580
 * Size:	000024
 */
void JPABaseParticle::getCalcCurrentPositionX(const JPABaseEmitter*) const
{
    /*
    .loc_0x0:
      lwz       r4, 0xE4(r4)
      lfs       f1, 0xC(r3)
      lfs       f0, 0x24(r3)
      lwz       r4, 0x20(r4)
      fadds     f1, f1, f0
      lfs       f0, 0x18(r3)
      lfs       f2, 0x12C(r4)
      fmadds    f1, f2, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	800955A4
 * Size:	000024
 */
void JPABaseParticle::getCalcCurrentPositionY(const JPABaseEmitter*) const
{
    /*
    .loc_0x0:
      lwz       r4, 0xE4(r4)
      lfs       f1, 0x10(r3)
      lfs       f0, 0x28(r3)
      lwz       r4, 0x20(r4)
      fadds     f1, f1, f0
      lfs       f0, 0x1C(r3)
      lfs       f2, 0x130(r4)
      fmadds    f1, f2, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	800955C8
 * Size:	000024
 */
void JPABaseParticle::getCalcCurrentPositionZ(const JPABaseEmitter*) const
{
    /*
    .loc_0x0:
      lwz       r4, 0xE4(r4)
      lfs       f1, 0x14(r3)
      lfs       f0, 0x2C(r3)
      lwz       r4, 0x20(r4)
      fadds     f1, f1, f0
      lfs       f0, 0x20(r3)
      lfs       f2, 0x134(r4)
      fmadds    f1, f2, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JPABaseParticle::getWidth(const JPABaseEmitter*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JPABaseParticle::getHeight(const JPABaseEmitter*) const
{
    // UNUSED FUNCTION
}