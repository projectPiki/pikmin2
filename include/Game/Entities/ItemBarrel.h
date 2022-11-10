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
enum StateID { Barrel_Normal = 0, Barrel_Damaged, Barrel_Dead, BARREL_STATE_COUNT };

/**
 * @size{0x1C}
 */
struct FSM : ItemFSM<Item> {
	virtual void init(Item*); // _08

	// _00     = VTBL
	// _00-_1C = ItemFSM
};

struct State : ItemState<Item> {
	inline State(int stateID)
	    : ItemState(stateID)
	{
	}

	virtual void onDamage(Item*, f32) { } // _20

	// _00     = VTBL
	// _00-_0C = ItemState
	u8 _0C[4];
};

/**
 * @size{0x10}
 */
struct NormalState : State {
	inline NormalState()
	    : State(Barrel_Normal)
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
struct DamagedState : State {
	inline DamagedState()
	    : State(Barrel_Damaged)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = State
	u8 _10;
};

/**
 * @size{0x14}
 */
struct DeadState : State {
	inline DeadState()
	    : State(Barrel_Dead)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = State
	u8 _10[4]; // _10
};

struct BarrelParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "Barrel::Parms")
		    , p000(this, 'p000', "ƒ‰ƒCƒt", 100.0f, 1.0f, 60000.0f)
		{
		}

		Parm<f32> p000;
	};

	BarrelParms() { }

	virtual void read(Stream& input) // _00
	{
		m_barrelParms.read(input);
	}

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms m_barrelParms; // _DC
};

/**
 * @size{0x1F8}
 */
struct Item : public WorkItem<Item, FSM, State> {
	inline Item()
	    : WorkItem(0x410)
	{
		m_mass = 0.0f;
	}

	// vtable 1
	virtual void constructor();                          // _2C
	virtual void onInit(CreatureInitArg* settings);      // _30
	virtual void doSave(Stream&);                        // _E0
	virtual void doLoad(Stream&);                        // _E4
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
	f32 _1EC;   // _1EC
	f32 _1F0;   // _1F0
	f32 _1F4;   // _1F4
	u8 _1F8[4]; // _1F8
};

/**
 * @size{0x94}
 */
struct Mgr : public TNodeItemMgr {
	Mgr();

	// vtable 1
	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID() { return 'barl'; }                       // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C

	// vtable 2
	virtual BaseItem* doNew() { return new Item(); } // _A0 (weak)
	virtual ~Mgr() { }                               // _B8 (weak, thunked at _00)
	virtual BaseItem* birth();                       // _BC (Yes, TNodeItemMgr::birth() isn't virtual, but this is. Deal with it.)

	BarrelParms* m_parms; // _88
};

extern Mgr* mgr;
} // namespace ItemBarrel
} // namespace Game

#endif
