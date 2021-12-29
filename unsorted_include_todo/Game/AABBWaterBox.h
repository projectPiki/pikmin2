#ifndef _GAME_AABBWATERBOX_H
#define _GAME_AABBWATERBOX_H

/*
    __vt__Q24Game12AABBWaterBox:
    .4byte 0
    .4byte 0
    .4byte inWater__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
    .4byte inWater2d__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
    .4byte getSeaLevel__Q24Game12AABBWaterBoxFv
    .4byte getSeaHeightPtr__Q24Game12AABBWaterBoxFv
    .4byte update__Q24Game12AABBWaterBoxFv
    .4byte startDown__Q24Game12AABBWaterBoxFf
    .4byte startUp__Q24Game12AABBWaterBoxFf
    .4byte directDraw__Q24Game12AABBWaterBoxFR8Graphics
    .4byte doAnimation__Q24Game12AABBWaterBoxFv
    .4byte doEntry__Q24Game12AABBWaterBoxFv
    .4byte doSetView__Q24Game12AABBWaterBoxFi
    .4byte doViewCalc__Q24Game12AABBWaterBoxFv
    .4byte doSimulation__Q24Game8WaterBoxFf
    .4byte doDirectDraw__Q24Game8WaterBoxFR8Graphics
    .4byte
   attachModel__Q24Game12AABBWaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
    .4byte calcMatrix__Q24Game12AABBWaterBoxFv
*/

namespace Game {
struct WaterBox {
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
