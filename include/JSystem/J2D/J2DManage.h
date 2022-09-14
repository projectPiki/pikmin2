#ifndef _JSYSTEM_J2D_J2DMANAGE_H
#define _JSYSTEM_J2D_J2DMANAGE_H

#include "types.h"
#include "JSystem/JSupport/JSUStream.h"

struct J2DResReference {
	char* getName(u16) const;
	s8* getResReference(u16) const;

	u16 m_count;     // _00
	u16 m_offsets[]; // _02, array of offsets
};

// fabricated name, but struct should exist
// this is a (one-way) linked list, vs JSUPtrLink which is two-way
struct J2DDataLink {
	void* m_value;       // _00
	char* m_name;        // _04
	J2DDataLink* m_next; // _08
};

struct J2DDataManage {
	void* get(const char*);
	void* get(JSUInputStream*);

	J2DDataLink* m_head; // _00
};

#endif
