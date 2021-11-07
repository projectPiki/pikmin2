#ifndef _GAME_ITEMTREASURE_FSM_H
#define _GAME_ITEMTREASURE_FSM_H

namespace Game {
namespace StateMachine < Game
{
	namespace ItemTreasure {
		struct Item >
		{
			virtual void _00() = 0;                                     // _00
			virtual void StateMachine < start(Item*, int, StateArg*);   // _04
			virtual void StateMachine < exec(Item*);                    // _08
			virtual void StateMachine < transit(Item*, int, StateArg*); // _0C

			// _00 VTBL
		};
	} // namespace ItemTreasure
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemTreasure {
	struct FSM : public Item > {
		virtual void init(Item*);                                   // _00
		virtual void StateMachine < start(Item*, int, StateArg*);   // _04
		virtual void StateMachine < exec(Item*);                    // _08
		virtual void StateMachine < transit(Item*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace ItemTreasure
} // namespace Game

#endif
