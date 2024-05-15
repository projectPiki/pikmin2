#ifndef _GAME_ENTITIES_ITEMPIKIHEAD_H
#define _GAME_ENTITIES_ITEMPIKIHEAD_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "efx/TPk.h"

namespace Game {
namespace ItemPikihead {
struct Item;

enum StateID {
	PIKIHEAD_Fall   = 0,
	PIKIHEAD_Bury   = 1,
	PIKIHEAD_Wait   = 2,
	PIKIHEAD_Tane   = 3,
	PIKIHEAD_Hatuga = 4,
	PIKIHEAD_Grow   = 5,
	PIKIHEAD_Siore  = 6,
	PIKIHEAD_StateCount, // 7
};

struct InitArg : public ItemInitArg {

	inline InitArg()
	{
		mPikminType      = (EPikiKind)-1;
		mVelocity        = Vector3f::zero;
		mIsAlreadyBuried = false;
		mHeadType        = Leaf;
		mAutopluckTimer  = -1.0f;
	}

	inline InitArg(EPikiKind pikiKind, Vector3f& vel)
	{
		mPikminType      = pikiKind;
		mVelocity        = vel;
		mIsAlreadyBuried = false;
		mHeadType        = Leaf;
		mAutopluckTimer  = -1.0f;
	}

	inline InitArg(EPikiKind pikiKind, Vector3f& vel, bool isAlreadyBuried, int headType, f32 p5)
	{
		mPikminType      = pikiKind;
		mVelocity        = vel;
		mIsAlreadyBuried = isAlreadyBuried;
		mHeadType        = headType;
		mAutopluckTimer  = -1.0f;
	}

	virtual const char* getName() { return "ItemPikiHead::InitArg"; } // _08 (weak)

	// _00     = VTBL
	EPikiKind mPikminType; // _04
	Vector3f mVelocity;    // _08
	bool mIsAlreadyBuried; // _14
	int mHeadType;         // _18
	f32 mAutopluckTimer;   // _1C
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

	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
	char* mName; // _0C, unused but educated guess
};

struct BuryState : public State {
	inline BuryState()
	    : State(PIKIHEAD_Bury)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
	bool mAnimDone; // _10
	f32 mTimer;     // _14
};

struct FallState : public State {
	inline FallState()
	    : State(PIKIHEAD_Fall)
	{
	}

	virtual void init(Item* item, StateArg* settings);              // _08
	virtual void exec(Item* item);                                  // _0C
	virtual void cleanup(Item* item);                               // _10
	virtual void onBounce(Item*, Sys::Triangle*);                   // _28
	virtual void onPlatCollision(Item* item, PlatEvent& platEvent); // _2C

	// _00     = VTBL
	// _00-_10 = State
	f32 mHorizontalDrag; // _10
	f32 mVerticalDrag;   // _14
};

struct GrowState : public State {
	inline GrowState()
	    : State(PIKIHEAD_Grow)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
};

struct HatugaState : public State {
	inline HatugaState()
	    : State(PIKIHEAD_Hatuga)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
};

struct SioreState : public State {
	inline SioreState()
	    : State(PIKIHEAD_Siore)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
	f32 mTimer;     // _10
	bool mAnimDone; // _14
};

struct TaneState : public State {
	inline TaneState()
	    : State(PIKIHEAD_Tane)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
	bool mAnimDone; // _10
	f32 mTimer;     // _14
};

struct WaitState : public State {
	inline WaitState()
	    : State(PIKIHEAD_Wait)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	f32 mTimer; // _10
};

struct Item : public FSMItem<Item, FSM, State> {
	Item();

	virtual void onInit(CreatureInitArg* settings);              // _30
	virtual void onKill(CreatureKillArg* settings);              // _34
	virtual void doSimulation(f32);                              // _4C
	virtual void getLODSphere(Sys::Sphere& lodSphere);           // _140
	virtual char* getCreatureName() { return "Pikihead"; }       // _1A8 (weak)
	virtual void makeTrMatrix();                                 // _1C4
	virtual void doAI();                                         // _1C8
	virtual void changeMaterial();                               // _1D0
	virtual bool interactFue(InteractFue&);                      // _1F4
	virtual void updateBoundSphere();                            // _210
	virtual void onSetPosition();                                // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& keyEvent); // _220

	bool needSave();
	void cacheSave(Stream& output);
	void cacheLoad(Stream& input);
	bool canPullout();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	efx::TPkEffectTane* mEfxTane; // _1E0
	f32 mAutopluckedTimer;        // _1E4
	Vector3f mEfxPosition;        // _1E8
	u16 mColor;                   // _1F4
	u16 mHeadType;                // _1F6
};

struct Mgr : public FixedSizeItemMgr<Item> {
	Mgr();

	virtual void doSimpleDraw(Viewport*);                                             // _20
	virtual void onLoadResources();                                                   // _48
	virtual u32 generatorGetID() { return 'pkhd'; }                                   // _58 (weak)
	virtual Item* generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm); // _5C
	virtual void onCreateModel(SysShape::Model* model);                               // _A0
	virtual Item* birth();                                                            // _A4
	virtual Item* get(void*);                                                         // _AC (weak, thunk at _94)
	virtual void* getNext(void*);                                                     // _B0 (weak, thunk at _88)
	virtual void* getStart();                                                         // _B4 (weak, thunk at _8C)
	virtual void* getEnd();                                                           // _B8 (weak, thunk at _90)

	// _00     = VTBL
	// _00-_7C = FixedSizeItemMgr
};

extern Mgr* mgr;

} // namespace ItemPikihead
} // namespace Game

#endif
