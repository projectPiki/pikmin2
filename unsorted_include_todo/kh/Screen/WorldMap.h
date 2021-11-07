#ifndef _KH_SCREEN_WORLDMAP_H
#define _KH_SCREEN_WORLDMAP_H

namespace Game {
namespace WorldMap {
	struct Base {
		virtual void _00() = 0;       // _00
		virtual void _04() = 0;       // _04
		virtual void _08() = 0;       // _08
		virtual void _0C() = 0;       // _0C
		virtual void draw(Graphics&); // _10

		// _00 VTBL
	};
} // namespace WorldMap
} // namespace Game

namespace kh {
namespace Screen {
	struct WorldMap : public Base {
		virtual ~WorldMap();                   // _00
		virtual void loadResource();           // _04
		virtual void init(Game::InitArg&);     // _08
		virtual void update(Game::UpdateArg&); // _0C
		virtual void draw(Graphics&);          // _10
		virtual void draw1st(Graphics&);       // _14
		virtual void draw2nd(Graphics&);       // _18
		virtual void draw3rd(Graphics&);       // _1C
		virtual void draw4th(Graphics&);       // _20

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
