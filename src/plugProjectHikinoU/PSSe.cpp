

/*
 * --INFO--
 * Address:	8033F158
 * Size:	000210
 */
void PSGame::SeMgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804E
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x514C
      lis       r4, 0x8049
      stw       r31, 0x1C(r1)
      addi      r31, r4, 0x38
      stw       r30, 0x18(r1)
      mr        r30, r3
      lis       r3, 0x804E
      stw       r29, 0x14(r1)
      stw       r0, 0x0(r30)
      subi      r0, r3, 0x5158
      addi      r3, r30, 0x24
      stw       r30, -0x6E38(r13)
      stw       r0, 0x0(r30)
      bl        0x8F8
      li        r0, 0
      li        r3, 0x18
      stw       r0, 0x2C(r30)
      stw       r0, 0x4(r30)
      stw       r0, 0x8(r30)
      stw       r0, 0xC(r30)
      stw       r0, 0x10(r30)
      stw       r0, 0x14(r30)
      stw       r0, 0x18(r30)
      stw       r0, 0x1C(r30)
      stw       r0, 0x20(r30)
      bl        -0x31B328
      mr.       r0, r3
      beq-      .loc_0x94
      addi      r4, r31, 0
      li        r5, 0
      li        r6, 0x3
      bl        0x624
      mr        r0, r3

    .loc_0x94:
      stw       r0, 0x4(r30)
      li        r3, 0x18
      bl        -0x31B350
      mr.       r0, r3
      beq-      .loc_0xBC
      addi      r4, r31, 0x14
      li        r5, 0x9
      li        r6, 0x9
      bl        0x5FC
      mr        r0, r3

    .loc_0xBC:
      stw       r0, 0x8(r30)
      li        r3, 0x18
      bl        -0x31B378
      mr.       r0, r3
      beq-      .loc_0xE4
      addi      r4, r31, 0x24
      li        r5, 0
      li        r6, 0x5
      bl        0x5D4
      mr        r0, r3

    .loc_0xE4:
      stw       r0, 0xC(r30)
      li        r3, 0x18
      bl        -0x31B3A0
      mr.       r0, r3
      beq-      .loc_0x10C
      addi      r4, r31, 0x34
      li        r5, 0x14
      li        r6, 0x14
      bl        0x5AC
      mr        r0, r3

    .loc_0x10C:
      stw       r0, 0x14(r30)
      li        r3, 0x18
      bl        -0x31B3C8
      mr.       r0, r3
      beq-      .loc_0x134
      addi      r4, r31, 0x4C
      li        r5, 0
      li        r6, 0x2
      bl        0x584
      mr        r0, r3

    .loc_0x134:
      stw       r0, 0x18(r30)
      li        r3, 0x18
      bl        -0x31B3F0
      mr.       r0, r3
      beq-      .loc_0x15C
      addi      r4, r31, 0x6C
      li        r5, 0x2
      li        r6, 0x5
      bl        0x55C
      mr        r0, r3

    .loc_0x15C:
      stw       r0, 0x1C(r30)
      li        r3, 0x18
      bl        -0x31B418
      mr.       r0, r3
      beq-      .loc_0x184
      addi      r4, r31, 0x7C
      li        r5, 0x4
      li        r6, 0xA
      bl        0x534
      mr        r0, r3

    .loc_0x184:
      stw       r0, 0x20(r30)
      li        r3, 0x18
      bl        -0x31B440
      mr.       r0, r3
      beq-      .loc_0x1AC
      subi      r4, r2, 0x1D8
      li        r5, 0x14
      li        r6, 0x9
      bl        0x50C
      mr        r0, r3

    .loc_0x1AC:
      stw       r0, 0x10(r30)
      li        r29, 0
      b         .loc_0x1E4

    .loc_0x1B8:
      rlwinm    r3,r29,2,22,29
      addi      r0, r3, 0x4
      lwzx      r0, r30, r0
      cmplwi    r0, 0
      bne-      .loc_0x1E0
      addi      r3, r31, 0x90
      addi      r5, r31, 0x9C
      li        r4, 0x2C
      crclr     6, 0x6
      bl        -0x314CF4

    .loc_0x1E0:
      addi      r29, r29, 0x1

    .loc_0x1E4:
      rlwinm    r0,r29,0,24,31
      cmplwi    r0, 0x8
      blt+      .loc_0x1B8
      lwz       r0, 0x24(r1)
      mr        r3, r30
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
 * Address:	8033F368
 * Size:	000120
 */
