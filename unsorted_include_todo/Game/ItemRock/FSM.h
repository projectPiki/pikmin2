#ifndef _GAME_ITEMROCK_FSM_H
#define _GAME_ITEMROCK_FSM_H

/*
    __vt__Q34Game8ItemRock3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game8ItemRock3FSMFPQ34Game8ItemRock4Item
    .4byte "start__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "transit__Q24Game35StateMachine<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
*/

namespace Game {
namespace StateMachine < Game
{
	namespace ItemRock {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C
		virtual void StateMachine < exec(Item*);                    // _10
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14

		// _00 VTBL
	};
	} // namespace ItemRock
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemRock {
struct FSM : public Item > {
	virtual void init(Item*); // _08

	// _00 VTBL
};
} // namespace ItemRock
} // namespace Game

#endif
