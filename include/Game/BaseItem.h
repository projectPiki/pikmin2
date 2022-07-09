#ifndef _GAME_BASEITEM_H
#define _GAME_BASEITEM_H

#include "Game/Creature.h"
#include "Game/StateMachine.h"
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
	virtual Vector3f getPosition();               // _00
	virtual void getBoundingSphere(Sys::Sphere&); // _08
	virtual void constructor();                   // _24
	virtual void doAnimation();                   // _34
	virtual void doEntry();                       // _38
	virtual void doSimulation(float);             // _44
	virtual float getFaceDir();                   // _5C
	/**
	 * @reifiedAddress{801028D4}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual void setVelocity(Vector3f& velocity) // _60
	{
		m_velocity = velocity;
	}
	virtual Vector3f getVelocity();                            // _64
	virtual void onSetPosition(Vector3f&);                     // _68
	virtual void updateTrMatrix();                             // _70
	virtual void bounceCallback(Sys::Triangle*);               // _E0
	virtual void collisionCallback(CollEvent&);                // _E4
	virtual void platCallback(PlatEvent&);                     // _E8
	virtual JAInter::Object* getJAIObject();                   // _EC
	virtual PSM::Creature* getPSCreature();                    // _F0
	virtual Vector3f* getSound_PosPtr();                       // _F8
	virtual void movieStartAnimation(u32);                     // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*); // _114
	virtual void movieSetAnimationLastFrame();                 // _118
	virtual void movieSetTranslation(Vector3f&, float);        // _11C
	virtual void getVelocityAt(Vector3f&, Vector3f&);          // _17C
	virtual bool stimulate(Interaction&);                      // _19C
	virtual char* getCreatureName();                           // _1A0
	virtual s32 getCreatureID();                               // _1A4
	// vtable 2 (MotionListener + self)
	virtual void initDependency();                          // _04
	virtual void startSound(u32);                           // _08
	virtual void makeTrMatrix();                            // _0C
	virtual void doAI();                                    // _10
	virtual void move(float);                               // _14
	virtual void changeMaterial();                          // _18
	virtual void do_updateLOD();                            // _1C
	virtual void do_setLODParm(AILODParm&);                 // _20
	virtual float getMapCollisionRadius();                  // _24
	virtual bool interactAttack(InteractAttack&);           // _28
	virtual bool interactBreakBridge(InteractBreakBridge&); // _2C
	virtual bool interactEat(InteractEat&);                 // _30
	virtual bool interactFlockAttack(InteractFlockAttack&); // _34
	virtual bool interactAbsorb(InteractAbsorb&);           // _38
	virtual bool interactFue(InteractFue&);                 // _3C
	virtual bool interactFarmKarero(InteractFarmKarero&);   // _40
	virtual bool interactFarmHaero(InteractFarmHaero&);     // _44
	virtual bool interactGotKey(InteractGotKey&);           // _48
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);   // _4C
	virtual float getWorkDistance(Sys::Sphere&);            // _50
	virtual void do_doAnimation();                          // _54
	virtual void updateBoundSphere();                       // _58
	virtual void update();                                  // _5C
	virtual void entryShape();                              // _60
	virtual void onSetPosition();                           // _64

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
	virtual void constructor();                         // _24
	virtual void bounceCallback(Sys::Triangle*);        // _E0
	virtual void collisionCallback(CollEvent&);         // _E4
	virtual void platCallback(PlatEvent&);              // _E8
	virtual void doAI();                                // _1C0
	virtual CItemFSM* createFSM() = 0;                  // _218
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _21C

	void initFSM();
	void setCurrState(FSMState<CFSMItem>*);
	FSMState<CFSMItem>* getCurrState();
	int getStateID();

	CItemFSM* m_stateMachine;        // _1D8
	FSMState<CFSMItem>* m_currState; // _1DC
};

struct CItemFSM : public StateMachine<CFSMItem> {
};

struct CItemState : public FSMState<CFSMItem> {
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
} // namespace Game

#endif
