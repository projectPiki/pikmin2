

/*
 * --INFO--
 * Address:	800659A4
 * Size:	000068
 */
void J3DDrawBuffer::initialize()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      li        r5, 0
      lis       r0, 0x4330
      lfs       f1, -0x7960(r2)
      stw       r5, 0x8(r3)
      li        r4, 0x20
      lfs       f0, -0x795C(r2)
      stw       r5, 0xC(r3)
      stfs      f1, 0x10(r3)
      lfd       f1, -0x7958(r2)
      stfs      f0, 0x14(r3)
      stw       r5, 0x1C(r3)
      stw       r5, 0x20(r3)
      stw       r4, 0x4(r3)
      lwz       r4, 0x4(r3)
      stw       r0, 0x8(r1)
      lfs       f3, 0x14(r3)
      stw       r4, 0xC(r1)
      lfs       f2, 0x10(r3)
      lfd       f0, 0x8(r1)
      fsubs     f2, f3, f2
      fsubs     f0, f0, f1
      fdivs     f0, f2, f0
      stfs      f0, 0x18(r3)
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80065A0C
 * Size:	000084
 */
void J3DDrawBuffer::allocBuffer(unsigned long)
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
      rlwinm    r3,r4,2,0,29
      li        r4, 0x20
      bl        -0x41A38
      stw       r3, 0x0(r30)
      mr        r3, r30
      stw       r31, 0x4(r30)
      bl        .loc_0x84
      lwz       r4, 0x4(r30)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      li        r3, 0
      lfs       f3, 0x14(r30)
      stw       r4, 0xC(r1)
      lfs       f2, 0x10(r30)
      lfd       f1, -0x7958(r2)
      lfd       f0, 0x8(r1)
      fsubs     f2, f3, f2
      fsubs     f0, f0, f1
      fdivs     f0, f2, f0
      stfs      f0, 0x18(r30)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x84:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void J3DDrawBuffer::~J3DDrawBuffer()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80065A90
 * Size:	0000EC
 */
void J3DDrawBuffer::frameInit()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      li        r30, 0
      lwz       r31, 0x4(r3)
      cmplwi    r31, 0
      ble-      .loc_0xD4
      cmplwi    r31, 0x8
      subi      r4, r31, 0x8
      ble-      .loc_0xAC
      addi      r0, r4, 0x7
      li        r12, 0
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmplwi    r4, 0
      ble-      .loc_0xAC

    .loc_0x40:
      lwz       r4, 0x0(r3)
      li        r11, 0
      addi      r9, r12, 0x4
      addi      r8, r12, 0x8
      stwx      r11, r4, r12
      addi      r7, r12, 0xC
      addi      r6, r12, 0x10
      addi      r5, r12, 0x14
      lwz       r10, 0x0(r3)
      addi      r4, r12, 0x18
      addi      r0, r12, 0x1C
      addi      r12, r12, 0x20
      stwx      r11, r10, r9
      addi      r30, r30, 0x8
      lwz       r9, 0x0(r3)
      stwx      r11, r9, r8
      lwz       r8, 0x0(r3)
      stwx      r11, r8, r7
      lwz       r7, 0x0(r3)
      stwx      r11, r7, r6
      lwz       r6, 0x0(r3)
      stwx      r11, r6, r5
      lwz       r5, 0x0(r3)
      stwx      r11, r5, r4
      lwz       r4, 0x0(r3)
      stwx      r11, r4, r0
      bdnz+     .loc_0x40

    .loc_0xAC:
      sub       r0, r31, r30
      rlwinm    r6,r30,2,0,29
      li        r5, 0
      mtctr     r0
      cmplw     r30, r31
      bge-      .loc_0xD4

    .loc_0xC4:
      lwz       r4, 0x0(r3)
      stwx      r5, r4, r6
      addi      r6, r6, 0x4
      bdnz+     .loc_0xC4

    .loc_0xD4:
      li        r0, 0
      stw       r0, 0x20(r3)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80065B7C
 * Size:	000158
 */
