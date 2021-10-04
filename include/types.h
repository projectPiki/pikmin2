#ifndef _TYPES_H
#define _TYPES_H

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
typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef int BOOL;

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif
#ifndef nullptr
#define nullptr 0
#endif

// ALL C++ FUNCTIONS AND DEFINITIONS
#ifdef __cplusplus
struct JKRHeap {
    u32 getFreeSize();
    u32 getTotalFreeSize();
};

struct JUTException {
    static void panic_f(char const*, int, char const*, ...);
};

#endif

// ALL C FUNCTIONS AND DEFINITIONS
#ifdef __cplusplus
extern "C" {
#endif
void OSReport(const char*, ...);
void OSPanic(const char*, int, const char*, ...);
#define OSError(...) OSPanic(__FILE__, __LINE__, __VA_ARGS__)

typedef struct {
} OSContext;

typedef struct {
    int quot;
    int rem;
} div_t;
#ifdef __cplusplus
};
#endif

#endif