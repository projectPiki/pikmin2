#ifndef _POKOINFOOWNER_H
#define _POKOINFOOWNER_H

/*
        __vt__13PokoInfoOwner:
        .4byte 0
        .4byte 0
        .4byte getCarryInfoParam__13PokoInfoOwnerFR14CarryInfoParam
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__13PokoInfoOwnerFv"
        .4byte getChildCount__5CNodeFv
        .4byte __dt__13PokoInfoOwnerFv
*/

struct CNode {
    virtual void getCarryInfoParam(CarryInfoParam&); // _08
    virtual void _0C() = 0;                          // _0C
    virtual void _10() = 0;                          // _10
    virtual void @4 @__dt();                         // _14 (inline)
    virtual void getChildCount();                    // _18
};

struct PokoInfoOwner : public CNode {
    virtual void getCarryInfoParam(CarryInfoParam&); // _08
    virtual void _0C() = 0;                          // _0C
    virtual void _10() = 0;                          // _10
    virtual void @4 @__dt();                         // _14 (inline)
    virtual ~PokoInfoOwner();                        // _1C (inline)
};

#endif
