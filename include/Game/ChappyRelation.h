#ifndef _GAME_CHAPPYRELATION_H
#define _GAME_CHAPPYRELATION_H

#include "CNode.h"

namespace Game {
struct EnemyBase;

struct ChappyRelation : public CNode {
	ChappyRelation(EnemyBase* obj) { mOwner = obj; }
	virtual ~ChappyRelation() { } // _08 (weak)

	// _00      = VTBL
	// _00-_18  = CNode
	EnemyBase* mOwner; // _18, bulbear owner
};
} // namespace Game

#endif
