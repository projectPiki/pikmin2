#ifndef _GAME_IENEMYMGRBASE_H
#define _GAME_IENEMYMGRBASE_H

/*
        __vt__Q24Game13IEnemyMgrBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q24Game13IEnemyMgrBaseFv"
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game13IEnemyMgrBaseFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
*/

struct GenericObjectMgr {
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void _18() = 0;               // _18
    virtual void _1C() = 0;               // _1C
    virtual void doSimpleDraw(Viewport*); // _20 (inline)
    virtual void loadResources();         // _24 (inline)
    virtual void resetMgr();              // _28 (inline)
    virtual void pausable();              // _2C (inline)
    virtual void frozenable();            // _30 (inline)
    virtual void getMatrixLoadType();     // _34 (inline)
};

struct CNode {
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void _10() = 0;       // _10
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
    virtual void @4 @__dt();      // _40 (inline)
    virtual void getChildCount(); // _44
};

namespace Game {
struct IEnemyMgrBase : public GenericObjectMgr, public CNode {
    virtual void _08() = 0;   // _08
    virtual void _0C() = 0;   // _0C
    virtual void _10() = 0;   // _10
    virtual void _14() = 0;   // _14
    virtual void _18() = 0;   // _18
    virtual void _1C() = 0;   // _1C
    virtual void _38() = 0;   // _38
    virtual void _3C() = 0;   // _3C
    virtual void @4 @__dt();  // _40 (inline)
    virtual void _48() = 0;   // _48
    virtual void _4C() = 0;   // _4C
    virtual void _50() = 0;   // _50
    virtual void _54() = 0;   // _54
    virtual ~IEnemyMgrBase(); // _58 (inline)
    virtual void _5C() = 0;   // _5C
    virtual void _60() = 0;   // _60
    virtual void _64() = 0;   // _64
    virtual void _68() = 0;   // _68
    virtual void _6C() = 0;   // _6C
    virtual void _70() = 0;   // _70
    virtual void _74() = 0;   // _74
    virtual void _78() = 0;   // _78
    virtual void _7C() = 0;   // _7C
    virtual void _80() = 0;   // _80
    virtual void _84() = 0;   // _84
    virtual void _88() = 0;   // _88
    virtual void _8C() = 0;   // _8C
    virtual void _90() = 0;   // _90
    virtual void _94() = 0;   // _94
};
} // namespace Game

#endif
