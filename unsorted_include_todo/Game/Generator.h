#ifndef _GAME_GENERATOR_H
#define _GAME_GENERATOR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct Generator : public CNode {
	virtual ~Generator();         // _00
	virtual void getChildCount(); // _04
	virtual void doAnimation();   // _08
	virtual void doEntry();       // _0C
	virtual void doSetView(int);  // _10
	virtual void doViewCalc();    // _14

	// _00 VTBL
};
} // namespace Game

#endif
