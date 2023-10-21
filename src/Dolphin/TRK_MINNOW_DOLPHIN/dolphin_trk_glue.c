#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "Dolphin/os.h"

BOOL _MetroTRK_Has_Framing;
u8 TRK_Use_BBA;

DBCommTable gDBCommTable = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };

/*
 * --INFO--
 * Address:	800C0984
 * Size:	000038
 */
void TRKEXICallBack(s16 r3, OSContext* ctx)
{
	OSEnableScheduler();
	TRKLoadContext(ctx, 0x500);
}

/*
 * --INFO--
 * Address:	800C0718
 * Size:	00026C
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
		result                            = 0;

	} else if (hwId == HARDWARE_GDEV) { // NDEV hardware
		OSReport("MetroTRK : Set to GDEV hardware\n");
		// Initialize gDBCommTable
		// need to work out what the deal with the typedef is for these functions
		// gDBCommTable.initialize_func      = gdev_cc_initialize;
		// gDBCommTable.open_func            = gdev_cc_open;
		// gDBCommTable.close_func           = gdev_cc_close;
		// gDBCommTable.read_func            = gdev_cc_read;
		// gDBCommTable.write_func           = gdev_cc_write;
		// gDBCommTable.shutdown_func        = gdev_cc_shutdown;
		// gDBCommTable.peek_func            = gdev_cc_peek;
		// gDBCommTable.pre_continue_func    = gdev_cc_pre_continue;
		// gDBCommTable.post_stop_func       = gdev_cc_post_stop;
		// gDBCommTable.init_interrupts_func = gdev_cc_initinterrupts;
		result = 0;

	} else if (hwId == HARDWARE_AMC_DDH) {
		OSReport("MetroTRK : Set to AMC DDH hardware\n");
		// Initialize gDBCommTable
		// gDBCommTable.initialize_func      = ddh_cc_initialize;
		// gDBCommTable.open_func            = ddh_cc_open;
		// gDBCommTable.close_func           = ddh_cc_close;
		// gDBCommTable.read_func            = ddh_cc_read;
		// gDBCommTable.write_func           = ddh_cc_write;
		// gDBCommTable.shutdown_func        = ddh_cc_shutdown;
		// gDBCommTable.peek_func            = ddh_cc_peek;
		// gDBCommTable.pre_continue_func    = ddh_cc_pre_continue;
		// gDBCommTable.post_stop_func       = ddh_cc_post_stop;
		// gDBCommTable.init_interrupts_func = ddh_cc_initinterrupts;
		result = 0;

	} else { // unknown hardware
		OSReport("MetroTRK : Set to UNKNOWN hardware. (%ld)\n", hwId);
		OSReport("MetroTRK : Invalid hardware ID passed from OS\n");
		OSReport("MetroTRK : Defaulting to GDEV Hardware\n");
	}

	return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0x1
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  subi      r29, r4, 0x63B8
	  mr        r4, r30
	  addi      r3, r29, 0x8
	  crclr     6, 0x6
	  bl        0x2CFA0
	  lis       r3, 0x804F
	  li        r0, 0
	  cmpwi     r30, 0x2
	  stb       r0, 0x4810(r3)
	  bne-      .loc_0xEC
	  addi      r3, r29, 0x20
	  crclr     6, 0x6
	  bl        0x2CF80
	  lis       r30, 0x804F
	  lis       r12, 0x800C
	  lis       r11, 0x804A
	  lis       r10, 0x800C
	  lis       r9, 0x800C
	  lis       r8, 0x800C
	  lis       r7, 0x800C
	  lis       r6, 0x800C
	  lis       r5, 0x800C
	  lis       r4, 0x800C
	  lis       r3, 0x800C
	  addi      r31, r30, 0x4810
	  li        r29, 0x1
	  addi      r30, r12, 0xC48
	  addi      r12, r11, 0x6920
	  addi      r11, r10, 0xC38
	  addi      r10, r9, 0xC30
	  addi      r9, r8, 0xC28
	  addi      r8, r7, 0xC20
	  addi      r7, r6, 0xC40
	  addi      r6, r5, 0xC18
	  addi      r5, r4, 0xC10
	  addi      r4, r3, 0xC08
	  li        r0, 0
	  stb       r29, 0x0(r31)
	  li        r3, 0
	  stw       r30, 0x0(r12)
	  stw       r11, 0x18(r12)
	  stw       r10, 0x1C(r12)
	  stw       r9, 0x10(r12)
	  stw       r8, 0x14(r12)
	  stw       r7, 0x8(r12)
	  stw       r6, 0xC(r12)
	  stw       r5, 0x20(r12)
	  stw       r4, 0x24(r12)
	  stw       r0, 0x4(r12)
	  b         .loc_0x250

	.loc_0xEC:
	  cmpwi     r30, 0x1
	  bne-      .loc_0x188
	  addi      r3, r29, 0x38
	  crclr     6, 0x6
	  bl        0x2CED8
	  bl        0x2A7A8
	  lis       r31, 0x800C
	  lis       r12, 0x800C
	  addi      r31, r31, 0x14C0
	  lis       r30, 0x804A
	  lis       r11, 0x800C
	  lis       r10, 0x800C
	  lis       r9, 0x800C
	  lis       r8, 0x800C
	  lis       r7, 0x800C
	  lis       r6, 0x800C
	  lis       r5, 0x800C
	  lis       r4, 0x800C
	  stwu      r31, 0x6920(r30)
	  addi      r12, r12, 0x1494
	  addi      r11, r11, 0x148C
	  addi      r10, r10, 0x1398
	  addi      r9, r9, 0x12D8
	  addi      r8, r8, 0x14B8
	  addi      r7, r7, 0x1220
	  addi      r6, r6, 0x12B4
	  addi      r5, r5, 0x1290
	  addi      r0, r4, 0x11FC
	  stw       r12, 0x18(r30)
	  mr        r31, r3
	  stw       r11, 0x1C(r30)
	  stw       r10, 0x10(r30)
	  stw       r9, 0x14(r30)
	  stw       r8, 0x8(r30)
	  stw       r7, 0xC(r30)
	  stw       r6, 0x20(r30)
	  stw       r5, 0x24(r30)
	  stw       r0, 0x4(r30)
	  b         .loc_0x24C

	.loc_0x188:
	  cmpwi     r30, 0
	  bne-      .loc_0x224
	  addi      r3, r29, 0x5C
	  crclr     6, 0x6
	  bl        0x2CE3C
	  bl        0x11DB8
	  lis       r31, 0x800C
	  lis       r12, 0x800C
	  addi      r31, r31, 0xF0C
	  lis       r30, 0x804A
	  lis       r11, 0x800C
	  lis       r10, 0x800C
	  lis       r9, 0x800C
	  lis       r8, 0x800C
	  lis       r7, 0x800C
	  lis       r6, 0x800C
	  lis       r5, 0x800C
	  lis       r4, 0x800C
	  stwu      r31, 0x6920(r30)
	  addi      r12, r12, 0xEE0
	  addi      r11, r11, 0xED8
	  addi      r10, r10, 0xDEC
	  addi      r9, r9, 0xD2C
	  addi      r8, r8, 0xF04
	  addi      r7, r7, 0xC74
	  addi      r6, r6, 0xD08
	  addi      r5, r5, 0xCE4
	  addi      r0, r4, 0xC50
	  stw       r12, 0x18(r30)
	  mr        r31, r3
	  stw       r11, 0x1C(r30)
	  stw       r10, 0x10(r30)
	  stw       r9, 0x14(r30)
	  stw       r8, 0x8(r30)
	  stw       r7, 0xC(r30)
	  stw       r6, 0x20(r30)
	  stw       r5, 0x24(r30)
	  stw       r0, 0x4(r30)
	  b         .loc_0x24C

	.loc_0x224:
	  mr        r4, r30
	  addi      r3, r29, 0x80
	  crclr     6, 0x6
	  bl        0x2CDA4
	  addi      r3, r29, 0xAC
	  crclr     6, 0x6
	  bl        0x2CD98
	  addi      r3, r29, 0xDC
	  crclr     6, 0x6
	  bl        0x2CD8C

	.loc_0x24C:
	  mr        r3, r31

	.loc_0x250:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C06C8
 * Size:	000050
 */
