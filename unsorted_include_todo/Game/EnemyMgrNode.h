#ifndef _GAME_ENEMYMGRNODE_H
#define _GAME_ENEMYMGRNODE_H

/*
        __vt__Q24Game12EnemyMgrNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game12EnemyMgrNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@doAnimation__Q24Game12EnemyMgrNodeFv"
        .4byte "@24@doEntry__Q24Game12EnemyMgrNodeFv"
        .4byte "@24@doSetView__Q24Game12EnemyMgrNodeFi"
        .4byte "@24@doViewCalc__Q24Game12EnemyMgrNodeFv"
        .4byte "@24@doSimulation__Q24Game12EnemyMgrNodeFf"
        .4byte "@24@doDirectDraw__Q24Game12EnemyMgrNodeFR8Graphics"
        .4byte "@24@doSimpleDraw__Q24Game12EnemyMgrNodeFP8Viewport"
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte "@24@getMatrixLoadType__Q24Game12EnemyMgrNodeFv"
        .4byte doAnimation__Q24Game12EnemyMgrNodeFv
        .4byte doEntry__Q24Game12EnemyMgrNodeFv
        .4byte doSetView__Q24Game12EnemyMgrNodeFi
        .4byte doViewCalc__Q24Game12EnemyMgrNodeFv
        .4byte doSimulation__Q24Game12EnemyMgrNodeFf
        .4byte doDirectDraw__Q24Game12EnemyMgrNodeFR8Graphics
        .4byte doSimpleDraw__Q24Game12EnemyMgrNodeFP8Viewport
        .4byte killAll__Q24Game12EnemyMgrNodeFPQ24Game15CreatureKillArg
        .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrNodeFv
        .4byte setDebugParm__Q24Game12EnemyMgrNodeFUl
        .4byte resetDebugParm__Q24Game12EnemyMgrNodeFUl
        .4byte startMovie__Q24Game12EnemyMgrNodeFv
        .4byte endMovie__Q24Game12EnemyMgrNodeFv
        .4byte getMatrixLoadType__Q24Game12EnemyMgrNodeFv
*/

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

struct GenericObjectMgr {
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
    virtual void loadResources(); // _2C
    virtual void resetMgr();      // _30
    virtual void pausable();      // _34
    virtual void frozenable();    // _38

    // _00 VTBL
};

namespace Game {
struct EnemyMgrNode : public CNode, public GenericObjectMgr {
    virtual ~EnemyMgrNode();                    // _00
    virtual void getChildCount();               // _04
    virtual void _08() = 0;                     // _08
    virtual void _0C() = 0;                     // _0C
    virtual void @24 @doAnimation();            // _10
    virtual void @24 @doEntry();                // _14
    virtual void @24 @doSetView(int);           // _18
    virtual void @24 @doViewCalc();             // _1C
    virtual void @24 @doSimulation(float);      // _20
    virtual void @24 @doDirectDraw(Graphics&);  // _24
    virtual void @24 @doSimpleDraw(Viewport*);  // _28
    virtual void loadResources();               // _2C
    virtual void resetMgr();                    // _30
    virtual void pausable();                    // _34
    virtual void frozenable();                  // _38
    virtual void @24 @getMatrixLoadType();      // _3C
    virtual void doAnimation();                 // _40
    virtual void doEntry();                     // _44
    virtual void doSetView(int);                // _48
    virtual void doViewCalc();                  // _4C
    virtual void doSimulation(float);           // _50
    virtual void doDirectDraw(Graphics&);       // _54
    virtual void doSimpleDraw(Viewport*);       // _58
    virtual void killAll(CreatureKillArg*);     // _5C
    virtual void setupSoundViewerAndBas();      // _60
    virtual void setDebugParm(unsigned long);   // _64
    virtual void resetDebugParm(unsigned long); // _68
    virtual void startMovie();                  // _6C
    virtual void endMovie();                    // _70
    virtual void getMatrixLoadType();           // _74

    // _00 VTBL
};
} // namespace Game

#endif
