#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

static vu32 RunQueueBits;
static volatile BOOL RunQueueHint;
static vs32 Reschedule;

static OSThreadQueue RunQueue[32];
static OSThread IdleThread;
static OSThread DefaultThread;
static OSContext IdleContext;
static void DefaultSwitchThreadCallback(OSThread* from, OSThread* to);
static OSSwitchThreadCallback SwitchThreadCallback = DefaultSwitchThreadCallback;

// Fabricated helper inlines.
// Initialise mutex queue (mutex equiv. to OSInitThreadQueue below).
static inline void InitMutexQueue(OSMutexQueue* queue) { queue->head = queue->tail = NULL; }

// Set current thread.
static inline void SetCurrentThread(OSThread* thread)
{
	SwitchThreadCallback(__OSCurrentThread, thread);
	__OSCurrentThread = thread;
}

/**
 * @note Address: 0x800F1858
 * @note Size: 0x4
 */
static void DefaultSwitchThreadCallback(OSThread* from, OSThread* to) { }

/**
 * @note Address: 0x800F185C
 * @note Size: 0x158
 */
void __OSThreadInit()
{
	OSThread* thread = &DefaultThread;
	int prio;

	thread->state    = OS_THREAD_STATE_RUNNING;
	thread->attr     = OS_THREAD_ATTR_DETACH;
	thread->priority = thread->base = 16;
	thread->suspend                 = 0;
	thread->val                     = (void*)-1;
	thread->mutex                   = nullptr;
	OSInitThreadQueue(&thread->queueJoin);
	InitMutexQueue(&thread->queueMutex);

	__OSFPUContext = &thread->context;

	OSClearContext(&thread->context);
	OSSetCurrentContext(&thread->context);
	thread->stackBase   = (void*)_stack_addr;
	thread->stackEnd    = (void*)_stack_end;
	*(thread->stackEnd) = OS_THREAD_STACK_MAGIC;

	SetCurrentThread(thread);
	OSClearStack(0);

	RunQueueBits = 0;
	RunQueueHint = FALSE;
	for (prio = OS_PRIORITY_MIN; prio <= OS_PRIORITY_MAX; ++prio) {
		OSInitThreadQueue(&RunQueue[prio]);
	}

	OSInitThreadQueue(&__OSActiveThreadQueue);
	AddTail(&__OSActiveThreadQueue, thread, linkActive);
	OSClearContext(&IdleContext);
	Reschedule = 0;
}

/**
 * @note Address: 0x800F19B4
 * @note Size: 0x10
 */
void OSInitThreadQueue(OSThreadQueue* threadQueue) { threadQueue->head = threadQueue->tail = nullptr; }

/**
 * @note Address: 0x800F19C4
 * @note Size: 0xC
 */
OSThread* OSGetCurrentThread() { return __OSCurrentThread; }

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
static void __OSSwitchThread(OSThread* nextThread)
{
	SwitchThreadCallback(__OSCurrentThread, nextThread);
	__OSCurrentThread = nextThread;
	OSSetCurrentContext(&nextThread->context);
	OSLoadContext(&nextThread->context);
}

/**
 * @note Address: 0x800F19D0
 * @note Size: 0x34
 */
BOOL OSIsThreadTerminated(OSThread* thread)
{
	return (thread->state == OS_THREAD_STATE_MORIBUND || thread->state == OS_THREAD_STATE_NULL) ? TRUE : FALSE;
}

/**
 * @note Address: 0x800F1A04
 * @note Size: 0x40
 */
s32 OSDisableScheduler()
{
	BOOL enabled;
	s32 count;

	enabled = OSDisableInterrupts();
	count   = Reschedule++;
	OSRestoreInterrupts(enabled);
	return count;
}

/**
 * @note Address: 0x800F1A44
 * @note Size: 0x40
 */
