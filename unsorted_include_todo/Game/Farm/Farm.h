#ifndef _GAME_FARM_FARM_H
#define _GAME_FARM_FARM_H

/*
    __vt__Q34Game4Farm4Farm:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Farm4FarmFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Farm {
struct Farm : public CNode {
	virtual ~Farm(); // _08 (inline)

	Farm();
	void loadResource(unsigned long, void*);
	void update();
	void doAnimation();
	void doEntry();
	void doSetView(unsigned long);
	void doViewCalc();
	void addObstacle(Game::Creature*, float, float);
	void createNewObstacle(Game::Creature*, float, float);
	void addPlant(Game::Creature*);
	void createNewPlant(Game::Creature*);
	void updateObjectRelation(bool);
	void doDebugDraw(Graphics&);
	void initAllObjectNodes();
};
} // namespace Farm
} // namespace Game

#endif
