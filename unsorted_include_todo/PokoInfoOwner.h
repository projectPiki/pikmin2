#ifndef _POKOINFOOWNER_H
#define _POKOINFOOWNER_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void getChildCount(); // _10

    // _00 VTBL
};

struct PokoInfoOwner : public CNode {
    virtual void getCarryInfoParam(CarryInfoParam&); // _00
    virtual void _04() = 0;                          // _04
    virtual void _08() = 0;                          // _08
    virtual void @4 @__dt();                         // _0C
    virtual void getChildCount();                    // _10
    virtual ~PokoInfoOwner();                        // _14

    // _00 VTBL
};

#endif
