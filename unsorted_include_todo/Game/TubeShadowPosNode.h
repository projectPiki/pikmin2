#ifndef _GAME_TUBESHADOWPOSNODE_H
#define _GAME_TUBESHADOWPOSNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TubeShadowPosNode : public CNode {
	virtual ~TubeShadowPosNode(); // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
