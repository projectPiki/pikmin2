#ifndef _DOLPHIN_OS_OSTHREAD_H
#define _DOLPHIN_OS_OSTHREAD_H

#include "types.h"
#include "Dolphin/OS/OSUtil.h"
#include "Dolphin/OS/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////////// THREAD TYPES //////////
// Forward declarations.
typedef struct OSThread OSThread;
typedef struct OSThreadQueue OSThreadQueue;
typedef struct OSThreadLink OSThreadLink;
typedef struct OSMutex OSMutex;
typedef struct OSMutexQueue OSMutexQueue;
typedef struct OSMutexLink OSMutexLink;

// Useful typedef for priority calls - 0 (high) to 31 (low).
typedef s32 OSPriority;

// Idle function type.
typedef void (*OSIdleFunction)(void* param);

// Start function.
typedef void* (*OSThreadStartFunction)(void*);

// Thread switching function.
typedef void (*OSSwitchThreadCallback)(OSThread* from, OSThread* to);

// Queues and links for threads.
struct OSThreadQueue {
	OSThread* head; // _00
	OSThread* tail; // _04
};

struct OSThreadLink {
	OSThread* next; // _00
	OSThread* prev; // _04
};

// Queues and links for mutexes.
struct OSMutexQueue {
	OSMutex* head; // _00
	OSMutex* tail; // _04
};

struct OSMutexLink {
	OSMutex* next; // _00
	OSMutex* prev; // _04
};

// Struct for managing threads.
struct OSThread {
	OSContext context;       // _000
	u16 state;               // _2C8, see OS_THREAD_STATE enum.
	u16 attr;                // _2CA, 1 = detached.
	s32 suspend;             // _2CC, if > 0, suspend.
	OSPriority priority;     // _2D0, effective scheduling prio.
	OSPriority base;         // _2D4, base scheduling prio.
	void* val;               // _2D8, exit value.
	OSThreadQueue* queue;    // _2DC, owner queue.
	OSThreadLink link;       // _2E0
	OSThreadQueue queueJoin; // _2E8, threads waiting for termination.
	OSMutex* mutex;          // _2F0
	OSMutexQueue queueMutex; // _2F4, owned mutexes.
	OSThreadLink linkActive; // _2FC, list of active threads
	u8* stackBase;           // _304, stack high addr.
	u32* stackEnd;           // _308, stack low addr (last word).
	s32 error;               // _30C
	void* specific[2];       // _310
};

// Thread global addresses.
volatile OSContext* __OSCurrentContext AT_ADDRESS((u32)OSPhysicalToCached(0x00D4));
volatile OSContext* __OSFPUContext AT_ADDRESS((u32)OSPhysicalToCached(0x00D8));
OSThreadQueue __OSActiveThreadQueue AT_ADDRESS((u32)OSPhysicalToCached(0x00DC));
OSThread* __OSCurrentThread AT_ADDRESS((u32)OSPhysicalToCached(0x00E4));

//////////////////////////////////

//////// THREAD FUNCTIONS ////////
// Basic thread functions.
void OSInitThreadQueue(OSThreadQueue* queue);
OSThread* OSGetCurrentThread();
BOOL OSIsThreadTerminated(OSThread* thread);

// Scheduler functions.
s32 OSDisableScheduler();
s32 OSEnableScheduler();

// Thread manip functions.
void OSYieldThread();
BOOL OSCreateThread(OSThread* thread, OSThreadStartFunction func, void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr);
void OSExitThread(void* val);
void OSCancelThread(OSThread* thread);
void OSDetachThread(OSThread* thread);
s32 OSResumeThread(OSThread* thread);
s32 OSSuspendThread(OSThread* thread);
void OSSleepThread(OSThreadQueue* queue);
void OSWakeupThread(OSThreadQueue* queue);

void OSClearStack(u8 val);

// Priority functions.
OSPriority OSGetThreadPriority(OSThread* thread);

// Unused/inlined in P2.
BOOL OSIsThreadSuspended(OSThread* thread);
BOOL OSJoinThread(OSThread* thread, void** val);
BOOL OSSetThreadPriority(OSThread* thread, OSPriority prio);
OSThread* OSSetIdleFunction(OSIdleFunction idleFunc, void* param, void* stack, u32 stackSize);
OSThread* OSGetIdleFunction();
s32 OSCheckActiveThreads();

//////////////////////////////////

