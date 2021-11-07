#ifndef _RESOURCE_MGRCOMMAND_H
#define _RESOURCE_MGRCOMMAND_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

namespace Resource {
struct MgrCommand : public CNode {
    virtual ~MgrCommand();               // _00
    virtual void getChildCount();        // _04
    virtual void _08() = 0;              // _08
    virtual void _0C() = 0;              // _0C
    virtual void @24 @__dt();            // _10
    virtual void memoryCallBackFunc();   // _14
    virtual void dvdLoadCallBackFunc();  // _18
    virtual void aramLoadCallBackFunc(); // _1C

    // _00 VTBL
};
} // namespace Resource

#endif
