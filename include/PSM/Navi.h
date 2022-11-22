#ifndef _PSM_NAVI_H
#define _PSM_NAVI_H

#include "PSM/CreatureObj.h"
#include "PSGame/Rappa.h"

namespace Game {
struct Navi;
} // namespace Game

namespace PSM {
struct Navi : public CreatureObj {
	enum FootType {

	};

	Navi(Game::Navi*);

	// vtable 1 (JKRDisposer, _10)
	// vtable 2 (Creature, _28)
	virtual ~Navi() { }                     // _14 (weak)
	virtual CreatureCastType getCastType(); // _1C (weak)

	// vtable 3 (JAInter::Object + self, _28)
	virtual JAISound* startSound(u32, u32); // _7C (weak)

	void init(u16);
	void setShacho();
	void stopWaitVoice();
	void getManType();
	void playShugoSE();
	void playKaisanSE();
	void playWalkSound(Navi::FootType, int);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	PSGame::Rappa m_rappa; // _70
	u32 _90;               // _90, unknown
};
} // namespace PSM

#endif
