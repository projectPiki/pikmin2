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
namespace StateMachine < ebi
{
	namespace CardError {
	struct TMgr >
	{
		virtual void init(TMgr*);                         // _08
		virtual void start(ebi::TMgr*, int, StateArg*);   // _0C
		virtual void exec(ebi::TMgr*);                    // _10
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14

		// _00 VTBL
	};
	} // namespace CardError
} // namespace ebi
} // namespace Game

namespace ebi {
namespace CardError {
struct FSMStateMachine : public TMgr > {
	virtual void init(TMgr*); // _08

	// _00 VTBL
};
} // namespace CardError
} // namespace ebi

#endif
