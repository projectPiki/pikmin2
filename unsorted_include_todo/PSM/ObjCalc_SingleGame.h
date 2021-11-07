#ifndef _PSM_OBJCALC_SINGLEGAME_H
#define _PSM_OBJCALC_SINGLEGAME_H

namespace PSM {
struct ObjCalcBase {
	virtual void _00() = 0;     // _00
	virtual void _04() = 0;     // _04
	virtual void _08() = 0;     // _08
	virtual void setMode(Mode); // _0C
	virtual void is1PGame();    // _10

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct ObjCalc_SingleGame : public ObjCalcBase {
	virtual ~ObjCalc_SingleGame();       // _00
	virtual void getPlayerNo(Creature*); // _04
	virtual void getPlayerNo(Vec&);      // _08
	virtual void setMode(Mode);          // _0C
	virtual void is1PGame();             // _10

	// _00 VTBL
};
} // namespace PSM

#endif
