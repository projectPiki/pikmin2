#ifndef _PSM_OBJCALC_2PGAME_H
#define _PSM_OBJCALC_2PGAME_H

/*
    __vt__Q23PSM14ObjCalc_2PGame:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM14ObjCalc_2PGameFv
    .4byte getPlayerNo__Q23PSM14ObjCalc_2PGameFPQ23PSM8Creature
    .4byte getPlayerNo__Q23PSM14ObjCalc_2PGameFR3Vec
    .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
    .4byte is1PGame__Q23PSM14ObjCalc_2PGameFv
*/

namespace PSM {
struct ObjCalcBase {
	virtual ~ObjCalcBase();              // _08
	virtual void getPlayerNo(Creature*); // _0C
	virtual void getPlayerNo(Vec&);      // _10
	virtual void setMode(Mode);          // _14

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct ObjCalc_2PGame : public ObjCalcBase {
	virtual ~ObjCalc_2PGame();           // _08
	virtual void getPlayerNo(Creature*); // _0C
	virtual void getPlayerNo(Vec&);      // _10
	virtual void is1PGame();             // _18

	// _00 VTBL
};
} // namespace PSM

#endif
