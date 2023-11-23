#ifndef _DOLPHIN_OS_OSRESET_H
#define _DOLPHIN_OS_OSRESET_H

#include "types.h"
#include "Dolphin/OS/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/////////// RESET INFO ///////////
typedef struct OSResetFunctionInfo OSResetFunctionInfo;

// Reset function type.
typedef BOOL (*OSResetFunction)(BOOL final);

// Reset callback type.
typedef void (*OSResetCallback)(void);

// Struct for storing reset function information.
struct OSResetFunctionInfo {
	OSResetFunction func;      // _00
	u32 priority;              // _04
	OSResetFunctionInfo* next; // _08
	OSResetFunctionInfo* prev; // _0C
};

// Queue struct for ResetFunctionInfos.
typedef struct OSResetQueue {
	OSResetFunctionInfo* head;
	OSResetFunctionInfo* tail;
} OSResetQueue;

//////////////////////////////////

//////// RESET FUNCTIONS /////////
// Basic reset functions.
void OSRegisterResetFunction(OSResetFunctionInfo* info);
void OSResetSystem(int reset, u32 code, BOOL doForceMenu);
u32 OSGetResetCode();
void OSGetSaveRegion(void** start, void** end);
void OSSetSaveRegion(void* start, void* end);

// Reset switch functions.
BOOL OSGetResetButtonState();
BOOL OSGetResetSwitchState();

// Reboot functions.
void __OSReboot(u32 resetCode, u32 bootDol);
void __OSDoHotReset(s32 code);
void OSSetSaveRegion(void* start, void* end);
void OSGetSaveRegion(void** start, void** end);
void OSGetSavedRegion(void** start, void** end);

// Unused/inlined in P2.
void OSUnregisterResetFunction(OSResetFunctionInfo* info);
OSResetCallback OSSetResetCallback(OSResetCallback callback);

//////////////////////////////////

///////// RESET DEFINES //////////
// Reset codes.
#define OS_RESETCODE_RESTART 0x80000000
#define OS_RESETCODE_SYSTEM  0x40000000

#define OS_RESETCODE_EXEC      0xC0000000
#define OS_RESETCODE_NETCONFIG 0xC0010000

#define OS_RESET_TIMEOUT OSMillisecondsToTicks(1000)

#define OS_RESET_RESTART  0
#define OS_RESET_HOTRESET 1
#define OS_RESET_SHUTDOWN 2

// Reset priorities.
#define OS_RESET_PRIO_SO    110
#define OS_RESET_PRIO_IP    111
#define OS_RESET_PRIO_CARD  127
#define OS_RESET_PRIO_MEM   127
#define OS_RESET_PRIO_PAD   127
#define OS_RESET_PRIO_GX    127
#define OS_RESET_PRIO_ALARM 0xFFFFFFFF

extern BOOL __OSIsGcam;

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
