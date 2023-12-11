#ifndef _PSM_OBJCALC_H
#define _PSM_OBJCALC_H

#include "PSSystem/PSCommon.h"
#include "PSM/Creature.h"

namespace PSM {
struct ObjCalcBase : public PSSystem::SingletonBase<ObjCalcBase> {

	ObjCalcBase()
	    : PSSystem::SingletonBase<ObjCalcBase>(this)
	{
		mMode = OBJCALC_0;
	}

	enum Mode {
		OBJCALC_0 = 0,
		OBJCALC_1 = 1,
		OBJCALC_2 = 2,
		OBJCALC_3 = 3,
	};

	virtual ~ObjCalcBase() { }                        // _08 (weak)
	virtual u8 getPlayerNo(Creature*) = 0;            // _0C
	virtual u8 getPlayerNo(Vec&)      = 0;            // _10
	virtual void setMode(Mode mode) { mMode = mode; } // _14 (weak)
	virtual bool is1PGame() { return true; }          // _18 (weak)

	// _00 = VTBL
	Mode mMode; // _04
};

struct ObjCalc_SingleGame : public ObjCalcBase {

	ObjCalc_SingleGame() { mPlayerNum = 0; }
	virtual ~ObjCalc_SingleGame() { }  // _08 (weak)
	virtual u8 getPlayerNo(Creature*); // _0C
	virtual u8 getPlayerNo(Vec&);      // _10

	static void newInstance_SingleGame();

	// _00     = VTBL
	// _00-_08 = ObjCalcBase
	u8 mPlayerNum; // _08
};

struct ObjCalc_2PGame : public ObjCalcBase {

	ObjCalc_2PGame() { }

	virtual ~ObjCalc_2PGame() { }             // _08 (weak)
	virtual u8 getPlayerNo(Creature*);        // _0C
	virtual u8 getPlayerNo(Vec&);             // _10
	virtual bool is1PGame() { return false; } // _18 (weak)

	static void newInstance_2PGame();

	// _00     = VTBL
	// _00-_08 = ObjCalcBase
};
} // namespace PSM

#endif
