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
    virtual ~CNode();             // _08 (inline)
    virtual void getChildCount(); // _0C
};

struct GenericObjectMgr {
    virtual ~GenericObjectMgr();               // _08 (inline)
    virtual void _0C() = 0;                    // _0C
    virtual void _10() = 0;                    // _10
    virtual void _14() = 0;                    // _14
    virtual void @24 @doAnimation();           // _18 (inline)
    virtual void @24 @doEntry();               // _1C (inline)
    virtual void @24 @doSetView(int);          // _20 (inline)
    virtual void @24 @doViewCalc();            // _24 (inline)
    virtual void @24 @doSimulation(float);     // _28 (inline)
    virtual void @24 @doDirectDraw(Graphics&); // _2C (inline)
    virtual void @24 @doSimpleDraw(Viewport*); // _30 (inline)
    virtual void loadResources();              // _34 (inline)
    virtual void resetMgr();                   // _38 (inline)
    virtual void pausable();                   // _3C (inline)
    virtual void frozenable();                 // _40 (inline)
};

namespace Game {
struct EnemyMgrNode : public CNode, public GenericObjectMgr {
    virtual ~EnemyMgrNode();                    // _08 (inline)
    virtual void _10() = 0;                     // _10
    virtual void _14() = 0;                     // _14
    virtual void @24 @doAnimation();            // _18 (inline)
    virtual void @24 @doEntry();                // _1C (inline)
    virtual void @24 @doSetView(int);           // _20 (inline)
    virtual void @24 @doViewCalc();             // _24 (inline)
    virtual void @24 @doSimulation(float);      // _28 (inline)
    virtual void @24 @doDirectDraw(Graphics&);  // _2C (inline)
    virtual void @24 @doSimpleDraw(Viewport*);  // _30 (inline)
    virtual void @24 @getMatrixLoadType();      // _44 (inline)
    virtual void doAnimation();                 // _48 (inline)
    virtual void doEntry();                     // _4C (inline)
    virtual void doSetView(int);                // _50 (inline)
    virtual void doViewCalc();                  // _54 (inline)
    virtual void doSimulation(float);           // _58 (inline)
    virtual void doDirectDraw(Graphics&);       // _5C (inline)
    virtual void doSimpleDraw(Viewport*);       // _60 (inline)
    virtual void killAll(CreatureKillArg*);     // _64 (inline)
    virtual void setupSoundViewerAndBas();      // _68 (inline)
    virtual void setDebugParm(unsigned long);   // _6C (inline)
    virtual void resetDebugParm(unsigned long); // _70 (inline)
    virtual void startMovie();                  // _74 (inline)
    virtual void endMovie();                    // _78 (inline)
    virtual void getMatrixLoadType();           // _7C (inline)
};
} // namespace Game

#endif
