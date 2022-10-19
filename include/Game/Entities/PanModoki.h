#ifndef _GAME_ENTITIES_PANMODOKI_H
#define _GAME_ENTITIES_PANMODOKI_H

#include "Game/Entities/PanModokiBase.h"

/**
 * --Header for Breadbug (PanModoki)--
 */

namespace Game {
namespace PanModoki {
struct Obj : public PanModokiBase::Obj {
	Obj();

	virtual ~Obj();                                     // _1BC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual f32 getDownSmokeScale();                    // _2EC (weak)
	virtual void canTarget(int, int);                   // _308 (weak)

	// _00 		= VTBL
	// _00-_3C8	= PanModokiBase
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};
} // namespace PanModoki
} // namespace Game

#endif
