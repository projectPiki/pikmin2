

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void JUTDirectFile::fetch32byte()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002982C
 * Size:	000024
 */
void JUTDirectFile::JUTDirectFile()
{
    /*
    .loc_0x0:
      li        r4, 0
      addi      r0, r3, 0x1F
      stw       r4, 0x828(r3)
      rlwinm    r0,r0,0,0,26
      stw       r4, 0x82C(r3)
      stw       r4, 0x824(r3)
      stw       r0, 0x820(r3)
      stb       r4, 0x830(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80029850
 * Size:	000044
 */
void JUTDirectFile::~JUTDirectFile()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x2C
      li        r5, 0
      extsh.    r0, r4
      stb       r5, 0x830(r31)
      ble-      .loc_0x2C
      bl        -0x57C4

    .loc_0x2C:
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
 * Address:	80029894
 * Size:	0000A8
 */
void JUTDirectFile::fopen(const char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr.       r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x2C
      li        r3, 0
      b         .loc_0x8C

    .loc_0x2C:
      bl        0xC538C
      mr        r0, r3
      mr        r3, r30
      mr        r30, r0
      addi      r4, r29, 0x834
      bl        0xB2BF8
      mr        r31, r3
      mr        r3, r30
      bl        0xC5380
      cmpwi     r31, 0
      bne-      .loc_0x68
      li        r0, 0
      li        r3, 0
      stb       r0, 0x830(r29)
      b         .loc_0x8C

    .loc_0x68:
      bl        0xC5350
      lwz       r0, 0x868(r29)
      stw       r0, 0x828(r29)
      bl        0xC5358
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x82C(r29)
      li        r3, 0x1
      stb       r0, 0x830(r29)

    .loc_0x8C:
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
 * Size:	000270
 */
void JUTDirectFile::fread(void*, unsigned long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002993C
 * Size:	000060
 */
void JUTDirectFile::fclose()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lbz       r0, 0x830(r3)
      cmplwi    r0, 0
      beq-      .loc_0x48
      bl        0xC52EC
      mr        r0, r3
      addi      r3, r30, 0x834
      mr        r31, r0
      bl        0xB2C24
      mr        r3, r31
      bl        0xC52E8
      li        r0, 0
      stb       r0, 0x830(r30)

    .loc_0x48:
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
 * Size:	00003C
 */
void JUTDirectFile::setPos(unsigned long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void JUTDirectFile::fgetc()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002999C
 * Size:	000230
 */
void JUTDirectFile::fgets(void*, int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r27, r3
      mr        r28, r5
      lbz       r0, 0x830(r3)
      cmplwi    r0, 0
      bne-      .loc_0x2C
      li        r3, -0x1
      b         .loc_0x21C

    .loc_0x2C:
      cmpwi     r28, 0
      bne-      .loc_0x3C
      li        r3, 0
      b         .loc_0x21C

    .loc_0x3C:
      cmpwi     r28, 0x1
      bne-      .loc_0x4C
      li        r3, 0x1
      b         .loc_0x21C

    .loc_0x4C:
      cmplwi    r4, 0
      bne-      .loc_0x5C
      li        r3, -0x1
      b         .loc_0x21C

    .loc_0x5C:
      lwz       r3, 0x82C(r27)
      lwz       r0, 0x828(r27)
      cmplw     r3, r0
      blt-      .loc_0x74
      li        r3, -0x1
      b         .loc_0x21C

    .loc_0x74:
      mr        r30, r4
      subi      r31, r28, 0x1
      li        r29, 0
      b         .loc_0x1F0

    .loc_0x84:
      lwz       r0, 0x824(r27)
      cmplwi    r0, 0
      bne-      .loc_0x130
      rlwinm    r0,r3,0,0,26
      sub       r0, r4, r0
      stw       r0, 0x824(r27)
      lwz       r0, 0x824(r27)
      cmplwi    r0, 0x800
      ble-      .loc_0xB0
      li        r0, 0x800
      stw       r0, 0x824(r27)

    .loc_0xB0:
      bl        0xC5200
      lwz       r4, 0x824(r27)
      mr        r25, r3
      lwz       r0, 0x82C(r27)
      addi      r3, r27, 0x834
      addi      r5, r4, 0x1F
      lwz       r4, 0x820(r27)
      rlwinm    r6,r0,0,0,26
      li        r7, 0
      rlwinm    r5,r5,0,0,26
      li        r8, 0x2
      bl        0xB2F18
      mr        r26, r3
      mr        r3, r25
      bl        0xC51DC
      cmpwi     r26, 0
      bne-      .loc_0xFC
      li        r0, -0x1
      b         .loc_0x120

    .loc_0xFC:
      bl        0xC51B4
      mr        r25, r3

    .loc_0x104:
      addi      r3, r27, 0x834
      bl        0xB52C0
      cmpwi     r3, 0
      bne+      .loc_0x104
      mr        r3, r25
      bl        0xC51AC
      lwz       r0, 0x824(r27)

    .loc_0x120:
      cmpwi     r0, 0
      bge-      .loc_0x130
      li        r3, -0x1
      b         .loc_0x21C

    .loc_0x130:
      lwz       r3, 0x82C(r27)
      lwz       r0, 0x824(r27)
      rlwinm    r4,r3,0,21,31
      sub       r5, r0, r4
      add       r0, r29, r5
      cmplw     r0, r31
      ble-      .loc_0x154
      sub       r3, r28, r29
      subi      r5, r3, 0x1

    .loc_0x154:
      li        r6, 0
      li        r7, 0
      mtctr     r5
      cmplwi    r5, 0
      ble-      .loc_0x198

    .loc_0x168:
      lwz       r3, 0x820(r27)
      lbzx      r0, r3, r4
      addi      r4, r4, 0x1
      cmpwi     r0, 0xA
      stb       r0, 0x0(r30)
      addi      r30, r30, 0x1
      bne-      .loc_0x190
      addi      r5, r7, 0x1
      li        r6, 0x1
      b         .loc_0x198

    .loc_0x190:
      addi      r7, r7, 0x1
      bdnz+     .loc_0x168

    .loc_0x198:
      cmplwi    r4, 0x800
      blt-      .loc_0x1A8
      li        r0, 0
      stw       r0, 0x824(r27)

    .loc_0x1A8:
      cmpwi     r6, 0x1
      bne-      .loc_0x1CC
      li        r0, 0
      add       r29, r29, r5
      stb       r0, 0x0(r30)
      lwz       r0, 0x82C(r27)
      add       r0, r0, r5
      stw       r0, 0x82C(r27)
      b         .loc_0x200

    .loc_0x1CC:
      lwz       r0, 0x82C(r27)
      add       r29, r29, r5
      cmpw      r29, r31
      add       r0, r0, r5
      stw       r0, 0x82C(r27)
      blt-      .loc_0x1F0
      li        r0, 0
      stb       r0, 0x0(r30)
      b         .loc_0x200

    .loc_0x1F0:
      lwz       r3, 0x82C(r27)
      lwz       r4, 0x828(r27)
      cmplw     r3, r4
      blt+      .loc_0x84

    .loc_0x200:
      lwz       r3, 0x82C(r27)
      lwz       r0, 0x828(r27)
      cmplw     r3, r0
      blt-      .loc_0x218
      li        r0, 0
      stb       r0, 0x0(r30)

    .loc_0x218:
      mr        r3, r29

    .loc_0x21C:
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}