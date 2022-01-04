#ifndef _DOLPHIN_DVD_H
#define _DOLPHIN_DVD_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

struct OSFstEntry;
struct OSAlarm;

typedef struct DVDPlayer {
	DVDPlayer* _00;      // _00
	DVDPlayer* _04;      // _04
	int _08;             // _08
	int _0C;             // _0C
	u8* m_startAddress;  // _10
	long m_byteCount;    // _14
	void* m_inputBuffer; // _18
	u8 _1C[4];           // _1C
	u32 _20;             // _20
	u8 _24[4];           // _24
	void* _28;           // _28
	u8 _2C[4];           // _2C
	u32 _30;             // _30
	int m_fileSize;      // _34
	void* m_func;        // _38
} DVDPlayer;

typedef struct DVDFileInfo {
	u8 _00[0x3C]; // _00
	void* _3C;    // _3C /* ptr to unknown */
} DVDFileInfo;

typedef BOOL DVDDoneReadCallback(long, DVDFileInfo*);

// TODO: Incomplete set of functions.
extern BOOL DVDOpen(const char*, DVDPlayer*);
extern BOOL DVDFastOpen(long, DVDPlayer*);
extern BOOL DVDClose(DVDPlayer*);
extern int DVDCancel(DVDPlayer*); // Definitely int; returns -1 on failure.
extern BOOL DVDResume();
extern BOOL DVDReadAsyncPrio(DVDPlayer*, void*, long, long,
                             DVDDoneReadCallback*, int);
extern BOOL DVDReadAbsAsyncPrio(DVDPlayer*, void*, long, u8*,
                                DVDDoneReadCallback*, int);

extern BOOL DVDConvertEntrynumToPath(int, char*);
extern int DVDConvertPathToEntrynum(char*);

extern BOOL DVDOpenDir(char*, OSFstEntry*);
extern BOOL DVDReadDir(OSFstEntry*, OSFstEntry*);
extern BOOL DVDCloseDir(OSFstEntry*);
extern int DVDChangeDir(char*); // this might be a BOOL, but the problem there
                                // is it's treated as 4 bytes...

extern int DVDGetDriveStatus();
extern int DVDGetCommandBlockStatus(DVDPlayer*);

extern BOOL __DVDLowTestAlarm(OSAlarm*);
extern BOOL __DVDPushWaitingQueue(int, DVDPlayer*);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
