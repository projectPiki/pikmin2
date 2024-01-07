#include "PowerPC_EABI_Support/MetroTRK/ppc_reg.h"
#include "PowerPC_EABI_Support/MetroTRK/trktypes.h"
#include "PowerPC_EABI_Support/MetroTRK/trkenum.h"
#include "PowerPC_EABI_Support/MetroTRK/dstypes.h"
#include "PowerPC_EABI_Support/MetroTRK/memmap.h"
typedef struct StopInfo_PPC {
	u32 PC;
	u32 PCInstruction;
	u16 exceptionID;
} StopInfo_PPC;

typedef struct TRKExceptionStatus {
	StopInfo_PPC exceptionInfo;
	u8 inTRK;
	u8 exceptionDetected;
} TRKExceptionStatus;

typedef struct TRKStepStatus {
	BOOL active;               // 0x0
	DSMessageStepOptions type; // 0x4
	u32 count;                 // 0x8
	u32 rangeStart;            // 0xC
	u32 rangeEnd;              // 0x10
	u32 unk14;
} TRKStepStatus;

ProcessorRestoreFlags_PPC gTRKRestoreFlags = { FALSE, FALSE };

static TRKExceptionStatus gTRKExceptionStatus = { { 0, 0, 0 }, TRUE, 0 };

static TRKStepStatus gTRKStepStatus = { FALSE, DSSTEP_IntoCount, 0, 0, 0 };

typedef void (*RegAccessFunc)(void* srcDestPtr, u128 val);

static void TRKExceptionHandler(u16);
void TRKInterruptHandlerEnableInterrupts();
static void GetThreadInfo(int*, int*);
DSError TRKPPCAccessSPR(void* srcDestPtr, u32 spr, BOOL read);
DSError TRKPPCAccessPairedSingleRegister(void* srcDestPtr, u32 psr, BOOL read);
DSError TRKPPCAccessSpecialReg(void* srcDestPtr, u32* instructionData);
DSError TRKPPCAccessFPRegister(void* srcDestPtr, u32 fpr, BOOL read);
void WriteFPSCR(f64*);
void ReadFPSCR(f64*);

u128 TRKvalue128_temp;
Default_PPC gTRKSaveState;
ProcessorState_PPC gTRKCPUState;
static u16 TRK_saved_exceptionID = 0;
TRKState gTRKState;

// Instruction macros
#define INSTR_NOP                                0x60000000
#define INSTR_BLR                                0x4E800020
#define INSTR_PSQ_ST(psr, offset, rDest, w, gqr) (0xF0000000 | (psr << 21) | (rDest << 16) | (w << 15) | (gqr << 12) | offset)
#define INSTR_PSQ_L(psr, offset, rSrc, w, gqr)   (0xE0000000 | (psr << 21) | (rSrc << 16) | (w << 15) | (gqr << 12) | offset)
#define INSTR_STW(rSrc, offset, rDest)           (0x90000000 | (rSrc << 21) | (rDest << 16) | offset)
#define INSTR_LWZ(rDest, offset, rSrc)           (0x80000000 | (rDest << 21) | (rSrc << 16) | offset)
#define INSTR_STFD(fprSrc, offset, rDest)        (0xD8000000 | (fprSrc << 21) | (rDest << 16) | offset)
#define INSTR_LFD(fprDest, offset, rSrc)         (0xC8000000 | (fprDest << 21) | (rSrc << 16) | offset)
#define INSTR_MFSPR(rDest, spr)                  (0x7C000000 | (rDest << 21) | ((spr & 0xFE0) << 6) | ((spr & 0x1F) << 16) | 0x2A6)
#define INSTR_MTSPR(spr, rSrc)                   (0x7C000000 | (rSrc << 21) | ((spr & 0xFE0) << 6) | ((spr & 0x1F) << 16) | 0x3A6)

void __TRK_set_MSR(register u32 msr);
u32 __TRK_get_MSR();
void TRK_ppc_memcpy(register void* dest, register const void* src, register int n, register u32 param_4, register u32 param_5);

/**
 * @note Address: 0x800BF790
 * @note Size: 0x2A4
 */
