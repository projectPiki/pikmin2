
/* @(#)s_copysign.c 1.3 95/01/18 */
/**
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

/**
 * copysign(f64 x, f64 y)
 * copysign(x,y) returns a value with the magnitude of x and
 * with the sign bit of y.
 */

#include "fdlibm.h"

#ifdef __STDC__
f64 copysign(f64 x, f64 y)
#else
f64 copysign(x, y) f64 x, y;
#endif
{
	__HI(x) = (__HI(x) & 0x7fffffff) | (__HI(y) & 0x80000000);
	return x;
}
