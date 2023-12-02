#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

static GXDrawSyncCallback TokenCB;
static GXDrawDoneCallback DrawDoneCB;
static GXBool DrawDone;
static OSThreadQueue FinishQueue;

/*
 * --INFO--
 * Address:	800E4FD8
 * Size:	000094
 */
void GXSetMisc(GXMiscToken token, u32 val)
{
	switch (token) {
	case GX_MT_NULL:
		break;

	case GX_MT_XF_FLUSH:
		gx->vNum      = val;
		gx->vNumNot   = !gx->vNum;
		gx->bpSentNot = GX_TRUE;

		if (gx->vNum) {
			gx->dirtyState |= GX_DIRTY_VCD;
		}
		break;

	case GX_MT_DL_SAVE_CONTEXT:
		gx->dlSaveContext = (val != 0);
		break;

	case GX_MT_ABORT_WAIT_COPYOUT:
		gx->abtWaitPECopy = (val != 0);
		break;
	}
}

/*
 * --INFO--
 * Address:	800E506C
 * Size:	00005C
 */
void GXFlush(void)
{
	if (gx->dirtyState) {
		__GXSetDirtyState();
	}
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	GX_WRITE_U32(0);
	PPCSync();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXResetWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
static void __GXAbortWait(u32 clocks)
{
	OSTime time0, time1;
	time0 = OSGetTime();

	do {
		time1 = OSGetTime();
	} while (time1 - time0 <= clocks / 4);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
static void __GXAbortWaitPECopyDone(void)
{
	u32 peCnt0, peCnt1;

	peCnt0 = GXReadMEMReg(0x28, 0x27);
	do {
		peCnt1 = peCnt0;
		__GXAbortWait(32);

		peCnt0 = GXReadMEMReg(0x28, 0x27);
	} while (peCnt0 != peCnt1);
}

/*
 * --INFO--
 * Address:	800E50C8
 * Size:	00016C
 */
void __GXAbort(void)
{
	if (gx->abtWaitPECopy && GXGetGPFifo()) {
		__GXAbortWaitPECopyDone();
	}

	__PIRegs[0x18 / 4] = 1;
	__GXAbortWait(200);
	__PIRegs[0x18 / 4] = 0;
	__GXAbortWait(20);
}

/*
 * --INFO--
 * Address:	800E5234
 * Size:	000170
 */
void GXAbortFrame(void)
{
	__GXAbort();
	__GXCleanGPFifo();
}

/*
 * --INFO--
 * Address:	800E53A4
 * Size:	0000B4
 */
void GXSetDrawSync(u16 token)
{
	u32 reg;
	BOOL interrupts;

	interrupts = OSDisableInterrupts();
	reg        = token | 0x48000000;
	GX_BP_LOAD_REG(reg);
	GX_SET_REG(reg, token, 16, 31);
	GX_SET_REG(reg, 0x47, 0, 7);
	GX_BP_LOAD_REG(reg);

	GXFlush();
	OSRestoreInterrupts(interrupts);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXReadDrawSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5458
 * Size:	000098
 */
void GXSetDrawDone(void)
{
	u32 reg;
	BOOL interrupts;

	interrupts = OSDisableInterrupts();
	reg        = 0x45000002;
	GX_BP_LOAD_REG(reg);

	GXFlush();
	DrawDone = GX_FALSE;
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800E54F0
 * Size:	00004C
 */
void GXWaitDrawDone(void)
{
	BOOL interrupts;
	interrupts = OSDisableInterrupts();
	while (!DrawDone) {
		OSSleepThread(&FinishQueue);
	}

	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800E553C
 * Size:	000080
 */
void GXDrawDone(void)
{
	GXSetDrawDone();
	GXWaitDrawDone();
}

/*
 * --INFO--
 * Address:	800E55BC
 * Size:	000024
 */
void GXPixModeSync(void)
{
	GX_BP_LOAD_REG(gx->peCtrl);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXTexModeSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E55E0
 * Size:	000014
 */
void GXPokeAlphaMode(GXCompare func, u8 threshold) { GX_SET_PE_REG(3, func << 8 | threshold); }

/*
 * --INFO--
 * Address:	800E55F4
 * Size:	000020
 */
void GXPokeAlphaRead(GXAlphaReadMode mode)
{
	u32 reg = 0;
	GX_SET_REG(reg, mode, 30, 31);
	GX_SET_REG(reg, 1, 29, 29);
	GX_SET_PE_REG(4, reg);
}

/*
 * --INFO--
 * Address:	800E5614
 * Size:	000018
 */
void GXPokeAlphaUpdate(GXBool doUpdate)
{
	u32 reg;
	reg = GX_GET_PE_REG(1);
	GX_SET_REG(reg, doUpdate, 27, 27);
	GX_SET_PE_REG(1, reg);
}

/*
 * --INFO--
 * Address:	800E562C
 * Size:	000064
 */
void GXPokeBlendMode(GXBlendMode mode, GXBlendFactor srcFactor, GXBlendFactor destFactor, GXLogicOp op)
{
	u32 reg;

	reg = GX_GET_PE_REG(1);
	GX_SET_REG(reg, (mode == GX_BM_BLEND) || (mode == GX_BM_SUBTRACT), 31, 31);
	GX_SET_REG(reg, (mode == GX_BM_SUBTRACT), 20, 20);
	GX_SET_REG(reg, (mode == GX_BM_LOGIC), 30, 30);
	GX_SET_REG(reg, op, 16, 19);
	GX_SET_REG(reg, srcFactor, 21, 23);
	GX_SET_REG(reg, destFactor, 24, 26);
	GX_SET_REG(reg, 0x41, 0, 7);
	GX_SET_PE_REG(1, reg);
}

/*
 * --INFO--
 * Address:	800E5690
 * Size:	000018
 */
void GXPokeColorUpdate(GXBool doUpdate)
{
	u32 reg;
	reg = GX_GET_PE_REG(1);
	GX_SET_REG(reg, doUpdate, 28, 28);
	GX_SET_PE_REG(1, reg);
}

/*
 * --INFO--
 * Address:	800E56A8
 * Size:	000024
 */
void GXPokeDstAlpha(GXBool doEnable, u8 alpha)
{
	u32 reg;
	reg = 0;
	GX_SET_REG(reg, alpha, 24, 31);
	GX_SET_REG(reg, doEnable, 23, 23);
	GX_SET_PE_REG(2, reg);
}

/*
 * --INFO--
 * Address:	800E56CC
 * Size:	000018
 */
void GXPokeDither(GXBool doDither)
{
	u32 reg;
	reg = GX_GET_PE_REG(1);
	GX_SET_REG(reg, doDither, 29, 29);
	GX_SET_PE_REG(1, reg);
}

/*
 * --INFO--
 * Address:	800E56E4
 * Size:	000020
 */
void GXPokeZMode(GXBool doCompare, GXCompare func, GXBool doUpdate)
{
	u32 reg;
	reg = 0;
	GX_SET_REG(reg, doCompare, 31, 31);
	GX_SET_REG(reg, func, 28, 30);
	GX_SET_REG(reg, doUpdate, 27, 27);
	GX_SET_PE_REG(0, reg);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXPeekARGB(u16 x, u16 y, u32* color)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXPokeARGB(u16 x, u16 y, u32 color)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXPeekZ(u16 x, u16 y, u32* z)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXPokeZ(u16 x, u16 y, u32 z)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5704
 * Size:	000044
 */
GXDrawSyncCallback GXSetDrawSyncCallback(GXDrawSyncCallback callback)
{
	GXDrawSyncCallback prevCB;
	BOOL interrupts;

	prevCB     = TokenCB;
	interrupts = OSDisableInterrupts();
	TokenCB    = callback;
	OSRestoreInterrupts(interrupts);
	return prevCB;
}

/*
 * --INFO--
 * Address:	800E5748
 * Size:	000088
 */
static void GXTokenInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	u16 token;
	OSContext exceptContext;
	u32 reg;

	token = GX_GET_PE_REG(7);

	if (TokenCB) {
		OSClearContext(&exceptContext);
		OSSetCurrentContext(&exceptContext);
		TokenCB(token);
		OSClearContext(&exceptContext);
		OSSetCurrentContext(context);
	}

	reg = GX_GET_PE_REG(5);
	GX_SET_REG(reg, 1, 29, 29);
	GX_SET_PE_REG(5, reg);
}

/*
 * --INFO--
 * Address:	800E57D0
 * Size:	000044
 */
GXDrawDoneCallback GXSetDrawDoneCallback(GXDrawDoneCallback callback)
{
	GXDrawDoneCallback prevCB;
	BOOL interrupts;

	prevCB     = DrawDoneCB;
	interrupts = OSDisableInterrupts();
	DrawDoneCB = callback;
	OSRestoreInterrupts(interrupts);
	return prevCB;
}

/*
 * --INFO--
 * Address:	800E5814
 * Size:	000080
 */
static void GXFinishInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSContext exceptContext;
	u32 reg;

	reg = GX_GET_PE_REG(5);
	GX_SET_REG(reg, 1, 28, 28);
	GX_SET_PE_REG(5, reg);

	DrawDone = GX_TRUE;

	if (DrawDoneCB) {
		OSClearContext(&exceptContext);
		OSSetCurrentContext(&exceptContext);
		DrawDoneCB();
		OSClearContext(&exceptContext);
		OSSetCurrentContext(context);
	}

	OSWakeupThread(&FinishQueue);
}

/*
 * --INFO--
 * Address:	800E5894
 * Size:	000074
 */
void __GXPEInit(void)
{
	u32 reg;

	__OSSetInterruptHandler(__OS_INTERRUPT_PI_PE_TOKEN, GXTokenInterruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_PI_PE_FINISH, GXFinishInterruptHandler);

	OSInitThreadQueue(&FinishQueue);

	__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_PE_TOKEN);
	__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_PE_FINISH);

	reg = GX_GET_PE_REG(5);
	GX_SET_REG(reg, 1, 29, 29);
	GX_SET_REG(reg, 1, 28, 28);
	GX_SET_REG(reg, 1, 31, 31);
	GX_SET_REG(reg, 1, 30, 30);
	GX_SET_PE_REG(5, reg);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
u32 GXCompressZ16(u32 z24, GXZFmt16 zFormat)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
u32 GXDecompressZ16(u32 z16, GXZFmt16 zFormat)
{
	// UNUSED FUNCTION
}
