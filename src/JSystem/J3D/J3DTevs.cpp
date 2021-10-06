

/*
 * --INFO--
 * Address:	80063B24
 * Size:	0000B4
 */
void J3DLightObj::load(unsigned long) const
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
      lwz       r5, -0x7158(r13)
      lwz       r3, 0x8(r5)
      lwz       r0, 0xC(r5)
      addi      r3, r3, 0x48
      cmplw     r3, r0
      ble-      .loc_0x38
      bl        0x7E0E8

    .loc_0x38:
      li        r0, 0x1
      lfs       f1, 0x0(r30)
      slw       r31, r0, r31
      lfs       f2, 0x4(r30)
      lfs       f3, 0x8(r30)
      mr        r3, r31
      bl        0x10FC0
      lfs       f1, 0x1C(r30)
      mr        r3, r31
      lfs       f2, 0x20(r30)
      lfs       f3, 0x24(r30)
      lfs       f4, 0x28(r30)
      lfs       f5, 0x2C(r30)
      lfs       f6, 0x30(r30)
      bl        0x10B78
      lwz       r0, 0x18(r30)
      mr        r3, r31
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      bl        0x10E7C
      lfs       f1, 0xC(r30)
      mr        r3, r31
      lfs       f2, 0x10(r30)
      lfs       f3, 0x14(r30)
      bl        0x11164
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80063BD8
 * Size:	000530
 */
void loadTexCoordGens(unsigned long, J3DTexCoord*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r27, r4
      rlwinm    r3,r3,3,0,28
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      lwz       r0, 0xC(r5)
      add       r3, r3, r4
      addi      r3, r3, 0xA
      cmplw     r3, r0
      ble-      .loc_0x3C
      bl        0x7E030

    .loc_0x3C:
      lwz       r4, -0x7158(r13)
      rlwinm    r3,r26,0,24,31
      subi      r6, r3, 0x1
      li        r7, 0x10
      lwz       r3, 0x8(r4)
      rlwinm    r30,r6,24,24,31
      li        r5, 0x40
      mr        r31, r27
      addi      r0, r3, 0x1
      rlwinm    r29,r6,0,24,31
      stw       r0, 0x8(r4)
      li        r28, 0
      stb       r7, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r30, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r7, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r5, 0x0(r3)
      b         .loc_0xD8

    .loc_0xC4:
      lbz       r3, 0x0(r31)
      lbz       r4, 0x1(r31)
      bl        0x117B0
      addi      r31, r31, 0x6
      addi      r28, r28, 0x1

    .loc_0xD8:
      cmplw     r28, r26
      blt+      .loc_0xC4
      lwz       r5, -0x7158(r13)
      lis       r3, 0x8051
      li        r7, 0x10
      li        r6, 0x50
      lwz       r4, 0x8(r5)
      subi      r3, r3, 0xDD0
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r30, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r29, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,1,1
      beq-      .loc_0x1F4
      mr        r9, r27
      li        r10, 0
      mtctr     r26
      cmplwi    r26, 0
      ble-      .loc_0x51C

    .loc_0x174:
      lbz       r0, 0x2(r9)
      li        r8, 0x3D
      cmplwi    r0, 0x3C
      beq-      .loc_0x188
      mr        r8, r10

    .loc_0x188:
      lwz       r4, -0x7158(r13)
      rlwinm    r7,r8,8,24,31
      rlwinm    r6,r8,16,24,31
      rlwinm    r5,r8,24,24,31
      lwz       r3, 0x8(r4)
      addi      r9, r9, 0x6
      addi      r10, r10, 0x3
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r7, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r5, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r8, 0x0(r3)
      bdnz+     .loc_0x174
      b         .loc_0x51C

    .loc_0x1F4:
      cmplwi    r26, 0
      li        r4, 0
      ble-      .loc_0x51C
      cmplwi    r26, 0x8
      subi      r3, r26, 0x8
      ble-      .loc_0x4B0
      addi      r0, r3, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmplwi    r3, 0
      ble-      .loc_0x4B0

    .loc_0x220:
      lwz       r7, -0x7158(r13)
      li        r3, 0
      li        r0, 0x3D
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      addi      r4, r4, 0x8
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r0, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r7, -0x7158(r13)
      lwz       r6, 0x8(r7)
      addi      r5, r6, 0x1
      stw       r5, 0x8(r7)
      stb       r3, 0x0(r6)
      lwz       r6, -0x7158(r13)
      lwz       r5, 0x8(r6)
      addi      r3, r5, 0x1
      stw       r3, 0x8(r6)
      stb       r0, 0x0(r5)
      bdnz+     .loc_0x220

    .loc_0x4B0:
      sub       r0, r26, r4
      mtctr     r0
      cmplw     r4, r26
      bge-      .loc_0x51C
      li        r6, 0
      li        r5, 0x3D

    .loc_0x4C8:
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r5, 0x0(r3)
      bdnz+     .loc_0x4C8

    .loc_0x51C:
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80064108
 * Size:	00003C
 */
void J3DTexMtx::load(unsigned long) const
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8051
      stw       r0, 0x14(r1)
      subi      r5, r5, 0xDD0
      lwz       r0, 0x34(r5)
      rlwinm.   r0,r0,0,1,1
      beq-      .loc_0x28
      bl        0x600
      b         .loc_0x2C

    .loc_0x28:
      bl        .loc_0x3C

    .loc_0x2C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x3C:
    */
}

