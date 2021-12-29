#ifndef _GAME_WORLDMAP_BASE_H
#define _GAME_WORLDMAP_BASE_H

/*
    __vt__Q34Game8WorldMap4Base:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game8WorldMap4BaseFv
    .4byte loadResource__Q34Game8WorldMap4BaseFv
    .4byte init__Q34Game8WorldMap4BaseFRQ34Game8WorldMap7InitArg
    .4byte update__Q34Game8WorldMap4BaseFRQ34Game8WorldMap9UpdateArg
    .4byte draw__Q34Game8WorldMap4BaseFR8Graphics
    .4byte draw1st__Q34Game8WorldMap4BaseFR8Graphics
    .4byte draw2nd__Q34Game8WorldMap4BaseFR8Graphics
    .4byte draw3rd__Q34Game8WorldMap4BaseFR8Graphics
    .4byte draw4th__Q34Game8WorldMap4BaseFR8Graphics
*/

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
