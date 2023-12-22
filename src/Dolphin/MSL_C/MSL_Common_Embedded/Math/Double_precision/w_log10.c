#include "types.h"

extern f64 __ieee754_log10();

/**
 * @note Address: 0x800CF9EC
 * @note Size: 0x20
 */

f64 log10(f64 __x) { return (f64)__ieee754_log10(); }

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
