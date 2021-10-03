

/*
 * --INFO--
 * Address:	800ADBA4
 * Size:	000008
 */
void JAInter::InitData::setWsInitCallback((void (*)(unsigned long*)))
{
    /*
    .loc_0x0:
      stw       r3, -0x7E00(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	800ADBAC
 * Size:	000008
 */
void JAInter::InitData::setBnkInitCallback((void (*)(unsigned long*)))
{
    /*
    .loc_0x0:
      stw       r3, -0x7DFC(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	800ADBB4
 * Size:	0000E4
 */
void JAInter::InitData::checkInitDataFile(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      bl        -0xA4
      bl        0xB318
      cmpwi     r3, 0
      bne-      .loc_0x9C
      bl        -0xB4
      bl        0x1CD34
      mr        r31, r3
      bl        -0xA0
      bl        0x1CD28
      mr        r4, r3
      addi      r0, r31, 0x1
      lwz       r3, -0x7548(r13)
      add       r4, r4, r0
      li        r5, 0
      bl        -0x8A5C0
      mr        r30, r3
      bl        -0xE4
      mr        r31, r3
      bl        -0xCC
      mr        r5, r3
      mr        r3, r30
      mr        r6, r31
      subi      r4, r2, 0x7420
      li        r7, 0
      crclr     6, 0x6
      bl        0x1980C
      mr        r3, r30
      bl        -0x25C
      bl        -0x114
      bl        0xB2A8
      cmpwi     r3, 0
      bne-      .loc_0x9C
      li        r3, 0
      b         .loc_0xCC

    .loc_0x9C:
      bl        -0x12C
      subi      r4, r13, 0x7438
      bl        -0x9A0
      lwz       r0, -0x7438(r13)
      cmplwi    r0, 0
      beq-      .loc_0xC8
      bl        .loc_0xE4
      subi      r3, r13, 0x7438
      bl        -0x8D4
      li        r3, 0x1
      b         .loc_0xCC

    .loc_0xC8:
      li        r3, 0

    .loc_0xCC:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0xE4:
    */
}

/*
 * --INFO--
 * Address:	800ADC98
 * Size:	000264
 */
void JAInter::InitData::checkInitDataOnMemory(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      stw       r0, 0x8(r1)
      b         .loc_0x230

    .loc_0x2C:
      lwz       r3, 0x8(r1)
      lwz       r5, -0x7438(r13)
      addi      r4, r3, 0x1
      rlwinm    r0,r3,2,0,29
      stw       r4, 0x8(r1)
      lwzx      r0, r5, r0
      cmplwi    r0, 0x8
      bgt-      .loc_0x214
      lis       r3, 0x804A
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x62A0
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r31, 0
      b         .loc_0x230
      addi      r6, r4, 0x1
      rlwinm    r4,r4,2,0,29
      stw       r6, 0x8(r1)
      addi      r3, r6, 0x1
      rlwinm    r0,r6,2,0,29
      lwzx      r4, r5, r4
      stw       r3, 0x8(r1)
      add       r3, r5, r4
      lwzx      r29, r5, r0
      mr        r4, r29
      bl        -0xB68
      mr        r4, r29
      bl        0x9718
      lwz       r3, 0x8(r1)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r1)
      b         .loc_0x230
      lwz       r12, -0x7DFC(r13)
      addi      r3, r1, 0x8
      mtctr     r12
      bctrl
      b         .loc_0x230
      lwz       r12, -0x7E00(r13)
      addi      r3, r1, 0x8
      mtctr     r12
      bctrl
      b         .loc_0x230
      addi      r0, r4, 0x3
      stw       r0, 0x8(r1)
      b         .loc_0x230
      rlwinm    r0,r4,2,0,29
      li        r4, 0x8
      add       r3, r5, r0
      bl        -0xBC4
      lwz       r0, 0x8(r1)
      lwz       r5, -0x7438(r13)
      rlwinm    r0,r0,2,0,29
      stw       r3, -0x73AC(r13)
      add       r3, r5, r0
      lwz       r0, 0x0(r3)
      lwz       r4, 0x4(r3)
      add       r3, r5, r0
      bl        -0xBE8
      lwz       r4, -0x73AC(r13)
      stw       r3, 0x0(r4)
      lwz       r4, -0x73AC(r13)
      lwz       r3, 0x8(r1)
      lwz       r4, 0x0(r4)
      addi      r0, r3, 0x3
      stw       r4, -0x73B4(r13)
      stw       r0, 0x8(r1)
      b         .loc_0x230
      rlwinm    r0,r4,2,0,29
      add       r3, r5, r0
      lwz       r0, 0x0(r3)
      lwz       r4, 0x4(r3)
      add       r3, r5, r0
      bl        -0xC24
      mr        r30, r3
      lwz       r3, 0x0(r3)
      bl        -0x490
      lwz       r3, -0x7498(r13)
      addi      r0, r30, 0x4
      li        r28, 0
      li        r29, 0
      stw       r0, 0x1C(r3)
      b         .loc_0x194

    .loc_0x178:
      lwz       r3, -0x7498(r13)
      addi      r28, r28, 0x1
      lwz       r3, 0x1C(r3)
      lwzx      r0, r3, r29
      add       r0, r0, r30
      stwx      r0, r3, r29
      addi      r29, r29, 0x4

    .loc_0x194:
      bl        -0x398
      cmplw     r28, r3
      blt+      .loc_0x178
      lwz       r3, 0x8(r1)
      addi      r0, r3, 0x3
      stw       r0, 0x8(r1)
      b         .loc_0x230
      rlwinm    r0,r4,2,0,29
      add       r3, r5, r0
      lwz       r0, 0x0(r3)
      lwz       r4, 0x4(r3)
      add       r3, r5, r0
      bl        -0xC98
      lwz       r4, 0x8(r1)
      stw       r3, -0x7460(r13)
      addi      r0, r4, 0x3
      stw       r0, 0x8(r1)
      b         .loc_0x230
      rlwinm    r0,r4,2,0,29
      add       r4, r5, r0
      lwz       r0, 0x4(r4)
      lwz       r3, 0x0(r4)
      rlwinm    r4,r0,0,16,27
      add       r3, r5, r3
      addi      r4, r4, 0x10
      bl        -0xCCC
      lwz       r4, -0x7498(r13)
      stw       r3, 0x18(r4)
      lwz       r3, 0x8(r1)
      addi      r0, r3, 0x3
      stw       r0, 0x8(r1)
      b         .loc_0x230

    .loc_0x214:
      lwz       r4, 0x8(r1)
      addi      r3, r4, 0x1
      rlwinm    r0,r4,2,0,29
      stw       r3, 0x8(r1)
      lwzx      r0, r5, r0
      cmplwi    r0, 0
      bne+      .loc_0x214

    .loc_0x230:
      cmplwi    r31, 0
      bne+      .loc_0x2C
      lwz       r12, -0x7EB8(r13)
      mtctr     r12
      bctrl
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
 * Address:	800ADEFC
 * Size:	0000CC
 */
void JAInter::InitData::initBnkList((unsigned long*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r6, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x0(r3)
      lwz       r5, -0x7438(r13)
      rlwinm    r4,r0,2,0,29
      add       r3, r5, r4
      b         .loc_0x3C

    .loc_0x34:
      addi      r4, r4, 0xC
      addi      r6, r6, 0x3

    .loc_0x3C:
      lwzx      r0, r5, r4
      cmplwi    r0, 0
      bne+      .loc_0x34
      lis       r4, 0xAAAB
      subi      r0, r4, 0x5555
      mulhwu    r0, r0, r6
      rlwinm    r0,r0,31,1,31
      mulli     r4, r0, 0xC
      addi      r4, r4, 0x4
      bl        -0xD98
      stw       r3, -0x74B0(r13)
      b         .loc_0x94

    .loc_0x6C:
      rlwinm    r0,r31,0,24,31
      lwz       r4, -0x74B0(r13)
      mulli     r3, r0, 0xC
      addi      r31, r31, 0x1
      lwzx      r0, r4, r3
      add       r0, r5, r0
      stwx      r0, r4, r3
      lwz       r3, 0x0(r30)
      addi      r0, r3, 0x3
      stw       r0, 0x0(r30)

    .loc_0x94:
      lwz       r3, 0x0(r30)
      lwz       r5, -0x7438(r13)
      rlwinm    r0,r3,2,0,29
      lwzx      r0, r5, r0
      cmplwi    r0, 0
      bne+      .loc_0x6C
      addi      r0, r3, 0x1
      stw       r0, 0x0(r30)
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
 * Address:	800ADFC8
 * Size:	0000D8
 */
void JAInter::InitData::initWsList((unsigned long*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r6, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x0(r3)
      lwz       r5, -0x7438(r13)
      rlwinm    r4,r0,2,0,29
      add       r3, r5, r4
      b         .loc_0x3C

    .loc_0x34:
      addi      r4, r4, 0xC
      addi      r6, r6, 0x3

    .loc_0x3C:
      lwzx      r0, r5, r4
      cmplwi    r0, 0
      bne+      .loc_0x34
      lis       r4, 0xAAAB
      subi      r0, r4, 0x5555
      mulhwu    r0, r0, r6
      rlwinm    r0,r0,31,1,31
      mulli     r4, r0, 0xC
      addi      r4, r4, 0x4
      bl        -0xE64
      stw       r3, -0x74AC(r13)
      b         .loc_0xA0

    .loc_0x6C:
      rlwinm    r0,r31,0,24,31
      lwz       r4, -0x74AC(r13)
      mulli     r3, r0, 0xC
      addi      r31, r31, 0x1
      lwzx      r0, r4, r3
      add       r0, r5, r0
      stwx      r0, r4, r3
      lwz       r3, -0x74A0(r13)
      addi      r0, r3, 0x1
      stw       r0, -0x74A0(r13)
      lwz       r3, 0x0(r30)
      addi      r0, r3, 0x3
      stw       r0, 0x0(r30)

    .loc_0xA0:
      lwz       r3, 0x0(r30)
      lwz       r5, -0x7438(r13)
      rlwinm    r0,r3,2,0,29
      lwzx      r0, r5, r0
      cmplwi    r0, 0
      bne+      .loc_0x6C
      addi      r0, r3, 0x1
      stw       r0, 0x0(r30)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
