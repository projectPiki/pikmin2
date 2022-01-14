#ifndef _JSYSTEM_JSU_JSUTREE_H
#define _JSYSTEM_JSU_JSUTREE_H

#include "JSystem/JSU/JSUList.h"

template <typename T> struct JSUTree {
	inline JSUTree(void* owner)
	    : m_list(true)
	    , m_link(owner) {};

	JSUTree<T>* getNextChild() const;
	JSUTree<T>* getEndChild() const;
	int getNumChildren() const;
	JSUTree<T>* getFirstChild() const;
	T* getObject() const { return m_link.m_value; }

	// TODO: This is probably wrong?
	JSUPtrList m_list; // _00
	JSUPtrLink m_link; // _0C
};

#endif
