#ifndef _GAME_DAMAGUMO_DAMAGUMOGROUNDCALLBACK_H
#define _GAME_DAMAGUMO_DAMAGUMOGROUNDCALLBACK_H

/*
    __vt__Q34Game8Damagumo22DamagumoGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte invokeOnGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox
    .4byte invokeOffGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox
*/

namespace Game {
namespace Damagumo {
struct DamagumoGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
};
} // namespace Damagumo
} // namespace Game

#endif
