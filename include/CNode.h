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
	void setName(char* name) { m_name = name; }

	/**
	 * @fabricated
	 */
	inline void clearRelations()
	{
		m_child  = nullptr;
		m_parent = nullptr;
		m_prev   = nullptr;
		m_next   = nullptr;
	}

	/**
	 * @fabricated
	 */
	inline void reset(char* name)
	{
		clearRelations();
		setName(name);
	}

	// _00 vtbl
	CNode* m_next;      // _04
	CNode* m_prev;      // _08
	CNode* m_parent;    // _0C
	CNode* m_child;     // _10
	const char* m_name; // _14
};

#endif
