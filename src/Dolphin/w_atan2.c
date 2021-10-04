extern double __ieee754_atan2();

/*
 * --INFO--
 * Address:	800CF98C
 * Size:	000020
 */

double atan2(double __x, double __y) { return (double)__ieee754_atan2(); }

/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x33B0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
