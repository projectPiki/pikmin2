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
namespace StateMachine < Game
{
	namespace ItemBarrel {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C (inline)
		virtual void StateMachine < exec(Item*);                    // _10 (inline)
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14 (inline)
	};
	} // namespace ItemBarrel
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBarrel {
struct FSM : public Item > {
	virtual void init(Item*); // _08
	virtual void _18() = 0;   // _18
};
} // namespace ItemBarrel
} // namespace Game

#endif
