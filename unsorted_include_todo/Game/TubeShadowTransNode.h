#ifndef _GAME_TUBESHADOWTRANSNODE_H
#define _GAME_TUBESHADOWTRANSNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TubeShadowTransNode : public CNode {
	virtual ~TubeShadowTransNode(); // _00
	virtual void getChildCount();   // _04

	// _00 VTBL
};
} // namespace Game

#endif
