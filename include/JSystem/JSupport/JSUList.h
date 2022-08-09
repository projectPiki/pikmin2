#ifndef _JSYSTEM_JSU_JSULIST_H
#define _JSYSTEM_JSU_JSULIST_H

#include "types.h"

struct JSUPtrList;
template <typename T> struct JSULink;

// Size: 0x10
struct JSUPtrLink {
	JSUPtrLink(void*);
	~JSUPtrLink();

	void* m_value;      // _00
	JSUPtrList* m_list; // _04
	JSUPtrLink* m_prev; // _08
	JSUPtrLink* m_next; // _0C
};

// Size: 0xC
struct JSUPtrList {
	JSUPtrLink* getFirstLink() const;
	// JSUPtrList() { initiate(); }
	JSUPtrList(bool = true);
	// JSUPtrList(bool doInitialize)
	// {
	// 	if (doInitialize) {
	// 		initiate();
	// 	}
	// }
	~JSUPtrList();
	void initiate();
	bool append(JSUPtrLink*);
	bool prepend(JSUPtrLink*);
	bool insert(JSUPtrLink*, JSUPtrLink*);
	bool remove(JSUPtrLink*);
	JSUPtrLink* getNthLink(u32) const;

	JSUPtrLink* m_head; // _00
	JSUPtrLink* m_tail; // _04
	u32 m_linkCount;    // _08
};

// Something fishy here. JSULists can use JSUPtrList functions.
// They even use its constructor??? (see _sinit_JKRThread_cpp)
template <typename T> struct JSUList : public JSUPtrList {
	inline JSULink<T>* getHead() { return (JSULink<T>*)m_head; }
	inline JSULink<T>* getTail() { return (JSULink<T>*)m_tail; };

	inline JSUList<T>()
	    : JSUPtrList(true)
	{
	}
};

template <typename T> struct JSULink : public JSUPtrLink {
	inline JSUList<T>* getList() { return (JSUList<T>*)m_list; }
	inline JSULink<T>* getPrev() { return (JSULink<T>*)m_prev; }
	inline JSULink<T>* getNext() { return (JSULink<T>*)m_next; }
	/**
	 * @fabricated
	 */
	inline T* getValue() { return (T*)m_value; }
	inline JSULink<T>(T* value)
	    : JSUPtrLink((void*)value)
	{
	}
};

#endif
