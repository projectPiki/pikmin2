#ifndef _GAME_FIELDVTXCOLORMGR_H
#define _GAME_FIELDVTXCOLORMGR_H

/*
        __vt__Q24Game16FieldVtxColorMgr:
        .4byte 0
        .4byte 0
        .4byte calc__Q24Game16FieldVtxColorMgrFP15J3DVertexBuffer
        .4byte __dt__Q24Game16FieldVtxColorMgrFv
        .4byte 0
        .4byte 0
        .4byte "@12@__dt__Q24Game16FieldVtxColorMgrFv"
        .4byte getChildCount__5CNodeFv
*/

struct CNode {
    virtual void calc(J3DVertexBuffer*); // _00
    virtual ~CNode();                    // _04
    virtual void _08() = 0;              // _08
    virtual void _0C() = 0;              // _0C
    virtual void @12 @__dt();            // _10
    virtual void getChildCount();        // _14

    // _00 VTBL
};

namespace Game {
struct FieldVtxColorMgr : public CNode {
    virtual void calc(J3DVertexBuffer*); // _00
    virtual ~FieldVtxColorMgr();         // _04
    virtual void _08() = 0;              // _08
    virtual void _0C() = 0;              // _0C
    virtual void @12 @__dt();            // _10
    virtual void getChildCount();        // _14

    // _00 VTBL
};
} // namespace Game

#endif
