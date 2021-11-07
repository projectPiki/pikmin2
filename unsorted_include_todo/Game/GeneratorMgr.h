#ifndef _GAME_GENERATORMGR_H
#define _GAME_GENERATORMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GeneratorMgr : public CNode {
	virtual ~GeneratorMgr();      // _00
	virtual void getChildCount(); // _04
	virtual void doAnimation();   // _08
	virtual void doEntry();       // _0C
	virtual void doSetView(int);  // _10
	virtual void doViewCalc();    // _14

	// _00 VTBL
};
} // namespace Game

#endif
