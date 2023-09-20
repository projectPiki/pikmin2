#ifndef _GAME_ENTITIES_ITEMPIKIHEAD_H
#define _GAME_ENTITIES_ITEMPIKIHEAD_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "efx/TPk.h"

namespace Game {
namespace ItemPikihead {
struct Item;

enum cState {
	PIKIHEADSTATE_Fall = 0,
	PIKIHEADSTATE_Bury,
	PIKIHEADSTATE_Wait,
	PIKIHEADSTATE_Tane,
	PIKIHEADSTATE_Hatuga,
	PIKIHEADSTATE_Grow,
	PIKIHEADSTATE_Siore,
	PIKIHEADSTATE_COUNT
};

struct InitArg : public ItemInitArg {
	inline InitArg(EPikiKind pikiKind, Vector3f& vec)
	{
		mPikminType = pikiKind;
		_08         = vec;
		_14         = 0;
		_18         = 0;
		_1C         = -1.0f;
	}

	inline InitArg(EPikiKind pikiKind, Vector3f& vec, u8 p3, int p4, f32 p5)
	{
		mPikminType = pikiKind;
		_08         = vec;
		_14         = p3;
		_18         = p4;
		_1C         = -1.0f;
	}

	virtual const char* getName() { return "ItemPikiHead::InitArg"; } // _08 (weak)

	// _00     = VTBL
	EPikiKind mPikminType; // _04, enum?
	Vector3f _08;          // _08
	u8 _14;                // _14
	int _18;               // _18
	f32 _1C;               // _1C
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
};

struct BuryState : public State {
	inline BuryState()
	    : State(PIKIHEADSTATE_Bury)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C;        // _0C
	bool mAnimDone; // _10
	f32 mTimer;     // _14
};

struct FallState : public State {
	inline FallState()
	    : State(PIKIHEADSTATE_Fall)
	{
	}

	virtual void init(Item* item, StateArg* arg);                   // _08
	virtual void exec(Item* item);                                  // _0C
	virtual void cleanup(Item* item);                               // _10
	virtual void onBounce(Item*, Sys::Triangle*);                   // _28
	virtual void onPlatCollision(Item* item, PlatEvent& platEvent); // _2C

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
};

struct GrowState : public State {
	inline GrowState()
	    : State(PIKIHEADSTATE_Grow)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct HatugaState : public State {
	inline HatugaState()
	    : State(PIKIHEADSTATE_Hatuga)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct SioreState : public State {
	inline SioreState()
	    : State(PIKIHEADSTATE_Siore)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C;        // _0C
	f32 mTimer;     // _10
	bool mAnimDone; // _14
};

struct TaneState : public State {
	inline TaneState()
	    : State(PIKIHEADSTATE_Tane)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C;        // _0C
	bool mAnimDone; // _10
	f32 mTimer;     // _14
};

struct WaitState : public State {
	inline WaitState()
	    : State(PIKIHEADSTATE_Wait)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C[2]; // _0C
};

struct Item : public FSMItem<Item, FSM, State> {
	Item();

	virtual void onInit(CreatureInitArg* settings);              // _30
	virtual void onKill(CreatureKillArg* settings);              // _34
	virtual void doSimulation(f32);                              // _4C
	virtual void getLODSphere(Sys::Sphere& lodSphere);           // _140
	virtual char* getCreatureName();                             // _1A8 (weak)
	virtual void makeTrMatrix();                                 // _1C4
	virtual void doAI();                                         // _1C8
	virtual void changeMaterial();                               // _1D0
	virtual bool interactFue(InteractFue&);                      // _1F4
	virtual void updateBoundSphere();                            // _210
	virtual void onSetPosition();                                // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& keyEvent); // _220 (weak)

	bool needSave();
	void cacheSave(Stream& output);
	void cacheLoad(Stream& input);
	bool canPullout();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	efx::TPkEffectTane* mEfxTane; // _1E0
	f32 _1E4;                     // _1E4
	Vector3f _1E8;                // _1E8
	u16 mColor;                   // _1F4
	u16 mHeadType;                // _1F6
};

struct Mgr : public FixedSizeItemMgr<Item> {
	Mgr();

	virtual void doSimpleDraw(Viewport*);                                             // _20
	virtual void onLoadResources();                                                   // _48
	virtual u32 generatorGetID();                                                     // _58 (weak)
	virtual Item* generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm); // _5C
	virtual void onCreateModel(SysShape::Model* model);                               // _A0
	virtual Item* birth();                                                            // _A4
	virtual Item* get(void*);                                                         // _AC (weak, thunk at _94)
	virtual void* getNext(void*);                                                     // _B0 (weak, thunk at _88)
	virtual void* getStart();                                                         // _B4 (weak, thunk at _8C)
	virtual void* getEnd();                                                           // _B8 (weak, thunk at _90)
	virtual ~Mgr();                                                                   // _BC (weak)

	// _00     = VTBL
	// _00-_7C = FixedSizeItemMgr
	u8 _7C[0x4]; // _7C, unknown
};

extern Mgr* mgr;

} // namespace ItemPikihead
} // namespace Game

#endif
