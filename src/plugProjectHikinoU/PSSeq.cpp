

/*
 * --INFO--
 * Address:	80330D20
 * Size:	000060
 */
void PSSystem::SeqDataList::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x7C4C
      lis       r3, 0x804E
      addic.    r4, r31, 0x1C
      subi      r0, r3, 0x56F0
      stw       r0, 0x1C(r31)
      beq-      .loc_0x30
      subi      r4, r4, 0x1C

    .loc_0x30:
      lis       r3, 0x804E
      stw       r4, -0x6E34(r13)
      subi      r4, r3, 0x570C
      mr        r3, r31
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x10
      stw       r0, 0x1C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80330D80
 * Size:	000088
 */
void PSSystem::SeqDataList::__dt(void)
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
      beq-      .loc_0x6C
      lis       r3, 0x804E
      addic.    r0, r30, 0x1C
      subi      r3, r3, 0x570C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x1C(r30)
      beq-      .loc_0x50
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x56F0
      stw       r3, 0x1C(r30)
      stw       r0, -0x6E34(r13)

    .loc_0x50:
      mr        r3, r30
      li        r4, 0
      bl        0x7BEC
      extsh.    r0, r31
      ble-      .loc_0x6C
      mr        r3, r30
      bl        -0x30CD34

    .loc_0x6C:
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
 * Address:	80330E08
 * Size:	000108
 */
