#ifndef _GAME_BIGFOOT_BIGFOOTGROUNDCALLBACK_H
#define _GAME_BIGFOOT_BIGFOOTGROUNDCALLBACK_H

/*
    __vt__Q34Game7BigFoot21BigFootGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte
   invokeOnGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
    .4byte
   invokeOffGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
    .4byte 0
*/

namespace Game {
namespace BigFoot {
	struct BigFootGroundCallBack {
		virtual void invokeOnGround(int, WaterBox*);  // _00
		virtual void invokeOffGround(int, WaterBox*); // _04
		virtual void _08() = 0;                       // _08

		// _00 VTBL
	};
} // namespace BigFoot
} // namespace Game

#endif
