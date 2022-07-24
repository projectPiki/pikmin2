#ifndef _GAME_HOUDAI_HOUDAIGROUNDCALLBACK_H
#define _GAME_HOUDAI_HOUDAIGROUNDCALLBACK_H

/*
    __vt__Q34Game6Houdai20HoudaiGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte invokeOnGround__Q34Game6Houdai20HoudaiGroundCallBackFiPQ24Game8WaterBox
    .4byte invokeOffGround__Q34Game6Houdai20HoudaiGroundCallBackFiPQ24Game8WaterBox
    .4byte 0
*/

namespace Game {
namespace Houdai {
struct HoudaiGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);  // _08
	virtual void invokeOffGround(int, WaterBox*); // _0C
	virtual void _10() = 0;                       // _10

	// _00 VTBL
};
} // namespace Houdai
} // namespace Game

#endif
