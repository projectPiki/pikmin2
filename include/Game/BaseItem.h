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
	virtual Vector3f getPosition() // _08 (weak)
	{
		return mPosition;
	}
	virtual void constructor();                  // _2C
	virtual void doAnimation();                  // _3C (weak)
	virtual void doEntry();                      // _40
	virtual void doSimulation(f32);              // _4C
	virtual f32 getFaceDir() { return 0.0f; };   // _64 (weak)
	virtual void setVelocity(Vector3f& velocity) // _60 (weak)
	{
		mVelocity = velocity;
	}
	virtual void updateTrMatrix();                                  // _78
	virtual JAInter::Object* getJAIObject();                        // _F4
	virtual PSM::Creature* getPSCreature();                         // _F8
	virtual Vector3f* getSound_PosPtr() { return &mPosition; }      // _100 (weak)
	virtual void movieStartAnimation(u32 animIdx);                  // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo* info); // _11C
	virtual void movieSetAnimationLastFrame();                      // _120
	virtual void movieSetTranslation(Vector3f& dest, f32 faceDir);  // _124
	virtual bool stimulate(Interaction& data);                      // _1A4
	virtual char* getCreatureName() { return "item"; }              // _1A8 (weak)
	virtual s32 getCreatureID() { return -1; }                      // _1AC (weak)

	// vtable 2 (MotionListener + self)
	virtual void initDependency() { }                                                 // _1BC (weak)
	virtual void startSound(u32);                                                     // _1C0
	virtual void makeTrMatrix();                                                      // _1C4
	virtual void doAI() { }                                                           // _1C8 (weak)
	virtual void move(f32);                                                           // _1CC
	virtual void changeMaterial() {};                                                 // _1D0 (weak)
	virtual void do_updateLOD();                                                      // _1D4
	virtual void do_setLODParm(AILODParm&) { }                                        // _1D8 (weak)
	virtual f32 getMapCollisionRadius() { return mBoundingSphere.mRadius; }           // _1DC (weak)
	virtual bool interactAttack(InteractAttack&) { return false; }                    // _1E0 (weak)
	virtual bool interactBreakBridge(InteractBreakBridge&) { return false; }          // _1E4 (weak)
	virtual bool interactEat(InteractEat&) { return false; }                          // _1E8 (weak)
	virtual bool interactFlockAttack(InteractFlockAttack&) { return false; }          // _1EC (weak)
	virtual bool interactAbsorb(InteractAbsorb&) { return false; }                    // _1F0 (weak)
	virtual bool interactFue(InteractFue&) { return false; }                          // _1F4 (weak)
	virtual bool interactFarmKarero(InteractFarmKarero&) { return false; }            // _1F8 (weak)
	virtual bool interactFarmHaero(InteractFarmHaero&) { return false; }              // _1FC (weak)
	virtual bool interactGotKey(InteractGotKey&) { return false; }                    // _200 (weak)
	virtual bool getVectorField(Sys::Sphere&, Vector3f&) { return true; }             // _204 (weak)
	virtual f32 getWorkDistance(Sys::Sphere&) { return FLOAT_DIST_MAX; }              // _208 (weak)
	virtual void do_doAnimation() { }                                                 // _20C (weak)
	virtual void bounceCallback(Sys::Triangle* tri) { }                               // _E8 (weak)
	virtual void collisionCallback(CollEvent& event) { }                              // _EC (weak)
	virtual void platCallback(PlatEvent& event) { }                                   // _F0 (weak)
	virtual void updateBoundSphere() { }                                              // _210 (weak)
	virtual void getBoundingSphere(Sys::Sphere& sphere) { sphere = mBoundingSphere; } // _10 (weak)
	virtual void update();                                                            // _214
	virtual void entryShape();                                                        // _218
	virtual void onSetPosition(Vector3f& position)                                    // _70 (weak)
	{
		mPosition = position;
		onSetPosition();
	}
	virtual void onSetPosition() { }                     // _21C (weak)
	virtual Vector3f getVelocity() { return mVelocity; } // _6C (weak)
	virtual void getVelocityAt(Vector3f& a, Vector3f& b) // _184 (weak)
	{
		b = Vector3f(0.0f);
	}

	void updateCollTree();

	// _000      = VTBL
	// _000-_178 = Creature
	// _178-_17C = MotionListener ptr
	PSM::CreatureObj* mSoundObj;  // _17C
	BaseItemMgr* mNodeItemMgr;    // _180
	u32 _184;                     // _184
	u32 _188;                     // _188
	Sys::Triangle* mCollTriangle; // _18C
	Vector3f mVelocity;           // _190
	Vector3f mPosition;           // _19C
	SysShape::Animator mAnimator; // _1A8
	Sys::Sphere mBoundingSphere;  // _1C4
	f32 mAnimSpeed;               // _1D4, in FPS
};

