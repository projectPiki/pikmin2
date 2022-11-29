#ifndef _DOLPHIN_OS_H
#define _DOLPHIN_OS_H

#include "types.h"
#include "Dolphin/PPCArch.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

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
typedef u64 OSTime;

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

// TODO: fill these structs
typedef struct OSContext {
	// General-purpose registers
	u32 gpr[32];

	u32 cr;
	u32 lr;
	u32 ctr;
	u32 xer;

	// Floating-point registers
	f64 fpr[32];

	u32 fpscr_pad;
	u32 fpscr;

	// Exception handling registers
	u32 srr0;
	u32 srr1;

	// Context mode
	u16 mode;  // since UIMM is 16 bits in PPC
	u16 state; // OR-ed OS_CONTEXT_STATE_*

	// Place Gekko regs at the end so we have minimal changes to
	// existing code
	u32 gqr[8];
	f64 psf[32];

} OSContext;

typedef struct DVDDiskID DVDDiskID;

struct DVDDiskID {
	char gameName[4];
	char company[2];
	u8 diskNumber;
	u8 gameVersion;
	u8 streaming;
	u8 streamingBufSize; // 0 = default
	u8 padding[22];      // 0's are stored
};

typedef struct OSBootInfo_s {
	DVDDiskID DVDDiskID; // 0x0
	// u32 DVDmagic;     // 0x18 0xc2339f3d for Nintendo Game Disc
	u32 magic;         // 0x20
	u32 version;       // 0x24
	u32 memorySize;    // 0x28
	u32 consoleType;   // 0x2C
	void* arenaLo;     // 0x30
	void* arenaHi;     // 0x34
	void* FSTLocation; // 0x38
	u32 FSTMaxLength;  // 0x3C
} OSBootInfo;
typedef struct BI2Debug {
	s32 debugMonSize;  // 0x0
	s32 simMemSize;    // 0x4
	u32 argOffset;     // 0x8
	u32 debugFlag;     // 0xC
	int trackLocation; // 0x10
	int trackSize;     // 0x14
	u32 countryCode;   // 0x18
	u8 unk[8];         // 0x1C
	u32 padSpec;       // 0x24
} BI2Debug;

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

#define OS_MESSAGE_NON_BLOCKING 0
#define OS_MESSAGE_BLOCKING     1

#define OS_CURRENTCONTEXT_PADDR 0xC0

// Floating point context modes
#define OS_CONTEXT_MODE_FPU  0x01u
#define OS_CONTEXT_MODE_PSFP 0x02u

// Context status
#define OS_CONTEXT_STATE_FPSAVED 0x01u // set if FPU is saved
#define OS_CONTEXT_STATE_EXC     0x02u // set if saved by exception

// Size of context frame on stack.
// This constant should reflect a large enough number to hold
// an entire context and padding for the stack frame header.
#define __OS_CONTEXT_FRAME 768

#define OS_CONTEXT_R0  0
#define OS_CONTEXT_R1  4
#define OS_CONTEXT_R2  8
#define OS_CONTEXT_R3  12
#define OS_CONTEXT_R4  16
#define OS_CONTEXT_R5  20
#define OS_CONTEXT_R6  24
#define OS_CONTEXT_R7  28
#define OS_CONTEXT_R8  32
#define OS_CONTEXT_R9  36
#define OS_CONTEXT_R10 40
#define OS_CONTEXT_R11 44
#define OS_CONTEXT_R12 48
#define OS_CONTEXT_R13 52
#define OS_CONTEXT_R14 56
#define OS_CONTEXT_R15 60
#define OS_CONTEXT_R16 64
#define OS_CONTEXT_R17 68
#define OS_CONTEXT_R18 72
#define OS_CONTEXT_R19 76
#define OS_CONTEXT_R20 80
#define OS_CONTEXT_R21 84
#define OS_CONTEXT_R22 88
#define OS_CONTEXT_R23 92
#define OS_CONTEXT_R24 96
#define OS_CONTEXT_R25 100
#define OS_CONTEXT_R26 104
#define OS_CONTEXT_R27 108
#define OS_CONTEXT_R28 112
#define OS_CONTEXT_R29 116
#define OS_CONTEXT_R30 120
#define OS_CONTEXT_R31 124

