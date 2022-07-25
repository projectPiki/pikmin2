#ifndef _PSM_OBJCALC_SINGLEGAME_H
#define _PSM_OBJCALC_SINGLEGAME_H

/*
    __vt__Q23PSM18ObjCalc_SingleGame:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM18ObjCalc_SingleGameFv
    .4byte getPlayerNo__Q23PSM18ObjCalc_SingleGameFPQ23PSM8Creature
    .4byte getPlayerNo__Q23PSM18ObjCalc_SingleGameFR3Vec
    .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
    .4byte is1PGame__Q23PSM11ObjCalcBaseFv
*/

namespace PSM {
struct ObjCalcBase {
	virtual ~ObjCalcBase();              // _08 (weak)
	virtual void getPlayerNo(Creature*); // _0C
	virtual void getPlayerNo(Vec&);      // _10
	virtual void setMode(Mode);          // _14 (weak)
	virtual void is1PGame();             // _18 (weak)
};
} // namespace PSM

namespace PSM {
struct ObjCalc_SingleGame : public ObjCalcBase {
	virtual ~ObjCalc_SingleGame();       // _08 (weak)
	virtual void getPlayerNo(Creature*); // _0C
	virtual void getPlayerNo(Vec&);      // _10

	void newInstance_SingleGame();
};
} // namespace PSM

#endif
