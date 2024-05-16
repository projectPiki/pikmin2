#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/dvd.h"

struct bb2struct {
	u32 _00;
	u32 offset;
	s32 length;
	u32 maxLength;
	void* addr;
};

static u32 status;
static struct bb2struct* bb2; // pointer?
static u8* idTmp;             // also pointer
static u8 bb2Buf[0x3F];
static u8 block[0x30];

struct blah {
	s8 Gamecode[4];
	s8 Company[2];
	u8 DiskID;
	u8 Version;
	u8 Streaming;
	u8 filler[0x38 - 0x9];
	void* FSTLocationInRam;
	u32 FSTMaxLength;
}; // diskinfo : 0x80000000;

/**
 * @note Address: 0x800DF914
 * @note Size: 0xD8
 */

static void cb(s32 type, DVDCommandBlock* cmdBlock)
{
	if (type > 0) {
		switch (status) {
		case 0:
			status = 1;
			DVDReadAbsAsyncForBS(cmdBlock, bb2, 0x20, 0x420, cb);
			break;
		case 1:
			status = 2;
			DVDReadAbsAsyncForBS(cmdBlock, bb2->addr, OSRoundUp32B(bb2->length), bb2->offset, cb);
			break;
		}
	} else if (type == -1) {
	} else if (type == -4) {
		status = 0;
		DVDReset();
		DVDReadDiskID(cmdBlock, idTmp, cb);
	}
}

/**
 * @note Address: 0x800DF9EC
 * @note Size: 0x168
 */
void __fstLoad(void)
{
	int status;
	char* onStr;
	u8 idBuffer[64];
	void* arenaHi;
	struct blah* di;

	arenaHi = OSGetArenaHi();
	idTmp   = (void*)OSRoundUp32B(idBuffer);
	bb2     = (void*)OSRoundUp32B(bb2Buf);
	DVDReset();
	DVDReadDiskID(&block, idTmp, cb);
	do {
		status = DVDGetDriveStatus();
	} while (status != DVD_STATE_END);
	di                   = (void*)OS_BASE_CACHED;
	di->FSTLocationInRam = bb2->addr;
	di->FSTMaxLength     = bb2->maxLength;
	memcpy(di, idTmp, 32);
	OSReport("\n");
	OSReport("  Game Name ... %c%c%c%c\n", di->Gamecode[0], di->Gamecode[1], di->Gamecode[2], di->Gamecode[3]);
	OSReport("  Company ..... %c%c\n", di->Company[0], di->Company[1]);
	OSReport("  Disk # ...... %d\n", di->DiskID);
	OSReport("  Game ver .... %d\n", di->Version);
	if (di->Streaming == 0) {
		onStr = "OFF";
	} else {
		onStr = "ON";
	}
	OSReport("  Streaming ... %s\n", onStr);
	OSReport("\n");
	OSSetArenaHi(bb2->addr);
	return;
}
