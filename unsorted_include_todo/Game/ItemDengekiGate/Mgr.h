#ifndef _GAME_ITEMDENGEKIGATE_MGR_H
#define _GAME_ITEMDENGEKIGATE_MGR_H

/*
    __vt__Q34Game15ItemDengekiGate3Mgr:
    .4byte 0
    .4byte 0
    .4byte "doAnimation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "doEntry__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "doSetView__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fi"
    .4byte "doViewCalc__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "doSimulation__Q24Game29NodeItemMgr<Q24Game8ItemGate>Ff"
    .4byte "doDirectDraw__Q24Game29NodeItemMgr<Q24Game8ItemGate>FR8Graphics"
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__Q24Game11BaseItemMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte "initDependency__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "killAll__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
    .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
    .4byte onLoadResources__Q24Game11BaseItemMgrFv
    .4byte loadEverytime__Q24Game11BaseItemMgrFv
    .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte generatorGetID__Q34Game15ItemDengekiGate3MgrFv
    .4byte "generatorBirth__Q34Game15ItemDengekiGate3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
    .4byte generatorWrite__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParm
    .4byte generatorRead__Q34Game15ItemDengekiGate3MgrFR6StreamPQ24Game11GenItemParmUl
    .4byte generatorLocalVersion__Q34Game15ItemDengekiGate3MgrFv
    .4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
    .4byte generatorNewItemParm__Q34Game15ItemDengekiGate3MgrFv
    .4byte 0
    .4byte 0
    .4byte "@48@__dt__Q34Game15ItemDengekiGate3MgrFv"
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__27Container<Q24Game8ItemGate>FPv"
    .4byte "@48@getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
    .4byte "@48@getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "@48@getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "@48@get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
    .4byte "getAt__27Container<Q24Game8ItemGate>Fi"
    .4byte "getTo__27Container<Q24Game8ItemGate>Fv"
    .4byte "kill__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte "get__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
    .4byte "getNext__Q24Game29NodeItemMgr<Q24Game8ItemGate>FPv"
    .4byte "getStart__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte "getEnd__Q24Game29NodeItemMgr<Q24Game8ItemGate>Fv"
    .4byte __dt__Q34Game15ItemDengekiGate3MgrFv
    .4byte getCaveName__Q34Game15ItemDengekiGate3MgrFi
    .4byte getCaveID__Q34Game15ItemDengekiGate3MgrFPc
*/

namespace Game {
namespace NodeItemMgr < Game
{
	struct ItemGate >
	{
		virtual void NodeItemMgr < doAnimation();                                    // _08 (weak)
		virtual void NodeItemMgr < doEntry();                                        // _0C (weak)
		virtual void NodeItemMgr < doSetView(int);                                   // _10 (weak)
		virtual void NodeItemMgr < doViewCalc();                                     // _14 (weak)
		virtual void NodeItemMgr < doSimulation(float);                              // _18 (weak)
		virtual void NodeItemMgr < doDirectDraw(Graphics&);                          // _1C (weak)
		virtual void _20() = 0;                                                      // _20
		virtual void _24() = 0;                                                      // _24
		virtual void _28() = 0;                                                      // _28
		virtual void _2C() = 0;                                                      // _2C
		virtual void _30() = 0;                                                      // _30
		virtual void _34() = 0;                                                      // _34
		virtual void NodeItemMgr < initDependency();                                 // _38 (weak)
		virtual void NodeItemMgr < killAll();                                        // _3C (weak)
		virtual void _40() = 0;                                                      // _40
		virtual void _44() = 0;                                                      // _44
		virtual void _48() = 0;                                                      // _48
		virtual void _4C() = 0;                                                      // _4C
		virtual void _50() = 0;                                                      // _50
		virtual void _54() = 0;                                                      // _54
		virtual void generatorGetID();                                               // _58 (weak)
		virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
		virtual void generatorWrite(Stream&, GenItemParm*);                          // _60
		virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64
		virtual void generatorLocalVersion();                                        // _68 (weak)
		virtual void _6C() = 0;                                                      // _6C
		virtual void generatorNewItemParm();                                         // _70
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
		virtual void NodeItemMgr < kill(ItemGate*);                                  // _A0 (weak)
		virtual void NodeItemMgr < get(void*);                                       // _A4 (weak)
		virtual void NodeItemMgr < getNext(void*);                                   // _A8 (weak)
		virtual void NodeItemMgr < getStart();                                       // _AC (weak)
		virtual void NodeItemMgr < getEnd();                                         // _B0 (weak)
	};
} // namespace Game
} // namespace Game

