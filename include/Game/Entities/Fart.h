#ifndef _GAME_ENTITIES_FART_H
#define _GAME_ENTITIES_FART_H

#include "Game/Entities/Kogane.h"
#include "efx/TBaba.h"

/**
 * --Header for Doodlebug (Fart)--
 */

namespace Game {
namespace Fart {
struct Obj : public Kogane::Obj {
	Obj();

	//////////////// VTABLE
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void doUpdateCommon();                     // _1D0
	virtual void doDebugDraw(Graphics& gfx);           // _1EC
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Fart;
	}
	virtual void createItem();           // _2FC
	virtual void resetFartTimer();       // _300
	virtual void startBodyEffect();      // _304
	virtual void finishBodyEffect();     // _308
	virtual void createFartEffect();     // _30C
	virtual void effectDrawOn();         // _310
	virtual void effectDrawOff();        // _314
	virtual void createPressSESpecial(); // _31C
	//////////////// VTABLE END

	/**
	 * @fabricated
	 */
	inline void getFartDistance2D(Vector3f& point, Vector2f& sep)
	{
		sep.x = mFartPosition.x - point.x;
		sep.y = mFartPosition.z - point.z;
	}

	void interactFartGasAttack();
	void createEffect();

	// _00 		= VTBL
	// _00-_2DC	= Kogane::Obj
	f32 mFartTimer;                   // _2DC
	Vector3f mFartPosition;           // _2E0
	efx::TBabaFly_ver01* mBodyEffect; // _2EC
	                                  // _2F0 = PelletView
};

struct Mgr : public Kogane::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void doAlloc();                            // _A8
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Fart;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00 		= VTBL
	// _00-_48	= Kogane::Mgr
	Obj* mObj; // _48, array of Objs
};
} // namespace Fart
} // namespace Game

#endif
