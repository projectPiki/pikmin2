#ifndef _GAME_HOUDAI_HOUDAIGROUNDCALLBACK_H
#define _GAME_HOUDAI_HOUDAIGROUNDCALLBACK_H

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
