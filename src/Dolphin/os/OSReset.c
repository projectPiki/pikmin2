#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

static OSResetQueue ResetFunctionQueue;
static u32 bootThisDol;

/**
 * @note Address: 0x800F02A4
 * @note Size: 0x84
 */
void OSRegisterResetFunction(OSResetFunctionInfo* info)
{
	OSResetFunctionInfo* tmp;
	OSResetFunctionInfo* iter;

	for (iter = ResetFunctionQueue.head; iter && iter->priority <= info->priority; iter = iter->next) {
		;
	}

	if (iter == nullptr) {
		tmp = ResetFunctionQueue.tail;
		if (tmp == nullptr) {
			ResetFunctionQueue.head = info;
		} else {
			tmp->next = info;
		}
		info->prev              = tmp;
		info->next              = nullptr;
		ResetFunctionQueue.tail = info;
		return;
	}

	info->next = iter;
	tmp        = iter->prev;
	iter->prev = info;
	info->prev = tmp;
	if (tmp == nullptr) {
		ResetFunctionQueue.head = info;
		return;
	}
	tmp->next = info;
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
BOOL __OSCallResetFunctions(BOOL final)
{
	OSResetFunctionInfo* iter;
	BOOL retCode = FALSE;

	for (iter = ResetFunctionQueue.head; (iter != nullptr && retCode == FALSE); iter = iter->next) {
		retCode |= !iter->func(final);
	}

	retCode |= !__OSSyncSram();

	if (retCode) {
		return FALSE;
	}
	return TRUE;
}

/**
 * @note Address: 0x800F0328
 * @note Size: 0x70
 */
ASM static void Reset(register s32 resetCode)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	b _jump1

_begin:
	mfspr r8, HID0
	ori r8, r8, 8
	mtspr HID0, r8
	isync
	sync
	nop
	b _preloop

_jump1:
	b _jump2

_preloop:
	mftb r5, 268
_loop:
	mftb r6, 268
	subf r7, r5, r6
	cmplwi r7, 0x1124
	blt _loop
	nop
	b _setPIReg

_jump2:
	b _jump3

_setPIReg:
	lis r8, 0xCC003000@h
	ori r8, r8, 0xCC003000@l
	li r4, 3
	stw r4, 0x24(r8)
	stw r3, 0x24(r8)
	nop
	b _noptrap

_jump3:
	b _jump4

_noptrap:
	nop
	b _noptrap

_jump4:
	b _begin
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
static void KillThreads()
{
	OSThread* thread;
	OSThread* next;

	for (thread = __OSActiveThreadQueue.head; thread; thread = next) {
		next = thread->linkActive.next;
		switch (thread->state) {
		case 1:
		case 4:
			OSCancelThread(thread);
			break;
		}
	}
}

/**
 * @note Address: 0x800F0398
 * @note Size: 0x48
 */
void __OSDoHotReset(s32 code)
{
	OSDisableInterrupts();
	__VIRegs[VI_DISP_CONFIG] = 0;
	ICFlashInvalidate();
	Reset(code * 8);
}

/**
 * @note Address: 0x800F03E0
 * @note Size: 0x2BC
 */
void OSResetSystem(int reset, u32 resetCode, BOOL forceMenu)
{
	BOOL rc;
	BOOL disableRecalibration;
	u32 unk[3]; // dumb compiler

	OSDisableScheduler();
	__OSStopAudioSystem();

	if (reset == OS_RESET_SHUTDOWN || (reset == OS_RESET_RESTART && bootThisDol != 0)) {
		disableRecalibration = __PADDisableRecalibration(TRUE);
	}

	while (!__OSCallResetFunctions(FALSE)) {
		;
	}

	if (reset == OS_RESET_HOTRESET && forceMenu) {
		OSSram* sram;

		sram = __OSLockSram();
		sram->flags |= 0x40;
		__OSUnlockSram(TRUE);

		while (!__OSSyncSram()) {
			;
		}
		resetCode = 0;
	}

	OSDisableInterrupts();
	__OSCallResetFunctions(TRUE);
	LCDisable();
	if (reset == OS_RESET_HOTRESET) {
		__OSDoHotReset(resetCode);
	} else if (reset == OS_RESET_RESTART) {
		if ((*(u32*)OSPhysicalToCached(0x30EC) = bootThisDol) != 0) {
			__PADDisableRecalibration(disableRecalibration);
		}
		KillThreads();
		OSEnableScheduler();
		__OSReboot(resetCode, forceMenu);
	}

	KillThreads();
	memset(OSPhysicalToCached(0x40), 0, 0xCC - 0x40);
	memset(OSPhysicalToCached(0xD4), 0, 0xE8 - 0xD4);
	memset(OSPhysicalToCached(0xF4), 0, 0xF8 - 0xF4);
	memset(OSPhysicalToCached(0x3000), 0, 0xC0);
	memset(OSPhysicalToCached(0x30C8), 0, 0xD4 - 0xC8);
	memset(OSPhysicalToCached(0x30E2), 0, 1);

	__PADDisableRecalibration(disableRecalibration);
}

/**
 * @note Address: 0x800F069C
 * @note Size: 0x34
 */
u32 OSGetResetCode()
{
	if (*(u8*)OSPhysicalToCached(0x30E2) != 0) {
		return *(u32*)OSPhysicalToCached(0x30F0) | 0x80000000;
	}

	return ((__PIRegs[PI_RESETCODE] & ~7) >> 3);
}
