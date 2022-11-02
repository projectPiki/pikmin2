#ifndef _GAME_SEAMGR_H
#define _GAME_SEAMGR_H

#include "Game/WaterBox.h"
#include "ObjectMgr.h"
#include "types.h"

namespace Game {
struct SeaMgr : public NodeObjectMgr<WaterBox> {
	SeaMgr();

	virtual ~SeaMgr(); // _08 (weak)

	void addSeaMgr(SeaMgr*, Matrixf&);
	void addWaterBox(WaterBox*);
	WaterBox* findWater(Sys::Sphere&);
	WaterBox* findWater2d(Sys::Sphere&);
	void read(Stream&);
	void update();

	// Unused/inlined:
	void directDraw(Graphics&);

	int _3C;                            // _3C
	J3DModelData** m_modelData;         // _40
	Sys::MatTexAnimation* m_animations; // _44
};
} // namespace Game

#endif
