#ifndef _JSYSTEM_JKR_JKRDISPOSER_H
#define _JSYSTEM_JKR_JKRDISPOSER_H

#include "types.h"
#include "JSystem/JSupport/JSUList.h"

struct JKRHeap;

// Size: 0x18
struct JKRDisposer {
	JKRDisposer();
	virtual ~JKRDisposer(); // _08

	// _00 vtbl
	JKRHeap* m_heap;             // _04
	JSULink<JKRDisposer> m_link; // _08
};

#endif
