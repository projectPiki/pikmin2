#ifndef _GAME_ITEMDOWNFLOOR_FSM_H
#define _GAME_ITEMDOWNFLOOR_FSM_H

/*
    __vt__Q34Game13ItemDownFloor3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game13ItemDownFloor3FSMFPQ34Game13ItemDownFloor4Item
    .4byte "start__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "transit__Q24Game41StateMachine<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<Game::ItemDownFloor::Item> {
	virtual void init(Item*);                                                                      // _08
	virtual void StateMachine<ItemDownFloor::Item>::start(ItemDownFloor::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemDownFloor::Item>::exec(ItemDownFloor::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemDownFloor::Item>::transit(ItemDownFloor::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemDownFloor {
struct FSM : public StateMachine<Game::ItemDownFloor::Item> {
	virtual void init(Item*); // _08
};
} // namespace ItemDownFloor
} // namespace Game

#endif
