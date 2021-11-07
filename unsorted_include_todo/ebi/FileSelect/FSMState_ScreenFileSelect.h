#ifndef _EBI_FILESELECT_FSMSTATE_SCREENFILESELECT_H
#define _EBI_FILESELECT_FSMSTATE_SCREENFILESELECT_H

namespace ebi {
namespace FileSelect {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace FileSelect {
		struct TMgr >
		{
			virtual void _00() = 0;                           // _00
			virtual void _04() = 0;                           // _04
			virtual void cleanup(ebi::TMgr*);                 // _08
			virtual void resume(ebi::TMgr*);                  // _0C
			virtual void restart(ebi::TMgr*);                 // _10
			virtual void transit(ebi::TMgr*, int, StateArg*); // _14

			// _00 VTBL
		};
	} // namespace FileSelect
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FileSelect {
	struct FSMState_ScreenFileSelect : public FSMState, public TMgr > {
		virtual void init(TMgr*, Game::StateArg*);                   // _00
		virtual void exec(TMgr*);                                    // _04
		virtual void cleanup(ebi::TMgr*);                            // _08
		virtual void resume(ebi::TMgr*);                             // _0C
		virtual void restart(ebi::TMgr*);                            // _10
		virtual void transit(ebi::TMgr*, int, StateArg*);            // _14
		virtual void FSMState_Screendo_init(TMgr*, Game::StateArg*); // _18
		virtual void FSMState_Screendo_exec(TMgr*);                  // _1C

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

#endif
