#ifndef _GAME_PELLETFRUIT_MGR_H
#define _GAME_PELLETFRUIT_MGR_H

/*
    __vt__Q34Game11PelletFruit3Mgr:
    .4byte 0
    .4byte 0
    .4byte "doAnimation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "doEntry__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "doSetView__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
    .4byte "doViewCalc__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "doSimulation__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Ff"
    .4byte "doDirectDraw__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FR8Graphics"
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__16GenericObjectMgrFv
    .4byte "resetMgr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte "resetMgrAndResources__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "birth__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "kill__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
    .4byte setupResources__Q34Game11PelletFruit3MgrFv
    .4byte "birthFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game12PelletConfig"
    .4byte "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fi"
    .4byte "setComeAlive__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
    .4byte onCreateModel__Q34Game11PelletFruit3MgrFPQ28SysShape5Model
    .4byte getMgrName__Q34Game11PelletFruit3MgrFv
    .4byte getMgrID__Q34Game11PelletFruit3MgrFv
    .4byte "setRevival__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
    .4byte "setFromTeki__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
    .4byte "getFlag__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPQ24Game6Pellet"
    .4byte createShape__Q24Game13BasePelletMgrFii
    .4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
    .4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
    .4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
    .4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
    .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
    .4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
    .4byte "getObjectPtr__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
    .4byte "getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
    .4byte "getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte 0
    .4byte 0
    .4byte "@84@__dt__Q34Game11PelletFruit3MgrFv"
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__38Container<Q34Game11PelletFruit6Object>FPv"
    .4byte "@84@getNext__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
    .4byte "@84@getStart__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "@84@getEnd__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>Fv"
    .4byte "@84@get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
    .4byte "getAt__38Container<Q34Game11PelletFruit6Object>Fi"
    .4byte "getTo__38Container<Q34Game11PelletFruit6Object>Fv"
    .4byte "get__Q24Game47FixedSizePelletMgr<Q34Game11PelletFruit6Object>FPv"
    .4byte __dt__Q34Game11PelletFruit3MgrFv
*/

namespace Game {
struct FixedSizePelletMgr<Game::PelletFruit::Object> {
	virtual void FixedSizePelletMgr<PelletFruit::Object>::doAnimation();                // _08 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::doEntry();                    // _0C (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::doSetView(int);               // _10 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::doViewCalc();                 // _14 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::doSimulation(float);          // _18 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::doDirectDraw(Graphics&);      // _1C (weak)
	virtual void _20() = 0;                                                             // _20
	virtual void _24() = 0;                                                             // _24
	virtual void FixedSizePelletMgr<PelletFruit::Object>::resetMgr();                   // _28 (weak)
	virtual void _2C() = 0;                                                             // _2C
	virtual void _30() = 0;                                                             // _30
	virtual void _34() = 0;                                                             // _34
	virtual void FixedSizePelletMgr<PelletFruit::Object>::resetMgrAndResources();       // _38 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::birth();                      // _3C (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::kill(Pellet*);                // _40 (weak)
	virtual void setupResources();                                                      // _44
	virtual void FixedSizePelletMgr<PelletFruit::Object>::birthFromTeki(PelletConfig*); // _48 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::setComeAlive(int);            // _4C (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::setComeAlive(Pellet*);        // _50 (weak)
	virtual void onCreateModel(SysShape::Model*);                                       // _54
	virtual void getMgrName();                                                          // _58 (weak)
	virtual void getMgrID();                                                            // _5C (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::setRevival(Pellet*);          // _60 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::setFromTeki(Pellet*);         // _64 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::getFlag(Pellet*);             // _68 (weak)
	virtual void _6C() = 0;                                                             // _6C
	virtual void _70() = 0;                                                             // _70
	virtual void _74() = 0;                                                             // _74
	virtual void _78() = 0;                                                             // _78
	virtual void _7C() = 0;                                                             // _7C
	virtual void _80() = 0;                                                             // _80
	virtual void _84() = 0;                                                             // _84
	virtual void FixedSizePelletMgr<PelletFruit::Object>::getObjectPtr(void*);          // _88 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::getNext(void*);               // _8C (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::getStart();                   // _90 (weak)
	virtual void FixedSizePelletMgr<PelletFruit::Object>::getEnd();                     // _94 (weak)
	virtual void _98() = 0;                                                             // _98
	virtual void _9C() = 0;                                                             // _9C
	virtual void _A0() = 0;                                                             // _A0
	virtual void _A4() = 0;                                                             // _A4
	virtual void _A8() = 0;                                                             // _A8
	virtual void _AC() = 0;                                                             // _AC
	virtual void _B0() = 0;                                                             // _B0
	virtual void _B4() = 0;                                                             // _B4
	virtual void _B8() = 0;                                                             // _B8
	virtual void _BC() = 0;                                                             // _BC
	virtual void _C0() = 0;                                                             // _C0
	virtual void FixedSizePelletMgr<PelletFruit::Object>::get(void*);                   // _C4 (weak)
};
} // namespace Game

