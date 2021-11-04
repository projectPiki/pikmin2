extern double __ieee754_log10();

/*
 * --INFO--
 * Address:	800CF9EC
 * Size:	000020
 */

double log10(double __x) { return (double)__ieee754_log10(); }

/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x29A4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