struct CFSMItem : public BaseItem {
	typedef FSMState<CFSMItem> StateType;

	inline CFSMItem(int objTypeID)
	    : BaseItem(objTypeID)
	    , mFsm(nullptr)
	    , mCurrentState(nullptr)
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

	// _000      = VTBL
	// _000-_1D8 = BaseItem
	CItemFSM* mFsm;                    // _1D8
	FSMState<CFSMItem>* mCurrentState; // _1DC
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

	virtual void onDamage(T*, f32) { }                         // _18
	virtual void onKeyEvent(T*, const SysShape::KeyEvent&) { } // _1C
	virtual void onBounce(T*, Sys::Triangle*) { }              // _20
	virtual void onPlatCollision(T*, PlatEvent&) { }           // _24
	virtual void onCollision(T*, CollEvent&) { }               // _28
};

template <typename ItemClass, typename FSMClass, typename StateClass>
struct FSMItem : public BaseItem {
	typedef StateClass StateType;

	inline FSMItem(int objTypeID)
	    : BaseItem(objTypeID)
	    , mFsm(nullptr)
	    , mCurrentState(nullptr)
	{
		mFsm = new FSMClass();
		mFsm->init(static_cast<ItemClass*>(this));
	}

	// vtable 1
	// vtable 2
	virtual void bounceCallback(Sys::Triangle* tri);         // _E0
	virtual void collisionCallback(CollEvent& event);        // _E4
	virtual void platCallback(PlatEvent& event);             // _E8
	virtual void doAI() { mFsm->exec((ItemClass*)this); }    // _10
	virtual void onKeyEvent(const SysShape::KeyEvent& event) // _68 (thunked at _00)
	{
		if (mCurrentState) {
			mCurrentState->onKeyEvent((ItemClass*)this, event);
		}
	}

	int getStateID();
	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	// _000      = VTBL
	// _000-_1D8 = BaseItem
	FSMClass* mFsm;            // _1D8
	StateClass* mCurrentState; // _1DC
};

template <typename ItemClass, typename FSMClass, typename StateClass>
struct WorkItem : public FSMItem<ItemClass, FSMClass, StateClass> {
	inline WorkItem(int objTypeID)
	    : FSMItem<ItemClass, FSMClass, StateClass>(objTypeID)
	    , mSoundEvent()
	{
	}

	// I have no idea why these are suddenly pure virtual here but they're required. - HP
	virtual void constructor()                           = 0; // _2C
	virtual bool getVectorField(Sys::Sphere&, Vector3f&) = 0; // _204
	virtual f32 getWorkDistance(Sys::Sphere&)            = 0; // _208

	// _000      = VTBL
	// _000-_1E0 = FSMItem
	TSoundEvent mSoundEvent; // _1E0
};

template <typename ItemClass, typename FSMClass, typename StateClass>
int FSMItem<ItemClass, FSMClass, StateClass>::getStateID()
{
	if (mCurrentState) {
		return (mCurrentState->getCurrStateID());
	}
	return -1;
}

// template <typename ItemClass, typename FSMClass, typename StateClass>
// void FSMItem<ItemClass, FSMClass, StateClass>::doAI()
// {

// }
template <typename ItemClass, typename FSMClass, typename StateClass>
void FSMItem<ItemClass, FSMClass, StateClass>::bounceCallback(Sys::Triangle* tri)
{
	if (mCurrentState) {
		mCurrentState->onBounce((ItemClass*)this, tri);
	}
}
template <typename ItemClass, typename FSMClass, typename StateClass>
void FSMItem<ItemClass, FSMClass, StateClass>::collisionCallback(CollEvent& event)
{
	if (mCurrentState) {
		mCurrentState->onCollision((ItemClass*)this, event);
	}
}
template <typename ItemClass, typename FSMClass, typename StateClass>
void FSMItem<ItemClass, FSMClass, StateClass>::platCallback(PlatEvent& event)
{
	if (mCurrentState) {
		mCurrentState->onPlatCollision((ItemClass*)this, event);
	}
}

} // namespace Game

// defined here to avoid include loop
namespace efx {
inline Arg::Arg(Game::BaseItem* item) { mPosition = item->mPosition; }
} // namespace efx

#endif
