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
namespace StateMachine < Game
{
	namespace ItemTreasure {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C
		virtual void StateMachine < exec(Item*);                    // _10
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14

		// _00 VTBL
	};
	} // namespace ItemTreasure
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemTreasure {
struct FSM : public Item > {
	virtual void init(Item*); // _08

	// _00 VTBL
};
} // namespace ItemTreasure
} // namespace Game

#endif
