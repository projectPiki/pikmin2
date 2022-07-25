#ifndef _HIOROOTNODE_H
#define _HIOROOTNODE_H

/*
    __vt__11HIORootNode:
    .4byte 0
    .4byte 0
    .4byte __dt__11HIORootNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct HIORootNode : public CNode {
	virtual ~HIORootNode(); // _08 (weak)
};

#endif
