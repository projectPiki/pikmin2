#ifndef _EBI_FS_FSMSTATE02_NOWDELETE_H
#define _EBI_FS_FSMSTATE02_NOWDELETE_H

/*
    __vt__Q33ebi2FS20FSMState02_NowDelete:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
    .4byte cleanup__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
    .4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
    .4byte do_cardRequest__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
    .4byte do_transitCardReady__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
    .4byte do_transitCardNoCard__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
    .4byte do_transitCardIOError__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
    .4byte do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
    .4byte do_close__Q33ebi2FS20FSMState02_NowDeleteFPQ33ebi2FS4TMgr
*/

namespace ebi {
namespace FS {
struct FSMState_CardTask {
	virtual void init(TMgr*, Game::StateArg*);          // _08 (inline)
	virtual void exec(TMgr*);                           // _0C
	virtual void cleanup(TMgr*);                        // _10
	virtual void _14() = 0;                             // _14
	virtual void _18() = 0;                             // _18
	virtual void _1C() = 0;                             // _1C
	virtual void do_init(TMgr*, Game::StateArg*);       // _20
	virtual void _24() = 0;                             // _24
	virtual void do_cardRequest(TMgr*);                 // _28
	virtual void do_transitCardReady(TMgr*);            // _2C
	virtual void do_transitCardNoCard(TMgr*);           // _30
	virtual void do_transitCardIOError(TMgr*);          // _34
	virtual void do_transitCardPlayerDataBroken(TMgr*); // _38
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
		virtual void cleanup(TMgr*);                      // _10
		virtual void resume(ebi::TMgr*);                  // _14 (inline)
		virtual void restart(ebi::TMgr*);                 // _18 (inline)
		virtual void transit(ebi::TMgr*, int, StateArg*); // _1C (inline)
	};
	} // namespace FS
} // namespace ebi
} // namespace Game

namespace ebi {
namespace FS {
struct FSMState {
	virtual void _08() = 0;                       // _08
	virtual void _0C() = 0;                       // _0C
	virtual void cleanup(TMgr*);                  // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
	virtual void _1C() = 0;                       // _1C
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24 (inline)
};
} // namespace FS
} // namespace ebi

namespace ebi {
namespace FS {
struct FSMState02_NowDelete : public FSMState_CardTask, public TMgr >, public FSMState {
	virtual void cleanup(TMgr*);                  // _10
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_cardRequest(TMgr*);           // _28
	virtual void do_transitCardReady(TMgr*);      // _2C
	virtual void do_transitCardNoCard(TMgr*);     // _30
	virtual void do_transitCardIOError(TMgr*);    // _34
	virtual void do_close(TMgr*);                 // _3C
};
} // namespace FS
} // namespace ebi

#endif
