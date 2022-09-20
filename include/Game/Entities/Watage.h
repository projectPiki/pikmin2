#ifndef _GAME_ENTITIES_WATAGE_H
#define _GAME_ENTITIES_WATAGE_H

#include "Game/Entities/Plants.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Seeding Dandelion (Watage)--
 */

namespace Game {
namespace Watage {
struct Obj : public Plants::Obj {
	Obj() { }

	virtual void doEntry();                            // _40
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Watage;
	}
	virtual void touched(); // _2F8

	// _00 		= VTBL
	// _00-_2BF	= Plants::Obj
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int, u8);

	virtual ~Mgr() { }                        // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&); // _70
	virtual void createObj(int count)         // _A0 (weak)
	{
		m_obj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int idx) // _A4 (weak)
	{
		return &m_obj[idx];
	}
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Watage;
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240010);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace Watage
} // namespace Game

#endif
