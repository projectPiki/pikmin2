#ifndef _JSYSTEM_JKR_JKRDISPOSER_H
#define _JSYSTEM_JKR_JKRDISPOSER_H

#include "types.h"
#include "JSystem/JSU/JSUPtrLink.h"

struct JKRHeap;

struct JKRDisposer {
	JKRDisposer();
	virtual ~JKRDisposer();

	// _00 vtbl
	JKRHeap* m_heap;   // _04
	JSUPtrLink m_link; // _08
};

#endif
