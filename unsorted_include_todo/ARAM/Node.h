#ifndef _ARAM_NODE_H
#define _ARAM_NODE_H

/*
    __vt__Q24ARAM4Node:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24ARAM4NodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace ARAM {
struct Node : public CNode {
	virtual ~Node();              // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace ARAM

#endif
