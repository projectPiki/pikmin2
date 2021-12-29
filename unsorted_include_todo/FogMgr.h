#ifndef _FOGMGR_H
#define _FOGMGR_H

/*
    __vt__6FogMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__6FogMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct FogMgr : public CNode {
	virtual ~FogMgr();            // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
