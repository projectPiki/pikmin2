#ifndef _EBI_SAVE_FSMSTATE_DOYOUSAVE_H
#define _EBI_SAVE_FSMSTATE_DOYOUSAVE_H

namespace ebi {
namespace Save {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace Save
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace Save {
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
	} // namespace Save
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Save {
	struct FSMState_DoYouSave : public FSMState, public TMgr > {
		virtual void init(TMgr*, Game::StateArg*);                  // _00
		virtual void exec(TMgr*);                                   // _04
		virtual void cleanup(ebi::TMgr*);                           // _08
		virtual void resume(ebi::TMgr*);                            // _0C
		virtual void restart(ebi::TMgr*);                           // _10
		virtual void transit(ebi::TMgr*, int, StateArg*);           // _14
		virtual void FSMState_DoYoudo_init(TMgr*, Game::StateArg*); // _18
		virtual void FSMState_DoYoudo_exec(TMgr*);                  // _1C

		// _00 VTBL
	};
} // namespace Save
} // namespace ebi

#endif
