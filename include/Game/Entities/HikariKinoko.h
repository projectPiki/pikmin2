#ifndef _GAME_ENTITIES_HIKARIKINOKO_H
#define _GAME_ENTITIES_HIKARIKINOKO_H

#include "Game/Entities/Plants.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Common Glowcap (HikariKinoko)--
 */

namespace Game {
namespace HikariKinoko {
struct Obj : public Plants::Obj {
	Obj() { }

	virtual void getLODCylinder(Sys::Cylinder&);       // _144 (weak)
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void setParameters();                      // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_HikariKinoko;
	}
	virtual void touchedSE(Navi*); // _2FC

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
		return EnemyTypeID::EnemyID_HikariKinoko;
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240010);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace HikariKinoko
} // namespace Game

#endif
