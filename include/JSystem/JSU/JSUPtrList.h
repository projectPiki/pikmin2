#ifndef _JSYSTEM_JSU_JSUPTRLIST_H
#define _JSYSTEM_JSU_JSUPTRLIST_H

#include "types.h"

struct JSUPtrLink;

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
	JSUPtrLink* getNthLink(ulong) const;

	JSUPtrLink* m_head; // _00
	JSUPtrLink* m_tail; // _04
	int m_linkCount;    // _08
};

#endif
