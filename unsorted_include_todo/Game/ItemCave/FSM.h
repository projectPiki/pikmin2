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
namespace StateMachine < Game
{
	namespace ItemCave {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C (inline)
		virtual void StateMachine < exec(Item*);                    // _10 (inline)
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14 (inline)
	};
	} // namespace ItemCave
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemCave {
struct FSM : public Item > {
	virtual void init(Item*); // _08
};
} // namespace ItemCave
} // namespace Game

#endif
