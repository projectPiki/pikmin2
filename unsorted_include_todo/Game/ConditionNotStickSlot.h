#ifndef _GAME_CONDITIONNOTSTICKSLOT_H
#define _GAME_CONDITIONNOTSTICKSLOT_H

/*
    __vt__Q24Game21ConditionNotStickSlot:
    .4byte 0
    .4byte 0
    .4byte satisfy__Q24Game21ConditionNotStickSlotFPQ24Game4Piki
*/

namespace Game {
struct ConditionNotStickSlot {
	virtual void satisfy(Piki*); // _08

	// _00 VTBL
};
} // namespace Game

#endif
