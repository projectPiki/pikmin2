#ifndef _PSM_ENEMYBASE_H
#define _PSM_ENEMYBASE_H

#include "PSM/CreatureAnime.h"
#include "PSM/BattleLink.h"
#include "PSM/KehaiLink.h"

namespace PSM {
struct EnemyBase : public CreatureAnime, public BattleLink, public KehaiLink {
	EnemyBase();

	// vtable 2 (Creature)
	virtual ~EnemyBase(); // _04
	/**
	 * @reifiedAddress{80105818}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual CreatureCastType getCastType() // _0C
	{
		return CCT_Enemy;
	}
	virtual void onCalcOn();                      // _18
	virtual void startSoundInner(StartSoundArg&); // _20
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, float,
	                                 float); // _24
	// vtable 3 (CreatureAnime)
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*,
	                            u8); // _4C
	virtual void onCalcTurnOn();        // _54
	virtual void onCalcTurnOff();       // _58
	// vtable 4 (BattleLink)
	// vtable 5 (KehaiLink + self)
	virtual void battleOff();    // _08
	virtual void setKilled();    // _0C
	virtual void updateKehai();  // _10
	virtual void updateBattle(); // _14
};
} // namespace PSM

#endif