void J3DDrawBuffer::entryMatSort(J3DMatPacket*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      stw       r0, 0x4(r4)
      stw       r0, 0x8(r4)
      lwz       r3, 0x2C(r4)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      lwz       r0, 0x34(r4)
      rlwinm.   r0,r0,0,0,0
      beq-      .loc_0x64
      lwz       r4, 0x0(r30)
      li        r3, 0x1
      lwz       r0, 0x0(r4)
      stw       r0, 0x4(r31)
      lwz       r4, 0x0(r30)
      stw       r31, 0x0(r4)
      b         .loc_0x138

    .loc_0x64:
      lwz       r3, 0x30(r31)
      lis       r4, 0x8051
      subi      r5, r4, 0xDD0
      li        r4, 0
      lwz       r3, 0x2C(r3)
      lwz       r29, 0x58(r5)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      cmplwi    r0, 0xFFFF
      bne-      .loc_0xA0
      li        r5, 0
      b         .loc_0xB8

    .loc_0xA0:
      lwz       r4, 0x4(r29)
      rlwinm    r0,r3,5,11,26
      add       r3, r4, r0
      lwz       r0, 0x1C(r3)
      add       r0, r3, r0
      rlwinm    r5,r0,27,5,31

    .loc_0xB8:
      lwz       r3, 0x4(r30)
      lwz       r4, 0x0(r30)
      subi      r0, r3, 0x1
      and       r0, r5, r0
      rlwinm    r29,r0,2,0,29
      lwzx      r0, r4, r29
      cmplwi    r0, 0
      bne-      .loc_0xE4
      stwx      r31, r4, r29
      li        r3, 0x1
      b         .loc_0x138

    .loc_0xE4:
      mr        r28, r0
      b         .loc_0x118

    .loc_0xEC:
      mr        r3, r28
      mr        r4, r31
      bl        -0x5D98
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x114
      lwz       r4, 0x2C(r31)
      mr        r3, r28
      bl        -0x5E90
      li        r3, 0
      b         .loc_0x138

    .loc_0x114:
      lwz       r28, 0x4(r28)

    .loc_0x118:
      cmplwi    r28, 0
      bne+      .loc_0xEC
      lwz       r4, 0x0(r30)
      li        r3, 0x1
      lwzx      r0, r4, r29
      stw       r0, 0x4(r31)
      lwz       r4, 0x0(r30)
      stwx      r31, r4, r29

    .loc_0x138:
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
 * Address:	80065CD4
 * Size:	00000C
 */
void J3DTevBlock::getTexNo(unsigned long) const
{
    /*
    .loc_0x0:
      lis       r3, 0x1
      subi      r3, r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80065CE0
 * Size:	0001E8
 */
void J3DDrawBuffer::entryMatAnmSort(J3DMatPacket*)
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
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      lwz       r6, 0x3C(r4)
      lwz       r3, 0x4(r3)
      cmplwi    r6, 0
      subi      r0, r3, 0x1
      and       r3, r6, r0
      bne-      .loc_0x150
      li        r0, 0
      stw       r0, 0x4(r31)
      stw       r0, 0x8(r31)
      lwz       r3, 0x2C(r31)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      lwz       r0, 0x34(r31)
      rlwinm.   r0,r0,0,0,0
      beq-      .loc_0x7C
      lwz       r4, 0x0(r30)
      li        r3, 0x1
      lwz       r0, 0x0(r4)
      stw       r0, 0x4(r31)
      lwz       r4, 0x0(r30)
      stw       r31, 0x0(r4)
      b         .loc_0x1C8

    .loc_0x7C:
      lwz       r3, 0x30(r31)
      lis       r4, 0x8051
      subi      r5, r4, 0xDD0
      li        r4, 0
      lwz       r3, 0x2C(r3)
      lwz       r29, 0x58(r5)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      cmplwi    r0, 0xFFFF
      bne-      .loc_0xB8
      li        r5, 0
      b         .loc_0xD0

    .loc_0xB8:
      lwz       r4, 0x4(r29)
      rlwinm    r0,r3,5,11,26
      add       r3, r4, r0
      lwz       r0, 0x1C(r3)
      add       r0, r3, r0
      rlwinm    r5,r0,27,5,31

    .loc_0xD0:
      lwz       r3, 0x4(r30)
      lwz       r4, 0x0(r30)
      subi      r0, r3, 0x1
      and       r0, r5, r0
      rlwinm    r28,r0,2,0,29
      lwzx      r29, r4, r28
      cmplwi    r29, 0
      bne-      .loc_0x12C
      stwx      r31, r4, r28
      li        r3, 0x1
      b         .loc_0x1C8
      b         .loc_0x12C

    .loc_0x100:
      mr        r3, r29
      mr        r4, r31
      bl        -0x5F10
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x128
      lwz       r4, 0x2C(r31)
      mr        r3, r29
      bl        -0x6008
      li        r3, 0
      b         .loc_0x1C8

    .loc_0x128:
      lwz       r29, 0x4(r29)

    .loc_0x12C:
      cmplwi    r29, 0
      bne+      .loc_0x100
      lwz       r4, 0x0(r30)
      li        r3, 0x1
      lwzx      r0, r4, r28
      stw       r0, 0x4(r31)
      lwz       r4, 0x0(r30)
      stwx      r31, r4, r28
      b         .loc_0x1C8

    .loc_0x150:
      li        r0, 0
      rlwinm    r5,r3,2,0,29
      stw       r0, 0x4(r31)
      stw       r0, 0x8(r31)
      lwz       r3, 0x2C(r31)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      lwz       r3, 0x0(r30)
      lwzx      r4, r3, r5
      cmplwi    r4, 0
      bne-      .loc_0x188
      stwx      r31, r3, r5
      li        r3, 0x1
      b         .loc_0x1C8

    .loc_0x188:
      mr        r3, r4
      b         .loc_0x1B0

    .loc_0x190:
      lwz       r0, 0x3C(r3)
      cmplw     r0, r6
      bne-      .loc_0x1AC
      lwz       r4, 0x2C(r31)
      bl        -0x608C
      li        r3, 0
      b         .loc_0x1C8

    .loc_0x1AC:
      lwz       r3, 0x4(r3)

    .loc_0x1B0:
      cmplwi    r3, 0
      bne+      .loc_0x190
      stw       r4, 0x4(r31)
      li        r3, 0x1
      lwz       r4, 0x0(r30)
      stwx      r31, r4, r5

    .loc_0x1C8:
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
 * Address:	80065EC8
 * Size:	00011C
 */
void J3DDrawBuffer::entryZSort(J3DMatPacket*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f3, -0x7960(r2)
      stw       r0, 0x34(r1)
      li        r0, 0
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      stw       r0, 0x4(r4)
      lis       r4, 0x8051
      subi      r3, r4, 0xDD0
      stw       r0, 0x8(r31)
      lwz       r4, 0x2C(r31)
      stw       r0, 0x4(r4)
      stw       r0, 0x8(r4)
      lwz       r4, 0x1C(r30)
      psq_l     f5,0x20(r3),0,0
      lfs       f2, 0xC(r4)
      lfs       f1, 0x1C(r4)
      lfs       f0, 0x2C(r4)
      stfs      f2, 0x14(r1)
      psq_l     f2,0x28(r3),0,0
      stfs      f0, 0x1C(r1)
      lwz       r4, 0x14(r1)
      stfs      f1, 0x18(r1)
      lwz       r0, 0x1C(r1)
      lwz       r3, 0x18(r1)
      stw       r0, 0x10(r1)
      lfs       f0, 0x10(r30)
      lfs       f4, 0x10(r1)
      stw       r4, 0x8(r1)
      ps_merge00f4, f4, f3
      lfs       f6, 0x18(r30)
      stw       r3, 0xC(r1)
      fadds     f0, f0, f6
      psq_l     f1,0x8(r1),0,0
      ps_mul    f5, f1, f5
      ps_madd   f2, f4, f2, f5
      ps_sum0   f2, f2, f2, f2
      fneg      f1, f2
      fcmpo     cr0, f0, f1
      bge-      .loc_0xD8
      lfs       f0, 0x14(r30)
      fsubs     f0, f0, f6
      fcmpo     cr0, f0, f1
      ble-      .loc_0xCC
      fdivs     f1, f1, f6
      bl        0x5BBC4
      mr        r6, r3
      b         .loc_0xDC

    .loc_0xCC:
      lwz       r3, 0x4(r30)
      subi      r6, r3, 0x1
      b         .loc_0xDC

    .loc_0xD8:
      li        r6, 0

    .loc_0xDC:
      lwz       r5, 0x4(r30)
      li        r3, 0x1
      lwz       r4, 0x0(r30)
      subi      r0, r5, 0x1
      sub       r0, r0, r6
      rlwinm    r5,r0,2,0,29
      lwzx      r0, r4, r5
      stw       r0, 0x4(r31)
      lwz       r4, 0x0(r30)
      stwx      r31, r4, r5
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80065FE4
 * Size:	000050
 */
void J3DDrawBuffer::entryModelSort(J3DMatPacket*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r0, 0x4(r4)
      stw       r0, 0x8(r4)
      lwz       r5, 0x2C(r4)
      stw       r0, 0x4(r5)
      stw       r0, 0x8(r5)
      lwz       r3, 0x20(r3)
      cmplwi    r3, 0
      beq-      .loc_0x3C
      bl        -0x651C
      li        r3, 0x1
      b         .loc_0x40

    .loc_0x3C:
      li        r3, 0

    .loc_0x40:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80066034
 * Size:	000054
 */
void J3DDrawBuffer::entryInvalidSort(J3DMatPacket*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r0, 0x4(r4)
      stw       r0, 0x8(r4)
      lwz       r5, 0x2C(r4)
      stw       r0, 0x4(r5)
      stw       r0, 0x8(r5)
      lwz       r3, 0x20(r3)
      cmplwi    r3, 0
      beq-      .loc_0x40
      lwz       r4, 0x2C(r4)
      bl        -0x6570
      li        r3, 0x1
      b         .loc_0x44

    .loc_0x40:
      li        r3, 0

    .loc_0x44:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80066088
 * Size:	000034
 */
void J3DDrawBuffer::entryNonSort(J3DMatPacket*)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x4(r4)
      stw       r0, 0x8(r4)
      lwz       r5, 0x2C(r4)
      stw       r0, 0x4(r5)
      stw       r0, 0x8(r5)
      lwz       r5, 0x0(r3)
      lwz       r0, 0x0(r5)
      stw       r0, 0x4(r4)
      lwz       r5, 0x0(r3)
      li        r3, 0x1
      stw       r4, 0x0(r5)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void J3DDrawBuffer::entryImm(J3DPacket*, unsigned short)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800660BC
 * Size:	000054
 */
void J3DDrawBuffer::draw() const
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lwz       r5, 0x8(r3)
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      addi      r0, r4, 0x19D8
      mulli     r4, r5, 0xC
      addi      r12, r1, 0x8
      add       r6, r0, r4
      lwz       r5, 0x0(r6)
      lwz       r4, 0x4(r6)
      lwz       r0, 0x8(r6)
      stw       r5, 0x8(r1)
      stw       r4, 0xC(r1)
      stw       r0, 0x10(r1)
      bl        0x5BA2C
      nop
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80066110
 * Size:	000084
 */
void J3DDrawBuffer::drawHead() const
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      lwz       r31, 0x0(r3)
      stw       r30, 0x18(r1)
      lwz       r30, 0x4(r3)
      stw       r29, 0x14(r1)
      li        r29, 0
      stw       r28, 0x10(r1)
      b         .loc_0x5C

    .loc_0x2C:
      lwz       r28, 0x0(r31)
      b         .loc_0x4C

    .loc_0x34:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r28, 0x4(r28)

    .loc_0x4C:
      cmplwi    r28, 0
      bne+      .loc_0x34
      addi      r31, r31, 0x4
      addi      r29, r29, 0x1

    .loc_0x5C:
      cmplw     r29, r30
      blt+      .loc_0x2C
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
 * Address:	80066194
 * Size:	000084
 */
void J3DDrawBuffer::drawTail() const
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lwz       r4, 0x4(r3)
      stw       r0, 0x24(r1)
      lwz       r0, 0x0(r3)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      subi      r30, r4, 0x1
      rlwinm    r3,r30,2,0,29
      stw       r29, 0x14(r1)
      add       r31, r0, r3
      b         .loc_0x60

    .loc_0x30:
      lwz       r29, 0x0(r31)
      b         .loc_0x50

    .loc_0x38:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r29, 0x4(r29)

    .loc_0x50:
      cmplwi    r29, 0
      bne+      .loc_0x38
      subi      r31, r31, 0x4
      subi      r30, r30, 0x1

    .loc_0x60:
      cmpwi     r30, 0
      bge+      .loc_0x30
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
 * Size:	000030
 */
void J3DDrawBuffer::setCallBackPacket(J3DCallBackPacket*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80066218
 * Size:	0000E4
 */
void __sinit_J3DDrawBuffer_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      lis       r3, 0x804A
      stmw      r16, 0x10(r1)
      addi      r16, r3, 0x1930
      addi      r20, r16, 0x48
      addi      r5, r16, 0xA8
      lwz       r17, 0x0(r16)
      lwz       r18, 0x4(r16)
      lwz       r19, 0x8(r16)
      lwz       r21, 0xC(r16)
      lwz       r22, 0x10(r16)
      lwz       r23, 0x14(r16)
      lwz       r24, 0x18(r16)
      lwz       r25, 0x1C(r16)
      lwz       r26, 0x20(r16)
      lwz       r27, 0x24(r16)
      lwz       r28, 0x28(r16)
      lwz       r29, 0x2C(r16)
      lwz       r30, 0x30(r16)
      lwz       r31, 0x34(r16)
      lwz       r12, 0x38(r16)
      lwz       r11, 0x3C(r16)
      lwz       r10, 0x40(r16)
      lwz       r9, 0x44(r16)
      lwz       r8, 0x90(r16)
      lwz       r7, 0x94(r16)
      lwz       r6, 0x98(r16)
      lwz       r4, 0x9C(r16)
      lwz       r3, 0xA0(r16)
      lwz       r0, 0xA4(r16)
      stw       r17, 0x48(r16)
      stw       r18, 0x4C(r16)
      stw       r19, 0x50(r16)
      stw       r21, 0xC(r20)
      stw       r22, 0x10(r20)
      stw       r23, 0x14(r20)
      stw       r24, 0x18(r20)
      stw       r25, 0x1C(r20)
      stw       r26, 0x20(r20)
      stw       r27, 0x24(r20)
      stw       r28, 0x28(r20)
      stw       r29, 0x2C(r20)
      stw       r30, 0x30(r20)
      stw       r31, 0x34(r20)
      stw       r12, 0x38(r20)
      stw       r11, 0x3C(r20)
      stw       r10, 0x40(r20)
      stw       r9, 0x44(r20)
      stw       r8, 0xA8(r16)
      stw       r7, 0xAC(r16)
      stw       r6, 0xB0(r16)
      stw       r4, 0xC(r5)
      stw       r3, 0x10(r5)
      stw       r0, 0x14(r5)
      lmw       r16, 0x10(r1)
      addi      r1, r1, 0x50
      blr
    */
}