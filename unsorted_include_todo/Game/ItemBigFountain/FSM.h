#ifndef _GAME_ITEMBIGFOUNTAIN_FSM_H
#define _GAME_ITEMBIGFOUNTAIN_FSM_H

/*
    __vt__Q34Game15ItemBigFountain3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game15ItemBigFountain3FSMFPQ34Game15ItemBigFountain4Item
    .4byte "start__Q24Game43StateMachine<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game43StateMachine<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "transit__Q24Game43StateMachine<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte 0
*/

namespace Game {
struct StateMachine<Game::ItemBigFountain::Item> {
	virtual void init(Item*);                                                                          // _08
	virtual void StateMachine<ItemBigFountain::Item>::start(ItemBigFountain::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemBigFountain::Item>::exec(ItemBigFountain::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemBigFountain::Item>::transit(ItemBigFountain::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemBigFountain {
struct FSM : public StateMachine<Game::ItemBigFountain::Item> {
	virtual void init(Item*); // _08
	virtual void _18() = 0;   // _18
};
} // namespace ItemBigFountain
} // namespace Game

#endif
