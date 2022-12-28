#ifndef _PSGAME_SYSFACTORY_H
#define _PSGAME_SYSFACTORY_H

#include "JSystem/JKR/JKRHeap.h"

namespace PSM {
struct SceneMgr;
}

namespace PSGame {
struct SysFactory {
	SysFactory();

	void newSoundSystem();
	void preInitJAI();
	void postInitJAI();

	JKRHeap* m_heap;        // _00
	u32 m_heapSize;         // _04
	void* m_aafFile;        // _08
	void (*m_makeSeFunc)(); // _0C

	virtual PSM::SceneMgr* newSceneMgr() = 0; // _08

	// _10 = VTBL??
	u32 m_solidHeapSize;       // _14
	JKRSolidHeap* m_solidHeap; // _18
};
} // namespace PSGame

#endif
