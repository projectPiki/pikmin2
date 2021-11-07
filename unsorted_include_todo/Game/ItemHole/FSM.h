#ifndef _GAME_ITEMHOLE_FSM_H
#define _GAME_ITEMHOLE_FSM_H

namespace Game {
namespace StateMachine < Game
{
	struct CFSMItem >
	{
		virtual void _00() = 0;                                         // _00
		virtual void StateMachine < start(CFSMItem*, int, StateArg*);   // _04
		virtual void StateMachine < exec(CFSMItem*);                    // _08
		virtual void StateMachine < transit(CFSMItem*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemHole {
	struct FSM : public CFSMItem > {
		virtual void init(CFSMItem*);                                   // _00
		virtual void StateMachine < start(CFSMItem*, int, StateArg*);   // _04
		virtual void StateMachine < exec(CFSMItem*);                    // _08
		virtual void StateMachine < transit(CFSMItem*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace ItemHole
} // namespace Game

#endif
