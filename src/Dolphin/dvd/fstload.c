#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/dvd.h"

struct bb2struct {
	u32 _00;
	u32 _04;
	s32 _08;
	u32 _0C;
	void* _10;
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

/*
 * --INFO--
 * Address:	800DF914
 * Size:	0000D8
 */

static void cb(s32 param_1, void* param_2) // param_2 is probably a struct
{
	if (param_1 > 0) {
		switch (status) {
		case 0:
			status = 1;
			DVDReadAbsAsyncForBS(param_2, bb2, 0x20, 0x420, cb);
			break;
		case 1:
			status = 2;
			DVDReadAbsAsyncForBS(param_2, bb2->_10, OSRoundUp32B(bb2->_08), bb2->_04, cb);
			break;
		}
	} else if (param_1 == -1) {
	} else if (param_1 == -4) {
		status = 0;
		DVDReset();
		DVDReadDiskID(param_2, idTmp, cb);
	}
}

/*
 * --INFO--
 * Address:	800DF9EC
 * Size:	000168
 */
void __fstLoad(void)
{
	int iVar1;
	char* pcVar2;
	u8 auStack64[64];
	void* arenaHi;
	struct blah* di;

	arenaHi = OSGetArenaHi();
	idTmp   = (void*)OSRoundUp32B(auStack64);
	bb2     = (void*)OSRoundUp32B(bb2Buf);
	DVDReset();
	DVDReadDiskID(&block, idTmp, cb);
	do {
		iVar1 = DVDGetDriveStatus();
	} while (iVar1 != 0);
	di                   = (void*)0x80000000;
	di->FSTLocationInRam = bb2->_10;
	di->FSTMaxLength     = bb2->_0C;
	memcpy(di, idTmp, 32);
	OSReport("\n");
	OSReport("  Game Name ... %c%c%c%c\n", di->Gamecode[0], di->Gamecode[1], di->Gamecode[2], di->Gamecode[3]);
	OSReport("  Company ..... %c%c\n", di->Company[0], di->Company[1]);
	OSReport("  Disk # ...... %d\n", di->DiskID);
	OSReport("  Game ver .... %d\n", di->Version);
	if (di->Streaming == 0) {
		pcVar2 = "OFF";
	} else {
		pcVar2 = "ON";
	}
	OSReport("  Streaming ... %s\n", pcVar2);
	OSReport("\n");
	OSSetArenaHi(bb2->_10);
	return;
}
