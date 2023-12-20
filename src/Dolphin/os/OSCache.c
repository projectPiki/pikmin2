#include "Dolphin/os.h"
#include "Dolphin/db.h"
#define PPCSYNC sc // system call performs PPCSync()

// /**
//  * @note Address: N/A
//  * @note Size: 0x10
//  */
// void DCFlashInvalidate(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800EC6D8
 * @note Size: 0x14
 */
ASM void DCEnable(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc

	sync

	mfspr   r3, HID0
	ori     r3, r3, HID0_DCE
	mtspr   HID0, r3

	blr
#endif // clang-format on
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x14
//  */
// void DCDisable(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x14
//  */
// void DCFreeze(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x10
//  */
// void DCUnfreeze(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void DCTouchLoad(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void DCBlockZero(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void DCBlockStore(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void DCBlockFlush(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void DCBlockInvalidate(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800EC6EC
 * @note Size: 0x2C
 */
ASM void DCInvalidateRange(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC718
 * @note Size: 0x30
 */
ASM void DCFlushRange(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC748
 * @note Size: 0x30
 */
ASM void DCStoreRange(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC778
 * @note Size: 0x2C
 */
ASM void DCFlushRangeNoSync(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC7A4
 * @note Size: 0x2C
 */
ASM void DCStoreRangeNoSync(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC7D0
 * @note Size: 0x2C
 */
ASM void DCZeroRange(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
ASM void DCTouchRange(register void* addr, register u32 nBytes)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EC7FC
 * @note Size: 0x34
 */
ASM void ICInvalidateRange(register void* addr, register u32 nBytes) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC830
 * @note Size: 0x10
 */
ASM void ICFlashInvalidate(void) {
#ifdef __MWERKS__ // clang-format off
	nofralloc

	mfspr   r3, HID0
	ori     r3, r3, HID0_ICFI
	mtspr   HID0, r3

	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800EC840
 * @note Size: 0x14
 */
ASM void ICEnable(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	isync

	mfspr   r3, HID0
	ori     r3, r3, HID0_ICE
	mtspr   HID0, r3

	blr
#endif // clang-format on
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x14
//  */
// void ICDisable(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x14
//  */
// void ICFreeze(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x10
//  */
// void ICUnfreeze(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void ICBlockInvalidate(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x8
//  */
// void ICSync(void)
// {
// 	// UNUSED FUNCTION
// }

#define CACHE_LINES 1024
#define LC_LINES    512

/**
 * @note Address: 0x800EC854
 * @note Size: 0xCC
 */
ASM static void __LCEnable(void)
{
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800EC920
 * @note Size: 0x38
 */
void LCEnable(void)
{
	BOOL enabled;

	enabled = OSDisableInterrupts();
	__LCEnable();
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800EC958
 * @note Size: 0x28
 */
ASM void LCDisable(void) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x14
//  */
// void LCAllocOneTag(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x40
//  */
// void LCAllocTags(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x24
//  */
// void LCLoadBlocks(void* destTag, void* srcAddr, u32 numBlocks)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800EC980
 * @note Size: 0x24
 */
ASM void LCStoreBlocks(register void* destAddr, register void* srcTag, register u32 numBlocks) {
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x70
//  */
// void LCAlloc(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x70
//  */
// void LCAllocNoInvalidate(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0xAC
//  */
// u32 LCLoadData(void* destAddr, void* srcAddr, u32 nBytes)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800EC9A4
 * @note Size: 0xAC
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

// /**
//  * @note Address: N/A
//  * @note Size: 0xC
//  */
// u32 LCQueueLength(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800ECA50
 * @note Size: 0x14
 */
ASM void LCQueueWait(register u32 len)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

_waitloop:
	mfspr   r4, HID2
	rlwinm  r4, r4, 8, 28, 31
	cmpw    r4, len
	bgt     _waitloop

	blr
#endif // clang-format on
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x48
//  */
// void LCFlushQueue(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x4C
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

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
inline void L2Enable(void) { PPCMtl2cr((PPCMfl2cr() | L2CR_L2E) & ~L2CR_L2I); }

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
inline void L2Disable(void)
{
	__sync();
	PPCMtl2cr(PPCMfl2cr() & ~L2CR_L2E);
	__sync();
}

/**
 * @note Address: 0x800ECA64
 * @note Size: 0x98
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

// /**
//  * @note Address: N/A
//  * @note Size: 0x40
//  */
// void L2SetDataOnly(void)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x40
//  */
// void L2SetWriteThrough(void)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800ECAFC
 * @note Size: 0x160
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

/**
 * @note Address: 0x800ECC5C
 * @note Size: 0xF4
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
