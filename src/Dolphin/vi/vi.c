#include "Dolphin/vi.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

// Useful macros.
#define CLAMP(x, l, h)    (((x) > (h)) ? (h) : (((x) < (l)) ? (l) : (x)))
#define MIN(a, b)         (((a) < (b)) ? (a) : (b))
#define MAX(a, b)         (((a) > (b)) ? (a) : (b))
#define IS_LOWER_16MB(x)  ((x) < 16 * 1024 * 1024)
#define ToPhysical(fb)    (u32)(((u32)(fb)) & 0x3FFFFFFF)
#define ONES(x)           ((1 << (x)) - 1)
#define VI_BITMASK(index) (1ull << (63 - (index)))

const char* __VIVersion = "<< Dolphin SDK - VI\trelease build: Apr 17 2003 12:33:22 (0x2301) >>";

static BOOL IsInitialized;
static vu32 retraceCount;
static u32 flushFlag;
static OSThreadQueue retraceQueue;
static VIRetraceCallback PreCB;
static VIRetraceCallback PostCB;
static VIPositionCallback PositionCallback;
static u32 encoderType;

static s16 displayOffsetH;
static s16 displayOffsetV;

static vu32 changeMode;
static vu64 changed;

static vu32 shdwChangeMode;
static vu64 shdwChanged;

static VITimingInfo* CurrTiming;
static u32 CurrTvMode;

static u32 NextBufAddr;
static u32 CurrBufAddr;

static u32 FBSet;

static vu16 regs[59];
static vu16 shdwRegs[59];

static VIPositionInfo HorVer;
// clang-format off
static VITimingInfo timing[10] = { 
	{ // NTSC INT
		6, 240, 24, 25, 3, 2, 12, 13, 12, 13, 520, 519, 520, 519, 525, 429, 64, 71, 105, 162, 373, 122, 412,
	},
	{ // NTSC DS
		6, 240, 24, 24, 4, 4, 12, 12, 12, 12, 520, 520, 520, 520, 526, 429, 64, 71, 105, 162, 373, 122, 412,
	},
	{ // PAL INT
		5, 287, 35, 36, 1, 0, 13, 12, 11, 10, 619, 618, 617, 620, 625, 432, 64, 75, 106, 172, 380, 133, 420,
	}, 
	{ // PAL DS
		5, 287, 33, 33, 2, 2, 13, 11, 13, 11, 619, 621, 619, 621, 624, 432, 64, 75, 106, 172, 380, 133, 420,
	}, 	
	{ // MPAL INT
		6, 240, 24, 25, 3, 2, 16, 15, 14, 13, 518, 517, 516, 519, 525, 429, 64, 78, 112, 162, 373, 122, 412,
	},
	{ // MPAL DS
		6, 240, 24, 24, 4, 4, 16, 14, 16, 14, 518, 520, 518, 520, 526, 429, 64, 78, 112, 162, 373, 122, 412,
	},
	{ // NTSC PRO
		12, 480, 48, 48, 6, 6, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 162, 373, 122, 412,
	},
	{ // NTSC 3D
		12, 480, 44, 44, 10, 10, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 168, 379, 122, 412,
	},
	{ // GCA INT
		6, 241, 24, 25, 1, 0, 12, 13, 12, 13, 520, 519, 520, 519, 525, 429, 64, 71, 105, 159, 370, 122, 412,
	},
	{ // GCA DS
		12, 480, 48, 48, 6, 6, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 180, 391, 122, 412,
	},
};
// clang-format on

static u16 taps[26] = { 496, 476, 430, 372, 297, 219, 142, 70, 12, 226, 203, 192, 196, 207, 222, 236, 252, 8, 15, 19, 19, 15, 12, 8, 1, 0 };

// forward declaring statics
static u32 getCurrentFieldEvenOdd();

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
static void getEncoderType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
static int cntlzd(u64 bit)
{
	u32 hi, lo;
	int value;

	hi    = (u32)(bit >> 32);
	lo    = (u32)(bit & 0xFFFFFFFF);
	value = __cntlzw(hi);

	if (value < 32) {
		return value;
	}

	return (32 + __cntlzw(lo));
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
static BOOL VISetRegs(void)
{
	int regIndex;

	if (!((shdwChangeMode == 1) && (getCurrentFieldEvenOdd() == 0))) {
		while (shdwChanged) {
			regIndex           = cntlzd(shdwChanged);
			__VIRegs[regIndex] = shdwRegs[regIndex];
			shdwChanged &= ~(VI_BITMASK(regIndex));
		}

		shdwChangeMode = 0;
		CurrTiming     = HorVer.timing;
		CurrTvMode     = HorVer.tv;
		CurrBufAddr    = NextBufAddr;

		return TRUE;
	}
	return FALSE;
}

/*
 * --INFO--
 * Address:	800D07E8
 * Size:	000274
 */
static void __VIRetraceHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSContext exceptionContext;
	u16 viReg;
	u32 inter = 0;

	viReg = __VIRegs[VI_DISP_INT_0];
	if (viReg & 0x8000) {
		__VIRegs[VI_DISP_INT_0] = (u16)(viReg & ~0x8000);
		inter |= 1;
	}

	viReg = __VIRegs[VI_DISP_INT_1];
	if (viReg & 0x8000) {
		__VIRegs[VI_DISP_INT_1] = (u16)(viReg & ~0x8000);
		inter |= 2;
	}

	viReg = __VIRegs[VI_DISP_INT_2];
	if (viReg & 0x8000) {
		__VIRegs[VI_DISP_INT_2] = (u16)(viReg & ~0x8000);
		inter |= 4;
	}

	viReg = __VIRegs[VI_DISP_INT_3];
	if (viReg & 0x8000) {
		__VIRegs[VI_DISP_INT_3] = (u16)(viReg & ~0x8000);
		inter |= 8;
	}

	if ((inter & 4) || (inter & 8)) {
		OSClearContext(&exceptionContext);
		OSSetCurrentContext(&exceptionContext);
		if (PositionCallback) {
			s16 x, y;
			__VIGetCurrentPosition(&x, &y);
			(*PositionCallback)(x, y);
		}
		OSClearContext(&exceptionContext);
		OSSetCurrentContext(context);
		return;
	}

	retraceCount++;

	OSClearContext(&exceptionContext);
	OSSetCurrentContext(&exceptionContext);
	if (PreCB) {
		(*PreCB)(retraceCount);
	}

	if (flushFlag) {
		if (VISetRegs()) {
			flushFlag = 0;
			SIRefreshSamplingRate();
		}
	}

	if (PostCB) {
		OSClearContext(&exceptionContext);
		(*PostCB)(retraceCount);
	}

	OSWakeupThread(&retraceQueue);
	OSClearContext(&exceptionContext);
	OSSetCurrentContext(context);
}

/*
 * --INFO--
 * Address:	800D0A5C
 * Size:	000044
 */
VIRetraceCallback VISetPreRetraceCallback(VIRetraceCallback callback)
{
	int interrupt;
	VIRetraceCallback oldCallback;

	oldCallback = PreCB;

	interrupt = OSDisableInterrupts();
	PreCB     = callback;
	OSRestoreInterrupts(interrupt);

	return oldCallback;
}

/*
 * --INFO--
 * Address:	800D0AA0
 * Size:	000044
 */
VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback callback)
{
	int interrupt;
	VIRetraceCallback oldCallback;

	oldCallback = PostCB;

	interrupt = OSDisableInterrupts();
	PostCB    = callback;
	OSRestoreInterrupts(interrupt);

	return oldCallback;
}

/*
 * --INFO--
 * Address:	800D0AE4
 * Size:	0000A0
 */
