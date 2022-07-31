#ifndef _EBI_FS_FSMSTATE_CARDTASK_H
#define _EBI_FS_FSMSTATE_CARDTASK_H

/*
    __vt__Q33ebi2FS17FSMState_CardTask:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
    .4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte do_transitCardPlayerDataBroken__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
    .4byte do_close__Q33ebi2FS17FSMState_CardTaskFPQ33ebi2FS4TMgr
*/

namespace Game {
struct FSMState<ebi::FS::TMgr> {
	virtual void init(TMgr*, Game::StateArg*);            // _08 (weak)
	virtual void exec(TMgr*);                             // _0C
	virtual void cleanup(ebi::FS::TMgr*);                 // _10 (weak)
	virtual void resume(ebi::FS::TMgr*);                  // _14 (weak)
	virtual void restart(ebi::FS::TMgr*);                 // _18 (weak)
	virtual void transit(ebi::FS::TMgr*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace ebi {
namespace FS {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*);    // _08 (weak)
	virtual void exec(TMgr*);                     // _0C
	virtual void _10() = 0;                       // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
	virtual void _1C() = 0;                       // _1C
	virtual void do_init(TMgr*, Game::StateArg*); // _20 (weak)
	virtual void do_exec(TMgr*);                  // _24 (weak)
};
} // namespace FS
} // namespace ebi

namespace ebi {
namespace FS {
struct FSMState_CardTask : public FSMState<ebi::FS::TMgr>, public FSMState {
	virtual void init(TMgr*, Game::StateArg*);          // _08 (weak)
	virtual void exec(TMgr*);                           // _0C
	virtual void do_init(TMgr*, Game::StateArg*);       // _20 (weak)
	virtual void _28() = 0;                             // _28
	virtual void _2C() = 0;                             // _2C
	virtual void _30() = 0;                             // _30
	virtual void _34() = 0;                             // _34
	virtual void do_transitCardPlayerDataBroken(TMgr*); // _38
	virtual void do_close(TMgr*);                       // _3C (weak)
};
} // namespace FS
} // namespace ebi

#endif
