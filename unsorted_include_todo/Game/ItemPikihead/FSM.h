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
namespace StateMachine < Game
{
	namespace ItemPikihead {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C (inline)
		virtual void StateMachine < exec(Item*);                    // _10 (inline)
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14 (inline)
	};
	} // namespace ItemPikihead
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemPikihead {
struct FSM : public Item > {
	virtual void init(Item*); // _08
};
} // namespace ItemPikihead
} // namespace Game

#endif
