#ifndef _LOADRESOURCE_NODE_H
#define _LOADRESOURCE_NODE_H

/*
        __vt__Q212LoadResource4Node:
        .4byte 0
        .4byte 0
        .4byte __dt__Q212LoadResource4NodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q212LoadResource4NodeFv"
        .4byte 0
*/

struct CNode {
    virtual ~CNode();             // _08 (inline)
    virtual void getChildCount(); // _0C
};

namespace LoadResource {
struct Node : public CNode {
    virtual ~Node();          // _08 (inline)
    virtual void _10() = 0;   // _10
    virtual void _14() = 0;   // _14
    virtual void @24 @__dt(); // _18 (inline)
    virtual void _1C() = 0;   // _1C
};
} // namespace LoadResource

#endif
