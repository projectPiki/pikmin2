extern double __ieee754_exp();

/*
 * --INFO--
 * Address:	800CF9AC
 * Size:	000020
 */

double exp(double __x) { return (double)__ieee754_exp(); }

/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x3140
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
