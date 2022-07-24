#ifndef _GAME_TNODEITEMMGR_H
#define _GAME_TNODEITEMMGR_H

/*
        __vt__Q24Game12TNodeItemMgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12TNodeItemMgrFv
        .4byte doEntry__Q24Game12TNodeItemMgrFv
        .4byte doSetView__Q24Game12TNodeItemMgrFi
        .4byte doViewCalc__Q24Game12TNodeItemMgrFv
        .4byte doSimulation__Q24Game12TNodeItemMgrFf
        .4byte doDirectDraw__Q24Game12TNodeItemMgrFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__Q24Game11BaseItemMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte initDependency__Q24Game12TNodeItemMgrFv
        .4byte killAll__Q24Game12TNodeItemMgrFv
        .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
        .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
        .4byte onLoadResources__Q24Game11BaseItemMgrFv
        .4byte loadEverytime__Q24Game11BaseItemMgrFv
        .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
        .4byte 0
        .4byte 0
        .4byte
   generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q24Game11BaseItemMgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q24Game11BaseItemMgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q24Game12TNodeItemMgrFv" .4byte getChildCount__5CNodeFv .4byte
   "getObject__27Container<Q24Game8BaseItem>FPv" .4byte
   "@48@getNext__Q24Game12TNodeItemMgrFPv" .4byte
   "@48@getStart__Q24Game12TNodeItemMgrFv" .4byte
   "@48@getEnd__Q24Game12TNodeItemMgrFv" .4byte
   "@48@get__Q24Game12TNodeItemMgrFPv" .4byte
   "getAt__27Container<Q24Game8BaseItem>Fi" .4byte
   "getTo__27Container<Q24Game8BaseItem>Fv" .4byte 0 .4byte
   kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem .4byte
   get__Q24Game12TNodeItemMgrFPv .4byte getNext__Q24Game12TNodeItemMgrFPv .4byte
   getStart__Q24Game12TNodeItemMgrFv .4byte getEnd__Q24Game12TNodeItemMgrFv
        .4byte __dt__Q24Game12TNodeItemMgrFv
*/

struct GenericObjectMgr {
    virtual void doAnimation();           // _08 (inline)
    virtual void doEntry();               // _0C (inline)
    virtual void doSetView(int);          // _10 (inline)
    virtual void doViewCalc();            // _14 (inline)
    virtual void doSimulation(float);     // _18 (inline)
    virtual void doDirectDraw(Graphics&); // _1C (inline)
    virtual void doSimpleDraw(Viewport*); // _20 (inline)
    virtual void _24() = 0;               // _24
    virtual void resetMgr();              // _28 (inline)
    virtual void pausable();              // _2C (inline)
    virtual void frozenable();            // _30 (inline)
    virtual void getMatrixLoadType();     // _34 (inline)
};

namespace Game {
struct BaseItemMgr {
    virtual void doAnimation();                         // _08 (inline)
    virtual void doEntry();                             // _0C (inline)
    virtual void doSetView(int);                        // _10 (inline)
    virtual void doViewCalc();                          // _14 (inline)
    virtual void doSimulation(float);                   // _18 (inline)
    virtual void doDirectDraw(Graphics&);               // _1C (inline)
    virtual void _20() = 0;                             // _20
    virtual void loadResources();                       // _24
    virtual void _28() = 0;                             // _28
    virtual void _2C() = 0;                             // _2C
    virtual void _30() = 0;                             // _30
    virtual void _34() = 0;                             // _34
    virtual void initDependency();                      // _38
    virtual void killAll();                             // _3C
    virtual void setup(BaseItem*);                      // _40 (inline)
    virtual void setupSoundViewerAndBas();              // _44
    virtual void onLoadResources();                     // _48 (inline)
    virtual void loadEverytime();                       // _4C (inline)
    virtual void updateUseList(GenItemParm*, int);      // _50
    virtual void onUpdateUseList(GenItemParm*, int);    // _54 (inline)
    virtual void _58() = 0;                             // _58
    virtual void _5C() = 0;                             // _5C
    virtual void generatorWrite(Stream&, GenItemParm*); // _60 (inline)
    virtual void generatorRead(Stream&, GenItemParm*,
                               unsigned long);    // _64 (inline)
    virtual void generatorLocalVersion();         // _68 (inline)
    virtual void generatorGetShape(GenItemParm*); // _6C
    virtual void generatorNewItemParm();          // _70
};
} // namespace Game

