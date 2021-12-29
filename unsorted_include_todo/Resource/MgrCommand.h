#ifndef _RESOURCE_MGRCOMMAND_H
#define _RESOURCE_MGRCOMMAND_H

/*
        __vt__Q28Resource10MgrCommand:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Resource10MgrCommandFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Resource10MgrCommandFv"
        .4byte memoryCallBackFunc__Q28Resource10MgrCommandFv
        .4byte dvdLoadCallBackFunc__Q28Resource10MgrCommandFv
        .4byte aramLoadCallBackFunc__Q28Resource10MgrCommandFv
*/

struct CNode {
    virtual ~CNode();             // _00
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
