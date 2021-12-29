#ifndef _EBI_FILESELECT_FSMSTATE_CARDERROR_H
#define _EBI_FILESELECT_FSMSTATE_CARDERROR_H

/*
    __vt__Q33ebi10FileSelect18FSMState_CardError:
    .4byte 0
    .4byte 0
    .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
    .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte
   do_exec__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgr
*/

namespace ebi {
namespace FileSelect {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace FileSelect {
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
	} // namespace FileSelect
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FileSelect {
	struct FSMState_CardError : public FSMState, public TMgr > {
		virtual void init(TMgr*, Game::StateArg*);        // _00
		virtual void exec(TMgr*);                         // _04
		virtual void cleanup(ebi::TMgr*);                 // _08
		virtual void resume(ebi::TMgr*);                  // _0C
		virtual void restart(ebi::TMgr*);                 // _10
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14
		virtual void do_init(TMgr*, Game::StateArg*);     // _18
		virtual void do_exec(TMgr*);                      // _1C

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

#endif
