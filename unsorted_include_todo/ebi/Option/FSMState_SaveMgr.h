#ifndef _EBI_OPTION_FSMSTATE_SAVEMGR_H
#define _EBI_OPTION_FSMSTATE_SAVEMGR_H

/*
    __vt__Q33ebi6Option16FSMState_SaveMgr:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
    .4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte
   "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi6Option16FSMState_SaveMgrFPQ33ebi6Option4TMgr
*/

namespace ebi {
namespace Option {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace Option
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace Option {
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
	} // namespace Option
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Option {
	struct FSMState_SaveMgr : public FSMState, public TMgr > {
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
} // namespace Option
} // namespace ebi

#endif
