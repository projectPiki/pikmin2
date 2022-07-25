#ifndef _GAME_CONDITIONNOTSTICKCLIENT_H
#define _GAME_CONDITIONNOTSTICKCLIENT_H

/*
    __vt__Q24Game23ConditionNotStickClient:
    .4byte 0
    .4byte 0
    .4byte satisfy__Q24Game23ConditionNotStickClientFPQ24Game4Piki
*/

namespace Game {
struct ConditionNotStickClient {
	virtual void satisfy(Piki*); // _08 (weak)
};
} // namespace Game

#endif
