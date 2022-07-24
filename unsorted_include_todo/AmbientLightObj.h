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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct AmbientLightObj : public CNode {
	virtual ~AmbientLightObj(); // _08

	// _00 VTBL
};

#endif
