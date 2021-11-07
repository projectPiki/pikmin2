#ifndef _GAME_AABBWATERBOX_H
#define _GAME_AABBWATERBOX_H

namespace Game {
struct WaterBox {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void _20() = 0;               // _20
	virtual void _24() = 0;               // _24
	virtual void _28() = 0;               // _28
	virtual void _2C() = 0;               // _2C
	virtual void doSimulation(float);     // _30
	virtual void doDirectDraw(Graphics&); // _34

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct AABBWaterBox : public WaterBox {
	virtual void inWater(Sys::Sphere&);   // _00
	virtual void inWater2d(Sys::Sphere&); // _04
	virtual void getSeaLevel();           // _08
	virtual void getSeaHeightPtr();       // _0C
	virtual void update();                // _10
	virtual void startDown(float);        // _14
	virtual void startUp(float);          // _18
	virtual void directDraw(Graphics&);   // _1C
	virtual void doAnimation();           // _20
	virtual void doEntry();               // _24
	virtual void doSetView(int);          // _28
	virtual void doViewCalc();            // _2C
	virtual void doSimulation(float);     // _30
	virtual void doDirectDraw(Graphics&); // _34
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*,
	                         float); // _38
	virtual void calcMatrix();       // _3C

	// _00 VTBL
};
} // namespace Game

#endif