void PSSystem::SeqDataList::getSeqVolume((char const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x460(r1)
      mflr      r0
      stw       r0, 0x464(r1)
      stw       r31, 0x45C(r1)
      stw       r30, 0x458(r1)
      mr        r30, r4
      stw       r29, 0x454(r1)
      mr        r29, r3
      lis       r3, 0x8049
      lwz       r0, 0x18(r29)
      subi      r31, r3, 0x7B8
      cmplwi    r0, 0
      bne-      .loc_0x48
      addi      r3, r31, 0
      addi      r5, r31, 0xC
      li        r4, 0x24
      crclr     6, 0x6
      bl        -0x30680C

    .loc_0x48:
      lwz       r4, 0x18(r29)
      addi      r3, r1, 0x2C
      li        r5, -0x1
      bl        0xE4A9C
      li        r0, 0x1
      cmpwi     r0, 0x1
      stw       r0, 0x38(r1)
      bne-      .loc_0x70
      li        r0, 0
      stw       r0, 0x440(r1)

    .loc_0x70:
      addi      r3, r1, 0x2C
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        0xE4250
      b         .loc_0xBC

    .loc_0x84:
      addi      r3, r1, 0x2C
      bl        0xE360C
      stb       r3, 0x28(r1)
      mr        r4, r30
      addi      r3, r1, 0x8
      bl        -0x2667E0
      cmpwi     r3, 0
      bne-      .loc_0xAC
      lbz       r3, 0x28(r1)
      b         .loc_0xEC

    .loc_0xAC:
      addi      r3, r1, 0x2C
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        0xE4214

    .loc_0xBC:
      addi      r3, r1, 0x8
      addi      r4, r31, 0x18
      bl        -0x26680C
      cmpwi     r3, 0
      bne+      .loc_0x84
      mr        r6, r30
      addi      r3, r31, 0
      addi      r5, r31, 0x24
      li        r4, 0x35
      crclr     6, 0x6
      bl        -0x3068AC
      li        r3, 0x32

    .loc_0xEC:
      lwz       r0, 0x464(r1)
      lwz       r31, 0x45C(r1)
      lwz       r30, 0x458(r1)
      lwz       r29, 0x454(r1)
      mtlr      r0
      addi      r1, r1, 0x460
      blr
    */
}

/*
 * --INFO--
 * Address:	80330F10
 * Size:	000060
 */
void PSSystem::StreamDataList::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x7A5C
      lis       r3, 0x804E
      addic.    r4, r31, 0x1C
      subi      r0, r3, 0x5718
      stw       r0, 0x1C(r31)
      beq-      .loc_0x30
      subi      r4, r4, 0x1C

    .loc_0x30:
      lis       r3, 0x804E
      stw       r4, -0x6E30(r13)
      subi      r4, r3, 0x5734
      mr        r3, r31
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x10
      stw       r0, 0x1C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80330F70
 * Size:	000088
 */
void PSSystem::StreamDataList::__dt(void)
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
      beq-      .loc_0x6C
      lis       r3, 0x804E
      addic.    r0, r30, 0x1C
      subi      r3, r3, 0x5734
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x1C(r30)
      beq-      .loc_0x50
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x5718
      stw       r3, 0x1C(r30)
      stw       r0, -0x6E30(r13)

    .loc_0x50:
      mr        r3, r30
      li        r4, 0
      bl        0x79FC
      extsh.    r0, r31
      ble-      .loc_0x6C
      mr        r3, r30
      bl        -0x30CF24

    .loc_0x6C:
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
 * Address:	80330FF8
 * Size:	000110
 */
void PSSystem::StreamDataList::getStreamVolume((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x460(r1)
      mflr      r0
      stw       r0, 0x464(r1)
      stw       r31, 0x45C(r1)
      stw       r30, 0x458(r1)
      rlwinm    r30,r4,0,20,31
      stw       r29, 0x454(r1)
      mr        r29, r3
      lis       r3, 0x8049
      lwz       r0, 0x18(r29)
      subi      r31, r3, 0x7B8
      cmplwi    r0, 0
      bne-      .loc_0x48
      addi      r3, r31, 0
      addi      r5, r31, 0xC
      li        r4, 0x4C
      crclr     6, 0x6
      bl        -0x3069FC

    .loc_0x48:
      lwz       r4, 0x18(r29)
      addi      r3, r1, 0x30
      li        r5, -0x1
      bl        0xE48AC
      li        r0, 0x1
      cmpwi     r0, 0x1
      stw       r0, 0x3C(r1)
      bne-      .loc_0x70
      li        r0, 0
      stw       r0, 0x444(r1)

    .loc_0x70:
      addi      r3, r1, 0x30
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        0xE4060
      b         .loc_0xC4

    .loc_0x84:
      addi      r3, r1, 0x30
      bl        0xE3A10
      stw       r3, 0x28(r1)
      addi      r3, r1, 0x30
      bl        0xE3410
      lwz       r0, 0x28(r1)
      rlwinm    r4,r3,0,24,31
      stb       r3, 0x2C(r1)
      cmplw     r0, r30
      bne-      .loc_0xB4
      mr        r3, r4
      b         .loc_0xF4

    .loc_0xB4:
      addi      r3, r1, 0x30
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        0xE401C

    .loc_0xC4:
      addi      r3, r1, 0x8
      addi      r4, r31, 0x18
      bl        -0x266A04
      cmpwi     r3, 0
      bne+      .loc_0x84
      mr        r6, r30
      addi      r3, r31, 0
      addi      r5, r31, 0x3C
      li        r4, 0x5F
      crclr     6, 0x6
      bl        -0x306AA4
      li        r3, 0

    .loc_0xF4:
      lwz       r0, 0x464(r1)
      lwz       r31, 0x45C(r1)
      lwz       r30, 0x458(r1)
      lwz       r29, 0x454(r1)
      mtlr      r0
      addi      r1, r1, 0x460
      blr
    */
}

/*
 * --INFO--
 * Address:	80331108
 * Size:	000094
 */
void PSSystem::SeqSoundBase::stop((unsigned long))
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
      lwz       r0, 0x4(r3)
      cmplwi    r0, 0
      bne-      .loc_0x48
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x6B
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306B0C

    .loc_0x48:
      lwz       r3, 0x4(r29)
      addi      r31, r3, 0x50
      mr        r3, r31
      bl        -0x2415F4
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x241538
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
 * Address:	8033119C
 * Size:	000020
 */
void PSSystem::SeqSound::stopInner((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x27DB58
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803311BC
 * Size:	000020
 */
void PSSystem::StreamSound::stopInner((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x279508
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void PSSystem::SeqHeap::__ct((unsigned long, PSSystem::SeqBase*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803311DC
 * Size:	000060
 */
void PSSystem::SeqHeap::__dt(void)
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
      lis       r3, 0x804E
      subi      r0, r3, 0x5924
      stw       r0, 0x0(r30)
      lwz       r3, 0xC(r30)
      bl        -0x30D134
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x30D168

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
 * Address:	8033123C
 * Size:	000200
 */
void PSSystem::SeqHeap::requestCallback((unsigned long, unsigned short,
                                         JAISequence*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      li        r30, 0
      mr        r31, r3
      mr        r27, r6
      mr        r29, r30
      lbz       r0, -0x67B4(r13)
      extsb.    r0, r0
      bne-      .loc_0x38
      li        r0, 0x1
      stw       r30, -0x67B8(r13)
      stb       r0, -0x67B4(r13)

    .loc_0x38:
      cmpwi     r4, 0x2
      rlwinm    r28,r5,0,16,31
      beq-      .loc_0x1B8
      bge-      .loc_0x58
      cmpwi     r4, 0
      beq-      .loc_0x64
      bge-      .loc_0x12C
      b         .loc_0x1E4

    .loc_0x58:
      cmpwi     r4, 0x4
      bge-      .loc_0x1E4
      b         .loc_0x12C

    .loc_0x64:
      cmplwi    r27, 0
      bne-      .loc_0x88
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xBE
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306C80

    .loc_0x88:
      lwz       r27, 0x6A4(r27)
      cmplwi    r27, 0
      bne-      .loc_0xB0
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xC0
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306CA8

    .loc_0xB0:
      lwz       r27, 0x28(r27)
      lwz       r0, 0x4(r27)
      cmplwi    r0, 0
      bne-      .loc_0xFC
      li        r29, 0x1
      bl        -0x280264
      mr        r4, r28
      bl        -0x289C98
      lwz       r0, 0x8(r27)
      cmplw     r3, r0
      ble-      .loc_0x100
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xC9
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306CF0
      b         .loc_0x100

    .loc_0xFC:
      li        r29, 0

    .loc_0x100:
      lwz       r30, 0xC(r27)
      cmplwi    r30, 0
      bne-      .loc_0x1E4
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xD0
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306D20
      b         .loc_0x1E4

    .loc_0x12C:
      cmplwi    r27, 0
      bne-      .loc_0x150
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xDC
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306D48

    .loc_0x150:
      lwz       r27, 0x6A4(r27)
      cmplwi    r27, 0
      bne-      .loc_0x178
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xDE
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306D70

    .loc_0x178:
      bl        -0x280318
      mr.       r26, r3
      bne-      .loc_0x1A0
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xE0
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306D98

    .loc_0x1A0:
      mr        r3, r26
      mr        r4, r28
      bl        -0x289D74
      lwz       r4, 0x28(r27)
      bl        0x124
      b         .loc_0x1E4

    .loc_0x1B8:
      cmplwi    r27, 0
      bne-      .loc_0x1DC
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0xE9
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306DD4

    .loc_0x1DC:
      li        r0, 0
      stw       r0, 0x6A4(r27)

    .loc_0x1E4:
      stw       r30, 0x0(r31)
      stb       r29, 0x4(r31)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8033143C
 * Size:	0000D4
 */
void PSSystem::SeqHeap::loadSeqAsync((PSSystem::TaskChecker*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      lis       r3, 0x8049
      subi      r31, r3, 0x7B8
      stw       r4, 0x14(r27)
      lwz       r0, 0x4(r27)
      cmplwi    r0, 0
      beq-      .loc_0x40
      addi      r3, r31, 0
      addi      r5, r31, 0xC
      li        r4, 0xF7
      crclr     6, 0x6
      bl        -0x306E38

    .loc_0x40:
      lwz       r28, 0x14(r27)
      cmplwi    r28, 0
      beq-      .loc_0x68
      mr        r3, r28
      bl        -0x241924
      lbz       r4, 0x18(r28)
      mr        r3, r28
      addi      r0, r4, 0x1
      stb       r0, 0x18(r28)
      bl        -0x24185C

    .loc_0x68:
      lwz       r3, 0x10(r27)
      bl        0x468
      lwz       r30, 0xC(r3)
      lwz       r29, 0xC(r27)
      lwz       r3, 0x10(r27)
      bl        0x458
      lhz       r28, 0x0(r3)
      bl        -0x280424
      lis       r5, 0x8033
      mr        r4, r28
      addi      r7, r5, 0x1510
      mr        r6, r30
      mr        r5, r29
      mr        r8, r27
      bl        -0x289CCC
      cmpwi     r3, 0x1
      beq-      .loc_0xC0
      addi      r3, r31, 0
      addi      r5, r31, 0x5C
      li        r4, 0x10A
      crclr     6, 0x6
      bl        -0x306EB8

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
 * Address:	80331510
 * Size:	000098
 */
void PSSystem::SeqHeap::loadedCallback((unsigned long, unsigned long))
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
      stw       r30, 0x4(r4)
      lwz       r3, 0x10(r4)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      bne-      .loc_0x58
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x126
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x306F24

    .loc_0x58:
      lwz       r31, 0x14(r31)
      cmplwi    r31, 0
      beq-      .loc_0x80
      mr        r3, r31
      bl        -0x241A10
      lbz       r4, 0x18(r31)
      mr        r3, r31
      subi      r0, r4, 0x1
      stb       r0, 0x18(r31)
      bl        -0x241948

    .loc_0x80:
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
 * Address:	803315A8
 * Size:	000030
 */
void PSSystem::SeqPlayReservator::reservatorTask(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	803315D8
 * Size:	000030
 */
void PSSystem::SeqPauseOffReservator::reservatorTask(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x20(r12)
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
 * Address:	80331608
 * Size:	000100
 */
void PSSystem::SeqBase::__ct((char const*, JAInter::SoundInfo const&))
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
      mr        r4, r30
      stw       r29, 0x14(r1)
      mr        r29, r5
      bl        -0x30AE78
      lis       r3, 0x804E
      lis       r5, 0x804E
      subi      r0, r3, 0x598C
      lis       r4, 0x804E
      stw       r0, 0x10(r30)
      li        r10, 0
      lis       r3, 0x804E
      lwz       r8, 0x0(r29)
      stw       r10, 0x14(r30)
      subi      r7, r5, 0x5948
      lwz       r0, 0x4(r29)
      subi      r6, r4, 0x5930
      stw       r8, 0x18(r30)
      subi      r5, r3, 0x593C
      lwz       r9, 0x8(r29)
      li        r4, 0x4
      stw       r0, 0x1C(r30)
      li        r0, 0x26
      lwz       r8, 0xC(r29)
      addi      r3, r30, 0x50
      stw       r9, 0x20(r30)
      stw       r8, 0x24(r30)
      stw       r10, 0x28(r30)
      stw       r7, 0x2C(r30)
      sth       r10, 0x30(r30)
      stw       r6, 0x2C(r30)
      stw       r30, 0x34(r30)
      stw       r7, 0x38(r30)
      sth       r10, 0x3C(r30)
      stw       r5, 0x38(r30)
      stw       r30, 0x40(r30)
      stw       r4, 0x44(r30)
      stb       r0, 0x48(r30)
      stw       r10, 0x4C(r30)
      bl        -0x241B8C
      cmplwi    r31, 0
      beq-      .loc_0xE0
      mr        r3, r31
      bl        -0x266DBC
      addi      r3, r3, 0x1
      bl        -0x30D728
      stw       r3, 0x14(r30)
      mr        r4, r31
      lwz       r3, 0x14(r30)
      bl        -0x266E8C

    .loc_0xE0:
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
 * Address:	........
 * Size:	000054
 */
void JSULink<PSSystem::SeqBase>::~JSULink()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80331708
 * Size:	000134
 */
void PSSystem::SeqBase::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      stw       r29, 0x14(r1)
      lwz       r4, 0x14(r3)
      cmplwi    r4, 0
      beq-      .loc_0x118
      lwz       r3, -0x6E34(r13)
      cmplwi    r3, 0
      beq-      .loc_0x3C
      bl        -0x934
      stb       r3, 0x24(r30)

    .loc_0x3C:
      li        r3, 0x18
      bl        -0x30D8A4
      mr.       r31, r3
      beq-      .loc_0x114
      mr        r3, r30
      bl        0x1B8
      lwz       r4, 0xC(r3)
      lis       r3, 0x804E
      subi      r0, r3, 0x5924
      li        r3, 0
      stw       r0, 0x0(r31)
      addi      r0, r4, 0x1F
      rlwinm    r29,r0,0,0,26
      cmplwi    r30, 0
      stw       r3, 0x4(r31)
      stw       r29, 0x8(r31)
      stw       r3, 0xC(r31)
      stw       r30, 0x10(r31)
      stw       r3, 0x14(r31)
      bne-      .loc_0xA8
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x86
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x30716C

    .loc_0xA8:
      cmplwi    r29, 0
      beq-      .loc_0x114
      lwz       r3, 0x8(r31)
      li        r5, 0x20
      lwz       r4, -0x77D4(r13)
      bl        -0x30D77C
      stw       r3, 0xC(r31)
      lwz       r0, 0xC(r31)
      cmplwi    r0, 0
      bne-      .loc_0xEC
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x8A
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3071B0

    .loc_0xEC:
      lwz       r0, 0x8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x114
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x8B
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3071D8

    .loc_0x114:
      stw       r31, 0x28(r30)

    .loc_0x118:
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
 * Address:	8033183C
 * Size:	000098
 */
void PSSystem::SeqBase::__dt(void)
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
      subi      r0, r3, 0x598C
      stw       r0, 0x10(r30)
      lwz       r3, 0x28(r30)
      cmplwi    r3, 0
      beq-      .loc_0x50
      beq-      .loc_0x50
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      lwz       r3, 0x14(r30)
      bl        -0x30D7B8
      cmplwi    r30, 0
      beq-      .loc_0x6C
      mr        r3, r30
      li        r4, 0
      bl        -0x30B0D4

    .loc_0x6C:
      extsh.    r0, r31
      ble-      .loc_0x7C
      mr        r3, r30
      bl        -0x30D800

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
 * Address:	803318D4
 * Size:	00003C
 */
void PSSystem::SeqBase::isPlaying(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x4C(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lbz       r0, 0x35B(r3)
      cmplwi    r0, 0
      beq-      .loc_0x24
      rlwinm    r0,r0,0,24,31
      cmplwi    r0, 0x2
      bne-      .loc_0x2C

    .loc_0x24:
      li        r3, 0
      blr

    .loc_0x2C:
      li        r3, 0x1
      blr

    .loc_0x34:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80331910
 * Size:	000090
 */
void PSSystem::SeqBase::getFileEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r4, 0x7B8
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      bl        -0x280898
      cmplwi    r3, 0
      bne-      .loc_0x44
      addi      r3, r31, 0
      addi      r5, r31, 0xC
      li        r4, 0x192
      crclr     6, 0x6
      bl        -0x307310

    .loc_0x44:
      bl        -0x2808B8
      lwz       r4, 0x14(r29)
      bl        -0x316B80
      mr.       r30, r3
      bne-      .loc_0x70
      lwz       r6, 0x14(r29)
      addi      r3, r31, 0
      addi      r5, r31, 0x8C
      li        r4, 0x194
      crclr     6, 0x6
      bl        -0x30733C

    .loc_0x70:
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
 * Address:	803319A0
 * Size:	0001D4
 */
void PSSystem::SeqBase::pauseOn((PSSystem::SeqBase::PauseMode))
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
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x1B8
      stw       r30, 0x44(r29)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      bne-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x1A2
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3073C0

    .loc_0x64:
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmpwi     r30, 0x2
      lwz       r3, 0x0(r3)
      li        r31, 0
      beq-      .loc_0xF8
      bge-      .loc_0x9C
      cmpwi     r30, 0
      beq-      .loc_0xA8
      bge-      .loc_0xC8
      b         .loc_0x188

    .loc_0x9C:
      cmpwi     r30, 0x4
      bge-      .loc_0x188
      b         .loc_0x15C

    .loc_0xA8:
      cmplwi    r3, 0
      beq-      .loc_0xC0
      li        r4, 0x2
      li        r5, 0x1E
      bl        -0x27C900
      b         .loc_0x1A4

    .loc_0xC0:
      li        r31, 0x1
      b         .loc_0x1A4

    .loc_0xC8:
      cmplwi    r3, 0
      beq-      .loc_0xF0
      lwz       r12, 0x10(r3)
      li        r4, 0xF
      lfs       f1, -0x2C0(r2)
      li        r5, 0xB
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A4

    .loc_0xF0:
      li        r31, 0x1
      b         .loc_0x1A4

    .loc_0xF8:
      cmplwi    r3, 0
      beq-      .loc_0x154
      lbz       r4, 0x48(r29)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      lfd       f3, -0x2B0(r2)
      stw       r4, 0xC(r1)
      lfs       f0, -0x2BC(r2)
      lfd       f2, 0x8(r1)
      lfs       f1, -0x2B8(r2)
      fsubs     f2, f2, f3
      fdivs     f0, f2, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x134
      b         .loc_0x138

    .loc_0x134:
      fmr       f1, f0

    .loc_0x138:
      lwz       r12, 0x10(r3)
      li        r4, 0xF
      li        r5, 0xB
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A4

    .loc_0x154:
      li        r31, 0x1
      b         .loc_0x1A4

    .loc_0x15C:
      cmplwi    r3, 0
      beq-      .loc_0x180
      mr        r3, r29
      li        r4, 0
      lwz       r12, 0x10(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A4

    .loc_0x180:
      li        r31, 0x1
      b         .loc_0x1A4

    .loc_0x188:
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x1CD
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x307500

    .loc_0x1A4:
      rlwinm    r0,r31,0,24,31
      cmplwi    r0, 0x1
      bne-      .loc_0x1B8
      li        r0, 0x4
      stw       r0, 0x44(r29)

    .loc_0x1B8:
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
 * Address:	80331B74
 * Size:	00013C
 */
void PSSystem::SeqBase::pauseOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      bne-      .loc_0x48
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x1DA
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x307578

    .loc_0x48:
      lwz       r0, 0x44(r31)
      cmpwi     r0, 0x3
      bne-      .loc_0x6C
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0x120

    .loc_0x6C:
      cmpwi     r0, 0x2
      beq-      .loc_0x7C
      cmpwi     r0, 0x1
      bne-      .loc_0xD4

    .loc_0x7C:
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x120
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0xF
      lfs       f1, -0x2B8(r2)
      li        r5, 0xB
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x120

    .loc_0xD4:
      cmpwi     r0, 0x4
      beq-      .loc_0x120
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x120
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      li        r5, 0x1E
      bl        -0x27CB38

    .loc_0x120:
      li        r0, 0x4
      stw       r0, 0x44(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80331CB0
 * Size:	0000D4
 */
void PSSystem::SeqBase::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lhz       r3, 0x30(r3)
      cmplwi    r3, 0
      beq-      .loc_0x44
      subi      r0, r3, 0x1
      cmplwi    r3, 0x1
      sth       r0, 0x30(r31)
      bne-      .loc_0x44
      addi      r3, r31, 0x2C
      lwz       r12, 0x2C(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x44:
      lhz       r3, 0x3C(r31)
      cmplwi    r3, 0
      beq-      .loc_0x74
      subi      r0, r3, 0x1
      cmplwi    r3, 0x1
      sth       r0, 0x3C(r31)
      bne-      .loc_0x74
      addi      r3, r31, 0x38
      lwz       r12, 0x38(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x74:
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      bne-      .loc_0xC0
      lwz       r3, 0x4C(r31)
      cmplwi    r3, 0
      beq-      .loc_0xC0
      lbz       r0, 0x35B(r3)
      cmplwi    r0, 0
      beq-      .loc_0xB8
      rlwinm    r0,r0,0,24,31
      cmplwi    r0, 0x2
      bne-      .loc_0xC0

    .loc_0xB8:
      li        r0, 0
      stw       r0, 0x4C(r31)

    .loc_0xC0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80331D84
 * Size:	000004
 */
void PSSystem::SeqBase::onPlayingFrame(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80331D88
 * Size:	000154
 */
void PSSystem::SeqBase::startSeq(void)
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
      lis       r3, 0x8049
      subi      r30, r3, 0x7B8
      addi      r3, r29, 0x50
      bl        -0x242248
      bl        -0x280D18
      cmplwi    r3, 0
      bne-      .loc_0x4C
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x192
      crclr     6, 0x6
      bl        -0x307790

    .loc_0x4C:
      bl        -0x280D38
      lwz       r4, 0x14(r29)
      bl        -0x317000
      mr.       r31, r3
      bne-      .loc_0x78
      lwz       r6, 0x14(r29)
      addi      r3, r30, 0
      addi      r5, r30, 0x8C
      li        r4, 0x194
      crclr     6, 0x6
      bl        -0x3077BC

    .loc_0x78:
      mr        r3, r29
      lhz       r31, 0x0(r31)
      lwz       r12, 0x10(r29)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      or        r31, r31, r3
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r5, r31
      addi      r8, r29, 0x18
      li        r4, 0
      li        r6, 0
      li        r7, 0
      bl        -0x27EFAC
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      bne-      .loc_0xF0
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x216
      crclr     6, 0x6
      bl        -0x307834

    .loc_0xF0:
      lwz       r31, 0x0(r31)
      cmplwi    r31, 0
      bne-      .loc_0x110
      addi      r3, r30, 0
      addi      r5, r30, 0x9C
      li        r4, 0x21A
      crclr     6, 0x6
      bl        -0x307854

    .loc_0x110:
      stw       r29, 0x6A4(r31)
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r0, r31, 0x30C
      addi      r3, r29, 0x50
      stw       r0, 0x4C(r29)
      bl        -0x242278
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
 * Address:	80331EDC
 * Size:	0000D0
 */
void PSSystem::SeqBase::setConfigVolume(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lwz       r0, -0x67A8(r13)
      mr        r31, r3
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x70C
      li        r4, 0x18B
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3078DC

    .loc_0x44:
      mr        r3, r31
      lwz       r4, -0x67A8(r13)
      lwz       r12, 0x10(r31)
      lfs       f31, 0x24(r4)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      fmr       f1, f31
      li        r4, 0
      li        r5, 0x8
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      lfs       f1, -0x2A8(r2)
      li        r5, 0x3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80331FAC
 * Size:	000038
 */
void PSSystem::SeqBase::scene1st((PSSystem::TaskChecker*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x28(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80331FE4
 * Size:	000060
 */
void PSSystem::SeqBase::stopSeq((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x4C
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x4C
      lwz       r12, 0x10(r3)
      mr        r4, r31
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80332044
 * Size:	000114
 */
void PSSystem::BgmSeq::__ct((char const*, JAInter::SoundInfo const&))
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
      mr        r4, r30
      stw       r29, 0x14(r1)
      mr        r29, r5
      bl        -0x30B8B4
      lis       r3, 0x804E
      lis       r5, 0x804E
      subi      r0, r3, 0x598C
      lis       r4, 0x804E
      stw       r0, 0x10(r30)
      li        r10, 0
      lis       r3, 0x804E
      lwz       r8, 0x0(r29)
      stw       r10, 0x14(r30)
      subi      r7, r5, 0x5948
      lwz       r0, 0x4(r29)
      subi      r6, r4, 0x5930
      stw       r8, 0x18(r30)
      subi      r5, r3, 0x593C
      lwz       r9, 0x8(r29)
      li        r4, 0x4
      stw       r0, 0x1C(r30)
      li        r0, 0x26
      lwz       r8, 0xC(r29)
      addi      r3, r30, 0x50
      stw       r9, 0x20(r30)
      stw       r8, 0x24(r30)
      stw       r10, 0x28(r30)
      stw       r7, 0x2C(r30)
      sth       r10, 0x30(r30)
      stw       r6, 0x2C(r30)
      stw       r30, 0x34(r30)
      stw       r7, 0x38(r30)
      sth       r10, 0x3C(r30)
      stw       r5, 0x38(r30)
      stw       r30, 0x40(r30)
      stw       r4, 0x44(r30)
      stb       r0, 0x48(r30)
      stw       r10, 0x4C(r30)
      bl        -0x2425C8
      cmplwi    r31, 0
      beq-      .loc_0xE0
      mr        r3, r31
      bl        -0x2677F8
      addi      r3, r3, 0x1
      bl        -0x30E164
      stw       r3, 0x14(r30)
      mr        r4, r31
      lwz       r3, 0x14(r30)
      bl        -0x2678C8

    .loc_0xE0:
      lis       r3, 0x804E
      li        r0, 0
      subi      r4, r3, 0x59D0
      mr        r3, r30
      stw       r4, 0x10(r30)
      stw       r0, 0x68(r30)
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
 * Address:	80332158
 * Size:	0000C0
 */
void PSSystem::BgmSeq::__dt(void)
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
      beq-      .loc_0xA4
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x59D0
      stw       r0, 0x10(r30)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0x94
      lis       r3, 0x804E
      subi      r0, r3, 0x598C
      stw       r0, 0x10(r30)
      lwz       r3, 0x28(r30)
      cmplwi    r3, 0
      beq-      .loc_0x78
      beq-      .loc_0x78
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x78:
      lwz       r3, 0x14(r30)
      bl        -0x30E0FC
      cmplwi    r30, 0
      beq-      .loc_0x94
      mr        r3, r30
      li        r4, 0
      bl        -0x30BA18

    .loc_0x94:
      extsh.    r0, r31
      ble-      .loc_0xA4
      mr        r3, r30
      bl        -0x30E144

    .loc_0xA4:
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
 * Address:	80332218
 * Size:	000100
 */
void PSSystem::StreamBgm::__ct((unsigned long, JAInter::SoundInfo const&))
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
      mr        r4, r30
      stw       r29, 0x14(r1)
      mr        r29, r5
      bl        -0x30BA88
      lis       r3, 0x804E
      lis       r5, 0x804E
      subi      r0, r3, 0x598C
      lis       r4, 0x804E
      stw       r0, 0x10(r30)
      li        r10, 0
      lis       r3, 0x804E
      lwz       r8, 0x0(r29)
      stw       r10, 0x14(r30)
      subi      r7, r5, 0x5948
      lwz       r0, 0x4(r29)
      subi      r6, r4, 0x5930
      stw       r8, 0x18(r30)
      subi      r5, r3, 0x593C
      lwz       r9, 0x8(r29)
      li        r4, 0x4
      stw       r0, 0x1C(r30)
      li        r0, 0x26
      lwz       r8, 0xC(r29)
      addi      r3, r30, 0x50
      stw       r9, 0x20(r30)
      stw       r8, 0x24(r30)
      stw       r10, 0x28(r30)
      stw       r7, 0x2C(r30)
      sth       r10, 0x30(r30)
      stw       r6, 0x2C(r30)
      stw       r30, 0x34(r30)
      stw       r7, 0x38(r30)
      sth       r10, 0x3C(r30)
      stw       r5, 0x38(r30)
      stw       r30, 0x40(r30)
      stw       r4, 0x44(r30)
      stb       r0, 0x48(r30)
      stw       r10, 0x4C(r30)
      bl        -0x24279C
      lis       r4, 0x804E
      lis       r3, 0x804E
      subi      r0, r4, 0x59D0
      li        r4, 0
      stw       r0, 0x10(r30)
      subi      r0, r3, 0x5A14
      mr        r3, r30
      stw       r4, 0x68(r30)
      stw       r0, 0x10(r30)
      stw       r4, 0x6C(r30)
      stw       r31, 0x70(r30)
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
 * Address:	80332318
 * Size:	000004
 */
void PSSystem::StreamBgm::init(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8033231C
 * Size:	0000EC
 */
void PSSystem::StreamBgm::__dt(void)
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
      beq-      .loc_0xD0
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x5A14
      stw       r0, 0x10(r30)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0xC0
      lis       r4, 0x804E
      mr        r3, r30
      subi      r0, r4, 0x59D0
      li        r4, 0
      stw       r0, 0x10(r30)
      lwz       r12, 0x10(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0xC0
      lis       r3, 0x804E
      subi      r0, r3, 0x598C
      stw       r0, 0x10(r30)
      lwz       r3, 0x28(r30)
      cmplwi    r3, 0
      beq-      .loc_0xA4
      beq-      .loc_0xA4
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0xA4:
      lwz       r3, 0x14(r30)
      bl        -0x30E2EC
      cmplwi    r30, 0
      beq-      .loc_0xC0
      mr        r3, r30
      li        r4, 0
      bl        -0x30BC08

    .loc_0xC0:
      extsh.    r0, r31
      ble-      .loc_0xD0
      mr        r3, r30
      bl        -0x30E334

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
 * Address:	80332408
 * Size:	000008
 */
void PSSystem::StreamBgm::setId((unsigned long))
{
    /*
    .loc_0x0:
      stw       r4, 0x70(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80332410
 * Size:	00015C
 */
void PSSystem::StreamBgm::startSeq(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x6E30(r13)
      cmplwi    r0, 0
      beq-      .loc_0x30
      lwz       r4, 0x70(r31)
      mr        r3, r0
      bl        -0x1440
      stb       r3, 0x24(r31)

    .loc_0x30:
      addi      r3, r31, 0x50
      bl        -0x2428DC
      lwz       r3, -0x7498(r13)
      addi      r5, r31, 0x6C
      lwz       r4, 0x70(r31)
      addi      r9, r31, 0x18
      li        r6, 0
      li        r7, 0
      li        r8, 0
      bl        -0x285CE8
      addi      r3, r31, 0x50
      bl        -0x242828
      lwz       r0, 0x6C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x88
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x2C0
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x307E54

    .loc_0x88:
      lwz       r3, 0x6C(r31)
      lwz       r4, 0x70(r31)
      lwz       r0, 0x20(r3)
      cmplw     r4, r0
      beq-      .loc_0xB8
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x2C1
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x307E84

    .loc_0xB8:
      lwz       r3, 0x70(r31)
      addis     r0, r3, 0x3FFF
      cmplwi    r0, 0x101F
      bne-      .loc_0x134
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      lfs       f1, -0x2B8(r2)
      li        r5, 0x8
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      lfs       f1, -0x2A8(r2)
      li        r5, 0x3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x148

    .loc_0x134:
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl

    .loc_0x148:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8033256C
 * Size:	0000D0
 */
void PSSystem::StreamBgm::setConfigVolume(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lwz       r0, -0x67A8(r13)
      mr        r31, r3
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x70C
      li        r4, 0x18B
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x307F6C

    .loc_0x44:
      mr        r3, r31
      lwz       r4, -0x67A8(r13)
      lwz       r12, 0x10(r31)
      lfs       f31, 0x24(r4)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      fmr       f1, f31
      li        r4, 0
      li        r5, 0x8
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      lfs       f1, -0x2A4(r2)
      li        r5, 0x3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8033263C
 * Size:	000014
 */
void PSSystem::StreamBgm::isPlaying(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x6C(r3)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80332650
 * Size:	0000C0
 */
void PSSystem::SeSeq::__dt(void)
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
      beq-      .loc_0xA4
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x5A58
      stw       r0, 0x10(r30)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0x94
      lis       r3, 0x804E
      subi      r0, r3, 0x598C
      stw       r0, 0x10(r30)
      lwz       r3, 0x28(r30)
      cmplwi    r3, 0
      beq-      .loc_0x78
      beq-      .loc_0x78
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x78:
      lwz       r3, 0x14(r30)
      bl        -0x30E5F4
      cmplwi    r30, 0
      beq-      .loc_0x94
      mr        r3, r30
      li        r4, 0
      bl        -0x30BF10

    .loc_0x94:
      extsh.    r0, r31
      ble-      .loc_0xA4
      mr        r3, r30
      bl        -0x30E63C

    .loc_0xA4:
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
 * Address:	80332710
 * Size:	00002C
 */
void PSSystem::SeSeq::seqLoadAfter(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	8033273C
 * Size:	0000D0
 */
void PSSystem::SeSeq::setConfigVolume(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lwz       r0, -0x67A8(r13)
      mr        r31, r3
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x70C
      li        r4, 0x18B
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x30813C

    .loc_0x44:
      mr        r3, r31
      lwz       r4, -0x67A8(r13)
      lwz       r12, 0x10(r31)
      lfs       f31, 0x20(r4)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      fmr       f1, f31
      li        r4, 0
      li        r5, 0x8
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      lfs       f1, -0x2B8(r2)
      li        r5, 0x3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8033280C
 * Size:	0000A4
 */
void PSSystem::SeSeq::stopSeq((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      b         .loc_0x38

    .loc_0x28:
      lwz       r3, -0x7498(r13)
      mr        r4, r31
      bl        -0x285E94
      addi      r31, r31, 0x1

    .loc_0x38:
      bl        -0x284DD4
      rlwinm    r3,r3,0,24,31
      rlwinm    r0,r31,0,24,31
      cmplw     r0, r3
      blt+      .loc_0x28
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x88
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x88
      lwz       r12, 0x10(r3)
      mr        r4, r30
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x88:
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
 * Address:	803328B0
 * Size:	000138
 */
void PSSystem::DirectedBgm::__ct((char const*, JAInter::SoundInfo const&,
                                  PSSystem::DirectorMgrBase*))
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
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      mr        r4, r28
      bl        -0x30C128
      lis       r3, 0x804E
      lis       r5, 0x804E
      subi      r0, r3, 0x598C
      lis       r4, 0x804E
      stw       r0, 0x10(r28)
      li        r10, 0
      lis       r3, 0x804E
      lwz       r8, 0x0(r30)
      stw       r10, 0x14(r28)
      subi      r7, r5, 0x5948
      lwz       r0, 0x4(r30)
      subi      r6, r4, 0x5930
      stw       r8, 0x18(r28)
      subi      r5, r3, 0x593C
      lwz       r9, 0x8(r30)
      li        r4, 0x4
      stw       r0, 0x1C(r28)
      li        r0, 0x26
      lwz       r8, 0xC(r30)
      addi      r3, r28, 0x50
      stw       r9, 0x20(r28)
      stw       r8, 0x24(r28)
      stw       r10, 0x28(r28)
      stw       r7, 0x2C(r28)
      sth       r10, 0x30(r28)
      stw       r6, 0x2C(r28)
      stw       r28, 0x34(r28)
      stw       r7, 0x38(r28)
      sth       r10, 0x3C(r28)
      stw       r5, 0x38(r28)
      stw       r28, 0x40(r28)
      stw       r4, 0x44(r28)
      stb       r0, 0x48(r28)
      stw       r10, 0x4C(r28)
      bl        -0x242E3C
      cmplwi    r29, 0
      beq-      .loc_0xE8
      mr        r3, r29
      bl        -0x26806C
      addi      r3, r3, 0x1
      bl        -0x30E9D8
      stw       r3, 0x14(r28)
      mr        r4, r29
      lwz       r3, 0x14(r28)
      bl        -0x26813C

    .loc_0xE8:
      lis       r4, 0x804E
      lis       r3, 0x804E
      subi      r0, r4, 0x59D0
      li        r4, 0
      stw       r0, 0x10(r28)
      subi      r0, r3, 0x5AA4
      mr        r3, r28
      stw       r4, 0x68(r28)
      stw       r0, 0x10(r28)
      stw       r31, 0x6C(r28)
      stw       r4, 0x70(r28)
      stb       r4, 0xB4(r28)
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
 * Address:	803329E8
 * Size:	0000C0
 */
void PSSystem::DirectedBgm::initRootTrack_onPlaying((JASTrack*))
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
      lbz       r0, 0xB4(r3)
      cmplwi    r0, 0x1
      beq-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x324
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3083E8

    .loc_0x44:
      lwz       r0, 0x70(r30)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x325
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x308410

    .loc_0x6C:
      lwz       r4, 0x70(r30)
      mr        r3, r31
      li        r5, 0x12
      bl        0x595C
      lwz       r3, 0x70(r30)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r30)
      cmplwi    r3, 0
      beq-      .loc_0xA8
      mr        r4, r31
      bl        0x10F70

    .loc_0xA8:
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
 * Address:	80332AA8
 * Size:	0000D4
 */
void PSSystem::DirectedBgm::initChildTrack_onPlaying((JASTrack*, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lbz       r0, 0xB4(r3)
      cmplwi    r0, 0x1
      beq-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x330
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3084B0

    .loc_0x4C:
      rlwinm    r0,r31,0,24,31
      cmplwi    r0, 0x10
      blt-      .loc_0x74
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x331
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3084D8

    .loc_0x74:
      rlwinm    r0,r31,2,22,29
      mr        r3, r30
      add       r31, r29, r0
      li        r5, 0x12
      lwz       r4, 0x74(r31)
      bl        0x588C
      lwz       r3, 0x74(r31)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r29)
      cmplwi    r3, 0
      beq-      .loc_0xB8
      mr        r4, r30
      bl        0x10EA0

    .loc_0xB8:
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
 * Address:	........
 * Size:	000098
 */
void PSSystem::DirectedBgm::getDirector((unsigned char))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80332B7C
 * Size:	000098
 */
void PSSystem::DirectedBgm::getDirectorP((unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lis       r3, 0x8049
      stw       r29, 0x14(r1)
      mr        r29, r4
      subi      r31, r3, 0x7B8
      lwz       r0, 0x6C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x48
      addi      r3, r31, 0
      addi      r5, r31, 0xC
      li        r4, 0x340
      crclr     6, 0x6
      bl        -0x308580

    .loc_0x48:
      lwz       r30, 0x6C(r30)
      rlwinm    r3,r29,0,24,31
      lbz       r0, 0x8(r30)
      cmplw     r3, r0
      blt-      .loc_0x70
      addi      r3, r31, 0xBC
      addi      r5, r31, 0xC
      li        r4, 0xB5
      crclr     6, 0x6
      bl        -0x3085A8

    .loc_0x70:
      lwz       r3, 0x4(r30)
      rlwinm    r0,r29,2,22,29
      lwz       r31, 0x1C(r1)
      lwzx      r3, r3, r0
      lwz       r0, 0x24(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80332C14
 * Size:	000064
 */
void PSSystem::DirectedBgm::newSeqTrackRoot(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0x2C4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      bl        -0x30ED84
      mr.       r31, r3
      beq-      .loc_0x28
      bl        0xF6D8
      mr        r31, r3

    .loc_0x28:
      cmplwi    r31, 0
      bne-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x347
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x30861C

    .loc_0x4C:
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
 * Address:	80332C78
 * Size:	000074
 */
void PSSystem::DirectedBgm::newSeqTrackChild((unsigned char,
                                              PSSystem::SeqTrackRoot&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x27C
      bl        -0x30EDF0
      mr.       r31, r3
      beq-      .loc_0x34
      lwz       r4, 0x70(r30)
      bl        0xFCC0
      mr        r31, r3

    .loc_0x34:
      cmplwi    r31, 0
      bne-      .loc_0x58
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x34F
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x30868C

    .loc_0x58:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80332CEC
 * Size:	0001F0
 */
void PSSystem::DirectedBgm::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lis       r3, 0x8049
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      subi      r28, r3, 0x7B8
      lwz       r4, 0x14(r31)
      cmplwi    r4, 0
      beq-      .loc_0x150
      lwz       r3, -0x6E34(r13)
      cmplwi    r3, 0
      beq-      .loc_0x48
      bl        -0x1F24
      stb       r3, 0x24(r31)

    .loc_0x48:
      li        r3, 0x18
      bl        -0x30EE94
      mr.       r29, r3
      beq-      .loc_0x14C
      bl        -0x281CA8
      cmplwi    r3, 0
      bne-      .loc_0x78
      addi      r3, r28, 0
      addi      r5, r28, 0xC
      li        r4, 0x192
      crclr     6, 0x6
      bl        -0x308720

    .loc_0x78:
      bl        -0x281CC8
      lwz       r4, 0x14(r31)
      bl        -0x317F90
      mr.       r30, r3
      bne-      .loc_0xA4
      lwz       r6, 0x14(r31)
      addi      r3, r28, 0
      addi      r5, r28, 0x8C
      li        r4, 0x194
      crclr     6, 0x6
      bl        -0x30874C

    .loc_0xA4:
      lwz       r4, 0xC(r30)
      lis       r3, 0x804E
      subi      r0, r3, 0x5924
      li        r3, 0
      stw       r0, 0x0(r29)
      addi      r0, r4, 0x1F
      rlwinm    r30,r0,0,0,26
      cmplwi    r31, 0
      stw       r3, 0x4(r29)
      stw       r30, 0x8(r29)
      stw       r3, 0xC(r29)
      stw       r31, 0x10(r29)
      stw       r3, 0x14(r29)
      bne-      .loc_0xF0
      addi      r3, r28, 0
      addi      r5, r28, 0xC
      li        r4, 0x86
      crclr     6, 0x6
      bl        -0x308798

    .loc_0xF0:
      cmplwi    r30, 0
      beq-      .loc_0x14C
      lwz       r3, 0x8(r29)
      li        r5, 0x20
      lwz       r4, -0x77D4(r13)
      bl        -0x30EDA8
      stw       r3, 0xC(r29)
      lwz       r0, 0xC(r29)
      cmplwi    r0, 0
      bne-      .loc_0x12C
      addi      r3, r28, 0
      addi      r5, r28, 0xC
      li        r4, 0x8A
      crclr     6, 0x6
      bl        -0x3087D4

    .loc_0x12C:
      lwz       r0, 0x8(r29)
      cmplwi    r0, 0
      bne-      .loc_0x14C
      addi      r3, r28, 0
      addi      r5, r28, 0xC
      li        r4, 0x8B
      crclr     6, 0x6
      bl        -0x3087F4

    .loc_0x14C:
      stw       r29, 0x28(r31)

    .loc_0x150:
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r31)
      lwz       r0, 0x70(r31)
      cmplwi    r0, 0
      bne-      .loc_0x188
      addi      r3, r28, 0
      addi      r5, r28, 0xC
      li        r4, 0x357
      crclr     6, 0x6
      bl        -0x308830

    .loc_0x188:
      li        r28, 0
      b         .loc_0x1BC

    .loc_0x190:
      mr        r3, r31
      mr        r4, r28
      lwz       r12, 0x10(r31)
      lwz       r5, 0x70(r31)
      lwz       r12, 0x48(r12)
      mtctr     r12
      bctrl
      rlwinm    r4,r28,2,22,29
      addi      r28, r28, 0x1
      addi      r0, r4, 0x74
      stwx      r3, r31, r0

    .loc_0x1BC:
      rlwinm    r0,r28,0,24,31
      cmplwi    r0, 0x10
      blt+      .loc_0x190
      li        r0, 0x1
      stb       r0, 0xB4(r31)
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
 * Address:	80332EDC
 * Size:	000154
 */
void PSSystem::DirectedBgm::startSeq(void)
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
      lis       r3, 0x8049
      subi      r30, r3, 0x7B8
      addi      r3, r29, 0x50
      bl        -0x24339C
      bl        -0x281E6C
      cmplwi    r3, 0
      bne-      .loc_0x4C
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x192
      crclr     6, 0x6
      bl        -0x3088E4

    .loc_0x4C:
      bl        -0x281E8C
      lwz       r4, 0x14(r29)
      bl        -0x318154
      mr.       r31, r3
      bne-      .loc_0x78
      lwz       r6, 0x14(r29)
      addi      r3, r30, 0
      addi      r5, r30, 0x8C
      li        r4, 0x194
      crclr     6, 0x6
      bl        -0x308910

    .loc_0x78:
      mr        r3, r29
      lhz       r31, 0x0(r31)
      lwz       r12, 0x10(r29)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      or        r31, r31, r3
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r5, r31
      addi      r8, r29, 0x18
      li        r4, 0
      li        r6, 0
      li        r7, 0
      bl        -0x280100
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      bne-      .loc_0xF0
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x216
      crclr     6, 0x6
      bl        -0x308988

    .loc_0xF0:
      lwz       r31, 0x0(r31)
      cmplwi    r31, 0
      bne-      .loc_0x110
      addi      r3, r30, 0
      addi      r5, r30, 0x9C
      li        r4, 0x21A
      crclr     6, 0x6
      bl        -0x3089A8

    .loc_0x110:
      stw       r29, 0x6A4(r31)
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r0, r31, 0x30C
      addi      r3, r29, 0x50
      stw       r0, 0x4C(r29)
      bl        -0x2433CC
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
 * Address:	80333030
 * Size:	0000F0
 */
void PSSystem::DirectedBgm::stopSeq((unsigned long))
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
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0xD4
      li        r31, 0
      b         .loc_0x64

    .loc_0x44:
      rlwinm    r3,r31,2,22,29
      addi      r0, r3, 0x74
      lwzx      r3, r29, r0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x1

    .loc_0x64:
      rlwinm    r0,r31,0,24,31
      cmplwi    r0, 0x10
      blt+      .loc_0x44
      lwz       r3, 0x70(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r29)
      cmplwi    r3, 0
      beq-      .loc_0x98
      mr        r4, r29
      bl        0x10B04

    .loc_0x98:
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xD4
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      lwz       r12, 0x10(r3)
      mr        r4, r30
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0xD4:
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
 * Address:	80333120
 * Size:	00002C
 */
void PSSystem::DirectedBgm::onPlayingFrame(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x6C(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1C
      bl        0x10A28

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8033314C
 * Size:	00002C
 */
void PSSystem::SeqTrackRoot_JumpBgm::onBeatTop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x3C
      lwz       r3, 0x2C4(r3)
      bl        .loc_0x2C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x2C:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void PSSystem::JumpBgmPort::__ct((PSSystem::JumpBgmSeq*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80333178
 * Size:	0000B8
 */
void PSSystem::JumpBgmPort::onBeatTop((PSSystem::BeatMgr&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lbz       r0, 0x0(r4)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x64
      lhz       r31, 0x34(r30)
      cmplwi    r31, 0xFFFF
      beq-      .loc_0x64
      addi      r3, r30, 0x54
      bl        -0x243644
      sth       r31, 0x6C(r30)
      addi      r3, r30, 0x54
      bl        -0x243574
      addi      r3, r30, 0x1C
      bl        -0x243658
      lis       r4, 0x1
      addi      r3, r30, 0x1C
      subi      r0, r4, 0x1
      sth       r0, 0x34(r30)
      bl        -0x243590
      b         .loc_0xA0

    .loc_0x64:
      lhz       r31, 0x18(r30)
      cmplwi    r31, 0xFFFF
      beq-      .loc_0xA0
      addi      r3, r30, 0x54
      bl        -0x243684
      sth       r31, 0x6C(r30)
      addi      r3, r30, 0x54
      bl        -0x2435B4
      mr        r3, r30
      bl        -0x243698
      lis       r4, 0x1
      mr        r3, r30
      subi      r0, r4, 0x1
      sth       r0, 0x18(r30)
      bl        -0x2435D0

    .loc_0xA0:
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
 * Size:	000048
 */
void PSSystem::JumpBgmPort::requestQuickly((unsigned short))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void PSSystem::JumpBgmPort::requestOnBeat((unsigned short))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void PSSystem::JumpBgmPort::requestEveryBeat((unsigned short))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void PSSystem::JumpBgmPort::output(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80333230
 * Size:	000190
 */
void PSSystem::JumpBgmSeq::__ct((char const*, JAInter::SoundInfo const&,
                                 PSSystem::DirectorMgrBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r29, r4
      mr        r30, r5
      mr        r4, r26
      mr        r31, r6
      mr        r27, r4
      mr        r28, r4
      bl        -0x30CAA4
      lis       r3, 0x804E
      lis       r5, 0x804E
      subi      r0, r3, 0x598C
      lis       r4, 0x804E
      stw       r0, 0x10(r28)
      li        r10, 0
      lis       r3, 0x804E
      lwz       r8, 0x0(r30)
      stw       r10, 0x14(r28)
      subi      r7, r5, 0x5948
      lwz       r0, 0x4(r30)
      subi      r6, r4, 0x5930
      stw       r8, 0x18(r28)
      subi      r5, r3, 0x593C
      lwz       r9, 0x8(r30)
      li        r4, 0x4
      stw       r0, 0x1C(r28)
      li        r0, 0x26
      lwz       r8, 0xC(r30)
      addi      r3, r28, 0x50
      stw       r9, 0x20(r28)
      stw       r8, 0x24(r28)
      stw       r10, 0x28(r28)
      stw       r7, 0x2C(r28)
      sth       r10, 0x30(r28)
      stw       r6, 0x2C(r28)
      stw       r28, 0x34(r28)
      stw       r7, 0x38(r28)
      sth       r10, 0x3C(r28)
      stw       r5, 0x38(r28)
      stw       r28, 0x40(r28)
      stw       r4, 0x44(r28)
      stb       r0, 0x48(r28)
      stw       r10, 0x4C(r28)
      bl        -0x2437B8
      cmplwi    r29, 0
      beq-      .loc_0xE4
      mr        r3, r29
      bl        -0x2689E8
      addi      r3, r3, 0x1
      bl        -0x30F354
      stw       r3, 0x14(r28)
      mr        r4, r29
      lwz       r3, 0x14(r28)
      bl        -0x268AB8

    .loc_0xE4:
      lis       r3, 0x804E
      lis       r4, 0x804E
      subi      r0, r3, 0x59D0
      lis       r3, 0x804E
      stw       r0, 0x10(r27)
      li        r5, 0
      subi      r4, r4, 0x5AA4
      subi      r0, r3, 0x5B74
      stw       r5, 0x68(r27)
      addi      r3, r26, 0xB8
      stw       r4, 0x10(r27)
      stw       r31, 0x6C(r27)
      stw       r5, 0x70(r27)
      stb       r5, 0xB4(r27)
      stw       r0, 0x10(r26)
      bl        -0x243820
      lis       r4, 0x1
      addi      r3, r26, 0xD4
      subi      r0, r4, 0x1
      sth       r0, 0xD0(r26)
      bl        -0x243834
      lis       r4, 0x1
      addi      r3, r26, 0xF0
      subi      r0, r4, 0x1
      sth       r0, 0xEC(r26)
      bl        -0x243848
      li        r0, 0
      addi      r3, r26, 0x10C
      sth       r0, 0x108(r26)
      bl        -0x243858
      lis       r3, 0x1
      li        r0, 0
      subi      r4, r3, 0x1
      mr        r3, r26
      sth       r4, 0x124(r26)
      stw       r26, 0x128(r26)
      stw       r0, 0x12C(r26)
      sth       r0, 0x130(r26)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803333C0
 * Size:	000080
 */
void PSSystem::JumpBgmSeq::newSeqTrackRoot(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x2C8
      bl        -0x30F538
      mr.       r31, r3
      beq-      .loc_0x40
      bl        0xEF24
      lis       r3, 0x804E
      addi      r0, r30, 0xB8
      subi      r3, r3, 0x5AC0
      stw       r3, 0x0(r31)
      stw       r0, 0x2C4(r31)

    .loc_0x40:
      cmplwi    r31, 0
      bne-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x4BB
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x308DE0

    .loc_0x64:
      lwz       r0, 0x14(r1)
      mr        r3, r31
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
 * Size:	000420
 */
void PSSystem::SeqTrackRoot::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80333440
 * Size:	000170
 */
void PSSystem::JumpBgmSeq::startSeq(void)
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
      lis       r3, 0x8049
      subi      r30, r3, 0x7B8
      addi      r3, r29, 0x50
      bl        -0x243900
      bl        -0x2823D0
      cmplwi    r3, 0
      bne-      .loc_0x4C
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x192
      crclr     6, 0x6
      bl        -0x308E48

    .loc_0x4C:
      bl        -0x2823F0
      lwz       r4, 0x14(r29)
      bl        -0x3186B8
      mr.       r31, r3
      bne-      .loc_0x78
      lwz       r6, 0x14(r29)
      addi      r3, r30, 0
      addi      r5, r30, 0x8C
      li        r4, 0x194
      crclr     6, 0x6
      bl        -0x308E74

    .loc_0x78:
      mr        r3, r29
      lhz       r31, 0x0(r31)
      lwz       r12, 0x10(r29)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      or        r31, r31, r3
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r5, r31
      addi      r8, r29, 0x18
      li        r4, 0
      li        r6, 0
      li        r7, 0
      bl        -0x280664
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      bne-      .loc_0xF0
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x216
      crclr     6, 0x6
      bl        -0x308EEC

    .loc_0xF0:
      lwz       r31, 0x0(r31)
      cmplwi    r31, 0
      bne-      .loc_0x110
      addi      r3, r30, 0
      addi      r5, r30, 0x9C
      li        r4, 0x21A
      crclr     6, 0x6
      bl        -0x308F0C

    .loc_0x110:
      stw       r29, 0x6A4(r31)
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r0, r31, 0x30C
      addi      r3, r29, 0x50
      stw       r0, 0x4C(r29)
      bl        -0x243930
      addi      r30, r29, 0xF0
      mr        r3, r30
      bl        -0x243A18
      li        r0, 0
      mr        r3, r30
      sth       r0, 0x108(r29)
      bl        -0x24394C
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
 * Address:	803335B0
 * Size:	000178
 */
void PSSystem::JumpBgmSeq::startSeq((unsigned short))
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
      stw       r28, 0x10(r1)
      mr        r28, r3
      lis       r3, 0x8049
      subi      r30, r3, 0x7B8
      addi      r3, r28, 0x50
      bl        -0x243A78
      bl        -0x282548
      cmplwi    r3, 0
      bne-      .loc_0x54
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x192
      crclr     6, 0x6
      bl        -0x308FC0

    .loc_0x54:
      bl        -0x282568
      lwz       r4, 0x14(r28)
      bl        -0x318830
      mr.       r31, r3
      bne-      .loc_0x80
      lwz       r6, 0x14(r28)
      addi      r3, r30, 0
      addi      r5, r30, 0x8C
      li        r4, 0x194
      crclr     6, 0x6
      bl        -0x308FEC

    .loc_0x80:
      mr        r3, r28
      lhz       r31, 0x0(r31)
      lwz       r12, 0x10(r28)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      or        r31, r31, r3
      mr        r3, r28
      lwz       r12, 0x10(r28)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r5, r31
      addi      r8, r28, 0x18
      li        r4, 0
      li        r6, 0
      li        r7, 0
      bl        -0x2807DC
      mr        r3, r28
      lwz       r12, 0x10(r28)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      bne-      .loc_0xF8
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x216
      crclr     6, 0x6
      bl        -0x309064

    .loc_0xF8:
      lwz       r31, 0x0(r31)
      cmplwi    r31, 0
      bne-      .loc_0x118
      addi      r3, r30, 0
      addi      r5, r30, 0x9C
      li        r4, 0x21A
      crclr     6, 0x6
      bl        -0x309084

    .loc_0x118:
      stw       r28, 0x6A4(r31)
      mr        r3, r28
      lwz       r12, 0x10(r28)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r0, r31, 0x30C
      addi      r3, r28, 0x50
      stw       r0, 0x4C(r28)
      bl        -0x243AA8
      addi      r30, r28, 0xF0
      mr        r3, r30
      bl        -0x243B90
      sth       r29, 0x108(r28)
      mr        r3, r30
      bl        -0x243AC0
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
 * Address:	80333728
 * Size:	000060
 */
void PSSystem::JumpBgmSeq::requestJumpBgmQuickly((unsigned short))
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
      lwz       r0, 0x12C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      addi      r31, r29, 0x10C
      mr        r3, r31
      bl        -0x243BF4
      sth       r30, 0x124(r29)
      mr        r3, r31
      bl        -0x243B24

    .loc_0x44:
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
 * Address:	80333788
 * Size:	000060
 */
void PSSystem::JumpBgmSeq::requestJumpBgmOnBeat((unsigned short))
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
      lwz       r0, 0x12C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      addi      r31, r29, 0xD4
      mr        r3, r31
      bl        -0x243C54
      sth       r30, 0xEC(r29)
      mr        r3, r31
      bl        -0x243B84

    .loc_0x44:
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
 * Address:	803337E8
 * Size:	000054
 */
void PSSystem::JumpBgmSeq::requestJumpBgmEveryBeat((unsigned short))
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
      lwz       r0, 0x12C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      addi      r3, r30, 0xB8
      bl        -0x243CAC
      sth       r31, 0xD0(r30)
      addi      r3, r30, 0xB8
      bl        -0x243BDC

    .loc_0x3C:
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
 * Address:	8033383C
 * Size:	00004C
 */
void PSSystem::JumpBgmSeq::onPlayingFrame(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x6C(r3)
      cmplwi    r3, 0
      beq-      .loc_0x24
      bl        0x10304

    .loc_0x24:
      lwz       r3, 0x12C(r31)
      cmplwi    r3, 0
      beq-      .loc_0x38
      subi      r0, r3, 0x1
      stw       r0, 0x12C(r31)

    .loc_0x38:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80333888
 * Size:	0000C8
 */
void PSSystem::JumpBgmSeq::outputJumpRequest(void)
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
      lhz       r31, 0x124(r3)
      cmplwi    r31, 0xFFFF
      beq-      .loc_0x9C
      addi      r30, r29, 0x10C
      mr        r3, r30
      bl        -0x243D50
      lis       r4, 0x1
      mr        r3, r30
      subi      r0, r4, 0x1
      sth       r0, 0x124(r29)
      bl        -0x243C88
      addi      r30, r29, 0xF0
      mr        r3, r30
      bl        -0x243D70
      sth       r31, 0x108(r29)
      mr        r3, r30
      bl        -0x243CA0
      lwz       r0, 0x128(r29)
      cmplwi    r0, 0
      bne-      .loc_0x88
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x7B8
      li        r4, 0x495
      subi      r5, r5, 0x7AC
      crclr     6, 0x6
      bl        -0x3092CC

    .loc_0x88:
      lwz       r4, 0x128(r29)
      lwz       r3, 0x6C(r4)
      cmplwi    r3, 0
      beq-      .loc_0x9C
      bl        0x102A8

    .loc_0x9C:
      cmplwi    r31, 0xFFFF
      beq-      .loc_0xA8
      sth       r31, 0x130(r29)

    .loc_0xA8:
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	80333950
 * Size:	000040
 */
void PSSystem::JumpBgmSeq::getSeqStartPoint(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r12, 0x10(r3)
      lhz       r31, 0x108(r3)
      lwz       r12, 0x60(r12)
      mr        r4, r31
      mtctr     r12
      bctrl
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
 * Address:	80333990
 * Size:	000014
 */
void PSSystem::JumpBgmSeq::setAvoidJumpTimer_Checked((unsigned long))
{
    /*
    .loc_0x0:
      lwz       r0, 0x12C(r3)
      cmplwi    r0, 0
      bnelr-
      stw       r4, 0x12C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803339A4
 * Size:	000060
 */
void PSSystem::SeqMgr::isPlaying(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x0(r3)
      b         .loc_0x40

    .loc_0x18:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3C
      li        r3, 0x1
      b         .loc_0x4C

    .loc_0x3C:
      lwz       r31, 0xC(r31)

    .loc_0x40:
      cmplwi    r31, 0
      bne+      .loc_0x18
      li        r3, 0

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80333A04
 * Size:	0000C8
 */
void PSSystem::SeqMgr::__dt(void)
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
      stw       r28, 0x10(r1)
      mr.       r28, r3
      beq-      .loc_0xA4
      lis       r3, 0x804E
      subi      r0, r3, 0x5B80
      stw       r0, 0xC(r28)
      bl        -0x244E00
      lwz       r30, 0x0(r28)
      b         .loc_0x74

    .loc_0x40:
      lwz       r31, 0xC(r30)
      mr        r3, r28
      mr        r4, r30
      bl        -0x30CE2C
      lwz       r3, 0x0(r30)
      cmplwi    r3, 0
      beq-      .loc_0x70
      lwz       r12, 0x10(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x70:
      mr        r30, r31

    .loc_0x74:
      cmplwi    r30, 0
      bne+      .loc_0x40
      bl        -0x244E34
      cmplwi    r28, 0
      beq-      .loc_0x94
      mr        r3, r28
      li        r4, 0
      bl        -0x30D22C

    .loc_0x94:
      extsh.    r0, r29
      ble-      .loc_0xA4
      mr        r3, r28
      bl        -0x30F9F0

    .loc_0xA4:
      lwz       r0, 0x24(r1)
      mr        r3, r28
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
 * Address:	80333ACC
 * Size:	00005C
 */
void PSSystem::SeqMgr::pauseOnAllSeq((PSSystem::SeqBase::PauseMode))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0x0(r3)
      b         .loc_0x3C

    .loc_0x20:
      lwz       r3, 0x0(r31)
      mr        r4, r30
      lwz       r12, 0x10(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xC(r31)

    .loc_0x3C:
      cmplwi    r31, 0
      bne+      .loc_0x20
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
 * Address:	80333B28
 * Size:	00004C
 */
void PSSystem::SeqMgr::pauseOffAllSeq(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x0(r3)
      b         .loc_0x30

    .loc_0x18:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xC(r31)

    .loc_0x30:
      cmplwi    r31, 0
      bne+      .loc_0x18
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80333B74
 * Size:	000024
 */
void PSSystem::SeqMgr::reservePauseOffAllSeq(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x0(r3)
      li        r0, 0x1
      b         .loc_0x18

    .loc_0xC:
      lwz       r3, 0x0(r4)
      sth       r0, 0x3C(r3)
      lwz       r4, 0xC(r4)

    .loc_0x18:
      cmplwi    r4, 0
      bne+      .loc_0xC
      blr
    */
}

/*
 * --INFO--
 * Address:	80333B98
 * Size:	000024
 */
void PSSystem::SeqMgr::cancelPauseOffAllSeq(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x0(r3)
      li        r0, 0
      b         .loc_0x18

    .loc_0xC:
      lwz       r3, 0x0(r4)
      sth       r0, 0x3C(r3)
      lwz       r4, 0xC(r4)

    .loc_0x18:
      cmplwi    r4, 0
      bne+      .loc_0xC
      blr
    */
}

/*
 * --INFO--
 * Address:	80333BBC
 * Size:	000080
 */
void PSSystem::SeqMgr::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x0(r3)
      b         .loc_0x64

    .loc_0x18:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x60
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl

    .loc_0x60:
      lwz       r31, 0xC(r31)

    .loc_0x64:
      cmplwi    r31, 0
      bne+      .loc_0x18
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80333C3C
 * Size:	00005C
 */
void PSSystem::SeqMgr::stopAllSound((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0x0(r3)
      b         .loc_0x3C

    .loc_0x20:
      lwz       r3, 0x0(r31)
      mr        r4, r30
      lwz       r12, 0x10(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xC(r31)

    .loc_0x3C:
      cmplwi    r31, 0
      bne+      .loc_0x20
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
 * Address:	80333C98
 * Size:	00005C
 */
void PSSystem::SeqMgr::scene1st((PSSystem::TaskChecker*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0x0(r3)
      b         .loc_0x3C

    .loc_0x20:
      lwz       r3, 0x0(r31)
      mr        r4, r30
      lwz       r12, 0x10(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xC(r31)

    .loc_0x3C:
      cmplwi    r31, 0
      bne+      .loc_0x20
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
 * Address:	80333CF4
 * Size:	0000E8
 */
void PSSystem::SeqMgr::findSeq((JASTrack*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0x0(r3)
      b         .loc_0xC4

    .loc_0x20:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x1
      beq-      .loc_0xC0
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xC0
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0xC0
      addi      r4, r3, 0x30C
      cmplw     r4, r30
      bne-      .loc_0x8C
      lwz       r3, 0x0(r31)
      b         .loc_0xD0

    .loc_0x8C:
      li        r5, 0
      b         .loc_0xB4

    .loc_0x94:
      rlwinm    r3,r5,2,22,29
      addi      r0, r3, 0x2FC
      lwzx      r0, r4, r0
      cmplw     r0, r30
      bne-      .loc_0xB0
      lwz       r3, 0x0(r31)
      b         .loc_0xD0

    .loc_0xB0:
      addi      r5, r5, 0x1

    .loc_0xB4:
      rlwinm    r0,r5,0,24,31
      cmplwi    r0, 0x10
      blt+      .loc_0x94

    .loc_0xC0:
      lwz       r31, 0xC(r31)

    .loc_0xC4:
      cmplwi    r31, 0
      bne+      .loc_0x20
      li        r3, 0

    .loc_0xD0:
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
 * Address:	80333DDC
 * Size:	000080
 */
void PSSystem::SeqMgr::getPlayingSeq((JASTrack*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r31, 0x0(r3)
      b         .loc_0x5C

    .loc_0x20:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x1
      beq-      .loc_0x58
      lwz       r3, 0x0(r31)
      lwz       r0, 0x4C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x58
      cmplw     r0, r30
      bne-      .loc_0x58
      b         .loc_0x68

    .loc_0x58:
      lwz       r31, 0xC(r31)

    .loc_0x5C:
      cmplwi    r31, 0
      bne+      .loc_0x20
      li        r3, 0

    .loc_0x68:
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
 * Address:	80333E5C
 * Size:	00001C
 */
void PSSystem::SeqMgr::getFirstSeq(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x14
      lwz       r3, 0x0(r3)
      blr

    .loc_0x14:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80333E78
 * Size:	000024
 */
void PSSystem::SeqMgr::getFirstSeqA(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      bl        .loc_0x24
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x24:
    */
}

/*
 * --INFO--
 * Address:	80333E9C
 * Size:	000034
 */
void PSSystem::SeqMgr::getSeq((unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x30D1D4
      cmplwi    r3, 0
      bne-      .loc_0x20
      li        r3, 0
      b         .loc_0x24

    .loc_0x20:
      lwz       r3, 0x0(r3)

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80333ED0
 * Size:	0000E0
 */
void PSSystem::JumpBgmSeq::__dt(void)
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
      beq-      .loc_0xC4
      lis       r4, 0x804E
      subi      r0, r4, 0x5B74
      stw       r0, 0x10(r30)
      beq-      .loc_0xB4
      lis       r4, 0x804E
      subi      r0, r4, 0x5AA4
      stw       r0, 0x10(r30)
      beq-      .loc_0xB4
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x59D0
      stw       r0, 0x10(r30)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0xB4
      lis       r3, 0x804E
      subi      r0, r3, 0x598C
      stw       r0, 0x10(r30)
      lwz       r3, 0x28(r30)
      cmplwi    r3, 0
      beq-      .loc_0x98
      beq-      .loc_0x98
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x98:
      lwz       r3, 0x14(r30)
      bl        -0x30FE94
      cmplwi    r30, 0
      beq-      .loc_0xB4
      mr        r3, r30
      li        r4, 0
      bl        -0x30D7B0

    .loc_0xB4:
      extsh.    r0, r31
      ble-      .loc_0xC4
      mr        r3, r30
      bl        -0x30FEDC

    .loc_0xC4:
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
 * Address:	80333FB0
 * Size:	000050
 */
void __dt__Q28PSSystem39SingletonBase<PSSystem::SeqDataList> Fv(void)
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
      subi      r4, r5, 0x56F0
      li        r0, 0
      stw       r4, 0x0(r31)
      stw       r0, -0x6E34(r13)
      ble-      .loc_0x38
      bl        -0x30FF30

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
 * Address:	80334000
 * Size:	000050
 */
void __dt__Q28PSSystem42SingletonBase<PSSystem::StreamDataList> Fv(void)
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
      subi      r4, r5, 0x5718
      li        r0, 0
      stw       r4, 0x0(r31)
      stw       r0, -0x6E30(r13)
      ble-      .loc_0x38
      bl        -0x30FF80

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
 * Address:	80334050
 * Size:	000008
 */
void @28 @PSSystem::SeqDataList::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x32D4
    */
}

/*
 * --INFO--
 * Address:	80334058
 * Size:	000008
 */
void @28 @PSSystem::StreamDataList::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x30EC
    */
}

/*
 * --INFO--
 * Address:	80334060
 * Size:	000008
 */
void @1696 @PSSystem::SeqSound::stopInner((unsigned long))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x6A0
      b         -0x2EC8
    */
}

/*
 * --INFO--
 * Address:	80334068
 * Size:	000008
 */
void @472 @PSSystem::StreamSound::stopInner((unsigned long))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1D8
      b         -0x2EB0
    */
}

/*
 * --INFO--
 * Address:	80334070
 * Size:	000004
 */
void PSSystem::SeqBase::seqLoadAfter(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80334074
 * Size:	000008
 */
void PSSystem::BgmSeq::getHandleP(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x68
      blr
    */
}

/*
 * --INFO--
 * Address:	8033407C
 * Size:	0000D0
 */
void PSSystem::DirectedBgm::__dt(void)
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
      beq-      .loc_0xB4
      lis       r4, 0x804E
      subi      r0, r4, 0x5AA4
      stw       r0, 0x10(r30)
      beq-      .loc_0xA4
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x59D0
      stw       r0, 0x10(r30)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0xA4
      lis       r3, 0x804E
      subi      r0, r3, 0x598C
      stw       r0, 0x10(r30)
      lwz       r3, 0x28(r30)
      cmplwi    r3, 0
      beq-      .loc_0x88
      beq-      .loc_0x88
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x88:
      lwz       r3, 0x14(r30)
      bl        -0x310030
      cmplwi    r30, 0
      beq-      .loc_0xA4
      mr        r3, r30
      li        r4, 0
      bl        -0x30D94C

    .loc_0xA4:
      extsh.    r0, r31
      ble-      .loc_0xB4
      mr        r3, r30
      bl        -0x310078

    .loc_0xB4:
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
 * Address:	8033414C
 * Size:	000004
 */
void PSSystem::JumpBgmSeq::onJump((unsigned short))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80334150
 * Size:	000008
 */
void PSSystem::JumpBgmSeq::getCastType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4
      blr
    */
}

/*
 * --INFO--
 * Address:	80334158
 * Size:	000008
 */
void PSSystem::BgmSeq::getSeqType(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8000
      blr
    */
}

/*
 * --INFO--
 * Address:	80334160
 * Size:	000008
 */
void PSSystem::DirectedBgm::getCastType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2
      blr
    */
}

/*
 * --INFO--
 * Address:	80334168
 * Size:	00000C
 */
void PSSystem::SeSeq::getSeqType(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8000
      addi      r3, r3, 0x800
      blr
    */
}

/*
 * --INFO--
 * Address:	80334174
 * Size:	000008
 */
void PSSystem::SeSeq::getCastType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x5
      blr
    */
}

/*
 * --INFO--
 * Address:	8033417C
 * Size:	000008
 */
void PSSystem::SeSeq::getHandleP(void)
{
    /*
    .loc_0x0:
      subi      r3, r13, 0x7420
      blr
    */
}

/*
 * --INFO--
 * Address:	80334184
 * Size:	000008
 */
void PSSystem::StreamBgm::getHandleP(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x6C
      blr
    */
}

/*
 * --INFO--
 * Address:	8033418C
 * Size:	000004
 */
void PSSystem::StreamBgm::scene1st((PSSystem::TaskChecker*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80334190
 * Size:	000008
 */
void PSSystem::StreamBgm::getSeqType(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80334198
 * Size:	000008
 */
void PSSystem::StreamBgm::getCastType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	803341A0
 * Size:	000008
 */
void PSSystem::BgmSeq::getCastType(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803341A8
 * Size:	000008
 */
void PSSystem::StreamDataList::read((Stream&))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803341B0
 * Size:	000008
 */
void PSSystem::SeqDataList::read((Stream&))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803341B8
 * Size:	00001C
 */
void PSSystem::TriangleTableModTask::getTgtWithTable((unsigned char))
{
    /*
    .loc_0x0:
      lis       r5, 0x8049
      rlwinm    r0,r4,2,22,29
      subi      r4, r5, 0xB0
      lfs       f1, 0x1C(r3)
      lfsx      f0, r4, r0
      fmuls     f1, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	803341D4
 * Size:	000008
 */
void PSSystem::TriangleTableModTask::getTableIdxNum(void)
{
    /*
    .loc_0x0:
      li        r3, 0x28
      blr
    */
}

/*
 * --INFO--
 * Address:	803341DC
 * Size:	000034
 */
void PSSystem::PitchResetTask::task((JASTrack&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      lfs       f1, -0x2C0(r2)
      stw       r0, 0x14(r1)
      li        r4, 0x1
      li        r5, -0x1
      bl        -0x293400
      lwz       r0, 0x14(r1)
      li        r3, -0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80334210
 * Size:	000008
 */
void PSSystem::FlagWaitTask::task((JASTrack&))
{
    /*
    .loc_0x0:
      lwz       r3, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80334218
 * Size:	00000C
 */
void PSSystem::BankRandTask::timeTask((JASTrack&, float))
{
    /*
    .loc_0x0:
      lwz       r3, -0x6788(r13)
      stfs      f1, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80334224
 * Size:	00000C
 */
void PSSystem::BankRandTask::getPreParam((JASTrack&))
{
    /*
    .loc_0x0:
      lwz       r3, -0x6788(r13)
      lfs       f1, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80334230
 * Size:	000038
 */
void PSSystem::SeqTrackRoot::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x3C
      bl        0xE060
      mr        r3, r31
      bl        0xE084
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
