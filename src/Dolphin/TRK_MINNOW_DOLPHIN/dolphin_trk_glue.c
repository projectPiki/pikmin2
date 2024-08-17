#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "Dolphin/os.h"

BOOL _MetroTRK_Has_Framing; // UNUSED 
// GPVE01     _MetroTRK_Has_Framing = .bss:0x804F4814; // type:object size:0x4 scope:global align:4
// GPVE01_D17 _MetroTRK_Has_Framing = .bss:0x804F4754; // type:object size:0x4 scope:global align:4
u8 TRK_Use_BBA;

DBCommTable gDBCommTable = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };

/**
 * @note Address: 0x800C0984
 * @note Size: 0x38
 */
void TRKEXICallBack(s16 r3, OSContext* ctx)
{
	OSEnableScheduler();
	TRKLoadContext(ctx, 0x500);
}

/**
 * @note Address: 0x800C0718
 * @note Size: 0x26C
 */
int InitMetroTRKCommTable(int hwId)
{
	int result = 1;
	OSReport("Devkit set to : %ld\n", hwId);
	TRK_Use_BBA = 0;

	if (hwId == HARDWARE_BBA) { // BBA hardware
		OSReport("MetroTRK : Set to BBA\n");
		// Initialize gDBCommTable
		TRK_Use_BBA                       = 1;
		gDBCommTable.initialize_func      = udp_cc_initialize;
		gDBCommTable.open_func            = udp_cc_open;
		gDBCommTable.close_func           = udp_cc_close;
		gDBCommTable.read_func            = udp_cc_read;
		gDBCommTable.write_func           = udp_cc_write;
		gDBCommTable.shutdown_func        = udp_cc_shutdown;
		gDBCommTable.peek_func            = udp_cc_peek;
		gDBCommTable.pre_continue_func    = udp_cc_pre_continue;
		gDBCommTable.post_stop_func       = udp_cc_post_stop;
		gDBCommTable.init_interrupts_func = nullptr;
		return 0;
	}

	if (hwId == HARDWARE_GDEV) { // NDEV hardware
		OSReport("MetroTRK : Set to GDEV hardware\n");
		// Initialize gDBCommTable
		result                            = Hu_IsStub();
		gDBCommTable.initialize_func      = gdev_cc_initialize;
		gDBCommTable.open_func            = gdev_cc_open;
		gDBCommTable.close_func           = gdev_cc_close;
		gDBCommTable.read_func            = gdev_cc_read;
		gDBCommTable.write_func           = gdev_cc_write;
		gDBCommTable.shutdown_func        = gdev_cc_shutdown;
		gDBCommTable.peek_func            = gdev_cc_peek;
		gDBCommTable.pre_continue_func    = gdev_cc_pre_continue;
		gDBCommTable.post_stop_func       = gdev_cc_post_stop;
		gDBCommTable.init_interrupts_func = gdev_cc_initinterrupts;

	} else if (hwId == HARDWARE_AMC_DDH) {
		OSReport("MetroTRK : Set to AMC DDH hardware\n");
		result = AMC_IsStub();
		// Initialize gDBCommTable
		gDBCommTable.initialize_func      = ddh_cc_initialize;
		gDBCommTable.open_func            = ddh_cc_open;
		gDBCommTable.close_func           = ddh_cc_close;
		gDBCommTable.read_func            = ddh_cc_read;
		gDBCommTable.write_func           = ddh_cc_write;
		gDBCommTable.shutdown_func        = ddh_cc_shutdown;
		gDBCommTable.peek_func            = ddh_cc_peek;
		gDBCommTable.pre_continue_func    = ddh_cc_pre_continue;
		gDBCommTable.post_stop_func       = ddh_cc_post_stop;
		gDBCommTable.init_interrupts_func = ddh_cc_initinterrupts;

	} else { // unknown hardware
		OSReport("MetroTRK : Set to UNKNOWN hardware. (%ld)\n", hwId);
		OSReport("MetroTRK : Invalid hardware ID passed from OS\n");
		OSReport("MetroTRK : Defaulting to GDEV Hardware\n");
	}

	return result;
}

/**
 * @note Address: 0x800C06C8
 * @note Size: 0x50
 */
