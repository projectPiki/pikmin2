#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "JSystem/JSystem.h"
#include "JSystem/JUT/JUTDirectPrint.h"
#include "JSystem/JUT/JUTXfb.h"
#include "JSystem/JUT/JUTVideo.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8JUTVideo
    __vt__8JUTVideo:
        .4byte 0
        .4byte 0
        .4byte __dt__8JUTVideoFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__8JUTVideo
    sManager__8JUTVideo:
        .skip 0x4
    .global sVideoLastTick__8JUTVideo
    sVideoLastTick__8JUTVideo:
        .skip 0x4
    .global sVideoInterval__8JUTVideo
    sVideoInterval__8JUTVideo:
        .skip 0x4
    .global sDrawWaiting
    sDrawWaiting:
        .skip 0x4
    .global frameBuffer$2452
    frameBuffer$2452:
        .skip 0x4
    .global init$2453
    init$2453:
        .skip 0x4
*/

JUTVideo* JUTVideo::sManager;
s32 JUTVideo::sVideoLastTick;
u32 JUTVideo::sVideoInterval;
static bool sDrawWaiting;

/**
 * TODO: Replace framebuffer retrievals that use ternary operator with fabricated methods on JUTXfb? probably one for each of _16 and _18
 * (next/current?)
 */

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
	m_renderModeObj = nullptr;
	VIInit();
	_2C = true;
	_30 = 2;
	setRenderMode(renderModeObj);
	VISetBlack(TRUE);
	VIFlush();
	_08                           = 0;
	m_retraceCount                = VIGetRetraceCount();
	_10                           = 1;
	_18                           = 0;
	sVideoLastTick                = OSGetTick();
	sVideoInterval                = 670000;
	m_previousPreRetraceCallback  = VISetPreRetraceCallback(preRetraceProc);
	m_previousPostRetraceCallback = VISetPostRetraceCallback(postRetraceProc);
	m_preRetraceCallback          = nullptr;
	m_postRetraceCallback         = nullptr;
	OSInitMessageQueue(&m_messageQueue, &m_messageSlots, 1);
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
	VISetPreRetraceCallback(m_previousPreRetraceCallback);
	VISetPostRetraceCallback(m_previousPostRetraceCallback);
}

/*
 * --INFO--
 * Address:	80033940
 * Size:	000228
 */
