#ifndef _GAME_CHAPPYRELATION_H
#define _GAME_CHAPPYRELATION_H

#include "CNode.h"

namespace Game {
struct EnemyBase;

struct ChappyRelation : public CNode {
	virtual ~ChappyRelation(); // _08 (weak)

	// _00      = VTBL
	// _00-_18  = CNode
	EnemyBase* _18; // _18, kochappy?
};
} // namespace Game

#endif
