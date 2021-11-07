#ifndef _GAME_TUBESHADOWSETNODE_H
#define _GAME_TUBESHADOWSETNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct TubeShadowSetNode : public CNode {
	virtual ~TubeShadowSetNode(); // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Game

#endif
