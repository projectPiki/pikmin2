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

enum cState { BIGFOUNTAINSTATE_Wait = 0, BIGFOUNTAINSTATE_Out, BIGFOUNTAINSTATE_Appear, BIGFOUNTAINSTATE_Close, BIGFOUNTAINSTATE_COUNT };

struct InitArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	int mInitState;

	// _00     = VTBL
};

struct FSM : public ItemFSM<Item> {
	virtual void init(Item* item); // _08

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
	inline AppearState()
	    : State(BIGFOUNTAINSTATE_Appear)
	{
	}

	virtual void init(Item* item, StateArg* arg); // _08
	virtual void exec(Item* item);                // _0C
	virtual void cleanup(Item* item);             // _10

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
	f32 _10; // _10
};

struct CloseState : public State {
	inline CloseState()
	    : State(BIGFOUNTAINSTATE_Close)
	{
	}

	virtual void init(Item* item, StateArg* arg); // _08
	virtual void exec(Item* item);                // _0C
	virtual void cleanup(Item* item);             // _10

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct OutState : public State {
	inline OutState()
	    : State(BIGFOUNTAINSTATE_Out)
	{
	}

	virtual void init(Item* item, StateArg* arg); // _08
	virtual void exec(Item* item);                // _0C
	virtual void cleanup(Item* item);             // _10
	virtual bool canRide();                       // _34

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct WaitState : public State {
	inline WaitState()
	    : State(BIGFOUNTAINSTATE_Wait)
	{
	}

	virtual void init(Item* item, StateArg* arg);                            // _08
	virtual void exec(Item* item);                                           // _0C
	virtual void cleanup(Item* item);                                        // _10
	virtual void onDamage(Item*, f32);                                       // _20
	virtual void onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent); // _24

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct FountainParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms() // probably
		    : Parameters(nullptr, "Fountain::Parms")
		    , mP000(this, 'p000', "ƒ‰ƒCƒt", 1000.0f, 1.0f, 60000.0f)
		{
		}

		Parm<f32> mP000; // _E8
	};

	FountainParms();

	virtual void read(Stream& input); // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mFountainParms;
};

struct Item : public WorkItem<Item, FSM, State> {
	Item()
	    : WorkItem(OBJTYPE_BigFountain)
	{
	}

	// inline Item(int objType)
	//     : WorkItem(objType)
	// { // probably needs things in here, just an initial guess
	// }

	virtual void constructor();               // _2C
	virtual void onInit(CreatureInitArg*);    // _30
	virtual void doSimulation(f32);           // _4C
	virtual void doDirectDraw(Graphics& gfx); // _50
	virtual f32 getFaceDir()                  // _64 (weak)
	{
		return mFaceDir;
	}
	virtual bool sound_culling();                                       // _104 (weak)
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual char* getCreatureName();                                    // _1A8 (weak)
	virtual void initDependency();                                      // _1BC
	virtual void makeTrMatrix();                                        // _1C4
	virtual void doAI();                                                // _1C8
	virtual bool interactAttack(InteractAttack& interaction);           // _1E0
	virtual bool interactGotKey(InteractGotKey& interaction);           // _200
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);               // _204
	virtual f32 getWorkDistance(Sys::Sphere&);                          // _208
	virtual void updateBoundSphere();                                   // _210
	virtual void update();                                              // _214
	virtual void onSetPosition();                                       // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& keyEvent);        // _220 (weak)

	void killAllEffect();
	bool canRide();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	f32 mFaceDir;                   // _1EC
	f32 _1F0;                       // _1F0
	efx::TGeyserAct* mEfxGeyserAct; // _1F4
	efx::TGeyserSet* mEfxGeyserSet; // _1F8
	u8 _1FC[4];                     // _1FC, unknown
	f32 _200;                       // _200
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                                       // _48
	virtual u32 generatorGetID();                                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm); // _5C
	virtual BaseItem* doNew();                                                            // _A0 (weak)
	virtual ~Mgr();                                                                       // _B8 (weak)

	BaseItem* birth();

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	Platform* mPlatform;   // _88
	FountainParms* mParms; // _8C
};

extern Mgr* mgr;

} // namespace ItemBigFountain
} // namespace Game

#endif
