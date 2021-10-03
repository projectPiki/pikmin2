

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80325A40
 * Size:	00015C
 */
void og::newScreen::ObjVs::__ct((char const*))
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
      bl        0x12E08C
      lis       r3, 0x804E
      lfs       f2, -0x5C8(r2)
      subi      r3, r3, 0x65C4
      li        r4, 0
      stw       r3, 0x0(r30)
      addi      r3, r3, 0x10
      lfs       f1, -0x5C4(r2)
      li        r0, 0x1
      stw       r3, 0x18(r30)
      mr        r3, r30
      lfs       f0, -0x5C0(r2)
      stfs      f2, 0x4C(r30)
      stfs      f2, 0x50(r30)
      stw       r31, 0x14(r30)
      stw       r4, 0x38(r30)
      stw       r4, 0x3C(r30)
      stw       r4, 0x54(r30)
      stw       r4, 0x64(r30)
      stw       r4, 0x84(r30)
      stw       r4, 0x94(r30)
      stw       r4, 0xB4(r30)
      stw       r4, 0xC4(r30)
      stw       r4, 0xD4(r30)
      stw       r4, 0xE4(r30)
      stb       r4, 0xF4(r30)
      stb       r4, 0xF8(r30)
      stw       r4, 0x58(r30)
      stw       r4, 0x68(r30)
      stw       r4, 0x88(r30)
      stw       r4, 0x98(r30)
      stw       r4, 0xB8(r30)
      stw       r4, 0xC8(r30)
      stw       r4, 0xD8(r30)
      stw       r4, 0xE8(r30)
      stb       r4, 0xF5(r30)
      stb       r4, 0xF9(r30)
      stw       r4, 0x5C(r30)
      stw       r4, 0x6C(r30)
      stw       r4, 0x8C(r30)
      stw       r4, 0x9C(r30)
      stw       r4, 0xBC(r30)
      stw       r4, 0xCC(r30)
      stw       r4, 0xDC(r30)
      stw       r4, 0xEC(r30)
      stb       r4, 0xF6(r30)
      stb       r4, 0xFA(r30)
      stw       r4, 0x60(r30)
      stw       r4, 0x70(r30)
      stw       r4, 0x90(r30)
      stw       r4, 0xA0(r30)
      stw       r4, 0xC0(r30)
      stw       r4, 0xD0(r30)
      stw       r4, 0xE0(r30)
      stw       r4, 0xF0(r30)
      stb       r4, 0xF7(r30)
      stb       r4, 0xFB(r30)
      stfs      f1, 0xFC(r30)
      stw       r4, 0x100(r30)
      stb       r4, 0x104(r30)
      stb       r4, 0x105(r30)
      stb       r4, 0x10C(r30)
      stb       r4, 0x10D(r30)
      stfs      f0, 0x108(r30)
      stw       r4, 0x40(r30)
      stb       r0, 0x10E(r30)
      stw       r4, 0x110(r30)
      stw       r4, 0x114(r30)
      stfs      f2, 0x118(r30)
      stfs      f2, 0x11C(r30)
      stb       r4, 0x120(r30)
      stb       r4, 0x121(r30)
      stfs      f2, 0x124(r30)
      stb       r4, 0x128(r30)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80325B9C
 * Size:	0000AC
 */
void og::newScreen::ObjVs::__dt(void)
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
      beq-      .loc_0x90
      lis       r4, 0x804E
      subi      r4, r4, 0x65C4
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x80
      lis       r4, 0x804F
      subi      r4, r4, 0x28A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x80
      lis       r4, 0x804E
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0xEB9D0
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x308BD8
      mr        r3, r30
      li        r4, 0
      bl        0xEB970

    .loc_0x80:
      extsh.    r0, r31
      ble-      .loc_0x90
      mr        r3, r30
      bl        -0x301B74

    .loc_0x90:
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
 * Address:	80325C48
 * Size:	000800
 */
