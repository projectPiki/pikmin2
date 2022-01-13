#include "types.h"
#include "Dolphin/OS.h"
#include "Dolphin/vi.h"
extern u32 SISetXY(int param_1, int param_2);

struct tvformat {
	u16 tv_short;
	u8 tv_byte;
};

u16 DAT_CC00206C : 0xCC00206C;
static u32 SamplingRate;
static struct tvformat XYNTSC[12] = { 0x00F6, 0x02, 0x000F, 0x12, 0x001E, 0x09, 0x002C, 0x06, 0x0034, 0x05, 0x0041, 0x04,
	                                  0x0057, 0x03, 0x0057, 0x03, 0x0057, 0x03, 0x0083, 0x02, 0x0083, 0x02, 0x0083, 0x02 };
static struct tvformat XYPAL[12]  = { 0x0128, 0x02, 0x000F, 0x15, 0x001D, 0x0B, 0x002D, 0x07, 0x0034, 0x06, 0x003F, 0x05,
                                     0x004E, 0x04, 0x0068, 0x03, 0x0068, 0x03, 0x0068, 0x03, 0x0068, 0x03, 0x009C, 0x02 };

/*
 * --INFO--
 * Address:	800F675C
 * Size:	0000E4
 * Requires frank.py
 */
void SISetSamplingRate(u32 samplerate)
{
	int r30;

	u16 uVar1;
	int iVar2;
	struct tvformat* pauVar4; // r4

	if (11 < samplerate) {
		samplerate = 11;
	}
	r30          = OSDisableInterrupts();
	SamplingRate = samplerate;

	switch (VIGetTvFormat()) {
	case 0:
	case 2:
	case 5:
		pauVar4 = XYNTSC;
		break;
	case 1:
		pauVar4 = XYPAL;
		break;
	default:
		OSReport("SISetSamplingRate: unknown TV format. Use default.");
		samplerate = 0;
		pauVar4    = XYNTSC;
		break;
	}
	uVar1 = (DAT_CC00206C);
	if ((uVar1 & 1) != 0) {
		iVar2 = 2;
	} else {
		iVar2 = 1;
	}
	SISetXY(iVar2 * pauVar4[samplerate].tv_short, pauVar4[samplerate].tv_byte);
	OSRestoreInterrupts(r30);
}

/*
 * --INFO--
 * Address:	800F6840
 * Size:	000024
 */
void SIRefreshSamplingRate(void) { SISetSamplingRate(SamplingRate); }
