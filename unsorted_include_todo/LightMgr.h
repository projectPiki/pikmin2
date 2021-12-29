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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct LightMgr : public CNode {
	virtual ~LightMgr();                   // _00
	virtual void getChildCount();          // _04
	virtual void update();                 // _08
	virtual void set(Graphics&);           // _0C
	virtual void set(Matrixf&);            // _10
	virtual void drawDebugInfo(Graphics&); // _14

	// _00 VTBL
};

#endif