DSError TRKInitializeIntDrivenUART(u32, u32, u32, void* r5)
{
	gDBCommTable.initialize_func(r5, TRKEXICallBack);
	gDBCommTable.open_func();
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	800C0680
 * Size:	000048
 */
void EnableEXI2Interrupts(void)
{
	if (!TRK_Use_BBA) {
		if (gDBCommTable.init_interrupts_func != nullptr) {
			gDBCommTable.init_interrupts_func();
		}
	}
}

/*
 * --INFO--
 * Address:	800C0650
 * Size:	000030
 */
int TRKPollUART(void) { return gDBCommTable.peek_func(); }

/*
 * --INFO--
 * Address:	800C0614
 * Size:	00003C
 */
UARTError TRKReadUARTN(void* bytes, u32 length)
{
	int readErr = gDBCommTable.read_func(bytes, length);
	return ((-readErr | readErr) >> 31);
}

/*
 * --INFO--
 * Address:	800C05D8
 * Size:	00003C
 */
UARTError TRKWriteUARTN(const void* bytes, u32 length)
{
	int writeErr = gDBCommTable.write_func(bytes, length);
	return ((-writeErr | writeErr) >> 31);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void WriteUARTFlush(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void WriteUART1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void TRKReadUARTPoll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C05A8
 * Size:	000030
 */
void ReserveEXI2Port(void) { gDBCommTable.post_stop_func(); }

/*
 * --INFO--
 * Address:	800C0578
 * Size:	000030
 */
void UnreserveEXI2Port(void) { gDBCommTable.pre_continue_func(); }

/*
 * --INFO--
 * Address:	800C0548
 * Size:	000030
 */
void TRK_board_display(char* str) { OSReport("%s\n", str); }

/*
 * --INFO--
 * Address:	800C04F0
 * Size:	000058
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

/*
 * --INFO--
 * Address:	800C04EC
 * Size:	000004
 */
void TRKUARTInterruptHandler(void) { }

/*
 * --INFO--
 * Address:	800C0464
 * Size:	000088
 */
asm void TRKLoadContext(OSContext* ctx, u32 r4)
{
	// clang-format off
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
	// clang-format on
}
