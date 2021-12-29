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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Cave {
	struct BaseGen : public CNode {
		virtual ~BaseGen();                     // _00
		virtual void getChildCount();           // _04
		virtual void read(Stream&);             // _08
		virtual void draw(Graphics&, Matrixf*); // _0C
		virtual void _10() = 0;                 // _10

		// _00 VTBL
	};
} // namespace Cave
} // namespace Game

#endif
