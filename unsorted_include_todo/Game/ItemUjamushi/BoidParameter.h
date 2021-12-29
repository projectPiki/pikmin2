#ifndef _GAME_ITEMUJAMUSHI_BOIDPARAMETER_H
#define _GAME_ITEMUJAMUSHI_BOIDPARAMETER_H

/*
    __vt__Q34Game12ItemUjamushi13BoidParameter:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game12ItemUjamushi13BoidParameterFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ItemUjamushi {
	struct BoidParameter : public CNode {
		virtual ~BoidParameter();     // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace ItemUjamushi
} // namespace Game

#endif
