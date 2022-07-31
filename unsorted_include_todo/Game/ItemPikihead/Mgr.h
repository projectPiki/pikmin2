#ifndef _GAME_ITEMPIKIHEAD_MGR_H
#define _GAME_ITEMPIKIHEAD_MGR_H

/*
    __vt__Q34Game12ItemPikihead3Mgr:
    .4byte 0
    .4byte 0
    .4byte "doAnimation__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "doEntry__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "doSetView__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fi"
    .4byte "doViewCalc__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "doSimulation__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Ff"
    .4byte "doDirectDraw__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FR8Graphics"
    .4byte doSimpleDraw__Q34Game12ItemPikihead3MgrFP8Viewport
    .4byte loadResources__Q24Game11BaseItemMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte "initDependency__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "killAll__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
    .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
    .4byte onLoadResources__Q34Game12ItemPikihead3MgrFv
    .4byte loadEverytime__Q24Game11BaseItemMgrFv
    .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte generatorGetID__Q34Game12ItemPikihead3MgrFv
    .4byte "generatorBirth__Q34Game12ItemPikihead3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
    .4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
    .4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
    .4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
    .4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
    .4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
    .4byte 0
    .4byte 0
    .4byte "@48@__dt__Q34Game12ItemPikihead3MgrFv"
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__37Container<Q34Game12ItemPikihead4Item>FPv"
    .4byte "@48@getNext__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPv"
    .4byte "@48@getStart__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "@48@getEnd__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "@48@get__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPv"
    .4byte "getAt__37Container<Q34Game12ItemPikihead4Item>Fi"
    .4byte "getTo__37Container<Q34Game12ItemPikihead4Item>Fv"
    .4byte onCreateModel__Q34Game12ItemPikihead3MgrFPQ28SysShape5Model
    .4byte birth__Q34Game12ItemPikihead3MgrFv
    .4byte "kill__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4Item"
    .4byte "get__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPv"
    .4byte "getNext__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPv"
    .4byte "getStart__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte "getEnd__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
    .4byte __dt__Q34Game12ItemPikihead3MgrFv
*/

namespace Game {
struct FixedSizeItemMgr<Game::ItemPikihead::Item> {
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::doAnimation();             // _08 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::doEntry();                 // _0C (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::doSetView(int);            // _10 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::doViewCalc();              // _14 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::doSimulation(float);       // _18 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::doDirectDraw(Graphics&);   // _1C (weak)
	virtual void doSimpleDraw(Viewport*);                                         // _20
	virtual void _24() = 0;                                                       // _24
	virtual void _28() = 0;                                                       // _28
	virtual void _2C() = 0;                                                       // _2C
	virtual void _30() = 0;                                                       // _30
	virtual void _34() = 0;                                                       // _34
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::initDependency();          // _38 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::killAll();                 // _3C (weak)
	virtual void _40() = 0;                                                       // _40
	virtual void _44() = 0;                                                       // _44
	virtual void onLoadResources();                                               // _48
	virtual void _4C() = 0;                                                       // _4C
	virtual void _50() = 0;                                                       // _50
	virtual void _54() = 0;                                                       // _54
	virtual void generatorGetID();                                                // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*);  // _5C
	virtual void _60() = 0;                                                       // _60
	virtual void _64() = 0;                                                       // _64
	virtual void _68() = 0;                                                       // _68
	virtual void _6C() = 0;                                                       // _6C
	virtual void _70() = 0;                                                       // _70
	virtual void _74() = 0;                                                       // _74
	virtual void _78() = 0;                                                       // _78
	virtual void _7C() = 0;                                                       // _7C
	virtual void _80() = 0;                                                       // _80
	virtual void _84() = 0;                                                       // _84
	virtual void _88() = 0;                                                       // _88
	virtual void _8C() = 0;                                                       // _8C
	virtual void _90() = 0;                                                       // _90
	virtual void _94() = 0;                                                       // _94
	virtual void _98() = 0;                                                       // _98
	virtual void _9C() = 0;                                                       // _9C
	virtual void onCreateModel(SysShape::Model*);                                 // _A0
	virtual void birth();                                                         // _A4
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::kill(ItemPikihead::Item*); // _A8 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::get(void*);                // _AC (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::getNext(void*);            // _B0 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::getStart();                // _B4 (weak)
	virtual void FixedSizeItemMgr<ItemPikihead::Item>::getEnd();                  // _B8 (weak)
};
} // namespace Game

