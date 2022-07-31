#ifndef _GAME_ITEMUJAMUSHI_FSM_H
#define _GAME_ITEMUJAMUSHI_FSM_H

/*
    __vt__Q34Game12ItemUjamushi3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemUjamushi3FSMFPQ34Game12ItemUjamushi4Item
    .4byte "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<Game::ItemUjamushi::Item> {
	virtual void init(Item*);                                                                    // _08
	virtual void StateMachine<ItemUjamushi::Item>::start(ItemUjamushi::Item*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<ItemUjamushi::Item>::exec(ItemUjamushi::Item*);                    // _10 (weak)
	virtual void StateMachine<ItemUjamushi::Item>::transit(ItemUjamushi::Item*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace ItemUjamushi {
struct FSM : public StateMachine<Game::ItemUjamushi::Item> {
	virtual void init(Item*); // _08
};
} // namespace ItemUjamushi
} // namespace Game

#endif
