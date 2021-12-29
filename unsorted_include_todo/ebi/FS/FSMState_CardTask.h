#ifndef _EBI_FS_FSMSTATE_CARDTASK_H
#define _EBI_FS_FSMSTATE_CARDTASK_H

/*
    __vt__Q33ebi2FS17FSMState_CardTask:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
    .4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte
   "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg .4byte
   do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr .4byte 0 .4byte 0 .4byte 0 .4byte
   0 .4byte
   do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
    .4byte do_close__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
*/

namespace Game {
namespace FSMState < ebi
{
	namespace FS {
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
	struct FSMState_CardTask : public TMgr >, public FSMState {
		virtual void init(TMgr*, Game::StateArg*);          // _00
		virtual void exec(TMgr*);                           // _04
		virtual void cleanup(ebi::TMgr*);                   // _08
		virtual void resume(ebi::TMgr*);                    // _0C
		virtual void restart(ebi::TMgr*);                   // _10
		virtual void transit(ebi::TMgr*, int, StateArg*);   // _14
		virtual void do_init(TMgr*, Game::StateArg*);       // _18
		virtual void do_exec(TMgr*);                        // _1C
		virtual void _20() = 0;                             // _20
		virtual void _24() = 0;                             // _24
		virtual void _28() = 0;                             // _28
		virtual void _2C() = 0;                             // _2C
		virtual void do_transitCardPlayerDataBroken(TMgr*); // _30
		virtual void do_close(TMgr*);                       // _34

		// _00 VTBL
	};
} // namespace FS
} // namespace ebi

#endif