/*
 * --INFO--
 * Address:	80064144
 * Size:	000064
 */
void J3DTexMtx::loadTexMtx(unsigned long) const
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
      lwz       r5, -0x7158(r13)
      lwz       r3, 0x8(r5)
      lwz       r0, 0xC(r5)
      addi      r3, r3, 0x35
      cmplw     r3, r0
      ble-      .loc_0x38
      bl        0x7DAC8

    .loc_0x38:
      mulli     r4, r31, 0x3
      lbz       r5, 0x0(r30)
      addi      r3, r30, 0x64
      addi      r4, r4, 0x1E
      bl        .loc_0x64
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x64:
    */
}

/*
 * --INFO--
 * Address:	800641A8
 * Size:	000580
 */
void J3DGDLoadTexMtxImm(float (*)[4], unsigned long, _GXTexMtxType)
{
    /*
    .loc_0x0:
      cmpwi     r5, 0x1
      stwu      r1, -0x40(r1)
      rlwinm    r11,r4,2,16,29
      li        r0, 0xC
      bne-      .loc_0x18
      li        r0, 0x8

    .loc_0x18:
      lwz       r6, -0x7158(r13)
      rlwinm    r4,r0,0,24,31
      subi      r9, r4, 0x1
      li        r10, 0x10
      lwz       r4, 0x8(r6)
      rlwinm    r8,r9,24,24,31
      rlwinm    r7,r11,24,24,31
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r10, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r8, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r9, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r11, 0x0(r4)
      lfs       f0, 0x0(r3)
      lwz       r6, -0x7158(r13)
      stfs      f0, 0x34(r1)
      lwz       r4, 0x8(r6)
      lwz       r9, 0x34(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      rlwinm    r0,r9,8,24,31
      rlwinm    r8,r9,16,24,31
      rlwinm    r7,r9,24,24,31
      stb       r0, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r8, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r9, 0x0(r4)
      lfs       f0, 0x4(r3)
      lwz       r6, -0x7158(r13)
      stfs      f0, 0x30(r1)
      lwz       r4, 0x8(r6)
      lwz       r9, 0x30(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      rlwinm    r0,r9,8,24,31
      rlwinm    r8,r9,16,24,31
      rlwinm    r7,r9,24,24,31
      stb       r0, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r8, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r9, 0x0(r4)
      lfs       f0, 0x8(r3)
      lwz       r6, -0x7158(r13)
      stfs      f0, 0x2C(r1)
      lwz       r4, 0x8(r6)
      lwz       r9, 0x2C(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      rlwinm    r0,r9,8,24,31
      rlwinm    r8,r9,16,24,31
      rlwinm    r7,r9,24,24,31
      stb       r0, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r8, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r9, 0x0(r4)
      lfs       f0, 0xC(r3)
      lwz       r6, -0x7158(r13)
      stfs      f0, 0x28(r1)
      lwz       r4, 0x8(r6)
      lwz       r9, 0x28(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      rlwinm    r0,r9,8,24,31
      rlwinm    r8,r9,16,24,31
      rlwinm    r7,r9,24,24,31
      stb       r0, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r8, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r9, 0x0(r4)
      lfs       f0, 0x10(r3)
      lwz       r6, -0x7158(r13)
      stfs      f0, 0x24(r1)
      lwz       r4, 0x8(r6)
      lwz       r8, 0x24(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      stb       r0, 0x0(r4)
      lwz       r6, -0x7158(r13)
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r6, -0x7158(r13)
      rlwinm    r7,r8,24,24,31
      cmpwi     r5, 0
      lwz       r4, 0x8(r6)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r6)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x14(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x20(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x20(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x18(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x1C(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x1C(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x1C(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x18(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x18(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      bne-      .loc_0x578
      lfs       f0, 0x20(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x14(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x14(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x24(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x10(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x10(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x28(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0xC(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0xC(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x2C(r3)
      lwz       r4, -0x7158(r13)
      stfs      f0, 0x8(r1)
      lwz       r3, 0x8(r4)
      lwz       r7, 0x8(r1)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      rlwinm    r0,r7,8,24,31
      rlwinm    r6,r7,16,24,31
      rlwinm    r5,r7,24,24,31
      stb       r0, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r5, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r7, 0x0(r3)

    .loc_0x578:
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80064728
 * Size:	000060
 */
void J3DTexMtx::loadPostTexMtx(unsigned long) const
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
      lwz       r5, -0x7158(r13)
      lwz       r3, 0x8(r5)
      lwz       r0, 0xC(r5)
      addi      r3, r3, 0x35
      cmplw     r3, r0
      ble-      .loc_0x38
      bl        0x7D4E4

    .loc_0x38:
      mulli     r4, r31, 0x3
      addi      r3, r30, 0x64
      addi      r4, r4, 0x40
      bl        .loc_0x60
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x60:
    */
}

