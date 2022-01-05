#ifndef _DOLPHIN_DVD_H
#define _DOLPHIN_DVD_H

#include "types.h"
#include "Dolphin/os.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#pragma cplusplus on
struct DVDPlayer {
	struct DVDPlayer* _00; // _00
	struct DVDPlayer* _04; // _04
	int _08;               // _08
	int _0C;               // _0C
	u8* m_startAddress;    // _10
	long m_byteCount;      // _14
	void* m_inputBuffer;   // _18
	u8 _1C[4];             // _1C
	u32 _20;               // _20
	u8 _24[4];             // _24
	void* _28;             // _28
	u8 _2C[4];             // _2C
	u32 _30;               // _30
	int m_fileSize;        // _34
	void* m_func;          // _38
};
#pragma cplusplus reset

typedef struct {
	u8 _00[0x3C]; // _00
	void* _3C;    // _3C /* ptr to unknown */
} DVDFileInfo;

typedef BOOL DVDDoneReadCallback(long, DVDFileInfo*);

// TODO: Incomplete set of functions.
BOOL DVDOpen(const char*, struct DVDPlayer*);
BOOL DVDFastOpen(long, struct DVDPlayer*);
BOOL DVDClose(struct DVDPlayer*);
int DVDCancel(struct DVDPlayer*); // Definitely int; returns -1 on failure.
BOOL DVDResume();
BOOL DVDReadAsyncPrio(struct DVDPlayer*, void*, long, long,
                      DVDDoneReadCallback*, int);
BOOL DVDReadAbsAsyncPrio(struct DVDPlayer*, void*, long, u8*,
                         DVDDoneReadCallback*, int);

BOOL DVDConvertEntrynumToPath(int, char*);
int DVDConvertPathToEntrynum(char*);

BOOL DVDOpenDir(char*, OSFstEntry*);
BOOL DVDReadDir(OSFstEntry*, OSFstEntry*);
BOOL DVDCloseDir(OSFstEntry*);
int DVDChangeDir(char*); // this might be a BOOL, but the problem there
                         // is it's treated as 4 bytes...

int DVDGetDriveStatus();
int DVDGetCommandBlockStatus(struct DVDPlayer*);

BOOL __DVDLowTestAlarm(struct OSAlarm*);
BOOL __DVDPushWaitingQueue(int, struct DVDPlayer*);

u8 ErrorCode2Num(u32);
void __DVDStoreErrorCode(u32);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
