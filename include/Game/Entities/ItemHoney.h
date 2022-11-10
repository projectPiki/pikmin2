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
	HONEY_R, // red nectar
	HONEY_B  // black nectar
};

namespace ItemHoney {

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
	virtual void onInit(CreatureInitArg* settings);   // _30
	virtual void doSimulation(float rate);            // _4C
	virtual void doDirectDraw(Graphics& gfx);         // _50
	virtual void onStartCapture();                    // _94
	virtual void onUpdateCapture(Matrixf&);           // _98
	virtual void onEndCapture();                      // _9C
	virtual void collisionCallback(CollEvent& event); // _EC
	virtual void on_movie_end(bool shouldResetAnims); // _114
	virtual char* getCreatureName();                  // _1A8 (weak)

	// vtable 2 (MotionListener + BaseItem + self)
	virtual void makeTrMatrix();                              // _1C4
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual float getMapCollisionRadius();                    // _1DC
	virtual bool interactAbsorb(InteractAbsorb&);             // _1F0
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual CItemFSM* createFSM();                            // _220
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _224 (weak)
	virtual void absorbable();                                // _228
	virtual void demoOK();                                    // _22C

	bool isShrinking();

	u8 m_honeyType; // _1E0
};

struct Mgr : public FixedSizeItemMgr<ItemHoney::Item> {
	Mgr();

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

	u8 _7C[0x4]; // _7C - unknown
};

struct FSM : public CItemFSM {
	virtual void init(CFSMItem*); // _08

	// _00     = VTBL
	// _00-_1C = CItemFSM
};

struct State : public CItemState {
	inline State(int stateID)
	    : CItemState(stateID)
	{
	}

	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void collisionCallback(CFSMItem*, CollEvent&);         // _34 (weak)
	virtual bool interactAbsorb(CFSMItem*, InteractAbsorb&);       // _38 (weak)
	virtual bool absorbable();                                     // _3C (weak)

	// _00     = VTBL
	// _00-_0C = CItemState
};

struct BounceState : public State {
	// probably needs an inline ctor

	virtual void init(CFSMItem*, StateArg*);                       // _08
	virtual void exec(CFSMItem*);                                  // _0C
	virtual void cleanup(CFSMItem*);                               // _10
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct DemoState : public State {
	// probably needs an inline ctor

	virtual void init(CFSMItem*, StateArg*);                       // _08
	virtual void exec(CFSMItem*);                                  // _0C
	virtual void cleanup(CFSMItem*);                               // _10
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct FallState : public State {
	// probably needs an inline ctor

	virtual void init(CFSMItem*, StateArg*);          // _08
	virtual void exec(CFSMItem*);                     // _0C
	virtual void cleanup(CFSMItem*);                  // _10
	virtual void onBounce(CFSMItem*, Sys::Triangle*); // _28

	// _00     = VTBL
	// _00-_0C = State
};

struct ShrinkState : public State {
	// probably needs an inline ctor

	virtual void init(CFSMItem*, StateArg*);                       // _08
	virtual void exec(CFSMItem*);                                  // _0C
	virtual void cleanup(CFSMItem*);                               // _10
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24
	virtual bool interactAbsorb(CFSMItem*, InteractAbsorb&);       // _38 (weak)
	virtual bool absorbable();                                     // _3C (weak)

	// _00     = VTBL
	// _00-_0C = State
};

struct TouchState : public State {
	// probably needs an inline ctor

	virtual void init(CFSMItem*, StateArg*);                       // _08
	virtual void exec(CFSMItem*);                                  // _0C
	virtual void cleanup(CFSMItem*);                               // _10
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24
	virtual void collisionCallback(CFSMItem*, CollEvent&);         // _34
	virtual bool interactAbsorb(CFSMItem*, InteractAbsorb&);       // _38
	virtual bool absorbable();                                     // _3C (weak)

	// _00     = VTBL
	// _00-_0C = State
};

struct WaitState : public State {
	// probably needs an inline ctor

	virtual void init(CFSMItem*, StateArg*);                 // _08
	virtual void exec(CFSMItem*);                            // _0C
	virtual void cleanup(CFSMItem*);                         // _10
	virtual void collisionCallback(CFSMItem*, CollEvent&);   // _34
	virtual bool interactAbsorb(CFSMItem*, InteractAbsorb&); // _38
	virtual bool absorbable();                               // _3C (weak)

	// _00     = VTBL
	// _00-_0C = State
};

extern Mgr* mgr;

} // namespace ItemHoney
} // namespace Game

#endif
