

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
 * Address:	803D3B10
 * Size:	000324
 */
void ebi::Screen::TPressStart::doSetArchive((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x34(r1)
      stmw      r24, 0x10(r1)
      mr        r29, r3
      addi      r31, r5, 0x6908
      mr        r30, r4
      li        r5, 0
      addi      r4, r31, 0x14
      lwz       r3, -0x6514(r13)
      bl        0x4F820
      li        r3, 0x148
      bl        -0x3AFCA0
      mr.       r0, r3
      beq-      .loc_0x48
      bl        0x6125C
      mr        r0, r3

    .loc_0x48:
      stw       r0, 0x18(r29)
      mr        r6, r30
      addi      r4, r31, 0x3C
      lis       r5, 0x110
      lwz       r3, 0x18(r29)
      bl        -0x394548
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x14
      bl        0x4F7EC
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x50
      li        r5, 0
      bl        0x4F7D4
      li        r3, 0x148
      bl        -0x3AFCEC
      mr.       r0, r3
      beq-      .loc_0x94
      bl        0x61210
      mr        r0, r3

    .loc_0x94:
      stw       r0, 0x1C(r29)
      mr        r6, r30
      addi      r4, r31, 0x78
      lis       r5, 0x110
      lwz       r3, 0x1C(r29)
      bl        -0x394594
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x50
      bl        0x4F7A0
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x8C
      li        r5, 0
      bl        0x4F788
      li        r3, 0x148
      bl        -0x3AFD38
      mr.       r0, r3
      beq-      .loc_0xE0
      bl        0x611C4
      mr        r0, r3

    .loc_0xE0:
      stw       r0, 0x20(r29)
      mr        r6, r30
      addi      r4, r31, 0xB4
      lis       r5, 0x110
      lwz       r3, 0x20(r29)
      bl        -0x3945E0
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x8C
      bl        0x4F754
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0xC8
      li        r5, 0
      bl        0x4F73C
      li        r3, 0x148
      bl        -0x3AFD84
      mr.       r0, r3
      beq-      .loc_0x12C
      bl        0x61178
      mr        r0, r3

    .loc_0x12C:
      stw       r0, 0x24(r29)
      mr        r6, r30
      addi      r4, r31, 0xF0
      lis       r5, 0x110
      lwz       r3, 0x24(r29)
      bl        -0x39462C
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0xC8
      bl        0x4F708
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x104
      li        r5, 0
      bl        0x4F6F0
      li        r24, 0
      mr        r25, r29

    .loc_0x168:
      lwz       r27, 0x18(r25)
      li        r28, 0
      lhz       r26, 0x102(r27)
      b         .loc_0x18C

    .loc_0x178:
      mr        r3, r27
      mr        r4, r28
      bl        -0x39322C
      bl        -0x3815CC
      addi      r28, r28, 0x1

    .loc_0x18C:
      rlwinm    r0,r28,0,16,31
      cmplw     r0, r26
      blt+      .loc_0x178
      addi      r24, r24, 0x1
      addi      r25, r25, 0x4
      cmpwi     r24, 0x4
      blt+      .loc_0x168
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x104
      bl        0x4F6A4
      mr        r25, r29
      mr        r26, r29
      mr        r27, r29
      li        r24, 0

    .loc_0x1C4:
      lwz       r3, 0x18(r26)
      addi      r5, r25, 0x30
      mr        r4, r3
      bl        0x60F7C
      lwz       r3, 0x18(r26)
      addi      r5, r25, 0x120
      mr        r4, r3
      bl        0x60F6C
      lwz       r3, 0x18(r26)
      addi      r5, r27, 0x210
      mr        r4, r3
      bl        0x60F5C
      lwz       r3, 0x18(r26)
      li        r4, 0x1
      bl        -0x9928
      lwz       r3, 0x18(r26)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      addi      r24, r24, 0x1
      addi      r26, r26, 0x4
      cmpwi     r24, 0x4
      addi      r27, r27, 0x20
      addi      r25, r25, 0x3C
      blt+      .loc_0x1C4
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0x30
      addi      r4, r31, 0x134
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x3288
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0x120
      addi      r4, r31, 0x148
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x32A4
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0x6C
      addi      r4, r31, 0x15C
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x32C0
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0x15C
      addi      r4, r31, 0x170
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x32DC
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0xA8
      addi      r4, r31, 0x184
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x32F8
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0x198
      addi      r4, r31, 0x198
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x3314
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0xE4
      addi      r4, r31, 0x1AC
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x3330
      lis       r6, 0x2
      mr        r5, r30
      addi      r3, r29, 0x1D4
      addi      r4, r31, 0x1C0
      subi      r7, r6, 0x7961
      li        r6, 0
      bl        -0x334C
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803D3E34
 * Size:	000028
 */
void ebi::Screen::TPressStart::doOpenScreen((ebi::Screen::ArgOpen*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0x1
      stb       r0, 0x10(r3)
      bl        0x284
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803D3E5C
 * Size:	000044
 */
void ebi::Screen::TPressStart::doCloseScreen((ebi::Screen::ArgClose*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, 0x1780(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, -0x6514(r13)
      lfs       f0, 0x54(r4)
      fdivs     f1, f1, f0
      bl        -0x312334
      stw       r3, 0x28(r31)
      stw       r3, 0x2C(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803D3EA0
 * Size:	0000A4
 */
void ebi::Screen::TPressStart::doUpdateStateWait(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x14(r3)
      rlwinm    r0,r0,2,0,29
      add       r3, r31, r0
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0
      beq-      .loc_0x68
      lwz       r3, 0xC(r31)
      lwz       r0, 0x18(r3)
      andi.     r0, r0, 0x1100
      beq-      .loc_0x68
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1800
      li        r5, 0
      bl        -0x9B8CC
      li        r3, 0x1
      b         .loc_0x90

    .loc_0x68:
      lwz       r0, 0x14(r31)
      mulli     r3, r0, 0x3C
      addi      r3, r3, 0x30
      add       r3, r31, r3
      bl        -0x2F68
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8C
      mr        r3, r31
      bl        0x1A4

    .loc_0x8C:
      li        r3, 0

    .loc_0x90:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803D3F44
 * Size:	000108
 */
void ebi::Screen::TPressStart::doUpdateStateClose(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lwz       r0, 0x14(r3)
      rlwinm    r0,r0,2,0,29
      add       r3, r31, r0
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x28(r31)
      cmplwi    r3, 0
      beq-      .loc_0x48
      subi      r0, r3, 0x1
      stw       r0, 0x28(r31)

    .loc_0x48:
      lwz       r4, 0x2C(r31)
      cmplwi    r4, 0
      beq-      .loc_0x88
      lwz       r3, 0x28(r31)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      lfd       f2, 0x1790(r2)
      stw       r3, 0xC(r1)
      lfd       f0, 0x8(r1)
      stw       r4, 0x14(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f2
      fdivs     f1, f1, f0
      b         .loc_0x8C

    .loc_0x88:
      lfs       f1, 0x1784(r2)

    .loc_0x8C:
      lwz       r0, 0x14(r31)
      lfs       f0, 0x1788(r2)
      rlwinm    r0,r0,2,0,29
      fmuls     f0, f0, f1
      add       r3, r31, r0
      lwz       r3, 0x18(r3)
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      stfd      f0, 0x18(r1)
      lwz       r4, 0x1C(r1)
      mtctr     r12
      bctrl
      lwz       r0, 0x28(r31)
      cmplwi    r0, 0
      beq-      .loc_0xE8
      lwz       r0, 0x14(r31)
      mulli     r3, r0, 0x3C
      addi      r3, r3, 0x30
      add       r3, r31, r3
      bl        -0x3070
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF0

    .loc_0xE8:
      li        r3, 0x1
      b         .loc_0xF4

    .loc_0xF0:
      li        r3, 0

    .loc_0xF4:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803D404C
 * Size:	000080
 */
void ebi::Screen::TPressStart::doDraw(void)
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
      lwz       r4, -0x6514(r13)
      lwz       r31, 0x24(r4)
      addi      r30, r31, 0x190
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r29)
      mr        r4, r31
      mr        r5, r30
      rlwinm    r0,r0,2,0,29
      add       r3, r29, r0
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
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
 * Address:	803D40CC
 * Size:	00016C
 */
void ebi::Screen::TPressStart::startLoop_(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      bl        -0x30AB4C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x17B0(r2)
      stw       r0, 0x8(r1)
      lfs       f1, 0x1798(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, 0x179C(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x60
      li        r0, 0
      stw       r0, 0x14(r31)
      b         .loc_0x98

    .loc_0x60:
      lfs       f0, 0x17A0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x78
      li        r0, 0x1
      stw       r0, 0x14(r31)
      b         .loc_0x98

    .loc_0x78:
      lfs       f0, 0x17A4(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x90
      li        r0, 0x2
      stw       r0, 0x14(r31)
      b         .loc_0x98

    .loc_0x90:
      li        r0, 0x3
      stw       r0, 0x14(r31)

    .loc_0x98:
      mr        r30, r31
      mr        r29, r31
      li        r28, 0

    .loc_0xA4:
      lwz       r3, 0x18(r30)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      addi      r3, r29, 0x30
      bl        -0x33D8
      addi      r3, r29, 0x120
      bl        -0x33E0
      addi      r28, r28, 0x1
      addi      r29, r29, 0x3C
      cmpwi     r28, 0x4
      addi      r30, r30, 0x4
      blt+      .loc_0xA4
      lwz       r0, 0x14(r31)
      li        r4, 0
      lwz       r3, -0x6514(r13)
      li        r5, 0x1
      mulli     r6, r0, 0x3C
      lfs       f1, 0x17A8(r2)
      lfs       f0, 0x54(r3)
      addi      r3, r6, 0x30
      fmuls     f1, f1, f0
      add       r3, r31, r3
      bl        -0x363C
      lwz       r0, 0x14(r31)
      li        r4, 0
      lwz       r3, -0x6514(r13)
      li        r5, 0x1
      mulli     r6, r0, 0x3C
      lfs       f1, 0x17A8(r2)
      lfs       f0, 0x54(r3)
      addi      r3, r6, 0x120
      fmuls     f1, f1, f0
      add       r3, r31, r3
      bl        -0x3668
      lwz       r0, 0x14(r31)
      rlwinm    r0,r0,2,0,29
      add       r3, r31, r0
      lwz       r3, 0x18(r3)
      bl        -0x3936E8
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
 * Address:	803D4238
 * Size:	00000C
 */
void ebi::Screen::TPressStart::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x6ADC
      blr
    */
}
