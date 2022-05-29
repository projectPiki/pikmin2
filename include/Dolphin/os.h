#ifndef _DOLPHIN_OS_H
#define _DOLPHIN_OS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

// __ppc_eabi_init
extern void __OSPSInit();
extern void __OSFPRInit();
extern void __OSCacheInit();

// OS logging
void OSReport(const char*, ...);
void OSPanic(const char* file, int line, const char* message, ...);
#define OSError(...) OSPanic(__FILE__, __LINE__, __VA_ARGS__)
#ifndef MATCHING
#define OSErrorLine(line, ...) OSError(__VA_ARGS__)
#else
#define OSErrorLine(line, ...) OSPanic(__FILE__, line, __VA_ARGS__)
#endif

// TODO: fill these structs
typedef struct OSContext {
	char filler[708];
} OSContext;

typedef struct OSMessageQueue {
	char filler[32];
} OSMessageQueue;
typedef struct OSMessage {
	void* message;
	u32 args[3];
};

#define OS_MESSAGE_NON_BLOCKING 0
#define OS_MESSAGE_BLOCKING     1

void OSInitMessageQueue(OSMessageQueue* queue, void** msgSlots, int slotCount);
BOOL OSSendMessage(OSMessageQueue* queue, void* message, int flags);
BOOL OSReceiveMessage(OSMessageQueue* queue, void* msg, int flags);

// OSArena
extern void* __OSArenaHi;
extern int __OSCurrHeap;

void* OSGetArenaHi(void);
void* OSGetArenaLo(void);

void OSSetArenaHi(void* addr);
void OSSetArenaLo(void* addr);

// OSMemory
extern void* OSInitAlloc(void* arenaStart, void* arenaEnd, int maxHeaps);

extern int OSCreateHeap(void* start, void* end);
extern int OSSetCurrentHeap(int);
extern void OSFreeToHeap(int, void*);

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

typedef struct OSThread OSThread;
typedef struct OSThreadQueue OSThreadQueue;
typedef struct OSThreadLink OSThreadLink;
typedef s32 OSPriority; //  0 highest, 31 lowest

typedef struct OSMutex OSMutex;
typedef struct OSMutexQueue OSMutexQueue;
typedef struct OSMutexLink OSMutexLink;
typedef struct OSCond OSCond;

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
};

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

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);

BOOL OSGetSoundMode();
void OSSetSoundMode(uint);

#define HW_REG(reg, type) *(volatile type*)(uintptr_t)(reg) // manually added

// u32 GameCode : 0x80000000;
// u32 FSTLocationInRam : 0x80000038;

// Rounds to nearest multiple of 20 upwards and downwards
#define OSRoundUp32B(x)   (((u32)(x) + 0x1F) & ~(0x1F))
#define OSRoundDown32B(x) (((u32)(x)) & ~(0x1F))

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
