#include "types.h"

extern f64 __ieee754_pow();

/**
 * @note Address: 0x800CFA0C
 * @note Size: 0x20
 */

f64 pow(f64 __x, f64 __y) { return (f64)__ieee754_pow(); }

/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x28B4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
