#ifndef _TYPES_H
#define _TYPES_H

#ifdef __INTELLISENSE__
#include "../.vscode/warnings.h"
#endif

#include "BuildSettings.h"

// r2 is  8051E360
// r13 is 8051C680

typedef int BOOL;
typedef unsigned int uint;

typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float f32;
typedef double f64;
typedef long double f128;
typedef volatile f32 vf32;
typedef volatile f64 vf64;
typedef volatile f128 vf128;

typedef u32 size_t;
typedef u32 unknown;

#ifndef __cplusplus
typedef u16 wchar_t;
#endif

#define SHORT_FLOAT_MAX (32768.0f)
#define SHORT_FLOAT_MIN (-32768.0f)

// Basic defines to allow newer-like C++ code to be written
#define TRUE  1
#define FALSE 0
#define NULL  ((void*)0)
#define nullptr 0

// Maximum length of a path in engine
#define PATH_MAX (256)

#define SET_FLAG(x, val)     (x |= (val))
#define RESET_FLAG(x, val)   (x &= ~(val))
#define IS_FLAG(x, val)      (x & val)
#define ARRAY_SIZE(o)        (sizeof((o)) / sizeof(*(o)))
#define ALIGN_PREV(X, N)     ((X) & ~((N)-1))
#define ALIGN_NEXT(X, N)     ALIGN_PREV(((X) + (N)-1), N)
#define IS_ALIGNED(X, N)     ((X & ((N)-1)) == 0)
#define IS_NOT_ALIGNED(X, N) (((X) & ((N)-1)) != 0)
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

#define ASSERT_HANG(cond) \
	if (!(cond)) {        \
		while (true) { }  \
	}

#define CLAMP_VALUE_ABOVE(val, limit)              ((val) > (limit)) ? (limit) : (val)
#define MAX(a, b)                                  (((a) > (b)) ? (a) : (b))
#define MIN(a, b)                                  (((a) < (b)) ? (a) : (b))
#define ROUND_F32_TO_U8(a)                         a >= 0.0f ? a + 0.5f : a - 0.5f
#define INTERPOLATE_BETWEEN(src, dest, proportion) (proportion) * ((f32)(dest) - (f32)(src)) + (f32)(src)

#ifdef __MWERKS__
#define WEAKFUNC        __declspec(weak)
#define DECL_SECT(name) __declspec(section name)
#define ASM             asm
#else
#define WEAKFUNC
#define DECL_SECT(name)
#define ASM
#endif

#endif // _TYPES_H
