#ifndef _JSYSTEM_JSU_JSULIST_H
#define _JSYSTEM_JSU_JSULIST_H

#include "types.h"

typedef struct JSUPtrList;

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
	~JSUPtrList();
	void initiate();
	bool append(JSUPtrLink*);
	bool prepend(JSUPtrLink*);
	bool insert(JSUPtrLink*, JSUPtrLink*);
	bool remove(JSUPtrLink*);
	JSUPtrLink* getNthLink(u32) const;

	JSUPtrLink* m_head; // _00
	JSUPtrLink* m_tail; // _04
	i32 m_linkCount;    // _08
};

// Something fishy here. JSULists can use JSUPtrList functions.
// They even use its constructor??? (see _sinit_JKRThread_cpp)
template <typename T> struct JSUList : public JSUPtrList {
	inline T* getHead() { return m_head; }
	inline T* getTail() { return m_tail; };

	JSUList();
};

template <typename T> struct JSULink : public JSUPtrLink {
	inline T* getList() { return m_list; }
	inline T* getPrev() { return m_prev; }
	inline T* getNext() { return m_next; };
	inline JSULink(T* value)
	    : JSUPtrLink((void*)value)
	{
	}
};

#endif
