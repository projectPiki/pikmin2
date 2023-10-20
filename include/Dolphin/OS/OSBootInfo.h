#ifndef _DOLPHIN_OS_OSBOOTINFO_H
#define _DOLPHIN_OS_OSBOOTINFO_H

#include "types.h"
#include "Dolphin/OS/OSUtil.h"
#include "Dolphin/dvd.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

//////// BOOT INFO TYPES /////////
// Struct for boot information (size 0x40).
typedef struct OSBootInfo {
	DVDDiskID DVDDiskID; // _00
	u32 magic;           // _20
	u32 version;         // _24
	u32 memorySize;      // _28
	u32 consoleType;     // _2C
	void* arenaLo;       // _30, overrides __ArenaLo if non-null
	void* arenaHi;       // _34, overrides FSTLocation if non-null
	void* FSTLocation;   // _38, start addr of FST area
	u32 FSTMaxLength;    // _3C, length of FST area
} OSBootInfo;

// Disk header information, a.k.a. BI2 (size 0x28).
typedef struct BI2Debug {
	int debugMonSize;  // _00
	int simMemSize;    // _04
	u32 argOffset;     // _08
	u32 debugFlag;     // _0C
	int trackLocation; // _10
	int trackSize;     // _14
	u32 countryCode;   // _18
	u8 _1C[0x8];       // _1C, unknown
	u32 padSpec;       // _24
} BI2Debug;

// Magic number defines.
#define OS_BOOTINFO_MAGIC      0x0D15EA5E
#define OS_BOOTINFO_MAGIC_JTAG 0xE5207C22
#define OS_DVD_MAGIC_NINTENDO  0xC2339F3D
#define OS_THREAD_STACK_MAGIC  0xDEADBABE

#define OS_BOOTROM_ADDR 0x81300000

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
