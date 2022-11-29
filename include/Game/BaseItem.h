#ifndef _GAME_BASEITEM_H
#define _GAME_BASEITEM_H

#include "Game/Creature.h"
#include "Game/StateMachine.h"
#include "Game/TSoundEvent.h"
#include "SysShape/MotionListener.h"
#include "GenericObjectMgr.h"
#include "efx/Arg.h"
#include "types.h"

namespace PSM {
struct CreatureObj;
} // namespace PSM

namespace Game {
struct BaseItemMgr;
struct CItemFSM;
struct CItemState;
struct InteractAbsorb;
struct InteractAttack;
struct InteractBreakBridge;
struct InteractEat;
struct InteractFarmHaero;
struct InteractFarmKarero;
struct InteractFlockAttack;
struct InteractFue;
struct InteractGotKey;

struct ItemInitArg : public CreatureInitArg {
	virtual const char* getName() { return "ItemInitArg"; } // _08 (weak)

	// _00 = VTBL
};

struct BaseItem : public Creature, public SysShape::MotionListener {
	BaseItem(int);

	// vtable 1 (Creature)
	virtual Vector3f getPosition();              // _08 (weak)
	virtual void constructor();                  // _2C
	virtual void doAnimation();                  // _3C (weak)
	virtual void doEntry();                      // _40
	virtual void doSimulation(f32);              // _4C
	virtual f32 getFaceDir();                    // _64 (weak)
	virtual void setVelocity(Vector3f& velocity) // _60 (weak)
	{
		m_velocity = velocity;
	}
	virtual void updateTrMatrix();                                  // _78
	virtual JAInter::Object* getJAIObject();                        // _F4
	virtual PSM::Creature* getPSCreature();                         // _F8
	virtual Vector3f* getSound_PosPtr() { return &m_position; }     // _100 (weak)
	virtual void movieStartAnimation(u32 animIdx);                  // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo* info); // _11C
	virtual void movieSetAnimationLastFrame();                      // _120
	virtual void movieSetTranslation(Vector3f& dest, f32 faceDir);  // _124
	virtual bool stimulate(Interaction& data);                      // _1A4
	virtual char* getCreatureName();                                // _1A8 (weak)
	virtual s32 getCreatureID() { return -1; }                      // _1AC (weak)

	// vtable 2 (MotionListener + self)
	virtual void initDependency() { }                                                  // _1BC (weak)
	virtual void startSound(u32);                                                      // _1C0
	virtual void makeTrMatrix();                                                       // _1C4
	virtual void doAI();                                                               // _1C8 (weak)
	virtual void move(f32);                                                            // _1CC
	virtual void changeMaterial();                                                     // _1D0 (weak)
	virtual void do_updateLOD();                                                       // _1D4
	virtual void do_setLODParm(AILODParm&) { }                                         // _1D8 (weak)
	virtual f32 getMapCollisionRadius() { return m_boundingSphere.m_radius; }          // _1DC (weak)
	virtual bool interactAttack(InteractAttack&) { return false; }                     // _1E0 (weak)
	virtual bool interactBreakBridge(InteractBreakBridge&) { return false; }           // _1E4 (weak)
	virtual bool interactEat(InteractEat&) { return false; }                           // _1E8 (weak)
	virtual bool interactFlockAttack(InteractFlockAttack&) { return false; }           // _1EC (weak)
	virtual bool interactAbsorb(InteractAbsorb&) { return false; }                     // _1F0 (weak)
	virtual bool interactFue(InteractFue&) { return false; }                           // _1F4 (weak)
	virtual bool interactFarmKarero(InteractFarmKarero&) { return false; }             // _1F8 (weak)
	virtual bool interactFarmHaero(InteractFarmHaero&) { return false; }               // _1FC (weak)
	virtual bool interactGotKey(InteractGotKey&) { return false; }                     // _200 (weak)
	virtual bool getVectorField(Sys::Sphere&, Vector3f&) { return true; }              // _204 (weak)
	virtual f32 getWorkDistance(Sys::Sphere&) { return 128000.0f; }                    // _208 (weak)
	virtual void do_doAnimation();                                                     // _20C (weak)
	virtual void bounceCallback(Sys::Triangle* tri) { }                                // _E8 (weak)
	virtual void collisionCallback(CollEvent& event) { }                               // _EC (weak)
	virtual void platCallback(PlatEvent& event) { }                                    // _F0 (weak)
	virtual void updateBoundSphere() { }                                               // _210 (weak)
	virtual void getBoundingSphere(Sys::Sphere& sphere) { sphere = m_boundingSphere; } // _10 (weak)
	virtual void update();                                                             // _214
	virtual void entryShape();                                                         // _218
	virtual void onSetPosition(Vector3f& position)                                     // _70 (weak)
	{
		m_position = position;
		onSetPosition();
	}
	virtual void onSetPosition() { }                      // _21C (weak)
	virtual Vector3f getVelocity() { return m_velocity; } // _6C (weak)
	virtual void getVelocityAt(Vector3f& a, Vector3f& b)  // _184 (weak)
	{
		b = Vector3f(0.0f);
	}

