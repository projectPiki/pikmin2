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
    virtual void calc(J3DVertexBuffer*); // _08
    virtual ~CNode();                    // _0C
    virtual void _10() = 0;              // _10
    virtual void _14() = 0;              // _14
    virtual void @12 @__dt();            // _18
    virtual void getChildCount();        // _1C

    // _00 VTBL
};

namespace Game {
struct FieldVtxColorMgr : public CNode {
    virtual void calc(J3DVertexBuffer*); // _08
    virtual ~FieldVtxColorMgr();         // _0C
    virtual void _10() = 0;              // _10
    virtual void _14() = 0;              // _14
    virtual void @12 @__dt();            // _18

    // _00 VTBL
};
} // namespace Game

#endif
