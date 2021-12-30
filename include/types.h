#ifndef _TYPES_H
#define _TYPES_H

#include "BuildSettings.h"

// r2 is  8051E360
// r13 is 8051C680

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;

typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long size_t;
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
typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef int BOOL;

#ifndef TRUE
#define TRUE 1
#endif // ifndef TRUE

#ifndef FALSE
#define FALSE 0
#endif // ifndef FALSE

#ifndef NULL
#define NULL ((void*)0)
#endif // ifndef NULL

#ifndef nullptr
#define nullptr 0
#endif // ifndef nullptr

// Rounds to nearest multiple of 20 upwards and downwards
#define RoundUp20B(x)   (((u32)(x) + 0x1F) & ~(0x1F))
#define RoundDown20B(x) (((u32)(x)) & ~(0x1F))

#define ASSERT_HANG(cond) \
	if (!(cond)) {        \
		while (true) { }  \
	}

#endif
