#ifndef _GAME_FARM_OBSTACLE_H
#define _GAME_FARM_OBSTACLE_H

/*
    __vt__Q34Game4Farm8Obstacle:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Farm8ObstacleFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Farm {
struct Obstacle : public CNode {
	virtual ~Obstacle(); // _08 (inline)

	void setPower(float);
};
} // namespace Farm
} // namespace Game

#endif
