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
	virtual ~Base();                 // _08 (weak)
	virtual void loadResource();     // _0C (weak)
	virtual void init(InitArg&);     // _10 (weak)
	virtual void update(UpdateArg&); // _14 (weak)
	virtual void draw(Graphics&);    // _18 (weak)
	virtual void draw1st(Graphics&); // _1C (weak)
	virtual void draw2nd(Graphics&); // _20 (weak)
	virtual void draw3rd(Graphics&); // _24 (weak)
	virtual void draw4th(Graphics&); // _28 (weak)
};
} // namespace WorldMap
} // namespace Game

#endif
