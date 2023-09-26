#include "Dolphin/exi.h"

#pragma scheduling off

char* __EXIVersion = "<< Dolphin SDK - EXI\trelease build: Apr 17 2003 12:33:17 (0x2301) >>";

static EXIControl Ecb[EXI_MAX_CHAN];
static u32 IDSerialPort1;

/*
 * --INFO--
 * Address:	800DFB54
 * Size:	0000F4
 */
static void SetExiInterruptMask(s32 chan, EXIControl* exi)
{
	EXIControl* exi2;

	exi2 = &Ecb[2];
	switch (chan) {
	case 0:
		if ((exi->exiCallback == 0 && exi2->exiCallback == 0) || (exi->state & EXI_STATE_LOCKED)) {
			__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_2_EXI);
		} else {
			__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_2_EXI);
		}
		break;
	case 1:
		if (exi->exiCallback == 0 || (exi->state & EXI_STATE_LOCKED)) {
			__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_1_EXI);
		} else {
			__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_1_EXI);
		}
		break;
	case 2:
		if (__OSGetInterruptHandler(__OS_INTERRUPT_PI_DEBUG) == 0 || (exi->state & EXI_STATE_LOCKED)) {
			__OSMaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);
		} else {
			__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
static void CompleteTransfer(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	u8* buf;
	u32 data;
	int i;
	int len;

	if (exi->state & EXI_STATE_BUSY) {
		if ((exi->state & EXI_STATE_IMM) && (len = exi->immLen)) {
			buf  = exi->immBuf;
			data = EXIREG(chan, 4);
			for (i = 0; i < len; i++) {
				*buf++ = (u8)((data >> ((3 - i) * 8)) & 0xff);
			}
		}
		exi->state &= ~EXI_STATE_BUSY;
	}
}

/*
 * --INFO--
 * Address:	800DFC48
 * Size:	00025C
 */
BOOL EXIImm(s32 chan, void* buf, s32 len, u32 type, EXICallback callback)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;

	enabled = OSDisableInterrupts();
	if ((exi->state & EXI_STATE_BUSY) || !(exi->state & EXI_STATE_SELECTED)) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	exi->tcCallback = callback;
	if (exi->tcCallback) {
		EXIClearInterrupts(chan, FALSE, TRUE, FALSE);
		__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_0_TC >> (3 * chan));
	}

	exi->state |= EXI_STATE_IMM;

	if (type != EXI_READ) {
		u32 data;
		int i;

		data = 0;
		for (i = 0; i < len; i++) {
			data |= ((u8*)buf)[i] << ((3 - i) * 8);
		}
		EXIREG(chan, 4) = data;
	}

	exi->immBuf = buf;
	exi->immLen = (type != EXI_WRITE) ? len : 0;

	EXIREG(chan, 3) = EXI_0CR(1, 0, type, len - 1);

	OSRestoreInterrupts(enabled);

	return TRUE;
}

/*
 * --INFO--
 * Address:	800DFEA4
 * Size:	0000A0
 */
BOOL EXIImmEx(s32 chan, void* buf, s32 len, u32 mode)
{
	s32 xLen;

	while (len) {
		xLen = (len < 4) ? len : 4;
		if (!EXIImm(chan, buf, xLen, mode, NULL)) {
			return FALSE;
		}

		if (!EXISync(chan)) {
			return FALSE;
		}

		(u8*)buf += xLen;
		len -= xLen;
	}
	return TRUE;
}

/*
 * --INFO--
 * Address:	800DFF44
 * Size:	0000EC
 */
BOOL EXIDma(s32 chan, void* buf, s32 len, u32 type, EXICallback callback)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;

	enabled = OSDisableInterrupts();
	if ((exi->state & EXI_STATE_BUSY) || !(exi->state & EXI_STATE_SELECTED)) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	exi->tcCallback = callback;
	if (exi->tcCallback) {
		EXIClearInterrupts(chan, FALSE, TRUE, FALSE);
		__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_0_TC >> (3 * chan));
	}

	exi->state |= EXI_STATE_DMA;

	EXIREG(chan, 1) = (u32)buf & 0x3ffffe0;
	EXIREG(chan, 2) = (u32)len;
	EXIREG(chan, 3) = EXI_0CR(1, 1, type, 0);

	OSRestoreInterrupts(enabled);

	return TRUE;
}

/*
 * --INFO--
 * Address:	800E0030
 * Size:	00024C
 */
