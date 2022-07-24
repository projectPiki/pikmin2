#ifndef _EBI_FILESELECT_FSMSTATE_MOUNTCHECK_H
#define _EBI_FILESELECT_FSMSTATE_MOUNTCHECK_H

/*
    __vt__Q33ebi10FileSelect19FSMState_MountCheck:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
    .4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_cardRequest__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardReady__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
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
struct FSMState_CardRequest {
	virtual void _08() = 0;                             // _08
	virtual void _0C() = 0;                             // _0C
	virtual void _10() = 0;                             // _10
	virtual void _14() = 0;                             // _14
	virtual void _18() = 0;                             // _18
	virtual void _1C() = 0;                             // _1C
	virtual void do_init(TMgr*, Game::StateArg*);       // _20
	virtual void do_exec(TMgr*);                        // _24
	virtual void do_cardRequest(TMgr*);                 // _28
	virtual void do_transitCardReady(TMgr*);            // _2C
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
} // namespace FileSelect
} // namespace ebi

namespace ebi {
namespace FileSelect {
struct FSMState_MountCheck : public FSMState, public TMgr >, public FSMState_CardRequest {
	virtual void do_cardRequest(TMgr*);      // _28
	virtual void do_transitCardReady(TMgr*); // _2C
};
} // namespace FileSelect
} // namespace ebi

#endif
