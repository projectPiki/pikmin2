#ifndef _GAME_CAVE_BASEGEN_H
#define _GAME_CAVE_BASEGEN_H

/*
    __vt__Q34Game4Cave7BaseGen:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave7BaseGenFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game4Cave7BaseGenFR6Stream
    .4byte draw__Q34Game4Cave7BaseGenFR8GraphicsP7Matrixf
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Cave {
struct BaseGen : public CNode {
	virtual ~BaseGen();                     // _08 (weak)
	virtual void read(Stream&);             // _10
	virtual void draw(Graphics&, Matrixf*); // _14
	virtual void _18() = 0;                 // _18

	BaseGen();
};
} // namespace Cave
} // namespace Game

#endif
