#ifndef _PSSYSTEM_PSGAME_H
#define _PSSYSTEM_PSGAME_H

#include "JSystem/JUT/JUTException.h"

namespace PSSystem {
struct SceneMgr_04_04 {
	virtual void _08();
	virtual void _0C();
	virtual void _10();
	virtual void _14();
	virtual void _18();
	virtual void _1C();
};

struct SceneMgr_04 {
	u32 _00;
	SceneMgr_04_04* _04;
};

struct SceneMgr {
	u32 _00;
	SceneMgr_04* _04;
};

extern SceneMgr* spSceneMgr;

inline SceneMgr* getSceneMgr()
{
#line 467
	P2ASSERT(spSceneMgr);
	return spSceneMgr;
}

inline void checkSceneMgr4()
{
	if (!(spSceneMgr->_04)) {
		JUTException::panic_f("PSScene.h", 199, "P2Assert");
	}
}
}; // namespace PSSystem

#endif
