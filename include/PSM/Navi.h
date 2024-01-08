#ifndef _PSM_NAVI_H
#define _PSM_NAVI_H

#include "PSM/CreatureObj.h"
#include "PSGame/PSSe.h"

namespace Game {
struct Navi;
} // namespace Game

namespace PSM {
struct Navi : public CreatureObj {
	enum FootType {
		NAVIFOOT_820 = 0x820,
		NAVIFOOT_840 = 0x840,
	};

	Navi(Game::Navi*);

	// vtable 1 (JKRDisposer, _10)
	// vtable 2 (Creature, _28)
	virtual ~Navi() { }                                         // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_Navi; } // _1C (weak)

	// vtable 3 (JAInter::Object + self, _28)
	virtual JAISound* startSound(u32, u32); // _7C (weak)

	void init(u16);
	void setShacho();
	void stopWaitVoice();
	int getManType();
	JAISound* playShugoSE();
	JAISound* playKaisanSE();
	void playWalkSound(Navi::FootType, int);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	PSGame::Rappa mRappa; // _70
	JAISound* mCurrSound; // _90
};
} // namespace PSM

#endif
