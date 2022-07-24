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
	virtual ~Base();                       // _08
	virtual void loadResource();           // _0C
	virtual void init(Game::InitArg&);     // _10
	virtual void update(Game::UpdateArg&); // _14
	virtual void draw(Graphics&);          // _18

	// _00 VTBL
};
} // namespace WorldMap
} // namespace Game

namespace kh {
namespace Screen {
struct WorldMap : public Base {
	virtual ~WorldMap();                   // _08
	virtual void loadResource();           // _0C
	virtual void init(Game::InitArg&);     // _10
	virtual void update(Game::UpdateArg&); // _14
	virtual void draw1st(Graphics&);       // _1C
	virtual void draw2nd(Graphics&);       // _20
	virtual void draw3rd(Graphics&);       // _24
	virtual void draw4th(Graphics&);       // _28

	// _00 VTBL
};
} // namespace Screen
} // namespace kh

#endif