struct GenericObjectMgr {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void doSimpleDraw(Viewport*); // _20 (weak)
	virtual void loadResources();         // _24 (weak)
	virtual void _28() = 0;               // _28
	virtual void pausable();              // _2C (weak)
	virtual void frozenable();            // _30 (weak)
	virtual void getMatrixLoadType();     // _34 (weak)
};

namespace Game {
struct BasePelletMgr {
	virtual void _08() = 0;                                                        // _08
	virtual void _0C() = 0;                                                        // _0C
	virtual void _10() = 0;                                                        // _10
	virtual void _14() = 0;                                                        // _14
	virtual void _18() = 0;                                                        // _18
	virtual void _1C() = 0;                                                        // _1C
	virtual void _20() = 0;                                                        // _20
	virtual void _24() = 0;                                                        // _24
	virtual void _28() = 0;                                                        // _28
	virtual void _2C() = 0;                                                        // _2C
	virtual void _30() = 0;                                                        // _30
	virtual void _34() = 0;                                                        // _34
	virtual void _38() = 0;                                                        // _38
	virtual void _3C() = 0;                                                        // _3C
	virtual void _40() = 0;                                                        // _40
	virtual void setupResources();                                                 // _44
	virtual void _48() = 0;                                                        // _48
	virtual void _4C() = 0;                                                        // _4C
	virtual void _50() = 0;                                                        // _50
	virtual void onCreateModel(SysShape::Model*);                                  // _54
	virtual void getMgrName();                                                     // _58 (weak)
	virtual void getMgrID();                                                       // _5C (weak)
	virtual void _60() = 0;                                                        // _60
	virtual void _64() = 0;                                                        // _64
	virtual void _68() = 0;                                                        // _68
	virtual void createShape(int, int);                                            // _6C
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenPelletParm*); // _70 (weak)
	virtual void generatorWrite(Stream&, GenPelletParm*);                          // _74 (weak)
	virtual void generatorRead(Stream&, GenPelletParm*, unsigned long);            // _78 (weak)
	virtual void generatorLocalVersion();                                          // _7C (weak)
	virtual void generatorGetShape(GenPelletParm*);                                // _80
	virtual void generatorNewPelletParm();                                         // _84
};
} // namespace Game

