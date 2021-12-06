#ifndef _JSYSTEM_JUT_RESNTAB_H
#define _JSYSTEM_JUT_RESNTAB_H

#include "types.h"

struct _NTAB {
	ushort keyCode;
	char* str;
};

// I really don't know for this one...
struct ResNTAB {
	ushort _00; // _00
	// ushort _02;   // _02
	// const u8* _04; // _04
	// const char* m_table[4];
	_NTAB** m_table; // _04
};

#endif