struct GenericObjectMgr {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void doSimpleDraw(Viewport*); // _20 (weak)
	virtual void _24() = 0;               // _24
	virtual void resetMgr();              // _28 (weak)
	virtual void pausable();              // _2C (weak)
	virtual void frozenable();            // _30 (weak)
	virtual void getMatrixLoadType();     // _34 (weak)
};

namespace Game {
struct BaseItemMgr {
	virtual void _08() = 0;                                                      // _08
	virtual void _0C() = 0;                                                      // _0C
	virtual void _10() = 0;                                                      // _10
	virtual void _14() = 0;                                                      // _14
	virtual void _18() = 0;                                                      // _18
	virtual void _1C() = 0;                                                      // _1C
	virtual void _20() = 0;                                                      // _20
	virtual void loadResources();                                                // _24
	virtual void _28() = 0;                                                      // _28
	virtual void _2C() = 0;                                                      // _2C
	virtual void _30() = 0;                                                      // _30
	virtual void _34() = 0;                                                      // _34
	virtual void _38() = 0;                                                      // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void setup(BaseItem*);                                               // _40 (weak)
	virtual void setupSoundViewerAndBas();                                       // _44
	virtual void onLoadResources();                                              // _48 (weak)
	virtual void loadEverytime();                                                // _4C (weak)
	virtual void updateUseList(GenItemParm*, int);                               // _50
	virtual void onUpdateUseList(GenItemParm*, int);                             // _54 (weak)
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                          // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64
	virtual void generatorLocalVersion();                                        // _68 (weak)
	virtual void generatorGetShape(GenItemParm*);                                // _6C
};
} // namespace Game

struct CNode {
	virtual void _08() = 0;                                                      // _08
	virtual void _0C() = 0;                                                      // _0C
	virtual void _10() = 0;                                                      // _10
	virtual void _14() = 0;                                                      // _14
	virtual void _18() = 0;                                                      // _18
	virtual void _1C() = 0;                                                      // _1C
	virtual void _20() = 0;                                                      // _20
	virtual void _24() = 0;                                                      // _24
	virtual void _28() = 0;                                                      // _28
	virtual void _2C() = 0;                                                      // _2C
	virtual void _30() = 0;                                                      // _30
	virtual void _34() = 0;                                                      // _34
	virtual void _38() = 0;                                                      // _38
	virtual void _3C() = 0;                                                      // _3C
	virtual void _40() = 0;                                                      // _40
	virtual void _44() = 0;                                                      // _44
	virtual void _48() = 0;                                                      // _48
	virtual void _4C() = 0;                                                      // _4C
	virtual void _50() = 0;                                                      // _50
	virtual void _54() = 0;                                                      // _54
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                          // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64
	virtual void generatorLocalVersion();                                        // _68 (weak)
	virtual void _6C() = 0;                                                      // _6C
	virtual void generatorNewItemParm();                                         // _70
	virtual void _74() = 0;                                                      // _74
	virtual void _78() = 0;                                                      // _78
	virtual void _7C() = 0;                                                      // _7C
	virtual void getChildCount();                                                // _80
};

namespace Game {
namespace ItemDengekiGate {
struct Mgr : public ItemGate >, public GenericObjectMgr, public BaseItemMgr, public CNode {
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                          // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64
	virtual void generatorLocalVersion();                                        // _68 (weak)
	virtual void generatorNewItemParm();                                         // _70
	virtual void _74() = 0;                                                      // _74
	virtual void _78() = 0;                                                      // _78
	virtual ~Mgr();                                                              // _B4 (weak)
	virtual void getCaveName(int);                                               // _B8
	virtual void getCaveID(char*);                                               // _BC

	Mgr();
	void setupGate(Game::ItemGate*);
	void setupPlatform(Game::ItemGate*);
};
} // namespace ItemDengekiGate
} // namespace Game

#endif
