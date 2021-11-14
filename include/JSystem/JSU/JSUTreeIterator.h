#ifndef _JSYSTEM_JSU_JSUTREEITERATOR_H
#define _JSYSTEM_JSU_JSUTREEITERATOR_H

#include "JSystem/JSU/JSUTree.h"
#include "JSystem/JSU/JSUPtrLink.h"
#include "JSystem/JSU/JSUPtrList.h"

template <typename T> struct JSUTreeIterator {
	bool operator!=(const JSUTree<T>*) const;
	void operator++();
	T* operator->() const;
	JSUTreeIterator(JSUTree<T>*);

	// TODO: This is probably wrong?
	JSUTree<T>* m_tree; // _00
};

#endif
