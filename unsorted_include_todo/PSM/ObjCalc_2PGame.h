#ifndef _PSM_OBJCALC_2PGAME_H
#define _PSM_OBJCALC_2PGAME_H

namespace PSM {
struct ObjCalcBase {
	virtual void _00() = 0;     // _00
	virtual void _04() = 0;     // _04
	virtual void _08() = 0;     // _08
	virtual void setMode(Mode); // _0C

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct ObjCalc_2PGame : public ObjCalcBase {
	virtual ~ObjCalc_2PGame();           // _00
	virtual void getPlayerNo(Creature*); // _04
	virtual void getPlayerNo(Vec&);      // _08
	virtual void setMode(Mode);          // _0C
	virtual void is1PGame();             // _10

	// _00 VTBL
};
} // namespace PSM

#endif
