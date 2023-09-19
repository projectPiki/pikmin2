#ifndef _EBI_CARDEREADER_H
#define _EBI_CARDEREADER_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "Dolphin/os.h"

#define EREADER_GAMES 3

namespace ebi {

void gCardEMgr_ThreadFunc(void*);

namespace CardEReader {
void changeEndian(u32);
void roundup4b(u32);
void CardE_probeAGB();
bool CardE_uploadToGBA(long, u8*, u32);

struct TMgr : public JKRDisposer {
	enum enumErr { Error_0, Error_1, Error_2 };

	TMgr()
	{
		mGameID  = 0;
		mState   = 0;
		mEndStat = Error_0;
		mGbaPort = -1;
	}

	virtual ~TMgr(); // _08

	static void globalInstance();
	void loadResource();
	void init();
	void uploadToGBA(long);
	void probeAGB();
	void update();
	bool isFinish();
	void threadProc(void*);
	bool tryUploadToGBA_();
	void goEnd_(enumErr);
	void deleteInstance();

	// _00 VTBL
	void* mGameDatas[EREADER_GAMES]; // _18
	u32 mSizes[EREADER_GAMES];
	int mGameID;    // _30
	int mState;     // _34
	int _38;        // _38
	int mEndStat;   // _3C
	int mGbaPort;   // _40
	int mCounter;   // _44
	OSMutex mMutex; // _48
	OSCond mCond;
};
} // namespace CardEReader
extern CardEReader::TMgr* gCardEMgr;
} // namespace ebi

#endif
