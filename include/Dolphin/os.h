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
extern u32 TRKAccessFile(u32, u32, u32*, u8*);
extern u32 TRKOpenFile(u32, u32, u32*, u8*);
extern u32 TRKCloseFile(u32, u32);
extern u32 TRKPositionFile(u32, u32, u32*, u8*);

#define OS_SYS_CALL_HANDLER  ((void*)0x80000C00)
#define OS_HANDLER_SLOT_SIZE (0x100)

void __OSSystemCallVectorStart();
void __OSSystemCallVectorEnd();

void OSFillFPUContext(OSContext*);
extern u32 __OSFpscrEnableBits; /** TODO: find a wrapper for this. Symbol is defined in OSError.c. */

u16 __OSWirelessPadFixMode AT_ADDRESS(OS_BASE_CACHED | 0x30E0);
u8 GameChoice AT_ADDRESS(OS_BASE_CACHED | 0x30E3);

volatile int __OSTVMode AT_ADDRESS(OS_BASE_CACHED | 0xCC);

// u32 GameCode : 0x80000000;
// u32 FSTLocationInRam : 0x80000038;

//////////////////////////////////

///////// OS RTC TYPES ///////////
// Sram function type.
typedef void (*SramCallback)(void);

// Struct for static RAM (size 0x14).
typedef struct OSSram {
	u16 checkSum;      // _00
	u16 checkSumInv;   // _02
	u32 ead0;          // _04
	u32 ead1;          // _08
	u32 counterBias;   // _0C
	s8 displayOffsetH; // _10
	u8 ntd;            // _11
	u8 language;       // _12
	u8 flags;          // _13
} OSSram;

// Struct for expanded/external static RAM (size 0x2C).
typedef struct OSSramEx {
	u8 flashID[2][12];      // _00
	u32 wirelessKeyboardID; // _18
	u16 wirelessPadID[4];   // _1C
	u8 dvdErrorCode;        // _24
	u8 reserved_25;         // _25
	u8 flashIDCheckSum[2];  // _26
	u16 gbs;                // _28
	u8 reserved_2A[2];      // _2A
} OSSramEx;

// Struct for controlling static RAM (for OSRtc.c).
typedef struct SramControlBlock {
	u8 sram[0x40];         // _00
	u32 offset;            // _40
	BOOL enabled;          // _44
	BOOL locked;           // _48
	BOOL sync;             // _4C
	SramCallback callback; // _50
} SramControlBlock;

// SRAM functions.
OSSram* __OSLockSram();
OSSramEx* __OSLockSramEx();
BOOL __OSUnlockSram(BOOL commit);
BOOL __OSUnlockSramEx(BOOL commit);
void OSSetWirelessID(s32 channel, u16 id);
u16 OSGetWirelessID(s32 channel);
void OSSetGbsMode(u16 mode);
u16 OSGetGbsMode();

// RTC defines.
#define RTC_CMD_READ  0x20000000
#define RTC_CMD_WRITE 0xA0000000

#define RTC_SRAM_ADDR 0x00000100
#define RTC_SRAM_SIZE 64

#define RTC_CHAN 0
#define RTC_DEV  1
#define RTC_FREQ 3

// extern things.
extern OSThreadQueue __DVDThreadQueue;
extern u8 _stack_addr[];
extern u8 _stack_end[];
extern BOOL __OSInIPL;

//////////////////////////////////

#ifdef _DEBUG

#ifndef ASSERT
#define ASSERT(exp) (void)((exp) || (OSPanic(__FILE__, __LINE__, "Failed assertion " #exp), 0))
#endif

#ifndef ASSERTMSG
#if defined(__STDC_VERSION__) && (199901L <= __STDC_VERSION__) || defined(__MWERKS__) || defined(__SN__)
#define ASSERTMSG(exp, ...) (void)((exp) || (OSPanic(__FILE__, __LINE__, __VA_ARGS__), 0))
#else
#define ASSERTMSG(exp, msg) (void)((exp) || (OSPanic(__FILE__, __LINE__, (msg)), 0))
#endif
#endif

#ifndef ASSERTMSG1
#define ASSERTMSG1(exp, msg, param1) (void)((exp) || (OSPanic(__FILE__, __LINE__, (msg), (param1)), 0))
#endif

#ifndef ASSERTMSG2
#define ASSERTMSG2(exp, msg, param1, param2) (void)((exp) || (OSPanic(__FILE__, __LINE__, (msg), (param1), (param2)), 0))
#endif

#ifndef ASSERTMSG3
#define ASSERTMSG3(exp, msg, param1, param2, param3) (void)((exp) || (OSPanic(__FILE__, __LINE__, (msg), (param1), (param2), (param3)), 0))
#endif

#ifndef ASSERTMSG4
#define ASSERTMSG4(exp, msg, param1, param2, param3, param4) \
	(void)((exp) || (OSPanic(__FILE__, __LINE__, (msg), (param1), (param2), (param3), (param4)), 0))
#endif

#else // _DEBUG

#ifndef ASSERT
#define ASSERT(exp) ((void)0)
#endif

#ifndef ASSERTMSG
#if defined(__STDC_VERSION__) && (199901L <= __STDC_VERSION__) || defined(__MWERKS__) || defined(__SN__)
#define ASSERTMSG(exp, ...) ((void)0)
#else
#define ASSERTMSG(exp, msg) ((void)0)
#endif
#endif

#ifndef ASSERTMSG1
#define ASSERTMSG1(exp, msg, param1) ((void)0)
#endif
#ifndef ASSERTMSG2
#define ASSERTMSG2(exp, msg, param1, param2) ((void)0)
#endif
#ifndef ASSERTMSG3
#define ASSERTMSG3(exp, msg, param1, param2, param3) ((void)0)
#endif
#ifndef ASSERTMSG4
#define ASSERTMSG4(exp, msg, param1, param2, param3, param4) ((void)0)
#endif

#endif // _DEBUG

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
