#ifndef _AMBIENTLIGHTOBJ_H
#define _AMBIENTLIGHTOBJ_H

/*
    __vt__15AmbientLightObj:
    .4byte 0
    .4byte 0
    .4byte __dt__15AmbientLightObjFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct AmbientLightObj : public CNode {
	virtual ~AmbientLightObj();   // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
