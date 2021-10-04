#ifndef _TYPES_H
#define _TYPES_H

// r2 is  8051e360
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

// ALL C FUNCTIONS AND DEFINITIONS
#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void OSReport(const char*, ...);
void OSPanic(const char*, int, const char*, ...);
#define OSError(...) OSPanic(__FILE__, __LINE__, __VA_ARGS__)

__declspec(section ".init") void* memcpy(void*, const void*, size_t);
__declspec(section ".init") void __fill_mem(void*, int, size_t);
__declspec(section ".init") void* memset(void*, int, size_t);

// TODO
typedef struct OSContext {
    u8 filler[708];
} OSContext;

typedef struct OSThread {
    u8 filler[708];
    u8 filler2[68];
} OSThread;

OSThread* OSGetCurrentThread(void);
s32 OSSuspendThread(OSThread* thread);

typedef struct OSMessageQueue {
    u8 filler[32];
} OSMessageQueue;
typedef void* OSMessage;

BOOL OSSendMessage(OSMessageQueue* mq, OSMessage msg, s32 flags);

typedef struct div_t {
    int quot;
    int rem;
} div_t;

typedef struct __va_list_struct {
    char gpr;
    char fpr;
    char* input_arg_area;
    char* reg_save_area;
} va_list[1];

void* __va_arg(va_list, int);

#define va_start(ARG, VA_LIST) ((void)ARG, __builtin_va_info(&VA_LIST))
#define va_end(VA_LIST) ((void)VA_LIST)
#define va_arg(VA_LIST, ARG_TYPE)                                              \
    (*(ARG_TYPE*)) __va_arg(VA_LIST, _var_arg_typeof(ARG_TYPE))

int printf(const char*, ...);
int vprintf(const char*, va_list);
int snprintf(char*, size_t, const char*, ...);
int vsnprintf(char*, size_t, const char*, va_list);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

// ALL C++ FUNCTIONS AND DEFINITIONS
#ifdef __cplusplus
struct JKRHeap {
    u32 getFreeSize();
    u32 getTotalFreeSize();
};

struct JUTException {
    static void panic_f(char const*, int, char const*, ...);

    static u32* sConsole;
    static u32* sErrorManager;
    static OSMessageQueue sMessageQueue;
};

struct JFWSystem {
    static u32* mainThread;
};

struct Vec {
};

namespace PSM {
struct FrameCalcArg {
};

struct StartSoundArg {
};
} // namespace PSM

#endif // ifdef __cplusplus

#endif