#ifndef _DOLPHIN_OS_H
#define _DOLPHIN_OS_H

#include "types.h"
#include "Dolphin/PPCArch.h"
#include "Dolphin/dvd.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/OS/OSUtil.h"
#include "Dolphin/OS/OSAlarm.h"
#include "Dolphin/OS/OSAlloc.h"
#include "Dolphin/OS/OSBootInfo.h"
#include "Dolphin/OS/OSContext.h"
#include "Dolphin/OS/OSMessage.h"
#include "Dolphin/OS/OSThread.h"

#define OSCachedToPhysical(paddr) ((void*)((u32)(paddr) + 0x80000000))

#define OS_CACHED_REGION_PREFIX   0x8000
#define OS_UNCACHED_REGION_PREFIX 0xC000
#define OS_PHYSICAL_MASK          0x3FFF

// __ppc_eabi_init
extern void __OSPSInit();
extern void __OSFPRInit();
extern void __OSCacheInit();

void OSInit();

// OS logging
void OSReport(const char* message, ...);
void OSPanic(const char* file, int line, const char* message, ...);

typedef u8 __OSException;
typedef u16 OSError;
typedef s16 __OSInterrupt;

#define OS_ERROR_SYSTEM_RESET       0
#define OS_ERROR_MACHINE_CHECK      1
#define OS_ERROR_DSI                2
#define OS_ERROR_ISI                3
#define OS_ERROR_EXTERNAL_INTERRUPT 4
#define OS_ERROR_ALIGNMENT          5
#define OS_ERROR_PROGRAM            6
#define OS_ERROR_FLOATING_POINT     7
#define OS_ERROR_DECREMENTER        8
#define OS_ERROR_SYSTEM_CALL        9
#define OS_ERROR_TRACE              10
#define OS_ERROR_PERFORMACE_MONITOR 11
#define OS_ERROR_BREAKPOINT         12
#define OS_ERROR_SYSTEM_INTERRUPT   13
#define OS_ERROR_THERMAL_INTERRUPT  14
#define OS_ERROR_PROTECTION         15
#define OS_ERROR_MAX                (OS_ERROR_PROTECTION + 1)

#define OS_EXCEPTION_SAVE_GPRS(context)               \
	stw r0, OS_CONTEXT_R0(context);                   \
	stw r1, OS_CONTEXT_R1(context);                   \
	stw r2, OS_CONTEXT_R2(context);                   \
	stmw r6, OS_CONTEXT_R6(context);                  \
	/* Save GQR1 to GQR7. GQR0 must always be zero */ \
	mfspr r0, GQR1;                                   \
	stw r0, OS_CONTEXT_GQR1(context);                 \
	mfspr r0, GQR2;                                   \
	stw r0, OS_CONTEXT_GQR2(context);                 \
	mfspr r0, GQR3;                                   \
	stw r0, OS_CONTEXT_GQR3(context);                 \
	mfspr r0, GQR4;                                   \
	stw r0, OS_CONTEXT_GQR4(context);                 \
	mfspr r0, GQR5;                                   \
	stw r0, OS_CONTEXT_GQR5(context);                 \
	mfspr r0, GQR6;                                   \
	stw r0, OS_CONTEXT_GQR6(context);                 \
	mfspr r0, GQR7;                                   \
	stw r0, OS_CONTEXT_GQR7(context);

volatile u16 OS_AI_DMA_ADDR_HI : 0xCC005030;
volatile u16 OS_AI_DMA_ADDR_LO : 0xCC005032;

volatile u16 OS_ARAM_DMA_BASE : 0xCC005000;
volatile u16 OS_ARAM_DMA_ADDR_HI : 0xCC005020;
volatile u16 OS_ARAM_DMA_ADDR_LO : 0xCC005022;
volatile u16 OS_DI_DMA_ADDR : 0xCC006014;

#define OSError(...) OSPanic(__FILE__, __LINE__, __VA_ARGS__)
#ifndef MATCHING
#define OSErrorLine(line, ...) OSError(__VA_ARGS__)
#else
#define OSErrorLine(line, ...) OSPanic(__FILE__, line, __VA_ARGS__)
#endif

