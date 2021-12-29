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
    virtual ~CNode();             // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void @24 @__dt();     // _0C
    virtual void getChildCount(); // _10

    // _00 VTBL
};

namespace Game {
struct THPPlayer : public CNode {
    virtual ~THPPlayer();         // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void @24 @__dt();     // _0C
    virtual void getChildCount(); // _10
    virtual void update();        // _14
    virtual void draw(Graphics&); // _18
    virtual void draw(Graphics&, long, long, unsigned long,
                      unsigned long);                // _1C
    virtual void draw(Graphics&, long, long, float); // _20

    // _00 VTBL
};
} // namespace Game

#endif
