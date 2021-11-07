#ifndef _GAME_BIGFOOT_BIGFOOTGROUNDCALLBACK_H
#define _GAME_BIGFOOT_BIGFOOTGROUNDCALLBACK_H

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
