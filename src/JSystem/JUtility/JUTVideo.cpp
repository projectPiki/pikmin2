#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "JSystem/JSystem.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTXfb.h"
#include "JSystem/JUtility/JUTVideo.h"

JUTVideo* JUTVideo::sManager;
s32 JUTVideo::sVideoLastTick;
u32 JUTVideo::sVideoInterval;
static bool sDrawWaiting;

/*
 * --INFO--
 * Address:	80033744
 * Size:	000058
 */
JUTVideo* JUTVideo::createManager(const _GXRenderModeObj* renderModeObj)
{
	if (sManager == nullptr) {
		sManager = new JUTVideo(renderModeObj);
	}
	return sManager;
}

/*
 * --INFO--
 * Address:	8003379C
 * Size:	000048
 */
void JUTVideo::destroyManager()
{
	if (sManager != nullptr) {
		delete sManager;
		sManager = nullptr;
	}
}

/*
 * --INFO--
 * Address:	800337E4
 * Size:	0000F4
 * __ct
 */
JUTVideo::JUTVideo(const _GXRenderModeObj* renderModeObj)
{
	mRenderModeObj = nullptr;
	VIInit();
	mIsSetBlack         = true;
	mSetBlackFrameCount = 2;
	setRenderMode(renderModeObj);
	VISetBlack(TRUE);
	VIFlush();
	_08                          = 0;
	mRetraceCount                = VIGetRetraceCount();
	_10                          = 1;
	_18                          = 0;
	sVideoLastTick               = OSGetTick();
	sVideoInterval               = 670000;
	mPreviousPreRetraceCallback  = VISetPreRetraceCallback(preRetraceProc);
	mPreviousPostRetraceCallback = VISetPostRetraceCallback(postRetraceProc);
	mPreRetraceCallback          = nullptr;
	mPostRetraceCallback         = nullptr;
	OSInitMessageQueue(&mMessageQueue, &mMessage, 1);
	GXSetDrawDoneCallback(drawDoneCallback);
}

/*
 * --INFO--
 * Address:	800338D8
 * Size:	000068
 * __dt
 */
JUTVideo::~JUTVideo()
{
	VISetPreRetraceCallback(mPreviousPreRetraceCallback);
	VISetPostRetraceCallback(mPreviousPostRetraceCallback);
}

/*
 * --INFO--
 * Address:	80033940
 * Size:	000228
 */
void JUTVideo::preRetraceProc(u32 p1)
{
	if (sManager->mPreRetraceCallback) {
		sManager->mPreRetraceCallback(p1);
	}

	OSTick tick    = OSGetTick();
	JUTXfb* xfb    = JUTXfb::getManager();
	sVideoInterval = tick - sVideoLastTick;
	sVideoLastTick = tick;

	if (!xfb) {
		VISetBlack(TRUE);
		VIFlush();
		return;
	}

	static void* frameBuffer = nullptr;
	if (frameBuffer) {
		u16 width = sManager->getFbWidth();
		JUTDirectPrint::sDirectPrint->changeFrameBuffer(frameBuffer, width, sManager->getEfbHeight());
	}

	if (sManager->mIsSetBlack == true) { // yes, the explicit true comparison is needed. sigh.
		int frameCount = sManager->mSetBlackFrameCount;
		if (frameCount > 0) {
			frameCount--;
		}

		sManager->mSetBlackFrameCount = frameCount;
		sManager->mIsSetBlack         = (frameCount != 0);

		VISetBlack(TRUE);
		VIFlush();

	} else if (!xfb) {
		VISetBlack(TRUE);
		VIFlush();

	} else {
		if (xfb->mBufferNum == JUTXfb::TripleBuffer || xfb->mBufferNum == JUTXfb::DoubleBuffer) {
			if (!sDrawWaiting) {
				if ((xfb->mDisplayingXfbIndex = xfb->mDrawnXfbIndex) < 0) {
					VISetBlack(TRUE);
					VIFlush();

				} else {
					VISetNextFrameBuffer(xfb->getDisplayingXfb());
					VIFlush();
					VISetBlack(FALSE);
					frameBuffer = (u8*)xfb->getDisplayingXfb();
				}
			}

		} else if (xfb->mBufferNum == JUTXfb::SingleBuffer) {
			if (xfb->mSDrawingFlag == 0) {
				if (xfb->mDrawnXfbIndex >= 0) {
					xfb->mDisplayingXfbIndex = xfb->mDrawnXfbIndex;
					GXCopyDisp(xfb->getDisplayingXfb(), GX_TRUE);
					GXFlush();
					xfb->mSDrawingFlag = 2;
					frameBuffer        = (u8*)xfb->getDisplayingXfb();
					VISetBlack(FALSE);

				} else {
					VISetBlack(TRUE);
				}
			}
			VIFlush();
		}
	}
}

/*
 * --INFO--
 * Address:	80033B68
 * Size:	000028
 */
void JUTVideo::drawDoneStart()
{
	sDrawWaiting = true;
	GXSetDrawDone();
}

/*
 * --INFO--
 * Address:	80033B90
 * Size:	00000C
 */
void JUTVideo::dummyNoDrawWait() { sDrawWaiting = false; }

/*
 * --INFO--
 * Address:	80033B9C
 * Size:	000088
 */
void JUTVideo::drawDoneCallback()
{
	JUTXfb* xfb = JUTXfb::getManager();
	if (!xfb) {
		return;
	}

	sDrawWaiting = false;

	if (xfb->mBufferNum == JUTXfb::SingleBuffer && xfb->mSDrawingFlag == 1) {
		xfb->mSDrawingFlag = 0;
		if (xfb->getDrawnXfb()) {
			VISetNextFrameBuffer(xfb->getDrawnXfb());
			VIFlush();
		}
	}
}

/*
 * --INFO--
 * Address:	80033C24
 * Size:	00004C
 */
void JUTVideo::postRetraceProc(u32 p1)
{
	if (sManager->mPostRetraceCallback != nullptr) {
		sManager->mPostRetraceCallback(p1);
	}
	u32 retraceCount = VIGetRetraceCount();
	OSSendMessage(&sManager->mMessageQueue, (void*)retraceCount, OS_MESSAGE_NOBLOCK);
}

/*
 * --INFO--
 * Address:	80033C70
 * Size:	000078
 */
void JUTVideo::setRenderMode(const GXRenderModeObj* newRenderModeObj)
{
	if (mRenderModeObj && newRenderModeObj->viTVmode != mRenderModeObj->viTVmode) {
		mIsSetBlack         = true;
		mSetBlackFrameCount = 4;
	}

	mRenderModeObj = (GXRenderModeObj*)newRenderModeObj;
	VIConfigure(mRenderModeObj);
	VIFlush();

	if (mIsSetBlack) {
		VIWaitForRetrace();
		VIWaitForRetrace();
	}
}

/*
 * --INFO--
 * Address:	80033CE8
 * Size:	000004
 */
void JUTVideo::waitRetraceIfNeed() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
VIRetraceCallback JUTVideo::setPreRetraceCallback(VIRetraceCallback newCB)
{
	VIRetraceCallback oldCB = mPreRetraceCallback;
	mPreRetraceCallback     = newCB;
	return oldCB;
}

/*
 * --INFO--
 * Address:	80033CEC
 * Size:	000010
 */
VIRetraceCallback JUTVideo::setPostRetraceCallback(VIRetraceCallback newCB)
{
	VIRetraceCallback oldCB = mPostRetraceCallback;
	mPostRetraceCallback    = newCB;
	return oldCB;
}
