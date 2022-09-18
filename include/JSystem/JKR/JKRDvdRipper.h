#ifndef _JSYSTEM_JKR_JKRDVDRIPPER_H
#define _JSYSTEM_JKR_JKRDVDRIPPER_H

#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"
#include "JSystem/JKR/JKRHeap.h"

typedef enum { Switch_0 = 0, Switch_1, Switch_2 } JKRExpandSwitch;

struct JKRDMCommand {
	JKRDMCommand();
	~JKRDMCommand();
};

struct JKRDvdRipper {
	enum EAllocDirection {
		ALLOC_DIR_PAD,    // Unseen/unhandled so far
		ALLOC_DIR_TOP,    //!< [1] Negative alignment; allocate block from top of
		                  //!< free block.
		ALLOC_DIR_BOTTOM, //!< [2] Positive alignment; allocate block from
		                  //!< bottom of free block.
	};

	static void* loadToMainRAM(const char*, u8*, JKRExpandSwitch, u32, JKRHeap*, EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAM(long, u8*, JKRExpandSwitch, u32, JKRHeap*, EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAM(JKRDvdFile*, unsigned char*, JKRExpandSwitch, u32, JKRHeap*, EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAMAsync(const char*, u8*, JKRExpandSwitch, u32, JKRHeap*, u32*);
	static void* loadToMainRAMAsync(long, u8*, JKRExpandSwitch, u32, JKRHeap*, u32*);

	static void syncAll(int);
	static void countLeftSync();
	static bool isErrorRetry();

	static bool errorRetry;
	static const int sSZSBufferSize = 0x400;

	static JSUList<JKRDMCommand> sDvdAsyncList;
};

#endif
