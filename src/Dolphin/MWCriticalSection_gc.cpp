

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void MWTerminateCriticalSection(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1598
 * Size:	000024
 */
void MWExitCriticalSection(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x0(r3)
      bl        0x2D6B8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800C15BC
 * Size:	000030
 */
void MWEnterCriticalSection(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x2D668
      stw       r3, 0x0(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800C15EC
 * Size:	000004
 */
void MWInitializeCriticalSection(void)
{
    /*
    .loc_0x0:
      blr
    */
}
