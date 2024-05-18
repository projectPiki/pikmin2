#ifndef _GAME_ENTITIES_ITEMWEED_H
#define _GAME_ENTITIES_ITEMWEED_H

#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/Interaction.h"
#include "Game/TSoundEvent.h"
#include "Game/EnemyParmsBase.h"
#include "Game/flockMgr.h"
#include "SysShape/MtxObject.h"
#include "Sys/Sphere.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
namespace ItemWeed {
struct Item;
struct WeedMgr;

enum cWeedType {
	WEEDTYPE_Stone = 0,
	WEEDTYPE_Grass = 1,
};

enum StateID {
	WEED_Wait = 0,
	WEED_StateCount, // 1
};

struct InitArg : public CreatureInitArg {
	inline InitArg(int count, cWeedType type)
	    : mCount(count)
	    , mWeedType(type)
	{
	}

	virtual const char* getName() { return "ItemWeed::InitArg"; } // _08 (weak)

	// _00     = VTBL
	int mCount;          // _04
	cWeedType mWeedType; // _08
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

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct WaitState : public State {
	inline WaitState()
	    : State(WEED_Wait)
	{
	}

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C;
};

struct Weed : public TFlock {
	Weed();

	virtual void makeMatrix();                       // _08
	virtual bool isWeed() { return mModelIdx == 0; } // _10 (weak)
	virtual bool damaged(f32);                       // _1C

	// unused/inlined:
	void init(ItemWeed::WeedMgr*, Vector3f&);
	void setPosition(Vector3f&);
	void update();

	inline void doAnimation() { }
	inline void doEntry() { }
	inline void doSetView(int viewportNumber) { }
	inline void doViewCalc() { }
	inline void doSimulation(f32 constraint) { }
	inline void doDirectDraw(Graphics& gfx) { }

	// _00-_44 = TFlock
	Vector3f mScale;    // _44
	WeedMgr* mFlockMgr; // _50
};

struct WeedMgr : public TFlockMgr<Weed> {
	WeedMgr(int count); // unused/inlined

	virtual void do_update();             // _1C
	virtual void do_update_boundSphere(); // _20
	// virtual ~WeedMgr();                   // _6C (weak)

	// unused/inlined:
	void init(Sys::Sphere&, cWeedType);
	void createWeeds(cWeedType);

	// _00     = VTBL
	// _00-_6C = TFlockMgr
};

struct Item : public FSMItem<Item, FSM, State> {
	struct DummyShape : public SysShape::MtxObject {
		virtual Matrixf* getMatrix(int) { return mMatrix; } // _08 (weak)

		// _00 VTBL
		Matrixf* mMatrix; // _04
	};

	Item(); // unused/inlined

	inline Item(int objTypeID) // probably
	    : FSMItem(objTypeID)
	{
	}

	virtual void onInit(CreatureInitArg* initArg);            // _30
	virtual bool isCollisionFlick();                          // _B0 (weak)
	virtual bool ignoreAtari(Creature* toIgnore);             // _190
	virtual void doAI();                                      // _1C8
	virtual bool interactFlockAttack(InteractFlockAttack&);   // _1EC
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual void doSimpleDraw(Viewport* viewport);            // _224
	virtual char* getCreatureName() { return "Weed"; }        // _1A8 (weak)
	virtual BaseFlockMgr* getFlockMgr() { return mFlockMgr; } // _90 (weak)
	virtual void makeTrMatrix() { }                           // _1C4 (weak)

	void setBoidTimer();

	inline WeedMgr* getWeedMgr() { return mFlockMgr; }

	// _00      = VTABLE
	// _00-_1E0 = FSMItem
	DummyShape mDummyShape; // _1E0
	WeedMgr* mFlockMgr;     // _1E8
	cWeedType mWeedType;    // _1EC
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void doSimpleDraw(Viewport* viewport);                                    // _20
	virtual void onLoadResources();                                                   // _48
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*);             // _5C
	virtual void generatorWrite(Stream& output, GenItemParm* genItemParm);            // _60
	virtual void generatorRead(Stream& input, GenItemParm* genItemParm, u32 version); // _64
	virtual GenItemParm* generatorNewItemParm();                                      // _70
	// virtual ~Mgr();                                                                   // _B8 (weak)
	virtual char* getCaveName(int);                        // _BC
	virtual int getCaveID(char*);                          // _C0
	virtual BaseItem* doNew() { return new Item; }         // _A0 (weak)
	virtual u32 generatorGetID() { return 'weed'; }        // _58 (weak)
	virtual u32 generatorLocalVersion() { return '0001'; } // _68 (weak)

	// unused/inlined:
	Item* birth();

	// _00      = VTBL
	// _00-_88  = TNodeItemMgr
};

extern Mgr* mgr;

} // namespace ItemWeed
} // namespace Game

struct GenWeedParm : public Game::GenItemParm {
	inline GenWeedParm()
	{
		mCount    = 50;
		mWeedType = Game::ItemWeed::WEEDTYPE_Stone;
	}

	// _00     = VTBL
	s16 mWeedType; // _04
	int mCount;    // _08
};

#endif
