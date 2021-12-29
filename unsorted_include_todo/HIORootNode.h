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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct HIORootNode : public CNode {
	virtual ~HIORootNode();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
