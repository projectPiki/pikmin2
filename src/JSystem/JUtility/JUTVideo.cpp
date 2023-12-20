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

/**
 * @note Address: 0x80033744
 * @note Size: 0x58
 */
JUTVideo* JUTVideo::createManager(const _GXRenderModeObj* renderModeObj)
{
	if (sManager == nullptr) {
		sManager = new JUTVideo(renderModeObj);
	}
	return sManager;
}

/**
 * @note Address: 0x8003379C
 * @note Size: 0x48
 */
void JUTVideo::destroyManager()
{
	if (sManager != nullptr) {
		delete sManager;
		sManager = nullptr;
	}
}

/**
 * @note Address: 0x800337E4
 * @note Size: 0xF4
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

/**
 * @note Address: 0x800338D8
 * @note Size: 0x68
 * __dt
 */
JUTVideo::~JUTVideo()
{
	VISetPreRetraceCallback(mPreviousPreRetraceCallback);
	VISetPostRetraceCallback(mPreviousPostRetraceCallback);
}

/**
 * @note Address: 0x80033940
 * @note Size: 0x228
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

/**
 * @note Address: 0x80033B68
 * @note Size: 0x28
 */
void JUTVideo::drawDoneStart()
{
	sDrawWaiting = true;
	GXSetDrawDone();
}

/**
 * @note Address: 0x80033B90
 * @note Size: 0xC
 */
void JUTVideo::dummyNoDrawWait() { sDrawWaiting = false; }

/**
 * @note Address: 0x80033B9C
 * @note Size: 0x88
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

/**
 * @note Address: 0x80033C24
 * @note Size: 0x4C
 */
void JUTVideo::postRetraceProc(u32 p1)
{
	if (sManager->mPostRetraceCallback != nullptr) {
		sManager->mPostRetraceCallback(p1);
	}
	u32 retraceCount = VIGetRetraceCount();
	OSSendMessage(&sManager->mMessageQueue, (void*)retraceCount, OS_MESSAGE_NOBLOCK);
}

/**
 * @note Address: 0x80033C70
 * @note Size: 0x78
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

/**
 * @note Address: 0x80033CE8
 * @note Size: 0x4
 */
void JUTVideo::waitRetraceIfNeed() { }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
VIRetraceCallback JUTVideo::setPreRetraceCallback(VIRetraceCallback newCB)
{
	VIRetraceCallback oldCB = mPreRetraceCallback;
	mPreRetraceCallback     = newCB;
	return oldCB;
}

/**
 * @note Address: 0x80033CEC
 * @note Size: 0x10
 */
VIRetraceCallback JUTVideo::setPostRetraceCallback(VIRetraceCallback newCB)
{
	VIRetraceCallback oldCB = mPostRetraceCallback;
	mPostRetraceCallback    = newCB;
	return oldCB;
}
