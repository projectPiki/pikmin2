#ifndef _GAME_ENTITIES_ITEMBRIDGE_H
#define _GAME_ENTITIES_ITEMBRIDGE_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"

namespace Game {
struct WayPoint;

namespace ItemBridge {
struct Item;

#define BRIDGETYPE_Short  (0)
#define BRIDGETYPE_Sloped (1)
#define BRIDGETYPE_Long   (2)
#define BRIDGETYPE_COUNT  (3)

enum StateID {
	BRIDGE_Normal = 0,
	BRIDGE_StateCount, // 1
};

struct BridgeInitArg : public CreatureInitArg {
	virtual const char* getName() { return "BridgeInitArg"; } // _08 (weak)

	// _00     = VTBL
	u16 mBridgeType; // _04
};

struct BridgeInfo {
	BridgeInfo()
	    : mStageCount(0)
	    , mJointCount(0)
	    , mJointIndices(nullptr)
	    , mFinalJointIdx(-1)
	{
	}

	int mStageCount;    // _00
	int mJointCount;    // _04
	u16* mJointIndices; // _08
	int mFinalJointIdx; // _0C
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
		inline Parms()
		    : Parameters(nullptr, "Bridge::Parms")
		    , mHealth(this, 'p000', "ライフ", 100.0f, 0.0f, 40000.0f) // 'life'
		{
		}

		Parm<f32> mHealth; // _E8, p000
	};

	BridgeParms()
	    : CreatureParms()
	    , mBridgeParms()
	{
	}

	virtual void read(Stream& input) { mBridgeParms.read(input); } // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mBridgeParms; // _DC
};

struct Item : public WorkItem<Item, FSM, State> {
	Item();

	virtual void constructor();                             // _2C
	virtual void onInit(CreatureInitArg*);                  // _30
	virtual void doDirectDraw(Graphics&);                   // _50
	virtual void doSave(Stream& stream);                    // _E0
	virtual void doLoad(Stream& stream);                    // _E4
	virtual void getLODCylinder(Sys::Cylinder&);            // _144
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
	virtual void makeTrMatrix() { }                         // _1C4 (weak)
	virtual char* getCreatureName() { return "Bridge"; }    // _1A8 (weak)
	virtual Mabiki* getMabiki() { return &mMabiki; }        // _150 (weak)

	void setCurrStage(int);
	void createWayPoints();
	Vector3f getStagePos(int);
	Vector3f getStartPos();
	f32 getStageZ(int);
	f32 getStageWidth();
	Vector3f getBridgeZVec();
	Vector3f getBridgeXVec();
	void getBridgePos(Vector3f&, f32&, f32&);
	bool workable(Vector3f&);

	// unused/inlined:
	f32 getStageDepth();
	f32 getWorkRadius();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	Mabiki mMabiki;                             // _1EC
	f32 mFaceDir;                               // _1F4
	u8 _1F8;                                    // _1F8
	WayPoint* mBridgeWP;                        // _1FC, follows bridge as it unfurls
	WayPoint* mEndWP;                           // _200, waypoint on other side of bridge
	PlatInstanceAttacher mPlatInstanceAttacher; // _204
	u16 mBridgeType;                            // _214, see BRIDGETYPE defines
	int mCurrStageIdx;                          // _218
	int mStageCount;                            // _21C
	f32* mStageHealths;                         // _220
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual BaseItem* doNew() { return new Item(); }                      // _A0 (weak)
	virtual u32 generatorGetID() { return 'brdg'; }                       // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion() { return '0001'; }                // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* birth();                                            // _BC

	BridgeInfo* getBridgeInfo(int);
	void createBridgeInfo(int);
	void setupPlatInstanceAttacher(Item*, PlatInstanceAttacher&);

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	PlatAttacher** mPlatAttachers; // _88, array of 3? might be array of pointers?
	BridgeInfo* mBridgeInfos;      // _8C, array of 3? might be array of pointers?
	BridgeParms* mParms;           // _90
};

extern Mgr* mgr;

} // namespace ItemBridge
} // namespace Game

struct GenBridgeParm : public Game::GenItemParm {
	inline GenBridgeParm()
	    : GenItemParm()
	    , mBridgeType(BRIDGETYPE_Short)
	{
	}

	// _00     = VTBL
	u16 mBridgeType; // _04
};

#endif
