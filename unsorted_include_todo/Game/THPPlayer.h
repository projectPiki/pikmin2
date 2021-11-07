#ifndef _GAME_THPPLAYER_H
#define _GAME_THPPLAYER_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
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
