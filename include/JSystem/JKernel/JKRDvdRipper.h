#ifndef _JSYSTEM_JKR_JKRDVDRIPPER_H
#define _JSYSTEM_JKR_JKRDVDRIPPER_H

#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"
#include "JSystem/JKernel/JKRHeap.h"

typedef enum { Switch_0 = 0, Switch_1, Switch_2 } JKRExpandSwitch;

struct JKRDMCommand {
	JKRDMCommand();
	~JKRDMCommand();
};

struct SYaz0Header {
	u32 mSignature; // _00
	u32 mLength;    // _04
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
	static void* loadToMainRAM(s32, u8*, JKRExpandSwitch, u32, JKRHeap*, EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAM(JKRDvdFile*, u8*, JKRExpandSwitch, u32, JKRHeap*, EAllocDirection, u32, int*, u32*);
	static void* loadToMainRAMAsync(const char*, u8*, JKRExpandSwitch, u32, JKRHeap*, u32*);
	static void* loadToMainRAMAsync(s32, u8*, JKRExpandSwitch, u32, JKRHeap*, u32*);

	static void syncAll(int);
	static void countLeftSync();

	static bool errorRetry;
	static int sSZSBufferSize; // 0x400

	static JSUList<JKRDMCommand> sDvdAsyncList;

	static int getSZSBufferSize() { return sSZSBufferSize; }
	static bool isErrorRetry() { return errorRetry; }
};

inline void* JKRLoadToMainRAM(char* filename)
{
	return JKRDvdRipper::loadToMainRAM(filename, nullptr, Switch_1, 0, JKRGetCurrentHeap(), JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr,
	                                   nullptr);
}

int JKRDecompressFromDVD(JKRDvdFile*, void*, u32, u32, u32, u32, u32*);

inline void* JKRDvdToMainRam(s32 entryNum, u8* dst, JKRExpandSwitch expandSwitch, u32 fileSize, JKRHeap* heap,
                             JKRDvdRipper::EAllocDirection allocDirection, u32 startOffset, int* pCompression, u32* pSize)
{
	return JKRDvdRipper::loadToMainRAM(entryNum, dst, expandSwitch, fileSize, heap, allocDirection, startOffset, pCompression, pSize);
}

inline void* JKRDvdToMainRam(char* path, u8* dst, JKRExpandSwitch expandSwitch, u32 fileSize, JKRHeap* heap,
                             JKRDvdRipper::EAllocDirection allocDirection, u32 startOffset, int* pCompression, u32* pSize)
{
	return JKRDvdRipper::loadToMainRAM(path, dst, expandSwitch, fileSize, heap, allocDirection, startOffset, pCompression, pSize);
}

#endif
