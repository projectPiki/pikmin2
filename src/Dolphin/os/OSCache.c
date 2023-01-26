#include "Dolphin/os.h"
#include "Dolphin/db.h"
#define PPCSYNC sc // system call performs PPCSync()
// clang-format off
/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DCFlashInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC6D8
 * Size:	000014
 */
asm void DCEnable(void)
{
    nofralloc

    sync

    mfspr   r3, HID0
    ori     r3, r3, HID0_DCE
    mtspr   HID0, r3

    blr
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void DCDisable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void DCFreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DCUnfreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCTouchLoad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockZero(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockStore(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockFlush(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DCBlockInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC6EC
 * Size:	00002C
 */
asm void DCInvalidateRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    dcbi    0,addr
    addi    addr,addr,32
    bdnz    _loop
    blr
}


/*
 * --INFO--
 * Address:	800EC718
 * Size:	000030
 */
asm void DCFlushRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    dcbf    0,addr
    addi    addr,addr,32
    bdnz    _loop

    PPCSYNC

    blr
}

/*
 * --INFO--
 * Address:	800EC748
 * Size:	000030
 */
asm void DCStoreRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    dcbst   0,addr
    addi    addr,addr,32
    bdnz    _loop

    PPCSYNC

    blr
}

/*
 * --INFO--
 * Address:	800EC778
 * Size:	00002C
 */
asm void DCFlushRangeNoSync(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    dcbf    0,addr
    addi    addr,addr,32
    bdnz    _loop

    blr
}

/*
 * --INFO--
 * Address:	800EC7A4
 * Size:	00002C
 */
asm void DCStoreRangeNoSync(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    dcbst   0,addr
    addi    addr,addr,32
    bdnz    _loop

    blr
}

/*
 * --INFO--
 * Address:	800EC7D0
 * Size:	00002C
 */
asm void DCZeroRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    dcbz    0,addr
    addi    addr,addr,32
    bdnz    _loop
    blr
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
asm void DCTouchRange(register void* addr, register u32 nBytes)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC7FC
 * Size:	000034
 */
asm void ICInvalidateRange(register void* addr, register u32 nBytes)
{
    nofralloc
    cmplwi  nBytes,0
    blelr-
    rlwinm  r5,addr,0,27,31
    add     nBytes,nBytes,r5
    addi    nBytes,nBytes,31
    srwi    nBytes,nBytes,5
    mtctr   nBytes
_loop:
    icbi    0,addr
    addi    addr,addr,32
    bdnz    _loop
    sync
    isync
    blr
}

/*
 * --INFO--
 * Address:	800EC830
 * Size:	000010
 */
asm void ICFlashInvalidate(void)
{
    nofralloc

    mfspr   r3, HID0
    ori     r3, r3, HID0_ICFI
    mtspr   HID0, r3

    blr
}

/*
 * --INFO--
 * Address:	800EC840
 * Size:	000014
 */
 asm void ICEnable(void)
{
    nofralloc

    isync

    mfspr   r3, HID0
    ori     r3, r3, HID0_ICE
    mtspr   HID0, r3

    blr
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void ICDisable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void ICFreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void ICUnfreeze(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ICBlockInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ICSync(void)
{
	// UNUSED FUNCTION
}

#define CACHE_LINES 1024
#define LC_LINES    512

/*
 * --INFO--
 * Address:	800EC854
 * Size:	0000CC
 */
static asm void __LCEnable(void)
{
    nofralloc
    mfmsr   r5
    ori     r5, r5, MSR_ME
    mtmsr   r5
    lis     r3, OS_CACHED_REGION_PREFIX
    li      r4, CACHE_LINES
    mtctr   r4
_loop:
    dcbt    0,r3
    dcbst   0,r3
    addi    r3,r3,32
    bdnz    _loop

    mfspr   r4, HID2
    oris    r4, r4, 0x100F
    mtspr   HID2, r4

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
	
    lis     r3, LC_BASE_PREFIX
    ori     r3, r3, 0x0002
    mtdbatl   DBAT3L, r3
    ori     r3, r3, 0x01fe
    mtdbatu   DBAT3U, r3
    isync
	
    lis     r3, LC_BASE_PREFIX
    li      r6, LC_LINES
    mtctr   r6
    li      r6, 0

_lock:
    dcbz_l  r6, r3
    addi    r3, r3, 32
    bdnz+    _lock

    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop

    blr
}

/*
 * --INFO--
 * Address:	800EC920
 * Size:	000038
 */
void LCEnable(void)
{
    BOOL enabled;

    enabled = OSDisableInterrupts();
    __LCEnable();
    OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	800EC958
 * Size:	000028
 */
asm void LCDisable(void)
{
    nofralloc

    lis     r3, LC_BASE_PREFIX
    li      r4, LC_LINES
    mtctr   r4
_loop:
    dcbi    0, r3
    addi    r3, r3, 32
    bdnz+    _loop
    mfspr   r4, HID2
    rlwinm  r4, r4, 0, HID2_LCE_BIT+1, HID2_LCE_BIT-1
    mtspr   HID2, r4
    blr
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void LCAllocOneTag(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void LCAllocTags(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void LCLoadBlocks(void* destTag, void* srcAddr, u32 numBlocks)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC980
 * Size:	000024
 */
asm void LCStoreBlocks(
    register void*   destAddr,
    register void*   srcTag,
    register u32     numBlocks
)
{
    nofralloc
    rlwinm  r6, numBlocks, 30, 27, 31
    rlwinm  destAddr, destAddr, 0, 4, 31
    or      r6, r6, destAddr
    mtspr   DMA_U, r6
    rlwinm  r6, numBlocks, 2, 28, 29
    or      r6, r6, srcTag
    ori     r6, r6, DMA_L_STORE | DMA_L_TRIGGER
    mtspr   DMA_L, r6
    blr
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void LCAlloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void LCAllocNoInvalidate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
u32 LCLoadData(void* destAddr, void* srcAddr, u32 nBytes)
{
	// UNUSED FUNCTION
}

// clang-format on
/*
 * --INFO--
 * Address:	800EC9A4
 * Size:	0000AC
 */
u32 LCStoreData(void* destAddr, // to main memory destination
                void* srcAddr,  // from locked cache source
                u32 nBytes)
{
	u32 numBlocks       = (nBytes + 31) / 32;
	u32 numTransactions = (numBlocks + LC_MAX_DMA_BLOCKS - 1) / LC_MAX_DMA_BLOCKS;

	while (numBlocks > 0) {
		if (numBlocks < LC_MAX_DMA_BLOCKS) {
			LCStoreBlocks(destAddr, srcAddr, numBlocks);
			numBlocks = 0;
		} else {
			LCStoreBlocks(destAddr, srcAddr, 0);
			numBlocks -= LC_MAX_DMA_BLOCKS;
			destAddr = (void*)((u32)destAddr + LC_MAX_DMA_BYTES);
			srcAddr  = (void*)((u32)srcAddr + LC_MAX_DMA_BYTES);
		}
	}

	return numTransactions;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
u32 LCQueueLength(void)
{
	// UNUSED FUNCTION
}

// clang-format off
/*
 * --INFO--
 * Address:	800ECA50
 * Size:	000014
 */
asm void LCQueueWait(register u32 len)
{
    nofralloc

_waitloop:
    mfspr   r4, HID2
    rlwinm  r4, r4, 8, 28, 31
    cmpw    r4, len
    bgt     _waitloop

    blr
}

// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void LCFlushQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
inline static void L2Init(void)
{
	u32 oldMSR;

	oldMSR = PPCMfmsr();

	__sync();
	PPCMtmsr(MSR_IR | MSR_DR);
	__sync();

	L2Disable();

	L2GlobalInvalidate();

	PPCMtmsr(oldMSR);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
inline void L2Enable(void) { PPCMtl2cr((PPCMfl2cr() | L2CR_L2E) & ~L2CR_L2I); }

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
inline void L2Disable(void)
{
	__sync();
	PPCMtl2cr(PPCMfl2cr() & ~L2CR_L2E);
	__sync();
}

/*
 * --INFO--
 * Address:	800ECA64
 * Size:	000098
 */
void L2GlobalInvalidate(void)
{
	L2Disable();

	PPCMtl2cr(PPCMfl2cr() | L2CR_L2I);

	while (PPCMfl2cr() & L2CR_L2IP)
		;

	PPCMtl2cr(PPCMfl2cr() & ~L2CR_L2I);

	while (PPCMfl2cr() & L2CR_L2IP) {
		DBPrintf(">>> L2 INVALIDATE : SHOULD NEVER HAPPEN\n");
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void L2SetDataOnly(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void L2SetWriteThrough(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ECAFC
 * Size:	000160
 */
void DMAErrorHandler(OSError error, OSContext* context, ...)
{
#pragma unused(error)
	u32 hid2 = PPCMfhid2();

	OSReport("Machine check received\n");
	OSReport("HID2 = 0x%x   SRR1 = 0x%x\n", hid2, context->srr1);
	if (!(hid2 & (HID2_DCHERR | HID2_DNCERR | HID2_DCMERR | HID2_DQOERR)) || !(context->srr1 & SRR1_DMA_BIT)) {
		OSReport("Machine check was not DMA/locked cache related\n");
		OSDumpContext(context);
		PPCHalt();
		// spins forever, so not reached
	}

	OSReport("DMAErrorHandler(): An error occurred while processing DMA.\n");
	OSReport("The following errors have been detected and cleared :\n");

	if (hid2 & HID2_DCHERR) {
		OSReport("\t- Requested a locked cache tag that was already in the cache\n");
	}

	if (hid2 & HID2_DNCERR) {
		OSReport("\t- DMA attempted to access normal cache\n");
	}

	if (hid2 & HID2_DCMERR) {
		OSReport("\t- DMA missed in data cache\n");
	}

	if (hid2 & HID2_DQOERR) {
		OSReport("\t- DMA queue overflowed\n");
	}

	// write hid2 back (to clear the error bits)
	PPCMthid2(hid2);
}

/*
 * --INFO--
 * Address:	800ECC5C
 * Size:	0000F4
 */
void __OSCacheInit(void)
{
	if (!(PPCMfhid0() & HID0_ICE)) {
		ICEnable();
		DBPrintf("L1 i-caches initialized\n");
	}
	if (!(PPCMfhid0() & HID0_DCE)) {
		DCEnable();
		DBPrintf("L1 d-caches initialized\n");
	}

	if (!(PPCMfl2cr() & L2CR_L2E)) {
		L2Init();
		L2Enable();
		DBPrintf("L2 cache initialized\n");
	}

	OSSetErrorHandler(OS_ERROR_MACHINE_CHECK, DMAErrorHandler);
	DBPrintf("Locked cache machine check handler installed\n");
}
