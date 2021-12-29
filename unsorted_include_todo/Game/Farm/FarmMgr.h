#ifndef _GAME_FARM_FARMMGR_H
#define _GAME_FARM_FARMMGR_H

/*
        __vt__Q34Game4Farm7FarmMgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q34Game4Farm7FarmMgrFv
        .4byte doEntry__Q34Game4Farm7FarmMgrFv
        .4byte doSetView__Q34Game4Farm7FarmMgrFi
        .4byte doViewCalc__Q34Game4Farm7FarmMgrFv
        .4byte doSimulation__Q34Game4Farm7FarmMgrFf
        .4byte doDirectDraw__Q34Game4Farm7FarmMgrFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q34Game4Farm7FarmMgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte doDebugDraw__Q34Game4Farm7FarmMgrFR8Graphics
        .4byte __dt__Q34Game4Farm7FarmMgrFv
        .4byte 0
*/

struct GenericObjectMgr {
    virtual void _00() = 0;               // _00
    virtual void _04() = 0;               // _04
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void doSimpleDraw(Viewport*); // _18
    virtual void loadResources();         // _1C
    virtual void resetMgr();              // _20
    virtual void pausable();              // _24
    virtual void frozenable();            // _28
    virtual void getMatrixLoadType();     // _2C

    // _00 VTBL
};

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void _04() = 0;       // _04
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
    virtual void getChildCount(); // _3C

    // _00 VTBL
};

namespace Game {
namespace Farm {
    struct FarmMgr : public GenericObjectMgr, public CNode {
        virtual void doAnimation();           // _00
        virtual void doEntry();               // _04
        virtual void doSetView(int);          // _08
        virtual void doViewCalc();            // _0C
        virtual void doSimulation(float);     // _10
        virtual void doDirectDraw(Graphics&); // _14
        virtual void doSimpleDraw(Viewport*); // _18
        virtual void loadResources();         // _1C
        virtual void resetMgr();              // _20
        virtual void pausable();              // _24
        virtual void frozenable();            // _28
        virtual void getMatrixLoadType();     // _2C
        virtual void _30() = 0;               // _30
        virtual void _34() = 0;               // _34
        virtual void @4 @__dt();              // _38
        virtual void getChildCount();         // _3C
        virtual void doDebugDraw(Graphics&);  // _40
        virtual ~FarmMgr();                   // _44
        virtual void _48() = 0;               // _48

        // _00 VTBL
    };
} // namespace Farm
} // namespace Game

#endif
