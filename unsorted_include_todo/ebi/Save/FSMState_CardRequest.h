#ifndef _EBI_SAVE_FSMSTATE_CARDREQUEST_H
#define _EBI_SAVE_FSMSTATE_CARDREQUEST_H

/*
    __vt__Q33ebi4Save20FSMState_CardRequest:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi4Save8FSMStateFPQ33ebi4Save4TMgr
    .4byte "cleanup__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "resume__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "restart__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgr"
    .4byte "transit__Q24Game26FSMState<Q33ebi4Save4TMgr>FPQ33ebi4Save4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte 0
    .4byte 0
    .4byte do_transitCardNoCard__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardIOError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardWrongDevice__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardWrongSector__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardEncoding__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardNoFileSpace__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardNoFileEntry__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardFileOpenError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardSerialNoError__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
    .4byte do_transitCardPlayerDataBroken__Q33ebi4Save20FSMState_CardRequestFPQ33ebi4Save4TMgr
*/

namespace ebi {
namespace Save {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (weak)
	virtual void exec(TMgr*);                  // _0C (weak)
};
} // namespace Save
} // namespace ebi

namespace Game {
struct FSMState<ebi::Save::TMgr> {
	virtual void _08() = 0;                                 // _08
	virtual void _0C() = 0;                                 // _0C
	virtual void cleanup(ebi::Save::TMgr*);                 // _10 (weak)
	virtual void resume(ebi::Save::TMgr*);                  // _14 (weak)
	virtual void restart(ebi::Save::TMgr*);                 // _18 (weak)
	virtual void transit(ebi::Save::TMgr*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace ebi {
namespace Save {
struct FSMState_CardRequest : public FSMState, public FSMState<ebi::Save::TMgr> {
	virtual void do_init(TMgr*, Game::StateArg*);       // _20
	virtual void do_exec(TMgr*);                        // _24
	virtual void _28() = 0;                             // _28
	virtual void _2C() = 0;                             // _2C
	virtual void do_transitCardNoCard(TMgr*);           // _30
	virtual void do_transitCardIOError(TMgr*);          // _34
	virtual void do_transitCardWrongDevice(TMgr*);      // _38
	virtual void do_transitCardWrongSector(TMgr*);      // _3C
	virtual void do_transitCardBroken(TMgr*);           // _40
	virtual void do_transitCardEncoding(TMgr*);         // _44
	virtual void do_transitCardNoFileSpace(TMgr*);      // _48
	virtual void do_transitCardNoFileEntry(TMgr*);      // _4C
	virtual void do_transitCardFileOpenError(TMgr*);    // _50
	virtual void do_transitCardSerialNoError(TMgr*);    // _54
	virtual void do_transitCardPlayerDataBroken(TMgr*); // _58
};
} // namespace Save
} // namespace ebi

#endif
