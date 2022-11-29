#ifndef _GAME_ENTITIES_ITEMPIKIHEAD_H
#define _GAME_ENTITIES_ITEMPIKIHEAD_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "efx/TPk.h"

namespace Game {
namespace ItemPikihead {
struct Item;

struct InitArg : public ItemInitArg {
	inline InitArg(EPikiKind pikiKind, Vector3f& vec)
	{
		m_pikminType = pikiKind;
		_08          = vec;
		_14          = 0;
		_18          = 0;
		_1C          = -1.0f;
	}

	virtual const char* getName() { return "ItemPikiHead::InitArg"; } // _08 (weak)

	// _00     = VTBL
	EPikiKind m_pikminType; // _04, enum?
	Vector3f _08;           // _08
	u8 _14;                 // _14
	int _18;                // _18
	f32 _1C;                // _1C
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

	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct BuryState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct FallState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);             // _08
	virtual void exec(Item*);                        // _0C
	virtual void cleanup(Item*);                     // _10
	virtual void onBounce(Item*, Sys::Triangle*);    // _28
	virtual void onPlatCollision(Item*, PlatEvent&); // _2C

	// _00     = VTBL
	// _00-_0C = State
};

struct GrowState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct HatugaState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct SioreState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct TaneState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct WaitState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct Item : public FSMItem<Item, FSM, State> {
	Item();

	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void onKill(CreatureKillArg*);                    // _34
	virtual void doSimulation(f32);                           // _4C
	virtual void getLODSphere(Sys::Sphere& lodSphere);        // _140
	virtual char* getCreatureName();                          // _1A8 (weak)
	virtual void makeTrMatrix();                              // _1C4
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual bool interactFue(InteractFue&);                   // _1F4
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _220 (weak)

	void needSave();
	void cacheSave(Stream&);
	void cacheLoad(Stream&);
	void canPullout();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	efx::TPkEffectTane* m_efxTane; // _1E0
	f32 _1E4;                      // _1E4
	u8 _1E8[0xC];                  // _1E8, unknown
	u16 m_color;                   // _1F
	u16 m_headType;                // _1F6
};

struct Mgr : public FixedSizeItemMgr<Item> {
	Mgr();

	virtual void doSimpleDraw(Viewport*);                                 // _20
	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void onCreateModel(SysShape::Model*);                         // _A0
	virtual BaseItem* birth();                                            // _A4
	virtual Item* get(void*);                                             // _AC (weak, thunk at _94)
	virtual void* getNext(void*);                                         // _B0 (weak, thunk at _88)
	virtual void* getStart();                                             // _B4 (weak, thunk at _8C)
	virtual void* getEnd();                                               // _B8 (weak, thunk at _90)
	virtual ~Mgr();                                                       // _BC (weak)

	// _00     = VTBL
	// _00-_7C = FixedSizeItemMgr
	u8 _7C[0x4]; // _7C, unknown
};

extern Mgr* mgr;

} // namespace ItemPikihead
} // namespace Game

#endif