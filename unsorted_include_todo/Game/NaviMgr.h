#ifndef _GAME_NAVIMGR_H
#define _GAME_NAVIMGR_H

/*
        __vt__Q24Game7NaviMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game7NaviMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Navi>FPv"
        .4byte "getNext__27MonoObjectMgr<Q24Game4Navi>FPv"
        .4byte "getStart__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "getEnd__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "get__27MonoObjectMgr<Q24Game4Navi>FPv"
        .4byte "getAt__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "getTo__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game7NaviMgrFv"
        .4byte "@28@doEntry__Q24Game7NaviMgrFv"
        .4byte "@28@doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "@28@doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doSimulation__Q24Game7NaviMgrFf"
        .4byte "@28@doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte "@28@loadResources__Q24Game7NaviMgrFv"
        .4byte "@28@resetMgr__Q24Game7NaviMgrFv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte "@28@frozenable__Q24Game7NaviMgrFv"
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte doAnimation__Q24Game7NaviMgrFv
        .4byte doEntry__Q24Game7NaviMgrFv
        .4byte "doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte doSimulation__Q24Game7NaviMgrFf
        .4byte "doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte birth__Q24Game7NaviMgrFv
        .4byte resetMgr__Q24Game7NaviMgrFv
        .4byte "clearMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "onAlloc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte 0
        .4byte 0
        .4byte "@48@__dt__Q24Game7NaviMgrFv"
        .4byte killAll__Q24Game7NaviMgrFv
        .4byte getMgrName__Q24Game7NaviMgrFv
        .4byte frozenable__Q24Game7NaviMgrFv
        .4byte loadResources__Q24Game7NaviMgrFv
*/

struct CNode {
    virtual ~CNode();             // _08 (inline)
    virtual void getChildCount(); // _0C
};

namespace Container < Game
{
    struct Navi >
    {
        virtual ~Navi > ();                    // _08 (inline)
        virtual void _0C() = 0;                // _0C
        virtual void getObject(void*);         // _10 (inline)
        virtual void getNext(void*);           // _14 (inline)
        virtual void getStart();               // _18 (inline)
        virtual void getEnd();                 // _1C (inline)
        virtual void get(void*);               // _20 (inline)
        virtual void getAt(int);               // _24 (inline)
        virtual void getTo();                  // _28 (inline)
        virtual void _2C() = 0;                // _2C
        virtual void _30() = 0;                // _30
        virtual void @28 @doAnimation();       // _34 (inline)
        virtual void @28 @doEntry();           // _38 (inline)
        virtual void _3C() = 0;                // _3C
        virtual void _40() = 0;                // _40
        virtual void @28 @doSimulation(float); // _44 (inline)
        virtual void _48() = 0;                // _48
        virtual void _4C() = 0;                // _4C
        virtual void @28 @loadResources();     // _50 (inline)
        virtual void @28 @resetMgr();          // _54 (inline)
        virtual void _58() = 0;                // _58
        virtual void @28 @frozenable();        // _5C (inline)
        virtual void _60() = 0;                // _60
        virtual void doAnimation();            // _64 (inline)
        virtual void doEntry();                // _68 (inline)
        virtual void doSetView(int);           // _6C (inline)
        virtual void doViewCalc();             // _70 (inline)
        virtual void doSimulation(float);      // _74 (inline)
        virtual void doDirectDraw(Graphics&);  // _78 (inline)
        virtual void birth();                  // _7C
        virtual void resetMgr();               // _80 (inline)
        virtual void clearMgr();               // _84 (inline)
        virtual void onAlloc();                // _88 (inline)
    };
} // namespace Container<Game

struct GenericObjectMgr {
    virtual ~GenericObjectMgr();           // _08 (inline)
    virtual void _0C() = 0;                // _0C
    virtual void _10() = 0;                // _10
    virtual void _14() = 0;                // _14
    virtual void _18() = 0;                // _18
    virtual void _1C() = 0;                // _1C
    virtual void _20() = 0;                // _20
    virtual void _24() = 0;                // _24
    virtual void _28() = 0;                // _28
    virtual void _2C() = 0;                // _2C
    virtual void _30() = 0;                // _30
    virtual void @28 @doAnimation();       // _34 (inline)
    virtual void @28 @doEntry();           // _38 (inline)
    virtual void _3C() = 0;                // _3C
    virtual void _40() = 0;                // _40
    virtual void @28 @doSimulation(float); // _44 (inline)
    virtual void _48() = 0;                // _48
    virtual void doSimpleDraw(Viewport*);  // _4C (inline)
    virtual void @28 @loadResources();     // _50 (inline)
    virtual void @28 @resetMgr();          // _54 (inline)
    virtual void pausable();               // _58 (inline)
    virtual void @28 @frozenable();        // _5C (inline)
    virtual void getMatrixLoadType();      // _60 (inline)
};

namespace Game {
struct NaviMgr : public CNode, public Navi >, public GenericObjectMgr {
    virtual ~NaviMgr();                    // _08 (inline)
    virtual void _2C() = 0;                // _2C
    virtual void _30() = 0;                // _30
    virtual void @28 @doAnimation();       // _34 (inline)
    virtual void @28 @doEntry();           // _38 (inline)
    virtual void @28 @doSimulation(float); // _44 (inline)
    virtual void @28 @loadResources();     // _50 (inline)
    virtual void @28 @resetMgr();          // _54 (inline)
    virtual void @28 @frozenable();        // _5C (inline)
    virtual void doAnimation();            // _64 (inline)
    virtual void doEntry();                // _68 (inline)
    virtual void doSimulation(float);      // _74 (inline)
    virtual void birth();                  // _7C
    virtual void resetMgr();               // _80 (inline)
    virtual void _8C() = 0;                // _8C
    virtual void _90() = 0;                // _90
    virtual void @48 @__dt();              // _94 (inline)
    virtual void killAll();                // _98
    virtual void getMgrName();             // _9C (inline)
    virtual void frozenable();             // _A0 (inline)
    virtual void loadResources();          // _A4 (inline)

    NaviMgr();
    void createPSMDirectorUpdator();
    void setupNavi(Game::Navi*);
    void getActiveNavi();
    void load();
    void createModel(int);
    void loadResources_float();
    void getAliveCount();
    void clearDeadCount();
    void informOrimaDead(int);
    void getDeadOrima(int);
    void getAliveOrima(int);
    void setMovieDraw(bool);
    void setupSoundViewerAndBas();
};
} // namespace Game

#endif
