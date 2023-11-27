#include "Dolphin/gx.h"
#include "Dolphin/os.h"

static GXFifoObj* CPUFifo;
static GXFifoObj* GPFifo;
static OSThread* __GXCurrentThread;
static u8 CPGPLinked;
static BOOL GXOverflowSuspendInProgress;
static GXBreakPtCallback BreakPointCB;
static u32 __GXOverflowCount;
static u32 __GXCurrentBP; // unused and removed

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXOverflowHandler()
{
	__GXOverflowCount += 1;
	__GXWriteFifoIntEnable(0, 1);
	__GXWriteFifoIntReset(1, 0);
	GXOverflowSuspendInProgress = TRUE;
	OSSuspendThread(__GXCurrentThread);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXUnderflowHandler()
{
	OSResumeThread(__GXCurrentThread);
	GXOverflowSuspendInProgress = FALSE;
	__GXWriteFifoIntReset(1, 1);
	__GXWriteFifoIntEnable(1, 0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void GXBreakPointHandler(OSContext* context)
{
	OSContext bpContext;

	FAST_FLAG_SET(gx->cpEnable, 0, 5, 1);
	GX_SET_CP_REG(1, gx->cpEnable);

	if (BreakPointCB) {
		OSClearContext(&bpContext);
		OSSetCurrentContext(&bpContext);
		BreakPointCB();
		OSClearContext(&bpContext);
		OSSetCurrentContext(context);
	}
}

/*
 * --INFO--
 * Address:	800E3A00
 * Size:	000134
 */
void GXCPInterruptHandler(s16 p1, OSContext* context)
{

	gx->cpStatus = GX_GET_CP_REG(0);

	if ((gx->cpEnable >> 3 & 1) && (gx->cpStatus >> 1 & 1)) {
		GXUnderflowHandler();
	}

	if ((gx->cpEnable >> 2 & 1) && (gx->cpStatus >> 0 & 1)) {
		GXOverflowHandler();
	}

	if ((gx->cpEnable >> 5 & 1) && (gx->cpStatus >> 4 & 1)) {
		GXBreakPointHandler(context);
	}
}

/*
 * --INFO--
 * Address:	800E3B34
 * Size:	00006C
 */
void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size)
{
	GXFifoObjPriv* pFifo = (GXFifoObjPriv*)fifo;
	pFifo->base          = base;
	pFifo->end           = (void*)((u32)base + size - 4);
	pFifo->size          = size;
	pFifo->rwDistance    = 0;
	GXInitFifoLimits(fifo, size - 0x4000, OSRoundDown32B(size / 2));
	GXInitFifoPtrs(fifo, base, base);
}

/*
 * --INFO--
 * Address:	800E3BA0
 * Size:	000070
 */
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr)
{
	GXFifoObjPriv* pFifo = (GXFifoObjPriv*)fifo;
	int interrupts       = OSDisableInterrupts();
	pFifo->readPtr       = readPtr;
	pFifo->writePtr      = writePtr;
	pFifo->rwDistance    = (u32)writePtr - (u32)readPtr;
	if (pFifo->rwDistance < 0) {
		pFifo->rwDistance += pFifo->size;
	}
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800E3C10
 * Size:	00000C
 */
void GXInitFifoLimits(GXFifoObj* fifo, u32 highWatermark, u32 lowWatermark)
{
	GXFifoObjPriv* pFifo = (GXFifoObjPriv*)fifo;
	pFifo->highWatermark = highWatermark;
	pFifo->lowWatermark  = lowWatermark;
}

/*
 * --INFO--
 * Address:	800E3C1C
 * Size:	000128
 */
void GXSetCPUFifo(GXFifoObj* fifo)
{
	BOOL interrupts;
	interrupts = OSDisableInterrupts();

	CPUFifo = fifo;

	if (fifo == GPFifo) {
		u32 reg;
		GX_SET_PI_REG(3, (u32)((GXFifoObjPriv*)fifo)->base & 0x3FFFFFFF);
		GX_SET_PI_REG(4, (u32)((GXFifoObjPriv*)fifo)->end & 0x3FFFFFFF);
		reg = 0;
		GX_BITFIELD_SET(reg, 6, 21, (u32)((GXFifoObjPriv*)fifo)->writePtr >> 5);
		GX_BITFIELD_SET(reg, 5, 1, 0);
		GX_SET_PI_REG(5, reg);

		CPGPLinked = GX_TRUE;

		__GXWriteFifoIntReset(1, 1);
		__GXWriteFifoIntEnable(1, 0);
		__GXFifoLink(1);
	} else {
		u32 reg;
		if (CPGPLinked) {
			__GXFifoLink(0);
			CPGPLinked = GX_FALSE;
		}
		__GXWriteFifoIntEnable(0, 0);

		GX_SET_PI_REG(3, (u32)((GXFifoObjPriv*)fifo)->base & 0x3FFFFFFF);
		GX_SET_PI_REG(4, (u32)((GXFifoObjPriv*)fifo)->end & 0x3FFFFFFF);
		reg = 0;
		GX_BITFIELD_SET(reg, 6, 21, (u32)((GXFifoObjPriv*)fifo)->writePtr >> 5);
		GX_BITFIELD_SET(reg, 5, 1, 0);
		GX_SET_PI_REG(5, reg);
	}

	PPCSync();

	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800E3D44
 * Size:	000178
 */
void GXSetGPFifo(GXFifoObj* fifo)
{
	GXFifoObjPriv* pFifo = (GXFifoObjPriv*)fifo;
	int interrupts       = OSDisableInterrupts();
	__GXFifoReadDisable();
	__GXWriteFifoIntEnable(0, 0);
	GPFifo = fifo;
	GX_SET_CP_REG(16, (u16)pFifo->base);
	GX_SET_CP_REG(18, (u16)pFifo->end);
	GX_SET_CP_REG(24, (u16)pFifo->rwDistance);
	GX_SET_CP_REG(26, (u16)pFifo->writePtr);
	GX_SET_CP_REG(28, (u16)pFifo->readPtr);
	GX_SET_CP_REG(20, (u16)pFifo->highWatermark);
	GX_SET_CP_REG(22, (u16)pFifo->lowWatermark);

	GX_SET_CP_REG(17, ((u32)pFifo->base & 0x3FFFFFFF) >> 16);
	GX_SET_CP_REG(19, ((u32)pFifo->end & 0x3FFFFFFF) >> 16);
	GX_SET_CP_REG(25, (pFifo->rwDistance) >> 16);
	GX_SET_CP_REG(27, ((u32)pFifo->writePtr & 0x3FFFFFFF) >> 16);
	GX_SET_CP_REG(29, ((u32)pFifo->readPtr & 0x3FFFFFFF) >> 16);
	GX_SET_CP_REG(21, (pFifo->highWatermark) >> 16);
	GX_SET_CP_REG(23, (pFifo->lowWatermark) >> 16);

	PPCSync();

	if (CPUFifo == GPFifo) {
		CPGPLinked = 1;
		__GXWriteFifoIntEnable(1, 0);
		__GXFifoLink(1);
	} else {
		CPGPLinked = 0;
		__GXWriteFifoIntEnable(0, 0);
		__GXFifoLink(0);
	}
	__GXWriteFifoIntReset(1, 1);
	__GXFifoReadEnable();
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800E3EBC
 * Size:	000034
 */
void GXSaveCPUFifo(GXFifoObj* fifo)
{
	GXFlush();
	__GXSaveCPUFifoAux(fifo);
}

/*
 * --INFO--
 * Address:	800E3EF0
 * Size:	0000C8
 */
void __GXSaveCPUFifoAux(GXFifoObj* fifo)
{
	GXFifoObjPriv* pFifo = (GXFifoObjPriv*)fifo;
	int interrupts       = OSDisableInterrupts();
	pFifo->base          = OSPhysicalToCached(GX_GET_PI_REG(3));
	pFifo->end           = OSPhysicalToCached(GX_GET_PI_REG(4));
	pFifo->writePtr      = OSPhysicalToCached(GX_GET_PI_REG(5) & ~0x4000000);
	if (CPGPLinked != 0) {
		u32 reg           = GX_GET_CP_REG(29) << 16;
		u32 reg2          = GX_GET_CP_REG(28) | reg;
		pFifo->readPtr    = (void*)(reg2 + -0x80000000);
		reg               = GX_GET_CP_REG(25) << 16;
		pFifo->rwDistance = (((u32)GX_GET_CP_REG(24) | reg));

	} else {
		pFifo->rwDistance = (u32)pFifo->writePtr - (u32)pFifo->readPtr;
		if (pFifo->rwDistance < 0) {
			pFifo->rwDistance += pFifo->size;
		}
	}
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GXSaveGPFifo(GXFifoObj* fifo)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E3FB8
 * Size:	000050
 */
void GXGetGPStatus(GXBool* overhi, GXBool* underlow, GXBool* readIdle, GXBool* cmdIdle, GXBool* brkpt)
{
	gx->cpStatus = GX_GET_CP_REG(0);
	*overhi      = gx->cpStatus & 1;
	*underlow    = (gx->cpStatus >> 1) & 1;
	*readIdle    = (gx->cpStatus >> 2) & 1;
	*cmdIdle     = (gx->cpStatus >> 3) & 1;
	*brkpt       = (gx->cpStatus >> 4) & 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void GXGetFifoStatus(GXFifoObj* obj, GXBool* isOverHi, GXBool* isUnderLo, u32* fifoCount, GXBool* isCpuWrite, GXBool* isGPRead,
                     GXBool* isFifoWrap)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void GXGetFifoPtrs(GXFifoObj* obj, void** readPtr, void** writePtr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void* GXGetFifoBase(GXFifoObj* obj)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u32 GXGetFifoSize(GXFifoObj* obj)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetFifoLimits(GXFifoObj* obj, u32* hi, u32* lo)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4008
 * Size:	000044
 */
GXBreakPtCallback GXSetBreakPtCallback(GXBreakPtCallback cb)
{
	GXBreakPtCallback oldCallback = BreakPointCB;
	int interrupts                = OSDisableInterrupts();
	BreakPointCB                  = cb;
	OSRestoreInterrupts(interrupts);
	return oldCallback;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void GXEnableBreakPt(void* breakPtr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GXDisableBreakPt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E404C
 * Size:	00004C
 */
void __GXFifoInit(void)
{
	__OSSetInterruptHandler(0x11, GXCPInterruptHandler);
	__OSUnmaskInterrupts(0x4000);
	__GXCurrentThread           = OSGetCurrentThread();
	GXOverflowSuspendInProgress = 0;
	CPUFifo                     = nullptr;
	GPFifo                      = nullptr;
}

/*
 * --INFO--
 * Address:	800E4098
 * Size:	000024
 */
void __GXFifoReadEnable(void)
{
	FAST_FLAG_SET(gx->cpEnable, 1, 0, 1);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/*
 * --INFO--
 * Address:	800E40BC
 * Size:	000024
 */
void __GXFifoReadDisable(void)
{
	FAST_FLAG_SET(gx->cpEnable, 0, 0, 1);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/*
 * --INFO--
 * Address:	800E40E0
 * Size:	000034
 */
void __GXFifoLink(u8 link)
{
	u32 b;
	if (link) {
		b = 1;
	} else {
		b = 0;
	}
	FAST_FLAG_SET(gx->cpEnable, b, 4, 1);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/*
 * --INFO--
 * Address:	800E4114
 * Size:	000030
 */
void __GXWriteFifoIntEnable(u32 p1, u32 p2)
{
	FAST_FLAG_SET(gx->cpEnable, p1, 2, 1);
	FAST_FLAG_SET(gx->cpEnable, (u8)p2, 3, 1);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/*
 * --INFO--
 * Address:	800E4144
 * Size:	000030
 */
void __GXWriteFifoIntReset(u32 p1, u32 p2)
{
	FAST_FLAG_SET(gx->cpClr, p1, 0, 1);
	FAST_FLAG_SET(gx->cpClr, (u8)p2, 1, 1);
	GX_SET_CP_REG(2, gx->cpClr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void __GXInsaneWatermark(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4174
 * Size:	000100
 */
void __GXCleanGPFifo(void)
{
	BOOL interrupts;
	GXFifoObjPriv tempObj;  // 0x14
	u32 i, j, k;            // stack alloc
	GXFifoObjPriv* gpFifo;  // r31
	GXFifoObjPriv* cpuFifo; // r30
	void* tempPtr;          // r29

	gpFifo = (GXFifoObjPriv*)GXGetGPFifo();
	if (!gpFifo) {
		return;
	}

	cpuFifo = (GXFifoObjPriv*)GXGetCPUFifo();
	tempPtr = gpFifo->base;

	tempObj = *gpFifo;

	interrupts = OSDisableInterrupts();

	tempObj.readPtr    = tempPtr;
	tempObj.writePtr   = tempPtr;
	tempObj.rwDistance = 0;
	if (tempObj.rwDistance < 0) {
		tempObj.rwDistance += tempObj.size;
	}

	OSRestoreInterrupts(interrupts);

	GXSetGPFifo((GXFifoObj*)&tempObj);

	if (cpuFifo == gpFifo) {
		GXSetCPUFifo((GXFifoObj*)&tempObj);
	}

	interrupts = OSDisableInterrupts();

	gpFifo->readPtr    = tempPtr;
	gpFifo->writePtr   = tempPtr;
	gpFifo->rwDistance = 0;

	if (gpFifo->rwDistance < 0) {
		gpFifo->rwDistance += gpFifo->size;
	}
	OSRestoreInterrupts(interrupts);

	GXSetGPFifo((GXFifoObj*)gpFifo);
	if (cpuFifo == gpFifo) {
		GXSetCPUFifo((GXFifoObj*)cpuFifo);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void GXSetCurrentGXThread(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetCurrentGXThread(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4274
 * Size:	000008
 */
GXFifoObj* GXGetCPUFifo(void) { return CPUFifo; }

/*
 * --INFO--
 * Address:	800E427C
 * Size:	000008
 */
GXFifoObj* GXGetGPFifo(void) { return GPFifo; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetOverflowCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXResetOverflowCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void GXRedirectWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A0
 */
void GXRestoreWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}