DSError TRKInitializeIntDrivenUART(u32, u32, u32, void* r5)
{
	gDBCommTable.initialize_func(r5, TRKEXICallBack);
	gDBCommTable.open_func();
	return DS_NoError;
}

/**
 * @note Address: 0x800C0680
 * @note Size: 0x48
 */
void EnableEXI2Interrupts(void)
{
	if (!TRK_Use_BBA) {
		if (gDBCommTable.init_interrupts_func != nullptr) {
			gDBCommTable.init_interrupts_func();
		}
	}
}

/**
 * @note Address: 0x800C0650
 * @note Size: 0x30
 */
int TRKPollUART(void) { return gDBCommTable.peek_func(); }

/**
 * @note Address: 0x800C0614
 * @note Size: 0x3C
 */
UARTError TRKReadUARTN(void* bytes, u32 length)
{
	int readErr = gDBCommTable.read_func(bytes, length);
	return ((-readErr | readErr) >> 31);
}

/**
 * @note Address: 0x800C05D8
 * @note Size: 0x3C
 */
UARTError TRKWriteUARTN(const void* bytes, u32 length)
{
	int writeErr = gDBCommTable.write_func(bytes, length);
	return ((-writeErr | writeErr) >> 31);
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void WriteUARTFlush(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void WriteUART1(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void TRKReadUARTPoll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C05A8
 * @note Size: 0x30
 */
void ReserveEXI2Port(void) { gDBCommTable.post_stop_func(); }

/**
 * @note Address: 0x800C0578
 * @note Size: 0x30
 */
void UnreserveEXI2Port(void) { gDBCommTable.pre_continue_func(); }

/**
 * @note Address: 0x800C0548
 * @note Size: 0x30
 */
void TRK_board_display(char* str) { OSReport("%s\n", str); }

/**
 * @note Address: 0x800C04F0
 * @note Size: 0x58
 */
DSError InitializeProgramEndTrap(void)
{
	static const u32 EndofProgramInstruction = 'END';

	u8* endOfProgramInstructionBytes = (u8*)&EndofProgramInstruction;
	u8* ppcHaltPtr                   = (u8*)PPCHalt;
	TRK_memcpy(ppcHaltPtr + 4, endOfProgramInstructionBytes, 4);
	ICInvalidateRange(ppcHaltPtr + 4, 4);
	DCFlushRange(ppcHaltPtr + 4, 4);
}

/**
 * @note Address: 0x800C04EC
 * @note Size: 0x4
 */
void TRKUARTInterruptHandler(void) { }

/**
 * @note Address: 0x800C0464
 * @note Size: 0x88
 */
ASM void TRKLoadContext(OSContext* ctx, u32 r4)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	lwz r0, OSContext.gpr[0](r3)
	lwz r1, OSContext.gpr[1](r3)
	lwz r2, OSContext.gpr[2](r3)
	lhz r5, OSContext.state(r3)
	rlwinm. r6, r5, 0, 0x1e, 0x1e
	beq L_802CC24C
	rlwinm r5, r5, 0, 0x1f, 0x1d
	sth r5, OSContext.state(r3)
	lmw r5, OSContext.gpr[5](r3)
	b L_802CC250
L_802CC24C:
	lmw r13, OSContext.gpr[13](r3)
L_802CC250:
	mr r31, r3
	mr r3, r4
	lwz r4, OSContext.cr(r31)
	mtcrf 0xff, r4
	lwz r4, OSContext.lr(r31)
	mtlr r4
	lwz r4, OSContext.ctr(r31)
	mtctr r4
	lwz r4, OSContext.xer(r31)
	mtxer r4
	mfmsr r4
	rlwinm r4, r4, 0, 0x11, 0xf //Turn off external exceptions
	rlwinm r4, r4, 0, 0x1f, 0x1d //Turn off recoverable exception flag
	mtmsr r4
	mtsprg 1, r2
	lwz r4, OSContext.gpr[3](r31)
	mtsprg 2, r4
	lwz r4, OSContext.gpr[4](r31)
	mtsprg 3, r4
	lwz r2, OSContext.srr0(r31)
	lwz r4, OSContext.srr1(r31)
	lwz r31, OSContext.gpr[31](r31)
	b TRKInterruptHandler
#endif // clang-format on
}
