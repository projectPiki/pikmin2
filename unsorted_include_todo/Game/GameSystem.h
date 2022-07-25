#ifndef _GAME_GAMESYSTEM_H
#define _GAME_GAMESYSTEM_H

/*
        __vt__Q24Game10GameSystem:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10GameSystemFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__29Container<16GenericObjectMgr>FPv"
        .4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getAt__29Container<16GenericObjectMgr>Fi"
        .4byte "getTo__29Container<16GenericObjectMgr>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game10GameSystemFv"
        .4byte "@28@doEntry__Q24Game10GameSystemFv"
        .4byte "@28@doSetView__Q24Game10GameSystemFi"
        .4byte "@28@doViewCalc__Q24Game10GameSystemFv"
        .4byte "@28@doSimulation__Q24Game10GameSystemFf"
        .4byte "@28@doDirectDraw__Q24Game10GameSystemFR8Graphics"
        .4byte "@28@doSimpleDraw__Q24Game10GameSystemFP8Viewport"
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte doAnimation__Q24Game10GameSystemFv
        .4byte doEntry__Q24Game10GameSystemFv
        .4byte doSetView__Q24Game10GameSystemFi
        .4byte doViewCalc__Q24Game10GameSystemFv
        .4byte doSimulation__Q24Game10GameSystemFf
        .4byte doDirectDraw__Q24Game10GameSystemFR8Graphics
        .4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte startFrame__Q24Game10GameSystemFv
        .4byte endFrame__Q24Game10GameSystemFv
        .4byte doSimpleDraw__Q24Game10GameSystemFP8Viewport
        .4byte directDraw__Q24Game10GameSystemFR8Graphics
        .4byte startFadeout__Q24Game10GameSystemFf
        .4byte startFadein__Q24Game10GameSystemFf
        .4byte startFadeoutin__Q24Game10GameSystemFf
        .4byte startFadeblack__Q24Game10GameSystemFv
        .4byte startFadewhite__Q24Game10GameSystemFv
        .4byte 0
*/

struct CNode {
    virtual ~CNode();             // _08
    virtual void getChildCount(); // _0C
};

struct Container<GenericObjectMgr> {
    virtual ~Container<GenericObjectMgr>(); // _08
    virtual void _0C() = 0;                 // _0C
    virtual void getObject(void*);          // _10 (inline)
    virtual void _14() = 0;                 // _14
    virtual void _18() = 0;                 // _18
    virtual void _1C() = 0;                 // _1C
    virtual void _20() = 0;                 // _20
    virtual void getAt(int);                // _24 (inline)
    virtual void getTo();                   // _28 (inline)
};

struct NodeObjectMgr<GenericObjectMgr> {
    virtual ~NodeObjectMgr<GenericObjectMgr>(); // _08
    virtual void _0C() = 0;                     // _0C
    virtual void _10() = 0;                     // _10
    virtual void getNext(void*);                // _14 (inline)
    virtual void getStart();                    // _18 (inline)
    virtual void getEnd();                      // _1C (inline)
    virtual void get(void*);                    // _20 (inline)
    virtual void _24() = 0;                     // _24
    virtual void _28() = 0;                     // _28
    virtual void _2C() = 0;                     // _2C
    virtual void _30() = 0;                     // _30
    virtual void @28 @doAnimation();            // _34 (inline)
    virtual void @28 @doEntry();                // _38 (inline)
    virtual void @28 @doSetView(int);           // _3C (inline)
    virtual void @28 @doViewCalc();             // _40 (inline)
    virtual void @28 @doSimulation(float);      // _44 (inline)
    virtual void @28 @doDirectDraw(Graphics&);  // _48 (inline)
    virtual void @28 @doSimpleDraw(Viewport*);  // _4C (inline)
    virtual void _50() = 0;                     // _50
    virtual void _54() = 0;                     // _54
    virtual void _58() = 0;                     // _58
    virtual void _5C() = 0;                     // _5C
    virtual void _60() = 0;                     // _60
    virtual void doAnimation();                 // _64 (inline)
    virtual void doEntry();                     // _68 (inline)
    virtual void doSetView(int);                // _6C (inline)
    virtual void doViewCalc();                  // _70 (inline)
    virtual void doSimulation(float);           // _74 (inline)
    virtual void doDirectDraw(Graphics&);       // _78 (inline)
    virtual void resetMgr();                    // _7C (inline)
};

