#ifndef _GAME_ENTITIES_MAROFROG_H
#define _GAME_ENTITIES_MAROFROG_H

#include "Game/Entities/Frog.h"

/**
 * --Header for Wollywog (MaroFrog)--
 */

namespace Game {
namespace MaroFrog {
struct Obj : public Frog::Obj {
	Obj();

	virtual ~Obj();                                     // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void attackNaviPosition();                  // _300

	void createEffect();

	// _00 		= VTBL
	// _00-_2E0	= Frog::Obj
};

struct Mgr : public EnemyMgrBase {
	/*
	 * technically unknown if it inherits from Frog::Mgr or EnemyMgrBase
	 * since it has the same defined methods.
	 * Guessing base because both likely have defined obj arrays that
	 * shouldn't be shared, but who knows with this game.
	 *  - HP
	 */

	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};
} // namespace MaroFrog
} // namespace Game

#endif
