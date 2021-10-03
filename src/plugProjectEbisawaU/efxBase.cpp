

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
 * Address:	803AE8B0
 * Size:	00003C
 */
void efx::TCallBack_StaticClipping::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r3, -0x65E8(r13)
      bl        0xD110
      lwz       r3, -0x65E8(r13)
      mr        r4, r31
      bl        0xD410
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AE8EC
 * Size:	000048
 */
void efx::TOneEmitter::add((efx::Context*))
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
      mr        r3, r31
      bl        0x62CC4
      mr        r4, r31
      addi      r3, r30, 0x10
      bl        0x62AF0
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
 * Size:	000024
 */
void efx::TOneEmitter::del((efx::Context*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803AE934
 * Size:	0000C0
 */
void efx::TOneEmitter::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      mr        r28, r4
      lwz       r3, -0x65E8(r13)
      bl        0xD088
      lwz       r30, 0x20(r27)
      b         .loc_0xA4

    .loc_0x28:
      lfs       f0, 0x18(r30)
      addi      r4, r1, 0x8
      lwz       r3, -0x65E8(r13)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x1C(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x20(r30)
      stfs      f0, 0x10(r1)
      lhz       r5, 0xC(r27)
      bl        0xD250
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xA0
      mr        r3, r28
      bl        -0x31E468
      mr        r31, r3
      li        r29, 0
      b         .loc_0x98

    .loc_0x6C:
      mr        r3, r28
      bl        -0x31E964
      cmplwi    r3, 0
      beq-      .loc_0x94
      lfs       f2, 0x10(r1)
      lfs       f1, 0xC(r1)
      lfs       f0, 0x8(r1)
      stfs      f0, 0x18(r3)
      stfs      f1, 0x1C(r3)
      stfs      f2, 0x20(r3)

    .loc_0x94:
      addi      r29, r29, 0x1

    .loc_0x98:
      cmpw      r29, r31
      blt+      .loc_0x6C

    .loc_0xA0:
      lwz       r30, 0x4(r30)

    .loc_0xA4:
      cmplwi    r30, 0
      bne+      .loc_0x28
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803AE9F4
 * Size:	0000A8
 */
void efx::TOneEmitter::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      li        r3, 0
      b         .loc_0x94

    .loc_0x28:
      lis       r4, 0x8051
      lwz       r3, -0x65E8(r13)
      addi      r5, r4, 0x41E4
      lhz       r4, 0xC(r31)
      li        r6, 0
      bl        0xCE84
      stw       r3, 0x8(r31)
      lwz       r3, 0x8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x84
      lwz       r0, 0xF4(r3)
      cmplwi    r31, 0
      mr        r4, r31
      ori       r0, r0, 0x40
      stw       r0, 0xF4(r3)
      lwz       r3, 0x8(r31)
      lwz       r0, 0xF4(r3)
      ori       r0, r0, 0x1
      stw       r0, 0xF4(r3)
      beq-      .loc_0x7C
      addi      r4, r31, 0x4

    .loc_0x7C:
      lwz       r3, 0x8(r31)
      stw       r4, 0xEC(r3)

    .loc_0x84:
      lwz       r3, 0x8(r31)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31

    .loc_0x94:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEA9C
 * Size:	000058
 */
void efx::TOneEmitter::fade(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x20(r3)
      stw       r0, 0x1C(r3)
      stw       r0, 0x18(r3)
      stw       r0, 0x14(r3)
      lwz       r4, 0x8(r3)
      cmplwi    r4, 0
      beq-      .loc_0x44
      lwz       r3, -0x65E8(r13)
      bl        0xCFD8
      li        r0, 0
      stw       r0, 0x8(r31)

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEAF4
 * Size:	000058
 */
void efx::TOneEmitter::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x20(r3)
      stw       r0, 0x1C(r3)
      stw       r0, 0x18(r3)
      stw       r0, 0x14(r3)
      lwz       r4, 0x8(r3)
      cmplwi    r4, 0
      beq-      .loc_0x44
      lwz       r3, -0x65E8(r13)
      bl        0xCF54
      li        r0, 0
      stw       r0, 0x8(r31)

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEB4C
 * Size:	000048
 */
void efx::TOneEmitterChasePos::add((efx::ContextChasePos*))
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
      mr        r3, r31
      bl        0x62A64
      mr        r4, r31
      addi      r3, r30, 0x8
      bl        0x62890
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
 * Address:	803AEB94
 * Size:	000024
 */
void efx::TOneEmitterChasePos::del((efx::ContextChasePos*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x62A2C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEBB8
 * Size:	0000A8
 */
void efx::TOneEmitterChasePos::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      li        r3, 0
      b         .loc_0x94

    .loc_0x28:
      lis       r4, 0x8051
      lwz       r3, -0x65E8(r13)
      addi      r5, r4, 0x41E4
      lhz       r4, 0x28(r31)
      li        r6, 0
      bl        0xCCC0
      stw       r3, 0x24(r31)
      lwz       r3, 0x24(r31)
      cmplwi    r3, 0
      beq-      .loc_0x84
      lwz       r0, 0xF4(r3)
      cmplwi    r31, 0
      mr        r4, r31
      ori       r0, r0, 0x40
      stw       r0, 0xF4(r3)
      lwz       r3, 0x24(r31)
      lwz       r0, 0xF4(r3)
      ori       r0, r0, 0x1
      stw       r0, 0xF4(r3)
      beq-      .loc_0x7C
      addi      r4, r31, 0x4

    .loc_0x7C:
      lwz       r3, 0x24(r31)
      stw       r4, 0xEC(r3)

    .loc_0x84:
      lwz       r3, 0x24(r31)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31

    .loc_0x94:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEC60
 * Size:	0000AC
 */
void efx::TOneEmitterChasePos::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r27, r4
      lwz       r3, -0x65E8(r13)
      bl        0xCD5C
      lwz       r30, 0x18(r26)
      b         .loc_0x90

    .loc_0x28:
      lwz       r29, 0x18(r30)
      lwz       r3, -0x65E8(r13)
      lhz       r5, 0x28(r26)
      mr        r4, r29
      bl        0xCF38
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x8C
      mr        r3, r27
      bl        -0x31E780
      mr        r31, r3
      li        r28, 0
      b         .loc_0x84

    .loc_0x58:
      mr        r3, r27
      bl        -0x31EC7C
      cmplwi    r3, 0
      beq-      .loc_0x80
      lfs       f2, 0x8(r29)
      lfs       f1, 0x4(r29)
      lfs       f0, 0x0(r29)
      stfs      f0, 0x18(r3)
      stfs      f1, 0x1C(r3)
      stfs      f2, 0x20(r3)

    .loc_0x80:
      addi      r28, r28, 0x1

    .loc_0x84:
      cmpw      r28, r31
      blt+      .loc_0x58

    .loc_0x8C:
      lwz       r30, 0x4(r30)

    .loc_0x90:
      cmplwi    r30, 0
      bne+      .loc_0x28
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AED0C
 * Size:	000058
 */
void efx::TOneEmitterChasePos::fade(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x18(r3)
      stw       r0, 0x14(r3)
      stw       r0, 0x10(r3)
      stw       r0, 0xC(r3)
      lwz       r4, 0x24(r3)
      cmplwi    r4, 0
      beq-      .loc_0x44
      lwz       r3, -0x65E8(r13)
      bl        0xCD68
      li        r0, 0
      stw       r0, 0x24(r31)

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AED64
 * Size:	000058
 */
void efx::TOneEmitterChasePos::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x18(r3)
      stw       r0, 0x14(r3)
      stw       r0, 0x10(r3)
      stw       r0, 0xC(r3)
      lwz       r4, 0x24(r3)
      cmplwi    r4, 0
      beq-      .loc_0x44
      lwz       r3, -0x65E8(r13)
      bl        0xCCE4
      li        r0, 0
      stw       r0, 0x24(r31)

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEDBC
 * Size:	0000BC
 */
void efx::TOneEmitterSimple::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x14(r3)
      lwz       r0, 0x8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x30
      li        r3, 0
      b         .loc_0xA8

    .loc_0x30:
      lis       r4, 0x8051
      lwz       r3, -0x65E8(r13)
      addi      r5, r4, 0x41E4
      lhz       r4, 0xC(r31)
      li        r6, 0
      bl        0xCAB4
      stw       r3, 0x8(r31)
      lwz       r4, 0x8(r31)
      cmplwi    r4, 0
      beq-      .loc_0x98
      lwz       r3, 0xF4(r4)
      cmplwi    r31, 0
      li        r0, 0
      mr        r5, r31
      ori       r3, r3, 0x40
      stw       r3, 0xF4(r4)
      lwz       r4, 0x8(r31)
      lwz       r3, 0xF4(r4)
      ori       r3, r3, 0x1
      stw       r3, 0xF4(r4)
      lwz       r3, 0x8(r31)
      stw       r0, 0x24(r3)
      beq-      .loc_0x90
      addi      r5, r31, 0x4

    .loc_0x90:
      lwz       r3, 0x8(r31)
      stw       r5, 0xEC(r3)

    .loc_0x98:
      lwz       r3, 0x8(r31)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31

    .loc_0xA8:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEE78
 * Size:	00010C
 */
void efx::TOneEmitterSimple::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r26, 0x28(r1)
      mr        r26, r3
      mr        r27, r4
      lwz       r3, -0x65E8(r13)
      bl        0xCB44
      lwz       r3, 0x14(r26)
      lwz       r0, 0x18(r26)
      cmpw      r3, r0
      ble-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x1BF
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384880

    .loc_0x4C:
      li        r30, 0
      li        r31, 0
      b         .loc_0xE4

    .loc_0x58:
      lwz       r0, 0x10(r26)
      addi      r4, r1, 0x8
      lwz       r3, -0x65E8(r13)
      add       r5, r0, r31
      lfs       f0, 0x0(r5)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r5)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r5)
      stfs      f0, 0x10(r1)
      lhz       r5, 0xC(r26)
      bl        0xCCD4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xDC
      lfs       f0, 0x28(r27)
      li        r28, 0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r29, 0x1C(r1)
      b         .loc_0xD4

    .loc_0xA8:
      mr        r3, r27
      bl        -0x31EEE4
      cmplwi    r3, 0
      beq-      .loc_0xD0
      lfs       f2, 0x10(r1)
      lfs       f1, 0xC(r1)
      lfs       f0, 0x8(r1)
      stfs      f0, 0x18(r3)
      stfs      f1, 0x1C(r3)
      stfs      f2, 0x20(r3)

    .loc_0xD0:
      addi      r28, r28, 0x1

    .loc_0xD4:
      cmpw      r28, r29
      blt+      .loc_0xA8

    .loc_0xDC:
      addi      r31, r31, 0xC
      addi      r30, r30, 0x1

    .loc_0xE4:
      lwz       r0, 0x14(r26)
      cmpw      r30, r0
      blt+      .loc_0x58
      li        r0, 0
      stw       r0, 0x14(r26)
      lmw       r26, 0x28(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803AEF84
 * Size:	000090
 */
void efx::TSimple1::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x22E
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x38497C

    .loc_0x3C:
      lwz       r3, -0x65E8(r13)
      addi      r5, r31, 0x4
      lhz       r4, 0x4(r30)
      subi      r31, r13, 0x6608
      li        r6, 0
      bl        0xC8E0
      stw       r3, 0x8(r30)
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      stw       r31, 0xEC(r3)
      b         .loc_0x74

    .loc_0x6C:
      li        r3, 0
      b         .loc_0x78

    .loc_0x74:
      li        r3, 0x1

    .loc_0x78:
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
 * Address:	803AF014
 * Size:	0000A8
 */
void efx::TSimple2::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr.       r27, r4
      mr        r28, r3
      bne-      .loc_0x38
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x23E
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384A08

    .loc_0x38:
      mr        r30, r28
      mr        r29, r28
      li        r28, 0
      subi      r31, r13, 0x6608

    .loc_0x48:
      lwz       r3, -0x65E8(r13)
      addi      r5, r27, 0x4
      lhz       r4, 0x4(r30)
      li        r6, 0
      bl        0xC848
      stw       r3, 0x8(r29)
      lwz       r3, 0x8(r29)
      cmplwi    r3, 0
      beq-      .loc_0x74
      stw       r31, 0xEC(r3)
      b         .loc_0x7C

    .loc_0x74:
      li        r3, 0
      b         .loc_0x94

    .loc_0x7C:
      addi      r28, r28, 0x1
      addi      r29, r29, 0x4
      cmpwi     r28, 0x2
      addi      r30, r30, 0x2
      blt+      .loc_0x48
      li        r3, 0x1

    .loc_0x94:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF0BC
 * Size:	0000A8
 */
void efx::TSimple3::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr.       r27, r4
      mr        r28, r3
      bne-      .loc_0x38
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x24F
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384AB0

    .loc_0x38:
      mr        r30, r28
      mr        r29, r28
      li        r28, 0
      subi      r31, r13, 0x6608

    .loc_0x48:
      lwz       r3, -0x65E8(r13)
      addi      r5, r27, 0x4
      lhz       r4, 0x4(r30)
      li        r6, 0
      bl        0xC7A0
      stw       r3, 0xC(r29)
      lwz       r3, 0xC(r29)
      cmplwi    r3, 0
      beq-      .loc_0x74
      stw       r31, 0xEC(r3)
      b         .loc_0x7C

    .loc_0x74:
      li        r3, 0
      b         .loc_0x94

    .loc_0x7C:
      addi      r28, r28, 0x1
      addi      r29, r29, 0x4
      cmpwi     r28, 0x3
      addi      r30, r30, 0x2
      blt+      .loc_0x48
      li        r3, 0x1

    .loc_0x94:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF164
 * Size:	0000A8
 */
void efx::TSimple4::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr.       r27, r4
      mr        r28, r3
      bne-      .loc_0x38
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x260
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384B58

    .loc_0x38:
      mr        r30, r28
      mr        r29, r28
      li        r28, 0
      subi      r31, r13, 0x6608

    .loc_0x48:
      lwz       r3, -0x65E8(r13)
      addi      r5, r27, 0x4
      lhz       r4, 0x4(r30)
      li        r6, 0
      bl        0xC6F8
      stw       r3, 0xC(r29)
      lwz       r3, 0xC(r29)
      cmplwi    r3, 0
      beq-      .loc_0x74
      stw       r31, 0xEC(r3)
      b         .loc_0x7C

    .loc_0x74:
      li        r3, 0
      b         .loc_0x94

    .loc_0x7C:
      addi      r28, r28, 0x1
      addi      r29, r29, 0x4
      cmpwi     r28, 0x4
      addi      r30, r30, 0x2
      blt+      .loc_0x48
      li        r3, 0x1

    .loc_0x94:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF20C
 * Size:	0000A8
 */
void efx::TSimple5::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr.       r27, r4
      mr        r28, r3
      bne-      .loc_0x38
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x271
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384C00

    .loc_0x38:
      mr        r30, r28
      mr        r29, r28
      li        r28, 0
      subi      r31, r13, 0x6608

    .loc_0x48:
      lwz       r3, -0x65E8(r13)
      addi      r5, r27, 0x4
      lhz       r4, 0x4(r30)
      li        r6, 0
      bl        0xC650
      stw       r3, 0x10(r29)
      lwz       r3, 0x10(r29)
      cmplwi    r3, 0
      beq-      .loc_0x74
      stw       r31, 0xEC(r3)
      b         .loc_0x7C

    .loc_0x74:
      li        r3, 0
      b         .loc_0x94

    .loc_0x7C:
      addi      r28, r28, 0x1
      addi      r29, r29, 0x4
      cmpwi     r28, 0x5
      addi      r30, r30, 0x2
      blt+      .loc_0x48
      li        r3, 0x1

    .loc_0x94:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF2B4
 * Size:	0000E4
 */
void efx::TSimpleMtx1::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8051
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r5, 0x5814
      addi      r5, r1, 0xC
      li        r6, 0
      stw       r31, 0x1C(r1)
      subi      r31, r13, 0x6608
      stw       r30, 0x18(r1)
      mr        r30, r3
      lfsu      f2, 0x41E4(r4)
      stw       r0, 0x8(r1)
      lfs       f1, 0x4(r4)
      lfs       f0, 0x8(r4)
      stfs      f2, 0xC(r1)
      lwz       r3, -0x65E8(r13)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      lhz       r4, 0x4(r30)
      bl        0xC5AC
      stw       r3, 0x8(r30)
      lwz       r3, 0x8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x70
      stw       r31, 0xEC(r3)
      b         .loc_0x78

    .loc_0x70:
      li        r0, 0
      b         .loc_0x7C

    .loc_0x78:
      li        r0, 0x1

    .loc_0x7C:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0xC8
      lwz       r0, 0xC(r30)
      cmplwi    r0, 0
      bne-      .loc_0xAC
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x286
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384D1C

    .loc_0xAC:
      lwz       r5, 0x8(r30)
      lwz       r3, 0xC(r30)
      addi      r4, r5, 0x68
      addi      r5, r5, 0xA4
      bl        -0x31B654
      li        r3, 0x1
      b         .loc_0xCC

    .loc_0xC8:
      li        r3, 0

    .loc_0xCC:
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
 * Address:	803AF398
 * Size:	00011C
 */
void efx::TSimpleMtx2::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x34(r1)
      stmw      r26, 0x18(r1)
      mr        r31, r3
      addi      r3, r4, 0x41E4
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      addi      r26, r1, 0xC
      mr        r28, r31
      mr        r27, r31
      li        r29, 0
      subi      r30, r13, 0x6608
      lfs       f2, 0x0(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x8(r3)
      stw       r0, 0x8(r1)
      stfs      f2, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)

    .loc_0x54:
      lwz       r3, -0x65E8(r13)
      mr        r5, r26
      lhz       r4, 0x4(r28)
      li        r6, 0
      bl        0xC4B8
      stw       r3, 0x8(r27)
      lwz       r3, 0x8(r27)
      cmplwi    r3, 0
      beq-      .loc_0x80
      stw       r30, 0xEC(r3)
      b         .loc_0x88

    .loc_0x80:
      li        r0, 0
      b         .loc_0xA0

    .loc_0x88:
      addi      r29, r29, 0x1
      addi      r27, r27, 0x4
      cmpwi     r29, 0x2
      addi      r28, r28, 0x2
      blt+      .loc_0x54
      li        r0, 0x1

    .loc_0xA0:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x104
      lwz       r0, 0x10(r31)
      cmplwi    r0, 0
      bne-      .loc_0xD0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x294
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384E24

    .loc_0xD0:
      li        r26, 0
      mr        r27, r31

    .loc_0xD8:
      lwz       r5, 0x8(r27)
      lwz       r3, 0x10(r31)
      addi      r4, r5, 0x68
      addi      r5, r5, 0xA4
      bl        -0x31B764
      addi      r26, r26, 0x1
      addi      r27, r27, 0x4
      cmpwi     r26, 0x2
      blt+      .loc_0xD8
      li        r3, 0x1
      b         .loc_0x108

    .loc_0x104:
      li        r3, 0

    .loc_0x108:
      lmw       r26, 0x18(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF4B4
 * Size:	00011C
 */
void efx::TSimpleMtx3::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x34(r1)
      stmw      r26, 0x18(r1)
      mr        r31, r3
      addi      r3, r4, 0x41E4
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      addi      r26, r1, 0xC
      mr        r28, r31
      mr        r27, r31
      li        r29, 0
      subi      r30, r13, 0x6608
      lfs       f2, 0x0(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x8(r3)
      stw       r0, 0x8(r1)
      stfs      f2, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)

    .loc_0x54:
      lwz       r3, -0x65E8(r13)
      mr        r5, r26
      lhz       r4, 0x4(r28)
      li        r6, 0
      bl        0xC39C
      stw       r3, 0xC(r27)
      lwz       r3, 0xC(r27)
      cmplwi    r3, 0
      beq-      .loc_0x80
      stw       r30, 0xEC(r3)
      b         .loc_0x88

    .loc_0x80:
      li        r0, 0
      b         .loc_0xA0

    .loc_0x88:
      addi      r29, r29, 0x1
      addi      r27, r27, 0x4
      cmpwi     r29, 0x3
      addi      r28, r28, 0x2
      blt+      .loc_0x54
      li        r0, 0x1

    .loc_0xA0:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x104
      lwz       r0, 0x18(r31)
      cmplwi    r0, 0
      bne-      .loc_0xD0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x2A2
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x384F40

    .loc_0xD0:
      li        r26, 0
      mr        r27, r31

    .loc_0xD8:
      lwz       r5, 0xC(r27)
      lwz       r3, 0x18(r31)
      addi      r4, r5, 0x68
      addi      r5, r5, 0xA4
      bl        -0x31B880
      addi      r26, r26, 0x1
      addi      r27, r27, 0x4
      cmpwi     r26, 0x3
      blt+      .loc_0xD8
      li        r3, 0x1
      b         .loc_0x108

    .loc_0x104:
      li        r3, 0

    .loc_0x108:
      lmw       r26, 0x18(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF5D0
 * Size:	00011C
 */
void efx::TSimpleMtx4::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x34(r1)
      stmw      r26, 0x18(r1)
      mr        r31, r3
      addi      r3, r4, 0x41E4
      lis       r4, 0x804B
      subi      r0, r4, 0x5814
      addi      r26, r1, 0xC
      mr        r28, r31
      mr        r27, r31
      li        r29, 0
      subi      r30, r13, 0x6608
      lfs       f2, 0x0(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x8(r3)
      stw       r0, 0x8(r1)
      stfs      f2, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)

    .loc_0x54:
      lwz       r3, -0x65E8(r13)
      mr        r5, r26
      lhz       r4, 0x4(r28)
      li        r6, 0
      bl        0xC280
      stw       r3, 0xC(r27)
      lwz       r3, 0xC(r27)
      cmplwi    r3, 0
      beq-      .loc_0x80
      stw       r30, 0xEC(r3)
      b         .loc_0x88

    .loc_0x80:
      li        r0, 0
      b         .loc_0xA0

    .loc_0x88:
      addi      r29, r29, 0x1
      addi      r27, r27, 0x4
      cmpwi     r29, 0x4
      addi      r28, r28, 0x2
      blt+      .loc_0x54
      li        r0, 0x1

    .loc_0xA0:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x104
      lwz       r0, 0x1C(r31)
      cmplwi    r0, 0
      bne-      .loc_0xD0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x2B0
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x38505C

    .loc_0xD0:
      li        r26, 0
      mr        r27, r31

    .loc_0xD8:
      lwz       r5, 0xC(r27)
      lwz       r3, 0x1C(r31)
      addi      r4, r5, 0x68
      addi      r5, r5, 0xA4
      bl        -0x31B99C
      addi      r26, r26, 0x1
      addi      r27, r27, 0x4
      cmpwi     r26, 0x4
      blt+      .loc_0xD8
      li        r3, 0x1
      b         .loc_0x108

    .loc_0x104:
      li        r3, 0

    .loc_0x108:
      lmw       r26, 0x18(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF6EC
 * Size:	0000DC
 */
void efx::TSync::create((efx::Arg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r0, 0x8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      li        r3, 0
      b         .loc_0xC8

    .loc_0x28:
      cmplwi    r4, 0
      beq-      .loc_0x4C
      lfs       f0, 0x4(r4)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x8(r4)
      stfs      f0, 0xC(r1)
      lfs       f0, 0xC(r4)
      stfs      f0, 0x10(r1)
      b         .loc_0x68

    .loc_0x4C:
      lis       r3, 0x8051
      lfsu      f2, 0x41E4(r3)
      lfs       f1, 0x4(r3)
      lfs       f0, 0x8(r3)
      stfs      f2, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)

    .loc_0x68:
      lwz       r3, -0x65E8(r13)
      addi      r5, r1, 0x8
      lhz       r4, 0xC(r31)
      li        r6, 0
      bl        0xC150
      stw       r3, 0x8(r31)
      lwz       r3, 0x8(r31)
      cmplwi    r3, 0
      beq-      .loc_0xB4
      cmplwi    r31, 0
      mr        r0, r31
      beq-      .loc_0x9C
      addi      r0, r31, 0x4

    .loc_0x9C:
      stw       r0, 0xEC(r3)
      lwz       r3, 0x8(r31)
      lwz       r0, 0xF4(r3)
      ori       r0, r0, 0x40
      stw       r0, 0xF4(r3)
      b         .loc_0xBC

    .loc_0xB4:
      li        r3, 0
      b         .loc_0xC8

    .loc_0xBC:
      li        r0, 0
      li        r3, 0x1
      stb       r0, 0xE(r31)

    .loc_0xC8:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF7C8
 * Size:	00006C
 */
void efx::TSync::execute((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r0, 0xF4(r4)
      rlwinm.   r0,r0,0,28,28
      beq-      .loc_0x30
      lwz       r5, 0xD0(r4)
      lwz       r0, 0xDC(r4)
      add.      r0, r5, r0
      bne-      .loc_0x30
      li        r6, 0x1

    .loc_0x30:
      rlwinm.   r0,r6,0,24,31
      beq-      .loc_0x4C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x5C

    .loc_0x4C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF834
 * Size:	000090
 */
void efx::TSync::executeAfter((JPABaseEmitter*))
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
      lwz       r3, -0x65E8(r13)
      bl        0xC184
      lwz       r3, -0x65E8(r13)
      mr        r4, r31
      bl        0xC484
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x60
      lbz       r0, 0xE(r30)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x54
      lwz       r0, 0xF4(r31)
      ori       r0, r0, 0x4
      stw       r0, 0xF4(r31)
      b         .loc_0x60

    .loc_0x54:
      lwz       r0, 0xF4(r31)
      rlwinm    r0,r0,0,30,28
      stw       r0, 0xF4(r31)

    .loc_0x60:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
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
 * Address:	803AF8C4
 * Size:	00003C
 */
void efx::TSync::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x65E8(r13)
      lwz       r4, 0x8(r31)
      bl        0xC1A0
      li        r0, 0
      stw       r0, 0x8(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF900
 * Size:	000070
 */
void efx::TSync::fade(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, 0x8(r3)
      cmplwi    r4, 0
      beq-      .loc_0x5C
      lbz       r0, 0xE(r31)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x40
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x5C

    .loc_0x40:
      subi      r0, r13, 0x6608
      stw       r0, 0xEC(r4)
      lwz       r3, -0x65E8(r13)
      lwz       r4, 0x8(r31)
      bl        0xC15C
      li        r0, 0
      stw       r0, 0x8(r31)

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AF970
 * Size:	000078
 */
void efx::TChasePos::doExecuteEmitterOperation((JPABaseEmitter*))
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
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x311
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x385370

    .loc_0x44:
      lwz       r3, 0x10(r30)
      lfs       f0, 0x0(r3)
      stfs      f0, 0xA4(r31)
      lfs       f0, 0x4(r3)
      stfs      f0, 0xA8(r31)
      lfs       f0, 0x8(r3)
      stfs      f0, 0xAC(r31)
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
 * Address:	803AF9E8
 * Size:	0000D8
 */
void efx::TChasePosYRot::doExecuteEmitterOperation((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      stw       r30, 0x38(r1)
      mr        r30, r4
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x31A
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3853E8

    .loc_0x44:
      lwz       r0, 0x14(r31)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x31B
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x385410

    .loc_0x6C:
      lwz       r5, 0x14(r31)
      addi      r3, r1, 0x8
      li        r4, 0x79
      lfs       f1, 0x0(r5)
      bl        -0x2C5550
      lwz       r5, 0x14(r31)
      addi      r3, r1, 0x8
      lwz       r31, 0x10(r31)
      li        r4, 0x79
      lfs       f1, 0x0(r5)
      bl        -0x2C5568
      lfs       f0, 0x0(r31)
      addi      r3, r1, 0x8
      addi      r4, r30, 0x68
      addi      r5, r30, 0xA4
      stfs      f0, 0x14(r1)
      lfs       f0, 0x4(r31)
      stfs      f0, 0x24(r1)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x34(r1)
      bl        -0x31BD88
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803AFAC0
 * Size:	00006C
 */
void efx::TChaseMtx::doExecuteEmitterOperation((JPABaseEmitter*))
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
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x329
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3854C0

    .loc_0x44:
      lwz       r3, 0x10(r30)
      addi      r4, r31, 0x68
      addi      r5, r31, 0xA4
      bl        -0x31BDF4
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
 * Address:	803AFB2C
 * Size:	000078
 */
void efx::TChaseMtxT::doExecuteEmitterOperation((JPABaseEmitter*))
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
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x332
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x38552C

    .loc_0x44:
      lwz       r3, 0x10(r30)
      lfs       f1, 0x1C(r3)
      lfs       f2, 0x2C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0xA4(r31)
      stfs      f1, 0xA8(r31)
      stfs      f2, 0xAC(r31)
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
 * Address:	803AFBA4
 * Size:	0000DC
 */
void efx::TChasePosPos::doExecuteEmitterOperation((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r4
      stw       r30, 0x58(r1)
      mr        r30, r3
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x33D
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3855A4

    .loc_0x44:
      lwz       r0, 0x14(r30)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x33E
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3855CC

    .loc_0x6C:
      lwz       r6, 0x10(r30)
      addi      r3, r1, 0x20
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lfs       f0, 0x0(r6)
      stfs      f0, 0x14(r1)
      lfs       f0, 0x4(r6)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x8(r6)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0x14(r30)
      lfs       f0, 0x0(r6)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r6)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r6)
      stfs      f0, 0x10(r1)
      bl        .loc_0xDC
      addi      r3, r1, 0x20
      addi      r4, r31, 0x68
      addi      r5, r31, 0xA4
      bl        -0x31BF48
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr

    .loc_0xDC:
    */
}

/*
 * --INFO--
 * Address:	803AFC80
 * Size:	0000F8
 */
void efx::makeMtxZAxisAlongPosPos(float (*)[4], Vector3<float>&,
                                  Vector3<float>&)
{
    /*
    .loc_0x0:
      lfs       f0, 0x4(r4)
      lfs       f2, 0x4(r5)
      lfs       f4, 0x8(r4)
      fsubs     f1, f2, f0
      lfs       f7, 0x8(r5)
      lfs       f8, 0x0(r4)
      fadds     f6, f0, f2
      fsubs     f2, f7, f4
      lfs       f9, 0x0(r5)
      fsubs     f0, f9, f8
      lfs       f5, 0x12B0(r2)
      fadds     f7, f4, f7
      lfs       f3, 0x12B4(r2)
      fmuls     f10, f1, f1
      fmuls     f11, f2, f2
      fadds     f8, f8, f9
      fmadds    f4, f0, f0, f10
      fmuls     f7, f7, f5
      fmuls     f6, f6, f5
      fadds     f4, f11, f4
      fmuls     f11, f8, f5
      fcmpo     cr0, f4, f3
      ble-      .loc_0x6C
      ble-      .loc_0x70
      fsqrte    f3, f4
      fmuls     f4, f3, f4
      b         .loc_0x70

    .loc_0x6C:
      fmr       f4, f3

    .loc_0x70:
      lfs       f3, 0x12B4(r2)
      fcmpo     cr0, f4, f3
      ble-      .loc_0x90
      lfs       f3, 0x12B8(r2)
      fdivs     f3, f3, f4
      fmuls     f0, f0, f3
      fmuls     f1, f1, f3
      fmuls     f2, f2, f3

    .loc_0x90:
      lfs       f4, 0x12B4(r2)
      lfs       f5, 0x12B8(r2)
      fmuls     f3, f4, f2
      fmuls     f10, f4, f1
      fmsubs    f9, f4, f0, f3
      fmsubs    f8, f5, f2, f10
      fnmsubs   f10, f5, f0, f10
      fmuls     f5, f2, f9
      fmuls     f3, f1, f8
      stfs      f8, 0x0(r3)
      fmuls     f4, f0, f10
      fmsubs    f5, f1, f10, f5
      fmsubs    f3, f0, f9, f3
      fmsubs    f4, f2, f8, f4
      stfs      f5, 0x4(r3)
      stfs      f0, 0x8(r3)
      stfs      f11, 0xC(r3)
      stfs      f9, 0x10(r3)
      stfs      f4, 0x14(r3)
      stfs      f1, 0x18(r3)
      stfs      f6, 0x1C(r3)
      stfs      f10, 0x20(r3)
      stfs      f3, 0x24(r3)
      stfs      f2, 0x28(r3)
      stfs      f7, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803AFD78
 * Size:	00014C
 */
void efx::TChasePosPosLocalZScale::doExecuteEmitterOperation((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      mr        r31, r4
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x350
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x385780

    .loc_0x4C:
      lwz       r0, 0x14(r30)
      cmplwi    r0, 0
      bne-      .loc_0x74
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x351
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3857A8

    .loc_0x74:
      lwz       r6, 0x10(r30)
      addi      r3, r1, 0x20
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lfs       f0, 0x0(r6)
      stfs      f0, 0x14(r1)
      lfs       f0, 0x4(r6)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x8(r6)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0x14(r30)
      lfs       f0, 0x0(r6)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r6)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r6)
      stfs      f0, 0x10(r1)
      bl        -0x1B0
      lfs       f1, 0xC(r1)
      lfs       f0, 0x18(r1)
      lfs       f3, 0x10(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x1C(r1)
      lfs       f1, 0x8(r1)
      lfs       f0, 0x14(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, 0x12B4(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f31, f2, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x10C
      ble-      .loc_0x110
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x110

    .loc_0x10C:
      fmr       f31, f0

    .loc_0x110:
      addi      r3, r1, 0x20
      addi      r4, r31, 0x68
      addi      r5, r31, 0xA4
      bl        -0x31C178
      lfs       f0, 0x18(r30)
      fdivs     f2, f31, f0
      stfs      f2, 0x8(r31)
      psq_l     f31,0x68(r1),0,0
      lwz       r0, 0x74(r1)
      lfd       f31, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	803AFEC4
 * Size:	00014C
 */
void efx::TChasePosPosLocalYScale::doExecuteEmitterOperation((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      mr        r31, r4
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x370
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3858CC

    .loc_0x4C:
      lwz       r0, 0x14(r30)
      cmplwi    r0, 0
      bne-      .loc_0x74
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5880
      li        r4, 0x371
      addi      r5, r5, 0x588C
      crclr     6, 0x6
      bl        -0x3858F4

    .loc_0x74:
      lwz       r6, 0x10(r30)
      addi      r3, r1, 0x20
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lfs       f0, 0x0(r6)
      stfs      f0, 0x14(r1)
      lfs       f0, 0x4(r6)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x8(r6)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0x14(r30)
      lfs       f0, 0x0(r6)
      stfs      f0, 0x8(r1)
      lfs       f0, 0x4(r6)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r6)
      stfs      f0, 0x10(r1)
      bl        -0x2FC
      lfs       f1, 0xC(r1)
      lfs       f0, 0x18(r1)
      lfs       f3, 0x10(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x1C(r1)
      lfs       f1, 0x8(r1)
      lfs       f0, 0x14(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, 0x12B4(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f31, f2, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x10C
      ble-      .loc_0x110
      fsqrte    f0, f31
      fmuls     f31, f0, f31
      b         .loc_0x110

    .loc_0x10C:
      fmr       f31, f0

    .loc_0x110:
      addi      r3, r1, 0x20
      addi      r4, r31, 0x68
      addi      r5, r31, 0xA4
      bl        -0x31C2C4
      lfs       f0, 0x18(r30)
      fdivs     f2, f31, f0
      stfs      f2, 0x4(r31)
      psq_l     f31,0x68(r1),0,0
      lwz       r0, 0x74(r1)
      lfd       f31, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0010
 * Size:	000098
 */
void efx::TForever2::__ct((unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x804B
      li        r7, 0x2
      stw       r0, 0x24(r1)
      subi      r0, r6, 0x5808
      lis       r6, 0x803B
      stw       r31, 0x1C(r1)
      addi      r6, r6, 0xA8
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      mr        r4, r6
      li        r6, 0x10
      stw       r29, 0x14(r1)
      mr        r29, r3
      lis       r3, 0x804B
      stw       r0, 0x0(r29)
      addi      r0, r3, 0x297C
      lis       r3, 0x8017
      stw       r0, 0x0(r29)
      addi      r0, r3, 0x5CC8
      mr        r5, r0
      addi      r3, r29, 0x4
      bl        -0x2EE834
      lis       r4, 0x804B
      mr        r3, r29
      addi      r0, r4, 0x2998
      stw       r0, 0x0(r29)
      sth       r30, 0x10(r29)
      sth       r31, 0x20(r29)
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
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B00A8
 * Size:	000058
 */
void efx::TForever::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804B
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x2C24
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0100
 * Size:	0000A8
 */
void efx::TForever3::__ct((unsigned short, unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r7, 0x5808
      lis       r7, 0x803B
      stw       r31, 0x1C(r1)
      mr        r31, r6
      addi      r7, r7, 0xA8
      li        r6, 0x10
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      mr        r4, r7
      li        r7, 0x3
      stw       r28, 0x10(r1)
      mr        r28, r3
      lis       r3, 0x804C
      stw       r0, 0x0(r28)
      subi      r0, r3, 0x5524
      lis       r3, 0x8017
      stw       r0, 0x0(r28)
      addi      r0, r3, 0x5CC8
      addi      r3, r28, 0x4
      mr        r5, r0
      bl        -0x2EE92C
      lis       r4, 0x804C
      mr        r3, r28
      subi      r0, r4, 0x5508
      stw       r0, 0x0(r28)
      sth       r29, 0x10(r28)
      sth       r30, 0x20(r28)
      sth       r31, 0x30(r28)
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
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B01A8
 * Size:	000098
 */
void efx::TForever4::__ct((unsigned short, unsigned short, unsigned short,
                           unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r8, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r8, 0x5808
      lis       r8, 0x803B
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r30, r6
      mr        r31, r7
      lis       r3, 0x804B
      addi      r8, r8, 0xA8
      mr        r28, r4
      mr        r29, r5
      mr        r4, r8
      li        r6, 0x10
      li        r7, 0x4
      stw       r0, 0x0(r27)
      addi      r0, r3, 0x7C90
      lis       r3, 0x8017
      stw       r0, 0x0(r27)
      addi      r0, r3, 0x5CC8
      mr        r5, r0
      addi      r3, r27, 0x4
      bl        -0x2EE9CC
      lis       r4, 0x804B
      mr        r3, r27
      addi      r0, r4, 0x7CAC
      stw       r0, 0x0(r27)
      sth       r28, 0x10(r27)
      sth       r29, 0x20(r27)
      sth       r30, 0x30(r27)
      sth       r31, 0x40(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0240
 * Size:	0000AC
 */
void __ct__Q23efx10TChasePos2FP10Vector3<float> UsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r7, 0x5808
      lis       r7, 0x803B
      stw       r31, 0x1C(r1)
      mr        r31, r6
      addi      r7, r7, 0x2EC
      li        r6, 0x14
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      mr        r4, r7
      li        r7, 0x2
      stw       r28, 0x10(r1)
      mr        r28, r3
      lis       r3, 0x804D
      stw       r0, 0x0(r28)
      subi      r0, r3, 0x27A0
      lis       r3, 0x8010
      stw       r0, 0x0(r28)
      addi      r0, r3, 0x1214
      addi      r3, r28, 0x4
      mr        r5, r0
      bl        -0x2EEA6C
      lis       r4, 0x804D
      mr        r3, r28
      subi      r0, r4, 0x2784
      stw       r0, 0x0(r28)
      stw       r29, 0x14(r28)
      sth       r30, 0x10(r28)
      stw       r29, 0x28(r28)
      sth       r31, 0x24(r28)
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
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B02EC
 * Size:	000058
 */
void efx::TChasePos::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x6940
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0344
 * Size:	00000C
 */
void setPosptr__Q23efx10TChasePos2FP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0350
 * Size:	0000A0
 */
void __ct__Q23efx10TChasePos3FP10Vector3<float> UsUsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r8, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r8, 0x5808
      lis       r8, 0x803B
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r30, r6
      mr        r31, r7
      lis       r3, 0x804C
      addi      r8, r8, 0x2EC
      mr        r28, r4
      mr        r29, r5
      mr        r4, r8
      li        r6, 0x14
      li        r7, 0x3
      stw       r0, 0x0(r27)
      addi      r0, r3, 0x4134
      lis       r3, 0x8010
      stw       r0, 0x0(r27)
      addi      r0, r3, 0x1214
      mr        r5, r0
      addi      r3, r27, 0x4
      bl        -0x2EEB74
      lis       r4, 0x804C
      mr        r3, r27
      addi      r0, r4, 0x4150
      stw       r0, 0x0(r27)
      stw       r28, 0x14(r27)
      sth       r29, 0x10(r27)
      stw       r28, 0x28(r27)
      sth       r30, 0x24(r27)
      stw       r28, 0x3C(r27)
      sth       r31, 0x38(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void setPosptr__Q23efx10TChasePos3FP10Vector3<float>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B03F0
 * Size:	0000AC
 */
void __ct__Q23efx10TChasePos4FP10Vector3<float> UsUsUsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r9, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r9, 0x5808
      lis       r9, 0x803B
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r29, r6
      mr        r30, r7
      lis       r3, 0x804D
      addi      r9, r9, 0x2EC
      mr        r27, r4
      mr        r28, r5
      mr        r31, r8
      mr        r4, r9
      li        r6, 0x14
      li        r7, 0x4
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x5948
      lis       r3, 0x8010
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x1214
      mr        r5, r0
      addi      r3, r26, 0x4
      bl        -0x2EEC18
      lis       r4, 0x804D
      mr        r3, r26
      addi      r0, r4, 0x5964
      stw       r0, 0x0(r26)
      stw       r27, 0x14(r26)
      sth       r28, 0x10(r26)
      stw       r27, 0x28(r26)
      sth       r29, 0x24(r26)
      stw       r27, 0x3C(r26)
      sth       r30, 0x38(r26)
      stw       r27, 0x50(r26)
      sth       r31, 0x4C(r26)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void setPosptr__Q23efx10TChasePos4FP10Vector3<float>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B049C
 * Size:	0000AC
 */
void efx::TChaseMtx2::__ct((float (*)[4], unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r7, 0x5808
      lis       r7, 0x803B
      stw       r31, 0x1C(r1)
      mr        r31, r6
      addi      r7, r7, 0x548
      li        r6, 0x14
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      mr        r4, r7
      li        r7, 0x2
      stw       r28, 0x10(r1)
      mr        r28, r3
      lis       r3, 0x804B
      stw       r0, 0x0(r28)
      addi      r0, r3, 0x82C
      lis       r3, 0x8013
      stw       r0, 0x0(r28)
      subi      r0, r3, 0x4964
      addi      r3, r28, 0x4
      mr        r5, r0
      bl        -0x2EECC8
      lis       r4, 0x804B
      mr        r3, r28
      addi      r0, r4, 0x848
      stw       r0, 0x0(r28)
      stw       r29, 0x14(r28)
      sth       r30, 0x10(r28)
      stw       r29, 0x28(r28)
      sth       r31, 0x24(r28)
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
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0548
 * Size:	000058
 */
void efx::TChaseMtx::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x68A8
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B05A0
 * Size:	00000C
 */
void efx::TChaseMtx2::setMtxptr((float (*)[4]))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B05AC
 * Size:	0000A0
 */
void efx::TChaseMtx3::__ct((float (*)[4], unsigned short, unsigned short,
                            unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r8, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r8, 0x5808
      lis       r8, 0x803B
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r30, r6
      mr        r31, r7
      lis       r3, 0x804B
      addi      r8, r8, 0x548
      mr        r28, r4
      mr        r29, r5
      mr        r4, r8
      li        r6, 0x14
      li        r7, 0x3
      stw       r0, 0x0(r27)
      subi      r0, r3, 0x1818
      lis       r3, 0x8013
      stw       r0, 0x0(r27)
      subi      r0, r3, 0x4964
      mr        r5, r0
      addi      r3, r27, 0x4
      bl        -0x2EEDD0
      lis       r4, 0x804B
      mr        r3, r27
      subi      r0, r4, 0x17FC
      stw       r0, 0x0(r27)
      stw       r28, 0x14(r27)
      sth       r29, 0x10(r27)
      stw       r28, 0x28(r27)
      sth       r30, 0x24(r27)
      stw       r28, 0x3C(r27)
      sth       r31, 0x38(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B064C
 * Size:	000010
 */
void efx::TChaseMtx3::setMtxptr((float (*)[4]))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      stw       r4, 0x3C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B065C
 * Size:	0000AC
 */
void efx::TChaseMtx4::__ct((float (*)[4], unsigned short, unsigned short,
                            unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r9, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r9, 0x5808
      lis       r9, 0x803B
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r29, r6
      mr        r30, r7
      lis       r3, 0x804C
      addi      r9, r9, 0x548
      mr        r27, r4
      mr        r28, r5
      mr        r31, r8
      mr        r4, r9
      li        r6, 0x14
      li        r7, 0x4
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x7FD0
      lis       r3, 0x8013
      stw       r0, 0x0(r26)
      subi      r0, r3, 0x4964
      mr        r5, r0
      addi      r3, r26, 0x4
      bl        -0x2EEE84
      lis       r4, 0x804C
      mr        r3, r26
      addi      r0, r4, 0x7FEC
      stw       r0, 0x0(r26)
      stw       r27, 0x14(r26)
      sth       r28, 0x10(r26)
      stw       r27, 0x28(r26)
      sth       r29, 0x24(r26)
      stw       r27, 0x3C(r26)
      sth       r30, 0x38(r26)
      stw       r27, 0x50(r26)
      sth       r31, 0x4C(r26)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0708
 * Size:	000014
 */
void efx::TChaseMtx4::setMtxptr((float (*)[4]))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      stw       r4, 0x3C(r3)
      stw       r4, 0x50(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void efx::TChaseMtx5::__ct((float (*)[4], unsigned short, unsigned short,
                            unsigned short, unsigned short, unsigned short))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void efx::TChaseMtx5::setMtxptr((float (*)[4]))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B071C
 * Size:	0000C4
 */
void efx::TChaseMtx6::__ct((float (*)[4], unsigned short, unsigned short,
                            unsigned short, unsigned short, unsigned short,
                            unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r11, 0x804B
      stw       r0, 0x34(r1)
      subi      r0, r11, 0x5808
      lis       r11, 0x803B
      stmw      r24, 0x10(r1)
      mr        r24, r3
      mr        r27, r6
      mr        r28, r7
      lis       r3, 0x804D
      addi      r11, r11, 0x548
      mr        r25, r4
      mr        r26, r5
      mr        r29, r8
      mr        r30, r9
      mr        r31, r10
      mr        r4, r11
      li        r6, 0x14
      li        r7, 0x6
      stw       r0, 0x0(r24)
      addi      r0, r3, 0x574C
      lis       r3, 0x8013
      stw       r0, 0x0(r24)
      subi      r0, r3, 0x4964
      mr        r5, r0
      addi      r3, r24, 0x4
      bl        -0x2EEF4C
      lis       r4, 0x804D
      mr        r3, r24
      addi      r0, r4, 0x5768
      stw       r0, 0x0(r24)
      stw       r25, 0x14(r24)
      sth       r26, 0x10(r24)
      stw       r25, 0x28(r24)
      sth       r27, 0x24(r24)
      stw       r25, 0x3C(r24)
      sth       r28, 0x38(r24)
      stw       r25, 0x50(r24)
      sth       r29, 0x4C(r24)
      stw       r25, 0x64(r24)
      sth       r30, 0x60(r24)
      stw       r25, 0x78(r24)
      sth       r31, 0x74(r24)
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B07E0
 * Size:	00001C
 */
void efx::TChaseMtx6::setMtxptr((float (*)[4]))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      stw       r4, 0x3C(r3)
      stw       r4, 0x50(r3)
      stw       r4, 0x64(r3)
      stw       r4, 0x78(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B07FC
 * Size:	0000AC
 */
void efx::TChaseMtxT2::__ct((float (*)[4], unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r7, 0x5808
      lis       r7, 0x803B
      stw       r31, 0x1C(r1)
      mr        r31, r6
      addi      r7, r7, 0x8A8
      li        r6, 0x14
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      mr        r4, r7
      li        r7, 0x2
      stw       r28, 0x10(r1)
      mr        r28, r3
      lis       r3, 0x804B
      stw       r0, 0x0(r28)
      addi      r0, r3, 0x864
      lis       r3, 0x8014
      stw       r0, 0x0(r28)
      subi      r0, r3, 0x400
      addi      r3, r28, 0x4
      mr        r5, r0
      bl        -0x2EF028
      lis       r4, 0x804B
      mr        r3, r28
      addi      r0, r4, 0x880
      stw       r0, 0x0(r28)
      stw       r29, 0x14(r28)
      sth       r30, 0x10(r28)
      stw       r29, 0x28(r28)
      sth       r31, 0x24(r28)
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
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B08A8
 * Size:	000058
 */
void efx::TChaseMtxT::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x685C
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0900
 * Size:	00000C
 */
void efx::TChaseMtxT2::setMtxptr((float (*)[4]))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void efx::TChaseMtxT3::__ct((float (*)[4], unsigned short, unsigned short,
                             unsigned short))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void efx::TChaseMtxT3::setMtxptr((float (*)[4]))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B090C
 * Size:	0000AC
 */
void efx::TChaseMtxT4::__ct((float (*)[4], unsigned short, unsigned short,
                             unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r9, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r9, 0x5808
      lis       r9, 0x803B
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r29, r6
      mr        r30, r7
      lis       r3, 0x804D
      addi      r9, r9, 0x8A8
      mr        r27, r4
      mr        r28, r5
      mr        r31, r8
      mr        r4, r9
      li        r6, 0x14
      li        r7, 0x4
      stw       r0, 0x0(r26)
      subi      r0, r3, 0x4A34
      lis       r3, 0x8014
      stw       r0, 0x0(r26)
      subi      r0, r3, 0x400
      mr        r5, r0
      addi      r3, r26, 0x4
      bl        -0x2EF134
      lis       r4, 0x804D
      mr        r3, r26
      subi      r0, r4, 0x4A18
      stw       r0, 0x0(r26)
      stw       r27, 0x14(r26)
      sth       r28, 0x10(r26)
      stw       r27, 0x28(r26)
      sth       r29, 0x24(r26)
      stw       r27, 0x3C(r26)
      sth       r30, 0x38(r26)
      stw       r27, 0x50(r26)
      sth       r31, 0x4C(r26)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B09B8
 * Size:	000014
 */
void efx::TChaseMtxT4::setMtxptr((float (*)[4]))
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r4, 0x28(r3)
      stw       r4, 0x3C(r3)
      stw       r4, 0x50(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B09CC
 * Size:	0000A0
 */
void __ct__Q23efx14TChasePosYRot2FP10Vector3<float> PfUsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r8, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r8, 0x5808
      lis       r8, 0x803B
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r30, r6
      mr        r31, r7
      lis       r3, 0x804B
      addi      r8, r8, 0xA6C
      mr        r28, r4
      mr        r29, r5
      mr        r4, r8
      li        r6, 0x18
      li        r7, 0x2
      stw       r0, 0x0(r27)
      addi      r0, r3, 0x29B4
      lis       r3, 0x8017
      stw       r0, 0x0(r27)
      addi      r0, r3, 0x5C44
      mr        r5, r0
      addi      r3, r27, 0x4
      bl        -0x2EF1F0
      lis       r4, 0x804B
      mr        r3, r27
      addi      r0, r4, 0x29D0
      stw       r0, 0x0(r27)
      stw       r28, 0x14(r27)
      stw       r29, 0x18(r27)
      sth       r30, 0x10(r27)
      stw       r28, 0x2C(r27)
      stw       r29, 0x30(r27)
      sth       r31, 0x28(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0A6C
 * Size:	000058
 */
void efx::TChasePosYRot::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x68F4
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void setPosptr__Q23efx14TChasePosYRot2FP10Vector3<float>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void efx::TChasePosYRot2::setYRot((float*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0AC4
 * Size:	0000B0
 */
void __ct__Q23efx14TChasePosYRot3FP10Vector3<float> PfUsUsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r9, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r9, 0x5808
      lis       r9, 0x803B
      stmw      r26, 0x8(r1)
      mr        r26, r3
      mr        r29, r6
      mr        r30, r7
      lis       r3, 0x804D
      addi      r9, r9, 0xA6C
      mr        r27, r4
      mr        r28, r5
      mr        r31, r8
      mr        r4, r9
      li        r6, 0x18
      li        r7, 0x3
      stw       r0, 0x0(r26)
      subi      r0, r3, 0x62D4
      lis       r3, 0x8017
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x5C44
      mr        r5, r0
      addi      r3, r26, 0x4
      bl        -0x2EF2EC
      lis       r4, 0x804D
      mr        r3, r26
      subi      r0, r4, 0x62B8
      stw       r0, 0x0(r26)
      stw       r27, 0x14(r26)
      stw       r28, 0x18(r26)
      sth       r29, 0x10(r26)
      stw       r27, 0x2C(r26)
      stw       r28, 0x30(r26)
      sth       r30, 0x28(r26)
      stw       r27, 0x44(r26)
      stw       r28, 0x48(r26)
      sth       r31, 0x40(r26)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void setPosptr__Q23efx14TChasePosYRot3FP10Vector3<float>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void efx::TChasePosYRot3::setYRot((float*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __ct__Q23efx24TChasePosPosLocalYScale2FP10Vector3<float> P10Vector3<float>
fUsUs(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0B74
 * Size:	000058
 */
void efx::TChasePosPosLocalYScale::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x6778
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void setPosptr__Q23efx24TChasePosPosLocalYScale2FP10Vector3<float>
P10Vector3<float>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0BCC
 * Size:	0000C8
 */
void __ct__Q23efx24TChasePosPosLocalYScale3FP10Vector3<float> P10Vector3<float>
fUsUsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r9, 0x804B
      stw       r0, 0x34(r1)
      subi      r0, r9, 0x5808
      lis       r9, 0x803B
      stfd      f31, 0x28(r1)
      fmr       f31, f1
      stmw      r26, 0x10(r1)
      mr        r26, r3
      mr        r29, r6
      mr        r30, r7
      lis       r3, 0x804D
      addi      r6, r9, 0xB74
      mr        r27, r4
      mr        r28, r5
      mr        r4, r6
      mr        r31, r8
      li        r6, 0x1C
      li        r7, 0x3
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x32E0
      lis       r3, 0x802E
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x54
      mr        r5, r0
      addi      r3, r26, 0x4
      bl        -0x2EF3FC
      lis       r4, 0x804D
      mr        r3, r26
      addi      r0, r4, 0x32FC
      stw       r0, 0x0(r26)
      stw       r27, 0x14(r26)
      stw       r28, 0x18(r26)
      stfs      f31, 0x1C(r26)
      sth       r29, 0x10(r26)
      stw       r27, 0x30(r26)
      stw       r28, 0x34(r26)
      stfs      f31, 0x38(r26)
      sth       r30, 0x2C(r26)
      stw       r27, 0x4C(r26)
      stw       r28, 0x50(r26)
      stfs      f31, 0x54(r26)
      sth       r31, 0x48(r26)
      lfd       f31, 0x28(r1)
      lmw       r26, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0C94
 * Size:	00001C
 */
void setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<float>
P10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r5, 0x18(r3)
      stw       r4, 0x30(r3)
      stw       r5, 0x34(r3)
      stw       r4, 0x4C(r3)
      stw       r5, 0x50(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __ct__Q23efx24TChasePosPosLocalZScale2FP10Vector3<float> P10Vector3<float>
fUsUs(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0CB0
 * Size:	000058
 */
void efx::TChasePosPosLocalZScale::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lis       r5, 0x804E
      subi      r0, r4, 0x5808
      lis       r6, 0x804A
      stw       r0, 0x0(r3)
      subi      r0, r6, 0x1D84
      addi      r8, r5, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r4, r4, 0x67C4
      addi      r7, r8, 0x14
      li        r6, 0
      stw       r8, 0x0(r3)
      li        r5, 0x2B2
      addi      r0, r4, 0x14
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      sth       r5, 0xC(r3)
      stb       r6, 0xE(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void setPosptr__Q23efx24TChasePosPosLocalZScale2FP10Vector3<float>
P10Vector3<float>(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0D08
 * Size:	0000C8
 */
void __ct__Q23efx24TChasePosPosLocalZScale3FP10Vector3<float> P10Vector3<float>
fUsUsUs(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r9, 0x804B
      stw       r0, 0x34(r1)
      subi      r0, r9, 0x5808
      lis       r9, 0x803B
      stfd      f31, 0x28(r1)
      fmr       f31, f1
      stmw      r26, 0x10(r1)
      mr        r26, r3
      mr        r29, r6
      mr        r30, r7
      lis       r3, 0x804D
      addi      r6, r9, 0xCB0
      mr        r27, r4
      mr        r28, r5
      mr        r4, r6
      mr        r31, r8
      li        r6, 0x1C
      li        r7, 0x3
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x5868
      lis       r3, 0x802F
      stw       r0, 0x0(r26)
      addi      r0, r3, 0x44AC
      mr        r5, r0
      addi      r3, r26, 0x4
      bl        -0x2EF538
      lis       r4, 0x804D
      mr        r3, r26
      addi      r0, r4, 0x5884
      stw       r0, 0x0(r26)
      stw       r27, 0x14(r26)
      stw       r28, 0x18(r26)
      stfs      f31, 0x1C(r26)
      sth       r29, 0x10(r26)
      stw       r27, 0x30(r26)
      stw       r28, 0x34(r26)
      stfs      f31, 0x38(r26)
      sth       r30, 0x2C(r26)
      stw       r27, 0x4C(r26)
      stw       r28, 0x50(r26)
      stfs      f31, 0x54(r26)
      sth       r31, 0x48(r26)
      lfd       f31, 0x28(r1)
      lmw       r26, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __dt__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B0DD0
 * Size:	00001C
 */
void setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<float>
P10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stw       r4, 0x14(r3)
      stw       r5, 0x18(r3)
      stw       r4, 0x30(r3)
      stw       r5, 0x34(r3)
      stw       r4, 0x4C(r3)
      stw       r5, 0x50(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0DEC
 * Size:	00008C
 */
void efx::TOneEmitterChasePos::__dt(void)
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
      beq-      .loc_0x70
      lis       r3, 0x804E
      addic.    r0, r30, 0x8
      addi      r3, r3, 0x6ACC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x54
      lis       r4, 0x804B
      addi      r3, r30, 0x8
      addi      r0, r4, 0x81C
      li        r4, 0
      stw       r0, 0x8(r30)
      bl        0x6074C

    .loc_0x54:
      addi      r3, r30, 0x4
      li        r4, 0
      bl        -0x3211AC
      extsh.    r0, r31
      ble-      .loc_0x70
      mr        r3, r30
      bl        -0x38CDA4

    .loc_0x70:
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
 * Address:	803B0E78
 * Size:	00001C
 */
void efx::TOneEmitterChasePos::startDemoDrawOff(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      cmplwi    r3, 0
      beqlr-
      lwz       r0, 0xF4(r3)
      ori       r0, r0, 0x4
      stw       r0, 0xF4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0E94
 * Size:	00001C
 */
void efx::TOneEmitterChasePos::endDemoDrawOn(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      cmplwi    r3, 0
      beqlr-
      lwz       r0, 0xF4(r3)
      rlwinm    r0,r0,0,30,28
      stw       r0, 0xF4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803B0EB0
 * Size:	000060
 */
void efx::TCallBack_StaticClipping::__dt(void)
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
      lis       r5, 0x804E
      li        r4, 0
      addi      r0, r5, 0x6B4C
      stw       r0, 0x0(r30)
      bl        -0x321244
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x38CE3C

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
 * Address:	803B0F10
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup6<efx::TChaseMtx> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x6
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B0F8C
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x6
      blt+      .loc_0x1C
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
 * Address:	803B0FE4
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x6
      blt+      .loc_0x1C
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
 * Address:	803B103C
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x6
      blt+      .loc_0x1C
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
 * Address:	803B1094
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x6
      blt+      .loc_0x1C
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
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup5<efx::TChaseMtx> FPQ23efx3Arg(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B10EC
 * Size:	00007C
 */
void create__Q23efx31TSyncGroup4<efx::TChaseMtxT> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B1168
 * Size:	000058
 */
void fade__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B11C0
 * Size:	000058
 */
void forceKill__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1218
 * Size:	000058
 */
void startDemoDrawOff__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1270
 * Size:	000058
 */
void endDemoDrawOn__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B12C8
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup4<efx::TChaseMtx> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B1344
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B139C
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B13F4
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B144C
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B14A4
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup4<efx::TChasePos> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B1520
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1578
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B15D0
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1628
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1680
 * Size:	00007C
 */
void create__Q23efx28TSyncGroup4<efx::TForever> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x4
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B16FC
 * Size:	000058
 */
void fade__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1754
 * Size:	000058
 */
void forceKill__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B17AC
 * Size:	000058
 */
void startDemoDrawOff__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B1804
 * Size:	000058
 */
void endDemoDrawOn__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x4
      blt+      .loc_0x1C
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
 * Address:	803B185C
 * Size:	00007C
 */
void create__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale>
FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B18D8
 * Size:	000058
 */
void fade__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1930
 * Size:	000058
 */
void forceKill__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1988
 * Size:	000058
 */
void startDemoDrawOff__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale>
Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B19E0
 * Size:	000058
 */
void endDemoDrawOn__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1A38
 * Size:	00007C
 */
void create__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale>
FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B1AB4
 * Size:	000058
 */
void fade__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1B0C
 * Size:	000058
 */
void forceKill__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1B64
 * Size:	000058
 */
void startDemoDrawOff__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale>
Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1BBC
 * Size:	000058
 */
void endDemoDrawOn__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x1C
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1C14
 * Size:	00007C
 */
void create__Q23efx34TSyncGroup3<efx::TChasePosYRot> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x3
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B1C90
 * Size:	000058
 */
void fade__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1CE8
 * Size:	000058
 */
void forceKill__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1D40
 * Size:	000058
 */
void startDemoDrawOff__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1D98
 * Size:	000058
 */
void endDemoDrawOn__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Size:	00007C
 */
void create__Q23efx31TSyncGroup3<efx::TChaseMtxT> FPQ23efx3Arg(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void fade__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void forceKill__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void startDemoDrawOff__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void endDemoDrawOn__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B1DF0
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup3<efx::TChaseMtx> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B1E6C
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1EC4
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1F1C
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1F74
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B1FCC
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup3<efx::TChasePos> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B2048
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B20A0
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B20F8
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B2150
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B21A8
 * Size:	00007C
 */
void create__Q23efx28TSyncGroup3<efx::TForever> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x3
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B2224
 * Size:	000058
 */
void fade__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B227C
 * Size:	000058
 */
void forceKill__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B22D4
 * Size:	000058
 */
void startDemoDrawOff__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	803B232C
 * Size:	000058
 */
void endDemoDrawOn__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x3
      blt+      .loc_0x1C
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
 * Size:	00007C
 */
void create__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale>
FPQ23efx3Arg(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void fade__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void forceKill__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void startDemoDrawOff__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale>
Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void endDemoDrawOn__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void create__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale>
FPQ23efx3Arg(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void fade__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void forceKill__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void startDemoDrawOff__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale>
Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void endDemoDrawOn__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B2384
 * Size:	00007C
 */
void create__Q23efx34TSyncGroup2<efx::TChasePosYRot> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x2
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B2400
 * Size:	000058
 */
void fade__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2458
 * Size:	000058
 */
void forceKill__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B24B0
 * Size:	000058
 */
void startDemoDrawOff__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2508
 * Size:	000058
 */
void endDemoDrawOn__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x18
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2560
 * Size:	00007C
 */
void create__Q23efx31TSyncGroup2<efx::TChaseMtxT> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B25DC
 * Size:	000058
 */
void fade__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2634
 * Size:	000058
 */
void forceKill__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B268C
 * Size:	000058
 */
void startDemoDrawOff__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B26E4
 * Size:	000058
 */
void endDemoDrawOn__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B273C
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup2<efx::TChaseMtx> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B27B8
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2810
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2868
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B28C0
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2918
 * Size:	00007C
 */
void create__Q23efx29TSyncGroup2<efx::TChasePos> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B2994
 * Size:	000058
 */
void fade__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B29EC
 * Size:	000058
 */
void forceKill__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2A44
 * Size:	000058
 */
void startDemoDrawOff__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2A9C
 * Size:	000058
 */
void endDemoDrawOn__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x14
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2AF4
 * Size:	00007C
 */
void create__Q23efx28TSyncGroup2<efx::TForever> FPQ23efx3Arg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4

    .loc_0x24:
      addi      r3, r31, 0x4
      mr        r4, r29
      lwz       r12, 0x4(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r3, 0
      b         .loc_0x60

    .loc_0x4C:
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x2
      blt+      .loc_0x24
      li        r3, 0x1

    .loc_0x60:
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
 * Address:	803B2B70
 * Size:	000058
 */
void fade__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2BC8
 * Size:	000058
 */
void forceKill__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2C20
 * Size:	000058
 */
void startDemoDrawOff__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2C78
 * Size:	000058
 */
void endDemoDrawOn__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x10
      cmplwi    r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	803B2CD0
 * Size:	00004C
 */
void __sinit_efxBase_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804A
      lis       r3, 0x804E
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x1D84
      lis       r4, 0x803B
      stw       r0, -0x6608(r13)
      addi      r0, r3, 0x6B4C
      lis       r3, 0x804F
      addi      r4, r4, 0xEB0
      stw       r0, -0x6608(r13)
      addi      r5, r3, 0x7C10
      subi      r3, r13, 0x6608
      bl        -0x2F1608
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803B2D1C
 * Size:	000008
 */
void @4 @efx::TOneEmitter::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x43EC
    */
}

/*
 * --INFO--
 * Address:	803B2D24
 * Size:	000008
 */
void @4 @efx::TOneEmitter::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x273054
    */
}

/*
 * --INFO--
 * Address:	803B2D2C
 * Size:	000008
 */
void @4 @efx::TOneEmitterChasePos::executeAfter((JPABaseEmitter*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x40D0
    */
}

/*
 * --INFO--
 * Address:	803B2D34
 * Size:	000008
 */
void @4 @efx::TOneEmitterChasePos::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x1F4C
    */
}

/*
 * --INFO--
 * Address:	803B2D3C
 * Size:	000008
 */
void @4 @efx::TOneEmitterSimple::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x136030
    */
}

/*
 * --INFO--
 * Address:	803B2D44
 * Size:	000008
 */
void @4 @efx::TSync::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2B1AB0
    */
}

/*
 * --INFO--
 * Address:	803B2D4C
 * Size:	000008
 */
void @4 @efx::TChasePos::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2B1B3C
    */
}

/*
 * --INFO--
 * Address:	803B2D54
 * Size:	000008
 */
void @4 @efx::TChasePosYRot::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x23D114
    */
}

/*
 * --INFO--
 * Address:	803B2D5C
 * Size:	000008
 */
void @4 @efx::TChaseMtx::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2876C4
    */
}

/*
 * --INFO--
 * Address:	803B2D64
 * Size:	000008
 */
void @4 @efx::TChaseMtxT::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x273168
    */
}

/*
 * --INFO--
 * Address:	803B2D6C
 * Size:	000008
 */
void @4 @efx::TChasePosPos::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x10B888
    */
}

/*
 * --INFO--
 * Address:	803B2D74
 * Size:	000008
 */
void @4 @efx::TChasePosPosLocalZScale::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xBE8CC
    */
}

/*
 * --INFO--
 * Address:	803B2D7C
 * Size:	000008
 */
void @4 @efx::TChasePosPosLocalYScale::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0xD2D2C
    */
}
