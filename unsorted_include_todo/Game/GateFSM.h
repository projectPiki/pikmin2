#ifndef _GAME_GATEFSM_H
#define _GAME_GATEFSM_H

namespace Game {
namespace StateMachine < Game
{
	struct ItemGate >
	{
		virtual void _00() = 0;                                         // _00
		virtual void StateMachine < start(ItemGate*, int, StateArg*);   // _04
		virtual void StateMachine < exec(ItemGate*);                    // _08
		virtual void StateMachine < transit(ItemGate*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct GateFSM : public ItemGate > {
	virtual void init(ItemGate*);                                   // _00
	virtual void StateMachine < start(ItemGate*, int, StateArg*);   // _04
	virtual void StateMachine < exec(ItemGate*);                    // _08
	virtual void StateMachine < transit(ItemGate*, int, StateArg*); // _0C
	virtual void _10() = 0;                                         // _10

	// _00 VTBL
};
} // namespace Game

#endif
