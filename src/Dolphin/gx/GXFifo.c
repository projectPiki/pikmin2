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
		__GXWriteFifoLink(1);
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
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        0xB004
	  lwz       r0, -0x7124(r13)
	  addi      r31, r3, 0
	  stw       r30, -0x7128(r13)
	  cmplw     r30, r0
	  bne-      .loc_0x9C
	  lwz       r0, 0x0(r30)
	  li        r8, 0
	  lwz       r3, -0x7150(r13)
	  li        r6, 0
	  rlwinm    r0,r0,0,2,31
	  stw       r0, 0xC(r3)
	  li        r0, 0x1
	  li        r3, 0x1
	  lwz       r7, 0x4(r30)
	  li        r4, 0x1
	  lwz       r5, -0x7150(r13)
	  rlwinm    r7,r7,0,2,31
	  stw       r7, 0x10(r5)
	  lwz       r7, 0x18(r30)
	  lwz       r5, -0x7150(r13)
	  rlwimi    r8,r7,0,6,26
	  addi      r7, r8, 0
	  rlwimi    r7,r6,26,5,5
	  stw       r7, 0x14(r5)
	  stb       r0, -0x711C(r13)
	  bl        0x4A8
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x46C
	  li        r3, 0x1
	  bl        0x430
	  b         .loc_0x104

	.loc_0x9C:
	  lbz       r0, -0x711C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  li        r3, 0
	  bl        0x418
	  li        r0, 0
	  stb       r0, -0x711C(r13)

	.loc_0xB8:
	  li        r3, 0
	  li        r4, 0
	  bl        0x438
	  lwz       r4, 0x0(r30)
	  li        r5, 0
	  lwz       r3, -0x7150(r13)
	  li        r0, 0
	  rlwinm    r4,r4,0,2,31
	  stw       r4, 0xC(r3)
	  lwz       r4, 0x4(r30)
	  lwz       r3, -0x7150(r13)
	  rlwinm    r4,r4,0,2,31
	  stw       r4, 0x10(r3)
	  lwz       r4, 0x18(r30)
	  lwz       r3, -0x7150(r13)
	  rlwimi    r5,r4,0,6,26
	  addi      r4, r5, 0
	  rlwimi    r4,r0,26,5,5
	  stw       r4, 0x14(r3)

	.loc_0x104:
	  bl        -0xF790
	  mr        r3, r31
	  bl        0xAF38
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
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
	u32 i;
	GXFifoObjPriv* gpFifo;  // r31
	GXFifoObjPriv* cpuFifo; // r30
	void* tempPtr;          // r29
	GXFifoObjPriv tempObj;  // 0x14

	gpFifo = (GXFifoObjPriv*)GXGetGPFifo();
	if (!gpFifo) {
		return;
	}

	cpuFifo = (GXFifoObjPriv*)GXGetCPUFifo();
	tempPtr = gpFifo->base;

	for (i = 0; i < 16; i++) {
		// some copy going on here
	}

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
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0xA8(r1)
	  stw       r31, 0xA4(r1)
	  stw       r30, 0xA0(r1)
	  stw       r29, 0x9C(r1)
	  bl        0xF0
	  mr.       r31, r3
	  beq-      .loc_0xE4
	  bl        .loc_0x100
	  li        r0, 0x10
	  lwz       r29, 0x0(r31)
	  mtctr     r0
	  addi      r30, r3, 0
	  addi      r5, r1, 0xC
	  subi      r4, r31, 0x8

	.loc_0x40:
	  lwzu      r3, 0x8(r4)
	  lwz       r0, 0x4(r4)
	  stwu      r3, 0x8(r5)
	  stw       r0, 0x4(r5)
	  bdnz+     .loc_0x40
	  bl        0xAA70
	  stw       r29, 0x28(r1)
	  li        r0, 0
	  stw       r29, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r4, 0x30(r1)
	  cmpwi     r4, 0
	  bge-      .loc_0x80
	  lwz       r0, 0x1C(r1)
	  add       r0, r4, r0
	  stw       r0, 0x30(r1)

	.loc_0x80:
	  bl        0xAA6C
	  addi      r3, r1, 0x14
	  bl        -0x4B8
	  cmplw     r30, r31
	  bne-      .loc_0x9C
	  addi      r3, r1, 0x14
	  bl        -0x5F0

	.loc_0x9C:
	  bl        0xAA28
	  stw       r29, 0x14(r31)
	  li        r0, 0
	  stw       r29, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  lwz       r4, 0x1C(r31)
	  cmpwi     r4, 0
	  bge-      .loc_0xC8
	  lwz       r0, 0x8(r31)
	  add       r0, r4, r0
	  stw       r0, 0x1C(r31)

	.loc_0xC8:
	  bl        0xAA24
	  mr        r3, r31
	  bl        -0x500
	  cmplw     r30, r31
	  bne-      .loc_0xE4
	  mr        r3, r30
	  bl        -0x638

	.loc_0xE4:
	  lwz       r0, 0xAC(r1)
	  lwz       r31, 0xA4(r1)
	  lwz       r30, 0xA0(r1)
	  lwz       r29, 0x9C(r1)
	  addi      r1, r1, 0xA8
	  mtlr      r0
	  blr

	.loc_0x100:
	*/
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
