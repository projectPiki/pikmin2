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

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_MaroFrog;
	}
	virtual void attackNaviPosition(); // _300

	void createEffect();

	// _00 		= VTBL
	// _00-_2E0	= Frog::Obj
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_MaroFrog;
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};
} // namespace MaroFrog
} // namespace Game

#endif
