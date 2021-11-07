#ifndef _LOADRESOURCE_NODE_H
#define _LOADRESOURCE_NODE_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

namespace LoadResource {
struct Node : public CNode {
    virtual ~Node();              // _00
    virtual void getChildCount(); // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void @24 @__dt();     // _10
    virtual void _14() = 0;       // _14

    // _00 VTBL
};
} // namespace LoadResource

#endif
