#ifndef _GAME_ENEMYSTONE_OBJ_H
#define _GAME_ENEMYSTONE_OBJ_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace EnemyStone {
	struct Obj : public CNode {
		virtual ~Obj();               // _00
		virtual void getChildCount(); // _04
		virtual void _08() = 0;       // _08

		// _00 VTBL
	};
} // namespace EnemyStone
} // namespace Game

#endif
