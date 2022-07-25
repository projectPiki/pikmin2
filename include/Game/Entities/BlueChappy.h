#ifndef _GAME_BLUECHAPPY_H
#define _GAME_BLUECHAPPY_H

#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/Entities/ChappyBase.h"

namespace Game {
namespace BlueChappy {
struct Mgr : public EnemyMgrBase {
	virtual ~Mgr() { }                                  // _58 (inline)
	virtual void createObj(int);                        // _A0 (inline)
	virtual EnemyBase* getEnemy(int);                   // _A4 (inline)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (inline)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadTexData();                         // _D0
	virtual void getChangeTexture0();                   // _E0 (inline)
	virtual void getChangeTexture1();                   // _E4 (inline)

	Mgr(int, unsigned char);
};

struct Obj : public ChappyBase::Obj {
	virtual ~Obj();                                     // _1BC (inline)
	virtual void changeMaterial();                      // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _258 (inline)

	Obj();
};
} // namespace BlueChappy
} // namespace Game

#endif