	void updateCollTree();

	// Creature: _000 - _178
	// MotionListener: _178 - _17C
	PSM::CreatureObj* m_soundObj;  // _17C
	BaseItemMgr* m_nodeItemMgr;    // _180
	u32 _184;                      // _184
	u32 _188;                      // _188
	Sys::Triangle* _18C;           // _18C
	Vector3f m_velocity;           // _190
	Vector3f m_position;           // _19C
	SysShape::Animator m_animator; // _1A8
	Sys::Sphere m_boundingSphere;  // _1C4
	f32 m_animSpeed;               // _1D4, in FPS
};

struct CFSMItem : public BaseItem {
	inline CFSMItem(int objTypeID)
	    : BaseItem(objTypeID)
	    , m_stateMachine(nullptr)
	    , m_currState(nullptr)
	{
	}

	// vtable 1
	virtual void constructor();                       // _2C
	virtual void bounceCallback(Sys::Triangle* tri);  // _E8
	virtual void collisionCallback(CollEvent& event); // _EC
	virtual void platCallback(PlatEvent& event);      // _F0

	// vtable 2
	virtual void doAI();                                      // _1C8
	virtual CItemFSM* createFSM() = 0;                        // _220
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _224 (weak)

	void initFSM();
	void setCurrState(FSMState<CFSMItem>*);
	FSMState<CFSMItem>* getCurrState();
	int getStateID();

	CItemFSM* m_stateMachine;        // _1D8
	FSMState<CFSMItem>* m_currState; // _1DC
};

struct CItemFSM : public StateMachine<CFSMItem> {
	// _00     = VTBL
	// _00-_1C = StateMachine
};

template <typename T>
struct ItemFSM : public StateMachine<T> {
};

struct CItemState : public FSMState<CFSMItem> {
	inline CItemState(int id)
	    : FSMState(id)
	{
	}

	virtual void onDamage(CFSMItem*, f32) { }                         // _20 (weak)
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&) { } // _24 (weak)
	virtual void onBounce(CFSMItem*, Sys::Triangle*) { }              // _28 (weak)
	virtual void onPlatCollision(CFSMItem*, PlatEvent&) { }           // _2C (weak)
	virtual void onCollision(CFSMItem*, CollEvent&) { }               // _30 (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
};

template <typename T>
struct ItemState : public FSMState<T> {
	inline ItemState(int id)
	    : FSMState<T>(id)
	{
	}

	virtual void onDamage(T*, f32) {};                         // _18
	virtual void onKeyEvent(T*, const SysShape::KeyEvent&) {}; // _1C
	virtual void onBounce(T*, Sys::Triangle*) {};              // _20
	virtual void onPlatCollision(T*, PlatEvent&) {};           // _24
	virtual void onCollision(T*, CollEvent&) {};               // _28
};

template <typename ItemClass, typename FSMClass, typename StateClass>
struct FSMItem : public BaseItem {
	inline FSMItem(int objTypeID)
	    : BaseItem(objTypeID)
	    , m_stateMachine(nullptr)
	    , m_currentState(nullptr)
	{
		m_stateMachine = new FSMClass();
		m_stateMachine->init(static_cast<ItemClass*>(this));
	}

	// vtable 1
	virtual void bounceCallback(Sys::Triangle* tri) // _E0
	{
		StateClass* state = m_currentState;
		if (state) {
			static_cast<ItemState<ItemClass>*>(state)->onBounce((ItemClass*)this, tri);
		}
	}

	virtual void collisionCallback(CollEvent& event) // _E4
	{
		StateClass* state = m_currentState;
		if (state) {
			static_cast<ItemState<ItemClass>*>(state)->onCollision((ItemClass*)this, event);
		}
	}

	virtual void platCallback(PlatEvent& event) // _E8
	{
		StateClass* state = m_currentState;
		if (state) {
			static_cast<ItemState<ItemClass>*>(state)->onPlatCollision((ItemClass*)this, event);
		}
	}

	// vtable 2
	virtual void doAI() // _10
	{
		static_cast<ItemFSM<ItemClass>*>(m_stateMachine)->exec((ItemClass*)this);
	}

	virtual void onKeyEvent(const SysShape::KeyEvent& event) // _68 (thunked at _00)
	{
		StateClass* state = m_currentState;
		if (state) {
			static_cast<ItemState<ItemClass>*>(state)->onKeyEvent((ItemClass*)this, event);
		}
	}

	FSMClass* m_stateMachine;   // _1D8
	StateClass* m_currentState; // _1DC
};

template <typename ItemClass, typename FSMClass, typename StateClass>
struct WorkItem : public FSMItem<ItemClass, FSMClass, StateClass> {
	inline WorkItem(int objTypeID)
	    : FSMItem<ItemClass, FSMClass, StateClass>(objTypeID)
	    , m_soundEvent()
	{
	}

	TSoundEvent m_soundEvent; // _1E0
};

} // namespace Game

// defined here to avoid include loop
namespace efx {
inline Arg::Arg(Game::BaseItem* item) { m_position = item->m_position; }
} // namespace efx

#endif
