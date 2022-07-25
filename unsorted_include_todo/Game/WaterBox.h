#ifndef _GAME_WATERBOX_H
#define _GAME_WATERBOX_H

/*
    __vt__Q24Game8WaterBox:
    .4byte 0
    .4byte 0
    .4byte inWater__Q24Game8WaterBoxFRQ23Sys6Sphere
    .4byte inWater2d__Q24Game8WaterBoxFRQ23Sys6Sphere
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte startDown__Q24Game8WaterBoxFf
    .4byte startUp__Q24Game8WaterBoxFf
    .4byte directDraw__Q24Game8WaterBoxFR8Graphics
    .4byte doAnimation__Q24Game8WaterBoxFv
    .4byte doEntry__Q24Game8WaterBoxFv
    .4byte doSetView__Q24Game8WaterBoxFi
    .4byte doViewCalc__Q24Game8WaterBoxFv
    .4byte doSimulation__Q24Game8WaterBoxFf
    .4byte doDirectDraw__Q24Game8WaterBoxFR8Graphics
    .4byte attachModel__Q24Game8WaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
    .4byte calcMatrix__Q24Game8WaterBoxFv
    .4byte 0
*/

namespace Game {
struct WaterBox {
	virtual void inWater(Sys::Sphere&);                                    // _08 (weak)
	virtual void inWater2d(Sys::Sphere&);                                  // _0C (weak)
	virtual void _10() = 0;                                                // _10
	virtual void _14() = 0;                                                // _14
	virtual void _18() = 0;                                                // _18
	virtual void startDown(float);                                         // _1C (weak)
	virtual void startUp(float);                                           // _20 (weak)
	virtual void directDraw(Graphics&);                                    // _24 (weak)
	virtual void doAnimation();                                            // _28 (weak)
	virtual void doEntry();                                                // _2C (weak)
	virtual void doSetView(int);                                           // _30 (weak)
	virtual void doViewCalc();                                             // _34 (weak)
	virtual void doSimulation(float);                                      // _38 (weak)
	virtual void doDirectDraw(Graphics&);                                  // _3C (weak)
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*, float); // _40 (weak)
	virtual void calcMatrix();                                             // _44 (weak)
	virtual void _48() = 0;                                                // _48
};
} // namespace Game

#endif
