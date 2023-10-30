#ifndef _GAME_ENTITIES_PANMODOKI_H
#define _GAME_ENTITIES_PANMODOKI_H

#include "Game/Entities/PanModokiBase.h"

/**
 * --Header for Breadbug (PanModoki)--
 */

namespace Game {
namespace PanModoki {
struct Obj : public PanModokiBase::Obj {
	Obj() { }

	virtual ~Obj() { }                                        // _1BC (weak)
	virtual bool canTarget(int pelMinWeight, int weightLimit) // _308 (weak)
	{
		return weightLimit > pelMinWeight;
	}
	virtual f32 getDownSmokeScale() { return 0.6f; }   // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_PanModoki;
	}

	// _00 		= VTBL
	// _00-_3C8	= PanModokiBase
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_PanModoki;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		mObj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &mObj[index];
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};
} // namespace PanModoki
} // namespace Game

#endif