struct CNode {
	virtual void _08() = 0;                       // _08
	virtual void _0C() = 0;                       // _0C
	virtual void _10() = 0;                       // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
	virtual void _1C() = 0;                       // _1C
	virtual void _20() = 0;                       // _20
	virtual void _24() = 0;                       // _24
	virtual void _28() = 0;                       // _28
	virtual void _2C() = 0;                       // _2C
	virtual void _30() = 0;                       // _30
	virtual void _34() = 0;                       // _34
	virtual void _38() = 0;                       // _38
	virtual void _3C() = 0;                       // _3C
	virtual void _40() = 0;                       // _40
	virtual void setupResources();                // _44
	virtual void _48() = 0;                       // _48
	virtual void _4C() = 0;                       // _4C
	virtual void _50() = 0;                       // _50
	virtual void onCreateModel(SysShape::Model*); // _54
	virtual void getMgrName();                    // _58 (weak)
	virtual void getMgrID();                      // _5C (weak)
	virtual void _60() = 0;                       // _60
	virtual void _64() = 0;                       // _64
	virtual void _68() = 0;                       // _68
	virtual void _6C() = 0;                       // _6C
	virtual void _70() = 0;                       // _70
	virtual void _74() = 0;                       // _74
	virtual void _78() = 0;                       // _78
	virtual void _7C() = 0;                       // _7C
	virtual void _80() = 0;                       // _80
	virtual void _84() = 0;                       // _84
	virtual void _88() = 0;                       // _88
	virtual void _8C() = 0;                       // _8C
	virtual void _90() = 0;                       // _90
	virtual void _94() = 0;                       // _94
	virtual void _98() = 0;                       // _98
	virtual void _9C() = 0;                       // _9C
	virtual void _A0() = 0;                       // _A0
	virtual void getChildCount();                 // _A4
};

struct Container<Game::PelletFruit::Object> {
	virtual void _08() = 0;                       // _08
	virtual void _0C() = 0;                       // _0C
	virtual void _10() = 0;                       // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
	virtual void _1C() = 0;                       // _1C
	virtual void _20() = 0;                       // _20
	virtual void _24() = 0;                       // _24
	virtual void _28() = 0;                       // _28
	virtual void _2C() = 0;                       // _2C
	virtual void _30() = 0;                       // _30
	virtual void _34() = 0;                       // _34
	virtual void _38() = 0;                       // _38
	virtual void _3C() = 0;                       // _3C
	virtual void _40() = 0;                       // _40
	virtual void setupResources();                // _44
	virtual void _48() = 0;                       // _48
	virtual void _4C() = 0;                       // _4C
	virtual void _50() = 0;                       // _50
	virtual void onCreateModel(SysShape::Model*); // _54
	virtual void getMgrName();                    // _58 (weak)
	virtual void getMgrID();                      // _5C (weak)
	virtual void _60() = 0;                       // _60
	virtual void _64() = 0;                       // _64
	virtual void _68() = 0;                       // _68
	virtual void _6C() = 0;                       // _6C
	virtual void _70() = 0;                       // _70
	virtual void _74() = 0;                       // _74
	virtual void _78() = 0;                       // _78
	virtual void _7C() = 0;                       // _7C
	virtual void _80() = 0;                       // _80
	virtual void _84() = 0;                       // _84
	virtual void _88() = 0;                       // _88
	virtual void _8C() = 0;                       // _8C
	virtual void _90() = 0;                       // _90
	virtual void _94() = 0;                       // _94
	virtual void _98() = 0;                       // _98
	virtual void _9C() = 0;                       // _9C
	virtual void _A0() = 0;                       // _A0
	virtual void _A4() = 0;                       // _A4
	virtual void getObject(void*);                // _A8 (weak)
	virtual void _AC() = 0;                       // _AC
	virtual void _B0() = 0;                       // _B0
	virtual void _B4() = 0;                       // _B4
	virtual void _B8() = 0;                       // _B8
	virtual void getAt(int);                      // _BC (weak)
	virtual void getTo();                         // _C0 (weak)
};

namespace Game {
namespace PelletFruit {
struct Mgr : public FixedSizePelletMgr<Game::PelletFruit::Object>,
             public GenericObjectMgr,
             public BasePelletMgr,
             public CNode,
             public Container<Game::PelletFruit::Object> {
	virtual void setupResources();                // _44
	virtual void onCreateModel(SysShape::Model*); // _54
	virtual void getMgrName();                    // _58 (weak)
	virtual void getMgrID();                      // _5C (weak)
	virtual void _98() = 0;                       // _98
	virtual void _9C() = 0;                       // _9C
	virtual ~Mgr();                               // _C8 (weak)

	Mgr();
};
} // namespace PelletFruit
} // namespace Game

#endif