BOOL EXISync(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	BOOL rc         = FALSE;
	BOOL enabled;

	while (exi->state & EXI_STATE_SELECTED) {
		if (((EXIREG(chan, 3) & 1) >> 0) == 0) {
			enabled = OSDisableInterrupts();
			if (exi->state & EXI_STATE_SELECTED) {
				CompleteTransfer(chan);
				if (__OSGetDIConfig() != 0xff || ((OSGetConsoleType() & 0xF0000000) == OS_CONSOLE_TDEVKIT) || exi->immLen != 4
				    || (EXIREG(chan, 0) & 0x00000070) != (EXI_FREQ_1M << 4)
				    || (EXIREG(chan, 4) != EXI_USB_ADAPTER && EXIREG(chan, 4) != EXI_IS_VIEWER && EXIREG(chan, 4) != 0x04220001)
				    || __OSDeviceCode == 0x8200) {
					rc = TRUE;
				}
			}
			OSRestoreInterrupts(enabled);
			break;
		}
	}
	return rc;
}

/*
 * --INFO--
 * Address:	800E027C
 * Size:	000048
 */
int EXIClearInterrupts(s32 chan, BOOL exi, BOOL tc, BOOL ext)
{
	u32 cpr;
	u32 prev;

	prev = cpr = EXIREG(chan, 0);
	cpr &= 0x7f5;
	if (exi)
		cpr |= 2;
	if (tc)
		cpr |= 8;
	if (ext)
		cpr |= 0x800;
	EXIREG(chan, 0) = cpr;
	return prev;
}

/*
 * --INFO--
 * Address:	800E02C4
 * Size:	00007C
 */
EXICallback EXISetExiCallback(s32 chan, EXICallback exiCallback)
{
	EXIControl* exi = &Ecb[chan];
	EXICallback prev;
	BOOL enabled;

	enabled          = OSDisableInterrupts();
	prev             = exi->exiCallback;
	exi->exiCallback = exiCallback;

	if (chan != 2) {
		SetExiInterruptMask(chan, exi);
	} else {
		SetExiInterruptMask(0, &Ecb[0]);
	}

	OSRestoreInterrupts(enabled);
	return prev;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void EXIProbeReset(void)
{
	__EXIProbeStartTime[0] = __EXIProbeStartTime[1] = 0;
	Ecb[0].idTime = Ecb[1].idTime = 0;
	__EXIProbe(0);
	__EXIProbe(1);
}

/*
 * --INFO--
 * Address:	800E0340
 * Size:	000174
 */
static BOOL __EXIProbe(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;
	BOOL rc;
	u32 cpr;
	s32 t;

	if (chan == 2) {
		return TRUE;
	}

	rc      = TRUE;
	enabled = OSDisableInterrupts();
	cpr     = EXIREG(chan, 0);
	if (!(exi->state & EXI_STATE_ATTACHED)) {
		if (cpr & 0x00000800) {
			EXIClearInterrupts(chan, FALSE, FALSE, TRUE);
			__EXIProbeStartTime[chan] = exi->idTime = 0;
		}

		if (cpr & 0x00001000) {
			t = (s32)(OSTicksToMilliseconds(OSGetTime()) / 100) + 1;
			if (__EXIProbeStartTime[chan] == 0) {
				__EXIProbeStartTime[chan] = t;
			}
			if (t - __EXIProbeStartTime[chan] < 300 / 100) {
				rc = FALSE;
			}
		} else {
			__EXIProbeStartTime[chan] = exi->idTime = 0;
			rc                                      = FALSE;
		}
	} else if (!(cpr & 0x00001000) || (cpr & 0x00000800)) {
		__EXIProbeStartTime[chan] = exi->idTime = 0;
		rc                                      = FALSE;
	}
	OSRestoreInterrupts(enabled);

	return rc;
}

/*
 * --INFO--
 * Address:	800E04B4
 * Size:	000080
 */
BOOL EXIProbe(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	BOOL rc;
	u32 id;

	rc = __EXIProbe(chan);
	if (rc && exi->idTime == 0) {
		rc = EXIGetID(chan, 0, &id) ? TRUE : FALSE;
	}
	return rc;
}

/*
 * --INFO--
 * Address:	800E0534
 * Size:	0000B4
 */
s32 EXIProbeEx(s32 chan)
{
	if (EXIProbe(chan)) {
		return 1;
	} else if (__EXIProbeStartTime[chan] != 0) {
		return 0;
	} else {
		return -1;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
static BOOL __EXIAttach(s32 chan, EXICallback extCallback)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;

	enabled = OSDisableInterrupts();
	if ((exi->state & EXI_STATE_ATTACHED) || __EXIProbe(chan) == FALSE) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	EXIClearInterrupts(chan, TRUE, FALSE, FALSE);

	exi->extCallback = extCallback;
	__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_0_EXT >> (3 * chan));
	exi->state |= EXI_STATE_ATTACHED;
	OSRestoreInterrupts(enabled);

	return TRUE;
}

/*
 * --INFO--
 * Address:	800E05E8
 * Size:	00010C
 */
BOOL EXIAttach(s32 chan, EXICallback extCallback)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;
	BOOL rc;

	EXIProbe(chan);

	enabled = OSDisableInterrupts();
	if (exi->idTime == 0) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}
	rc = __EXIAttach(chan, extCallback);
	OSRestoreInterrupts(enabled);
	return rc;
}

