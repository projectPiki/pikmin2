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

	virtual ~Piki();                             // _14 (weak)
	virtual PSM::CreatureCastType getCastType(); // _1C (weak)
	virtual void onCalcOn();                     // _28

	void becomeFree();
	void becomeNotFree();
	void startFreePikiSound(u32, u32, u32);
	void startPikiSound(JAInter::Object*, u32, u32);
	void startPikiSetSound(JAInter::Object*, u32, PSGame::SeMgr::SetSeId, u32);
	void startFreePikiSetSound(u32, PSGame::SeMgr::SetSeId, u32, u32);
	void checkHappaChappySE(u32);

	// _28 		 = VTBL
	// _00-_30 = Creature
	// _30-_70 = JAInter::Object
	int _70; // _70
	u32 _74; // _74
};
} // namespace PSM

#endif