void JUTVideo::preRetraceProc(u32 p1)
{
	if (sManager->m_preRetraceCallback != nullptr) {
		sManager->m_preRetraceCallback(p1);
	}
	u32 tick       = OSGetTick();
	JUTXfb* xfb    = JUTXfb::sManager;
	sVideoInterval = tick - sVideoLastTick;
	sVideoLastTick = tick;
	if (xfb == nullptr) {
		VISetBlack(TRUE);
		VIFlush();
		return;
	}
	static u8* frameBuffer = nullptr;
	if (frameBuffer != nullptr) {
		u16 width = sManager->getFbWidth();
		JUTDirectPrint::sDirectPrint->changeFrameBuffer(frameBuffer, width, sManager->getEfbHeight());
	}
	if (sManager->_2C == 1) {
		s32 v1 = sManager->_30;
		if (0 < v1) {
			v1--;
		}
		sManager->_30 = v1;
		// // TODO: What is this for???
		u32 v2        = ((u32)-v1) | ((u32)v1);
		sManager->_2C = v2 >> 31;
		// sManager->_2C = getNumBit((u8*)&sManager->_30, 0);
		// if (0 < sManager->_30) {
		// 	sManager->_30--;
		// }
		// sManager->_2C = getNumBit((u8*)&sManager->_30, 0);
		VISetBlack(TRUE);
		VIFlush();
	} else if (xfb == nullptr) {
		VISetBlack(TRUE);
		VIFlush();
	} else {
		if (xfb->_10 == JUTXfb::TripleBuffer || xfb->_10 == JUTXfb::DoubleBuffer) {
			if (sDrawWaiting == false) {
				if ((xfb->_18 = xfb->_16) < 0) {
					VISetBlack(TRUE);
					VIFlush();
				} else {
					VISetNextFrameBuffer((xfb->_18 >= 0) ? xfb->m_buffers[xfb->_18] : nullptr);
					VIFlush();
					VISetBlack(FALSE);
					frameBuffer = (xfb->_18 >= 0) ? xfb->m_buffers[xfb->_18] : nullptr;
				}
			}
		} else if (xfb->_10 == JUTXfb::SingleBuffer) {
			if (xfb->_1C == 0) {
				if (xfb->_16 >= 0) {
					xfb->_18 = xfb->_16;
					GXCopyDisp((xfb->_18 >= 0) ? xfb->m_buffers[xfb->_18] : nullptr, GX_TRUE);
					GXFlush();
					xfb->_1C    = 2;
					frameBuffer = (xfb->_18 >= 0) ? xfb->m_buffers[xfb->_18] : nullptr;
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
 * Address:	........
 * Size:	000008
 */
void JUTVideo::getDrawWait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033B9C
 * Size:	000088
 */
void JUTVideo::drawDoneCallback()
{
	JUTXfb* xfb = JUTXfb::sManager;
	if (xfb == nullptr) {
		return;
	}
	sDrawWaiting = false;
	if (xfb->_10 == JUTXfb::SingleBuffer && xfb->_1C == 1) {
		xfb->_1C        = 0;
		u8* frameBuffer = (xfb->_16 >= 0) ? xfb->m_buffers[xfb->_16] : nullptr;
		if (frameBuffer != nullptr) {
			VISetNextFrameBuffer((xfb->_16 >= 0) ? xfb->m_buffers[xfb->_16] : nullptr);
			VIFlush();
		}
	}
}

/*
 * --INFO--
 * Address:	80033C24
 * Size:	00004C
 */
void JUTVideo::postRetraceProc(unsigned long p1)
{
	if (sManager->m_postRetraceCallback != nullptr) {
		sManager->m_postRetraceCallback(p1);
	}
	u32 retraceCount = VIGetRetraceCount();
	OSSendMessage(&sManager->m_messageQueue, (void*)retraceCount, OS_MESSAGE_NON_BLOCKING);
}

/*
 * --INFO--
 * Address:	80033C70
 * Size:	000078
 */
void JUTVideo::setRenderMode(const _GXRenderModeObj* newRenderModeObj)
{
	if (m_renderModeObj != nullptr && newRenderModeObj->viTVmode != m_renderModeObj->viTVmode) {
		_2C = true;
		_30 = 4;
	}
	m_renderModeObj = newRenderModeObj;
	VIConfigure(m_renderModeObj);
	VIFlush();
	if (_2C) {
		VIWaitForRetrace();
		VIWaitForRetrace();
	}
	/// TODO: I wonder if waitRetraceIfNeed is called here...
}

/*
 * --INFO--
 * Address:	80033CE8
 * Size:	000004
 */
// void JUTVideo::waitRetraceIfNeed() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
VIRetraceCallback JUTVideo::setPreRetraceCallback(VIRetraceCallback newCB)
{
	// UNUSED FUNCTION
	VIRetraceCallback oldCB = m_preRetraceCallback;
	m_preRetraceCallback    = newCB;
	return oldCB;
}

/*
 * --INFO--
 * Address:	80033CEC
 * Size:	000010
 */
VIRetraceCallback JUTVideo::setPostRetraceCallback(VIRetraceCallback newCB)
{
	VIRetraceCallback oldCB = m_postRetraceCallback;
	m_postRetraceCallback   = newCB;
	return oldCB;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JUTVideo::getPixelAspect(const _GXRenderModeObj*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void JUTVideo::getPixelAspect() const
{
	// UNUSED FUNCTION
}
