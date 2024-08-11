#ifndef _GAME_ENTITIES_ITEMROCK_H
#define _GAME_ENTITIES_ITEMROCK_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "Game/Farm.h"
#include "efx/TKouhai.h"

namespace Game {
namespace ItemRock {
struct Item;

enum StateID {
	ITEMROCK_Normal = 0,
	ITEMROCK_Down   = 1,
	ITEMROCK_Up     = 2,
	ITEMROCK_StateCount, // 3
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

	virtual void onDamage(Item*, f32) { } // _20 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
	u32 _0C;        // _0C, unknown - probably was mName
	u8 mIsDamaged;  // _10
	u8 mIsFullSize; // _11
};

struct NormalState : public State {
	inline NormalState()
	    : State(ITEMROCK_Normal)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct DownState : public State {
	inline DownState()
	    : State(ITEMROCK_Down)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct UpState : public State {
	inline UpState()
	    : State(ITEMROCK_Up)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct RockParms : public CreatureParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "Plant::Parms")
		    , mHealthMax(this, 'p000', "ライフ(0)", 1500.0f, 1.0f, 60000.0f)        // 'life (0)'
		    , mHealthMedium(this, 'p001', "ライフ(1)", 1200.0f, 1.0f, 60000.0f)     // 'life (1)'
		    , mHealthSmall(this, 'p002', "ライフ(2)", 750.0f, 1.0f, 60000.0f)       // 'life (2)'
		    , mHealthHidden(this, 'p003', "ライフ(3)", 250.0f, 1.0f, 60000.0f)      // 'life (3)'
		    , mGrowTimeMax(this, 'p004', "再生時間(0) [分]", 1.0f, 0.0f, 150.0f)    // 'play time (0) [minutes]'
		    , mGrowTimeMedium(this, 'p005', "再生時間(1) [分]", 1.0f, 0.0f, 150.0f) // 'play time (1) [minutes]'
		    , mGrowTimeSmall(this, 'p006', "再生時間(2) [分]", 1.0f, 0.0f, 150.0f)  // 'play time (2) [minutes]'
		    , mGrowTimeHidden(this, 'p007', "再生時間(3) [分]", 1.0f, 0.0f, 150.0f) // 'play time (3) [minutes]'
		    , mWorkRadiusMax(this, 'p008', "仕事半径(0)", 35.0f, 0.0f, 150.0f)      // 'work radius (0)'
		    , mWorkRadiusMedium(this, 'p009', "仕事半径(0)", 20.0f, 0.0f, 150.0f)   // 'work radius (0)' (should be (1))
		    , mWorkRadiusSmall(this, 'p010', "仕事半径(0)", 10.0f, 0.0f, 150.0f)    // 'work radius (0)' (should be (2))
		{
		}

		Parm<f32> mHealthMax;        // _E8
		Parm<f32> mHealthMedium;     // _110
		Parm<f32> mHealthSmall;      // _138
		Parm<f32> mHealthHidden;     // _160
		Parm<f32> mGrowTimeMax;      // _188
		Parm<f32> mGrowTimeMedium;   // _1B0
		Parm<f32> mGrowTimeSmall;    // _1D8
		Parm<f32> mGrowTimeHidden;   // _200
		Parm<f32> mWorkRadiusMax;    // _228
		Parm<f32> mWorkRadiusMedium; // _250
		Parm<f32> mWorkRadiusSmall;  // _278
	};

	RockParms()
	    : mRockParms()
	{
	}

	virtual void read(Stream& input) { mRockParms.read(input); } // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mRockParms; // _DC
};

struct Item : public WorkItem<Item, FSM, State> {
	enum RockSize {
		SIZE_Max          = 0,
		SIZE_Medium       = 1,
		SIZE_Small        = 2,
		SIZE_Disappear    = 3,
		SIZE_VisibleCount = SIZE_Disappear, // 3
	};

	Item();

	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void onKill(CreatureKillArg*);                    // _34
	virtual void doSave(Stream& stream);                      // _E0
	virtual void doLoad(Stream& stream);                      // _E4
	virtual void on_movie_end(bool shouldResetAnims);         // _114
	virtual char* getCreatureName() { return "Rock(Manju)"; } // _1A8 (weak), 'Rock(Bun)' lol
	virtual void doAI();                                      // _1C8
	virtual bool interactAttack(InteractAttack&);             // _1E0
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);     // _204
	virtual f32 getWorkDistance(Sys::Sphere&);                // _208
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _220

	void startLoopEffect();
	void finishLoopEffect();
	void startFukuEffect(Vector3f& fxPos);
	void initMotion();
	void startWaitMotion();
	void startDamageMotion();
	void startDownMotion();
	void startUpMotion();
	void createRock(int visibleSizeCount);
	f32 getWorkRadius();

	// unused/inlined:
	void emitDamageEffect();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	Farm::Obstacle* mObstacle;       // _1EC
	efx::TKouhai1* mEfxKouhaiSmall;  // _1F0
	efx::TKouhai2* mEfxKouhaiMedium; // _1F4
	efx::TKouhai3* mEfxKouhaiMax;    // _1F8
	u8 mMakeEffectDelay;             // _1FC
	f32 mHealth;                     // _200, current health (resets each time size changes)
	f32 mMaxHealth;                  // _204, health at max size
	f32* mHealthLimits;              // _208
	f32* mGrowTimes;                 // _20C
	f32* mWorkRadii;                 // _210, work radii for visible sizes (0, 1, 2)
	f32 mSizeTimer;                  // _214, how long have we been at current size
	f32 mDamageBuffer;               // _218, stores damage dealt while changing sizes (then applied when in normal state)
	int mSize;                       // _21C, 0 = max, 1 = medium, 2 = small, 3 = hidden
	int mSizeCount;                  // _220, number of visible sizes - also size to disappear at
	u32 _224;                        // _224, unknown
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual BaseItem* birth();                                            // _BC
	virtual BaseItem* doNew() { return new Item(); }                      // _A0 (weak)
	virtual u32 generatorGetID() { return 'rock'; }                       // _58 (weak)

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	RockParms* mParms; // _88
};

extern Mgr* mgr;

} // namespace ItemRock
} // namespace Game

#endif
