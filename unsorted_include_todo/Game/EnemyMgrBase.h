#ifndef _GAME_ENEMYMGRBASE_H
#define _GAME_ENEMYMGRBASE_H

/*
        __vt__Q24Game12EnemyMgrBase:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12EnemyMgrBaseFv
        .4byte doEntry__Q24Game12EnemyMgrBaseFv
        .4byte doSetView__Q24Game12EnemyMgrBaseFi
        .4byte doViewCalc__Q24Game12EnemyMgrBaseFv
        .4byte doSimulation__Q24Game12EnemyMgrBaseFf
        .4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q24Game12EnemyMgrBaseFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q24Game12EnemyMgrBaseFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
        .4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
        .4byte getGenerator__Q24Game12EnemyMgrBaseCFv
        .4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
        .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
        .4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
        .4byte startMovie__Q24Game12EnemyMgrBaseFv
        .4byte endMovie__Q24Game12EnemyMgrBaseFv
        .4byte get__Q24Game12EnemyMgrBaseFPv
        .4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0
        .4byte doAlloc__Q24Game12EnemyMgrBaseFv
        .4byte getEnemyTypeID__Q24Game12EnemyMgrBaseFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q24Game12EnemyMgrBaseFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
*/

struct GenericObjectMgr {
    virtual void doAnimation();           // _08
    virtual void doEntry();               // _0C
    virtual void doSetView(int);          // _10
    virtual void doViewCalc();            // _14
    virtual void doSimulation(float);     // _18
    virtual void doDirectDraw(Graphics&); // _1C
    virtual void doSimpleDraw(Viewport*); // _20 (inline)
    virtual void loadResources();         // _24 (inline)
    virtual void resetMgr();              // _28 (inline)
    virtual void pausable();              // _2C (inline)
    virtual void frozenable();            // _30 (inline)
    virtual void getMatrixLoadType();     // _34 (inline)
};

struct CNode {
    virtual void doAnimation();           // _08
    virtual void doEntry();               // _0C
    virtual void doSetView(int);          // _10
    virtual void doViewCalc();            // _14
    virtual void doSimulation(float);     // _18
    virtual void doDirectDraw(Graphics&); // _1C
    virtual void _20() = 0;               // _20
    virtual void _24() = 0;               // _24
    virtual void _28() = 0;               // _28
    virtual void _2C() = 0;               // _2C
    virtual void _30() = 0;               // _30
    virtual void _34() = 0;               // _34
    virtual void _38() = 0;               // _38
    virtual void _3C() = 0;               // _3C
    virtual void @4 @__dt();              // _40 (inline)
    virtual void getChildCount();         // _44
};

namespace Game {
struct EnemyMgrBase : public GenericObjectMgr, public CNode {
    virtual void doAnimation();                 // _08
    virtual void doEntry();                     // _0C
    virtual void doSetView(int);                // _10
    virtual void doViewCalc();                  // _14
    virtual void doSimulation(float);           // _18
    virtual void doDirectDraw(Graphics&);       // _1C
    virtual void _38() = 0;                     // _38
    virtual void _3C() = 0;                     // _3C
    virtual void @4 @__dt();                    // _40 (inline)
    virtual void @4 @getObject(void*);          // _48 (inline)
    virtual void @4 @getNext(void*);            // _4C (inline)
    virtual void @4 @getStart();                // _50 (inline)
    virtual void @4 @getEnd();                  // _54 (inline)
    virtual ~EnemyMgrBase();                    // _58 (inline)
    virtual void getObject(void*);              // _5C (inline)
    virtual void getNext(void*);                // _60 (inline)
    virtual void getStart();                    // _64 (inline)
    virtual void getEnd();                      // _68 (inline)
    virtual void alloc();                       // _6C
    virtual void birth(EnemyBirthArg&);         // _70
    virtual void getJ3DModelData() const;       // _74 (inline)
    virtual void getGenerator() const;          // _78 (inline)
    virtual void killAll(CreatureKillArg*);     // _7C
    virtual void setupSoundViewerAndBas();      // _80
    virtual void setDebugParm(unsigned long);   // _84
    virtual void resetDebugParm(unsigned long); // _88
    virtual void getMaxObjects() const;         // _8C (inline)
    virtual void startMovie();                  // _90
    virtual void endMovie();                    // _94
    virtual void get(void*);                    // _98 (inline)
    virtual void isAlwaysMovieActor();          // _9C (inline)
    virtual void _A0() = 0;                     // _A0
    virtual void _A4() = 0;                     // _A4
    virtual void doAlloc();                     // _A8 (inline)
    virtual void getEnemyTypeID();              // _AC (inline)
    virtual void createModel();                 // _B0
    virtual void initParms();                   // _B4
    virtual void loadResource();                // _B8
    virtual void initObjects();                 // _BC
    virtual void initStoneSetting();            // _C0
    virtual void loadModelData(JKRArchive*);    // _C4
    virtual void loadModelData();               // _C8
    virtual void loadAnimData();                // _CC
    virtual void loadTexData();                 // _D0
    virtual void doLoadBmd(void*);              // _D4
    virtual void doLoadBdl(void*);              // _D8
    virtual void initGenerator();               // _DC

    EnemyMgrBase();
    void kill(Game::EnemyBase*);
    void isValidEnemyTypeID();
    void init(Game::EnemyParmsBase*);
    void loadStoneSetting(const char*);
    void setupParms(const char*);
    void doAnimationAlwaysMovieActor();
    void doEntryAlwaysMovieActor();
    void doSimulationAlwaysMovieActor(float);
    void doDirectDrawAlwaysMovieActor(Graphics&);
};
} // namespace Game

#endif
