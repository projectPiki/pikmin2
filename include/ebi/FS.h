#ifndef _EBI_FS_H
#define _EBI_FS_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "Game/StateMachine.h"

struct Controller;

namespace ebi {
namespace FS {
struct TMgr;

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int stateID); // likely

	virtual void init(TMgr*, Game::StateArg*);    // _08 (weak)
	virtual void exec(TMgr*);                     // _0C (weak)
	virtual void do_init(TMgr*, Game::StateArg*); // _20 (weak)
	virtual void do_exec(TMgr*);                  // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
};

struct FSMState_CardTask : public FSMState {
	inline FSMState_CardTask(); // likely

	virtual void init(TMgr*, Game::StateArg*);          // _08 (weak)
	virtual void exec(TMgr*);                           // _0C
	virtual void do_init(TMgr*, Game::StateArg*);       // _20 (weak)
	virtual void do_cardRequest(TMgr*)        = 0;      // _28
	virtual void do_transitCardReady(TMgr*)   = 0;      // _2C
	virtual void do_transitCardNoCard(TMgr*)  = 0;      // _30
	virtual void do_transitCardIOError(TMgr*) = 0;      // _34
	virtual void do_transitCardPlayerDataBroken(TMgr*); // _38
	virtual void do_close(TMgr*);                       // _3C (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_SelectYesNo : public FSMState {
	inline FSMState_SelectYesNo(); // likely

	virtual void do_init(TMgr*, Game::StateArg*);    // _20
	virtual void do_exec(TMgr*);                     // _24
	virtual void do_set(TMgr*, Game::StateArg*) = 0; // _28
	virtual void do_decide(TMgr*);                   // _2C (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_Warning : public FSMState {
	inline FSMState_Warning(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)    = 0;           // _28
	virtual void do_transit(TMgr*) = 0;           // _2C

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState00_SelectData : public FSMState {
	inline FSMState00_SelectData(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState00a_OpenScene : public FSMState {
	inline FSMState00a_OpenScene(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState00b_CheckData : public FSMState {
	inline FSMState00b_CheckData(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState00c_DecideData : public FSMState {
	inline FSMState00c_DecideData(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState01_DataBroken : public FSMState_SelectYesNo {
	inline FSMState01_DataBroken(); // likely

	virtual void do_set(TMgr*, Game::StateArg*); // _28

	// _00     = VTBL
	// _00-_0C = FSMState_SelectYesNo
};

struct FSMState02_NowDelete : public FSMState_CardTask {
	inline FSMState02_NowDelete(); // likely

	virtual void cleanup(TMgr*);                  // _10
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_cardRequest(TMgr*);           // _28
	virtual void do_transitCardReady(TMgr*);      // _2C
	virtual void do_transitCardNoCard(TMgr*);     // _30
	virtual void do_transitCardIOError(TMgr*);    // _34
	virtual void do_close(TMgr*);                 // _3C

	// _00     = VTBL
	// _00-_0C = FSMState_CardTask
};

struct FSMState03_DoYouDelete : public FSMState_SelectYesNo {
	inline FSMState03_DoYouDelete(); // likely

	virtual void do_set(TMgr*, Game::StateArg*); // _28
	virtual void do_decide(TMgr*);               // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_SelectYesNo
};

struct FSMState04_WhichDataDoYouCopyTo : public FSMState {
	inline FSMState04_WhichDataDoYouCopyTo(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState05_FailToDelete : public FSMState_Warning {
	inline FSMState05_FailToDelete(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState06_FinishDelete : public FSMState_Warning {
	inline FSMState06_FinishDelete(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState07_DoYouOverwrite : public FSMState_SelectYesNo {
	inline FSMState07_DoYouOverwrite(); // likely

	virtual void do_set(TMgr*, Game::StateArg*); // _28
	virtual void do_decide(TMgr*);               // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_SelectYesNo
};

struct FSMState08_FailToCopy : public FSMState_Warning {
	inline FSMState08_FailToCopy(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState09_NowCopy : public FSMState_CardTask {
	inline FSMState09_NowCopy(); // likely

	virtual void cleanup(TMgr*);                  // _10
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_cardRequest(TMgr*);           // _28
	virtual void do_transitCardReady(TMgr*);      // _2C
	virtual void do_transitCardNoCard(TMgr*);     // _30
	virtual void do_transitCardIOError(TMgr*);    // _34
	virtual void do_close(TMgr*);                 // _3C

	// _00     = VTBL
	// _00-_0C = FSMState_CardTask
};

struct FSMState10_FinishCopy : public FSMState_Warning {
	inline FSMState10_FinishCopy(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct TMgr {

	// TODO: members + functions
};
} // namespace FS
} // namespace ebi

#endif
