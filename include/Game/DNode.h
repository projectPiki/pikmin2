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
	DNode* m_next;      // _18
	DNode* m_prev;      // _1C
	DNode* m_parent;    // _20
	DNode* m_child;     // _24
	const char* m_name; // _28
};
} // namespace Game

#endif
