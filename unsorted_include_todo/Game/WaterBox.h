#ifndef _GAME_WATERBOX_H
#define _GAME_WATERBOX_H

namespace Game {
struct WaterBox {
	virtual void inWater(Sys::Sphere&);   // _00
	virtual void inWater2d(Sys::Sphere&); // _04
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
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
	virtual void _40() = 0;          // _40

	// _00 VTBL
};
} // namespace Game

#endif
