#ifndef _PSGAME_SYSFACTORY_H
#define _PSGAME_SYSFACTORY_H

#include "JSystem/JKR/JKRHeap.h"

namespace PSGame {
struct SysFactory {
	SysFactory();

	void newSoundSystem();
	void preInitJAI();
	void postInitJAI();

	JKRHeap* _00; // _00
	u32 _04;      // _04
	u32 _08;      // _08, unknown
	void* _0C;    // _0C, should be a ptr to makeJAISeCallback maybe?

	virtual void someFunction() = 0; // _08, not sure what this is, possibly a dtor?

	// _10 = VTBL??
	u32 m_solidHeapSize;       // _14
	JKRSolidHeap* m_solidHeap; // _18
};
} // namespace PSGame

#endif
