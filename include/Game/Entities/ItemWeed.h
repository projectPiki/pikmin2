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

struct InitArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	// _00     = VTBL
	int _04; // _04
	int _08; // _08
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
	// probably needs an inline ctor

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct Item : public FSMItem<Item, FSM, State> {
	struct DummyShape : public SysShape::MtxObject {
		virtual Matrixf* getMatrix(int); // _08 (weak)

		// _00 VTBL
		Matrixf* m_matrix; // _04
	};

	inline Item(int objTypeID) // probably
	    : FSMItem(objTypeID)
	{
	}

	virtual void onInit(CreatureInitArg*);                  // _30
	virtual BaseFlockMgr* getFlockMgr();                    // _90 (weak)
	virtual bool isCollisionFlick();                        // _B0 (weak)
	virtual bool ignoreAtari(Creature* toIgnore);           // _190
	virtual void makeTrMatrix();                            // _1C4 (weak)
	virtual void doAI();                                    // _1C8
	virtual bool interactFlockAttack(InteractFlockAttack&); // _1EC
	virtual void updateBoundSphere();                       // _210
	virtual void onSetPosition();                           // _21C
	virtual void doSimpleDraw(Viewport*);                   // _224

	void setBoidTimer();

	// _00      = VTABLE
	// _00-_1E0 = FSMItem
	DummyShape m_dummyShape; // _1E0
	WeedMgr* m_flockMgr;     // _1E8
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void doSimpleDraw(Viewport*);                                 // _20
	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)
	virtual char* getCaveName(int);                                       // _BC
	virtual void getCaveID(char*);                                        // _C0

	// _00      = VTBL
	// _00-_88  = TNodeItemMgr
};

struct Weed : public TFlock {
	Weed();

	virtual void makeMatrix(); // _08
	virtual bool isWeed();     // _10 (weak)
	virtual bool damaged(f32); // _1C

	// _00-_10 = TFlock
	// _0C     = VTBL
	Matrixf _10;  // _10
	u8 _40;       // _40
	Vector3f _44; // _44
	u32 _50;      // _50
};

struct WeedMgr : public TFlockMgr<Weed> {
	virtual void do_update();             // _1C
	virtual void do_update_boundSphere(); // _20
	virtual ~WeedMgr();                   // _6C (weak)

	// _00     = VTBL
	// _00-_6C = TFlockMgr
};

extern Mgr* mgr;

} // namespace ItemWeed
} // namespace Game

struct GenWeedParm : public Game::GenItemParm {

	// _00     = VTBL
	s16 _04; // _04
	int _08; // _08
};

#endif
