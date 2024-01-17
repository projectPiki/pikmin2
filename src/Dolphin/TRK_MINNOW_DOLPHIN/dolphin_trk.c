#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "Dolphin/ar.h"

extern u8 _db_stack_addr[];
#define EXCEPTIONMASK_ADDR 0x80000044

extern void OSResetSystem(BOOL reset, u32 resetCode, BOOL forceMenu);

static u32 lc_base;

static u32 TRK_ISR_OFFSETS[15] = { PPC_SystemReset,
	                               PPC_MachineCheck,
	                               PPC_DataStorage,
	                               PPC_InstructionStorage,
	                               PPC_ExternalInterrupt,
	                               PPC_Alignment,
	                               PPC_Program,
	                               PPC_FloatingPointUnavaiable,
	                               PPC_Decrementer,
	                               PPC_SystemCall,
	                               PPC_Trace,
	                               PPC_PerformanceMonitor,
	                               PPC_InstructionAddressBreakpoint,
	                               PPC_SystemManagementInterrupt,
	                               PPC_ThermalManagementInterrupt };

DECL_SECT(".init") void __TRK_reset() { OSResetSystem(FALSE, 0, FALSE); }

/**
 * @note Address: 0x800C03EC
 * @note Size: 0x20
 */
void EnableMetroTRKInterrupts(void) { EnableEXI2Interrupts(); }

/**
 * @note Address: 0x800C0394
 * @note Size: 0x58
 */
