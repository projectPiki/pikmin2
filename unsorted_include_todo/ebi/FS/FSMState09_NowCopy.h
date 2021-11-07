#ifndef _EBI_FS_FSMSTATE09_NOWCOPY_H
#define _EBI_FS_FSMSTATE09_NOWCOPY_H

namespace ebi {
namespace FS {
	struct FSMState_CardTask {
		virtual void init(TMgr*, Game::StateArg*);          // _00
		virtual void exec(TMgr*);                           // _04
		virtual void _08() = 0;                             // _08
		virtual void _0C() = 0;                             // _0C
		virtual void _10() = 0;                             // _10
		virtual void _14() = 0;                             // _14
		virtual void _18() = 0;                             // _18
		virtual void _1C() = 0;                             // _1C
		virtual void _20() = 0;                             // _20
		virtual void _24() = 0;                             // _24
		virtual void _28() = 0;                             // _28
		virtual void _2C() = 0;                             // _2C
		virtual void do_transitCardPlayerDataBroken(TMgr*); // _30

		// _00 VTBL
	};
} // namespace FS
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace FS {
		struct TMgr >
		{
			virtual void _00() = 0;                           // _00
			virtual void _04() = 0;                           // _04
			virtual void _08() = 0;                           // _08
			virtual void resume(ebi::TMgr*);                  // _0C
			virtual void restart(ebi::TMgr*);                 // _10
			virtual void transit(ebi::TMgr*, int, StateArg*); // _14

			// _00 VTBL
		};
	} // namespace FS
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FS {
	struct FSMState {
		virtual void _00() = 0;      // _00
		virtual void _04() = 0;      // _04
		virtual void _08() = 0;      // _08
		virtual void _0C() = 0;      // _0C
		virtual void _10() = 0;      // _10
		virtual void _14() = 0;      // _14
		virtual void _18() = 0;      // _18
		virtual void do_exec(TMgr*); // _1C

		// _00 VTBL
	};
} // namespace FS
} // namespace ebi

namespace ebi {
namespace FS {
	struct FSMState09_NowCopy : public FSMState_CardTask,
	                            public TMgr >,
	                            public FSMState {
		virtual void init(TMgr*, Game::StateArg*);          // _00
		virtual void exec(TMgr*);                           // _04
		virtual void cleanup(TMgr*);                        // _08
		virtual void resume(ebi::TMgr*);                    // _0C
		virtual void restart(ebi::TMgr*);                   // _10
		virtual void transit(ebi::TMgr*, int, StateArg*);   // _14
		virtual void do_init(TMgr*, Game::StateArg*);       // _18
		virtual void do_exec(TMgr*);                        // _1C
		virtual void do_cardRequest(TMgr*);                 // _20
		virtual void do_transitCardReady(TMgr*);            // _24
		virtual void do_transitCardNoCard(TMgr*);           // _28
		virtual void do_transitCardIOError(TMgr*);          // _2C
		virtual void do_transitCardPlayerDataBroken(TMgr*); // _30
		virtual void do_close(TMgr*);                       // _34

		// _00 VTBL
	};
} // namespace FS
} // namespace ebi

#endif
