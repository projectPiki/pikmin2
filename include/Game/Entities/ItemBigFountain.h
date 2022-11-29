#ifndef _GAME_ENTITIES_ITEMBIGFOUNTAIN_H
#define _GAME_ENTITIES_ITEMBIGFOUNTAIN_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "efx/TGeyser.h"
#include "Condition.h"

struct PikiCond_ExceptChappyPikmin : public Condition<Game::Piki> {
	virtual bool satisfy(Game::Piki*); // _08 (weak)

	// _00 = VTBL
};

namespace Game {
namespace ItemBigFountain {
struct Item;

struct InitArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	// _00     = VTBL
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

	virtual void onDamage(Item*, f32); // _20 (weak)
	virtual bool canRide();            // _34 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct AppearState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct CloseState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct OutState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual bool canRide();              // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct WaitState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct FountainParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> m_p000; // _E8
	};

	FountainParms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms m_fountainParms;
};

struct Item : public WorkItem<Item, FSM, State> {
	inline Item(int objType)
	    : WorkItem(objType)
	{ // probably needs things in here, just an initial guess
	}

	virtual void constructor();            // _2C
	virtual void onInit(CreatureInitArg*); // _30
	virtual void doSimulation(f32);        // _4C
	virtual void doDirectDraw(Graphics&);  // _50
	virtual f32 getFaceDir()               // _64 (weak)
	{
		return m_faceDir;
	}
	virtual bool sound_culling();                                       // _104 (weak)
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual char* getCreatureName();                                    // _1A8 (weak)
	virtual void initDependency();                                      // _1BC
	virtual void makeTrMatrix();                                        // _1C4
	virtual void doAI();                                                // _1C8
	virtual bool interactAttack(InteractAttack&);                       // _1E0
	virtual bool interactGotKey(InteractGotKey&);                       // _200
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);               // _204
	virtual f32 getWorkDistance(Sys::Sphere&);                          // _208
	virtual void updateBoundSphere();                                   // _210
	virtual void update();                                              // _214
	virtual void onSetPosition();                                       // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event);           // _220 (weak)

	void killAllEffect();
	bool canRide();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	f32 m_faceDir;                   // _1EC
	f32 _1F0;                        // _1F0
	efx::TGeyserAct* m_efxGeyserAct; // _1F4
	efx::TGeyserSet* m_efxGeyserSet; // _1F8
	u8 _1FC[4];                      // _1FC, unknown
	f32 _200;                        // _200
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)

	BaseItem* birth();

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	Platform* m_platform;   // _88
	FountainParms* m_parms; // _8C
};

extern Mgr* mgr;

} // namespace ItemBigFountain
} // namespace Game

#endif