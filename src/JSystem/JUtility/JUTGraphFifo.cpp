#include "JSystem/JUtility/JUTGraphFifo.h"
#include "Dolphin/gx.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

bool JUTGraphFifo::sInitiated;
JUTGraphFifo* JUTGraphFifo::sCurrentFifo;
GXBool JUTGraphFifo::mGpStatus[5];

/**
 * @note Address: 0x8002EB34
 * @note Size: 0xDC
 */
JUTGraphFifo::JUTGraphFifo(u32 size)
{
	mSize = ALIGN_NEXT(size, 0x20);
	if (sInitiated) {
		mFifo = (GXFifoObj*)JKRHeap::getSystemHeap()->alloc(mSize + sizeof(GXFifoObj), 0x20);
		mBase = mFifo + 1;
		GXInitFifoBase(mFifo, mBase, mSize);
		GXInitFifoPtrs(mFifo, mBase, mBase);

	} else {
		/** TODO: Figure out what has sizeof 0xA0. */
		mBase        = JKRHeap::getSystemHeap()->alloc(mSize + 0xA0, 0x20);
		mBase        = (void*)ALIGN_NEXT((u32)mBase, 0x20);
		mFifo        = GXInit(mBase, mSize);
		sInitiated   = true;
		sCurrentFifo = this;
	}
}

/**
 * @note Address: 0x8002EC10
 * @note Size: 0xBC
 */
JUTGraphFifo::~JUTGraphFifo()
{
	sCurrentFifo->save();

	while (isGPActive()) {
		;
	}

	if (sCurrentFifo == this) {
		sCurrentFifo = nullptr;
	}

	JKRHeap::getSystemHeap()->free(mBase);
}