#define OS_CONTEXT_CR  128
#define OS_CONTEXT_LR  132
#define OS_CONTEXT_CTR 136
#define OS_CONTEXT_XER 140

#define OS_CONTEXT_FPR0  144
#define OS_CONTEXT_FPR1  152
#define OS_CONTEXT_FPR2  160
#define OS_CONTEXT_FPR3  168
#define OS_CONTEXT_FPR4  176
#define OS_CONTEXT_FPR5  184
#define OS_CONTEXT_FPR6  192
#define OS_CONTEXT_FPR7  200
#define OS_CONTEXT_FPR8  208
#define OS_CONTEXT_FPR9  216
#define OS_CONTEXT_FPR10 224
#define OS_CONTEXT_FPR11 232
#define OS_CONTEXT_FPR12 240
#define OS_CONTEXT_FPR13 248
#define OS_CONTEXT_FPR14 256
#define OS_CONTEXT_FPR15 264
#define OS_CONTEXT_FPR16 272
#define OS_CONTEXT_FPR17 280
#define OS_CONTEXT_FPR18 288
#define OS_CONTEXT_FPR19 296
#define OS_CONTEXT_FPR20 304
#define OS_CONTEXT_FPR21 312
#define OS_CONTEXT_FPR22 320
#define OS_CONTEXT_FPR23 328
#define OS_CONTEXT_FPR24 336
#define OS_CONTEXT_FPR25 344
#define OS_CONTEXT_FPR26 352
#define OS_CONTEXT_FPR27 360
#define OS_CONTEXT_FPR28 368
#define OS_CONTEXT_FPR29 376
#define OS_CONTEXT_FPR30 384
#define OS_CONTEXT_FPR31 392

#define OS_CONTEXT_FPSCR 400 // 8 bytes including padding

#define OS_CONTEXT_SRR0 408
#define OS_CONTEXT_SRR1 412

#define OS_CONTEXT_MODE  416 // only 2 bytes
#define OS_CONTEXT_STATE 418 // only 2 bytes

#define OS_CONTEXT_GQR0     420
#define OS_CONTEXT_GQR1     424
#define OS_CONTEXT_GQR2     428
#define OS_CONTEXT_GQR3     432
#define OS_CONTEXT_GQR4     436
#define OS_CONTEXT_GQR5     440
#define OS_CONTEXT_GQR6     444
#define OS_CONTEXT_GQR7     448
#define __OSCONTEXT_PADDING 452 // double word alignment for the 64 bit psf

#define OS_CONTEXT_PSF0  456
#define OS_CONTEXT_PSF1  464
#define OS_CONTEXT_PSF2  472
#define OS_CONTEXT_PSF3  480
#define OS_CONTEXT_PSF4  488
#define OS_CONTEXT_PSF5  496
#define OS_CONTEXT_PSF6  504
#define OS_CONTEXT_PSF7  512
#define OS_CONTEXT_PSF8  520
#define OS_CONTEXT_PSF9  528
#define OS_CONTEXT_PSF10 536
#define OS_CONTEXT_PSF11 544
#define OS_CONTEXT_PSF12 552
#define OS_CONTEXT_PSF13 560
#define OS_CONTEXT_PSF14 568
#define OS_CONTEXT_PSF15 576
#define OS_CONTEXT_PSF16 584
#define OS_CONTEXT_PSF17 592
#define OS_CONTEXT_PSF18 600
#define OS_CONTEXT_PSF19 608
#define OS_CONTEXT_PSF20 616
#define OS_CONTEXT_PSF21 624
#define OS_CONTEXT_PSF22 632
#define OS_CONTEXT_PSF23 640
#define OS_CONTEXT_PSF24 648
#define OS_CONTEXT_PSF25 656
#define OS_CONTEXT_PSF26 664
#define OS_CONTEXT_PSF27 672
#define OS_CONTEXT_PSF28 680
#define OS_CONTEXT_PSF29 688
#define OS_CONTEXT_PSF30 696
#define OS_CONTEXT_PSF31 704

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