namespace Game {
struct BaseItemMgr {
	virtual void _08() = 0;                                                      // _08
	virtual void _0C() = 0;                                                      // _0C
	virtual void _10() = 0;                                                      // _10
	virtual void _14() = 0;                                                      // _14
	virtual void _18() = 0;                                                      // _18
	virtual void _1C() = 0;                                                      // _1C
	virtual void doSimpleDraw(Viewport*);                                        // _20
	virtual void loadResources();                                                // _24
	virtual void _28() = 0;                                                      // _28
	virtual void _2C() = 0;                                                      // _2C
	virtual void _30() = 0;                                                      // _30
	virtual void _34() = 0;                                                      // _34
	virtual void _38() = 0;                                                      // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void setup(BaseItem*);                                               // _40 (weak)
	virtual void setupSoundViewerAndBas();                                       // _44
	virtual void onLoadResources();                                              // _48
	virtual void loadEverytime();                                                // _4C (weak)
	virtual void updateUseList(GenItemParm*, int);                               // _50
	virtual void onUpdateUseList(GenItemParm*, int);                             // _54 (weak)
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                          // _60 (weak)
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64 (weak)
	virtual void generatorLocalVersion();                                        // _68 (weak)
	virtual void generatorGetShape(GenItemParm*);                                // _6C
	virtual void generatorNewItemParm();                                         // _70
};
} // namespace Game

struct GenericObjectMgr {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void doSimpleDraw(Viewport*); // _20
	virtual void _24() = 0;               // _24
	virtual void resetMgr();              // _28 (weak)
	virtual void pausable();              // _2C (weak)
	virtual void frozenable();            // _30 (weak)
	virtual void getMatrixLoadType();     // _34 (weak)
};

struct CNode {
	virtual void _08() = 0;                                                      // _08
	virtual void _0C() = 0;                                                      // _0C
	virtual void _10() = 0;                                                      // _10
	virtual void _14() = 0;                                                      // _14
	virtual void _18() = 0;                                                      // _18
	virtual void _1C() = 0;                                                      // _1C
	virtual void doSimpleDraw(Viewport*);                                        // _20
	virtual void _24() = 0;                                                      // _24
	virtual void _28() = 0;                                                      // _28
	virtual void _2C() = 0;                                                      // _2C
	virtual void _30() = 0;                                                      // _30
	virtual void _34() = 0;                                                      // _34
	virtual void _38() = 0;                                                      // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void _40() = 0;                                                      // _40
	virtual void _44() = 0;                                                      // _44
	virtual void onLoadResources();                                              // _48
	virtual void _4C() = 0;                                                      // _4C
	virtual void _50() = 0;                                                      // _50
	virtual void _54() = 0;                                                      // _54
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void _60() = 0;                                                      // _60
	virtual void _64() = 0;                                                      // _64
	virtual void _68() = 0;                                                      // _68
	virtual void _6C() = 0;                                                      // _6C
	virtual void _70() = 0;                                                      // _70
	virtual void _74() = 0;                                                      // _74
	virtual void _78() = 0;                                                      // _78
	virtual void _7C() = 0;                                                      // _7C
	virtual void getChildCount();                                                // _80
};

struct Container<Game::ItemPikihead::Item> {
	virtual void _08() = 0;                                                      // _08
	virtual void _0C() = 0;                                                      // _0C
	virtual void _10() = 0;                                                      // _10
	virtual void _14() = 0;                                                      // _14
	virtual void _18() = 0;                                                      // _18
	virtual void _1C() = 0;                                                      // _1C
	virtual void doSimpleDraw(Viewport*);                                        // _20
	virtual void _24() = 0;                                                      // _24
	virtual void _28() = 0;                                                      // _28
	virtual void _2C() = 0;                                                      // _2C
	virtual void _30() = 0;                                                      // _30
	virtual void _34() = 0;                                                      // _34
	virtual void _38() = 0;                                                      // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void _40() = 0;                                                      // _40
	virtual void _44() = 0;                                                      // _44
	virtual void onLoadResources();                                              // _48
	virtual void _4C() = 0;                                                      // _4C
	virtual void _50() = 0;                                                      // _50
	virtual void _54() = 0;                                                      // _54
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void _60() = 0;                                                      // _60
	virtual void _64() = 0;                                                      // _64
	virtual void _68() = 0;                                                      // _68
	virtual void _6C() = 0;                                                      // _6C
	virtual void _70() = 0;                                                      // _70
	virtual void _74() = 0;                                                      // _74
	virtual void _78() = 0;                                                      // _78
	virtual void _7C() = 0;                                                      // _7C
	virtual void _80() = 0;                                                      // _80
	virtual void getObject(void*);                                               // _84 (weak)
	virtual void _88() = 0;                                                      // _88
	virtual void _8C() = 0;                                                      // _8C
	virtual void _90() = 0;                                                      // _90
	virtual void _94() = 0;                                                      // _94
	virtual void getAt(int);                                                     // _98 (weak)
	virtual void getTo();                                                        // _9C (weak)
};

namespace Game {
namespace ItemPikihead {
struct Mgr : public FixedSizeItemMgr<Game::ItemPikihead::Item>,
             public BaseItemMgr,
             public GenericObjectMgr,
             public CNode,
             public Container<Game::ItemPikihead::Item> {
	virtual void doSimpleDraw(Viewport*);                                        // _20
	virtual void onLoadResources();                                              // _48
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void _74() = 0;                                                      // _74
	virtual void _78() = 0;                                                      // _78
	virtual void onCreateModel(SysShape::Model*);                                // _A0
	virtual void birth();                                                        // _A4
	virtual ~Mgr();                                                              // _BC (weak)

	Mgr();
};
} // namespace ItemPikihead
} // namespace Game

#endif
