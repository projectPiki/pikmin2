

/*
 * --INFO--
 * Address:	80093A40
 * Size:	000010
 */
void JPAKeyBlock::JPAKeyBlock(const unsigned char*)
{
    /*
    .loc_0x0:
      stw       r4, 0x0(r3)
      addi      r0, r4, 0xC
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JPAKeyBlock::init_jpa(const unsigned char*, JKRHeap*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80093A50
 * Size:	000094
 */
void JPAKeyBlock::calc(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      mr        r6, r3
      stw       r0, 0x24(r1)
      lwz       r5, 0x0(r3)
      lbz       r0, 0xB(r5)
      cmpwi     r0, 0
      beq-      .loc_0x78
      lbz       r3, 0x9(r5)
      fctiwz    f0, f1
      lis       r0, 0x4330
      lwz       r4, 0x4(r6)
      subi      r3, r3, 0x1
      stw       r0, 0x18(r1)
      rlwinm    r0,r3,4,0,27
      lfsx      f2, r4, r0
      stfd      f0, 0x10(r1)
      fctiwz    f0, f2
      lfd       f2, -0x7750(r2)
      lwz       r0, 0x14(r1)
      stfd      f0, 0x8(r1)
      lwz       r3, 0xC(r1)
      addi      r3, r3, 0x1
      divw      r0, r0, r3
      mullw     r0, r0, r3
      xoris     r0, r0, 0x8000
      stw       r0, 0x1C(r1)
      lfd       f0, 0x18(r1)
      fsubs     f0, f0, f2
      fsubs     f1, f1, f0

    .loc_0x78:
      lbz       r3, 0x9(r5)
      lwz       r4, 0x4(r6)
      bl        0x490
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}