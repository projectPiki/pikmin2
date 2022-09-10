#ifndef _GAME_ENTITIES_CHIYOGAMI_H
#define _GAME_ENTITIES_CHIYOGAMI_H

#include "Game/Entities/Plants.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Chiyogami Paper (Chiyogami)--
 */

namespace Game {
namespace Chiyogami {
struct Obj : public Plants::Obj {
	Obj();

	virtual void getLODCylinder(Sys::Cylinder&);        // _144 (weak)
	virtual ~Obj();                                     // _1BC (weak)
	virtual void setParameters();                       // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)

	// _00 		= VTBL
	// _00-_2BF	= Plants::Obj
};

struct Mgr : public EnemyMgrBaseAlwaysMovieActor {
	Mgr(int, u8);

	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace Chiyogami
} // namespace Game

#endif
