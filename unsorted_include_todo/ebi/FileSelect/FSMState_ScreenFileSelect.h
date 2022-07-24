#ifndef _EBI_FILESELECT_FSMSTATE_SCREENFILESELECT_H
#define _EBI_FILESELECT_FSMSTATE_SCREENFILESELECT_H

/*
    __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
    .4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgr
*/

namespace ebi {
namespace FileSelect {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (inline)
	virtual void exec(TMgr*);                  // _0C (inline)
};
} // namespace FileSelect
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace FileSelect {
	struct TMgr >
	{
		virtual void _08() = 0;                           // _08
		virtual void _0C() = 0;                           // _0C
		virtual void cleanup(ebi::TMgr*);                 // _10 (inline)
		virtual void resume(ebi::TMgr*);                  // _14 (inline)
		virtual void restart(ebi::TMgr*);                 // _18 (inline)
		virtual void transit(ebi::TMgr*, int, StateArg*); // _1C (inline)
	};
	} // namespace FileSelect
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FileSelect {
struct FSMState_ScreenFileSelect : public FSMState, public TMgr > {
	virtual void FSMState_Screendo_init(TMgr*, Game::StateArg*); // _20
	virtual void FSMState_Screendo_exec(TMgr*);                  // _24
};
} // namespace FileSelect
} // namespace ebi

#endif
