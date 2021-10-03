

/*
 * --INFO--
 * Address:	8001C934
 * Size:	000060
 */
void JKRDecomp::create(long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x7888(r13)
      cmplwi    r0, 0
      bne-      .loc_0x48
      lwz       r4, -0x77D8(r13)
      li        r3, 0x7C
      li        r5, 0
      bl        0x75E0
      mr.       r0, r3
      beq-      .loc_0x44
      mr        r4, r31
      bl        .loc_0x60
      mr        r0, r3

    .loc_0x44:
      stw       r0, -0x7888(r13)

    .loc_0x48:
      lwz       r0, 0x14(r1)
      lwz       r3, -0x7888(r13)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x60:
    */
}

/*
 * --INFO--
 * Address:	8001C994
 * Size:	000050
 */
void JKRDecomp::JKRDecomp(long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r4
      li        r4, 0x4000
      stw       r0, 0x14(r1)
      li        r5, 0x10
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x8C84
      lis       r3, 0x804A
      subi      r0, r3, 0x2B8
      stw       r0, 0x0(r31)
      lwz       r3, 0x2C(r31)
      bl        0xD5B2C
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
 * Address:	8001C9E4
 * Size:	000060
 */
void JKRDecomp::~JKRDecomp()
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
      lis       r5, 0x804A
      li        r4, 0
      subi      r0, r5, 0x2B8
      stw       r0, 0x0(r30)
      bl        0x8E24
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        0x7690

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
 * Address:	8001CA44
 * Size:	0000C8
 */
void JKRDecomp::run()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r3, 0x804A
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      subi      r3, r3, 0x2D8
      li        r5, 0x4
      subi      r4, r4, 0x2E8
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      bl        0xD2A50
      lis       r3, 0x804A
      subi      r31, r3, 0x2D8

    .loc_0x34:
      mr        r3, r31
      addi      r4, r1, 0x8
      li        r5, 0x1
      bl        0xD2B60
      lwz       r30, 0x8(r1)
      lwz       r3, 0x4(r30)
      lwz       r4, 0x8(r30)
      lwz       r5, 0xC(r30)
      lwz       r6, 0x10(r30)
      bl        0x140
      lwz       r0, 0x20(r30)
      cmpwi     r0, 0
      beq-      .loc_0x7C
      cmpwi     r0, 0x1
      bne+      .loc_0x34
      lwz       r3, 0x24(r30)
      bl        -0x2FE0
      b         .loc_0x34

    .loc_0x7C:
      lwz       r12, 0x14(r30)
      cmplwi    r12, 0
      beq-      .loc_0x98
      mr        r3, r30
      mtctr     r12
      bctrl
      b         .loc_0x34

    .loc_0x98:
      lwz       r3, 0x1C(r30)
      cmplwi    r3, 0
      beq-      .loc_0xB4
      li        r4, 0x1
      li        r5, 0
      bl        0xD2A2C
      b         .loc_0x34

    .loc_0xB4:
      addi      r3, r30, 0x28
      li        r4, 0x1
      li        r5, 0
      bl        0xD2A18
      b         .loc_0x34
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JKRDecomp::prepareCommand(unsigned char*, unsigned char*, unsigned long,
                               unsigned long, void (*)(unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001CB0C
 * Size:	000030
 */
void JKRDecomp::sendCommand(JKRDecompCommand*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x804A
      mr        r4, r3
      stw       r0, 0x14(r1)
      subi      r3, r5, 0x2D8
      li        r5, 0x1
      bl        0xD29F4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JKRDecomp::orderAsync(unsigned char*, unsigned char*, unsigned long,
                           unsigned long, void (*)(unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JKRDecomp::sync(JKRDecompCommand*, int)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001CB3C
 * Size:	0000A0
 */
void JKRDecomp::orderSync(unsigned char*, unsigned char*, unsigned long,
                          unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r28, r4
      mr        r27, r3
      mr        r29, r5
      mr        r30, r6
      li        r3, 0x4C
      li        r5, -0x4
      lwz       r4, -0x77D8(r13)
      bl        0x73D8
      mr.       r31, r3
      beq-      .loc_0x40
      bl        0x3CC
      mr        r31, r3

    .loc_0x40:
      stw       r27, 0x4(r31)
      lis       r3, 0x804A
      li        r0, 0
      mr        r4, r31
      stw       r28, 0x8(r31)
      subi      r3, r3, 0x2D8
      li        r5, 0x1
      stw       r29, 0xC(r31)
      stw       r30, 0x10(r31)
      stw       r0, 0x14(r31)
      bl        0xD2978
      addi      r3, r31, 0x28
      addi      r4, r1, 0x8
      li        r5, 0x1
      bl        0xD2A30
      mr        r3, r31
      li        r4, 0x1
      bl        0x3D0
      lmw       r27, 0x1C(r1)
      li        r3, 0x1
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8001CBDC
 * Size:	00008C
 */
void JKRDecomp::decode(unsigned char*, unsigned char*, unsigned long,
                       unsigned long)
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
      bl        0x2E8
      cmpwi     r3, 0x1
      bne-      .loc_0x50
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      mr        r6, r31
      bl        .loc_0x8C
      b         .loc_0x6C

    .loc_0x50:
      cmpwi     r3, 0x2
      bne-      .loc_0x6C
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      mr        r6, r31
      bl        0x1C8

    .loc_0x6C:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x8C:
    */
}

/*
 * --INFO--
 * Address:	8001CC68
 * Size:	0001A4
 */
void JKRDecomp::decodeSZP(unsigned char*, unsigned char*, unsigned long,
                          unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      cmplwi    r5, 0
      stmw      r27, 0xC(r1)
      lbz       r7, 0x9(r3)
      lbz       r8, 0x5(r3)
      lbz       r0, 0xD(r3)
      rlwinm    r9,r7,16,0,15
      lbz       r10, 0x8(r3)
      rlwinm    r29,r8,16,0,15
      lbz       r28, 0x4(r3)
      rlwinm    r7,r0,16,0,15
      lbz       r0, 0xC(r3)
      rlwimi    r9,r10,24,0,7
      lbz       r12, 0xA(r3)
      rlwimi    r29,r28,24,0,7
      lbz       r30, 0x6(r3)
      rlwimi    r7,r0,24,0,7
      lbz       r8, 0xE(r3)
      rlwimi    r9,r12,8,16,23
      lbz       r28, 0xB(r3)
      rlwimi    r29,r30,8,16,23
      lbz       r0, 0x7(r3)
      rlwimi    r7,r8,8,16,23
      lbz       r10, 0xF(r3)
      or        r9, r28, r9
      or        r0, r0, r29
      li        r8, 0
      or        r12, r10, r7
      li        r10, 0
      li        r7, 0x10
      beq-      .loc_0x198
      cmplw     r6, r0
      bgt-      .loc_0x198
      mr        r31, r4
      add       r12, r3, r12

    .loc_0x8C:
      cmplwi    r10, 0
      bne-      .loc_0xC0
      add       r28, r3, r7
      li        r10, 0x20
      lbz       r11, 0x1(r28)
      addi      r7, r7, 0x4
      lbz       r29, 0x0(r28)
      lbz       r30, 0x2(r28)
      rlwinm    r11,r11,16,0,15
      rlwimi    r11,r29,24,0,7
      lbz       r28, 0x3(r28)
      rlwimi    r11,r30,8,16,23
      or        r11, r28, r11

    .loc_0xC0:
      rlwinm.   r29,r11,0,0,0
      beq-      .loc_0xF8
      cmplwi    r6, 0
      bne-      .loc_0xE4
      lbz       r29, 0x0(r12)
      subic.    r5, r5, 0x1
      stb       r29, 0x0(r31)
      bne-      .loc_0xE8
      b         .loc_0x198

    .loc_0xE4:
      subi      r6, r6, 0x1

    .loc_0xE8:
      addi      r8, r8, 0x1
      addi      r31, r31, 0x1
      addi      r12, r12, 0x1
      b         .loc_0x188

    .loc_0xF8:
      add       r28, r3, r9
      addi      r9, r9, 0x2
      lbz       r30, 0x0(r28)
      lbz       r29, 0x1(r28)
      rlwimi    r29,r30,8,16,23
      srawi.    r28, r29, 0xC
      rlwinm    r29,r29,0,20,31
      sub       r27, r8, r29
      bne-      .loc_0x12C
      lbz       r29, 0x0(r12)
      addi      r12, r12, 0x1
      addi      r29, r29, 0x12
      b         .loc_0x130

    .loc_0x12C:
      addi      r29, r28, 0x2

    .loc_0x130:
      sub       r28, r0, r8
      cmpw      r29, r28
      ble-      .loc_0x140
      mr        r29, r28

    .loc_0x140:
      add       r30, r4, r8
      mtctr     r29
      cmpwi     r29, 0
      ble-      .loc_0x188

    .loc_0x150:
      cmplwi    r6, 0
      bne-      .loc_0x170
      subi      r29, r27, 0x1
      subic.    r5, r5, 0x1
      lbzx      r29, r4, r29
      stb       r29, 0x0(r30)
      bne-      .loc_0x174
      b         .loc_0x198

    .loc_0x170:
      subi      r6, r6, 0x1

    .loc_0x174:
      addi      r8, r8, 0x1
      addi      r31, r31, 0x1
      addi      r30, r30, 0x1
      addi      r27, r27, 0x1
      bdnz+     .loc_0x150

    .loc_0x188:
      cmpw      r8, r0
      rlwinm    r11,r11,1,0,30
      subi      r10, r10, 0x1
      blt+      .loc_0x8C

    .loc_0x198:
      lmw       r27, 0xC(r1)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8001CE0C
 * Size:	0000E4
 */
void JKRDecomp::decodeSZS(unsigned char*, unsigned char*, unsigned long,
                          unsigned long)
{
    /*
    .loc_0x0:
      lwz       r0, 0x4(r3)
      cmplwi    r5, 0
      li        r10, 0
      add       r0, r4, r0
      sub       r8, r0, r6
      beqlr-
      lwz       r0, 0x0(r3)
      cmplw     r6, r0
      bgtlr-
      addi      r12, r3, 0x10

    .loc_0x28:
      cmpwi     r10, 0
      bne-      .loc_0x3C
      lbz       r11, 0x0(r12)
      li        r10, 0x8
      addi      r12, r12, 0x1

    .loc_0x3C:
      rlwinm.   r0,r11,0,24,24
      beq-      .loc_0x70
      cmplwi    r6, 0
      bne-      .loc_0x64
      lbz       r0, 0x0(r12)
      subic.    r5, r5, 0x1
      stb       r0, 0x0(r4)
      addi      r4, r4, 0x1
      bne-      .loc_0x68
      blr

    .loc_0x64:
      subi      r6, r6, 0x1

    .loc_0x68:
      addi      r12, r12, 0x1
      b         .loc_0xD0

    .loc_0x70:
      lbz       r3, 0x0(r12)
      lbz       r0, 0x1(r12)
      addi      r12, r12, 0x2
      srawi.    r7, r3, 0x4
      rlwimi    r0,r3,8,20,23
      sub       r9, r4, r0
      bne-      .loc_0x9C
      lbz       r3, 0x0(r12)
      addi      r12, r12, 0x1
      addi      r3, r3, 0x12
      b         .loc_0xA0

    .loc_0x9C:
      addi      r3, r7, 0x2

    .loc_0xA0:
      cmplwi    r6, 0
      bne-      .loc_0xC0
      lbz       r0, -0x1(r9)
      subic.    r5, r5, 0x1
      stb       r0, 0x0(r4)
      addi      r4, r4, 0x1
      bne-      .loc_0xC4
      blr

    .loc_0xC0:
      subi      r6, r6, 0x1

    .loc_0xC4:
      subic.    r3, r3, 0x1
      addi      r9, r9, 0x1
      bne+      .loc_0xA0

    .loc_0xD0:
      cmplw     r4, r8
      rlwinm    r11,r11,1,0,30
      subi      r10, r10, 0x1
      bne+      .loc_0x28
      blr
    */
}

/*
 * --INFO--
 * Address:	8001CEF0
 * Size:	000050
 */
void JKRDecomp::checkCompressed(unsigned char*)
{
    /*
    .loc_0x0:
      lbz       r0, 0x0(r3)
      cmpwi     r0, 0x59
      bne-      .loc_0x48
      lbz       r0, 0x1(r3)
      cmpwi     r0, 0x61
      bne-      .loc_0x48
      lbz       r0, 0x3(r3)
      cmpwi     r0, 0x30
      bne-      .loc_0x48
      lbz       r0, 0x2(r3)
      cmpwi     r0, 0x79
      bne-      .loc_0x38
      li        r3, 0x1
      blr

    .loc_0x38:
      cmpwi     r0, 0x7A
      bne-      .loc_0x48
      li        r3, 0x2
      blr

    .loc_0x48:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8001CF40
 * Size:	000050
 */
void JKRDecompCommand::JKRDecompCommand()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x28
      addi      r4, r31, 0x48
      bl        0xD255C
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x14(r31)
      stw       r0, 0x1C(r31)
      stw       r31, 0x18(r31)
      stw       r0, 0x20(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8001CF90
 * Size:	00003C
 */
void JKRDecompCommand::~JKRDecompCommand()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x24
      extsh.    r0, r4
      ble-      .loc_0x24
      bl        0x7104

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}