///////// THREAD DEFINES /////////
// Thread states.
enum OS_THREAD_STATE {
	OS_THREAD_STATE_NULL     = 0,
	OS_THREAD_STATE_READY    = 1,
	OS_THREAD_STATE_RUNNING  = 2,
	OS_THREAD_STATE_WAITING  = 4,
	OS_THREAD_STATE_MORIBUND = 8, // set for death.
};

// Thread attributes.
#define OS_THREAD_ATTR_DETACH 0x1U

// Thread priority.
#define OS_PRIORITY_MIN  (0) // highest prio
#define OS_PRIORITY_MAX  (31) // lowest prio
#define OS_PRIORITY_IDLE (OS_PRIORITY_MAX) // idle = lowest prio

//////////////////////////////////

///////// THREAD MACROS //////////
// Add link to queue at tail.
#define AddTail(queue, thread, link)    \
	do {                                \
		OSThread* prev;                 \
                                        \
		prev = (queue)->tail;           \
		if (prev == nullptr)            \
			(queue)->head = (thread);   \
		else                            \
			prev->link.next = (thread); \
		(thread)->link.prev = prev;     \
		(thread)->link.next = nullptr;  \
		(queue)->tail       = (thread); \
	} while (0)

// Add link to queue in priority order.
#define AddPrio(queue, thread, link)                                                                   \
	do {                                                                                               \
		OSThread *prev, *next;                                                                         \
                                                                                                       \
		for (next = (queue)->head; next && next->priority <= thread->priority; next = next->link.next) \
			;                                                                                          \
		if (next == nullptr)                                                                           \
			AddTail(queue, thread, link);                                                              \
		else {                                                                                         \
			(thread)->link.next = next;                                                                \
			prev                = next->link.prev;                                                     \
			next->link.prev     = (thread);                                                            \
			(thread)->link.prev = prev;                                                                \
			if (prev == nullptr)                                                                       \
				(queue)->head = (thread);                                                              \
			else                                                                                       \
				prev->link.next = (thread);                                                            \
		}                                                                                              \
	} while (0)

// Remove link from queue.
#define RemoveItem(queue, thread, link) \
	do {                                \
		OSThread *next, *prev;          \
		next = (thread)->link.next;     \
		prev = (thread)->link.prev;     \
		if (next == nullptr)            \
			(queue)->tail = prev;       \
		else                            \
			next->link.prev = prev;     \
		if (prev == nullptr)            \
			(queue)->head = next;       \
		else                            \
			prev->link.next = next;     \
	} while (0)

// Remove head link from queue.
#define RemoveHead(queue, thread, link)  \
	do {                                 \
		OSThread* __next;                \
		(thread) = (queue)->head;        \
		__next   = (thread)->link.next;  \
		if (__next == nullptr)           \
			(queue)->tail = nullptr;     \
		else                             \
			__next->link.prev = nullptr; \
		(queue)->head = __next;          \
	} while (0)

//////////////////////////////////

////////// MUTEX MACROS //////////
// Add link to queue at tail.
#define AddTailMutex(queue, mutex, link) \
	do {                                 \
		OSMutex* prev;                   \
                                         \
		prev = (queue)->tail;            \
		if (prev == nullptr)             \
			(queue)->head = (mutex);     \
		else                             \
			prev->link.next = (mutex);   \
		(mutex)->link.prev = prev;       \
		(mutex)->link.next = nullptr;    \
		(queue)->tail      = (mutex);    \
	} while (0)

// Remove head link.
#define RemoveHeadMutex(queue, mutex, link) \
	do {                                    \
		OSMutex* next;                      \
                                            \
		(mutex) = (queue)->head;            \
		next    = (mutex)->link.next;       \
		if (next == nullptr)                \
			(queue)->tail = nullptr;        \
		else                                \
			next->link.prev = nullptr;      \
		(queue)->head = next;               \
	} while (0)

// Remove item.
#define RemoveItemMutex(queue, mutex, link) \
	do {                                    \
		OSMutex* next;                      \
		OSMutex* prev;                      \
                                            \
		next = (mutex)->link.next;          \
		prev = (mutex)->link.prev;          \
                                            \
		if (next == nullptr)                \
			(queue)->tail = prev;           \
		else                                \
			next->link.prev = prev;         \
                                            \
		if (prev == nullptr)                \
			(queue)->head = next;           \
		else                                \
			prev->link.next = next;         \
	} while (0)
//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
