#ifndef _JSYSTEM_JSU_JSUTREE_H
#define _JSYSTEM_JSU_JSUTREE_H

#include "JSystem/JSU/JSUPtrLink.h"
#include "JSystem/JSU/JSUPtrList.h"

template <typename T> struct JSUTree {
	inline JSUTree(void* owner)
		: m_list(true)
		, m_link(owner)
		{};
	T* getNextChild() const;
	T* getEndChild() const;
	int getNumChildren() const;
	T* getFirstChild() const;
	T* getObject() const;

	// TODO: This is probably wrong?
	JSUPtrList m_list; // _00
	JSUPtrLink m_link; // _0C
};

#endif
