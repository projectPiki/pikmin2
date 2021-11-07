#ifndef _EBI_FILESELECT_FSMSTATEMACHINE_H
#define _EBI_FILESELECT_FSMSTATEMACHINE_H

namespace Game {
namespace StateMachine < ebi
{
	namespace FileSelect {
		struct TMgr >
		{
			virtual void _00() = 0;                           // _00
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
