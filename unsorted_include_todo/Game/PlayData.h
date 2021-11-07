#ifndef _GAME_PLAYDATA_H
#define _GAME_PLAYDATA_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct PlayData : public CNode {
	virtual ~PlayData();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
