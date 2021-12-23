#ifndef _LIFEGAUGEMGR_H
#define _LIFEGAUGEMGR_H

#include "types.h"

struct Graphics;

namespace Game {
struct Creature;
} // namespace Game

/**
 * @size{0x94}
 */
struct LifeGaugeMgr {
	LifeGaugeMgr();

	void createLifeGauge(Game::Creature*);
	void activeLifeGauge(Game::Creature*, float);
	void inactiveLifeGauge(Game::Creature*);
	void loadResource();
	void update();
	void draw(Graphics&);

	u8 todo[0x94]; // _00
};

extern LifeGaugeMgr* lifeGaugeMgr;

#endif
