#include "VSFifo.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTGraphFifo.h"

u8 VSFifo::mGpStatus[5];

/*
 * --INFO--
 * Address:	8023D64C
 * Size:	000090
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

/*
 * --INFO--
 * Address:	8023D6DC
 * Size:	000048
 */
VSFifo::~VSFifo() { }

/*
 * --INFO--
 * Address:	8023D724
 * Size:	00008C
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
