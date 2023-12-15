#ifndef _PSM_PIKI_H
#define _PSM_PIKI_H

#include "PSM/CreatureObj.h"
#include "PSGame/SeMgr.h"

namespace Game {
struct Piki;
} // namespace Game

namespace PSM {
struct Piki : public CreatureObj {
	Piki(Game::Piki* p);

	virtual ~Piki() { }                                              // _14 (weak)
	virtual PSM::CreatureCastType getCastType() { return CCT_Piki; } // _1C (weak)
	virtual void onCalcOn();                                         // _28

	void becomeFree();
	void becomeNotFree();
	JAISound* startFreePikiSound(u32, u32, u32);
	JAISound* startPikiSound(JAInter::Object*, u32, u32);
	JAISound* startPikiSetSound(JAInter::Object*, u32, PSGame::SeMgr::SetSeId, u32);
	JAISound* startFreePikiSetSound(u32, PSGame::SeMgr::SetSeId, u32, u32);
	u32 checkHappaChappySE(u32);

	// _28 		 = VTBL
	// _00-_30 = Creature
	// _30-_70 = JAInter::Object
	int mFreeCounter;    // _70
	u32 mHummingCounter; // _74

	static u8 sDopedPikminNum;
};
} // namespace PSM

#endif
