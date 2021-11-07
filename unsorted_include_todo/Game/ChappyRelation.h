#ifndef _GAME_CHAPPYRELATION_H
#define _GAME_CHAPPYRELATION_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ChappyRelation : public CNode {
	virtual ~ChappyRelation();    // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
