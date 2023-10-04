#ifndef _GAME_DNODE_H
#define _GAME_DNODE_H

#include "CNode.h"
#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"

namespace Game {
struct DNode : public JKRDisposer {
	DNode();

	virtual ~DNode();            // _08 (weak)
	virtual int getChildCount(); // _0C

	void add(DNode*);
	void del();

	// Unused/inlined:
	void addHead(DNode*);
	void calcNextCount();
	void concat(DNode*);
	DNode* getChildAt(int);

	/**
	 * @fabricated
	 */
	void setName(char* name) { mName = name; }

	/**
	 * @fabricated
	 */
	inline void clearRelations()
	{
		mChild  = nullptr;
		mParent = nullptr;
		mPrev   = nullptr;
		mNext   = nullptr;
	}

	/**
	 * @fabricated
	 */
	inline void reset(char* name)
	{
		clearRelations();
		setName(name);
	}

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
