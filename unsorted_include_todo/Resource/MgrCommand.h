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
    virtual ~CNode();             // _08
    virtual void getChildCount(); // _0C

    // _00 VTBL
};

namespace Resource {
struct MgrCommand : public CNode {
    virtual ~MgrCommand();               // _08
    virtual void _10() = 0;              // _10
    virtual void _14() = 0;              // _14
    virtual void @24 @__dt();            // _18
    virtual void memoryCallBackFunc();   // _1C
    virtual void dvdLoadCallBackFunc();  // _20
    virtual void aramLoadCallBackFunc(); // _24

    // _00 VTBL
};
} // namespace Resource

#endif
