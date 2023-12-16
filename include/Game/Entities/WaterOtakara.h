#ifndef _GAME_ENTITIES_WATEROTAKARA_H
#define _GAME_ENTITIES_WATEROTAKARA_H

#include "Game/Entities/OtakaraBase.h"
#include "efx/TOta.h"

/**
 * --Header for Caustic Dweevil (WaterOtakara)--
 */

namespace efx {
struct TChaseMtxT2;
};

namespace Game {
namespace WaterOtakara {
struct Obj : public OtakaraBase::Obj {
	Obj();

	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_WaterOtakara;
	}
	virtual void interactCreature(Creature*); // _2FC
	virtual void createEffect();              // _300
	virtual void setupEffect();               // _304
	virtual void startChargeEffect();         // _308
	virtual void finishChargeEffect();        // _30C
	virtual void createDisChargeEffect();     // _310
	virtual void effectDrawOn();              // _314
	virtual void effectDrawOff();             // _318
	virtual void startDisChargeSE();          // _320

	// _00 		= VTBL
	// _00-_2F4 = OtakaraBase::Obj
	efx::TOtaChargewat* mEfxChargeWater; // _2F4
};

struct Mgr : public OtakaraBase::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_WaterOtakara;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00 		= VTBL
	// _00-_48	= OtakaraBase::Mgr
	Obj* mObj; // _48, array of Objs
};
} // namespace WaterOtakara
} // namespace Game

#endif
