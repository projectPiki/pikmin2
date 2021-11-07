#ifndef _GAME_LIMITGEN_H
#define _GAME_LIMITGEN_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct LimitGen : public CNode {
	virtual ~LimitGen();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
