#ifndef _PSM_OBJBASE_H
#define _PSM_OBJBASE_H

/*
    __vt__Q23PSM7ObjBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte "@16@__dt__Q23PSM7ObjBaseFv"
    .4byte __dt__Q23PSM7ObjBaseFv
    .4byte 0
    .4byte 0
*/

namespace PSM {
struct ObjBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual ~ObjBase();     // _14 (weak)
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
};
} // namespace PSM

#endif
