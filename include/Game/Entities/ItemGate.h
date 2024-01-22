#ifndef _GAME_ENTITIES_ITEMGATE_H
#define _GAME_ENTITIES_ITEMGATE_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "efx/TEgate.h"
#include "efx/TGate.h"

enum GateStates {
	GATESTATE_Wait    = 0,
	GATESTATE_Damaged = 1,
	GATESTATE_Down    = 2,
	GATESTATE_MAX, // 3
};

enum GateColor {
	GATECOLOR_White = 0,
	GATECOLOR_Black = 1,
};

namespace Game {
struct ItemGate;

struct ItemGateInitArg : public CreatureInitArg {
	virtual const char* getName() { return "ItemGateInitArg"; } // _08 (weak)

	// _00     = VTBL
	f32 mFaceDir; // _04
};

struct GateFSM : public ItemFSM<ItemGate> {
	virtual void init(ItemGate*); // _08

	// _00     = VTBL
	// _00-_1C = StateMachine
};

struct GateState : public ItemState<ItemGate> {
	inline GateState(int stateID)
	    : ItemState(stateID)
	{
	}

	virtual void onDamage(ItemGate*, f32) { }                         // _20 (weak)
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&) { } // _24 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct GateDamagedState : public GateState {
	GateDamagedState()
	    : GateState(GATESTATE_Damaged)
	{
	}

	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, f32);                         // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24

	unknown _0C;     // _0C
	bool mNotInAnim; // _10

	// _00     = VTBL
	// _00-_0C = GateState
};

struct GateDownState : public GateState {
	GateDownState()
	    : GateState(GATESTATE_Down)
	{
	}

	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, f32);                         // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24

	unknown _10; // _10

	// _00     = VTBL
	// _00-_0C = GateState
};

struct GateWaitState : public GateState {
	GateWaitState()
	    : GateState(GATESTATE_Wait)
	{
	}

	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, f32);                         // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24

	unknown _10; // _10

	// _00     = VTBL
	// _00-_0C = GateState
};

struct ItemGate : public WorkItem<ItemGate, GateFSM, GateState> {
	ItemGate();

	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual f32 getFaceDir();                                 // _64 (weak)
	virtual void doSave(Stream& stream);                      // _E0
	virtual void doLoad(Stream& stream);                      // _E4
	virtual void getLifeGaugeParam(LifeGaugeParam&);          // _13C
	virtual Mabiki* getMabiki();                              // _150 (weak)
	virtual char* getCreatureName();                          // _1A8 (weak)
	virtual void makeTrMatrix();                              // _1C4 (weak)
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual bool interactAttack(InteractAttack&);             // _1E0
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);     // _204
	virtual f32 getWorkDistance(Sys::Sphere&);                // _208
	virtual void updateBoundSphere();                         // _210
	virtual void update();                                    // _214
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _220 (weak)

	void initMotion();
	void initPlanes();

	inline f32 getGateHealth();

	// unused/inlined:
	void startDamageMotion();
	void startDownMotion();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	Mabiki mMabiki;                     // _1EC
	PlatInstance* mCentrePlatInstance;  // _1F4
	PlatInstance* mSidePlatInstance;    // _1F8
	WayPoint* mWayPoint;                // _1FC
	f32 mCurrentSegmentHealth;          // _200
	f32 mMaxSegmentHealth;              // _204
	f32 mDamage;                        // _208
	int mSegmentsDown;                  // _20C, enum?
	int mMaxSegments;                   // _210
	f32 mFaceDir;                       // _214
	bool mIsElectric;                   // _218
	efx::TEgateA* mEgateEfxA;           // _21C
	efx::TEgateBC* mEgateEfxBC;         // _220
	Plane mPlanes[4];                   // _224
	Vector3f _264;                      // _264
	Vector3f _270;                      // _270
	u8 mColor;                          // _27C
	Sys::MatBaseAnimator* mMatAnimator; // _280
};

struct ItemGateMgr : public BaseItemMgr {
	ItemGateMgr();

	virtual void doAnimation();                                           // _08 (weak)
	virtual void doEntry();                                               // _0C (weak)
	virtual void doSetView(int viewportNumber);                           // _10 (weak)
	virtual void doViewCalc();                                            // _14 (weak)
	virtual void doSimulation(f32 rate);                                  // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx);                             // _1C (weak)
	virtual void initDependency();                                        // _38
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual char* getCaveName(int);                                       // _74
	virtual int getCaveID(char*);                                         // _78

	void setupGate(ItemGate*);
	void setupPlatform(ItemGate*);
	BaseItem* birth();

	// _00     = VTBL
	// _00-_30 = BaseItemMgr
	NodeObjectMgr<ItemGate> mNodeObjectMgr; // _30
	Platform* mCentrePlatform;              // _6C
	Platform* mSidePlatform;                // _70
	Sys::MatTevRegAnimation mMatTevRegAnim; // _74
};

extern ItemGateMgr* itemGateMgr;
} // namespace Game

struct GenGateParm : public Game::GenItemParm {
	inline GenGateParm()
	{
		mLife  = 100.0f;
		mColor = 0;
	}

	// _00     = VTBL
	f32 mLife;  // _04
	s16 mColor; // _08
};

#endif
