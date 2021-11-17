#ifndef _CNODE_H
#define _CNODE_H

#include "types.h"

struct CNode {
	CNode();
	inline CNode(char* name)
	{
		_10    = nullptr;
		_0C    = nullptr;
		_08    = nullptr;
		_04    = nullptr;
		m_name = name;
	};
	virtual ~CNode();

	virtual int getChildCount();
	s32 calcNextCount();
	CNode* getChildAt(s32);

	void add(CNode*);
	void addHead(CNode*);
	void concat(CNode*);
	void del();

	void setName(char*);

	// _00 vtbl
	CNode* _04;   // _04
	CNode* _08;   // _08
	CNode* _0C;   // _0C
	CNode* _10;   // _10
	char* m_name; // _14
};

#endif