void OSClearContext(OSContext*);
OSContext* OSGetCurrentContext();
void OSSetCurrentContext(OSContext*);

// OSAlarm
typedef struct OSAlarm OSAlarm;
struct OSAlarm {
	unknown _00;        // _00
	unknown _04;        // _04
	u32 systemTime[2];  // _08
	OSAlarm* headwards; // _10
	OSAlarm* tailwards; // _14
	u32 _18;            // _18
	unknown _1C;        // _1C
	u8 _20[8];          // _20
};

struct OSAlarmQueue {
	OSAlarm* head;
	OSAlarm* tail;
};

typedef void AlarmCallback(unknown p1, OSContext* context);

void OSInitAlarm();
void OSCreateAlarm(OSAlarm* alarm);
void OSSetAlarm(OSAlarm* alarm, unknown p2, unknown p3, u32 tickRateMaybe, AlarmCallback* handler);
void OSCancelAlarm(OSAlarm* alarm);

// OSArena
extern void* __OSArenaHi;

void* OSGetArenaHi(void);
void* OSGetArenaLo(void);

void OSSetArenaHi(void* addr);
void OSSetArenaLo(void* addr);

// OSMemory
typedef int OSHeapHandle;

extern volatile OSHeapHandle __OSCurrHeap;

void* OSInitAlloc(void*, void*, int);
OSHeapHandle OSCreateHeap(void*, void*);
OSHeapHandle OSSetCurrentHeap(OSHeapHandle);
void* OSAllocFromHeap(OSHeapHandle, u32);
long OSCheckHeap(OSHeapHandle);
void OSFreeToHeap(OSHeapHandle heap, void* ptr);

#define OSAlloc(size) OSAllocFromHeap(__OSCurrHeap, (size))
#define OSFree(ptr)   OSFreeToHeap(__OSCurrHeap, (ptr))

// OSMutex
typedef struct OSMutexObject {
	char filler[0x18];
} OSMutexObject;

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

typedef struct OSFstEntry {
	int m_entryNum;
	int m_nextEntryNum;
	char* m_fileNameMaybe;
} OSFstEntry;

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

u64 OSGetTime();
u32 OSGetTick();

#define OS_SYS_CALL_HANDLER  ((void*)0x80000C00)
#define OS_HANDLER_SLOT_SIZE (0x100)

void __OSSystemCallVectorStart();
void __OSSystemCallVectorEnd();

void __OSInitSystemCall();

typedef struct OSThread OSThread;
typedef struct OSThreadQueue OSThreadQueue;
typedef struct OSThreadLink OSThreadLink;
typedef s32 OSPriority; //  0 highest, 31 lowest

typedef struct OSMutexObject OSMutex;
typedef struct OSMutexQueue OSMutexQueue;
typedef struct OSMutexLink OSMutexLink;
typedef struct OSCond OSCond;

typedef struct OSMessageQueue OSMessageQueue;
typedef struct OSMessage OSMessage;

typedef void (*OSIdleFunction)(void* param);
typedef void* (*OSThreadStartFunction)(void*);

struct OSThreadQueue {
	OSThread* head;
	OSThread* tail;
};

struct OSThreadLink {
	OSThread* next;
	OSThread* prev;
};

struct OSMutexQueue {
	OSMutex* head;
	OSMutex* tail;
};

struct OSMutexLink {
	OSMutex* next;
	OSMutex* prev;
};

struct OSThread {
	OSContext context; // register context

