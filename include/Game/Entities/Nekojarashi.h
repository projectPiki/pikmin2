#ifndef _GAME_ENTITIES_NEKOJARASHI_H
#define _GAME_ENTITIES_NEKOJARASHI_H

#include "Game/Entities/Plants.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Foxtail (Nekojarashi)--
 */

namespace Game {
namespace Nekojarashi {
struct Obj : public Plants::Obj {
	Obj() { }

	virtual void doEntry();                            // _40
	virtual void getLODCylinder(Sys::Cylinder&);       // _144 (weak)
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void setParameters();                      // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Nekojarashi;
	}

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
		return EnemyTypeID::EnemyID_Nekojarashi;
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240010);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace Nekojarashi
} // namespace Game

#endif
