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
	virtual ~ObjCalcBase();     // _08 (inline)
	virtual void _0C() = 0;     // _0C
	virtual void _10() = 0;     // _10
	virtual void setMode(Mode); // _14 (inline)
	virtual void is1PGame();    // _18 (inline)
};
} // namespace PSM

#endif
