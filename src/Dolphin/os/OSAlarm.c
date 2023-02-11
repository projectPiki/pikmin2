#include "Dolphin/os.h"

// forward declarations
BOOL __DVDTestAlarm(OSAlarm* alarm);

static OSAlarmQueue AlarmQueue;

static void DecrementerExceptionHandler(__OSException exception, OSContext* context);
static BOOL OnReset(BOOL final);

static OSResetFunctionInfo ResetFunctionInfo = { OnReset, 0xFFFFFFFF };

/*
 * --INFO--
 * Address:	........
 * Size:	000098
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

/*
 * --INFO--
 * Address:	800EBAB4
 * Size:	000058
 */
void OSInitAlarm()
{
	if (__OSGetExceptionHandler(8) != DecrementerExceptionHandler) {
		AlarmQueue.head = AlarmQueue.tail = nullptr;
		__OSSetExceptionHandler(8, DecrementerExceptionHandler);
		OSRegisterResetFunction(&ResetFunctionInfo);
	}
}

/*
 * --INFO--
 * Address:	800EBB0C
 * Size:	000010
 */
void OSCreateAlarm(OSAlarm* alarm)
{
	alarm->handler = nullptr;
	alarm->tag     = 0;
}

/*
 * --INFO--
 * Address:	800EBB1C
 * Size:	000250
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

/*
 * --INFO--
 * Address:	800EBD6C
 * Size:	000068
 */
void OSSetAlarm(OSAlarm* alarm, OSTime tick, OSAlarmHandler handler)
{
	BOOL enabled;
	enabled       = OSDisableInterrupts();
	alarm->period = 0;
	InsertAlarm(alarm, __OSGetSystemTime() + tick, handler);
	OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	800EBDD4
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	800EBEF0
 * Size:	000230
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

/*
 * --INFO--
 * Address:	800EC120
 * Size:	000050
 */
static asm void DecrementerExceptionHandler(register __OSException exception, register OSContext* context)
{
	// clang-format off
	nofralloc 
	OS_EXCEPTION_SAVE_GPRS(context)
	stwu r1, -8(r1)
	b DecrementerExceptionCallback
	// clang-format on
}

/*
 * --INFO--
 * Address:	800EC170
 * Size:	0000A0
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
