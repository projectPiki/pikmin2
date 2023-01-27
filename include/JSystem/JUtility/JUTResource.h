#ifndef _JSYSTEM_JUT_JUTRESOURCE_H
#define _JSYSTEM_JUT_JUTRESOURCE_H

#include "types.h"

struct JSUInputStream;
struct JKRArchive;

struct JUTResReference {
	JUTResReference() { _00 = 0; }

	void* getResource(JSUInputStream*, u32, JKRArchive*);
	void* getResource(void const*, u32, JKRArchive*);
	void* getResource(u32, JKRArchive*);

	u8 _00;        // _00
	u8 _01[0x100]; // _01, unknown, size may be a bit off
};

#endif
