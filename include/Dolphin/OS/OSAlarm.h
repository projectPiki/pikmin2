#ifndef _DOLPHIN_OS_OSALARM_H
#define _DOLPHIN_OS_OSALARM_H

#include "types.h"
#include "Dolphin/OS/OSContext.h"
#include "Dolphin/OS/OSUtil.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/////////// ALARM TYPES //////////
typedef struct OSAlarm OSAlarm;
typedef struct OSAlarmQueue OSAlarmQueue;

// Generic alarm handler function.
typedef void (*OSAlarmHandler)(OSAlarm* alarm, OSContext* context);

// Struct for storing alarm information (size 0x28).
struct OSAlarm {
	OSAlarmHandler handler; // _00
	u32 tag;                // _04
	OSTime fire;            // _08
	OSAlarm* prev;          // _10
	OSAlarm* next;          // _14
	OSTime period;          // _18, period of periodic alarm
	OSTime start;           // _20, start of periodic alarm
};

// Queue struct for OSAlarm.
struct OSAlarmQueue {
	OSAlarm* head;
	OSAlarm* tail;
};

// Alarm functions.
void OSInitAlarm();
void OSSetAlarm(OSAlarm* alarm, OSTime tick, OSAlarmHandler handler);
void OSCreateAlarm(OSAlarm* alarm);
void OSCancelAlarm(OSAlarm* alarm);

// Unused/inlined in P2.
BOOL OSCheckAlarmQueue();
void OSSetAbsAlarm(OSAlarm* alarm, OSTime time, OSAlarmHandler handler);
void OSSetPeriodicAlarm(OSAlarm* alarm, OSTime start, OSTime period, OSAlarmHandler handler);
void OSSetAlarmTag(OSAlarm* alarm, u32 tag);
void OSCancelAlarms(u32 tag);

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
