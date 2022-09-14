#ifndef _DVDSTATUS_H
#define _DVDSTATUS_H

#include "types.h"
#include "Game/MemoryCard/Mgr.h"
#include "JSystem/JUT/TColor.h"

struct JUTFader;

// these are legit just for DvdStatus::draw - TMgr is probably a struct
// with some global instance of it that it's calling but idk what yet, for either
// Save or FileSelect.
// ... will need to fix in sysGCU/dvdStatus.cpp eventually ...
namespace ebi {
namespace Save {
namespace TMgr {
void onDvdErrorOccured();
void onDvdErrorRecovered();
} // namespace TMgr
} // namespace Save

namespace FileSelect {
namespace TMgr {
void onDvdErrorOccured();
void onDvdErrorRecovered();
} // namespace TMgr
} // namespace FileSelect
} // namespace ebi

namespace DvdError {
extern char* gMessage_eng[];
extern char* gMessage_fra[];
extern char* gMessage_ger[];
extern char* gMessage_ita[];
extern char* gMessage_jpn[];
extern char* gMessage_spa[];
}; // namespace DvdError

// Size: 0xC
struct DvdStatus {
	DvdStatus();

	void draw();
	bool isErrorOccured();
	bool update();

	int _00;           // _00
	JUTFader* m_fader; // _04
	int _08;           // _08
};

#endif
