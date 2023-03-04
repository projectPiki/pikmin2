#include "Dolphin/gx.h"
#include "Dolphin/vi.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/JUtility/JUTXfb.h"

JUTXfb* JUTXfb::sManager;

/*
 * --INFO--
 * Address:	80033CFC
 * Size:	000014
 */
void JUTXfb::clearIndex()
{
	mDrawingXfbIndex    = -1;
	mDrawnXfbIndex      = -1;
	mDisplayingXfbIndex = -1;
}

/*
 * __ct
 * --INFO--
 * Address:	........
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
JUTXfb::~JUTXfb()
{
	for (int i = 0; i < 3; i++) {
		delXfb(i);
	}
	sManager = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTXfb::delXfb(int xfbIdx)
{
	if (mEnabled[xfbIdx] && mBuffers[xfbIdx]) {
		delete mBuffers[xfbIdx];
	}
}

/*
 * createManager__6JUTXfbFP7JKRHeapQ26JUTXfb10EXfbNumber
 * --INFO--
 * Address:	80033D10
 * Size:	0000A8
 */
JUTXfb* JUTXfb::createManager(JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	if (getManager() == nullptr) {
		sManager = new JUTXfb(nullptr, heap, number);
	}
	return getManager();
}

/*
 * --INFO--
 * Address:	80033DB8
 * Size:	000090
 */
void JUTXfb::destroyManager()
{
	delete sManager;
	sManager = nullptr;
}

/*
 * --INFO--
 * Address:	80033E48
 * Size:	0000E8
 */
void JUTXfb::initiate(u16 p1, u16 p2, JKRHeap* heap, JUTXfb::EXfbNumber number)
{
	if (heap == nullptr) {
		heap = JKRHeap::getSystemHeap();
	}

	u16 v2    = ALIGN_NEXT(p1, 0x10);
	u32 v1    = v2 * p2;
	int flags = 0x20;
	v1 <<= 1;

	mBuffers[0] = new (heap, flags) u8[v1];
	mEnabled[0] = true;
	if (number >= DoubleBuffer) {
		mBuffers[1] = new (heap, flags) u8[v1];
		mEnabled[1] = true;
	} else {
		mBuffers[1] = nullptr;
		mEnabled[1] = false;
	}

	if (number >= TripleBuffer) {
		mBuffers[2] = new (heap, flags) u8[v1];
		mEnabled[2] = true;
	} else {
		mBuffers[2] = nullptr;
		mEnabled[2] = false;
	}
}

/*
 * --INFO--
 * Address:	80033F30
 * Size:	000064
 */
u32 JUTXfb::accumeXfbSize()
{
	JUTVideo* video  = JUTVideo::getManager();
	const u16 height = video->getEfbHeight();
	const u16 width  = video->getFbWidth();
	const u16 lines  = GXGetNumXfbLines(height, GXGetYScaleFactor(height, video->mRenderModeObj->xfbHeight));
	return (u16)ALIGN_NEXT(width, 0x10) * lines * 2;
}
