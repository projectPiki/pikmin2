#ifndef _EBI_SAVE_FSMSTATE_NOWSAVE_H
#define _EBI_SAVE_FSMSTATE_NOWSAVE_H

/*
    __vt__Q33ebi4Save16FSMState_NowSave:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
    .4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte
   "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi4Save16FSMState_NowSaveFPQ33ebi4Save4TMgr
*/

namespace ebi {
namespace Save {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace Save
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace Save {
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
	} // namespace Save
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Save {
	struct FSMState_NowSave : public FSMState, public TMgr > {
		virtual void init(TMgr*, Game::StateArg*);                // _00
		virtual void exec(TMgr*);                                 // _04
		virtual void cleanup(ebi::TMgr*);                         // _08
		virtual void resume(ebi::TMgr*);                          // _0C
		virtual void restart(ebi::TMgr*);                         // _10
		virtual void transit(ebi::TMgr*, int, StateArg*);         // _14
		virtual void FSMState_Nowdo_init(TMgr*, Game::StateArg*); // _18
		virtual void FSMState_Nowdo_exec(TMgr*);                  // _1C

		// _00 VTBL
	};
} // namespace Save
} // namespace ebi

#endif
