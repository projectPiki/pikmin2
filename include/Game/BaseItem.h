#ifndef _GAME_BASEITEM_H
#define _GAME_BASEITEM_H

#include "Game/Creature.h"
#include "Game/StateMachine.h"
#include "Game/TSoundEvent.h"
#include "SysShape/MotionListener.h"
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

struct BaseItem : public Creature, public SysShape::MotionListener {
	BaseItem(int);

	// vtable 1 (Creature)
	virtual Vector3f getPosition();               // _08 (weak)
	virtual void getBoundingSphere(Sys::Sphere&); // _10 (weak)
	virtual void constructor();                   // _2C
	virtual void doAnimation();                   // _3C (weak)
	virtual void doEntry();                       // _40
	virtual void doSimulation(float);             // _4C
	virtual float getFaceDir();                   // _64 (weak)
	virtual void setVelocity(Vector3f& velocity)  // _60 (weak)
	{
		m_velocity = velocity;
	}
	virtual Vector3f getVelocity();                            // _6C (weak)
	virtual void onSetPosition(Vector3f&);                     // _70 (weak)
	virtual void updateTrMatrix();                             // _78
	virtual void bounceCallback(Sys::Triangle*);               // _E8 (weak)
	virtual void collisionCallback(CollEvent&);                // _EC (weak)
	virtual void platCallback(PlatEvent&);                     // _F0 (weak)
	virtual JAInter::Object* getJAIObject();                   // _F4
	virtual PSM::Creature* getPSCreature();                    // _F8
	virtual Vector3f* getSound_PosPtr();                       // _100 (weak)
	virtual void movieStartAnimation(u32);                     // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*); // _11C
	virtual void movieSetAnimationLastFrame();                 // _120
	virtual void movieSetTranslation(Vector3f&, float);        // _124
	virtual void getVelocityAt(Vector3f&, Vector3f&);          // _184 (weak)
	virtual bool stimulate(Interaction&);                      // _1A4
	virtual char* getCreatureName();                           // _1A8 (weak)
	virtual s32 getCreatureID();                               // _1AC (weak)

	// vtable 2 (MotionListener + self)
	virtual void onKeyEvent(const SysShape::KeyEvent&) = 0; // _08
	virtual void initDependency();                          // _0C (weak)
	virtual void startSound(u32);                           // _10
	virtual void makeTrMatrix();                            // _14
	virtual void doAI();                                    // _18 (weak)
	virtual void move(float);                               // _1C
	virtual void changeMaterial();                          // _20 (weak)
	virtual void do_updateLOD();                            // _24
	virtual void do_setLODParm(AILODParm&);                 // _28 (weak)
	virtual float getMapCollisionRadius();                  // _2C (weak)
	virtual bool interactAttack(InteractAttack&);           // _30 (weak)
	virtual bool interactBreakBridge(InteractBreakBridge&); // _34 (weak)
	virtual bool interactEat(InteractEat&);                 // _38 (weak)
	virtual bool interactFlockAttack(InteractFlockAttack&); // _3C (weak)
	virtual bool interactAbsorb(InteractAbsorb&);           // _40 (weak)
	virtual bool interactFue(InteractFue&);                 // _44 (weak)
	virtual bool interactFarmKarero(InteractFarmKarero&);   // _48 (weak)
	virtual bool interactFarmHaero(InteractFarmHaero&);     // _4C (weak)
	virtual bool interactGotKey(InteractGotKey&);           // _50 (weak)
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);   // _54 (weak)
	virtual float getWorkDistance(Sys::Sphere&);            // _58 (weak)
	virtual void do_doAnimation();                          // _5C (weak)
	virtual void updateBoundSphere();                       // _60 (weak)
	virtual void update();                                  // _64
	virtual void entryShape();                              // _68
	virtual void onSetPosition();                           // _6C (weak)

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
	float m_animSpeed;             // _1D4
};

struct CFSMItem : public BaseItem {
	inline CFSMItem(int objTypeID)
	    : BaseItem(objTypeID)
	    , m_stateMachine(nullptr)
	    , m_currState(nullptr)
	{
	}

	// vtable 1
	virtual void constructor();                  // _24
	virtual void bounceCallback(Sys::Triangle*); // _E0
	virtual void collisionCallback(CollEvent&);  // _E4
	virtual void platCallback(PlatEvent&);       // _E8

	// vtable 2
	virtual void doAI();                                // _10
	virtual CItemFSM* createFSM() = 0;                  // _68
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _6C

	void initFSM();
	void setCurrState(FSMState<CFSMItem>*);
	FSMState<CFSMItem>* getCurrState();
	int getStateID();

	CItemFSM* m_stateMachine;        // _1D8
	FSMState<CFSMItem>* m_currState; // _1DC
};

struct CItemFSM : public StateMachine<CFSMItem> {
};

template <typename T> struct ItemFSM : public StateMachine<T> {
};

struct CItemState : public FSMState<CFSMItem> {
	inline CItemState(int id)
	    : FSMState(id)
	{
	}
	/**
	 * @reifiedAddress{801D2B8C}
	 * @reifiedFile{plugProjectKandoU/itemHole.cpp}
	 */
	virtual void onDamage(CFSMItem*, float) {}; // _18
	/**
	 * @reifiedAddress{801CCB74}
	 * @reifiedFile{plugProjectKandoU/itemMgr.cpp}
	 */
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&) {}; // _1C
	/**
	 * @reifiedAddress{801CCA9C}
	 * @reifiedFile{plugProjectKandoU/itemMgr.cpp}
	 */
	virtual void onBounce(CFSMItem*, Sys::Triangle*) {}; // _20
	/**
	 * @reifiedAddress{801CCB2C}
	 * @reifiedFile{plugProjectKandoU/itemMgr.cpp}
	 */
	virtual void onPlatCollision(CFSMItem*, PlatEvent&) {}; // _24
	/**
	 * @reifiedAddress{801CCAE4}
	 * @reifiedFile{plugProjectKandoU/itemMgr.cpp}
	 */
	virtual void onCollision(CFSMItem*, CollEvent&) {}; // _28
};

template <typename T> struct ItemState : public FSMState<T> {
	inline ItemState(int id)
	    : FSMState<T>(id)
	{
	}

	virtual void onDamage(T*, float) {};                       // _18
	virtual void onKeyEvent(T*, const SysShape::KeyEvent&) {}; // _1C
	virtual void onBounce(T*, Sys::Triangle*) {};              // _20
	virtual void onPlatCollision(T*, PlatEvent&) {};           // _24
	virtual void onCollision(T*, CollEvent&) {};               // _28
};

template <typename ItemClass, typename FSMClass, typename StateClass> struct FSMItem : public BaseItem {
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

template <typename ItemClass, typename FSMClass, typename StateClass> struct WorkItem : public FSMItem<ItemClass, FSMClass, StateClass> {
	inline WorkItem(int objTypeID)
	    : FSMItem<ItemClass, FSMClass, StateClass>(objTypeID)
	    , m_soundEvent()
	{
	}

	TSoundEvent m_soundEvent; // _1E0
};

} // namespace Game

#endif
