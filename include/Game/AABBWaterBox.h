#ifndef _GAME_AABBWATERBOX_H
#define _GAME_AABBWATERBOX_H

namespace Sys {
struct MatTexAnimation;
struct Sphere;
} // namespace Sys

namespace Game {
struct AABBWaterBox {
	void attachModel(struct J3DModelData*, Sys::MatTexAnimation*, float);
	void calcMatrix();
	void directDraw(struct Graphics&);
	void doAnimation();
	void doEntry();
	void doSetView(int);
	void doViewCalc();
	void getSeaHeightPtr();
	void getSeaLevel();
	void globalise(Game::AABBWaterBox*, struct Matrixf&);
	void inWater(Sys::Sphere&);
	void inWater2d(Sys::Sphere&);
	void startDown(float);
	void startUp(float);
	void update();
};
} // namespace Game

#endif