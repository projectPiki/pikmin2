#ifndef _PSM_ENEMYBASE_H
#define _PSM_ENEMYBASE_H

#include "PSM/CreatureAnime.h"
#include "PSM/BattleLink.h"
#include "PSM/KehaiLink.h"

namespace Game {
struct EnemyBase;
} // namespace Game

namespace PSM {
/**
 * @size = 0xE0
 */
struct EnemyBase : public CreatureAnime, public BattleLink, public KehaiLink {
	EnemyBase(Game::EnemyBase*, u8);

	// vtable 2 (CreatureAnime, _28)
	// virtual ~EnemyBase() { }               // _14 (weak)
	virtual CreatureCastType getCastType() // _1C (weak)
	{
		return CCT_Enemy;
	}
	virtual void onCalcOn();                           // _28
	virtual JAISound* startSoundInner(StartSoundArg&); // _30
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32,
	                                 f32); // _34
	// vtable 3 (CreatureAnime)
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*,
	                            u8); // _94 (weak)
	virtual void onCalcTurnOn();     // _9C
	virtual void onCalcTurnOff();    // _A0
	// vtable 4 (BattleLink)
	// vtable 5 (KehaiLink + self)
	virtual void battleOff();    // _C4 (weak)
	virtual void setKilled() { } // _C8 (weak)
	virtual void updateKehai();  // _CC
	virtual void updateBattle(); // _D0

	bool calcKehai();

	// _00-_10 	= JSUPtrLink (+ vtable 1)
	// _10-_28	= JKRDisposer
	// _28		= VTABLE 2
	// _2C-_30	= Game::Creature* (or Game::EnemyBase*, etc)
	// _30-_AC	= JAIAnimeSound
	// _AC-_B8	= CreatureAnime
	// _B8-_CC 	= BattleLink
	// _CC-_E0	= KehaiLink
};

/**
 * @size = 0xE0
 */
struct EnemyNotAggressive : public EnemyBase {
	EnemyNotAggressive(Game::EnemyBase*, u8);

	// vtable 2 (CreatureAnime, _28)
	virtual ~EnemyNotAggressive() { }                                         // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyNotAggressive; } // _1C (weak)
	// vtable 3 (CreatureAnime)
	// vtable 4 (BattleLink)
	// vtable 5 (KehaiLink + self)
	virtual void battleOff() { }    // _C4 (weak)
	virtual void updateKehai() { }  // _CC (weak)
	virtual void updateBattle() { } // _D0
	virtual void kehaiOn() { }      // _D4 (weak)
	virtual void kehaiOff() { }     // _D8 (weak)
	virtual void battleOn() { }     // _DC (weak)
};

/**
 * @size = 0xE0
 */
struct EnemyBig : public EnemyBase {
	inline EnemyBig(Game::EnemyBase* enemy, u8 a)
	    : EnemyBase(enemy, a)
	{
	}

	// virtual ~EnemyBig() { }                 // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyBig; } // _1C (weak)
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32,
	                                 f32); // _34
};

/**
 * @size = 0xE0
 */
struct EnemyHekoi : public EnemyBase {
	inline EnemyHekoi(Game::EnemyBase* enemy, u8 a)
	    : EnemyBase(enemy, a)
	{
	}

	// virtual ~EnemyHekoi() { }              // _04
	virtual CreatureCastType getCastType() // _0C
	{
		return CCT_EnemyHekoi;
	}
};

/**
 * @size = 0xE0
 */
struct Enemy_SpecialChappy : public EnemyBig {
	inline Enemy_SpecialChappy(Game::EnemyBase* enemy, u8 a)
	    : EnemyBig(enemy, a)
	{
	}

	// virtual ~Enemy_SpecialChappy();           // _14 (weak)
	virtual void onPlayingSe(u32, JAISound*); // _38
};

} // namespace PSM

#endif
