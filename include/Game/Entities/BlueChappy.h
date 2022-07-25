#ifndef _GAME_BLUECHAPPY_H
#define _GAME_BLUECHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"

namespace Game {
namespace BlueChappy {
struct Mgr : public EnemyMgrBase {
	virtual ~Mgr() { }                                  // _58 (weak)
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int);                   // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadTexData();                         // _D0
	virtual void getChangeTexture0();                   // _E0 (weak)
	virtual void getChangeTexture1();                   // _E4 (weak)

	Mgr(int, unsigned char);
};

struct Obj : public ChappyBase::Obj {
	virtual ~Obj();                                     // _1BC (weak)
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (weak)

	Obj();
};
} // namespace BlueChappy
} // namespace Game

#endif
