#ifndef _JSYSTEM_J2D_J2DMANAGE_H
#define _JSYSTEM_J2D_J2DMANAGE_H

#include "types.h"
#include "JSystem/JSupport/JSUStream.h"

struct J2DResReference {
	char* getName(u16) const;
	s8* getResReference(u16) const;

	u16 mCount;     // _00
	u16 mOffsets[]; // _02, array of offsets
};

// fabricated name, but struct should exist
// this is a (one-way) linked list, vs JSUPtrLink which is two-way
struct J2DDataLink {
	void* mValue;       // _00
	char* mName;        // _04
	J2DDataLink* mNext; // _08
};

struct J2DDataManage {
	void* get(const char* fileName);
	void* get(JSUInputStream* input);

	J2DDataLink* mHead; // _00
};

#endif
