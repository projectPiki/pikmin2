#include "types.h"

extern f64 __ieee754_fmod();

/**
 * @note Address: 0x800CF9CC
 * @note Size: 0x20
 */

f64 fmod(f64 __x, f64 __y) { return (f64)__ieee754_fmod(); }

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
