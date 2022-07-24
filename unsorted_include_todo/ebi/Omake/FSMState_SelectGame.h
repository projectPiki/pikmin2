#ifndef _EBI_OMAKE_FSMSTATE_SELECTGAME_H
#define _EBI_OMAKE_FSMSTATE_SELECTGAME_H

/*
    __vt__Q33ebi5Omake19FSMState_SelectGame:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
    .4byte "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgr
*/

namespace ebi {
namespace Omake {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (inline)
	virtual void exec(TMgr*);                  // _0C (inline)
};
} // namespace Omake
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace Omake {
	struct TMgr >
	{
		virtual void _08() = 0;                           // _08
		virtual void _0C() = 0;                           // _0C
		virtual void cleanup(ebi::TMgr*);                 // _10 (inline)
		virtual void resume(ebi::TMgr*);                  // _14 (inline)
		virtual void restart(ebi::TMgr*);                 // _18 (inline)
		virtual void transit(ebi::TMgr*, int, StateArg*); // _1C (inline)
	};
	} // namespace Omake
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Omake {
struct FSMState_SelectGame : public FSMState, public TMgr > {
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
};
} // namespace Omake
} // namespace ebi

#endif
