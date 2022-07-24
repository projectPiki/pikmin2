#ifndef _GAME_JOINTGROUNDCALLBACK_H
#define _GAME_JOINTGROUNDCALLBACK_H

/*
    __vt__Q24Game19JointGroundCallBack:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace Game {
struct JointGroundCallBack {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};
} // namespace Game

#endif
