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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct FogMgr : public CNode {
	virtual ~FogMgr(); // _08 (weak)
};

#endif
