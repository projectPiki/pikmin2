#ifndef _EBI_FS_FSMSTATE_SELECTYESNO_H
#define _EBI_FS_FSMSTATE_SELECTYESNO_H

/*
    __vt__Q33ebi2FS20FSMState_SelectYesNo:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
    .4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
    .4byte 0
    .4byte do_decide__Q33ebi2FS20FSMState_SelectYesNoFPQ33ebi2FS4TMgr
*/

namespace ebi {
namespace FS {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08
	virtual void exec(TMgr*);                  // _0C

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
		virtual void _08() = 0;                           // _08
		virtual void _0C() = 0;                           // _0C
		virtual void cleanup(ebi::TMgr*);                 // _10
		virtual void resume(ebi::TMgr*);                  // _14
		virtual void restart(ebi::TMgr*);                 // _18
		virtual void transit(ebi::TMgr*, int, StateArg*); // _1C

		// _00 VTBL
	};
	} // namespace FS
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FS {
struct FSMState_SelectYesNo : public FSMState, public TMgr > {
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void _28() = 0;                       // _28
	virtual void do_decide(TMgr*);                // _2C

	// _00 VTBL
};
} // namespace FS
} // namespace ebi

#endif
