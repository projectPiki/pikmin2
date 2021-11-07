#ifndef _GAME_ARMOR_STATEATTACK1_H
#define _GAME_ARMOR_STATEATTACK1_H

namespace Game {
struct EnemyFSMState {
	virtual void _00() = 0;                           // _00
	virtual void _04() = 0;                           // _04
	virtual void _08() = 0;                           // _08
	virtual void resume(EnemyBase*);                  // _0C
	virtual void restart(EnemyBase*);                 // _10
	virtual void transit(EnemyBase*, int, StateArg*); // _14
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Armor {
	struct StateAttack1 : public EnemyFSMState {
		virtual void init(EnemyBase*, StateArg*);         // _00
		virtual void exec(EnemyBase*);                    // _04
		virtual void cleanup(EnemyBase*);                 // _08
		virtual void resume(EnemyBase*);                  // _0C
		virtual void restart(EnemyBase*);                 // _10
		virtual void transit(EnemyBase*, int, StateArg*); // _14
		virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

		// _00 VTBL
	};
} // namespace Armor
} // namespace Game

#endif
