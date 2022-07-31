#ifndef _EBI_FS_FSMSTATE00A_OPENSCENE_H
#define _EBI_FS_FSMSTATE00A_OPENSCENE_H

/*
    __vt__Q33ebi2FS21FSMState00a_OpenScene:
    .4byte 0
    .4byte 0
    .4byte init__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte exec__Q33ebi2FS8FSMStateFPQ33ebi2FS4TMgr
    .4byte "cleanup__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "resume__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "restart__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgr"
    .4byte "transit__Q24Game24FSMState<Q33ebi2FS4TMgr>FPQ33ebi2FS4TMgriPQ24Game8StateArg"
    .4byte do_init__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgrPQ24Game8StateArg
    .4byte do_exec__Q33ebi2FS21FSMState00a_OpenSceneFPQ33ebi2FS4TMgr
*/

namespace ebi {
namespace FS {
struct FSMState {
	virtual void init(TMgr*, Game::StateArg*); // _08 (weak)
	virtual void exec(TMgr*);                  // _0C (weak)
};
} // namespace FS
} // namespace ebi

namespace Game {
struct FSMState<ebi::FS::TMgr> {
	virtual void _08() = 0;                               // _08
	virtual void _0C() = 0;                               // _0C
	virtual void cleanup(ebi::FS::TMgr*);                 // _10 (weak)
	virtual void resume(ebi::FS::TMgr*);                  // _14 (weak)
	virtual void restart(ebi::FS::TMgr*);                 // _18 (weak)
	virtual void transit(ebi::FS::TMgr*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace ebi {
namespace FS {
struct FSMState00a_OpenScene : public FSMState, public FSMState<ebi::FS::TMgr> {
	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
};
} // namespace FS
} // namespace ebi

#endif
