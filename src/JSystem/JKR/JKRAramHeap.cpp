

/*
 * --INFO--
 * Address:	800196C8
 * Size:	0000D8
 */
void JKRAramHeap::JKRAramHeap(unsigned long, unsigned long)
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
      bl        0x38E0
      lis       r4, 0x804A
      addi      r3, r29, 0x18
      subi      r0, r4, 0x3D8
      stw       r0, 0x0(r29)
      bl        0xD6430
      mr        r3, r29
      bl        0xA1EC
      stw       r3, 0x30(r29)
      rlwinm    r4,r31,0,0,26
      addi      r3, r30, 0x1F
      li        r0, 0xFF
      stw       r4, 0x3C(r29)
      rlwinm    r4,r3,0,0,26
      li        r3, 0x24
      li        r5, 0
      stw       r4, 0x34(r29)
      lwz       r6, 0x34(r29)
      lwz       r4, 0x3C(r29)
      add       r4, r6, r4
      stw       r4, 0x38(r29)
      stb       r0, 0x40(r29)
      lwz       r4, 0x30(r29)
      bl        0xA7F8
      mr.       r4, r3
      beq-      .loc_0xA8
      lwz       r4, 0x34(r29)
      li        r5, 0
      lwz       r6, 0x3C(r29)
      li        r7, 0xFF
      li        r8, 0
      bl        -0x324
      mr        r4, r3

    .loc_0xA8:
      lis       r3, 0x8050
      addi      r4, r4, 0x4
      addi      r3, r3, 0x6DB8
      bl        0xD168
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
 * Address:	800197A0
 * Size:	0000A8
 */
void JKRAramHeap::~JKRAramHeap()
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
      beq-      .loc_0x88
      lis       r4, 0x804A
      lis       r3, 0x8050
      subi      r0, r4, 0x3D8
      stw       r0, 0x0(r29)
      lwz       r31, 0x6DB8(r3)
      b         .loc_0x64

    .loc_0x3C:
      mr        r3, r31
      lwz       r31, 0xC(r31)
      lwz       r3, 0x0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x64
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x64:
      cmplwi    r31, 0
      bne+      .loc_0x3C
      mr        r3, r29
      li        r4, 0
      bl        0x3820
      extsh.    r0, r30
      ble-      .loc_0x88
      mr        r3, r29
      bl        0xA890

    .loc_0x88:
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
 * Address:	........
 * Size:	000060
 */
void JKRAramHeap::changeGroupID(unsigned char)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80019848
 * Size:	000080
 */
void JKRAramHeap::alloc(unsigned long, JKRAramHeap::EAllocMode)
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
      addi      r3, r29, 0x18
      bl        0xD62F8
      cmpwi     r31, 0
      bne-      .loc_0x48
      mr        r3, r29
      mr        r4, r30
      bl        .loc_0x80
      mr        r31, r3
      b         .loc_0x58

    .loc_0x48:
      mr        r3, r29
      mr        r4, r30
      bl        0xB8
      mr        r31, r3

    .loc_0x58:
      addi      r3, r29, 0x18
      bl        0xD63A0
      lwz       r0, 0x24(r1)
      mr        r3, r31
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x80:
    */
}

/*
 * --INFO--
 * Address:	800198C8
 * Size:	000088
 */
void JKRAramHeap::allocFromHead(unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      lis       r5, 0x8050
      stw       r0, 0x14(r1)
      addi      r0, r4, 0x1F
      rlwinm    r4,r0,0,0,26
      li        r8, -0x1
      lwz       r7, 0x6DB8(r5)
      li        r3, 0
      b         .loc_0x58

    .loc_0x2C:
      lwz       r5, 0x0(r7)
      lwz       r0, 0x1C(r5)
      cmplw     r0, r4
      blt-      .loc_0x54
      cmplw     r8, r0
      ble-      .loc_0x54
      cmplw     r0, r4
      mr        r8, r0
      mr        r3, r5
      beq-      .loc_0x60

    .loc_0x54:
      lwz       r7, 0xC(r7)

    .loc_0x58:
      cmplwi    r7, 0
      bne+      .loc_0x2C

    .loc_0x60:
      cmplwi    r3, 0
      beq-      .loc_0x74
      lbz       r5, 0x40(r6)
      bl        -0x3C8
      b         .loc_0x78

    .loc_0x74:
      li        r3, 0

    .loc_0x78:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80019950
 * Size:	000078
 */
void JKRAramHeap::allocFromTail(unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      lis       r5, 0x8050
      stw       r0, 0x14(r1)
      addi      r0, r4, 0x1F
      addi      r4, r5, 0x6DB8
      li        r3, 0
      lwz       r7, 0x4(r4)
      rlwinm    r4,r0,0,0,26
      b         .loc_0x48

    .loc_0x2C:
      lwz       r5, 0x0(r7)
      lwz       r0, 0x1C(r5)
      cmplw     r0, r4
      blt-      .loc_0x44
      mr        r3, r5
      b         .loc_0x50

    .loc_0x44:
      lwz       r7, 0x8(r7)

    .loc_0x48:
      cmplwi    r7, 0
      bne+      .loc_0x2C

    .loc_0x50:
      cmplwi    r3, 0
      beq-      .loc_0x64
      lbz       r5, 0x40(r6)
      bl        -0x398
      b         .loc_0x68

    .loc_0x64:
      li        r3, 0

    .loc_0x68:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void JKRAramHeap::freeLevel(unsigned char)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void JKRAramHeap::freeGroup(unsigned char)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void JKRAramHeap::freeAll()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JKRAramHeap::freeTail()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800199C8
 * Size:	000078
 */
void JKRAramHeap::getFreeSize()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      addi      r3, r30, 0x18
      bl        0xD6180
      lis       r3, 0x8050
      addi      r3, r3, 0x6DB8
      lwz       r3, 0x0(r3)
      b         .loc_0x4C

    .loc_0x34:
      lwz       r4, 0x0(r3)
      lwz       r0, 0x1C(r4)
      cmplw     r0, r31
      ble-      .loc_0x48
      mr        r31, r0

    .loc_0x48:
      lwz       r3, 0xC(r3)

    .loc_0x4C:
      cmplwi    r3, 0
      bne+      .loc_0x34
      addi      r3, r30, 0x18
      bl        0xD6224
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
 * Size:	00006C
 */
void JKRAramHeap::getTotalFreeSize()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void JKRAramHeap::getUsedSize(unsigned char)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JKRAramHeap::isEmpty()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JKRAramHeap::dump()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80019A40
 * Size:	000044
 */
void __sinit_JKRAramHeap_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8050
      stw       r0, 0x14(r1)
      addi      r3, r3, 0x6DB8
      bl        0xCE7C
      lis       r3, 0x8050
      lis       r4, 0x8002
      lis       r5, 0x804F
      addi      r3, r3, 0x6DB8
      subi      r4, r4, 0x657C
      subi      r5, r5, 0xE0
      bl        0xA7C90
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80019A84
 * Size:	000054
 */
void JSUList<JKRAramBlock>::~JSUList()
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
      bl        0xCDC0
      extsh.    r0, r31
      ble-      .loc_0x38
      mr        r3, r30
      bl        0xA5FC

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