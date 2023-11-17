#ifndef _GAME_ENTITIES_ITEMDOWNFLOOR_H
#define _GAME_ENTITIES_ITEMDOWNFLOOR_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"

namespace Game {
namespace ItemBarrel {
struct Item;
}

namespace ItemDownFloor {
struct Item;

#define DFTYPE_PaperBag  (0)
#define DFTYPE_DownBlock (1)
#define DFTYPE_UpBlock   (2)

#define DFMODEL_SmallBlock (0)
#define DFMODEL_LargeBlock (1)
#define DFMODEL_PaperBag   (2)

enum StateID {
	DOWNFLOOR_Wait    = 0,
	DOWNFLOOR_Damaged = 1,
	DOWNFLOOR_Down    = 2,
	DOWNFLOOR_Up      = 3,
	DOWNFLOOR_Dead    = 4,
	DOWNFLOOR_StateCount, // 5
};

struct InitArg : public CreatureInitArg {
	// _00 = VTBL
	f32 mFaceDir; // _04
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

	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&) { } // _24 (weak)
	virtual void onPlat(Item*) { }                                // _34 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
	char* mName; // _0C, unused but educated guess
};

struct DamagedState : public State {
	inline DamagedState()
	    : State(DOWNFLOOR_Damaged)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_10 = State
	bool mIsReady; // _10, set when onKeyEvent is called
};

struct DeadState : public State {
	inline DeadState()
	    : State(DOWNFLOOR_Dead)
	{
	}

	virtual void init(Item*, StateArg*) { } // _08
	virtual void exec(Item*) { }            // _0C
	virtual void cleanup(Item*) { }         // _10
	virtual void onPlat(Item*) { }          // _34

	// _00     = VTBL
	// _00-_10 = State
};

struct DownState : public State {
	inline DownState()
	    : State(DOWNFLOOR_Down)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_10 = State
};

struct UpState : public State {
	inline UpState()
	    : State(DOWNFLOOR_Up)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_10 = State
};

struct WaitState : public State {
	inline WaitState()
	    : State(DOWNFLOOR_Wait)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_10 = State
};

struct Item : public FSMItem<Item, FSM, State>, CarryInfoOwner {
	Item(); // unused/inlined

	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void doSave(Stream& stream);                      // _E0
	virtual void doLoad(Stream& stream);                      // _E4
	virtual void platCallback(PlatEvent& event);              // _F0
	virtual void initDependency();                            // _1BC
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _220 (weak)
	virtual void getCarryInfoParam(CarryInfoParam&);          // _230
	virtual void makeTrMatrix() { }                           // _1C4 (weak)
	virtual f32 getFaceDir() { return mFaceDir; }             // _64 (weak)
	virtual char* getCreatureName() { return "Downfloor"; }   // _1A8 (weak)

	void startDamageMotion();
	void startDownMotion();
	void startUpMotion();

	// unused/inlined:
	void initMotion();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	// _1E0-_1E4 = CarryInfoOwner
	PlatInstance* mPlatInstance;   // _1E4
	int mBagMaxWeight;             // _1E8, weight required to crush bag
	int mWeightBuffer;             // _1EC, weight during state changes
	int mCurrentWeight;            // _1F0, current weight on block/bag
	Creature* mCurrentOccupant;    // _1F4, latest creature to land on bag/block
	CarryInfoList* mCarryInfoList; // _1F8
	bool mIsPressed;               // _1FC
	f32 mFaceDir;                  // _200
	u16 mModelType;                // _204, 0 = small seesaw, 1 = large seesaw, 2 = bag
	TSoundEvent mSoundEvent;       // _208
	WayPoint* mWayPoint;           // _214
	Item* mOtherSeesaw;            // _218
	ID32 mID;                      // _21C
	u8 mDownFloorType;             // _228, 0 = bag, 1 or 2 = seesaw (1 = down initially, 2 = up initially)
	bool mIsDemoBlock;             // _229, only ever set to true by RoomMapMgr::placeObjects
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual char* getCaveName(int);                                       // _BC
	virtual int getCaveID(char*);                                         // _C0
	virtual BaseItem* doNew() { return new Item; }                        // _A0 (weak)
	virtual u32 generatorGetID() { return 'dwfl'; }                       // _58 (weak)
	virtual u32 generatorLocalVersion() { return '0002'; }                // _68 (weak)

	void setupDownFloor(Item*);
	void setupPlatform(Item*);
	BaseItem* birth();

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	Platform** mPlatforms; // _88
};

extern Mgr* mgr;

} // namespace ItemDownFloor
} // namespace Game

struct GenDownFloorParm : public Game::GenItemParm {
	inline GenDownFloorParm()
	{
		mBagWeight     = 10;
		mModelType     = DFMODEL_SmallBlock;
		mDownFloorType = DFTYPE_PaperBag;
		mId.setID('none');
	}

	// _00     = VTBL
	s16 mBagWeight;     // _04
	u16 mModelType;     // _06
	s16 mDownFloorType; // _08
	ID32 mId;           // _0C
};

#endif
