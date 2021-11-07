#ifndef _SCREEN_IOBJBASE_H
#define _SCREEN_IOBJBASE_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

namespace Screen {
struct IObjBase : public CNode {
    virtual ~IObjBase();          // _00
    virtual void getChildCount(); // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void @24 @__dt();     // _10
    virtual void _14() = 0;       // _14
    virtual void _18() = 0;       // _18
    virtual void _1C() = 0;       // _1C
    virtual void _20() = 0;       // _20
    virtual void _24() = 0;       // _24
    virtual void _28() = 0;       // _28
    virtual void _2C() = 0;       // _2C
    virtual void _30() = 0;       // _30
    virtual void _34() = 0;       // _34
    virtual void _38() = 0;       // _38
    virtual void _3C() = 0;       // _3C

    // _00 VTBL
};
} // namespace Screen

#endif
