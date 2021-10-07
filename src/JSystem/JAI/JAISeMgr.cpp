

/*
 * --INFO--
 * Address:	800AE0A0
 * Size:	0003A4
 */
void JAInter::SeMgr::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stmw      r27, 0xC(r1)
      lwz       r3, -0x7498(r13)
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0xAC
      li        r3, 0
      bl        -0x770
      li        r31, 0
      li        r30, 0
      b         .loc_0xA0

    .loc_0x4C:
      li        r28, 0
      li        r27, 0
      li        r29, 0
      b         .loc_0x78

    .loc_0x5C:
      lwz       r3, -0x7498(r13)
      addi      r27, r27, 0x1
      lwz       r0, 0x1C(r3)
      lwzx      r3, r30, r0
      lbzx      r0, r3, r29
      addi      r29, r29, 0x2
      add       r28, r28, r0

    .loc_0x78:
      bl        -0x6A8
      cmplw     r27, r3
      blt+      .loc_0x5C
      bl        -0x680
      cmplw     r3, r28
      bge-      .loc_0x98
      mr        r3, r28
      bl        -0x7C8

    .loc_0x98:
      addi      r30, r30, 0x4
      addi      r31, r31, 0x1

    .loc_0xA0:
      bl        -0x6AC
      cmplw     r31, r3
      blt+      .loc_0x4C

    .loc_0xAC:
      lwz       r29, -0x7494(r13)
      bl        -0x6E0
      rlwinm    r3,r3,3,0,28
      mr        r4, r29
      li        r5, 0x20
      bl        -0x8A118
      stw       r3, -0x7424(r13)
      lwz       r29, -0x7494(r13)
      bl        -0x6FC
      rlwinm    r3,r3,2,0,29
      mr        r4, r29
      li        r5, 0x20
      bl        -0x8A134
      li        r31, 0
      stw       r3, -0x7428(r13)
      mr        r30, r31
      li        r29, 0
      b         .loc_0x1F4

    .loc_0xF4:
      lwz       r0, -0x7424(r13)
      add       r3, r0, r31
      bl        0x7560
      li        r27, 0
      b         .loc_0x130

    .loc_0x108:
      lwz       r3, -0x7498(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x7424(r13)
      mr        r4, r3
      lwzx      r3, r31, r0
      bl        -0x878E4
      addi      r27, r27, 0x1

    .loc_0x130:
      bl        -0x734
      cmplw     r27, r3
      blt+      .loc_0x108
      lwz       r4, -0x7494(r13)
      li        r3, 0x40
      li        r5, 0x20
      bl        -0x8A1A0
      lwz       r5, -0x7428(r13)
      li        r0, 0x2
      li        r4, 0
      stwx      r3, r5, r30
      mtctr     r0

    .loc_0x160:
      lwz       r0, -0x7428(r13)
      li        r11, 0
      addi      r9, r4, 0x4
      addi      r8, r4, 0x8
      lwzx      r3, r30, r0
      addi      r7, r4, 0xC
      addi      r6, r4, 0x10
      addi      r5, r4, 0x14
      stwx      r11, r3, r4
      addi      r3, r4, 0x18
      addi      r0, r4, 0x1C
      addi      r4, r4, 0x20
      lwz       r10, -0x7428(r13)
      lwzx      r10, r30, r10
      stwx      r11, r10, r9
      lwz       r9, -0x7428(r13)
      lwzx      r9, r30, r9
      stwx      r11, r9, r8
      lwz       r8, -0x7428(r13)
      lwzx      r8, r30, r8
      stwx      r11, r8, r7
      lwz       r7, -0x7428(r13)
      lwzx      r7, r30, r7
      stwx      r11, r7, r6
      lwz       r6, -0x7428(r13)
      lwzx      r6, r30, r6
      stwx      r11, r6, r5
      lwz       r5, -0x7428(r13)
      lwzx      r5, r30, r5
      stwx      r11, r5, r3
      lwz       r3, -0x7428(r13)
      lwzx      r3, r30, r3
      stwx      r11, r3, r0
      bdnz+     .loc_0x160
      addi      r31, r31, 0x8
      addi      r30, r30, 0x4
      addi      r29, r29, 0x1

    .loc_0x1F4:
      bl        -0x824
      cmplw     r29, r3
      blt+      .loc_0xF4
      lwz       r29, -0x7494(r13)
      bl        -0x800
      mulli     r3, r3, 0x18
      mr        r4, r29
      li        r5, 0x20
      bl        -0x8A26C
      stw       r3, -0x7430(r13)
      li        r27, 0
      lfs       f29, -0x7418(r2)
      li        r30, 0
      lfs       f30, -0x7414(r2)
      li        r29, 0xFF
      lfs       f31, -0x7410(r2)
      b         .loc_0x260

    .loc_0x238:
      lwz       r0, -0x7430(r13)
      addi      r27, r27, 0x1
      add       r3, r0, r30
      addi      r30, r30, 0x18
      stfs      f29, 0x4(r3)
      stfs      f29, 0x8(r3)
      stfs      f30, 0xC(r3)
      stfs      f31, 0x10(r3)
      stb       r29, 0x0(r3)
      stfs      f30, 0x14(r3)

    .loc_0x260:
      bl        -0x85C
      cmplw     r27, r3
      blt+      .loc_0x238
      bl        -0x870
      mr        r29, r3
      bl        -0x8A4
      mullw     r29, r3, r29
      lwz       r4, -0x7494(r13)
      li        r5, 0x20
      mulli     r3, r29, 0x43C
      addi      r3, r3, 0x10
      bl        -0x8A2E4
      lis       r4, 0x800B
      mr        r7, r29
      subi      r4, r4, 0x1BBC
      li        r5, 0
      li        r6, 0x43C
      bl        0x136AC
      lwz       r3, -0x7498(r13)
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2C0
      stw       r0, -0x742C(r13)
      b         .loc_0x30C

    .loc_0x2C0:
      lwz       r29, -0x7494(r13)
      bl        -0x8D0
      rlwinm    r3,r3,2,0,29
      mr        r4, r29
      li        r5, 0x20
      bl        -0x8A32C
      lis       r4, 0x804A
      stw       r3, -0x742C(r13)
      addi      r29, r4, 0x627C
      li        r27, 0
      li        r30, 0
      b         .loc_0x300

    .loc_0x2F0:
      lwz       r3, -0x742C(r13)
      addi      r27, r27, 0x1
      stwx      r29, r3, r30
      addi      r30, r30, 0x4

    .loc_0x300:
      bl        -0x90C
      cmplw     r27, r3
      blt+      .loc_0x2F0

    .loc_0x30C:
      lwz       r29, -0x7494(r13)
      bl        -0x940
      mr        r4, r29
      li        r5, 0x20
      bl        -0x8A374
      stw       r3, -0x7410(r13)
      lwz       r29, -0x7494(r13)
      bl        -0x958
      rlwinm    r3,r3,2,0,29
      mr        r4, r29
      li        r5, 0x20
      bl        -0x8A390
      li        r30, 0
      stw       r3, -0x7414(r13)
      lfs       f31, -0x7418(r2)
      mr        r29, r30
      li        r27, 0
      b         .loc_0x36C

    .loc_0x354:
      lwz       r3, -0x7410(r13)
      stbx      r29, r3, r27
      addi      r27, r27, 0x1
      lwz       r3, -0x7414(r13)
      stfsx     f31, r3, r30
      addi      r30, r30, 0x4

    .loc_0x36C:
      bl        -0x99C
      cmplw     r27, r3
      blt+      .loc_0x354
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	800AE444
 * Size:	0000F0
 */
void JAInter::SeParameter::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x800B
      li        r5, 0
      stw       r0, 0x14(r1)
      subi      r4, r4, 0x1A9C
      li        r6, 0x10
      li        r7, 0x10
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x24
      bl        0x133CC
      lis       r4, 0x800B
      addi      r3, r31, 0x124
      subi      r4, r4, 0x1A9C
      li        r5, 0
      li        r6, 0x10
      li        r7, 0x8
      bl        0x133B0
      lis       r4, 0x800B
      addi      r3, r31, 0x1A4
      subi      r4, r4, 0x1AB4
      li        r5, 0
      li        r6, 0x10
      li        r7, 0x8
      bl        0x13394
      lis       r4, 0x800B
      addi      r3, r31, 0x224
      subi      r4, r4, 0x1A9C
      li        r5, 0
      li        r6, 0x10
      li        r7, 0x8
      bl        0x13378
      lis       r4, 0x800B
      addi      r3, r31, 0x2A4
      subi      r4, r4, 0x1ACC
      li        r5, 0
      li        r6, 0x10
      li        r7, 0x8
      bl        0x1335C
      lis       r4, 0x800B
      addi      r3, r31, 0x324
      subi      r4, r4, 0x1ACC
      li        r5, 0
      li        r6, 0x10
      li        r7, 0x8
      bl        0x13340
      lis       r4, 0x800B
      addi      r3, r31, 0x3A4
      subi      r4, r4, 0x1A9C
      li        r5, 0
      li        r6, 0x10
      li        r7, 0x8
      bl        0x13324
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
 * Address:	800AE534
 * Size:	000018
 */
void JAInter::MoveParaSetInitZero::__ct(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x7414(r2)
      li        r0, 0
      stfs      f0, 0x4(r3)
      stfs      f0, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800AE54C
 * Size:	000018
 */
void JAInter::MoveParaSetInitHalf::__ct(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x7410(r2)
      li        r0, 0
      stfs      f0, 0x4(r3)
      stfs      f0, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800AE564
 * Size:	000018
 */
void JAInter::MoveParaSet::__defctor(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x7418(r2)
      li        r0, 0
      stfs      f0, 0x4(r3)
      stfs      f0, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800AE57C
 * Size:	000050
 */
void JAInter::SeMgr::startSeSequence(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8000
      stw       r0, 0x14(r1)
      li        r0, 0
      addi      r3, r3, 0x800
      stw       r0, -0x7420(r13)
      bl        0x8F80
      lis       r4, 0x8000
      mr        r8, r3
      addi      r5, r4, 0x800
      subi      r3, r13, 0x7420
      li        r4, 0
      li        r6, 0x1
      li        r7, 0x4
      bl        0x48E0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800AE5CC
 * Size:	000034
 */
void JAInter::SeMgr::processGFrameSe(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, -0x7420(r13)
      cmplwi    r0, 0
      beq-      .loc_0x24
      bl        .loc_0x34
      bl        0xDD0
      bl        0x7F8

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x34:
    */
}

/*
 * --INFO--
 * Address:	800AE600
 * Size:	0007E4
 */
void JAInter::SeMgr::checkNextFrameSe(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x140(r1)
      mflr      r0
      stw       r0, 0x144(r1)
      stfd      f31, 0x130(r1)
      psq_st    f31,0x138(r1),0,0
      stfd      f30, 0x120(r1)
      psq_st    f30,0x128(r1),0,0
      stfd      f29, 0x110(r1)
      psq_st    f29,0x118(r1),0,0
      stmw      r19, 0xDC(r1)
      lwz       r3, -0x7420(r13)
      cmplwi    r3, 0
      beq-      .loc_0x7B8
      lbz       r0, 0x15(r3)
      cmplwi    r0, 0x4
      bge-      .loc_0x44
      b         .loc_0x7B8

    .loc_0x44:
      bl        -0xB70
      fmr       f31, f1
      bl        -0xB78
      lfs       f2, -0x740C(r2)
      lfs       f0, -0x7414(r2)
      fdivs     f30, f1, f2
      fcmpu     cr0, f0, f30
      bne-      .loc_0x68
      lfs       f30, -0x7418(r2)

    .loc_0x68:
      li        r26, 0
      lis       r4, 0x804A
      lis       r3, 0x8000
      addi      r30, r1, 0xC
      mr        r25, r26
      mr        r24, r26
      addi      r28, r4, 0x6270
      subi      r29, r3, 0x1
      li        r31, 0
      b         .loc_0x7AC

    .loc_0x90:
      lbz       r0, -0x741C(r13)
      li        r8, 0
      lwz       r7, -0x742C(r13)
      li        r5, 0xFF
      rlwinm    r6,r0,2,0,29
      li        r4, 0
      b         .loc_0xCC

    .loc_0xAC:
      rlwinm    r0,r8,0,24,31
      addi      r3, r1, 0xC
      mulli     r0, r0, 0xC
      addi      r8, r8, 0x1
      add       r3, r3, r0
      stw       r29, 0x4(r3)
      stb       r5, 0x0(r3)
      stw       r4, 0x8(r3)

    .loc_0xCC:
      lwzx      r0, r7, r6
      rlwinm    r3,r8,0,24,31
      lbzx      r0, r26, r0
      cmplw     r3, r0
      blt+      .loc_0xAC
      lwz       r3, -0x7424(r13)
      addi      r0, r25, 0x4
      li        r20, 0
      lwzx      r3, r3, r0
      lwz       r22, 0x0(r3)
      b         .loc_0x588

    .loc_0xF8:
      lwz       r21, 0x0(r22)
      li        r23, 0
      lbz       r3, 0x15(r21)
      cmplwi    r3, 0x1
      bne-      .loc_0x128
      lwz       r0, 0x20(r21)
      rlwinm.   r0,r0,0,20,21
      beq-      .loc_0x128
      lbz       r3, 0x16(r21)
      subi      r0, r3, 0x1
      stb       r0, 0x16(r21)
      b         .loc_0x14C

    .loc_0x128:
      lwz       r0, 0x20(r21)
      rlwinm.   r0,r0,0,20,21
      bne-      .loc_0x14C
      cmplwi    r3, 0x5
      bne-      .loc_0x14C
      lwz       r22, 0xC(r22)
      mr        r3, r21
      li        r23, 0x1
      bl        0x110C

    .loc_0x14C:
      lbz       r0, 0x16(r21)
      cmplwi    r0, 0
      bne-      .loc_0x16C
      lwz       r22, 0xC(r22)
      mr        r3, r21
      li        r23, 0x1
      bl        0x10F0
      b         .loc_0x574

    .loc_0x16C:
      lbz       r0, 0x15(r21)
      cmplwi    r0, 0
      beq-      .loc_0x574
      lwz       r0, 0x3C(r21)
      lfs       f29, -0x7408(r2)
      cmplwi    r0, 0
      lwz       r27, 0x34(r21)
      bne-      .loc_0x1CC
      lis       r3, 0x804A
      lfs       f0, -0x7414(r2)
      lfs       f1, 0x6270(r3)
      stfs      f1, 0x0(r27)
      lfs       f1, 0x4(r28)
      stfs      f1, 0x4(r27)
      lfs       f1, 0x8(r28)
      stfs      f1, 0x8(r27)
      lfs       f1, 0x0(r27)
      stfs      f1, 0xC(r27)
      lfs       f1, 0x4(r27)
      stfs      f1, 0x10(r27)
      lfs       f1, 0x8(r27)
      stfs      f1, 0x14(r27)
      stfs      f0, 0x18(r27)
      b         .loc_0x320

    .loc_0x1CC:
      lbz       r0, 0x1A(r21)
      cmplwi    r0, 0
      bne-      .loc_0x320
      lfs       f0, 0x0(r27)
      stfs      f0, 0xC(r27)
      lfs       f0, 0x4(r27)
      stfs      f0, 0x10(r27)
      lfs       f0, 0x8(r27)
      stfs      f0, 0x14(r27)
      lbz       r0, 0x18(r21)
      cmplwi    r0, 0x4
      bne-      .loc_0x200
      li        r0, 0

    .loc_0x200:
      rlwinm    r0,r0,0,24,31
      lwz       r5, -0x7498(r13)
      mulli     r3, r0, 0xC
      lwz       r4, 0x3C(r21)
      lwz       r6, 0x4(r5)
      mr        r5, r27
      addi      r0, r3, 0x8
      lwzx      r3, r6, r0
      bl        0x3C3B8
      lfs       f1, 0x0(r27)
      lfs       f0, 0x4(r27)
      fmuls     f2, f1, f1
      lfs       f3, 0x8(r27)
      fmuls     f1, f0, f0
      lfs       f0, -0x7414(r2)
      fmuls     f3, f3, f3
      fadds     f1, f2, f1
      fadds     f4, f3, f1
      fcmpo     cr0, f4, f0
      ble-      .loc_0x298
      fsqrte    f1, f4
      lfd       f3, -0x7400(r2)
      lfd       f2, -0x73F8(r2)
      fmul      f0, f1, f1
      fmul      f1, f3, f1
      fnmsub    f0, f4, f0, f2
      fmul      f1, f1, f0
      fmul      f0, f1, f1
      fmul      f1, f3, f1
      fnmsub    f0, f4, f0, f2
      fmul      f1, f1, f0
      fmul      f0, f1, f1
      fmul      f1, f3, f1
      fnmsub    f0, f4, f0, f2
      fmul      f0, f1, f0
      fmul      f4, f4, f0
      frsp      f4, f4
      b         .loc_0x31C

    .loc_0x298:
      lfd       f0, -0x73F0(r2)
      fcmpo     cr0, f4, f0
      bge-      .loc_0x2B0
      lis       r3, 0x8051
      lfs       f4, 0x48B0(r3)
      b         .loc_0x31C

    .loc_0x2B0:
      stfs      f4, 0x8(r1)
      lis       r0, 0x7F80
      lwz       r4, 0x8(r1)
      rlwinm    r3,r4,0,1,8
      cmpw      r3, r0
      beq-      .loc_0x2D8
      bge-      .loc_0x308
      cmpwi     r3, 0
      beq-      .loc_0x2F0
      b         .loc_0x308

    .loc_0x2D8:
      rlwinm.   r0,r4,0,9,31
      beq-      .loc_0x2E8
      li        r0, 0x1
      b         .loc_0x30C

    .loc_0x2E8:
      li        r0, 0x2
      b         .loc_0x30C

    .loc_0x2F0:
      rlwinm.   r0,r4,0,9,31
      beq-      .loc_0x300
      li        r0, 0x5
      b         .loc_0x30C

    .loc_0x300:
      li        r0, 0x3
      b         .loc_0x30C

    .loc_0x308:
      li        r0, 0x4

    .loc_0x30C:
      cmpwi     r0, 0x1
      bne-      .loc_0x31C
      lis       r3, 0x8051
      lfs       f4, 0x48B0(r3)

    .loc_0x31C:
      stfs      f4, 0x18(r27)

    .loc_0x320:
      mr        r3, r21
      bl        0x5240
      lha       r4, 0x1C(r21)
      rlwinm    r3,r3,0,24,31
      extsh.    r0, r4
      beq-      .loc_0x35C
      add       r3, r3, r4
      extsh.    r0, r3
      bge-      .loc_0x34C
      li        r3, 0
      b         .loc_0x35C

    .loc_0x34C:
      extsh     r0, r3
      cmpwi     r0, 0xFF
      ble-      .loc_0x35C
      li        r3, 0xFF

    .loc_0x35C:
      extsh     r3, r3
      lis       r0, 0x4330
      subfic    r3, r3, 0xFF
      stw       r0, 0xD0(r1)
      mulli     r0, r3, 0x4C
      lfd       f1, -0x73E0(r2)
      xoris     r0, r0, 0x8000
      stw       r0, 0xD4(r1)
      lfd       f0, 0xD0(r1)
      fsubs     f0, f0, f1
      fdivs     f1, f0, f30
      bl        0x131C4
      lfs       f0, 0x18(r27)
      mr        r19, r3
      fdivs     f1, f0, f30
      bl        0x131B4
      add       r0, r3, r19
      lfs       f0, -0x7414(r2)
      stw       r0, 0x24(r21)
      lfs       f1, 0x8(r27)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x3D0
      lfs       f0, -0x73E8(r2)
      fmuls     f0, f0, f1
      fdivs     f1, f0, f30
      bl        0x1318C
      lwz       r0, 0x24(r21)
      add       r0, r3, r0
      stw       r0, 0x24(r21)

    .loc_0x3D0:
      lfs       f1, 0x18(r27)
      lfs       f0, -0x7408(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3E4
      fmr       f29, f1

    .loc_0x3E4:
      mr        r3, r21
      bl        0x5160
      rlwinm.   r0,r3,0,26,26
      beq-      .loc_0x3FC
      fmr       f0, f31
      b         .loc_0x400

    .loc_0x3FC:
      lfs       f0, -0x73E4(r2)

    .loc_0x400:
      fcmpo     cr0, f29, f0
      ble-      .loc_0x488
      lwz       r0, 0x20(r21)
      rlwinm.   r0,r0,0,20,21
      bne-      .loc_0x470
      lbz       r0, 0x15(r21)
      cmplwi    r0, 0x1
      beq-      .loc_0x45C
      lbz       r0, 0x14(r21)
      cmplwi    r0, 0xFF
      beq-      .loc_0x45C
      rlwinm    r3,r0,28,28,31
      lwz       r5, -0x7420(r13)
      addis     r4, r3, 0x2000
      rlwinm    r0,r0,4,24,27
      addi      r3, r5, 0x30C
      li        r5, 0
      add       r4, r4, r0
      bl        -0xC8BC
      lwz       r3, -0x7420(r13)
      li        r5, 0x1
      lbz       r4, 0x14(r21)
      bl        0x5A5C

    .loc_0x45C:
      li        r3, 0x5
      li        r0, 0xFF
      stb       r3, 0x15(r21)
      stb       r0, 0x14(r21)
      b         .loc_0x574

    .loc_0x470:
      lwz       r22, 0xC(r22)
      mr        r3, r21
      li        r23, 0x1
      li        r4, 0
      bl        0x16B0
      b         .loc_0x574

    .loc_0x488:
      mr        r3, r21
      bl        0x5098
      lbz       r0, -0x741C(r13)
      rlwinm    r5,r3,1,23,30
      lwz       r3, -0x742C(r13)
      li        r4, 0
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      lbzx      r5, r3, r5
      subi      r0, r5, 0x1
      b         .loc_0x568

    .loc_0x4B4:
      rlwinm    r6,r4,0,24,31
      addi      r3, r1, 0xC
      mulli     r6, r6, 0xC
      lwz       r7, 0x24(r21)
      add       r3, r3, r6
      lwz       r6, 0x4(r3)
      cmplw     r7, r6
      blt-      .loc_0x4EC
      cmplw     r6, r7
      bne-      .loc_0x564
      lbz       r7, 0x0(r3)
      lbz       r6, 0x15(r21)
      cmplw     r7, r6
      blt-      .loc_0x564

    .loc_0x4EC:
      rlwinm    r6,r20,0,24,31
      cmplw     r6, r5
      bge-      .loc_0x500
      addi      r6, r6, 0x1
      rlwinm    r20,r6,0,24,31

    .loc_0x500:
      rlwinm    r10,r0,0,24,31
      rlwinm    r4,r4,0,24,31
      b         .loc_0x540

    .loc_0x50C:
      rlwinm    r6,r10,0,24,31
      addi      r8, r1, 0xC
      mulli     r7, r6, 0xC
      subi      r10, r10, 0x1
      mr        r9, r8
      add       r8, r8, r7
      lwz       r6, -0x8(r8)
      add       r9, r9, r7
      stw       r6, 0x4(r9)
      lwz       r6, -0x4(r8)
      stw       r6, 0x8(r9)
      lbz       r6, -0xC(r8)
      stb       r6, 0x0(r9)

    .loc_0x540:
      rlwinm    r6,r10,0,24,31
      cmplw     r6, r4
      bgt+      .loc_0x50C
      lwz       r7, 0x24(r21)
      mr        r4, r5
      lbz       r6, 0x15(r21)
      stw       r7, 0x4(r3)
      stw       r21, 0x8(r3)
      stb       r6, 0x0(r3)

    .loc_0x564:
      addi      r4, r4, 0x1

    .loc_0x568:
      rlwinm    r3,r4,0,24,31
      cmplw     r3, r5
      blt+      .loc_0x4B4

    .loc_0x574:
      cmplwi    r22, 0
      beq-      .loc_0x588
      rlwinm.   r0,r23,0,24,31
      bne-      .loc_0x588
      lwz       r22, 0xC(r22)

    .loc_0x588:
      cmplwi    r22, 0
      bne+      .loc_0xF8
      rlwinm    r0,r20,0,24,31
      li        r6, 0
      li        r5, 0x2
      li        r4, 0x3
      b         .loc_0x5D8

    .loc_0x5A4:
      rlwinm    r3,r6,0,24,31
      mulli     r3, r3, 0xC
      addi      r3, r3, 0x8
      lwzx      r7, r30, r3
      lbz       r3, 0x15(r7)
      cmplwi    r3, 0x1
      bne-      .loc_0x5C8
      stb       r5, 0x15(r7)
      b         .loc_0x5D4

    .loc_0x5C8:
      cmplwi    r3, 0x4
      bne-      .loc_0x5D4
      stb       r4, 0x15(r7)

    .loc_0x5D4:
      addi      r6, r6, 0x1

    .loc_0x5D8:
      rlwinm    r3,r6,0,24,31
      cmplw     r3, r0
      blt+      .loc_0x5A4
      lbz       r0, -0x741C(r13)
      li        r22, 0
      lwz       r3, -0x742C(r13)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      lbzx      r21, r3, r26
      addi      r27, r21, 0x1
      b         .loc_0x790

    .loc_0x604:
      lwz       r7, -0x7428(r13)
      rlwinm    r23,r22,2,22,29
      li        r0, 0
      lwzx      r4, r24, r7
      lwzx      r3, r4, r23
      cmplwi    r3, 0
      bne-      .loc_0x628
      li        r0, 0x1
      b         .loc_0x6C8

    .loc_0x628:
      lbz       r5, 0x15(r3)
      cmplwi    r5, 0x4
      bne-      .loc_0x660
      lwz       r0, 0x20(r3)
      rlwinm.   r0,r0,0,20,21
      beq-      .loc_0x648
      bl        0xC14
      b         .loc_0x658

    .loc_0x648:
      li        r4, 0x1
      li        r0, 0xFF
      stb       r4, 0x15(r3)
      stb       r0, 0x14(r3)

    .loc_0x658:
      li        r0, 0x1
      b         .loc_0x6C8

    .loc_0x660:
      cmplwi    r5, 0
      beq-      .loc_0x670
      cmplwi    r5, 0x5
      bne-      .loc_0x680

    .loc_0x670:
      li        r3, 0
      li        r0, 0x1
      stwx      r3, r4, r23
      b         .loc_0x6C8

    .loc_0x680:
      li        r9, 0
      addi      r5, r1, 0xC
      mr        r4, r9
      b         .loc_0x6BC

    .loc_0x690:
      rlwinm    r3,r9,0,24,31
      lwzx      r6, r7, r24
      mulli     r3, r3, 0xC
      lwzx      r6, r23, r6
      addi      r8, r3, 0x8
      lwzx      r3, r5, r8
      cmplw     r6, r3
      bne-      .loc_0x6B8
      stwx      r4, r5, r8
      mr        r9, r21

    .loc_0x6B8:
      addi      r9, r9, 0x1

    .loc_0x6BC:
      rlwinm    r3,r9,0,24,31
      cmplw     r3, r21
      blt+      .loc_0x690

    .loc_0x6C8:
      rlwinm    r3,r0,0,24,31
      cmplwi    r3, 0x1
      bne-      .loc_0x78C
      addi      r6, r1, 0xC
      li        r3, 0
      b         .loc_0x76C

    .loc_0x6E0:
      rlwinm    r4,r3,0,24,31
      mulli     r4, r4, 0xC
      addi      r8, r4, 0x8
      lwzx      r7, r6, r8
      cmplwi    r7, 0
      beq-      .loc_0x768
      lbz       r4, 0x15(r7)
      cmplwi    r4, 0x3
      beq-      .loc_0x768
      lwz       r9, -0x7428(r13)
      li        r10, 0
      b         .loc_0x73C

    .loc_0x710:
      lwzx      r5, r9, r24
      rlwinm    r4,r10,2,22,29
      lwzx      r5, r5, r4
      cmplwi    r5, 0
      beq-      .loc_0x738
      lwzx      r4, r6, r8
      cmplw     r4, r5
      bne-      .loc_0x738
      li        r0, 0
      mr        r10, r21

    .loc_0x738:
      addi      r10, r10, 0x1

    .loc_0x73C:
      rlwinm    r4,r10,0,24,31
      cmplw     r4, r21
      blt+      .loc_0x710
      rlwinm    r4,r0,0,24,31
      cmplwi    r4, 0x1
      bne-      .loc_0x768
      lwzx      r4, r24, r9
      li        r3, 0
      stwx      r3, r6, r8
      rlwinm    r3,r27,0,24,31
      stwx      r7, r23, r4

    .loc_0x768:
      addi      r3, r3, 0x1

    .loc_0x76C:
      rlwinm    r4,r3,0,24,31
      cmplw     r4, r21
      blt+      .loc_0x6E0
      bne-      .loc_0x78C
      lwz       r0, -0x7428(r13)
      li        r4, 0
      lwzx      r3, r24, r0
      stwx      r4, r3, r23

    .loc_0x78C:
      addi      r22, r22, 0x1

    .loc_0x790:
      rlwinm    r0,r22,0,24,31
      cmplw     r0, r21
      blt+      .loc_0x604
      addi      r26, r26, 0x2
      addi      r25, r25, 0x8
      addi      r24, r24, 0x4
      addi      r31, r31, 0x1

    .loc_0x7AC:
      bl        -0x133C
      cmplw     r31, r3
      blt+      .loc_0x90

    .loc_0x7B8:
      psq_l     f31,0x138(r1),0,0
      lfd       f31, 0x130(r1)
      psq_l     f30,0x128(r1),0,0
      lfd       f30, 0x120(r1)
      psq_l     f29,0x118(r1),0,0
      lfd       f29, 0x110(r1)
      lmw       r19, 0xDC(r1)
      lwz       r0, 0x144(r1)
      mtlr      r0
      addi      r1, r1, 0x140
      blr
    */
}

/*
 * --INFO--
 * Address:	800AEDE4
 * Size:	000488
 */
void JAInter::SeMgr::checkPlayingSe(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r21, 0x24(r1)
      li        r26, 0
      li        r25, 0
      b         .loc_0x464

    .loc_0x1C:
      rlwinm    r30,r25,2,22,29
      rlwinm    r29,r25,1,23,30
      li        r28, 0
      b         .loc_0x440

    .loc_0x2C:
      lwz       r3, -0x7428(r13)
      rlwinm    r0,r28,2,22,29
      lwzx      r3, r30, r3
      lwzx      r27, r3, r0
      cmplwi    r27, 0
      beq-      .loc_0x438
      lwz       r4, 0x2C(r27)
      rlwinm    r3,r26,28,28,31
      addis     r3, r3, 0x2000
      rlwinm    r0,r26,4,24,27
      addi      r4, r4, 0x1
      addi      r5, r1, 0xA
      stw       r4, 0x2C(r27)
      add       r24, r3, r0
      addis     r4, r24, 0x2
      lwz       r3, -0x7420(r13)
      addi      r31, r3, 0x30C
      mr        r3, r31
      bl        -0xCC18
      mr        r3, r31
      mr        r4, r24
      addi      r5, r1, 0x8
      bl        -0xCC28
      lbz       r3, 0x15(r27)
      cmplwi    r3, 0x2
      bne-      .loc_0x368
      mr        r3, r27
      bl        0x4CCC
      rlwinm.   r0,r3,0,28,28
      stb       r26, 0x14(r27)
      mr        r21, r3
      beq-      .loc_0xB4
      mr        r3, r27
      bl        0x408

    .loc_0xB4:
      rlwinm.   r5,r21,0,24,25
      beq-      .loc_0x154
      lis       r3, 0x19
      lwz       r4, -0x7478(r13)
      addi      r0, r3, 0x660D
      lfs       f0, -0x7418(r2)
      mullw     r3, r4, r0
      lfs       f2, -0x73D8(r2)
      cmpwi     r5, 0x80
      addis     r3, r3, 0x3C6F
      subi      r3, r3, 0xCA1
      rlwinm    r0,r3,23,9,31
      stw       r3, -0x7478(r13)
      oris      r0, r0, 0x3F80
      stw       r0, 0xC(r1)
      lfs       f1, 0xC(r1)
      fsubs     f0, f1, f0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      beq-      .loc_0x134
      bge-      .loc_0x11C
      cmpwi     r5, 0x40
      beq-      .loc_0x128
      b         .loc_0x14C

    .loc_0x11C:
      cmpwi     r5, 0xC0
      beq-      .loc_0x140
      b         .loc_0x14C

    .loc_0x128:
      rlwinm    r0,r0,0,28,31
      stb       r0, 0x17(r27)
      b         .loc_0x154

    .loc_0x134:
      rlwinm    r0,r0,0,27,31
      stb       r0, 0x17(r27)
      b         .loc_0x154

    .loc_0x140:
      rlwinm    r0,r0,0,26,31
      stb       r0, 0x17(r27)
      b         .loc_0x154

    .loc_0x14C:
      li        r0, 0
      stb       r0, 0x17(r27)

    .loc_0x154:
      li        r23, 0
      li        r21, 0x1
      b         .loc_0x19C

    .loc_0x160:
      rlwinm    r0,r23,0,24,31
      slw       r22, r21, r0
      and.      r0, r3, r22
      beq-      .loc_0x198
      rlwinm    r4,r23,1,23,30
      lwz       r3, -0x7420(r13)
      addi      r0, r4, 0x48
      lbz       r4, 0x14(r27)
      lhzx      r6, r27, r0
      mr        r5, r23
      bl        0x5620
      lhz       r0, 0x68(r27)
      xor       r0, r0, r22
      sth       r0, 0x68(r27)

    .loc_0x198:
      addi      r23, r23, 0x1

    .loc_0x19C:
      lhz       r3, 0x68(r27)
      cmplwi    r3, 0
      bne+      .loc_0x160
      mr        r3, r27
      lwz       r12, 0x10(r27)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x7498(r13)
      mr        r4, r27
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x28(r27)
      cmplwi    r0, 0x1
      ble-      .loc_0x228
      mr        r3, r27
      lfs       f1, -0x7414(r2)
      lwz       r12, 0x10(r27)
      li        r4, 0
      li        r5, 0x6
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r27
      lfs       f1, -0x7418(r2)
      lwz       r12, 0x10(r27)
      li        r5, 0x6
      lwz       r4, 0x28(r27)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x28(r27)

    .loc_0x228:
      mr        r3, r27
      bl        0x47C
      lwz       r3, -0x7498(r13)
      lwz       r4, 0x20(r27)
      bl        -0x2550
      mr        r0, r3
      mr        r3, r27
      mr        r23, r0
      li        r4, 0x800
      bl        0x4B24
      cmplwi    r3, 0
      beq-      .loc_0x278
      lwz       r3, -0x7498(r13)
      lwz       r4, 0x30(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      add       r0, r23, r3
      rlwinm    r23,r0,0,16,31

    .loc_0x278:
      bl        -0x14D8
      cmplwi    r3, 0x1
      bne-      .loc_0x2EC
      mr        r3, r27
      li        r4, 0x1000
      bl        0x4AE4
      cmplwi    r3, 0
      beq-      .loc_0x2EC
      lwz       r21, 0x34(r27)
      bl        -0x15AC
      lfs       f0, 0x18(r21)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x2E0
      bl        -0x15BC
      bl        0x12AB8
      lwz       r4, 0x34(r27)
      mr        r21, r3
      lfs       f1, 0x18(r4)
      bl        0x12AA8
      mr        r22, r3
      bl        -0x1510
      rlwinm    r0,r3,0,16,31
      mullw     r0, r0, r22
      divwu     r0, r0, r21
      rlwinm    r5,r0,0,16,31
      b         .loc_0x2F0

    .loc_0x2E0:
      bl        -0x1528
      mr        r5, r3
      b         .loc_0x2F0

    .loc_0x2EC:
      li        r5, 0

    .loc_0x2F0:
      mr        r3, r31
      addis     r4, r24, 0x3
      bl        -0xCF50
      lwz       r3, -0x7498(r13)
      lwz       r4, 0x30(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r31
      addis     r4, r24, 0x6
      bl        -0xCF78
      mr        r3, r31
      mr        r5, r23
      addis     r4, r24, 0x4
      bl        -0xCF88
      mr        r3, r31
      mr        r4, r24
      li        r5, 0x1
      bl        -0xCF98
      lwz       r0, 0x20(r27)
      rlwinm.   r0,r0,0,20,21
      beq-      .loc_0x35C
      li        r0, 0x4
      stb       r0, 0x15(r27)
      b         .loc_0x438

    .loc_0x35C:
      li        r0, 0x5
      stb       r0, 0x15(r27)
      b         .loc_0x438

    .loc_0x368:
      lhz       r0, 0xA(r1)
      cmplwi    r0, 0
      bne-      .loc_0x38C
      lhz       r0, 0x8(r1)
      cmplwi    r0, 0x1
      beq-      .loc_0x38C
      mr        r3, r27
      bl        0x6EC
      b         .loc_0x438

    .loc_0x38C:
      cmplwi    r3, 0x3
      bne-      .loc_0x438
      lwz       r0, 0x28(r27)
      cmplwi    r0, 0
      beq-      .loc_0x3FC
      lfs       f1, -0x7414(r2)
      lfs       f0, 0x1D0(r27)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x3F0
      mr        r3, r27
      lwz       r12, 0x10(r27)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      mr        r3, r27
      bl        0x2E0
      lwz       r0, 0x20(r27)
      rlwinm.   r0,r0,0,20,21
      beq-      .loc_0x3E4
      li        r0, 0x4
      stb       r0, 0x15(r27)
      b         .loc_0x438

    .loc_0x3E4:
      li        r0, 0x5
      stb       r0, 0x15(r27)
      b         .loc_0x438

    .loc_0x3F0:
      mr        r3, r27
      bl        0x67C
      b         .loc_0x438

    .loc_0x3FC:
      mr        r3, r27
      lwz       r12, 0x10(r27)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      mr        r3, r27
      bl        0x294
      lwz       r0, 0x20(r27)
      rlwinm.   r0,r0,0,20,21
      beq-      .loc_0x430
      li        r0, 0x4
      stb       r0, 0x15(r27)
      b         .loc_0x438

    .loc_0x430:
      li        r0, 0x5
      stb       r0, 0x15(r27)

    .loc_0x438:
      addi      r26, r26, 0x1
      addi      r28, r28, 0x1

    .loc_0x440:
      lbz       r0, -0x741C(r13)
      rlwinm    r4,r28,0,24,31
      lwz       r3, -0x742C(r13)
      rlwinm    r0,r0,2,0,29
      lwzx      r0, r3, r0
      lbzx      r0, r29, r0
      cmplw     r4, r0
      blt+      .loc_0x2C
      addi      r25, r25, 0x1

    .loc_0x464:
      bl        -0x17D8
      rlwinm    r0,r25,0,24,31
      cmplw     r0, r3
      blt+      .loc_0x1C
      lmw       r21, 0x24(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	800AF26C
 * Size:	000030
 */
void JAISe::setVolume(float, unsigned long, unsigned char)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r6, 0
      stw       r0, 0x14(r1)
      mr        r0, r4
      mr        r4, r5
      mr        r5, r0
      bl        0x53D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800AF29C
 * Size:	0000F0
 */
void JAInter::SeMgr::setSeqMuteFromSeStart((JAISound*))
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
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0xC4

    .loc_0x28:
      mr        r3, r30
      bl        0x4560
      lwz       r4, -0x7420(r13)
      lwz       r29, 0x48(r3)
      lbz       r0, 0x14(r4)
      cmplw     r30, r0
      beq-      .loc_0xC0
      cmplwi    r29, 0
      beq-      .loc_0xC0
      mr        r3, r29
      bl        0x485C
      rlwinm.   r0,r3,0,28,28
      bne-      .loc_0xC0
      bl        -0x177C
      mr        r31, r3
      bl        -0x178C
      rlwinm    r3,r3,0,24,31
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      mr        r3, r29
      lwz       r12, 0x10(r29)
      mr        r4, r31
      stw       r0, 0x8(r1)
      li        r5, 0x9
      lfd       f2, -0x73D0(r2)
      lfd       f1, 0x8(r1)
      lfs       f0, -0x73D4(r2)
      fsubs     f1, f1, f2
      lwz       r12, 0x1C(r12)
      fdivs     f1, f1, f0
      mtctr     r12
      bctrl
      lbz       r0, 0x14(r28)
      li        r3, 0x1
      lwz       r4, -0x7418(r13)
      slw       r0, r3, r0
      or        r0, r4, r0
      stw       r0, -0x7418(r13)

    .loc_0xC0:
      addi      r30, r30, 0x1

    .loc_0xC4:
      bl        -0x1894
      cmplw     r30, r3
      blt+      .loc_0x28
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
 * Address:	800AF38C
 * Size:	00002C
 */
void JAISequence::setVolume(float, unsigned long, unsigned char)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      mr        r0, r4
      mr        r4, r5
      mr        r5, r0
      bl        0x4F78
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAInter::SeMgr::clearSeqMuteFromSeStop((JAISound*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AF3B8
 * Size:	0000D4
 */
void JAInter::SeMgr::checkSeMovePara(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      lwz       r3, -0x7420(r13)
      cmplwi    r3, 0
      beq-      .loc_0xC0
      lbz       r0, 0x2C1(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x2C
      b         .loc_0xC0

    .loc_0x2C:
      li        r30, 0
      b         .loc_0xB0

    .loc_0x34:
      rlwinm    r3,r30,3,21,28
      lwz       r4, -0x7424(r13)
      addi      r0, r3, 0x4
      lwzx      r3, r4, r0
      lwz       r29, 0x0(r3)
      b         .loc_0xA4

    .loc_0x4C:
      lwz       r28, 0x0(r29)
      li        r27, 0
      b         .loc_0x94

    .loc_0x58:
      rlwinm    r0,r27,4,20,27
      add       r31, r28, r0
      addi      r3, r31, 0x16C
      bl        0x64D4
      addi      r3, r31, 0x1EC
      bl        0x64CC
      addi      r3, r31, 0x2EC
      bl        0x64C4
      addi      r3, r31, 0x36C
      bl        0x64BC
      addi      r3, r31, 0x3EC
      bl        0x64B4
      addi      r3, r31, 0x26C
      bl        0x64AC
      addi      r27, r27, 0x1

    .loc_0x94:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x8
      blt+      .loc_0x58
      lwz       r29, 0xC(r29)

    .loc_0xA4:
      cmplwi    r29, 0
      bne+      .loc_0x4C
      addi      r30, r30, 0x1

    .loc_0xB0:
      bl        -0x19F8
      rlwinm    r0,r30,0,24,31
      cmplw     r0, r3
      blt+      .loc_0x34

    .loc_0xC0:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	800AF48C
 * Size:	000168
 */
void JAInter::SeMgr::sendSeAllParameter((JAISe*))
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
      lbz       r0, 0x14(r28)
      lwz       r3, -0x7420(r13)
      mulli     r0, r0, 0x18
      lwz       r4, -0x7430(r13)
      lbz       r3, 0x14(r3)
      add       r30, r4, r0
      bl        0x4364
      mr        r0, r3
      mr        r3, r28
      mr        r29, r0
      bl        0x4650
      lwz       r4, -0x7414(r13)
      rlwinm    r0,r3,2,22,29
      lwz       r5, 0x46C(r28)
      mr        r3, r28
      lfsx      f1, r4, r0
      mr        r4, r29
      addi      r6, r28, 0x16C
      addi      r8, r30, 0x4
      li        r7, 0x3
      bl        .loc_0x168
      lwz       r5, 0x470(r28)
      mr        r3, r28
      lfs       f1, -0x7410(r2)
      mr        r4, r29
      addi      r6, r28, 0x1EC
      addi      r8, r30, 0x10
      li        r7, 0x5
      bl        0x1E4
      lwz       r5, 0x474(r28)
      mr        r3, r28
      lfs       f1, -0x7418(r2)
      mr        r4, r29
      addi      r6, r28, 0x26C
      addi      r8, r30, 0x8
      li        r7, 0x4
      bl        .loc_0x168
      lwz       r5, 0x478(r28)
      mr        r3, r28
      lfs       f1, -0x7414(r2)
      mr        r4, r29
      addi      r6, r28, 0x2EC
      addi      r8, r30, 0xC
      li        r7, 0x6
      bl        0x1A4
      bl        -0x1A44
      lfs       f0, -0x73D4(r2)
      mr        r3, r28
      lwz       r5, 0x480(r28)
      mr        r4, r29
      fdivs     f1, f1, f0
      addi      r6, r28, 0x3EC
      addi      r8, r30, 0x14
      li        r7, 0x7
      bl        0x17C
      lbz       r30, 0x14(r28)
      lwz       r3, 0x44(r29)
      rlwinm    r0,r30,2,0,29
      lwzx      r31, r3, r0
      cmplwi    r31, 0
      beq-      .loc_0x148
      lwz       r3, -0x7420(r13)
      lbz       r3, 0x14(r3)
      bl        0x4280
      mr        r4, r30
      mr        r6, r31
      li        r5, 0x2
      bl        0x9AB0
      lbz       r0, 0x14(r28)
      lwz       r4, 0x4C(r29)
      mulli     r3, r0, 0x48
      addi      r3, r3, 0x30
      add       r3, r4, r3
      bl        -0x8EAC

    .loc_0x148:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x168:
    */
}

/*
 * --INFO--
 * Address:	800AF5F4
 * Size:	00010C
 */
void JAInter::SeMgr::checkPlayingSeUpdateMultiplication(
    (JAISe*, JAInter::SeqUpdateData*, float*, JAInter::MoveParaSet*, float,
     unsigned char, float*))
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
      lfs       f0, -0x73C8(r2)
      mr        r30, r3
      lfs       f2, 0x74(r6)
      mr        r31, r7
      fcmpu     cr0, f0, f2
      bne-      .loc_0x84
      cmplwi    r5, 0
      beq-      .loc_0x44
      lfs       f0, 0x0(r5)
      stfs      f0, 0x4(r6)

    .loc_0x44:
      lfs       f31, -0x7418(r2)
      lfs       f2, 0x4(r6)
      lfs       f0, 0x14(r6)
      fmuls     f31, f31, f2
      lfs       f5, 0x24(r6)
      lfs       f4, 0x34(r6)
      lfs       f3, 0x44(r6)
      fmuls     f31, f31, f0
      lfs       f2, 0x54(r6)
      lfs       f0, 0x64(r6)
      fmuls     f31, f31, f5
      fmuls     f31, f31, f4
      fmuls     f31, f31, f3
      fmuls     f31, f31, f2
      fmuls     f31, f31, f0
      b         .loc_0x88

    .loc_0x84:
      fmr       f31, f2

    .loc_0x88:
      fmuls     f31, f31, f1
      lfs       f0, 0x0(r8)
      fcmpu     cr0, f0, f31
      beq-      .loc_0xEC
      stfs      f31, 0x0(r8)
      lbz       r0, 0x15(r30)
      cmplwi    r0, 0x2
      beq-      .loc_0xEC
      lbz       r5, 0x14(r30)
      rlwinm    r3,r31,0,24,31
      lwz       r6, 0x44(r4)
      subi      r0, r3, 0x3
      rlwinm    r5,r5,2,0,29
      li        r3, 0x1
      lwzx      r4, r6, r5
      slw       r0, r3, r0
      or        r0, r4, r0
      stwx      r0, r6, r5
      lwz       r3, -0x7420(r13)
      lbz       r3, 0x14(r3)
      bl        0x415C
      fmr       f1, f31
      lbz       r4, 0x14(r30)
      mr        r5, r31
      bl        0x9970

    .loc_0xEC:
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
 * Address:	800AF700
 * Size:	00014C
 */
void JAInter::SeMgr::checkPlayingSeUpdateAddition(
    (JAISe*, JAInter::SeqUpdateData*, float*, JAInter::MoveParaSet*,
     unsigned char, float*, float))
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
      lfs       f0, -0x73C8(r2)
      mr        r30, r3
      lfs       f2, 0x74(r6)
      mr        r31, r7
      fcmpu     cr0, f0, f2
      bne-      .loc_0xC8
      cmplwi    r5, 0
      beq-      .loc_0x44
      lfs       f0, 0x0(r5)
      stfs      f0, 0x4(r6)

    .loc_0x44:
      lfs       f0, 0x4(r6)
      lfs       f2, 0x14(r6)
      fsubs     f3, f0, f1
      lfs       f31, -0x7414(r2)
      lfs       f0, 0x24(r6)
      fsubs     f4, f2, f1
      lfs       f2, 0x34(r6)
      fadds     f31, f31, f3
      lfs       f3, 0x44(r6)
      fsubs     f6, f0, f1
      lfs       f0, 0x54(r6)
      fsubs     f5, f2, f1
      fadds     f31, f31, f4
      lfs       f2, 0x64(r6)
      fsubs     f4, f3, f1
      fsubs     f3, f0, f1
      lfs       f0, -0x7414(r2)
      fadds     f31, f31, f6
      fsubs     f2, f2, f1
      fadds     f31, f31, f5
      fadds     f31, f31, f4
      fadds     f31, f31, f3
      fadds     f31, f31, f2
      fadds     f31, f31, f1
      fcmpo     cr0, f31, f0
      bge-      .loc_0xB4
      fmr       f31, f0
      b         .loc_0xCC

    .loc_0xB4:
      lfs       f0, -0x7418(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0xCC
      fmr       f31, f0
      b         .loc_0xCC

    .loc_0xC8:
      fmr       f31, f2

    .loc_0xCC:
      lfs       f0, 0x0(r8)
      fcmpu     cr0, f0, f31
      beq-      .loc_0x12C
      stfs      f31, 0x0(r8)
      lbz       r0, 0x15(r30)
      cmplwi    r0, 0x2
      beq-      .loc_0x12C
      lbz       r5, 0x14(r30)
      rlwinm    r3,r31,0,24,31
      lwz       r6, 0x44(r4)
      subi      r0, r3, 0x3
      rlwinm    r5,r5,2,0,29
      li        r3, 0x1
      lwzx      r4, r6, r5
      slw       r0, r3, r0
      or        r0, r4, r0
      stwx      r0, r6, r5
      lwz       r3, -0x7420(r13)
      lbz       r3, 0x14(r3)
      bl        0x4010
      fmr       f1, f31
      lbz       r4, 0x14(r30)
      mr        r5, r31
      bl        0x9824

    .loc_0x12C:
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
 * Address:	800AF84C
 * Size:	000008
 */
void JAInter::SeMgr::changeIDToCategory((unsigned long))
{
    /*
    .loc_0x0:
      rlwinm    r3,r3,20,24,31
      blr
    */
}

/*
 * --INFO--
 * Address:	800AF854
 * Size:	0001D0
 */
void JAInter::SeMgr::releaseSeRegist((JAISe*))
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
      lwz       r5, -0x7420(r13)
      cmplwi    r5, 0
      beq-      .loc_0x11C
      lbz       r0, 0x15(r31)
      cmplwi    r0, 0x1
      beq-      .loc_0x6C
      lbz       r0, 0x14(r31)
      cmplwi    r0, 0xFF
      beq-      .loc_0x6C
      rlwinm    r3,r0,28,28,31
      rlwinm    r0,r0,4,24,27
      addis     r4, r3, 0x2000
      addi      r3, r5, 0x30C
      li        r5, 0
      add       r4, r4, r0
      bl        -0xD720
      lwz       r3, -0x7420(r13)
      li        r5, 0x1
      lbz       r4, 0x14(r31)
      bl        0x4BF8

    .loc_0x6C:
      lwz       r0, -0x7418(r13)
      cmplwi    r0, 0
      beq-      .loc_0x11C
      mr        r3, r31
      bl        0x4278
      rlwinm.   r0,r3,0,28,28
      beq-      .loc_0x11C
      li        r29, 0
      b         .loc_0x110

    .loc_0x90:
      mr        r3, r29
      bl        0x3F40
      lwz       r4, -0x7420(r13)
      lwz       r30, 0x48(r3)
      lbz       r0, 0x14(r4)
      cmplw     r29, r0
      beq-      .loc_0x10C
      cmplwi    r30, 0
      beq-      .loc_0x10C
      mr        r3, r30
      bl        0x423C
      rlwinm.   r0,r3,0,28,28
      bne-      .loc_0x10C
      lbz       r3, 0x14(r31)
      li        r4, 0x1
      lwz       r5, -0x7418(r13)
      li        r0, -0x1
      slw       r3, r4, r3
      xor       r0, r3, r0
      and.      r0, r5, r0
      stw       r0, -0x7418(r13)
      bne-      .loc_0x10C
      bl        -0x1DC0
      lwz       r12, 0x10(r30)
      mr        r4, r3
      mr        r3, r30
      lfs       f1, -0x7418(r2)
      lwz       r12, 0x1C(r12)
      li        r5, 0x9
      mtctr     r12
      bctrl

    .loc_0x10C:
      addi      r29, r29, 0x1

    .loc_0x110:
      bl        -0x1E98
      cmplw     r29, r3
      blt+      .loc_0x90

    .loc_0x11C:
      mr        r3, r31
      bl        0x41B0
      lbz       r0, -0x741C(r13)
      rlwinm    r5,r3,1,23,30
      lwz       r4, -0x742C(r13)
      mr        r3, r31
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r4, r0
      lbzx      r30, r4, r5
      bl        0x4190
      rlwinm    r29,r3,0,24,31
      rlwinm    r6,r3,2,22,29
      li        r7, 0
      li        r3, 0
      b         .loc_0x17C

    .loc_0x158:
      lwz       r0, -0x7428(r13)
      rlwinm    r4,r7,2,22,29
      lwzx      r5, r6, r0
      lwzx      r0, r5, r4
      cmplw     r0, r31
      bne-      .loc_0x178
      stwx      r3, r5, r4
      mr        r7, r30

    .loc_0x178:
      addi      r7, r7, 0x1

    .loc_0x17C:
      rlwinm    r0,r7,0,24,31
      cmplw     r0, r30
      blt+      .loc_0x158
      mr        r3, r31
      bl        0x4190
      li        r0, 0
      li        r3, 0xFF
      stb       r0, 0x15(r31)
      rlwinm    r0,r29,3,0,28
      mr        r4, r31
      stb       r3, 0x14(r31)
      lwz       r3, -0x7424(r13)
      add       r3, r3, r0
      bl        0x5DE8
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
 * Address:	800AFA24
 * Size:	0006EC
 */
void JAInter::SeMgr::storeSeBuffer((JAISe**, JAInter::Actor*, unsigned long,
                                    unsigned long, unsigned char,
                                    JAInter::SoundInfo*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stmw      r17, 0x54(r1)
      mr.       r26, r3
      mr        r17, r4
      mr        r27, r5
      mr        r28, r6
      mr        r29, r7
      mr        r30, r8
      li        r25, 0
      beq-      .loc_0x48
      lwz       r0, 0x0(r26)
      cmplwi    r0, 0x1
      bne-      .loc_0x48
      li        r0, 0
      li        r25, 0x1
      stw       r0, 0x0(r26)

    .loc_0x48:
      cmplwi    r26, 0
      beq-      .loc_0x8C
      lwz       r3, 0x0(r26)
      cmplwi    r3, 0
      beq-      .loc_0x8C
      lwz       r0, 0x20(r3)
      cmplw     r27, r0
      bne-      .loc_0x78
      bne-      .loc_0x8C
      rlwinm    r0,r27,0,20,21
      cmplwi    r0, 0x800
      bne-      .loc_0x8C

    .loc_0x78:
      mr        r4, r27
      mr        r5, r30
      bl        0x5A6C
      cmplwi    r3, 0
      bne-      .loc_0x6D8

    .loc_0x8C:
      cmplwi    r17, 0
      mr        r31, r17
      rlwinm    r4,r27,20,24,31
      bne-      .loc_0xA8
      lis       r3, 0x8051
      addi      r0, r3, 0x2218
      mr        r31, r0

    .loc_0xA8:
      lbz       r3, -0x741C(r13)
      rlwinm    r23,r4,3,21,28
      lwz       r0, -0x7424(r13)
      rlwinm    r4,r4,1,0,30
      rlwinm    r5,r3,2,0,29
      lwz       r6, -0x742C(r13)
      add       r3, r0, r23
      lwz       r21, 0x0(r31)
      lwzx      r0, r6, r5
      rlwinm    r24,r27,0,20,20
      lwz       r3, 0x4(r3)
      li        r20, 0
      add       r4, r0, r4
      lwz       r22, 0x0(r3)
      lbz       r19, 0x1(r4)
      b         .loc_0x2AC

    .loc_0xE8:
      lwz       r18, 0x0(r22)
      lwz       r0, 0x38(r18)
      cmplw     r0, r21
      bne-      .loc_0x2A8
      lwz       r0, 0x20(r18)
      cmplw     r27, r0
      bne-      .loc_0x1A8
      lwz       r0, 0x0(r30)
      rlwinm.   r0,r0,0,12,12
      bne-      .loc_0x1A8
      rlwinm    r0,r25,0,24,31
      cmplwi    r0, 0x1
      beq-      .loc_0x128
      lwz       r0, 0x40(r18)
      cmplw     r0, r26
      bne-      .loc_0x1A8

    .loc_0x128:
      cmplwi    r24, 0
      bne-      .loc_0x184
      lbz       r0, 0x14(r18)
      cmplwi    r0, 0xFF
      beq-      .loc_0x148
      li        r0, 0x4
      stb       r0, 0x15(r18)
      b         .loc_0x150

    .loc_0x148:
      li        r0, 0x1
      stb       r0, 0x15(r18)

    .loc_0x150:
      cmplwi    r26, 0
      beq-      .loc_0x6D8
      lwz       r0, 0x0(r26)
      cmplwi    r0, 0
      bne-      .loc_0x6D8
      lwz       r3, 0x40(r18)
      cmplwi    r3, 0
      beq-      .loc_0x178
      li        r0, 0
      stw       r0, 0x0(r3)

    .loc_0x178:
      stw       r26, 0x40(r18)
      stw       r18, 0x0(r26)
      b         .loc_0x6D8

    .loc_0x184:
      mr        r3, r18
      li        r4, 0
      lwz       r12, 0x10(r18)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r22, 0
      li        r20, 0xFF
      b         .loc_0x2AC

    .loc_0x1A8:
      rlwinm.   r0,r20,0,24,31
      bne-      .loc_0x1C0
      rlwinm    r0,r20,2,22,29
      addi      r3, r1, 0x8
      stwx      r18, r3, r0
      b         .loc_0x29C

    .loc_0x1C0:
      mr        r3, r18
      bl        0x3F7C
      rlwinm    r17,r3,0,24,31
      lwz       r3, 0x8(r1)
      bl        0x3F70
      rlwinm    r0,r3,0,24,31
      cmplw     r0, r17
      bge-      .loc_0x1F0
      rlwinm    r0,r20,2,22,29
      addi      r3, r1, 0x8
      stwx      r18, r3, r0
      b         .loc_0x29C

    .loc_0x1F0:
      rlwinm    r3,r20,0,24,31
      li        r4, 0
      cmplwi    r3, 0
      ble-      .loc_0x298
      cmplwi    r3, 0x8
      subi      r5, r3, 0x8
      ble-      .loc_0x26C
      addi      r0, r5, 0x7
      addi      r6, r1, 0x8
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmplwi    r5, 0
      ble-      .loc_0x26C

    .loc_0x224:
      lwz       r0, 0x0(r6)
      addi      r4, r4, 0x8
      stw       r0, 0x4(r6)
      lwz       r0, 0x4(r6)
      stw       r0, 0x8(r6)
      lwz       r0, 0x8(r6)
      stw       r0, 0xC(r6)
      lwz       r0, 0xC(r6)
      stw       r0, 0x10(r6)
      lwz       r0, 0x10(r6)
      stw       r0, 0x14(r6)
      lwz       r0, 0x14(r6)
      stw       r0, 0x18(r6)
      lwz       r0, 0x18(r6)
      stw       r0, 0x1C(r6)
      lwz       r0, 0x1C(r6)
      stwu      r0, 0x20(r6)
      bdnz+     .loc_0x224

    .loc_0x26C:
      rlwinm    r5,r4,2,0,29
      addi      r6, r1, 0x8
      sub       r0, r3, r4
      add       r6, r6, r5
      mtctr     r0
      cmplw     r4, r3
      bge-      .loc_0x298

    .loc_0x288:
      lwz       r0, 0x0(r6)
      addi      r4, r4, 0x1
      stwu      r0, 0x4(r6)
      bdnz+     .loc_0x288

    .loc_0x298:
      stw       r18, 0x8(r1)

    .loc_0x29C:
      lwz       r22, 0xC(r22)
      addi      r20, r20, 0x1
      b         .loc_0x2AC

    .loc_0x2A8:
      lwz       r22, 0xC(r22)

    .loc_0x2AC:
      cmplwi    r22, 0
      bne+      .loc_0xE8
      rlwinm    r0,r20,0,24,31
      cmplw     r0, r19
      bne-      .loc_0x4A8
      lwz       r3, 0x8(r1)
      bl        0x3E7C
      lbz       r0, 0x4(r30)
      rlwinm    r3,r3,0,24,31
      cmplw     r3, r0
      bgt-      .loc_0x6D8
      lwz       r3, 0x8(r1)
      bl        0x3E64
      lbz       r0, 0x4(r30)
      rlwinm    r3,r3,0,24,31
      cmplw     r0, r3
      bne-      .loc_0x300
      lwz       r3, 0x8(r1)
      lbz       r0, 0x15(r3)
      cmplwi    r0, 0x5
      beq-      .loc_0x6D8

    .loc_0x300:
      lwz       r5, -0x7420(r13)
      cmplwi    r5, 0
      beq-      .loc_0x40C
      lwz       r3, 0x8(r1)
      lbz       r0, 0x15(r3)
      cmplwi    r0, 0x1
      beq-      .loc_0x358
      lbz       r0, 0x14(r3)
      cmplwi    r0, 0xFF
      beq-      .loc_0x358
      rlwinm    r3,r0,28,28,31
      rlwinm    r0,r0,4,24,27
      addis     r4, r3, 0x2000
      addi      r3, r5, 0x30C
      li        r5, 0
      add       r4, r4, r0
      bl        -0xDBD8
      lwz       r4, 0x8(r1)
      li        r5, 0x1
      lwz       r3, -0x7420(r13)
      lbz       r4, 0x14(r4)
      bl        0x473C

    .loc_0x358:
      lwz       r0, -0x7418(r13)
      cmplwi    r0, 0
      beq-      .loc_0x40C
      lwz       r3, 0x8(r1)
      bl        0x3DBC
      rlwinm.   r0,r3,0,28,28
      beq-      .loc_0x40C
      li        r24, 0
      b         .loc_0x400

    .loc_0x37C:
      mr        r3, r24
      bl        0x3A84
      lwz       r4, -0x7420(r13)
      lwz       r25, 0x48(r3)
      lbz       r0, 0x14(r4)
      cmplw     r24, r0
      beq-      .loc_0x3FC
      cmplwi    r25, 0
      beq-      .loc_0x3FC
      mr        r3, r25
      bl        0x3D80
      rlwinm.   r0,r3,0,28,28
      bne-      .loc_0x3FC
      lwz       r3, 0x8(r1)
      li        r4, 0x1
      lwz       r5, -0x7418(r13)
      li        r0, -0x1
      lbz       r3, 0x14(r3)
      slw       r3, r4, r3
      xor       r0, r3, r0
      and.      r0, r5, r0
      stw       r0, -0x7418(r13)
      bne-      .loc_0x3FC
      bl        -0x2280
      lwz       r12, 0x10(r25)
      mr        r4, r3
      mr        r3, r25
      lfs       f1, -0x7418(r2)
      lwz       r12, 0x1C(r12)
      li        r5, 0x9
      mtctr     r12
      bctrl

    .loc_0x3FC:
      addi      r24, r24, 0x1

    .loc_0x400:
      bl        -0x2358
      cmplw     r24, r3
      blt+      .loc_0x37C

    .loc_0x40C:
      lwz       r3, 0x8(r1)
      bl        0x3CF0
      lbz       r0, -0x741C(r13)
      rlwinm    r5,r3,1,23,30
      lwz       r4, -0x742C(r13)
      rlwinm    r0,r0,2,0,29
      lwz       r3, 0x8(r1)
      lwzx      r4, r4, r0
      lbzx      r17, r4, r5
      bl        0x3CD0
      li        r7, 0
      lwz       r5, 0x8(r1)
      mr        r4, r7
      rlwinm    r24,r3,0,24,31
      rlwinm    r8,r3,2,22,29
      b         .loc_0x470

    .loc_0x44C:
      lwz       r0, -0x7428(r13)
      rlwinm    r3,r7,2,22,29
      lwzx      r6, r8, r0
      lwzx      r0, r6, r3
      cmplw     r0, r5
      bne-      .loc_0x46C
      stwx      r4, r6, r3
      mr        r7, r17

    .loc_0x46C:
      addi      r7, r7, 0x1

    .loc_0x470:
      rlwinm    r0,r7,0,24,31
      cmplw     r0, r17
      blt+      .loc_0x44C
      lwz       r3, 0x8(r1)
      bl        0x3CCC
      lwz       r4, 0x8(r1)
      li        r5, 0
      li        r3, 0xFF
      rlwinm    r0,r24,3,0,28
      stb       r5, 0x15(r4)
      stb       r3, 0x14(r4)
      lwz       r3, -0x7424(r13)
      add       r3, r3, r0
      bl        0x5924

    .loc_0x4A8:
      lwz       r0, -0x7424(r13)
      add       r3, r0, r23
      bl        0x5898
      mr.       r18, r3
      bne-      .loc_0x564
      lwz       r0, -0x7424(r13)
      li        r17, 0
      lfs       f0, -0x7414(r2)
      add       r3, r0, r23
      lwz       r3, 0x4(r3)
      lwz       r4, 0x0(r3)
      b         .loc_0x4FC

    .loc_0x4D8:
      lwz       r5, 0x0(r4)
      lwz       r3, 0x34(r5)
      lfs       f1, 0x18(r3)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x4F8
      fmr       f0, f1
      mr        r17, r5

    .loc_0x4F8:
      lwz       r4, 0xC(r4)

    .loc_0x4FC:
      cmplwi    r4, 0
      bne+      .loc_0x4D8
      cmplwi    r17, 0
      beq-      .loc_0x550
      mr        r3, r17
      bl        0x3C30
      lbz       r0, 0x4(r30)
      rlwinm    r3,r3,0,24,31
      cmplw     r3, r0
      bgt-      .loc_0x550
      mr        r3, r17
      li        r4, 0
      lwz       r12, 0x10(r17)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x7424(r13)
      add       r3, r0, r23
      bl        0x5804
      mr        r18, r3
      b         .loc_0x564

    .loc_0x550:
      cmplwi    r26, 0
      beq-      .loc_0x6D8
      li        r0, 0
      stw       r0, 0x0(r26)
      b         .loc_0x6D8

    .loc_0x564:
      addi      r17, r18, 0x48
      bl        -0x2470
      lfs       f0, -0x73D4(r2)
      li        r0, 0x4
      mr        r3, r17
      lfs       f2, -0x7418(r2)
      fdivs     f3, f1, f0
      lfs       f1, -0x7410(r2)
      lfs       f0, -0x7414(r2)
      mtctr     r0

    .loc_0x58C:
      stfs      f2, 0x128(r3)
      li        r11, 0
      stfs      f2, 0x124(r3)
      stw       r11, 0x130(r3)
      stfs      f1, 0x1A8(r3)
      stfs      f1, 0x1A4(r3)
      stw       r11, 0x1B0(r3)
      stfs      f2, 0x228(r3)
      stfs      f2, 0x224(r3)
      stw       r11, 0x230(r3)
      stfs      f0, 0x2A8(r3)
      stfs      f0, 0x2A4(r3)
      stw       r11, 0x2B0(r3)
      stfs      f0, 0x328(r3)
      stfs      f0, 0x324(r3)
      stw       r11, 0x330(r3)
      stfs      f3, 0x3A8(r3)
      stfs      f3, 0x3A4(r3)
      stw       r11, 0x3B0(r3)
      stfs      f2, 0x138(r3)
      stfs      f2, 0x134(r3)
      stw       r11, 0x140(r3)
      stfs      f1, 0x1B8(r3)
      stfs      f1, 0x1B4(r3)
      stw       r11, 0x1C0(r3)
      stfs      f2, 0x238(r3)
      stfs      f2, 0x234(r3)
      stw       r11, 0x240(r3)
      stfs      f0, 0x2B8(r3)
      stfs      f0, 0x2B4(r3)
      stw       r11, 0x2C0(r3)
      stfs      f0, 0x338(r3)
      stfs      f0, 0x334(r3)
      stw       r11, 0x340(r3)
      stfs      f3, 0x3B8(r3)
      stfs      f3, 0x3B4(r3)
      stw       r11, 0x3C0(r3)
      addi      r3, r3, 0x20
      bdnz+     .loc_0x58C
      lfs       f0, -0x73C8(r2)
      li        r10, 0x1
      li        r0, 0xFF
      mr        r3, r18
      stfs      f0, 0x198(r17)
      mr        r4, r26
      mr        r5, r31
      mr        r6, r27
      stfs      f0, 0x194(r17)
      mr        r7, r28
      mr        r8, r29
      mr        r9, r30
      stw       r11, 0x1A0(r17)
      stfs      f0, 0x218(r17)
      stfs      f0, 0x214(r17)
      stw       r11, 0x220(r17)
      stfs      f0, 0x298(r17)
      stfs      f0, 0x294(r17)
      stw       r11, 0x2A0(r17)
      stfs      f0, 0x318(r17)
      stfs      f0, 0x314(r17)
      stw       r11, 0x320(r17)
      stfs      f0, 0x398(r17)
      stfs      f0, 0x394(r17)
      stw       r11, 0x3A0(r17)
      stfs      f0, 0x418(r17)
      stfs      f0, 0x414(r17)
      stw       r11, 0x420(r17)
      stw       r11, 0x424(r17)
      stw       r11, 0x428(r17)
      stw       r11, 0x42C(r17)
      stw       r11, 0x430(r17)
      stw       r11, 0x434(r17)
      stw       r11, 0x438(r17)
      sth       r11, 0x20(r17)
      stb       r10, 0x15(r18)
      stb       r0, 0x14(r18)
      lwz       r12, 0x10(r18)
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      cmplwi    r26, 0
      beq-      .loc_0x6D8
      stw       r18, 0x0(r26)

    .loc_0x6D8:
      lmw       r17, 0x54(r1)
      lwz       r0, 0x94(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	800B0110
 * Size:	000020
 */
void JAISe::stop(unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        .loc_0x20
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x20:
    */
}

/*
 * --INFO--
 * Address:	800B0130
 * Size:	000208
 */
void JAInter::SeMgr::releaseSeBuffer((JAISe*, unsigned long))
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
      lbz       r0, 0x15(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1EC
      cmplwi    r4, 0
      beq-      .loc_0x38
      cmplwi    r0, 0x1
      bne-      .loc_0x1D0

    .loc_0x38:
      lwz       r5, -0x7420(r13)
      cmplwi    r5, 0
      beq-      .loc_0x134
      cmplwi    r0, 0x1
      beq-      .loc_0x84
      lbz       r0, 0x14(r31)
      cmplwi    r0, 0xFF
      beq-      .loc_0x84
      rlwinm    r3,r0,28,28,31
      rlwinm    r0,r0,4,24,27
      addis     r4, r3, 0x2000
      addi      r3, r5, 0x30C
      li        r5, 0
      add       r4, r4, r0
      bl        -0xE014
      lwz       r3, -0x7420(r13)
      li        r5, 0x1
      lbz       r4, 0x14(r31)
      bl        0x4304

    .loc_0x84:
      lwz       r0, -0x7418(r13)
      cmplwi    r0, 0
      beq-      .loc_0x134
      mr        r3, r31
      bl        0x3984
      rlwinm.   r0,r3,0,28,28
      beq-      .loc_0x134
      li        r29, 0
      b         .loc_0x128

    .loc_0xA8:
      mr        r3, r29
      bl        0x364C
      lwz       r4, -0x7420(r13)
      lwz       r30, 0x48(r3)
      lbz       r0, 0x14(r4)
      cmplw     r29, r0
      beq-      .loc_0x124
      cmplwi    r30, 0
      beq-      .loc_0x124
      mr        r3, r30
      bl        0x3948
      rlwinm.   r0,r3,0,28,28
      bne-      .loc_0x124
      lbz       r3, 0x14(r31)
      li        r4, 0x1
      lwz       r5, -0x7418(r13)
      li        r0, -0x1
      slw       r3, r4, r3
      xor       r0, r3, r0
      and.      r0, r5, r0
      stw       r0, -0x7418(r13)
      bne-      .loc_0x124
      bl        -0x26B4
      lwz       r12, 0x10(r30)
      mr        r4, r3
      mr        r3, r30
      lfs       f1, -0x7418(r2)
      lwz       r12, 0x1C(r12)
      li        r5, 0x9
      mtctr     r12
      bctrl

    .loc_0x124:
      addi      r29, r29, 0x1

    .loc_0x128:
      bl        -0x278C
      cmplw     r29, r3
      blt+      .loc_0xA8

    .loc_0x134:
      mr        r3, r31
      bl        0x38BC
      lbz       r0, -0x741C(r13)
      rlwinm    r5,r3,1,23,30
      lwz       r4, -0x742C(r13)
      mr        r3, r31
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r4, r0
      lbzx      r30, r4, r5
      bl        0x389C
      li        r6, 0
      rlwinm    r29,r3,0,24,31
      mr        r4, r6
      rlwinm    r7,r3,2,22,29
      b         .loc_0x194

    .loc_0x170:
      lwz       r0, -0x7428(r13)
      rlwinm    r3,r6,2,22,29
      lwzx      r5, r7, r0
      lwzx      r0, r5, r3
      cmplw     r0, r31
      bne-      .loc_0x190
      stwx      r4, r5, r3
      mr        r6, r30

    .loc_0x190:
      addi      r6, r6, 0x1

    .loc_0x194:
      rlwinm    r0,r6,0,24,31
      cmplw     r0, r30
      blt+      .loc_0x170
      mr        r3, r31
      bl        0x389C
      li        r0, 0
      li        r3, 0xFF
      stb       r0, 0x15(r31)
      rlwinm    r0,r29,3,0,28
      mr        r4, r31
      stb       r3, 0x14(r31)
      lwz       r3, -0x7424(r13)
      add       r3, r3, r0
      bl        0x54F4
      b         .loc_0x1EC

    .loc_0x1D0:
      stw       r4, 0x28(r31)
      li        r5, 0x6
      lfs       f1, -0x7414(r2)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1EC:
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
 * Address:	800B0338
 * Size:	000008
 */
void JAInter::SeMgr::setSeSequenceStartCallback( (void (*)
{
    /*
    .loc_0x0:
      stw       r3, -0x7DF8(r13)
      blr
    */
}
