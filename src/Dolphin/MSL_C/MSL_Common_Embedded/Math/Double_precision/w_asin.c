extern double __ieee754_asin();

/**
 * @note Address: 0x800CF96C
 * @note Size: 0x20
 */

double asin(double __x) { return (double)__ieee754_asin(); }

/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x35C8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