/*
 * --INFO--
 * Address:	80064788
 * Size:	00056C
 */
void J3DGDLoadPostTexMtxImm(float (*)[4], unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      subi      r0, r4, 0x40
      rlwinm    r4,r0,2,0,29
      li        r11, 0x10
      lwz       r10, -0x7158(r13)
      addi      r7, r4, 0x500
      li        r9, 0
      li        r8, 0xB
      lwz       r5, 0x8(r10)
      rlwinm    r6,r7,24,24,31
      addi      r0, r5, 0x1
      stw       r0, 0x8(r10)
      stb       r11, 0x0(r5)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r9, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lfs       f0, 0x0(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x34(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x34(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x4(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x30(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x30(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x8(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x2C(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x2C(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0xC(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x28(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x28(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x10(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x24(r1)
      lwz       r4, 0x8(r5)
      lwz       r7, 0x24(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r7,8,24,31
      rlwinm    r6,r7,16,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      rlwinm    r6,r7,24,24,31
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lfs       f0, 0x14(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x20(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x20(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x18(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x1C(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x1C(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x1C(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x18(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x18(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x20(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x14(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x14(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x24(r3)
      lwz       r5, -0x7158(r13)
      stfs      f0, 0x10(r1)
      lwz       r4, 0x8(r5)
      lwz       r8, 0x10(r1)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      rlwinm    r0,r8,8,24,31
      rlwinm    r7,r8,16,24,31
      rlwinm    r6,r8,24,24,31
      stb       r0, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lfs       f0, 0x28(r3)
      stfs      f0, 0xC(r1)
      lwz       r5, -0x7158(r13)
      lwz       r9, 0xC(r1)
      lwz       r4, 0x8(r5)
      rlwinm    r8,r9,8,24,31
      rlwinm    r7,r9,16,24,31
      addi      r0, r4, 0x1
      rlwinm    r6,r9,24,24,31
      stw       r0, 0x8(r5)
      stb       r8, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r7, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r6, 0x0(r4)
      lwz       r5, -0x7158(r13)
      lwz       r4, 0x8(r5)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r5)
      stb       r9, 0x0(r4)
      lfs       f0, 0x2C(r3)
      lwz       r4, -0x7158(r13)
      stfs      f0, 0x8(r1)
      lwz       r3, 0x8(r4)
      lwz       r7, 0x8(r1)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      rlwinm    r0,r7,8,24,31
      rlwinm    r6,r7,16,24,31
      rlwinm    r5,r7,24,24,31
      stb       r0, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r6, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r5, 0x0(r3)
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r4)
      stb       r7, 0x0(r3)
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80064CF4
 * Size:	000020
 */
void J3DTexMtx::calc(const float (*)[4])
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        .loc_0x20
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x20:
    */
}

/*
 * --INFO--
 * Address:	80064D14
 * Size:	0002EC
 */
void J3DTexMtx::calcTexMtx(const float (*)[4])
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stw       r31, 0x8C(r1)
      mr        r31, r4
      stw       r30, 0x88(r1)
      mr        r30, r3
      lbz       r3, 0x1(r3)
      rlwinm    r0,r3,0,26,31
      rlwinm    r4,r3,25,31,31
      cmplwi    r0, 0xB
      bgt-      .loc_0x2A4
      lis       r3, 0x804A
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x1870
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      cmplwi    r4, 0
      bne-      .loc_0x64
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x8
      bl        -0x5AA4
      b         .loc_0x78

    .loc_0x64:
      cmplwi    r4, 0x1
      bne-      .loc_0x78
      addi      r3, r30, 0x10
      addi      r4, r1, 0x8
      bl        -0x5964

    .loc_0x78:
      lis       r4, 0x804A
      addi      r3, r1, 0x8
      addi      r4, r4, 0x1810
      mr        r5, r3
      bl        0x85564
      addi      r3, r1, 0x8
      addi      r4, r30, 0x24
      addi      r5, r1, 0x48
      bl        -0x5780
      mr        r4, r31
      addi      r3, r1, 0x48
      addi      r5, r30, 0x64
      bl        0x85544
      b         .loc_0x2D4
      cmplwi    r4, 0
      bne-      .loc_0xCC
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x48
      bl        -0x5B0C
      b         .loc_0xE0

    .loc_0xCC:
      cmplwi    r4, 0x1
      bne-      .loc_0xE0
      addi      r3, r30, 0x10
      addi      r4, r1, 0x48
      bl        -0x59CC

    .loc_0xE0:
      lis       r4, 0x804A
      addi      r3, r1, 0x48
      addi      r4, r4, 0x1810
      mr        r5, r3
      bl        0x854FC
      mr        r4, r31
      addi      r3, r1, 0x48
      addi      r5, r30, 0x64
      bl        0x854EC
      b         .loc_0x2D4
      cmplwi    r4, 0
      bne-      .loc_0x124
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x8
      bl        -0x5AB8
      b         .loc_0x138

    .loc_0x124:
      cmplwi    r4, 0x1
      bne-      .loc_0x138
      addi      r3, r30, 0x10
      addi      r4, r1, 0x8
      bl        -0x597C

    .loc_0x138:
      lis       r4, 0x804A
      addi      r3, r1, 0x8
      addi      r4, r4, 0x1840
      mr        r5, r3
      bl        0x854A4
      addi      r3, r1, 0x8
      addi      r4, r30, 0x24
      addi      r5, r1, 0x48
      bl        -0x5840
      mr        r4, r31
      addi      r3, r1, 0x48
      addi      r5, r30, 0x64
      bl        0x85484
      b         .loc_0x2D4
      cmplwi    r4, 0
      bne-      .loc_0x18C
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x48
      bl        -0x5B20
      b         .loc_0x1A0

    .loc_0x18C:
      cmplwi    r4, 0x1
      bne-      .loc_0x1A0
      addi      r3, r30, 0x10
      addi      r4, r1, 0x48
      bl        -0x59E4

    .loc_0x1A0:
      lis       r4, 0x804A
      addi      r3, r1, 0x48
      addi      r4, r4, 0x1840
      mr        r5, r3
      bl        0x8543C
      mr        r4, r31
      addi      r3, r1, 0x48
      addi      r5, r30, 0x64
      bl        0x8542C
      b         .loc_0x2D4
      cmplwi    r4, 0
      bne-      .loc_0x1E4
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x48
      bl        -0x5B78
      b         .loc_0x1F8

    .loc_0x1E4:
      cmplwi    r4, 0x1
      bne-      .loc_0x1F8
      addi      r3, r30, 0x10
      addi      r4, r1, 0x48
      bl        -0x5A3C

    .loc_0x1F8:
      mr        r4, r31
      addi      r3, r1, 0x48
      addi      r5, r30, 0x64
      bl        0x853E8
      b         .loc_0x2D4
      cmplwi    r4, 0
      bne-      .loc_0x228
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x8
      bl        -0x5BBC
      b         .loc_0x23C

    .loc_0x228:
      cmplwi    r4, 0x1
      bne-      .loc_0x23C
      addi      r3, r30, 0x10
      addi      r4, r1, 0x8
      bl        -0x5A80

    .loc_0x23C:
      addi      r3, r1, 0x8
      addi      r4, r30, 0x24
      addi      r5, r1, 0x48
      bl        -0x5930
      mr        r4, r31
      addi      r3, r1, 0x48
      addi      r5, r30, 0x64
      bl        0x85394
      b         .loc_0x2D4
      cmplwi    r4, 0
      bne-      .loc_0x27C
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r1, 0x8
      bl        -0x5C10
      b         .loc_0x290

    .loc_0x27C:
      cmplwi    r4, 0x1
      bne-      .loc_0x290
      addi      r3, r30, 0x10
      addi      r4, r1, 0x8
      bl        -0x5AD4

    .loc_0x290:
      addi      r3, r1, 0x8
      addi      r4, r30, 0x24
      addi      r5, r30, 0x64
      bl        -0x5984
      b         .loc_0x2D4

    .loc_0x2A4:
      cmplwi    r4, 0
      bne-      .loc_0x2C0
      addi      r3, r30, 0x10
      addi      r4, r30, 0x4
      addi      r5, r30, 0x64
      bl        -0x5C54
      b         .loc_0x2D4

    .loc_0x2C0:
      cmplwi    r4, 0x1
      bne-      .loc_0x2D4
      addi      r3, r30, 0x10
      addi      r4, r30, 0x64
      bl        -0x5B18

    .loc_0x2D4:
      lwz       r0, 0x94(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	80065000
 * Size:	000358
 */
void J3DTexMtx::calcPostTexMtx(const float (*)[4])
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stw       r31, 0x8C(r1)
      mr        r31, r3
      stw       r30, 0x88(r1)
      mr        r30, r4
      lbz       r3, 0x1(r3)
      rlwinm    r0,r3,0,26,31
      rlwinm    r4,r3,25,31,31
      cmplwi    r0, 0xB
      bgt-      .loc_0x310
      lis       r3, 0x804A
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x1900
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      cmplwi    r4, 0
      bne-      .loc_0x64
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x8
      bl        -0x5D90
      b         .loc_0x78

    .loc_0x64:
      cmplwi    r4, 0x1
      bne-      .loc_0x78
      addi      r3, r31, 0x10
      addi      r4, r1, 0x8
      bl        -0x5C50

    .loc_0x78:
      lis       r4, 0x804A
      addi      r3, r1, 0x8
      addi      r4, r4, 0x18A0
      mr        r5, r3
      bl        0x85278
      addi      r3, r1, 0x8
      addi      r4, r31, 0x24
      addi      r5, r1, 0x48
      bl        -0x5A6C
      mr        r4, r30
      addi      r3, r1, 0x48
      addi      r5, r31, 0x64
      bl        0x85258
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0xCC
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x8
      bl        -0x5DF8
      b         .loc_0xE0

    .loc_0xCC:
      cmplwi    r4, 0x1
      bne-      .loc_0xE0
      addi      r3, r31, 0x10
      addi      r4, r1, 0x8
      bl        -0x5CB8

    .loc_0xE0:
      lis       r4, 0x804A
      addi      r3, r1, 0x8
      addi      r4, r4, 0x18A0
      mr        r5, r3
      bl        0x85210
      addi      r3, r1, 0x8
      addi      r4, r31, 0x24
      addi      r5, r31, 0x64
      bl        -0x5AD4
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x124
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x48
      bl        -0x5E50
      b         .loc_0x138

    .loc_0x124:
      cmplwi    r4, 0x1
      bne-      .loc_0x138
      addi      r3, r31, 0x10
      addi      r4, r1, 0x48
      bl        -0x5D10

    .loc_0x138:
      lis       r4, 0x804A
      addi      r3, r1, 0x48
      addi      r4, r4, 0x18A0
      addi      r5, r31, 0x64
      bl        0x851B8
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x16C
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x8
      bl        -0x5DEC
      b         .loc_0x180

    .loc_0x16C:
      cmplwi    r4, 0x1
      bne-      .loc_0x180
      addi      r3, r31, 0x10
      addi      r4, r1, 0x8
      bl        -0x5CB0

    .loc_0x180:
      lis       r4, 0x804A
      addi      r3, r1, 0x8
      addi      r4, r4, 0x18D0
      mr        r5, r3
      bl        0x85170
      addi      r3, r1, 0x8
      addi      r4, r31, 0x24
      addi      r5, r1, 0x48
      bl        -0x5B74
      mr        r4, r30
      addi      r3, r1, 0x48
      addi      r5, r31, 0x64
      bl        0x85150
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x1D4
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x48
      bl        -0x5E54
      b         .loc_0x1E8

    .loc_0x1D4:
      cmplwi    r4, 0x1
      bne-      .loc_0x1E8
      addi      r3, r31, 0x10
      addi      r4, r1, 0x48
      bl        -0x5D18

    .loc_0x1E8:
      lis       r4, 0x804A
      addi      r3, r1, 0x48
      addi      r4, r4, 0x18D0
      addi      r5, r31, 0x64
      bl        0x85108
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x21C
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r31, 0x64
      bl        -0x5E9C
      b         .loc_0x340

    .loc_0x21C:
      cmplwi    r4, 0x1
      bne-      .loc_0x340
      addi      r3, r31, 0x10
      addi      r4, r31, 0x64
      bl        -0x5D60
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x250
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x8
      bl        -0x5ED0
      b         .loc_0x264

    .loc_0x250:
      cmplwi    r4, 0x1
      bne-      .loc_0x264
      addi      r3, r31, 0x10
      addi      r4, r1, 0x8
      bl        -0x5D94

    .loc_0x264:
      addi      r3, r1, 0x8
      addi      r4, r31, 0x24
      addi      r5, r1, 0x48
      bl        -0x5C44
      mr        r4, r30
      addi      r3, r1, 0x48
      addi      r5, r31, 0x64
      bl        0x85080
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x2A4
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x8
      bl        -0x5F24
      b         .loc_0x2B8

    .loc_0x2A4:
      cmplwi    r4, 0x1
      bne-      .loc_0x2B8
      addi      r3, r31, 0x10
      addi      r4, r1, 0x8
      bl        -0x5DE8

    .loc_0x2B8:
      addi      r3, r1, 0x8
      addi      r4, r31, 0x24
      addi      r5, r31, 0x64
      bl        -0x5C98
      b         .loc_0x340
      cmplwi    r4, 0
      bne-      .loc_0x2E8
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r1, 0x8
      bl        -0x5F68
      b         .loc_0x2FC

    .loc_0x2E8:
      cmplwi    r4, 0x1
      bne-      .loc_0x2FC
      addi      r3, r31, 0x10
      addi      r4, r1, 0x8
      bl        -0x5E2C

    .loc_0x2FC:
      addi      r3, r1, 0x8
      addi      r4, r31, 0x24
      addi      r5, r31, 0x64
      bl        -0x5CDC
      b         .loc_0x340

    .loc_0x310:
      cmplwi    r4, 0
      bne-      .loc_0x32C
      addi      r3, r31, 0x10
      addi      r4, r31, 0x4
      addi      r5, r31, 0x64
      bl        -0x5FAC
      b         .loc_0x340

    .loc_0x32C:
      cmplwi    r4, 0x1
      bne-      .loc_0x340
      addi      r3, r31, 0x10
      addi      r4, r31, 0x64
      bl        -0x5E70

    .loc_0x340:
      lwz       r0, 0x94(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	80065358
 * Size:	000024
 */
void isTexNoReg(void*)
{
    /*
    .loc_0x0:
      lbz       r0, 0x1(r3)
      cmplwi    r0, 0x80
      blt-      .loc_0x1C
      cmplwi    r0, 0xBB
      bgt-      .loc_0x1C
      li        r3, 0x1
      blr

    .loc_0x1C:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8006537C
 * Size:	00000C
 */
void getTexNoReg(void*)
{
    /*
    .loc_0x0:
      lwz       r0, 0x1(r3)
      rlwinm    r3,r0,0,16,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80065388
 * Size:	0001B8
 */
void loadTexNo(unsigned long, const unsigned short&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r5, 0x8051
      stw       r0, 0x34(r1)
      lhz       r0, 0x0(r4)
      subi      r4, r5, 0xDD0
      stw       r31, 0x2C(r1)
      rlwinm    r0,r0,5,0,26
      stw       r30, 0x28(r1)
      mr        r30, r3
      lis       r3, 0x8051
      stw       r29, 0x24(r1)
      rlwinm    r6,r30,3,0,28
      stw       r28, 0x20(r1)
      lwz       r4, 0x58(r4)
      lwz       r7, -0x7158(r13)
      lwz       r5, 0x4(r4)
      subi      r4, r3, 0xBE4
      add       r3, r4, r6
      add       r31, r5, r0
      lhz       r0, 0x2(r31)
      sthx      r0, r4, r6
      lhz       r0, 0x4(r31)
      sth       r0, 0x2(r3)
      lwz       r3, 0x8(r7)
      lwz       r0, 0xC(r7)
      addi      r3, r3, 0x14
      cmplw     r3, r0
      ble-      .loc_0x78
      bl        0x7C844

    .loc_0x78:
      lwz       r0, 0x1C(r31)
      mr        r3, r30
      add       r4, r31, r0
      bl        0x10668
      lbz       r0, 0x0(r31)
      mr        r3, r30
      lhz       r4, 0x2(r31)
      lhz       r5, 0x4(r31)
      rlwinm    r6,r0,0,28,31
      bl        0x105A8
      lbz       r6, 0x16(r31)
      lis       r5, 0x4330
      lbz       r4, 0x17(r31)
      mr        r3, r30
      lha       r0, 0x1A(r31)
      extsb     r6, r6
      extsb     r4, r4
      stw       r5, 0x8(r1)
      xoris     r6, r6, 0x8000
      xoris     r0, r0, 0x8000
      xoris     r4, r4, 0x8000
      stw       r6, 0xC(r1)
      lfd       f4, -0x79A8(r2)
      lfd       f0, 0x8(r1)
      stw       r4, 0x14(r1)
      fsubs     f1, f0, f4
      lfs       f5, -0x79B0(r2)
      stw       r5, 0x10(r1)
      lfs       f3, -0x79AC(r2)
      lfd       f0, 0x10(r1)
      fmuls     f1, f5, f1
      stw       r0, 0x1C(r1)
      fsubs     f2, f0, f4
      lbz       r4, 0x6(r31)
      stw       r5, 0x18(r1)
      lbz       r5, 0x7(r31)
      lfd       f0, 0x18(r1)
      fmuls     f2, f5, f2
      lbz       r6, 0x14(r31)
      fsubs     f0, f0, f4
      lbz       r7, 0x15(r31)
      lbz       r8, 0x12(r31)
      lbz       r9, 0x11(r31)
      fmuls     f3, f3, f0
      lbz       r10, 0x13(r31)
      bl        0x1036C
      lbz       r0, 0x8(r31)
      cmplwi    r0, 0x1
      bne-      .loc_0x198
      lhz       r0, 0xA(r31)
      li        r29, 0x1
      cmplwi    r0, 0x10
      ble-      .loc_0x150
      li        r29, 0x10

    .loc_0x150:
      lwz       r4, -0x7158(r13)
      lwz       r3, 0x8(r4)
      lwz       r0, 0xC(r4)
      addi      r3, r3, 0x14
      cmplw     r3, r0
      ble-      .loc_0x16C
      bl        0x7C750

    .loc_0x16C:
      rlwinm    r3,r30,13,0,18
      lwz       r0, 0xC(r31)
      addis     r28, r3, 0xF
      mr        r5, r29
      mr        r4, r28
      add       r3, r31, r0
      bl        0x10764
      lbz       r5, 0x9(r31)
      mr        r3, r30
      mr        r4, r28
      bl        0x106BC

    .loc_0x198:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80065540
 * Size:	000024
 */
void patchTexNo_PtrToIdx(unsigned long, const unsigned short&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lhz       r4, 0x0(r4)
      stw       r0, 0x14(r1)
      bl        0x105B4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80065564
 * Size:	000034
 */
void loadNBTScale(J3DNBTScale&)
{
    /*
    .loc_0x0:
      lbz       r0, 0x0(r3)
      cmplwi    r0, 0x1
      bne-      .loc_0x20
      lis       r4, 0x8051
      addi      r0, r3, 0x4
      subi      r3, r4, 0xDD0
      stw       r0, 0x118(r3)
      blr

    .loc_0x20:
      lis       r3, 0x8051
      li        r0, 0
      subi      r3, r3, 0xDD0
      stw       r0, 0x118(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80065598
 * Size:	000160
 */
void makeTexCoordTable()
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      lis       r3, 0x8048
      subi      r8, r3, 0x765C
      lis       r4, 0x8051
      stmw      r24, 0x20(r1)
      subi      r29, r4, 0xB94
      li        r3, 0
      li        r7, 0
      lwz       r6, 0x0(r8)
      lwz       r5, 0x4(r8)
      lhz       r4, 0x8(r8)
      lbz       r0, 0xA(r8)
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      sth       r4, 0x10(r1)
      stb       r0, 0x12(r1)

    .loc_0x40:
      li        r4, 0
      li        r27, 0

    .loc_0x48:
      li        r6, 0x2
      addi      r28, r1, 0x8
      add       r0, r27, r7
      li        r5, 0
      mtctr     r6

    .loc_0x5C:
      add       r24, r5, r0
      lbz       r30, 0x0(r28)
      mulli     r6, r24, 0x3
      lbz       r31, 0x1(r28)
      addi      r8, r24, 0x1
      lbz       r11, 0x2(r28)
      addi      r12, r24, 0x2
      lbz       r9, 0x3(r28)
      add       r26, r29, r6
      lbz       r6, 0x4(r28)
      stb       r3, 0x0(r26)
      mulli     r10, r8, 0x3
      addi      r8, r24, 0x4
      stb       r4, 0x1(r26)
      addi      r25, r24, 0x3
      mulli     r12, r12, 0x3
      addi      r28, r28, 0x5
      stb       r30, 0x2(r26)
      add       r26, r29, r10
      addi      r5, r5, 0x5
      stb       r3, 0x0(r26)
      mulli     r10, r25, 0x3
      add       r12, r29, r12
      stb       r4, 0x1(r26)
      stb       r31, 0x2(r26)
      mulli     r8, r8, 0x3
      add       r10, r29, r10
      stb       r3, 0x0(r12)
      add       r8, r29, r8
      stb       r4, 0x1(r12)
      stb       r11, 0x2(r12)
      stb       r3, 0x0(r10)
      stb       r4, 0x1(r10)
      stb       r9, 0x2(r10)
      stb       r3, 0x0(r8)
      stb       r4, 0x1(r8)
      stb       r6, 0x2(r8)
      bdnz+     .loc_0x5C
      addi      r9, r1, 0x8
      subfic    r6, r5, 0xB
      add       r9, r9, r5
      mtctr     r6
      cmpwi     r5, 0xB
      bge-      .loc_0x134

    .loc_0x10C:
      add       r8, r5, r0
      lbz       r6, 0x0(r9)
      mulli     r8, r8, 0x3
      addi      r9, r9, 0x1
      addi      r5, r5, 0x1
      add       r8, r29, r8
      stb       r3, 0x0(r8)
      stb       r4, 0x1(r8)
      stb       r6, 0x2(r8)
      bdnz+     .loc_0x10C

    .loc_0x134:
      addi      r4, r4, 0x1
      addi      r27, r27, 0xB
      cmplwi    r4, 0x15
      blt+      .loc_0x48
      addi      r3, r3, 0x1
      addi      r7, r7, 0xE7
      cmplwi    r3, 0xB
      blt+      .loc_0x40
      lmw       r24, 0x20(r1)
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	800656F8
 * Size:	000130
 */
void makeAlphaCmpTable()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lis       r4, 0x8051
      li        r3, 0
      li        r5, 0
      stmw      r26, 0x8(r1)
      addi      r30, r4, 0x1D94

    .loc_0x18:
      li        r0, 0x4
      li        r4, 0
      li        r6, 0
      mtctr     r0

    .loc_0x28:
      add       r11, r5, r6
      li        r8, 0
      mulli     r0, r11, 0x3
      li        r10, 0x1
      addi      r7, r11, 0x1
      addi      r12, r11, 0x2
      add       r9, r30, r0
      addi      r29, r11, 0x3
      stb       r3, 0x0(r9)
      mulli     r7, r7, 0x3
      addi      r28, r11, 0x4
      stb       r4, 0x1(r9)
      li        r31, 0x3
      mulli     r0, r12, 0x3
      addi      r27, r11, 0x5
      stb       r8, 0x2(r9)
      add       r12, r30, r7
      addi      r7, r11, 0x7
      stb       r3, 0x0(r12)
      mulli     r8, r29, 0x3
      add       r29, r30, r0
      stb       r4, 0x1(r12)
      addi      r26, r11, 0x6
      li        r9, 0x2
      stb       r10, 0x2(r12)
      mulli     r0, r28, 0x3
      add       r28, r30, r8
      stb       r3, 0x0(r29)
      li        r12, 0x4
      li        r10, 0x5
      stb       r4, 0x1(r29)
      mulli     r11, r27, 0x3
      add       r27, r30, r0
      stb       r9, 0x2(r29)
      li        r8, 0x6
      li        r0, 0x7
      stb       r3, 0x0(r28)
      mulli     r9, r26, 0x3
      add       r11, r30, r11
      stb       r4, 0x1(r28)
      addi      r6, r6, 0x8
      stb       r31, 0x2(r28)
      mulli     r7, r7, 0x3
      add       r9, r30, r9
      stb       r3, 0x0(r27)
      add       r7, r30, r7
      stb       r4, 0x1(r27)
      stb       r12, 0x2(r27)
      stb       r3, 0x0(r11)
      stb       r4, 0x1(r11)
      stb       r10, 0x2(r11)
      stb       r3, 0x0(r9)
      stb       r4, 0x1(r9)
      stb       r8, 0x2(r9)
      stb       r3, 0x0(r7)
      stb       r4, 0x1(r7)
      addi      r4, r4, 0x1
      stb       r0, 0x2(r7)
      bdnz+     .loc_0x28
      addi      r3, r3, 0x1
      addi      r5, r5, 0x20
      cmplwi    r3, 0x8
      blt+      .loc_0x18
      lmw       r26, 0x8(r1)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80065828
 * Size:	000138
 */
void makeZModeTable()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      lis       r3, 0x8051
      addi      r8, r3, 0x2094
      stw       r31, 0xC(r1)
      li        r31, 0
      li        r3, 0
      stw       r30, 0x8(r1)

    .loc_0x1C:
      li        r9, 0
      li        r0, 0x2
      mr        r6, r9
      li        r30, 0
      li        r4, 0x1
      mtctr     r0

    .loc_0x34:
      add       r11, r9, r3
      addi      r9, r9, 0x2
      mulli     r7, r11, 0x3
      addi      r5, r11, 0x1
      add       r11, r9, r3
      add       r10, r8, r7
      addi      r9, r9, 0x2
      stb       r31, 0x0(r10)
      mulli     r0, r5, 0x3
      addi      r5, r11, 0x1
      stb       r30, 0x1(r10)
      add       r12, r8, r0
      stb       r6, 0x2(r10)
      mulli     r7, r11, 0x3
      add       r11, r9, r3
      stb       r31, 0x0(r12)
      addi      r9, r9, 0x2
      add       r10, r8, r7
      stb       r30, 0x1(r12)
      mulli     r0, r5, 0x3
      addi      r30, r30, 0x1
      stb       r4, 0x2(r12)
      addi      r5, r11, 0x1
      add       r12, r8, r0
      stb       r31, 0x0(r10)
      mulli     r7, r11, 0x3
      add       r11, r9, r3
      stb       r30, 0x1(r10)
      addi      r9, r9, 0x2
      mulli     r0, r5, 0x3
      addi      r5, r11, 0x1
      stb       r6, 0x2(r10)
      add       r10, r8, r7
      stb       r31, 0x0(r12)
      mulli     r7, r11, 0x3
      stb       r30, 0x1(r12)
      addi      r30, r30, 0x1
      stb       r4, 0x2(r12)
      add       r12, r8, r0
      mulli     r0, r5, 0x3
      stb       r31, 0x0(r10)
      stb       r30, 0x1(r10)
      stb       r6, 0x2(r10)
      add       r10, r8, r7
      stb       r31, 0x0(r12)
      stb       r30, 0x1(r12)
      addi      r30, r30, 0x1
      stb       r4, 0x2(r12)
      add       r12, r8, r0
      stb       r31, 0x0(r10)
      stb       r30, 0x1(r10)
      stb       r6, 0x2(r10)
      stb       r31, 0x0(r12)
      stb       r30, 0x1(r12)
      addi      r30, r30, 0x1
      stb       r4, 0x2(r12)
      bdnz+     .loc_0x34
      addi      r31, r31, 0x1
      addi      r3, r3, 0x10
      cmpwi     r31, 0x2
      blt+      .loc_0x1C
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80065960
 * Size:	000044
 */
void makeTevSwapTable()
{
    /*
    .loc_0x0:
      lis       r3, 0x8051
      li        r6, 0
      addi      r0, r3, 0x1994
      mr        r5, r0

    .loc_0x10:
      srawi     r0, r6, 0x6
      rlwinm    r4,r6,28,30,31
      stb       r0, 0x0(r5)
      rlwinm    r3,r6,30,30,31
      rlwinm    r0,r6,0,30,31
      addi      r6, r6, 0x1
      stb       r4, 0x1(r5)
      cmpwi     r6, 0x100
      stb       r3, 0x2(r5)
      stb       r0, 0x3(r5)
      addi      r5, r5, 0x4
      blt+      .loc_0x10
      blr
    */
}