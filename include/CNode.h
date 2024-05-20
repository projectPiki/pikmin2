#ifndef _CNODE_H
#define _CNODE_H

#include "types.h"

struct CNode {
	CNode();
	inline CNode(char* name)
	{
		mChild  = nullptr;
		mParent = nullptr;
		mPrev   = nullptr;
		mNext   = nullptr;
		mName   = name;
	};

	virtual ~CNode();            // _08
	virtual int getChildCount(); // _0C

	int calcNextCount();
	CNode* getChildAt(int);

	void add(CNode*);
	void addHead(CNode*);
	void concat(CNode*);
	void del();

	/**
	 * @reifiedAddress{8013917C}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
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

	inline CNode* getParent() const { return mParent; }
	inline CNode* getChild() const { return mChild; }
	inline CNode* getNext() const { return mNext; }
	inline CNode* getPrev() const { return mPrev; }
	inline const char* getName() const { return mName; }

	inline bool isChild() const { return mParent != nullptr; }
	inline bool isRoot() const { return mParent == nullptr; }

	inline void setParent(CNode* parent) { mParent = parent; }
	inline void setChild(CNode* child) { mChild = child; }
	inline void setNext(CNode* next) { mNext = next; }
	inline void setPrev(CNode* prev) { mPrev = prev; }

	// _00 vtbl
	CNode* mNext;      // _04
	CNode* mPrev;      // _08
	CNode* mParent;    // _0C
	CNode* mChild;     // _10
	const char* mName; // _14
};

#define FOREACH_NODE(type, first, varname) for (type* varname = (type*)(first); varname != nullptr; varname = (type*)(varname->mNext))
#define FOREACH_NODE_CHILD(type, first, varname) \
	for (type* varname = (type*)(first); varname != nullptr; varname = (type*)(varname->mChild))
#define FOREACH_NODE_REVERSE(type, first, varname) \
	for (type* varname = (type*)(first); varname != nullptr; varname = (type*)(varname->mPrev))
#define FOREACH_NODE_EX(type, first, varname, excond) \
	for (type* varname = (type*)(first); varname != nullptr && (excond); varname = (type*)(varname->mNext))

#endif
