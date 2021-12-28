#ifndef _JSYSTEM_JKR_JKRDVDRIPPER_H
#define _JSYSTEM_JKR_JKRDVDRIPPER_H

#include "types.h"
#include "JSystem/JKR/JKRHeap.h"

typedef enum { Switch_0 = 0, Switch_1 } JKRExpandSwitch;

struct JKRDvdRipper {
	enum EAllocDirection {
		ALLOC_DIR_PAD,   // Unseen/unhandled so far
		ALLOC_DIR_TOP,   //!< [1] Negative alignment; allocate block from top of
		                 //!< free block.
		ALLOC_DIR_BOTTOM //!< [2] Positive alignment; allocate block from bottom
		                 //!< of free block.
	};

	static void* loadToMainRAM(const char*, uchar*, JKRExpandSwitch, ulong,
	                           JKRHeap*, EAllocDirection, ulong, int*, ulong*);
	static void* loadToMainRAM(long, uchar*, JKRExpandSwitch, ulong, JKRHeap*,
	                           EAllocDirection, ulong, int*, ulong*);
	static void* loadToMainRAMAsync(const char*, uchar*, JKRExpandSwitch, ulong,
	                                JKRHeap*, ulong*);
	static void* loadToMainRAMAsync(long, uchar*, JKRExpandSwitch, ulong,
	                                JKRHeap*, ulong*);

	static void syncAll(int);
	static void countLeftSync();
	static bool isErrorRetry();
};

#endif
