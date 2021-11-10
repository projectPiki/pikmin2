#ifndef _JSYSTEM_JAS_JASBANK_H
#define _JSYSTEM_JAS_JASBANK_H

#include "types.h"

struct JASBank {
	// Unsure of type
	static void* sCurrentHeap;

	void* getCurrentHeap();
};

struct JASWaveBank {
	// Unsure of type
	static void* sCurrentHeap;

	void* getCurrentHeap();
};

#endif
