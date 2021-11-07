#ifndef _GAME_CAVE_BASEGEN_H
#define _GAME_CAVE_BASEGEN_H

struct CNode {
	virtual void _00() = 0;       // _00
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
