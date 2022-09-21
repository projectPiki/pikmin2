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
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadTexData();                         // _D0
	virtual ResTIMG* getChangeTexture0();               // _E0 (weak)
	virtual ResTIMG* getChangeTexture1();               // _E4 (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	u8 _44[0x8]; // _44, unknown
	Obj* m_obj;  // _4C, an array of Objs
};

} // namespace BlueChappy
} // namespace Game

#endif
