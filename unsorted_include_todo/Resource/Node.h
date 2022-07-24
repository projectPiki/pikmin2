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
    virtual ~CNode();             // _08
    virtual void getChildCount(); // _0C

    // _00 VTBL
};

namespace Resource {
struct Node : public CNode {
    virtual ~Node();          // _08
    virtual void _10() = 0;   // _10
    virtual void _14() = 0;   // _14
    virtual void @24 @__dt(); // _18

    // _00 VTBL
};
} // namespace Resource

#endif
