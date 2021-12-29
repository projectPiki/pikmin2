#ifndef _GAME_HOUDAI_HOUDAIGROUNDCALLBACK_H
#define _GAME_HOUDAI_HOUDAIGROUNDCALLBACK_H

/*
    __vt__Q34Game6Houdai20HoudaiGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte
   invokeOnGround__Q34Game6Houdai20HoudaiGroundCallBackFiPQ24Game8WaterBox
    .4byte
   invokeOffGround__Q34Game6Houdai20HoudaiGroundCallBackFiPQ24Game8WaterBox
    .4byte 0
*/

namespace Game {
namespace Houdai {
	struct HoudaiGroundCallBack {
		virtual void invokeOnGround(int, WaterBox*);  // _00
		virtual void invokeOffGround(int, WaterBox*); // _04
		virtual void _08() = 0;                       // _08

		// _00 VTBL
	};
} // namespace Houdai
} // namespace Game

#endif
