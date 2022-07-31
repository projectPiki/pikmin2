#ifndef _GAME_ITEMTREASURE_FSM_H
#define _GAME_ITEMTREASURE_FSM_H

/*
    __vt__Q34Game12ItemTreasure3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemTreasure3FSMFPQ34Game12ItemTreasure4Item
    .4byte "start__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "transit__Q24Game40StateMachine<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<Game::ItemTreasure::Item> {
	virtual void init(Item*);                                                                    // _08
	virtual void StateMachine<ItemTreasure::Item>::start(ItemTreasure::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemTreasure::Item>::exec(ItemTreasure::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemTreasure::Item>::transit(ItemTreasure::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemTreasure {
struct FSM : public StateMachine<Game::ItemTreasure::Item> {
	virtual void init(Item*); // _08
};
} // namespace ItemTreasure
} // namespace Game

#endif