void OSRegisterVersion(const char*);

typedef struct OSDummyCommandBlock OSDummyCommandBlock;
typedef void OSCommandBlockCallback(int, struct OSDummyCommandBlock*);

// TODO: This might be first 0x30 bytes of DVDPlayer?
struct OSDummyCommandBlock {
	u8 _00[8];                   // _00
	u32 _08;                     // _08
	int _0C;                     // _0C
	unknown _10;                 // _10
	unknown _14;                 // _14
	DVDDiskID* _18;              // _18
	unknown _1C;                 // _1C
	unknown _20;                 // _20
	DVDDiskID* diskID;           // _24
	OSCommandBlockCallback* _28; // _28
	u8 _2C[4];                   // _2C
};

#define OS_CURRENTCONTEXT_PADDR 0xC0

// OSArena
extern void* __OSArenaHi;

void* OSGetArenaHi(void);
void* OSGetArenaLo(void);

void OSSetArenaHi(void* addr);
void OSSetArenaLo(void* addr);

// OSMutex
typedef struct OSMutex {
	f32 _00;     // _00
	f32 _04;     // _04
	f32 _08;     // _08
	u8 _0C[0xC]; // _0C
} OSMutex;

// OSLink
void __OSModuleInit(void);

// OSFont
u16 OSGetFontEncode();
u8 OSInitFont();
char* OSGetFontTexture(const char* string, void** image, s32* x, s32* y, s32* width);
char* OSGetFontWidth(const char* string, s32* width);

// targsupp
extern void TRKAccessFile(void);
extern void TRKCloseFile(void);

void DCInvalidateRange(void* addr, u32 nBytes);
void DCFlushRange(void* addr, u32 nBytes);
void DCStoreRange(void* addr, u32 nBytes);
void DCFlushRangeNoSync(void* addr, u32 nBytes);
void DCStoreRangeNoSync(void* addr, u32 nBytes);
void DCZeroRange(void* addr, u32 nBytes);
void DCTouchRange(void* addr, u32 nBytes);

void ICInvalidateRange(void* addr, u32 nBytes);

#define LC_BASE_PREFIX 0xE000
#define LC_BASE        (LC_BASE_PREFIX << 16)

void L2Init(void);
void L2Disable(void);
void L2GlobalInvalidate(void);
void LCEnable(void);
void LCDisable(void);
void LCLoadBlocks(void* destTag, void* srcAddr, u32 numBlocks);
void LCStoreBlocks(void* destAddr, void* srcTag, u32 numBlocks);
u32 LCLoadData(void* destAddr, void* srcAddr, u32 nBytes);
u32 LCStoreData(void* destAddr, void* srcAddr, u32 nBytes);
u32 LCQueueLength(void);
void LCQueueWait(u32 len);
void LCFlushQueue(void);

#define LCGetBase() ((void*)LC_BASE)

#define OS_SYS_CALL_HANDLER  ((void*)0x80000C00)
#define OS_HANDLER_SLOT_SIZE (0x100)

void __OSSystemCallVectorStart();
void __OSSystemCallVectorEnd();

void __OSInitSystemCall();

typedef struct OSMutex OSMutex;
typedef struct OSCond OSCond;

typedef void* (*OSThreadStartFunction)(void*);

typedef enum {
	OS_MSG_PERSISTENT = (1 << 0),
} OSMessageFlags;

void __OSSetInterruptHandler(int, void*);

void OSInitThreadQueue(OSThreadQueue* queue);
OSThread* OSGetCurrentThread(void);
BOOL OSIsThreadSuspended(OSThread* thread);
BOOL OSIsThreadTerminated(OSThread* thread);
s32 OSDisableScheduler(void);
s32 OSEnableScheduler(void);
void OSYieldThread(void);
BOOL OSCreateThread(OSThread* thread, OSThreadStartFunction func, void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr);
void OSExitThread(void* val);
void OSCancelThread(OSThread* thread);
BOOL OSJoinThread(OSThread* thread, void** val);
void OSDetachThread(OSThread* thread);
s32 OSResumeThread(OSThread* thread);
s32 OSSuspendThread(OSThread* thread);
BOOL OSSetThreadPriority(OSThread* thread, OSPriority priority);
OSPriority OSGetThreadPriority(OSThread* thread);
void OSSleepThread(OSThreadQueue* queue);
void OSWakeupThread(OSThreadQueue* queue);