/*
 * --INFO--
 * Address:	800E06F4
 * Size:	0000BC
 */
BOOL EXIDetach(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;

	enabled = OSDisableInterrupts();
	if (!(exi->state & EXI_STATE_ATTACHED)) {
		OSRestoreInterrupts(enabled);
		return TRUE;
	}
	if ((exi->state & EXI_STATE_LOCKED) && exi->dev == 0) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	exi->state &= ~EXI_STATE_ATTACHED;
	__OSMaskInterrupts((OS_INTERRUPTMASK_EXI_0_EXT | OS_INTERRUPTMASK_EXI_0_EXI) >> (3 * chan));
	OSRestoreInterrupts(enabled);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800E07B0
 * Size:	00012C
 */
BOOL EXISelect(s32 chan, u32 dev, u32 freq)
{
	EXIControl* exi = &Ecb[chan];
	u32 cpr;
	BOOL enabled;

	enabled = OSDisableInterrupts();
	if ((exi->state & EXI_STATE_SELECTED)
	    || chan != 2
	           && (dev == 0 && !(exi->state & EXI_STATE_ATTACHED) && !__EXIProbe(chan) || !(exi->state & EXI_STATE_LOCKED)
	               || (exi->dev != dev))) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	exi->state |= EXI_STATE_SELECTED;
	cpr = EXIREG(chan, 0);
	cpr &= 0x405;
	cpr |= EXI_CPR_CS(dev) | EXI_CPR_CLK(freq);
	EXIREG(chan, 0) = cpr;

	if (exi->state & EXI_STATE_ATTACHED) {
		switch (chan) {
		case 0:
			__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_0_EXT);
			break;
		case 1:
			__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_1_EXT);
			break;
		}
	}

	OSRestoreInterrupts(enabled);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800E08DC
 * Size:	000110
 */
BOOL EXIDeselect(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	u32 cpr;
	BOOL enabled;

	enabled = OSDisableInterrupts();
	if (!(exi->state & EXI_STATE_SELECTED)) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}
	exi->state &= ~EXI_STATE_SELECTED;
	cpr             = EXIREG(chan, 0);
	EXIREG(chan, 0) = cpr & 0x405;

	if (exi->state & EXI_STATE_ATTACHED) {
		switch (chan) {
		case 0:
			__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_0_EXT);
			break;
		case 1:
			__OSUnmaskInterrupts(OS_INTERRUPTMASK_EXI_1_EXT);
			break;
		}
	}

	OSRestoreInterrupts(enabled);

	if (chan != 2 && (cpr & EXI_CPR_CS(0))) {
		return __EXIProbe(chan) ? TRUE : FALSE;
	}

	return TRUE;
}

/*
 * --INFO--
 * Address:	800E09EC
 * Size:	0000C8
 */
static void EXIIntrruptHandler(__OSInterrupt interrupt, OSContext* context)
{

	s32 chan;
	EXIControl* exi;
	EXICallback callback;

	chan = (interrupt - __OS_INTERRUPT_EXI_0_EXI) / 3;
	exi  = &Ecb[chan];
	EXIClearInterrupts(chan, TRUE, FALSE, FALSE);
	callback = exi->exiCallback;
	if (callback) {
		OSContext exceptionContext;

		OSClearContext(&exceptionContext);
		OSSetCurrentContext(&exceptionContext);

		callback(chan, context);

		OSClearContext(&exceptionContext);
		OSSetCurrentContext(context);
	}

	// needed for stack fixing
	{
		s32 dummy1;
		s32 dummy2;
	}
}

