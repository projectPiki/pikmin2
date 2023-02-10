#include "Dolphin/dsp.h"
#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"
#include "types.h"

BOOL __DSP_init_flag;
char* __DSPVersion = "<< Dolphin SDK - DSP\trelease build: Apr 17 2003 12:34:16 (0x2301) >>";

/*
 * --INFO--
 * Address:	800DACB0
 * Size:	000010
 */
u32 DSPCheckMailToDSP() { return __DSPRegs[0] >> 0xF & 1; }

/*
 * --INFO--
 * Address:	800DACC0
 * Size:	000010
 */
u32 DSPCheckMailFromDSP() { return __DSPRegs[2] >> 0xF & 1; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void DSPReadCPUToDSPMbox()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DACD0
 * Size:	000018
 */
u32 DSPReadMailFromDSP() { return (__DSPRegs[2] << 0x10) | __DSPRegs[3]; }

/*
 * --INFO--
 * Address:	800DACE8
 * Size:	000014
 */
void DSPSendMailToDSP(u32 mail)
{
	__DSPRegs[0] = mail >> 0x10;
	__DSPRegs[1] = mail;
}

/*
 * --INFO--
 * Address:	800DACFC
 * Size:	000040
 */
void DSPAssertInt()
{
	BOOL interrupts = OSDisableInterrupts();
	__DSPRegs[5]    = __DSPRegs[5] & 0xFF57 | 2;
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800DAD3C
 * Size:	0000C4
 */
void DSPInit()
{
	BOOL old;
	__DSP_debug_printf("DSPInit(): Build Date: %s %s\n", "Apr 17 2003", "12:34:16");
	if (__DSP_init_flag == TRUE) {
		return;
	}
	OSRegisterVersion(__DSPVersion);
	old = OSDisableInterrupts();
	__OSSetInterruptHandler(7, __DSPHandler);
	__OSUnmaskInterrupts(0x80000000 >> 7);
	__DSPRegs[5] &= 0xFF57 | 0x800;
	__DSPRegs[5] &= 0xFF53;
	__DSP_tmp_task   = nullptr;
	__DSP_curr_task  = nullptr;
	__DSP_last_task  = nullptr;
	__DSP_first_task = nullptr;
	__DSP_init_flag  = TRUE;
	OSRestoreInterrupts(old);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DSPCheckInit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void DSPReset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void DSPHalt()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void DSPUnhalt()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DSPGetDMAStatus()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void DSPCancelTask()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void DSPAssertTask()
{
	// UNUSED FUNCTION
}