long OSCheckActiveThreads(void);

void OSInitMutex(OSMutex*);
void OSLockMutex(OSMutex*);
BOOL OSUnlockMutex(OSMutex*);
void __OSUnlockAllMutex(OSThread*);
BOOL OSTryLockMutex(OSMutex*);
void OSInitCond(OSThreadQueue*);
u32 OSWaitCond(OSThreadQueue*, OSMutex*);
void OSSignalCond(OSThreadQueue*);

void __OSUnlockSramEx(int);
u8* __OSLockSramEx(void);

void __OSUnmaskInterrupts(int);
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
int OSEnableInterrupts();

uint OSGetSoundMode();
void OSSetSoundMode(uint);
void OSSetSaveRegion(int, int);
int OSGetProgressiveMode();

// TODO: these match up for OSMessage.c, but break JSystem/JKRAramStream.cpp, need to fix
void OSInitMessageQueue(OSMessageQueue* queue, void** buffer, int capacity);
BOOL OSSendMessage(OSMessageQueue* queue, void* msg, int flags);
BOOL OSReceiveMessage(OSMessageQueue* queue, void** buffer, int flags);
BOOL OSJamMessage(OSMessageQueue* queue, void* msg, int flags);

typedef struct OSFunctionInfo {
	void* mFunction;
	uint _04;
	u8 _08[8];
} OSFunctionInfo;

void OSRegisterResetFunction(OSFunctionInfo*);
BOOL OSGetResetSwitchState();

typedef void (*OSErrorHandler)(unsigned short, OSContext*, unsigned long, unsigned long, ...);
OSErrorHandler OSSetErrorHandler(OSError, OSErrorHandler);

void OSFillFPUContext(OSContext*);
void OSProtectRange(u32, u32, u32, u32); /** TODO: Are these params correct? */
// void* OSGetStackPointer();
extern u32 __OSFpscrEnableBits; /** TODO: find a wrapper for this. Symbol is defined in OSError.c. */

#define HW_REG(reg, type)     *(volatile type*)(u32)(reg)
#define OSGetTicksPerSecond() (*(u32*)0x800000F8 / 4)

// u32 GameCode : 0x80000000;
// u32 FSTLocationInRam : 0x80000038;

// Rounds to nearest multiple of 20 upwards and downwards
#define OSRoundUp32B(x)   (((u32)(x) + 0x1F) & ~(0x1F))
#define OSRoundDown32B(x) (((u32)(x)) & ~(0x1F))

inline void OSInitFastCast()
{
	asm
	{
		li r3, 4
		oris r3, r3, 4
		mtspr 0x392, r3
		li r3, 5
		oris r3, r3, 5
		mtspr 0x393, r3
		li r3, 6
		oris r3, r3, 6
		mtspr 0x394, r3
		li r3, 7
		oris r3, r3, 7
		mtspr 0x395, r3
	}
}

inline s16 __OSf32tos16(register f32 inF)
{
	register s16 out;
	u32 tmp;
	register u32* tmpPtr = &tmp;
	// clang-format off
    asm {
        psq_st inF, 0(tmpPtr), 0x1, 5
        lha out, 0(tmpPtr)
    }
	// clang-format on

	return out;
}

inline void OSf32tos16(f32* f, s16* out) { *out = __OSf32tos16(*f); }

inline u8 __OSf32tou8(register f32 inF)
{
	register u8 out;
	u32 tmp;
	register u32* tmpPtr = &tmp;
	// clang-format off
    asm {
        psq_st inF, 0(tmpPtr), 0x1, 2
        lbz out, 0(tmpPtr)
    }
	// clang-format on

	return out;
}

inline void OSf32tou8(f32* f, u8* out) { *out = __OSf32tou8(*f); }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
