#ifndef _GAME_AABBWATERBOX_H
#define _GAME_AABBWATERBOX_H

struct Matrixf;
template <typename T> struct Vector3;
typedef Vector3<float> Vector3f;

namespace Sys {
struct MatTexAnimation;
struct Sphere;
} // namespace Sys

namespace Game {
struct WaterBox {
	virtual bool inWater(Sys::Sphere&);          // _00
	virtual bool inWater2d(Sys::Sphere&);        // _04
	virtual float getSeaLevel();                 // _08
	virtual float* getSeaHeightPtr();            // _0C
	virtual bool update();                       // _10
	virtual void startDown(float);               // _14
	virtual void startUp(float);                 // _18
	virtual void directDraw(struct Graphics&);   // _1C
	virtual void doAnimation();                  // _20
	virtual void doEntry();                      // _24
	virtual void doSetView(int);                 // _28
	virtual void doViewCalc();                   // _2C
	virtual void doSimulation(float);            // _30
	virtual void doDirectDraw(struct Graphics&); // _34
	virtual void attachModel(struct J3DModelData*, Sys::MatTexAnimation*,
	                         float); // _38
	virtual void calcMatrix();       // _3C
};

struct AABBWaterBox : public WaterBox {

	virtual bool inWater(Sys::Sphere&);        // _00
	virtual bool inWater2d(Sys::Sphere&);      // _04
	virtual float getSeaLevel();               // _08
	virtual float* getSeaHeightPtr();          // _0C
	virtual bool update();                     // _10
	virtual void startDown(float);             // _14
	virtual void startUp(float);               // _18
	virtual void directDraw(struct Graphics&); // _1C
	virtual void doAnimation();                // _20
	virtual void doEntry();                    // _24
	virtual void doSetView(int);               // _28
	virtual void doViewCalc();                 // _2C
	virtual void attachModel(struct J3DModelData*, Sys::MatTexAnimation*,
	                         float); // _38
	virtual void calcMatrix();       // _3C

	void create(Vector3f&, Vector3f&);
	void globalise(Game::AABBWaterBox*, Matrixf&);
};
} // namespace Game

#endif
