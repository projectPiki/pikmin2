#ifndef _CNODE_H
#define _CNODE_H

#include "types.h"

struct CNode {
	CNode();
	inline CNode(char* name)
	{
		m_child  = nullptr;
		m_parent = nullptr;
		m_prev   = nullptr;
		m_next   = nullptr;
		m_name   = name;
	};

	virtual ~CNode();
	virtual int getChildCount();

	s32 calcNextCount();
	CNode* getChildAt(int);

	void add(CNode*);
	void addHead(CNode*);
	void concat(CNode*);
	void del();

	void setName(char*);

	inline void reset(char* name)
	{
		m_child  = nullptr;
		m_parent = nullptr;
		m_prev   = nullptr;
		m_next   = nullptr;
		m_name   = name;
	}

	// _00 vtbl
	CNode* m_next;   // _04
	CNode* m_prev;   // _08
	CNode* m_parent; // _0C
	CNode* m_child;  // _10
	char* m_name;    // _14
};

#endif
