

/*
 * --INFO--
 * Address:	80017A10
 * Size:	000094
 */
void JKRAram::create(unsigned long, unsigned long, long, long, long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      mr        r30, r6
      mr        r31, r7
      lwz       r0, -0x78E0(r13)
      cmplwi    r0, 0
      bne-      .loc_0x60
      lwz       r4, -0x77D8(r13)
      li        r3, 0xA4
      li        r5, 0
      bl        0xC4F4
      mr.       r0, r3
      beq-      .loc_0x5C
      mr        r4, r27
      mr        r5, r28
      mr        r6, r31
      bl        .loc_0x94
      mr        r0, r3

    .loc_0x5C:
      stw       r0, -0x78E0(r13)

    .loc_0x60:
      mr        r3, r29
      bl        0x24AC
      mr        r3, r30
      bl        0x4EB8
      lwz       r3, -0x78E0(r13)
      lwz       r3, 0x2C(r3)
      bl        0xDAA6C
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      lwz       r3, -0x78E0(r13)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x94:
    */
}

/*
 * --INFO--
 * Address:	80017AA4
 * Size:	00011C
 */
void JKRAram::JKRAram(unsigned long, unsigned long, long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r5
      li        r5, 0x10
      stw       r29, 0x14(r1)
      mr        r29, r4
      li        r4, 0x4000
      stw       r28, 0x10(r1)
      mr        r28, r3
      bl        0xDB64
      lis       r4, 0x804A
      addi      r3, r28, 0x98
      subi      r0, r4, 0x468
      li        r4, 0x3
      stw       r0, 0x0(r28)
      bl        0xBAD60
      mr        r31, r3
      bl        0xBC898
      bl        0xBAE20
      addis     r0, r30, 0x1
      stw       r29, 0x80(r28)
      cmplwi    r0, 0xFFFF
      bne-      .loc_0x80
      sub       r3, r3, r29
      li        r0, 0
      sub       r3, r3, r31
      stw       r3, 0x88(r28)
      stw       r0, 0x90(r28)
      b         .loc_0x94

    .loc_0x80:
      add       r0, r29, r30
      stw       r30, 0x88(r28)
      sub       r0, r3, r0
      sub       r0, r0, r31
      stw       r0, 0x90(r28)

    .loc_0x94:
      lwz       r3, 0x80(r28)
      bl        0xBACA8
      stw       r3, 0x7C(r28)
      lwz       r3, 0x88(r28)
      bl        0xBAC9C
      stw       r3, 0x84(r28)
      lwz       r3, 0x90(r28)
      cmplwi    r3, 0
      beq-      .loc_0xC4
      bl        0xBAC88
      stw       r3, 0x8C(r28)
      b         .loc_0xCC

    .loc_0xC4:
      li        r0, 0
      stw       r0, 0x8C(r28)

    .loc_0xCC:
      lwz       r4, -0x77D8(r13)
      li        r3, 0x44
      li        r5, 0
      bl        0xC3C4
      mr.       r0, r3
      beq-      .loc_0xF4
      lwz       r4, 0x84(r28)
      lwz       r5, 0x88(r28)
      bl        0x1B38
      mr        r0, r3

    .loc_0xF4:
      stw       r0, 0x94(r28)
      mr        r3, r28
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
 * Address:	80017BC0
 * Size:	000090
 */
void JKRAram::~JKRAram()
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
      beq-      .loc_0x74
      lis       r3, 0x804A
      li        r0, 0
      subi      r3, r3, 0x468
      stw       r3, 0x0(r30)
      stw       r0, -0x78E0(r13)
      lwz       r3, 0x94(r30)
      cmplwi    r3, 0
      beq-      .loc_0x58
      beq-      .loc_0x58
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x58:
      mr        r3, r30
      li        r4, 0
      bl        0xDC18
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        0xC484

    .loc_0x74:
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
 * Address:	80017C50
 * Size:	000070
 */
void JKRAram::run()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r3, 0x804A
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      subi      r3, r3, 0x488
      li        r5, 0x4
      subi      r4, r4, 0x498
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      bl        0xD7840
      lis       r3, 0x804A
      subi      r31, r3, 0x488

    .loc_0x38:
      mr        r3, r31
      addi      r4, r1, 0x8
      li        r5, 0x1
      bl        0xD7950
      lwz       r3, 0x8(r1)
      lwz       r30, 0x0(r3)
      lwz       r29, 0x4(r3)
      bl        0xC410
      cmpwi     r30, 0x1
      beq-      .loc_0x64
      b         .loc_0x38

    .loc_0x64:
      mr        r3, r29
      bl        0x1FEC
      b         .loc_0x38
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JKRAram::checkOkAddress(unsigned char*, unsigned long, JKRAramBlock*,
                             unsigned long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JKRAram::changeGroupIdIfNeed(unsigned char*, int)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80017CC0
 * Size:	00028C
 */
void JKRAram::mainRamToAram(unsigned char*, unsigned long, unsigned long,
                            JKRExpandSwitch, unsigned long, JKRHeap*, int,
                            unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      rlwinm.   r0,r3,0,27,31
      stmw      r23, 0xC(r1)
      mr        r30, r3
      mr        r24, r4
      mr        r31, r5
      mr        r23, r6
      mr        r25, r7
      mr        r26, r8
      mr        r27, r9
      mr        r28, r10
      li        r29, 0
      beq-      .loc_0x64
      rlwinm.   r0,r24,0,27,31
      beq-      .loc_0x64
      lis       r3, 0x8047
      lis       r5, 0x8047
      addi      r6, r5, 0x348C
      li        r4, 0xDB
      addi      r3, r3, 0x3480
      subi      r5, r2, 0x7E90
      crclr     6, 0x6
      bl        0x12920

    .loc_0x64:
      cmpwi     r23, 0x1
      bne-      .loc_0x80
      mr        r3, r30
      bl        0x51C0
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r23,r0,1,31,31

    .loc_0x80:
      cmpwi     r23, 0x1
      bne-      .loc_0x1D8
      lbz       r0, 0x5(r30)
      cmplwi    r25, 0
      lbz       r3, 0x4(r30)
      rlwinm    r0,r0,16,0,15
      lbz       r4, 0x6(r30)
      rlwimi    r0,r3,24,0,7
      lbz       r5, 0x7(r30)
      rlwimi    r0,r4,8,16,23
      or        r23, r5, r0
      beq-      .loc_0xB8
      cmplw     r25, r23
      ble-      .loc_0xC0

    .loc_0xB8:
      addi      r0, r23, 0x1F
      rlwinm    r25,r0,0,0,26

    .loc_0xC0:
      cmplwi    r24, 0
      bne-      .loc_0x114
      lwz       r3, -0x78E0(r13)
      mr        r4, r25
      li        r5, 0
      lwz       r3, 0x94(r3)
      bl        0x1AB0
      cmplwi    r3, 0
      mr        r29, r3
      bne-      .loc_0xF0
      li        r3, 0
      b         .loc_0x278

    .loc_0xF0:
      cmpwi     r27, 0
      bge-      .loc_0x108
      lwz       r4, -0x78E0(r13)
      lwz       r4, 0x94(r4)
      lbz       r0, 0x40(r4)
      b         .loc_0x10C

    .loc_0x108:
      rlwinm    r0,r27,0,24,31

    .loc_0x10C:
      stb       r0, 0x20(r3)
      lwz       r24, 0x14(r3)

    .loc_0x114:
      cmplwi    r31, 0
      beq-      .loc_0x124
      cmplw     r31, r23
      ble-      .loc_0x12C

    .loc_0x124:
      addi      r0, r23, 0x1F
      rlwinm    r31,r0,0,0,26

    .loc_0x12C:
      cmplw     r31, r25
      ble-      .loc_0x138
      mr        r31, r25

    .loc_0x138:
      mr        r3, r25
      mr        r5, r26
      li        r4, -0x20
      bl        0xB7DC
      mr.       r23, r3
      bne-      .loc_0x17C
      cmplwi    r29, 0
      beq-      .loc_0x174
      beq-      .loc_0x174
      mr        r3, r29
      li        r4, 0x1
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x174:
      li        r3, 0
      b         .loc_0x278

    .loc_0x17C:
      mr        r3, r30
      mr        r4, r23
      mr        r5, r25
      li        r6, 0
      bl        0x4CF0
      mr        r4, r23
      mr        r5, r24
      mr        r6, r31
      mr        r7, r29
      li        r3, 0
      bl        0x1C94
      mr        r3, r23
      mr        r4, r26
      bl        0xB7FC
      cmplwi    r29, 0
      bne-      .loc_0x1C4
      li        r3, -0x1
      b         .loc_0x1C8

    .loc_0x1C4:
      mr        r3, r29

    .loc_0x1C8:
      cmplwi    r28, 0
      beq-      .loc_0x278
      stw       r31, 0x0(r28)
      b         .loc_0x278

    .loc_0x1D8:
      cmplwi    r25, 0
      beq-      .loc_0x1EC
      cmplw     r31, r25
      ble-      .loc_0x1EC
      mr        r31, r25

    .loc_0x1EC:
      cmplwi    r24, 0
      bne-      .loc_0x240
      lwz       r3, -0x78E0(r13)
      mr        r4, r31
      li        r5, 0
      lwz       r3, 0x94(r3)
      bl        0x1984
      cmpwi     r27, 0
      mr        r29, r3
      bge-      .loc_0x224
      lwz       r4, -0x78E0(r13)
      lwz       r4, 0x94(r4)
      lbz       r0, 0x40(r4)
      b         .loc_0x228

    .loc_0x224:
      rlwinm    r0,r27,0,24,31

    .loc_0x228:
      cmplwi    r3, 0
      stb       r0, 0x20(r3)
      bne-      .loc_0x23C
      li        r3, 0
      b         .loc_0x278

    .loc_0x23C:
      lwz       r24, 0x14(r3)

    .loc_0x240:
      mr        r4, r30
      mr        r5, r24
      mr        r6, r31
      mr        r7, r29
      li        r3, 0
      bl        0x1BE4
      cmplwi    r29, 0
      bne-      .loc_0x268
      li        r3, -0x1
      b         .loc_0x26C

    .loc_0x268:
      mr        r3, r29

    .loc_0x26C:
      cmplwi    r28, 0
      beq-      .loc_0x278
      stw       r31, 0x0(r28)

    .loc_0x278:
      lmw       r23, 0xC(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JKRAram::mainRamToAram(unsigned char*, JKRAramBlock*, unsigned long,
                            JKRExpandSwitch, unsigned long, JKRHeap*, int,
                            unsigned long*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002E8
 */
void JKRAram::mainRamToAram_Async(unsigned char*, unsigned long, unsigned long,
                                  JKRExpandSwitch, unsigned long, JKRHeap*,
                                  void (*)(unsigned long), int, unsigned long*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void JKRAram::mainRamToAram_Async(unsigned char*, JKRAramBlock*, unsigned long,
                                  JKRExpandSwitch, unsigned long, JKRHeap*,
                                  void (*)(unsigned long), int, unsigned long*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80017F4C
 * Size:	0002DC
 */
void JKRAram::aramToMainRam(unsigned long, unsigned char*, unsigned long,
                            JKRExpandSwitch, unsigned long, JKRHeap*, int,
                            unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stmw      r22, 0x48(r1)
      mr.       r31, r10
      mr        r28, r3
      mr        r23, r4
      mr        r29, r5
      mr        r22, r6
      mr        r24, r7
      mr        r25, r8
      mr        r30, r9
      li        r27, 0
      beq-      .loc_0x40
      li        r0, 0
      stw       r0, 0x0(r31)

    .loc_0x40:
      rlwinm.   r0,r23,0,27,31
      beq-      .loc_0x70
      rlwinm.   r0,r28,0,27,31
      beq-      .loc_0x70
      lis       r3, 0x8047
      lis       r5, 0x8047
      addi      r6, r5, 0x348C
      li        r4, 0xDB
      addi      r3, r3, 0x3480
      subi      r5, r2, 0x7E90
      crclr     6, 0x6
      bl        0x12688

    .loc_0x70:
      cmpwi     r22, 0x1
      bne-      .loc_0xC4
      addi      r0, r1, 0x27
      mr        r4, r28
      rlwinm    r26,r0,0,0,26
      li        r3, 0x1
      mr        r5, r26
      li        r6, 0x20
      li        r7, 0
      bl        0x1B18
      mr        r3, r26
      bl        0x4F08
      lbz       r0, 0x5(r26)
      mr        r27, r3
      lbz       r4, 0x4(r26)
      rlwinm    r0,r0,16,0,15
      lbz       r5, 0x6(r26)
      rlwimi    r0,r4,24,0,7
      lbz       r6, 0x7(r26)
      rlwimi    r0,r5,8,16,23
      or        r26, r6, r0

    .loc_0xC4:
      cmpwi     r27, 0x2
      bne-      .loc_0x15C
      cmplwi    r24, 0
      beq-      .loc_0xE0
      cmplw     r24, r26
      bge-      .loc_0xE0
      mr        r26, r24

    .loc_0xE0:
      cmplwi    r23, 0
      bne-      .loc_0xFC
      mr        r3, r26
      mr        r5, r25
      li        r4, 0x20
      bl        0xB5A0
      mr        r23, r3

    .loc_0xFC:
      cmplwi    r23, 0
      bne-      .loc_0x10C
      li        r3, 0
      b         .loc_0x2C8

    .loc_0x10C:
      lwz       r3, -0x77D4(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x4558
      cmplwi    r0, 0x5048
      bne-      .loc_0x138
      cmpwi     r30, 0
      blt-      .loc_0x138
      stb       r30, -0xD(r23)

    .loc_0x138:
      mr        r3, r28
      mr        r4, r23
      mr        r5, r29
      mr        r6, r26
      mr        r8, r31
      li        r7, 0
      bl        0x298
      mr        r3, r23
      b         .loc_0x2C8

    .loc_0x15C:
      cmpwi     r27, 0x1
      bne-      .loc_0x248
      mr        r3, r29
      mr        r5, r25
      li        r4, -0x20
      bl        0xB524
      mr.       r27, r3
      bne-      .loc_0x184
      li        r3, 0
      b         .loc_0x2C8

    .loc_0x184:
      mr        r4, r28
      mr        r5, r27
      mr        r6, r29
      li        r3, 0x1
      li        r7, 0
      bl        0x1A14
      cmplwi    r24, 0
      beq-      .loc_0x1B0
      cmplw     r24, r26
      bge-      .loc_0x1B0
      mr        r26, r24

    .loc_0x1B0:
      cmplwi    r23, 0
      bne-      .loc_0x1CC
      mr        r3, r26
      mr        r5, r25
      li        r4, 0x20
      bl        0xB4D0
      mr        r23, r3

    .loc_0x1CC:
      cmplwi    r23, 0
      bne-      .loc_0x1E8
      mr        r3, r27
      li        r4, 0
      bl        0xB544
      li        r3, 0
      b         .loc_0x2C8

    .loc_0x1E8:
      lwz       r3, -0x77D4(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x4558
      cmplwi    r0, 0x5048
      bne-      .loc_0x214
      cmpwi     r30, 0
      blt-      .loc_0x214
      stb       r30, -0xD(r23)

    .loc_0x214:
      mr        r3, r27
      mr        r4, r23
      mr        r5, r26
      li        r6, 0
      bl        0x49CC
      mr        r3, r27
      mr        r4, r25
      bl        0xB4F0
      cmplwi    r31, 0
      beq-      .loc_0x240
      stw       r26, 0x0(r31)

    .loc_0x240:
      mr        r3, r23
      b         .loc_0x2C8

    .loc_0x248:
      cmplwi    r23, 0
      bne-      .loc_0x264
      mr        r3, r29
      mr        r5, r25
      li        r4, 0x20
      bl        0xB438
      mr        r23, r3

    .loc_0x264:
      cmplwi    r23, 0
      bne-      .loc_0x274
      li        r3, 0
      b         .loc_0x2C8

    .loc_0x274:
      lwz       r3, -0x77D4(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x4558
      cmplwi    r0, 0x5048
      bne-      .loc_0x2A0
      cmpwi     r30, 0
      blt-      .loc_0x2A0
      stb       r30, -0xD(r23)

    .loc_0x2A0:
      mr        r4, r28
      mr        r5, r23
      mr        r6, r29
      li        r3, 0x1
      li        r7, 0
      bl        0x18F8
      cmplwi    r31, 0
      beq-      .loc_0x2C4
      stw       r29, 0x0(r31)

    .loc_0x2C4:
      mr        r3, r23

    .loc_0x2C8:
      lmw       r22, 0x48(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	80018228
 * Size:	00010C
 */
void JKRAram::aramToMainRam(JKRAramBlock*, unsigned char*, unsigned long,
                            unsigned long, JKRExpandSwitch, unsigned long,
                            JKRHeap*, int, unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r11, 0x8047
      stw       r0, 0x34(r1)
      stmw      r22, 0x8(r1)
      mr        r22, r3
      lwz       r30, 0x38(r1)
      mr        r23, r4
      mr        r24, r5
      mr        r25, r6
      cmplwi    r30, 0
      mr        r26, r7
      mr        r27, r8
      mr        r28, r9
      mr        r29, r10
      addi      r31, r11, 0x3480
      beq-      .loc_0x4C
      li        r0, 0
      stw       r0, 0x0(r30)

    .loc_0x4C:
      cmplwi    r22, 0
      beq-      .loc_0x7C
      lwz       r0, 0x14(r22)
      add       r0, r25, r0
      rlwinm.   r0,r0,0,27,31
      beq-      .loc_0x7C
      addi      r3, r31, 0
      addi      r6, r31, 0xC
      li        r4, 0xE3
      subi      r5, r2, 0x7E90
      crclr     6, 0x6
      bl        0x123A0

    .loc_0x7C:
      cmplwi    r22, 0
      bne-      .loc_0x98
      addi      r3, r31, 0
      addi      r5, r31, 0x2C
      li        r4, 0x2DD
      crclr     6, 0x6
      bl        0xD54B0

    .loc_0x98:
      lwz       r4, 0x18(r22)
      cmplw     r25, r4
      blt-      .loc_0xAC
      li        r3, 0
      b         .loc_0xF8

    .loc_0xAC:
      cmplwi    r24, 0
      mr        r3, r24
      bne-      .loc_0xBC
      mr        r3, r4

    .loc_0xBC:
      add       r0, r25, r3
      mr        r24, r3
      cmplw     r0, r4
      ble-      .loc_0xD0
      sub       r24, r4, r25

    .loc_0xD0:
      lwz       r0, 0x14(r22)
      mr        r4, r23
      mr        r5, r24
      mr        r6, r26
      mr        r7, r27
      mr        r8, r28
      mr        r9, r29
      mr        r10, r30
      add       r3, r25, r0
      bl        -0x3D0

    .loc_0xF8:
      lmw       r22, 0x8(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002E4
 */
void JKRAram::aramToMainRam_Async(unsigned long, unsigned char*, unsigned long,
                                  JKRExpandSwitch, unsigned long, JKRHeap*,
                                  void (*)(unsigned long), int, unsigned long*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void JKRAram::aramToMainRam_Async(JKRAramBlock*, unsigned char*, unsigned long,
                                  unsigned long, JKRExpandSwitch, unsigned long,
                                  JKRHeap*, void (*)(unsigned long), int,
                                  unsigned long*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void JKRAram::aramSync(JKRAMCommand*, int)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void JKRAram::aramSyncAll(int)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JKRAram::countLeftSync()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80018334
 * Size:	000168
 */
void JKRDecompressFromAramToMainRam(unsigned long, void*, unsigned long,
                                    unsigned long, unsigned long,
                                    unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r26, r3
      mr        r27, r4
      mr        r28, r5
      mr        r29, r6
      mr        r30, r7
      mr        r31, r8
      bl        0xD68DC
      lbz       r0, -0x78AC(r13)
      mr        r25, r3
      cmplwi    r0, 0
      bne-      .loc_0x50
      lis       r3, 0x804F
      subi      r3, r3, 0xFC
      bl        0xD77B8
      li        r0, 0x1
      stb       r0, -0x78AC(r13)

    .loc_0x50:
      mr        r3, r25
      bl        0xD68D8
      lis       r3, 0x804F
      subi      r3, r3, 0xFC
      bl        0xD77D4
      lwz       r25, -0x8000(r13)
      li        r5, 0x20
      lwz       r3, -0x77D8(r13)
      mr        r4, r25
      bl        0xB298
      add       r0, r3, r25
      cmplwi    r30, 0
      stw       r3, -0x78DC(r13)
      stw       r0, -0x78D8(r13)
      beq-      .loc_0xB0
      lwz       r3, -0x77D8(r13)
      li        r4, 0x1120
      li        r5, 0
      bl        0xB274
      addi      r0, r3, 0x1120
      stw       r3, -0x78D4(r13)
      stw       r0, -0x78D0(r13)
      stw       r3, -0x78CC(r13)
      b         .loc_0xB8

    .loc_0xB0:
      li        r0, 0
      stw       r0, -0x78D4(r13)

    .loc_0xB8:
      li        r0, 0
      cmplwi    r28, 0
      stw       r26, -0x78BC(r13)
      li        r3, -0x1
      stw       r0, -0x78C8(r13)
      beq-      .loc_0xD4
      mr        r3, r28

    .loc_0xD4:
      li        r0, 0
      cmplwi    r31, 0
      stw       r3, -0x78C4(r13)
      stw       r30, -0x78B8(r13)
      stw       r0, -0x78B4(r13)
      stw       r29, -0x78B0(r13)
      beq-      .loc_0xF8
      mr        r3, r31
      b         .loc_0xFC

    .loc_0xF8:
      subi      r3, r13, 0x78A4

    .loc_0xFC:
      stw       r3, -0x78A8(r13)
      li        r0, 0
      stw       r0, 0x0(r3)
      bl        0x308
      mr        r4, r27
      bl        .loc_0x168
      lwz       r3, -0x78DC(r13)
      li        r4, 0
      bl        0xB21C
      lwz       r3, -0x78D4(r13)
      cmplwi    r3, 0
      beq-      .loc_0x134
      li        r4, 0
      bl        0xB208

    .loc_0x134:
      lwz       r4, -0x78A8(r13)
      mr        r3, r27
      lwz       r4, 0x0(r4)
      bl        0xD4330
      lis       r3, 0x804F
      subi      r3, r3, 0xFC
      bl        0xD77C4
      lmw       r25, 0x14(r1)
      li        r3, 0
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x168:
    */
}

/*
 * --INFO--
 * Address:	8001849C
 * Size:	0002A8
 */
void decompSZS_subroutine(unsigned char*, unsigned char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4
      li        r4, 0
      lbz       r5, 0x0(r3)
      cmpwi     r5, 0x59
      bne-      .loc_0x58
      lbz       r5, 0x1(r3)
      cmpwi     r5, 0x61
      bne-      .loc_0x58
      lbz       r5, 0x2(r3)
      cmpwi     r5, 0x7A
      bne-      .loc_0x58
      lbz       r5, 0x3(r3)
      cmpwi     r5, 0x30
      beq-      .loc_0x60

    .loc_0x58:
      li        r3, -0x1
      b         .loc_0x28C

    .loc_0x60:
      lwz       r7, -0x78B8(r13)
      lwz       r6, 0x4(r3)
      lwz       r5, -0x78B0(r13)
      sub       r6, r6, r7
      add       r31, r29, r6
      add       r5, r29, r5
      cmplw     r31, r5
      ble-      .loc_0x84
      mr        r31, r5

    .loc_0x84:
      addi      r3, r3, 0x10

    .loc_0x88:
      cmpwi     r4, 0
      bne-      .loc_0xB8
      lwz       r0, -0x78C0(r13)
      cmplw     r3, r0
      ble-      .loc_0xAC
      lwz       r0, -0x78C4(r13)
      cmplwi    r0, 0
      beq-      .loc_0xAC
      bl        0x2A4

    .loc_0xAC:
      lbz       r0, 0x0(r3)
      li        r4, 0x8
      addi      r3, r3, 0x1

    .loc_0xB8:
      rlwinm.   r5,r0,0,24,24
      beq-      .loc_0x150
      lwz       r6, -0x78B8(r13)
      cmplwi    r6, 0
      beq-      .loc_0x124
      lwz       r5, -0x78B4(r13)
      cmplw     r5, r6
      blt-      .loc_0xF0
      lbz       r5, 0x0(r3)
      addi      r30, r30, 0x1
      stb       r5, 0x0(r29)
      addi      r29, r29, 0x1
      cmplw     r29, r31
      beq-      .loc_0x280

    .loc_0xF0:
      lwz       r6, -0x78CC(r13)
      lbz       r7, 0x0(r3)
      addi      r5, r6, 0x1
      stw       r5, -0x78CC(r13)
      stb       r7, 0x0(r6)
      lwz       r6, -0x78CC(r13)
      lwz       r5, -0x78D0(r13)
      cmplw     r6, r5
      bne-      .loc_0x11C
      lwz       r5, -0x78D4(r13)
      stw       r5, -0x78CC(r13)

    .loc_0x11C:
      addi      r3, r3, 0x1
      b         .loc_0x140

    .loc_0x124:
      lbz       r5, 0x0(r3)
      addi      r3, r3, 0x1
      addi      r30, r30, 0x1
      stb       r5, 0x0(r29)
      addi      r29, r29, 0x1
      cmplw     r29, r31
      beq-      .loc_0x280

    .loc_0x140:
      lwz       r5, -0x78B4(r13)
      addi      r5, r5, 0x1
      stw       r5, -0x78B4(r13)
      b         .loc_0x270

    .loc_0x150:
      lwz       r8, -0x78B8(r13)
      lbz       r6, 0x0(r3)
      cmplwi    r8, 0
      lbz       r9, 0x1(r3)
      srawi     r5, r6, 0x4
      rlwimi    r9,r6,8,20,23
      addi      r3, r3, 0x2
      beq-      .loc_0x198
      lwz       r6, -0x78CC(r13)
      lwz       r7, -0x78D4(r13)
      sub       r6, r6, r9
      subi      r9, r6, 0x1
      cmplw     r9, r7
      bge-      .loc_0x1A0
      lwz       r6, -0x78D0(r13)
      sub       r6, r6, r7
      add       r9, r9, r6
      b         .loc_0x1A0

    .loc_0x198:
      sub       r6, r29, r9
      subi      r9, r6, 0x1

    .loc_0x1A0:
      cmpwi     r5, 0
      bne-      .loc_0x1B8
      lbz       r5, 0x0(r3)
      addi      r3, r3, 0x1
      addi      r5, r5, 0x12
      b         .loc_0x1BC

    .loc_0x1B8:
      addi      r5, r5, 0x2

    .loc_0x1BC:
      cmplwi    r8, 0
      beq-      .loc_0x240

    .loc_0x1C4:
      lwz       r7, -0x78B4(r13)
      lwz       r6, -0x78B8(r13)
      cmplw     r7, r6
      blt-      .loc_0x1EC
      lbz       r6, 0x0(r9)
      addi      r30, r30, 0x1
      stb       r6, 0x0(r29)
      addi      r29, r29, 0x1
      cmplw     r29, r31
      beq-      .loc_0x270

    .loc_0x1EC:
      lwz       r7, -0x78CC(r13)
      lbz       r8, 0x0(r9)
      addi      r6, r7, 0x1
      stw       r6, -0x78CC(r13)
      stb       r8, 0x0(r7)
      lwz       r6, -0x78CC(r13)
      lwz       r7, -0x78D0(r13)
      cmplw     r6, r7
      bne-      .loc_0x218
      lwz       r6, -0x78D4(r13)
      stw       r6, -0x78CC(r13)

    .loc_0x218:
      addi      r9, r9, 0x1
      cmplw     r9, r7
      bne-      .loc_0x228
      lwz       r9, -0x78D4(r13)

    .loc_0x228:
      lwz       r6, -0x78B4(r13)
      subic.    r5, r5, 0x1
      addi      r6, r6, 0x1
      stw       r6, -0x78B4(r13)
      bne+      .loc_0x1C4
      b         .loc_0x270

    .loc_0x240:
      lbz       r6, 0x0(r9)
      addi      r30, r30, 0x1
      stb       r6, 0x0(r29)
      addi      r29, r29, 0x1
      cmplw     r29, r31
      beq-      .loc_0x270
      lwz       r6, -0x78B4(r13)
      subic.    r5, r5, 0x1
      addi      r9, r9, 0x1
      addi      r6, r6, 0x1
      stw       r6, -0x78B4(r13)
      bne+      .loc_0x240

    .loc_0x270:
      cmplw     r29, r31
      rlwinm    r0,r0,1,0,30
      subi      r4, r4, 0x1
      blt+      .loc_0x88

    .loc_0x280:
      lwz       r4, -0x78A8(r13)
      li        r3, 0
      stw       r30, 0x0(r4)

    .loc_0x28C:
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
 * Address:	80018744
 * Size:	0000A4
 */
void firstSrcData()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lwz       r4, -0x78D8(r13)
      lwz       r3, -0x78DC(r13)
      subi      r0, r4, 0x19
      lwz       r5, -0x78C4(r13)
      sub       r4, r4, r3
      stw       r0, -0x78C0(r13)
      cmplw     r5, r4
      mr        r30, r3
      mr        r31, r4
      bge-      .loc_0x40
      mr        r31, r5

    .loc_0x40:
      lwz       r7, -0x78BC(r13)
      addi      r0, r31, 0x1F
      lwz       r4, -0x78C8(r13)
      mr        r5, r30
      rlwinm    r6,r0,0,0,26
      li        r3, 0x1
      add       r4, r7, r4
      li        r7, 0
      bl        0x1354
      lwz       r0, -0x78C4(r13)
      lwz       r3, -0x78C8(r13)
      sub.      r0, r0, r31
      add       r3, r3, r31
      stw       r3, -0x78C8(r13)
      stw       r0, -0x78C4(r13)
      bne-      .loc_0x88
      add       r0, r30, r31
      stw       r0, -0x78C0(r13)

    .loc_0x88:
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
 * Address:	800187E8
 * Size:	0000D8
 */
void nextSrcData(unsigned char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      lwz       r0, -0x78D8(r13)
      sub       r29, r0, r4
      rlwinm.   r5,r29,0,27,31
      beq-      .loc_0x40
      lwz       r3, -0x78DC(r13)
      addi      r0, r3, 0x20
      sub       r30, r0, r5
      b         .loc_0x44

    .loc_0x40:
      lwz       r30, -0x78DC(r13)

    .loc_0x44:
      mr        r3, r30
      mr        r5, r29
      bl        -0x13698
      lwz       r0, -0x78D8(r13)
      add       r31, r30, r29
      lwz       r3, -0x78C4(r13)
      sub       r28, r0, r31
      cmplw     r28, r3
      ble-      .loc_0x6C
      mr        r28, r3

    .loc_0x6C:
      lwz       r7, -0x78BC(r13)
      addi      r0, r28, 0x1F
      lwz       r4, -0x78C8(r13)
      add       r5, r30, r29
      rlwinm    r6,r0,0,0,26
      li        r3, 0x1
      add       r4, r7, r4
      li        r7, 0
      bl        0x1284
      lwz       r0, -0x78C4(r13)
      lwz       r3, -0x78C8(r13)
      sub.      r0, r0, r28
      add       r3, r3, r28
      stw       r3, -0x78C8(r13)
      stw       r0, -0x78C4(r13)
      bne-      .loc_0xB4
      add       r0, r31, r28
      stw       r0, -0x78C0(r13)

    .loc_0xB4:
      lwz       r0, 0x24(r1)
      mr        r3, r30
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
 * Address:	800188C0
 * Size:	000044
 */
void __sinit_JKRAram_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8050
      stw       r0, 0x14(r1)
      addi      r3, r3, 0x6DAC
      bl        0xDFFC
      lis       r3, 0x8050
      lis       r4, 0x8002
      lis       r5, 0x804F
      addi      r3, r3, 0x6DAC
      subi      r4, r4, 0x76FC
      subi      r5, r5, 0x108
      bl        0xA8E10
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80018904
 * Size:	000054
 */
void JSUList<JKRAMCommand>::~JSUList()
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
      beq-      .loc_0x38
      li        r4, 0
      bl        0xDF40
      extsh.    r0, r31
      ble-      .loc_0x38
      mr        r3, r30
      bl        0xB77C

    .loc_0x38:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}