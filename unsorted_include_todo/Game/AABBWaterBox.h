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
    .4byte attachModel__Q24Game12AABBWaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
    .4byte calcMatrix__Q24Game12AABBWaterBoxFv
*/

namespace Game {
struct WaterBox {
	virtual void inWater(Sys::Sphere&);   // _08
	virtual void inWater2d(Sys::Sphere&); // _0C
	virtual void getSeaLevel();           // _10 (weak)
	virtual void getSeaHeightPtr();       // _14 (weak)
	virtual void update();                // _18
	virtual void startDown(float);        // _1C
	virtual void startUp(float);          // _20
	virtual void directDraw(Graphics&);   // _24
	virtual void doAnimation();           // _28
	virtual void doEntry();               // _2C
	virtual void doSetView(int);          // _30
	virtual void doViewCalc();            // _34
	virtual void doSimulation(float);     // _38 (weak)
	virtual void doDirectDraw(Graphics&); // _3C (weak)
};
} // namespace Game

namespace Game {
struct AABBWaterBox : public WaterBox {
	virtual void inWater(Sys::Sphere&);                                    // _08
	virtual void inWater2d(Sys::Sphere&);                                  // _0C
	virtual void getSeaLevel();                                            // _10 (weak)
	virtual void getSeaHeightPtr();                                        // _14 (weak)
	virtual void update();                                                 // _18
	virtual void startDown(float);                                         // _1C
	virtual void startUp(float);                                           // _20
	virtual void directDraw(Graphics&);                                    // _24
	virtual void doAnimation();                                            // _28
	virtual void doEntry();                                                // _2C
	virtual void doSetView(int);                                           // _30
	virtual void doViewCalc();                                             // _34
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*, float); // _40
	virtual void calcMatrix();                                             // _44

	void globalise(Game::AABBWaterBox*, Matrixf&);
};
} // namespace Game

#endif
