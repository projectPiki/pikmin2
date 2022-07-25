#ifndef _EBI_OMAKE_FSMSTATEMACHINE_H
#define _EBI_OMAKE_FSMSTATEMACHINE_H

/*
    __vt__Q33ebi5Omake15FSMStateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi5Omake15FSMStateMachineFPQ33ebi5Omake4TMgr
    .4byte "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
    .4byte "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
    .4byte "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
*/

namespace Game {
namespace StateMachine < ebi
{
	namespace Omake {
	struct TMgr >
	{
		virtual void init(TMgr*);                         // _08
		virtual void start(ebi::TMgr*, int, StateArg*);   // _0C (weak)
		virtual void exec(ebi::TMgr*);                    // _10 (weak)
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14 (weak)
	};
	} // namespace Omake
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Omake {
struct FSMStateMachine : public TMgr > {
	virtual void init(TMgr*); // _08
};
} // namespace Omake
} // namespace ebi

#endif
