#ifndef _GAME_ITEMUJAMUSHI_FSM_H
#define _GAME_ITEMUJAMUSHI_FSM_H

/*
    __vt__Q34Game12ItemUjamushi3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemUjamushi3FSMFPQ34Game12ItemUjamushi4Item
    .4byte
   "start__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .4byte
   "exec__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte
   "transit__Q24Game40StateMachine<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
*/

namespace Game {
namespace StateMachine < Game
{
	namespace ItemUjamushi {
		struct Item >
		{
			virtual void init(Item*);                                   // _00
			virtual void StateMachine < start(Item*, int, StateArg*);   // _04
			virtual void StateMachine < exec(Item*);                    // _08
			virtual void StateMachine < transit(Item*, int, StateArg*); // _0C

			// _00 VTBL
		};
	} // namespace ItemUjamushi
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemUjamushi {
	struct FSM : public Item > {
		virtual void init(Item*);                                   // _00
		virtual void StateMachine < start(Item*, int, StateArg*);   // _04
		virtual void StateMachine < exec(Item*);                    // _08
		virtual void StateMachine < transit(Item*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace ItemUjamushi
} // namespace Game

#endif
