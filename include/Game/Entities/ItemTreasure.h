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
	inline State(int stateID)
	    : ItemState(stateID)
	{
	}

	virtual void onDamage(Item*, f32) { } // _20 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct NormalState : public State {
	NormalState()
	    : State(0)
	{
	}
	inline NormalState(int stateID)
	    : State(stateID)
	{
	}

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void onDamage(Item*, f32);   // _20

	// _00     = VTBL
	// _00-_0C = State
	int _0C;
};

struct Item : public WorkItem<Item, FSM, State> {
	Item();

	struct DummyShape : public SysShape::MtxObject {
		virtual Matrixf* getMatrix(int) { return mMatrix; } // _08 (weak)

		// _00 VTBL
		Matrixf* mMatrix; // _04
	};

	virtual void constructor();                            // _2C
	virtual void onInit(CreatureInitArg* settings);        // _30
	virtual void doDirectDraw(Graphics& gfx);              // _50
	virtual bool ignoreAtari(Creature* toIgnore);          // _190
	virtual char* getCreatureName() { return "Treasure"; } // _1A8 (weak)
	virtual void doAI();                                   // _1C8
	virtual bool interactAttack(InteractAttack&);          // _1E0
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);  // _204
	virtual f32 getWorkDistance(Sys::Sphere&);             // _208
	virtual void updateBoundSphere();                      // _210
	virtual void onSetPosition();                          // _21C

	void releasePellet();
	void setTreasure(Pellet*);
	void setLife();
	f32 getCurrMaxLife();
	f32 getWorkRadius();
	bool isVisible();

	// unused/inline
	void createTreasure();

	// _00      = VTABLE
	// _00-_1EC = WorkItem
	DummyShape mDummyShape; // _1EC
	f32 mCurrStageLife;     // _1F4
	f32 mTotalLife;         // _1F8
	Pellet* mPellet;        // _1FC
	Matrixf mMatrix;        // _200
	f32 mInstantDamage;     // _230
};

struct TreasureParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "Plant::Parms")
		    , mLife0(this, 'p000', "ライフ(0)", 250.0f, 1.0f, 60000.0f)  // 'life (0)'
		    , mLife1(this, 'p001', "ライフ(1)", 750.0f, 1.0f, 60000.0f)  // 'life (1)'
		    , mLife2(this, 'p002', "ライフ(2)", 1200.0f, 1.0f, 60000.0f) // 'life (2)'
		    , mLife3(this, 'p003', "ライフ(3)", 1500.0f, 1.0f, 60000.0f) // 'life (3)'
		{
		}

		Parm<f32> mLife0; // _E8, max life when current depth >= 75% of max depth
		Parm<f32> mLife1; // _110, max life when 75% > current depth >= 50% of max depth
		Parm<f32> mLife2; // _138, max life when 50% > current depth >= 25% of max depth
		Parm<f32> mLife3; // _160, max life when current depth < 25% of max depth
	};

	TreasureParms() { }

	virtual void read(Stream& stream) { mParms.read(stream); } // _08 (weak)

	Parms mParms; // _DC
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual BaseItem* doNew() { return new Item; }                        // _A0 (weak)
	virtual u32 generatorGetID() { return 'trsr'; }                       // _58 (weak)
	// virtual ~Mgr();                                                    // _B8 (weak)
	virtual BaseItem* birth(); // _BC

	// _00      = VTBL
	// _00-_88  = TNodeItemMgr
	TreasureParms* mParameters; // _88
};

extern Mgr* mgr;

} // namespace ItemTreasure
} // namespace Game

#endif
