#ifndef _EBI_FILESELECT_FSMSTATE_CARDREQUEST_H
#define _EBI_FILESELECT_FSMSTATE_CARDREQUEST_H

/*
    __vt__Q33ebi10FileSelect20FSMState_CardRequest:
    .4byte 0
    .4byte 0
    .4byte
   init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
    .4byte
   "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
    .4byte
   "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
    .4byte
   do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
    .4byte
   do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte 0
    .4byte 0
    .4byte
   do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
    .4byte
   do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
*/

namespace ebi {
namespace FileSelect {
	struct FSMState {
		virtual void init(TMgr*, Game::StateArg*); // _00
		virtual void exec(TMgr*);                  // _04

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

namespace Game {
namespace FSMState < ebi
{
	namespace FileSelect {
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
	} // namespace FileSelect
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FileSelect {
	struct FSMState_CardRequest : public FSMState, public TMgr > {
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
		virtual void do_transitCardNoCard(TMgr*);           // _28
		virtual void do_transitCardIOError(TMgr*);          // _2C
		virtual void do_transitCardWrongDevice(TMgr*);      // _30
		virtual void do_transitCardWrongSector(TMgr*);      // _34
		virtual void do_transitCardBroken(TMgr*);           // _38
		virtual void do_transitCardEncoding(TMgr*);         // _3C
		virtual void do_transitCardNoFileSpace(TMgr*);      // _40
		virtual void do_transitCardNoFileEntry(TMgr*);      // _44
		virtual void do_transitCardFileOpenError(TMgr*);    // _48
		virtual void do_transitCardSerialNoError(TMgr*);    // _4C
		virtual void do_transitCardPlayerDataBroken(TMgr*); // _50

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace ebi

#endif
