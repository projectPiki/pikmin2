#ifndef _GAME_ENTITIES_ITEMTREASURE_H
#define _GAME_ENTITIES_ITEMTREASURE_H

#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/Interaction.h"
#include "Game/TSoundEvent.h"
#include "Game/EnemyParmsBase.h"
#include "SysShape/MtxObject.h"
#include "Sys/Sphere.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
struct Pellet;

namespace ItemTreasure {
struct Item;

struct FSM : public ItemFSM<Item> {
	virtual void init(Item*); // _08

	// _00     = VTBL
	// _00-_1C = ItemFSM
};

struct State : public ItemState<Item> {
	// inline State(int stateID)
	//     : ItemState(stateID)
	// {
	// }

	virtual void onDamage(Item*, f32); // _20 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct NormalState : public State {
	// inline State(int stateID)
	//     : ItemState(stateID)
	// {
	// }

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void onDamage(Item*, f32);   // _20

	// _00     = VTBL
	// _00-_0C = State
};

struct Item : public WorkItem<Item, FSM, State> {
	struct DummyShape : public SysShape::MtxObject {
		virtual Matrixf* getMatrix(int); // _08 (weak)

		// _00 VTBL
		Matrixf* m_matrix; // _04
	};

	// will probably need this
	// inline Item(int objTypeID)
	//     : WorkItem(objTypeID)
	// {
	// }

	virtual void constructor();                           // _2C
	virtual void onInit(CreatureInitArg* settings);       // _30
	virtual void doDirectDraw(Graphics& gfx);             // _50
	virtual bool ignoreAtari(Creature* toIgnore);         // _190
	virtual char* getCreatureName();                      // _1A8 (weak)
	virtual void doAI();                                  // _1C8
	virtual bool interactAttack(InteractAttack&);         // _1E0
	virtual bool getVectorField(Sys::Sphere&, Vector3f&); // _204
	virtual f32 getWorkDistance(Sys::Sphere&);            // _208
	virtual void updateBoundSphere();                     // _210
	virtual void onSetPosition();                         // _21C

	void releasePellet();
	void setTreasure(Pellet*);
	void setLife();
	void getCurrMaxLife();
	void getWorkRadius();
	void isVisible();

	// _00      = VTABLE
	// _00-_1EC = WorkItem
	DummyShape m_dummyShape; // _1EC
	f32 m_life;              // _1F4
	f32 m_depth;             // _1F8
	Pellet* m_pellet;        // _1FC
	Matrixf _200;            // _200
	f32 _230;                // _230
};

struct TreasureParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> m_p000; // _E8, max life when current depth >= 75% of max depth
		Parm<f32> m_p001; // _110, max life when 75% > current depth >= 50% of max depth
		Parm<f32> m_p002; // _138, max life when 50% > current depth >= 25% of max depth
		Parm<f32> m_p003; // _160, max life when current depth < 25% of max depth
	};

	TreasureParms();

	virtual void read(Stream&); // _08 (weak)

	Parms m_parms; // _DC
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)
	virtual BaseItem* birth();                                            // _BC

	// _00      = VTBL
	// _00-_64  = TNodeItemMgr
	u8 _64[0x4]; // _64, unknown
};

extern Mgr* mgr;

} // namespace ItemTreasure
} // namespace Game

#endif
