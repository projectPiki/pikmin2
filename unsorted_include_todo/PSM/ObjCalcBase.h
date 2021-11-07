#ifndef _PSM_OBJCALCBASE_H
#define _PSM_OBJCALCBASE_H

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
