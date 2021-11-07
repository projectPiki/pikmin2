#ifndef _GAME_CAVEOTAKARA_H
#define _GAME_CAVEOTAKARA_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct CaveOtakara : public CNode {
	virtual ~CaveOtakara();       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
