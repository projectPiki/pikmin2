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

#define FABS(x) (float)__fabs(x)
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

#define INFINITY (*(float*)__float_huge)
#define NAN      (*(float*)__float_nan)
#define HUGE_VAL (*(double*)__double_huge)

inline long double fabsl(long double x) { return __fabs((double)x); }

double acos(double);
double asin(double);
double atan(double);
double atan2(double, double);
double ceil(double);
double floor(double);
double frexp(double, int*);
double ldexp(double, int);
double sqrt(double);

double pow(double, double);

double log(double);
double log10(double);

double fmod(double, double);

double sin(double x);
double cos(double x);

double __ieee754_acos(double);
double __ieee754_fmod(double, double);
double __ieee754_log(double);
double __ieee754_log10(double);
double __ieee754_pow(double, double);
double __ieee754_sqrt(double);
double __ieee754_atan2(double, double);
double __ieee754_asin(double);

double scalbn(double, int);

double __kernel_sin(double, double, int);
double __kernel_cos(double, double);
double __kernel_tan(double, double, int);

int __ieee754_rem_pio2(double, double*);

// float sqrtf(float);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
