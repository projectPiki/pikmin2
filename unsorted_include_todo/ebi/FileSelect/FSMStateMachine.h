#ifndef _EBI_FILESELECT_FSMSTATEMACHINE_H
#define _EBI_FILESELECT_FSMSTATEMACHINE_H

/*
    __vt__Q33ebi10FileSelect15FSMStateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi10FileSelect15FSMStateMachineFPQ33ebi10FileSelect4TMgr
    .4byte
   "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte
   "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte 0
*/

namespace Game {
namespace StateMachine < ebi
{
	namespace FileSelect {
		struct TMgr >
		{
			virtual void init(TMgr*);                         // _00
			virtual void start(ebi::TMgr*, int, StateArg*);   // _04
			virtual void exec(ebi::TMgr*);                    // _08
			virtual void transit(ebi::TMgr*, int, StateArg*); // _0C

			// _00 VTBL
		};
	} // namespace FileSelect
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FileSelect {
	struct FSMStateMachine : public TMgr > {
		virtual void init(TMgr*);                         // _00
		virtual void start(ebi::TMgr*, int, StateArg*);   // _04
		virtual void exec(ebi::TMgr*);                    // _08
		virtual void transit(ebi::TMgr*, int, StateArg*); // _0C
		virtual void _10() = 0;                           // _10

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

#endif
