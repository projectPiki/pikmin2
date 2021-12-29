#ifndef _EBI_OPTION_FSMSTATEMACHINE_H
#define _EBI_OPTION_FSMSTATEMACHINE_H

/*
    __vt__Q33ebi6Option15FSMStateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi6Option15FSMStateMachineFPQ33ebi6Option4TMgr
    .4byte
   "start__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
    .4byte "exec__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgr"
    .4byte
   "transit__Q24Game32StateMachine<Q33ebi6Option4TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg"
    .4byte 0
*/

namespace Game {
namespace StateMachine < ebi
{
	namespace Option {
		struct TMgr >
		{
			virtual void init(TMgr*);                         // _00
			virtual void start(ebi::TMgr*, int, StateArg*);   // _04
			virtual void exec(ebi::TMgr*);                    // _08
			virtual void transit(ebi::TMgr*, int, StateArg*); // _0C

			// _00 VTBL
		};
	} // namespace Option
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Option {
	struct FSMStateMachine : public TMgr > {
		virtual void init(TMgr*);                         // _00
		virtual void start(ebi::TMgr*, int, StateArg*);   // _04
		virtual void exec(ebi::TMgr*);                    // _08
		virtual void transit(ebi::TMgr*, int, StateArg*); // _0C
		virtual void _10() = 0;                           // _10

		// _00 VTBL
	};
} // namespace Option
} // namespace ebi

#endif
