#ifndef _GAME_ENTITIES_ITEMBIGFOUNTAIN_H
#define _GAME_ENTITIES_ITEMBIGFOUNTAIN_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "efx/TGeyser.h"
#include "Condition.h"

struct PikiCond_ExceptChappyPikmin : public Condition<Game::Piki> {
	virtual bool satisfy(Game::Piki* piki) { return piki->getKind() != Game::Bulbmin; } // _08 (weak)

	// _00 = VTBL
};

namespace Game {
namespace ItemBigFountain {
struct Item;

enum StateID {
	BIGFOUNTAIN_Wait   = 0,
	BIGFOUNTAIN_Out    = 1,
	BIGFOUNTAIN_Appear = 2,
	BIGFOUNTAIN_Close  = 3,
	BIGFOUNTAIN_StateCount, // 4
};

struct InitArg : public CreatureInitArg {
	virtual const char* getName() { return "ItemBigFountain::InitArg"; } // _08 (weak)

	// _00 = VTBL
	int mInitState; // _04
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

	virtual void onDamage(Item*, f32) { }    // _20 (weak)
	virtual bool canRide() { return false; } // _34 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct AppearState : public State {
	inline AppearState()
	    : State(BIGFOUNTAIN_Appear)
	{
	}

	virtual void init(Item* item, StateArg* settings); // _08
	virtual void exec(Item* item);                     // _0C
	virtual void cleanup(Item* item);                  // _10

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
	f32 _10; // _10
};

struct CloseState : public State {
	inline CloseState()
	    : State(BIGFOUNTAIN_Close)
	{
	}

	virtual void init(Item* item, StateArg* settings); // _08
	virtual void exec(Item* item);                     // _0C
	virtual void cleanup(Item* item);                  // _10

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct OutState : public State {
	inline OutState()
	    : State(BIGFOUNTAIN_Out)
	{
	}

	virtual void init(Item* item, StateArg* settings); // _08
	virtual void exec(Item* item);                     // _0C
	virtual void cleanup(Item* item);                  // _10
	virtual bool canRide() { return true; }            // _34 (weak)

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C; // _0C
};

struct WaitState : public State {
	inline WaitState()
	    : State(BIGFOUNTAIN_Wait)
	{
	}

	virtual void init(Item* item, StateArg* settings);                       // _08
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
		    , mHealth(this, 'p000', "ライフ", 1000.0f, 1.0f, 60000.0f) // 'life'
		{
		}

		Parm<f32> mHealth; // _E8, p000
	};

	FountainParms()
	    : CreatureParms()
	    , mFountainParms()
	{
	}

	virtual void read(Stream& input) // _08 (weak)
	{
		mFountainParms.read(input);
	}

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mFountainParms; // _DC
};

struct Item : public WorkItem<Item, FSM, State> {
	Item();

	virtual void constructor();               // _2C
	virtual void onInit(CreatureInitArg*);    // _30
	virtual void doSimulation(f32);           // _4C
	virtual void doDirectDraw(Graphics& gfx); // _50
	virtual f32 getFaceDir()                  // _64 (weak)
	{
		return mFaceDir;
	}
	virtual bool sound_culling() { return false; }                      // _104 (weak)
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual char* getCreatureName() { return "BigFountain"; }           // _1A8 (weak)
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

	inline void resetModelMass()
	{
		// Dumb, but best I can do since mModelScale needs to be Vec
		mModel->mJ3dModel->mModelScale.x = mModel->mJ3dModel->mModelScale.y = mModel->mJ3dModel->mModelScale.z = 1.0f;
		mMass                                                                                                  = 0.0f;
	}

	// _00      = VTBL
	// _00-_1EC = WorkItem
	f32 mFaceDir;                   // _1EC
	f32 mBuryDepth;                 // _1F0, amount currently underground
	efx::TGeyserAct* mEfxGeyserAct; // _1F4
	efx::TGeyserSet* mEfxGeyserSet; // _1F8
	PlatInstance* mPlatInstance;    // _1FC, unknown
	f32 mHealth;                    // _200, 'health' to dig up in Challenge Mode
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                                       // _48
	virtual BaseItem* doNew() { return new Item(); }                                      // _A0 (weak)
	virtual u32 generatorGetID() { return 'warp'; }                                       // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm); // _5C

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
