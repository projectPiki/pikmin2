#ifndef _PSGAME_SYSFACTORY_H
#define _PSGAME_SYSFACTORY_H

#include "JSystem/JKernel/JKRHeap.h"

namespace PSM {
struct SceneMgr;
struct SeSound;
} // namespace PSM

namespace PSGame {
struct SysFactory {
	SysFactory();

	void newSoundSystem();
	void preInitJAI();
	void postInitJAI();

	JKRHeap* mHeap;                 // _00
	u32 mHeapSize;                  // _04
	void* mAafFile;                 // _08
	PSM::SeSound* (*mMakeSeFunc)(); // _0C

	virtual PSM::SceneMgr* newSceneMgr() = 0; // _08

	// _10 = VTBL??
	u32 mSolidHeapSize;       // _14
	JKRSolidHeap* mSolidHeap; // _18
};
} // namespace PSGame

#endif
