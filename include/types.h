#ifndef _TYPES_H
#define _TYPES_H

// r2 is  8051E360
// r13 is 8051C680

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


typedef struct {
    int quot; /* quotient */
    int rem;  /* remainder */
} div_t;


// For ghidra decomp stuff. Will replace later.
typedef unsigned char   undefined;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    int16;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned int    uint3;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef short  _wchar_t;
typedef unsigned char  _bool;

#endif