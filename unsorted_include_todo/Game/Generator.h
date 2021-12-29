#ifndef _GAME_GENERATOR_H
#define _GAME_GENERATOR_H

/*
    __vt__Q24Game9Generator:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9GeneratorFv
    .4byte getChildCount__5CNodeFv
    .4byte doAnimation__Q24Game9GeneratorFv
    .4byte doEntry__Q24Game9GeneratorFv
    .4byte doSetView__Q24Game9GeneratorFi
    .4byte doViewCalc__Q24Game9GeneratorFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