static VITimingInfo* getTiming(VITVMode mode)
{
	switch (mode) {
	case VI_TVMODE_NTSC_INT:
		return &timing[0];
	case VI_TVMODE_NTSC_DS:
		return &timing[1];

	case VI_TVMODE_PAL_INT:
		return &timing[2];
	case VI_TVMODE_PAL_DS:
		return &timing[3];

	case VI_TVMODE_EURGB60_INT:
		return &timing[0];
	case VI_TVMODE_EURGB60_DS:
		return &timing[1];

	case VI_TVMODE_MPAL_INT:
		return &timing[4];
	case VI_TVMODE_MPAL_DS:
		return &timing[5];

	case VI_TVMODE_NTSC_PROG:
		return &timing[6];
	case VI_TVMODE_NTSC_3D:
		return &timing[7];

	case VI_TVMODE_DEBUG_PAL_INT:
		return &timing[2];
	case VI_TVMODE_DEBUG_PAL_DS:
		return &timing[3];

	case VI_TVMODE_GCA_INT:
		return &timing[8];
	case VI_TVMODE_GCA_PROG:
		return &timing[9];
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	800D0B84
 * Size:	000200
 */
void __VIInit(VITVMode mode)
{
	VITimingInfo* tm;
	u32 nonInter;
	vu32 a;
	u32 tv, tvForReg;

	u16 hct, vct;

	nonInter = mode & 2;
	tv       = (u32)mode >> 2;

	*(u32*)OSPhysicalToCached(0xCC) = tv;

	tm = getTiming(mode);

	__VIRegs[VI_DISP_CONFIG] = 2;
	for (a = 0; a < 1000; a++) {
		;
	}

	__VIRegs[VI_DISP_CONFIG] = 0;

	__VIRegs[VI_HORIZ_TIMING_0U] = tm->hlw << 0;
	__VIRegs[VI_HORIZ_TIMING_0L] = (tm->hce << 0) | (tm->hcs << 8);

	__VIRegs[VI_HORIZ_TIMING_1U] = (tm->hsy << 0) | ((tm->hbe640 & ((1 << 9) - 1)) << 7);
	__VIRegs[VI_HORIZ_TIMING_1L] = ((tm->hbe640 >> 9) << 0) | (tm->hbs640 << 1);

	__VIRegs[VI_VERT_TIMING] = (tm->equ << 0) | (0 << 4);

	__VIRegs[VI_VERT_TIMING_ODD_U] = (tm->prbOdd + tm->acv * 2 - 2) << 0;
	__VIRegs[VI_VERT_TIMING_ODD]   = tm->psbOdd + 2 << 0;

	__VIRegs[VI_VERT_TIMING_EVEN_U] = (tm->prbEven + tm->acv * 2 - 2) << 0;
	__VIRegs[VI_VERT_TIMING_EVEN]   = tm->psbEven + 2 << 0;

	__VIRegs[VI_BBI_ODD_U] = (tm->bs1 << 0) | (tm->be1 << 5);
	__VIRegs[VI_BBI_ODD]   = (tm->bs3 << 0) | (tm->be3 << 5);

	__VIRegs[VI_BBI_EVEN_U] = (tm->bs2 << 0) | (tm->be2 << 5);
	__VIRegs[VI_BBI_EVEN]   = (tm->bs4 << 0) | (tm->be4 << 5);

	__VIRegs[VI_HSW] = (40 << 0) | (40 << 8);

	__VIRegs[VI_DISP_INT_1U] = 1;
	__VIRegs[VI_DISP_INT_1]  = (1 << 0) | (1 << 12) | (0 << 15);

	hct                      = (tm->hlw + 1);
	vct                      = (tm->numHalfLines / 2 + 1) | (1 << 12) | (0 << 15);
	__VIRegs[VI_DISP_INT_0U] = hct << 0;
	__VIRegs[VI_DISP_INT_0]  = vct;

	if (mode != VI_TVMODE_NTSC_PROG && mode != VI_TVMODE_NTSC_3D && mode != VI_TVMODE_GCA_PROG) {
		__VIRegs[VI_DISP_CONFIG] = (1 << 0) | (0 << 1) | (nonInter << 2) | (0 << 3) | (0 << 4) | (0 << 6) | (tv << 8);
		__VIRegs[VI_CLOCK_SEL]   = 0;

	} else {
		__VIRegs[VI_DISP_CONFIG] = (1 << 0) | (0 << 1) | (1 << 2) | (0 << 3) | (0 << 4) | (0 << 6) | (tv << 8);
		__VIRegs[VI_CLOCK_SEL]   = 1;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
static void AdjustPosition(u16 acv)
{
	s32 coeff, frac;

	HorVer.adjDispPosX = (u16)CLAMP((s16)HorVer.dispPosX + displayOffsetH, 0, 720 - HorVer.dispSizeX);

	coeff = (HorVer.xfbMode == VI_XFBMODE_SF) ? 2 : 1;
	frac  = HorVer.dispPosY & 1;

	HorVer.adjDispPosY = (u16)MAX((s16)HorVer.dispPosY + displayOffsetV, frac);

	HorVer.adjDispSizeY = (u16)(HorVer.dispSizeY + MIN((s16)HorVer.dispPosY + displayOffsetV - frac, 0)
	                            - MAX((s16)HorVer.dispPosY + (s16)HorVer.dispSizeY + displayOffsetV - ((s16)acv * 2 - frac), 0));

	HorVer.adjPanPosY = (u16)(HorVer.panPosY - MIN((s16)HorVer.dispPosY + displayOffsetV - frac, 0) / coeff);

	HorVer.adjPanSizeY = (u16)(HorVer.panSizeY + MIN((s16)HorVer.dispPosY + displayOffsetV - frac, 0) / coeff
	                           - MAX((s16)HorVer.dispPosY + (s16)HorVer.dispSizeY + displayOffsetV - ((s16)acv * 2 - frac), 0) / coeff);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
static void ImportAdjustingValues(void)
{
	displayOffsetH = __OSLockSram()->displayOffsetH;
	displayOffsetV = 0;
	__OSUnlockSram(FALSE);
}

/*
 * --INFO--
 * Address:	800D0D84
 * Size:	0004B0
 */
void VIInit(void)
{
	u16 dspCfg;
	u32 value, tv, tvInBootrom;

	if (IsInitialized) {
		return;
	}

	OSRegisterVersion(__VIVersion);
	IsInitialized = TRUE;
	encoderType   = 1;

	if (!(__VIRegs[VI_DISP_CONFIG] & 1)) {
		__VIInit(VI_TVMODE_NTSC_INT);
	}

	retraceCount   = 0;
	changed        = 0;
	shdwChanged    = 0;
	changeMode     = 0;
	shdwChangeMode = 0;
	flushFlag      = 0;

	__VIRegs[VI_FCT_0U] = ((((taps[0])) << 0) | (((taps[1] & ((1 << (6)) - 1))) << 10));
	__VIRegs[VI_FCT_0]  = ((((taps[1] >> 6)) << 0) | (((taps[2])) << 4));
	__VIRegs[VI_FCT_1U] = ((((taps[3])) << 0) | (((taps[4] & ((1 << (6)) - 1))) << 10));
	__VIRegs[VI_FCT_1]  = ((((taps[4] >> 6)) << 0) | (((taps[5])) << 4));
	__VIRegs[VI_FCT_2U] = ((((taps[6])) << 0) | (((taps[7] & ((1 << (6)) - 1))) << 10));
	__VIRegs[VI_FCT_2]  = ((((taps[7] >> 6)) << 0) | (((taps[8])) << 4));
	__VIRegs[VI_FCT_3U] = ((((taps[9])) << 0) | (((taps[10])) << 8));
	__VIRegs[VI_FCT_3]  = ((((taps[11])) << 0) | (((taps[12])) << 8));
	__VIRegs[VI_FCT_4U] = ((((taps[13])) << 0) | (((taps[14])) << 8));
	__VIRegs[VI_FCT_4]  = ((((taps[15])) << 0) | (((taps[16])) << 8));
	__VIRegs[VI_FCT_5U] = ((((taps[17])) << 0) | (((taps[18])) << 8));
	__VIRegs[VI_FCT_5]  = ((((taps[19])) << 0) | (((taps[20])) << 8));
	__VIRegs[VI_FCT_6U] = ((((taps[21])) << 0) | (((taps[22])) << 8));
	__VIRegs[VI_FCT_6]  = ((((taps[23])) << 0) | (((taps[24])) << 8));

	__VIRegs[VI_WIDTH] = 640;
	ImportAdjustingValues();
	tvInBootrom = *(u32*)OSPhysicalToCached(0xCC);
	dspCfg      = __VIRegs[VI_DISP_CONFIG];

	HorVer.nonInter = ((((u32)(dspCfg)) >> 2 & 0x00000001));
	HorVer.tv       = ((((u32)(dspCfg)) & 0x00000300) >> 8);

	if ((tvInBootrom == VI_PAL) && (HorVer.tv == VI_NTSC)) {
		HorVer.tv = VI_EURGB60;
	}

	tv                   = (HorVer.tv == VI_DEBUG) ? VI_NTSC : HorVer.tv;
	HorVer.timing        = getTiming((VITVMode)VI_TVMODE(tv, HorVer.nonInter));
	regs[VI_DISP_CONFIG] = dspCfg;

	CurrTiming = HorVer.timing;
	CurrTvMode = HorVer.tv;

	HorVer.dispSizeX = 640;
	HorVer.dispSizeY = (u16)(CurrTiming->acv * 2);
	HorVer.dispPosX  = (u16)((720 - HorVer.dispSizeX) / 2);
	HorVer.dispPosY  = 0;

	AdjustPosition(CurrTiming->acv);

	HorVer.fbSizeX     = 640;
	HorVer.fbSizeY     = (u16)(CurrTiming->acv * 2);
	HorVer.panPosX     = 0;
	HorVer.panPosY     = 0;
	HorVer.panSizeX    = 640;
	HorVer.panSizeY    = (u16)(CurrTiming->acv * 2);
	HorVer.xfbMode     = VI_XFBMODE_SF;
	HorVer.wordPerLine = 40;
	HorVer.std         = 40;
	HorVer.wpl         = 40;
	HorVer.xof         = 0;
	HorVer.isBlack     = TRUE;
	HorVer.is3D        = FALSE;

	OSInitThreadQueue(&retraceQueue);

	value                   = __VIRegs[VI_DISP_INT_0];
	value                   = (((u32)(value)) & ~0x00008000) | (((0)) << 15);
	__VIRegs[VI_DISP_INT_0] = value;

	value                   = __VIRegs[VI_DISP_INT_1];
	value                   = (((u32)(value)) & ~0x00008000) | (((0)) << 15);
	__VIRegs[VI_DISP_INT_1] = value;

	PreCB  = nullptr;
	PostCB = nullptr;

	__OSSetInterruptHandler(24, __VIRetraceHandler);
	__OSUnmaskInterrupts((0x80000000u >> (24)));
}

/*
 * --INFO--
 * Address:	800D1234
 * Size:	000054
 */
void VIWaitForRetrace(void)
{
	int interrupt;
	u32 startCount;

	interrupt  = OSDisableInterrupts();
	startCount = retraceCount;
	do {
		OSSleepThread(&retraceQueue);
	} while (startCount == retraceCount);
	OSRestoreInterrupts(interrupt);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
static void setInterruptRegs(VITimingInfo* tm)
{
	u16 vct, hct, borrow;

	vct    = (u16)(tm->numHalfLines / 2);
	borrow = (u16)(tm->numHalfLines % 2);
	hct    = (u16)((borrow) ? tm->hlw : (u16)0);

	vct++;
	hct++;

	regs[VI_DISP_INT_0U] = (u16)hct;
	changed |= VI_BITMASK(VI_DISP_INT_0U);

	regs[VI_DISP_INT_0] = (u16)((((u32)(vct))) | (((u32)(1)) << 12) | (((u32)(0)) << 15));
	changed |= VI_BITMASK(VI_DISP_INT_0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
static void setPicConfig(u16 fbSizeX, VIXFBMode xfbMode, u16 panPosX, u16 panSizeX, u8* wordPerLine, u8* std, u8* wpl, u8* xof)
{
	*wordPerLine = (u8)((fbSizeX + 15) / 16);
	*std         = (u8)((xfbMode == VI_XFBMODE_SF) ? *wordPerLine : (u8)(2 * *wordPerLine));
	*xof         = (u8)(panPosX % 16);
	*wpl         = (u8)((*xof + panSizeX + 15) / 16);

	regs[VI_HSW] = (u16)((((u32)(*std))) | (((u32)(*wpl)) << 8));
	changed |= VI_BITMASK(VI_HSW);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
static void setBBIntervalRegs(VITimingInfo* tm)
{
	u16 val;

	val                = (u16)((((u32)(tm->bs1))) | (((u32)(tm->be1)) << 5));
	regs[VI_BBI_ODD_U] = val;
	changed |= VI_BITMASK(VI_BBI_ODD_U);

	val              = (u16)((((u32)(tm->bs3))) | (((u32)(tm->be3)) << 5));
	regs[VI_BBI_ODD] = val;
	changed |= VI_BITMASK(VI_BBI_ODD);

	val                 = (u16)((((u32)(tm->bs2))) | (((u32)(tm->be2)) << 5));
	regs[VI_BBI_EVEN_U] = val;
	changed |= VI_BITMASK(VI_BBI_EVEN_U);

	val               = (u16)((((u32)(tm->bs4))) | (((u32)(tm->be4)) << 5));
	regs[VI_BBI_EVEN] = val;
	changed |= VI_BITMASK(VI_BBI_EVEN);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
static void setScalingRegs(u16 panSizeX, u16 dispSizeX, BOOL is3D)
{
	u32 scale;

	panSizeX = (u16)(is3D ? panSizeX * 2 : panSizeX);

	if (panSizeX < dispSizeX) {
		scale = (256 * (u32)panSizeX + (u32)dispSizeX - 1) / (u32)dispSizeX;

		regs[VI_HSR] = (u16)((((u32)(scale))) | (((u32)(1)) << 12));
		changed |= VI_BITMASK(VI_HSR);

		regs[VI_WIDTH] = (u16)((((u32)(panSizeX))));
		changed |= VI_BITMASK(VI_WIDTH);
	} else {
		regs[VI_HSR] = (u16)((((u32)(256))) | (((u32)(0)) << 12));
		changed |= VI_BITMASK(VI_HSR);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
static void calcFbbs(u32 bufAddr, u16 panPosX, u16 panPosY, u8 wordPerLine, VIXFBMode xfbMode, u16 dispPosY, u32* tfbb, u32* bfbb)
{
	u32 bytesPerLine, xoffInWords;
	xoffInWords  = (u32)panPosX / 16;
	bytesPerLine = (u32)wordPerLine * 32;

	*tfbb = bufAddr + xoffInWords * 32 + bytesPerLine * panPosY;
	*bfbb = (xfbMode == VI_XFBMODE_SF) ? *tfbb : (*tfbb + bytesPerLine);

	if (dispPosY % 2 == 1) {
		u32 tmp = *tfbb;
		*tfbb   = *bfbb;
		*bfbb   = tmp;
	}

	*tfbb = ToPhysical(*tfbb);
	*bfbb = ToPhysical(*bfbb);
}

/*
 * --INFO--
 * Address:	800D1288
 * Size:	0002D4
 */
static void setFbbRegs(VIPositionInfo* hv, u32* tfbb, u32* bfbb, u32* rtfbb, u32* rbfbb)
{
	u32 shifted;
	calcFbbs(hv->bufAddr, hv->panPosX, hv->adjPanPosY, hv->wordPerLine, hv->xfbMode, hv->adjDispPosY, tfbb, bfbb);

	if (hv->is3D) {
		calcFbbs(hv->rbufAddr, hv->panPosX, hv->adjPanPosY, hv->wordPerLine, hv->xfbMode, hv->adjDispPosY, rtfbb, rbfbb);
	}

	if (IS_LOWER_16MB(*tfbb) && IS_LOWER_16MB(*bfbb) && IS_LOWER_16MB(*rtfbb) && IS_LOWER_16MB(*rbfbb)) {
		shifted = 0;
	} else {
		shifted = 1;
	}

	if (shifted) {
		*tfbb >>= 5;
		*bfbb >>= 5;
		*rtfbb >>= 5;
		*rbfbb >>= 5;
	}

	regs[VI_TOP_FIELD_BASE_LEFT_U] = (u16)(*tfbb & 0xFFFF);
	changed |= VI_BITMASK(VI_TOP_FIELD_BASE_LEFT_U);

	regs[VI_TOP_FIELD_BASE_LEFT] = (u16)((((*tfbb >> 16))) | hv->xof << 8 | shifted << 12);
	changed |= VI_BITMASK(VI_TOP_FIELD_BASE_LEFT);

	regs[VI_BTTM_FIELD_BASE_LEFT_U] = (u16)(*bfbb & 0xFFFF);
	changed |= VI_BITMASK(VI_BTTM_FIELD_BASE_LEFT_U);

	regs[VI_BTTM_FIELD_BASE_LEFT] = (u16)(*bfbb >> 16);
	changed |= VI_BITMASK(VI_BTTM_FIELD_BASE_LEFT);

	if (hv->is3D) {
		regs[VI_TOP_FIELD_BASE_RIGHT_U] = *rtfbb & 0xffff;
		changed |= VI_BITMASK(VI_TOP_FIELD_BASE_RIGHT_U);

		regs[VI_TOP_FIELD_BASE_RIGHT] = *rtfbb >> 16;
		changed |= VI_BITMASK(VI_TOP_FIELD_BASE_RIGHT);

		regs[VI_BTTM_FIELD_BASE_RIGHT_U] = *rbfbb & 0xFFFF;
		changed |= VI_BITMASK(VI_BTTM_FIELD_BASE_RIGHT_U);

		regs[VI_BTTM_FIELD_BASE_RIGHT] = *rbfbb >> 16;
		changed |= VI_BITMASK(VI_BTTM_FIELD_BASE_RIGHT);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
static void setHorizontalRegs(VITimingInfo* tm, u16 dispPosX, u16 dispSizeX)
{
	u32 hbe, hbs, hbeLo, hbeHi;

	regs[VI_HORIZ_TIMING_0U] = (u16)tm->hlw;
	changed |= VI_BITMASK(VI_HORIZ_TIMING_0U);

	regs[VI_HORIZ_TIMING_0L] = (u16)(tm->hce | tm->hcs << 8);
	changed |= VI_BITMASK(VI_HORIZ_TIMING_0L);

	hbe = (u32)(tm->hbe640 - 40 + dispPosX);
	hbs = (u32)(tm->hbs640 + 40 + dispPosX - (720 - dispSizeX));

	hbeLo = hbe & ONES(9);
	hbeHi = hbe >> 9;

	regs[VI_HORIZ_TIMING_1U] = (u16)(tm->hsy | hbeLo << 7);
	changed |= VI_BITMASK(VI_HORIZ_TIMING_1U);

	regs[VI_HORIZ_TIMING_1L] = (u16)(hbeHi | hbs << 1);
	changed |= VI_BITMASK(VI_HORIZ_TIMING_1L);
}

/*
 * --INFO--
 * Address:	800D155C
 * Size:	0001A0
 */
static void setVerticalRegs(u16 dispPosY, u16 dispSizeY, u8 equ, u16 acv, u16 prbOdd, u16 prbEven, u16 psbOdd, u16 psbEven, BOOL black)
{
	u16 actualPrbOdd, actualPrbEven, actualPsbOdd, actualPsbEven, actualAcv, c, d;

	if (regs[VI_CLOCK_SEL] & 1) {
		c = 1;
		d = 2;
	} else {
		c = 2;
		d = 1;
	}

	if (dispPosY % 2 == 0) {
		actualPrbOdd  = (u16)(prbOdd + d * dispPosY);
		actualPsbOdd  = (u16)(psbOdd + d * ((c * acv - dispSizeY) - dispPosY));
		actualPrbEven = (u16)(prbEven + d * dispPosY);
		actualPsbEven = (u16)(psbEven + d * ((c * acv - dispSizeY) - dispPosY));
	} else {
		actualPrbOdd  = (u16)(prbEven + d * dispPosY);
		actualPsbOdd  = (u16)(psbEven + d * ((c * acv - dispSizeY) - dispPosY));
		actualPrbEven = (u16)(prbOdd + d * dispPosY);
		actualPsbEven = (u16)(psbOdd + d * ((c * acv - dispSizeY) - dispPosY));
	}

	actualAcv = (u16)(dispSizeY / c);

	if (black) {
		actualPrbOdd += 2 * actualAcv - 2;
		actualPsbOdd += 2;
		actualPrbEven += 2 * actualAcv - 2;
		actualPsbEven += 2;
		actualAcv = 0;
	}

	regs[VI_VERT_TIMING] = (u16)(equ | actualAcv << 4);
	changed |= VI_BITMASK(VI_VERT_TIMING);

	regs[VI_VERT_TIMING_ODD_U] = (u16)actualPrbOdd << 0;
	changed |= VI_BITMASK(VI_VERT_TIMING_ODD_U);

	regs[VI_VERT_TIMING_ODD] = (u16)actualPsbOdd << 0;
	changed |= VI_BITMASK(VI_VERT_TIMING_ODD);

	regs[VI_VERT_TIMING_EVEN_U] = (u16)actualPrbEven << 0;
	changed |= VI_BITMASK(VI_VERT_TIMING_EVEN_U);

	regs[VI_VERT_TIMING_EVEN] = (u16)actualPsbEven << 0;
	changed |= VI_BITMASK(VI_VERT_TIMING_EVEN);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
static void PrintDebugPalCaution(void)
{
	static u32 message = 0;

	if (message == 0) {
		message = 1;
		OSReport("***************************************\n");
		OSReport(" ! ! ! C A U T I O N ! ! !             \n");
		OSReport("This TV format \"DEBUG_PAL\" is only for \n");
		OSReport("temporary solution until PAL DAC board \n");
		OSReport("is available. Please do NOT use this   \n");
		OSReport("mode in real games!!!                  \n");
		OSReport("***************************************\n");
	}
}

/*
 * --INFO--
 * Address:	800D16FC
 * Size:	000828
 */
void VIConfigure(const GXRenderModeObj* obj)
{
	VITimingInfo* tm;
	u32 regDspCfg;
	BOOL enabled;
	u32 newNonInter, tvInBootrom, tvInGame;

	enabled     = OSDisableInterrupts();
	newNonInter = (u32)obj->viTVmode & 3;

	if (HorVer.nonInter != newNonInter) {
		changeMode      = 1;
		HorVer.nonInter = newNonInter;
	}

	tvInGame    = (u32)obj->viTVmode >> 2;
	tvInBootrom = *(u32*)OSPhysicalToCached(0xCC);

	if (tvInGame == VI_DEBUG_PAL) {
		PrintDebugPalCaution();
	}

	switch (tvInBootrom) {
	case VI_MPAL:
	case VI_NTSC:
	case VI_GCA:
		if (tvInGame == VI_NTSC || tvInGame == VI_MPAL || tvInGame == VI_GCA) {
			break;
		}
		goto panic;
	case VI_PAL:
	case VI_EURGB60:
		if (tvInGame == VI_PAL || tvInGame == VI_EURGB60) {
			break;
		}
	default:
	panic:
		OSErrorLine(1908, "VIConfigure(): Tried to change mode from (%d) to (%d), which is forbidden\n", tvInBootrom, tvInGame);
	}
	// if (((tvInBootrom != VI_PAL && tvInBootrom != VI_EURGB60) && (tvInGame == VI_PAL || tvInGame == VI_EURGB60))
	//     || ((tvInBootrom == VI_PAL || tvInBootrom == VI_EURGB60) && (tvInGame != VI_PAL && tvInGame != VI_EURGB60))) {

	// 	OSErrorLine(1908, "VIConfigure(): Tried to change mode from (%d) to (%d), which is forbidden\n", tvInBootrom, tvInGame);
	// }

	if ((tvInGame == VI_NTSC) || (tvInGame == VI_MPAL)) {
		HorVer.tv = tvInBootrom;
	} else {
		HorVer.tv = tvInGame;
	}

	HorVer.dispPosX  = obj->viXOrigin;
	HorVer.dispPosY  = (u16)((HorVer.nonInter == VI_NON_INTERLACE) ? (u16)(obj->viYOrigin * 2) : obj->viYOrigin);
	HorVer.dispSizeX = obj->viWidth;
	HorVer.fbSizeX   = obj->fbWidth;
	HorVer.fbSizeY   = obj->xfbHeight;
	HorVer.xfbMode   = obj->xFBmode;
	HorVer.panSizeX  = HorVer.fbSizeX;
	HorVer.panSizeY  = HorVer.fbSizeY;
	HorVer.panPosX   = 0;
	HorVer.panPosY   = 0;

	HorVer.dispSizeY = (u16)((HorVer.nonInter == VI_PROGRESSIVE) ? HorVer.panSizeY
	                         : (HorVer.nonInter == VI_3D)        ? HorVer.panSizeY
	                         : (HorVer.xfbMode == VI_XFBMODE_SF) ? (u16)(2 * HorVer.panSizeY)
	                                                             : HorVer.panSizeY);

	HorVer.is3D = (HorVer.nonInter == VI_3D) ? TRUE : FALSE;

	tm            = getTiming((VITVMode)VI_TVMODE(HorVer.tv, HorVer.nonInter));
	HorVer.timing = tm;

	AdjustPosition(tm->acv);
	if (encoderType == 0) {
		HorVer.tv = VI_DEBUG;
	}
	setInterruptRegs(tm);

	regDspCfg = regs[VI_DISP_CONFIG];

	if ((HorVer.nonInter == VI_PROGRESSIVE) || (HorVer.nonInter == VI_3D)) {
		regDspCfg = (((u32)(regDspCfg)) & ~0x00000004) | (((u32)(1)) << 2);
	} else {
		regDspCfg = (((u32)(regDspCfg)) & ~0x00000004) | (((u32)(HorVer.nonInter & 1)) << 2);
	}

	regDspCfg = (((u32)(regDspCfg)) & ~0x00000008) | (((u32)(HorVer.is3D)) << 3);

	if ((HorVer.tv == VI_DEBUG_PAL) || (HorVer.tv == VI_EURGB60) || (HorVer.tv == VI_GCA)) {
		regDspCfg = (((u32)(regDspCfg)) & ~0x00000300) | (((u32)(0)) << 8);
	} else {
		regDspCfg = (((u32)(regDspCfg)) & ~0x00000300) | (((u32)(HorVer.tv)) << 8);
	}

	regs[VI_DISP_CONFIG] = (u16)regDspCfg;
	changed |= VI_BITMASK(0x01);

	regDspCfg = regs[VI_CLOCK_SEL];
	if (obj->viTVmode == VI_TVMODE_NTSC_PROG || obj->viTVmode == VI_TVMODE_NTSC_3D || obj->viTVmode == VI_TVMODE_GCA_PROG) {
		regDspCfg = (u32)(regDspCfg & ~0x1) | 1;
	} else {
		regDspCfg = (u32)(regDspCfg & ~0x1);
	}

	regs[VI_CLOCK_SEL] = (u16)regDspCfg;

	changed |= 0x200;

	setScalingRegs(HorVer.panSizeX, HorVer.dispSizeX, HorVer.is3D);
	setHorizontalRegs(tm, HorVer.adjDispPosX, HorVer.dispSizeX);
	setBBIntervalRegs(tm);
	setPicConfig(HorVer.fbSizeX, HorVer.xfbMode, HorVer.panPosX, HorVer.panSizeX, &HorVer.wordPerLine, &HorVer.std, &HorVer.wpl,
	             &HorVer.xof);

	if (FBSet) {
		setFbbRegs(&HorVer, &HorVer.tfbb, &HorVer.bfbb, &HorVer.rtfbb, &HorVer.rbfbb);
	}

	setVerticalRegs(HorVer.adjDispPosY, HorVer.adjDispSizeY, tm->equ, tm->acv, tm->prbOdd, tm->prbEven, tm->psbOdd, tm->psbEven,
	                HorVer.isBlack);
	OSRestoreInterrupts(enabled);
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x4(r1)
	  lis       r4, 0x804F
	  stwu      r1, -0x78(r1)
	  stmw      r14, 0x30(r1)
	  addi      r31, r3, 0
	  addi      r15, r5, 0x72B0
	  addi      r29, r4, 0x59A8
	  bl        0x1D518
	  lwz       r4, 0x0(r31)
	  addi      r28, r29, 0x114
	  lwz       r0, 0x114(r29)
	  addi      r14, r3, 0
	  rlwinm    r4,r4,0,30,31
	  cmplw     r0, r4
	  beq-      .loc_0x50
	  li        r0, 0x1
	  stw       r0, -0x72E0(r13)
	  stw       r4, 0x0(r28)

	.loc_0x50:
	  lwz       r0, 0x0(r31)
	  lis       r3, 0x8000
	  lwz       r16, 0xCC(r3)
	  rlwinm    r0,r0,30,2,31
	  cmplwi    r0, 0x4
	  mr        r17, r0
	  bne-      .loc_0xD4
	  lwz       r0, -0x72AC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  li        r0, 0x1
	  crclr     6, 0x6
	  stw       r0, -0x72AC(r13)
	  addi      r3, r15, 0x260
	  bl        0x1BF68
	  addi      r3, r15, 0x28C
	  crclr     6, 0x6
	  bl        0x1BF5C
	  addi      r3, r15, 0x2B8
	  crclr     6, 0x6
	  bl        0x1BF50
	  addi      r3, r15, 0x2E4
	  crclr     6, 0x6
	  bl        0x1BF44
	  addi      r3, r15, 0x310
	  crclr     6, 0x6
	  bl        0x1BF38
	  addi      r3, r15, 0x33C
	  crclr     6, 0x6
	  bl        0x1BF2C
	  addi      r3, r15, 0x260
	  crclr     6, 0x6
	  bl        0x1BF20

	.loc_0xD4:
	  cmpwi     r16, 0x2
	  beq-      .loc_0x108
	  bge-      .loc_0xF0
	  cmpwi     r16, 0
	  beq-      .loc_0x108
	  bge-      .loc_0x124
	  b         .loc_0x134

	.loc_0xF0:
	  cmpwi     r16, 0x6
	  beq-      .loc_0x108
	  bge-      .loc_0x134
	  cmpwi     r16, 0x5
	  bge-      .loc_0x124
	  b         .loc_0x134

	.loc_0x108:
	  cmplwi    r17, 0
	  beq-      .loc_0x150
	  cmplwi    r17, 0x2
	  beq-      .loc_0x150
	  cmplwi    r17, 0x6
	  bne-      .loc_0x134
	  b         .loc_0x150

	.loc_0x124:
	  cmplwi    r17, 0x1
	  beq-      .loc_0x150
	  cmplwi    r17, 0x5
	  beq-      .loc_0x150

	.loc_0x134:
	  addi      r6, r16, 0
	  crclr     6, 0x6
	  addi      r7, r17, 0
	  addi      r5, r15, 0x368
	  subi      r3, r13, 0x7D94
	  li        r4, 0x774
	  bl        0x1BF24

	.loc_0x150:
	  cmplwi    r17, 0
	  beq-      .loc_0x160
	  cmplwi    r17, 0x2
	  bne-      .loc_0x168

	.loc_0x160:
	  stw       r16, 0x118(r29)
	  b         .loc_0x16C

	.loc_0x168:
	  stw       r17, 0x118(r29)

	.loc_0x16C:
	  lhz       r0, 0xA(r31)
	  sth       r0, 0xF0(r29)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x18C
	  lhz       r0, 0xC(r31)
	  rlwinm    r0,r0,1,16,30
	  b         .loc_0x190

	.loc_0x18C:
	  lhz       r0, 0xC(r31)

	.loc_0x190:
	  sth       r0, 0xF2(r29)
	  addi      r23, r29, 0xF2
	  addi      r24, r29, 0xF4
	  lhz       r0, 0xE(r31)
	  addi      r27, r29, 0x102
	  addi      r25, r29, 0x110
	  sth       r0, 0xF4(r29)
	  li        r0, 0
	  addi      r16, r29, 0x10A
	  lhz       r3, 0x4(r31)
	  addi      r26, r29, 0x10C
	  addi      r15, r29, 0x106
	  sth       r3, 0x102(r29)
	  addi      r17, r29, 0x108
	  lhz       r3, 0x8(r31)
	  sth       r3, 0x104(r29)
	  lwz       r3, 0x14(r31)
	  stw       r3, 0x110(r29)
	  lhz       r3, 0x102(r29)
	  sth       r3, 0x10A(r29)
	  lhz       r3, 0x104(r29)
	  sth       r3, 0x10C(r29)
	  sth       r0, 0x106(r29)
	  sth       r0, 0x108(r29)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x204
	  lhz       r0, 0x0(r26)
	  b         .loc_0x230

	.loc_0x204:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x214
	  lhz       r0, 0x0(r26)
	  b         .loc_0x230

	.loc_0x214:
	  lwz       r0, 0x0(r25)
	  cmpwi     r0, 0
	  bne-      .loc_0x22C
	  lhz       r0, 0x0(r26)
	  rlwinm    r0,r0,1,16,30
	  b         .loc_0x230

	.loc_0x22C:
	  lhz       r0, 0x0(r26)

	.loc_0x230:
	  addi      r22, r29, 0xF6
	  sth       r0, 0xF6(r29)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x24C
	  li        r0, 0x1
	  b         .loc_0x250

	.loc_0x24C:
	  li        r0, 0

	.loc_0x250:
	  addi      r18, r29, 0x134
	  stw       r0, 0x134(r29)
	  addi      r21, r29, 0x118
	  lwz       r3, 0x118(r29)
	  lwz       r0, 0x0(r28)
	  rlwinm    r3,r3,2,0,29
	  add       r3, r3, r0
	  bl        -0xE84
	  mr        r30, r3
	  stw       r30, 0x144(r29)
	  lhz       r0, 0x0(r24)
	  lha       r4, 0xF0(r29)
	  lha       r3, -0x72E4(r13)
	  subfic    r5, r0, 0x2D0
	  lhz       r0, 0x2(r30)
	  add       r3, r4, r3
	  cmpw      r3, r5
	  ble-      .loc_0x29C
	  b         .loc_0x2AC

	.loc_0x29C:
	  cmpwi     r3, 0
	  bge-      .loc_0x2A8
	  li        r3, 0

	.loc_0x2A8:
	  mr        r5, r3

	.loc_0x2AC:
	  sth       r5, 0xF8(r29)
	  addi      r3, r29, 0xF8
	  lwz       r4, 0x0(r25)
	  cmpwi     r4, 0
	  bne-      .loc_0x2C8
	  li        r4, 0x2
	  b         .loc_0x2CC

	.loc_0x2C8:
	  li        r4, 0x1

	.loc_0x2CC:
	  lhz       r5, 0x0(r23)
	  lha       r6, -0x72E2(r13)
	  extsh     r7, r5
	  rlwinm    r5,r5,0,31,31
	  add       r7, r7, r6
	  cmpw      r7, r5
	  ble-      .loc_0x2EC
	  b         .loc_0x2F0

	.loc_0x2EC:
	  mr        r7, r5

	.loc_0x2F0:
	  sth       r7, 0xFA(r29)
	  extsh     r0, r0
	  rlwinm    r0,r0,1,0,30
	  lhz       r8, 0x0(r22)
	  sub       r0, r0, r5
	  lha       r7, 0x0(r23)
	  addi      r19, r29, 0xFA
	  extsh     r9, r8
	  add       r10, r9, r6
	  add       r10, r7, r10
	  sub.      r9, r10, r0
	  ble-      .loc_0x328
	  sub       r9, r10, r0
	  b         .loc_0x32C

	.loc_0x328:
	  li        r9, 0

	.loc_0x32C:
	  add       r10, r7, r6
	  sub.      r7, r10, r5
	  bge-      .loc_0x340
	  sub       r7, r10, r5
	  b         .loc_0x344

	.loc_0x340:
	  li        r7, 0

	.loc_0x344:
	  add       r7, r8, r7
	  sub       r7, r7, r9
	  addi      r20, r29, 0xFC
	  sth       r7, 0xFC(r29)
	  lha       r7, 0x0(r23)
	  add       r8, r7, r6
	  sub.      r7, r8, r5
	  bge-      .loc_0x36C
	  sub       r7, r8, r5
	  b         .loc_0x370

	.loc_0x36C:
	  li        r7, 0

	.loc_0x370:
	  divw      r8, r7, r4
	  lhz       r7, 0x0(r17)
	  sub       r7, r7, r8
	  sth       r7, 0xFE(r29)
	  lha       r7, 0x0(r22)
	  lha       r9, 0x0(r23)
	  add       r8, r7, r6
	  add       r8, r9, r8
	  sub.      r7, r8, r0
	  ble-      .loc_0x3A0
	  sub       r7, r8, r0
	  b         .loc_0x3A4

	.loc_0x3A0:
	  li        r7, 0

	.loc_0x3A4:
	  add       r6, r9, r6
	  sub.      r0, r6, r5
	  bge-      .loc_0x3B8
	  sub       r0, r6, r5
	  b         .loc_0x3BC

	.loc_0x3B8:
	  li        r0, 0

	.loc_0x3BC:
	  divw      r0, r0, r4
	  lhz       r5, 0x0(r26)
	  divw      r4, r7, r4
	  add       r0, r5, r0
	  sub       r0, r0, r4
	  sth       r0, 0x100(r29)
	  lwz       r0, -0x72E8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3E8
	  li        r0, 0x3
	  stw       r0, 0x0(r21)

	.loc_0x3E8:
	  lhz       r5, 0x18(r30)
	  srawi     r4, r5, 0x1
	  addze     r4, r4
	  srawi     r0, r5, 0x1
	  addze     r0, r0
	  rlwinm    r0,r0,1,0,30
	  subc      r0, r5, r0
	  rlwinm.   r0,r0,0,16,31
	  rlwinm    r4,r4,0,16,31
	  beq-      .loc_0x418
	  lhz       r5, 0x1A(r30)
	  b         .loc_0x41C

	.loc_0x418:
	  li        r5, 0

	.loc_0x41C:
	  addi      r0, r5, 0x1
	  sth       r0, 0x32(r29)
	  addi      r0, r4, 0x1
	  ori       r0, r0, 0x1000
	  lwz       r5, -0x72D8(r13)
	  addi      r4, r29, 0x2
	  lwz       r6, -0x72D4(r13)
	  ori       r5, r5, 0x40
	  stw       r6, -0x72D4(r13)
	  stw       r5, -0x72D8(r13)
	  sth       r0, 0x30(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r5, -0x72D4(r13)
	  ori       r0, r0, 0x80
	  stw       r5, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r28)
	  lhz       r5, 0x2(r29)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x474
	  cmplwi    r0, 0x3
	  bne-      .loc_0x480

	.loc_0x474:
	  rlwinm    r0,r5,0,30,28
	  ori       r5, r0, 0x4
	  b         .loc_0x488

	.loc_0x480:
	  rlwinm    r5,r5,0,30,28
	  rlwimi    r5,r0,2,29,29

	.loc_0x488:
	  lwz       r6, 0x0(r21)
	  rlwinm    r5,r5,0,29,27
	  lwz       r7, 0x0(r18)
	  cmplwi    r6, 0x4
	  rlwinm    r0,r7,3,0,28
	  or        r5, r5, r0
	  beq-      .loc_0x4B0
	  subi      r0, r6, 0x5
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x4B8

	.loc_0x4B0:
	  rlwinm    r0,r5,0,24,21
	  b         .loc_0x4C4

	.loc_0x4B8:
	  rlwinm    r5,r5,0,24,21
	  rlwinm    r0,r6,8,0,23
	  or        r0, r5, r0

	.loc_0x4C4:
	  sth       r0, 0x0(r4)
	  lis       r0, 0x4000
	  addi      r6, r29, 0x6C
	  lwz       r4, -0x72D8(r13)
	  lwz       r5, -0x72D4(r13)
	  or        r0, r4, r0
	  stw       r5, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lwz       r0, 0x0(r31)
	  lhz       r4, 0x6C(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x504
	  cmpwi     r0, 0x3
	  beq-      .loc_0x504
	  cmpwi     r0, 0x1A
	  bne-      .loc_0x510

	.loc_0x504:
	  rlwinm    r0,r4,0,0,30
	  ori       r0, r0, 0x1
	  b         .loc_0x514

	.loc_0x510:
	  rlwinm    r0,r4,0,0,30

	.loc_0x514:
	  sth       r0, 0x0(r6)
	  cmpwi     r7, 0
	  lwz       r4, -0x72D8(r13)
	  lwz       r0, -0x72D4(r13)
	  ori       r0, r0, 0x200
	  stw       r0, -0x72D4(r13)
	  stw       r4, -0x72D8(r13)
	  lhz       r4, 0x0(r24)
	  lhz       r5, 0x0(r16)
	  beq-      .loc_0x544
	  rlwinm    r0,r5,1,0,30
	  b         .loc_0x548

	.loc_0x544:
	  mr        r0, r5

	.loc_0x548:
	  rlwinm    r8,r0,0,16,31
	  cmplw     r8, r4
	  bge-      .loc_0x5A0
	  rlwinm    r6,r8,8,0,23
	  subi      r0, r6, 0x1
	  add       r0, r4, r0
	  divwu     r0, r0, r4
	  ori       r0, r0, 0x1000
	  sth       r0, 0x4A(r29)
	  lis       r0, 0x400
	  lwz       r6, -0x72D8(r13)
	  lwz       r7, -0x72D4(r13)
	  or        r0, r7, r0
	  stw       r0, -0x72D4(r13)
	  stw       r6, -0x72D8(r13)
	  sth       r8, 0x70(r29)
	  lwz       r6, -0x72D8(r13)
	  lwz       r0, -0x72D4(r13)
	  ori       r0, r0, 0x80
	  stw       r0, -0x72D4(r13)
	  stw       r6, -0x72D8(r13)
	  b         .loc_0x5C0

	.loc_0x5A0:
	  li        r0, 0x100
	  sth       r0, 0x4A(r29)
	  lis       r0, 0x400
	  lwz       r6, -0x72D8(r13)
	  lwz       r7, -0x72D4(r13)
	  or        r0, r7, r0
	  stw       r0, -0x72D4(r13)
	  stw       r6, -0x72D8(r13)

	.loc_0x5C0:
	  lhz       r0, 0x0(r3)
	  subfic    r12, r4, 0x2D0
	  lhz       r6, 0x1A(r30)
	  lis       r3, 0x1000
	  lis       r8, 0x2000
	  sth       r6, 0x6(r29)
	  lis       r9, 0x400
	  lis       r7, 0x800
	  lwz       r10, -0x72D8(r13)
	  lis       r6, 0x10
	  lis       r4, 0x20
	  lwz       r11, -0x72D4(r13)
	  or        r10, r10, r3
	  lis       r3, 0x4
	  stw       r11, -0x72D4(r13)
	  stw       r10, -0x72D8(r13)
	  lbz       r10, 0x1D(r30)
	  lbz       r11, 0x1E(r30)
	  rlwimi    r11,r10,8,16,23
	  sth       r11, 0x4(r29)
	  lwz       r10, -0x72D8(r13)
	  lwz       r11, -0x72D4(r13)
	  or        r8, r10, r8
	  stw       r11, -0x72D4(r13)
	  stw       r8, -0x72D8(r13)
	  lbz       r8, 0x1F(r30)
	  lbz       r10, 0x1C(r30)
	  add       r16, r8, r0
	  lhz       r11, 0x20(r30)
	  subi      r16, r16, 0x28
	  rlwinm    r8,r16,7,16,24
	  or        r8, r10, r8
	  sth       r8, 0xA(r29)
	  add       r8, r11, r0
	  addi      r0, r8, 0x28
	  lwz       r10, -0x72D8(r13)
	  sub       r0, r0, r12
	  rlwinm    r8,r16,23,9,31
	  lwz       r11, -0x72D4(r13)
	  rlwinm    r0,r0,1,0,30
	  or        r9, r10, r9
	  stw       r11, -0x72D4(r13)
	  or        r0, r8, r0
	  stw       r9, -0x72D8(r13)
	  sth       r0, 0x8(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r8, -0x72D4(r13)
	  or        r0, r0, r7
	  stw       r8, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x10(r30)
	  lbz       r7, 0xC(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r7, r0
	  sth       r0, 0x16(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r7, -0x72D4(r13)
	  or        r0, r0, r6
	  stw       r7, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x14(r30)
	  lbz       r6, 0xE(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r6, r0
	  sth       r0, 0x14(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r6, -0x72D4(r13)
	  or        r0, r0, r4
	  stw       r6, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x12(r30)
	  lbz       r4, 0xD(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r4, r0
	  sth       r0, 0x1A(r29)
	  lwz       r0, -0x72D8(r13)
	  lwz       r4, -0x72D4(r13)
	  or        r0, r0, r3
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r0, 0x16(r30)
	  lbz       r3, 0xF(r30)
	  rlwinm    r0,r0,5,0,26
	  or        r0, r3, r0
	  sth       r0, 0x18(r29)
	  lwz       r3, -0x72D8(r13)
	  lis       r0, 0x8
	  addi      r6, r29, 0x11C
	  lwz       r4, -0x72D4(r13)
	  or        r0, r3, r0
	  stw       r4, -0x72D4(r13)
	  stw       r0, -0x72D8(r13)
	  lhz       r3, 0x0(r27)
	  lwz       r4, 0x0(r25)
	  addi      r0, r3, 0xF
	  lhz       r3, 0x0(r15)
	  srawi     r0, r0, 0x4
	  addze     r0, r0
	  cmpwi     r4, 0
	  stb       r0, 0x11C(r29)
	  bne-      .loc_0x75C
	  lbz       r4, 0x0(r6)
	  b         .loc_0x764

	.loc_0x75C:
	  lbz       r0, 0x0(r6)
	  rlwinm    r4,r0,1,24,30

	.loc_0x764:
	  srawi     r0, r3, 0x4
	  stb       r4, 0x11D(r29)
	  addze     r0, r0
	  rlwinm    r0,r0,4,0,27
	  subc      r0, r3, r0
	  stb       r0, 0x12C(r29)
	  addi      r0, r5, 0xF
	  lis       r3, 0x800
	  lbz       r4, 0x12C(r29)
	  add       r0, r4, r0
	  srawi     r0, r0, 0x4
	  addze     r0, r0
	  stb       r0, 0x11E(r29)
	  lbz       r0, 0x11E(r29)
	  lbz       r4, 0x11D(r29)
	  rlwimi    r4,r0,8,16,23
	  sth       r4, 0x48(r29)
	  lwz       r4, -0x72D8(r13)
	  lwz       r0, -0x72B0(r13)
	  lwz       r5, -0x72D4(r13)
	  cmplwi    r0, 0
	  or        r0, r5, r3
	  stw       r0, -0x72D4(r13)
	  stw       r4, -0x72D8(r13)
	  beq-      .loc_0x7E0
	  addi      r3, r29, 0xF0
	  addi      r4, r29, 0x124
	  addi      r5, r29, 0x128
	  addi      r6, r29, 0x13C
	  addi      r7, r29, 0x140
	  bl        -0xC50

	.loc_0x7E0:
	  lwz       r0, 0x130(r29)
	  stw       r0, 0x8(r1)
	  lhz       r3, 0x0(r19)
	  lhz       r4, 0x0(r20)
	  lbz       r5, 0x0(r30)
	  lhz       r6, 0x2(r30)
	  lhz       r7, 0x4(r30)
	  lhz       r8, 0x6(r30)
	  lhz       r9, 0x8(r30)
	  lhz       r10, 0xA(r30)
	  bl        -0x9A8
	  mr        r3, r14
	  bl        0x1CD54
	  lmw       r14, 0x30(r1)
	  lwz       r0, 0x7C(r1)
	  addi      r1, r1, 0x78
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000394
 */
void VIConfigurePan(u16 panPosX, u16 panPosY, u16 panSizeX, u16 panSizeY)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D1F24
 * Size:	000130
 */
void VIFlush(void)
{
	BOOL enabled;
	s32 regIndex;
	u32 val; // for stack.

	enabled = OSDisableInterrupts();
	shdwChangeMode |= changeMode;
	changeMode = 0;
	shdwChanged |= changed;

	while (changed) {
		regIndex           = cntlzd(changed);
		shdwRegs[regIndex] = regs[regIndex];
		changed &= ~VI_BITMASK(regIndex);
	}

	flushFlag   = 1;
	NextBufAddr = HorVer.bufAddr;
	OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	800D2054
 * Size:	00006C
 */
void VISetNextFrameBuffer(void* fb)
{
	BOOL enabled   = OSDisableInterrupts();
	HorVer.bufAddr = (u32)fb;
	FBSet          = 1;
	setFbbRegs(&HorVer, &HorVer.tfbb, &HorVer.bfbb, &HorVer.rtfbb, &HorVer.rbfbb);
	OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void* VIGetNextFrameBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D20C0
 * Size:	000008
 */
void* VIGetCurrentFrameBuffer(void) { return (void*)CurrBufAddr; }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void VISetNextRightFrameBuffer(void* fb)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D20C8
 * Size:	00007C
 */
void VISetBlack(BOOL isBlack)
{
	int interrupt;
	VITimingInfo* tm;

	interrupt      = OSDisableInterrupts();
	HorVer.isBlack = isBlack;
	tm             = HorVer.timing;
	setVerticalRegs(HorVer.adjDispPosY, HorVer.dispSizeY, tm->equ, tm->acv, tm->prbOdd, tm->prbEven, tm->psbOdd, tm->psbEven,
	                HorVer.isBlack);
	OSRestoreInterrupts(interrupt);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void VISet3D(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D2144
 * Size:	000008
 */
u32 VIGetRetraceCount(void) { return retraceCount; }

/*
 * --INFO--
 * Address:	800D214C
 * Size:	00003C
 */
static void GetCurrentDisplayPosition(u32* hct, u32* vct)
{
	u32 hcount, vcount0, vcount;
	vcount = __VIRegs[VI_VERT_COUNT] & 0x7FF;

	do {
		vcount0 = vcount;
		hcount  = __VIRegs[VI_HORIZ_COUNT] & 0x7FF;
		vcount  = __VIRegs[VI_VERT_COUNT] & 0x7FF;
	} while (vcount0 != vcount);

	*hct = hcount;
	*vct = vcount;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
static u32 getCurrentHalfLine(void)
{
	u32 hcount, vcount;
	GetCurrentDisplayPosition(&hcount, &vcount);

	return ((vcount - 1) << 1) + ((hcount - 1) / CurrTiming->hlw);
}

/*
 * --INFO--
 * Address:	800D2188
 * Size:	000068
 */
static u32 getCurrentFieldEvenOdd() { return (getCurrentHalfLine() < CurrTiming->numHalfLines) ? 1 : 0; }

/*
 * --INFO--
 * Address:	800D21F0
 * Size:	00009C
 */
u32 VIGetNextField(void)
{
	u32 nextField;
	int interrupt;

	interrupt = OSDisableInterrupts();
	nextField = getCurrentFieldEvenOdd() ^ 1;
	OSRestoreInterrupts(interrupt);
	return nextField ^ (HorVer.adjDispPosY & 1);
}

/*
 * --INFO--
 * Address:	800D228C
 * Size:	000098
 */
u32 VIGetCurrentLine(void)
{
	u32 line;
	VITimingInfo* tm;
	int interrupt;

	tm        = CurrTiming;
	interrupt = OSDisableInterrupts();
	line      = getCurrentHalfLine();
	OSRestoreInterrupts(interrupt);

	if (line >= tm->numHalfLines) {
		line -= tm->numHalfLines;
	}

	return (line >> 1);
}

/*
 * --INFO--
 * Address:	800D2324
 * Size:	000068
 */
u32 VIGetTvFormat(void)
{
	u32 fmt;
	int interrupt;

	interrupt = OSDisableInterrupts();

	switch (CurrTvMode) {
	case VI_NTSC:
	case VI_DEBUG:
	case VI_GCA:
		fmt = VI_NTSC;
		break;
	case VI_PAL:
	case VI_DEBUG_PAL:
		fmt = VI_PAL;
		break;
	case VI_EURGB60:
	case VI_MPAL:
		fmt = CurrTvMode;
		break;
	}

	OSRestoreInterrupts(interrupt);
	return fmt;
}

/*
 * --INFO--
 * Address:	800D238C
 * Size:	00003C
 */
u32 VIGetDTVStatus(void)
{
	u32 stat;
	int interrupt;

	interrupt = OSDisableInterrupts();
	stat      = (__VIRegs[VI_DTV_STAT] & 3);
	OSRestoreInterrupts(interrupt);
	return (stat & 1);
}

/*
 * --INFO--
 * Address:	800D23C8
 * Size:	00021C
 */
void __VIDisplayPositionToXY(u32 hcount, u32 vcount, s16* x, s16* y)
{
	u32 halfLine = ((vcount - 1) << 1) + ((hcount - 1) / CurrTiming->hlw);

	if (HorVer.nonInter == VI_INTERLACE) {
		if (halfLine < CurrTiming->numHalfLines) {
			if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbOdd) {
				*y = -1;
			} else if (halfLine >= CurrTiming->numHalfLines - CurrTiming->psbOdd) {
				*y = -1;
			} else {
				*y = (s16)((halfLine - CurrTiming->equ * 3 - CurrTiming->prbOdd) & ~1);
			}
		} else {
			halfLine -= CurrTiming->numHalfLines;

			if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbEven) {
				*y = -1;
			} else if (halfLine >= CurrTiming->numHalfLines - CurrTiming->psbEven) {
				*y = -1;
			} else {
				*y = (s16)(((halfLine - CurrTiming->equ * 3 - CurrTiming->prbEven) & ~1) + 1);
			}
		}
	} else if (HorVer.nonInter == VI_NON_INTERLACE) {
		if (halfLine >= CurrTiming->numHalfLines) {
			halfLine -= CurrTiming->numHalfLines;
		}

		if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbOdd) {
			*y = -1;
		} else if (halfLine >= CurrTiming->numHalfLines - CurrTiming->psbOdd) {
			*y = -1;
		} else {
			*y = (s16)((halfLine - CurrTiming->equ * 3 - CurrTiming->prbOdd) & ~1);
		}
	} else if (HorVer.nonInter == VI_PROGRESSIVE) {
		if (halfLine < CurrTiming->numHalfLines) {
			if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbOdd) {
				*y = -1;
			} else if (halfLine >= CurrTiming->numHalfLines - CurrTiming->psbOdd) {
				*y = -1;
			} else {
				*y = (s16)(halfLine - CurrTiming->equ * 3 - CurrTiming->prbOdd);
			}
		} else {
			halfLine -= CurrTiming->numHalfLines;

			if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbEven) {
				*y = -1;
			} else if (halfLine >= CurrTiming->numHalfLines - CurrTiming->psbEven) {
				*y = -1;
			} else
				*y = (s16)((halfLine - CurrTiming->equ * 3 - CurrTiming->prbEven) & ~1);
		}
	}

	*x = (s16)(hcount - 1);
}

/*
 * --INFO--
 * Address:	800D25E4
 * Size:	000060
 */
void __VIGetCurrentPosition(s16* x, s16* y)
{
	u32 h, v;
	GetCurrentDisplayPosition(&h, &v);
	__VIDisplayPositionToXY(h, v, x, y);
}
