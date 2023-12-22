#ifndef _FLOAT_H
#define _FLOAT_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

extern int __double_max[];
extern int __extended_min[];
extern int __extended_max[];
extern int __float_max[];
extern int __float_epsilon[];

#define FLT_MANT_DIG   24
#define FLT_DIG        6
#define FLT_MIN_EXP    (-125)
#define FLT_MIN_10_EXP (-37)
#define FLT_MAX_EXP    128
#define FLT_MAX_10_EXP 38

// #define FLT_MAX 0x1.fffffeP127F
// #define FLT_EPSILON 0x1.000000P-23F
#define FLT_MIN 0x1.000000P-126F

#define FLT_MAX     (*(f32*)__float_max)
#define FLT_EPSILON (*(f32*)__float_epsilon)

#define DBL_MANT_DIG   53
#define DBL_DIG        15
#define DBL_MIN_EXP    (-1021)
#define DBL_MIN_10_EXP (-308)
#define DBL_MAX_EXP    1024
#define DBL_MAX_10_EXP 308

// #define DBL_MAX 0x1.fffffffffffffP1023
#define DBL_EPSILON 0x1.0000000000000P-52
#define DBL_MIN     0x1.0000000000000P-1022

#define DBL_MAX (*(f64*)__double_max)

#define LDBL_MANT_DIG   53
#define LDBL_DIG        15
#define LDBL_MIN_EXP    (-1021)
#define LDBL_MIN_10_EXP (-308)
#define LDBL_MAX_EXP    1024
#define LDBL_MAX_10_EXP 308

// #define LDBL_MAX 0x1.fffffffffffffP1023L
#define LDBL_EPSILON 0x1.0000000000000P-52L
// #define LDBL_MIN 0x1.0000000000000P-1022L

#define LDBL_MAX (*(f128*)__extended_max)
#define LDBL_MIN (*(f128*)__extended_min)

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
