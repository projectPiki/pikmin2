#ifndef _GAME_ENTITIES_ITEMGATE_H
#define _GAME_ENTITIES_ITEMGATE_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "efx/TForever.h"

namespace Game {
struct ItemGate;

struct ItemGateInitArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	// _00     = VTBL
	f32 _04; // _04
};

struct GateFSM : public StateMachine<ItemGate> {
	virtual void init(ItemGate*); // _08

	// _00     = VTBL
	// _00-_1C = StateMachine
};

struct GateState : public ItemState<ItemGate> {
	inline GateState(int stateID)
	    : ItemState(stateID)
	{
	}

	virtual void onDamage(ItemGate*, f32);                         // _20 (weak)
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct GateDamagedState : public GateState {
	// needs an inline ctor probably

	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, f32);                         // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = GateState
};

struct GateDownState : public GateState {
	// needs an inline ctor probably

	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, f32);                         // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = GateState
};

struct GateWaitState : public GateState {
	// needs an inline ctor probably

	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, f32);                         // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = GateState
};

struct ItemGate : public FSMItem<ItemGate, GateFSM, GateState> {
	inline ItemGate(int objType)
	    : FSMItem(objType)
	{ // probably needs things in here, just an initial guess
	}

	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual f32 getFaceDir();                                 // _64 (weak)
	virtual void doSave(Stream&);                             // _E0
	virtual void doLoad(Stream&);                             // _E4
	virtual void getLifeGaugeParam(LifeGaugeParam&);          // _13C
	virtual u32* getMabiki();                                 // _150 (weak)
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

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	TSoundEvent m_soundEvent;            // _1E0
	u32 _1EC;                            // _1EC, mabiki? might be size 0x8?
	int _1F0;                            // _1F0
	PlatInstance* m_centrePlatInstance;  // _1F4
	PlatInstance* m_sidePlatInstance;    // _1F8
	WayPoint* m_wayPoint;                // _1FC
	f32 m_maxHealth;                     // _200
	f32 _204;                            // _204
	f32 m_health;                        // _208
	int m_gateType;                      // _20C, enum?
	int _210;                            // _210
	f32 m_faceDir;                       // _214
	bool m_isElectric;                   // _218
	efx::TChaseMtx* _21C;                // _21C
	efx::TForever2* _220;                // _220
	Plane m_planes[4];                   // _224
	Vector3f _264;                       // _264
	Vector3f _270;                       // _270
	u8 _27C;                             // _27C, unknown
	Sys::MatBaseAnimator* m_matAnimator; // _280
};

struct ItemGateMgr : public BaseItemMgr {
	ItemGateMgr();

	virtual void doAnimation();                                           // _08 (weak)
	virtual void doEntry();                                               // _0C (weak)
	virtual void doSetView(int viewportNumber);                           // _10 (weak)
	virtual void doViewCalc();                                            // _14 (weak)
	virtual void doSimulation(float rate);                                // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx);                             // _1C (weak)
	virtual void initDependency();                                        // _38
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);     // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual void getCaveName(int);                                        // _74
	virtual void getCaveID(char*);                                        // _78

	void setupGate(ItemGate*);
	void setupPlatform(ItemGate*);
	BaseItem* birth();

	// _00     = VTBL
	// _00-_30 = BaseItemMgr
	NodeObjectMgr<ItemGate> m_nodeObjectMgr; // _30
	Platform* m_centrePlatform;              // _6C
	Platform* m_sidePlatform;                // _70
	Sys::MatTevRegAnimation m_matTevRegAnim; // _74
};

extern ItemGateMgr* itemGateMgr;
} // namespace Game

struct GenGateParm : public Game::GenItemParm {

	// _00     = VTBL
	f32 _04;     // _04
	u16 m_color; // _08
};

#endif