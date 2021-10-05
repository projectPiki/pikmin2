extern double __ieee754_fmod();

/*
 * --INFO--
 * Address:	800CF9CC
 * Size:	000020
 */

double fmod(double __x, double __y) { return (double)__ieee754_fmod(); }

/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2F3C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
