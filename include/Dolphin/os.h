#ifndef _DOLPHIN_OS_H
#define _DOLPHIN_OS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

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

typedef struct OSThread {
	char filler[708];
	char filler2[68];
} OSThread;

typedef struct OSThreadQueue {
	OSThread* _00; // _00
	OSThread* _04; // _04
} OSThreadQueue;

OSThread* OSGetCurrentThread(void);
int OSSuspendThread(OSThread* thread);

typedef struct OSMessageQueue {
	char filler[32];
} OSMessageQueue;
typedef void* OSMessage;

#define MSG_QUEUE_SHOULD_BLOCK 1

void OSInitMessageQueue(OSMessageQueue* queue, OSMessage* msgSlots,
                        int slotCount);
BOOL OSSendMessage(OSMessageQueue* queue, OSMessage message, int flags);
BOOL OSReceiveMessage(OSMessageQueue* queue, OSMessage* msg, int flags);

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

extern void OSInitMutex(OSMutexObject*);
extern void OSLockMutex(OSMutexObject*);
extern BOOL OSUnlockMutex(OSMutexObject*);
extern void __OSUnlockAllMutex(OSThread*);
extern BOOL OSTryLockMutex(OSMutexObject*);
extern void OSInitCond(OSThreadQueue*);
extern u32 OSWaitCond(OSThreadQueue*, OSMutexObject*);
extern void OSSignalCond(OSThreadQueue*);

// OSLink
void __OSModuleInit(void);

// targsupp
extern void func_800BFA40(void);
extern void func_800BFA50(void);

typedef struct OSFstEntry {
	int m_entryNum;
	int m_nextEntryNum;
	char* m_fileNameMaybe;
} OSFstEntry;

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
