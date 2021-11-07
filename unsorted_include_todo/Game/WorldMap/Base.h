#ifndef _GAME_WORLDMAP_BASE_H
#define _GAME_WORLDMAP_BASE_H

namespace Game {
namespace WorldMap {
	struct Base {
		virtual ~Base();                 // _00
		virtual void loadResource();     // _04
		virtual void init(InitArg&);     // _08
		virtual void update(UpdateArg&); // _0C
		virtual void draw(Graphics&);    // _10
		virtual void draw1st(Graphics&); // _14
		virtual void draw2nd(Graphics&); // _18
		virtual void draw3rd(Graphics&); // _1C
		virtual void draw4th(Graphics&); // _20

		// _00 VTBL
	};
} // namespace WorldMap
} // namespace Game

#endif
