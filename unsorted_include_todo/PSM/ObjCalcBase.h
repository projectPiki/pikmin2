#ifndef _PSM_OBJCALCBASE_H
#define _PSM_OBJCALCBASE_H

/*
    __vt__Q23PSM11ObjCalcBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM11ObjCalcBaseFv
    .4byte 0
    .4byte 0
    .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
    .4byte is1PGame__Q23PSM11ObjCalcBaseFv
*/

namespace PSM {
struct ObjCalcBase {
	virtual ~ObjCalcBase();     // _00
	virtual void _04() = 0;     // _04
	virtual void _08() = 0;     // _08
	virtual void setMode(Mode); // _0C
	virtual void is1PGame();    // _10

	// _00 VTBL
};
} // namespace PSM

#endif
