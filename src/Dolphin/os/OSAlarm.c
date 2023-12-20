#include "Dolphin/os.h"

// forward declarations
BOOL __DVDTestAlarm(OSAlarm* alarm);

static OSAlarmQueue AlarmQueue;

static void DecrementerExceptionHandler(__OSException exception, OSContext* context);
static BOOL OnReset(BOOL final);

static OSResetFunctionInfo ResetFunctionInfo = { OnReset, OS_RESET_PRIO_ALARM };

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
static void SetTimer(OSAlarm* alarm)
{
	OSTime delta;

	delta = alarm->fire - __OSGetSystemTime();
	if (delta < 0) {
		PPCMtdec(0);
	} else if (delta < 0x80000000) {
		PPCMtdec((u32)delta);
	} else {
		PPCMtdec(0x7fffffff);
	}
}

/**
 * @note Address: 0x800EBAB4
 * @note Size: 0x58
 */
void OSInitAlarm()
{
	if (__OSGetExceptionHandler(8) != DecrementerExceptionHandler) {
		AlarmQueue.head = AlarmQueue.tail = nullptr;
		__OSSetExceptionHandler(8, DecrementerExceptionHandler);
		OSRegisterResetFunction(&ResetFunctionInfo);
	}
}

/**
 * @note Address: 0x800EBB0C
 * @note Size: 0x10
 */
void OSCreateAlarm(OSAlarm* alarm)
{
	alarm->handler = nullptr;
	alarm->tag     = 0;
}

/**
 * @note Address: 0x800EBB1C
 * @note Size: 0x250
 */
static void InsertAlarm(OSAlarm* alarm, OSTime fire, OSAlarmHandler handler)
{
	OSAlarm* next;
	OSAlarm* prev;

	if (alarm->period > 0) {
		OSTime time = __OSGetSystemTime();

		fire = alarm->start;
		if (alarm->start < time) {
			fire += alarm->period * ((time - alarm->start) / alarm->period + 1);
		}
	}

	alarm->handler = handler;
	alarm->fire    = fire;

	for (next = AlarmQueue.head; next; next = next->next) {
		if (next->fire <= fire) {
			continue;
		}

		alarm->prev = next->prev;
		next->prev  = alarm;
		alarm->next = next;
		prev        = alarm->prev;
		if (prev) {
			prev->next = alarm;
		} else {
			AlarmQueue.head = alarm;
			SetTimer(alarm);
		}
		return;
	}
	alarm->next     = nullptr;
	prev            = AlarmQueue.tail;
	AlarmQueue.tail = alarm;
	alarm->prev     = prev;
	if (prev) {
		prev->next = alarm;
	} else {
		AlarmQueue.head = AlarmQueue.tail = alarm;
		SetTimer(alarm);
	}
}

/**
 * @note Address: 0x800EBD6C
 * @note Size: 0x68
 */
void OSSetAlarm(OSAlarm* alarm, OSTime tick, OSAlarmHandler handler)
{
	BOOL enabled;
	enabled       = OSDisableInterrupts();
	alarm->period = 0;
	InsertAlarm(alarm, __OSGetSystemTime() + tick, handler);
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800EBDD4
 * @note Size: 0x11C
 */
void OSCancelAlarm(OSAlarm* alarm)
{
	OSAlarm* next;
	BOOL enabled;

	enabled = OSDisableInterrupts();

	if (alarm->handler == nullptr) {
		OSRestoreInterrupts(enabled);
		return;
	}

	next = alarm->next;
	if (next == nullptr) {
		AlarmQueue.tail = alarm->prev;
	} else {
		next->prev = alarm->prev;
	}
	if (alarm->prev) {
		alarm->prev->next = next;
	} else {
		AlarmQueue.head = next;
		if (next) {
			SetTimer(next);
		}
	}
	alarm->handler = nullptr;

	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800EBEF0
 * @note Size: 0x230
 */
static void DecrementerExceptionCallback(__OSException exception, OSContext* context)
{
	OSAlarm* alarm;
	OSAlarm* next;
	OSAlarmHandler handler;
	OSTime time;
	OSContext exceptionContext;
	time  = __OSGetSystemTime();
	alarm = AlarmQueue.head;
	if (alarm == nullptr) {
		OSLoadContext(context);
	}

	if (time < alarm->fire) {
		SetTimer(alarm);
		OSLoadContext(context);
	}

	next            = alarm->next;
	AlarmQueue.head = next;
	if (next == nullptr) {
		AlarmQueue.tail = nullptr;
	} else {
		next->prev = nullptr;
	}

	handler        = alarm->handler;
	alarm->handler = nullptr;
	if (0 < alarm->period) {
		InsertAlarm(alarm, 0, handler);
	}

	if (AlarmQueue.head) {
		SetTimer(AlarmQueue.head);
	}

	OSDisableScheduler();
	OSClearContext(&exceptionContext);
	OSSetCurrentContext(&exceptionContext);
	handler(alarm, context);
	OSClearContext(&exceptionContext);
	OSSetCurrentContext(context);
	OSEnableScheduler();
	__OSReschedule();
	OSLoadContext(context);
}

/**
 * @note Address: 0x800EC120
 * @note Size: 0x50
 */
ASM static void DecrementerExceptionHandler(register __OSException exception, register OSContext* context)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	OS_EXCEPTION_SAVE_GPRS(context)
	stwu r1, -8(r1)
	b DecrementerExceptionCallback
#endif // clang-format on
}

/**
 * @note Address: 0x800EC170
 * @note Size: 0xA0
 */
static BOOL OnReset(BOOL final)
{
	OSAlarm* alarm;
	OSAlarm* next;

	if (final != FALSE) {
		alarm = AlarmQueue.head;
		next  = (alarm) ? alarm->next : nullptr;

		while (alarm != nullptr) {
			if (__DVDTestAlarm(alarm) == FALSE) {
				OSCancelAlarm(alarm);
			}

			alarm = next;
			next  = (alarm) ? alarm->next : nullptr;
		}
	}

	return TRUE;
}