void og::newScreen::ObjVs::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stmw      r14, 0x28(r1)
      lis       r5, 0x8049
      mr        r31, r3
      subi      r0, r5, 0xC98
      mr        r14, r4
      stw       r0, 0x20(r1)
      li        r3, 0x1C
      bl        -0x301DD4
      mr.       r15, r3
      beq-      .loc_0xC0
      li        r3, 0x148
      bl        -0x301DE4
      cmplwi    r3, 0
      beq-      .loc_0x50
      bl        0x10F118

    .loc_0x50:
      stw       r3, 0x0(r15)
      li        r3, 0x9C
      bl        -0x301DFC
      cmplwi    r3, 0
      beq-      .loc_0x68
      bl        -0x1FC74

    .loc_0x68:
      stw       r3, 0x4(r15)
      li        r3, 0x44
      bl        -0x301E14
      cmplwi    r3, 0
      beq-      .loc_0x80
      bl        -0x21FC0

    .loc_0x80:
      stw       r3, 0x8(r15)
      li        r3, 0x1C
      bl        -0x301E2C
      cmplwi    r3, 0
      beq-      .loc_0x98
      bl        0x3128

    .loc_0x98:
      stw       r3, 0xC(r15)
      li        r3, 0x1C
      bl        -0x301E44
      cmplwi    r3, 0
      beq-      .loc_0xB0
      bl        0x3110

    .loc_0xB0:
      stw       r3, 0x10(r15)
      li        r0, 0
      stw       r0, 0x14(r15)
      stw       r0, 0x18(r15)

    .loc_0xC0:
      stw       r15, 0x44(r31)
      li        r3, 0x1C
      bl        -0x301E6C
      mr.       r15, r3
      beq-      .loc_0x158
      li        r3, 0x148
      bl        -0x301E7C
      cmplwi    r3, 0
      beq-      .loc_0xE8
      bl        0x10F080

    .loc_0xE8:
      stw       r3, 0x0(r15)
      li        r3, 0x9C
      bl        -0x301E94
      cmplwi    r3, 0
      beq-      .loc_0x100
      bl        -0x1FD0C

    .loc_0x100:
      stw       r3, 0x4(r15)
      li        r3, 0x44
      bl        -0x301EAC
      cmplwi    r3, 0
      beq-      .loc_0x118
      bl        -0x22058

    .loc_0x118:
      stw       r3, 0x8(r15)
      li        r3, 0x1C
      bl        -0x301EC4
      cmplwi    r3, 0
      beq-      .loc_0x130
      bl        0x3090

    .loc_0x130:
      stw       r3, 0xC(r15)
      li        r3, 0x1C
      bl        -0x301EDC
      cmplwi    r3, 0
      beq-      .loc_0x148
      bl        0x3078

    .loc_0x148:
      stw       r3, 0x10(r15)
      li        r0, 0
      stw       r0, 0x14(r15)
      stw       r0, 0x18(r15)

    .loc_0x158:
      stw       r15, 0x48(r31)
      mr        r3, r31
      bl        0x12E200
      lis       r4, 0x4F
      mr        r15, r3
      li        r6, 0x5653
      li        r5, 0
      addi      r4, r4, 0x4741
      bl        -0x16AA4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x18C
      stw       r15, 0x38(r31)
      b         .loc_0x2A4

    .loc_0x18C:
      lis       r4, 0x4F
      lis       r6, 0x554D
      mr        r3, r15
      li        r5, 0x44
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x4D59
      bl        -0x16AD0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x288
      li        r3, 0x74
      bl        -0x301F58
      cmplwi    r3, 0
      beq-      .loc_0x280
      lis       r5, 0x804B
      lis       r4, 0x804C
      addi      r0, r5, 0x1148
      li        r10, 0
      stw       r0, 0x0(r3)
      addi      r0, r4, 0xF14
      lfs       f0, -0x5C8(r2)
      li        r9, 0x4D2
      stw       r10, 0x4(r3)
      li        r8, 0x32
      lfs       f1, -0x5BC(r2)
      li        r7, 0x1
      stw       r0, 0x0(r3)
      li        r6, 0x2
      li        r5, 0xA
      li        r4, 0x6F
      stfs      f0, 0xC(r3)
      li        r0, 0xDE
      lfs       f0, -0x5B8(r2)
      stw       r10, 0x10(r3)
      stw       r10, 0x18(r3)
      stw       r9, 0x14(r3)
      stw       r8, 0x1C(r3)
      stb       r10, 0x20(r3)
      stw       r10, 0x24(r3)
      stfs      f1, 0x28(r3)
      stw       r7, 0x2C(r3)
      stw       r6, 0x30(r3)
      stw       r5, 0x34(r3)
      stw       r5, 0x38(r3)
      stb       r7, 0x3C(r3)
      stfs      f1, 0x40(r3)
      stw       r7, 0x44(r3)
      stw       r6, 0x48(r3)
      stw       r5, 0x4C(r3)
      stw       r5, 0x50(r3)
      stb       r7, 0x54(r3)
      stw       r4, 0x58(r3)
      stw       r0, 0x5C(r3)
      stw       r10, 0x60(r3)
      stw       r10, 0x64(r3)
      stw       r10, 0x8(r3)
      stb       r10, 0x68(r3)
      stb       r10, 0x69(r3)
      stb       r10, 0x6A(r3)
      stb       r10, 0x6B(r3)
      stfs      f0, 0x6C(r3)
      stfs      f0, 0x70(r3)

    .loc_0x280:
      stw       r3, 0x38(r31)
      b         .loc_0x2A4

    .loc_0x288:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x20(r1)
      addi      r3, r3, 0
      addi      r5, r4, 0xC
      li        r4, 0xF6
      crclr     6, 0x6
      bl        -0x2FB8A8

    .loc_0x2A4:
      li        r3, 0xC
      bl        -0x30204C
      cmplwi    r3, 0
      beq-      .loc_0x2BC
      li        r4, 0x2
      bl        -0x16F78

    .loc_0x2BC:
      stw       r3, 0x3C(r31)
      mr        r7, r14
      lwz       r3, 0x20(r1)
      lis       r6, 0x104
      lwz       r5, 0x44(r31)
      addi      r4, r3, 0x28
      lwz       r3, 0x3C(r31)
      lwz       r5, 0x0(r5)
      bl        -0x16F04
      lwz       r5, 0x48(r31)
      mr        r7, r14
      lwz       r4, 0x20(r1)
      lis       r6, 0x104
      lwz       r3, 0x3C(r31)
      lwz       r5, 0x0(r5)
      addi      r4, r4, 0x3C
      bl        -0x16F24
      lwz       r6, 0x38(r31)
      mr        r5, r14
      lwz       r3, 0x44(r31)
      addi      r4, r6, 0x28
      addi      r6, r6, 0x58
      bl        0xF14
      lwz       r6, 0x38(r31)
      mr        r5, r14
      lwz       r3, 0x48(r31)
      addi      r4, r6, 0x40
      addi      r6, r6, 0x5C
      bl        0xEFC
      li        r3, 0x148
      bl        -0x3020D8
      mr.       r15, r3
      beq-      .loc_0x348
      bl        0x10EE24
      mr        r15, r3

    .loc_0x348:
      lwz       r4, 0x20(r1)
      mr        r3, r15
      mr        r6, r14
      lis       r5, 0x104
      addi      r4, r4, 0x50
      bl        -0x2E6980
      mr        r3, r15
      lwz       r8, 0x44(r31)
      lwz       r12, 0x0(r15)
      lis       r4, 0x5F72
      lwz       r7, 0x48(r31)
      addi      r6, r4, 0x6564
      lwz       r12, 0x3C(r12)
      li        r5, 0x5062
      lwz       r17, 0x0(r8)
      lwz       r29, 0x0(r7)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r15
      lwz       r12, 0x0(r15)
      lis       r5, 0x656C
      lis       r4, 0x5062
      mr        r16, r0
      lwz       r12, 0x3C(r12)
      addi      r6, r5, 0x6C6F
      addi      r5, r4, 0x5F79
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r15
      lwz       r12, 0x0(r15)
      lis       r5, 0x626C
      lis       r4, 0x50
      mr        r20, r0
      lwz       r12, 0x3C(r12)
      addi      r6, r5, 0x7565
      addi      r5, r4, 0x625F
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r15
      lwz       r12, 0x0(r15)
      lis       r4, 0x5063
      mr        r15, r0
      li        r5, 0
      lwz       r12, 0x3C(r12)
      addi      r6, r4, 0x7570
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r17
      lwz       r12, 0x0(r17)
      lis       r4, 0x524F
      mr        r19, r0
      li        r5, 0
      lwz       r12, 0x3C(r12)
      addi      r6, r4, 0x4F54
      mtctr     r12
      bctrl
      lis       r8, 0x8051
      lis       r7, 0x5F30
      lis       r6, 0x6264
      lis       r5, 0x6E64
      lis       r4, 0x7764
      lfd       f31, -0x5B0(r2)
      mr        r30, r3
      mr        r26, r31
      addi      r23, r8, 0x3F40
      addi      r22, r7, 0x3030
      addi      r21, r6, 0x3150
      addi      r18, r5, 0x3150
      addi      r17, r4, 0x3150
      li        r27, 0
      li        r25, 0
      lis       r24, 0x4330

    .loc_0x478:
      xoris     r0, r25, 0x8000
      srawi     r28, r27, 0x1F
      stw       r0, 0xC(r1)
      addc      r6, r27, r22
      lfs       f1, 0x10(r23)
      adde      r5, r28, r21
      stw       r24, 0x8(r1)
      mr        r3, r20
      lfs       f2, 0x14(r23)
      mr        r4, r30
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f31
      fadds     f1, f1, f0
      bl        -0x174A4
      xoris     r0, r25, 0x8000
      stw       r3, 0x54(r26)
      addc      r6, r27, r22
      mr        r3, r19
      stw       r0, 0x14(r1)
      adde      r5, r28, r18
      lfs       f1, 0x10(r23)
      mr        r4, r30
      stw       r24, 0x10(r1)
      lfs       f2, 0x14(r23)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f31
      fadds     f1, f1, f0
      bl        -0x174DC
      xoris     r0, r25, 0x8000
      stw       r3, 0x64(r26)
      addc      r6, r27, r22
      mr        r3, r15
      stw       r0, 0x1C(r1)
      adde      r5, r28, r17
      lfs       f1, 0x10(r23)
      mr        r4, r30
      stw       r24, 0x18(r1)
      lfs       f2, 0x14(r23)
      lfd       f0, 0x18(r1)
      fsubs     f0, f0, f31
      fadds     f1, f1, f0
      bl        -0x17514
      stw       r3, 0x74(r26)
      li        r3, 0x1C
      bl        -0x3022CC
      cmplwi    r3, 0
      beq-      .loc_0x538
      bl        0x2C88

    .loc_0x538:
      stw       r3, 0xB4(r26)
      li        r3, 0x1C
      bl        -0x3022E4
      cmplwi    r3, 0
      beq-      .loc_0x550
      bl        0x2C70

    .loc_0x550:
      stw       r3, 0xD4(r26)
      addi      r27, r27, 0x1
      cmpwi     r27, 0x4
      li        r0, 0
      lwz       r3, 0x74(r26)
      addi      r25, r25, 0x28
      addi      r26, r26, 0x4
      stb       r0, 0xB0(r3)
      blt+      .loc_0x478
      mr        r3, r29
      lis       r4, 0x524F
      lwz       r12, 0x0(r29)
      addi      r6, r4, 0x4F54
      li        r5, 0
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lis       r8, 0x8051
      lis       r7, 0x5F30
      lis       r6, 0x6264
      lis       r5, 0x6E64
      lis       r4, 0x7764
      lfd       f31, -0x5B0(r2)
      mr        r18, r3
      mr        r21, r31
      addi      r24, r8, 0x3F40
      addi      r26, r7, 0x3030
      addi      r27, r6, 0x3250
      addi      r28, r5, 0x3250
      addi      r29, r4, 0x3250
      li        r17, 0
      li        r22, 0
      lis       r25, 0x4330

    .loc_0x5D4:
      xoris     r0, r22, 0x8000
      srawi     r15, r17, 0x1F
      stw       r0, 0x1C(r1)
      addc      r6, r17, r26
      lfs       f1, 0x10(r23)
      adde      r5, r15, r27
      stw       r25, 0x18(r1)
      mr        r3, r20
      lfs       f2, 0x18(r24)
      mr        r4, r18
      lfd       f0, 0x18(r1)
      fsubs     f0, f0, f31
      fadds     f1, f1, f0
      bl        -0x17600
      xoris     r0, r22, 0x8000
      stw       r3, 0x84(r21)
      addc      r6, r17, r26
      mr        r3, r19
      stw       r0, 0x14(r1)
      adde      r5, r15, r28
      lfs       f1, 0x10(r23)
      mr        r4, r18
      stw       r25, 0x10(r1)
      lfs       f2, 0x18(r24)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f31
      fadds     f1, f1, f0
      bl        -0x17638
      xoris     r0, r22, 0x8000
      stw       r3, 0x94(r21)
      addc      r6, r17, r26
      mr        r3, r16
      stw       r0, 0xC(r1)
      adde      r5, r15, r29
      lfs       f1, 0x10(r23)
      mr        r4, r18
      stw       r25, 0x8(r1)
      lfs       f2, 0x18(r24)
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f31
      fadds     f1, f1, f0
      bl        -0x17670
      stw       r3, 0xA4(r21)
      li        r3, 0x1C
      bl        -0x302428
      cmplwi    r3, 0
      beq-      .loc_0x694
      bl        0x2B2C

    .loc_0x694:
      stw       r3, 0xC4(r21)
      li        r3, 0x1C
      bl        -0x302440
      cmplwi    r3, 0
      beq-      .loc_0x6AC
      bl        0x2B14

    .loc_0x6AC:
      stw       r3, 0xE4(r21)
      addi      r17, r17, 0x1
      cmpwi     r17, 0x4
      li        r0, 0
      lwz       r3, 0xA4(r21)
      addi      r22, r22, 0x28
      addi      r21, r21, 0x4
      stb       r0, 0xB0(r3)
      blt+      .loc_0x5D4
      li        r3, 0x148
      bl        -0x302478
      cmplwi    r3, 0
      beq-      .loc_0x6E4
      bl        0x10EA84

    .loc_0x6E4:
      stw       r3, 0x40(r31)
      mr        r6, r14
      lwz       r3, 0x20(r1)
      lis       r5, 0x104
      addi      r4, r3, 0x5C
      lwz       r3, 0x40(r31)
      bl        -0x2E6D20
      lwz       r3, 0x40(r31)
      lis       r4, 0x6261
      addi      r6, r4, 0x6B65
      li        r5, 0x6F
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lis       r6, 0x6B65
      addi      r14, r4, 0x3F40
      lis       r5, 0x6F
      lfs       f1, 0x1C(r14)
      mr        r15, r3
      lfs       f2, 0x20(r14)
      mr        r4, r30
      addi      r6, r6, 0x3150
      addi      r5, r5, 0x6261
      bl        -0x17740
      stw       r3, 0x110(r31)
      lis       r3, 0x8051
      addi      r3, r3, 0x3F40
      lis       r6, 0x6B65
      lis       r5, 0x6F
      lfs       f1, 0x1C(r14)
      lfs       f2, 0x24(r3)
      mr        r3, r15
      mr        r4, r18
      addi      r6, r6, 0x3250
      addi      r5, r5, 0x6261
      bl        -0x17770
      stw       r3, 0x114(r31)
      lfs       f1, -0x5B4(r2)
      lfs       f0, 0x118(r31)
      lwz       r3, 0x110(r31)
      fmuls     f0, f1, f0
      lwz       r12, 0x0(r3)
      fctiwz    f0, f0
      lwz       r12, 0x24(r12)
      stfd      f0, 0x18(r1)
      lwz       r4, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, -0x5B4(r2)
      lfs       f0, 0x11C(r31)
      lwz       r3, 0x114(r31)
      fmuls     f0, f1, f0
      lwz       r12, 0x0(r3)
      fctiwz    f0, f0
      lwz       r12, 0x24(r12)
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0
      bl        .loc_0x800
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      lmw       r14, 0x28(r1)
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr

    .loc_0x800:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void og::newScreen::ObjVs::isCompBdama((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void og::newScreen::ObjVs::startGetBdama((J2DPane*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void og::newScreen::ObjVs::startBdamaComp((J2DPane*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void og::newScreen::ObjVs::startBdamaWinRed((J2DPane*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void og::newScreen::ObjVs::startBdamaWinBlue((J2DPane*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80326448
 * Size:	000A28
 */
void og::newScreen::ObjVs::setOnOffBdama((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x1F0(r1)
      mflr      r0
      stw       r0, 0x1F4(r1)
      stfd      f31, 0x1E0(r1)
      psq_st    f31,0x1E8(r1),0,0
      stfd      f30, 0x1D0(r1)
      psq_st    f30,0x1D8(r1),0,0
      stfd      f29, 0x1C0(r1)
      psq_st    f29,0x1C8(r1),0,0
      stfd      f28, 0x1B0(r1)
      psq_st    f28,0x1B8(r1),0,0
      stmw      r20, 0x180(r1)
      mr        r26, r3
      mr        r27, r4
      mr        r31, r26
      li        r30, 0
      li        r29, 0
      li        r28, 0

    .loc_0x48:
      lwz       r3, 0xB4(r31)
      bl        0x2AF0
      fmr       f30, f1
      lwz       r3, 0xC4(r31)
      bl        0x2AE4
      fmr       f31, f1
      lwz       r3, 0xD4(r31)
      bl        0x2AD8
      fmr       f28, f1
      lwz       r3, 0xE4(r31)
      bl        0x2ACC
      lwz       r3, 0x74(r31)
      fmr       f29, f1
      stfs      f28, 0xCC(r3)
      stfs      f28, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xA4(r31)
      stfs      f29, 0xCC(r3)
      stfs      f29, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x38(r26)
      lbz       r0, 0x68(r3)
      cmplwi    r0, 0
      beq-      .loc_0x228
      lwz       r0, 0x60(r3)
      cmpw      r0, r28
      bne-      .loc_0x228
      lfs       f2, 0x108(r26)
      lfs       f1, -0x5C8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x228
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x108(r26)
      lfs       f0, 0x108(r26)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x228
      lwz       r3, 0x74(r31)
      li        r4, 0x1
      stb       r4, 0xB0(r3)
      lbz       r0, 0x10C(r26)
      cmplwi    r0, 0
      bne-      .loc_0x228
      rlwinm.   r0,r27,0,24,31
      stb       r4, 0x10C(r26)
      beq-      .loc_0x228
      lwz       r3, 0x74(r31)
      addi      r4, r1, 0x80
      bl        -0x23E0C
      lis       r3, 0x804C
      li        r21, 0xFF
      addi      r0, r3, 0x14F0
      li        r8, 0
      lwz       r3, 0x80(r1)
      lis       r7, 0x804C
      li        r12, 0x20
      lwz       r5, 0x84(r1)
      li        r23, 0x57
      li        r22, 0x87
      stw       r3, 0x50(r1)
      lis       r3, 0x804C
      lis       r4, 0x804E
      lfs       f0, -0x5BC(r2)
      stw       r5, 0x54(r1)
      addi      r11, r3, 0x1514
      lfs       f2, 0x50(r1)
      lis       r9, 0x804C
      lfs       f1, 0x54(r1)
      lis       r3, 0x804E
      li        r6, 0x22
      li        r5, 0x23
      stw       r0, 0x16C(r1)
      addi      r0, r7, 0x14D8
      addi      r7, r4, 0x7470
      addi      r10, r9, 0x1508
      stw       r0, 0x16C(r1)
      addi      r0, r3, 0x75E0
      addi      r3, r1, 0x16C
      addi      r4, r1, 0x154
      stw       r11, 0x15C(r1)
      stw       r7, 0x16C(r1)
      stb       r23, 0x20(r1)
      stb       r22, 0x21(r1)
      stb       r21, 0x22(r1)
      stb       r21, 0x23(r1)
      lwz       r9, 0x20(r1)
      stb       r12, 0x24(r1)
      stb       r12, 0x25(r1)
      stb       r21, 0x26(r1)
      stb       r21, 0x27(r1)
      lwz       r7, 0x24(r1)
      stfs      f2, 0x154(r1)
      stfs      f1, 0x158(r1)
      stw       r10, 0x15C(r1)
      stfs      f0, 0x160(r1)
      stw       r9, 0x164(r1)
      stw       r7, 0x168(r1)
      stb       r8, 0x170(r1)
      stb       r8, 0x171(r1)
      sth       r6, 0x174(r1)
      sth       r5, 0x176(r1)
      stw       r8, 0x178(r1)
      stw       r8, 0x17C(r1)
      stw       r0, 0x16C(r1)
      bl        0x93CEC
      lwz       r3, -0x6858(r13)
      bl        -0x1969C
      li        r0, 0x1
      stw       r0, 0x100(r26)
      lwz       r3, 0xD4(r31)
      bl        0x27E0
      li        r30, 0x1

    .loc_0x228:
      lwz       r3, 0x38(r26)
      lbz       r0, 0x69(r3)
      cmplwi    r0, 0
      beq-      .loc_0x398
      lwz       r0, 0x64(r3)
      cmpw      r0, r28
      bne-      .loc_0x398
      lfs       f2, 0x108(r26)
      lfs       f1, -0x5C8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x398
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x108(r26)
      lfs       f0, 0x108(r26)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x398
      lwz       r3, 0xA4(r31)
      li        r4, 0x1
      stb       r4, 0xB0(r3)
      lbz       r0, 0x10D(r26)
      cmplwi    r0, 0
      bne-      .loc_0x398
      rlwinm.   r0,r27,0,24,31
      stb       r4, 0x10D(r26)
      beq-      .loc_0x398
      lwz       r3, 0xA4(r31)
      addi      r4, r1, 0x78
      bl        -0x23F84
      lis       r3, 0x804C
      li        r11, 0
      addi      r0, r3, 0x14F0
      li        r21, 0xFF
      lwz       r4, 0x78(r1)
      lis       r3, 0x804C
      li        r12, 0x87
      lwz       r6, 0x7C(r1)
      stw       r4, 0x48(r1)
      lis       r5, 0x804C
      lis       r4, 0x804E
      addi      r8, r3, 0x14D8
      stw       r0, 0x140(r1)
      addi      r10, r5, 0x1514
      lfs       f2, 0x48(r1)
      lis       r9, 0x804C
      stw       r6, 0x4C(r1)
      lis       r3, 0x804E
      lfs       f0, -0x5BC(r2)
      li        r6, 0x22
      lfs       f1, 0x4C(r1)
      li        r5, 0x23
      stb       r21, 0x18(r1)
      addi      r7, r4, 0x7470
      addi      r9, r9, 0x1508
      addi      r0, r3, 0x75E0
      stw       r8, 0x140(r1)
      addi      r3, r1, 0x140
      addi      r4, r1, 0x128
      stw       r10, 0x130(r1)
      stw       r7, 0x140(r1)
      stb       r12, 0x19(r1)
      stb       r12, 0x1A(r1)
      stb       r21, 0x1B(r1)
      lwz       r8, 0x18(r1)
      stb       r21, 0x1C(r1)
      stb       r11, 0x1D(r1)
      stb       r11, 0x1E(r1)
      stb       r21, 0x1F(r1)
      lwz       r7, 0x1C(r1)
      stfs      f2, 0x128(r1)
      stfs      f1, 0x12C(r1)
      stw       r9, 0x130(r1)
      stfs      f0, 0x134(r1)
      stw       r8, 0x138(r1)
      stw       r7, 0x13C(r1)
      stb       r11, 0x144(r1)
      stb       r11, 0x145(r1)
      sth       r6, 0x148(r1)
      sth       r5, 0x14A(r1)
      stw       r11, 0x14C(r1)
      stw       r11, 0x150(r1)
      stw       r0, 0x140(r1)
      bl        0x93B7C
      lwz       r3, -0x6858(r13)
      bl        -0x1980C
      li        r0, 0x1
      stw       r0, 0x100(r26)
      lwz       r3, 0xE4(r31)
      bl        0x2670
      li        r29, 0x1

    .loc_0x398:
      lbz       r0, 0x10C(r26)
      cmplwi    r0, 0
      bne-      .loc_0x748
      lbz       r0, 0x10D(r26)
      cmplwi    r0, 0
      bne-      .loc_0x748
      lwz       r3, 0x38(r26)
      lwz       r0, 0x60(r3)
      cmpw      r0, r28
      ble-      .loc_0x53C
      lwz       r3, 0x64(r31)
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xB0(r3)
      lwz       r3, 0x54(r31)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x54(r31)
      stfs      f30, 0xCC(r3)
      stfs      f30, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r25, r28, 0xF4
      lbzx      r0, r26, r25
      cmplwi    r0, 0
      bne-      .loc_0x530
      cmpwi     r28, 0x3
      li        r3, 0
      bne-      .loc_0x418
      li        r3, 0x1
      stw       r3, 0x100(r26)

    .loc_0x418:
      rlwinm.   r0,r27,0,24,31
      stb       r3, 0x104(r26)
      beq-      .loc_0x530
      lwz       r0, 0x100(r26)
      lwz       r21, 0x54(r31)
      cmpwi     r0, 0x1
      beq-      .loc_0x528
      lwz       r3, -0x6858(r13)
      bl        -0x198C4
      mr        r3, r21
      addi      r4, r1, 0x70
      bl        -0x24128
      lis       r3, 0x804C
      li        r0, 0
      addi      r12, r3, 0x14F0
      li        r8, 0xE7
      lwz       r3, 0x70(r1)
      lis       r9, 0x804C
      li        r6, 0xFF
      li        r5, 0xCF
      lwz       r10, 0x74(r1)
      li        r7, 0x57
      stw       r3, 0x40(r1)
      lis       r3, 0x804C
      lis       r4, 0x804E
      lfs       f0, -0x5BC(r2)
      stw       r10, 0x44(r1)
      addi      r22, r3, 0x1514
      lfs       f2, 0x40(r1)
      lis       r21, 0x804C
      lfs       f1, 0x44(r1)
      lis       r3, 0x804E
      li        r11, 0x22
      li        r10, 0x23
      stw       r12, 0x114(r1)
      addi      r9, r9, 0x14D8
      addi      r12, r4, 0x7470
      addi      r21, r21, 0x1508
      stw       r9, 0x114(r1)
      addi      r9, r3, 0x75E0
      addi      r3, r1, 0x114
      addi      r4, r1, 0xFC
      stw       r22, 0x104(r1)
      stw       r12, 0x114(r1)
      stb       r8, 0x10(r1)
      stb       r8, 0x11(r1)
      stb       r7, 0x12(r1)
      stb       r6, 0x13(r1)
      lwz       r7, 0x10(r1)
      stb       r5, 0x14(r1)
      stb       r5, 0x15(r1)
      stb       r0, 0x16(r1)
      stb       r6, 0x17(r1)
      lwz       r5, 0x14(r1)
      stfs      f2, 0xFC(r1)
      stfs      f1, 0x100(r1)
      stw       r21, 0x104(r1)
      stfs      f0, 0x108(r1)
      stw       r7, 0x10C(r1)
      stw       r5, 0x110(r1)
      stb       r0, 0x118(r1)
      stb       r0, 0x119(r1)
      sth       r11, 0x11C(r1)
      sth       r10, 0x11E(r1)
      stw       r0, 0x120(r1)
      stw       r0, 0x124(r1)
      stw       r9, 0x114(r1)
      bl        0x939D0

    .loc_0x528:
      lwz       r3, 0xB4(r31)
      bl        0x24D4

    .loc_0x530:
      li        r0, 0x1
      stbx      r0, r26, r25
      b         .loc_0x57C

    .loc_0x53C:
      lwz       r3, 0x54(r31)
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xB0(r3)
      lwz       r3, 0x64(r31)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x64(r31)
      stfs      f30, 0xCC(r3)
      stfs      f30, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r0, r28, 0xF4
      li        r3, 0
      stbx      r3, r26, r0

    .loc_0x57C:
      lwz       r3, 0x38(r26)
      lwz       r0, 0x64(r3)
      cmpw      r0, r28
      ble-      .loc_0x708
      lwz       r3, 0x94(r31)
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xB0(r3)
      lwz       r3, 0x84(r31)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x84(r31)
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r25, r28, 0xF8
      lbzx      r0, r26, r25
      cmplwi    r0, 0
      bne-      .loc_0x6FC
      cmpwi     r28, 0x3
      li        r3, 0
      bne-      .loc_0x5E4
      li        r3, 0x1
      stw       r3, 0x100(r26)

    .loc_0x5E4:
      rlwinm.   r0,r27,0,24,31
      stb       r3, 0x105(r26)
      beq-      .loc_0x6FC
      lwz       r0, 0x100(r26)
      lwz       r21, 0x84(r31)
      cmpwi     r0, 0x1
      beq-      .loc_0x6F4
      lwz       r3, -0x6858(r13)
      bl        -0x19A90
      mr        r3, r21
      addi      r4, r1, 0x68
      bl        -0x242F4
      lis       r3, 0x804C
      li        r0, 0
      addi      r12, r3, 0x14F0
      li        r8, 0xE7
      lwz       r3, 0x68(r1)
      lis       r9, 0x804C
      li        r6, 0xFF
      li        r5, 0xCF
      lwz       r10, 0x6C(r1)
      li        r7, 0x57
      stw       r3, 0x38(r1)
      lis       r3, 0x804C
      lis       r4, 0x804E
      lfs       f0, -0x5BC(r2)
      stw       r10, 0x3C(r1)
      addi      r22, r3, 0x1514
      lfs       f2, 0x38(r1)
      lis       r21, 0x804C
      lfs       f1, 0x3C(r1)
      lis       r3, 0x804E
      li        r11, 0x22
      li        r10, 0x23
      stw       r12, 0xE8(r1)
      addi      r9, r9, 0x14D8
      addi      r12, r4, 0x7470
      addi      r21, r21, 0x1508
      stw       r9, 0xE8(r1)
      addi      r9, r3, 0x75E0
      addi      r3, r1, 0xE8
      addi      r4, r1, 0xD0
      stw       r22, 0xD8(r1)
      stw       r12, 0xE8(r1)
      stb       r8, 0x8(r1)
      stb       r8, 0x9(r1)
      stb       r7, 0xA(r1)
      stb       r6, 0xB(r1)
      lwz       r7, 0x8(r1)
      stb       r5, 0xC(r1)
      stb       r5, 0xD(r1)
      stb       r0, 0xE(r1)
      stb       r6, 0xF(r1)
      lwz       r5, 0xC(r1)
      stfs      f2, 0xD0(r1)
      stfs      f1, 0xD4(r1)
      stw       r21, 0xD8(r1)
      stfs      f0, 0xDC(r1)
      stw       r7, 0xE0(r1)
      stw       r5, 0xE4(r1)
      stb       r0, 0xEC(r1)
      stb       r0, 0xED(r1)
      sth       r11, 0xF0(r1)
      sth       r10, 0xF2(r1)
      stw       r0, 0xF4(r1)
      stw       r0, 0xF8(r1)
      stw       r9, 0xE8(r1)
      bl        0x93804

    .loc_0x6F4:
      lwz       r3, 0xC4(r31)
      bl        0x2308

    .loc_0x6FC:
      li        r0, 0x1
      stbx      r0, r26, r25
      b         .loc_0x748

    .loc_0x708:
      lwz       r3, 0x84(r31)
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xB0(r3)
      lwz       r3, 0x94(r31)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x94(r31)
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r0, r28, 0xF8
      li        r3, 0
      stbx      r3, r26, r0

    .loc_0x748:
      addi      r28, r28, 0x1
      addi      r31, r31, 0x4
      cmpwi     r28, 0x4
      blt+      .loc_0x48
      lbz       r0, 0x104(r26)
      cmplwi    r0, 0
      beq-      .loc_0x874
      lfs       f2, 0x108(r26)
      lfs       f1, -0x5C8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x874
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x108(r26)
      lfs       f0, 0x108(r26)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x874
      rlwinm.   r0,r27,0,24,31
      beq-      .loc_0x874
      lwz       r3, -0x6858(r13)
      bl        -0x19C2C
      lis       r8, 0x804C
      lis       r7, 0x804E
      lis       r6, 0x804C
      lis       r5, 0x804C
      lis       r4, 0x804E
      lis       r3, 0x804E
      lfs       f30, -0x5A8(r2)
      mr        r25, r26
      addi      r31, r8, 0x1514
      subi      r28, r7, 0x65D0
      addi      r21, r6, 0x14F0
      addi      r24, r5, 0x14D8
      addi      r23, r4, 0x7470
      addi      r22, r3, 0x75F8
      li        r20, 0

    .loc_0x7E0:
      lwz       r3, 0xB4(r25)
      bl        0x221C
      lwz       r3, 0x54(r25)
      addi      r4, r1, 0x60
      bl        -0x244D4
      stw       r21, 0xBC(r1)
      li        r6, 0
      lwz       r3, 0x60(r1)
      li        r5, 0x1A
      lwz       r7, 0x64(r1)
      li        r0, 0x1B
      stw       r3, 0x30(r1)
      addi      r3, r1, 0xBC
      addi      r4, r1, 0x98
      stw       r7, 0x34(r1)
      lfs       f1, 0x30(r1)
      stw       r24, 0xBC(r1)
      lfs       f0, 0x34(r1)
      stw       r31, 0xA0(r1)
      stw       r23, 0xBC(r1)
      stfs      f1, 0x98(r1)
      stfs      f0, 0x9C(r1)
      stw       r28, 0xA0(r1)
      stfs      f30, 0xA4(r1)
      stb       r6, 0xC0(r1)
      stb       r6, 0xC1(r1)
      sth       r5, 0xC4(r1)
      sth       r0, 0xC6(r1)
      stw       r6, 0xC8(r1)
      stw       r6, 0xCC(r1)
      stw       r22, 0xBC(r1)
      bl        0x935C0
      addi      r20, r20, 0x1
      li        r30, 0x1
      cmpwi     r20, 0x4
      addi      r25, r25, 0x4
      blt+      .loc_0x7E0

    .loc_0x874:
      lbz       r0, 0x105(r26)
      cmplwi    r0, 0
      beq-      .loc_0x990
      lfs       f2, 0x108(r26)
      lfs       f1, -0x5C8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x990
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x108(r26)
      lfs       f0, 0x108(r26)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x990
      rlwinm.   r0,r27,0,24,31
      beq-      .loc_0x990
      lwz       r3, -0x6858(r13)
      bl        -0x19D48
      lis       r8, 0x804C
      lis       r7, 0x804E
      lis       r6, 0x804C
      lis       r5, 0x804C
      lis       r4, 0x804E
      lis       r3, 0x804E
      lfs       f30, -0x5A8(r2)
      mr        r25, r26
      addi      r27, r8, 0x1514
      subi      r22, r7, 0x65D0
      addi      r23, r6, 0x14F0
      addi      r24, r5, 0x14D8
      addi      r31, r4, 0x7470
      addi      r28, r3, 0x75F8
      li        r20, 0

    .loc_0x8FC:
      lwz       r3, 0xC4(r25)
      bl        0x2100
      lwz       r3, 0x84(r25)
      addi      r4, r1, 0x58
      bl        -0x245F0
      stw       r23, 0xA8(r1)
      li        r6, 0
      lwz       r3, 0x58(r1)
      li        r5, 0x1A
      lwz       r7, 0x5C(r1)
      li        r0, 0x1B
      stw       r3, 0x28(r1)
      addi      r3, r1, 0xA8
      addi      r4, r1, 0x88
      stw       r7, 0x2C(r1)
      lfs       f1, 0x28(r1)
      stw       r24, 0xA8(r1)
      lfs       f0, 0x2C(r1)
      stw       r27, 0x90(r1)
      stw       r31, 0xA8(r1)
      stfs      f1, 0x88(r1)
      stfs      f0, 0x8C(r1)
      stw       r22, 0x90(r1)
      stfs      f30, 0x94(r1)
      stb       r6, 0xAC(r1)
      stb       r6, 0xAD(r1)
      sth       r5, 0xB0(r1)
      sth       r0, 0xB2(r1)
      stw       r6, 0xB4(r1)
      stw       r6, 0xB8(r1)
      stw       r28, 0xA8(r1)
      bl        0x934A4
      addi      r20, r20, 0x1
      li        r29, 0x1
      cmpwi     r20, 0x4
      addi      r25, r25, 0x4
      blt+      .loc_0x8FC

    .loc_0x990:
      lbz       r0, 0x128(r26)
      cmplwi    r0, 0
      bne-      .loc_0x9F4
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x9C0
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x9C0
      lwz       r3, -0x6858(r13)
      bl        -0x19C4C
      li        r0, 0x1
      stb       r0, 0x128(r26)
      b         .loc_0x9F4

    .loc_0x9C0:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x9DC
      lwz       r3, -0x6858(r13)
      bl        -0x19E28
      li        r0, 0x1
      stb       r0, 0x128(r26)
      b         .loc_0x9F4

    .loc_0x9DC:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x9F4
      lwz       r3, -0x6858(r13)
      bl        -0x19D64
      li        r0, 0x1
      stb       r0, 0x128(r26)

    .loc_0x9F4:
      psq_l     f31,0x1E8(r1),0,0
      lfd       f31, 0x1E0(r1)
      psq_l     f30,0x1D8(r1),0,0
      lfd       f30, 0x1D0(r1)
      psq_l     f29,0x1C8(r1),0,0
      lfd       f29, 0x1C0(r1)
      psq_l     f28,0x1B8(r1),0,0
      lfd       f28, 0x1B0(r1)
      lmw       r20, 0x180(r1)
      lwz       r0, 0x1F4(r1)
      mtlr      r0
      addi      r1, r1, 0x1F0
      blr
    */
}

/*
 * --INFO--
 * Address:	80326E70
 * Size:	0002B8
 */
void og::newScreen::ObjVs::ScreenSet::init((og::Screen::DataNavi*, JKRArchive*,
                                            unsigned long*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r27, 0x2C(r1)
      mr        r29, r3
      mr        r30, r4
      mr        r31, r5
      mr        r27, r6
      li        r3, 0x44
      bl        -0x302FF0
      mr.       r28, r3
      beq-      .loc_0x38
      bl        -0x1F680
      mr        r28, r3

    .loc_0x38:
      lis       r5, 0x7069
      lwz       r4, 0x0(r29)
      mr        r3, r28
      mr        r8, r31
      addi      r6, r5, 0x6B69
      addi      r7, r30, 0x8
      li        r5, 0
      bl        -0x1F5E8
      lis       r4, 0x7069
      lwz       r3, 0x0(r29)
      mr        r7, r28
      li        r5, 0
      addi      r6, r4, 0x6B69
      bl        0x10DC48
      addi      r0, r30, 0x4
      lis       r3, 0x635F
      stw       r0, 0x8(r1)
      li        r0, 0x3
      addi      r8, r3, 0x6D6C
      li        r4, 0x2
      stw       r0, 0xC(r1)
      li        r0, 0x1
      mr        r10, r8
      addi      r6, r3, 0x6D72
      stw       r4, 0x10(r1)
      li        r5, 0
      li        r7, 0
      li        r9, 0
      stw       r0, 0x14(r1)
      stw       r31, 0x18(r1)
      lwz       r3, 0x0(r29)
      bl        -0x1A9F4
      stw       r27, 0x8(r1)
      lis       r3, 0x635F
      li        r0, 0x3
      li        r4, 0x2
      stw       r0, 0xC(r1)
      addi      r8, r3, 0x6C6C
      li        r0, 0x1
      addi      r6, r3, 0x6C72
      stw       r4, 0x10(r1)
      mr        r10, r8
      li        r5, 0
      li        r7, 0
      stw       r0, 0x14(r1)
      li        r9, 0
      stw       r31, 0x18(r1)
      lwz       r3, 0x0(r29)
      bl        -0x1AA38
      li        r0, 0x1828
      lis       r4, 0x6472
      stw       r0, 0x94(r3)
      li        r0, 0x182A
      addi      r8, r4, 0x5F6C
      addi      r5, r30, 0xC
      stw       r0, 0x98(r3)
      li        r7, 0x3
      li        r3, 0x2
      li        r0, 0x1
      stw       r5, 0x8(r1)
      mr        r10, r8
      addi      r6, r4, 0x5F72
      li        r5, 0
      stw       r7, 0xC(r1)
      li        r7, 0
      li        r9, 0
      stw       r3, 0x10(r1)
      stw       r0, 0x14(r1)
      stw       r31, 0x18(r1)
      lwz       r3, 0x0(r29)
      bl        -0x1AA90
      li        r4, 0x1
      bl        -0x1B6EC
      lwz       r3, 0x0(r29)
      lis       r4, 0x6472
      addi      r6, r4, 0x5F63
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6479
      stb       r0, 0xB0(r3)
      addi      r0, r30, 0x10
      addi      r8, r4, 0x5F6C
      li        r5, 0x3
      stw       r0, 0x8(r1)
      li        r3, 0x2
      li        r0, 0x1
      mr        r10, r8
      stw       r5, 0xC(r1)
      addi      r6, r4, 0x5F72
      li        r5, 0
      li        r7, 0
      stw       r3, 0x10(r1)
      li        r9, 0
      stw       r0, 0x14(r1)
      stw       r31, 0x18(r1)
      lwz       r3, 0x0(r29)
      bl        -0x1AB08
      li        r4, 0x1
      bl        -0x1B764
      lwz       r3, 0x0(r29)
      lis       r4, 0x6479
      addi      r6, r4, 0x5F63
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r5, 0x6F5F
      stb       r0, 0xB0(r3)
      lis       r4, 0x74
      addi      r6, r5, 0x3031
      lwz       r3, 0x0(r29)
      addi      r5, r4, 0x6F79
      bl        -0x241D4
      stw       r3, 0x14(r29)
      lis       r5, 0x6F5F
      lis       r4, 0x74
      lwz       r3, 0x0(r29)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x6F79
      bl        -0x241F0
      stw       r3, 0x18(r29)
      lwz       r3, 0x8(r29)
      lwz       r4, 0x14(r29)
      lwz       r5, 0x18(r29)
      lwz       r6, 0xC(r29)
      lwz       r7, 0x10(r29)
      bl        -0x232B4
      lwz       r3, 0x4(r29)
      mr        r5, r30
      lwz       r4, 0x0(r29)
      li        r6, 0
      bl        -0x20ECC
      lis       r4, 0x6261
      lwz       r3, 0x0(r29)
      lwz       r7, 0x4(r29)
      addi      r6, r4, 0x636B
      li        r5, 0
      bl        0x10DA40
      lis       r4, 0x8051
      lwz       r3, 0x4(r29)
      addi      r4, r4, 0x3F40
      lfs       f1, 0x8(r4)
      lfs       f2, 0xC(r4)
      bl        -0x20804
      lis       r4, 0x6D65
      lwz       r3, 0x0(r29)
      addi      r6, r4, 0x7465
      li        r5, 0
      bl        0x6674
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void og::newScreen::ObjVs::ScreenSet::update((og::Screen::DataNavi&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80327128
 * Size:	00056C
 */
void og::newScreen::ObjVs::checkObake(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stfd      f31, 0x90(r1)
      psq_st    f31,0x98(r1),0,0
      stfd      f30, 0x80(r1)
      psq_st    f30,0x88(r1),0,0
      stfd      f29, 0x70(r1)
      psq_st    f29,0x78(r1),0,0
      stfd      f28, 0x60(r1)
      psq_st    f28,0x68(r1),0,0
      stfd      f27, 0x50(r1)
      psq_st    f27,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lbz       r0, 0x120(r3)
      cmplwi    r0, 0
      beq-      .loc_0x94
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x118(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5BC(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x118(r31)
      lfs       f1, 0x118(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x70
      stfs      f0, 0x118(r31)

    .loc_0x70:
      lwz       r3, 0x38(r31)
      lfs       f0, -0x5C8(r2)
      lfs       f1, 0x6C(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xD4
      li        r0, 0
      stb       r0, 0x120(r31)
      b         .loc_0xD4

    .loc_0x94:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x118(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5C8(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x118(r31)
      lfs       f1, 0x118(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xBC
      stfs      f0, 0x118(r31)

    .loc_0xBC:
      lwz       r3, 0x38(r31)
      lbz       r0, 0x6A(r3)
      cmplwi    r0, 0
      beq-      .loc_0xD4
      li        r0, 0x1
      stb       r0, 0x120(r31)

    .loc_0xD4:
      lbz       r0, 0x121(r31)
      cmplwi    r0, 0
      beq-      .loc_0x12C
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x11C(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5BC(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x11C(r31)
      lfs       f1, 0x11C(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x108
      stfs      f0, 0x11C(r31)

    .loc_0x108:
      lwz       r3, 0x38(r31)
      lfs       f0, -0x5C8(r2)
      lfs       f1, 0x70(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x16C
      li        r0, 0
      stb       r0, 0x121(r31)
      b         .loc_0x16C

    .loc_0x12C:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x11C(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x5C8(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x11C(r31)
      lfs       f1, 0x11C(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x154
      stfs      f0, 0x11C(r31)

    .loc_0x154:
      lwz       r3, 0x38(r31)
      lbz       r0, 0x6B(r3)
      cmplwi    r0, 0
      beq-      .loc_0x16C
      li        r0, 0x1
      stb       r0, 0x121(r31)

    .loc_0x16C:
      lfs       f1, -0x5A4(r2)
      lfs       f0, 0x124(r31)
      lfs       f31, -0x5BC(r2)
      fmuls     f1, f1, f0
      lfs       f0, -0x5C8(r2)
      fmr       f30, f31
      fmr       f2, f31
      fmr       f29, f31
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1C0
      lfs       f0, -0x5A0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x1E4

    .loc_0x1C0:
      lfs       f0, -0x59C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x1E4:
      fadds     f1, f31, f0
      lfs       f0, -0x598(r2)
      lbz       r0, 0x120(r31)
      cmplwi    r0, 0
      fmuls     f3, f1, f0
      beq-      .loc_0x228
      lwz       r3, 0x38(r31)
      lfs       f0, -0x594(r2)
      lfs       f1, 0x6C(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x22C
      fdivs     f31, f1, f0
      lfs       f1, -0x5A8(r2)
      lfs       f0, -0x590(r2)
      fmadds    f2, f1, f3, f0
      b         .loc_0x22C

    .loc_0x228:
      lfs       f31, -0x5C8(r2)

    .loc_0x22C:
      lbz       r0, 0x121(r31)
      cmplwi    r0, 0
      beq-      .loc_0x264
      lwz       r3, 0x38(r31)
      lfs       f0, -0x594(r2)
      lfs       f1, 0x70(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x268
      fdivs     f30, f1, f0
      lfs       f1, -0x5A8(r2)
      lfs       f0, -0x590(r2)
      fmadds    f29, f1, f3, f0
      b         .loc_0x268

    .loc_0x264:
      lfs       f30, -0x5C8(r2)

    .loc_0x268:
      lfs       f1, -0x5B4(r2)
      lfs       f0, 0x118(r31)
      lwz       r3, 0x110(r31)
      fmuls     f0, f1, f0
      lwz       r12, 0x0(r3)
      fmuls     f0, f0, f2
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl
      lfs       f1, -0x5B4(r2)
      lfs       f0, 0x11C(r31)
      lwz       r3, 0x114(r31)
      fmuls     f0, f1, f0
      lwz       r12, 0x0(r3)
      fmuls     f0, f0, f29
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lwz       r3, -0x6514(r13)
      lfs       f2, -0x58C(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x124(r31)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x124(r31)
      lfs       f0, 0x124(r31)
      fcmpo     cr0, f0, f2
      ble-      .loc_0x2F4
      fsubs     f0, f0, f2
      stfs      f0, 0x124(r31)

    .loc_0x2F4:
      lfs       f2, 0x124(r31)
      lfs       f0, -0x5C8(r2)
      lfs       f1, -0x588(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x334
      lfs       f0, -0x5A0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x358

    .loc_0x334:
      lfs       f0, -0x59C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x358:
      fmuls     f1, f1, f0
      lfs       f0, -0x5C8(r2)
      fcmpo     cr0, f2, f0
      fmuls     f1, f31, f1
      bge-      .loc_0x398
      lfs       f0, -0x5A0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f29, f0
      b         .loc_0x3BC

    .loc_0x398:
      lfs       f0, -0x59C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f29, r3, r0

    .loc_0x3BC:
      lwz       r3, 0x110(r31)
      bl        -0x2EF0B8
      lfs       f0, -0x588(r2)
      lwz       r3, 0x114(r31)
      fmuls     f0, f0, f29
      fmuls     f1, f30, f0
      bl        -0x2EF0CC
      lfs       f2, 0x124(r31)
      lfs       f0, -0x5C8(r2)
      fmr       f1, f2
      fcmpo     cr0, f2, f0
      bge-      .loc_0x3F0
      fneg      f1, f2

    .loc_0x3F0:
      lfs       f3, -0x59C(r2)
      lis       r4, 0x8051
      lfs       f0, -0x5A4(r2)
      addi      r5, r4, 0x3F40
      fmuls     f1, f1, f3
      lis       r3, 0x8050
      fmuls     f5, f0, f2
      lfs       f0, -0x5C8(r2)
      addi      r4, r3, 0x71A0
      lfs       f4, 0x2C(r5)
      fctiwz    f2, f1
      lfs       f1, 0x30(r5)
      fcmpo     cr0, f5, f0
      stfd      f2, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f29, f4, f0
      bge-      .loc_0x464
      lfs       f0, -0x5A0(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x47C

    .loc_0x464:
      fmuls     f0, f5, f3
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x47C:
      fmuls     f28, f1, f0
      lis       r3, 0x8051
      addi      r4, r3, 0x3F40
      fmuls     f1, f29, f31
      lfs       f27, 0x1C(r4)
      fmuls     f0, f28, f31
      lfs       f2, 0x20(r4)
      fadds     f1, f27, f1
      lwz       r3, 0x110(r31)
      lfs       f31, 0x24(r4)
      fadds     f0, f2, f0
      stfs      f1, 0xD4(r3)
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      fmuls     f1, f29, f30
      lwz       r3, 0x114(r31)
      fmuls     f0, f28, f30
      fadds     f1, f27, f1
      fadds     f0, f31, f0
      stfs      f1, 0xD4(r3)
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x110(r31)
      addi      r4, r4, 0x3F40
      lfs       f27, 0x28(r4)
      stfs      f27, 0xCC(r3)
      stfs      f27, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x114(r31)
      stfs      f27, 0xCC(r3)
      stfs      f27, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x98(r1),0,0
      lfd       f31, 0x90(r1)
      psq_l     f30,0x88(r1),0,0
      lfd       f30, 0x80(r1)
      psq_l     f29,0x78(r1),0,0
      lfd       f29, 0x70(r1)
      psq_l     f28,0x68(r1),0,0
      lfd       f28, 0x60(r1)
      psq_l     f27,0x58(r1),0,0
      lfd       f27, 0x50(r1)
      lwz       r0, 0xA4(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr
    */
}

/*
 * --INFO--
 * Address:	80327694
 * Size:	0002AC
 */
void og::newScreen::ObjVs::doUpdateCommon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      lfs       f2, -0x584(r2)
      mr        r31, r3
      lfs       f1, 0x50(r3)
      lfs       f0, -0x5C8(r2)
      fmuls     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x50
      fneg      f1, f1

    .loc_0x50:
      lfs       f0, -0x59C(r2)
      lis       r3, 0x8050
      lbz       r0, 0x10E(r31)
      addi      r5, r3, 0x71A0
      fmuls     f1, f1, f0
      lfs       f2, -0x5BC(r2)
      cntlzw    r0, r0
      lfs       f0, -0x598(r2)
      rlwinm    r4,r0,27,5,31
      mr        r3, r31
      fctiwz    f1, f1
      stfd      f1, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      add       r5, r5, r0
      lfs       f1, 0x4(r5)
      fadds     f1, f2, f1
      fmuls     f29, f1, f0
      bl        -0x12E4
      mr        r3, r31
      bl        -0x60C
      lwz       r0, 0x100(r31)
      cmpwi     r0, 0x1
      beq-      .loc_0xB8
      bge-      .loc_0xE4
      b         .loc_0xE4

    .loc_0xB8:
      lfs       f1, 0xFC(r31)
      lfs       f0, -0x5C8(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xDC
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0xFC(r31)
      b         .loc_0xE4

    .loc_0xDC:
      li        r0, 0x2
      stw       r0, 0x100(r31)

    .loc_0xE4:
      lwz       r0, 0x100(r31)
      lwz       r3, 0x38(r31)
      stw       r0, 0x8(r3)
      lwz       r29, 0x44(r31)
      lwz       r30, 0x38(r31)
      lwz       r3, 0xC(r29)
      bl        0x17F4
      fmr       f31, f1
      lwz       r3, 0x10(r29)
      bl        0x17E8
      lwz       r3, 0x14(r29)
      fmr       f30, f1
      cmplwi    r3, 0
      beq-      .loc_0x134
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x134:
      lwz       r3, 0x18(r29)
      cmplwi    r3, 0
      beq-      .loc_0x158
      stfs      f30, 0xCC(r3)
      stfs      f30, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x158:
      lwz       r3, 0x8(r29)
      lfs       f0, 0x28(r30)
      stfs      f0, 0x8(r3)
      lwz       r0, 0x2C(r30)
      stw       r0, 0xC(r3)
      lwz       r0, 0x30(r30)
      stw       r0, 0x10(r3)
      lwz       r0, 0x34(r30)
      stw       r0, 0x14(r3)
      lwz       r0, 0x38(r30)
      stw       r0, 0x18(r3)
      lbz       r0, 0x3C(r30)
      stb       r0, 0x1C(r3)
      bl        -0x239D8
      lwz       r29, 0x48(r31)
      lwz       r30, 0x38(r31)
      lwz       r3, 0xC(r29)
      bl        0x1754
      fmr       f30, f1
      lwz       r3, 0x10(r29)
      bl        0x1748
      lwz       r3, 0x14(r29)
      fmr       f31, f1
      cmplwi    r3, 0
      beq-      .loc_0x1D4
      stfs      f30, 0xCC(r3)
      stfs      f30, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x1D4:
      lwz       r3, 0x18(r29)
      cmplwi    r3, 0
      beq-      .loc_0x1F8
      stfs      f31, 0xCC(r3)
      stfs      f31, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x1F8:
      lwz       r3, 0x8(r29)
      lfs       f0, 0x40(r30)
      stfs      f0, 0x8(r3)
      lwz       r0, 0x44(r30)
      stw       r0, 0xC(r3)
      lwz       r0, 0x48(r30)
      stw       r0, 0x10(r3)
      lwz       r0, 0x4C(r30)
      stw       r0, 0x14(r3)
      lwz       r0, 0x50(r30)
      stw       r0, 0x18(r3)
      lbz       r0, 0x54(r30)
      stb       r0, 0x1C(r3)
      bl        -0x23A78
      lfs       f1, -0x5C8(r2)
      lfs       f0, 0x243C(r2)
      lwz       r3, 0x44(r31)
      fadds     f3, f1, f0
      lfs       f0, -0x580(r2)
      lfs       f2, 0x2440(r2)
      lwz       r3, 0x0(r3)
      fmadds    f1, f0, f29, f2
      lfs       f0, -0x57C(r2)
      stfs      f3, 0x140(r3)
      fmadds    f0, f0, f29, f2
      stfs      f1, 0x144(r3)
      lwz       r3, 0x48(r31)
      lwz       r3, 0x0(r3)
      stfs      f3, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x3C(r31)
      bl        -0x18760
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r0, 0x54(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80327940
 * Size:	000044
 */
void og::newScreen::ObjVs::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2C0
      lbz       r0, 0x10E(r31)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      li        r0, 0
      stb       r0, 0x10E(r31)

    .loc_0x2C:
      lwz       r0, 0x14(r1)
      li        r3, 0
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80327984
 * Size:	000130
 */
void og::newScreen::ObjVs::doDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      addi      r31, r4, 0x190
      stw       r30, 0x58(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x8051
      lis       r0, 0x4330
      addi      r3, r3, 0x3E38
      stw       r0, 0x30(r1)
      lwz       r0, 0x20(r3)
      mr        r3, r31
      lfd       f2, -0x570(r2)
      addi      r4, r1, 0xC
      stw       r0, 0x1C(r1)
      addi      r5, r1, 0x10
      lfs       f0, 0x50(r30)
      addi      r6, r1, 0x14
      lbz       r0, 0x1F(r1)
      addi      r7, r1, 0x18
      stw       r0, 0x34(r1)
      lfd       f1, 0x30(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      stb       r0, 0x1F(r1)
      lwz       r0, 0x1C(r1)
      stw       r0, 0x8(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0xC(r1)
      bl        -0x2F1398
      lis       r3, 0x8051
      lis       r5, 0x4330
      addi      r4, r3, 0x3E38
      lfs       f2, -0x5C8(r2)
      lwz       r6, 0xC(r4)
      mr        r3, r31
      lwz       r0, 0x14(r4)
      addi      r4, r1, 0x20
      xoris     r6, r6, 0x8000
      lfs       f1, -0x578(r2)
      xoris     r0, r0, 0x8000
      stw       r6, 0x44(r1)
      lfd       f3, -0x5B0(r2)
      stw       r5, 0x40(r1)
      lfd       f0, 0x40(r1)
      stw       r0, 0x4C(r1)
      fsubs     f4, f0, f3
      stw       r5, 0x48(r1)
      lfd       f0, 0x48(r1)
      stfs      f2, 0x20(r1)
      fsubs     f0, f0, f3
      stfs      f4, 0x24(r1)
      fadds     f0, f4, f0
      stfs      f1, 0x28(r1)
      stfs      f0, 0x2C(r1)
      bl        -0x2F12B8
      lwz       r3, 0x3C(r30)
      mr        r4, r31
      bl        -0x18880
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80327AB4
 * Size:	000014
 */
void og::newScreen::ObjVs::doStart((Screen::StartSceneArg const*))
{
    /*
    .loc_0x0:
      lfs       f0, -0x5C8(r2)
      stfs      f0, 0x4C(r3)
      stfs      f0, 0x50(r3)
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80327AC8
 * Size:	000010
 */
void og::newScreen::ObjVs::doEnd((Screen::EndSceneArg const*))
{
    /*
    .loc_0x0:
      lfs       f0, -0x5C8(r2)
      stfs      f0, 0x4C(r3)
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80327AD8
 * Size:	000004
 */
void og::newScreen::ObjVs::doUpdateFadeinFinish(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80327ADC
 * Size:	00000C
 */
void og::newScreen::ObjVs::doUpdateFinish(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x5C8(r2)
      stfs      f0, 0x4C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80327AE8
 * Size:	000004
 */
void og::newScreen::ObjVs::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80327AEC
 * Size:	000074
 */
void og::newScreen::ObjVs::doUpdateFadein(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r5, -0x6514(r13)
      lfs       f1, 0x4C(r3)
      lfs       f0, 0x54(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x4C(r3)
      lfs       f0, 0x4C(r3)
      lfs       f1, 0x3F40(r4)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x44
      stfs      f1, 0x4C(r3)
      li        r31, 0x1

    .loc_0x44:
      lis       r4, 0x8051
      lfs       f1, 0x4C(r3)
      lfs       f0, 0x3F40(r4)
      fdivs     f0, f1, f0
      stfs      f0, 0x50(r3)
      bl        -0x4B0
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
 * Address:	80327B60
 * Size:	00007C
 */
void og::newScreen::ObjVs::doUpdateFadeout(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x3F40
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r5, -0x6514(r13)
      lfs       f1, 0x4C(r3)
      lfs       f0, 0x54(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x4C(r3)
      lfs       f0, 0x4C(r3)
      lfs       f1, 0x4(r4)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x48
      stfs      f1, 0x4C(r3)
      li        r31, 0x1

    .loc_0x48:
      lfs       f1, 0x4C(r3)
      lfs       f0, 0x4(r4)
      lfs       f2, -0x5BC(r2)
      fdivs     f0, f1, f0
      fsubs     f0, f2, f0
      stfs      f0, 0x50(r3)
      bl        -0x52C
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
 * Address:	80327BDC
 * Size:	00000C
 */
void efx2d::ArgScale::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      subi      r3, r3, 0xC2C
      blr
    */
}

/*
 * --INFO--
 * Address:	80327BE8
 * Size:	00006C
 */
void __sinit_ogObjVs_cpp(void)
{
    /*
    .loc_0x0:
      lfs       f11, -0x5A8(r2)
      lis       r3, 0x8051
      lfs       f9, -0x564(r2)
      stfsu     f11, 0x3F40(r3)
      lfs       f10, -0x568(r2)
      lfs       f8, -0x560(r2)
      lfs       f7, -0x55C(r2)
      lfs       f6, -0x558(r2)
      lfs       f5, -0x554(r2)
      lfs       f4, -0x550(r2)
      lfs       f3, -0x54C(r2)
      lfs       f2, -0x548(r2)
      lfs       f1, -0x544(r2)
      lfs       f0, -0x540(r2)
      stfs      f10, 0x4(r3)
      stfs      f9, 0x8(r3)
      stfs      f9, 0xC(r3)
      stfs      f8, 0x10(r3)
      stfs      f7, 0x14(r3)
      stfs      f6, 0x18(r3)
      stfs      f5, 0x1C(r3)
      stfs      f4, 0x20(r3)
      stfs      f3, 0x24(r3)
      stfs      f2, 0x28(r3)
      stfs      f1, 0x2C(r3)
      stfs      f0, 0x30(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80327C54
 * Size:	000008
 */
void @24 @og::newScreen::ObjVs::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x20BC
    */
}
