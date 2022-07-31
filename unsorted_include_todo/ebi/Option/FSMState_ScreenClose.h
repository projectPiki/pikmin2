#ifndef _EBI_OPTION_FSMSTATE_SCREENCLOSE_H
#define _EBI_OPTION_FSMSTATE_SCREENCLOSE_H

/*
    __vt__Q33ebi6Option20FSMState_ScreenClose:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi6Option8FSMStateFPQ33ebi6Option4TMgr
    .4byte "cleanup__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte "resume__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte "restart__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte "transit__Q24Game28FSMState<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi6Option20FSMState_ScreenCloseFPQ33ebi6Option4TMgr
*/

namespace ebi {
namespace Option {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (weak)
	virtual void exec(TMgr*);                  // _0C (weak)
};
} // namespace Option
} // namespace ebi

namespace Game {
struct FSMState<ebi::Option::TMgr> {
	virtual void _08() = 0;                                   // _08
	virtual void _0C() = 0;                                   // _0C
	virtual void cleanup(ebi::Option::TMgr*);                 // _10 (weak)
	virtual void resume(ebi::Option::TMgr*);                  // _14 (weak)
	virtual void restart(ebi::Option::TMgr*);                 // _18 (weak)
	virtual void transit(ebi::Option::TMgr*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace ebi {
namespace Option {
struct FSMState_ScreenClose : public FSMState, public FSMState<ebi::Option::TMgr> {
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
};
} // namespace Option
} // namespace ebi

#endif
