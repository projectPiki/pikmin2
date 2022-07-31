#ifndef _GAME_ITEMPLANT_FSM_H
#define _GAME_ITEMPLANT_FSM_H

/*
    __vt__Q34Game9ItemPlant3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game9ItemPlant3FSMFPQ34Game9ItemPlant4Item
    .4byte "start__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte "transit__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
    .4byte 0
*/

namespace Game {
struct StateMachine<Game::ItemPlant::Item> {
	virtual void init(Item*);                                                              // _08
	virtual void StateMachine<ItemPlant::Item>::start(ItemPlant::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemPlant::Item>::exec(ItemPlant::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemPlant::Item>::transit(ItemPlant::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemPlant {
struct FSM : public StateMachine<Game::ItemPlant::Item> {
	virtual void init(Item*); // _08
	virtual void _18() = 0;   // _18
};
} // namespace ItemPlant
} // namespace Game

#endif
