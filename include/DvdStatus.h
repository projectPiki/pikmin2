#ifndef _DVDSTATUS_H
#define _DVDSTATUS_H

#include "types.h"
#include "Game/MemoryCard/Mgr.h"
#include "JSystem/JUtility/TColor.h"
#include "ebi/Save.h"
#include "ebi/FileSelect.h"

struct JUTFader;

namespace DvdError {
extern char* gMessage_eng[];
extern char* gMessage_fra[];
extern char* gMessage_ger[];
extern char* gMessage_ita[];
extern char* gMessage_jpn[];
extern char* gMessage_spa[];
}; // namespace DvdError

enum DvdErrorID {
	DvdError_None          = -1,
	DvdError_Loading       = 0,
	DvdError_ErrorOccured  = 1,
	DvdError_DiscReadError = 2,
	DvdError_InsertDisc    = 3,
	DvdError_TrayOpen      = 4,
	DvdError_WrongDisc     = 5,
};

// Size: 0xC
struct DvdStatus {
	DvdStatus();

	void draw();
	bool isErrorOccured();
	bool update();

	int mErrorIndex;  // _00
	JUTFader* mFader; // _04
	int mCPULockNum;  // _08
};

#endif
