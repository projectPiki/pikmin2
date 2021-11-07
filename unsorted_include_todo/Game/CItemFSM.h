#ifndef _GAME_CITEMFSM_H
#define _GAME_CITEMFSM_H

namespace Game {
namespace StateMachine < Game
{
	struct CFSMItem >
	{
		virtual void StateMachine < init(CFSMItem*);                    // _00
		virtual void StateMachine < start(CFSMItem*, int, StateArg*);   // _04
		virtual void StateMachine < exec(CFSMItem*);                    // _08
		virtual void StateMachine < transit(CFSMItem*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct CItemFSM : public CFSMItem > {
	virtual void StateMachine < init(CFSMItem*);                    // _00
	virtual void StateMachine < start(CFSMItem*, int, StateArg*);   // _04
	virtual void StateMachine < exec(CFSMItem*);                    // _08
	virtual void StateMachine < transit(CFSMItem*, int, StateArg*); // _0C

	// _00 VTBL
};
} // namespace Game

#endif
