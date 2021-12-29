#ifndef _ISECTIONMGR_H
#define _ISECTIONMGR_H

/*
    __vt__11ISectionMgr:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte getCurrentSection__11ISectionMgrFv
    .4byte 0
*/

struct ISectionMgr {
	virtual void _00() = 0;           // _00
	virtual void getCurrentSection(); // _04
	virtual void _08() = 0;           // _08

	// _00 VTBL
};

#endif
