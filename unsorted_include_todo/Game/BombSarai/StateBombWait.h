#ifndef _GAME_BOMBSARAI_STATEBOMBWAIT_H
#define _GAME_BOMBSARAI_STATEBOMBWAIT_H

/*
    __vt__Q34Game9BombSarai13StateBombWait:
    .4byte 0
    .4byte 0
    .4byte
   init__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBasePQ24Game8StateArg
    .4byte exec__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase
    .4byte cleanup__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase
    .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
    .4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
    .4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
*/

namespace Game {
struct EnemyFSMState {
	virtual void init(EnemyBase*, StateArg*);         // _00
	virtual void exec(EnemyBase*);                    // _04
	virtual void cleanup(EnemyBase*);                 // _08
	virtual void resume(EnemyBase*);                  // _0C
	virtual void restart(EnemyBase*);                 // _10
	virtual void transit(EnemyBase*, int, StateArg*); // _14
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace BombSarai {
	struct StateBombWait : public EnemyFSMState {
		virtual void init(EnemyBase*, StateArg*);         // _00
		virtual void exec(EnemyBase*);                    // _04
		virtual void cleanup(EnemyBase*);                 // _08
		virtual void resume(EnemyBase*);                  // _0C
		virtual void restart(EnemyBase*);                 // _10
		virtual void transit(EnemyBase*, int, StateArg*); // _14
		virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

		// _00 VTBL
	};
} // namespace BombSarai
} // namespace Game

#endif
