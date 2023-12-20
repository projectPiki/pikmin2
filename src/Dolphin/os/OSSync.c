#include "Dolphin/os.h"

/**
 * @note Address: 0x800F17D4
 * @note Size: 0x20
 */
ASM static void SystemCallVector()
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	entry __OSSystemCallVectorStart
	mfspr r9, DBSR
	ori r10, r9, 8
	mtspr DBSR, r10
	isync
	sync
	mtspr DBSR, r9
	rfi

	entry __OSSystemCallVectorEnd
	nop
#endif // clang-format on
}

/**
 * @note Address: 0x800F17F4
 * @note Size: 0x64
 */
void __OSInitSystemCall()
{
	void* handler = OS_SYS_CALL_HANDLER;
	memcpy(handler, __OSSystemCallVectorStart, (u32)__OSSystemCallVectorEnd - (u32)__OSSystemCallVectorStart);

	DCFlushRangeNoSync(handler, OS_HANDLER_SLOT_SIZE);
#ifdef __MWERKS__ // clang-format off
	asm { sync }
#endif // clang-format on
	ICInvalidateRange(handler, OS_HANDLER_SLOT_SIZE);
}
