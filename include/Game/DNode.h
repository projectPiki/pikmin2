#ifndef _GAME_DNODE_H
#define _GAME_DNODE_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace Game {
struct DNode : public JKRDisposer {
	DNode();

	virtual ~DNode();            // _08 (weak)
	virtual int getChildCount(); // _0C

	void add(DNode*);
	void del();

	// Unused/inlined:
	unknown addHead(DNode*);
	unknown calcNextCount();
	unknown concat(DNode*);
	DNode* getChildAt(int);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	DNode* mNext;      // _18
	DNode* mPrev;      // _1C
	DNode* mParent;    // _20
	DNode* mChild;     // _24
	const char* mName; // _28
};
} // namespace Game

#endif
