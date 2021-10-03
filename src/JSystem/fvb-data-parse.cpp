

/*
 * --INFO--
 * Address:	8000CA3C
 * Size:	000068
 */
void JStudio::fvb::data::TParse_TParagraph::getData(
    const(JStudio::fvb::data::TParse_TParagraph::TData*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lwz       r3, 0x0(r3)
      li        r6, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      addi      r5, r31, 0x4
      bl        0x1A6CC
      lwz       r4, 0x0(r31)
      cmplwi    r4, 0
      bne-      .loc_0x40
      li        r0, 0
      stw       r0, 0x8(r31)
      stw       r3, 0xC(r31)
      b         .loc_0x54

    .loc_0x40:
      addi      r0, r4, 0x3
      stw       r3, 0x8(r31)
      rlwinm    r0,r0,0,0,29
      add       r0, r3, r0
      stw       r0, 0xC(r31)

    .loc_0x54:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
