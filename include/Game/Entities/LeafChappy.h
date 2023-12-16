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
	virtual void doDirectDraw(Graphics& gfx);           // _50
	virtual void getShadowParam(ShadowParam& settings); // _134
	virtual ~Obj() { }                                  // _1BC (weak)
	virtual void doUpdate();                            // _1CC
	virtual void doUpdateCarcass();                     // _1D4
	virtual void initMouthSlots();                      // _22C
	virtual void initWalkSmokeEffect();                 // _230
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);  // _260
	virtual bool doBecomeCarcass();                     // _2D0
	virtual void startEnemyRumble();                    // _304
	virtual f32 getDownSmokeScale() { return 0.55f; }   // _2EC (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()  // _258 (weak)
	{
		return EnemyTypeID::EnemyID_LeafChappy;
	}
	virtual void createChappyRelation() { }                         // _2FC (weak)
	virtual void resetChappyRelation() { }                          // _308 (weak)
	virtual ChappyRelation* getChappyRelation() { return nullptr; } // _300 (weak)
	virtual Footmarks* getFootmarks() { return mFootmarks; }        // _154 (weak)
	//////////////// VTABLE END

	void birthChildren(EnemyBirthArg&);
	void createFootmarks();

	// _00 		= VTBL
	// _00-_2F8	= KumaChappy::Obj
	Footmarks* mFootmarks; // _2F8
	                       // _2FC = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	// virtual ~Mgr() { }                                  // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);          // _70
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_LeafChappy;
	}
	//////////////// VTABLE END

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	Obj* mObj; // _44, array of Objs
};

} // namespace LeafChappy
} // namespace Game

#endif
