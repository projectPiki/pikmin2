#ifndef _GAME_ENEMYSTONE_STATEMACHINE_H
#define _GAME_ENEMYSTONE_STATEMACHINE_H

/*
    __vt__Q34Game10EnemyStone12StateMachine:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfo
    .4byte "start__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
    .4byte "exec__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
    .4byte "transit__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
    .4byte makeMatrix__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfoP7Matrixf
    .4byte 0
*/

namespace Game {
struct StateMachine<Game::EnemyStone::DrawInfo> {
	virtual void init(DrawInfo*);                                                                    // _08
	virtual void StateMachine<EnemyStone::DrawInfo>::start(EnemyStone::DrawInfo*, int, StateArg*);   // _0C (weak)
	virtual void StateMachine<EnemyStone::DrawInfo>::exec(EnemyStone::DrawInfo*);                    // _10 (weak)
	virtual void StateMachine<EnemyStone::DrawInfo>::transit(EnemyStone::DrawInfo*, int, StateArg*); // _14 (weak)
};
} // namespace Game

namespace Game {
namespace EnemyStone {
struct StateMachine : public StateMachine<Game::EnemyStone::DrawInfo> {
	virtual void init(DrawInfo*);                 // _08
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _18
	virtual void _1C() = 0;                       // _1C
};
} // namespace EnemyStone
} // namespace Game

#endif
