#ifndef _GAME_ITEMCAVE_FSM_H
#define _GAME_ITEMCAVE_FSM_H

/*
    __vt__Q34Game8ItemCave3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game8ItemCave3FSMFPQ34Game8ItemCave4Item
    .4byte "start__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4Item"
    .4byte "transit__Q24Game35StateMachine<Q34Game8ItemCave4Item>FPQ34Game8ItemCave4ItemiPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<Game::ItemCave::Item> {
	virtual void init(Item*);                                                            // _08
	virtual void StateMachine<ItemCave::Item>::start(ItemCave::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemCave::Item>::exec(ItemCave::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemCave::Item>::transit(ItemCave::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemCave {
struct FSM : public StateMachine<Game::ItemCave::Item> {
	virtual void init(Item*); // _08
};
} // namespace ItemCave
} // namespace Game

#endif
