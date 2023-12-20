#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

// forward declarations.
static BOOL OnReset(BOOL final);

// Local reset function information.
static OSResetFunctionInfo ResetFunctionInfo = { OnReset, OS_RESET_PRIO_MEM };

// useful macros.
#define TRUNC(n, a) (((u32)(n)) & ~((a)-1))
#define ROUND(n, a) (((u32)(n) + (a)-1) & ~((a)-1))

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
static u32 OSGetPhysicalMemSize() { return *(u32*)(OSPhysicalToCached(0x28)); }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
static u32 OSGetConsoleSimulatedMemSize() { return *(u32*)(OSPhysicalToCached(0xF0)); }

/**
 * @note Address: 0x800EF794
 * @note Size: 0x3C
 */
static BOOL OnReset(BOOL final)
{
	if (final != FALSE) {
		__MEMRegs[MEM_PROT_TYPE] = 0xFF;
		__OSMaskInterrupts(OS_INTERRUPTMASK_MEM_RESET);
	}
	return TRUE;
}

/**
 * @note Address: 0x800EF7D0
 * @note Size: 0x6C
 */
static void MEMIntrruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	u32 addr;
	u32 cause;

	cause                      = __MEMRegs[MEM_INTRPT_SRC];
	addr                       = (((u32)__MEMRegs[MEM_INTRPT_ADDR_HI] & 0x3ff) << 16) | __MEMRegs[MEM_INTRPT_ADDR_LO];
	__MEMRegs[MEM_INTRPT_FLAG] = 0;

	if (__OSErrorTable[OS_ERROR_PROTECTION]) {
		__OSErrorTable[OS_ERROR_PROTECTION](OS_ERROR_PROTECTION, context, cause, addr);
		return;
	}

	__OSUnhandledException(OS_ERROR_PROTECTION, context, cause, addr);
}

/**
 * @note Address: 0x800EF83C
 * @note Size: 0xC4
 */
void OSProtectRange(u32 channel, void* addr, u32 numBytes, u32 control)
{
	BOOL enabled;
	u32 start;
	u32 end;
	u16 reg;
	if (channel >= 4) {
		return;
	}

	control &= OS_PROTECT_CONTROL_RDWR;

	end   = (u32)addr + numBytes;
	start = TRUNC(addr, 1u << 10);
	end   = ROUND(end, 1u << 10);

	DCFlushRange((void*)start, end - start);

	enabled = OSDisableInterrupts();

	__OSMaskInterrupts(OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_0 + channel));

	__MEMRegs[0 + 2 * channel] = (u16)(start >> 10);
	__MEMRegs[1 + 2 * channel] = (u16)(end >> 10);

	reg = __MEMRegs[MEM_PROT_TYPE];
	reg &= ~(OS_PROTECT_CONTROL_RDWR << 2 * channel);
	reg |= control << 2 * channel;
	__MEMRegs[MEM_PROT_TYPE] = reg;

	if (control != OS_PROTECT_CONTROL_RDWR) {
		__OSUnmaskInterrupts(OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_0 + channel));
	}

	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800EF900
 * @note Size: 0x80
 */
ASM static void Config24MB()
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	addi    r7,r0,0

	addis   r4,r0,0x00000002@ha
	addi    r4,r4,0x00000002@l
	addis   r3,r0,0x800001ff@ha
	addi    r3,r3,0x800001ff@l

	addis   r6,r0,0x01000002@ha
	addi    r6,r6,0x01000002@l
	addis   r5,r0,0x810000ff@ha
	addi    r5,r5,0x810000ff@l

	isync

	mtspr   dbat0u,r7
	mtspr   dbat0l,r4
	mtspr   dbat0u,r3
	isync

	mtspr   ibat0u,r7
	mtspr   ibat0l,r4
	mtspr   ibat0u,r3
	isync

	mtspr   dbat2u,r7
	mtspr   dbat2l,r6
	mtspr   dbat2u,r5
	isync

	mtspr   ibat2u,r7
	mtspr   ibat2l,r6
	mtspr   ibat2u,r5
	isync

	mfmsr   r3
	ori     r3, r3, 0x30
	mtsrr1  r3

	mflr    r3
	mtsrr0  r3
	rfi
#endif // clang-format on
}

/**
 * @note Address: 0x800EF980
 * @note Size: 0x80
 */
ASM static void Config48MB()
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	addi    r7,r0,0x0000

	addis   r4,r0,0x00000002@ha
	addi    r4,r4,0x00000002@l
	addis   r3,r0,0x800003ff@ha
	addi    r3,r3,0x800003ff@l

	addis   r6,r0,0x02000002@ha
	addi    r6,r6,0x02000002@l
	addis   r5,r0,0x820001ff@ha
	addi    r5,r5,0x820001ff@l

	isync

	mtspr   dbat0u,r7
	mtspr   dbat0l,r4
	mtspr   dbat0u,r3
	isync

	mtspr   ibat0u,r7
	mtspr   ibat0l,r4
	mtspr   ibat0u,r3
	isync

	mtspr   dbat2u,r7
	mtspr   dbat2l,r6
	mtspr   dbat2u,r5
	isync

	mtspr   ibat2u,r7
	mtspr   ibat2l,r6
	mtspr   ibat2u,r5
	isync

	mfmsr   r3
	ori     r3, r3, 0x30
	mtsrr1  r3

	mflr    r3
	mtsrr0  r3
	rfi
#endif // clang-format on
}

/**
 * @note Address: 0x800EFA00
 * @note Size: 0x18
 */
ASM static void RealMode(register u32 addr)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	clrlwi r3, r3, 2
	mtsrr0 r3
	mfmsr r3
	rlwinm r3, r3, 0, 28, 25
	mtsrr1 r3
	rfi
#endif // clang-format on
}

/**
 * @note Address: 0x800EFA18
 * @note Size: 0x118
 */
void __OSInitMemoryProtection()
{
	u32 padding[8];
	u32 simulatedSize;
	BOOL enabled;
	simulatedSize = OSGetConsoleSimulatedMemSize();
	enabled       = OSDisableInterrupts();

	__MEMRegs[MEM_INTRPT_FLAG] = 0;
	__MEMRegs[MEM_PROT_TYPE]   = 0xFF;

	__OSMaskInterrupts(OS_INTERRUPTMASK_MEM_0 | OS_INTERRUPTMASK_MEM_1 | OS_INTERRUPTMASK_MEM_2 | OS_INTERRUPTMASK_MEM_3);
	__OSSetInterruptHandler(__OS_INTERRUPT_MEM_0, MEMIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_MEM_1, MEMIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_MEM_2, MEMIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_MEM_3, MEMIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_MEM_ADDRESS, MEMIntrruptHandler);
	OSRegisterResetFunction(&ResetFunctionInfo);

	if (OSGetConsoleSimulatedMemSize() < OSGetPhysicalMemSize() && OSGetConsoleSimulatedMemSize() == 0x1800000) {
		DCInvalidateRange((void*)0x81800000, 0x1800000);
		__MEMRegs[MEM_UNK_FLAG] = 2;
	}

	if (simulatedSize <= 0x1800000) {
		RealMode((u32)&Config24MB);
	} else if (simulatedSize <= 0x3000000) {
		RealMode((u32)&Config48MB);
	}

	__OSUnmaskInterrupts(OS_INTERRUPTMASK_MEM_ADDRESS);
	OSRestoreInterrupts(enabled);
}
