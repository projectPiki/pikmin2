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
	Obj() { }

	virtual void doEntry();                            // _40
	virtual void getLODCylinder(Sys::Cylinder&);       // _144 (weak)
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void setParameters();                      // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_DaiodoGreen;
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
		return EnemyTypeID::EnemyID_DaiodoGreen;
	}
	virtual void loadModelData() // _C8 (weak)
	{
		EnemyMgrBase::loadModelData();
		if (m_modelData == nullptr) {
			JUTException::panic_f("plantsMgr.h", 578, "P2Assert");
		}
		J3DShape* shape;
		for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
			shape = m_modelData->m_shapeTable.m_items[j];
			if (shape == nullptr) {
				JUTException::panic_f("plantsMgr.h", 582, "P2Assert");
			}
			shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
		}
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace DiodeGreen

/* Diode (Red) */
namespace DiodeRed {
struct Obj : public Plants::Obj {
	Obj() { }

	virtual void doEntry();                            // _40
	virtual void getLODCylinder(Sys::Cylinder&);       // _144 (weak)
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void setParameters();                      // _228 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_DaiodoRed;
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
		return EnemyTypeID::EnemyID_DaiodoRed;
	}
	virtual void loadModelData() // _C8 (weak)
	{
		EnemyMgrBase::loadModelData();
		if (m_modelData == nullptr) {
			JUTException::panic_f("plantsMgr.h", 519, "P2Assert");
		}
		J3DShape* shape;
		for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
			shape = m_modelData->m_shapeTable.m_items[j];
			if (shape == nullptr) {
				JUTException::panic_f("plantsMgr.h", 523, "P2Assert");
			}
			shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
		}
	}
	virtual J3DModelData* doLoadBmd(void* file) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(file, 0x20240030);
	}

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBaseAlwaysMovieActor
	Obj* m_obj; // _44, array of Objs
};

} // namespace DiodeRed
} // namespace Game

#endif
