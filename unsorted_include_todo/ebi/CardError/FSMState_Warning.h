#ifndef _EBI_CARDERROR_FSMSTATE_WARNING_H
#define _EBI_CARDERROR_FSMSTATE_WARNING_H

/*
    __vt__Q33ebi9CardError16FSMState_Warning:
    .4byte 0
    .4byte 0
    .4byte
   init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
    .4byte
   "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte
   "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte
   "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte
   "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgr
    .4byte 0
    .4byte 0
*/

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
	struct FSMState_Warning : public FSMState, public TMgr > {
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

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

#endif
