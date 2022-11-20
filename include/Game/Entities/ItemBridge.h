#ifndef _GAME_ENTITIES_ITEMBRIDGE_H
#define _GAME_ENTITIES_ITEMBRIDGE_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"

namespace Game {
struct WayPoint;

namespace ItemBridge {

#define ITEM_BRIDGE_STATE_NORMAL (0)
#define ITEM_BRIDGE_STATE_COUNT  (1)

struct Item;

struct BridgeInitArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	// _00     = VTBL
	u16 m_bridgeType; // _04
};

struct BridgeInfo {
	BridgeInfo();

	u32 m_stageCount; // _00, unknown
	u32 _04;          // _04, unknown
	u32 _08;          // _08, unknown
	u32 _0C;          // _0C, unknown
};

struct FSM : public ItemFSM<Item> {
	virtual void init(Item*); // _08

	// _00     = VTBL
	// _00-_1C = ItemFSM
};

struct State : public ItemState<Item> {
	inline State(int stateID)
	    : ItemState(stateID)
	{
	}

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct NormalState : public State {
	inline NormalState(int stateID)
	    : State(stateID)
	{
	}

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
	u32 _10; // _10
};

struct BridgeParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> m_p000; // _E8
	};

	BridgeParms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms m_bridgeParms;
};

struct Item : public WorkItem<Item, FSM, State> {
	inline Item(int objType)
	    : WorkItem(objType)
	{ // probably needs things in here, just an initial guess
	}

	virtual void constructor();                             // _2C
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void doSave(Stream&);                           // _E0
	virtual void doLoad(Stream&);                           // _E4
	virtual void getLODCylinder(Sys::Cylinder&);            // _144
	virtual u32* getMabiki();                               // _150 (weak)
	virtual char* getCreatureName();                        // _1A8 (weak)
	virtual void makeTrMatrix();                            // _1C4 (weak)
	virtual void doAI();                                    // _1C8
	virtual void changeMaterial();                          // _1D0
	virtual void do_updateLOD();                            // _1D4
	virtual bool interactAttack(InteractAttack&);           // _1E0
	virtual bool interactBreakBridge(InteractBreakBridge&); // _1E4
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);   // _204
	virtual f32 getWorkDistance(Sys::Sphere&);              // _208
	virtual void updateBoundSphere();                       // _210
	virtual void update();                                  // _214
	virtual void onSetPosition();                           // _21C

	void setCurrStage(int);
	void createWayPoints();
	void getStagePos(int);
	void getStartPos();
	void getStageZ(int);
	void getStageWidth();
	void getBridgeZVec();
	void getBridgeXVec();
	void getBridgePos(Vector3f&, f32&, f32&);
	void workable(Vector3f&);

	// _00      = VTBL
	// _00-_1EC = WorkItem
	int _1EC;                                    // _1EC, mabiki? might be size 0x8?
	int _1F0;                                    // _1F0, unknown
	f32 _1F4;                                    // _1F4
	u8 _1F8;                                     // _1F8
	WayPoint* _1FC;                              // _1FC
	WayPoint* _200;                              // _200
	PlatInstanceAttacher m_platInstanceAttacher; // _204
	u16 m_bridgeType;                            // _214, might be define list?
	int m_stagesRemaining;                       // _218
	int m_stageCount;                            // _21C
	f32* m_stageLengthsArray;                    // _220
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);     // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)
	virtual BaseItem* birth();                                            // _BC

	BridgeInfo* getBridgeInfo(int);
	void createBridgeInfo(int);
	void setupPlatInstanceAttacher(Item*, PlatInstanceAttacher&);

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	PlatAttacher* m_platAttachers; // _88, array of 3? might be array of pointers?
	BridgeInfo* m_bridgeInfos;     // _8C, array of 3? might be array of pointers?
	BridgeParms* m_parms;          // _90
};

extern Mgr* mgr;

} // namespace ItemBridge
} // namespace Game

struct GenBridgeParm : public Game::GenItemParm {

	// _00     = VTBL
	s16 _04; // _04
};

#endif