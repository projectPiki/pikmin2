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

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_YellowKochappy;
	}

	// _00 		= VTBL
	// _00-_2D4	= KochappyBase::Obj
};

struct Mgr : public KochappyBase::Mgr {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                 // _58 (weak)
	virtual void doAlloc();             // _A8
	virtual void loadTexData();         // _D0
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_YellowKochappy;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* mChangeTexture; // _44
	Obj* mObj;               // _48, array of Objs
};

} // namespace YellowKochappy
} // namespace Game

#endif
