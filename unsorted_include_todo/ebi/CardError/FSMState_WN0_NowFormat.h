#ifndef _EBI_CARDERROR_FSMSTATE_WN0_NOWFORMAT_H
#define _EBI_CARDERROR_FSMSTATE_WN0_NOWFORMAT_H

/*
    __vt__Q33ebi9CardError22FSMState_WN0_NowFormat:
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
   do_init__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgrPQ24Game8StateArg
    .4byte
   do_exec__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr .4byte
   do_open__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
    .4byte do_cardRequest__Q33ebi9CardError22FSMState_WN0_NowFormatFv
    .4byte
   do_transitCardReady__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardNoCard__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardIOError__Q33ebi9CardError22FSMState_WN0_NowFormatFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardWrongDevice__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardWrongSector__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardBroken__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardEncoding__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardNoFileSpace__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardNoFileEntry__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardFileOpenError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
    .4byte
   do_transitCardSerialNoError__Q33ebi9CardError20FSMState_CardRequestFPQ33ebi9CardError4TMgr
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
	struct FSMState_CardRequest {
		virtual void _00() = 0;                          // _00
		virtual void _04() = 0;                          // _04
		virtual void _08() = 0;                          // _08
		virtual void _0C() = 0;                          // _0C
		virtual void _10() = 0;                          // _10
		virtual void _14() = 0;                          // _14
		virtual void do_init(TMgr*, Game::StateArg*);    // _18
		virtual void do_exec(TMgr*);                     // _1C
		virtual void _20() = 0;                          // _20
		virtual void _24() = 0;                          // _24
		virtual void _28() = 0;                          // _28
		virtual void _2C() = 0;                          // _2C
		virtual void _30() = 0;                          // _30
		virtual void do_transitCardWrongDevice(TMgr*);   // _34
		virtual void do_transitCardWrongSector(TMgr*);   // _38
		virtual void do_transitCardBroken(TMgr*);        // _3C
		virtual void do_transitCardEncoding(TMgr*);      // _40
		virtual void do_transitCardNoFileSpace(TMgr*);   // _44
		virtual void do_transitCardNoFileEntry(TMgr*);   // _48
		virtual void do_transitCardFileOpenError(TMgr*); // _4C
		virtual void do_transitCardSerialNoError(TMgr*); // _50

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

namespace ebi {
namespace CardError {
	struct FSMState_WN0_NowFormat : public FSMState,
	                                public TMgr >,
	                                public FSMState_CardRequest {
		virtual void init(TMgr*, Game::StateArg*);        // _00
		virtual void exec(TMgr*);                         // _04
		virtual void cleanup(ebi::TMgr*);                 // _08
		virtual void resume(ebi::TMgr*);                  // _0C
		virtual void restart(ebi::TMgr*);                 // _10
		virtual void transit(ebi::TMgr*, int, StateArg*); // _14
		virtual void do_init(TMgr*, Game::StateArg*);     // _18
		virtual void do_exec(TMgr*);                      // _1C
		virtual void do_open(TMgr*);                      // _20
		virtual void do_cardRequest();                    // _24
		virtual void do_transitCardReady(TMgr*);          // _28
		virtual void do_transitCardNoCard(TMgr*);         // _2C
		virtual void do_transitCardIOError(TMgr*);        // _30
		virtual void do_transitCardWrongDevice(TMgr*);    // _34
		virtual void do_transitCardWrongSector(TMgr*);    // _38
		virtual void do_transitCardBroken(TMgr*);         // _3C
		virtual void do_transitCardEncoding(TMgr*);       // _40
		virtual void do_transitCardNoFileSpace(TMgr*);    // _44
		virtual void do_transitCardNoFileEntry(TMgr*);    // _48
		virtual void do_transitCardFileOpenError(TMgr*);  // _4C
		virtual void do_transitCardSerialNoError(TMgr*);  // _50

		// _00 VTBL
	};
} // namespace CardError
} // namespace ebi

#endif
