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

// Type of nectar drop (honey).
enum HoneyKind {
	HONEY_Y = 0, // yellow nectar
	HONEY_R = 1, // red nectar (spicy)
	HONEY_B = 2, // black nectar (bitter)
};

namespace ItemHoney {

enum StateID {
	HONEY_Fall   = 0,
	HONEY_Bounce = 1,
	HONEY_Wait   = 2,
	HONEY_Shrink = 3,
	HONEY_Touch  = 4,
	HONEY_Demo   = 5,
	HONEY_StateCount, // 6
};

struct InitArg : public CreatureInitArg {
	inline InitArg(u8 type, bool isDemo)
	{
		mHoneyType = type;
		mIsDemo    = isDemo;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ItemHoney::InitArg";
	}

	// _00 = VTBL
	u8 mHoneyType; // _04
	bool mIsDemo;  // _05
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
	virtual char* getCreatureName() { return "Honey"; }   // _1A8 (weak)

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
	virtual u32 generatorGetID() { return 'mitu'; }                                   // _58 (weak)
	virtual Item* generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm); // _5C
	virtual void onCreateModel(SysShape::Model* model);                               // _A0
	virtual Item* birth();                                                            // _A4
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

	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent) { }            // _24 (weak)
	virtual void collisionCallback(CFSMItem* item, CollEvent& collEvent) { }                   // _34 (weak)
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction) { return false; } // _38 (weak)
	virtual bool absorbable() { return false; }                                                // _3C (weak)

	// _00     = VTBL
	// _00-_0C = CItemState
	char* mName; // _0C, unused but educated guess
};

struct BounceState : public State {
	inline BounceState()
	    : State(HONEY_Bounce)
	{
	}

	virtual void init(CFSMItem* item, StateArg* settings);                       // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
};

struct DemoState : public State {
	inline DemoState()
	    : State(HONEY_Demo)
	{
	}

	virtual void init(CFSMItem* item, StateArg* settings);                       // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_10 = State
};

struct FallState : public State {
	inline FallState()
	    : State(HONEY_Fall)
	{
	}

	virtual void init(CFSMItem* item, StateArg* settings);     // _08
	virtual void exec(CFSMItem* item);                         // _0C
	virtual void cleanup(CFSMItem* item);                      // _10
	virtual void onBounce(CFSMItem* item, Sys::Triangle* tri); // _28

	// _00     = VTBL
	// _00-_10 = State
};

struct ShrinkState : public State {
	inline ShrinkState()
	    : State(HONEY_Shrink)
	{
	}

	virtual void init(CFSMItem* item, StateArg* settings);                                    // _08
	virtual void exec(CFSMItem* item);                                                        // _0C
	virtual void cleanup(CFSMItem* item);                                                     // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent);              // _24
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction) { return true; } // _38 (weak)
	virtual bool absorbable() { return true; }                                                // _3C (weak)

	// _00     = VTBL
	// _00-_10 = State
};

struct TouchState : public State {
	inline TouchState()
	    : State(HONEY_Touch)
	{
	}

	virtual void init(CFSMItem* item, StateArg* settings);                       // _08
	virtual void exec(CFSMItem* item);                                           // _0C
	virtual void cleanup(CFSMItem* item);                                        // _10
	virtual void onKeyEvent(CFSMItem* item, const SysShape::KeyEvent& keyEvent); // _24
	virtual void collisionCallback(CFSMItem* item, CollEvent& collEvent);        // _34
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction);    // _38
	virtual bool absorbable() { return true; }                                   // _3C (weak)

	// _00     = VTBL
	// _00-_10 = State
	bool mIsJiggling; // _10, has been touched by navi
};

struct WaitState : public State {
	inline WaitState()
	    : State(HONEY_Wait)
	{
	}

	virtual void init(CFSMItem* item, StateArg* settings);                    // _08
	virtual void exec(CFSMItem* item);                                        // _0C
	virtual void cleanup(CFSMItem* item);                                     // _10
	virtual void collisionCallback(CFSMItem* item, CollEvent& collEvent);     // _34
	virtual bool interactAbsorb(CFSMItem* item, InteractAbsorb& interaction); // _38
	virtual bool absorbable() { return true; }                                // _3C (weak)

	// _00     = VTBL
	// _00-_10 = State
};

extern Mgr* mgr;

} // namespace ItemHoney
} // namespace Game

#endif
