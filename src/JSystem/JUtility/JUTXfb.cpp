#include "Dolphin/gx.h"
#include "Dolphin/vi.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/JUtility/JUTXfb.h"

JUTXfb* JUTXfb::sManager;

/**
 * @note Address: 0x80033CFC
 * @note Size: 0x14
 */
void JUTXfb::clearIndex()
{
	mDrawingXfbIndex    = -1;
	mDrawnXfbIndex      = -1;
	mDisplayingXfbIndex = -1;
}

/**
 * __ct
 * @note Address: N/A
 * @note Size: 0xB0
 */
JUTXfb::JUTXfb(const GXRenderModeObj* gxObj, JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	mBufferNum = number;
	clearIndex();
	mSDrawingFlag = 99;

	if (!gxObj) {
		gxObj = JUTVideo::getManager()->getRenderMode();
	}

	u16 width  = gxObj->fbWidth;
	u16 height = gxObj->efbHeight;
	initiate(width, GXGetNumXfbLines(height, GXGetYScaleFactor(height, gxObj->xfbHeight)), heap, number);
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
JUTXfb::~JUTXfb()
{
	for (int i = 0; i < 3; i++) {
		delXfb(i);
	}
	sManager = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void JUTXfb::delXfb(int xfbIdx)
{
	if (mEnabled[xfbIdx] && mBuffers[xfbIdx]) {
		delete mBuffers[xfbIdx];
	}
}

/**
 * createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber
 * @note Address: 0x80033D10
 * @note Size: 0xA8
 */
JUTXfb* JUTXfb::createManager(JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	if (getManager() == nullptr) {
		sManager = new JUTXfb(nullptr, heap, number);
	}
	return getManager();
}

/**
 * @note Address: 0x80033DB8
 * @note Size: 0x90
 */
void JUTXfb::destroyManager()
{
	delete sManager;
	sManager = nullptr;
}

/**
 * @note Address: 0x80033E48
 * @note Size: 0xE8
 */
void JUTXfb::initiate(u16 width, u16 height, JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	if (heap == nullptr) {
		heap = JKRHeap::getSystemHeap();
	}

	u16 alignedWidth  = ALIGN_NEXT(width, 0x10);
	u32 alignedHeight = alignedWidth * height;
	int flags         = 0x20;
	alignedHeight <<= 1;

	mBuffers[0] = new (heap, flags) u8[alignedHeight];
	mEnabled[0] = true;
	if (number >= DoubleBuffer) {
		mBuffers[1] = new (heap, flags) u8[alignedHeight];
		mEnabled[1] = true;
	} else {
		mBuffers[1] = nullptr;
		mEnabled[1] = false;
	}

	if (number >= TripleBuffer) {
		mBuffers[2] = new (heap, flags) u8[alignedHeight];
		mEnabled[2] = true;
	} else {
		mBuffers[2] = nullptr;
		mEnabled[2] = false;
	}
}

/**
 * @note Address: 0x80033F30
 * @note Size: 0x64
 */
u32 JUTXfb::accumeXfbSize()
{
	JUTVideo* video  = JUTVideo::getManager();
	const u16 height = video->getEfbHeight();
	const u16 width  = video->getFbWidth();
	const u16 lines  = GXGetNumXfbLines(height, GXGetYScaleFactor(height, video->mRenderModeObj->xfbHeight));
	return (u16)ALIGN_NEXT(width, 0x10) * lines * 2;
}
