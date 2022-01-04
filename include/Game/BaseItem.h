#ifndef _GAME_BASEITEM_H
#define _GAME_BASEITEM_H

#include "Game/Creature.h"
#include "SysShape/MotionListener.h"
#include "types.h"

namespace PSM {
struct CreatureObj;
} // namespace PSM

namespace Game {
struct BaseItemMgr;
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
	virtual void getJAIObject();                               // _EC
	virtual PSM::Creature* getPSCreature();                    // _F0
	virtual Vector3f* getSound_PosPtr();                       // _F8
	virtual void movieStartAnimation(u32);                     // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*); // _114
	virtual void movieSetAnimationLastFrame();                 // _118
	virtual void movieSetTranslation(Vector3f&, float);        // _11C
	virtual void getVelocityAt(Vector3f&, Vector3f&);          // _17C
	virtual void stimulate(Interaction&);                      // _19C
	virtual char* getCreatureName();                           // _1A0
	virtual int getCreatureID();                               // _1A4
	// vtable 2 (MotionListener + self)
	virtual void onKeyEvent(const SysShape::KeyEvent&) = 0; // _1B0
	virtual void initDependency();                          // _1B4
	virtual void startSound(u32);                           // _1B8
	virtual void makeTrMatrix();                            // _1BC
	virtual void doAI();                                    // _1C0
	virtual void move(float);                               // _1C4
	virtual void changeMaterial();                          // _1C8
	virtual void do_updateLOD();                            // _1CC
	virtual void do_setLODParm(AILODParm&);                 // _1D0
	virtual float getMapCollisionRadius();                  // _1D4
	virtual void interactAttack(InteractAttack&);           // _1D8
	virtual void interactBreakBridge(InteractBreakBridge&); // _1DC
	virtual void interactEat(InteractEat&);                 // _1E0
	virtual void interactFlockAttack(InteractFlockAttack&); // _1E4
	virtual void interactAbsorb(InteractAbsorb&);           // _1E8
	virtual void interactFue(InteractFue&);                 // _1EC
	virtual void interactFarmKarero(InteractFarmKarero&);   // _1F0
	virtual void interactFarmHaero(InteractFarmHaero&);     // _1F4
	virtual void interactGotKey(InteractGotKey&);           // _1F8
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);   // _1FC
	virtual float getWorkDistance(Sys::Sphere&);            // _200
	virtual void do_doAnimation();                          // _204
	virtual void updateBoundSphere();                       // _208
	virtual void update();                                  // _20C
	virtual void entryShape();                              // _210
	virtual void onSetPosition();                           // _214

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
} // namespace Game

#endif
