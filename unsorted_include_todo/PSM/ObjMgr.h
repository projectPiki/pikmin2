#ifndef _PSM_OBJMGR_H
#define _PSM_OBJMGR_H

/*
    __vt__Q23PSM6ObjMgr:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte "@12@__dt__Q23PSM6ObjMgrFv"
    .4byte 0
    .4byte 0
    .4byte "@16@__dt__Q23PSM6ObjMgrFv"
    .4byte __dt__Q23PSM6ObjMgrFv
*/

namespace PSM {
struct ObjMgr {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _14() = 0; // _14
	virtual void _18() = 0; // _18
	virtual ~ObjMgr();      // _20 (weak)

	void frameEnd_onPlaySe();
};
} // namespace PSM

#endif