/*
 * --INFO--
 * Address:	800E0AB4
 * Size:	000218
 */
static void TCIntrruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSContext exceptionContext;
	s32 chan;
	EXIControl* exi;
	EXICallback callback;

	chan = (interrupt - __OS_INTERRUPT_EXI_0_TC) / 3;
	exi  = &Ecb[chan];
	__OSMaskInterrupts(OS_INTERRUPTMASK(interrupt));
	EXIClearInterrupts(chan, FALSE, TRUE, FALSE);
	callback = exi->tcCallback;
	if (callback) {
		exi->tcCallback = 0;
		CompleteTransfer(chan);

		OSClearContext(&exceptionContext);
		OSSetCurrentContext(&exceptionContext);

		callback(chan, context);

		OSClearContext(&exceptionContext);
		OSSetCurrentContext(context);
	}

	// needed for stack fixing
	{
		s32 dummy1;
		s32 dummy2;
	}
}

/*
 * --INFO--
 * Address:	800E0CCC
 * Size:	0000D0
 */
static void EXTIntrruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	s32 chan;
	EXIControl* exi;
	EXICallback callback;

	chan = (interrupt - __OS_INTERRUPT_EXI_0_EXT) / 3;
	__OSMaskInterrupts((OS_INTERRUPTMASK_EXI_0_EXT | OS_INTERRUPTMASK_EXI_0_EXI) >> (3 * chan));
	exi      = &Ecb[chan];
	callback = exi->extCallback;
	exi->state &= ~EXI_STATE_ATTACHED;
	if (callback) {
		OSContext exceptionContext;

		OSClearContext(&exceptionContext);
		OSSetCurrentContext(&exceptionContext);

		exi->extCallback = 0;
		callback(chan, context);

		OSClearContext(&exceptionContext);
		OSSetCurrentContext(context);
	}
}

/*
 * --INFO--
 * Address:	800E0D9C
 * Size:	0001D4
 */
