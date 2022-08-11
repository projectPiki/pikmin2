#ifndef _PSM_ENEMYBASE_H
#define _PSM_ENEMYBASE_H

#include "PSM/CreatureAnime.h"
#include "PSM/BattleLink.h"
#include "PSM/KehaiLink.h"

namespace PSM {
struct EnemyBase : public CreatureAnime, public BattleLink, public KehaiLink {
	EnemyBase();

	// vtable 2 (CreatureAnime, _28)
	virtual ~EnemyBase(); 						// _14 (weak)
	virtual CreatureCastType getCastType() 		// _1C (weak)
	{
		return CCT_Enemy;
	}
	virtual void onCalcOn();                      // _28
	virtual void startSoundInner(StartSoundArg&); // _30
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, float,
	                                 float); // _34
	// vtable 3 (CreatureAnime)
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*,
	                            u8); // _94 (weak)
	virtual void onCalcTurnOn();     // _9C
	virtual void onCalcTurnOff();    // _A0
	// vtable 4 (BattleLink)
	// vtable 5 (KehaiLink + self)
	virtual void battleOff();    	// _C4 (weak)
	virtual void setKilled() { }    // _C8 (weak)
	virtual void updateKehai();  	// _CC
	virtual void updateBattle(); 	// _D0
};
} // namespace PSM

#endif
