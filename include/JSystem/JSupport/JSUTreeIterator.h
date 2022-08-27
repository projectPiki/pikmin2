#ifndef _JSYSTEM_JSU_JSUTREEITERATOR_H
#define _JSYSTEM_JSU_JSUTREEITERATOR_H

#include "JSystem/JSupport/JSUTree.h"

template <typename T> struct JSUTreeIterator {
	JSUTreeIterator(JSUTree<T>*);

	bool operator!=(const JSUTree<T>*) const;
	inline void operator++() { m_tree = m_tree->getNextChild(); }
	T* operator->() const;

	T* getObject() const { return static_cast<T*>(m_tree->m_link.m_value); }

	// TODO: This is probably wrong?
	JSUTree<T>* m_tree; // _00
};

#endif
