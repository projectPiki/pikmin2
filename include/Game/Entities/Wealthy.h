#ifndef _GAME_ENTITIES_WEALTHY_H
#define _GAME_ENTITIES_WEALTHY_H

#include "Game/Entities/Kogane.h"
#include "efx/TOoganeKira.h"

/**
 * --Header for Iridescent Glint Beetle (Wealthy)--
 */

namespace Game {
namespace Wealthy {
struct Obj : public Kogane::Obj {
	Obj();

	//////////////// VTABLE
	virtual ~Obj() { }                                 // _1BC (weak)
	virtual void changeMaterial();                     // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _258 (weak)
	{
		return EnemyTypeID::EnemyID_Wealthy;
	}
	virtual void createItem();          // _2FC
	virtual void startBodyEffect();     // _304
	virtual void finishBodyEffect();    // _308
	virtual void effectDrawOn();        // _310
	virtual void effectDrawOff();       // _314
	virtual void createPressSENormal(); // _318
	//////////////// VTABLE END

	void createEffect();

	// _00 		= VTBL
	// _00-_2DC	= Kogane::Obj
	efx::TOoganeKira* mBodyEffect; // _2DC, body effect
};

struct Mgr : public Kogane::Mgr {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual void doAlloc();                            // _A8
	virtual void createObj(int count);                 // _A0
	virtual EnemyBase* getEnemy(int idx);              // _A4
	virtual void loadTexData();                        // _D0
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Wealthy;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00 		= VTBL
	// _00-_48	= Kogane::Mgr
	Obj* mObj; // _48, array of Objs
};
} // namespace Wealthy
} // namespace Game

#endif
