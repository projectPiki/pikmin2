#ifndef _GAME_ENEMYSTONE_FSMSTATEDISAPPEAR_H
#define _GAME_ENEMYSTONE_FSMSTATEDISAPPEAR_H

namespace Game {
namespace FSMState < Game
{
	namespace EnemyStone {
		struct DrawInfo >
		{
			virtual void _00() = 0;                                     // _00
			virtual void _04() = 0;                                     // _04
			virtual void _08() = 0;                                     // _08
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
	struct FSMStateDisappear : public DrawInfo > {
		virtual void init(DrawInfo*, StateArg*);                    // _00
		virtual void exec(DrawInfo*);                               // _04
		virtual void cleanup(DrawInfo*);                            // _08
		virtual void FSMState < resume(DrawInfo*);                  // _0C
		virtual void FSMState < restart(DrawInfo*);                 // _10
		virtual void FSMState < transit(DrawInfo*, int, StateArg*); // _14
		virtual void makeMatrix(DrawInfo*, Matrixf*);               // _18

		// _00 VTBL
	};
} // namespace EnemyStone
} // namespace Game

#endif
