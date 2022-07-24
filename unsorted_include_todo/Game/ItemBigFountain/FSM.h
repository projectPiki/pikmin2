#ifndef _GAME_ITEMBIGFOUNTAIN_FSM_H
#define _GAME_ITEMBIGFOUNTAIN_FSM_H

/*
    __vt__Q34Game15ItemBigFountain3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game15ItemBigFountain3FSMFPQ34Game15ItemBigFountain4Item
    .4byte "start__Q24Game43StateMachine<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte "exec__Q24Game43StateMachine<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "transit__Q24Game43StateMachine<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte 0
*/

namespace Game {
namespace StateMachine < Game
{
	namespace ItemBigFountain {
	struct Item >
	{
		virtual void init(Item*);                                   // _08
		virtual void StateMachine < start(Item*, int, StateArg*);   // _0C
		virtual void StateMachine < exec(Item*);                    // _10
		virtual void StateMachine < transit(Item*, int, StateArg*); // _14

		// _00 VTBL
	};
	} // namespace ItemBigFountain
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBigFountain {
struct FSM : public Item > {
	virtual void init(Item*); // _08
	virtual void _18() = 0;   // _18

	// _00 VTBL
};
} // namespace ItemBigFountain
} // namespace Game

#endif
