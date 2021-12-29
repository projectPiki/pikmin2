#ifndef _GAME_BIGTREASURE_BIGTREASUREGROUNDCALLBACK_H
#define _GAME_BIGTREASURE_BIGTREASUREGROUNDCALLBACK_H

/*
    __vt__Q34Game11BigTreasure25BigTreasureGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte
   invokeOnGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox
    .4byte
   invokeOffGround__Q34Game11BigTreasure25BigTreasureGroundCallBackFiPQ24Game8WaterBox
    .4byte 0
*/

namespace Game {
namespace BigTreasure {
	struct BigTreasureGroundCallBack {
		virtual void invokeOnGround(int, WaterBox*);  // _00
		virtual void invokeOffGround(int, WaterBox*); // _04
		virtual void _08() = 0;                       // _08

		// _00 VTBL
	};
} // namespace BigTreasure
} // namespace Game

#endif
