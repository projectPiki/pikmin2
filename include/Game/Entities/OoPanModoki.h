#ifndef _GAME_ENTITIES_OOPANMODOKI_H
#define _GAME_ENTITIES_OOPANMODOKI_H

#include "Game/Entities/PanModokiBase.h"

/**
 * --Header for Giant Breadbug (OoPanModoki)--
 */

namespace Game {
namespace OoPanModoki {
struct Obj : public PanModokiBase::Obj {
	Obj();

	virtual ~Obj() { }                                     // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();    // _258 (weak)
	virtual bool pressCallBack(Creature*, f32, CollPart*); // _27C
	virtual f32 getDownSmokeScale();                       // _2EC (weak)
	virtual void appearRumble();                           // _2F8
	virtual void hideRumble();                             // _2FC
	virtual bool canTarget(int, int);                      // _308 (weak)

	// _00 		= VTBL
	// _00-_3C8	= PanModokiBase
	// _3C8 = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void doAlloc();                            // _A8
	virtual void loadModelData();                      // _C8
	virtual J3DModelData* doLoadBmd(void*);            // _D4
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_OoPanModoki;
	}
	virtual void createObj(int count) // _A0 (weak)
	{
		m_obj = new Obj[count];
	}
	virtual EnemyBase* getEnemy(int index) // _A4 (weak)
	{
		return &m_obj[index];
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};
} // namespace OoPanModoki
} // namespace Game

#endif
