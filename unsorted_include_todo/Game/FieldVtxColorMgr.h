#ifndef _GAME_FIELDVTXCOLORMGR_H
#define _GAME_FIELDVTXCOLORMGR_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void _10() = 0;       // _10
    virtual void getChildCount(); // _14

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
