#ifndef _GAME_ENTITIES_WAKAME_H
#define _GAME_ENTITIES_WAKAME_H

#include "Game/Entities/Plants.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Shoots (Wakame)--
 * Wakame_l  = Shoots (Large)
 * Wakame_s  = Shoots (Small)
 */

namespace Game {
/* LARGE */
namespace Wakame_l {
struct Obj : public Plants::Obj {
	Obj() { }

	virtual void getLODCylinder(Sys::Cylinder& cylinder) // _144 (weak)
	{
		Vector3f vec1;
		Vector3f vec2         = m_position;
		vec1                  = vec2;
		EnemyParmsBase* parms = static_cast<EnemyParmsBase*>(m_parms);
		vec1.y += parms->m_general.m_privateRadius.m_value;
		cylinder.set(vec1, vec2, parms->m_general.m_homeRadius.m_value);
	}
	virtual ~Obj() { }           // _1BC (weak)
	virtual void setParameters() // _228 (weak)
	{
		Plants::Obj::setParameters();
		m_lodParm.m_isCylinder = true;
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Wakame_l;
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
		return EnemyTypeID::EnemyID_Wakame_l;
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240010);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};
} // namespace Wakame_l

/* SMALL */
namespace Wakame_s {
struct Obj : public Plants::Obj {
	Obj() { }

	virtual void getLODCylinder(Sys::Cylinder& cylinder) // _144 (weak)
	{
		Vector3f vec1;
		Vector3f vec2         = m_position;
		vec1                  = vec2;
		EnemyParmsBase* parms = static_cast<EnemyParmsBase*>(m_parms);
		vec1.y += parms->m_general.m_privateRadius.m_value;
		cylinder.set(vec1, vec2, parms->m_general.m_homeRadius.m_value);
	}
	virtual ~Obj() { }           // _1BC (weak)
	virtual void setParameters() // _228 (weak)
	{
		Plants::Obj::setParameters();
		m_lodParm.m_isCylinder = true;
	}
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Wakame_s;
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
		return EnemyTypeID::EnemyID_Wakame_s;
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240010);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};
} // namespace Wakame_s

} // namespace Game

#endif
