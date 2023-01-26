#include "Dolphin/gx.h"
#include "Dolphin/os.h"

static GXFifoObj* CPUFifo;
static GXFifoObj* GPFifo;
static OSThread* __GXCurrentThread;
static u8 CPGPLinked;
static BOOL GXOverflowSuspendInProgress;
static GXBreakpointCallback* BreakPointCB;
static u32 __GXOverflowCount;
static u32 __GXCurrentBP; // unused and removed

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXOverflowHandler()
{
	// UNUSED FUNCTION
	// GXData* data = __GXData;
	// if ((data->controlRegister >> 2 & 1) && (data->_00C >> 0 & 1)) {
	__GXOverflowCount += 1;
	__GXWriteFifoIntEnable(0, 1);
	__GXWriteFifoIntReset(1, 0);
	GXOverflowSuspendInProgress = TRUE;
	OSSuspendThread(__GXCurrentThread);
	// }
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXUnderflowHandler()
{
	// UNUSED FUNCTION
	// GXData* data = __GXData;
	// if ((data->controlRegister >> 3 & 1) && (data->_00C >> 1 & 1)) {
	OSResumeThread(__GXCurrentThread);
	GXOverflowSuspendInProgress = FALSE;
	__GXWriteFifoIntReset(1, 1);
	__GXWriteFifoIntEnable(1, 0);
	// }
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void GXBreakPointHandler(OSContext* context)
{
	// UNUSED FUNCTION
	GXData* data = __GXData;
	OSContext bpContext;
	// if (IS_FLAG_SET(data->controlRegister, 5) && IS_FLAG_SET(data->_00C, 4)) {
	// if ((data->controlRegister & BP_ENABLE) && IS_FLAG_SET(data->_00C, 4)) {
	__GXData->controlRegister.bits.bpEnable = FALSE;
	// __cpReg->controlRegister = HW_REG(&__GXData->controlRegister, u16);
	__cpReg->controlRegister = __GXData->controlRegister.value;
	// __GXData->controlRegister &= ~BP_ENABLE;
	// __cpReg->controlRegister = __GXData->controlRegister;
	if (BreakPointCB) {
		OSClearContext(&bpContext);
		OSSetCurrentContext(&bpContext);
		BreakPointCB();
		OSClearContext(&bpContext);
		OSSetCurrentContext(context);
	}
	// }
}

/*
 * --INFO--
 * Address:	800E3A00
 * Size:	000134
 */
void GXCPInterruptHandler(unknown p1, OSContext* context)
{
	GXData* data;
	// GXData* data = __GXData;
	__GXData->_00C = __cpReg->statusRegister;
	// data->_00C = __cpReg->statusRegister;
	// data = __GXData;
	if (__GXData->controlRegister.bits.fifoUnderflowIRQEnable && (__GXData->_00C >> 1 & 1)) {
		// if ((__GXData->controlRegister >> 3 & 1) && (__GXData->_00C >> 1 & 1)) {
		// if ((data->controlRegister >> 3 & 1) && (data->_00C >> 1 & 1)) {
		GXUnderflowHandler();
	}
	if ((__GXData->controlRegister.bits.fifoOverflowIRQEnable) && (__GXData->_00C >> 0 & 1)) {
		// if ((__GXData->controlRegister >> 2 & 1) && (__GXData->_00C >> 0 & 1)) {
		// if ((data->controlRegister >> 2 & 1) && (data->_00C >> 0 & 1)) {
		GXOverflowHandler();
	}
	data = __GXData;
	// if ((__GXData->controlRegister & BP_ENABLE) && (__GXData->_00C >> 4 & 1)) {
	// if ((__GXData->controlRegister >> 5 & 1) && (__GXData->_00C >> 4 & 1)) {
	if ((data->controlRegister.bits.bpEnable) && (data->_00C >> 4 & 1)) {
		// if ((data->controlRegister >> 5 & 1) && (data->_00C >> 4 & 1)) {
		// if (IS_FLAG_SET(__GXData->controlRegister, 5) && IS_FLAG_SET(__GXData->_00C, 4)) {
		// if (IS_FLAG_SET(data->controlRegister, 5) && IS_FLAG_SET(data->_00C, 4)) {
		GXBreakPointHandler(context);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  mr        r31, r4
	  lwz       r5, -0x714C(r13)
	  lwz       r3, -0x6D70(r2)
	  lhz       r0, 0x0(r5)
	  stw       r0, 0xC(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,29,31,31
	  beq-      .loc_0x64
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,31,31,31
	  beq-      .loc_0x64
	  lwz       r3, -0x7120(r13)
	  bl        0xEAB4
	  li        r0, 0
	  stw       r0, -0x7118(r13)
	  li        r3, 0x1
	  li        r4, 0x1
	  bl        0x6F0
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x6B4

	.loc_0x64:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,30,31,31
	  beq-      .loc_0xB4
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB4
	  lwz       r5, -0x7110(r13)
	  li        r3, 0
	  li        r4, 0x1
	  addi      r0, r5, 0x1
	  stw       r0, -0x7110(r13)
	  bl        0x680
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x6A4
	  li        r0, 0x1
	  lwz       r3, -0x7120(r13)
	  stw       r0, -0x7118(r13)
	  bl        0xECCC

	.loc_0xB4:
	  lwz       r3, -0x6D70(r2)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r4,27,31,31
	  beq-      .loc_0x120
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,28,31,31
	  beq-      .loc_0x120
	  li        r0, 0
	  rlwimi    r4,r0,5,26,26
	  stw       r4, 0x8(r3)
	  lwz       r0, 0x8(r3)
	  lwz       r3, -0x714C(r13)
	  sth       r0, 0x2(r3)
	  lwz       r0, -0x7114(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  addi      r3, r1, 0x10
	  bl        0x9674
	  addi      r3, r1, 0x10
	  bl        0x94A4
	  lwz       r12, -0x7114(r13)
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x10
	  bl        0x9658
	  mr        r3, r31
	  bl        0x9488

	.loc_0x120:
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E3B34
 * Size:	00006C
 */
void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size)
{
	fifo->base       = base;
	fifo->end        = (void*)((u32)base + (size - 4));
	fifo->size       = size;
	fifo->rwDistance = 0;
	GXInitFifoLimits(fifo, size - 0x4000, size >> 1 & 0x7FFFFFE0);
	// GXInitFifoLimits(fifo, size - 0x4000, ALIGN_PREV(size >> 1, 0x20));
	GXInitFifoPtrs(fifo, base, base);
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  subi      r0, r5, 0x4
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0
	  add       r0, r31, r0
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  subi      r4, r5, 0x4000
	  stw       r31, 0x0(r3)
	  stw       r0, 0x4(r3)
	  li        r0, 0
	  stw       r5, 0x8(r3)
	  rlwinm    r5,r5,31,1,26
	  stw       r0, 0x1C(r30)
	  bl        0x9C
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  addi      r5, r31, 0
	  bl        .loc_0x6C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr

	.loc_0x6C:
	*/
}

/*
 * --INFO--
 * Address:	800E3BA0
 * Size:	000070
 * @NeedsFrankLite
 */
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr)
{
	int interrupts   = OSDisableInterrupts();
	fifo->readPtr    = readPtr;
	fifo->writePtr   = writePtr;
	fifo->rwDistance = (int)writePtr - (int)readPtr;
	if (fifo->rwDistance < 0) {
		fifo->rwDistance += fifo->size;
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
	fifo->highWatermark = highWatermark;
	fifo->lowWatermark  = lowWatermark;
}

/*
 * --INFO--
 * Address:	800E3C1C
 * Size:	000128
 */
void GXSetCPUFifo(GXFifoObj* fifo)
{
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
 * @NeedsFrankLite
 */
void GXSetGPFifo(GXFifoObj* fifo)
{
	int interrupts = OSDisableInterrupts();
	__GXFifoReadDisable();
	__GXWriteFifoIntEnable(0, 0);
	GPFifo                         = fifo;
	__cpReg->cpFIFOBaseLo          = (u16)fifo->base;
	__cpReg->cpFIFOEndLo           = (u16)fifo->end;
	__cpReg->cpFIFORWDistanceLo    = (u16)fifo->rwDistance;
	__cpReg->cpFIFOWritePointerLo  = (u16)fifo->writePtr;
	__cpReg->cpFIFOReadPointerLo   = (u16)fifo->readPtr;
	__cpReg->cpFIFOHighWatermarkLo = (u16)fifo->highWatermark;
	__cpReg->cpFIFOLowWatermarkLo  = (u16)fifo->lowWatermark;

	__cpReg->cpFIFOBaseHi          = ((u32)fifo->base >> 0x10) & 0x3FFF;
	__cpReg->cpFIFOEndHi           = ((u32)fifo->end >> 0x10) & 0x3FFF;
	__cpReg->cpFIFORWDistanceHi    = fifo->rwDistance >> 0x10;
	__cpReg->cpFIFOWritePointerHi  = ((u32)fifo->writePtr >> 0x10) & 0x3FFF;
	__cpReg->cpFIFOReadPointerHi   = ((u32)fifo->readPtr >> 0x10) & 0x3FFF;
	__cpReg->cpFIFOHighWatermarkHi = fifo->highWatermark >> 0x10;
	__cpReg->cpFIFOLowWatermarkHi  = fifo->lowWatermark >> 0x10;

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
	int interrupts = OSDisableInterrupts();
	fifo->base     = OSCachedToPhysical(__piReg->fifoBase);
	fifo->end      = OSCachedToPhysical(__piReg->fifoEnd);
	fifo->writePtr = OSCachedToPhysical(__piReg->cpuFIFOCurrentWritePtrMaybe & 0xFBFFFFFF);
	if (CPGPLinked != 0) {
		fifo->readPtr = (void*)(((u32)__cpReg->cpFIFOReadPointerLo + ((u32)__cpReg->cpFIFOReadPointerHi << 0x10)) + -0x80000000);
		// fifo->readPtr = (void*)(((u32)__cpReg->cpFIFOReadPointerLo + (u32)(__cpReg->cpFIFOReadPointerHi << 0x10)) + -0x80000000);
		fifo->rwDistance = (u32)(((u32)__cpReg->cpFIFORWDistanceHi << 0x10) + __cpReg->cpFIFORWDistanceLo);
	} else {
		fifo->rwDistance = (int)fifo->writePtr - (int)fifo->readPtr;
		if (fifo->rwDistance < 0) {
			fifo->rwDistance += fifo->size;
		}
	}
	OSRestoreInterrupts(interrupts);
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  bl        0xAD34
	  lwz       r4, -0x7150(r13)
	  lwz       r4, 0xC(r4)
	  subis     r0, r4, 0x8000
	  stw       r0, 0x0(r31)
	  lwz       r4, -0x7150(r13)
	  lwz       r4, 0x10(r4)
	  subis     r0, r4, 0x8000
	  stw       r0, 0x4(r31)
	  lwz       r4, -0x7150(r13)
	  lwz       r0, 0x14(r4)
	  rlwinm    r4,r0,0,6,4
	  subis     r0, r4, 0x8000
	  stw       r0, 0x18(r31)
	  lbz       r0, -0x711C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r5, -0x714C(r13)
	  lhz       r4, 0x3A(r5)
	  lhz       r5, 0x38(r5)
	  rlwimi    r5,r4,16,0,15
	  subis     r0, r5, 0x8000
	  stw       r0, 0x14(r31)
	  lwz       r5, -0x714C(r13)
	  lhz       r4, 0x32(r5)
	  lhz       r0, 0x30(r5)
	  rlwimi    r0,r4,16,0,15
	  stw       r0, 0x1C(r31)
	  b         .loc_0xB0

	.loc_0x88:
	  lwz       r4, 0x14(r31)
	  lwz       r0, 0x18(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x1C(r31)
	  lwz       r4, 0x1C(r31)
	  cmpwi     r4, 0
	  bge-      .loc_0xB0
	  lwz       r0, 0x8(r31)
	  add       r0, r4, r0
	  stw       r0, 0x1C(r31)

	.loc_0xB0:
	  bl        0xACC0
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
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
	CPReg* cpReg = __cpReg;
	GXData* data = __GXData;
	data->_00C   = cpReg->statusRegister;
	*overhi      = data->_00C & 1;
	*underlow    = (data->_00C >> 1) & 1;
	*readIdle    = (data->_00C >> 2) & 1;
	*cmdIdle     = (data->_00C >> 3) & 1;
	*brkpt       = (data->_00C >> 4) & 1;
	/*
	.loc_0x0:
	  lwz       r9, -0x714C(r13)
	  lwz       r8, -0x6D70(r2)
	  lhz       r0, 0x0(r9)
	  stw       r0, 0xC(r8)
	  lwz       r0, 0xC(r8)
	  rlwinm    r0,r0,0,31,31
	  stb       r0, 0x0(r3)
	  lwz       r0, 0xC(r8)
	  rlwinm    r0,r0,31,31,31
	  stb       r0, 0x0(r4)
	  lwz       r0, 0xC(r8)
	  rlwinm    r0,r0,30,31,31
	  stb       r0, 0x0(r5)
	  lwz       r0, 0xC(r8)
	  rlwinm    r0,r0,29,31,31
	  stb       r0, 0x0(r6)
	  lwz       r0, 0xC(r8)
	  rlwinm    r0,r0,28,31,31
	  stb       r0, 0x0(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void GXGetFifoStatus(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void GXGetFifoPtrs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetFifoBase(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetFifoSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetFifoLimits(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4008
 * Size:	000044
 */
GXBreakpointCallback* GXSetBreakPtCallback(GXBreakpointCallback* cb)
{
	GXBreakpointCallback* oldCallback = BreakPointCB;
	int interrupts                    = OSDisableInterrupts();
	BreakPointCB                      = cb;
	OSRestoreInterrupts(interrupts);
	return oldCallback;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x7114(r13)
	  bl        0xAC14
	  stw       r30, -0x7114(r13)
	  bl        0xAC34
	  mr        r3, r31
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
 * Address:	........
 * Size:	00008C
 */
void GXEnableBreakPt(void)
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
	// __GXData->controlRegister.gpFifoReadEnable = TRUE;
	// __cpReg->controlRegister = HW_REG(&__GXData->controlRegister, u16);
	// __GXData->controlRegister |= GP_FIFO_READ_ENABLE;
	// __GXData->controlRegister = __GXData->controlRegister & ~GP_FIFO_READ_ENABLE | GP_FIFO_READ_ENABLE;
	// __cpReg->controlRegister = __GXData->controlRegister;
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0x1
	  lwz       r3, 0x8(r4)
	  rlwimi    r3,r0,0,31,31
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r4)
	  lwz       r3, -0x714C(r13)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E40BC
 * Size:	000024
 */
void __GXFifoReadDisable(void)
{
	// __GXData->controlRegister = __GXData->controlRegister & ~GP_FIFO_READ_ENABLE;
	// __cpReg->controlRegister = __GXData->controlRegister;
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0
	  lwz       r3, 0x8(r4)
	  rlwimi    r3,r0,0,31,31
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r4)
	  lwz       r3, -0x714C(r13)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E40E0
 * Size:	000034
 */
void __GXFifoLink(u8 link)
{
	u32 b;
	GXData* data;
	if (link) {
		b = 1;
	} else {
		b = 0;
	}
	data                                    = __GXData;
	data->controlRegister.bits.gpLinkEnable = b;
	// controlRegister.gpLinkEnable = b;
	__cpReg->controlRegister = data->controlRegister.value;
	// __GXData->controlRegister = ((link != 0) << 4) | (__GXData->controlRegister & ~GP_LINK_ENABLE);
	// __cpReg->controlRegister = __GXData->controlRegister;
	/*
	.loc_0x0:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10
	  li        r4, 0x1
	  b         .loc_0x14

	.loc_0x10:
	  li        r4, 0

	.loc_0x14:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x8(r3)
	  rlwimi    r0,r4,4,27,27
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x8(r3)
	  lwz       r3, -0x714C(r13)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4114
 * Size:	000030
 */
void __GXWriteFifoIntEnable(u32 p1, u32 p2)
{
	// __GXData->controlRegister = __GXData->controlRegister & ~FIFO_OVERFLOW_IRQ_ENABLE_MAYBE;
	// __GXData->controlRegister |= (p1 & 1) << 2;
	// __GXData->controlRegister = __GXData->controlRegister & ~FIFO_UNDERFLOW_IRQ_ENABLE_MAYBE;
	// __GXData->controlRegister |= (p2 & 1) << 3;
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r0,r4,0,24,31
	  lwz       r4, 0x8(r5)
	  rlwimi    r4,r3,2,29,29
	  stw       r4, 0x8(r5)
	  lwz       r3, 0x8(r5)
	  rlwimi    r3,r0,3,28,28
	  stw       r3, 0x8(r5)
	  lwz       r0, 0x8(r5)
	  lwz       r3, -0x714C(r13)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4144
 * Size:	000030
 */
void __GXWriteFifoIntReset(u32 p1, u32 p2)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r0,r4,0,24,31
	  lwz       r4, 0x10(r5)
	  rlwimi    r4,r3,0,31,31
	  stw       r4, 0x10(r5)
	  lwz       r3, 0x10(r5)
	  rlwimi    r3,r0,1,30,30
	  stw       r3, 0x10(r5)
	  lwz       r0, 0x10(r5)
	  lwz       r3, -0x714C(r13)
	  sth       r0, 0x4(r3)
	  blr
	*/
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
void GXGetCPUFifo(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7128(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E427C
 * Size:	000008
 */
void GXGetGPFifo(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7124(r13)
	  blr
	*/
}

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
