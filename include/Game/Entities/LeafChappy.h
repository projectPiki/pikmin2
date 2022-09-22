#ifndef _GAME_ENTITIES_LEAFCHAPPY_H
#define _GAME_ENTITIES_LEAFCHAPPY_H

#include "Game/Entities/KumaChappy.h"

/**
 * --Header for (Mother) Bulbmin (LeafChappy)--
 */

namespace Game {
namespace LeafChappy {
struct Obj : public KumaChappy::Obj {
	Obj();

	//////////////// VTABLE
	virtual void doDirectDraw(Graphics&);               // _50
	virtual void getShadowParam(ShadowParam&);          // _134
	virtual Footmarks* getFootmarks();                  // _154 (weak)
	virtual ~Obj();                                     // _1BC (weak)
	virtual void doUpdate();                            // _1CC
	virtual void doUpdateCarcass();                     // _1D4
	virtual void initMouthSlots();                      // _22C
	virtual void initWalkSmokeEffect();                 // _230
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);  // _260
	virtual bool doBecomeCarcass();                     // _2D0
	virtual f32 getDownSmokeScale();                    // _2EC (weak)
	virtual void createChappyRelation();                // _2FC (weak)
	virtual void getChappyRelation();                   // _300 (weak)
	virtual void startEnemyRumble();                    // _304
	virtual void resetChappyRelation();                 // _308 (weak)
	//////////////// VTABLE END

	void birthChildren(EnemyBirthArg&);
	void createFootmarks();

	// _00 		= VTBL
	// _00-_2F8	= KumaChappy::Obj
	Footmarks* m_footmarks; // _2F8
	                        // _2FC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int, u8);

	//////////////// VTABLE
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* m_obj; // _44, array of Objs
};

} // namespace LeafChappy
} // namespace Game

#endif
