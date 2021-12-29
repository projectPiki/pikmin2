#ifndef _EBI_CARDERROR_FSMSTATE_W03_WRONGSECTOR_H
#define _EBI_CARDERROR_FSMSTATE_W03_WRONGSECTOR_H

/*
    __vt__Q33ebi9CardError24FSMState_W03_WrongSector:
    .4byte 0
    .4byte 0
    .4byte
   init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
    .4byte
   "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte
   "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte
   "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte
   "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi9CardError16FSMState_WarningFPQ33ebi9CardError4TMgr
    .4byte
   do_open__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr
    .4byte
   do_transit__Q33ebi9CardError24FSMState_W03_WrongSectorFPQ33ebi9CardError4TMgr
*/

namespace ebi {
namespace CardError {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace CardError {
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
	} // namespace CardError
} // namespace ebi
} // namespace Game

namespace ebi {
namespace CardError {
	struct FSMState_Warning {
		virtual void _00() = 0;                       // _00
		virtual void _04() = 0;                       // _04
		virtual void _08() = 0;                       // _08
		virtual void _0C() = 0;                       // _0C
		virtual void _10() = 0;                       // _10
		virtual void _14() = 0;                       // _14
		virtual void do_init(TMgr*, Game::StateArg*); // _18
		virtual void do_exec(TMgr*);                  // _1C

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

namespace ebi {
namespace CardError {
	struct FSMState_W03_WrongSector : public FSMState,
	                                  public TMgr >,
	                                  public FSMState_Warning {
		virtual void init(TMgr*, Game::StateArg*);        // _00
		virtual void exec(TMgr*);                         // _04
		virtual void cleanup(ebi::TMgr*);                 // _08
		virtual void resume(ebi::TMgr*);                  // _0C
		virtual void restart(ebi::TMgr*);                 // _10
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14
		virtual void do_init(TMgr*, Game::StateArg*);     // _18
		virtual void do_exec(TMgr*);                      // _1C
		virtual void do_open(TMgr*);                      // _20
		virtual void do_transit(TMgr*);                   // _24

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

#endif
