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
#include "Dolphin/OS/OSCache.h"
#include "Dolphin/OS/OSContext.h"
#include "Dolphin/OS/OSError.h"
#include "Dolphin/OS/OSException.h"
#include "Dolphin/OS/OSExpansion.h"
#include "Dolphin/OS/OSFastCast.h"
#include "Dolphin/OS/OSFont.h"
#include "Dolphin/OS/OSInterrupt.h"
#include "Dolphin/OS/OSMemory.h"
#include "Dolphin/OS/OSMessage.h"
#include "Dolphin/OS/OSModule.h"
#include "Dolphin/OS/OSMutex.h"
#include "Dolphin/OS/OSReset.h"
#include "Dolphin/OS/OSSerial.h"
#include "Dolphin/OS/OSThread.h"

///////// OS FUNCTIONS ///////////
// Initialisers.
extern void __OSPSInit();
extern void __OSFPRInit();
extern void __OSCacheInit();
extern void __OSContextInit();
extern void __OSInterruptInit();
extern void __OSInitSystemCall();
extern void __OSModuleInit();
extern void __OSInitAudioSystem();
extern void __OSStopAudioSystem();
extern void __OSInitMemoryProtection();
extern void __OSInitAlarm();

void OSInit();

// OS logging and reporting.
void OSReport(const char* message, ...);
void OSPanic(const char* file, int line, const char* message, ...);

#define OSError(...) OSPanic(__FILE__, __LINE__, __VA_ARGS__)
#ifndef MATCHING
#define OSErrorLine(line, ...) OSError(__VA_ARGS__)
#else
#define OSErrorLine(line, ...) OSPanic(__FILE__, line, __VA_ARGS__)
#endif

// Other OS functions.
void OSRegisterVersion(const char*);
#define OS_CONSOLE_RETAIL4     0x00000004
#define OS_CONSOLE_RETAIL3     0x00000003
#define OS_CONSOLE_RETAIL2     0x00000002
#define OS_CONSOLE_RETAIL1     0x00000001
#define OS_CONSOLE_RETAIL      0x00000000
#define OS_CONSOLE_DEVHW4      0x10000007
#define OS_CONSOLE_DEVHW3      0x10000006
#define OS_CONSOLE_DEVHW2      0x10000005
#define OS_CONSOLE_DEVHW1      0x10000004
#define OS_CONSOLE_MINNOW      0x10000003
#define OS_CONSOLE_ARTHUR      0x10000002
#define OS_CONSOLE_PC_EMULATOR 0x10000001
#define OS_CONSOLE_EMULATOR    0x10000000
#define OS_CONSOLE_DEVELOPMENT 0x10000000
#define OS_CONSOLE_DEVKIT      0x10000000
#define OS_CONSOLE_TDEVKIT     0x20000000

u32 OSGetConsoleType();

#define OS_SOUND_MODE_MONO   0u
#define OS_SOUND_MODE_STEREO 1u

u32 OSGetSoundMode();
void OSSetSoundMode(u32 mode);

#define OS_PROGRESSIVE_MODE_OFF 0u
#define OS_PROGRESSIVE_MODE_ON  1u

u32 OSGetProgressiveMode();
void OSSetProgressiveMode(u32 on);

#define OS_LANG_ENGLISH 0u
#define OS_LANG_GERMAN  1u
#define OS_LANG_FRENCH  2u
#define OS_LANG_SPANISH 3u
#define OS_LANG_ITALIAN 4u
#define OS_LANG_DUTCH   5u

u8 OSGetLanguage();
void OSSetLanguage(u8 language);

#define OS_EURGB60_OFF 0u
#define OS_EURGB60_ON  1u

u32 OSGetEuRgb60Mode();
void OSSetEuRgb60Mode(u32 on);

// Arena functions.
extern void* __OSArenaHi;

void* OSGetArenaHi(void);
void* OSGetArenaLo(void);
void OSSetArenaHi(void* addr);
void OSSetArenaLo(void* addr);

// targsupp
extern void TRKAccessFile(void);
extern void TRKCloseFile(void);

#define OS_SYS_CALL_HANDLER  ((void*)0x80000C00)
#define OS_HANDLER_SLOT_SIZE (0x100)

void __OSSystemCallVectorStart();
void __OSSystemCallVectorEnd();

void __OSUnlockSramEx(int);
u8* __OSLockSramEx(void);

void OSFillFPUContext(OSContext*);
extern u32 __OSFpscrEnableBits; /** TODO: find a wrapper for this. Symbol is defined in OSError.c. */

#define HW_REG(reg, type) *(volatile type*)(u32)(reg)

// u32 GameCode : 0x80000000;
// u32 FSTLocationInRam : 0x80000038;

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