	u16 state;           // OS_THREAD_STATE_*
	u16 attr;            // OS_THREAD_ATTR_*
	s32 suspend;         // suspended if the count is greater than zero
	OSPriority priority; // effective scheduling priority
	OSPriority base;     // base scheduling priority
	void* val;           // exit value

	OSThreadQueue* queue; // queue thread is on
	OSThreadLink link;    // queue link

	OSThreadQueue queueJoin; // list of threads waiting for termination (join)

	OSMutex* mutex;          // mutex trying to lock
	OSMutexQueue queueMutex; // list of mutexes owned

	OSThreadLink linkActive; // link of all threads for debugging

	u8* stackBase; // the thread's designated stack (high address)
	u32* stackEnd; // last word of stack (low address)
	unknown _30C;
	unknown _310;
	unknown _314;
};

struct OSMessage {
	void* message;
	u32 args[3];
};

struct OSMessageQueue {
	OSThreadQueue sendQueue; // _00
	OSThreadQueue recvQueue; // _08
	OSMessage** buffer;      // _10
	int capacity;            // _14
	int front;               // _18
	int size;                // _1C
};

typedef enum {
	OS_MSG_PERSISTENT = (1 << 0),
} OSMessageFlags;

// Thread states
enum OS_THREAD_STATE { OS_THREAD_STATE_READY = 1, OS_THREAD_STATE_RUNNING = 2, OS_THREAD_STATE_WAITING = 4, OS_THREAD_STATE_MORIBUND = 8 };

// Thread priorities
#define OS_PRIORITY_MIN  0 // highest
#define OS_PRIORITY_MAX  31 // lowest
#define OS_PRIORITY_IDLE OS_PRIORITY_MAX

// Thread attributes
#define OS_THREAD_ATTR_DETACH 0x0001u

// Stack magic value
#define OS_THREAD_STACK_MAGIC 0xDEADBABE

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

void OSInitMutex(OSMutexObject*);
void OSLockMutex(OSMutexObject*);
BOOL OSUnlockMutex(OSMutexObject*);
void __OSUnlockAllMutex(OSThread*);
BOOL OSTryLockMutex(OSMutexObject*);
void OSInitCond(OSThreadQueue*);
u32 OSWaitCond(OSThreadQueue*, OSMutexObject*);
void OSSignalCond(OSThreadQueue*);

void __OSUnlockSramEx(int);
u8* __OSLockSramEx(void);

void __OSUnmaskInterrupts(int);
int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void OSEnableInterrupts();

uint OSGetSoundMode();
void OSSetSoundMode(uint);

// void OSInitMessageQueue(OSMessageQueue* queue, void** msgSlots, int slotCount);
// BOOL OSSendMessage(OSMessageQueue* queue, void* message, int flags);
// BOOL OSReceiveMessage(OSMessageQueue* queue, void** msg, int flags);

// TODO: these match up for OSMessage.c, but break JSystem/JKRAramStream.cpp, need to fix
void OSInitMessageQueue(OSMessageQueue* queue, void** buffer, int capacity);
BOOL OSSendMessage(OSMessageQueue* queue, void* msg, int flags);
BOOL OSReceiveMessage(OSMessageQueue* queue, void** buffer, int flags);
BOOL OSJamMessage(OSMessageQueue* queue, void* msg, int flags);

typedef struct OSFunctionInfo {
	void* m_function;
	uint _04;
	u8 _08[8];
} OSFunctionInfo;

void OSRegisterResetFunction(OSFunctionInfo*);
BOOL OSGetResetSwitchState();

typedef void (*OSErrorHandler)(unsigned short, OSContext*, unsigned long, unsigned long, ...);
OSErrorHandler OSSetErrorHandler(OSError, OSErrorHandler);

void OSFillFPUContext(OSContext*);
void OSProtectRange(u32, u32, u32, u32); /** TODO: Are these params correct? */
void* OSGetStackPointer();
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

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
