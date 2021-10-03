

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
 * Address:	801F78C8
 * Size:	0000A8
 */
void KandoLib::getRandomChoice(KandoLib::Choice*, int)
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
      bl        -0x12E344
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      mr        r3, r30
      lfd       f2, -0x46D8(r2)
      li        r4, 0
      stw       r0, 0x8(r1)
      lfs       f0, -0x46E0(r2)
      lfd       f1, 0x8(r1)
      lfs       f3, -0x46DC(r2)
      fsubs     f1, f1, f2
      fdivs     f1, f1, f0
      mtctr     r31
      cmpwi     r31, 0
      ble-      .loc_0x84

    .loc_0x5C:
      lfs       f0, 0x4(r3)
      fadds     f3, f3, f0
      fcmpo     cr0, f1, f3
      bge-      .loc_0x78
      rlwinm    r0,r4,3,0,28
      lwzx      r3, r30, r0
      b         .loc_0x90

    .loc_0x78:
      addi      r3, r3, 0x8
      addi      r4, r4, 0x1
      bdnz+     .loc_0x5C

    .loc_0x84:
      rlwinm    r0,r31,3,0,28
      add       r3, r30, r0
      lwz       r3, -0x8(r3)

    .loc_0x90:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}