#ifndef _GAME_BIGFOOT_BIGFOOTGROUNDCALLBACK_H
#define _GAME_BIGFOOT_BIGFOOTGROUNDCALLBACK_H

/*
    __vt__Q34Game7BigFoot21BigFootGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte invokeOnGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
    .4byte invokeOffGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
*/

namespace Game {
namespace BigFoot {
struct BigFootGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
};
} // namespace BigFoot
} // namespace Game

#endif
