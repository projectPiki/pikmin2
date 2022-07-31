#ifndef _EBI_FILESELECT_FSMSTATE_EMPTYUPDATE_H
#define _EBI_FILESELECT_FSMSTATE_EMPTYUPDATE_H

/*
    __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
    .4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgr
*/

namespace ebi {
namespace FileSelect {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (weak)
	virtual void exec(TMgr*);                  // _0C (weak)
};
} // namespace FileSelect
} // namespace ebi

namespace Game {
struct FSMState<ebi::FileSelect::TMgr> {
	virtual void _08() = 0;                                       // _08
	virtual void _0C() = 0;                                       // _0C
	virtual void cleanup(ebi::FileSelect::TMgr*);                 // _10 (weak)
	virtual void resume(ebi::FileSelect::TMgr*);                  // _14 (weak)
	virtual void restart(ebi::FileSelect::TMgr*);                 // _18 (weak)
	virtual void transit(ebi::FileSelect::TMgr*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace ebi {
namespace FileSelect {
struct FSMState_EmptyUpdate : public FSMState, public FSMState<ebi::FileSelect::TMgr> {
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
};
} // namespace FileSelect
} // namespace ebi

#endif
