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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace ARAM {
struct Node : public CNode {
	virtual ~Node(); // _08 (inline)
};
} // namespace ARAM

#endif
