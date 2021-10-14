#ifndef _JSYSTEM_JKRDVDRIPPER_H
#define _JSYSTEM_JKRDVDRIPPER_H

#include "types.h"
#include "JSystem/JKR/JKRExpandSwitch.h"
#include "JSystem/JKR/JKRHeap.h"

struct JKRDvdRipper {
	enum EAllocDirection {
		AllocDirection_0 = 0,
		AllocDirection_1,
		AllocDirection_2
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
