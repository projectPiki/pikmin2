#ifndef _GAME_THPPLAYER_H
#define _GAME_THPPLAYER_H

/*
        __vt__Q24Game9THPPlayer:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9THPPlayerFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q24Game9THPPlayerFv"
        .4byte getChildCount__5CNodeFv
        .4byte update__Q24Game9THPPlayerFv
        .4byte draw__Q24Game9THPPlayerFR8Graphics
        .4byte draw__Q24Game9THPPlayerFR8GraphicsllUlUl
        .4byte draw__Q24Game9THPPlayerFR8Graphicsllf
*/

struct CNode {
    virtual ~CNode();             // _08
    virtual void _0C() = 0;       // _0C
    virtual void _10() = 0;       // _10
    virtual void @24 @__dt();     // _14
    virtual void getChildCount(); // _18

    // _00 VTBL
};

namespace Game {
struct THPPlayer : public CNode {
    virtual ~THPPlayer();         // _08
    virtual void _0C() = 0;       // _0C
    virtual void _10() = 0;       // _10
    virtual void @24 @__dt();     // _14
    virtual void update();        // _1C
    virtual void draw(Graphics&); // _20
    virtual void draw(Graphics&, long, long, unsigned long,
                      unsigned long);                // _24
    virtual void draw(Graphics&, long, long, float); // _28

    // _00 VTBL
};
} // namespace Game

#endif
