#ifndef _GAME_ENEMYSTONE_DRAWINFO_H
#define _GAME_ENEMYSTONE_DRAWINFO_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace EnemyStone {
	struct DrawInfo : public CNode {
		virtual ~DrawInfo();          // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace EnemyStone
} // namespace Game

#endif
