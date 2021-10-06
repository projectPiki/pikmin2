

/*
 * --INFO--
 * Address:	800A698C
 * Size:	000008
 */
void JASDvd::getThreadPointer()
{
    /*
    .loc_0x0:
      lwz       r3, -0x7550(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	800A6994
 * Size:	00007C
 */
void JASDvd::createThread(long, int, unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      li        r5, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      li        r3, 0x88
      lwz       r4, -0x7548(r13)
      bl        -0x82A84
      mr.       r4, r3
      beq-      .loc_0x50
      mr        r4, r29
      mr        r5, r30
      mr        r6, r31
      bl        0x1E64
      mr        r4, r3

    .loc_0x50:
      stw       r4, -0x7550(r13)
      lwz       r3, 0x2C(r4)
      bl        0x4BB08
      lwz       r0, 0x24(r1)
      li        r3, 0x1
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
 * Address:	800A6A10
 * Size:	000044
 */
void JASDvd::checkPassDvdT(unsigned long, unsigned long*,
                           void (*)(unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x800A
      stw       r0, 0x24(r1)
      addi      r0, r6, 0x6A54
      li        r6, 0xC
      stw       r3, 0x8(r1)
      lwz       r3, -0x7550(r13)
      stw       r4, 0xC(r1)
      mr        r4, r0
      stw       r5, 0x10(r1)
      addi      r5, r1, 0x8
      bl        0x1F88
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDvd::pauseDvdT()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDvd::unpauseDvdT()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6A54
 * Size:	000048
 */
void JASDvd::dvdThreadCheckBack(void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      cmplwi    r4, 0
      beq-      .loc_0x20
      lwz       r0, 0x0(r3)
      stw       r0, 0x0(r4)

    .loc_0x20:
      lwz       r12, 0x8(r3)
      cmplwi    r12, 0
      beq-      .loc_0x38
      lwz       r3, 0x0(r3)
      mtctr     r12
      bctrl

    .loc_0x38:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}