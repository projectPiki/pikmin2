#ifndef _GAME_PIKIMGR_H
#define _GAME_PIKIMGR_H

/*
        __vt__Q24Game7PikiMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game7PikiMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Piki>FPv"
        .4byte "getNext__27MonoObjectMgr<Q24Game4Piki>FPv"
        .4byte "getStart__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "getEnd__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "get__27MonoObjectMgr<Q24Game4Piki>FPv"
        .4byte "getAt__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "getTo__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game7PikiMgrFv"
        .4byte "@28@doEntry__Q24Game7PikiMgrFv"
        .4byte "@28@doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "@28@doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
        .4byte "@28@doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte "@28@doSimpleDraw__Q24Game7PikiMgrFP8Viewport"
        .4byte "@28@loadResources__Q24Game7PikiMgrFv"
        .4byte "@28@resetMgr__Q24Game7PikiMgrFv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte "@28@getMatrixLoadType__Q24Game7PikiMgrFv"
        .4byte doAnimation__Q24Game7PikiMgrFv
        .4byte doEntry__Q24Game7PikiMgrFv
        .4byte "doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
        .4byte "doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte birth__Q24Game7PikiMgrFv
        .4byte resetMgr__Q24Game7PikiMgrFv
        .4byte "clearMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte onAlloc__Q24Game7PikiMgrFv
        .4byte doSimpleDraw__Q24Game7PikiMgrFP8Viewport
        .4byte getMatrixLoadType__Q24Game7PikiMgrFv
        .4byte getMgrName__Q24Game7PikiMgrFv
        .4byte loadResources__Q24Game7PikiMgrFv
        .4byte loadResources__Q24Game7PikiMgrFi
*/

struct CNode {
    virtual ~CNode();             // _08 (inline)
    virtual void getChildCount(); // _0C
};

namespace Container < Game
{
    struct Piki >
    {
        virtual ~Piki > ();                        // _08 (inline)
        virtual void _0C() = 0;                    // _0C
        virtual void getObject(void*);             // _10 (inline)
        virtual void getNext(void*);               // _14 (inline)
        virtual void getStart();                   // _18 (inline)
        virtual void getEnd();                     // _1C (inline)
        virtual void get(void*);                   // _20 (inline)
        virtual void getAt(int);                   // _24 (inline)
        virtual void getTo();                      // _28 (inline)
        virtual void _2C() = 0;                    // _2C
        virtual void _30() = 0;                    // _30
        virtual void @28 @doAnimation();           // _34 (inline)
        virtual void @28 @doEntry();               // _38 (inline)
        virtual void _3C() = 0;                    // _3C
        virtual void _40() = 0;                    // _40
        virtual void _44() = 0;                    // _44
        virtual void _48() = 0;                    // _48
        virtual void @28 @doSimpleDraw(Viewport*); // _4C (inline)
        virtual void @28 @loadResources();         // _50 (inline)
        virtual void @28 @resetMgr();              // _54 (inline)
        virtual void _58() = 0;                    // _58
        virtual void _5C() = 0;                    // _5C
        virtual void @28 @getMatrixLoadType();     // _60 (inline)
        virtual void doAnimation();                // _64 (inline)
        virtual void doEntry();                    // _68 (inline)
        virtual void doSetView(int);               // _6C (inline)
        virtual void doViewCalc();                 // _70 (inline)
        virtual void doSimulation(float);          // _74 (inline)
        virtual void doDirectDraw(Graphics&);      // _78 (inline)
        virtual void birth();                      // _7C
        virtual void resetMgr();                   // _80 (inline)
        virtual void clearMgr();                   // _84 (inline)
    };
} // namespace Container<Game

struct GenericObjectMgr {
    virtual ~GenericObjectMgr();               // _08 (inline)
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
    virtual void _3C() = 0;                    // _3C
    virtual void _40() = 0;                    // _40
    virtual void _44() = 0;                    // _44
    virtual void _48() = 0;                    // _48
    virtual void @28 @doSimpleDraw(Viewport*); // _4C (inline)
    virtual void @28 @loadResources();         // _50 (inline)
    virtual void @28 @resetMgr();              // _54 (inline)
    virtual void pausable();                   // _58 (inline)
    virtual void frozenable();                 // _5C (inline)
};

namespace Game {
struct PikiMgr : public CNode, public Piki >, public GenericObjectMgr {
    virtual ~PikiMgr();                        // _08 (inline)
    virtual void _2C() = 0;                    // _2C
    virtual void _30() = 0;                    // _30
    virtual void @28 @doAnimation();           // _34 (inline)
    virtual void @28 @doEntry();               // _38 (inline)
    virtual void @28 @doSimpleDraw(Viewport*); // _4C (inline)
    virtual void @28 @loadResources();         // _50 (inline)
    virtual void @28 @resetMgr();              // _54 (inline)
    virtual void @28 @getMatrixLoadType();     // _60 (inline)
    virtual void doAnimation();                // _64 (inline)
    virtual void doEntry();                    // _68 (inline)
    virtual void birth();                      // _7C
    virtual void resetMgr();                   // _80 (inline)
    virtual void onAlloc();                    // _88
    virtual void doSimpleDraw(Viewport*);      // _8C (inline)
    virtual void getMatrixLoadType();          // _90 (inline)
    virtual void getMgrName();                 // _94 (inline)
    virtual void loadResources();              // _98 (inline)
    virtual void loadResources(int);           // _9C

    PikiMgr();
    void setupPiki(Game::Piki*);
    void load(int);
    void loadBmd(int, char*);
    void createModelCallback(SysShape::Model*);
    void createModel(int, int);
    void createLeafModel(int, int);
    void setMovieDraw(bool);
    void debugShapeDL(char*);
    void setVsXlu(int, bool);
    void setupSoundViewerAndBas();
    void getColorTransportScale(int);
    void allocStorePikmins();
    void clearStorePikmins();
    void moveAllPikmins(Vector3<float>&, float, Condition<Game::Piki>*);
    void forceEnterPikmins(unsigned char);
    void killDayEndPikmins(Game::PikiContainer&);
    void killAllPikmins();
    void caveSaveFormationPikmins(bool);
    void caveSaveAllPikmins(bool, bool);
    void saveAllPikmins(Game::PikiContainer&);
};
} // namespace Game

#endif
