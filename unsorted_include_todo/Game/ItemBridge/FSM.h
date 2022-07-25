#ifndef _GAME_ITEMBRIDGE_FSM_H
#define _GAME_ITEMBRIDGE_FSM_H

/*
    __vt__Q34Game10ItemBridge3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10ItemBridge3FSMFPQ34Game10ItemBridge4Item
    .4byte "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
    .4byte "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
*/

namespace Game {
namespace StateMachine < Game
{
	namespace ItemBridge {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C (weak)
		virtual void StateMachine < exec(Item*);                    // _10 (weak)
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14 (weak)
	};
	} // namespace ItemBridge
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBridge {
struct FSM : public Item > {
	virtual void init(Item*); // _08
};
} // namespace ItemBridge
} // namespace Game

#endif