struct CNode {
    virtual void doAnimation();           // _08 (inline)
    virtual void doEntry();               // _0C (inline)
    virtual void doSetView(int);          // _10 (inline)
    virtual void doViewCalc();            // _14 (inline)
    virtual void doSimulation(float);     // _18 (inline)
    virtual void doDirectDraw(Graphics&); // _1C (inline)
    virtual void _20() = 0;               // _20
    virtual void _24() = 0;               // _24
    virtual void _28() = 0;               // _28
    virtual void _2C() = 0;               // _2C
    virtual void _30() = 0;               // _30
    virtual void _34() = 0;               // _34
    virtual void initDependency();        // _38
    virtual void killAll();               // _3C
    virtual void _40() = 0;               // _40
    virtual void _44() = 0;               // _44
    virtual void _48() = 0;               // _48
    virtual void _4C() = 0;               // _4C
    virtual void _50() = 0;               // _50
    virtual void _54() = 0;               // _54
    virtual void _58() = 0;               // _58
    virtual void _5C() = 0;               // _5C
    virtual void _60() = 0;               // _60
    virtual void _64() = 0;               // _64
    virtual void _68() = 0;               // _68
    virtual void _6C() = 0;               // _6C
    virtual void _70() = 0;               // _70
    virtual void _74() = 0;               // _74
    virtual void _78() = 0;               // _78
    virtual void @48 @__dt();             // _7C (inline)
    virtual void getChildCount();         // _80
};

namespace Container < Game
{
    struct BaseItem >
    {
        virtual void doAnimation();           // _08 (inline)
        virtual void doEntry();               // _0C (inline)
        virtual void doSetView(int);          // _10 (inline)
        virtual void doViewCalc();            // _14 (inline)
        virtual void doSimulation(float);     // _18 (inline)
        virtual void doDirectDraw(Graphics&); // _1C (inline)
        virtual void _20() = 0;               // _20
        virtual void _24() = 0;               // _24
        virtual void _28() = 0;               // _28
        virtual void _2C() = 0;               // _2C
        virtual void _30() = 0;               // _30
        virtual void _34() = 0;               // _34
        virtual void initDependency();        // _38
        virtual void killAll();               // _3C
        virtual void _40() = 0;               // _40
        virtual void _44() = 0;               // _44
        virtual void _48() = 0;               // _48
        virtual void _4C() = 0;               // _4C
        virtual void _50() = 0;               // _50
        virtual void _54() = 0;               // _54
        virtual void _58() = 0;               // _58
        virtual void _5C() = 0;               // _5C
        virtual void _60() = 0;               // _60
        virtual void _64() = 0;               // _64
        virtual void _68() = 0;               // _68
        virtual void _6C() = 0;               // _6C
        virtual void _70() = 0;               // _70
        virtual void _74() = 0;               // _74
        virtual void _78() = 0;               // _78
        virtual void @48 @__dt();             // _7C (inline)
        virtual void _80() = 0;               // _80
        virtual void getObject(void*);        // _84 (inline)
        virtual void @48 @getNext(void*);     // _88 (inline)
        virtual void @48 @getStart();         // _8C (inline)
        virtual void @48 @getEnd();           // _90 (inline)
        virtual void @48 @get(void*);         // _94 (inline)
        virtual void getAt(int);              // _98 (inline)
        virtual void getTo();                 // _9C (inline)
    };
} // namespace Container<Game

namespace Game {
struct TNodeItemMgr : public GenericObjectMgr,
                      public BaseItemMgr,
                      public CNode,
                      public BaseItem > {
    virtual void doAnimation();           // _08 (inline)
    virtual void doEntry();               // _0C (inline)
    virtual void doSetView(int);          // _10 (inline)
    virtual void doViewCalc();            // _14 (inline)
    virtual void doSimulation(float);     // _18 (inline)
    virtual void doDirectDraw(Graphics&); // _1C (inline)
    virtual void initDependency();        // _38
    virtual void killAll();               // _3C
    virtual void _58() = 0;               // _58
    virtual void _5C() = 0;               // _5C
    virtual void _74() = 0;               // _74
    virtual void _78() = 0;               // _78
    virtual void @48 @__dt();             // _7C (inline)
    virtual void @48 @getNext(void*);     // _88 (inline)
    virtual void @48 @getStart();         // _8C (inline)
    virtual void @48 @getEnd();           // _90 (inline)
    virtual void @48 @get(void*);         // _94 (inline)
    virtual void _A0() = 0;               // _A0
    virtual void kill(BaseItem*);         // _A4 (inline)
    virtual void get(void*);              // _A8 (inline)
    virtual void getNext(void*);          // _AC (inline)
    virtual void getStart();              // _B0 (inline)
    virtual void getEnd();                // _B4 (inline)
    virtual ~TNodeItemMgr();              // _B8 (inline)

    TNodeItemMgr();
    void birth();
    void entry(Game::BaseItem*);
};
} // namespace Game

#endif
