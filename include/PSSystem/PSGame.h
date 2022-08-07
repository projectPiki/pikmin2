#ifndef _PSSYSTEM_PSGAME_H
#define _PSSYSTEM_PSGAME_H

#include "JSystem/JUT/JUTException.h"
#include "PSSystem/PSScene.h"

struct JASTrack;

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
	virtual void exec(); // _08 (weak)

	void refreshCurEndScene();
	void findSeq(JASTrack*);
	void getPlayingSeq(JASTrack*);
	void deleteScene(Scene*);
	void deleteCurrentScene();

	SceneMgr_04* _04;
};

extern SceneMgr* spSceneMgr;

inline SceneMgr* getSceneMgr()
{
	P2ASSERTLINE(467, spSceneMgr);
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
