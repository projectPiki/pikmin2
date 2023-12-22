#ifndef _FDLIBM_H
#define _FDLIBM_H

#include "types.h"

/* @(#)fdlibm.h 1.5 04/04/22 */
/**
 * ====================================================
 * Copyright (C) 2004 by Sun Microsystems, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/* Sometimes it's necessary to define __LITTLE_ENDIAN explicitly
   but these catch some common cases. */

#if defined(i386) || defined(i486) || defined(intel) || defined(x86) || defined(i86pc) || defined(__alpha) || defined(__osf__)
#define __LITTLE_ENDIAN
#endif

#ifdef __LITTLE_ENDIAN
#define __HI(x)  *(1 + (int*)&x)
#define __LO(x)  *(int*)&x
#define __HIp(x) *(1 + (int*)x)
#define __LOp(x) *(int*)x
#else
#define __HI(x)  *(int*)&x
#define __LO(x)  *(1 + (int*)&x)
#define __HIp(x) *(int*)x
#define __LOp(x) *(1 + (int*)x)
#endif

// TODO: should __STDC__ actually be defined?
// #ifdef __STDC__
#define __P(p) p
// #else
// #define __P(p) ()
// #endif

/**
 * ANSI/POSIX
 */

extern int signgam;

#define MAXFLOAT ((f32)3.40282346638528860e+38)

enum fdversion { fdlibm_ieee = -1, fdlibm_svid, fdlibm_xopen, fdlibm_posix };

#define _LIB_VERSION_TYPE enum fdversion
#define _LIB_VERSION      _fdlib_version

/* if global variable _LIB_VERSION is not desirable, one may
 * change the following to be a constant by:
 *	#define _LIB_VERSION_TYPE const enum version
 * In that case, after one initializes the value _LIB_VERSION (see
 * s_lib_version.c) during compile time, it cannot be modified
 * in the middle of a program
 */
extern _LIB_VERSION_TYPE _LIB_VERSION;

#define _IEEE_  fdlibm_ieee
#define _SVID_  fdlibm_svid
#define _XOPEN_ fdlibm_xopen
#define _POSIX_ fdlibm_posix

struct exception {
	int type;
	char* name;
	f64 arg1;
	f64 arg2;
	f64 retval;
};

#define HUGE MAXFLOAT

/**
 * set X_TLOSS = pi*2**52, which is possibly defined in <values.h>
 * (one may replace the following line by "#include <values.h>")
 */

#define X_TLOSS 1.41484755040568800000e+16

#define DOMAIN    1
#define SING      2
#define OVERFLOW  3
#define UNDERFLOW 4
#define TLOSS     5
#define PLOSS     6

/**
 * ANSI/POSIX
 */
extern f64 acos __P((f64));
extern f64 asin __P((f64));
extern f64 atan __P((f64));
extern f64 atan2 __P((f64, f64));
extern f64 cos __P((f64));
extern f64 sin __P((f64));
extern f64 tan __P((f64));

extern f64 cosh __P((f64));
extern f64 sinh __P((f64));
extern f64 tanh __P((f64));

extern f64 exp __P((f64));
extern f64 frexp __P((f64, int*));
extern f64 ldexp __P((f64, int));
extern f64 scalbn __P((f64, int));
extern f64 log __P((f64));
extern f64 log10 __P((f64));
extern f64 modf __P((f64, f64*));

extern f64 pow __P((f64, f64));
extern f64 sqrt __P((f64));

extern f64 ceil __P((f64));
extern f64 fabs __P((f64));
extern f64 floor __P((f64));
extern f64 fmod __P((f64, f64));

extern f64 erf __P((f64));
extern f64 erfc __P((f64));
extern f64 gamma __P((f64));
extern f64 hypot __P((f64, f64));
extern int isnan __P((f64));
extern int finite __P((f64));
extern f64 j0 __P((f64));
extern f64 j1 __P((f64));
extern f64 jn __P((int, f64));
extern f64 lgamma __P((f64));
extern f64 y0 __P((f64));
extern f64 y1 __P((f64));
extern f64 yn __P((int, f64));

extern f64 acosh __P((f64));
extern f64 asinh __P((f64));
extern f64 atanh __P((f64));
extern f64 cbrt __P((f64));
extern f64 logb __P((f64));
extern f64 nextafter __P((f64, f64));
extern f64 remainder __P((f64, f64));
#ifdef _SCALB_INT
extern f64 scalb __P((f64, int));
#else
extern f64 scalb __P((f64, f64));
#endif

extern int matherr __P((struct exception*));

/**
 * IEEE Test Vector
 */
extern f64 significand __P((f64));

/**
 * Functions callable from C, intended to support IEEE arithmetic.
 */
extern f64 copysign __P((f64, f64));
extern int ilogb __P((f64));
extern f64 rint __P((f64));
extern f64 scalbn __P((f64, int));

/**
 * BSD math library entry points
 */
extern f64 expm1 __P((f64));
extern f64 log1p __P((f64));

/**
 * Reentrant version of gamma & lgamma; passes signgam back by reference
 * as the second argument; user must allocate space for signgam.
 */
#ifdef _REENTRANT
extern f64 gamma_r __P((f64, int*));
extern f64 lgamma_r __P((f64, int*));
#endif /* _REENTRANT */

/* ieee style elementary functions */
extern f64 __ieee754_sqrt __P((f64));
extern f64 __ieee754_acos __P((f64));
extern f64 __ieee754_acosh __P((f64));
extern f64 __ieee754_log __P((f64));
extern f64 __ieee754_atanh __P((f64));
extern f64 __ieee754_asin __P((f64));
extern f64 __ieee754_atan2 __P((f64, f64));
extern f64 __ieee754_exp __P((f64));
extern f64 __ieee754_cosh __P((f64));
extern f64 __ieee754_fmod __P((f64, f64));
extern f64 __ieee754_pow __P((f64, f64));
extern f64 __ieee754_lgamma_r __P((f64, int*));
extern f64 __ieee754_gamma_r __P((f64, int*));
extern f64 __ieee754_lgamma __P((f64));
extern f64 __ieee754_gamma __P((f64));
extern f64 __ieee754_log10 __P((f64));
extern f64 __ieee754_sinh __P((f64));
extern f64 __ieee754_hypot __P((f64, f64));
extern f64 __ieee754_j0 __P((f64));
extern f64 __ieee754_j1 __P((f64));
extern f64 __ieee754_y0 __P((f64));
extern f64 __ieee754_y1 __P((f64));
extern f64 __ieee754_jn __P((int, f64));
extern f64 __ieee754_yn __P((int, f64));
extern f64 __ieee754_remainder __P((f64, f64));
extern int __ieee754_rem_pio2 __P((f64, f64*));
#ifdef _SCALB_INT
extern f64 __ieee754_scalb __P((f64, int));
#else
extern f64 __ieee754_scalb __P((f64, f64));
#endif

/* fdlibm kernel function */
extern f64 __kernel_standard __P((f64, f64, int));
extern f64 __kernel_sin __P((f64, f64, int));
extern f64 __kernel_cos __P((f64, f64));
extern f64 __kernel_tan __P((f64, f64, int));
extern int __kernel_rem_pio2 __P((f64*, f64*, int, int, int, const int*));

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
