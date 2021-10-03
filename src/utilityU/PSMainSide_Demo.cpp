

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void PSM::DemoInitiator::equalSet((char const*, char const*, unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void PSM::DemoInitiator::equalSetStream((char const*, unsigned long,
                                         unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void PSM::DemoInitiator::equalSetEx((char const*, bool, char const*,
                                     unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void PSM::DemoInitiator::equalSetExStream((char const*, bool, unsigned long,
                                           unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void PSM::DemoInitiator::is((char const*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void PSM::DemoInitiator::numberSet((char const*, char const*, unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void PSM::DemoInitiator::setDefault((char const*, unsigned char, unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80463FE8
 * Size:	00005C
 */
void PSM::Demo::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x447030
      lis       r3, 0x804F
      li        r5, 0
      subi      r0, r3, 0xDB0
      li        r4, 0x1
      stw       r0, 0x0(r31)
      li        r0, -0x1
      mr        r3, r31
      stb       r5, 0x18(r31)
      stb       r4, 0x19(r31)
      stw       r0, 0x1C(r31)
      stw       r0, 0x20(r31)
      stw       r5, 0x24(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80464044
 * Size:	00020C
 */
void PSM::Demo::init((Vec*, Vec*, float (*)[4], PSM::DemoArg))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r8, 0x804A
      stw       r0, 0x44(r1)
      stmw      r25, 0x24(r1)
      mr        r30, r3
      mr        r25, r4
      mr        r27, r5
      mr        r26, r6
      mr        r31, r7
      subi      r29, r8, 0x2F80
      li        r3, 0x38
      bl        -0x4401D0
      mr.       r28, r3
      beq-      .loc_0x44
      bl        -0x12EBD0
      mr        r28, r3

    .loc_0x44:
      mr        r3, r28
      li        r4, 0x1
      li        r5, 0x2
      bl        -0x12EBAC
      li        r0, 0x1
      li        r8, 0xFF
      stb       r0, 0x7(r28)
      mr        r3, r30
      addi      r4, r1, 0xC
      addi      r5, r1, 0x8
      stw       r25, 0x8(r28)
      stw       r27, 0x10(r28)
      stw       r26, 0x18(r28)
      stb       r8, 0x6(r28)
      lwz       r7, 0x0(r31)
      lwz       r6, 0x4(r31)
      lwz       r0, 0x8(r31)
      stb       r8, 0x8(r1)
      stw       r7, 0xC(r1)
      stw       r6, 0x10(r1)
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      lwz       r3, 0x4(r31)
      mr        r26, r0
      bl        -0x3997E8
      addi      r3, r3, 0x1
      bl        -0x440154
      stw       r3, 0x28(r30)
      lwz       r3, 0x28(r30)
      lwz       r4, 0x4(r31)
      bl        -0x3998B8
      li        r3, 0x2C
      bl        -0x440274
      mr.       r27, r3
      beq-      .loc_0xF0
      lbz       r4, 0x8(r1)
      mr        r5, r28
      bl        0x3940
      mr        r27, r3

    .loc_0xF0:
      cmplwi    r27, 0
      bne-      .loc_0x10C
      addi      r3, r29, 0
      addi      r5, r29, 0x14
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x439B0C

    .loc_0x10C:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x12C
      addi      r3, r29, 0x20
      addi      r5, r29, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x439B2C

    .loc_0x12C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x14C
      addi      r3, r29, 0x20
      addi      r5, r29, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x439B4C

    .loc_0x14C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x16C
      addi      r3, r29, 0x2C
      addi      r5, r29, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x439B6C

    .loc_0x16C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x190
      addi      r3, r29, 0x2C
      addi      r5, r29, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x439B90

    .loc_0x190:
      mr        r3, r28
      mr        r4, r27
      bl        -0x122AC8
      cmplwi    r27, 0
      bne-      .loc_0x1B8
      addi      r3, r29, 0
      addi      r5, r29, 0x14
      li        r4, 0xCB
      crclr     6, 0x6
      bl        -0x439BB8

    .loc_0x1B8:
      cmplwi    r26, 0
      beq-      .loc_0x1CC
      mr        r3, r27
      mr        r4, r26
      bl        -0x122974

    .loc_0x1CC:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      mr        r5, r27
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0x18(r30)
      bl        .loc_0x20C
      lmw       r25, 0x24(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x20C:
    */
}

/*
 * --INFO--
 * Address:	80464250
 * Size:	0000EC
 */
void PSM::Demo::demo1stLoadSync(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r3, 0x2F80
      stw       r30, 0x8(r1)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x439C48

    .loc_0x3C:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x439C68

    .loc_0x5C:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x439C88

    .loc_0x7C:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x439CAC

    .loc_0xA0:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xC0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5B
      crclr     6, 0x6
      bl        -0x439CCC

    .loc_0xC0:
      lwz       r3, 0x4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	8046433C
 * Size:	000048
 */
void PSM::Demo::initDemoScene((PSM::DemoArg&, PSM::Scene_Demo*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r6, 0x804A
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      lwz       r3, 0x4(r4)
      subi      r4, r6, 0x2F24
      bl        -0x399C9C
      cmpwi     r3, 0
      bne-      .loc_0x34
      li        r0, 0x1
      stb       r0, 0x28(r31)

    .loc_0x34:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80464384
 * Size:	001DA4
 */
void PSM::Demo::initiate((PSM::DemoArg, unsigned char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      li        r0, -0x1
      stmw      r22, 0x48(r1)
      mr        r24, r4
      lis       r4, 0x804A
      lwz       r28, 0x4(r24)
      subi      r30, r4, 0x2F80
      stw       r0, 0x8(r1)
      li        r4, 0
      cmplwi    r28, 0
      mr        r23, r3
      mr        r25, r5
      li        r26, 0
      lwz       r9, 0x70(r30)
      lwz       r8, 0x74(r30)
      lwz       r7, 0x78(r30)
      lwz       r6, 0x7C(r30)
      stw       r9, 0xC(r1)
      stw       r8, 0x10(r1)
      stw       r7, 0x14(r1)
      stw       r6, 0x18(r1)
      stb       r4, 0x1C(r1)
      bne-      .loc_0x78
      addi      r3, r30, 0
      addi      r5, r30, 0x14
      li        r4, 0x100
      crclr     6, 0x6
      bl        -0x439DB8

    .loc_0x78:
      cmplwi    r25, 0
      li        r27, 0
      addi      r22, r1, 0x1C
      mr        r0, r27
      beq-      .loc_0x98
      cmplwi    r28, 0
      beq-      .loc_0x98
      li        r0, 0x1

    .loc_0x98:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0xB4
      addi      r3, r30, 0
      addi      r5, r30, 0x14
      li        r4, 0x29
      crclr     6, 0x6
      bl        -0x439DF4

    .loc_0xB4:
      li        r0, -0x1
      mr        r3, r22
      stw       r0, 0x8(r1)
      addi      r4, r2, 0x2930
      bl        -0x399BF0
      li        r0, 0xFF
      mr        r3, r28
      stb       r0, 0x0(r25)
      addi      r4, r30, 0x80
      bl        -0x399D9C
      cmpwi     r3, 0
      bne-      .loc_0xFC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1012
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xFC:
      rlwinm.   r0,r27,0,24,31
      lwz       r29, 0x8(r24)
      bne-      .loc_0x12C
      mr        r3, r28
      addi      r4, r30, 0x94
      bl        -0x399DD4
      cmpwi     r3, 0
      bne-      .loc_0x12C
      li        r0, 0xFF
      stw       r29, 0x8(r1)
      li        r27, 0x1
      stb       r0, 0x0(r25)

    .loc_0x12C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x160
      mr        r3, r28
      addi      r4, r30, 0xA0
      bl        -0x399E00
      cmpwi     r3, 0
      bne-      .loc_0x160
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1005
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x160:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x194
      mr        r3, r28
      addi      r4, r30, 0xB0
      bl        -0x399E34
      cmpwi     r3, 0
      bne-      .loc_0x194
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1006
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x194:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1C8
      mr        r3, r28
      addi      r4, r30, 0xC0
      bl        -0x399E68
      cmpwi     r3, 0
      bne-      .loc_0x1C8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1001
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1C8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1FC
      mr        r3, r28
      addi      r4, r30, 0xD4
      bl        -0x399E9C
      cmpwi     r3, 0
      bne-      .loc_0x1FC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1001
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1FC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x230
      mr        r3, r28
      addi      r4, r30, 0xE8
      bl        -0x399ED0
      cmpwi     r3, 0
      bne-      .loc_0x230
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1008
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x230:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x264
      mr        r3, r28
      addi      r4, r30, 0xFC
      bl        -0x399F04
      cmpwi     r3, 0
      bne-      .loc_0x264
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1008
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x264:
      addic.    r0, r30, 0x94
      beq-      .loc_0x274
      cmplwi    r28, 0
      bne-      .loc_0x27C

    .loc_0x274:
      li        r0, 0
      b         .loc_0x29C

    .loc_0x27C:
      mr        r4, r28
      addi      r3, r30, 0x94
      bl        -0x399F48
      cmpwi     r3, 0
      bne-      .loc_0x298
      li        r0, 0x1
      b         .loc_0x29C

    .loc_0x298:
      li        r0, 0

    .loc_0x29C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x4D4
      lwz       r3, 0x0(r24)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm.   r29,r0,1,31,31
      beq-      .loc_0x2F0
      cmplwi    r3, 0
      beq-      .loc_0x2CC
      addi      r0, r2, 0x2934
      cmplwi    r0, 0
      bne-      .loc_0x2D4

    .loc_0x2CC:
      li        r29, 0
      b         .loc_0x2F0

    .loc_0x2D4:
      addi      r4, r2, 0x2934
      bl        -0x399F9C
      cmpwi     r3, 0
      bne-      .loc_0x2EC
      li        r29, 0x1
      b         .loc_0x2F0

    .loc_0x2EC:
      li        r29, 0

    .loc_0x2F0:
      rlwinm    r0,r29,0,24,31
      lwz       r22, 0x8(r24)
      cntlzw    r3, r0
      rlwinm.   r0,r3,27,24,31
      rlwinm    r31,r3,27,5,31
      beq-      .loc_0x334
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x334
      mr        r3, r28
      addi      r4, r30, 0x110
      bl        -0x399FDC
      cmpwi     r3, 0
      bne-      .loc_0x334
      li        r0, 0xFF
      stw       r22, 0x8(r1)
      li        r27, 0x1
      stb       r0, 0x0(r25)

    .loc_0x334:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x370
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x370
      mr        r3, r28
      addi      r4, r30, 0x110
      bl        -0x39A010
      cmpwi     r3, 0
      bne-      .loc_0x370
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1007
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x370:
      rlwinm.   r0,r31,0,24,31
      lwz       r22, 0x8(r24)
      beq-      .loc_0x3A8
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x3A8
      mr        r3, r28
      addi      r4, r30, 0x124
      bl        -0x39A050
      cmpwi     r3, 0
      bne-      .loc_0x3A8
      li        r0, 0xFF
      stw       r22, 0x8(r1)
      li        r27, 0x1
      stb       r0, 0x0(r25)

    .loc_0x3A8:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x3E4
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x3E4
      mr        r3, r28
      addi      r4, r30, 0x124
      bl        -0x39A084
      cmpwi     r3, 0
      bne-      .loc_0x3E4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1007
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x3E4:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x420
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x420
      mr        r3, r28
      addi      r4, r30, 0x13C
      bl        -0x39A0C0
      cmpwi     r3, 0
      bne-      .loc_0x420
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1001
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x420:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x45C
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x45C
      mr        r3, r28
      addi      r4, r30, 0x13C
      bl        -0x39A0FC
      cmpwi     r3, 0
      bne-      .loc_0x45C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1007
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x45C:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x498
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x498
      mr        r3, r28
      addi      r4, r30, 0x150
      bl        -0x39A138
      cmpwi     r3, 0
      bne-      .loc_0x498
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1007
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x498:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x4D4
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x4D4
      mr        r3, r28
      addi      r4, r30, 0x150
      bl        -0x39A174
      cmpwi     r3, 0
      bne-      .loc_0x4D4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1001
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x4D4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x508
      mr        r3, r28
      addi      r4, r30, 0x168
      bl        -0x39A1A8
      cmpwi     r3, 0
      bne-      .loc_0x508
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x101D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x508:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x53C
      mr        r3, r28
      addi      r4, r30, 0x180
      bl        -0x39A1DC
      cmpwi     r3, 0
      bne-      .loc_0x53C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x101D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x53C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x570
      mr        r3, r28
      addi      r4, r30, 0x198
      bl        -0x39A210
      cmpwi     r3, 0
      bne-      .loc_0x570
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1009
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x570:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x5A4
      mr        r3, r28
      addi      r4, r30, 0x198
      bl        -0x39A244
      cmpwi     r3, 0
      bne-      .loc_0x5A4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1009
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x5A4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x5D8
      mr        r3, r28
      addi      r4, r30, 0x1A8
      bl        -0x39A278
      cmpwi     r3, 0
      bne-      .loc_0x5D8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1047
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x5D8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x60C
      mr        r3, r28
      addi      r4, r30, 0x1BC
      bl        -0x39A2AC
      cmpwi     r3, 0
      bne-      .loc_0x60C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100C
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x60C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x640
      mr        r3, r28
      addi      r4, r30, 0x1CC
      bl        -0x39A2E0
      cmpwi     r3, 0
      bne-      .loc_0x640
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100C
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x640:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x674
      mr        r3, r28
      addi      r4, r30, 0x1DC
      bl        -0x39A314
      cmpwi     r3, 0
      bne-      .loc_0x674
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100C
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x674:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x6A8
      mr        r3, r28
      addi      r4, r30, 0x1EC
      bl        -0x39A348
      cmpwi     r3, 0
      bne-      .loc_0x6A8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x6A8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x6DC
      mr        r3, r28
      addi      r4, r30, 0x200
      bl        -0x39A37C
      cmpwi     r3, 0
      bne-      .loc_0x6DC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x6DC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x710
      mr        r3, r28
      addi      r4, r30, 0x218
      bl        -0x39A3B0
      cmpwi     r3, 0
      bne-      .loc_0x710
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x710:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x744
      mr        r3, r28
      addi      r4, r30, 0x22C
      bl        -0x39A3E4
      cmpwi     r3, 0
      bne-      .loc_0x744
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x744:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x778
      mr        r3, r28
      addi      r4, r30, 0x244
      bl        -0x39A418
      cmpwi     r3, 0
      bne-      .loc_0x778
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x100D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x778:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x7AC
      mr        r3, r28
      addi      r4, r30, 0x25C
      bl        -0x39A44C
      cmpwi     r3, 0
      bne-      .loc_0x7AC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1024
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x7AC:
      bl        0x29EC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x800
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x834
      mr        r3, r28
      addi      r4, r30, 0x26C
      bl        -0x39A49C
      cmpwi     r3, 0
      bne-      .loc_0x834
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1046
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)
      b         .loc_0x834

    .loc_0x800:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x834
      mr        r3, r28
      addi      r4, r30, 0x26C
      bl        -0x39A4D4
      cmpwi     r3, 0
      bne-      .loc_0x834
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1026
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x834:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x868
      mr        r3, r28
      addi      r4, r30, 0x278
      bl        -0x39A508
      cmpwi     r3, 0
      bne-      .loc_0x868
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x868:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x89C
      mr        r3, r28
      addi      r4, r30, 0x28C
      bl        -0x39A53C
      cmpwi     r3, 0
      bne-      .loc_0x89C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x89C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x8D0
      mr        r3, r28
      addi      r4, r30, 0x2A0
      bl        -0x39A570
      cmpwi     r3, 0
      bne-      .loc_0x8D0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x8D0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x904
      mr        r3, r28
      addi      r4, r30, 0x2B4
      bl        -0x39A5A4
      cmpwi     r3, 0
      bne-      .loc_0x904
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x904:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x938
      mr        r3, r28
      addi      r4, r30, 0x2C8
      bl        -0x39A5D8
      cmpwi     r3, 0
      bne-      .loc_0x938
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x938:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x96C
      mr        r3, r28
      addi      r4, r30, 0x2DC
      bl        -0x39A60C
      cmpwi     r3, 0
      bne-      .loc_0x96C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x96C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x9A0
      mr        r3, r28
      addi      r4, r30, 0x2F0
      bl        -0x39A640
      cmpwi     r3, 0
      bne-      .loc_0x9A0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x9A0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x9D4
      mr        r3, r28
      addi      r4, r30, 0x304
      bl        -0x39A674
      cmpwi     r3, 0
      bne-      .loc_0x9D4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x9D4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xA08
      mr        r3, r28
      addi      r4, r30, 0x318
      bl        -0x39A6A8
      cmpwi     r3, 0
      bne-      .loc_0xA08
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xA08:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xA3C
      mr        r3, r28
      addi      r4, r30, 0x32C
      bl        -0x39A6DC
      cmpwi     r3, 0
      bne-      .loc_0xA3C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xA3C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xA70
      mr        r3, r28
      addi      r4, r30, 0x340
      bl        -0x39A710
      cmpwi     r3, 0
      bne-      .loc_0xA70
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xA70:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xAA4
      mr        r3, r28
      addi      r4, r30, 0x354
      bl        -0x39A744
      cmpwi     r3, 0
      bne-      .loc_0xAA4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xAA4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xAD8
      mr        r3, r28
      addi      r4, r30, 0x368
      bl        -0x39A778
      cmpwi     r3, 0
      bne-      .loc_0xAD8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xAD8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xB0C
      mr        r3, r28
      addi      r4, r30, 0x37C
      bl        -0x39A7AC
      cmpwi     r3, 0
      bne-      .loc_0xB0C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1028
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xB0C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xB40
      mr        r3, r28
      addi      r4, r30, 0x38C
      bl        -0x39A7E0
      cmpwi     r3, 0
      bne-      .loc_0xB40
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xB40:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xB74
      mr        r3, r28
      addi      r4, r30, 0x398
      bl        -0x39A814
      cmpwi     r3, 0
      bne-      .loc_0xB74
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xB74:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xBA8
      mr        r3, r28
      addi      r4, r30, 0x3AC
      bl        -0x39A848
      cmpwi     r3, 0
      bne-      .loc_0xBA8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xBA8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xBDC
      mr        r3, r28
      addi      r4, r30, 0x3C0
      bl        -0x39A87C
      cmpwi     r3, 0
      bne-      .loc_0xBDC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xBDC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xC10
      mr        r3, r28
      addi      r4, r30, 0x3D4
      bl        -0x39A8B0
      cmpwi     r3, 0
      bne-      .loc_0xC10
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xC10:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xC44
      mr        r3, r28
      addi      r4, r30, 0x3E8
      bl        -0x39A8E4
      cmpwi     r3, 0
      bne-      .loc_0xC44
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xC44:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xC78
      mr        r3, r28
      addi      r4, r30, 0x3FC
      bl        -0x39A918
      cmpwi     r3, 0
      bne-      .loc_0xC78
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xC78:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xCAC
      mr        r3, r28
      addi      r4, r30, 0x410
      bl        -0x39A94C
      cmpwi     r3, 0
      bne-      .loc_0xCAC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xCAC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xCE0
      mr        r3, r28
      addi      r4, r30, 0x424
      bl        -0x39A980
      cmpwi     r3, 0
      bne-      .loc_0xCE0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xCE0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xD14
      mr        r3, r28
      addi      r4, r30, 0x438
      bl        -0x39A9B4
      cmpwi     r3, 0
      bne-      .loc_0xD14
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xD14:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xD48
      mr        r3, r28
      addi      r4, r30, 0x44C
      bl        -0x39A9E8
      cmpwi     r3, 0
      bne-      .loc_0xD48
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xD48:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xD7C
      mr        r3, r28
      addi      r4, r30, 0x460
      bl        -0x39AA1C
      cmpwi     r3, 0
      bne-      .loc_0xD7C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xD7C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xDB0
      mr        r3, r28
      addi      r4, r30, 0x474
      bl        -0x39AA50
      cmpwi     r3, 0
      bne-      .loc_0xDB0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xDB0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xDE4
      mr        r3, r28
      addi      r4, r30, 0x488
      bl        -0x39AA84
      cmpwi     r3, 0
      bne-      .loc_0xDE4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xDE4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xE18
      mr        r3, r28
      addi      r4, r30, 0x49C
      bl        -0x39AAB8
      cmpwi     r3, 0
      bne-      .loc_0xE18
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xE18:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xE4C
      mr        r3, r28
      addi      r4, r30, 0x4B0
      bl        -0x39AAEC
      cmpwi     r3, 0
      bne-      .loc_0xE4C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xE4C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xE80
      mr        r3, r28
      addi      r4, r30, 0x4C4
      bl        -0x39AB20
      cmpwi     r3, 0
      bne-      .loc_0xE80
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xE80:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xEB4
      mr        r3, r28
      addi      r4, r30, 0x4D8
      bl        -0x39AB54
      cmpwi     r3, 0
      bne-      .loc_0xEB4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xEB4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xEE8
      mr        r3, r28
      addi      r4, r30, 0x4F0
      bl        -0x39AB88
      cmpwi     r3, 0
      bne-      .loc_0xEE8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102A
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xEE8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xF1C
      mr        r3, r28
      addi      r4, r30, 0x500
      bl        -0x39ABBC
      cmpwi     r3, 0
      bne-      .loc_0xF1C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xF1C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xF50
      mr        r3, r28
      addi      r4, r30, 0x510
      bl        -0x39ABF0
      cmpwi     r3, 0
      bne-      .loc_0xF50
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xF50:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xF84
      mr        r3, r28
      addi      r4, r30, 0x520
      bl        -0x39AC24
      cmpwi     r3, 0
      bne-      .loc_0xF84
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xF84:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xFB8
      mr        r3, r28
      addi      r4, r30, 0x534
      bl        -0x39AC58
      cmpwi     r3, 0
      bne-      .loc_0xFB8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102B
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xFB8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xFEC
      mr        r3, r28
      addi      r4, r30, 0x548
      bl        -0x39AC8C
      cmpwi     r3, 0
      bne-      .loc_0xFEC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1027
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0xFEC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1020
      mr        r3, r28
      addi      r4, r30, 0x558
      bl        -0x39ACC0
      cmpwi     r3, 0
      bne-      .loc_0x1020
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1020:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1054
      mr        r3, r28
      addi      r4, r30, 0x56C
      bl        -0x39ACF4
      cmpwi     r3, 0
      bne-      .loc_0x1054
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1029
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1054:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1088
      mr        r3, r28
      addi      r4, r30, 0x580
      bl        -0x39AD28
      cmpwi     r3, 0
      bne-      .loc_0x1088
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102C
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1088:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x10BC
      mr        r3, r28
      addi      r4, r30, 0x590
      bl        -0x39AD5C
      cmpwi     r3, 0
      bne-      .loc_0x10BC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102D
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x10BC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x10F0
      mr        r3, r28
      addi      r4, r30, 0x5A8
      bl        -0x39AD90
      cmpwi     r3, 0
      bne-      .loc_0x10F0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102E
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x10F0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1124
      mr        r3, r28
      addi      r4, r30, 0x5B4
      bl        -0x39ADC4
      cmpwi     r3, 0
      bne-      .loc_0x1124
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102A
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1124:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1158
      mr        r3, r28
      addi      r4, r30, 0x5C4
      bl        -0x39ADF8
      cmpwi     r3, 0
      bne-      .loc_0x1158
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102F
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1158:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x118C
      mr        r3, r28
      addi      r4, r30, 0x5DC
      bl        -0x39AE2C
      cmpwi     r3, 0
      bne-      .loc_0x118C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1030
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x118C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x11C0
      mr        r3, r28
      addi      r4, r30, 0x5F0
      bl        -0x39AE60
      cmpwi     r3, 0
      bne-      .loc_0x11C0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1031
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x11C0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x11F4
      mr        r3, r28
      addi      r4, r30, 0x5FC
      bl        -0x39AE94
      cmpwi     r3, 0
      bne-      .loc_0x11F4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x102A
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x11F4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1228
      mr        r3, r28
      addi      r4, r30, 0x610
      bl        -0x39AEC8
      cmpwi     r3, 0
      bne-      .loc_0x1228
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1032
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1228:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x125C
      mr        r3, r28
      addi      r4, r30, 0x620
      bl        -0x39AEFC
      cmpwi     r3, 0
      bne-      .loc_0x125C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x125C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1290
      mr        r3, r28
      addi      r4, r30, 0x634
      bl        -0x39AF30
      cmpwi     r3, 0
      bne-      .loc_0x1290
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1036
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1290:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x12C4
      mr        r3, r28
      addi      r4, r30, 0x644
      bl        -0x39AF64
      cmpwi     r3, 0
      bne-      .loc_0x12C4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1037
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x12C4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x12F8
      mr        r3, r28
      addi      r4, r30, 0x654
      bl        -0x39AF98
      cmpwi     r3, 0
      bne-      .loc_0x12F8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1039
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x12F8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x132C
      mr        r3, r28
      addi      r4, r30, 0x668
      bl        -0x39AFCC
      cmpwi     r3, 0
      bne-      .loc_0x132C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x103A
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x132C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1360
      mr        r3, r28
      addi      r4, r30, 0x67C
      bl        -0x39B000
      cmpwi     r3, 0
      bne-      .loc_0x1360
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x103B
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1360:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1394
      mr        r3, r28
      addi      r4, r30, 0x690
      bl        -0x39B034
      cmpwi     r3, 0
      bne-      .loc_0x1394
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1394:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x13C8
      mr        r3, r28
      addi      r4, r30, 0x6A4
      bl        -0x39B068
      cmpwi     r3, 0
      bne-      .loc_0x13C8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x13C8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x13FC
      mr        r3, r28
      addi      r4, r30, 0x6B4
      bl        -0x39B09C
      cmpwi     r3, 0
      bne-      .loc_0x13FC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x13FC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1430
      mr        r3, r28
      addi      r4, r30, 0x6C4
      bl        -0x39B0D0
      cmpwi     r3, 0
      bne-      .loc_0x1430
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x104A
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1430:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1464
      mr        r3, r28
      addi      r4, r30, 0x6D4
      bl        -0x39B104
      cmpwi     r3, 0
      bne-      .loc_0x1464
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1048
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1464:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1498
      mr        r3, r28
      addi      r4, r30, 0x6E4
      bl        -0x39B138
      cmpwi     r3, 0
      bne-      .loc_0x1498
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1031
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1498:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x14CC
      mr        r3, r28
      addi      r4, r30, 0x6F8
      bl        -0x39B16C
      cmpwi     r3, 0
      bne-      .loc_0x14CC
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x14CC:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1500
      mr        r3, r28
      addi      r4, r30, 0x708
      bl        -0x39B1A0
      cmpwi     r3, 0
      bne-      .loc_0x1500
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1031
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1500:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1534
      mr        r3, r28
      addi      r4, r30, 0x718
      bl        -0x39B1D4
      cmpwi     r3, 0
      bne-      .loc_0x1534
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1034
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1534:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1568
      mr        r3, r28
      addi      r4, r30, 0x72C
      bl        -0x39B208
      cmpwi     r3, 0
      bne-      .loc_0x1568
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1034
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1568:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x159C
      mr        r3, r28
      addi      r4, r30, 0x744
      bl        -0x39B23C
      cmpwi     r3, 0
      bne-      .loc_0x159C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1034
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x159C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x15D0
      mr        r3, r28
      addi      r4, r30, 0x758
      bl        -0x39B270
      cmpwi     r3, 0
      bne-      .loc_0x15D0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1049
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x15D0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1604
      mr        r3, r28
      addi      r4, r30, 0x764
      bl        -0x39B2A4
      cmpwi     r3, 0
      bne-      .loc_0x1604
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1035
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1604:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1638
      mr        r3, r28
      addi      r4, r30, 0x774
      bl        -0x39B2D8
      cmpwi     r3, 0
      bne-      .loc_0x1638
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1049
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1638:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x166C
      mr        r3, r28
      addi      r4, r30, 0x788
      bl        -0x39B30C
      cmpwi     r3, 0
      bne-      .loc_0x166C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x166C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x16A0
      mr        r3, r28
      addi      r4, r30, 0x79C
      bl        -0x39B340
      cmpwi     r3, 0
      bne-      .loc_0x16A0
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x16A0:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x16D4
      mr        r3, r28
      addi      r4, r30, 0x7B0
      bl        -0x39B374
      cmpwi     r3, 0
      bne-      .loc_0x16D4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x16D4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1708
      mr        r3, r28
      addi      r4, r30, 0x7C0
      bl        -0x39B3A8
      cmpwi     r3, 0
      bne-      .loc_0x1708
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1048
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1708:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x173C
      mr        r3, r28
      addi      r4, r30, 0x7CC
      bl        -0x39B3DC
      cmpwi     r3, 0
      bne-      .loc_0x173C
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x173C:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1770
      mr        r3, r28
      addi      r4, r30, 0x7E4
      bl        -0x39B410
      cmpwi     r3, 0
      bne-      .loc_0x1770
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x1770:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x17A4
      mr        r3, r28
      addi      r4, r30, 0x7F0
      bl        -0x39B444
      cmpwi     r3, 0
      bne-      .loc_0x17A4
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x17A4:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x17D8
      mr        r3, r28
      addi      r4, r30, 0x800
      bl        -0x39B478
      cmpwi     r3, 0
      bne-      .loc_0x17D8
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x1033
      stb       r0, 0x0(r25)
      li        r27, 0x1
      stw       r3, 0x8(r1)

    .loc_0x17D8:
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0x1808
      mr        r3, r28
      addi      r4, r30, 0x810
      bl        -0x39B4AC
      cmpwi     r3, 0
      bne-      .loc_0x1808
      lis       r3, 0xC001
      li        r0, 0xFF
      addi      r3, r3, 0x103C
      stb       r0, 0x0(r25)
      stw       r3, 0x8(r1)

    .loc_0x1808:
      addic.    r0, r30, 0x80
      beq-      .loc_0x1818
      cmplwi    r28, 0
      bne-      .loc_0x1820

    .loc_0x1818:
      li        r0, 0
      b         .loc_0x1840

    .loc_0x1820:
      mr        r4, r28
      addi      r3, r30, 0x80
      bl        -0x39B4EC
      cmpwi     r3, 0
      bne-      .loc_0x183C
      li        r0, 0x1
      b         .loc_0x1840

    .loc_0x183C:
      li        r0, 0

    .loc_0x1840:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1854
      lbz       r3, 0x18(r1)
      subi      r0, r3, 0xF
      stb       r0, 0x18(r1)

    .loc_0x1854:
      addic.    r0, r30, 0x13C
      beq-      .loc_0x1864
      cmplwi    r28, 0
      bne-      .loc_0x186C

    .loc_0x1864:
      li        r0, 0
      b         .loc_0x188C

    .loc_0x186C:
      mr        r4, r28
      addi      r3, r30, 0x13C
      bl        -0x39B538
      cmpwi     r3, 0
      bne-      .loc_0x1888
      li        r0, 0x1
      b         .loc_0x188C

    .loc_0x1888:
      li        r0, 0

    .loc_0x188C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0xC0
      beq-      .loc_0x18A4
      cmplwi    r28, 0
      bne-      .loc_0x18AC

    .loc_0x18A4:
      li        r0, 0
      b         .loc_0x18CC

    .loc_0x18AC:
      mr        r4, r28
      addi      r3, r30, 0xC0
      bl        -0x39B578
      cmpwi     r3, 0
      bne-      .loc_0x18C8
      li        r0, 0x1
      b         .loc_0x18CC

    .loc_0x18C8:
      li        r0, 0

    .loc_0x18CC:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0xD4
      beq-      .loc_0x18E4
      cmplwi    r28, 0
      bne-      .loc_0x18EC

    .loc_0x18E4:
      li        r0, 0
      b         .loc_0x190C

    .loc_0x18EC:
      mr        r4, r28
      addi      r3, r30, 0xD4
      bl        -0x39B5B8
      cmpwi     r3, 0
      bne-      .loc_0x1908
      li        r0, 0x1
      b         .loc_0x190C

    .loc_0x1908:
      li        r0, 0

    .loc_0x190C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0xE8
      beq-      .loc_0x1924
      cmplwi    r28, 0
      bne-      .loc_0x192C

    .loc_0x1924:
      li        r0, 0
      b         .loc_0x194C

    .loc_0x192C:
      mr        r4, r28
      addi      r3, r30, 0xE8
      bl        -0x39B5F8
      cmpwi     r3, 0
      bne-      .loc_0x1948
      li        r0, 0x1
      b         .loc_0x194C

    .loc_0x1948:
      li        r0, 0

    .loc_0x194C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0xFC
      beq-      .loc_0x1964
      cmplwi    r28, 0
      bne-      .loc_0x196C

    .loc_0x1964:
      li        r0, 0
      b         .loc_0x198C

    .loc_0x196C:
      mr        r4, r28
      addi      r3, r30, 0xFC
      bl        -0x39B638
      cmpwi     r3, 0
      bne-      .loc_0x1988
      li        r0, 0x1
      b         .loc_0x198C

    .loc_0x1988:
      li        r0, 0

    .loc_0x198C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0x110
      beq-      .loc_0x19A4
      cmplwi    r28, 0
      bne-      .loc_0x19AC

    .loc_0x19A4:
      li        r0, 0
      b         .loc_0x19CC

    .loc_0x19AC:
      mr        r4, r28
      addi      r3, r30, 0x110
      bl        -0x39B678
      cmpwi     r3, 0
      bne-      .loc_0x19C8
      li        r0, 0x1
      b         .loc_0x19CC

    .loc_0x19C8:
      li        r0, 0

    .loc_0x19CC:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0x124
      beq-      .loc_0x19E4
      cmplwi    r28, 0
      bne-      .loc_0x19EC

    .loc_0x19E4:
      li        r0, 0
      b         .loc_0x1A0C

    .loc_0x19EC:
      mr        r4, r28
      addi      r3, r30, 0x124
      bl        -0x39B6B8
      cmpwi     r3, 0
      bne-      .loc_0x1A08
      li        r0, 0x1
      b         .loc_0x1A0C

    .loc_0x1A08:
      li        r0, 0

    .loc_0x1A0C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0x150
      beq-      .loc_0x1A24
      cmplwi    r28, 0
      bne-      .loc_0x1A2C

    .loc_0x1A24:
      li        r0, 0
      b         .loc_0x1A4C

    .loc_0x1A2C:
      mr        r4, r28
      addi      r3, r30, 0x150
      bl        -0x39B6F8
      cmpwi     r3, 0
      bne-      .loc_0x1A48
      li        r0, 0x1
      b         .loc_0x1A4C

    .loc_0x1A48:
      li        r0, 0

    .loc_0x1A4C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1A94
      addic.    r0, r30, 0x824
      beq-      .loc_0x1A64
      cmplwi    r28, 0
      bne-      .loc_0x1A6C

    .loc_0x1A64:
      li        r0, 0
      b         .loc_0x1A8C

    .loc_0x1A6C:
      mr        r4, r28
      addi      r3, r30, 0x824
      bl        -0x39B738
      cmpwi     r3, 0
      bne-      .loc_0x1A88
      li        r0, 0x1
      b         .loc_0x1A8C

    .loc_0x1A88:
      li        r0, 0

    .loc_0x1A8C:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1AA8

    .loc_0x1A94:
      li        r3, 0
      li        r0, 0x3804
      stb       r3, 0x19(r23)
      stw       r0, 0x1C(r23)
      b         .loc_0x1C5C

    .loc_0x1AA8:
      addic.    r0, r30, 0x834
      beq-      .loc_0x1AB8
      cmplwi    r28, 0
      bne-      .loc_0x1AC0

    .loc_0x1AB8:
      li        r0, 0
      b         .loc_0x1AE0

    .loc_0x1AC0:
      mr        r4, r28
      addi      r3, r30, 0x834
      bl        -0x39B78C
      cmpwi     r3, 0
      bne-      .loc_0x1ADC
      li        r0, 0x1
      b         .loc_0x1AE0

    .loc_0x1ADC:
      li        r0, 0

    .loc_0x1AE0:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1B00
      li        r0, 0x181C
      lis       r3, 0x8047
      stw       r0, 0x1C(r23)
      subi      r0, r3, 0x4A48
      stw       r0, 0x24(r23)
      b         .loc_0x1C5C

    .loc_0x1B00:
      addic.    r0, r30, 0x844
      beq-      .loc_0x1B10
      cmplwi    r28, 0
      bne-      .loc_0x1B18

    .loc_0x1B10:
      li        r0, 0
      b         .loc_0x1B38

    .loc_0x1B18:
      mr        r4, r28
      addi      r3, r30, 0x844
      bl        -0x39B7E4
      cmpwi     r3, 0
      bne-      .loc_0x1B34
      li        r0, 0x1
      b         .loc_0x1B38

    .loc_0x1B34:
      li        r0, 0

    .loc_0x1B38:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1B50
      lis       r3, 0x8047
      subi      r0, r3, 0x4A48
      stw       r0, 0x24(r23)
      b         .loc_0x1C5C

    .loc_0x1B50:
      addic.    r0, r30, 0x610
      beq-      .loc_0x1B60
      cmplwi    r28, 0
      bne-      .loc_0x1B68

    .loc_0x1B60:
      li        r0, 0
      b         .loc_0x1B88

    .loc_0x1B68:
      mr        r4, r28
      addi      r3, r30, 0x610
      bl        -0x39B834
      cmpwi     r3, 0
      bne-      .loc_0x1B84
      li        r0, 0x1
      b         .loc_0x1B88

    .loc_0x1B84:
      li        r0, 0

    .loc_0x1B88:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x1BD0
      addic.    r0, r30, 0x810
      beq-      .loc_0x1BA0
      cmplwi    r28, 0
      bne-      .loc_0x1BA8

    .loc_0x1BA0:
      li        r0, 0
      b         .loc_0x1BC8

    .loc_0x1BA8:
      mr        r4, r28
      addi      r3, r30, 0x810
      bl        -0x39B874
      cmpwi     r3, 0
      bne-      .loc_0x1BC4
      li        r0, 0x1
      b         .loc_0x1BC8

    .loc_0x1BC4:
      li        r0, 0

    .loc_0x1BC8:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1BDC

    .loc_0x1BD0:
      li        r0, 0
      stb       r0, 0x19(r23)
      b         .loc_0x1C5C

    .loc_0x1BDC:
      addic.    r0, r30, 0x94
      beq-      .loc_0x1BEC
      cmplwi    r28, 0
      bne-      .loc_0x1BF4

    .loc_0x1BEC:
      li        r0, 0
      b         .loc_0x1C14

    .loc_0x1BF4:
      mr        r4, r28
      addi      r3, r30, 0x94
      bl        -0x39B8C0
      cmpwi     r3, 0
      bne-      .loc_0x1C10
      li        r0, 0x1
      b         .loc_0x1C14

    .loc_0x1C10:
      li        r0, 0

    .loc_0x1C14:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1C5C
      lwz       r0, 0x0(r24)
      cmpwi     r0, 0x1
      beq-      .loc_0x1C3C
      bge-      .loc_0x1C30
      b         .loc_0x1C54

    .loc_0x1C30:
      cmpwi     r0, 0x3
      bge-      .loc_0x1C54
      b         .loc_0x1C48

    .loc_0x1C3C:
      li        r0, 0x8A4
      stw       r0, 0x1C(r23)
      b         .loc_0x1C5C

    .loc_0x1C48:
      li        r0, 0x8A5
      stw       r0, 0x1C(r23)
      b         .loc_0x1C5C

    .loc_0x1C54:
      li        r0, 0x8A3
      stw       r0, 0x1C(r23)

    .loc_0x1C5C:
      addic.    r0, r30, 0x610
      beq-      .loc_0x1C6C
      cmplwi    r28, 0
      bne-      .loc_0x1C74

    .loc_0x1C6C:
      li        r0, 0
      b         .loc_0x1C94

    .loc_0x1C74:
      mr        r4, r28
      addi      r3, r30, 0x610
      bl        -0x39B940
      cmpwi     r3, 0
      bne-      .loc_0x1C90
      li        r0, 0x1
      b         .loc_0x1C94

    .loc_0x1C90:
      li        r0, 0

    .loc_0x1C94:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x1CA4
      li        r0, 0x597B
      stw       r0, 0x1C(r23)

    .loc_0x1CA4:
      lwz       r3, 0x8(r1)
      addis     r0, r3, 0x1
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x1D14
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1CD4
      addi      r3, r30, 0x20
      addi      r5, r30, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BA14

    .loc_0x1CD4:
      lwz       r22, -0x6780(r13)
      cmplwi    r22, 0
      bne-      .loc_0x1CF4
      addi      r3, r30, 0x20
      addi      r5, r30, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BA34

    .loc_0x1CF4:
      lwz       r4, 0x8(r1)
      mr        r3, r22
      addi      r5, r1, 0xC
      bl        -0x1300A0
      li        r0, 0xFF
      mr        r26, r3
      stb       r0, 0x0(r25)
      b         .loc_0x1D8C

    .loc_0x1D14:
      lbz       r0, 0x1C(r1)
      extsb.    r0, r0
      beq-      .loc_0x1D8C
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1D40
      addi      r3, r30, 0x20
      addi      r5, r30, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BA80

    .loc_0x1D40:
      lwz       r22, -0x6780(r13)
      cmplwi    r22, 0
      bne-      .loc_0x1D60
      addi      r3, r30, 0x20
      addi      r5, r30, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BAA0

    .loc_0x1D60:
      mr        r3, r22
      addi      r4, r1, 0x1C
      addi      r5, r1, 0xC
      bl        -0x1301A4
      mr.       r26, r3
      bne-      .loc_0x1D8C
      addi      r3, r30, 0
      addi      r5, r30, 0x14
      li        r4, 0x278
      crclr     6, 0x6
      bl        -0x43BACC

    .loc_0x1D8C:
      mr        r3, r26
      lmw       r22, 0x48(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80466128
 * Size:	000184
 */
void PSM::Demo::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804A
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr.       r27, r3
      mr        r28, r4
      subi      r31, r5, 0x2F80
      beq-      .loc_0x16C
      lis       r4, 0x804F
      subi      r0, r4, 0xDB0
      stw       r0, 0x0(r27)
      bl        0x814
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x54
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BB38

    .loc_0x54:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x74
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BB58

    .loc_0x74:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x94
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43BB78

    .loc_0x94:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xB8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43BB9C

    .loc_0xB8:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xD8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5A
      crclr     6, 0x6
      bl        -0x43BBBC

    .loc_0xD8:
      lwz       r0, -0x6780(r13)
      lwz       r30, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xFC
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BBE0

    .loc_0xFC:
      lwz       r29, -0x6780(r13)
      cmplwi    r29, 0
      bne-      .loc_0x11C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BC00

    .loc_0x11C:
      mr        r3, r29
      mr        r4, r30
      bl        -0x1244AC
      lwz       r3, 0x28(r27)
      bl        -0x4421A0
      cmplwi    r30, 0
      beq-      .loc_0x150
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x150:
      mr        r3, r27
      li        r4, 0
      bl        -0x44924C
      extsh.    r0, r28
      ble-      .loc_0x16C
      mr        r3, r27
      bl        -0x4421DC

    .loc_0x16C:
      mr        r3, r27
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void PSM::Demo::becomeDemoCamera(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804662AC
 * Size:	0006C0
 */
void PSM::Demo::onDemoTop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r29, r3
      subi      r31, r4, 0x2F80
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BCA4

    .loc_0x3C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BCC4

    .loc_0x5C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43BCE4

    .loc_0x7C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43BD08

    .loc_0xA0:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0xC0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5B
      crclr     6, 0x6
      bl        -0x43BD28

    .loc_0xC0:
      lwz       r3, 0x4(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6E4C(r13)
      cmplwi    r0, 0
      bne-      .loc_0xF4
      addi      r3, r31, 0x86C
      addi      r5, r31, 0x14
      li        r4, 0x89
      crclr     6, 0x6
      bl        -0x43BD5C

    .loc_0xF4:
      lwz       r3, -0x6E4C(r13)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x12C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BD94

    .loc_0x12C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x14C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BDB4

    .loc_0x14C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x16C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43BDD4

    .loc_0x16C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x190
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43BDF8

    .loc_0x190:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1C4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BE2C

    .loc_0x1C4:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x1E4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BE4C

    .loc_0x1E4:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x204
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43BE6C

    .loc_0x204:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x228
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43BE90

    .loc_0x228:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr.       r27, r3
      beq-      .loc_0x24C
      li        r0, 0
      sth       r0, 0x10(r27)

    .loc_0x24C:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x26C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43BED4

    .loc_0x26C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x28C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43BEF4

    .loc_0x28C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x2AC
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43BF14

    .loc_0x2AC:
      lwz       r3, 0x4(r28)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x2D0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43BF38

    .loc_0x2D0:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x300
      addi      r3, r31, 0x858
      addi      r5, r31, 0x14
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x43BF68

    .loc_0x300:
      lwz       r28, 0x28(r29)
      addi      r4, r31, 0x94
      mr        r3, r28
      bl        -0x39BEF8
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x80
      bl        -0x39BF0C
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x168
      bl        -0x39BF20
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0xB0
      bl        -0x39BF34
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x180
      bl        -0x39BF48
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x26C
      bl        -0x39BF5C
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x37C
      bl        -0x39BF70
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x878
      bl        -0x39BF84
      cmpwi     r3, 0
      beq-      .loc_0x3B8
      mr        r3, r28
      addi      r4, r31, 0x5C
      bl        -0x39BF98
      cmpwi     r3, 0
      bne-      .loc_0x450

    .loc_0x3B8:
      addi      r3, r30, 0x10
      li        r4, 0xF
      bl        -0x132A30
      cmplwi    r27, 0
      beq-      .loc_0x470
      mr        r3, r27
      bl        -0x12595C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x42C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x42C
      mr        r3, r27
      li        r4, 0x3079
      li        r5, 0x1
      bl        -0x1259F4
      mr        r3, r27
      li        r4, 0x307A
      li        r5, 0x1
      bl        -0x125A04

    .loc_0x42C:
      mr        r3, r27
      li        r4, 0x4014
      li        r5, 0x1
      bl        -0x1259A0
      mr        r3, r27
      li        r4, 0x4015
      li        r5, 0x1
      bl        -0x1259B0
      b         .loc_0x470

    .loc_0x450:
      addi      r3, r30, 0x10
      li        r4, 0x1
      bl        -0x132C38
      cmplwi    r27, 0
      beq-      .loc_0x470
      mr        r3, r27
      li        r4, 0x2
      bl        -0x125AA0

    .loc_0x470:
      mr        r3, r28
      addi      r4, r31, 0x824
      bl        -0x39C064
      cmpwi     r3, 0
      bne-      .loc_0x494
      addi      r3, r30, 0x10
      li        r4, 0xF
      bl        -0x132AFC
      b         .loc_0x61C

    .loc_0x494:
      mr        r3, r28
      addi      r4, r31, 0x5A8
      bl        -0x39C088
      cmpwi     r3, 0
      bne-      .loc_0x58C
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x4C8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C130

    .loc_0x4C8:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x4E8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C150

    .loc_0x4E8:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x508
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x43C170

    .loc_0x508:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x52C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1E5
      crclr     6, 0x6
      bl        -0x43C194

    .loc_0x52C:
      addi      r3, r28, 0x10
      li        r4, 0x1
      bl        -0x132944
      mr.       r28, r3
      bne-      .loc_0x554
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1E7
      crclr     6, 0x6
      bl        -0x43C1BC

    .loc_0x554:
      cmplwi    r28, 0
      bne-      .loc_0x570
      addi      r3, r31, 0
      addi      r5, r31, 0x14
      li        r4, 0x2DB
      crclr     6, 0x6
      bl        -0x43C1D8

    .loc_0x570:
      mr        r3, r28
      li        r4, 0x5
      lwz       r12, 0x10(r28)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      b         .loc_0x61C

    .loc_0x58C:
      mr        r3, r28
      addi      r4, r31, 0x580
      bl        -0x39C180
      cmpwi     r3, 0
      bne-      .loc_0x61C
      lwz       r0, -0x6E3C(r13)
      cmplwi    r0, 0
      bne-      .loc_0x5C0
      addi      r3, r31, 0x86C
      addi      r5, r31, 0x14
      li        r4, 0x89
      crclr     6, 0x6
      bl        -0x43C228

    .loc_0x5C0:
      lwz       r28, -0x6E3C(r13)
      lwz       r0, 0x18(r28)
      cmplwi    r0, 0
      bne-      .loc_0x5E4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x5D
      crclr     6, 0x6
      bl        -0x43C24C

    .loc_0x5E4:
      lwz       r3, 0x18(r28)
      li        r0, 0x1
      stb       r0, 0x15(r3)
      lwz       r0, 0xC(r28)
      cmplwi    r0, 0
      bne-      .loc_0x610
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x5D
      crclr     6, 0x6
      bl        -0x43C278

    .loc_0x610:
      lwz       r3, 0xC(r28)
      li        r0, 0x1
      stb       r0, 0x15(r3)

    .loc_0x61C:
      lwz       r4, 0x1C(r29)
      addis     r0, r4, 0x1
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x638
      lwz       r3, -0x67A8(r13)
      li        r5, 0
      bl        -0x12E2B0

    .loc_0x638:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x658
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5B
      crclr     6, 0x6
      bl        -0x43C2C0

    .loc_0x658:
      lwz       r3, 0x4(r30)
      addi      r3, r3, 0x10
      bl        -0x132AB0
      cmplwi    r3, 0
      beq-      .loc_0x6AC
      lbz       r0, 0x19(r29)
      cmplwi    r0, 0
      beq-      .loc_0x6AC
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x698
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5B
      crclr     6, 0x6
      bl        -0x43C300

    .loc_0x698:
      lwz       r3, 0x4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x6AC:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8046696C
 * Size:	000104
 */
void PSM::Demo::becomeSceneCamera(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r3, 0x2F80
      stw       r30, 0x8(r1)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C364

    .loc_0x3C:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C384

    .loc_0x5C:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43C3A4

    .loc_0x7C:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43C3C8

    .loc_0xA0:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6E4C(r13)
      cmplwi    r0, 0
      bne-      .loc_0xD4
      addi      r3, r31, 0x86C
      addi      r5, r31, 0x14
      li        r4, 0x89
      crclr     6, 0x6
      bl        -0x43C3FC

    .loc_0xD4:
      lwz       r3, -0x6E4C(r13)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	80466A70
 * Size:	0000FC
 */
void PSM::Demo::onDemoFadeoutStart((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r3, 0x2F80
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x44
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C470

    .loc_0x44:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x64
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C490

    .loc_0x64:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x84
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43C4B0

    .loc_0x84:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xA8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43C4D4

    .loc_0xA8:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xC8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5B
      crclr     6, 0x6
      bl        -0x43C4F4

    .loc_0xC8:
      lwz       r3, 0x4(r30)
      subi      r4, r29, 0x2
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
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
 * Address:	80466B6C
 * Size:	000664
 */
void PSM::Demo::onDemoEnd(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r29, r3
      subi      r31, r4, 0x2F80
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C564

    .loc_0x3C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C584

    .loc_0x5C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43C5A4

    .loc_0x7C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43C5C8

    .loc_0xA0:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6E4C(r13)
      cmplwi    r0, 0
      bne-      .loc_0xD4
      addi      r3, r31, 0x86C
      addi      r5, r31, 0x14
      li        r4, 0x89
      crclr     6, 0x6
      bl        -0x43C5FC

    .loc_0xD4:
      lwz       r3, -0x6E4C(r13)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x10C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C634

    .loc_0x10C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x12C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C654

    .loc_0x12C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x14C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43C674

    .loc_0x14C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x170
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43C698

    .loc_0x170:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1A4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C6CC

    .loc_0x1A4:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x1C4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C6EC

    .loc_0x1C4:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x1E4
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43C70C

    .loc_0x1E4:
      lwz       r3, 0x4(r28)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x208
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43C730

    .loc_0x208:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x238
      addi      r3, r31, 0x858
      addi      r5, r31, 0x14
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x43C760

    .loc_0x238:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r28, 0x28(r29)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr.       r27, r3
      beq-      .loc_0x384
      mr        r3, r28
      addi      r4, r31, 0x94
      bl        -0x39C70C
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x80
      bl        -0x39C720
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x168
      bl        -0x39C734
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0xB0
      bl        -0x39C748
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x180
      bl        -0x39C75C
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x26C
      bl        -0x39C770
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x37C
      bl        -0x39C784
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x878
      bl        -0x39C798
      cmpwi     r3, 0
      beq-      .loc_0x30C
      mr        r3, r28
      addi      r4, r31, 0x5C
      bl        -0x39C7AC
      cmpwi     r3, 0
      bne-      .loc_0x37C

    .loc_0x30C:
      mr        r3, r27
      bl        -0x12615C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x36C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x36C
      mr        r3, r27
      li        r4, 0x3079
      li        r5, 0x1
      bl        -0x1261F4
      mr        r3, r27
      li        r4, 0x307A
      li        r5, 0x1
      bl        -0x126204

    .loc_0x36C:
      mr        r3, r27
      li        r4, 0
      bl        -0x126268
      b         .loc_0x384

    .loc_0x37C:
      mr        r3, r27
      bl        -0x126158

    .loc_0x384:
      mr        r3, r28
      addi      r4, r31, 0x5A8
      bl        -0x39C838
      cmpwi     r3, 0
      bne-      .loc_0x434
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3B8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C8E0

    .loc_0x3B8:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x3D8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C900

    .loc_0x3D8:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x3F8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43C920

    .loc_0x3F8:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x41C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43C944

    .loc_0x41C:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x434:
      mr        r3, r28
      addi      r4, r31, 0x1EC
      bl        -0x39C8E8
      cmpwi     r3, 0
      bne-      .loc_0x528
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x468
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43C990

    .loc_0x468:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x488
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43C9B0

    .loc_0x488:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x4A8
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x43C9D0

    .loc_0x4A8:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x4CC
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1E5
      crclr     6, 0x6
      bl        -0x43C9F4

    .loc_0x4CC:
      addi      r3, r28, 0x10
      li        r4, 0x1
      bl        -0x1331A4
      mr.       r28, r3
      bne-      .loc_0x4F4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1E7
      crclr     6, 0x6
      bl        -0x43CA1C

    .loc_0x4F4:
      cmplwi    r28, 0
      bne-      .loc_0x510
      addi      r3, r31, 0
      addi      r5, r31, 0x14
      li        r4, 0x342
      crclr     6, 0x6
      bl        -0x43CA38

    .loc_0x510:
      mr        r3, r28
      lwz       r12, 0x10(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0x618

    .loc_0x528:
      mr        r3, r28
      addi      r4, r31, 0x610
      bl        -0x39C9DC
      cmpwi     r3, 0
      bne-      .loc_0x618
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x55C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43CA84

    .loc_0x55C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x57C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43CAA4

    .loc_0x57C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x59C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x43CAC4

    .loc_0x59C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x5C0
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1E5
      crclr     6, 0x6
      bl        -0x43CAE8

    .loc_0x5C0:
      addi      r3, r28, 0x10
      li        r4, 0x1
      bl        -0x133298
      mr.       r28, r3
      bne-      .loc_0x5E8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1E7
      crclr     6, 0x6
      bl        -0x43CB10

    .loc_0x5E8:
      cmplwi    r28, 0
      bne-      .loc_0x604
      addi      r3, r31, 0
      addi      r5, r31, 0x14
      li        r4, 0x346
      crclr     6, 0x6
      bl        -0x43CB2C

    .loc_0x604:
      mr        r3, r28
      lwz       r12, 0x10(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x618:
      addi      r3, r30, 0x10
      bl        -0x133614
      lwz       r12, 0x24(r29)
      cmplwi    r12, 0
      beq-      .loc_0x634
      mtctr     r12
      bctrl

    .loc_0x634:
      lwz       r4, 0x20(r29)
      addis     r0, r4, 0x1
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x650
      lwz       r3, -0x67A8(r13)
      li        r5, 0
      bl        -0x12EB88

    .loc_0x650:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	804671D0
 * Size:	000268
 */
void PSM::Demo::onMessageEnd((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r30, 0x28(r3)
      lis       r3, 0x804A
      subi      r31, r3, 0x2F80
      mr        r3, r30
      addi      r4, r31, 0x580
      bl        -0x39CB40
      cmpwi     r3, 0
      bne-      .loc_0x178
      lwz       r0, -0x6E3C(r13)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x86C
      addi      r5, r31, 0x14
      li        r4, 0x89
      crclr     6, 0x6
      bl        -0x43CBE8

    .loc_0x5C:
      lwz       r30, -0x6E3C(r13)
      lwz       r0, 0x18(r30)
      cmplwi    r0, 0
      bne-      .loc_0x80
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x5D
      crclr     6, 0x6
      bl        -0x43CC0C

    .loc_0x80:
      lwz       r3, 0x18(r30)
      li        r0, 0
      stb       r0, 0x15(r3)
      lwz       r0, 0xC(r30)
      cmplwi    r0, 0
      bne-      .loc_0xAC
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x5D
      crclr     6, 0x6
      bl        -0x43CC38

    .loc_0xAC:
      lwz       r3, 0xC(r30)
      li        r0, 0
      stb       r0, 0x15(r3)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0xD8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43CC64

    .loc_0xD8:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0xF8
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43CC84

    .loc_0xF8:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x118
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43CCA4

    .loc_0x118:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x13C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43CCC8

    .loc_0x13C:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x15C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5A
      crclr     6, 0x6
      bl        -0x43CCE8

    .loc_0x15C:
      lwz       r3, 0x4(r30)
      li        r4, 0x5
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      b         .loc_0x24C

    .loc_0x178:
      mr        r3, r30
      addi      r4, r31, 0x810
      bl        -0x39CC90
      cmpwi     r3, 0
      bne-      .loc_0x24C
      cmpwi     r29, 0
      bne-      .loc_0x24C
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1B4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43CD40

    .loc_0x1B4:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x1D4
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43CD60

    .loc_0x1D4:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1F4
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43CD80

    .loc_0x1F4:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x218
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43CDA4

    .loc_0x218:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x238
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0x5A
      crclr     6, 0x6
      bl        -0x43CDC4

    .loc_0x238:
      lwz       r3, 0x4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x24C:
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
 * Address:	80467438
 * Size:	0000E4
 */
void PSMCancelToPauseOffMainBgm()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r3, 0x2F80
      stw       r30, 0x8(r1)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43CE30

    .loc_0x3C:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43CE50

    .loc_0x5C:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43CE70

    .loc_0x7C:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43CE94

    .loc_0xA0:
      addi      r3, r30, 0x10
      bl        -0x133944
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xCC
      li        r0, 0
      sth       r0, 0x10(r3)

    .loc_0xCC:
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
 * Address:	8046751C
 * Size:	0000EC
 */
void PSMGetGameSceneA()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      subi      r31, r3, 0x2F80
      stw       r30, 0x8(r1)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x43CF14

    .loc_0x3C:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x5C
      addi      r3, r31, 0x20
      addi      r5, r31, 0x14
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x43CF34

    .loc_0x5C:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x14
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x43CF54

    .loc_0x7C:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x2C
      addi      r5, r31, 0x38
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x43CF78

    .loc_0xA0:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      addi      r3, r31, 0x858
      addi      r5, r31, 0x14
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x43CFA8

    .loc_0xD0:
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
 * Address:	80467608
 * Size:	000018
 */
void PSM::Scene_Cave::isPollutUp(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x64(r3)
      subfic    r3, r4, -0x1
      addi      r0, r4, 0x1
      or        r0, r3, r0
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80467620
 * Size:	000008
 */
void PSM::SceneBase::getEnvSe(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80467628
 * Size:	000008
 */
void PSM::ObjCalcBase::setMode((PSM::ObjCalcBase::Mode))
{
    /*
    .loc_0x0:
      stw       r4, 0x4(r3)
      blr
    */
}
