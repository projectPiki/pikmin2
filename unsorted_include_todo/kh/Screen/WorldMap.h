#ifndef _KH_SCREEN_WORLDMAP_H
#define _KH_SCREEN_WORLDMAP_H

/*
    __vt__Q32kh6Screen8WorldMap:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32kh6Screen8WorldMapFv
    .4byte loadResource__Q32kh6Screen8WorldMapFv
    .4byte init__Q32kh6Screen8WorldMapFRQ34Game8WorldMap7InitArg
    .4byte update__Q32kh6Screen8WorldMapFRQ34Game8WorldMap9UpdateArg
    .4byte draw__Q34Game8WorldMap4BaseFR8Graphics
    .4byte draw1st__Q32kh6Screen8WorldMapFR8Graphics
    .4byte draw2nd__Q32kh6Screen8WorldMapFR8Graphics
    .4byte draw3rd__Q32kh6Screen8WorldMapFR8Graphics
    .4byte draw4th__Q32kh6Screen8WorldMapFR8Graphics
*/

namespace Game {
namespace WorldMap {
	struct Base {
		virtual ~Base();                       // _00
		virtual void loadResource();           // _04
		virtual void init(Game::InitArg&);     // _08
		virtual void update(Game::UpdateArg&); // _0C
		virtual void draw(Graphics&);          // _10

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
