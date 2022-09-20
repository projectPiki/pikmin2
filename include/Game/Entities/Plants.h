#ifndef _GAME_ENTITIES_PLANTS_H
#define _GAME_ENTITIES_PLANTS_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"

/**
 * --Header for Plant Base Class (Plants)--
 * Derived classes:
 * Chiyogami		= Chiyogami Paper
 * Clover			= Clover
 * DiodeGreen		= Glowstem (Green)
 * DiodeRed			= Glowstem (Red)
 * HikariKinoko		= Common Glowcap
 * KareOoinu_l		= Figwort (Brown, Large)
 * KareOoinu_s		= Figwort (Brown, Small)
 * Margaret			= Margaret
 * Nekojarashi		= Foxtail
 * Ooinu_l			= Figwort (Red, Large)
 * Ooinu_s			= Figwort (Red, Small)
 * Tanpopo			= Dandelion
 * Tukushi			= Horsetail
 * Wakame_l			= Shoot (Large)
 * Wakame_s			= Shoot (Small)
 * Watage			= Seeding Dandelion
 * Zenmai			= Fiddlehead
 */

namespace Game {
namespace Plants {
struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg*);         // _30
	virtual void doAnimation();                    // _3C
	virtual void doSimulation(f32) { }             // _4C (weak)
	virtual bool isLivingThing() { return false; } // _D4 (weak)
	virtual void collisionCallback(CollEvent&);    // _EC
	virtual bool ignoreAtari(Creature* creature)   // _190 (weak)
	{
		if ((creature != nullptr) && (creature->isTeki())) {
			return true;
		}
		return false;
	}
	virtual ~Obj() { }                                         // _1BC (weak)
	virtual void birth(Vector3f&, f32);                        // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) { } // _1C4 (weak)
	virtual void update();                                     // _1C8
	virtual void doUpdate() { }                                // _1CC (weak)
	virtual void doUpdateCommon() { }                          // _1D0 (weak)
	virtual void doAnimationCullingOff();                      // _1DC
	virtual void doDebugDraw(Graphics&);                       // _1EC
	virtual void setParameters();                              // _228
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() = 0;    // _258
	virtual bool earthquakeCallBack(Creature*, f32);           // _28C
	virtual void touched();                                    // _2F8
	virtual void touchedSE(Navi*);                             // _2FC
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	u8 _2BC;                  // _2BC, unknown
	u8 _2BD;                  // _2BD, unknown
	bool m_spawnsSpectralids; // _2BE, spawns spectralids on touch
	                          // _2BF = PelletView
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr*);                     // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10 (weak)
	virtual SysShape::Animator& getAnimator(int);                    // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};
} // namespace Plants
} // namespace Game

#endif
