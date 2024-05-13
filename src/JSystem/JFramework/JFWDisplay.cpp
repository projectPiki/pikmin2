#include "JSystem/JFramework/JFWDisplay.h"
#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JFramework/JFWAlarm.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility/JUTAssertion.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTProcBar.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/JUtility/JUTXfb.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

Mtx e_mtx = { { 1.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };

JSUList<JFWAlarm> JFWAlarm::sList(false);

JFWDisplay* JFWDisplay::sManager;

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void JFWDisplay::ctor_subroutine(bool doEnableAlpha)
{
	mIsAlphaEnabled   = doEnableAlpha;
	mClamp            = 3;
	mClearColor       = TCOLOR_BLACK_U8;
	mZClear           = 0xFFFFFF;
	mGamma            = 0;
	mFader            = nullptr;
	mFrameRate        = 1;
	mTickRate         = 0;
	mCombinationRatio = 0.0f;
	mFrameDuration    = 0;
	mCurrentTick      = OSGetTick();
	mTickDifference   = 0;
	mCurrentXfbIndex  = 0;
	_3A               = 0;
	mDrawDoneMethod   = JFWDRAW_Unk0;
	clearEfb_init();
	JUTProcBar::create();
	JUTProcBar::clear();
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
JFWDisplay::JFWDisplay(JKRHeap* heap, JUTXfb::EXfbNumber bufferCount, bool doEnableAlpha)
{
	ctor_subroutine(doEnableAlpha);
	mXfb = JUTXfb::createManager(heap, bufferCount);
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
JFWDisplay::JFWDisplay(void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
JFWDisplay::JFWDisplay(void*, void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
JFWDisplay::JFWDisplay(void*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80089AAC
 * @note Size: 0x7C
 */
JFWDisplay::~JFWDisplay()
{
	if (JUTVideo::getManager() != nullptr) {
		waitBlanking(2);
	}
	JUTProcBar::destroy();
	JUTXfb::destroyManager();
	mXfb = nullptr;
}

/**
 * @note Address: 0x80089B28
 * @note Size: 0x11C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj* renderModeObj, JKRHeap* heap, JUTXfb::EXfbNumber bufferCount,
                                      bool doEnableAlpha)
{
	if (renderModeObj != nullptr) {
		JUTVideo::getManager()->setRenderMode(renderModeObj);
	}
	if (sManager == nullptr) {
		sManager = new JFWDisplay(heap, bufferCount, doEnableAlpha);
	}
	return sManager;
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, void*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80089C44
 * @note Size: 0x44
 */
void JFWDisplay::destroyManager()
{
	delete sManager;
	sManager = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void callDirectDraw()
{
	JUTChangeFrameBuffer(JUTXfb::getManager()->getDrawingXfb(), JUTVideo::getManager()->getEfbHeight(),
	                     JUTVideo::getManager()->getFbWidth());
	JUTAssertion::flushMessage();
}

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
void JFWDisplay::prepareCopyDisp()
{
	u16 width    = JUTVideo::getManager()->getFbWidth();
	u16 height   = JUTVideo::getManager()->getEfbHeight();
	f32 y_scaleF = GXGetYScaleFactor(height, JUTVideo::getManager()->getXfbHeight());
	u16 line_num = GXGetNumXfbLines(height, y_scaleF);

	GXSetCopyClear(mClearColor, mZClear);
	GXSetDispCopySrc(0, 0, width, height);
	GXSetDispCopyDst(width, line_num);
	GXSetDispCopyYScale(y_scaleF);
	VIFlush();
	GXSetCopyFilter((GXBool)JUTVideo::getManager()->isAntiAliasing(), JUTVideo::getManager()->getSamplePattern(), GX_ENABLE,
	                JUTVideo::getManager()->getVFilter());
	GXSetCopyClamp((GXFBClamp)mClamp);
	GXSetDispCopyGamma((GXGamma)mGamma);
	GXSetZMode(GX_ENABLE, GX_LEQUAL, GX_ENABLE);
	if (mIsAlphaEnabled) {
		GXSetAlphaUpdate(GX_ENABLE);
	}
}

void JFWDrawDoneAlarm();
void JFWThreadAlarmHandler(OSAlarm* alarm, OSContext* context);
void JFWGXAbortAlarmHandler(OSAlarm* alarm, OSContext* context);
void waitForTick(u32, u16);
void diagnoseGpHang();

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void JFWDisplay::drawendXfb_single()
{
	JUTXfb* manager = JUTXfb::getManager();
	if (manager->getDrawingXfbIndex() >= 0) {
		prepareCopyDisp();
		JFWDrawDoneAlarm();
		GXFlush();
		manager->setDrawnXfbIndex(manager->getDrawingXfbIndex());
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x1E0
 */
void JFWDisplay::exchangeXfb_double()
{
	JUTXfb* xfbMng = JUTXfb::getManager();

	if (xfbMng->getDrawnXfbIndex() == xfbMng->getDisplayingXfbIndex()) {
		if (xfbMng->getDrawingXfbIndex() >= 0) {
			prepareCopyDisp();
			GXCopyDisp(xfbMng->getDrawingXfb(), GX_TRUE);
			if (mDrawDoneMethod == 0) {
				xfbMng->setDrawnXfbIndex(xfbMng->getDrawingXfbIndex());
				GXDrawDone();
				JUTVideo::dummyNoDrawWait();
			} else {
				JUTVideo::drawDoneStart();
			}

			if (mDrawDoneMethod == 0) {
				callDirectDraw();
			}
		}
		s16 cur_xfb_index = xfbMng->getDrawingXfbIndex();
		xfbMng->setDrawnXfbIndex(cur_xfb_index);
		xfbMng->setDrawingXfbIndex(cur_xfb_index >= 0 ? cur_xfb_index ^ 1 : 0);
	} else {
		clearEfb(mClearColor);
		if (xfbMng->getDrawingXfbIndex() < 0) {
			xfbMng->setDrawingXfbIndex(0);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */

void JFWDisplay::exchangeXfb_triple()
{
	JUTXfb* xfbMng = JUTXfb::getManager();

	if (xfbMng->getDrawingXfbIndex() >= 0) {
		callDirectDraw();
	}

	xfbMng->setDrawnXfbIndex(xfbMng->getDrawingXfbIndex());

	s16 drawing_idx = xfbMng->getDrawingXfbIndex() + 1;
	do {
		if (drawing_idx >= 3 || drawing_idx < 0) {
			drawing_idx = 0;
		}
	} while (drawing_idx == xfbMng->getDisplayingXfbIndex());
	xfbMng->setDrawingXfbIndex(drawing_idx);
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void JFWDisplay::copyXfb_triple()
{
	JUTXfb* xfbMng = JUTXfb::getManager();

	if (xfbMng->getDrawingXfbIndex() >= 0) {
		prepareCopyDisp();
		GXCopyDisp(xfbMng->getDrawingXfb(), GX_TRUE);
		GXPixModeSync();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void JFWDisplay::preGX()
{
	GXInvalidateTexAll();
	GXInvalidateVtxCache();

	if (JUTVideo::getManager()->isAntiAliasing()) {
		GXSetPixelFmt(GX_PF_RGB565_Z16, GX_ZC_LINEAR);
		GXSetDither(GX_ENABLE);
	} else {
		if (mIsAlphaEnabled) {
			GXSetPixelFmt(GX_PF_RGBA6_Z24, GX_ZC_LINEAR);
			GXSetDither(GX_ENABLE);
		} else {
			GXSetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
			GXSetDither(GX_DISABLE);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void JFWDisplay::endGX()
{
	f32 width  = JUTVideo::getManager()->getFbWidth();
	f32 height = JUTVideo::getManager()->getEfbHeight();

	J2DOrthoGraph ortho(0.0f, 0.0f, width, height, -1.0f, 1.0f);

	if (mFader != nullptr) {
		ortho.setPort();
		mFader->control();
	}
	ortho.setPort();
	JUTDbPrint::getManager()->flush();

	if (JUTConsoleManager::getManager() != nullptr) {
		ortho.setPort();
		JUTConsoleManager::getManager()->draw();
	}

	ortho.setPort();
	JUTProcBar::getManager()->draw();

	if (mDrawDoneMethod != 0 || JUTXfb::getManager()->getBufferNum() == 1) {
		JUTAssertion::flushMessage_dbPrint();
	}
	GXFlush();
}

/**
 * @note Address: 0x80089C88
 * @note Size: 0x478
 */
void JFWDisplay::beginRender()
{
	JUTProcBar::getManager()->wholeLoopEnd();
	JUTProcBar::getManager()->wholeLoopStart();
	JUTProcBar::getManager()->idleStart();

	waitForTick(mTickRate, mFrameRate);
	JUTVideo::getManager()->waitRetraceIfNeed();

	u32 tick        = OSGetTick();
	mFrameDuration  = tick - mCurrentTick; // duration of frame in ticks?
	mCurrentTick    = tick;
	mTickDifference = mCurrentTick - JUTVideo::getVideoLastTick();

	JUTProcBar::getManager()->idleEnd();

	JUTProcBar::getManager()->gpStart();
	JUTXfb* xfbMgr = JUTXfb::getManager();
	switch (xfbMgr->getBufferNum()) {
	case JUTXfb::SingleBuffer:
		if (xfbMgr->getSDrawingFlag() != 2) {
			xfbMgr->setSDrawingFlag(1);
			clearEfb(mClearColor);
		} else {
			xfbMgr->setSDrawingFlag(1);
		}
		xfbMgr->setDrawingXfbIndex(mCurrentXfbIndex);
		break;
	case JUTXfb::DoubleBuffer:
		exchangeXfb_double();
		break;
	case JUTXfb::TripleBuffer:
		exchangeXfb_triple();
		break;
	default:
		break;
	}

	preGX();
}

/**
 * @note Address: 0x8008A100
 * @note Size: 0x340
 */
void JFWDisplay::endRender()
{
	endGX();

	switch (JUTXfb::getManager()->getBufferNum()) {
	case 1:
		drawendXfb_single();
	case 2:
		break;
	case 3:
		copyXfb_triple();
	default:
		break;
	}

	JUTProcBar::getManager()->cpuStart();
	calcCombinationRatio();
}

/**
 * @note Address: 0x8008A440
 * @note Size: 0x198
 */
void JFWDisplay::endFrame()
{
	JUTProcBar::getManager()->cpuEnd();

	JUTProcBar::getManager()->gpWaitStart();
	switch (JUTXfb::getManager()->getBufferNum()) {
	case JUTXfb::SingleBuffer:
		break;
	case JUTXfb::DoubleBuffer:
		JFWDrawDoneAlarm();
		GXFlush();
		break;
	case JUTXfb::TripleBuffer:
		JFWDrawDoneAlarm();
		GXFlush();
		break;
	default:
		break;
	}

	JUTProcBar::getManager()->gpWaitEnd();
	JUTProcBar::getManager()->gpEnd();

	static bool init;
	static u32 prevFrame = VIGetRetraceCount();
	u32 retrace_cnt      = VIGetRetraceCount();
	JUTProcBar::getManager()->setCostFrame(retrace_cnt - prevFrame);
	prevFrame = retrace_cnt;
}

/**
 * @note Address: 0x8008A5D8
 * @note Size: 0x50
 */
void JFWDisplay::waitBlanking(int blankTime)
{
	while (blankTime-- > 0) {
		waitForTick(mTickRate, mFrameRate);
	}
}

/**
 * @note Address: 0x8008A628
 * @note Size: 0x120
 */
void waitForTick(u32 sleepTime, u16 msgTime)
{
	if (sleepTime != 0) {
		static bool init;
		static s64 nextTick = OSGetTime();
		s64 time            = OSGetTime();
		while (time < nextTick) {
			JFWDisplay::getManager()->threadSleep((nextTick - time));
			time = OSGetTime();
		}
		nextTick = time + sleepTime;
	} else {
		static bool init;
		static u32 nextCount = VIGetRetraceCount();
		u32 time             = (msgTime != 0) ? msgTime : 1;
		void* msg;
		do {
			if (!OSReceiveMessage(JUTVideo::getManager()->getMessageQueue(), &msg, OS_MESSAGE_BLOCK)) {
				msg = 0;
			}
		} while (((int)msg - (int)nextCount) < 0);
		nextCount = (int)msg + time;
	}
}

/**
 * @note Address: 0x8008A748
 * @note Size: 0x40
 */
void JFWThreadAlarmHandler(OSAlarm* p_alarm, OSContext* p_ctx)
{
	JFWAlarm* alarm = static_cast<JFWAlarm*>(p_alarm);
	alarm->removeLink();
	OSResumeThread(alarm->getThread());
}

/**
 * @note Address: 0x8008A788
 * @note Size: 0xBC
 */
void JFWDisplay::threadSleep(OSTime time)
{
	JFWAlarm alarm;
	alarm.createAlarm();
	alarm.setThread(OSGetCurrentThread());
	s32 status = OSDisableInterrupts();
	alarm.appendLink();

	OSSetAlarm(&alarm, time, JFWThreadAlarmHandler);
	OSSuspendThread(alarm.getThread());
	OSRestoreInterrupts(status);
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JFWAlarm>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
void JFWDisplay::changeToSingleXfb(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void JFWDisplay::changeToDoubleXfb()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
void JFWDisplay::deleteToSingleXfb(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C8
 */
void JFWDisplay::deleteToSingleXfb(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JFWDisplay::addToDoubleXfb(void*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JFWDisplay::addToDoubleXfb(JKRHeap*)
{
	// UNUSED FUNCTION
}

static GXTexObj clear_z_tobj;
static u8 clear_z_TX[] __attribute__((aligned(32)))
= { 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };

/**
 * @note Address: 0x8008A844
 * @note Size: 0x74
 */
void JFWDisplay::clearEfb_init()
{
	GXInitTexObj(&clear_z_tobj, clear_z_TX, 4, 4, GX_TF_Z24X8, GX_REPEAT, GX_REPEAT, GX_FALSE);
	GXInitTexObjLOD(&clear_z_tobj, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void JFWDisplay::clearEfb() { clearEfb(mClearColor); }

/**
 * @note Address: 0x8008A8B8
 * @note Size: 0x44
 */
void JFWDisplay::clearEfb(_GXColor color)
{
	int width  = JUTVideo::getManager()->getFbWidth();
	int height = JUTVideo::getManager()->getEfbHeight();

	clearEfb(0, 0, width, height, color);
}

/**
 * @note Address: 0x8008A8FC
 * @note Size: 0x370
 */
void JFWDisplay::clearEfb(int xMin, int yMin, int xDelta, int yDelta, _GXColor color)
{
	Mtx44 mtx;

	const u16 width  = JUTVideo::getManager()->getFbWidth();
	const u16 height = JUTVideo::getManager()->getEfbHeight();

	C_MTXOrtho(mtx, 0.0f, height, 0.0f, width, 0.0f, 1.0f);
	GXSetProjection(mtx, GX_ORTHOGRAPHIC);
	GXSetViewport(0.0f, 0.0f, width, height, 0.0f, 1.0f);
	GXSetScissor(0, 0, width, height);

	GXLoadPosMtxImm(e_mtx, GX_PNMTX0);
	GXSetCurrentMtx(0);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGB, GX_RGBX8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGB565, 0);
	GXSetNumChans(0);
	GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetChanCtrl(GX_COLOR1A1, GX_DISABLE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_DISABLE, 125);
	GXLoadTexObj(&clear_z_tobj, GX_TEXMAP0);
	GXSetNumTevStages(1);
	GXSetTevColor(GX_TEVREG0, color);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_C0);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_ENABLE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_A0);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_ENABLE, GX_TEVPREV);
	GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
	GXSetZTexture(GX_ZT_REPLACE, GX_TF_Z24X8, 0);
	GXSetZCompLoc(GX_DISABLE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ZERO, GX_BL_ZERO, GX_LO_NOOP);

	if (mIsAlphaEnabled) {
		GXSetAlphaUpdate(GX_ENABLE);
		GXSetDstAlpha(GX_ENABLE, 0);
	}
	GXSetZMode(GX_ENABLE, GX_ALWAYS, GX_ENABLE);
	GXSetCullMode(GX_CULL_BACK);

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	// bottom left
	GXPosition2u16(xMin, yMin);
	GXTexCoord2u8(0, 0);

	// bottom right
	GXPosition2u16(xMin + xDelta, yMin);
	GXTexCoord2u8(1, 0);

	// top right
	GXPosition2u16(xMin + xDelta, yMin + yDelta);
	GXTexCoord2u8(1, 1);

	// top left
	GXPosition2u16(xMin, yMin + yDelta);
	GXTexCoord2u8(0, 1);

	GXSetZTexture(GX_ZT_DISABLE, GX_TF_Z24X8, 0);
	GXSetZCompLoc(GX_ENABLE);
	if (mIsAlphaEnabled) {
		GXSetDstAlpha(GX_DISABLE, 0);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x1D4
 */
void JFWDisplay::clearAllXfb()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8008AC6C
 * @note Size: 0x8C
 */
void JFWDisplay::calcCombinationRatio()
{
	u32 vidInterval          = JUTVideo::getVideoInterval();
	s32 doubledFrameDuration = mFrameDuration * 2;

	s32 i = vidInterval;
	for (; i < doubledFrameDuration; i += vidInterval) { }

	s32 tmp = (i - doubledFrameDuration) - mTickDifference;
	if (tmp < 0) {
		tmp += vidInterval;
	}
	mCombinationRatio = (f32)tmp / (f32)mFrameDuration;
	if (mCombinationRatio > 1.0f) {
		mCombinationRatio = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void JFWDisplay::frameToTick(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8008ACF8
 * @note Size: 0xF0
 */
void JFWDrawDoneAlarm()
{
	BOOL status;
	JFWAlarm alarm;
	status = OSDisableInterrupts();
	alarm.createAlarm();
	alarm.appendLink();
	OSRestoreInterrupts(status);
	OSSetAlarm(&alarm, (OS_TIMER_CLOCK)*0.5, JFWGXAbortAlarmHandler);
	GXDrawDone();
	status = OSDisableInterrupts();
	alarm.cancelAlarm();
	alarm.removeLink();
	OSRestoreInterrupts(status);
}

/**
 * @note Address: 0x8008ADE8
 * @note Size: 0x40
 */
void JFWGXAbortAlarmHandler(OSAlarm*, OSContext*)
{
	diagnoseGpHang();
	GXAbortFrame();

	GX_BP_LOAD_REG(0x5800000F);

	GXSetDrawDone();
}

/**
 * @note Address: 0x8008AE28
 * @note Size: 0x1BC
 */
void diagnoseGpHang()
{
	u32 xfTop0, xfBot0, suRdy0, r0Rdy0;
	u32 xfTop1, xfBot1, suRdy1, r0Rdy1;
	u32 xfTopD, xfBotD, suRdyD, r0RdyD;
	GXBool readIdle, cmdIdle, junk;

	GXReadXfRasMetric(&xfBot0, &xfTop0, &r0Rdy0, &suRdy0);
	GXReadXfRasMetric(&xfBot1, &xfTop1, &r0Rdy1, &suRdy1);

	xfTopD = (xfTop1 - xfTop0) == 0;
	xfBotD = (xfBot1 - xfBot0) == 0;
	suRdyD = (suRdy1 - suRdy0) > 0;
	r0RdyD = (r0Rdy1 - r0Rdy0) > 0;

	GXGetGPStatus(&junk, &junk, &readIdle, &cmdIdle, &junk);
	OSReport("GP status %d%d%d%d%d%d --> ", readIdle, cmdIdle, xfTopD, xfBotD, suRdyD, r0RdyD);

	if (!xfBotD && suRdyD)
		OSReport("GP hang due to XF stall bug.\n");
	else if (!xfTopD && xfBotD && suRdyD)
		OSReport("GP hang due to unterminated primitive.\n");
	else if (!cmdIdle && xfTopD && xfBotD && suRdyD)
		OSReport("GP hang due to illegal instruction.\n");
	else if (readIdle && cmdIdle && xfTopD && xfBotD && suRdyD && r0RdyD)
		OSReport("GP appears to be not hung (waiting for input).\n");
	else
		OSReport("GP is in unknown state.\n");
}

/**
 * @note Address: 0x8008AFE4
 * @note Size: 0x94
 */
void JFWDisplay::setForOSResetSystem()
{
	for (JSUPtrLink* link = JFWAlarm::sList.mHead; link != nullptr; link = link->getNext()) {
		((JFWAlarm*)link->mValue)->cancelAlarm();
	}

	JUTVideo::destroyManager();
	VISetBlack(GX_TRUE);
	VIFlush();
	VIWaitForRetrace();

	if (sManager) {
		sManager->mFader = nullptr;
		destroyManager();
	}
}
