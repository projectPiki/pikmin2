#ifndef _MATH_H
#define _MATH_H

#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/math_api.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#ifndef __MWERKS__
// Get clangd to shut up about __fabs being undefined.
#define __fabs(x)    (x)
#define __frsqrte(x) (x)
#endif

#define FABS(x) (f32) __fabs(x)
#define fabs(x) __fabs(x)
// #define __frsqrtes opword

#define SQUARE(v) ((v) * (v))

#define signbit(x) ((int)(__HI(x) & 0x80000000))

#define TAU     6.2831855f
#define PI      3.1415927f
#define HALF_PI 1.5707964f

#define LONG_TAU 6.2831854820251465

extern int __float_nan[];
extern int __float_huge[];
extern int __double_huge[];

#define INFINITY (*(f32*)__float_huge)
#define NAN      (*(f32*)__float_nan)
#define HUGE_VAL (*(f64*)__double_huge)

inline f128 fabsl(f128 x) { return __fabs((f64)x); }

f64 acos(f64);
f64 asin(f64);
f64 atan(f64);
f64 atan2(f64, f64);
f64 ceil(f64);
f64 floor(f64);
f64 frexp(f64, int*);
f64 ldexp(f64, int);
f64 sqrt(f64);

f64 pow(f64, f64);

f64 log(f64);
f64 log10(f64);

f64 fmod(f64, f64);

f64 sin(f64 x);
f64 cos(f64 x);

f64 __ieee754_acos(f64);
f64 __ieee754_fmod(f64, f64);
f64 __ieee754_log(f64);
f64 __ieee754_log10(f64);
f64 __ieee754_pow(f64, f64);
f64 __ieee754_sqrt(f64);
f64 __ieee754_atan2(f64, f64);
f64 __ieee754_asin(f64);

f64 scalbn(f64, int);

f64 __kernel_sin(f64, f64, int);
f64 __kernel_cos(f64, f64);
f64 __kernel_tan(f64, f64, int);

int __ieee754_rem_pio2(f64, f64*);

// f32 sqrtf(f32);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
