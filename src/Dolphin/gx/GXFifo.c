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

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void GXOverflowHandler()
{
	__GXOverflowCount += 1;
	__GXWriteFifoIntEnable(0, 1);
	__GXWriteFifoIntReset(1, 0);
	GXOverflowSuspendInProgress = TRUE;
	OSSuspendThread(__GXCurrentThread);
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void GXUnderflowHandler()
{
	OSResumeThread(__GXCurrentThread);
	GXOverflowSuspendInProgress = FALSE;
	__GXWriteFifoIntReset(1, 1);
	__GXWriteFifoIntEnable(1, 0);
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void GXBreakPointHandler(OSContext* context)
{
	OSContext bpContext;
	GX_SET_REG(gx->cpEnable, 0, 26, 26);
	GX_SET_CP_REG(1, gx->cpEnable);

	if (BreakPointCB) {
		OSClearContext(&bpContext);
		OSSetCurrentContext(&bpContext);
		BreakPointCB();
		OSClearContext(&bpContext);
		OSSetCurrentContext(context);
	}
}

/**
 * @note Address: 0x800E3A00
 * @note Size: 0x134
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

/**
 * @note Address: 0x800E3B34
 * @note Size: 0x6C
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

/**
 * @note Address: 0x800E3BA0
 * @note Size: 0x70
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

/**
 * @note Address: 0x800E3C10
 * @note Size: 0xC
 */
void GXInitFifoLimits(GXFifoObj* fifo, u32 highWatermark, u32 lowWatermark)
{
	GXFifoObjPriv* pFifo = (GXFifoObjPriv*)fifo;
	pFifo->highWatermark = highWatermark;
	pFifo->lowWatermark  = lowWatermark;
}

/**
 * @note Address: 0x800E3C1C
 * @note Size: 0x128
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
		GX_SET_REG(reg, (u32)((GXFifoObjPriv*)fifo)->writePtr >> 5, 6, 26);
		GX_SET_REG(reg, 0, 5, 5);
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
		GX_SET_REG(reg, (u32)((GXFifoObjPriv*)fifo)->writePtr >> 5, 6, 26);
		GX_SET_REG(reg, 0, 5, 5);
		GX_SET_PI_REG(5, reg);
	}

	PPCSync();

	OSRestoreInterrupts(interrupts);
}

/**
 * @note Address: 0x800E3D44
 * @note Size: 0x178
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

/**
 * @note Address: 0x800E3EBC
 * @note Size: 0x34
 */
void GXSaveCPUFifo(GXFifoObj* fifo)
{
	GXFlush();
	__GXSaveCPUFifoAux(fifo);
}

/**
 * @note Address: 0x800E3EF0
 * @note Size: 0xC8
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

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void GXSaveGPFifo(GXFifoObj* fifo)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E3FB8
 * @note Size: 0x50
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

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void GXGetFifoStatus(GXFifoObj* obj, GXBool* isOverHi, GXBool* isUnderLo, u32* fifoCount, GXBool* isCpuWrite, GXBool* isGPRead,
                     GXBool* isFifoWrap)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void GXGetFifoPtrs(GXFifoObj* obj, void** readPtr, void** writePtr)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void* GXGetFifoBase(GXFifoObj* obj)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 GXGetFifoSize(GXFifoObj* obj)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void GXGetFifoLimits(GXFifoObj* obj, u32* hi, u32* lo)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E4008
 * @note Size: 0x44
 */
GXBreakPtCallback GXSetBreakPtCallback(GXBreakPtCallback cb)
{
	GXBreakPtCallback oldCallback = BreakPointCB;
	int interrupts                = OSDisableInterrupts();
	BreakPointCB                  = cb;
	OSRestoreInterrupts(interrupts);
	return oldCallback;
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void GXEnableBreakPt(void* breakPtr)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void GXDisableBreakPt(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E404C
 * @note Size: 0x4C
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

/**
 * @note Address: 0x800E4098
 * @note Size: 0x24
 */
void __GXFifoReadEnable(void)
{
	GX_SET_REG(gx->cpEnable, GX_TRUE, 31, 31);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/**
 * @note Address: 0x800E40BC
 * @note Size: 0x24
 */
void __GXFifoReadDisable(void)
{
	GX_SET_REG(gx->cpEnable, GX_FALSE, 31, 31);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/**
 * @note Address: 0x800E40E0
 * @note Size: 0x34
 */
void __GXFifoLink(u8 link)
{
	u32 b;
	if (link) {
		b = 1;
	} else {
		b = 0;
	}
	GX_SET_REG(gx->cpEnable, b, 27, 27);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/**
 * @note Address: 0x800E4114
 * @note Size: 0x30
 */
void __GXWriteFifoIntEnable(u32 p1, u32 p2)
{
	GX_SET_REG(gx->cpEnable, p1, 29, 29);
	GX_SET_REG(gx->cpEnable, (u8)p2, 28, 28);
	GX_SET_CP_REG(1, gx->cpEnable);
}

/**
 * @note Address: 0x800E4144
 * @note Size: 0x30
 */
void __GXWriteFifoIntReset(u32 p1, u32 p2)
{
	GX_SET_REG(gx->cpClr, p1, 31, 31);
	GX_SET_REG(gx->cpClr, (u8)p2, 30, 30);
	GX_SET_CP_REG(2, gx->cpClr);
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void __GXInsaneWatermark(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E4174
 * @note Size: 0x100
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

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void GXSetCurrentGXThread(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXGetCurrentGXThread(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E4274
 * @note Size: 0x8
 */
GXFifoObj* GXGetCPUFifo(void) { return CPUFifo; }

/**
 * @note Address: 0x800E427C
 * @note Size: 0x8
 */
GXFifoObj* GXGetGPFifo(void) { return GPFifo; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXGetOverflowCount(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXResetOverflowCount(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
void GXRedirectWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1A0
 */
void GXRestoreWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}
