#ifndef _RESOURCE_NODE_H
#define _RESOURCE_NODE_H

/*
    __vt__Q28Resource4Node:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Resource4NodeFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte "@24@__dt__Q28Resource4NodeFv"
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Resource {
struct Node : public CNode {
	virtual ~Node();        // _08 (weak)
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};
} // namespace Resource

#endif
