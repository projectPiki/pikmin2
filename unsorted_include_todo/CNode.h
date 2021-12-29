#ifndef _CNODE_H
#define _CNODE_H

/*
    __vt__5CNode:
    .4byte 0
    .4byte 0
    .4byte __dt__5CNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
