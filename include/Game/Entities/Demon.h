#ifndef _GAME_ENTITIES_DEMON_H
#define _GAME_ENTITIES_DEMON_H

#include "Game/Entities/Sarai.h"

/**
 * --Header for Bumbling Snitchbug (Demon)--
 */

namespace Game {
namespace Demon {
struct Obj : public Sarai::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Demon;
	}
	virtual int getStickPikminNum() { return mStuckPikminCount; }        // _2FC (weak)
	virtual FakePiki* getAttackableTarget();                             // _300
	virtual int catchTarget();                                           // _304
	virtual void resetAttackableTimer(f32 time) { mAttackTimer = time; } // _308 (weak)

	// _00 		= VTBL
	// _00-_2D8	= Sarai::Obj
	f32 mAttackTimer; // _2D8
	                  // _2DC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void loadModelData();                      // _C8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Demon;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x00240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs, probably
};
} // namespace Demon
} // namespace Game

#endif
