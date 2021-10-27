#ifndef _JSYSTEM_JKRDISPOSER_H
#define _JSYSTEM_JKRDISPOSER_H

#include "types.h"
// #include "JSystem/JSU/JSUPtrLink.h"

struct JKRHeap;

struct JKRDisposer {
	JKRDisposer();
	virtual ~JKRDisposer();

	// _00 vtbl
	JKRHeap* p_heap;                // _04
	// JSUPtrLink<JKRDisposer> m_link; // _08
	u8 m_link[0x10]; // _08
};

#endif
