#ifndef _GAME_ITEMPIKIHEAD_FSM_H
#define _GAME_ITEMPIKIHEAD_FSM_H

/*
    __vt__Q34Game12ItemPikihead3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemPikihead3FSMFPQ34Game12ItemPikihead4Item
    .4byte "start__Q24Game40StateMachine<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game40StateMachine<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4Item"
    .4byte "transit__Q24Game40StateMachine<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4ItemiPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<Game::ItemPikihead::Item> {
	virtual void init(Item*);                                                                    // _08
	virtual void StateMachine<ItemPikihead::Item>::start(ItemPikihead::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemPikihead::Item>::exec(ItemPikihead::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemPikihead::Item>::transit(ItemPikihead::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemPikihead {
struct FSM : public StateMachine<Game::ItemPikihead::Item> {
	virtual void init(Item*); // _08
};
} // namespace ItemPikihead
} // namespace Game

#endif
