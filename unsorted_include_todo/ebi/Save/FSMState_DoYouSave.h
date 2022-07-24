#ifndef _EBI_SAVE_FSMSTATE_DOYOUSAVE_H
#define _EBI_SAVE_FSMSTATE_DOYOUSAVE_H

/*
    __vt__Q33ebi4Save18FSMState_DoYouSave:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
    .4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi4Save18FSMState_DoYouSaveFPQ33ebi4Save4TMgr
*/

namespace ebi {
namespace Save {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (inline)
	virtual void exec(TMgr*);                  // _0C (inline)
};
} // namespace Save
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace Save {
	struct TMgr >
	{
		virtual void _08() = 0;                           // _08
		virtual void _0C() = 0;                           // _0C
		virtual void cleanup(ebi::TMgr*);                 // _10 (inline)
		virtual void resume(ebi::TMgr*);                  // _14 (inline)
		virtual void restart(ebi::TMgr*);                 // _18 (inline)
		virtual void transit(ebi::TMgr*, int, StateArg*); // _1C (inline)
	};
	} // namespace Save
} // namespace ebi
} // namespace Game

namespace ebi {
namespace Save {
struct FSMState_DoYouSave : public FSMState, public TMgr > {
	virtual void FSMState_DoYoudo_init(TMgr*, Game::StateArg*); // _20
	virtual void FSMState_DoYoudo_exec(TMgr*);                  // _24
};
} // namespace Save
} // namespace ebi

#endif
