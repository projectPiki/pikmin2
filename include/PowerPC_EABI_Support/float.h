#ifndef _FLOAT_H
#define _FLOAT_H

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

extern int __double_max[];
extern int __extended_min[];
extern int __extended_max[];
extern int __float_max[];
extern int __float_epsilon[];

#define FLT_MAX     (*(float*)__float_max)
#define FLT_EPSILON (*(float*)__float_epsilon)

#define DBL_MAX (*(double*)__double_max)

#define LDBL_MAX (*(long double*)__extended_max)
#define LDBL_MIN (*(long double*)__extended_min)

#define DBL_DIG 15
//#define DBL_MAX 0x1.fffffffffffffP1023
#define DBL_MIN 0x1.0000000000000P-1022

//#define LDBL_MAX 0x1.fffffffffffffP1023L
#define LDBL_EPSILON 0x1.0000000000000P-52L
//#define LDBL_MIN 0x1.0000000000000P-1022L

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
