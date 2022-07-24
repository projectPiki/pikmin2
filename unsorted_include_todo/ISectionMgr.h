#ifndef _ISECTIONMGR_H
#define _ISECTIONMGR_H

/*
    __vt__11ISectionMgr:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte getCurrentSection__11ISectionMgrFv
*/

struct ISectionMgr {
	virtual void _08() = 0;           // _08
	virtual void getCurrentSection(); // _0C (inline)
};

#endif
