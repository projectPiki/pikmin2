#ifndef _DOLPHIN_DVD_H
#define _DOLPHIN_DVD_H

#include "types.h"
#include "Dolphin/os.h"

struct DVDQueue {
	struct DVDQueue* m_head; // _00
	struct DVDQueue* m_tail; // _04
};

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
	u32 m_fileSize;        // _34
	void* m_func;          // _38
};
#pragma cplusplus reset

typedef struct {
	u8 _00[0x3C]; // _00
	void* _3C;    // _3C /* ptr to unknown */
} DVDFileInfo;

typedef BOOL DVDDoneReadCallback(long, DVDFileInfo*);
typedef void DVDState(OSDummyCommandBlock*);
typedef void DVDLowCallback(u32);

void DVDInit();

// TODO: Incomplete set of functions.
BOOL DVDOpen(const char*, struct DVDPlayer*);
BOOL DVDFastOpen(long, struct DVDPlayer*);
BOOL DVDClose(struct DVDPlayer*);
int DVDCancel(struct DVDPlayer*); // Definitely int; returns -1 on failure.
void DVDResume();
void DVDReset();
int DVDReadPrio(struct DVDPlayer* player, void* readBuffer, s32 byteCount, u32 startOffset, s32 queueIndex);
BOOL DVDReadAsyncPrio(struct DVDPlayer*, void*, long, long, DVDDoneReadCallback*, int);
BOOL DVDReadAbsAsyncPrio(struct DVDPlayer* player, void* readBuffer, long byteCount, u8* startAddress,
                         DVDDoneReadCallback* doneReadCallback, int queueIndex);

BOOL DVDConvertEntrynumToPath(int, char*);
int DVDConvertPathToEntrynum(char*);

BOOL DVDOpenDir(char*, OSFstEntry*);
BOOL DVDReadDir(OSFstEntry*, OSFstEntry*);
BOOL DVDCloseDir(OSFstEntry*);
int DVDChangeDir(char*); // this might be a BOOL, but the problem there
                         // is it's treated as 4 bytes...

BOOL DVDCompareDiskID(DVDDiskID*, DVDDiskID*);

int DVDGetDriveStatus();
int DVDGetCommandBlockStatus(struct DVDPlayer*);

BOOL __DVDPushWaitingQueue(int, struct DVDQueue*);
struct DVDQueue* __DVDPopWaitingQueue();
BOOL __DVDCheckWaitingQueue();
void __DVDClearWaitingQueue();

BOOL __DVDLowTestAlarm(OSAlarm*);
void __DVDFSInit();
void __fstLoad();

u8 ErrorCode2Num(u32);
void __DVDStoreErrorCode(u32);
void __DVDPrintFatalMessage();

extern OSThreadQueue __DVDThreadQueue;
extern DVDState* LastState;

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
