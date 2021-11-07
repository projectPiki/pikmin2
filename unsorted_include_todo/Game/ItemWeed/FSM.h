#ifndef _GAME_ITEMWEED_FSM_H
#define _GAME_ITEMWEED_FSM_H

namespace Game {
namespace StateMachine < Game
{
	namespace ItemWeed {
		struct Item >
		{
			virtual void _00() = 0;                                     // _00
			virtual void StateMachine < start(Item*, int, StateArg*);   // _04
			virtual void StateMachine < exec(Item*);                    // _08
			virtual void StateMachine < transit(Item*, int, StateArg*); // _0C

			// _00 VTBL
		};
	} // namespace ItemWeed
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemWeed {
	struct FSM : public Item > {
		virtual void init(Item*);                                   // _00
		virtual void StateMachine < start(Item*, int, StateArg*);   // _04
		virtual void StateMachine < exec(Item*);                    // _08
		virtual void StateMachine < transit(Item*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace ItemWeed
} // namespace Game

#endif
