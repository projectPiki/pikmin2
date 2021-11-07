#ifndef _GAME_DAMAGUMO_DAMAGUMOGROUNDCALLBACK_H
#define _GAME_DAMAGUMO_DAMAGUMOGROUNDCALLBACK_H

namespace Game {
namespace Damagumo {
	struct DamagumoGroundCallBack {
		virtual void invokeOnGround(int, WaterBox*);  // _00
		virtual void invokeOffGround(int, WaterBox*); // _04

		// _00 VTBL
	};
} // namespace Damagumo
} // namespace Game

#endif
