

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JKRDvdArchive::JKRDvdArchive()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001E57C
 * Size:	0000B0
 */
void JKRDvdArchive::JKRDvdArchive(long, JKRArchive::EMountDirection)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      li        r5, 0x3
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bl        -0x40E8
      lis       r4, 0x804A
      mr        r3, r29
      subi      r0, r4, 0x270
      mr        r4, r30
      stw       r0, 0x0(r29)
      stw       r31, 0x60(r29)
      bl        0x198
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x58
      mr        r3, r29
      b         .loc_0x94

    .loc_0x58:
      lis       r4, 0x5241
      lis       r3, 0x8050
      addi      r0, r4, 0x5243
      stw       r0, 0x2C(r29)
      addi      r4, r29, 0x18
      addi      r3, r3, 0x6E24
      lwz       r5, 0x48(r29)
      lwz       r6, 0x54(r29)
      lwz       r0, 0x4(r5)
      add       r0, r6, r0
      stw       r0, 0x28(r29)
      bl        0x839C
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0x30(r29)

    .loc_0x94:
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
 * Address:	8001E62C
 * Size:	00012C
 */
void JKRDvdArchive::~JKRDvdArchive()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr.       r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r28, r4
      beq-      .loc_0x108
      lis       r3, 0x804A
      subi      r0, r3, 0x270
      stw       r0, 0x0(r31)
      lbz       r0, 0x30(r31)
      cmplwi    r0, 0x1
      bne-      .loc_0xEC
      lwz       r0, 0x44(r31)
      cmplwi    r0, 0
      beq-      .loc_0x94
      lwz       r30, 0x4C(r31)
      li        r29, 0
      b         .loc_0x74

    .loc_0x58:
      lwz       r3, 0x10(r30)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      lwz       r4, 0x38(r31)
      bl        0x4FD8

    .loc_0x6C:
      addi      r30, r30, 0x14
      addi      r29, r29, 0x1

    .loc_0x74:
      lwz       r3, 0x44(r31)
      lwz       r0, 0x8(r3)
      cmplw     r29, r0
      blt+      .loc_0x58
      lwz       r4, 0x38(r31)
      bl        0x4FB8
      li        r0, 0
      stw       r0, 0x44(r31)

    .loc_0x94:
      lwz       r3, 0x50(r31)
      cmplwi    r3, 0
      beq-      .loc_0xB0
      li        r4, 0
      bl        0x4F9C
      li        r0, 0
      stw       r0, 0x50(r31)

    .loc_0xB0:
      lwz       r3, 0x68(r31)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      beq-      .loc_0xD4
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0xD4:
      lis       r3, 0x8050
      addi      r4, r31, 0x18
      addi      r3, r3, 0x6E24
      bl        0x8518
      li        r0, 0
      stb       r0, 0x30(r31)

    .loc_0xEC:
      mr        r3, r31
      li        r4, 0
      bl        -0x41BC
      extsh.    r0, r28
      ble-      .loc_0x108
      mr        r3, r31
      bl        0x5984

    .loc_0x108:
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	........
 * Size:	000048
 */
void JKRDvdArchive::fixedInit(long, JKRArchive::EMountDirection)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void JKRDvdArchive::mountFixed(long, JKRArchive::EMountDirection)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void JKRDvdArchive::mountFixed(const char*, JKRArchive::EMountDirection)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void JKRDvdArchive::unmountFixed()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001E758
 * Size:	0002AC
 */
