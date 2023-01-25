#ifndef _GAME_ENTITIES_BLUECHAPPY_H
#define _GAME_ENTITIES_BLUECHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"

/**
 * --Header for Orange Bulborb (BlueChappy)--
 */

namespace Game {
namespace BlueChappy {
struct Obj : public ChappyBase::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_BlueChappy;
	}

	// _00 		= VTBL
	// _00-_2E4	= ChappyBase::Obj
};

struct Mgr : public ChappyBase::Mgr {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                  // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BlueChappy;
	}
	virtual ResTIMG* getChangeTexture0() // _E0 (weak)
	{
		return mChangeTexture0;
	}
	virtual ResTIMG* getChangeTexture1() // _E4 (weak)
	{
		return mChangeTexture1;
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
	ResTIMG* mChangeTexture0; // _44
	ResTIMG* mChangeTexture1; // _48
	Obj* mObj;                // _4C, an array of Objs
};

} // namespace BlueChappy
} // namespace Game

#endif
