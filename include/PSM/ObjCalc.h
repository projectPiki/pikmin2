#ifndef _PSM_OBJCALC_H
#define _PSM_OBJCALC_H

#include "PSSystem/SingletonBase.h"
#include "PSM/Creature.h"

namespace PSM {
struct ObjCalcBase : public PSSystem::SingletonBase<ObjCalcBase> {
	enum Mode {

	};

	virtual ~ObjCalcBase();                  // _08 (weak)
	virtual void getPlayerNo(Creature*) = 0; // _0C
	virtual void getPlayerNo(Vec&)      = 0; // _10
	virtual void setMode(Mode);              // _14 (weak)
	virtual bool is1PGame();                 // _18 (weak)

	// _00 = VTBL
	Mode m_mode; // _04
};

struct ObjCalc_SingleGame : public ObjCalcBase {
	virtual ~ObjCalc_SingleGame();       // _08 (weak)
	virtual void getPlayerNo(Creature*); // _0C
	virtual void getPlayerNo(Vec&);      // _10

	void newInstance_SingleGame();

	// _00     = VTBL
	// _00-_08 = ObjCalcBase
	u8 m_currCameraIndex; // _08
};

struct ObjCalc_2PGame : public ObjCalcBase {
	virtual ~ObjCalc_2PGame();           // _08 (weak)
	virtual void getPlayerNo(Creature*); // _0C
	virtual void getPlayerNo(Vec&);      // _10
	virtual bool is1PGame();             // _18 (weak)

	void newInstance_2PGame();

	// _00     = VTBL
	// _00-_08 = ObjCalcBase
};
} // namespace PSM

#endif
