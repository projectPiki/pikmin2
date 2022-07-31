#ifndef _GAME_ITEMBARREL_FSM_H
#define _GAME_ITEMBARREL_FSM_H

/*
    __vt__Q34Game10ItemBarrel3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10ItemBarrel3FSMFPQ34Game10ItemBarrel4Item
    .4byte "start__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "transit__Q24Game38StateMachine<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .4byte 0
*/

namespace Game {
struct StateMachine<Game::ItemBarrel::Item> {
	virtual void init(Item*);                                                                // _08
	virtual void StateMachine<ItemBarrel::Item>::start(ItemBarrel::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemBarrel::Item>::exec(ItemBarrel::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemBarrel::Item>::transit(ItemBarrel::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemBarrel {
struct FSM : public StateMachine<Game::ItemBarrel::Item> {
	virtual void init(Item*); // _08
	virtual void _18() = 0;   // _18
};
} // namespace ItemBarrel
} // namespace Game

#endif
