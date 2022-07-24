#ifndef _VIEWPORT_H
#define _VIEWPORT_H

/*
    __vt__8Viewport:
    .4byte 0
    .4byte 0
    .4byte __dt__8ViewportFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct Viewport : public CNode {
	virtual ~Viewport(); // _08

	// _00 VTBL
};

#endif
