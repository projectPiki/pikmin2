#ifndef _GAME_ENTITIES_KOGANEMUSHI_H
#define _GAME_ENTITIES_KOGANEMUSHI_H

#include "Game/Entities/Kogane.h"

/**
 * --Header for Iridescent Flint Beetle (Koganemushi)--
 */

namespace Game {
namespace Koganemushi {
struct Obj : public Kogane::Obj {
	Obj();

	virtual ~Obj() { }                                                                         // _1BC (weak)
	virtual void changeMaterial();                                                             // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() { return EnemyTypeID::EnemyID_Kogane; } // _258 (weak)
	virtual void createItem();                                                                 // _2FC
	virtual void createPressSENormal();                                                        // _318

	// _00 		= VTBL
	// _00-_2DC	= Kogane::Obj
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
		return EnemyTypeID::EnemyID_Kogane;
	}
	virtual ResTIMG* getChangeTexture() // _E0 (weak)
	{
		return mChangeTexture;
	}

	// _00 		= VTBL
	// _00-_48	= Kogane::Mgr
	Obj* mObj; // _48, array of Objs
};
} // namespace Koganemushi
} // namespace Game

#endif
