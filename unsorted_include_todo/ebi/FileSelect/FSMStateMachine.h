#ifndef _EBI_FILESELECT_FSMSTATEMACHINE_H
#define _EBI_FILESELECT_FSMSTATEMACHINE_H

/*
    __vt__Q33ebi10FileSelect15FSMStateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi10FileSelect15FSMStateMachineFPQ33ebi10FileSelect4TMgr
    .4byte "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<ebi::FileSelect::TMgr> {
	virtual void init(TMgr*);                                     // _08
	virtual void start(ebi::FileSelect::TMgr*, int, StateArg*);   // _0C (weak)
	virtual void exec(ebi::FileSelect::TMgr*);                    // _10 (weak)
	virtual void transit(ebi::FileSelect::TMgr*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace ebi {
namespace FileSelect {
struct FSMStateMachine : public StateMachine<ebi::FileSelect::TMgr> {
	virtual void init(TMgr*); // _08
};
} // namespace FileSelect
} // namespace ebi

#endif
