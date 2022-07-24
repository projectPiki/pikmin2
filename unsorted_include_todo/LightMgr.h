#ifndef _LIGHTMGR_H
#define _LIGHTMGR_H

/*
    __vt__8LightMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__8LightMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8LightMgrFv
    .4byte set__8LightMgrFR8Graphics
    .4byte set__8LightMgrFR7Matrixf
    .4byte drawDebugInfo__8LightMgrFR8Graphics
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct LightMgr : public CNode {
	virtual ~LightMgr();                   // _08
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL
};

#endif