void EXIInit(void)
{
	while (((EXIREG(0, 3) & 0x1) == 1) || ((EXIREG(1, 3) & 0x1) == 1) || ((EXIREG(2, 3) & 0x1) == 1)) {
		continue;
	}

	__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT | OS_INTERRUPTMASK_EXI_1_EXI
	                   | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT | OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC);

	EXIREG(0, 0) = 0;
	EXIREG(1, 0) = 0;
	EXIREG(2, 0) = 0;

	EXIREG(0, 0) = 0x00002000;

	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_0_EXI, EXIIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_0_TC, TCIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_0_EXT, EXTIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_1_EXI, EXIIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_1_TC, TCIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_1_EXT, EXTIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_2_EXI, EXIIntrruptHandler);
	__OSSetInterruptHandler(__OS_INTERRUPT_EXI_2_TC, TCIntrruptHandler);

	EXIGetID(0, 2, &IDSerialPort1);

	if ((OSGetConsoleType() & 0x10000000) != 0) {
		__EXIProbeStartTime[0] = __EXIProbeStartTime[1] = 0;
		Ecb[0].idTime = Ecb[1].idTime = 0;
		__EXIProbe(0);
		__EXIProbe(1);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800

	.loc_0x24:
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  beq+      .loc_0x24
	  lwz       r0, 0x20(r3)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  beq+      .loc_0x24
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  beq+      .loc_0x24
	  lis       r3, 0x80
	  subi      r3, r3, 0x8000
	  bl        0xE208
	  li        r31, 0
	  lis       r4, 0xCC00
	  stw       r31, 0x6800(r4)
	  stw       r31, 0x6814(r4)
	  stw       r31, 0x6828(r4)
	  li        r0, 0x2000
	  stw       r0, 0x6800(r4)
	  li        r3, 0x9
	  lis       r4, 0x800E
	  addi      r28, r4, 0x9EC
	  addi      r4, r28, 0
	  bl        0xDE5C
	  li        r3, 0xA
	  lis       r4, 0x800E
	  addi      r29, r4, 0xAB4
	  addi      r4, r29, 0
	  bl        0xDE48
	  li        r3, 0xB
	  lis       r4, 0x800E
	  addi      r30, r4, 0xCCC
	  addi      r4, r30, 0
	  bl        0xDE34
	  li        r3, 0xC
	  addi      r4, r28, 0
	  bl        0xDE28
	  li        r3, 0xD
	  addi      r4, r29, 0
	  bl        0xDE1C
	  li        r3, 0xE
	  addi      r4, r30, 0
	  bl        0xDE10
	  li        r3, 0xF
	  addi      r4, r28, 0
	  bl        0xDE04
	  li        r3, 0x10
	  addi      r4, r29, 0
	  bl        0xDDF8
	  li        r3, 0
	  li        r4, 0x2
	  subi      r5, r13, 0x7170
	  bl        0x2E4
	  lwz       r0, -0x70C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x140
	  lis       r4, 0x8000
	  stw       r31, 0x30C4(r4)
	  stw       r31, 0x30C0(r4)
	  lis       r3, 0x804F
	  addi      r3, r3, 0x5F28
	  stw       r31, 0x60(r3)
	  stw       r31, 0x20(r3)
	  li        r3, 0
	  bl        -0xB8C
	  li        r3, 0x1
	  bl        -0xB94
	  b         .loc_0x1AC

	.loc_0x140:
	  li        r3, 0
	  li        r4, 0
	  addi      r5, r1, 0x8
	  bl        0x298
	  cmpwi     r3, 0
	  beq-      .loc_0x178
	  lwz       r3, 0x8(r1)
	  subis     r0, r3, 0x701
	  cmplwi    r0, 0
	  bne-      .loc_0x178
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x7B0
	  b         .loc_0x1AC

	.loc_0x178:
	  li        r3, 0x1
	  li        r4, 0
	  addi      r5, r1, 0x8
	  bl        0x260
	  cmpwi     r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x8(r1)
	  subis     r0, r3, 0x701
	  cmplwi    r0, 0
	  bne-      .loc_0x1AC
	  li        r3, 0
	  li        r4, 0x2
	  bl        0x778

	.loc_0x1AC:
	  lwz       r3, -0x7D20(r13)
	  bl        0xAB3C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0F70
 * Size:	0000F4
 */
BOOL EXILock(s32 chan, u32 dev, EXICallback unlockedCallback)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;
	int i;

	enabled = OSDisableInterrupts();
	if (exi->state & EXI_STATE_LOCKED) {
		if (unlockedCallback) {
			for (i = 0; i < exi->items; i++) {
				if (exi->queue[i].dev == dev) {
					OSRestoreInterrupts(enabled);
					return FALSE;
				}
			}
			exi->queue[exi->items].callback = unlockedCallback;
			exi->queue[exi->items].dev      = dev;
			exi->items++;
		}
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	exi->state |= EXI_STATE_LOCKED;
	exi->dev = dev;
	SetExiInterruptMask(chan, exi);

	OSRestoreInterrupts(enabled);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800E1064
 * Size:	0000DC
 */
BOOL EXIUnlock(s32 chan)
{
	EXIControl* exi = &Ecb[chan];
	BOOL enabled;
	EXICallback unlockedCallback;

	enabled = OSDisableInterrupts();
	if (!(exi->state & EXI_STATE_LOCKED)) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}
	exi->state &= ~EXI_STATE_LOCKED;
	SetExiInterruptMask(chan, exi);

	if (0 < exi->items) {
		unlockedCallback = exi->queue[0].callback;
		if (0 < --exi->items) {
			memmove(&exi->queue[0], &exi->queue[1], sizeof(exi->queue[0]) * exi->items);
		}
		unlockedCallback(chan, 0);
	}

	OSRestoreInterrupts(enabled);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800E1140
 * Size:	000018
 */
u32 EXIGetState(s32 chan)
{
	EXIControl* exi = &Ecb[chan];

	return (u32)exi->state;
}

/*
 * --INFO--
 * Address:	800E1158
 * Size:	000028
 */
static void UnlockedHandler(s32 chan, OSContext* context)
{
	u32 id;

	EXIGetID(chan, 0, &id);
}

/*
 * --INFO--
 * Address:	800E1180
 * Size:	0003B0
 */
s32 EXIGetID(s32 chan, u32 dev, u32* id)
{
	EXIControl* exi = &Ecb[chan];
	BOOL err;
	u32 cmd;
	s32 startTime;
	BOOL enabled;

	if (chan < 2 && dev == 0) {
		if (!__EXIProbe(chan)) {
			return 0;
		}

		if (exi->idTime == __EXIProbeStartTime[chan]) {
			*id = exi->id;
			return exi->idTime;
		}

		if (!__EXIAttach(chan, NULL)) {
			return 0;
		}

		startTime = __EXIProbeStartTime[chan];
	}

	err = !EXILock(chan, dev, (chan < 2 && dev == 0) ? UnlockedHandler : NULL);
	if (!err) {
		err = !EXISelect(chan, dev, EXI_FREQ_1M);
		if (!err) {
			cmd = 0;
			err |= !EXIImm(chan, &cmd, 2, EXI_WRITE, NULL);
			err |= !EXISync(chan);
			err |= !EXIImm(chan, id, 4, EXI_READ, NULL);
			err |= !EXISync(chan);
			err |= !EXIDeselect(chan);
		}
		EXIUnlock(chan);
	}

	if (chan < 2 && dev == 0) {
		EXIDetach(chan);
		enabled = OSDisableInterrupts();
		err |= (startTime != __EXIProbeStartTime[chan]);
		if (!err) {
			exi->id     = *id;
			exi->idTime = startTime;
		}
		OSRestoreInterrupts(enabled);

		return err ? 0 : exi->idTime;
	}

	return err ? 0 : !0;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x48(r1)
	  stmw      r23, 0x24(r1)
	  mr.       r25, r3
	  addi      r26, r4, 0
	  addi      r27, r5, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  bne-      .loc_0x50
	  cmplwi    r26, 0x2
	  bne-      .loc_0x50
	  lwz       r0, -0x7170(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  stw       r0, 0x0(r27)
	  li        r3, 0x1
	  b         .loc_0x39C

	.loc_0x50:
	  cmpwi     r25, 0x2
	  bge-      .loc_0x134
	  cmplwi    r26, 0
	  bne-      .loc_0x134
	  mr        r3, r25
	  bl        -0xEA4
	  cmpwi     r3, 0
	  bne-      .loc_0x78
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x78:
	  lwz       r4, 0x20(r31)
	  rlwinm    r0,r25,2,0,29
	  lis       r3, 0x8000
	  addi      r30, r3, 0x30C0
	  add       r30, r30, r0
	  lwz       r0, 0x0(r30)
	  cmpw      r4, r0
	  bne-      .loc_0xA8
	  lwz       r0, 0x1C(r31)
	  stw       r0, 0x0(r27)
	  lwz       r3, 0x20(r31)
	  b         .loc_0x39C

	.loc_0xA8:
	  bl        0xDA10
	  mr        r28, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0xCC
	  mr        r3, r25
	  bl        -0xF00
	  cmpwi     r3, 0
	  bne-      .loc_0xDC

	.loc_0xCC:
	  mr        r3, r28
	  bl        0xDA10
	  li        r0, 0
	  b         .loc_0x120

	.loc_0xDC:
	  addi      r3, r25, 0
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0
	  bl        -0xFF0
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  lis       r3, 0x10
	  mulli     r0, r25, 0x3
	  srw       r3, r3, r0
	  bl        0xDE04
	  lwz       r0, 0xC(r31)
	  ori       r0, r0, 0x8
	  stw       r0, 0xC(r31)
	  mr        r3, r28
	  bl        0xD9C8
	  li        r0, 0x1

	.loc_0x120:
	  cmpwi     r0, 0
	  bne-      .loc_0x130
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x130:
	  lwz       r29, 0x0(r30)

	.loc_0x134:
	  bl        0xD984
	  addi      r28, r3, 0
	  li        r0, 0
	  cmpwi     r25, 0x2
	  bge-      .loc_0x154
	  cmplwi    r26, 0
	  bne-      .loc_0x154
	  li        r0, 0x1

	.loc_0x154:
	  cmpwi     r0, 0
	  beq-      .loc_0x168
	  lis       r3, 0x800E
	  addi      r5, r3, 0x1158
	  b         .loc_0x16C

	.loc_0x168:
	  li        r5, 0

	.loc_0x16C:
	  addi      r3, r25, 0
	  addi      r4, r26, 0
	  bl        -0x384
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  mr.       r30, r0
	  bne-      .loc_0x2B8
	  addi      r3, r25, 0
	  addi      r4, r26, 0
	  li        r5, 0
	  bl        -0xB64
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  mr.       r30, r0
	  bne-      .loc_0x234
	  li        r0, 0
	  stw       r0, 0x1C(r1)
	  addi      r3, r25, 0
	  addi      r4, r1, 0x1C
	  li        r5, 0x2
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x16FC
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  bl        -0x1328
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  addi      r4, r27, 0
	  li        r5, 0x4
	  li        r6, 0
	  li        r7, 0
	  bl        -0x1734
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  bl        -0x1360
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  bl        -0xAC8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0

	.loc_0x234:
	  bl        0xD884
	  mr        r23, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x254
	  mr        r3, r23
	  bl        0xD894
	  b         .loc_0x2B8

	.loc_0x254:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0xC(r31)
	  addi      r3, r25, 0
	  addi      r4, r31, 0
	  bl        -0x1894
	  lwz       r3, 0x24(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0x2B0
	  lwz       r24, 0x2C(r31)
	  subic.    r0, r3, 0x1
	  stw       r0, 0x24(r31)
	  ble-      .loc_0x29C
	  addi      r3, r31, 0x28
	  addi      r4, r31, 0x30
	  lwz       r0, 0x24(r31)
	  rlwinm    r5,r0,3,0,28
	  bl        -0x1A38C

	.loc_0x29C:
	  addi      r3, r25, 0
	  li        r4, 0
	  addi      r12, r24, 0
	  mtlr      r12
	  blrl

	.loc_0x2B0:
	  mr        r3, r23
	  bl        0xD82C

	.loc_0x2B8:
	  mr        r3, r28
	  bl        0xD824
	  cmpwi     r25, 0x2
	  bge-      .loc_0x388
	  cmplwi    r26, 0
	  bne-      .loc_0x388
	  bl        0xD7E8
	  mr        r23, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x2F0
	  mr        r3, r23
	  bl        0xD7F8
	  b         .loc_0x338

	.loc_0x2F0:
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x314
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  mr        r3, r23
	  bl        0xD7D4
	  b         .loc_0x338

	.loc_0x314:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r31)
	  lis       r3, 0x50
	  mulli     r0, r25, 0x3
	  srw       r3, r3, r0
	  bl        0xDB54
	  mr        r3, r23
	  bl        0xD7AC

	.loc_0x338:
	  bl        0xD780
	  rlwinm    r0,r25,2,0,29
	  lis       r4, 0x8000
	  addi      r4, r4, 0x30C0
	  lwzx      r0, r4, r0
	  sub       r4, r0, r29
	  subic     r0, r4, 0x1
	  subfe     r0, r0, r4
	  or.       r30, r30, r0
	  bne-      .loc_0x36C
	  lwz       r0, 0x0(r27)
	  stw       r0, 0x1C(r31)
	  stw       r29, 0x20(r31)

	.loc_0x36C:
	  bl        0xD774
	  cmpwi     r30, 0
	  beq-      .loc_0x380
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x380:
	  lwz       r3, 0x20(r31)
	  b         .loc_0x39C

	.loc_0x388:
	  cmpwi     r30, 0
	  beq-      .loc_0x398
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x398:
	  li        r3, 0x1

	.loc_0x39C:
	  lwz       r0, 0x4C(r1)
	  lmw       r23, 0x24(r1)
	  addi      r1, r1, 0x48
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000234
 */
char* EXIGetTypeString(u32 type)
{
	switch (type) {
	case EXI_MEMORY_CARD_59:
		return "Memory Card 59";
	case EXI_MEMORY_CARD_123:
		return "Memory Card 123";
	case EXI_MEMORY_CARD_251:
		return "Memory Card 251";
	case EXI_MEMORY_CARD_507:
		return "Memory Card 507";
	case EXI_MEMORY_CARD_1019:
		return "Memory Card 1019";
	case EXI_MEMORY_CARD_2043:
		return "Memory Card 2043";
	case EXI_USB_ADAPTER:
		return "USB Adapter";
	case 0x80000000 | EXI_MEMORY_CARD_59:
	case 0x80000000 | EXI_MEMORY_CARD_123:
	case 0x80000000 | EXI_MEMORY_CARD_251:
	case 0x80000000 | EXI_MEMORY_CARD_507:
		return "Net Card";
	case EXI_ETHER_VIEWER:
		return "Artist Ether";
	case EXI_MODEM:
		return "Broadband Adapter";
	case EXI_STREAM_HANGER:
		return "Stream Hanger";
	case EXI_IS_VIEWER:
		return "IS-DOL-VIEWER";
	}
}

#pragma scheduling reset
