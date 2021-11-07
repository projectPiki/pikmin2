#ifndef _GAME_ENEMYSTONE_FSMSTATEDEAD_H
#define _GAME_ENEMYSTONE_FSMSTATEDEAD_H

namespace Game {
namespace FSMState < Game
{
	namespace EnemyStone {
		struct DrawInfo >
		{
			virtual void _00() = 0;                                     // _00
			virtual void FSMState < exec(DrawInfo*);                    // _04
			virtual void FSMState < cleanup(DrawInfo*);                 // _08
			virtual void FSMState < resume(DrawInfo*);                  // _0C
			virtual void FSMState < restart(DrawInfo*);                 // _10
			virtual void FSMState < transit(DrawInfo*, int, StateArg*); // _14

			// _00 VTBL
		};
	} // namespace EnemyStone
} // namespace Game
} // namespace Game

namespace Game {
namespace EnemyStone {
	struct FSMStateDead : public DrawInfo > {
		virtual void init(DrawInfo*, StateArg*);                    // _00
		virtual void FSMState < exec(DrawInfo*);                    // _04
		virtual void FSMState < cleanup(DrawInfo*);                 // _08
		virtual void FSMState < resume(DrawInfo*);                  // _0C
		virtual void FSMState < restart(DrawInfo*);                 // _10
		virtual void FSMState < transit(DrawInfo*, int, StateArg*); // _14
		virtual void makeMatrix(DrawInfo*, Matrixf*);               // _18

		// _00 VTBL
	};
} // namespace EnemyStone
} // namespace Game

#endif
