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
u32 DSPCheckMailToDSP() { return __DSPRegs[DSP_MAILBOX_IN_HI] >> 0xF & 1; }

/*
 * --INFO--
 * Address:	800DACC0
 * Size:	000010
 */
u32 DSPCheckMailFromDSP() { return __DSPRegs[DSP_MAILBOX_OUT_HI] >> 0xF & 1; }

/*
 * --INFO--
 * Address:	800DACD0
 * Size:	000018
 */
u32 DSPReadMailFromDSP() { return (__DSPRegs[DSP_MAILBOX_OUT_HI] << 0x10) | __DSPRegs[DSP_MAILBOX_OUT_LO]; }

/*
 * --INFO--
 * Address:	800DACE8
 * Size:	000014
 */
void DSPSendMailToDSP(u32 mail)
{
	__DSPRegs[DSP_MAILBOX_IN_HI] = mail >> 0x10;
	__DSPRegs[DSP_MAILBOX_IN_LO] = mail;
}

/*
 * --INFO--
 * Address:	800DACFC
 * Size:	000040
 */
void DSPAssertInt()
{
	u32 tmp;
	BOOL interrupts               = OSDisableInterrupts();
	tmp                           = __DSPRegs[DSP_CONTROL_STATUS];
	__DSPRegs[DSP_CONTROL_STATUS] = (tmp & ~0xA8) | 2;
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800DAD3C
 * Size:	0000C4
 */
void DSPInit()
{
	u32 tmp;
	BOOL old;
	__DSP_debug_printf("DSPInit(): Build Date: %s %s\n", "Apr 17 2003", "12:34:16");
	if (__DSP_init_flag == TRUE) {
		return;
	}
	OSRegisterVersion(__DSPVersion);
	old = OSDisableInterrupts();
	__OSSetInterruptHandler(7, __DSPHandler);
	__OSUnmaskInterrupts(0x80000000 >> 7);

	tmp                           = __DSPRegs[DSP_CONTROL_STATUS];
	__DSPRegs[DSP_CONTROL_STATUS] = (tmp & ~0xA8) | 0x800;

	tmp                           = __DSPRegs[DSP_CONTROL_STATUS];
	__DSPRegs[DSP_CONTROL_STATUS] = (tmp & ~0xAC);

	__DSP_tmp_task   = nullptr;
	__DSP_curr_task  = nullptr;
	__DSP_last_task  = nullptr;
	__DSP_first_task = nullptr;
	__DSP_init_flag  = TRUE;
	OSRestoreInterrupts(old);
}
