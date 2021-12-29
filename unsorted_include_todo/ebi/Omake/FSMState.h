#ifndef _EBI_OMAKE_FSMSTATE_H
#define _EBI_OMAKE_FSMSTATE_H

/*
    __vt__Q33ebi5Omake8FSMState:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
    .4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte
   "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
*/

namespace Game {
namespace FSMState < ebi
{
	namespace Omake {
		struct TMgr >
		{
			virtual void init(TMgr*, Game::StateArg*);        // _00
			virtual void exec(TMgr*);                         // _04
			virtual void cleanup(ebi::TMgr*);                 // _08
			virtual void resume(ebi::TMgr*);                  // _0C
			virtual void restart(ebi::TMgr*);                 // _10
			virtual void transit(ebi::TMgr*, int, StateArg*); // _14

			// _00 VTBL
		};
	} // namespace Omake
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Omake {
	struct FSMState : public TMgr > {
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
} // namespace Omake
} // namespace ebi

#endif
