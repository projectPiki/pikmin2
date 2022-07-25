#ifndef _EBI_FS_FSMSTATEMACHINE_H
#define _EBI_FS_FSMSTATEMACHINE_H

/*
    __vt__Q33ebi2FS15FSMStateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi2FS15FSMStateMachineFPQ33ebi2FS4TMgr
    .4byte "start__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
    .4byte "exec__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "transit__Q24Game28StateMachine<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
*/

namespace Game {
namespace StateMachine < ebi
{
	namespace FS {
	struct TMgr >
	{
		virtual void init(TMgr*);                         // _08
		virtual void start(ebi::TMgr*, int, StateArg*);   // _0C (weak)
		virtual void exec(ebi::TMgr*);                    // _10 (weak)
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14 (weak)
	};
	} // namespace FS
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FS {
struct FSMStateMachine : public TMgr > {
	virtual void init(TMgr*); // _08
};
} // namespace FS
} // namespace ebi

#endif
