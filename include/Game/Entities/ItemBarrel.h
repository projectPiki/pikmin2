#ifndef _GAME_ENTITIES_ITEMBARREL_H
#define _GAME_ENTITIES_ITEMBARREL_H

#include "BaseParm.h"
#include "Game/BaseItem.h"
#include "Game/EnemyParmsBase.h"
#include "Game/TSoundEvent.h"
#include "Game/gameGenerator.h"
#include "Game/itemMgr.h"
#include "Parameters.h"

namespace Game {
namespace ItemBarrel {
struct Item;

/**
 * @fabricated
 */
enum StateID {
	BARREL_Normal  = 0,
	BARREL_Damaged = 1,
	BARREL_Dead    = 2,
	BARREL_StateCount, // 3
};

/**
 * @size{0x1C}
 */
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

	virtual void onDamage(Item*, f32) { } // _20

	// _00     = VTBL
	// _00-_0C = ItemState
	char* mName; // _0C
};

/**
 * @size{0x10}
 */
struct NormalState : public State {
	inline NormalState()
	    : State(BARREL_Normal)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = State
};

/**
 * @size{0x14}
 */
struct DamagedState : public State {
	inline DamagedState()
	    : State(BARREL_Damaged)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = State
	u8 mBuffer; // _10, seemingly unused, just for size
};

/**
 * @size{0x14}
 */
struct DeadState : public State {
	inline DeadState()
	    : State(BARREL_Dead)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = State
	u8 mBuffer; // _10, seemingly unused, just for size
};

struct BarrelParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "Barrel::Parms")
		    , mHealth(this, 'p000', "ライフ", 100.0f, 1.0f, 60000.0f) // 'life'
		{
		}

		Parm<f32> mHealth; // _E8, p000
	};

	BarrelParms() { }

	virtual void read(Stream& input) // _00
	{
		mBarrelParms.read(input);
	}

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mBarrelParms; // _DC
};

/**
 * @size{0x1F8}
 */
struct Item : public WorkItem<Item, FSM, State> {
	Item();

	// vtable 1
	virtual void constructor();                          // _2C
	virtual void onInit(CreatureInitArg* settings);      // _30
	virtual void doSave(Stream& stream);                 // _E0
	virtual void doLoad(Stream& stream);                 // _E4
	virtual char* getCreatureName() { return "Barrel"; } // _1A8 (weak)

	// vtable 2
	virtual void doAI();                                  // _1C8
	virtual bool interactAttack(InteractAttack&);         // _1E0
	virtual bool getVectorField(Sys::Sphere&, Vector3f&); // _204
	virtual f32 getWorkDistance(Sys::Sphere&);            // _208
	virtual void updateBoundSphere();                     // _210
	virtual void onSetPosition();                         // _21C

	f32 getWorkRadius();
	void createBarrel();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	f32 mHealth;       // _1EC
	f32 mBackupHealth; // _1F0, set to same value as mHealth in createBarrel then never used
	f32 mStoredDamage; // _1F4, gets added here, then applied in NormalState::OnDamage (then reset)
	u32 mBuffer;       // _1F8, never used/referenced, only here for size.
};

/**
 * @size{0x94}
 */
struct Mgr : public TNodeItemMgr {
	Mgr();

	// vtable 1
	virtual void onLoadResources();                                       // _48
	virtual BaseItem* doNew() { return new Item(); }                      // _A0 (weak)
	virtual u32 generatorGetID() { return 'barl'; }                       // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C

	// vtable 2
	virtual BaseItem* birth(); // _BC (Yes, TNodeItemMgr::birth() isn't virtual, but this is. Deal with it.)

	// _00     = VTBL 1
	// _30     = VTBL 2
	// _00-_88 = TNodeItemMgr
	BarrelParms* mParms; // _88
};

extern Mgr* mgr;
} // namespace ItemBarrel
} // namespace Game

#endif