DSError TRKValidMemory32(const void* addr, size_t length, ValidMemoryOptions readWriteable)
{
	int result;
	memRange* map;
	size_t r31;
	int ind;

	length += (u32)addr;
	r31 = (length - 1);

	// result = DS_InvalidMemory; //r6;

	if (r31 < (u32)addr) {
		return DS_InvalidMemory;
	}

	map = (memRange*)gTRKMemMap;
	ind = 0;

	if ((size_t)addr <= (size_t)map->end && r31 >= (size_t)map->start) {
		ind = 0;
		if ((readWriteable == VALIDMEM_Readable && !gTRKMemMap[readWriteable].readable)
		    || (readWriteable == VALIDMEM_Writeable && !gTRKMemMap[readWriteable].writeable)) {
			result = DS_InvalidMemory;
		} else {
			result = DS_NoError;

			if ((size_t)addr < (size_t)gTRKMemMap[readWriteable].start) {
				result = TRKValidMemory32(addr, (size_t)gTRKMemMap[readWriteable].start - (size_t)addr, readWriteable);
			}

			if (result == DS_NoError && r31 > (size_t)gTRKMemMap[ind].end) {
				result = TRKValidMemory32((void*)gTRKMemMap[ind].end, r31 - (size_t)gTRKMemMap[ind].end, readWriteable);
			}
		}
	}

	return result;
	// DSError result;
	// memRange* map = 0;
	// u32 adressable_size;

	// length += (size_t)addr;
	// adressable_size = (length - 1);

	// result = DS_InvalidMemory; //r6;

	// if(adressable_size < (size_t)addr){
	// 	return result;
	// }

	// map = (memRange*)&gTRKMemMap;

	// if((size_t)addr <= (size_t)map->end && adressable_size >= (size_t)map->start){
	// 	if((readWriteable == DS_InvalidMemory && gTRKMemMap.readable == 0 ) || (readWriteable == VALIDMEM_Writeable)){
	// 		result = DS_InvalidMemory;
	// 	}else{
	// 		result = DS_NoError;

	// 		if((size_t)addr < (size_t)gTRKMemMap.start){
	// 			result = TRKValidMemory32(addr, (size_t)gTRKMemMap.start - (size_t)addr, readWriteable);
	// 		}

	// 		if(result == DS_NoError && adressable_size > (size_t)gTRKMemMap.end){
	// 			result = TRKValidMemory32(gTRKMemMap.end, adressable_size - (size_t)gTRKMemMap.end, readWriteable);
	// 		}
	// 	}
	// }

	// return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  add       r27, r4, r3
	  subi      r27, r27, 0x1
	  mr        r26, r5
	  cmplw     r27, r3
	  li        r5, 0x700
	  bge-      .loc_0x30
	  li        r3, 0x700
	  b         .loc_0x290

	.loc_0x30:
	  lis       r4, 0x8048
	  li        r6, 0
	  subi      r31, r4, 0x6460
	  lwz       r0, 0x4(r31)
	  cmplw     r3, r0
	  bgt-      .loc_0x28C
	  lwz       r0, 0x0(r31)
	  cmplw     r27, r0
	  blt-      .loc_0x28C
	  cmpwi     r26, 0
	  bne-      .loc_0x70
	  rlwinm    r0,r6,4,0,27
	  add       r4, r31, r0
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x94

	.loc_0x70:
	  cmpwi     r26, 0x1
	  bne-      .loc_0x9C
	  lis       r4, 0x8048
	  rlwinm    r0,r6,4,0,27
	  subi      r4, r4, 0x6460
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x9C

	.loc_0x94:
	  li        r5, 0x700
	  b         .loc_0x28C

	.loc_0x9C:
	  lis       r4, 0x8048
	  rlwinm    r29,r6,4,0,27
	  subi      r4, r4, 0x6460
	  li        r5, 0
	  lwzx      r0, r4, r29
	  cmplw     r3, r0
	  bge-      .loc_0x198
	  sub       r0, r0, r3
	  li        r6, 0x700
	  add       r30, r0, r3
	  subi      r30, r30, 0x1
	  cmplw     r30, r3
	  bge-      .loc_0xD4
	  b         .loc_0x194

	.loc_0xD4:
	  lwz       r0, 0x4(r31)
	  li        r5, 0
	  cmplw     r3, r0
	  bgt-      .loc_0x194
	  lwz       r0, 0x0(r31)
	  cmplw     r30, r0
	  blt-      .loc_0x194
	  cmpwi     r26, 0
	  bne-      .loc_0x10C
	  rlwinm    r0,r5,4,0,27
	  add       r4, r4, r0
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x130

	.loc_0x10C:
	  cmpwi     r26, 0x1
	  bne-      .loc_0x138
	  lis       r4, 0x8048
	  rlwinm    r0,r5,4,0,27
	  subi      r4, r4, 0x6460
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x138

	.loc_0x130:
	  li        r6, 0x700
	  b         .loc_0x194

	.loc_0x138:
	  lis       r4, 0x8048
	  rlwinm    r28,r5,4,0,27
	  subi      r4, r4, 0x6460
	  li        r6, 0
	  lwzx      r0, r4, r28
	  cmplw     r3, r0
	  bge-      .loc_0x164
	  mr        r5, r26
	  sub       r4, r0, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x164:
	  cmpwi     r6, 0
	  bne-      .loc_0x194
	  lis       r3, 0x8048
	  subi      r0, r3, 0x6460
	  add       r3, r0, r28
	  lwz       r3, 0x4(r3)
	  cmplw     r30, r3
	  ble-      .loc_0x194
	  mr        r5, r26
	  sub       r4, r30, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x194:
	  mr        r5, r6

	.loc_0x198:
	  cmpwi     r5, 0
	  bne-      .loc_0x28C
	  lis       r3, 0x8048
	  subi      r4, r3, 0x6460
	  addi      r28, r4, 0x4
	  lwzx      r3, r28, r29
	  cmplw     r27, r3
	  ble-      .loc_0x28C
	  sub       r0, r27, r3
	  li        r6, 0x700
	  add       r30, r0, r3
	  subi      r30, r30, 0x1
	  cmplw     r30, r3
	  bge-      .loc_0x1D4
	  b         .loc_0x288

	.loc_0x1D4:
	  lwz       r0, 0x4(r31)
	  li        r5, 0
	  cmplw     r3, r0
	  bgt-      .loc_0x288
	  lwz       r0, 0x0(r31)
	  cmplw     r30, r0
	  blt-      .loc_0x288
	  cmpwi     r26, 0
	  bne-      .loc_0x20C
	  rlwinm    r0,r5,4,0,27
	  add       r4, r4, r0
	  lwz       r0, 0x8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x230

	.loc_0x20C:
	  cmpwi     r26, 0x1
	  bne-      .loc_0x238
	  lis       r4, 0x8048
	  rlwinm    r0,r5,4,0,27
	  subi      r4, r4, 0x6460
	  add       r4, r4, r0
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x238

	.loc_0x230:
	  li        r6, 0x700
	  b         .loc_0x288

	.loc_0x238:
	  lis       r4, 0x8048
	  rlwinm    r27,r5,4,0,27
	  subi      r4, r4, 0x6460
	  li        r6, 0
	  lwzx      r0, r4, r27
	  cmplw     r3, r0
	  bge-      .loc_0x264
	  mr        r5, r26
	  sub       r4, r0, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x264:
	  cmpwi     r6, 0
	  bne-      .loc_0x288
	  lwzx      r3, r28, r27
	  cmplw     r30, r3
	  ble-      .loc_0x288
	  mr        r5, r26
	  sub       r4, r30, r3
	  bl        .loc_0x0
	  mr        r6, r3

	.loc_0x288:
	  mr        r5, r6

	.loc_0x28C:
	  mr        r3, r5

	.loc_0x290:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x800BF644
 * @note Size: 0x14C
 */
DSError TRKTargetAccessMemory(void* data, u32 start, size_t* length, MemoryAccessOptions accessOptions, BOOL read)
{
	DSError error;
	u32 uVar5;
	void* addr;
	u32 param4;
	TRKExceptionStatus tempExceptionStatus = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected  = FALSE;

	addr  = (void*)TRKTargetTranslate(start);
	error = TRKValidMemory32(addr, *length, read == FALSE);

	if (error != DS_NoError) {
		*length = 0;
	} else {
		uVar5  = __TRK_get_MSR();
		param4 = uVar5 | gTRKCPUState.Extended1.MSR & 0x10;

		if (read) {
			TRK_ppc_memcpy(data, addr, *length, uVar5, param4);
		} else {
			TRK_ppc_memcpy(addr, data, *length, param4, uVar5);
			TRK_flush_cache((u32)addr, *length);
			if ((void*)start != addr) {
				TRK_flush_cache(start, *length);
			}
		}
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*length = 0;
		error   = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stmw      r25, 0x24(r1)
	  addi      r31, r6, 0x68BC
	  mr        r27, r4
	  mr        r28, r5
	  mr        r26, r3
	  mr        r29, r7
	  mr        r3, r27
	  lwz       r4, 0xC(r31)
	  lwz       r8, 0x0(r31)
	  lwz       r6, 0x4(r31)
	  lwz       r5, 0x8(r31)
	  stw       r8, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stb       r0, 0xD(r31)
	  bl        0xCFC
	  cntlzw    r0, r29
	  lwz       r4, 0x0(r28)
	  mr        r25, r3
	  rlwinm    r5,r0,27,5,31
	  bl        .loc_0x14C
	  mr.       r30, r3
	  beq-      .loc_0x80
	  li        r0, 0
	  stw       r0, 0x0(r28)
	  b         .loc_0xF4

	.loc_0x80:
	  bl        -0x181C
	  lis       r4, 0x804F
	  cmpwi     r29, 0
	  addi      r4, r4, 0x4328
	  mr        r8, r3
	  lwz       r0, 0x1F8(r4)
	  rlwinm    r0,r0,0,27,27
	  or        r7, r8, r0
	  beq-      .loc_0xBC
	  lwz       r5, 0x0(r28)
	  mr        r3, r26
	  mr        r4, r25
	  mr        r6, r8
	  bl        -0x1840
	  b         .loc_0xF4

	.loc_0xBC:
	  lwz       r5, 0x0(r28)
	  mr        r3, r25
	  mr        r4, r26
	  mr        r6, r7
	  mr        r7, r8
	  bl        -0x185C
	  lwz       r4, 0x0(r28)
	  mr        r3, r25
	  bl        -0x1968
	  cmplw     r27, r25
	  beq-      .loc_0xF4
	  lwz       r4, 0x0(r28)
	  mr        r3, r27
	  bl        -0x197C

	.loc_0xF4:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  li        r0, 0
	  li        r30, 0x702
	  stw       r0, 0x0(r28)

	.loc_0x10C:
	  lis       r3, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r3, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  mr        r3, r30
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x14C:
	*/
}

/**
 * @note Address: 0x800BF5F8
 * @note Size: 0x4C
 */
DSError TRKTargetReadInstruction(void* data, u32 start)
{
	DSError error;
	size_t registersLength = 4;

	error = TRKTargetAccessMemory(data, start, &registersLength, MEMACCESS_UserMemory, TRUE);

	if (error == DS_NoError && registersLength != 4) {
		error = DS_InvalidMemory;
	}

	return error;
}

/**
 * @note Address: 0x800BF504
 * @note Size: 0xF4
 */
void TRKTargetAccessDefault(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0x24
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  ble-      .loc_0x28
	  li        r3, 0x701
	  b         .loc_0xDC

	.loc_0x28:
	  lis       r6, 0x804A
	  sub       r4, r4, r3
	  addi      r30, r6, 0x68BC
	  lis       r6, 0x804F
	  lwz       r9, 0xC(r30)
	  li        r8, 0
	  addi      r12, r4, 0x1
	  lwz       r11, 0x0(r30)
	  lwz       r10, 0x4(r30)
	  cmpwi     r7, 0
	  lwz       r7, 0x8(r30)
	  rlwinm    r0,r12,2,0,29
	  stb       r8, 0xD(r30)
	  rlwinm    r4,r3,2,0,29
	  addi      r3, r6, 0x4328
	  stw       r11, 0x8(r1)
	  add       r4, r3, r4
	  stw       r10, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r9, 0x14(r1)
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x90
	  mr        r3, r5
	  mr        r5, r12
	  bl        -0x3A90
	  b         .loc_0x9C

	.loc_0x90:
	  mr        r3, r5
	  mr        r5, r12
	  bl        -0x3D10

	.loc_0x9C:
	  lbz       r0, 0xD(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r31)

	.loc_0xB4:
	  lis       r4, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0xDC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x800BEFF8
 * @note Size: 0x50C
 */
DSError TRKTargetAccessFP(u32 firstRegister, u32 lastRegister, MessageBuffer* b, size_t* registersLengthPtr, BOOL read)
{
	DSError error;
	u32 uVar6;
	u64 temp;
	TRKExceptionStatus tempExceptionStatus;

	if (lastRegister > 0x21) {
		return DS_InvalidRegister;
	}

	tempExceptionStatus                   = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected = FALSE;

	uVar6 = __TRK_get_MSR();
	__TRK_set_MSR(uVar6 | 0x2000);
	temp                = firstRegister;
	*registersLengthPtr = 0;
	error               = DS_NoError;

	while (firstRegister <= lastRegister && error == DS_NoError) {
		if (read) {
			TRKPPCAccessFPRegister(&temp, firstRegister, read);
			error = TRKAppendBuffer1_ui64(b, temp);
		} else {
			TRKReadBuffer1_ui64(b, &temp);
			error = TRKPPCAccessFPRegister(&temp, firstRegister, read);
		}

		firstRegister++;
		*registersLengthPtr += 8;
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*registersLengthPtr = 0;
		error               = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stmw      r20, 0xC0(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x21
	  mr        r20, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  ble-      .loc_0x34
	  li        r3, 0x701
	  b         .loc_0x4F8

	.loc_0x34:
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r27, r3, 0x68BC
	  lwz       r3, 0xC(r27)
	  lwz       r6, 0x0(r27)
	  lwz       r5, 0x4(r27)
	  lwz       r4, 0x8(r27)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  stb       r0, 0xD(r27)
	  bl        -0x11B4
	  ori       r3, r3, 0x2000
	  bl        -0x11B4
	  li        r0, 0
	  mr        r21, r20
	  stw       r0, 0x0(r30)
	  rlwinm    r26,r20,21,0,10
	  addi      r25, r1, 0x98
	  addi      r24, r1, 0x48
	  addi      r23, r1, 0x70
	  addi      r22, r1, 0x20
	  li        r3, 0
	  b         .loc_0x4A8

	.loc_0x98:
	  cmpwi     r31, 0
	  beq-      .loc_0x298
	  lis       r3, 0x8048
	  cmplwi    r21, 0x20
	  subi      r12, r3, 0x6400
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x98(r1)
	  stw       r10, 0x9C(r1)
	  stw       r9, 0xA0(r1)
	  stw       r8, 0xA4(r1)
	  stw       r7, 0xA8(r1)
	  stw       r6, 0xAC(r1)
	  stw       r5, 0xB0(r1)
	  stw       r4, 0xB4(r1)
	  stw       r3, 0xB8(r1)
	  stw       r0, 0xBC(r1)
	  bge-      .loc_0x148
	  cmpwi     r31, 0
	  oris      r0, r26, 0xC803
	  beq-      .loc_0x110
	  oris      r0, r26, 0xD803

	.loc_0x110:
	  lis       r3, 0x4E80
	  stw       r0, 0x98(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r25
	  stw       r0, 0xBC(r1)
	  li        r4, 0x28
	  bl        -0x1368
	  lis       r3, 0x804F
	  addi      r12, r1, 0x98
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  b         .loc_0x284

	.loc_0x148:
	  bne-      .loc_0x18C
	  cmpwi     r31, 0
	  beq-      .loc_0x160
	  addi      r3, r1, 0x8
	  bl        -0xF14
	  b         .loc_0x168

	.loc_0x160:
	  addi      r3, r1, 0x8
	  bl        -0xEFC

	.loc_0x168:
	  lwz       r4, 0x8(r1)
	  li        r0, 0
	  lwz       r5, 0xC(r1)
	  li        r3, -0x1
	  and       r0, r4, r0
	  and       r3, r5, r3
	  stw       r0, 0x8(r1)
	  stw       r3, 0xC(r1)
	  b         .loc_0x284

	.loc_0x18C:
	  cmplwi    r21, 0x21
	  bne-      .loc_0x284
	  cmpwi     r31, 0
	  bne-      .loc_0x1A4
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)

	.loc_0x1A4:
	  lis       r3, 0x8048
	  cmpwi     r31, 0
	  subi      r12, r3, 0x6450
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x48(r1)
	  stw       r10, 0x4C(r1)
	  stw       r9, 0x50(r1)
	  stw       r8, 0x54(r1)
	  stw       r7, 0x58(r1)
	  stw       r6, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r4, 0x64(r1)
	  stw       r3, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  beq-      .loc_0x21C
	  lis       r3, 0x7C9F
	  lis       r0, 0x9083
	  subi      r3, r3, 0x55A
	  stw       r0, 0x4C(r1)
	  stw       r3, 0x48(r1)
	  b         .loc_0x230

	.loc_0x21C:
	  lis       r3, 0x7C9F
	  lis       r4, 0x8083
	  subi      r0, r3, 0x45A
	  stw       r4, 0x48(r1)
	  stw       r0, 0x4C(r1)

	.loc_0x230:
	  lis       r4, 0x4E80
	  mr        r3, r24
	  addi      r0, r4, 0x20
	  li        r4, 0x28
	  stw       r0, 0x6C(r1)
	  bl        -0x1484
	  lis       r3, 0x804F
	  addi      r12, r1, 0x48
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  cmpwi     r31, 0
	  beq-      .loc_0x284
	  lwz       r3, 0x8(r1)
	  li        r4, 0
	  li        r0, -0x1
	  and       r3, r3, r0
	  and       r0, r4, r4
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)

	.loc_0x284:
	  lwz       r5, 0x8(r1)
	  mr        r3, r29
	  lwz       r6, 0xC(r1)
	  bl        -0x3628
	  b         .loc_0x494

	.loc_0x298:
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  bl        -0x3884
	  lis       r3, 0x8048
	  cmplwi    r21, 0x20
	  subi      r12, r3, 0x6400
	  li        r20, 0
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x70(r1)
	  stw       r10, 0x74(r1)
	  stw       r9, 0x78(r1)
	  stw       r8, 0x7C(r1)
	  stw       r7, 0x80(r1)
	  stw       r6, 0x84(r1)
	  stw       r5, 0x88(r1)
	  stw       r4, 0x8C(r1)
	  stw       r3, 0x90(r1)
	  stw       r0, 0x94(r1)
	  bge-      .loc_0x354
	  cmpwi     r31, 0
	  oris      r0, r26, 0xC803
	  beq-      .loc_0x318
	  oris      r0, r26, 0xD803

	.loc_0x318:
	  lis       r3, 0x4E80
	  stw       r0, 0x70(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r23
	  stw       r0, 0x94(r1)
	  li        r4, 0x28
	  bl        -0x1570
	  lis       r3, 0x804F
	  addi      r12, r1, 0x70
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  li        r20, 0
	  b         .loc_0x490

	.loc_0x354:
	  bne-      .loc_0x398
	  cmpwi     r31, 0
	  beq-      .loc_0x36C
	  addi      r3, r1, 0x8
	  bl        -0x1120
	  b         .loc_0x374

	.loc_0x36C:
	  addi      r3, r1, 0x8
	  bl        -0x1108

	.loc_0x374:
	  lwz       r4, 0x8(r1)
	  li        r0, 0
	  lwz       r5, 0xC(r1)
	  li        r3, -0x1
	  and       r0, r4, r0
	  and       r3, r5, r3
	  stw       r0, 0x8(r1)
	  stw       r3, 0xC(r1)
	  b         .loc_0x490

	.loc_0x398:
	  cmplwi    r21, 0x21
	  bne-      .loc_0x490
	  cmpwi     r31, 0
	  bne-      .loc_0x3B0
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)

	.loc_0x3B0:
	  lis       r3, 0x8048
	  cmpwi     r31, 0
	  subi      r12, r3, 0x6450
	  lwz       r11, 0x0(r12)
	  lwz       r10, 0x4(r12)
	  lwz       r9, 0x8(r12)
	  lwz       r8, 0xC(r12)
	  lwz       r7, 0x10(r12)
	  lwz       r6, 0x14(r12)
	  lwz       r5, 0x18(r12)
	  lwz       r4, 0x1C(r12)
	  lwz       r3, 0x20(r12)
	  lwz       r0, 0x24(r12)
	  stw       r11, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r9, 0x28(r1)
	  stw       r8, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r4, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  stw       r0, 0x44(r1)
	  beq-      .loc_0x428
	  lis       r3, 0x7C9F
	  lis       r0, 0x9083
	  subi      r3, r3, 0x55A
	  stw       r0, 0x24(r1)
	  stw       r3, 0x20(r1)
	  b         .loc_0x43C

	.loc_0x428:
	  lis       r3, 0x7C9F
	  lis       r4, 0x8083
	  subi      r0, r3, 0x45A
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)

	.loc_0x43C:
	  lis       r4, 0x4E80
	  mr        r3, r22
	  addi      r0, r4, 0x20
	  li        r4, 0x28
	  stw       r0, 0x44(r1)
	  bl        -0x1690
	  lis       r3, 0x804F
	  addi      r12, r1, 0x20
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  cmpwi     r31, 0
	  li        r20, 0
	  beq-      .loc_0x490
	  lwz       r4, 0x8(r1)
	  li        r3, -0x1
	  and       r0, r20, r20
	  and       r3, r4, r3
	  stw       r0, 0x8(r1)
	  stw       r3, 0xC(r1)

	.loc_0x490:
	  mr        r3, r20

	.loc_0x494:
	  lwz       r4, 0x0(r30)
	  addis     r26, r26, 0x20
	  addi      r21, r21, 0x1
	  addi      r0, r4, 0x8
	  stw       r0, 0x0(r30)

	.loc_0x4A8:
	  cmplw     r21, r28
	  bgt-      .loc_0x4B8
	  cmpwi     r3, 0
	  beq+      .loc_0x98

	.loc_0x4B8:
	  lbz       r0, 0xD(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x4D0
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r30)

	.loc_0x4D0:
	  lis       r4, 0x804A
	  lwz       r6, 0x10(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0x14(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0x4F8:
	  lmw       r20, 0xC0(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/**
 * @note Address: 0x800BEE88
 * @note Size: 0x170
 */
DSError TRKTargetAccessExtended1(u32 firstRegister, u32 lastRegister, MessageBuffer* b, size_t* registersLengthPtr, BOOL read)
{
	TRKExceptionStatus tempExceptionStatus;
	int error;
	u32* data;
	int count;

	if (lastRegister > 0x60) {
		return DS_InvalidRegister;
	}

	tempExceptionStatus                   = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected = FALSE;

	*registersLengthPtr = 0;

	if (firstRegister <= lastRegister) {
		data  = (u32*)&gTRKCPUState.Extended1 + firstRegister;
		count = lastRegister - firstRegister + 1;
		*registersLengthPtr += count * sizeof(u32);

		if (read) {
			error = TRKAppendBuffer_ui32(b, data, count);
		} else {

			if (data <= &gTRKCPUState.Extended1.TBU && (data + count - 1) >= &gTRKCPUState.Extended1.TBL) {
				gTRKRestoreFlags.TBR = 1;
			}

			if (data <= &gTRKCPUState.Extended1.DEC && (data + count - 1) >= &gTRKCPUState.Extended1.DEC) {
				gTRKRestoreFlags.DEC = 1;
			}
			error = TRKReadBuffer_ui32(b, data, count);
		}
	}
	if (gTRKExceptionStatus.exceptionDetected) {
		*registersLengthPtr = 0;
		error               = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;
	return error;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0x60
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  ble-      .loc_0x28
	  li        r3, 0x701
	  b         .loc_0x158

	.loc_0x28:
	  lis       r6, 0x804A
	  li        r0, 0
	  addi      r31, r6, 0x68BC
	  cmplw     r3, r4
	  lwz       r6, 0xC(r31)
	  lwz       r10, 0x0(r31)
	  lwz       r9, 0x4(r31)
	  lwz       r8, 0x8(r31)
	  stb       r0, 0xD(r31)
	  stw       r10, 0x8(r1)
	  stw       r9, 0xC(r1)
	  stw       r8, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r0, 0x0(r30)
	  bgt-      .loc_0x118
	  sub       r4, r4, r3
	  lis       r8, 0x804F
	  addi      r0, r4, 0x1
	  lwz       r4, 0x0(r30)
	  rlwinm    r6,r0,2,0,29
	  cmpwi     r7, 0
	  add       r4, r4, r6
	  addi      r7, r8, 0x4328
	  rlwinm    r3,r3,2,0,29
	  stw       r4, 0x0(r30)
	  add       r4, r7, r3
	  addi      r4, r4, 0x1A8
	  beq-      .loc_0xA8
	  mr        r3, r5
	  mr        r5, r0
	  bl        -0x342C
	  b         .loc_0x118

	.loc_0xA8:
	  addi      r3, r7, 0x1EC
	  cmplw     r4, r3
	  bgt-      .loc_0xD4
	  subi      r6, r6, 0x4
	  addi      r3, r7, 0x1E8
	  add       r6, r4, r6
	  cmplw     r6, r3
	  blt-      .loc_0xD4
	  lis       r3, 0x804A
	  li        r6, 0x1
	  stb       r6, 0x68B0(r3)

	.loc_0xD4:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4328
	  addi      r6, r3, 0x278
	  cmplw     r4, r6
	  bgt-      .loc_0x10C
	  rlwinm    r3,r0,2,0,29
	  subi      r3, r3, 0x4
	  add       r3, r4, r3
	  cmplw     r3, r6
	  blt-      .loc_0x10C
	  lis       r3, 0x804A
	  li        r6, 0x1
	  addi      r3, r3, 0x68B0
	  stb       r6, 0x1(r3)

	.loc_0x10C:
	  mr        r3, r5
	  mr        r5, r0
	  bl        -0x3710

	.loc_0x118:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x130
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r30)

	.loc_0x130:
	  lis       r4, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0x158:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x800BEA50
 * @note Size: 0x438
 */
DSError TRKTargetAccessExtended2(u32 firstRegister, u32 lastRegister, MessageBuffer* b, size_t* registersLengthPtr, BOOL read)
{
	TRKExceptionStatus tempExceptionStatus;
	DSError error;
	u32 temp2;
	u64 temp;

	if (lastRegister > 0x1f) {
		return DS_InvalidRegister;
	}

	tempExceptionStatus                   = gTRKExceptionStatus;
	gTRKExceptionStatus.exceptionDetected = FALSE;

	TRKPPCAccessSPR(&temp2, 0x398, TRUE);
	temp2 |= 0xA0000000;
	TRKPPCAccessSPR(&temp2, 0x398, TRUE);
	temp2 = 0;
	TRKPPCAccessSPR(&temp2, 0x390, FALSE);
	*registersLengthPtr = 0;
	error               = DS_NoError;

	while (firstRegister <= lastRegister && error == DS_NoError) {
		if (read) {
			error = TRKPPCAccessPairedSingleRegister(&temp2, firstRegister, read);
			error = TRKAppendBuffer1_ui64(b, temp);
		} else {
			error = TRKReadBuffer1_ui64(b, &temp);
			error = TRKPPCAccessPairedSingleRegister(&temp, firstRegister, read);
		}

		firstRegister++;
		*registersLengthPtr += 8;
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*registersLengthPtr = 0;
		error               = DS_CWDSException;
	}

	gTRKExceptionStatus = tempExceptionStatus;

	return error;
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stmw      r19, 0xFC(r1)
	  mr        r23, r4
	  cmplwi    r23, 0x1F
	  mr        r27, r3
	  mr        r24, r5
	  mr        r25, r6
	  mr        r26, r7
	  ble-      .loc_0x34
	  li        r3, 0x701
	  b         .loc_0x424

	.loc_0x34:
	  lis       r3, 0x8048
	  lis       r5, 0x804A
	  subi      r29, r3, 0x6450
	  lis       r4, 0x7C99
	  lwz       r0, 0x0(r29)
	  addi      r31, r5, 0x68BC
	  lwz       r8, 0x4(r29)
	  lis       r3, 0x4E80
	  lwz       r7, 0x24(r29)
	  subi      r6, r4, 0x1D5A
	  stw       r0, 0xC4(r1)
	  addi      r0, r3, 0x20
	  lwz       r19, 0x0(r31)
	  li        r30, 0
	  lwz       r22, 0xC(r31)
	  lis       r5, 0x9083
	  stw       r8, 0xC8(r1)
	  addi      r3, r1, 0xC4
	  lwz       r20, 0x4(r31)
	  li        r4, 0x28
	  stw       r7, 0xE8(r1)
	  lwz       r21, 0x8(r31)
	  lwz       r28, 0x8(r29)
	  lwz       r12, 0xC(r29)
	  lwz       r11, 0x10(r29)
	  lwz       r10, 0x14(r29)
	  lwz       r9, 0x18(r29)
	  lwz       r8, 0x1C(r29)
	  lwz       r7, 0x20(r29)
	  stw       r19, 0x14(r1)
	  stw       r20, 0x18(r1)
	  stw       r21, 0x1C(r1)
	  stw       r22, 0x20(r1)
	  stb       r30, 0xD(r31)
	  stw       r28, 0xCC(r1)
	  stw       r12, 0xD0(r1)
	  stw       r11, 0xD4(r1)
	  stw       r10, 0xD8(r1)
	  stw       r9, 0xDC(r1)
	  stw       r8, 0xE0(r1)
	  stw       r7, 0xE4(r1)
	  stw       r6, 0xC4(r1)
	  stw       r5, 0xC8(r1)
	  stw       r0, 0xE8(r1)
	  bl        -0xD7C
	  lis       r3, 0x804F
	  addi      r12, r1, 0xC4
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8048
	  lwz       r5, 0x8(r1)
	  subi      r29, r3, 0x6450
	  lis       r4, 0x7C99
	  lwz       r8, 0x0(r29)
	  lis       r3, 0x4E80
	  lwz       r0, 0x4(r29)
	  oris      r30, r5, 0xA000
	  lwz       r7, 0x24(r29)
	  subi      r5, r4, 0x1C5A
	  stw       r0, 0xA0(r1)
	  addi      r0, r3, 0x20
	  lwz       r28, 0x8(r29)
	  lis       r6, 0x8083
	  stw       r8, 0x9C(r1)
	  addi      r3, r1, 0x9C
	  lwz       r12, 0xC(r29)
	  li        r4, 0x28
	  stw       r7, 0xC0(r1)
	  lwz       r11, 0x10(r29)
	  lwz       r10, 0x14(r29)
	  lwz       r9, 0x18(r29)
	  lwz       r8, 0x1C(r29)
	  lwz       r7, 0x20(r29)
	  stw       r30, 0x8(r1)
	  stw       r28, 0xA4(r1)
	  stw       r12, 0xA8(r1)
	  stw       r11, 0xAC(r1)
	  stw       r10, 0xB0(r1)
	  stw       r9, 0xB4(r1)
	  stw       r8, 0xB8(r1)
	  stw       r7, 0xBC(r1)
	  stw       r6, 0x9C(r1)
	  stw       r5, 0xA0(r1)
	  stw       r0, 0xC0(r1)
	  bl        -0xE24
	  lis       r3, 0x804F
	  addi      r12, r1, 0x9C
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8048
	  lis       r4, 0x7C91
	  subi      r29, r3, 0x6450
	  lis       r3, 0x4E80
	  lwz       r8, 0x0(r29)
	  li        r30, 0
	  lwz       r6, 0x4(r29)
	  subi      r5, r4, 0x1C5A
	  lwz       r7, 0x24(r29)
	  addi      r0, r3, 0x20
	  stw       r6, 0x78(r1)
	  lis       r6, 0x8083
	  lwz       r28, 0x8(r29)
	  addi      r3, r1, 0x74
	  stw       r8, 0x74(r1)
	  li        r4, 0x28
	  lwz       r12, 0xC(r29)
	  stw       r7, 0x98(r1)
	  lwz       r11, 0x10(r29)
	  lwz       r10, 0x14(r29)
	  lwz       r9, 0x18(r29)
	  lwz       r8, 0x1C(r29)
	  lwz       r7, 0x20(r29)
	  stw       r30, 0x8(r1)
	  stw       r28, 0x7C(r1)
	  stw       r12, 0x80(r1)
	  stw       r11, 0x84(r1)
	  stw       r10, 0x88(r1)
	  stw       r9, 0x8C(r1)
	  stw       r8, 0x90(r1)
	  stw       r7, 0x94(r1)
	  stw       r6, 0x74(r1)
	  stw       r5, 0x78(r1)
	  stw       r0, 0x98(r1)
	  bl        -0xEC8
	  lis       r3, 0x804F
	  addi      r12, r1, 0x74
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  rlwinm    r30,r27,21,0,10
	  stw       r0, 0x0(r25)
	  addi      r29, r1, 0x4C
	  addi      r28, r1, 0x24
	  li        r3, 0
	  b         .loc_0x3D4

	.loc_0x268:
	  cmpwi     r26, 0
	  beq-      .loc_0x318
	  lis       r3, 0x8048
	  lwzu      r12, -0x6428(r3)
	  oris      r0, r30, 0xE003
	  lwz       r11, 0x4(r3)
	  lwz       r10, 0x8(r3)
	  lwz       r9, 0xC(r3)
	  lwz       r8, 0x10(r3)
	  lwz       r7, 0x14(r3)
	  lwz       r6, 0x18(r3)
	  lwz       r5, 0x1C(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x24(r3)
	  stw       r12, 0x4C(r1)
	  stw       r11, 0x50(r1)
	  stw       r10, 0x54(r1)
	  stw       r9, 0x58(r1)
	  stw       r8, 0x5C(r1)
	  stw       r7, 0x60(r1)
	  stw       r6, 0x64(r1)
	  stw       r5, 0x68(r1)
	  stw       r4, 0x6C(r1)
	  stw       r3, 0x70(r1)
	  beq-      .loc_0x2D0
	  oris      r0, r30, 0xF003

	.loc_0x2D0:
	  lis       r3, 0x4E80
	  stw       r0, 0x4C(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r29
	  stw       r0, 0x70(r1)
	  li        r4, 0x28
	  bl        -0xF80
	  lis       r3, 0x804F
	  addi      r12, r1, 0x4C
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0xC
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xC(r1)
	  mr        r3, r24
	  lwz       r6, 0x10(r1)
	  bl        -0x3100
	  b         .loc_0x3C0

	.loc_0x318:
	  mr        r3, r24
	  addi      r4, r1, 0xC
	  bl        -0x335C
	  lis       r3, 0x8048
	  lwzu      r12, -0x6428(r3)
	  cmpwi     r26, 0
	  oris      r0, r30, 0xE003
	  lwz       r11, 0x4(r3)
	  lwz       r10, 0x8(r3)
	  lwz       r9, 0xC(r3)
	  lwz       r8, 0x10(r3)
	  lwz       r7, 0x14(r3)
	  lwz       r6, 0x18(r3)
	  lwz       r5, 0x1C(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x24(r3)
	  stw       r12, 0x24(r1)
	  stw       r11, 0x28(r1)
	  stw       r10, 0x2C(r1)
	  stw       r9, 0x30(r1)
	  stw       r8, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r4, 0x44(r1)
	  stw       r3, 0x48(r1)
	  beq-      .loc_0x388
	  oris      r0, r30, 0xF003

	.loc_0x388:
	  lis       r3, 0x4E80
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x20
	  mr        r3, r28
	  stw       r0, 0x48(r1)
	  li        r4, 0x28
	  bl        -0x1038
	  lis       r3, 0x804F
	  addi      r12, r1, 0x24
	  addi      r4, r3, 0x47EC
	  addi      r3, r1, 0xC
	  mtctr     r12
	  bctrl
	  li        r3, 0

	.loc_0x3C0:
	  lwz       r4, 0x0(r25)
	  addis     r30, r30, 0x20
	  addi      r27, r27, 0x1
	  addi      r0, r4, 0x8
	  stw       r0, 0x0(r25)

	.loc_0x3D4:
	  cmplw     r27, r23
	  bgt-      .loc_0x3E4
	  cmpwi     r3, 0
	  beq+      .loc_0x268

	.loc_0x3E4:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x3FC
	  li        r0, 0
	  li        r3, 0x702
	  stw       r0, 0x0(r25)

	.loc_0x3FC:
	  lis       r4, 0x804A
	  lwz       r6, 0x14(r1)
	  addi      r7, r4, 0x68BC
	  lwz       r5, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r0, 0x20(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)

	.loc_0x424:
	  lmw       r19, 0xFC(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void TRKTargetVersions(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void TRKTargetSupportMask(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void TRKTargetCPUType(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void TRKTargetCheckException(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BE9A4
 * @note Size: 0xAC
 */
void TRKPostInterruptEvent(void)
{
	int eventType;
	int local_14;
	size_t registerSize;
	TRKEvent event;

	if (gTRKState.inputActivated) {
		gTRKState.inputActivated = FALSE;
	} else {
		switch (gTRKCPUState.Extended1.exceptionID & 0xFFFF) {
		case 0xd00:
		case 0x700:
			registerSize = 4;
			TRKTargetReadInstruction(&local_14, gTRKCPUState.Default.PC);

			if (local_14 == 0xfe00000) {
				eventType = NUBEVENT_Support;
			} else {
				eventType = NUBEVENT_Breakpoint;
			}
			break;
		default:
			eventType = NUBEVENT_Exception;
			break;
		}

		TRKConstructEvent(&event, eventType);
		TRKPostEvent(&event);
	}
}

/**
 * @note Address: 0x800BE814
 * @note Size: 0x190
 */
DSError TRKTargetInterrupt(TRKEvent* event)
{
	DSError error = DS_NoError;
	switch (event->eventType) {
	case NUBEVENT_Breakpoint:
	case NUBEVENT_Exception:
		if (TRKTargetCheckStep() == FALSE) {
			TRKTargetSetStopped(TRUE);
			error = TRKDoNotifyStopped(DSMSG_NotifyStopped);
		}
		break;
	default:
		break;
	}

	return error;
}

/**
 * @note Address: 0x800BE788
 * @note Size: 0x8C
 */
u32* ConvertAddress(u32 addr) { return (u32*)(addr | 0x80000000); }
DSError TRKTargetAddStopInfo(MessageBuffer* b)
{
	DSError error;
	CommandReply reply;
	int t;

	memset(&reply, 0, 0x40);
	reply._00          = 0x40;
	reply.commandID.b  = 0x90;
	reply.replyError.r = gTRKCPUState.Default.PC;
	TRKTargetReadInstruction(&t, gTRKCPUState.Default.PC);

	reply._0C        = t;
	*(u32*)reply._10 = gTRKCPUState.Extended1.exceptionID & 0xFFFF;
	error            = TRKAppendBuffer_ui8(b, (u8*)&reply, 0x40);
	return error;
}

/**
 * @note Address: 0x800BE704
 * @note Size: 0x84
 */
void TRKTargetAddExceptionInfo(MessageBuffer* b)
{
	size_t local_58;
	u32 local_54;
	CommandReply reply;

	memset(&reply, 0, 0x40);

	reply._00          = 0x40;
	reply.commandID.b  = 0x91;
	reply.replyError.r = gTRKExceptionStatus.exceptionInfo.PC;

	TRKTargetReadInstruction(&local_54, gTRKExceptionStatus.exceptionInfo.PC);

	reply._0C        = local_54;
	*(u32*)reply._10 = gTRKExceptionStatus.exceptionInfo.exceptionID;

	TRKAppendBuffer_ui8(b, (u8*)&reply, 0x40);
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
inline DSError TRKTargetEnableTrace(BOOL val)
{
	if (val) {
		gTRKCPUState.Extended1.MSR = (gTRKCPUState.Extended1.MSR | 0x400);
	} else {
		gTRKCPUState.Extended1.MSR = (gTRKCPUState.Extended1.MSR & ~0x400);
	}
	return DS_NoError;
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
BOOL TRKTargetStepDone()
{
	BOOL result = TRUE;

	if (gTRKStepStatus.active && ((u16)gTRKCPUState.Extended1.exceptionID) == PPC_Trace) {
		switch (gTRKStepStatus.type) {
		case DSSTEP_IntoCount:
			if (gTRKStepStatus.count > 0) {
				result = FALSE;
			}
			break;
		case DSSTEP_IntoRange:
			if (gTRKCPUState.Default.PC >= gTRKStepStatus.rangeStart && gTRKCPUState.Default.PC <= gTRKStepStatus.rangeEnd) {
				result = FALSE;
			}
			break;
		default:
			break;
		}
	}

	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
inline DSError TRKTargetDoStep()
{
	gTRKStepStatus.active = TRUE;
	MWTRACE(1, "TargetDoStep()\n");
	TRKTargetEnableTrace(TRUE);

	if (gTRKStepStatus.type == DSSTEP_IntoCount || gTRKStepStatus.type == DSSTEP_OverCount) {
		gTRKStepStatus.count--;
	}

	TRKTargetSetStopped(FALSE);
	return DS_NoError;
}

/**
 * @note Address: N/A
 * @note Size: 0x148
 */
static BOOL TRKTargetCheckStep()
{
	if (gTRKStepStatus.active) {
		TRKTargetEnableTrace(FALSE);

		if (TRKTargetStepDone()) {
			gTRKStepStatus.active = FALSE;
		} else {
			TRKTargetDoStep();
		}
	}

	return gTRKStepStatus.active;
}

/**
 * @note Address: 0x800BE658
 * @note Size: 0xAC
 */
DSError TRKTargetSingleStep(u32 count, BOOL stepOver)
{
	DSError error = DS_NoError;

	if (stepOver) {
		error = DS_UnsupportedError;
	} else {
		gTRKStepStatus.count = count;
		gTRKStepStatus.type  = DSSTEP_IntoCount;
		error                = TRKTargetDoStep();
	}

	return error;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x20
	  li        r3, 0x703
	  b         .loc_0x98

	.loc_0x20:
	  lis       r5, 0x804A
	  lis       r4, 0x8048
	  addi      r31, r5, 0x68CC
	  li        r0, 0x1
	  li        r5, 0
	  stw       r3, 0x8(r31)
	  subi      r4, r4, 0x63D8
	  li        r3, 0x1
	  stw       r5, 0x4(r31)
	  stw       r0, 0x0(r31)
	  crclr     6, 0x6
	  bl        0x2EA4
	  lis       r3, 0x804F
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x4328
	  lwz       r0, 0x1F8(r3)
	  cmpwi     r4, 0
	  ori       r0, r0, 0x400
	  stw       r0, 0x1F8(r3)
	  beq-      .loc_0x78
	  cmpwi     r4, 0x10
	  bne-      .loc_0x84

	.loc_0x78:
	  lwz       r3, 0x8(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0x8(r31)

	.loc_0x84:
	  lis       r3, 0x804F
	  li        r0, 0
	  addi      r4, r3, 0x4284
	  li        r3, 0
	  stw       r0, 0x98(r4)

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @note Address: 0x800BE5A0
 * @note Size: 0xB8
 */
DSError TRKTargetStepOutOfRange(u32 rangeStart, u32 rangeEnd, BOOL stepOver)
{
	DSError error = DS_NoError;

	if (stepOver) {
		// Stepping over isn't supported for PowerPC
		error = DS_UnsupportedError;
	} else {
		gTRKStepStatus.type = DSSTEP_IntoRange;
		// gTRKStepStatus.active = TRUE;
		gTRKStepStatus.rangeStart = rangeStart;
		gTRKStepStatus.rangeEnd   = rangeEnd;
		error                     = TRKTargetDoStep();
	}

	return error;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x20
	  li        r3, 0x703
	  b         .loc_0xA4

	.loc_0x20:
	  lis       r6, 0x804A
	  lis       r5, 0x8048
	  addi      r31, r6, 0x68CC
	  li        r6, 0x1
	  stw       r3, 0xC(r31)
	  subi      r0, r5, 0x63D8
	  li        r3, 0x1
	  stw       r4, 0x10(r31)
	  mr        r4, r0
	  stw       r6, 0x4(r31)
	  stw       r6, 0x0(r31)
	  crclr     6, 0x6
	  bl        0x2F58
	  lis       r3, 0x804F
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x4328
	  lwz       r0, 0x1F8(r3)
	  cmpwi     r4, 0
	  ori       r0, r0, 0x400
	  stw       r0, 0x1F8(r3)
	  beq-      .loc_0x7C
	  cmpwi     r4, 0x10
	  bne-      .loc_0x90

	.loc_0x7C:
	  lis       r3, 0x804A
	  addi      r4, r3, 0x68CC
	  lwz       r3, 0x8(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x8(r4)

	.loc_0x90:
	  lis       r3, 0x804F
	  li        r0, 0
	  addi      r4, r3, 0x4284
	  li        r3, 0
	  stw       r0, 0x98(r4)

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/**
 * @note Address: 0x800BE590
 * @note Size: 0x10
 */
u32 TRKTargetGetPC(void) { return gTRKCPUState.Default.PC; }

/**
 * @note Address: 0x800BE390
 * @note Size: 0x200
 */

DSError TRKTargetSupportRequest()
{
	DSIOResult ioResult;
	size_t* length;
	MessageCommandID commandId;
	DSError error;
	u32 local_28;
	TRKEvent event;

	commandId = gTRKCPUState.Default.GPR[3];
	if (commandId != DSMSG_ReadFile && commandId != DSMSG_WriteFile && commandId != DSMSG_OpenFile && commandId != DSMSG_CloseFile
	    && commandId != DSMSG_PositionFile) {
		TRKConstructEvent(&event, 4);
		TRKPostEvent(&event);
		return DS_NoError;
	} else if (commandId == DSMSG_OpenFile) {
		error = HandleOpenFileSupportRequest(gTRKCPUState.Default.GPR[4], gTRKCPUState.Default.GPR[5] & 0xff, gTRKCPUState.Default.GPR[6],
		                                     &ioResult);

		if (ioResult == DS_IONoError && error != DS_NoError) {
			ioResult = DS_IOError;
		}

		gTRKCPUState.Default.GPR[3] = ioResult;
	} else if (commandId == DSMSG_CloseFile) {
		error = HandleCloseFileSupportRequest(gTRKCPUState.Default.GPR[4], &ioResult);

		if (ioResult == DS_IONoError && error != DS_NoError) {
			ioResult = DS_IOError;
		}

		gTRKCPUState.Default.GPR[3] = ioResult;
	} else if (commandId == DSMSG_PositionFile) {
		local_28 = *(u32*)gTRKCPUState.Default.GPR[5];
		error    = HandlePositionFileSupportRequest(gTRKCPUState.Default.GPR[4], &local_28, (u8)gTRKCPUState.Default.GPR[6], &ioResult);

		if (ioResult == DS_IONoError && error != DS_NoError) {
			ioResult = DS_IOError;
		}

		gTRKCPUState.Default.GPR[3]        = ioResult;
		*(u32*)gTRKCPUState.Default.GPR[5] = local_28;
	} else {
		length = (size_t*)gTRKCPUState.Default.GPR[5];
		error  = TRKSuppAccessFile(gTRKCPUState.Default.GPR[4], (u8*)gTRKCPUState.Default.GPR[6], length, &ioResult, TRUE,
                                  commandId == DSMSG_ReadFile);

		if (ioResult == DS_IONoError && error != DS_NoError) {
			ioResult = DS_IOError;
		}

		gTRKCPUState.Default.GPR[3] = ioResult;

		if (commandId == DSMSG_ReadFile) {
			TRK_flush_cache(gTRKCPUState.Default.GPR[6], *length);
		}
	}

	gTRKCPUState.Default.PC += 4;
	return error;

	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  addi      r31, r3, 0x4328
	  lwz       r27, 0xC(r31)
	  cmpwi     r27, 0xD1
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD0
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD2
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD3
	  beq-      .loc_0x60
	  cmpwi     r27, 0xD4
	  beq-      .loc_0x60
	  addi      r3, r1, 0x10
	  li        r4, 0x4
	  bl        -0x2F30
	  addi      r3, r1, 0x10
	  bl        -0x2F20
	  li        r3, 0
	  b         .loc_0x1EC

	.loc_0x60:
	  cmpwi     r27, 0xD2
	  bne-      .loc_0xB4
	  lis       r3, 0x804F
	  addi      r6, r1, 0xC
	  addi      r4, r3, 0x4328
	  lwz       r0, 0x14(r4)
	  lwz       r3, 0x10(r4)
	  lwz       r5, 0x18(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0xC28
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0xA8
	  cmpwi     r30, 0
	  beq-      .loc_0xA8
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0xA8:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0xC(r31)
	  b         .loc_0x1D4

	.loc_0xB4:
	  cmpwi     r27, 0xD3
	  bne-      .loc_0xFC
	  lis       r3, 0x804F
	  addi      r4, r1, 0xC
	  addi      r3, r3, 0x4328
	  lwz       r3, 0x10(r3)
	  bl        -0xD58
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0xF0
	  cmpwi     r30, 0
	  beq-      .loc_0xF0
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0xF0:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0xC(r31)
	  b         .loc_0x1D4

	.loc_0xFC:
	  cmpwi     r27, 0xD4
	  bne-      .loc_0x168
	  lis       r3, 0x804F
	  addi      r4, r1, 0x8
	  addi      r29, r3, 0x4328
	  addi      r6, r1, 0xC
	  lwz       r3, 0x14(r29)
	  lwz       r0, 0x18(r29)
	  lwz       r7, 0x0(r3)
	  lwz       r3, 0x10(r29)
	  rlwinm    r5,r0,0,24,31
	  stw       r7, 0x8(r1)
	  bl        -0xEC8
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0x150
	  cmpwi     r30, 0
	  beq-      .loc_0x150
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0x150:
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x8(r1)
	  stw       r3, 0xC(r31)
	  lwz       r3, 0x14(r29)
	  stw       r0, 0x0(r3)
	  b         .loc_0x1D4

	.loc_0x168:
	  lis       r3, 0x804F
	  subfic    r0, r27, 0xD1
	  addi      r29, r3, 0x4328
	  addi      r6, r1, 0xC
	  lwz       r28, 0x14(r29)
	  cntlzw    r0, r0
	  lwz       r3, 0x10(r29)
	  rlwinm    r8,r0,27,5,31
	  lwz       r4, 0x18(r29)
	  mr        r5, r28
	  li        r7, 0x1
	  bl        -0xA3C
	  lwz       r0, 0xC(r1)
	  mr        r30, r3
	  cmpwi     r0, 0
	  bne-      .loc_0x1B8
	  cmpwi     r30, 0
	  beq-      .loc_0x1B8
	  li        r0, 0x1
	  stw       r0, 0xC(r1)

	.loc_0x1B8:
	  lwz       r0, 0xC(r1)
	  cmpwi     r27, 0xD1
	  stw       r0, 0xC(r31)
	  bne-      .loc_0x1D4
	  lwz       r3, 0x18(r29)
	  lwz       r4, 0x0(r28)
	  bl        -0x7A8

	.loc_0x1D4:
	  lis       r4, 0x804F
	  mr        r3, r30
	  addi      r5, r4, 0x4328
	  lwz       r4, 0x80(r5)
	  addi      r0, r4, 0x4
	  stw       r0, 0x80(r5)

	.loc_0x1EC:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void TRKTargetFlushCache(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BE380
 * @note Size: 0x10
 */
BOOL TRKTargetStopped(void) { return gTRKState.isStopped; }

/**
 * @note Address: 0x800BE370
 * @note Size: 0x10
 */
void TRKTargetSetStopped(uint stopped)
{
	gTRKState.isStopped = stopped;
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  addi      r4, r4, 0x4284
	  stw       r3, 0x98(r4)
	  blr
	*/
}

/**
 * @note Address: 0x800BE358
 * @note Size: 0x18
 */
BOOL TRKTargetStop()
{
	gTRKState.isStopped = 1;
	return FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
DSError TRKPPCAccessSPR(void* srcDestPtr, u32 spr, BOOL read)
{
	// all nop by default
	u32 instructionData[] = {
		INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP,
	};

	if (read) {
		instructionData[0] = INSTR_MFSPR(4, spr); // mfspr r4, spr
		instructionData[1] = INSTR_STW(4, 0, 3);  // stw r4, 0(r3)
	} else {
		instructionData[0] = INSTR_LWZ(4, 0, 3);  // lwz r4, 0(r3)
		instructionData[1] = INSTR_MTSPR(spr, 4); // mtspr spr, r4
	}

	return TRKPPCAccessSpecialReg(srcDestPtr, instructionData);
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
DSError TRKPPCAccessPairedSingleRegister(void* srcDestPtr, u32 psr, BOOL read)
{
	// all nop by default
	u32 instructionData[]
	    = { INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP };

	if (read) {
		instructionData[0] = INSTR_PSQ_ST(psr, 0, 3, 0, 0); // psq_st psr, 0(r3), 0, 0
	} else {
		instructionData[0] = INSTR_PSQ_L(psr, 0, 3, 0, 0); // psq_l psr, 0(r3), 0, 0
	}

	return TRKPPCAccessSpecialReg(srcDestPtr, instructionData);
}

/**
 * @note Address: N/A
 * @note Size: 0x21C
 */
DSError TRKPPCAccessFPRegister(void* srcDestPtr, u32 fpr, BOOL read)
{
	DSError error = DS_NoError;
	// all nop by default
	u32 instructionData1[]
	    = { INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP, INSTR_NOP };

	if (fpr < 0x20) {
		if (read) {
			instructionData1[0] = INSTR_STFD(fpr, 0, 3); // stfd fpr, 0(r3)
		} else {
			instructionData1[0] = INSTR_LFD(fpr, 0, 3); // lfd fpr, 0(r3)
		}

		error = TRKPPCAccessSpecialReg(srcDestPtr, instructionData1);
	} else if (fpr == 0x20) {
		if (read) {
			ReadFPSCR(srcDestPtr);
		} else {
			WriteFPSCR(srcDestPtr);
		}

		*(u64*)srcDestPtr &= 0xFFFFFFFF;
	} else if (fpr == 0x21) {
		if (!read) {
			*(u32*)srcDestPtr = *(u32*)((u32)srcDestPtr + 4);
		}

		error = TRKPPCAccessSPR(srcDestPtr, SPR_FPECR, read);

		if (read) {
			*(u64*)srcDestPtr = (*(u64*)srcDestPtr >> 32) & 0xFFFFFFFF;
		}
	}

	return error;
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
DSError TRKPPCAccessSpecialReg(void* srcDestPtr, u32* instructionData)
{
	instructionData[9] = INSTR_BLR; // Set the last entry as blr
	TRK_flush_cache((u32)instructionData, 0x28);
	// Call the instruction data array as code
	((RegAccessFunc)instructionData)(srcDestPtr, TRKvalue128_temp);
	return DS_NoError;
}

/**
 * @note Address: 0x800BE348
 * @note Size: 0x10
 */
void TRKTargetSetInputPendingPtr(void* ptr) { gTRKState.inputPendingPtr = ptr; }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void SetInputState(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void TRKGetInTRKFlag(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BE284
 * @note Size: 0xC4
 */
DSError TRKTargetAccessARAM(u32 p1, u32 p2, u32* p3, BOOL read)
{
	DSError err;
	TRKExceptionStatus status;

	err    = DS_NoError;
	status = gTRKExceptionStatus;

	gTRKExceptionStatus.exceptionDetected = 0;

	if (read) {
		TRK__read_aram(p1, p2, p3);
	} else {
		TRK__write_aram(p1, p2, p3);
	}

	if (gTRKExceptionStatus.exceptionDetected) {
		*p3 = 0;
		err = 0x702;
	}
	gTRKExceptionStatus = status;
	return err;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  cmpwi     r6, 0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stw       r31, 0x2C(r1)
	  addi      r31, r7, 0x68BC
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r5
	  lwz       r6, 0xC(r31)
	  lwz       r9, 0x0(r31)
	  lwz       r8, 0x4(r31)
	  lwz       r7, 0x8(r31)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stb       r0, 0xD(r31)
	  beq-      .loc_0x60
	  bl        0x1E0C
	  b         .loc_0x64

	.loc_0x60:
	  bl        0x1C18

	.loc_0x64:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  li        r0, 0
	  li        r30, 0x702
	  stw       r0, 0x0(r29)

	.loc_0x7C:
	  lis       r3, 0x804A
	  lwz       r6, 0x8(r1)
	  addi      r7, r3, 0x68BC
	  lwz       r5, 0xC(r1)
	  lwz       r4, 0x10(r1)
	  mr        r3, r30
	  lwz       r0, 0x14(r1)
	  stw       r6, 0x0(r7)
	  stw       r5, 0x4(r7)
	  stw       r4, 0x8(r7)
	  stw       r0, 0xC(r7)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/**
 * @note Address: 0x800BE260
 * @note Size: 0x24
 */
#ifdef __MWERKS__ // clang-format off
asm void WriteFPSCR(register f64*){
	nofralloc
	stwu	r1, -0x40(r1)
	stfd	f31, 0x10(r1)
	psq_st	f31, 0x20(r1), 0, 0
	lfd		f31, 0(r3)
	mtfsf	0xff, f31
	psq_l	f31, 0x20(r1), 0, 0
	lfd		f31, 0x10(r1)
	addi	r1,	r1, 0x40
	blr 
}
#endif // clang-format on

/**
 * @note Address: 0x800BE23C
 * @note Size: 0x24
 */
#ifdef __MWERKS__ // clang-format off
asm void ReadFPSCR(register f64*)
{
	nofralloc
	stwu	r1, -0x40(r1)
	stfd	f31, 0x10(r1)
	psq_st	f31, 0x20(r1),0,0
	mffs	f31
	stfd	f31, 0x0(r3)
	psq_l	f31, 0x20(r1),0,0
	lfd		f31, 0x10(r1)
	addi	r1, r1, 0x40
	blr
	
}
#endif // clang-format on

/**
 * @note Address: 0x800BE1E8
 * @note Size: 0x54
 */
void TRKInterruptHandlerEnableInterrupts(void)
{
	/*
	.loc_0x0:
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r0, 0x8C(r2)
	  sync
	  mtmsr     r0
	  sync
	  lwz       r0, 0x80(r2)
	  mtlr      r0
	  lwz       r0, 0x84(r2)
	  mtctr     r0
	  lwz       r0, 0x88(r2)
	  mtxer     r0
	  lwz       r0, 0x94(r2)
	  mtdsisr   r0
	  lwz       r0, 0x90(r2)
	  mtdar     r0
	  lmw       r3, 0xC(r2)
	  lwz       r0, 0x0(r2)
	  lwz       r1, 0x4(r2)
	  lwz       r2, 0x8(r2)
	  b         0x76C
	*/
}

/**
 * @note Address: 0x800BE124
 * @note Size: 0xC4
 */
void TRKSwapAndGo(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  ori       r3, r3, 0x4284
	  stmw      r0, 0x0(r3)
	  mfmsr     r0
	  stw       r0, 0x8C(r3)
	  mflr      r0
	  stw       r0, 0x80(r3)
	  mfctr     r0
	  stw       r0, 0x84(r3)
	  mfxer     r0
	  stw       r0, 0x88(r3)
	  mfdsisr   r0
	  stw       r0, 0x94(r3)
	  mfdar     r0
	  stw       r0, 0x90(r3)
	  li        r1, -0x7FFE
	  not       r1, r1
	  mfmsr     r3
	  and       r3, r3, r1
	  mtmsr     r3
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r2, 0xA0(r2)
	  lbz       r2, 0x0(r2)
	  cmpwi     r2, 0
	  beq-      .loc_0x7C
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  li        r3, 0x1
	  stb       r3, 0x9C(r2)
	  b         .loc_0xC4

	.loc_0x7C:
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  li        r3, 0
	  stb       r3, 0xC(r2)
	  bl        0x1A68
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  lmw       r27, 0x80(r2)
	  mtsrr0    r27
	  mtlr      r28
	  mtcr      r29
	  mtctr     r30
	  mtxer     r31
	  lmw       r3, 0xC(r2)
	  lwz       r0, 0x0(r2)
	  lwz       r1, 0x4(r2)
	  lwz       r2, 0x8(r2)
	  rfi

	.loc_0xC4:
	*/
}

/**
 * @note Address: 0x800BE088
 * @note Size: 0x9C
 */
static void TRKExceptionHandler(u16)
{
	/*
	.loc_0x0:
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  sth       r3, 0x8(r2)
	  mfsrr0    r3
	  stw       r3, 0x0(r2)
	  lhz       r3, 0x8(r2)
	  cmpwi     r3, 0x200
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x300
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x400
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x600
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x700
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x800
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1000
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1100
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1200
	  beq-      .loc_0x6C
	  cmpwi     r3, 0x1300
	  beq-      .loc_0x6C
	  b         .loc_0x78

	.loc_0x6C:
	  mfsrr0    r3
	  addi      r3, r3, 0x4
	  mtsrr0    r3

	.loc_0x78:
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  li        r3, 0x1
	  stb       r3, 0xD(r2)
	  mfsprg    r3, 0x3
	  mtcr      r3
	  mfsprg    r2, 0x1
	  mfsprg    r3, 0x2
	  rfi
	*/
}

/**
 * @note Address: 0x800BDEF4
 * @note Size: 0x194
 */
void TRKInterruptHandler(void)
{
	/*
	.loc_0x0:
	  mtsrr0    r2
	  mtsrr1    r4
	  mfsprg    r4, 0x3
	  mfcr      r2
	  mtsprg    3, r2
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r2, 0x8C(r2)
	  ori       r2, r2, 0x8002
	  xori      r2, r2, 0x8002
	  sync
	  mtmsr     r2
	  sync
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4280
	  sth       r3, 0x0(r2)
	  cmpwi     r3, 0x500
	  bne-      .loc_0xC8
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  mflr      r3
	  stw       r3, 0x42C(r2)
	  bl        0x25A0
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  lwz       r3, 0x42C(r2)
	  mtlr      r3
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r2, 0xA0(r2)
	  lbz       r2, 0x0(r2)
	  cmpwi     r2, 0
	  beq-      .loc_0xAC
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  lbz       r2, 0xC(r2)
	  cmpwi     r2, 0x1
	  beq-      .loc_0xAC
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  li        r3, 0x1
	  stb       r3, 0x9C(r2)
	  b         .loc_0xC8

	.loc_0xAC:
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4758
	  lwz       r3, 0x88(r2)
	  mtcr      r3
	  lwz       r3, 0xC(r2)
	  lwz       r2, 0x8(r2)
	  rfi

	.loc_0xC8:
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4280
	  lhz       r3, 0x0(r2)
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  lbz       r2, 0xC(r2)
	  cmpwi     r2, 0
	  bne-      .loc_0x194
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4328
	  stw       r0, 0x0(r2)
	  stw       r1, 0x4(r2)
	  mfsprg    r0, 0x1
	  stw       r0, 0x8(r2)
	  sth       r3, 0x2F8(r2)
	  sth       r3, 0x2FA(r2)
	  mfsprg    r0, 0x2
	  stw       r0, 0xC(r2)
	  stmw      r4, 0x10(r2)
	  mfsrr0    r27
	  mflr      r28
	  mfsprg    r29, 0x3
	  mfctr     r30
	  mfxer     r31
	  stmw      r27, 0x80(r2)
	  bl        0x1A40
	  lis       r2, 0x804A
	  ori       r2, r2, 0x68BC
	  li        r3, 0x1
	  stb       r3, 0xC(r2)
	  lis       r2, 0x804F
	  ori       r2, r2, 0x4284
	  lwz       r0, 0x8C(r2)
	  sync
	  mtmsr     r0
	  sync
	  lwz       r0, 0x80(r2)
	  mtlr      r0
	  lwz       r0, 0x84(r2)
	  mtctr     r0
	  lwz       r0, 0x88(r2)
	  mtxer     r0
	  lwz       r0, 0x94(r2)
	  mtdsisr   r0
	  lwz       r0, 0x90(r2)
	  mtdar     r0
	  lmw       r3, 0xC(r2)
	  lwz       r0, 0x0(r2)
	  lwz       r1, 0x4(r2)
	  lwz       r2, 0x8(r2)
	  b         0x920

	.loc_0x194:
	*/
}

/**
 * @note Address: 0x800BDEB8
 * @note Size: 0x3C
 */

#ifdef __MWERKS__ // clang-format off
static asm void TRK_ppc_memcpy(register void* dest, register const void* src, register int n, register u32 param_4, register u32 param_5){
	#define msr		r8
	#define byte	r9
	#define count	r10
		nofralloc

		mfmsr msr
		li count, 0
	
	top_loop:
		cmpw count, n
		beq out_loop

		mtmsr param_5
		sync

		lbzx byte, count, src

		mtmsr param_4
		sync

		stbx byte, count, dest

		addi count, count, 1

		b top_loop
	out_loop:
		mtmsr msr
		sync

		blr
	#undef count
	#undef byte
	#undef msr
}
#endif // clang-format on

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT3L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT3U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT2L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT2U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT1L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT1U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT0L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_DBAT0U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT3L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT3U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT2L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT2U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT1L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT1U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT0L(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_IBAT0U(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void __TRK_get_PVR(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BDEB0
 * @note Size: 0x8
 */
#ifdef __MWERKS__ // clang-format off
asm void __TRK_set_MSR(register u32 v)
{
	mtmsr v
	blr
}
#endif // clang-format on

/**
 * @note Address: 0x800BDEA8
 * @note Size: 0x8
 */
#ifdef __MWERKS__ // clang-format off
asm u32 __TRK_get_MSR(void)
{
	nofralloc
	mfmsr r3
	blr
}
#endif // clang-format on
