#ifndef _GAME_ENEMYFUNC_CONDITIONPIKMINNEARBY_H
#define _GAME_ENEMYFUNC_CONDITIONPIKMINNEARBY_H

/*
    __vt__Q34Game9EnemyFunc21ConditionPikminNearby:
    .4byte 0
    .4byte 0
    .4byte satisfy__Q34Game9EnemyFunc21ConditionPikminNearbyFPQ24Game8Creature
*/

namespace Game {
namespace EnemyFunc {
struct ConditionPikminNearby {
	virtual void satisfy(Creature*); // _08 (weak)
};
} // namespace EnemyFunc
} // namespace Game

#endif
