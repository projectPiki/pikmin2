#ifndef _GAME_FARM_OBSTACLE_H
#define _GAME_FARM_OBSTACLE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Farm {
	struct Obstacle : public CNode {
		virtual ~Obstacle();          // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Farm
} // namespace Game

#endif
