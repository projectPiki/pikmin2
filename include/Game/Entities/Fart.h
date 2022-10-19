#ifndef _GAME_ENTITIES_FART_H
#define _GAME_ENTITIES_FART_H

#include "Game/Entities/Kogane.h"

/**
 * --Header for Doodlebug (Fart)--
 */

namespace efx {
struct TBabaFly_ver01;
} // namespace efx

namespace Game {
namespace Fart {
struct Obj : public Kogane::Obj {
	Obj();

	//////////////// VTABLE
	virtual ~Obj();                                     // _1BC (weak)
	virtual void doUpdateCommon();                      // _1D0
	virtual void doDebugDraw(Graphics&);                // _1EC
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)
	virtual void createItem();                          // _2FC
	virtual void resetFartTimer();                      // _300
	virtual void startBodyEffect();                     // _304
	virtual void finishBodyEffect();                    // _308
	virtual void createFartEffect();                    // _30C
	virtual void effectDrawOn();                        // _310
	virtual void effectDrawOff();                       // _314
	virtual void createPressSESpecial();                // _31C
	//////////////// VTABLE END

	void interactFartGasAttack();
	void createEffect();

	// _00 		= VTBL
	// _00-_2DC	= Kogane::Obj
	f32 _2DC;                          // _2DC
	Vector3f _2E0;                     // _2E0
	efx::TBabaFly_ver01* m_efxBabaFly; // _2EC
	                                   // _2F0 = PelletView
};

struct Mgr : public Kogane::Mgr {
	Mgr(int objLimit, u8 modelType);

	virtual ~Mgr();                                     // _58 (weak)
	virtual void createObj(int);                        // _A0
	virtual EnemyBase* getEnemy(int);                   // _A4
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual void loadTexData();                         // _D0
	virtual void getChangeTexture();                    // _E0 (weak)

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	u8 _44[0x4]; // _44, unknown
	Obj* m_obj;  // _48, array of Objs
};
} // namespace Fart
} // namespace Game

#endif
