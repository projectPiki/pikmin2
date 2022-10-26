#ifndef _GAME_ENTITIES_BOMBOTAKARA_H
#define _GAME_ENTITIES_BOMBOTAKARA_H

#include "Game/Entities/OtakaraBase.h"

/**
 * --Header for Volatile Dweevil (BombOtakara)--
 */

namespace Game {
namespace BombOtakara {
struct Obj : public OtakaraBase::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_BombOtakara;
	}
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool earthquakeCallBack(Creature*, f32);         // _28C
	virtual bool bombCallBack(Creature*, Vector3f&, f32);    // _294
	virtual void interactCreature(Creature*) { }             // _2FC (weak)
	virtual void createEffect() { }                          // _300 (weak)
	virtual void setupEffect() { }                           // _304 (weak)
	virtual void startChargeEffect() { }                     // _308 (weak)
	virtual void finishChargeEffect() { }                    // _30C (weak)
	virtual void createDisChargeEffect() { }                 // _310 (weak)
	virtual void effectDrawOn() { }                          // _314 (weak)
	virtual void effectDrawOff() { }                         // _318 (weak)
	virtual void startEscapeSE();                            // _31C
	virtual void startDisChargeSE() { }                      // _320 (weak)

	// _00 		= VTBL
	// _00-_2F4 = OtakaraBase::Obj
};

struct Mgr : public OtakaraBase::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                       // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_BombOtakara;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return m_changeTexture;
	}

	// _00 		= VTBL
	// _00-_48	= OtakaraBase::Mgr
	Obj* m_obj; // _48, array of Objs
};
} // namespace BombOtakara
} // namespace Game

#endif