void PSGame::SeMgr::playMessageVoice((unsigned long, bool))
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
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r30, r4
      lfs       f31, -0x1D0(r2)
      cmpwi     r30, 0x1850
      lfs       f30, -0x7AB8(r13)
      mr        r29, r3
      beq-      .loc_0x64
      bge-      .loc_0x50
      cmpwi     r30, 0x1846
      beq-      .loc_0x5C
      b         .loc_0xF4

    .loc_0x50:
      cmpwi     r30, 0x185F
      beq-      .loc_0x7C
      b         .loc_0xF4

    .loc_0x5C:
      li        r31, 0xA
      b         .loc_0x88

    .loc_0x64:
      rlwinm.   r0,r5,0,24,31
      bne-      .loc_0x70
      lfs       f31, -0x1CC(r2)

    .loc_0x70:
      lfs       f30, -0x1C8(r2)
      li        r31, 0xF
      b         .loc_0x88

    .loc_0x7C:
      li        r31, 0xF
      b         .loc_0x88
      b         .loc_0xF4

    .loc_0x88:
      addis     r0, r31, 0x1
      cmplwi    r0, 0xFFFF
      bne-      .loc_0xB0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x5A
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x314DD4

    .loc_0xB0:
      bl        -0x284F24
      fcmpo     cr0, f1, f31
      bge-      .loc_0xC4
      li        r0, 0x1
      b         .loc_0xC8

    .loc_0xC4:
      li        r0, 0

    .loc_0xC8:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0xF4
      stfs      f30, 0x24(r29)
      mr        r4, r30
      mr        r6, r31
      addi      r3, r29, 0x24
      addi      r5, r29, 0x2C
      li        r7, 0
      bl        0x838
      lfs       f0, -0x7AB8(r13)
      stfs      f0, 0x24(r29)

    .loc_0xF4:
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x44(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F488
 * Size:	00003C
 */
void PSGame::SeMgr::stopMessageVoice(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2C(r3)
      cmplwi    r3, 0
      beq-      .loc_0x2C
      lwz       r12, 0x10(r3)
      li        r4, 0
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x2C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F4C4
 * Size:	000050
 */
void PSGame::Rappa::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x32250C
      lis       r3, 0x804E
      li        r4, -0x1
      subi      r3, r3, 0x5164
      li        r0, 0
      stw       r3, 0x0(r31)
      mr        r3, r31
      stw       r4, 0x18(r31)
      sth       r0, 0x1C(r31)
      sth       r0, 0x1E(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F514
 * Size:	0000A0
 */
void PSGame::Rappa::init((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      rlwinm    r4,r4,0,16,31
      subfic    r0, r4, 0x1
      orc       r3, r5, r4
      rlwinm    r0,r0,31,1,31
      sub       r0, r3, r0
      rlwinm.   r0,r0,1,31,31
      bne-      .loc_0x40
      li        r5, 0

    .loc_0x40:
      rlwinm.   r0,r5,0,24,31
      bne-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0xB4
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x314F34

    .loc_0x64:
      rlwinm    r3,r30,0,16,31
      rlwinm    r0,r30,2,14,29
      cntlzw    r4, r3
      subi      r3, r13, 0x7AC0
      rlwinm    r4,r4,27,31,31
      neg       r4, r4
      addi      r4, r4, 0xE
      stw       r4, 0x18(r31)
      stwx      r31, r3, r0
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
 * Address:	8033F5B4
 * Size:	000008
 */
void PSGame::Rappa::setId((unsigned long))
{
    /*
    .loc_0x0:
      stw       r4, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F5BC
 * Size:	000098
 */
void PSGame::Rappa::__dt(void)
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
      beq-      .loc_0x7C
      lis       r3, 0x804E
      li        r6, 0
      subi      r0, r3, 0x5164
      subi      r5, r13, 0x7AC0
      stw       r0, 0x0(r30)
      li        r3, 0
      b         .loc_0x54

    .loc_0x3C:
      rlwinm    r4,r6,2,22,29
      lwzx      r0, r5, r4
      cmplw     r0, r30
      bne-      .loc_0x50
      stwx      r3, r5, r4

    .loc_0x50:
      addi      r6, r6, 0x1

    .loc_0x54:
      rlwinm    r0,r6,0,24,31
      cmplwi    r0, 0x2
      blt+      .loc_0x3C
      mr        r3, r30
      li        r4, 0
      bl        -0x3225F0
      extsh.    r0, r31
      ble-      .loc_0x7C
      mr        r3, r30
      bl        -0x31B580

    .loc_0x7C:
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
 * Address:	8033F654
 * Size:	000170
 */
void PSGame::Rappa::playRappa((bool, float, float, JAInter::Object*))
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
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      fmr       f30, f1
      lwz       r3, 0x18(r3)
      fmr       f31, f2
      mr        r30, r4
      mr        r31, r5
      addis     r0, r3, 0x1
      cmplwi    r0, 0xFFFF
      bne-      .loc_0x68
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0xCC
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315078

    .loc_0x68:
      rlwinm    r0,r30,0,24,31
      li        r3, 0
      cmplwi    r0, 0x1
      bne-      .loc_0x144
      lfs       f0, -0x1C8(r2)
      fcmpo     cr0, f31, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x90
      fmr       f1, f31
      b         .loc_0x94

    .loc_0x90:
      fneg      f1, f31

    .loc_0x94:
      lfs       f0, -0x1C8(r2)
      fcmpo     cr0, f30, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xAC
      fmr       f31, f30
      b         .loc_0xB0

    .loc_0xAC:
      fneg      f31, f30

    .loc_0xB0:
      fcmpo     cr0, f31, f1
      ble-      .loc_0xBC
      b         .loc_0xC0

    .loc_0xBC:
      fmr       f31, f1

    .loc_0xC0:
      lfs       f0, -0x1C4(r2)
      fcmpo     cr0, f31, f0
      bge-      .loc_0xD4
      li        r3, 0
      b         .loc_0x144

    .loc_0xD4:
      mr        r3, r31
      lwz       r4, 0x18(r29)
      lwz       r12, 0x0(r31)
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lfs       f1, -0x1D0(r2)
      lfs       f0, -0x1C0(r2)
      fsubs     f3, f31, f1
      lfs       f2, -0x1C8(r2)
      fmuls     f3, f3, f0
      fcmpo     cr0, f3, f2
      bge-      .loc_0x110
      b         .loc_0x124

    .loc_0x110:
      fcmpo     cr0, f3, f1
      ble-      .loc_0x120
      fmr       f2, f1
      b         .loc_0x124

    .loc_0x120:
      fmr       f2, f3

    .loc_0x124:
      lfs       f0, -0x7AC8(r13)
      lhz       r0, -0x7AC4(r13)
      fmuls     f2, f2, f0
      fctiwz    f0, f2
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      add       r0, r4, r0
      sth       r0, 0x1C(r29)

    .loc_0x144:
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x44(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F7C4
 * Size:	00003C
 */
void PSGame::Rappa::syncCpu_WaitChk((JASTrack*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      li        r4, 0xB
      addi      r5, r31, 0x1E
      bl        -0x29D690
      lwz       r0, 0x14(r1)
      lhz       r3, 0x1C(r31)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F800
 * Size:	000008
 */
void PSGame::Rappa::syncCpu_TblNo((JASTrack*))
{
    /*
    .loc_0x0:
      lhz       r3, 0x1E(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F808
 * Size:	000078
 */
void PSGame::SetSe::__ct((char const*, short, short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      extsh.    r0, r6
      stw       r31, 0xC(r1)
      mr        r31, r3
      sth       r4, 0x0(r3)
      li        r3, -0x1
      sth       r5, 0x2(r31)
      sth       r6, 0x4(r31)
      sth       r5, 0x6(r31)
      stw       r3, 0x8(r31)
      stb       r4, 0x14(r31)
      stw       r4, 0xC(r31)
      stw       r4, 0x10(r31)
      bge-      .loc_0x60
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x13F
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315224

    .loc_0x60:
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
 * Address:	8033F880
 * Size:	000038
 */
void PSGame::SetSe::exec(void)
{
    /*
    .loc_0x0:
      lhz       r4, 0x0(r3)
      lha       r0, 0x6(r3)
      cmpw      r4, r0
      ble-      .loc_0x18
      li        r0, -0x1
      stw       r0, 0x8(r3)

    .loc_0x18:
      lwz       r4, 0x8(r3)
      addis     r0, r4, 0x1
      cmplwi    r0, 0xFFFF
      beqlr-
      lhz       r4, 0x0(r3)
      addi      r0, r4, 0x1
      sth       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8033F8B8
 * Size:	0000B8
 */
void PSGame::SetSe::startSound((JAInter::Object*, unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r6
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr.       r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      bne-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x150
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x3152C0

    .loc_0x4C:
      lwz       r3, 0x8(r28)
      addis     r0, r3, 0x1
      cmplwi    r0, 0xFFFF
      bne-      .loc_0x94
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      mr        r5, r31
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r28
      mr        r31, r0
      mr        r4, r30
      bl        0xD0
      mr        r3, r31
      b         .loc_0x98

    .loc_0x94:
      li        r3, 0

    .loc_0x98:
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
 * Address:	8033F970
 * Size:	0000A0
 */
void PSGame::SetSe::playSystemSe((unsigned long, unsigned long))
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
      lwz       r3, 0x8(r3)
      addis     r0, r3, 0x1
      cmplwi    r0, 0xFFFF
      bne-      .loc_0x84
      lbz       r0, 0x14(r30)
      mr        r6, r5
      lwz       r3, -0x67A8(r13)
      rlwinm    r5,r0,2,0,29
      addi      r5, r5, 0xC
      add       r5, r30, r5
      bl        -0x7344
      mr        r3, r30
      mr        r4, r31
      bl        .loc_0xA0
      lbz       r4, 0x14(r30)
      rlwinm    r3,r4,2,0,29
      addi      r0, r4, 0x1
      add       r3, r30, r3
      lwz       r3, 0xC(r3)
      stb       r0, 0x14(r30)
      lbz       r0, 0x14(r30)
      cmplwi    r0, 0x2
      bne-      .loc_0x88
      li        r0, 0
      stb       r0, 0x14(r30)
      b         .loc_0x88

    .loc_0x84:
      li        r3, 0

    .loc_0x88:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0xA0:
    */
}

/*
 * --INFO--
 * Address:	8033FA10
 * Size:	000084
 */
void PSGame::SetSe::startCounter((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      li        r0, 0
      stw       r31, 0x2C(r1)
      mr        r31, r3
      sth       r0, 0x0(r3)
      stw       r4, 0x8(r3)
      bl        -0x28553C
      lha       r4, 0x4(r31)
      lis       r3, 0x4330
      lha       r0, 0x2(r31)
      xoris     r4, r4, 0x8000
      stw       r3, 0x8(r1)
      xoris     r0, r0, 0x8000
      lfd       f3, -0x1B8(r2)
      stw       r4, 0xC(r1)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f2, f0, f3
      stw       r3, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f3
      fmadds    f0, f2, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      sth       r0, 0x6(r31)
      lwz       r31, 0x2C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8033FA94
 * Size:	00000C
 */
void PSGame::RandId::__ct(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x7AB8(r13)
      stfs      f0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void PSGame::RandId::getRandomId((unsigned long, unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033FAA0
 * Size:	0001E8
 */
void PSGame::RandId::startSound((JAInter::Object*, unsigned long, unsigned long,
                                 unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f0, -0x1C0(r2)
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      mr        r30, r6
      mr        r31, r7
      lfs       f1, 0x0(r3)
      fcmpu     cr0, f0, f1
      bne-      .loc_0xAC
      cmplwi    r30, 0x1
      bgt-      .loc_0x58
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1AA
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x3154B4

    .loc_0x58:
      bl        -0x285604
      lis       r0, 0x4330
      stw       r30, 0xC(r1)
      lfd       f2, -0x1B0(r2)
      stw       r0, 0x8(r1)
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f2
      fmuls     f1, f0, f1
      bl        -0x27DFCC
      mr        r27, r3
      cmplw     r27, r30
      blt-      .loc_0xA4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1AD
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315500

    .loc_0xA4:
      add       r27, r29, r27
      b         .loc_0x194

    .loc_0xAC:
      lfs       f0, -0x1C8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      beq-      .loc_0xD8
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1B0
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315534

    .loc_0xD8:
      cmplwi    r30, 0x1
      bgt-      .loc_0xFC
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1B1
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315558

    .loc_0xFC:
      bl        -0x2856A8
      lfs       f0, 0x0(r27)
      lfs       f4, -0x1C8(r2)
      fsubs     f5, f1, f0
      fcmpo     cr0, f5, f4
      bge-      .loc_0x11C
      mr        r27, r29
      b         .loc_0x194

    .loc_0x11C:
      lis       r3, 0x4330
      lfs       f3, -0x1D0(r2)
      stw       r30, 0xC(r1)
      subi      r0, r30, 0x1
      lfd       f1, -0x1B0(r2)
      fsubs     f2, f3, f0
      stw       r3, 0x8(r1)
      li        r3, 0x1
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f1
      fsubs     f0, f0, f3
      fdivs     f0, f2, f0
      mtctr     r0
      cmplwi    r30, 0x1
      ble-      .loc_0x174

    .loc_0x158:
      fsubs     f5, f5, f0
      fcmpo     cr0, f5, f4
      bge-      .loc_0x16C
      add       r27, r29, r3
      b         .loc_0x194

    .loc_0x16C:
      addi      r3, r3, 0x1
      bdnz+     .loc_0x158

    .loc_0x174:
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1C3
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x3155EC
      mr        r27, r29

    .loc_0x194:
      cmplwi    r28, 0
      bne-      .loc_0x1B8
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1CC
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315614

    .loc_0x1B8:
      mr        r3, r28
      mr        r4, r27
      lwz       r12, 0x0(r28)
      mr        r5, r31
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void PSGame::RandId::playSystemSe((unsigned long, unsigned long, unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033FC88
 * Size:	0001B8
 */
void PSGame::RandId::playSystemSe((unsigned long, JAISound**, unsigned long,
                                   unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f0, -0x1C0(r2)
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      mr        r30, r6
      mr        r31, r7
      lfs       f1, 0x0(r3)
      fcmpu     cr0, f0, f1
      bne-      .loc_0xAC
      cmplwi    r30, 0x1
      bgt-      .loc_0x58
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1AA
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x31569C

    .loc_0x58:
      bl        -0x2857EC
      lis       r0, 0x4330
      stw       r30, 0xC(r1)
      lfd       f2, -0x1B0(r2)
      stw       r0, 0x8(r1)
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f2
      fmuls     f1, f0, f1
      bl        -0x27E1B4
      mr        r27, r3
      cmplw     r27, r30
      blt-      .loc_0xA4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1AD
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x3156E8

    .loc_0xA4:
      add       r4, r28, r27
      b         .loc_0x194

    .loc_0xAC:
      lfs       f0, -0x1C8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      beq-      .loc_0xD8
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1B0
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x31571C

    .loc_0xD8:
      cmplwi    r30, 0x1
      bgt-      .loc_0xFC
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1B1
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x315740

    .loc_0xFC:
      bl        -0x285890
      lfs       f0, 0x0(r27)
      lfs       f4, -0x1C8(r2)
      fsubs     f5, f1, f0
      fcmpo     cr0, f5, f4
      bge-      .loc_0x11C
      mr        r4, r28
      b         .loc_0x194

    .loc_0x11C:
      lis       r3, 0x4330
      lfs       f3, -0x1D0(r2)
      stw       r30, 0xC(r1)
      subi      r0, r30, 0x1
      lfd       f1, -0x1B0(r2)
      fsubs     f2, f3, f0
      stw       r3, 0x8(r1)
      li        r3, 0x1
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f1
      fsubs     f0, f0, f3
      fdivs     f0, f2, f0
      mtctr     r0
      cmplwi    r30, 0x1
      ble-      .loc_0x174

    .loc_0x158:
      fsubs     f5, f5, f0
      fcmpo     cr0, f5, f4
      bge-      .loc_0x16C
      add       r4, r28, r3
      b         .loc_0x194

    .loc_0x16C:
      addi      r3, r3, 0x1
      bdnz+     .loc_0x158

    .loc_0x174:
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0xC8
      li        r4, 0x1C3
      addi      r5, r5, 0xD4
      crclr     6, 0x6
      bl        -0x3157D4
      mr        r4, r28

    .loc_0x194:
      lwz       r3, -0x67A8(r13)
      mr        r5, r29
      mr        r6, r31
      bl        -0x77B8
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8033FE40
 * Size:	000074
 */
void PSGame::EnvSe_Pan::setPanAndDolby((JAISound*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lfs       f1, 0x3C(r30)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lfs       f1, 0x40(r30)
      lwz       r12, 0x10(r31)
      li        r4, 0
      li        r5, 0
      lwz       r12, 0x3C(r12)
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
 * Address:	8033FEB4
 * Size:	000060
 */
void PSGame::EnvSe_Perspective::__ct((unsigned long, float, Vec))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        0x968
      lis       r3, 0x804E
      lfs       f2, 0x0(r31)
      subi      r0, r3, 0x5194
      lfs       f1, 0x4(r31)
      stw       r0, 0x10(r30)
      mr        r3, r30
      lfs       f0, 0x8(r31)
      stfs      f2, 0x3C(r30)
      stfs      f1, 0x40(r30)
      stfs      f0, 0x44(r30)
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
 * Address:	........
 * Size:	000064
 */
void PSSystem::EnvSeBase::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033FF14
 * Size:	00004C
 */
void PSGame::EnvSe_Perspective::play(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r7, 0
      li        r8, 0
      stw       r0, 0x14(r1)
      li        r9, 0x4
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r5, r31, 0x34
      lwz       r3, -0x67A8(r13)
      addi      r6, r31, 0x3C
      lwz       r4, 0x24(r31)
      bl        -0x32A6D8
      lwz       r0, 0x14(r1)
      lwz       r3, 0x34(r31)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8033FF60
 * Size:	000088
 */
void PSGame::EnvSe_AutoPan::__ct((unsigned long, float, float, float, float,
                                  float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      addi      r11, r1, 0x30
      bl        -0x27E390
      stw       r31, 0xC(r1)
      fmr       f28, f1
      mr        r31, r3
      fmr       f29, f2
      fmr       f30, f4
      fmr       f31, f5
      fmr       f1, f3
      bl        0x8A8
      lis       r4, 0x804E
      lis       r3, 0x804E
      subi      r4, r4, 0x517C
      li        r0, 0x1
      stw       r4, 0x10(r31)
      subi      r4, r3, 0x51AC
      mr        r3, r31
      stfs      f28, 0x3C(r31)
      stfs      f29, 0x40(r31)
      stw       r4, 0x10(r31)
      stfs      f30, 0x44(r31)
      stfs      f31, 0x48(r31)
      stb       r0, 0x4C(r31)
      stb       r0, 0x4D(r31)
      addi      r11, r1, 0x30
      bl        -0x27E3A4
      lwz       r0, 0x34(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void PSGame::EnvSe_Pan::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033FFE8
 * Size:	00000C
 */
void PSGame::EnvSe_AutoPan::setDirection((bool, bool))
{
    /*
    .loc_0x0:
      stb       r4, 0x4C(r3)
      stb       r5, 0x4D(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8033FFF4
 * Size:	00011C
 */
void PSGame::EnvSe_AutoPan::setPanAndDolby((JAISound*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      b         .loc_0xB8

    .loc_0x24:
      rlwinm    r3,r5,0,24,31
      addi      r4, r3, 0x4C
      lbzx      r0, r30, r4
      cmplwi    r0, 0
      beq-      .loc_0x78
      rlwinm    r0,r3,2,0,29
      lfs       f0, -0x1D0(r2)
      add       r3, r30, r0
      lfs       f2, 0x3C(r3)
      lfs       f1, 0x44(r3)
      fadds     f1, f2, f1
      stfs      f1, 0x3C(r3)
      lfs       f1, 0x3C(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB4
      lfs       f0, -0x1A8(r2)
      li        r0, 0
      fsubs     f0, f0, f1
      stfs      f0, 0x3C(r3)
      stbx      r0, r30, r4
      b         .loc_0xB4

    .loc_0x78:
      rlwinm    r0,r3,2,0,29
      lfs       f0, -0x1C8(r2)
      add       r3, r30, r0
      lfs       f2, 0x3C(r3)
      lfs       f1, 0x44(r3)
      fsubs     f1, f2, f1
      stfs      f1, 0x3C(r3)
      lfs       f1, 0x3C(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xB4
      lfs       f0, -0x1C0(r2)
      li        r0, 0x1
      fmuls     f0, f1, f0
      stfs      f0, 0x3C(r3)
      stbx      r0, r30, r4

    .loc_0xB4:
      addi      r5, r5, 0x1

    .loc_0xB8:
      rlwinm    r0,r5,0,24,31
      cmplwi    r0, 0x2
      blt+      .loc_0x24
      mr        r3, r31
      lfs       f1, 0x3C(r30)
      lwz       r12, 0x10(r31)
      li        r4, 0
      li        r5, 0
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lfs       f1, 0x40(r30)
      lwz       r12, 0x10(r31)
      li        r4, 0
      li        r5, 0
      lwz       r12, 0x3C(r12)
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
 * Address:	80340110
 * Size:	00021C
 */
void __ct__Q26PSGame25Builder_EvnSe_PerspectiveFQ29JGeometry8TBox3<float>(void)
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
      bl        -0x323160
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x51C0
      lfs       f1, 0x0(r31)
      stw       r3, 0x0(r30)
      addi      r3, r30, 0x40
      lfs       f0, 0x4(r31)
      stb       r0, 0x18(r30)
      lfs       f4, 0x8(r31)
      stw       r0, 0x1C(r30)
      lfs       f3, 0xC(r31)
      stw       r0, 0x20(r30)
      lfs       f2, 0x10(r31)
      stfs      f1, 0x24(r30)
      lfs       f1, 0x14(r31)
      stfs      f0, 0x28(r30)
      lfs       f0, -0x1C8(r2)
      stfs      f4, 0x2C(r30)
      stfs      f3, 0x30(r30)
      stfs      f2, 0x34(r30)
      stfs      f1, 0x38(r30)
      stfs      f0, 0x3C(r30)
      bl        -0x3198B8
      lfs       f0, 0x30(r30)
      li        r0, 0
      lfs       f2, 0x24(r30)
      fcmpo     cr0, f0, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0xC0
      lfs       f1, 0x34(r30)
      lfs       f0, 0x28(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xC0
      lfs       f1, 0x38(r30)
      lfs       f0, 0x2C(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xC0
      li        r0, 0x1

    .loc_0xC0:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x200
      lwz       r0, 0x24(r30)
      lwz       r6, 0x28(r30)
      stw       r0, 0x8(r1)
      lwz       r5, 0x2C(r30)
      lfs       f0, 0x8(r1)
      lwz       r4, 0x30(r30)
      lwz       r3, 0x34(r30)
      fcmpo     cr0, f2, f0
      lwz       r0, 0x38(r30)
      stw       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r4, 0x14(r1)
      stw       r3, 0x18(r1)
      stw       r0, 0x1C(r1)
      cror      2, 0x1, 0x2
      bne-      .loc_0x10C
      stfs      f0, 0x24(r30)

    .loc_0x10C:
      lfs       f0, 0x28(r30)
      lfs       f1, 0xC(r1)
      fcmpo     cr0, f0, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x124
      stfs      f1, 0x28(r30)

    .loc_0x124:
      lfs       f0, 0x2C(r30)
      lfs       f2, 0x10(r1)
      fcmpo     cr0, f0, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0x13C
      stfs      f2, 0x2C(r30)

    .loc_0x13C:
      lfs       f0, 0x24(r30)
      lfs       f3, 0x14(r1)
      fcmpo     cr0, f0, f3
      cror      2, 0x1, 0x2
      bne-      .loc_0x154
      stfs      f3, 0x24(r30)

    .loc_0x154:
      lfs       f0, 0x28(r30)
      lfs       f4, 0x18(r1)
      fcmpo     cr0, f0, f4
      cror      2, 0x1, 0x2
      bne-      .loc_0x16C
      stfs      f4, 0x28(r30)

    .loc_0x16C:
      lfs       f0, 0x2C(r30)
      lfs       f5, 0x1C(r1)
      fcmpo     cr0, f0, f5
      cror      2, 0x1, 0x2
      bne-      .loc_0x184
      stfs      f5, 0x2C(r30)

    .loc_0x184:
      lfs       f0, 0x30(r30)
      lfs       f6, 0x8(r1)
      fcmpo     cr0, f0, f6
      cror      2, 0, 0x2
      bne-      .loc_0x19C
      stfs      f6, 0x30(r30)

    .loc_0x19C:
      lfs       f0, 0x34(r30)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x1B0
      stfs      f1, 0x34(r30)

    .loc_0x1B0:
      lfs       f0, 0x38(r30)
      fcmpo     cr0, f0, f2
      cror      2, 0, 0x2
      bne-      .loc_0x1C4
      stfs      f2, 0x38(r30)

    .loc_0x1C4:
      lfs       f0, 0x30(r30)
      fcmpo     cr0, f0, f3
      cror      2, 0, 0x2
      bne-      .loc_0x1D8
      stfs      f3, 0x30(r30)

    .loc_0x1D8:
      lfs       f0, 0x34(r30)
      fcmpo     cr0, f0, f4
      cror      2, 0, 0x2
      bne-      .loc_0x1EC
      stfs      f4, 0x34(r30)

    .loc_0x1EC:
      lfs       f0, 0x38(r30)
      fcmpo     cr0, f0, f5
      cror      2, 0, 0x2
      bne-      .loc_0x200
      stfs      f5, 0x38(r30)

    .loc_0x200:
      lwz       r0, 0x34(r1)
      mr        r3, r30
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8034032C
 * Size:	0002D0
 */
void PSGame::Builder_EvnSe_Perspective::build((float, PSSystem::EnvSeMgr*))
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
      stfd      f27, 0x70(r1)
      psq_st    f27,0x78(r1),0,0
      stfd      f26, 0x60(r1)
      psq_st    f26,0x68(r1),0,0
      stmw      r25, 0x44(r1)
      mr.       r27, r4
      fmr       f31, f1
      lis       r4, 0x8049
      mr        r26, r3
      addi      r30, r4, 0x38
      bne-      .loc_0x6C
      addi      r3, r30, 0x90
      addi      r5, r30, 0x9C
      li        r4, 0x254
      crclr     6, 0x6
      bl        -0x315D54

    .loc_0x6C:
      lfs       f3, 0x30(r26)
      lfs       f2, 0x24(r26)
      lfs       f1, 0x38(r26)
      lfs       f0, 0x2C(r26)
      fsubs     f29, f3, f2
      fsubs     f28, f1, f0
      stfs      f29, 0xC(r1)
      stfs      f28, 0x8(r1)
      lbz       r0, 0x18(r26)
      cmplwi    r0, 0
      bne-      .loc_0xD4
      lfs       f1, -0x1A4(r2)
      addi      r4, r26, 0x1C
      addi      r3, r1, 0xC
      addi      r0, r26, 0x20

    .loc_0xA8:
      lfs       f0, 0x0(r3)
      cmplw     r4, r0
      fdivs     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r3, 0x2C(r1)
      stw       r3, 0x0(r4)
      beq-      .loc_0x110
      mr        r4, r0
      addi      r3, r1, 0x8
      b         .loc_0xA8

    .loc_0xD4:
      lwz       r0, 0x1C(r26)
      li        r3, 0
      cmpwi     r0, 0
      ble-      .loc_0xF4
      lwz       r0, 0x20(r26)
      cmpwi     r0, 0
      ble-      .loc_0xF4
      li        r3, 0x1

    .loc_0xF4:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x110
      addi      r3, r30, 0x90
      addi      r5, r30, 0x9C
      li        r4, 0x27F
      crclr     6, 0x6
      bl        -0x315DF8

    .loc_0x110:
      lwz       r3, 0x1C(r26)
      lis       r31, 0x4330
      lwz       r0, 0x20(r26)
      li        r29, 0
      xoris     r3, r3, 0x8000
      lfs       f5, 0x3C(r26)
      xoris     r0, r0, 0x8000
      stw       r3, 0x2C(r1)
      lfd       f30, -0x1B8(r2)
      stw       r31, 0x28(r1)
      lfs       f2, -0x1CC(r2)
      lfd       f0, 0x28(r1)
      stw       r0, 0x34(r1)
      fsubs     f4, f0, f30
      lfs       f1, 0x24(r26)
      stw       r31, 0x30(r1)
      lfs       f0, 0x2C(r26)
      lfd       f3, 0x30(r1)
      fdivs     f29, f29, f4
      stfs      f5, 0x20(r1)
      fsubs     f3, f3, f30
      fmadds    f27, f29, f2, f1
      fdivs     f28, f28, f3
      fmadds    f26, f28, f2, f0
      b         .loc_0x280

    .loc_0x174:
      xoris     r0, r29, 0x8000
      stw       r31, 0x30(r1)
      li        r28, 0
      stw       r0, 0x34(r1)
      lfd       f0, 0x30(r1)
      fsubs     f0, f0, f30
      fmadds    f0, f29, f0, f27
      stfs      f0, 0x1C(r1)
      b         .loc_0x270

    .loc_0x198:
      xoris     r3, r28, 0x8000
      lwz       r0, 0x4C(r26)
      stw       r3, 0x34(r1)
      cmplwi    r0, 0
      stw       r31, 0x30(r1)
      lfd       f0, 0x30(r1)
      fsubs     f0, f0, f30
      fmadds    f0, f28, f0, f26
      stfs      f0, 0x24(r1)
      bne-      .loc_0x1D4
      addi      r3, r30, 0xA8
      addi      r5, r30, 0xB4
      li        r4, 0xD2
      crclr     6, 0x6
      bl        -0x315EBC

    .loc_0x1D4:
      lwz       r3, 0x4C(r26)
      lwz       r0, 0xC(r3)
      stw       r0, 0x4C(r26)
      lwz       r0, 0x4C(r26)
      cmplwi    r0, 0
      bne-      .loc_0x1F4
      lwz       r0, 0x40(r26)
      stw       r0, 0x4C(r26)

    .loc_0x1F4:
      lwz       r4, 0x10(r3)
      fmr       f1, f31
      lwz       r7, 0x1C(r1)
      mr        r3, r26
      lwz       r6, 0x20(r1)
      addi      r5, r1, 0x10
      lwz       r0, 0x24(r1)
      stw       r7, 0x10(r1)
      stw       r6, 0x14(r1)
      stw       r0, 0x18(r1)
      lwz       r12, 0x0(r26)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr.       r25, r3
      bne-      .loc_0x248
      addi      r3, r30, 0x90
      addi      r5, r30, 0x9C
      li        r4, 0x296
      crclr     6, 0x6
      bl        -0x315F30

    .loc_0x248:
      mr        r3, r26
      mr        r4, r25
      lwz       r12, 0x0(r26)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r27
      mr        r4, r25
      bl        -0x319CB0
      addi      r28, r28, 0x1

    .loc_0x270:
      lwz       r0, 0x20(r26)
      cmpw      r28, r0
      blt+      .loc_0x198
      addi      r29, r29, 0x1

    .loc_0x280:
      lwz       r0, 0x1C(r26)
      cmpw      r29, r0
      blt+      .loc_0x174
      psq_l     f31,0xB8(r1),0,0
      lfd       f31, 0xB0(r1)
      psq_l     f30,0xA8(r1),0,0
      lfd       f30, 0xA0(r1)
      psq_l     f29,0x98(r1),0,0
      lfd       f29, 0x90(r1)
      psq_l     f28,0x88(r1),0,0
      lfd       f28, 0x80(r1)
      psq_l     f27,0x78(r1),0,0
      lfd       f27, 0x70(r1)
      psq_l     f26,0x68(r1),0,0
      lfd       f26, 0x60(r1)
      lmw       r25, 0x44(r1)
      lwz       r0, 0xC4(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	803405FC
 * Size:	0000AC
 */
void PSGame::Builder_EvnSe_Perspective::newSeObj((unsigned long, float, Vec))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      stw       r29, 0x24(r1)
      fmr       f31, f1
      mr        r29, r4
      mr        r30, r5
      li        r3, 0x48
      bl        -0x31C788
      mr.       r31, r3
      beq-      .loc_0x84
      lwz       r6, 0x0(r30)
      fmr       f1, f31
      lwz       r5, 0x4(r30)
      mr        r4, r29
      lwz       r0, 0x8(r30)
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      stw       r0, 0x10(r1)
      bl        0x1E0
      lis       r3, 0x804E
      lfs       f2, 0x8(r1)
      subi      r0, r3, 0x5194
      lfs       f1, 0xC(r1)
      stw       r0, 0x10(r31)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x3C(r31)
      stfs      f1, 0x40(r31)
      stfs      f0, 0x44(r31)

    .loc_0x84:
      mr        r3, r31
      psq_l     f31,0x38(r1),0,0
      lwz       r0, 0x44(r1)
      lfd       f31, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803406A8
 * Size:	0000C8
 */
void PSGame::Builder_EvnSe_Perspective::__dt(void)
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
      mr.       r29, r3
      beq-      .loc_0xA8
      lis       r3, 0x804E
      addic.    r0, r29, 0x40
      subi      r0, r3, 0x51C0
      stw       r0, 0x0(r29)
      beq-      .loc_0x8C
      b         .loc_0x6C

    .loc_0x3C:
      mr        r4, r31
      addi      r3, r29, 0x40
      bl        -0x319AC8
      lwz       r31, 0x0(r31)
      cmplwi    r31, 0
      beq-      .loc_0x6C
      beq-      .loc_0x64
      mr        r3, r31
      li        r4, 0
      bl        -0x319F38

    .loc_0x64:
      mr        r3, r31
      bl        -0x31C65C

    .loc_0x6C:
      lwz       r31, 0x40(r29)
      cmplwi    r31, 0
      bne+      .loc_0x3C
      addic.    r0, r29, 0x40
      beq-      .loc_0x8C
      addi      r3, r29, 0x40
      li        r4, 0
      bl        -0x319EC8

    .loc_0x8C:
      mr        r3, r29
      li        r4, 0
      bl        -0x323708
      extsh.    r0, r30
      ble-      .loc_0xA8
      mr        r3, r29
      bl        -0x31C698

    .loc_0xA8:
      lwz       r0, 0x24(r1)
      mr        r3, r29
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
 * Address:	80340770
 * Size:	000050
 */
void __dt__Q28PSSystem30SingletonBase<PSGame::SeMgr> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x38
      lis       r5, 0x804E
      extsh.    r0, r4
      subi      r4, r5, 0x514C
      li        r0, 0
      stw       r4, 0x0(r31)
      stw       r0, -0x6E38(r13)
      ble-      .loc_0x38
      bl        -0x31C6F0

    .loc_0x38:
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
 * Address:	........
 * Size:	0000A8
 */
void PSSystem::IdList::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<PSSystem::IdLink>::~JSUList()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803407C0
 * Size:	000004
 */
void PSGame::Builder_EvnSe_Perspective::onBuild((PSSystem::EnvSeBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803407C4
 * Size:	00000C
 */
void PSSystem::EnvSeBase::getCastType(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x6261
      addi      r3, r3, 0x7365
      blr
    */
}

/*
 * --INFO--
 * Address:	803407D0
 * Size:	000004
 */
void PSSystem::EnvSeBase::setPanAndDolby((JAISound*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803407D4
 * Size:	000064
 */
void PSGame::SeMgr::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x4C
      lis       r3, 0x804E
      subi      r0, r3, 0x5158
      stw       r0, 0x0(r31)
      beq-      .loc_0x3C
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x514C
      stw       r3, 0x0(r31)
      stw       r0, -0x6E38(r13)

    .loc_0x3C:
      extsh.    r0, r4
      ble-      .loc_0x4C
      mr        r3, r31
      bl        -0x31C768

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
