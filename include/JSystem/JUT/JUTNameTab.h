#ifndef _JSYSTEM_JUT_JUTNAMEPAD_H
#define _JSYSTEM_JUT_JUTNAMEPAD_H

#include "types.h"

struct ResNTAB;

// Size: 0x10
struct JUTNameTab {
	virtual ~JUTNameTab(); // _00
	// virtual void _04() = 0; // _04

	// _00 VTBL
	ResNTAB* m_resource; // _04
	u32 _08;             // _08
	ushort _0C;          // _0C
};

#endif
