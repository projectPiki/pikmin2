#ifndef _EBI_CARDERROR_FSMSTATE_NOCARD_H
#define _EBI_CARDERROR_FSMSTATE_NOCARD_H

/*
    __vt__Q33ebi9CardError15FSMState_NoCard:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi9CardError8FSMStateFPQ33ebi9CardError4TMgr
    .4byte "cleanup__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte "resume__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte "restart__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgr"
    .4byte "transit__Q24Game31FSMState<Q33ebi9CardError4TMgr>FPQ33ebi9CardError4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi9CardError15FSMState_NoCardFPQ33ebi9CardError4TMgr
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace ebi {
namespace CardError {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08
	virtual void exec(TMgr*);                  // _0C

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
		virtual void _08() = 0;                           // _08
		virtual void _0C() = 0;                           // _0C
		virtual void cleanup(ebi::TMgr*);                 // _10
		virtual void resume(ebi::TMgr*);                  // _14
		virtual void restart(ebi::TMgr*);                 // _18
		virtual void transit(ebi::TMgr*, int, StateArg*); // _1C

		// _00 VTBL
	};
	} // namespace CardError
} // namespace ebi
} // namespace Game

namespace ebi {
namespace CardError {
struct FSMState_NoCard : public FSMState, public TMgr > {
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void _28() = 0;                       // _28
	virtual void _2C() = 0;                       // _2C
	virtual void _30() = 0;                       // _30

	// _00 VTBL
};
} // namespace CardError
} // namespace ebi

#endif
