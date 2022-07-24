#ifndef _GAME_CONDITIONNOTSTICKCLIENTANDITEM_H
#define _GAME_CONDITIONNOTSTICKCLIENTANDITEM_H

/*
    __vt__Q24Game30ConditionNotStickClientAndItem:
    .4byte 0
    .4byte 0
    .4byte satisfy__Q24Game30ConditionNotStickClientAndItemFPQ24Game4Piki
*/

namespace Game {
struct ConditionNotStickClientAndItem {
	virtual void satisfy(Piki*); // _08 (inline)
};
} // namespace Game

#endif
