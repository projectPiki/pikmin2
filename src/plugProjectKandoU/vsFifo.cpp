#include "VSFifo.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTGraphFifo.h"

u8 VSFifo::mGpStatus[5];

/**
 * @note Address: 0x8023D64C
 * @note Size: 0x90
 */
VSFifo::VSFifo(size_t size)
{
	mSize = OSRoundUp32B(size);

	if (JKRHeap::sCurrentHeap) {
		mFifo = (GXFifoObj*)JKRHeap::sCurrentHeap->alloc(mSize + GX_FIFO_OBJ_SIZE, 0x20);
	}

	mBase = &mFifo->padding[GX_FIFO_OBJ_SIZE];
	GXInitFifoBase(mFifo, mBase, mSize);
	GXInitFifoPtrs(mFifo, mBase, mBase);
}

/**
 * @note Address: 0x8023D6DC
 * @note Size: 0x48
 */
VSFifo::~VSFifo() { }

/**
 * @note Address: 0x8023D724
 * @note Size: 0x8C
 */
void VSFifo::becomeCurrent()
{
	GXSaveCPUFifo(JUTGraphFifo::sCurrentFifo->mFifo);

	do {
		GXGetGPStatus(&JUTGraphFifo::mGpStatus[0], &JUTGraphFifo::mGpStatus[1], &JUTGraphFifo::mGpStatus[2], &JUTGraphFifo::mGpStatus[3],
		              &JUTGraphFifo::mGpStatus[4]);
	} while (!JUTGraphFifo::mGpStatus[2]);

	GXInitFifoPtrs(mFifo, mBase, mBase);
	GXSetCPUFifo(mFifo);
}
