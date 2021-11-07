#ifndef _EBI_CARDERROR_FSMSTATE_NOCARD_H
#define _EBI_CARDERROR_FSMSTATE_NOCARD_H

namespace ebi {
namespace CardError {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace CardError {
		struct TMgr >
		{
			virtual void _00() = 0;                           // _00
			virtual void _04() = 0;                           // _04
			virtual void cleanup(ebi::TMgr*);                 // _08
			virtual void resume(ebi::TMgr*);                  // _0C
			virtual void restart(ebi::TMgr*);                 // _10
			virtual void transit(ebi::TMgr*, int, StateArg*); // _14

			// _00 VTBL
		};
	} // namespace CardError
} // namespace ebi
} // namespace Game

namespace ebi {
namespace CardError {
	struct FSMState_NoCard : public FSMState, public TMgr > {
		virtual void init(TMgr*, Game::StateArg*);        // _00
		virtual void exec(TMgr*);                         // _04
		virtual void cleanup(ebi::TMgr*);                 // _08
		virtual void resume(ebi::TMgr*);                  // _0C
		virtual void restart(ebi::TMgr*);                 // _10
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14
		virtual void do_init(TMgr*, Game::StateArg*);     // _18
		virtual void do_exec(TMgr*);                      // _1C
		virtual void _20() = 0;                           // _20
		virtual void _24() = 0;                           // _24
		virtual void _28() = 0;                           // _28

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

#endif