struct GenericObjectMgr {
    virtual ~GenericObjectMgr();               // _08
    virtual void _0C() = 0;                    // _0C
    virtual void _10() = 0;                    // _10
    virtual void _14() = 0;                    // _14
    virtual void _18() = 0;                    // _18
    virtual void _1C() = 0;                    // _1C
    virtual void _20() = 0;                    // _20
    virtual void _24() = 0;                    // _24
    virtual void _28() = 0;                    // _28
    virtual void _2C() = 0;                    // _2C
    virtual void _30() = 0;                    // _30
    virtual void @28 @doAnimation();           // _34 (inline)
    virtual void @28 @doEntry();               // _38 (inline)
    virtual void @28 @doSetView(int);          // _3C (inline)
    virtual void @28 @doViewCalc();            // _40 (inline)
    virtual void @28 @doSimulation(float);     // _44 (inline)
    virtual void @28 @doDirectDraw(Graphics&); // _48 (inline)
    virtual void @28 @doSimpleDraw(Viewport*); // _4C (inline)
    virtual void loadResources();              // _50 (inline)
    virtual void _54() = 0;                    // _54
    virtual void pausable();                   // _58 (inline)
    virtual void frozenable();                 // _5C (inline)
    virtual void getMatrixLoadType();          // _60 (inline)
};

namespace Game {
struct GameSystem : public CNode,
                    public Container<GenericObjectMgr>,
                    public NodeObjectMgr<GenericObjectMgr>,
                    public GenericObjectMgr {
    virtual ~GameSystem();                     // _08
    virtual void _2C() = 0;                    // _2C
    virtual void _30() = 0;                    // _30
    virtual void @28 @doAnimation();           // _34 (inline)
    virtual void @28 @doEntry();               // _38 (inline)
    virtual void @28 @doSetView(int);          // _3C (inline)
    virtual void @28 @doViewCalc();            // _40 (inline)
    virtual void @28 @doSimulation(float);     // _44 (inline)
    virtual void @28 @doDirectDraw(Graphics&); // _48 (inline)
    virtual void @28 @doSimpleDraw(Viewport*); // _4C (inline)
    virtual void doAnimation();                // _64 (inline)
    virtual void doEntry();                    // _68 (inline)
    virtual void doSetView(int);               // _6C (inline)
    virtual void doViewCalc();                 // _70 (inline)
    virtual void doSimulation(float);          // _74 (inline)
    virtual void doDirectDraw(Graphics&);      // _78 (inline)
    virtual void startFrame();                 // _80
    virtual void endFrame();                   // _84
    virtual void doSimpleDraw(Viewport*);      // _88 (inline)
    virtual void directDraw(Graphics&);        // _8C
    virtual void startFadeout(float);          // _90
    virtual void startFadein(float);           // _94
    virtual void startFadeoutin(float);        // _98
    virtual void startFadeblack();             // _9C
    virtual void startFadewhite();             // _A0
    virtual void _A4() = 0;                    // _A4

    GameSystem(Game::BaseGameSection*);
    void init();
    void calcFrameDist(int);
    void setMoviePause(bool, char*);
    void setFrozen(bool, char*);
    void setPause(bool, char*, int);
    void paused_soft();
    void paused();
    void startPause(bool, int, char*);
    void setDrawBuffer(int);
    void getLightMgr();
    void addObjectMgr(GenericObjectMgr*);
    void detachObjectMgr(GenericObjectMgr*);
    void addObjectMgr_reuse(TObjectNode<GenericObjectMgr>*);
    void detachObjectMgr_reuse(GenericObjectMgr*);
    void isZukanMode();
};
} // namespace Game

#endif
