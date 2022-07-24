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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

struct Viewport : public CNode {
	virtual ~Viewport(); // _08 (inline)
};

#endif
