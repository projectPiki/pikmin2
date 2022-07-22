#ifndef _GAME_CELLOBJECT_H
#define _GAME_CELLOBJECT_H


#include "Game/cellPyramid.h"
#include "Game/Creature.h"

namespace Game {
struct CellObject {
	virtual Vector3f getPosition()              = 0;        // _00
	virtual void checkCollision(CellObject*);               // _04
	virtual void getBoundingSphere()            = 0;        // _08
	virtual bool collisionUpdatable()           = 0;        // _0C
	virtual bool isPiki();                                  // _10
	virtual bool isNavi();                                  // _14
	virtual bool deferPikiCollision();                      // _18
	virtual char* getTypeName()                 = 0;        // _1C
	virtual u16 getObjType()                    = 0;        // _20

	// _00 VTBL
    SweepPrune::Object m_sweepPruneObject; // _04
    CellLeg m_cellLeg[4];                  // _54
    u32 _A4;                               // _A4
    CollisionBuffer m_collisionBuffer;     // _A8
};
} // namespace Game

#endif
