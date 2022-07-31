#ifndef _EBI_CARDERROR_FSMSTATEMACHINE_H
#define _EBI_CARDERROR_FSMSTATEMACHINE_H

/*
    __vt__Q33ebi9CardError15FSMStateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi9CardError15FSMStateMachineFPQ33ebi9CardError4TMgr
    .4byte "start__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
    .4byte "exec__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte "transit__Q24Game35StateMachine<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
*/

namespace Game {
struct StateMachine<ebi::CardError::TMgr> {
	virtual void init(TMgr*);                                    // _08
	virtual void start(ebi::CardError::TMgr*, int, StateArg*);   // _0C (weak)
	virtual void exec(ebi::CardError::TMgr*);                    // _10 (weak)
	virtual void transit(ebi::CardError::TMgr*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace ebi {
namespace CardError {
struct FSMStateMachine : public StateMachine<ebi::CardError::TMgr> {
	virtual void init(TMgr*); // _08
};
} // namespace CardError
} // namespace ebi

#endif