u32 TRKTargetTranslate(u32 val)
{
	if (val >= lc_base && val < lc_base + 0x4000) {
		if (((u32*)(&gTRKCPUState.Extended1))[36] & 3)
			return val;
	}

	if (val >= 0x7E000000 && val <= 0x80000000) {
		return val;
	}

	return (val & 0x3FFFFFFF) | 0x80000000;
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void TRK_copy_vector(u32 offset)
{
	void* destPtr = (void*)TRKTargetTranslate(offset);
	TRK_memcpy(destPtr, (void*)(gTRKInterruptVectorTable + offset), 0x100);
	TRK_flush_cache(destPtr, 0x100);
}

/**
 * @note Address: 0x800C0268
 * @note Size: 0x12C
 */
void __TRK_copy_vectors(void)
{
	u32 r3 = lc_base;
	u32* isrOffsetPtr;
	int i;
	u32 r29;

	if (r3 <= 0x44 && r3 + 0x4000 > 0x44 && gTRKCPUState.Extended1.DBAT3U_ & 3) {
		r3 = 0x44;
	} else {
		r3 = EXCEPTIONMASK_ADDR;
	}

	i            = 0;
	r29          = *(u32*)r3;
	isrOffsetPtr = TRK_ISR_OFFSETS;

	do {
		if ((r29 & (1 << i)) && i != 4) {
			TRK_copy_vector(isrOffsetPtr[i]);
		}

		i++;
	} while (i <= 14);
}

/**
 * @note Address: 0x800C021C
 * @note Size: 0x4C
 */
DSError TRKInitializeTarget()
{
	gTRKState.isStopped = TRUE;
	gTRKState.msr       = __TRK_get_MSR();
	lc_base             = 0xE0000000;
	return DS_NoError;
}

#define __dcbi(a, b)    asm { dcbi a, b }
#define __dcbfASM(a, b) asm { dcbf a, b }

/**
 * @note Address: 0x800C00E8
 * @note Size: 0x134
 */
void TRK__read_aram(register int c, register u32 p2, void* p3)
{
	u32 err;
	int i;
	register int counter;
	u16 r;
	u32 g;
	u32 x;
	u32 size;

	if ((size_t)p2 < 0x4000 || p2 + *(u32*)p3 > 0x8000000) {
		return;
	}

	x       = p2 & ~0x1F;
	size    = *(u32*)p3 + (p2 & 0x1F);
	size    = OSRoundUp32B(size);
	counter = 0;

	for (i = 0; i < size; i++) {
		__dcbi(counter, c);
		counter += 0x20;
	}

	do {
		err = ARGetDMAStatus();
	} while (err);

	r = __ARGetInterruptStatus();
	g = 0x8000000;
	__ARClearInterrupt();

	ARStartDMA(1, c, x, size);

	while (!__ARGetInterruptStatus()) { }

	if (!r) {
		__ARClearInterrupt();
	}
	// TRK_memcpy((void*)c, buff, p2);
	// __dcbf((void*)counter, count);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0x4000
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  blt-      .loc_0x114
	  lwz       r5, 0x0(r5)
	  lis       r0, 0x800
	  add       r3, r4, r5
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  b         .loc_0x114

	.loc_0x40:
	  rlwinm    r0,r4,0,27,31
	  rlwinm    r30,r4,0,0,26
	  add       r29, r5, r0
	  li        r4, 0
	  addi      r0, r29, 0x1F
	  rlwinm    r29,r0,0,0,26
	  cmplwi    r29, 0
	  addi      r3, r29, 0x1F
	  rlwinm    r3,r3,27,5,31
	  ble-      .loc_0xD0
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xC0

	.loc_0x74:
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0x74
	  andi.     r3, r3, 0x7
	  beq-      .loc_0xD0

	.loc_0xC0:
	  mtctr     r3

	.loc_0xC4:
	  dcbi      r4, r28
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0xC4

	.loc_0xD0:
	  bl        0x12500
	  cmplwi    r3, 0
	  bne+      .loc_0xD0
	  bl        0x127F4
	  mr        r31, r3
	  bl        0x127CC
	  mr        r4, r28
	  mr        r5, r30
	  mr        r6, r29
	  li        r3, 0x1
	  bl        0x12514

	.loc_0xFC:
	  bl        0x127D4
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0xFC
	  rlwinm.   r0,r31,0,16,31
	  bne-      .loc_0x114
	  bl        0x127A0

	.loc_0x114:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void __read_aram_1block(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BFEFC
 * @note Size: 0x1EC
 */
void TRK__write_aram(register int c, register u32 p2, void* p3)
{
	u8 buff[32] ATTRIBUTE_ALIGN(32);
	u32 err;
	int i;
	register int count = c;
	register u32 bf;
	u32 uVar1;
	u32 size;
	u16 r;
	register u32 g;
	register int counter;

	if ((size_t)p2 < 0x4000 || p2 + *(u32*)p3 > 0x8000000) {
		return;
	}

	uVar1   = p2 & ~0x1f;
	counter = 0;
	size    = *(u32*)p3 + (p2 & 0x1f);
	size    = OSRoundUp32B(size);

	for (i = 0; i < size; i++) {
		__dcbf((void*)counter, count);
		counter += 0x20;
	}

	do {
		err = ARGetDMAStatus();
	} while (err);

	r = __ARGetInterruptStatus();
	g = 0x8000000;

	counter = p2 & 0x1f;
	if (counter) {
		g  = uVar1;
		bf = (u32)buff;
		__dcbi(r0, bf);
		__ARClearInterrupt();

		ARStartDMA(1, bf, uVar1, 0x20);

		while (!__ARGetInterruptStatus()) { }

		TRK_memcpy((void*)c, buff, counter);
		__dcbfASM(r0, c);
	}

	p2 += *(u32*)p3;
	counter = p2 & 0x1f;
	if (counter) {
		u32 val = p2 & ~0x1F;
		if (val != g) {
			bf = (u32)buff;
			__dcbi(r0, bf);
			__ARClearInterrupt();
			ARStartDMA(1, bf, val, 0x20);

			while (!__ARGetInterruptStatus()) { }
		}
		g = c + p2;
		TRK_memcpy((void*)g, (void*)(buff + counter), 0x20 - counter);

		__dcbfASM(r0, g);
	}
	__sync();
	__ARClearInterrupt();
	ARStartDMA(0, c, uVar1, size);
	if (!r) {
		while (!__ARGetInterruptStatus()) { }

		__ARClearInterrupt();
	}

	/*
	.loc_0x0:
	  rlwinm    r11,r1,0,27,31
	  mr        r12, r1
	  subfic    r11, r11, -0x80
	  stwux     r1, r1, r11
	  mflr      r0
	  stw       r0, 0x4(r12)
	  stmw      r23, -0x24(r12)
	  mr        r31, r4
	  cmplwi    r31, 0x4000
	  mr        r30, r3
	  mr        r23, r5
	  blt-      .loc_0x1D4
	  lwz       r4, 0x0(r23)
	  lis       r0, 0x800
	  add       r3, r31, r4
	  cmplw     r3, r0
	  ble-      .loc_0x48
	  b         .loc_0x1D4

	.loc_0x48:
	  rlwinm    r0,r31,0,27,31
	  rlwinm    r27,r31,0,0,26
	  add       r26, r4, r0
	  li        r24, 0
	  addi      r0, r26, 0x1F
	  rlwinm    r26,r0,0,0,26
	  cmplwi    r26, 0
	  addi      r3, r26, 0x1F
	  rlwinm    r3,r3,27,5,31
	  ble-      .loc_0xD8
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xC8

	.loc_0x7C:
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  bdnz+     .loc_0x7C
	  andi.     r3, r3, 0x7
	  beq-      .loc_0xD8

	.loc_0xC8:
	  mtctr     r3

	.loc_0xCC:
	  dcbf      r24, r30
	  addi      r24, r24, 0x20
	  bdnz+     .loc_0xCC

	.loc_0xD8:
	  bl        0x126E4
	  cmplwi    r3, 0
	  bne+      .loc_0xD8
	  bl        0x129D8
	  rlwinm.   r24,r31,0,27,31
	  mr        r29, r3
	  lis       r25, 0x800
	  beq-      .loc_0x13C
	  addi      r28, r1, 0x20
	  mr        r25, r27
	  dcbi      r0, r28
	  bl        0x12998
	  mr        r4, r28
	  mr        r5, r27
	  li        r3, 0x1
	  li        r6, 0x20
	  bl        0x126E0

	.loc_0x11C:
	  bl        0x129A0
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0x11C
	  mr        r3, r30
	  mr        r5, r24
	  addi      r4, r1, 0x20
	  bl        -0xBCF00
	  dcbf      r0, r30

	.loc_0x13C:
	  lwz       r0, 0x0(r23)
	  add       r31, r31, r0
	  rlwinm.   r24,r31,0,27,31
	  beq-      .loc_0x1A0
	  rlwinm    r23,r31,0,0,26
	  cmplw     r23, r25
	  beq-      .loc_0x184
	  addi      r28, r1, 0x20
	  dcbi      r0, r28
	  bl        0x1293C
	  mr        r4, r28
	  mr        r5, r23
	  li        r3, 0x1
	  li        r6, 0x20
	  bl        0x12684

	.loc_0x178:
	  bl        0x12944
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0x178

	.loc_0x184:
	  add       r25, r30, r31
	  addi      r4, r1, 0x20
	  mr        r3, r25
	  subfic    r5, r24, 0x20
	  add       r4, r4, r24
	  bl        -0xBCF64
	  dcbf      r0, r25

	.loc_0x1A0:
	  sync
	  bl        0x128F8
	  mr        r4, r30
	  mr        r5, r27
	  mr        r6, r26
	  li        r3, 0
	  bl        0x12640
	  rlwinm.   r0,r29,0,16,31
	  bne-      .loc_0x1D4

	.loc_0x1C4:
	  bl        0x128F8
	  rlwinm.   r0,r3,0,16,31
	  beq+      .loc_0x1C4
	  bl        0x128CC

	.loc_0x1D4:
	  lwz       r10, 0x0(r1)
	  lmw       r23, -0x24(r10)
	  lwz       r0, 0x4(r10)
	  mtlr      r0
	  mr        r1, r10
	  blr
	*/
}

/**
 * @note Address: 0x800BFE68
 * @note Size: 0x94
 */
ASM void InitMetroTRK_BBA(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	addi r1, r1, -4
	stw r3, 0(r1)
	lis r3, gTRKCPUState@h
	ori r3, r3, gTRKCPUState@l
	stmw r0, ProcessorState_PPC.Default.GPR(r3) //Save the gprs
	lwz r4, 0(r1)
	addi r1, r1, 4
	stw r1, ProcessorState_PPC.Default.GPR[1](r3)
	stw r4, ProcessorState_PPC.Default.GPR[3](r3)
	mflr r4
	stw r4, ProcessorState_PPC.Default.LR(r3)
	stw r4, ProcessorState_PPC.Default.PC(r3)
	mfcr r4
	stw r4, ProcessorState_PPC.Default.CR(r3)
	//Turn on external interrupts
	mfmsr r4
	ori r3, r4, (1 << (31 - 16))
	mtmsr r3
	mtsrr1 r4 //Copy original msr to srr1
	//Save misc registers to gTRKCPUState
	bl TRKSaveExtended1Block
	lis r3, gTRKCPUState@h
	ori r3, r3, gTRKCPUState@l
	lmw r0, ProcessorState_PPC.Default.GPR(r3) //Restore the gprs
	//Reset IABR and DABR
	li r0, 0
	mtspr  0x3f2, r0
	mtspr 0x3f5, r0
	//Restore the stack pointer
	lis r1, _db_stack_addr@h
	ori r1, r1, _db_stack_addr@l
	li r3, 2
	bl InitMetroTRKCommTable //Initialize comm table as BBA hardware
	/*
	If InitMetroTRKCommTable returned 1 (failure), something went wrong
	or whatever reason. If everything goes as expected, we proceed with
	starting up TRK.
	*/
	cmpwi r3, 1
	bne initCommTableSuccess
	/*
	BUG: The code probably orginally reloaded gTRKCPUState here, but
	as is it will read the returned value of InitMetroTRKCommTable
	as a TRKCPUState struct pointer, causing the CPU to return to
	a garbage code address.
	*/
	lwz r4, ProcessorState_PPC.Default.LR(r3)
	mtlr r4
	lmw r0, ProcessorState_PPC.Default.GPR(r3)
	blr
initCommTableSuccess:
	b TRK_main //Jump to TRK_main
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800BFDD0
 * @note Size: 0x98
 */
ASM void InitMetroTRK(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	addi r1, r1, -4
	stw r3, 0(r1)
	lis r3, gTRKCPUState@h
	ori r3, r3, gTRKCPUState@l
	stmw r0, ProcessorState_PPC.Default.GPR(r3) //Save the gprs
	lwz r4, 0(r1)
	addi r1, r1, 4
	stw r1, ProcessorState_PPC.Default.GPR[1](r3)
	stw r4, ProcessorState_PPC.Default.GPR[3](r3)
	mflr r4
	stw r4, ProcessorState_PPC.Default.LR(r3)
	stw r4, ProcessorState_PPC.Default.PC(r3)
	mfcr r4
	stw r4, ProcessorState_PPC.Default.CR(r3)
	//???
	mfmsr r4
	ori r3, r4, (1 << (31 - 16))
	xori r3, r3, (1 << (31 - 16))
	mtmsr r3
	mtsrr1 r4 //Copy msr to srr1
	//Save misc registers to gTRKCPUState
	bl TRKSaveExtended1Block
	lis r3, gTRKCPUState@h
	ori r3, r3, gTRKCPUState@l
	lmw r0, ProcessorState_PPC.Default.GPR(r3) //Restore the gprs
	//Reset IABR and DABR
	li r0, 0
	mtspr  0x3f2, r0
	mtspr  0x3f5, r0
	//Restore stack pointer
	lis r1, _db_stack_addr@h
	ori r1, r1, _db_stack_addr@l
	mr r3, r5
	bl InitMetroTRKCommTable //Initialize comm table
	/*
	If InitMetroTRKCommTable returned 1 (failure), an invalid hardware
	id or the id for GDEV was somehow passed. Since only BBA or NDEV
	are supported, we return early. Otherwise, we proceed with
	starting up TRK.
	*/
	cmpwi r3, 1
	bne initCommTableSuccess
	/*
	BUG: The code probably orginally reloaded gTRKCPUState here, but
	as is it will read the returned value of InitMetroTRKCommTable
	as a TRKCPUState struct pointer, causing the CPU to return to
	a garbage code address.
	*/
	lwz r4, ProcessorState_PPC.Default.LR(r3)
	mtlr r4
	lmw r0, ProcessorState_PPC.Default.GPR(r3) //Restore the gprs
	blr
initCommTableSuccess:
	b TRK_main //Jump to TRK_main
	blr
#endif // clang-format on
}