s32 OSEnableScheduler()
{
	BOOL enabled;
	s32 count;

	enabled = OSDisableInterrupts();
	count   = Reschedule--;
	OSRestoreInterrupts(enabled);
	return count;
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
static void SetRun(OSThread* thread)
{
	thread->queue = &RunQueue[thread->priority];
	AddTail(thread->queue, thread, link);
	RunQueueBits |= 1u << (OS_PRIORITY_MAX - thread->priority);
	RunQueueHint = TRUE;
}

#pragma dont_inline on
/**
 * @note Address: 0x800F1A84
 * @note Size: 0x68
 */
static void UnsetRun(OSThread* thread)
{
	OSThreadQueue* queue;
	queue = thread->queue;
	RemoveItem(queue, thread, link);
	if (queue->head == 0)
		RunQueueBits &= ~(1u << (OS_PRIORITY_MAX - thread->priority));
	thread->queue = nullptr;
}
#pragma dont_inline reset

/**
 * @note Address: 0x800F1AEC
 * @note Size: 0x3C
 */
OSPriority __OSGetEffectivePriority(OSThread* thread)
{
	OSPriority priority;
	OSMutex* mutex;
	OSThread* blocked;

	priority = thread->base;
	for (mutex = thread->queueMutex.head; mutex; mutex = mutex->link.next) {
		blocked = mutex->queue.head;
		if (blocked && blocked->priority < priority) {
			priority = blocked->priority;
		}
	}
	return priority;
}

/**
 * @note Address: 0x800F1B28
 * @note Size: 0x1C0
 */
static OSThread* SetEffectivePriority(OSThread* thread, OSPriority priority)
{
	switch (thread->state) {
	case OS_THREAD_STATE_READY:
		UnsetRun(thread);
		thread->priority = priority;
		SetRun(thread);
		break;

	case OS_THREAD_STATE_WAITING:
		RemoveItem(thread->queue, thread, link);
		thread->priority = priority;
		AddPrio(thread->queue, thread, link);
		if (thread->mutex) {
			return thread->mutex->thread;
		}
		break;

	case OS_THREAD_STATE_RUNNING:
		RunQueueHint     = TRUE;
		thread->priority = priority;
		break;
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
static void UpdatePriority(OSThread* thread)
{
	OSPriority priority;

	do {
		if (thread->suspend > 0) {
			break;
		}
		priority = __OSGetEffectivePriority(thread);
		if (thread->priority == priority) {
			break;
		}
		thread = SetEffectivePriority(thread, priority);
	} while (thread);
}

/**
 * @note Address: 0x800F1CE8
 * @note Size: 0x50
 */
void __OSPromoteThread(OSThread* thread, OSPriority priority)
{
	do {
		if (thread->suspend > 0) {
			break;
		}
		if (thread->priority <= priority) {
			break;
		}

		thread = SetEffectivePriority(thread, priority);
	} while (thread);
}

/**
 * @note Address: 0x800F1D38
 * @note Size: 0x228
 */
static OSThread* SelectThread(BOOL yield)
{
	OSContext* currentContext;
	OSThread* currentThread;
	OSThread* nextThread;
	OSPriority priority;
	OSThreadQueue* queue;

	if (0 < Reschedule) {
		return 0;
	}

	currentContext = OSGetCurrentContext();
	currentThread  = OSGetCurrentThread();
	if (currentContext != &currentThread->context) {
		return 0;
	}

	if (currentThread) {
		if (currentThread->state == OS_THREAD_STATE_RUNNING) {
			if (!yield) {
				priority = __cntlzw(RunQueueBits);
				if (currentThread->priority <= priority) {
					return 0;
				}
			}
			currentThread->state = OS_THREAD_STATE_READY;
			SetRun(currentThread);
		}

		if (!(currentThread->context.state & OS_CONTEXT_STATE_EXC) && OSSaveContext(&currentThread->context)) {
			return 0;
		}
	}

	if (RunQueueBits == 0) {
		SwitchThreadCallback(__OSCurrentThread, nullptr);
		__OSCurrentThread = nullptr;
		OSSetCurrentContext(&IdleContext);
		do {
			OSEnableInterrupts();
			while (RunQueueBits == 0)
				;
			OSDisableInterrupts();
		} while (RunQueueBits == 0);

		OSClearContext(&IdleContext);
	}

	RunQueueHint = FALSE;

	priority = __cntlzw(RunQueueBits);
	queue    = &RunQueue[priority];
	RemoveHead(queue, nextThread, link);
	if (queue->head == 0) {
		RunQueueBits &= ~(1u << (OS_PRIORITY_MAX - priority));
	}
	nextThread->queue = NULL;
	nextThread->state = OS_THREAD_STATE_RUNNING;
	__OSSwitchThread(nextThread);
	return nextThread;
}

/**
 * @note Address: 0x800F1F60
 * @note Size: 0x30
 */
void __OSReschedule()
{
	if (!RunQueueHint) {
		return;
	}

	SelectThread(FALSE);
}

/**
 * @note Address: 0x800F1F90
 * @note Size: 0x3C
 */
void OSYieldThread()
{
	BOOL enabled;

	enabled = OSDisableInterrupts();
	SelectThread(TRUE);
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800F1FCC
 * @note Size: 0x1E8
 */
BOOL OSCreateThread(OSThread* thread, OSThreadStartFunction func, void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr)
{
	BOOL enable;
	u32 stackThing;
	int i;
	u32 tmp[2]; // DUMB compiler smfh.

	if (priority < OS_PRIORITY_MIN || priority > OS_PRIORITY_MAX) {
		return FALSE;
	}

	stackThing       = ((u32)stack & 0xFFFFFFF8); // ??
	thread->state    = OS_THREAD_STATE_READY;
	thread->attr     = attr & OS_THREAD_ATTR_DETACH;
	thread->base     = priority;
	thread->priority = priority;
	thread->suspend  = 1;
	thread->val      = (void*)-1;
	thread->mutex    = nullptr;
	OSInitThreadQueue(&thread->queueJoin);
	InitMutexQueue(&thread->queueMutex);
	*(u32*)(stackThing - 8) = 0;
	*(u32*)(stackThing - 4) = 0;

	OSInitContext(&thread->context, (u32)func, (u32)(stackThing - 8));

	thread->context.lr     = (u32)&OSExitThread;
	thread->context.gpr[3] = (u32)param;
	thread->stackBase      = stack;
	thread->stackEnd       = (u32*)((u32)stack - stackSize);
	*(thread->stackEnd)    = OS_THREAD_STACK_MAGIC;
	thread->error          = 0;
	thread->specific[0]    = nullptr;
	thread->specific[1]    = nullptr;

	enable = OSDisableInterrupts();

	if (__OSErrorTable[16] != nullptr) {
		thread->context.srr1 |= 0x900; // ??
		thread->context.state |= OS_CONTEXT_STATE_FPSAVED;
		thread->context.fpscr = (__OSFpscrEnableBits & 0xF8) | 0x4; // ??

		for (i = 0; i < 32; i++) {
			*(u64*)&thread->context.fpr[i] = -1; // ???????
			*(u64*)&thread->context.psf[i] = -1; // ???????
		}
	}

	AddTail(&__OSActiveThreadQueue, thread, linkActive);
	OSRestoreInterrupts(enable);
	return TRUE;
}

/**
 * @note Address: 0x800F21B4
 * @note Size: 0xE4
 */
void OSExitThread(void* val)
{
	OSThread* thread;
	BOOL enable;

	enable = OSDisableInterrupts();
	thread = __OSCurrentThread;
	OSClearContext(&thread->context);

	if (thread->attr & OS_THREAD_ATTR_DETACH) {
		RemoveItem(&__OSActiveThreadQueue, thread, linkActive);
		thread->state = OS_THREAD_STATE_NULL;

	} else {
		thread->state = OS_THREAD_STATE_MORIBUND;
		thread->val   = val;
	}

	__OSUnlockAllMutex(thread);
	OSWakeupThread(&thread->queueJoin);
	RunQueueHint = TRUE;
	if (RunQueueHint != FALSE) {
		SelectThread(FALSE);
	}

	OSRestoreInterrupts(enable);
}

/**
 * @note Address: 0x800F2298
 * @note Size: 0x1BC
 */
void OSCancelThread(OSThread* thread)
{
	BOOL enabled;

	enabled = OSDisableInterrupts();

	switch (thread->state) {
	case OS_THREAD_STATE_READY:
		if (!(0 < thread->suspend)) {
			UnsetRun(thread);
		}
		break;
	case OS_THREAD_STATE_RUNNING:
		RunQueueHint = TRUE;
		break;
	case OS_THREAD_STATE_WAITING:
		RemoveItem(thread->queue, thread, link);
		thread->queue = NULL;
		if (!(0 < thread->suspend) && thread->mutex) {
			UpdatePriority(thread->mutex->thread);
		}
		break;
	default:
		OSRestoreInterrupts(enabled);
		return;
	}

	OSClearContext(&thread->context);
	if (thread->attr & OS_THREAD_ATTR_DETACH) {
		RemoveItem(&__OSActiveThreadQueue, thread, linkActive);
		thread->state = OS_THREAD_STATE_NULL;
	} else {
		thread->state = OS_THREAD_STATE_MORIBUND;
	}

	__OSUnlockAllMutex(thread);

	OSWakeupThread(&thread->queueJoin);

	__OSReschedule();
	OSRestoreInterrupts(enabled);

	return;
}

/**
 * @note Address: 0x800F2454
 * @note Size: 0xA0
 */
void OSDetachThread(OSThread* thread)
{
	BOOL enable;

	enable = OSDisableInterrupts();
	thread->attr |= OS_THREAD_ATTR_DETACH;
	if (thread->state == OS_THREAD_STATE_MORIBUND) {
		RemoveItem(&__OSActiveThreadQueue, thread, linkActive);
		thread->state = OS_THREAD_STATE_NULL;
	}

	OSWakeupThread(&thread->queueJoin);
	OSRestoreInterrupts(enable);
}

/**
 * @note Address: 0x800F24F4
 * @note Size: 0x288
 */
s32 OSResumeThread(OSThread* thread)
{
	BOOL enabled;
	s32 suspendCount;

	enabled      = OSDisableInterrupts();
	suspendCount = thread->suspend--;
	if (thread->suspend < 0) {
		thread->suspend = 0;
	} else if (thread->suspend == 0) {
		switch (thread->state) {
		case OS_THREAD_STATE_READY:
			thread->priority = __OSGetEffectivePriority(thread);
			SetRun(thread);
			break;
		case OS_THREAD_STATE_WAITING:
			RemoveItem(thread->queue, thread, link);
			thread->priority = __OSGetEffectivePriority(thread);
			AddPrio(thread->queue, thread, link);
			if (thread->mutex) {
				UpdatePriority(thread->mutex->thread);
			}
			break;
		}
		__OSReschedule();
	}
	OSRestoreInterrupts(enabled);
	return suspendCount;
}

/**
 * @note Address: 0x800F277C
 * @note Size: 0x170
 */
s32 OSSuspendThread(OSThread* thread)
{
	BOOL enabled;
	s32 suspendCount;

	enabled      = OSDisableInterrupts();
	suspendCount = thread->suspend++;
	if (suspendCount == 0) {
		switch (thread->state) {
		case OS_THREAD_STATE_RUNNING:
			RunQueueHint  = TRUE;
			thread->state = OS_THREAD_STATE_READY;
			break;
		case OS_THREAD_STATE_READY:
			UnsetRun(thread);
			break;
		case OS_THREAD_STATE_WAITING:
			RemoveItem(thread->queue, thread, link);
			thread->priority = 32;
			AddTail(thread->queue, thread, link);
			if (thread->mutex) {
				UpdatePriority(thread->mutex->thread);
			}
			break;
		}

		__OSReschedule();
	}
	OSRestoreInterrupts(enabled);
	return suspendCount;
}

/**
 * @note Address: 0x800F28EC
 * @note Size: 0xEC
 */
void OSSleepThread(OSThreadQueue* threadQueue)
{
	BOOL enabled;
	OSThread* currentThread;

	enabled       = OSDisableInterrupts();
	currentThread = OSGetCurrentThread();

	currentThread->state = OS_THREAD_STATE_WAITING;
	currentThread->queue = threadQueue;
	AddPrio(threadQueue, currentThread, link);
	RunQueueHint = TRUE;
	__OSReschedule();
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800F29D8
 * @note Size: 0x104
 */
void OSWakeupThread(OSThreadQueue* threadQueue)
{
	BOOL enabled;
	OSThread* thread;

	enabled = OSDisableInterrupts();
	while (threadQueue->head) {
		RemoveHead(threadQueue, thread, link);
		thread->state = OS_THREAD_STATE_READY;
		if (!(0 < thread->suspend)) {
			SetRun(thread);
		}
	}
	__OSReschedule();
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800F2ADC
 * @note Size: 0x8
 */
OSPriority OSGetThreadPriority(OSThread* thread) { return thread->base; }

/**
 * @note Address: 0x800F2AE4
 * @note Size: 0xAC
 */
void OSClearStack(u8 val)
{
	register u32 sp;
	register u32* p;
	register u32 pattern;

	pattern = ((u32)val << 24) | ((u32)val << 16) | ((u32)val << 8) | (u32)val;
	sp      = OSGetStackPointer();
	for (p = __OSCurrentThread->stackEnd + 1; p < (u32*)sp; ++p) {
		*p = pattern;
	}
}
