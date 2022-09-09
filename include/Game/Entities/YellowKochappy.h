#ifndef _GAME_ENTITIES_YELLOWKOCHAPPY_H
#define _GAME_ENTITIES_YELLOWKOCHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/KochappyBase.h"

/**
 * --Header for Dwarf Snowy Bulborb (YellowKochappy)--
 */

namespace Game {
namespace YellowKochappy {
struct Obj : public KochappyBase::Obj {
	Obj();

	virtual ~Obj();                                     // _1BC (weak)
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)

	// _00 		= VTBL
	// _00-_2D4	= KochappyBase::Obj
};

struct Mgr : public KochappyBase::Mgr {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void loadTexData();                         // _D0
	virtual void getChangeTexture();                    // _E0 (weak)
	                                                    //////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
};

} // namespace YellowKochappy
} // namespace Game

#endif
