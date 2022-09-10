#ifndef _GAME_ENTITIES_DIODE_H
#define _GAME_ENTITIES_DIODE_H

#include "Game/Entities/Plants.h"
#include "Game/EnemyMgrBase.h"

/**
 * --Header for Diodes--
 * DiodeGreen   = Diode (Green)
 * DiodeRed     = Diode (Red)
 */

/* Diode (Green) */
namespace Game {
namespace DiodeGreen {
struct Obj : public Plants::Obj {
	Obj();

	virtual void doEntry();                             // _40
	virtual void getLODCylinder(Sys::Cylinder&);        // _144 (weak)
	virtual ~Obj();                                     // _1BC (weak)
	virtual void setParameters();                       // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void touchedSE(Navi*);                      // _2FC

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
	virtual void loadModelData();                       // _C8 (weak)
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace DiodeGreen

/* Diode (Red) */
namespace Game {
namespace DiodeRed {
struct Obj : public Plants::Obj {
	Obj();

	virtual void doEntry();                             // _40
	virtual void getLODCylinder(Sys::Cylinder&);        // _144 (weak)
	virtual ~Obj();                                     // _1BC (weak)
	virtual void setParameters();                       // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void touchedSE(Navi*);                      // _2FC

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
	virtual void loadModelData();                       // _C8 (weak)
	virtual J3DModelData* doLoadBmd(void*);             // _D4 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace DiodeRed
} // namespace Game

#endif
