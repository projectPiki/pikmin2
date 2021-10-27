#ifndef _JSYSTEM_JSUPTRLINK_H
#define _JSYSTEM_JSUPTRLINK_H

struct JSUPtrList;

struct JSUPtrLink {
	JSUPtrLink(void*);
	~JSUPtrLink();

	void* m_value;      // _00
	JSUPtrList* m_list; // _04
	JSUPtrLink* m_prev; // _08
	JSUPtrLink* m_next; // _0C
};

#endif