void JKRDvdArchive::open(long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r28, 0x10(r1)
      mr        r28, r4
      stw       r0, 0x44(r3)
      li        r3, 0xF8
      stw       r0, 0x64(r29)
      stw       r0, 0x48(r29)
      stw       r0, 0x4C(r29)
      stw       r0, 0x54(r29)
      lwz       r4, -0x77D8(r13)
      bl        0x57A0
      mr.       r0, r3
      beq-      .loc_0x60
      mr        r4, r28
      bl        -0x15D4
      mr        r0, r3

    .loc_0x60:
      stw       r0, 0x68(r29)
      lwz       r0, 0x68(r29)
      cmplwi    r0, 0
      bne-      .loc_0x80
      li        r0, 0
      li        r3, 0
      stb       r0, 0x3C(r29)
      b         .loc_0x28C

    .loc_0x80:
      lwz       r3, -0x77D8(r13)
      li        r4, 0x20
      li        r5, 0x20
      bl        0x4E5C
      mr.       r30, r3
      bne-      .loc_0xA4
      li        r0, 0
      stb       r0, 0x3C(r29)
      b         .loc_0x23C

    .loc_0xA4:
      li        r0, 0
      mr        r3, r28
      stw       r0, 0x8(r1)
      mr        r4, r30
      addi      r10, r29, 0x5C
      li        r5, 0x1
      li        r6, 0x20
      li        r7, 0
      li        r8, 0x1
      li        r9, 0
      bl        0xA18
      mr        r3, r30
      li        r4, 0x20
      bl        0xCDEBC
      lwz       r0, 0x60(r29)
      li        r31, -0x20
      cmpwi     r0, 0x1
      bne-      .loc_0xF0
      li        r31, 0x20

    .loc_0xF0:
      lwz       r3, 0xC(r30)
      mr        r4, r31
      lwz       r5, 0x38(r29)
      bl        0x4D8C
      stw       r3, 0x44(r29)
      lwz       r4, 0x44(r29)
      cmplwi    r4, 0
      bne-      .loc_0x11C
      li        r0, 0
      stb       r0, 0x3C(r29)
      b         .loc_0x23C

    .loc_0x11C:
      li        r0, 0
      mr        r3, r28
      stw       r0, 0x8(r1)
      li        r5, 0x1
      li        r7, 0
      li        r8, 0x1
      lwz       r6, 0xC(r30)
      li        r9, 0x20
      li        r10, 0
      bl        0x9A4
      lwz       r3, 0x44(r29)
      lwz       r4, 0xC(r30)
      bl        0xCDE48
      lwz       r4, 0x44(r29)
      li        r0, 0
      li        r5, 0
      lwz       r3, 0x4(r4)
      add       r3, r4, r3
      stw       r3, 0x48(r29)
      lwz       r4, 0x44(r29)
      lwz       r3, 0xC(r4)
      add       r3, r4, r3
      stw       r3, 0x4C(r29)
      lwz       r4, 0x44(r29)
      lwz       r3, 0x14(r4)
      add       r3, r4, r3
      stw       r3, 0x54(r29)
      stw       r0, 0x50(r29)
      lwz       r3, 0x44(r29)
      lwz       r4, 0x4C(r29)
      lwz       r0, 0x8(r3)
      mtctr     r0
      cmplwi    r0, 0
      ble-      .loc_0x1C8

    .loc_0x1A4:
      lwz       r3, 0x4(r4)
      rlwinm.   r0,r3,8,31,31
      rlwinm    r3,r3,8,24,31
      beq-      .loc_0x1C0
      rlwinm    r0,r3,0,29,29
      or        r0, r5, r0
      rlwinm    r5,r0,0,24,31

    .loc_0x1C0:
      addi      r4, r4, 0x14
      bdnz+     .loc_0x1A4

    .loc_0x1C8:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x22C
      mr        r3, r31
      bl        0xA7824
      lwz       r4, 0x44(r29)
      lwz       r5, 0x38(r29)
      lwz       r0, 0x8(r4)
      mr        r4, r3
      rlwinm    r3,r0,2,0,29
      bl        0x4C9C
      stw       r3, 0x50(r29)
      lwz       r3, 0x50(r29)
      cmplwi    r3, 0
      bne-      .loc_0x218
      lwz       r3, -0x77D8(r13)
      lwz       r4, 0x44(r29)
      bl        0x4D54
      li        r0, 0
      stb       r0, 0x3C(r29)
      b         .loc_0x23C

    .loc_0x218:
      lwz       r5, 0x44(r29)
      li        r4, 0
      lwz       r0, 0x8(r5)
      rlwinm    r5,r0,2,0,29
      bl        -0x198CC

    .loc_0x22C:
      lwz       r3, 0x8(r30)
      lwz       r0, 0xC(r30)
      add       r0, r3, r0
      stw       r0, 0x64(r29)

    .loc_0x23C:
      cmplwi    r30, 0
      beq-      .loc_0x250
      lwz       r3, -0x77D8(r13)
      mr        r4, r30
      bl        0x4D10

    .loc_0x250:
      lbz       r0, 0x3C(r29)
      cmplwi    r0, 0
      bne-      .loc_0x288
      lwz       r3, 0x68(r29)
      cmplwi    r3, 0
      beq-      .loc_0x280
      beq-      .loc_0x280
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x280:
      li        r3, 0
      b         .loc_0x28C

    .loc_0x288:
      li        r3, 0x1

    .loc_0x28C:
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
 * Address:	8001EA04
 * Size:	000128
 */
void JKRDvdArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr.       r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      bne-      .loc_0x30
      addi      r30, r1, 0xC

    .loc_0x30:
      lwz       r3, 0x4(r29)
      rlwinm.   r0,r3,8,29,29
      rlwinm    r3,r3,8,24,31
      bne-      .loc_0x48
      li        r31, 0
      b         .loc_0x5C

    .loc_0x48:
      rlwinm.   r0,r3,0,24,24
      beq-      .loc_0x58
      li        r31, 0x2
      b         .loc_0x5C

    .loc_0x58:
      li        r31, 0x1

    .loc_0x5C:
      lwz       r0, 0x10(r29)
      cmplwi    r0, 0
      bne-      .loc_0xD4
      lwz       r4, 0x64(r28)
      mr        r7, r31
      lwz       r0, 0x8(r29)
      addi      r9, r1, 0x8
      lwz       r3, 0x40(r28)
      lwz       r5, 0xC(r29)
      add       r4, r4, r0
      lwz       r6, 0x38(r28)
      lwz       r8, 0x5C(r28)
      bl        0x398
      cmplwi    r3, 0
      stw       r3, 0x0(r30)
      bne-      .loc_0xA4
      li        r3, 0
      b         .loc_0x108

    .loc_0xA4:
      lwz       r0, 0x8(r1)
      cmpwi     r31, 0x2
      stw       r0, 0x10(r29)
      bne-      .loc_0x104
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      lwz       r5, 0x0(r30)
      lwz       r12, 0x48(r12)
      mtctr     r12
      bctrl
      b         .loc_0x104

    .loc_0xD4:
      cmpwi     r31, 0x2
      bne-      .loc_0xFC
      mr        r3, r28
      mr        r4, r29
      lwz       r12, 0x0(r28)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x0(r30)
      b         .loc_0x104

    .loc_0xFC:
      lwz       r0, 0xC(r29)
      stw       r0, 0x0(r30)

    .loc_0x104:
      lwz       r3, 0x10(r29)

    .loc_0x108:
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
 * Address:	8001EB2C
 * Size:	0000FC
 */
void JKRDvdArchive::fetchResource(void*, unsigned long,
                                  JKRArchive::SDIFileEntry*, unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      mr        r9, r3
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r29, r6
      mr        r27, r4
      mr        r28, r5
      mr        r30, r7
      lwz       r3, 0x4(r6)
      lwz       r6, 0xC(r6)
      rlwinm.   r0,r3,8,29,29
      mr        r31, r6
      rlwinm    r0,r3,8,24,31
      bne-      .loc_0x44
      li        r8, 0
      b         .loc_0x58

    .loc_0x44:
      rlwinm.   r0,r0,0,24,24
      beq-      .loc_0x54
      li        r8, 0x2
      b         .loc_0x58

    .loc_0x54:
      li        r8, 0x1

    .loc_0x58:
      lwz       r0, 0x10(r29)
      cmplwi    r0, 0
      bne-      .loc_0x90
      lwz       r4, 0x64(r9)
      mr        r5, r6
      lwz       r0, 0x8(r29)
      mr        r6, r27
      lwz       r3, 0x40(r9)
      rlwinm    r7,r28,0,0,26
      lwz       r9, 0x5C(r9)
      add       r4, r4, r0
      bl        .loc_0xFC
      mr        r31, r3
      b         .loc_0xD8

    .loc_0x90:
      cmpwi     r8, 0x2
      bne-      .loc_0xBC
      mr        r3, r9
      mr        r4, r29
      lwz       r12, 0x0(r9)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xBC
      mr        r31, r3

    .loc_0xBC:
      cmplw     r31, r28
      ble-      .loc_0xC8
      mr        r31, r28

    .loc_0xC8:
      lwz       r4, 0x10(r29)
      mr        r3, r27
      mr        r5, r31
      bl        0x51C4

    .loc_0xD8:
      cmplwi    r30, 0
      beq-      .loc_0xE4
      stw       r31, 0x0(r30)

    .loc_0xE4:
      mr        r3, r27
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xFC:
    */
}

/*
 * --INFO--
 * Address:	8001EC28
 * Size:	000200
 */
void JKRDvdArchive::fetchResource_subroutine(long, unsigned long, unsigned long,
                                             unsigned char*, unsigned long, int,
                                             int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      cmpwi     r9, 0x1
      stw       r0, 0x74(r1)
      stmw      r26, 0x58(r1)
      mr        r26, r5
      addi      r0, r26, 0x1F
      lis       r5, 0x8047
      mr        r30, r4
      mr        r29, r3
      mr        r31, r6
      addi      r4, r5, 0x3630
      rlwinm    r28,r0,0,0,26
      rlwinm    r27,r7,0,0,26
      beq-      .loc_0x1B8
      bge-      .loc_0x4C
      cmpwi     r9, 0
      bge-      .loc_0x58
      b         .loc_0x1D4

    .loc_0x4C:
      cmpwi     r9, 0x3
      bge-      .loc_0x1D4
      b         .loc_0x16C

    .loc_0x58:
      cmpwi     r8, 0
      beq-      .loc_0x70
      blt-      .loc_0x16C
      cmpwi     r8, 0x3
      bge-      .loc_0x16C
      b         .loc_0xBC

    .loc_0x70:
      cmplw     r28, r27
      ble-      .loc_0x7C
      mr        r28, r27

    .loc_0x7C:
      li        r0, 0
      mr        r3, r29
      stw       r0, 0x8(r1)
      mr        r4, r31
      mr        r6, r28
      mr        r9, r30
      li        r5, 0
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x570
      mr        r3, r31
      mr        r4, r28
      bl        0xCDA14
      mr        r3, r28
      b         .loc_0x1EC

    .loc_0xBC:
      addi      r4, r1, 0x2F
      li        r0, 0
      rlwinm    r28,r4,0,0,26
      stw       r0, 0x8(r1)
      mr        r4, r28
      mr        r9, r30
      li        r5, 0x2
      li        r6, 0x20
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x52C
      mr        r3, r28
      li        r4, 0x20
      bl        0xCD9D0
      lbz       r0, 0x5(r28)
      lbz       r3, 0x4(r28)
      rlwinm    r0,r0,16,0,15
      lbz       r4, 0x6(r28)
      rlwimi    r0,r3,24,0,7
      lbz       r5, 0x7(r28)
      rlwimi    r0,r4,8,16,23
      or        r28, r5, r0
      addi      r0, r28, 0x1F
      rlwinm    r26,r0,0,0,26
      cmplw     r26, r27
      ble-      .loc_0x12C
      mr        r26, r27

    .loc_0x12C:
      li        r0, 0
      mr        r3, r29
      stw       r0, 0x8(r1)
      mr        r4, r31
      mr        r6, r26
      mr        r9, r30
      li        r5, 0x1
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x4C0
      mr        r3, r31
      mr        r4, r26
      bl        0xCD964
      mr        r3, r28
      b         .loc_0x1EC

    .loc_0x16C:
      cmplw     r26, r27
      ble-      .loc_0x178
      mr        r26, r27

    .loc_0x178:
      li        r0, 0
      mr        r3, r29
      stw       r0, 0x8(r1)
      mr        r4, r31
      mr        r6, r26
      mr        r9, r30
      li        r5, 0x1
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x474
      mr        r3, r31
      mr        r4, r26
      bl        0xCD918
      mr        r3, r26
      b         .loc_0x1EC

    .loc_0x1B8:
      addi      r3, r4, 0
      addi      r5, r4, 0x14
      li        r4, 0x289
      crclr     6, 0x6
      bl        0xCE97C
      li        r3, 0
      b         .loc_0x1EC

    .loc_0x1D4:
      addi      r3, r4, 0
      addi      r5, r4, 0x3C
      li        r4, 0x28F
      crclr     6, 0x6
      bl        0xCE960
      li        r3, 0

    .loc_0x1EC:
      lmw       r26, 0x58(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8001EE28
 * Size:	00021C
 */
void JKRDvdArchive::fetchResource_subroutine(long, unsigned long, unsigned long,
                                             JKRHeap*, int, int,
                                             unsigned char**)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      cmpwi     r8, 0x1
      stw       r0, 0x74(r1)
      stmw      r26, 0x58(r1)
      mr        r26, r5
      addi      r0, r26, 0x1F
      lis       r5, 0x8047
      mr        r30, r4
      mr        r29, r3
      mr        r28, r6
      mr        r31, r9
      addi      r4, r5, 0x3630
      rlwinm    r27,r0,0,0,26
      beq-      .loc_0x1D4
      bge-      .loc_0x4C
      cmpwi     r8, 0
      bge-      .loc_0x58
      b         .loc_0x1F0

    .loc_0x4C:
      cmpwi     r8, 0x3
      bge-      .loc_0x1F0
      b         .loc_0x17C

    .loc_0x58:
      cmpwi     r7, 0
      beq-      .loc_0x70
      blt-      .loc_0x17C
      cmpwi     r7, 0x3
      bge-      .loc_0x17C
      b         .loc_0xC8

    .loc_0x70:
      mr        r3, r27
      mr        r5, r28
      li        r4, 0x20
      bl        0x473C
      li        r0, 0
      mr        r28, r3
      stw       r0, 0x8(r1)
      mr        r3, r29
      mr        r4, r28
      mr        r6, r27
      mr        r9, r30
      li        r5, 0
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x368
      mr        r3, r28
      mr        r4, r27
      bl        0xCD80C
      stw       r28, 0x0(r31)
      mr        r3, r27
      b         .loc_0x208

    .loc_0xC8:
      addi      r4, r1, 0x2F
      li        r0, 0
      rlwinm    r27,r4,0,0,26
      stw       r0, 0x8(r1)
      mr        r4, r27
      mr        r9, r30
      li        r5, 0x2
      li        r6, 0x20
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x320
      mr        r3, r27
      li        r4, 0x20
      bl        0xCD7C4
      lbz       r0, 0x5(r27)
      mr        r5, r28
      lbz       r3, 0x4(r27)
      li        r4, 0x20
      rlwinm    r0,r0,16,0,15
      lbz       r6, 0x6(r27)
      rlwimi    r0,r3,24,0,7
      lbz       r7, 0x7(r27)
      rlwimi    r0,r6,8,16,23
      or        r28, r7, r0
      mr        r3, r28
      bl        0x4688
      li        r0, 0
      mr        r27, r3
      stw       r0, 0x8(r1)
      mr        r3, r29
      mr        r4, r27
      mr        r6, r28
      mr        r9, r30
      li        r5, 0x1
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x2B4
      mr        r3, r27
      mr        r4, r28
      bl        0xCD758
      stw       r27, 0x0(r31)
      mr        r3, r28
      b         .loc_0x208

    .loc_0x17C:
      mr        r3, r27
      mr        r5, r28
      li        r4, 0x20
      bl        0x4630
      li        r0, 0
      mr        r28, r3
      stw       r0, 0x8(r1)
      mr        r3, r29
      mr        r4, r28
      mr        r6, r26
      mr        r9, r30
      li        r5, 0x1
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x25C
      mr        r3, r28
      mr        r4, r26
      bl        0xCD700
      stw       r28, 0x0(r31)
      mr        r3, r27
      b         .loc_0x208

    .loc_0x1D4:
      addi      r3, r4, 0
      addi      r5, r4, 0x14
      li        r4, 0x2F4
      crclr     6, 0x6
      bl        0xCE760
      li        r3, 0
      b         .loc_0x208

    .loc_0x1F0:
      addi      r3, r4, 0
      addi      r5, r4, 0x3C
      li        r4, 0x2F9
      crclr     6, 0x6
      bl        0xCE744
      li        r3, 0

    .loc_0x208:
      lmw       r26, 0x58(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8001F044
 * Size:	000144
 */
void JKRDvdArchive::getExpandedResSize(const void*) const
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      lwz       r0, 0x50(r3)
      stw       r31, 0x5C(r1)
      cmplwi    r0, 0
      stw       r30, 0x58(r1)
      mr        r30, r4
      stw       r29, 0x54(r1)
      mr        r29, r3
      bne-      .loc_0x40
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      b         .loc_0x128

    .loc_0x40:
      bl        -0x4204
      mr.       r31, r3
      bne-      .loc_0x54
      li        r3, -0x1
      b         .loc_0x128

    .loc_0x54:
      lwz       r0, 0x4(r31)
      rlwinm.   r0,r0,8,29,29
      bne-      .loc_0x7C
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      b         .loc_0x128

    .loc_0x7C:
      mr        r3, r29
      mr        r4, r31
      lwz       r12, 0x0(r29)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xA0
      b         .loc_0x128

    .loc_0xA0:
      li        r0, 0
      addi      r3, r1, 0x2F
      stw       r0, 0x8(r1)
      rlwinm    r30,r3,0,0,26
      lwz       r7, 0x64(r29)
      mr        r4, r30
      lwz       r0, 0x8(r31)
      li        r5, 0x2
      lwz       r3, 0x40(r29)
      li        r6, 0x20
      add       r9, r7, r0
      li        r7, 0
      li        r8, 0x1
      li        r10, 0
      bl        0x120
      mr        r3, r30
      li        r4, 0x20
      bl        0xCD5C4
      lbz       r0, 0x5(r30)
      mr        r4, r31
      lwz       r12, 0x0(r29)
      mr        r3, r29
      lbz       r5, 0x4(r30)
      rlwinm    r0,r0,16,0,15
      lbz       r6, 0x6(r30)
      rlwimi    r0,r5,24,0,7
      lbz       r5, 0x7(r30)
      rlwimi    r0,r6,8,16,23
      lwz       r12, 0x48(r12)
      or        r31, r5, r0
      mr        r5, r31
      mtctr     r12
      bctrl
      mr        r3, r31

    .loc_0x128:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}