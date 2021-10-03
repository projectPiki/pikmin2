

/*
 * --INFO--
 * Address:	8002EEC4
 * Size:	000098
 */
void JUTPalette::storeTLUT(_GXTlut, ResTLUT*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr.       r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x44
      lis       r3, 0x8047
      lis       r5, 0x8047
      addi      r3, r3, 0x4150
      li        r4, 0x23
      addi      r5, r5, 0x4160
      crclr     6, 0x6
      bl        0xBE868

    .loc_0x44:
      stb       r30, 0xC(r29)
      addi      r0, r31, 0x20
      mr        r3, r29
      lbz       r4, 0x0(r31)
      stb       r4, 0xD(r29)
      lbz       r4, 0x1(r31)
      stb       r4, 0x16(r29)
      lhz       r4, 0x2(r31)
      sth       r4, 0x14(r29)
      stw       r0, 0x10(r29)
      lwz       r4, 0x10(r29)
      lbz       r5, 0xD(r29)
      lhz       r6, 0x14(r29)
      bl        0xB8828
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
 * Address:	8002EF5C
 * Size:	000040
 */
void JUTPalette::storeTLUT(_GXTlut, _GXTlutFmt, JUTTransparency, unsigned short,
                           void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stb       r4, 0xC(r3)
      stb       r5, 0xD(r3)
      stb       r6, 0x16(r3)
      sth       r7, 0x14(r3)
      stw       r8, 0x10(r3)
      lwz       r4, 0x10(r3)
      lbz       r5, 0xD(r3)
      lhz       r6, 0x14(r3)
      bl        0xB87DC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8002EF9C
 * Size:	000044
 */
void JUTPalette::load()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lhz       r4, 0x14(r3)
      neg       r0, r4
      or        r0, r0, r4
      rlwinm.   r31,r0,1,31,31
      beq-      .loc_0x2C
      lbz       r4, 0xC(r3)
      bl        0xB87D8

    .loc_0x2C:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}