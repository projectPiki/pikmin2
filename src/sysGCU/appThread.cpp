

/*
 * --INFO--
 * Address:	80424E18
 * Size:	00003C
 */
void AppThread::AppThread(unsigned long, int, int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x3FF7F4
      lis       r4, 0x804F
      mr        r3, r31
      subi      r0, r4, 0x44A8
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
