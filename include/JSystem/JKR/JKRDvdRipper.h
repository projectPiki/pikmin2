#ifndef _JSYSTEM_JKR_JKRDVDRIPPER_H
#define _JSYSTEM_JKR_JKRDVDRIPPER_H

#include "types.h"
#include "JSystem/JKR/JKRHeap.h"

typedef enum {
	Switch_0 = 0,
	Switch_1,
	Switch_FORCE_UINT = 0xFFFFFFFF
} JKRExpandSwitch;

struct JKRDvdRipper {
#pragma enumsalwaysint on
	enum EAllocDirection {
		ALLOC_DIR_PAD, // Unseen/unhandled so far
		ALLOC_DIR_TOP, //!< [1] Negative alignment; allocate block from top of
		               //!< free block.
		ALLOC_DIR_BOTTOM, //!< [2] Positive alignment; allocate block from
		                  //!< bottom of free block.
	};
#pragma enumsalwaysint reset

	static void* loadToMainRAM(const char*, u8*, JKRExpandSwitch, u32, JKRHeap*,
	                           EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAM(long, u8*, JKRExpandSwitch, u32, JKRHeap*,
	                           EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAMAsync(const char*, u8*, JKRExpandSwitch, u32,
	                                JKRHeap*, u32*);
	static void* loadToMainRAMAsync(long, u8*, JKRExpandSwitch, u32, JKRHeap*,
	                                u32*);

	static void syncAll(int);
	static void countLeftSync();
	static bool isErrorRetry();
};

#endif
