#ifndef _GAME_ITEMHONEY_H
#define _GAME_ITEMHONEY_H

#include "Game/BaseItem.h"
#include "Game/gameGenerator.h"
#include "Graphics.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"
#include "SysShape/KeyEvent.h"
#include "Game/itemMgr.h"

namespace Game {

enum HoneyKind {
	// type of the honey
	HONEY_Y, // yellow nectar
	HONEY_R, // red nectar (spicy)
	HONEY_B  // black nectar (bitter)
};

namespace ItemHoney {

enum cState {
	HONEYSTATE_Fall = 0,
	HONEYSTATE_Bounce,
	HONEYSTATE_Wait,
	HONEYSTATE_Shrink,
	HONEYSTATE_Touch,
	HONEYSTATE_Demo,
	HONEYSTATE_COUNT
};

struct InitArg : public CreatureInitArg {
	inline InitArg(u8 a, u8 b)
	{
		_04 = a;
		_05 = b;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ItemHoney::InitArg";
	}

	// _00 = VTBL
	u8 _04; // _04
	u8 _05; // _05
};

struct Item : public CFSMItem {
	Item();

	// vtable 1 (Creature)
	virtual void onInit(CreatureInitArg* settings);       // _30
	virtual void doSimulation(f32 rate);                  // _4C
	virtual void doDirectDraw(Graphics& gfx);             // _50
	virtual void onStartCapture();                        // _94
	virtual void onUpdateCapture(Matrixf& mtx);           // _98
	virtual void onEndCapture();                          // _9C
	virtual void collisionCallback(CollEvent& collEvent); // _EC
	virtual void on_movie_end(bool shouldResetAnims);     // _114
	virtual char* getCreatureName();                      // _1A8 (weak)

	// vtable 2 (MotionListener + BaseItem + self)
	virtual void makeTrMatrix();                              // _1C4
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual f32 getMapCollisionRadius();                      // _1DC
	virtual bool interactAbsorb(InteractAbsorb& interaction); // _1F0
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual CItemFSM* createFSM();                            // _220
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _224 (weak)
	virtual bool absorbable();                                // _228
	virtual bool demoOK();                                    // _22C

	bool isShrinking();

	u8 mHoneyType; // _1E0
};

struct Mgr : public FixedSizeItemMgr<Item> {
	Mgr();

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

	u8 _7C[0x4]; // _7C - unknown
};

struct FSM : public CItemFSM {
	virtual void init(CFSMItem* item); // _08

	// _00     = VTBL
	// _00-_1C = CItemFSM
};

struct State : public CItemState {
	inline State(int stateID)
	    : CItemState(stateID)
	{
	}

	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24 (weak)
	virtual void collisionCallback(CFSMItem* item, CollEvent& collEvent);        // _34 (weak)
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction);    // _38 (weak)
	virtual bool absorbable();                                                   // _3C (weak)

	// _00     = VTBL
	// _00-_0C = CItemState
};

struct BounceState : public State {
	inline BounceState()
	    : State(HONEYSTATE_Bounce)
	{
	}

	virtual void init(CFSMItem* item, StateArg* arg);                            // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct DemoState : public State {
	inline DemoState()
	    : State(HONEYSTATE_Demo)
	{
	}

	virtual void init(CFSMItem* item, StateArg* arg);                            // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct FallState : public State {
	inline FallState()
	    : State(HONEYSTATE_Fall)
	{
	}

	virtual void init(CFSMItem* item, StateArg* arg);          // _08
	virtual void exec(CFSMItem* item);                         // _0C
	virtual void cleanup(CFSMItem* item);                      // _10
	virtual void onBounce(CFSMItem* item, Sys::Triangle* tri); // _28

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct ShrinkState : public State {
	inline ShrinkState()
	    : State(HONEYSTATE_Shrink)
	{
	}

	virtual void init(CFSMItem* item, StateArg* arg);                            // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction);    // _38 (weak)
	virtual bool absorbable();                                                   // _3C (weak)

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct TouchState : public State {
	inline TouchState()
	    : State(HONEYSTATE_Touch)
	{
	}

	virtual void init(CFSMItem* item, StateArg* arg);                            // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24
	virtual void collisionCallback(CFSMItem* item, CollEvent& collEvent);        // _34
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction);    // _38
	virtual bool absorbable();                                                   // _3C (weak)

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
	u8 _10;  // _10
};

struct WaitState : public State {
	inline WaitState()
	    : State(HONEYSTATE_Wait)
	{
	}

	virtual void init(CFSMItem* item, StateArg* arg);                         // _08
	virtual void exec(CFSMItem* item);                                        // _0C
	virtual void cleanup(CFSMItem* item);                                     // _10
	virtual void collisionCallback(CFSMItem* item, CollEvent& collEvent);     // _34
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction); // _38
	virtual bool absorbable();                                                // _3C (weak)

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

extern Mgr* mgr;

} // namespace ItemHoney
} // namespace Game

#endif
